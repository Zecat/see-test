#ifndef AUTO_ASSERT_H
#define AUTO_ASSERT_H

#include <stdbool.h>
#include <inttypes.h>
#include <stdint.h>
#include "assertion.h"

typedef test_list_t* (*test_fn_t)(void);

typedef struct test_fn_list_s {
  test_fn_t test_fn;
  struct test_fn_list_s *next;
} test_fn_list_t;

void execute_tests(test_fn_list_t *fn_list);

 char * diff_details_int(int actual, int expected);

char * diff_details_string(char *actual, char *expected);
char * diff_details_char(char actual, char expected);

void print_test_ok(test_list_t *test);
void print_assertion_report(assertion_list_t *assertion);
void print_test_ko(test_list_t *test);
char *set_str_diff_details(const char *input, const char *ref);
void print_test_skipped(test_list_t *test);
test_fn_list_t *push_test_fn(test_fn_list_t *list, test_fn_t test_fn);
// TODO remove ?
test_fn_list_t *add_test_fn(test_fn_list_t *list, test_fn_t fn);
test_fn_list_t *create_test_fn_list(int useless, ...);
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
  HANDLE_ASSERTION(actual)(actual, expected, assertion)
// TODO option for test to stop when the first assertion fail

void do_int(long int actual, long int expected, assertion_list_t *assertion);
void do_char(char actual, char expected, assertion_list_t *assertion);
void do_string(char *actual, char* expected, assertion_list_t *assertion);

#define HANDLE_ASSERTION(value)                         \
    _Generic((value),                                   \
             int: do_int,                      \
             char: do_char,                    \
             char *: do_string)
// TODO do it for every type, think about default too
             /*char: diff_details_char,                    \
             signed char: diff_details_schar,            \
             unsigned char: diff_details_uchar,          \
             short: diff_details_short,                  \
             unsigned short: diff_details_ushort,        \
             int: diff_details_int,                      \
             unsigned int: diff_details_uint,            \
             long: diff_details_long,                    \
             unsigned long: diff_details_ulong,          \
             long long: diff_details_llong,              \
             unsigned long long: diff_details_ullong,    \
             float: diff_details_float,                  \
             double: diff_details_double,                \
             long double: diff_details_ldouble,          \
             char *: diff_details_string,                \
             const char *: diff_details_string,          \
             bool: diff_details_bool,                    \
             default: diff_details_ptr*/
#endif
