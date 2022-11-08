#!/usr/bin/env python3
from slugify import slugify
import copy
from tree_sitter import Language, Parser
from collections import defaultdict
from pathlib import Path
import re
from .CCode import CCode

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

node_type_to_cmocka_assert_fn = {
    "string": lambda a, b: str(c.fcall("assert_string_equal", [a, b]) + ";"),
    "number": lambda a, b: str(c.fcall("assert_int_equal", [a, b]) + ";"),
    "char": lambda a, b: str(c.fcall("assert_memory_equal", [a, b, 1]) + ";"),
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
    def __init__(self, node, vars_counter, get_node_text, function_aliases):
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
            "varname": self.to_varname,
            "ERROR": self.to_error,
        }
        self.add_call_expression_from_node(node)

    def __str__(self):
        vars_str = str(self.vars_block)
        if vars_str:
            self.body.insert(0, vars_str)
        return "\n\n".join(self.body)

    def stack(self, node):
        return self.make[node.type](node)

    def to_varname(self, node):
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
        # HERE
        ouput_assertion_str = self.get_eq_assertion_str(
            "stdout_buffer", expect_output_text, "string"
        )
        # HERE
        # self.body.append(f"CAPTURE_OUTPUT({output_var}, {errput_var})" + " {")
        # self.body.append("    "+fn_call_str)
        self.body.append("CAPTURE_STDOUT_START")
        self.body.append(fn_call_str)
        self.body.append("CAPTURE_STDOUT_STOP")
        # HERE
        # self.body.append("}\n\n" + ouput_assertion_str)
        self.body.append(ouput_assertion_str)

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

        for arg_node in args_node.named_children:
            arg_def, *arg_expect_assertions = self.stack(arg_node)
            expect_assertions += arg_expect_assertions
            arg_names.append(f"{arg_def[0]}")

        fcall_str = c.fcall(self.function_aliases.get(fn_name, fn_name), arg_names)

        if expect_return_node:
            expect_return_text = self.get_node_text(expect_return_node)
            fn_assertion_str = self.get_eq_assertion_str(
                fcall_str, expect_return_text, expect_return_node.type
            )
            fn_call_str = fn_assertion_str
        else:
            fn_call_str = fcall_str + ";"

        if expect_output_text != None:
            self.wrap_output_text(expect_output_text, fn_call_str)
        else:
            self.body.append(fn_call_str)

        self.body += expect_assertions

    # HERE
    def get_eq_assertion_str(self, a, b, node_type):
        return node_type_to_cmocka_assert_fn[node_type](a, b)
        # return str(c.fcall("ASSERT_EQ", [a, b]) + ";")


def format_c_code_block(str):
    # HACK The grammar doesn't remove the final extra \n
    if str[-1] == "\n":
        str = str[:-1]
    str = c.ident_paragraph(str, "   ")
    return str


class TestSubgroupTS:
    def __init__(
        self, node, get_node_text, function_aliases={}, vars_counter=VarsCounter()
    ):  # TODO cleanup function_aliases & vars_counter
        self.get_node_text = get_node_text
        self.function_aliases = copy.deepcopy(function_aliases)
        name_node, *child_nodes = node.children
        self.name = slugify(
            self.get_node_text(name_node), separator="_", max_length=100, lowercase=True
        )
        self.body = []
        # self.body.append(c.comment("---- " + self.name + " ----"))
        is_not_implemented = self.name[0] == "@"
        # HERE
        if is_not_implemented:
            self.body.append( 'skip();')
            #  self.body.append(
            #  f'printf("\033[1;33mIGNORED\033[m%s\\n", "{self.name[1:]}");'
            #  )

        for child_node in child_nodes:
            if child_node.type == "c_code":
                c_code_block = self.get_node_text(child_node)
                c_code_block = format_c_code_block(c_code_block)
                self.body.append(c_code_block)
            elif child_node.type == "call_expression":
                self.body.append(c.comment(self.get_node_text(child_node)))
                self.body.append(
                    TestCallExpression(
                        child_node, vars_counter, self.get_node_text, function_aliases
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

        #  if not is_not_implemented:
        # HERE
        # self.body.append(f'printf("\033[33m%s: PASS\033[m\\n", "{self.name}");')

    def __str__(self):
        self.body.append("(void) state;")
        return c.fdef(
            f"static void {self.name}(void **state)", "\n\n".join(map(str, self.body))
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
    def __init__(self, source_code_bytes):
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

        for node in nodes:
            if node.type == "c_code":
                self.header.append(self.get_node_text(node))
            if node.type == "subgroup":
                self.groups.append(TestSubgroupTS(node, self.get_node_text, self.function_aliases))
            elif node.type == 'function_alias_definition':
                alias_name_node = node.child_by_field_name("alias_name")
                function_name_node = node.child_by_field_name("function_name")
                alias_name = self.get_node_text(alias_name_node)
                function_name = self.get_node_text(function_name_node)
                self.function_aliases[alias_name] = function_name
                self.header.append(
                    c.comment(f"Main scope alias: {alias_name} -> {function_name}")
                )

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
            + self.cmocka_main_str()
        )  # = "\n".join(map(str, self.body))

    def cmocka_main_str(self):
        return (
            """int main(void) {
    const struct CMUnitTest tests[] = {
        """
            + "\n        ".join(self.get_cmocka_unit_tests())
            + """
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}"""
        )

    def get_cmocka_unit_tests(self):
        return map(lambda group: f"cmocka_unit_test({group.name}),", self.groups)


def transpile_cmut_file(path):
    # Read as binary
    with open(path, "rb") as in_file:
        source_code_bytes = in_file.read()
        in_file.close()
        cmut_str = str(TestFile(source_code_bytes))
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

#include "capture_macro.h"

CAPTURE_INIT

"""
    # TODO what's the best way to do it ?
    cmut_str = test_framework_includes + cmut_str

    with open(path_out, "w") as out_file:
        out_file.write(cmut_str)
        out_file.close()
