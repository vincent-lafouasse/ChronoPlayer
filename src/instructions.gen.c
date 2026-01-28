/* generated from generate_instructions.py: l.503 */

#include "instructions.gen.h"

#include <assert.h>

#include "bus_io.h"
#include "cpu.h"

/* 0x00 */
bool nop(struct SPC_State state[static 1], uint32_t cycle)
{
    /* generated from generate_instructions.py: l.334 */
    /* could do a dummy read but shouldn't matter */
    assert(cycle == 2);
    (void)state;
    return true;
}














/* 0x7d */
/* generated from generate_instructions.py: l.292 */
bool mov_reg_reg_a_x(struct SPC_State state[static 1], uint32_t cycle)
{
    struct CPU_State* const cpu = &state->cpu;

    /* could do a dummy read but shouldn't matter */
    assert(cycle == 2);

    /* payload */
    /* generated from generate_instructions.py: l.273 */
    cpu->a = cpu->x;
    {
        /* generated from generate_instructions.py: l.163 */
        const uint16_t v = cpu->a;
        psw_write_zero(cpu, v == 0);
        psw_write_neg(cpu, v & 0x80);
    }
    return true;
}




