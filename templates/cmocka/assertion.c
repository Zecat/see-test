#include "assertion.h"
#include <stdlib.h>
#include <stdio.h>

assertion_list_t *add_assertion(assertion_list_t **assertion_list) {
  assertion_list_t *assertion = malloc(sizeof(assertion_list_t));
  if (!assertion)
    return NULL;
  assertion->next = NULL;
  assertion->skipped = 0;
  assertion->ko = 0;
  assertion->memerr = 0;
  assertion->segfault = 0;
  if(*assertion_list)
    (*assertion_list)->next = assertion;
  else 
    *assertion_list = assertion;
  return assertion;
}

test_list_t *add_test(test_list_t *test_list, char *name) {
  test_list_t *test = malloc(sizeof(test_list_t));
  if (!test)
    return NULL;
  test->assertion = NULL;
  test->next = NULL;
  test->skipped = 0;
  test->name = name;
  if (test_list)
    test_list->next = test; 
  return test;
}

void free_test_list(test_list_t *node) {
  if (!node)
    return;
   free(node->name);
   free_assertion_list(node->assertion);
   // TODO clean up: i'm not using the list for now
   free_test_list(node->next);
   free(node);
}

void free_assertion_list(assertion_list_t *node) {
  if (!node)
    return;
   free(node->details);
   free(node->st_file_path);
   free(node->st_test_str);
   free_assertion_list(node->next);
   free(node);
}

int is_test_ko(test_list_t *test) {
  assertion_list_t *assertion = test->assertion;
  while(assertion) {
    if(assertion->ko)
      return 1;
    assertion = assertion->next;
  }
  return 0;
}
