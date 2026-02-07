#include <stdbool.h>

#include "state.h"

#include <assert.h>
#include <stdio.h>

#include "utils.h"

#define DSP_V_VOLL(voice)   ((voice) << 4 | 0x0)
#define DSP_V_VOLR(voice)   ((voice) << 4 | 0x1)
#define DSP_V_PITCHL(voice) ((voice) << 4 | 0x2)
#define DSP_V_PITCHH(voice) ((voice) << 4 | 0x3)
#define DSP_V_SRCN(voice)   ((voice) << 4 | 0x4)
#define DSP_V_ADSR1(voice)  ((voice) << 4 | 0x5)
#define DSP_V_ADSR2(voice)  ((voice) << 4 | 0x6)
#define DSP_V_GAIN(voice)   ((voice) << 4 | 0x7)
#define DSP_V_ENVX(voice)   ((voice) << 4 | 0x8)
#define DSP_V_OUTX(voice)   ((voice) << 4 | 0x9)

struct BRR_Sample {
    uint16_t start;  // where the sample starts
    uint16_t loop;   // where to go to block end
};

struct BRR_Sample identify_sample(const struct DSP_State dsp[static 1])
{
    const uint8_t sample_table_msb = dsp->registers[0x5d];
    const uint16_t sample_table = AS_U16(sample_table_msb) << 8;
    printf("samples start at 0x%04x\n", sample_table);

    // voice 0 only for now
    // msn is 0
    const int8_t v0_voll = (int8_t)dsp->registers[0x00];
    const int8_t v0_volr = (int8_t)dsp->registers[0x01];

    const uint8_t v0_pitch_hl = dsp->registers[0x02];
    const uint8_t v0_pitch_hh = dsp->registers[0x03] & 0x3f;
    const uint16_t v0_pitch = u16_parse(v0_pitch_hl, v0_pitch_hh);

    const uint8_t v0_srcn = dsp->registers[0x04];
    const uint16_t v0_sample_location = sample_table + v0_srcn;

    struct BRR_Sample sample = {0};

    return sample;
}

int main(void)
{
    const char* spc_path = "./spc/304 Corridors of Time.spc";

    struct SPC_State spc_state;
    load_spc_or_exit(spc_path, &spc_state);

    (void)identify_sample(&spc_state.dsp);
}
