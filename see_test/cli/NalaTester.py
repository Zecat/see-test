import shutil
from subprocess import run
from pathlib import Path
from .Conf import Conf
from typing import Optional

WARN_AUTO_GENERATED_FILE = (
    "This is an auto generated file, any manual change could be lost."
)


class NalaTester:
    def __init__(self, conf: Conf) -> None:
        self.conf = conf

    def run(self, live_reload: Optional[bool] = False) -> None:
        cmd = [
            "make",
            "--silent",
            "--directory",
            self.conf.test_dirpath,
        ]  # TODO test_dir asbolute or relative to where the script is launched
        if live_reload:
            cmd.append("auto")

        run(cmd)

    def get_nala_mk_file(self) -> Path:
        return (Path(__loader__.path) / "../../../templates/test.mk").resolve()

    def init(self) -> None:
        test_dirpath = self.conf.test_dirpath
        if not test_dirpath.exists():
            Path.mkdir(test_dirpath)
        mk_file = test_dirpath / "test.mk"
        shutil.copy(self.get_nala_mk_file(), mk_file)
        self.update()

    def update(self) -> None:
        makefile_path = self.conf.test_dirpath / "Makefile"
        mode = "w" if makefile_path.exists() else "x"
        with open(makefile_path, mode) as makefile_file:
            makefile_file.write(f"# {WARN_AUTO_GENERATED_FILE}\n\n")
            # TODO cleanup code
            body = [
                "".join(map(lambda t: f"TESTS += {t}\n", self.conf.transpile_filenames)),
                "".join(map(lambda s: f"SRC += {s}\n", self.conf.c_src)),
                "".join(map(lambda l: f"LIB += {l}\n", self.conf.lib)),
                # TODO add -.L "test_dir_shift"
            ]
            body_str = "\n".join(body)
            makefile_file.write(body_str)
            makefile_file.write("\ninclude test.mk\n")
