/* generated from generate_instructions.py: l.1303 */
#pragma once

#include <stdbool.h>

#include "state.h"

/* 0x00     NOP */
extern bool nop(struct SPC_State state[static 1], uint32_t cycle);
/* 0x20     CLRP */
extern bool clrp(struct SPC_State state[static 1], uint32_t cycle);
/* 0x40     SETP */
extern bool setp(struct SPC_State state[static 1], uint32_t cycle);
/* 0x60     CLRC */
extern bool clrc(struct SPC_State state[static 1], uint32_t cycle);
/* 0x80     SETC */
extern bool setc(struct SPC_State state[static 1], uint32_t cycle);
/* 0xe0     CLRV */
extern bool clrv(struct SPC_State state[static 1], uint32_t cycle);




/* 0x04     OR    A, d */
extern bool or_register_direct_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x14     OR    A, d+X */
extern bool or_register_direct_indexed_a_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0x24     AND   A, d */
extern bool and_register_direct_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x34     AND   A, d+X */
extern bool and_register_direct_indexed_a_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0x44     EOR   A, d */
extern bool eor_register_direct_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x54     EOR   A, d+X */
extern bool eor_register_direct_indexed_a_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0x64     CMP   A, d */
extern bool cmp_register_direct_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x74     CMP   A, d+X */
extern bool cmp_register_direct_indexed_a_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0x84     ADC   A, d */
extern bool adc_register_direct_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x94     ADC   A, d+X */
extern bool adc_register_direct_indexed_a_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0xa4     SBC   A, d */
extern bool sbc_register_direct_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0xb4     SBC   A, d+X */
extern bool sbc_register_direct_indexed_a_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0xe4     MOV   A, d */
extern bool mov_register_direct_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0xf4     MOV   A, d+X */
extern bool mov_register_direct_indexed_a_x(struct SPC_State state[static 1], uint32_t cycle);


/* 0x06     OR    A, (X) */
extern bool or_register_indirect(struct SPC_State state[static 1], uint32_t cycle);
/* 0x26     AND   A, (X) */
extern bool and_register_indirect(struct SPC_State state[static 1], uint32_t cycle);
/* 0x46     EOR   A, (X) */
extern bool eor_register_indirect(struct SPC_State state[static 1], uint32_t cycle);
/* 0x66     CMP   A, (X) */
extern bool cmp_register_indirect(struct SPC_State state[static 1], uint32_t cycle);
/* 0x86     ADC   A, (X) */
extern bool adc_register_indirect(struct SPC_State state[static 1], uint32_t cycle);
/* 0xa6     SBC   A, (X) */
extern bool sbc_register_indirect(struct SPC_State state[static 1], uint32_t cycle);
/* 0xe6     MOV   A, (X) */
extern bool mov_register_indirect(struct SPC_State state[static 1], uint32_t cycle);

/* 0x07     OR    A, [d+X] */
extern bool or_register_indexed_indirect(struct SPC_State state[static 1], uint32_t cycle);
/* 0x27     AND   A, [d+X] */
extern bool and_register_indexed_indirect(struct SPC_State state[static 1], uint32_t cycle);
/* 0x47     EOR   A, [d+X] */
extern bool eor_register_indexed_indirect(struct SPC_State state[static 1], uint32_t cycle);
/* 0x67     CMP   A, [d+X] */
extern bool cmp_register_indexed_indirect(struct SPC_State state[static 1], uint32_t cycle);
/* 0x87     ADC   A, [d+X] */
extern bool adc_register_indexed_indirect(struct SPC_State state[static 1], uint32_t cycle);
/* 0xa7     SBC   A, [d+X] */
extern bool sbc_register_indexed_indirect(struct SPC_State state[static 1], uint32_t cycle);
/* 0xe7     MOV   A, [d+X] */
extern bool mov_register_indexed_indirect(struct SPC_State state[static 1], uint32_t cycle);

/* 0x08     OR    A, #i */
extern bool or_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x28     AND   A, #i */
extern bool and_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x48     EOR   A, #i */
extern bool eor_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x68     CMP   A, #i */
extern bool cmp_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x88     ADC   A, #i */
extern bool adc_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0xa8     SBC   A, #i */
extern bool sbc_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0xc8     CMP   X, #i */
extern bool cmp_register_immediate_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0xe8     MOV   A, #i */
extern bool mov_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0xf8     MOV   X, d */
extern bool mov_register_direct_x(struct SPC_State state[static 1], uint32_t cycle);

/* 0xf9     MOV   X, d+Y */
extern bool mov_register_direct_indexed_x_y(struct SPC_State state[static 1], uint32_t cycle);


/* 0xeb     MOV   Y, d */
extern bool mov_register_direct_y(struct SPC_State state[static 1], uint32_t cycle);
/* 0xfb     MOV   Y, d+X */
extern bool mov_register_direct_indexed_y_x(struct SPC_State state[static 1], uint32_t cycle);


/* 0x5d     MOV   X, A */
extern bool mov_reg_reg_x_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x7d     MOV   A, X */
extern bool mov_reg_reg_a_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0x8d     MOV   Y, #i */
extern bool mov_register_immediate_y(struct SPC_State state[static 1], uint32_t cycle);
/* 0x9d     MOV   X, SP */
extern bool mov_reg_reg_x_sp(struct SPC_State state[static 1], uint32_t cycle);
/* 0xad     CMP   Y, #i */
extern bool cmp_register_immediate_y(struct SPC_State state[static 1], uint32_t cycle);
/* 0xbd     MOV   SP, X */
extern bool mov_reg_reg_sp_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0xcd     MOV   X, #i */
extern bool mov_register_immediate_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0xdd     MOV   A, Y */
extern bool mov_reg_reg_a_y(struct SPC_State state[static 1], uint32_t cycle);
/* 0xfd     MOV   Y, A */
extern bool mov_reg_reg_y_a(struct SPC_State state[static 1], uint32_t cycle);

/* 0x3e     CMP   X, d */
extern bool cmp_register_direct_x(struct SPC_State state[static 1], uint32_t cycle);

/* 0xbf     MOV   A, (X)+ */
extern bool mov_register_indirect_incremented(struct SPC_State state[static 1], uint32_t cycle);

