/* generated from generate_instructions.py: l.3599 */
#pragma once

#include <stdbool.h>

#include "state.h"
#include "instruction.h"

/* 0x00     NOP */
extern enum InstructionStatus nop(struct SPC_State state[static 1], uint32_t cycle);
/* 0x20     CLRP */
extern enum InstructionStatus clrp(struct SPC_State state[static 1], uint32_t cycle);
/* 0x40     SETP */
extern enum InstructionStatus setp(struct SPC_State state[static 1], uint32_t cycle);
/* 0x60     CLRC */
extern enum InstructionStatus clrc(struct SPC_State state[static 1], uint32_t cycle);
/* 0x80     SETC */
extern enum InstructionStatus setc(struct SPC_State state[static 1], uint32_t cycle);
/* 0xe0     CLRV */
extern enum InstructionStatus clrv(struct SPC_State state[static 1], uint32_t cycle);

/* 0x01     TCALL 0 */
extern enum InstructionStatus tcall_0(struct SPC_State state[static 1], uint32_t cycle);
/* 0x11     TCALL 1 */
extern enum InstructionStatus tcall_1(struct SPC_State state[static 1], uint32_t cycle);
/* 0x21     TCALL 2 */
extern enum InstructionStatus tcall_2(struct SPC_State state[static 1], uint32_t cycle);
/* 0x31     TCALL 3 */
extern enum InstructionStatus tcall_3(struct SPC_State state[static 1], uint32_t cycle);
/* 0x41     TCALL 4 */
extern enum InstructionStatus tcall_4(struct SPC_State state[static 1], uint32_t cycle);
/* 0x51     TCALL 5 */
extern enum InstructionStatus tcall_5(struct SPC_State state[static 1], uint32_t cycle);
/* 0x61     TCALL 6 */
extern enum InstructionStatus tcall_6(struct SPC_State state[static 1], uint32_t cycle);
/* 0x71     TCALL 7 */
extern enum InstructionStatus tcall_7(struct SPC_State state[static 1], uint32_t cycle);
/* 0x81     TCALL 8 */
extern enum InstructionStatus tcall_8(struct SPC_State state[static 1], uint32_t cycle);
/* 0x91     TCALL 9 */
extern enum InstructionStatus tcall_9(struct SPC_State state[static 1], uint32_t cycle);
/* 0xa1     TCALL 10 */
extern enum InstructionStatus tcall_10(struct SPC_State state[static 1], uint32_t cycle);
/* 0xb1     TCALL 11 */
extern enum InstructionStatus tcall_11(struct SPC_State state[static 1], uint32_t cycle);
/* 0xc1     TCALL 12 */
extern enum InstructionStatus tcall_12(struct SPC_State state[static 1], uint32_t cycle);
/* 0xd1     TCALL 13 */
extern enum InstructionStatus tcall_13(struct SPC_State state[static 1], uint32_t cycle);
/* 0xe1     TCALL 14 */
extern enum InstructionStatus tcall_14(struct SPC_State state[static 1], uint32_t cycle);
/* 0xf1     TCALL 15 */
extern enum InstructionStatus tcall_15(struct SPC_State state[static 1], uint32_t cycle);

/* 0x02     SET1  d */
extern enum InstructionStatus set1_direct(struct SPC_State state[static 1], uint32_t cycle);
/* 0x12     CLR1  d */
extern enum InstructionStatus clr1_direct(struct SPC_State state[static 1], uint32_t cycle);
/* 0x22     SET1  d */
extern enum InstructionStatus set1_1_direct(struct SPC_State state[static 1], uint32_t cycle);
/* 0x32     CLR1  d */
extern enum InstructionStatus clr1_1_direct(struct SPC_State state[static 1], uint32_t cycle);
/* 0x42     SET1  d */
extern enum InstructionStatus set1_2_direct(struct SPC_State state[static 1], uint32_t cycle);
/* 0x52     CLR1  d */
extern enum InstructionStatus clr1_2_direct(struct SPC_State state[static 1], uint32_t cycle);
/* 0x62     SET1  d */
extern enum InstructionStatus set1_3_direct(struct SPC_State state[static 1], uint32_t cycle);
/* 0x72     CLR1  d */
extern enum InstructionStatus clr1_3_direct(struct SPC_State state[static 1], uint32_t cycle);
/* 0x82     SET1  d */
extern enum InstructionStatus set1_4_direct(struct SPC_State state[static 1], uint32_t cycle);
/* 0x92     CLR1  d */
extern enum InstructionStatus clr1_4_direct(struct SPC_State state[static 1], uint32_t cycle);
/* 0xa2     SET1  d */
extern enum InstructionStatus set1_5_direct(struct SPC_State state[static 1], uint32_t cycle);
/* 0xb2     CLR1  d */
extern enum InstructionStatus clr1_5_direct(struct SPC_State state[static 1], uint32_t cycle);
/* 0xc2     SET1  d */
extern enum InstructionStatus set1_6_direct(struct SPC_State state[static 1], uint32_t cycle);
/* 0xd2     CLR1  d */
extern enum InstructionStatus clr1_6_direct(struct SPC_State state[static 1], uint32_t cycle);
/* 0xe2     SET1  d */
extern enum InstructionStatus set1_7_direct(struct SPC_State state[static 1], uint32_t cycle);
/* 0xf2     CLR1  d */
extern enum InstructionStatus clr1_7_direct(struct SPC_State state[static 1], uint32_t cycle);


/* 0x04     OR    A, d */
extern enum InstructionStatus or_register_direct_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x14     OR    A, d+X */
extern enum InstructionStatus or_register_direct_indexed_a_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0x24     AND   A, d */
extern enum InstructionStatus and_register_direct_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x34     AND   A, d+X */
extern enum InstructionStatus and_register_direct_indexed_a_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0x44     EOR   A, d */
extern enum InstructionStatus eor_register_direct_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x54     EOR   A, d+X */
extern enum InstructionStatus eor_register_direct_indexed_a_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0x64     CMP   A, d */
extern enum InstructionStatus cmp_register_direct_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x74     CMP   A, d+X */
extern enum InstructionStatus cmp_register_direct_indexed_a_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0x84     ADC   A, d */
extern enum InstructionStatus adc_register_direct_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x94     ADC   A, d+X */
extern enum InstructionStatus adc_register_direct_indexed_a_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0xa4     SBC   A, d */
extern enum InstructionStatus sbc_register_direct_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0xb4     SBC   A, d+X */
extern enum InstructionStatus sbc_register_direct_indexed_a_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0xc4     MOV   d, a */
extern enum InstructionStatus mov_direct_register_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0xd4     MOV   d+x, a */
extern enum InstructionStatus mov_direct_indexed_register_x_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0xe4     MOV   A, d */
extern enum InstructionStatus mov_register_direct_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0xf4     MOV   A, d+X */
extern enum InstructionStatus mov_register_direct_indexed_a_x(struct SPC_State state[static 1], uint32_t cycle);

/* 0x05     OR    A, !a */
extern enum InstructionStatus or_register_absolute_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x15     OR    A, !a+X */
extern enum InstructionStatus or_register_absolute_indexed_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0x25     AND   A, !a */
extern enum InstructionStatus and_register_absolute_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x35     AND   A, !a+X */
extern enum InstructionStatus and_register_absolute_indexed_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0x45     EOR   A, !a */
extern enum InstructionStatus eor_register_absolute_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x55     EOR   A, !a+X */
extern enum InstructionStatus eor_register_absolute_indexed_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0x65     CMP   A, !a */
extern enum InstructionStatus cmp_register_absolute_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x75     CMP   A, !a+X */
extern enum InstructionStatus cmp_register_absolute_indexed_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0x85     ADC   A, !a */
extern enum InstructionStatus adc_register_absolute_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x95     ADC   A, !a+X */
extern enum InstructionStatus adc_register_absolute_indexed_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0xa5     SBC   A, !a */
extern enum InstructionStatus sbc_register_absolute_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0xb5     SBC   A, !a+X */
extern enum InstructionStatus sbc_register_absolute_indexed_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0xc5     MOV   !a, a */
extern enum InstructionStatus mov_absolute_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0xd5     MOV   !a+x, A */
extern enum InstructionStatus mov_absolute_indexed_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0xe5     MOV   A, !a */
extern enum InstructionStatus mov_register_absolute_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0xf5     MOV   A, !a+X */
extern enum InstructionStatus mov_register_absolute_indexed_x(struct SPC_State state[static 1], uint32_t cycle);

/* 0x06     OR    A, (X) */
extern enum InstructionStatus or_register_indirect(struct SPC_State state[static 1], uint32_t cycle);
/* 0x16     OR    A, !a+Y */
extern enum InstructionStatus or_register_absolute_indexed_y(struct SPC_State state[static 1], uint32_t cycle);
/* 0x26     AND   A, (X) */
extern enum InstructionStatus and_register_indirect(struct SPC_State state[static 1], uint32_t cycle);
/* 0x36     AND   A, !a+Y */
extern enum InstructionStatus and_register_absolute_indexed_y(struct SPC_State state[static 1], uint32_t cycle);
/* 0x46     EOR   A, (X) */
extern enum InstructionStatus eor_register_indirect(struct SPC_State state[static 1], uint32_t cycle);
/* 0x56     EOR   A, !a+Y */
extern enum InstructionStatus eor_register_absolute_indexed_y(struct SPC_State state[static 1], uint32_t cycle);
/* 0x66     CMP   A, (X) */
extern enum InstructionStatus cmp_register_indirect(struct SPC_State state[static 1], uint32_t cycle);
/* 0x76     CMP   A, !a+Y */
extern enum InstructionStatus cmp_register_absolute_indexed_y(struct SPC_State state[static 1], uint32_t cycle);
/* 0x86     ADC   A, (X) */
extern enum InstructionStatus adc_register_indirect(struct SPC_State state[static 1], uint32_t cycle);
/* 0x96     ADC   A, !a+Y */
extern enum InstructionStatus adc_register_absolute_indexed_y(struct SPC_State state[static 1], uint32_t cycle);
/* 0xa6     SBC   A, (X) */
extern enum InstructionStatus sbc_register_indirect(struct SPC_State state[static 1], uint32_t cycle);
/* 0xb6     SBC   A, !a+Y */
extern enum InstructionStatus sbc_register_absolute_indexed_y(struct SPC_State state[static 1], uint32_t cycle);
/* 0xc6     MOV   (X), A */
extern enum InstructionStatus mov_indirect_register(struct SPC_State state[static 1], uint32_t cycle);
/* 0xd6     MOV   !a+y, A */
extern enum InstructionStatus mov_absolute_indexed_y(struct SPC_State state[static 1], uint32_t cycle);
/* 0xe6     MOV   A, (X) */
extern enum InstructionStatus mov_register_indirect(struct SPC_State state[static 1], uint32_t cycle);
/* 0xf6     MOV   A, !a+Y */
extern enum InstructionStatus mov_register_absolute_indexed_y(struct SPC_State state[static 1], uint32_t cycle);

/* 0x07     OR    A, [d+X] */
extern enum InstructionStatus or_register_indexed_indirect(struct SPC_State state[static 1], uint32_t cycle);
/* 0x17     OR    A, [d]+Y */
extern enum InstructionStatus or_register_indirect_indexed(struct SPC_State state[static 1], uint32_t cycle);
/* 0x27     AND   A, [d+X] */
extern enum InstructionStatus and_register_indexed_indirect(struct SPC_State state[static 1], uint32_t cycle);
/* 0x37     AND   A, [d]+Y */
extern enum InstructionStatus and_register_indirect_indexed(struct SPC_State state[static 1], uint32_t cycle);
/* 0x47     EOR   A, [d+X] */
extern enum InstructionStatus eor_register_indexed_indirect(struct SPC_State state[static 1], uint32_t cycle);
/* 0x57     EOR   A, [d]+Y */
extern enum InstructionStatus eor_register_indirect_indexed(struct SPC_State state[static 1], uint32_t cycle);
/* 0x67     CMP   A, [d+X] */
extern enum InstructionStatus cmp_register_indexed_indirect(struct SPC_State state[static 1], uint32_t cycle);
/* 0x77     CMP   A, [d]+Y */
extern enum InstructionStatus cmp_register_indirect_indexed(struct SPC_State state[static 1], uint32_t cycle);
/* 0x87     ADC   A, [d+X] */
extern enum InstructionStatus adc_register_indexed_indirect(struct SPC_State state[static 1], uint32_t cycle);
/* 0x97     ADC   A, [d]+Y */
extern enum InstructionStatus adc_register_indirect_indexed(struct SPC_State state[static 1], uint32_t cycle);
/* 0xa7     SBC   A, [d+X] */
extern enum InstructionStatus sbc_register_indexed_indirect(struct SPC_State state[static 1], uint32_t cycle);
/* 0xb7     SBC   A, [d]+Y */
extern enum InstructionStatus sbc_register_indirect_indexed(struct SPC_State state[static 1], uint32_t cycle);
/* 0xc7     MOV   [d+X],A */
extern enum InstructionStatus mov_indexed_indirect_register(struct SPC_State state[static 1], uint32_t cycle);
/* 0xd7     MOV   [d]+Y,A */
extern enum InstructionStatus mov_indirect_indexed_register(struct SPC_State state[static 1], uint32_t cycle);
/* 0xe7     MOV   A, [d+X] */
extern enum InstructionStatus mov_register_indexed_indirect(struct SPC_State state[static 1], uint32_t cycle);
/* 0xf7     MOV   A, [d]+Y */
extern enum InstructionStatus mov_register_indirect_indexed(struct SPC_State state[static 1], uint32_t cycle);

/* 0x08     OR    A, #i */
extern enum InstructionStatus or_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x18     OR    d, #i */
extern enum InstructionStatus or_direct_immediate(struct SPC_State state[static 1], uint32_t cycle);
/* 0x28     AND   A, #i */
extern enum InstructionStatus and_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x38     AND   d, #i */
extern enum InstructionStatus and_direct_immediate(struct SPC_State state[static 1], uint32_t cycle);
/* 0x48     EOR   A, #i */
extern enum InstructionStatus eor_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x58     EOR   d, #i */
extern enum InstructionStatus eor_direct_immediate(struct SPC_State state[static 1], uint32_t cycle);
/* 0x68     CMP   A, #i */
extern enum InstructionStatus cmp_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x78     CMP   d, #i */
extern enum InstructionStatus cmp_direct_immediate(struct SPC_State state[static 1], uint32_t cycle);
/* 0x88     ADC   A, #i */
extern enum InstructionStatus adc_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x98     ADC   d, #i */
extern enum InstructionStatus adc_direct_immediate(struct SPC_State state[static 1], uint32_t cycle);
/* 0xa8     SBC   A, #i */
extern enum InstructionStatus sbc_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0xb8     SBC   d, #i */
extern enum InstructionStatus sbc_direct_immediate(struct SPC_State state[static 1], uint32_t cycle);
/* 0xc8     CMP   X, #i */
extern enum InstructionStatus cmp_register_immediate_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0xd8     MOV   d, x */
extern enum InstructionStatus mov_direct_register_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0xe8     MOV   A, #i */
extern enum InstructionStatus mov_register_immediate_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0xf8     MOV   X, d */
extern enum InstructionStatus mov_register_direct_x(struct SPC_State state[static 1], uint32_t cycle);

/* 0x09     OR    dd, ds */
extern enum InstructionStatus or_direct_direct(struct SPC_State state[static 1], uint32_t cycle);
/* 0x19     OR    (X), (Y) */
extern enum InstructionStatus or_indirect_indirect(struct SPC_State state[static 1], uint32_t cycle);
/* 0x29     AND   dd, ds */
extern enum InstructionStatus and_direct_direct(struct SPC_State state[static 1], uint32_t cycle);
/* 0x39     AND   (X), (Y) */
extern enum InstructionStatus and_indirect_indirect(struct SPC_State state[static 1], uint32_t cycle);
/* 0x49     EOR   dd, ds */
extern enum InstructionStatus eor_direct_direct(struct SPC_State state[static 1], uint32_t cycle);
/* 0x59     EOR   (X), (Y) */
extern enum InstructionStatus eor_indirect_indirect(struct SPC_State state[static 1], uint32_t cycle);
/* 0x69     CMP   dd, ds */
extern enum InstructionStatus cmp_direct_direct(struct SPC_State state[static 1], uint32_t cycle);
/* 0x79     CMP   (X), (Y) */
extern enum InstructionStatus cmp_indirect_indirect(struct SPC_State state[static 1], uint32_t cycle);
/* 0x89     ADC   dd, ds */
extern enum InstructionStatus adc_direct_direct(struct SPC_State state[static 1], uint32_t cycle);
/* 0x99     ADC   (X), (Y) */
extern enum InstructionStatus adc_indirect_indirect(struct SPC_State state[static 1], uint32_t cycle);
/* 0xa9     SBC   dd, ds */
extern enum InstructionStatus sbc_direct_direct(struct SPC_State state[static 1], uint32_t cycle);
/* 0xb9     SBC   (X), (Y) */
extern enum InstructionStatus sbc_indirect_indirect(struct SPC_State state[static 1], uint32_t cycle);
/* 0xc9     MOV   !a, x */
extern enum InstructionStatus mov_absolute_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0xd9     MOV   d+y, x */
extern enum InstructionStatus mov_direct_indexed_register_y_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0xe9     MOV   X, !a */
extern enum InstructionStatus mov_register_absolute_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0xf9     MOV   X, d+Y */
extern enum InstructionStatus mov_register_direct_indexed_x_y(struct SPC_State state[static 1], uint32_t cycle);

/* 0xea     NOT1  m.b */
extern enum InstructionStatus not1(struct SPC_State state[static 1], uint32_t cycle);
/* 0xfa     MOV   dd, ds */
extern enum InstructionStatus mov_direct_direct(struct SPC_State state[static 1], uint32_t cycle);

/* 0x0b     ASL   d */
extern enum InstructionStatus asl_direct(struct SPC_State state[static 1], uint32_t cycle);
/* 0x1b     ASL   d+X */
extern enum InstructionStatus asl_direct_indexed(struct SPC_State state[static 1], uint32_t cycle);
/* 0x2b     ROL   d */
extern enum InstructionStatus rol_direct(struct SPC_State state[static 1], uint32_t cycle);
/* 0x3b     ROL   d+X */
extern enum InstructionStatus rol_direct_indexed(struct SPC_State state[static 1], uint32_t cycle);
/* 0x4b     LSR   d */
extern enum InstructionStatus lsr_direct(struct SPC_State state[static 1], uint32_t cycle);
/* 0x5b     LSR   d+X */
extern enum InstructionStatus lsr_direct_indexed(struct SPC_State state[static 1], uint32_t cycle);
/* 0x6b     ROR   d */
extern enum InstructionStatus ror_direct(struct SPC_State state[static 1], uint32_t cycle);
/* 0x7b     ROR   d+X */
extern enum InstructionStatus ror_direct_indexed(struct SPC_State state[static 1], uint32_t cycle);
/* 0x8b     DEC   d */
extern enum InstructionStatus dec_direct(struct SPC_State state[static 1], uint32_t cycle);
/* 0x9b     DEC   d+X */
extern enum InstructionStatus dec_direct_indexed(struct SPC_State state[static 1], uint32_t cycle);
/* 0xab     INC   d */
extern enum InstructionStatus inc_direct(struct SPC_State state[static 1], uint32_t cycle);
/* 0xbb     INC   d+X */
extern enum InstructionStatus inc_direct_indexed(struct SPC_State state[static 1], uint32_t cycle);
/* 0xcb     MOV   d, y */
extern enum InstructionStatus mov_direct_register_y(struct SPC_State state[static 1], uint32_t cycle);
/* 0xdb     MOV   d+x, y */
extern enum InstructionStatus mov_direct_indexed_register_x_y(struct SPC_State state[static 1], uint32_t cycle);
/* 0xeb     MOV   Y, d */
extern enum InstructionStatus mov_register_direct_y(struct SPC_State state[static 1], uint32_t cycle);
/* 0xfb     MOV   Y, d+X */
extern enum InstructionStatus mov_register_direct_indexed_y_x(struct SPC_State state[static 1], uint32_t cycle);

/* 0x0c     ASL   !a */
extern enum InstructionStatus asl_absolute(struct SPC_State state[static 1], uint32_t cycle);
/* 0x2c     ROL   !a */
extern enum InstructionStatus rol_absolute(struct SPC_State state[static 1], uint32_t cycle);
/* 0x4c     LSR   !a */
extern enum InstructionStatus lsr_absolute(struct SPC_State state[static 1], uint32_t cycle);
/* 0x6c     ROR   !a */
extern enum InstructionStatus ror_absolute(struct SPC_State state[static 1], uint32_t cycle);
/* 0x8c     DEC   !a */
extern enum InstructionStatus dec_absolute(struct SPC_State state[static 1], uint32_t cycle);
/* 0xac     INC   !a */
extern enum InstructionStatus inc_absolute(struct SPC_State state[static 1], uint32_t cycle);
/* 0xcc     MOV   !a, y */
extern enum InstructionStatus mov_absolute_y(struct SPC_State state[static 1], uint32_t cycle);
/* 0xec     MOV   Y, !a */
extern enum InstructionStatus mov_register_absolute_y(struct SPC_State state[static 1], uint32_t cycle);

/* 0x5d     MOV   X, A */
extern enum InstructionStatus mov_reg_reg_x_a(struct SPC_State state[static 1], uint32_t cycle);
/* 0x7d     MOV   A, X */
extern enum InstructionStatus mov_reg_reg_a_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0x8d     MOV   Y, #i */
extern enum InstructionStatus mov_register_immediate_y(struct SPC_State state[static 1], uint32_t cycle);
/* 0x9d     MOV   X, SP */
extern enum InstructionStatus mov_reg_reg_x_sp(struct SPC_State state[static 1], uint32_t cycle);
/* 0xad     CMP   Y, #i */
extern enum InstructionStatus cmp_register_immediate_y(struct SPC_State state[static 1], uint32_t cycle);
/* 0xbd     MOV   SP, X */
extern enum InstructionStatus mov_reg_reg_sp_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0xcd     MOV   X, #i */
extern enum InstructionStatus mov_register_immediate_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0xdd     MOV   A, Y */
extern enum InstructionStatus mov_reg_reg_a_y(struct SPC_State state[static 1], uint32_t cycle);
/* 0xfd     MOV   Y, A */
extern enum InstructionStatus mov_reg_reg_y_a(struct SPC_State state[static 1], uint32_t cycle);

/* 0x1e     CMP   X, !a */
extern enum InstructionStatus cmp_register_absolute_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0x3e     CMP   X, d */
extern enum InstructionStatus cmp_register_direct_x(struct SPC_State state[static 1], uint32_t cycle);
/* 0x5e     CMP   Y, !a */
extern enum InstructionStatus cmp_register_absolute_y(struct SPC_State state[static 1], uint32_t cycle);

/* 0x8f     MOV   d, #i */
extern enum InstructionStatus mov_direct_immediate(struct SPC_State state[static 1], uint32_t cycle);
/* 0xaf     MOV   (X)+, A */
extern enum InstructionStatus mov_indirect_incremented_register(struct SPC_State state[static 1], uint32_t cycle);
/* 0xbf     MOV   A, (X)+ */
extern enum InstructionStatus mov_register_indirect_incremented(struct SPC_State state[static 1], uint32_t cycle);

