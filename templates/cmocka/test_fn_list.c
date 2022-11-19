#include "test_fn_list.h"
#include <stdlib.h>
#include <stdarg.h>

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

 void free_fn_list(test_fn_list_t *node)
{
  test_fn_list_t *node_tmp = node->next;
  while(node) {
      free(node);
      node=node_tmp;
       node = node->next;
  }
}
