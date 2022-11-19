#!/usr/bin/env python3
from slugify import slugify
import copy
from tree_sitter import Language, Parser
from collections import defaultdict
from pathlib import Path
import re
from .CCode import CCode
import os

see_test_lib_path = Path(__loader__.path).resolve().parents[0]
ts_st_path = see_test_lib_path / "tree-sitter-cmut"
ts_st_path.resolve()
st_so_path = ts_st_path / "build/see-test-lang.so"
st_so_path.resolve()

Language.build_library(st_so_path, [ts_st_path])

CMUT_LANGUAGE = Language(st_so_path, "cmut")

parser = Parser()
parser.set_language(CMUT_LANGUAGE)

node_type_to_c_var_conf = {
    "string": {"c_type": "char", "arr_dim": 1, "name": "str"},
    "number": {"c_type": "int", "name": "nbr"},
    "char": {"c_type": "int", "name": "char"},
}

node_type_to_c_var_conf.setdefault("ptr_count", 0)
node_type_to_c_var_conf.setdefault("arr_dim", 0)

c = CCode()


class VarsCounter:
    def __init__(self):
        self.var_types_count = {}

    # Create or increment the counter for the given type and return the index
    def add_var(self, var_type):
        # TODO self.var_types_count[c_type] can be stored in a var ?
        if var_type in self.var_types_count:
            self.var_types_count[var_type] += 1
        else:
            # TODO rename to index
            self.var_types_count[var_type] = 0
        return self.var_types_count[var_type]


class VarsBlock:
    def __init__(self, var_counter):
        self.var_counter = var_counter
        self.body = []

    def add(self, var_conf, value, basename=""):
        # TODO if not c_type throw unknown c type
        # c_type, is_array, name, ptr_count = var_conf
        c_type = var_conf["c_type"]
        name = var_conf["name"]
        ptr_count = var_conf.get("ptr_count", 0)
        arr_dim = var_conf.get("arr_dim", 0)
        var_basename = basename or c.var_ptrarr_name(
            name, ptr_count=ptr_count, arr_dim=arr_dim
        )
        # TODO rename
        type_idx = self.var_counter.add_var(var_basename)
        var_name = f"{var_basename}{type_idx}"
        assignement_str = c.var_assignement(
            c_type, var_name, value, ptr_count=ptr_count, arr_dim=arr_dim
        )
        self.body.append(assignement_str)
        return (var_name, var_basename)

    def __str__(self):
        return "\n".join(self.body)


class TestCallExpression:
    def __init__(self, node, vars_counter, get_node_text, path, function_aliases):
        self.function_aliases = function_aliases
        self.get_node_text = get_node_text
        self.vars_block = VarsBlock(vars_counter)
        self.body = []
        self.make = {
            "expectation": self.to_expectation,
            "array": self.to_array,
            "string": self.to_ptr,
            "struct": self.to_struct,
            "number": self.to_primitive,
            "char": self.to_primitive,
            "varname": self.to_value,
            "null": self.to_value,
            "ERROR": self.to_error,
        }
        self.path = path
        self.add_call_expression_from_node(node)

    def __str__(self):
        vars_str = str(self.vars_block)
        if vars_str:
            self.body.insert(0, vars_str)
        return "\n\n".join(self.body)

    def stack(self, node):
        return self.make[node.type](node)

    def to_value(self, node):
        value = self.get_node_text(node)
        return [((value), "", {})]

    def to_error(self, node):
        return [("ERROR", "ERROR", {})]

    def to_struct(self, node):
        return [("NOT IMPLEMENTED", "NOT IMPLEMENTED", {})]

    def to_ptr(self, node):
        var_conf = node_type_to_c_var_conf[node.type]
        value = self.get_node_text(node)
        var_name, basename = self.vars_block.add(var_conf, value)
        return [(var_name, basename, var_conf)]

    def to_primitive(self, node):
        var_conf = node_type_to_c_var_conf[node.type]
        return [(self.get_node_text(node), var_conf["name"], var_conf)]

    def to_array(self, node):
        # TODO simplify this hell
        items = map(self.stack, node.named_children)
        # [[1], [2, 3], [4, 5, 6]] => [(1, []), (2, [3]), (4, [5, 6])]
        items = [(item[0], item[1:]) for item in items]
        # [(1, []), (2, [3]), (4, [5, 6])] => ([1, 2, 3], [[], [3], [5, 6]])
        args_conf, assertions_nested = zip(*items)
        # [[], [3], [5, 6]] => [3, 5, 6]
        assertions = [item for sublist in assertions_nested for item in sublist]

        # TODO check all varname equal
        varname0, basename0, var_conf0 = args_conf[0]

        args = map(lambda arg_conf: f"{arg_conf[0]}", args_conf)
        array_str = c.array(args)

        vc0ptr_count = var_conf0.get("ptr_count") or 0
        vc0arr_dim = var_conf0.get("arr_dim") or 0
        ptr_count = vc0ptr_count + vc0arr_dim

        var_conf = {
            "c_type": var_conf0["c_type"],
            "ptr_count": ptr_count,
            "arr_dim": 1,
            "name": var_conf0["name"],
        }
        basename = basename0 + "_arr"
        array_def = self.vars_block.add(var_conf, array_str, basename)

        return [(array_def[0], basename, var_conf), *assertions]

    def to_expectation(self, node):
        input_node, expect_node = node.named_children
        input_def, *assertions = self.stack(input_node)
        input_var_name = input_def[0]
        expect_var_def, *_ = self.stack(
            expect_node
        )  # TODO add expect prefix in var name ?
        expect_var_name = expect_var_def[0]
        assert_expect_str = self.get_eq_assertion_str(
            input_var_name, expect_var_name, expect_node.type
        )
        return [input_def, *assertions, assert_expect_str]

    def wrap_output_text(self, expect_output_text, fn_call_str):
        output_var = "output" + str(self.vars_block.var_counter.add_var("output"))
        errput_var = "input" + str(self.vars_block.var_counter.add_var("errput"))
        self.body.append(f"CAPTURE_STDOUT_START")
        self.body.append(fn_call_str)
        test_str = self.test_str
        # TODO avoid this hack
        test_str = re.sub(r'\s?=> \\".*\\"','',self.test_str)
        test_str = re.sub(r'\s?=> [\d]+','',test_str)
        # TODO avoid this parameter hell
        self.body.append(c.fcall('ASSERT_STDOUT', [expect_output_text, test_str, self.relpath, self.line, self.charet])+';')
        #  self.body.append('CAPTURE_STDOUT_STOP')
        #  self.body.append(c.fcall('ASSERT_EQL', [expect_output_text, 'stdout_buffer', self.test_str, self.relpath, self.line, self.charet])+';')

    def add_call_expression_from_node(self, node):
        name_node = node.child_by_field_name("name")
        args_node = node.child_by_field_name("arguments")
        expect_return_node = node.child_by_field_name("return")
        expect_output_node = node.child_by_field_name("output")
        expect_output_text = (
            self.get_node_text(expect_output_node) if expect_output_node else None
        )
        arg_names = []
        expect_assertions = []
        fn_name = self.get_node_text(name_node)

        real_fn_name = self.function_aliases.get(fn_name, fn_name) 
        test_str = self.get_node_text(node).replace('"','\\"') # TODO resolve values when possible
        # replace the alias name with the real fn name 
        re.sub(r".+\(", real_fn_name + '(', test_str, count=1)
        line, charet = node.start_point
        self.test_str='"'+test_str+'"'
        self.relpath = '"'+os.path.relpath(self.path)+'"'
        self.line = line;
        self.charet = charet;

        for arg_node in args_node.named_children:
            arg_def, *arg_expect_assertions = self.stack(arg_node)
            expect_assertions += arg_expect_assertions
            arg_names.append(f"{arg_def[0]}")

        fcall_str = c.fcall(real_fn_name, arg_names)


        if expect_return_node:
            expect_return_text = self.get_node_text(expect_return_node)
            fcall_str = self.get_eq_assertion_str(
                fcall_str, expect_return_text, expect_return_node.type
            )
        else :
            fcall_str += ';'
            

        if expect_output_text != None:
            self.wrap_output_text(expect_output_text, fcall_str)
        else:
            self.body.append(fcall_str)

        self.body += expect_assertions

    def get_eq_assertion_str(self, a, b, node_type):
        # TODO This is a hack, find a better way to do it
        test_str = self.test_str
        test_str = re.sub(r'>> \\".*\\"','',self.test_str)
        # TODO avoid this parameter hell
        return str(c.fcall("ASSERT_EQ", [a, b, test_str, self.relpath, self.line, self.charet]) + ";")


def format_c_code_block(str):
    # HACK The grammar doesn't remove the final extra \n
    if str[-1] == "\n":
        str = str[:-1]
    str = c.ident_paragraph(str, "   ")
    return str


class TestSubgroupTS:
    def __init__(
        self, node, get_node_text, path, function_aliases={}, vars_counter=VarsCounter(), prefix = ''
    ):  
        self.get_node_text = get_node_text
        self.function_aliases = copy.deepcopy(function_aliases)
        name_node, *child_nodes = node.children
        name = self.get_node_text(name_node);
        self.body = []

        skip = name[0] == "@";
        # TODO handle this in the grammar
        if skip:
            name = name[1:]
        self.prefix = prefix
        self.name = slugify(
            name, separator="_", max_length=100, lowercase=True
        )
        self.fn_name = prefix + self.name
        self.body.append(f'TEST_START("{name}")')
        if skip:
            self.body.append( 'SKIP')


        for child_node in child_nodes:
            if child_node.type == "c_code":
                c_code_block = self.get_node_text(child_node)
                c_code_block = format_c_code_block(c_code_block)
                self.body.append(c_code_block)
            elif child_node.type == "call_expression":
                self.body.append(
                    TestCallExpression(
                        child_node, vars_counter, self.get_node_text, path, function_aliases
                    )
                )
            elif child_node.type == "function_alias_definition":
                alias_name_node = child_node.child_by_field_name("alias_name")
                function_name_node = child_node.child_by_field_name("function_name")
                alias_name = self.get_node_text(alias_name_node)
                function_name = self.get_node_text(function_name_node)
                self.function_aliases[alias_name] = function_name
                self.body.append(
                    c.comment(f"Subgroup scope alias: {alias_name} -> {function_name}")
                )

        self.body.append('TEST_END')

    def __str__(self):
        return c.fdef(
            f"static test_list_t* {self.fn_name}()", "\n\n".join(map(str, self.body))
        )


# class TestGroupTS:
#    def __init__(self, group_node, get_node_text):
#        self.get_node_text = get_node_text
#        group_name_node, *child_nodes = group_node.children
#        group_name = self.get_node_text(group_name_node)
#        self.slug = slugify(group_name, separator="_", max_length=100, lowercase=True)
#        vars_counter = VarsCounter()
#        self.body = []
#        function_aliases = {}
#        for child_node in child_nodes:
#            if child_node.type == "c_code":
#                c_code_block = self.get_node_text(child_node)
#                c_code_block = format_c_code_block(c_code_block)
#                self.body.append(c_code_block)
#            elif child_node.type == "subgroup":
#                self.body.append(
#                    TestSubgroupTS(
#                        child_node,
#                        vars_counter,
#                        self.get_node_text,
#                        copy.deepcopy(function_aliases),
#                    )
#                )
#            elif child_node.type == "function_alias_definition":
#                alias_name_node = child_node.child_by_field_name("alias_name")
#                function_name_node = child_node.child_by_field_name("function_name")
#                alias_name = self.get_node_text(alias_name_node)
#                function_name = self.get_node_text(function_name_node)
#                function_aliases[alias_name] = function_name
#                self.body.append(
#                    c.comment(f"Group scope alias: {alias_name} -> {function_name}")
#                )
#
#    def __str__(self):
#        # HERE
#        #return c.function("TEST", self.slug, "\n" + "\n\n".join(map(str, self.body)))
#        return


class TestFile:
    def __init__(self, source_code_bytes, path):
        self.src = source_code_bytes
        tree = parser.parse(self.read_callable)
        # TODO split parser + root node generation in different function
        self.root_node = tree.root_node
        # print(self.root_node.sexp())
        nodes = self.root_node.children
        #self.includes_str = self.get_node_text(includes_node)
        self.groups = []
        self.function_aliases = {}
        self.header = []
        # TODO factorize slugify function which is used many time with the name params
        self.name = slugify(
            path.stem, separator="_", max_length=100, lowercase=True
        )
        i = 0

        for node in nodes:
            if node.type == "c_code":
                self.header.append(self.get_node_text(node))
            if node.type == "subgroup":
                self.groups.append(TestSubgroupTS(node, self.get_node_text, path, self.function_aliases, prefix = f"{self.name}_{i}_"))
            elif node.type == 'function_alias_definition':
                alias_name_node = node.child_by_field_name("alias_name")
                function_name_node = node.child_by_field_name("function_name")
                alias_name = self.get_node_text(alias_name_node)
                function_name = self.get_node_text(function_name_node)
                self.function_aliases[alias_name] = function_name
                self.header.append(
                    c.comment(f"Main scope alias: {alias_name} -> {function_name}")
                )
            i = i+1

        # self.body = [includes_str] + selfgroups

    def read_callable(self, byte_offset, point):
        return self.src[byte_offset : byte_offset + 1]

    def get_node_text(self, node):
        # TODO how to use arg_node.text ?
        return self.src[node.start_byte : node.end_byte].decode("utf8")

    def __str__(self):
        return (
            '\n'.join(self.header) + '\n\n'
            + "\n\n".join(map(str, self.groups))
            + "\n\n"
            + self.main_str()
        )  # = "\n".join(map(str, self.body))

    def main_str(self):
        test_fn_list = self.get_test_fn()
        push_test_fn = [f'test_fn_list = push_test_fn(test_fn_list, {test_fn});' for test_fn in test_fn_list]
        push_test_fn_str = '\n'.join(push_test_fn)

        test_fn_str = 'test_fn_list_t *test_file__'+self.name+"""() {
        test_fn_list_t *test_fn_list = NULL;
        """+push_test_fn_str+"""
    return test_fn_list;
  }"""
        return test_fn_str;
        #  test_fn_list = ",\n".join(self.get_test_fn())
#
        #  test_fn_str = 'test_fn_list_t *test_file__'+self.name+"""() {
#
    #  test_fn_list_t *tests_fn_list = create_test_fn_list(0, """+test_fn_list+""", NULL);
    #  return tests_fn_list;
  #  }"""
        #  return test_fn_str;

        #return f'REGISTER_TEST_FILE({self.name}, {test_fn_list})'

        #  return (
            #  """int main(void) {
        #  """
            #  + "test_fn_t fns[] = {" + ",\n".join(self.get_test_fn()) + "\n, NULL\n};"
            #  + """
            #  execute_tests(fns);
#  }"""
        #  )

    def get_test_fn(self):
        return map(lambda group: group.fn_name, self.groups)
#    def cmocka_main_str(self):
#        return (
#            """int main(void) {
#    const struct CMUnitTest tests[] = {
#        """
#            + "\n        ".join(self.get_cmocka_unit_tests())
#            + """
#    };
#    return cmocka_run_group_tests(tests, NULL, NULL);
#}"""
#        )
#
#    def get_cmocka_unit_tests(self):
#        return map(lambda group: f"cmocka_unit_test({group.name}),", self.groups)


def transpile_cmut_file(path):
    # Read as binary
    with open(path, "rb") as in_file:
        source_code_bytes = in_file.read()
        in_file.close()
        cmut_str = str(TestFile(source_code_bytes, path))
    return cmut_str


def generate_cmut_file(path_in, path_out, path_shift=None):
    cmut_str = transpile_cmut_file(path_in)
    if path_shift:
        # For example with path_shit="../../"
        #      #include "my_import.h"
        #   => #include "../../my_import.h"
        cmut_str = re.sub(r'([\s]*#[\s]*include[\s]*")', rf"\1{path_shift}/", cmut_str)
    # HERE
    # test_framework_includes = '#include "nala.h"\n'
    test_framework_includes = """#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>
#include <string.h>
#include <stdlib.h>

#include "capture_macro.h"
#include "auto_assert.h"
#include "catch_segfault.h"

INIT_EXCEPTION
CAPTURE_INIT_EXTERN
"""
    # TODO what's the best way to do it ?
    cmut_str = test_framework_includes + cmut_str

    with open(path_out, "w") as out_file:
        out_file.write(cmut_str)
        out_file.close()
