#ifndef ASSERTION_H
#define ASSERTION_H

#include <stdlib.h>

typedef struct assertion_list_s{
  struct assertion_list_s *next;
  char info[512];
  char *details;
  char *file;
  int line;
  int st_charet;
  int st_line;
  char *st_test_str;
  char *st_file_path;
  int skipped;
  int ko;
  int memerr;
  int segfault;
} assertion_list_t;

typedef struct test_list_s {
  assertion_list_t *assertion;
  struct test_list_s *next;
  int skipped;
  char *name;
} test_list_t;

assertion_list_t *add_assertion(assertion_list_t **assertion_list);
test_list_t *add_test(test_list_t *test_list, char *name);
void free_test_list(test_list_t *test);
void free_assertion_list(assertion_list_t *node);
int is_test_ko(test_list_t *test);

#endif
