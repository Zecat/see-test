#ifndef ASSERT_HANDLER_H
#define ASSERT_HANDLER_H

#include "auto_assert.h"

void fail_assertion(assertion_list_t *assertion, char *format, ...);
void do_int(long int actual, long int expected, assertion_list_t *assertion);
void do_char(char actual, char expected, assertion_list_t *assertion);
void do_string(char *actual, char* expected, assertion_list_t *assertion);
char *set_str_diff_details(const char *input, const char *ref);

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
