#include "cpu.h"

#include <stdio.h>

int dump_spc_state(char buf[static 41],
                   size_t len,
                   const struct SPC700_State* s)
{
    return snprintf(
        buf, len, "A:%02x X:%02x Y:%02x S:%02x PC:%04x PSW:%c%c%c%c%c%c%c%c",
        s->a, s->x, s->y, s->sp, s->pc, (s->status & PSW_N) ? 'N' : 'n',
        (s->status & PSW_V) ? 'V' : 'v', (s->status & PSW_P) ? 'P' : 'p',
        (s->status & PSW_B) ? 'B' : 'b', (s->status & PSW_H) ? 'H' : 'h',
        (s->status & PSW_I) ? 'I' : 'i', (s->status & PSW_Z) ? 'Z' : 'z',
        (s->status & PSW_C) ? 'C' : 'c');
}
