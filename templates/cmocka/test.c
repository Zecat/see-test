#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>

#include "capture_macro.h"
#include "auto_assert.h"

CAPTURE_INIT

#include "../add.h"

static void subgroup_a(void **state) {
    /* add(1, 2) => 3 >> "abc" */

    CAPTURE_STDOUT_START

    ASSERT_EQ(add(1, 2), 3);

    CAPTURE_STDOUT_STOP

    ASSERT_EQ(stdout_buffer, "abc");

    /* add(1, 2) => 3 >> "a" */

    CAPTURE_STDOUT_START

    ASSERT_EQ(add(1, 2), 3);

    CAPTURE_STDOUT_STOP

    ASSERT_EQ(stdout_buffer, "a");

    (void) state;
}

static void subgroup_b(void **state) {
    /* add(1, 2) => 3 >> "abc" */

    CAPTURE_STDOUT_START

    ASSERT_EQ(add(1, 2), 3);

    CAPTURE_STDOUT_STOP

    ASSERT_EQ(stdout_buffer, "abc");

    /* uppercase('a') => 'B' */

    ASSERT_EQ(uppercase('a'), 'B');

    (void) state;
}

int main(void) {
    const struct CMUnitTest tests[] = {
        cmocka_unit_test(subgroup_a),
        cmocka_unit_test(subgroup_b),
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}