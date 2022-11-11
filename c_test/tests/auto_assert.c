#include "auto_assert.h"
#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BOLD "\033[1m%c\033[0m"
#define RED "\033[31m%c\033[0m"
#define BLUE_STR_FORMAT "\033[36m%c\033[0m"
#define STRING "string"

char details[4096];


 char * diff_details_int(int actual, int expected)
 {
    sprintf(details, "%i != %i", actual, expected);
    return strdup(details);
 }
char * diff_details_string(char *actual, char *expected)
{
   // sprintf(details, "\"%s\" != \"%s\"", actual, expected);
    set_str_diff_details(actual, expected);
    return strdup(details);
}

char * diff_details_char(char actual, char expected)
{
    sprintf(details, "'%c' != '%c'", actual, expected);
    return strdup(details);
}

// int diff_details_schar(signed char actual, signed char expected)
// {
    // return actual == expected;
// }
//
// int diff_details_uchar(unsigned char actual, unsigned char expected)
// {
    // return actual == expected;
// }
//
// int diff_details_short(short actual, short expected)
// {
    // return actual == expected;
// }
//
// int diff_details_ushort(unsigned short actual, unsigned short expected)
// {
//
    // return actual == expected;
// }
//
//
// int diff_details_uint(unsigned int actual, unsigned int expected)
// {
//
    // return actual == expected;
// }
//
// int diff_details_long(long actual, long expected)
// {
    // return actual == expected;
// }
//
// int diff_details_ulong(unsigned long actual, unsigned long expected)
// {
    // return actual == expected;
//
// }
//
// int diff_details_llong(long long actual, long long expected)
// {
    // return 0;
//
// }
//
// int diff_details_ullong(unsigned long long actual,
                        // unsigned long long expected)
// {
//
    // return actual == expected;
//
// }
//
// int diff_details_float(float actual, float expected)
// {
//
    // return actual == expected;
//
// }
//
// int diff_details_double(double actual, double expected)
// {
    // return actual == expected;
//
// }
//
// int diff_details_ldouble(long double actual, long double expected)
// {
    // return actual == expected;
//
// }
//
// int diff_details_bool(bool actual, bool expected)
// {
    // return actual == expected;
//
// }

/******* */
int do_assert_ptr(const void *actual_p, const void *expected_p)
{
  (void)actual_p;
  (void)expected_p;
    return 0;
    //return actual == expected;
}
int do_assert_char(char actual, char expected)
{
    return actual == expected;
}

int do_assert_schar(signed char actual, signed char expected)
{
    return actual == expected;
}

int do_assert_uchar(unsigned char actual, unsigned char expected)
{
    return actual == expected;
}

int do_assert_short(short actual, short expected)
{
    return actual == expected;
}

int do_assert_ushort(unsigned short actual, unsigned short expected)
{

    return actual == expected;
}

int do_assert_int(int actual, int expected)
{
    //printf("---------------%i != %i", actual, expected);
    //_assert_int_equal(actual, expected);
    return actual == expected;
}

int do_assert_uint(unsigned int actual, unsigned int expected)
{

    return actual == expected;
}

int do_assert_long(long actual, long expected)
{
    return actual == expected;
}

int do_assert_ulong(unsigned long actual, unsigned long expected)
{
    return actual == expected;

}

int do_assert_llong(long long actual, long long expected)
{
    return actual == expected;

}

int do_assert_ullong(unsigned long long actual,
                        unsigned long long expected)
{

    return actual == expected;

}

int do_assert_float(float actual, float expected)
{

    return actual == expected;

}

int do_assert_double(double actual, double expected)
{
    return actual == expected;

}

int do_assert_ldouble(long double actual, long double expected)
{
    return actual == expected;

}

int do_assert_bool(bool actual, bool expected)
{
    return actual == expected;

}


//error_t *do_assert(const char *actual_p, const char *expected_p) {
//  (void) file;
//  (void) line;
//
//  int errored = strcmp(actual_p, expected_p);
//  state
//  state->actual = strdup(actual_p);
//  state->expected = strdup(expected_p);
//  state->type = STRING;
//  return err;
//}
int do_assert_string(const void *actual_p, const void *expected_p)
{
  return !strcmp((const char*)actual_p, (const char *)expected_p);
}

void execute_tests(test_fn_t *fn) {
    test_state_t *state;
    while(*fn) {
      state = (*fn)();
      if (state->skipped)
        print_test_skipped(state);
      else if (state->ko) {
        print_test_ko(state);
      }
      else
        print_test_ok(state->name);
      printf("\n");
      fn++;
      free_test_state(state);
    }
   free(state);
}

void free_test_state(test_state_t *state) {
   free(state->details);
   free(state->name);
}

void set_str_diff_details(const char *input, const char *ref) {
 int i = 0;
 int ref_len = strlen(ref);
 int input_len = strlen(input);
 char *cursor = details;
 strcpy(cursor, "       expect:   ");
 cursor+=17;
 while (ref[i]) {
   if (i < input_len && input[i] == ref[i]) 
   {
     *cursor = ref[i];
    cursor++;
   }
   else {
     strcpy(cursor, "\033[1m");
      cursor+=4;
      
      *cursor = ref[i];
      cursor++;
     strcpy(cursor, "\033[0m");
      cursor+=4;
   }
   i++;
 }
 *cursor = '\n';
 cursor++;
 strcpy(cursor, "       actual:   ");
 cursor+=17;
 i=0;
 while (input[i]) {
   if (i < ref_len && input[i] == ref[i])
   {
     *cursor = input[i];
    cursor++;
   }
   else {
     strcpy(cursor, "\033[31m");
      cursor+=5;
      *cursor = input[i];
      cursor++;
     strcpy(cursor, "\033[0m");
      cursor+=4;
   }
   i++;
 }
 *cursor = '\0';
}
//
//  void print_str_error_details(const char *actual_p, const char *expected_p) {
//  *details = '\n';
//  details++;
//  detail_append_diff(expected_p, actual_p, BOLD);
//  *details = '\n';
//  details++;
//  print_str_diff(actual_p, expected_p, RED);
//  *details = '\n';
//  details++;
//  *details = '\0';
//  }
//
void print_test_ok(char *test_name) {
  printf(" \033[32mOK\033[0m    \033[36m%-50s\033[0m", test_name);
  }
//
//void print_test_result(void) {
//  if (!*_details)
//    print_test_ok();
//  else {
//    print_test_ko();
//    printf("%s", _details);
//  }
//}
//
//// TODO rename test_ko
void print_test_ko(test_state_t *state) {
 printf(" \033[31mK0\033[0m    \033[36m%-50s\033[0m\n", state->name);
  printf("       \033[35m%s:%i\033[0m %s\n%s\n", state->file, state->line, state->info, state->details);
}
void print_test_skipped(test_state_t *state) {
 printf(" \033[33mSKIP\033[0m \033[36m%-50s\033[0m", state->name);
}
