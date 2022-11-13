class CCode:
    def comment(self, text):
        return "/* " + text + " */"

    def array(self, items):
        return "{" + self.comma_list(items) + "}"

    def function(self, name, args, body, indentation="    "):
        return """{name}({args}) {{
{idented_body}
}}
""".format(
            name=name, args=args, idented_body=self.ident_paragraph(body, indentation)
        )

    def fdef(self, prototype, body):
        return prototype + " {\n" + self.ident_paragraph(body, "    ") + "\n}"

    def fcall(self, name, args):
        return f"{name}({self.comma_list(args)})"

    def comma_list(self, items):
        return ", ".join(map(str, items))

    def ident_paragraph(self, paragraph, identation):
        return identation + paragraph.replace("\n", "\n" + identation).replace(
            "\n" + identation + "\n", "\n\n"
        )  # TODO optimisation

    def var_assignement(self, type, name, value, ptr_count=0, arr_dim=0):
        ptr_str = "*" * ptr_count if ptr_count else ""
        arr_str = "[]" * arr_dim if arr_dim else ""
        return f"{type} {ptr_str}{name}{arr_str} = {value};"

    def var_ptrarr_name(self, name, ptr_count=0, arr_dim=0):
        var_name = name
        var_name += "_ptr" * ptr_count
        arr_suffix_count = arr_dim
        if name == "str":
            arr_suffix_count -= 1
        var_name += "_arr" * arr_suffix_count
        return var_name
