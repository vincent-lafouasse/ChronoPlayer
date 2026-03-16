#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#include "dsp/dsp_internals.h"
#include "load/load.h"

int main(void)
{
    const char* spc_path = "./spc/304 Corridors of Time.spc";

    struct SPC_State spc_state;
    load_spc_or_exit(spc_path, &spc_state);

    char path[256] = {0};
    for (int i = 0; i < 8; i++) {
        const struct VoiceInstrument instr = get_instrument(&spc_state, i);
        snprintf(path, sizeof(path), "local/instrument%i.pcm", i);
        dump_instrument(&instr, spc_state.aram, path);
        memset(path, 0, sizeof(path));
    }

    return 0;
}
