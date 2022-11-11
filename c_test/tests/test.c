#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>
#include <string.h>
#include <stdlib.h>

char *test_name;
#include "capture_macro.h"
#include "auto_assert.h"

CAPTURE_INIT

#include "../add.h"

static test_state_t* test_1_test_b() {
    /* ---- test b ---- */

    TEST_START("test b")

    INFO("add(1, 2) => 3 >> \"yoyt\"")

    CAPTURE_STDOUT_START

    ASSERT_EQ(add(1, 2), 3);

    ASSERT_STDOUT("yoyt");

    INFO("add(1, 2) => 2 >> \"yayo\"")

    CAPTURE_STDOUT_START

    ASSERT_EQ(add(1, 2), 2);

    ASSERT_STDOUT("yayo");

    TEST_END
}

static test_state_t* test_2_kjds() {
    /* ---- @ kjds ---- */

    TEST_START(" kjds")

    SKIP

    INFO("add(1, 2) => 3 >> \"yayeeee\"")

    CAPTURE_STDOUT_START

    ASSERT_EQ(add(1, 2), 3);

    ASSERT_STDOUT("yayeeee");

    TEST_END
}

static test_state_t* test_3_ab() {
    /* ---- ab ---- */

    TEST_START("ab")

    INFO("add(1,3) => 4 >> \"yoyo\"")

    CAPTURE_STDOUT_START

    ASSERT_EQ(add(1, 3), 4);

    ASSERT_STDOUT("yoyo");

    TEST_END
}

static test_state_t* test_4_abc() {
    /* ---- abc ---- */

    TEST_START("abc")

    INFO("add(1,3) => 4 >> \"yoyo\"")

    CAPTURE_STDOUT_START

    ASSERT_EQ(add(1, 3), 4);

    ASSERT_STDOUT("yoyo");

    TEST_END
}

int main(void) {
        test_fn_t fns[] = {test_1_test_b,
test_2_kjds,
test_3_ab,
test_4_abc
, NULL
};
            execute_tests(fns);
}