#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>

#include "capture_macro.h"

CAPTURE_INIT

#include "../add.h"

static void subgroup_a(void **state) {
    /* add(1, 2) => 3 >> "abc" */

    CAPTURE_STDOUT_START

    assert_int_equal(add(1, 2), 3);

    CAPTURE_STDOUT_STOP

    assert_string_equal(stdout_buffer, "abc");

    /* add(1, 2) => 3 >> "a" */

    CAPTURE_STDOUT_START

    assert_int_equal(add(1, 2), 3);

    CAPTURE_STDOUT_STOP

    assert_string_equal(stdout_buffer, "a");

    (void) state;
}

static void subgroup_b(void **state) {
    /* add(1, 2) => 3 >> "abc" */

    CAPTURE_STDOUT_START

    assert_int_equal(add(1, 2), 3);

    CAPTURE_STDOUT_STOP

    assert_string_equal(stdout_buffer, "abc");

    (void) state;
}

int main(void) {
    const struct CMUnitTest tests[] = {
        cmocka_unit_test(subgroup_a),
        cmocka_unit_test(subgroup_b),
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}