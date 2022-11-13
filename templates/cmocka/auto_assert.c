#include "auto_assert.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BOLD(str) "\033[1m" #str "\033[0m"
#define UNDERLINE(str) "\033[4m" #str "\033[0m"
#define RED(str) "\033[31m" #str "\033[0m"
#define GREEN(str) "\033[32m" #str "\033[0m"
#define BLUE(str) "\033[36m" #str "\033[0m"
#define MAGENTA(str) "\033[35m" #str "\033[0m"
#define YELLOW(str) "\033[33m" #str "\033[0m"

char details[4096];

char *alloc_vprintf(const char *fmt, va_list ap)
       {
           int n = 0;
           size_t size = 0;
           char *p = NULL;
           va_list aq;
           va_copy(aq, ap);

           /* Determine required size */

           n = vsnprintf(p, size, fmt, ap);

           if (n < 0)
               return NULL;

           /* One extra byte for '\0' */

           size = (size_t) n + 1;
           p = malloc(size);
           if (p == NULL)
               return NULL;

           n = vsnprintf(p, size, fmt, aq);

           if (n < 0) {
               free(p);
               return NULL;
           }

           return p;
       }


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

void print_test_report(test_list_t *test) {
      if (is_test_ko(test)) 
        print_test_ko(test);
      else if (test->skipped)
        print_test_skipped(test);
      else
        print_test_ok(test);
      printf("\n");
}

void execute_tests(test_fn_list_t *fn_list) {
    test_list_t *test;
    // TOD printf test file name
    printf("---------\n\n");
    while(fn_list) {
      // TOD useless parenthesis ?
      test = (*(fn_list->test_fn))();
      print_test_report(test);
      free_test_list(test);
      fn_list = fn_list->next;
    }
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
void print_test_ok(test_list_t *test) {
  printf(" "GREEN(OK)"    "BLUE(%-50s), test->name);
  }
void print_assertion_ko(assertion_list_t *assertion) {
  /* TODO add option debug to display printf("%s:%i", assertion->file, assertion->line); */
  printf("   "RED(KO)"  "BLUE(%-30s)" "MAGENTA(%s:%i)"\n%s\n\n", assertion->st_test_str, assertion->st_file_path, assertion->st_line, assertion->details );
}
void print_assertion_ok(assertion_list_t *assertion) {
  /* TODO add option debug to display printf("%s:%i", assertion->file, assertion->line); */
  printf("   "GREEN(OK)"  "BLUE(%-30s)" "MAGENTA(%s:%i)"\n\n", assertion->st_test_str, assertion->st_file_path, assertion->st_line);
}

void print_test_ko(test_list_t *test) {
  assertion_list_t *assertion = test->assertion;
 printf(" "RED(KO)"    "MAGENTA(%-50s)"\n\n", test->name);
  while(assertion) {
    if (assertion->ko)
      print_assertion_ko(assertion);
    else 
      print_assertion_ok(assertion);
    assertion = assertion->next;
  }

}
void print_test_skipped(test_list_t *test) {
 printf(" "YELLOW(SKIP)" "BLUE(%-50s), test->name);
}

test_fn_list_t *push_test_fn(test_fn_list_t *list, test_fn_t test_fn) {
  test_fn_list_t *list_cursor = list;
  test_fn_list_t *test_list_fn = malloc(sizeof(test_fn_list_t));
  if (!test_list_fn)
    return NULL;
  test_list_fn->test_fn = test_fn;
  test_list_fn->next = NULL;
  if (!list_cursor)
    return test_list_fn;
  while(list_cursor->next)
    list_cursor = list_cursor->next;
  list_cursor->next = test_list_fn;
  return list;
}

test_fn_list_t *add_test_fn(test_fn_list_t *list, test_fn_t test_fn) {
  test_fn_list_t *test_list_fn = malloc(sizeof(test_fn_list_t));
  if (!test_list_fn)
    return NULL;
  test_list_fn->test_fn = test_fn;
  if(list)
    list->next = test_list_fn;
  test_list_fn->next = NULL;
  return test_list_fn;
}
test_fn_list_t *create_test_fn_list(int useless, ...) {
  va_list va_fns;
  test_fn_list_t *fn_list, *fn_list_head;
  test_fn_t fn;
  va_start(va_fns, useless);
    fn = va_arg(va_fns, test_fn_t);
    fn_list_head = add_test_fn(NULL, fn);
    fn_list = fn_list_head;
  while(fn_list) {
    fn = va_arg(va_fns, test_fn_t);
    fn_list = add_test_fn(fn_list, fn);
  }
  va_end(va_fns);
  return fn_list_head;
}

