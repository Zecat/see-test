#ifndef AUTO_ASSERT_H
#define AUTO_ASSERT_H

#include <stdbool.h>
#include <inttypes.h>
#include <stdint.h>

// void _assert_char_equal(const char a, const char b,
                          // const char * const file, const int line);
//
// void _assert_char_not_equal(const char a, const char b,
                          // const char * const file, const int line);

typedef struct {
  int skipped;
  int ko;
  char info[512];
  char *details;
  char *name;
  char *file;
  int line;
} test_state_t;

typedef test_state_t* (*test_fn_t)(void);

void execute_tests(test_fn_t *fn);

 char * diff_details_int(int actual, int expected);

char * diff_details_string(char *actual, char *expected);
char * diff_details_char(char actual, char expected);

int do_assert_char(char actual, char expected);

int do_assert_schar(signed char actual, signed char expected);

int do_assert_uchar(unsigned char actual, unsigned char expected);

int do_assert_short(short actual, short expected);

int do_assert_ushort(unsigned short actual, unsigned short expected);

int do_assert_int(int actual, int expected);

int do_assert_uint(unsigned int actual, unsigned int expected);

int do_assert_long(long actual, long expected);

int do_assert_ulong(unsigned long actual, unsigned long expected);

int do_assert_llong(long long actual, long long expected);

int do_assert_ullong(unsigned long long actual,
                        unsigned long long expected);

int do_assert_float(float actual, float expected);

int do_assert_double(double actual, double expected);

int do_assert_ldouble(long double actual, long double expected);

int do_assert_bool(bool actual, bool expected);

int do_assert_ptr(const void *actual_p, const void *expected_p);

int do_assert_string(const void *actual_p, const void *expected_p);


//void print_test_skipped();
//void print_test_ko(void);
//  void print_str_error_details(const char *actual_p, const char *expected_p);
//void print_str_diff(const char *input, const char *ref, char *format_diff);
//void print_test_ok(void);
//void print_test_result(void);

void print_test_ok(char *test_name);
void print_test_ko(test_state_t *test);
void free_test_state(test_state_t *state);
void set_str_diff_details(const char *input, const char *ref);
void print_test_skipped(test_state_t *state);

#define TEST_START(test_name) \
    test_state_t *state = malloc(sizeof(test_state_t)); \
    state->name = strdup(test_name); \
    state->ko = 0; \
    state->skipped = 0; \
    CATCH_STDOUT
    

#define TEST_END \
    RESTORE_STDOUT \
    return state;

#define SKIP \
    state->skipped = 1; \
    RESTORE_STDOUT \
    return state;

#define INFO(info_str) \
    strcpy(state->info, info_str);
/**
 * Assert that given characters, numbers, pointers or strings are
 * equal.
 */
#define ASSERT_EQ(is, shouldbe)                                     \
  if(!DO_ASSERT_FUNC(is)((is),(shouldbe))) { \
    state->details = GET_ERROR_FN(is)(is, shouldbe); \
    state->ko = 1; \
    state->file = __FILE__; \
    state->line = __LINE__; \
    RESTORE_STDOUT \
    return state; \
  }


#define GET_ERROR_FN(value)                         \
    _Generic((value),                                   \
             int: diff_details_int,                      \
             char: diff_details_char,                    \
             char *: diff_details_string)
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

#define DO_ASSERT_FUNC(value)                         \
    _Generic((value),                                   \
             char: do_assert_char,                    \
             signed char: do_assert_schar,            \
             unsigned char: do_assert_uchar,          \
             short: do_assert_short,                  \
             unsigned short: do_assert_ushort,        \
             int: do_assert_int,                      \
             unsigned int: do_assert_uint,            \
             long: do_assert_long,                    \
             unsigned long: do_assert_ulong,          \
             long long: do_assert_llong,              \
             unsigned long long: do_assert_ullong,    \
             float: do_assert_float,                  \
             double: do_assert_double,                \
             long double: do_assert_ldouble,          \
             char *: do_assert_string,                \
             const char *: do_assert_string,          \
             bool: do_assert_bool,                    \
             default: do_assert_ptr)

/*
#define NALA_ASSERT_ARRAY_FUNC(value)                                   \
    _Generic((value),                                                   \
             char *: do_assert_array_char,                            \
             const char *: do_assert_array_char,                      \
             signed char *: do_assert_array_schar,                    \
             const signed char *: do_assert_array_schar,              \
             unsigned char *: do_assert_array_uchar,                  \
             const unsigned char *: do_assert_array_uchar,            \
             short *: do_assert_array_short,                          \
             const short *: do_assert_array_short,                    \
             unsigned short *: do_assert_array_ushort,                \
             const unsigned short *: do_assert_array_ushort,          \
             int *: do_assert_array_int,                              \
             const int *: do_assert_array_int,                        \
             unsigned int *: do_assert_array_uint,                    \
             const unsigned int *: do_assert_array_uint,              \
             long *: do_assert_array_long,                            \
             const long *: do_assert_array_long,                      \
             unsigned long *: do_assert_array_ulong,                  \
             const unsigned long *: do_assert_array_ulong,            \
             long long *: do_assert_array_llong,                      \
             const long long *: do_assert_array_llong,                \
             unsigned long long *: do_assert_array_ullong,            \
             const unsigned long long *: do_assert_array_ullong,      \
             float *: do_assert_array_float,                          \
             const float *: do_assert_array_float,                    \
             double *: do_assert_array_double,                        \
             const double *: do_assert_array_double,                  \
             long double *: do_assert_array_ldouble,                  \
             const long double *: do_assert_array_ldouble,            \
             bool *: do_assert_array_bool,                            \
             const bool *: do_assert_array_bool,                      \
             default: do_assert_array)
*/
#endif
