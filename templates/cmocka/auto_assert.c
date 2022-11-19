#include "auto_assert.h"
#include <string.h>
#include "print_test_report.h"

char details[4096];

void execute_tests(test_fn_list_t *fn_list) {
    test_list_t *test;
    // TODO printf test file name
    printf("---------\n\n");
    while(fn_list) {
      test = fn_list->test_fn();
      print_test_report(test);
      free_test_list(test);
      fn_list = fn_list->next;
    }
    free_fn_list(fn_list);
}



