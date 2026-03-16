#pragma once

#include <assert.h>
#include <stddef.h>
#include <stdint.h>

#include "state.h"
#include "utils.h"

#define DSP_V_VOLL(voice) ((voice) << 4 | 0x0)
#define DSP_V_VOLR(voice) ((voice) << 4 | 0x1)
#define DSP_V_PITCHL(voice) ((voice) << 4 | 0x2)
#define DSP_V_PITCHH(voice) ((voice) << 4 | 0x3)
#define DSP_V_SRCN(voice) ((voice) << 4 | 0x4)
#define DSP_V_ADSR1(voice) ((voice) << 4 | 0x5)
#define DSP_V_ADSR2(voice) ((voice) << 4 | 0x6)
#define DSP_V_GAIN(voice) ((voice) << 4 | 0x7)
#define DSP_V_ENVX(voice) ((voice) << 4 | 0x8)
#define DSP_V_OUTX(voice) ((voice) << 4 | 0x9)

#define DSP_MVOLL (0x0c)
#define DSP_MVOLR (0x1c)
#define DSP_EVOLL (0x2c)
#define DSP_EVOLR (0x3c)
#define DSP_KON (0x4c)
#define DSP_KOFF (0x5c)
#define DSP_FLG (0x6c)
#define DSP_ENDX (0x7c)

#define DSP_EFB (0x0d)
#define DSP_PMON (0x2d)
#define DSP_NON (0x3d)
#define DSP_EON (0x4d)
#define DSP_DIR (0x5d)
#define DSP_ESA (0x6d)
#define DSP_EDL (0x7d)

#define DSP_FFC(i) ((i) << 4 | 0xf)

void voice_step1(struct DSP_State dsp[static 1], uint8_t voice_i);

struct VoiceRegisters {
    uint8_t vol_left;    // $x0 VxVOLL
    uint8_t vol_right;   // $x1 VxVOLR
    uint8_t pitch_low;   // $x2 VxPITCHL
    uint8_t pitch_high;  // $x3 VxPITCHH
    uint8_t srcn;        // $x4 VxSRCN
    uint8_t adsr1;       // $x5 VxADSR1
    uint8_t adsr2;       // $x6 VxADSR2
    uint8_t gain;        // $x7 VxGAIN
    uint8_t envx;        // $x8 VxENVX
    uint8_t outx;        // $x9 VxOUTX
    uint8_t unused[6];   // $xA-$xF
};

static inline const struct VoiceRegisters* voice_registers(
    const struct DSP_State dsp[static 1],
    uint8_t voice)
{
    assert(voice < 8);

    const size_t offset = AS_U16(voice) << 4;
    const uint8_t* alias = dsp->registers + offset;
    return (const struct VoiceRegisters*)alias;
}

struct VoiceInstrument {
    uint16_t start;  // where the sample starts
    uint16_t loop;   // where to go to block end
};

struct VoiceInstrument get_instrument(const struct SPC_State state[static 1],
                                      size_t index);
int16_t* extract_instrument(const struct VoiceInstrument instrument[static 1],
                            const uint8_t aram[static 0x10000],
                            size_t* len_out);
bool dump_instrument(const struct VoiceInstrument instr[static 1],
                     const uint8_t aram[static 0x10000],
                     const char* path);

extern const int32_t gaussian_table[512];
