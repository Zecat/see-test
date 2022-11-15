import shutil
from subprocess import run
from pathlib import Path
from .Conf import Conf
from typing import Optional
from slugify import slugify

WARN_AUTO_GENERATED_FILE = (
    "This is an auto generated file, any manual change could be lost."
)


class CmockaTester:
    def __init__(self, conf: Conf) -> None:
        self.conf = conf

    def run(self, live_reload: Optional[bool] = False) -> None:
        cmd = [
            "make",
            "--silent",
            "--directory",
            self.conf.test_dirpath,
            "test",
        ]  # TODO test_dir asbolute or relative to where the script is launched
        if live_reload:
            cmd.append("auto")

        run(cmd)

    def get_template_dir(self) -> Path:
        return (Path(__loader__.path) / "../../../templates/cmocka").resolve()

    def get_cexception_dir(self) -> Path:
        return (Path(__loader__.path) / "../../../templates/cmocka/cexception/lib").resolve()

    def init(self) -> None:
        test_dirpath = self.conf.test_dirpath
        if not test_dirpath.exists():
            Path.mkdir(test_dirpath)
        shutil.copy(self.get_template_dir() / "test.mk", test_dirpath / "test.mk")
        shutil.copy(
            self.get_template_dir() / "capture_macro.h",
            test_dirpath / "capture_macro.h",
        )
        shutil.copy(
            self.get_template_dir() / "assertion.c",
            test_dirpath / "assertion.c",
        )
        shutil.copy(
            self.get_template_dir() / "assertion.h",
            test_dirpath / "assertion.h",
        )
        shutil.copy(
            self.get_template_dir() / "auto_assert.c",
            test_dirpath / "auto_assert.c",
        )
        shutil.copy(
            self.get_template_dir() / "auto_assert.h",
            test_dirpath / "auto_assert.h",
        )
        shutil.copy(
            self.get_template_dir() / "catch_segfault.h",
            test_dirpath / "catch_segfault.h",
        )
        self.update()

    def update(self) -> None:
        header_path = self.conf.test_dirpath / "test_files.h"
        mode = "w" if header_path.exists() else "x"
        with open(header_path, mode) as header_file:
            content = ['test_fn_list_t *test_file__'+slugify(str(src.stem)) + '(void);' for src in self.conf.test_src]
            header_file.write('\n'.join(content)+'\n')

        main_path = self.conf.test_dirpath / "main.c"
        mode = "w" if main_path.exists() else "x"
        with open(main_path, mode) as main_file:
            # TODO cleanup
            main_file.write(f"// {WARN_AUTO_GENERATED_FILE}\n\n")
            #includes = ['#include "'+str(self.conf.get_path_relative_to_testdir(self.conf.get_transpiled_path(src)))+'"' for src in self.conf.test_src]
            #includes_str = '\n'.join(includes)

            test_execution = ["execute_tests(test_file__"+slugify(str(src.stem), separator="_", max_length=100, lowercase=True)+"());" for src in self.conf.test_src]
            #test_execution = ["EXECUTE_TESTS(test_file__"+slugify(str(src.stem), separator="_", max_length=100, lowercase=True)+")" for src in self.conf.test_src]
            test_execution_str = '\n'.join(test_execution)
            # TODO add see-test includes
            main_str = """#include "auto_assert.h" 
#include "test_files.h"
#include "capture_macro.h"

CAPTURE_INIT

int main(void) {
  """+ test_execution_str + """
}"""
            main_file.write(main_str)


        makefile_path = self.conf.test_dirpath / "Makefile"
        mode = "w" if makefile_path.exists() else "x"
        with open(makefile_path, mode) as makefile_file:
            makefile_file.write(f"# {WARN_AUTO_GENERATED_FILE}\n\n")
            # TODO cleanup code
            body = [
                "".join(
                    map(lambda t: f"TESTS += {t}\n", self.conf.transpile_filenames)
                ),
                "".join(map(lambda s: f"SRC += {s}\n", self.conf.c_src)),
                "LDFLAGS += -L. \n",
                "".join(map(lambda l: f"LDLIBS += -l{l}\n", self.conf.lib)),
                # TODO add -.L "test_dir_shift"
            ]
            body_str = "\n".join(body)
            makefile_file.write(body_str)
            makefile_file.write("\ninclude test.mk\n")
