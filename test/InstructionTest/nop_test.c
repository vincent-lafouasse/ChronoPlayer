#include "../utest.h/utest.h"

#include <string.h>

#include "instructions.gen.h"
#include "state.h"

#define I_OK INSTRUCTION_STATUS_DONE
#define I_PENDING INSTRUCTION_STATUS_PENDING
#define I_ERROR INSTRUCTION_STATUS_UNEXPECTED_CYCLE

UTEST(InstructionTest, H00_NOP)
{
    struct SPC_State state;

    int cycle;
    enum InstructionStatus expected;
    enum InstructionStatus actual;

    cycle = 1;
    expected = I_ERROR;
    actual = nop(&state, cycle);
    ASSERT_EQ(expected, actual);

    cycle = 2;
    expected = I_OK;
    actual = nop(&state, cycle);
    ASSERT_EQ(expected, actual);

    cycle = 3;
    expected = I_ERROR;
    actual = nop(&state, cycle);
    ASSERT_EQ(expected, actual);
}

UTEST_MAIN()
