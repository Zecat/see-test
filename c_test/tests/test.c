#include "nala.h"
#include "../add.h"


TEST(group_a) {
    
    /* ---- Subgroup A ---- */

    /* add(1, 2) => 3 */

    ASSERT_EQ(add(1, 2), 3);

    printf("[33m%s: PASS[m\n", "Subgroup A");
}
