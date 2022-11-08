from typing import Dict, List, Optional, Union
from pathlib import Path
import yaml
import os

# TODO update path properties on fetch instead of having many @property


class Conf:
    def __init__(self, filename) -> None:
        self.filename = filename
        self._data = {}
        self._path = self.find_conf_filepath()
        self.root = self.path.parents[0] if self.path else Path(".")
        self.fetch()

    # TODO Use defaultDict ?
    DataKeys: Dict = {
        "c_src": "c_src",
        "lib": "lib",
        "test_src": "st_src",
        "test_dir": "test_dir",
    }

    @property
    def path(self) -> Path:
        if not self._path.is_file():
            self._path = self.find_conf_filepath()
            if not self._path.is_file():
                return None
        return self._path

    # TODO Document that test_dir and test_src are relative to the configuration file, when c_src and transpiled_src src are relative to test_dir
    def update_properties(self, data: Dict) -> None:

        self.lib = data.get(Conf.DataKeys["lib"], None)
        self.test_dir = data.get(Conf.DataKeys["test_dir"], None)

        test_src_data = data.get(Conf.DataKeys["test_src"], [])
        # TODO RTFM for map, I don't exactly understand when list is needed for the map to resolve and be accessible
        self.test_src = list(map(self.get_path_relative_to_root, test_src_data))

        self.transpile_filenames = map(self.get_transpiled_filename, self.test_src)

        # TODO rename test_dir_path
        self.test_dirpath = self.get_path_relative_to_root(self.test_dir)
        self.test_dir_path_shift = (
            None
            if not self.path or not self.test_dirpath
            else os.path.relpath(self.root, self.test_dirpath)
        )

        c_src_data = self._data.get(Conf.DataKeys["c_src"], [])
        self.c_src = map(self._get_path_relative_to_testdir, c_src_data)

    def get_path_relative_to_root(self, path: Union[Path, None]) -> Optional[Path]:
        return self.root / path if path else None

    @property
    def expected_path(self) -> Path:
        return Path(".") / self.filename

    @staticmethod
    def replace_extension(path: str, extension: str) -> Path:
        return Path(path).with_suffix("." + extension)

    def get_transpiled_filename(self, path) -> Path:
        return Conf.replace_extension(
            Path(path).name, "c"
        )  # TODO Path(path) could be just path ?

    def get_transpiled_path(self, path) -> Path:
        return self.test_dirpath / self.get_transpiled_filename(path)

    def _get_path_relative_to_testdir(self, path) -> Path:
        return self.test_dir_path_shift / Path(path)

    # Look for the configuration filepath, recursively in parents directory of the current git directory. By default, start from where the script is executed.
    def find_conf_filepath(self, start_path: Optional[Path] = ".") -> Path:
        start_path = Path(start_path).resolve()
        filepath = start_path / self.filename
        if filepath.is_file():
            return filepath
        for parent in start_path.parents:
            filepath = parent / self.filename
            if filepath.is_file():
                return filepath
            # Stop looking higher if we are getting out of a git repository
            git_filepath = parent / ".git"
            if git_filepath.is_dir():
                return Path()
        return Path()  # TODO quick review: shouldn't None be returned here ?

    def fetch(self):  # TODO create custom typing for Dict
        data = {}
        if self.path:
            with open(self.path, "r") as conf_file:
                # TODO check for file read error
                data = yaml.safe_load(conf_file)
                # TODO check for yaml parsing errors
        self._data = data
        self.update_properties(data)

    def write(self, data: Dict) -> None:
        # TODO validate data, validate conf.path
        mode = "w" if self.path else "x"
        path = self.path or self.expected_path
        for key in data.keys():
            if not key in Conf.DataKeys.values():
                raise BaseException(
                    f"{key} is not a valid key to include in the configuration file."
                )
        # TODO create at the root of the git repo instead of the current directory?
        with open(path, mode) as file:
            yaml_conf = yaml.dump(data)
            file.write(yaml_conf)
        self.fetch()

    # TODO Create the update methode
    def update(self, data):
        return

    @property
    def errors(self) -> List[str]:  # TODO typing for errors choices
        errors = []
        path = self.path

        if not path:
            return ["CONF_NOT_FOUND"]

        # data = self.fetch()

        if self.test_dir == None:
            errors.append("TEST_DIR_KEY_MISSING")
        elif not isinstance(self.test_dir, str):
            errors.append("TEST_DIR_KEY_INVALID_TYPE")
        elif not self.test_dir:
            errors.append("TEST_DIR_KEY_EMPTY")
        elif not self.test_dirpath.exists():
            errors.append("TEST_DIR_NOT_EXISTS")
        elif not self.test_dirpath.is_dir():
            errors.append("TEST_DIR_NOT_DIR")

        # TODO add validation for src, lib, test_src
        return errors

    @property
    def has_error(self) -> bool:
        return bool(self.errors)
