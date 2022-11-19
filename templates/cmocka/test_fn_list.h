#ifndef TEST_FN_LIST_H
#define TEST_FN_LIST_H

#include "test_list.h"

typedef test_list_t* (*test_fn_t)(void);

typedef struct test_fn_list_s {
  test_fn_t test_fn;
  struct test_fn_list_s *next;
} test_fn_list_t;
test_fn_list_t *push_test_fn(test_fn_list_t *list, test_fn_t test_fn);
// TODO remove ?
test_fn_list_t *add_test_fn(test_fn_list_t *list, test_fn_t fn);
test_fn_list_t *create_test_fn_list(int useless, ...);
void free_fn_list(test_fn_list_t *node);
#endif
