#include "auto_assert.h"
#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>

void _assert_char_equal(const char  a, const char  b, const char * const file, const int line) {

    char a_str[2] = {a, 0};
    char b_str[2] = {b, 0};
    _assert_string_equal(a_str, b_str, file, line);
}


void nala_assert_char(char actual, char expected, const char * const file, const int line)
{
    _assert_char_equal(actual, expected, file, line);
}

void nala_assert_schar(signed char actual, signed char expected, const char * const file, const int line)
{
    _assert_char_equal(actual, expected, file, line);
}

void nala_assert_uchar(unsigned char actual, unsigned char expected, const char * const file, const int line)
{
    _assert_char_equal(actual, expected, file, line);
}

void nala_assert_short(short actual, short expected, const char * const file, const int line)
{
    _assert_int_equal(actual, expected, file, line);
}

void nala_assert_ushort(unsigned short actual, unsigned short expected, const char * const file, const int line)
{
    
    _assert_int_equal(actual, expected, file, line);
    
}

void nala_assert_int(int actual, int expected, const char * const file, const int line)
{
    
    _assert_int_equal(actual, expected, file, line);
    
}

void nala_assert_uint(unsigned int actual, unsigned int expected, const char * const file, const int line)
{
    
    _assert_int_equal(actual, expected, file, line);
    
}

void nala_assert_long(long actual, long expected, const char * const file, const int line)
{
    
    _assert_int_equal(actual, expected, file, line);
    
}

void nala_assert_ulong(unsigned long actual, unsigned long expected, const char * const file, const int line)
{
    
    _assert_int_equal(actual, expected, file, line);
    
}

void nala_assert_llong(long long actual, long long expected, const char * const file, const int line)
{
    
    _assert_int_equal(actual, expected, file, line);
    
}

void nala_assert_ullong(unsigned long long actual,
                        unsigned long long expected, const char * const file, const int line)
{
    
    _assert_int_equal(actual, expected, file, line);
    
}

void nala_assert_float(float actual, float expected, const char * const file, const int line)
{
    
    _assert_float_equal((double)actual, (double)expected, 20, file, line);
    
}

void nala_assert_double(double actual, double expected, const char * const file, const int line)
{
   // TODO double 
    _assert_float_equal(actual, expected, 20, file, line);
    
}

void nala_assert_ldouble(long double actual, long double expected, const char * const file, const int line)
{
    // TODO long double 
    _assert_float_equal(actual, expected, 20, file, line);
    
}

void nala_assert_bool(bool actual, bool expected, const char * const file, const int line)
{
    // TODO Bool 
    _assert_int_equal(actual, expected, file, line);
    
}

void nala_assert_ptr(const void *actual_p, const void *expected_p, const char * const file, const int line)
{
    // _assert_ptr_equal(actual_p, expected_p, file, line);
    _assert_int_equal(cast_ptr_to_largest_integral_type(actual_p),
                      cast_ptr_to_largest_integral_type(expected_p),
                      file, line);

}

void nala_assert_string(const char *actual_p, const char *expected_p, const char * const file, const int line) {
  _assert_string_equal(actual_p, expected_p, file, line);
}
