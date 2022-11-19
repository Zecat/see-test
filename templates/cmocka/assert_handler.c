#include "assert_handler.h"
#include "utils.h"
#include <string.h>
#include "print_style_macro.h"

void fail_assertion(assertion_list_t *assertion, char *format, ...) {
  va_list ap;
  va_start(ap, format);
  assertion->details = alloc_vprintf( format, ap);
  va_end(ap);
  assertion->ko = 1; 
}
void do_int(long int actual, long int expected, assertion_list_t *assertion) {
  if(actual != expected)
    fail_assertion(assertion, "       %i != %i", actual, expected);
}
void do_char(char actual, char expected, assertion_list_t *assertion) {
  if(actual!=expected)
    fail_assertion(assertion, "       %c != %c", actual, expected);
}
void do_string(char *actual, char* expected, assertion_list_t *assertion) {
  if(!strcmp(actual, expected))
    return;
  assertion->details = set_str_diff_details(actual, expected);
  assertion->ko = 1; 
}

char *set_str_diff_details(const char *input, const char *ref) {
 int i = 0;
 int ref_len = strlen(ref);
 int input_len = strlen(input);
 char details[512];
 char *cursor = details;
 strcpy(cursor, "       expect: ");
 cursor+=15;
 while (ref[i]) {
   if (i < input_len && input[i] == ref[i]) 
   {
     *cursor = ref[i];
    cursor++;
   }
   else {
     sprintf(cursor, BOLD(%c), ref[i]);
      cursor+=9;
   }
   i++;
 }
 *cursor = '\n';
 cursor++;
 strcpy(cursor, "       actual: ");
 cursor+=15;
 i=0;
 while (input[i]) {
   if (i < ref_len && input[i] == ref[i])
   {
     *cursor = input[i];
    cursor++;
   }
   else {
     sprintf(cursor, RED(%c), input[i]);
      cursor+=10;
   }
   i++;
 }
 *cursor = '\0';
 return strdup(details);
}

