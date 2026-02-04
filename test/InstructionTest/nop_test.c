#include "../utest.h/utest.h"

#include <string.h>

#include "instructions.gen.h"
#include "state.h"

UTEST(InstructionTest, nop_linkage)
{
    struct SPC_State state;
    memset(&state, 0, sizeof(state));

    nop(&state, 2);
}

UTEST_MAIN()
