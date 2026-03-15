#include "brr.h"

int16_t brr_decode_sample(const struct BRR_Block block[static 1],
                          uint8_t index,
                          struct BRR_Context ctx[static 1])
{
    assert(index < 16);

    // shift should be in 0..=12
    // shifts above that would overflow and saturate based on sign instead
    const uint8_t shift = brr_shift(block);

    int32_t sample = brr_nibble(block, index);
    if (shift <= 12) {
        sample = (sample << shift) >> 1;
    } else {
        sample = (sample >= 0) ? 0 : -2048;
    }

    const uint8_t filter = brr_filter(block);

    // up to second order recursive filter
    // uses fixed point arithmetic
    //
    // reference:
    // There are 4 possible 'filters' to use in decoding the blocks. Some
    // filters use
    // previous samples in decoding, this does carry over between groups and
    // blocks and is separate for each voice.
    //   Filter 0 (Direct):       S(x) = RD
    //   Filter 1 (15/16):        S(x) = RD + S(x-1) + ((-S(x-1))>>4)
    //   Filter 2 (61/32-15/16):  S(x) = RD + (S(x-1)<<1) +
    //                                   ((-((S(x-1)<<1)+S(x-1)))>>5)
    //                                      - S(x-2) + (S(x-2)>>4)
    //   Filter 3 (115/64-13/16): S(x) = RD + (S(x-1)<<1) +
    //                        ((-(S(x-1)+(S(x-1)<<2)+(S(x-1)<<3)))>>6)
    //                          - S(x-2) + (((S(x-2)<<1) + S(x-2))>>4)
    switch (filter) {
        case 0:
            // direct: filter 0 does nothing
            break;

        case 1:  // 15/16 ie +1 - 1/16
            sample += ctx->prev - (ctx->prev >> 4);
            break;

        case 2:  // 61/32 - 15/16
            sample += (ctx->prev << 1);
            sample -= ((ctx->prev << 1) + ctx->prev) >> 5;
            sample -= ctx->prevprev;
            sample += ctx->prevprev >> 4;
            break;

        case 3:  // 115/64 - 13/16
            sample += (ctx->prev << 1);
            sample -= (ctx->prev + (ctx->prev << 2) + (ctx->prev << 3)) >> 6;
            sample -= ctx->prevprev;
            sample += ((ctx->prevprev << 1) + ctx->prevprev) >> 4;
            break;
    }

    // Clamp to 16 bits
    if (sample > 32767) {
        sample = 32767;
    }
    if (sample < -32768) {
        sample = -32768;
    }

    // Clip to 15 bits (drop low bit)
    const int16_t result = sample & 0xFFFE;

    // Update history
    ctx->prevprev = ctx->prev;
    ctx->prev = result;

    return result;
}

void brr_decode_block(const struct BRR_Block block[static 1],
                      int16_t buffer[static 16],
                      struct BRR_Context ctx[static 1])
{
    for (uint8_t i = 0; i < 16; i++) {
        buffer[i] = brr_decode_sample(block, i, ctx);
    }
}
