#pragma once

#include <stdint.h>
#include <assert.h>

#include "utils.h"

struct BRR_Block {
    uint8_t header;   // ssss'ffle
    uint8_t data[8];  // actually i4[16]
};

// filters have a delay of 2 samples and need a 2 sample buffer
struct BRR_Context {
    int16_t prev;
    int16_t prevprev;
};

int16_t brr_decode_sample(const struct BRR_Block block[static 1],
                          uint8_t index,
                          struct BRR_Context ctx[static 1]);

void brr_decode_block(const struct BRR_Block block[static 1],
                      int16_t buffer[static 16],
                      struct BRR_Context ctx[static 1]);

static inline const struct BRR_Block* brr_block_at(
    const uint8_t aram[static 0x10000],
    uint16_t offset);

static inline uint8_t brr_shift(const struct BRR_Block* block);
static inline uint8_t brr_filter(const struct BRR_Block* block);
static inline bool brr_is_last_block(const struct BRR_Block* block);
static inline bool brr_should_loop(const struct BRR_Block* block);
static inline int8_t brr_nibble(const struct BRR_Block* block, uint8_t index);

// implementation

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

static inline bool brr_is_last_block(const struct BRR_Block* block)
{
    // END flag (bit 0): 0 = last block, 1 = continue to next block
    return bit_at(block->header, 0) == 0;
}

static inline bool brr_should_loop(const struct BRR_Block* block)
{
    // LOOP flag (bit 1): 1 = loop back to loop point, 0 = terminate
    return bit_at(block->header, 1);
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
