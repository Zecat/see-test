# TODO os related job should go in CONF
import watchdog.events
import watchdog.observers
import time
from pathlib import Path
from see_test import generate_cmut_file
import threading
from .Conf import Conf


class TranspileHandler(watchdog.events.PatternMatchingEventHandler):
    def __init__(self, test_src, on_modified):
        watchdog.events.PatternMatchingEventHandler.__init__(self, patterns=test_src)
        self.on_modified = on_modified


class Transpiler:
    def __init__(self, conf: Conf) -> None:
        self.conf = conf

    # @require_valid_conf
    def all(self) -> None:
        # TODO IDK why I need to fetch again, it should be done already
        for file in self.conf.test_src:
            self.transpile(file)

    # def transpile(self, st_filepath):
    #    c_filename = replace_extension(st_filepath, 'c')
    #    c_filepath = self.conf.test_dirpath / c_filename
    #    self.transpile_from_to(st_filepath, c_filepath)

    # def transpile_from_to(self, st_filepath, out_filepath):
    #    shift = os.path.relpath(Path(st_filepath).parents[0], Path(out_filepath))
    #    generate_cmut_file(st_filepath, out_filepath, shift)

    def transpile(self, src_path: Path) -> None:
        generate_cmut_file(
            src_path,
            self.conf.get_transpiled_path(src_path),
            self.conf.test_dir_path_shift,
        )

    def live_reload(self) -> None:
        watchdog_thread = threading.Thread(target=self.live_reload_thread, daemon=True)
        watchdog_thread.start()

    def live_reload_thread(self) -> None:
        def on_modified(event):
            self.transpile(event.src_path)

        event_handler = TranspileHandler(self.conf.test_src, on_modified)
        observer = watchdog.observers.Observer()
        observer.schedule(event_handler, path=self.conf.path)
        observer.start()
        try:
            while True:
                time.sleep(1)
        except:
            observer.stop()
        observer.join()
