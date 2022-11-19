#ifndef AUTO_ASSERT_H
#define AUTO_ASSERT_H

#include <stdbool.h>
#include <inttypes.h>
#include <stdint.h>
#include "test_list.h"
#include "test_fn_list.h"
#include "catch_segfault.h"
#include "assert_handler.h"


void execute_tests(test_fn_list_t *fn_list);


#define EXECUTE_TESTS(file_slug) \
  execute_tests(file_slug());

/*#define REGISTER_TEST_FILE(file_slug, ...) \
  test_fn_list_t *test_file__##file_slug() { \
    test_fn_list_t *tests_fn_list = create_test_fn_list(0,  __VA_ARGS__ , NULL); \
    return tests_fn_list; \
  }
  */

#define TEST_START(test_name) \
    test_list_t *test = add_test(NULL, strdup(test_name)); \
    assertion_list_t *assertion = NULL;\
    CATCH_STDOUT
    

#define TEST_END \
    RESTORE_STDOUT \
    return test;

#define SKIP \
    test->skipped = 1; \
    RESTORE_STDOUT \
    return test;

#define ASSERT_EQ(actual, expected, __ST_TEST_STR__, __ST_FILE_PATH__, __ST_LINE__,__ST_CHARET__)                                     \
  assertion = add_assertion(assertion ? &assertion : &(test->assertion)); \
  assertion->details = NULL; \
  assertion->file = __FILE__; \
  assertion->line = __LINE__; \
  assertion->st_test_str = strdup(__ST_TEST_STR__); \
  assertion->st_file_path = strdup(__ST_FILE_PATH__); \
  assertion->st_line = __ST_LINE__; \
  assertion->st_charet = __ST_CHARET__; \
  TRY { \
    HANDLE_ASSERTION(actual)(actual, expected, assertion); \
  } \
  CATCH { \
    assertion->ko = 1; \
    assertion->segfault = 1; \
  }
// TODO option for test to stop when the first assertion fail
#endif
