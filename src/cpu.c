#include "cpu.h"

#include <stdio.h>

int dump_cpu_state(char buf[static 41], size_t len, const struct CPU_State* cpu)
{
    return snprintf(
        buf, len, "A:%02x X:%02x Y:%02x S:%02x PC:%04x PSW:%c%c%c%c%c%c%c%c",
        cpu->a, cpu->x, cpu->y, cpu->sp, cpu->pc,
        (cpu->status & PSW_N) ? 'N' : 'n', (cpu->status & PSW_V) ? 'V' : 'v',
        (cpu->status & PSW_P) ? 'P' : 'p', (cpu->status & PSW_B) ? 'B' : 'b',
        (cpu->status & PSW_H) ? 'H' : 'h', (cpu->status & PSW_I) ? 'I' : 'i',
        (cpu->status & PSW_Z) ? 'Z' : 'z', (cpu->status & PSW_C) ? 'C' : 'c');
}
