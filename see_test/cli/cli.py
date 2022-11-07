#!/usr/bin/python3
# -*- coding: utf-8 -*-

import typer
from pathlib import Path
from typing import Tuple, Optional, List
from rich.prompt import Prompt, Confirm
from subprocess import run

from .Conf import Conf
from .Transpiler import Transpiler
from .NalaTester import NalaTester

import os
from rich import print

import re

app = typer.Typer()

CONFIRM_MK_DIR_EXIST = "Directory {conf.test_dirpath} already exists. It's content might be overritten.\n[cyan]Continue anyway ?[/cyan]"
ERR_DIR_EXIST = "[red]Directory already exist."
ASK_TEST_DIR = "Enter a directory name where to build the tests."
ASK_LIBS = "Enter the suffixe of your librairies if you need any. [i]For example,[/i] [cyan]ft, yolo[/cyan] [i]for 'libft.a' and 'libyolo.a'[/i]\nThey must exist in the current directory.\n"
ASK_SRC = "Enter your [green].c[/green] files to be tested. [i]For example,[/i] [cyan]my_fn.c, src/*.c[/cyan].\n"
ASK_TEST_SRC = "Enter your [green].st[/green] tests files"
CONFIRM_OVERWRITE_CONF = "Configuration file already exist.\n[cyan]Delete it ?[/cyan]"
INIT_FINAL_MSG = "Configuration done. You can manually edit the config file if you need to.\nYou can now run the CLI [cyan]test[/cyan] or [cyan]auto[/cyan] command."
TEST_BUILD_GENERATED = (
    "Test build directry generated at path [green]{conf.test_dirpath}[/green]."
)
DIVIDER = "[grey23]-------"
INIT_WELCOME_MSG = "This utility will walk you through creating a [green]{conf.filename}[/green] file.\n"

ERR_TO_MSG = {
    "CONF_NOT_FOUND": "Configuration file [green]./{conf.filename}[/green] does not exist.\nRun the CLI 'init' command to create it.",  # {} for conf_path
    "TEST_DIR_KEY_MISSING": 'Key "{DataKeys["test_dir"]}" missing in configuration file [green]{conf_path_rel}[/green]',
    "TEST_DIR_KEY_INVALID_TYPE": 'Key "{DataKeys["test_dir"]}" should be a string value in configuration file [green]{conf_path_rel}[/green]',
    "TEST_DIR_KEY_EMPTY": 'Key "{DataKeys["test_dir"]}" missing in configuration file [green]{conf_path_rel}[/green]',
    "TEST_DIR_NOT_EXISTS": "Specified test directory [green]{test_dirpath_rel}[/green] does not exists.\nRun the CLI 'sync' command to create it.",
    "TEST_DIR_NOT_DIR": "Specified test directory [green]{test_dirpath_rel}[/green] is not a directory.",
}

CONFIG_FILENAME = "see-test.conf.yaml"

conf = Conf(CONFIG_FILENAME)
tester = NalaTester(conf)
transpile = Transpiler(conf)


def get_cwd_relpath(path: Path) -> str:
    return "./" + os.path.relpath(path)


def require_valid_conf() -> None:
    errors = conf.errors
    if len(errors):
        for err in errors:
            print(
                ERR_TO_MSG[err].format(
                    DataKeys=conf.DataKeys,
                    conf_path_rel=get_cwd_relpath(conf.path),
                    test_dirpath_rel=get_cwd_relpath(conf.test_dirpath),
                )
            )
        raise typer.Abort()


def require_valid_test_dirpath_conf() -> None:
    errors = conf.errors
    concerning_errors = [
        "CONF_NOT_FOUND",
        "TEST_DIR_KEY_MISSING",
        "TEST_DIR_KEY_INVALID_TYPE",
        "TEST_DIR_KEY_EMPTY",
        "TEST_DIR_NOT_DIR",
        # TEST_DIR_NOT_EXISTS is ommitted on purpose
    ]
    for err in errors:
        if err in concerning_errors:
            print(ERR_TO_MSG[err].format(conf=conf))
            raise typer.Abort()


def print_divider() -> None:
    print(DIVIDER)


def confirm_overwrite_conf_middleware() -> None:
    if conf.path:
        yes_overwrite = Confirm.ask(CONFIRM_OVERWRITE_CONF, default=False)
        print_divider()
        if not yes_overwrite:
            raise typer.Abort()


def add_to_conf_smart_cli(files: List[str]) -> None:
    # TODO create a 'patch' or 'update' method in C conf instead of this
    data = conf._data
    for file in files:
        extension = Path(file).suffix
        if extension == ".c":
            data[Conf.DataKeys["c_src"]].append(file)
        elif extension == ".st":
            data[Conf.DataKeys["test_src"]].append(file)
        else:
            key = Prompt.ask(
                f"Unknown extension for file [green]{file}[/green]. Where to add it ?",
                choices=[Conf.DataKeys["c_src"], Conf.DataKeys["test_src"]],
            )
            data[key].append(file)
    conf.write(data)


def ask_test_dir(question: Optional[str] = ASK_TEST_DIR) -> str:
    test_dir = Prompt.ask(question, default="tests")
    if Path(test_dir).exists():
        confirmed = Confirm.ask(CONFIRM_MK_DIR_EXIST.format(conf=conf), default=True)
        if not confirmed:
            return ask_test_dir()
    print_divider()
    return test_dir


def ask_array(question: str) -> List[str]:
    answer_str = Prompt.ask(question)
    print_divider()
    answer_arr = list(filter(bool, re.split("[\s,]+", answer_str)))
    return answer_arr


def reset_conf_cli() -> None:
    conf.write(
        {
            Conf.DataKeys["test_dir"]: ask_test_dir(),
            Conf.DataKeys["c_src"]: ask_array(ASK_SRC),
            Conf.DataKeys["lib"]: ask_array(ASK_LIBS),
            Conf.DataKeys["test_src"]: ask_array(ASK_TEST_SRC),
        }
    )


@app.command()
def sync() -> None:
    """
    Regenerate the test build directory from the configuration file.
    """
    require_valid_test_dirpath_conf()
    tester.init()
    print(TEST_BUILD_GENERATED.format(conf=conf))  # TODO display path relative to


@app.command()
def init() -> None:
    """
    Initialize the configuration file. Run this to get started.
    """
    print(INIT_WELCOME_MSG.format(conf=conf))
    confirm_overwrite_conf_middleware()
    reset_conf_cli()
    sync()
    print(INIT_FINAL_MSG)


@app.command()
def test() -> None:
    """
    Run the tests once.
    """
    require_valid_conf()
    tester.update()
    transpile.all()
    tester.run()


@app.command()
def auto() -> None:
    """
    Run the test automatically when the files change.
    """
    require_valid_conf()
    tester.update()
    transpile.all()
    transpile.live_reload()
    tester.run(live_reload=True)


@app.command()
def add(files: List[str]) -> None:
    require_valid_conf()
    add_to_conf_smart_cli(files)
