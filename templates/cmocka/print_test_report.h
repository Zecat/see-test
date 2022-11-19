#ifndef PRINT_TEST_REPORT_H
#define PRINT_TEST_REPORT_H

#include "auto_assert.h"
void print_test_ok(test_list_t *test);
void print_assertion_report(assertion_list_t *assertion);
void print_test_ko(test_list_t *test);
void print_test_skipped(test_list_t *test);
void print_assertion_ko(assertion_list_t *assertion);
void print_assertion_ok(assertion_list_t *assertion);
void print_test_report(test_list_t *test);
#endif
