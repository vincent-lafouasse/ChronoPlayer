/* generated from generate_instructions.py: l.727 */
#pragma once

#include <stdbool.h>

#include "state.h"

/* 0x00     NOP */
extern bool nop(struct SPC_State state[static 1], uint32_t cycle);




/* 0x04     OR    A, d */
extern bool or_register_direct_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x24     AND   A, d */
extern bool and_register_direct_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x44     EOR   A, d */
extern bool eor_register_direct_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x64     CMP   A, d */
extern bool cmp_register_direct_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x84     ADC   A, d */
extern bool adc_register_direct_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0xa4     SBC   A, d */
extern bool sbc_register_direct_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0xe4     MOV   A, d */
extern bool mov_register_direct_a(struct SPC_State state[static 1], uint32_t cycle);




/* 0xf8     MOV   X, d */
extern bool mov_register_direct_x(struct SPC_State state[static 1], uint32_t cycle);



/* 0xeb     MOV   Y, d */
extern bool mov_register_direct_y(struct SPC_State state[static 1], uint32_t cycle);



/* 0x3e     CMP   X, d */
extern bool cmp_register_direct_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0x7e     CMP   Y, d */
extern bool cmp_register_direct_y(struct SPC_State state[static 1], uint32_t cycle);


