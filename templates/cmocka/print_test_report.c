
#include <stdio.h>
#include "auto_assert.h"
#include "print_style_macro.h"

#define BOLD(str) "\033[1m" #str "\033[0m"
#define UNDERLINE(str) "\033[4m" #str "\033[0m"
#define RED(str) "\033[31m" #str "\033[0m"
#define GREEN(str) "\033[32m" #str "\033[0m"
#define BLUE(str) "\033[36m" #str "\033[0m"
#define MAGENTA(str) "\033[35m" #str "\033[0m"
#define YELLOW(str) "\033[33m" #str "\033[0m"

void print_test_ok(test_list_t *test) {
  printf(" "GREEN(OK)"    "BLUE(%-50s), test->name);
  }
void print_assertion_ko(assertion_list_t *assertion) {
  /* TODO add option debug to display printf("%s:%i", assertion->file, assertion->line); */
  // TODO clean code
  if (assertion->segfault)
    printf("   "RED(SEGFAULT)"  "BLUE(%-30s)" "MAGENTA(%s:%i)"\n%s\n\n", assertion->st_test_str, assertion->st_file_path, assertion->st_line, assertion->details );
  else
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
void print_test_report(test_list_t *test) {
      if (is_test_ko(test)) 
        print_test_ko(test);
      else if (test->skipped)
        print_test_skipped(test);
      else
        print_test_ok(test);
      printf("\n");
}
