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

void _assert_char_equal(char a, char b, const char * const file, const int line);


void nala_assert_char(char actual, char expected, const char * const file, const int line);

void nala_assert_schar(signed char actual, signed char expected, const char * const file, const int line);

void nala_assert_uchar(unsigned char actual, unsigned char expected, const char * const file, const int line);

void nala_assert_short(short actual, short expected, const char * const file, const int line);

void nala_assert_ushort(unsigned short actual, unsigned short expected, const char * const file, const int line);

void nala_assert_int(int actual, int expected, const char * const file, const int line);

void nala_assert_uint(unsigned int actual, unsigned int expected, const char * const file, const int line);

void nala_assert_long(long actual, long expected, const char * const file, const int line);

void nala_assert_ulong(unsigned long actual, unsigned long expected, const char * const file, const int line);

void nala_assert_llong(long long actual, long long expected, const char * const file, const int line);

void nala_assert_ullong(unsigned long long actual,
                        unsigned long long expected, const char * const file, const int line);

void nala_assert_float(float actual, float expected, const char * const file, const int line);

void nala_assert_double(double actual, double expected, const char * const file, const int line);

void nala_assert_ldouble(long double actual, long double expected, const char * const file, const int line);

void nala_assert_bool(bool actual, bool expected, const char * const file, const int line);

void nala_assert_ptr(const void *actual_p, const void *expected_p, const char * const file, const int line);

void nala_assert_string(const char *actual_p, const char *expected_p, const char * const file, const int line);

/**
 * Assert that given characters, numbers, pointers or strings are
 * equal.
 */
#define ASSERT_EQ(actual, expected)                                     \
    NALA_ASSERT_FUNC(actual)((actual), (expected), __FILE__, __LINE__)

#define NALA_ASSERT_FUNC(value)                         \
    _Generic((value),                                   \
             char: nala_assert_char,                    \
             signed char: nala_assert_schar,            \
             unsigned char: nala_assert_uchar,          \
             short: nala_assert_short,                  \
             unsigned short: nala_assert_ushort,        \
             int: nala_assert_int,                      \
             unsigned int: nala_assert_uint,            \
             long: nala_assert_long,                    \
             unsigned long: nala_assert_ulong,          \
             long long: nala_assert_llong,              \
             unsigned long long: nala_assert_ullong,    \
             float: nala_assert_float,                  \
             double: nala_assert_double,                \
             long double: nala_assert_ldouble,          \
             char *: nala_assert_string,                \
             const char *: nala_assert_string,          \
             bool: nala_assert_bool,                    \
             default: nala_assert_ptr)

/*
#define NALA_ASSERT_ARRAY_FUNC(value)                                   \
    _Generic((value),                                                   \
             char *: nala_assert_array_char,                            \
             const char *: nala_assert_array_char,                      \
             signed char *: nala_assert_array_schar,                    \
             const signed char *: nala_assert_array_schar,              \
             unsigned char *: nala_assert_array_uchar,                  \
             const unsigned char *: nala_assert_array_uchar,            \
             short *: nala_assert_array_short,                          \
             const short *: nala_assert_array_short,                    \
             unsigned short *: nala_assert_array_ushort,                \
             const unsigned short *: nala_assert_array_ushort,          \
             int *: nala_assert_array_int,                              \
             const int *: nala_assert_array_int,                        \
             unsigned int *: nala_assert_array_uint,                    \
             const unsigned int *: nala_assert_array_uint,              \
             long *: nala_assert_array_long,                            \
             const long *: nala_assert_array_long,                      \
             unsigned long *: nala_assert_array_ulong,                  \
             const unsigned long *: nala_assert_array_ulong,            \
             long long *: nala_assert_array_llong,                      \
             const long long *: nala_assert_array_llong,                \
             unsigned long long *: nala_assert_array_ullong,            \
             const unsigned long long *: nala_assert_array_ullong,      \
             float *: nala_assert_array_float,                          \
             const float *: nala_assert_array_float,                    \
             double *: nala_assert_array_double,                        \
             const double *: nala_assert_array_double,                  \
             long double *: nala_assert_array_ldouble,                  \
             const long double *: nala_assert_array_ldouble,            \
             bool *: nala_assert_array_bool,                            \
             const bool *: nala_assert_array_bool,                      \
             default: nala_assert_array)
*/
#endif
