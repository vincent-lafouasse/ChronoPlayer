#include <stdbool.h>

#include "state.h"

#include <assert.h>
#include <stdio.h>

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

#define DSP_EFFC(i) ((i) << 4 | 0xf)

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

struct VoiceRegisters* voice_registers(struct DSP_State dsp[static 1],
                                       uint8_t voice)
{
    assert(voice < 8);

    const size_t offset = AS_U16(voice) << 4;
    const uint8_t* alias = dsp->registers + offset;
    return (struct VoiceRegisters*)alias;
}

const struct VoiceRegisters* voice_registers_const(
    const struct DSP_State dsp[static 1],
    uint8_t voice)
{
    return voice_registers((struct DSP_State*)dsp, voice);
}

struct BRR_Sample {
    uint16_t start;  // where the sample starts
    uint16_t loop;   // where to go to block end
};

struct BRR_Sample identify_sample(const struct SPC_State state[static 1])
{
    const struct DSP_State* const dsp = &state->dsp;

    const uint8_t sample_table_msb = dsp->registers[0x5d];
    const uint16_t sample_table = AS_U16(sample_table_msb) << 8;
    printf("samples start at 0x%04x\n", sample_table);

    // voice 0 only for now
    // msn is 0
    const struct VoiceRegisters* voice_regs = voice_registers_const(dsp, 0);

    const uint16_t sample_location_offset = 4 * AS_U16(voice_regs->srcn);
    const uint16_t sample_location = sample_table + sample_location_offset;

    const uint8_t start_lo = state->aram[sample_location];
    const uint8_t start_hi = state->aram[sample_location + 1];
    const uint8_t loop_lo = state->aram[sample_location + 2];
    const uint8_t loop_hi = state->aram[sample_location + 3];

    return (struct BRR_Sample){
        .start = u16_parse(start_lo, start_hi),
        .loop = u16_parse(loop_lo, loop_hi),
    };
}

struct BRR_Block {
    uint8_t header;   // ssss'ffle
    uint8_t data[8];  // actually i4[16]
};

static inline const struct BRR_Block* brr_block_at(
    const uint8_t aram[static 0x10000],
    uint16_t offset)
{
    return (const struct BRR_Block*)(aram + offset);
}

static inline uint8_t brr_shift(const struct BRR_Block* block)
{
    return (block->header) >> 4;
}

static inline uint8_t brr_filter(const struct BRR_Block* block)
{
    return (block->header >> 2) & 0x3;
}

static inline bool brr_loop(const struct BRR_Block* block)
{
    return bit_at(block->header, 1);
}

static inline bool brr_end(const struct BRR_Block* block)
{
    return bit_at(block->header, 0);
}

static inline int8_t brr_nibble(const struct BRR_Block* block, uint8_t index)
{
    assert(index < 16);

    const uint8_t byte = block->data[index >> 1];  // index / 2

    if (index & 1) {
        // Odd index: low nibble, sign-extend
        return (int8_t)(byte << 4) >> 4;
    } else {
        // Even index: high nibble, sign-extend
        return (int8_t)(byte & 0xf0) >> 4;
    }
}

int main(void)
{
    const char* spc_path = "./spc/304 Corridors of Time.spc";

    struct SPC_State spc_state;
    load_spc_or_exit(spc_path, &spc_state);

    const struct BRR_Sample sample0 = identify_sample(&spc_state);
    printf("Sample at:\n");
    printf("    start: 0x%04x\n", sample0.start);
    printf("    loop : 0x%04x\n", sample0.loop);

    const uint16_t span_size = sample0.loop - sample0.start;
    printf("\nSpan size: %u\n", span_size);
    if (span_size % 9 != 0) {
        printf("Weird, there's not a round number of BRR blocks\n");
    } else {
        printf("there are %u blocks between start and loop\n", span_size / 9);
    }
}
