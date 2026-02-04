#include <stdbool.h>

#include "bus_io.h"
#include "cpu.h"
#include "state.h"
#include "utils.h"

bool dispatch_execution_tick(struct SPC_State* state)
{
    (void)state;

    const bool dummy = true;
    return dummy;
}

// a single sub-instruction clock tick
void cpu_tick(struct SPC_State* state)
{
    struct CPU_State* cpu = &state->cpu;

    if (cpu->instruction_cycle == 1) {
        cpu->addr = cpu->pc++;  // latch the program counter
        cpu->opcode = bus_read(state, cpu->addr);
        return;
    }

    const bool done = dispatch_execution_tick(state);
    if (done) {
        cpu->instruction_cycle = 1;
    } else {
        cpu->instruction_cycle++;
    }
}

// /*
//  8 Register, Absolute -- A,!a; X,!a; Y,!a
//   (ADC,AND,CMP,CMP,CMP,EOR,MOV,MOV,MOV,OR,SBC)
//   (3 bytes)
//   (4 cycles)
//         1       PC      Op Code         1
//         2       PC+1    AAL             1
//         3       PC+2    AAH             1
//         4       AA      Data            1
//     * Verified by blargg.
//     * 2 and 3 could be swapped, but that would be odd.
// */
//
// // returns true when done
// // AND A, !a
// bool and_accumulator_absolute(struct SPC_State* state, uint32_t cycle)
// {
//     static uint16_t addr;
//
//     struct CPU_State* cpu = &state->cpu;
//     uint8_t data;
//
//     // cycle 1 already burned
//     switch (cycle) {
//         case 2:
//             addr = bus_read(state, cpu->pc++);
//             return false;
//         case 3:
//             addr |= (uint16_t)bus_read(state, cpu->pc++) << 8;
//             return false;
//         case 4:
//             data = bus_read(state, addr);
//             cpu->a &= data;
//             // TODO: update psw
//             return true;
//         default:
//             // unreachable
//             // could put an assert here
//             return true;
//     }
// }
//
// /*
//  22 Absolute (RMW) -- !a
//   (ASL,DEC,INC,LSR,ROL,ROR,TCLR1,TSET1)
//   (3 bytes)
//   (5 or 6 cycles)
//         1       PC      Op Code         1
//         2       PC+1    AAL             1
//         3       PC+2    AAH             1
//        [4]      AA      Data (read)     1
//         5       AA      Data (read)     1
//         6       AA      Data (write)    1
//     * Verified by blargg.
//     * 2 and 3 could be swapped, but that would be odd.
//     * Cycle 4 only for TSET1 and TCLR1.
// */
// // INC !a
// // (a)++
// bool inc_absolute(struct SPC_State* state, uint32_t cycle)
// {
//     static uint16_t addr;
//     static uint8_t data;
//
//     struct CPU_State* cpu = &state->cpu;
//
//     switch (cycle) {
//         case 2:
//             addr = bus_read(state, cpu->pc++);
//             return false;
//         case 3:
//             addr |= (uint16_t)bus_read(state, cpu->pc++) << 8;
//             return false;
//
//         case 4:
//             data = bus_read(state, addr);
//             return false;
//         case 5:
//             data++;
//             // TODO: flags
//             bus_write(state, addr, data);
//             return true;
//
//         default:
//             // unreachable
//             return true;
//     }
// }
// /*
//
//  10 Direct, Immediate -- d,#i
//   (ADC,AND,CMP,EOR,MOV,OR,SBC)
//   (3 bytes)
//   (5 cycles)
//         1       PC      Op Code         1
//         2       PC+1    Data 1          1
//         3       PC+2    DO              1
//         4       DO      Data 2 (read)   1
//         5       DO      Data 2 (write)  0
//     * Verified by blargg. 2 and 3 could be swapped, but that's unlikely.
//     * Yes, RMW even for MOV.
//     * CMP does not write for cycle 5; does it IO or read again?
// */
//
// // MOV d, #i
// bool mov_direct_immediate(struct SPC_State* state, uint32_t cycle)
// {
//     static uint16_t addr;
//     static uint8_t value;
//
//     struct CPU_State* cpu = &state->cpu;
//
//     switch (cycle) {
//         case 2:
//             value = bus_read(state, cpu->pc++);
//             return false;
//
//         case 3: {
//             uint8_t offset = bus_read(state, cpu->pc++);
//             uint8_t page = !!(cpu->status & PSW_P);
//             addr = u16_parse(offset, page);  // lsb msb
//             return false;
//         }
//
//         case 4:
//             // yes RMW even though we don't need the value we're about to
//             // overwrite
//             (void)bus_read(state, addr);
//             return false;
//
//         case 5:
//             bus_write(state, addr, value);
//             return true;
//
//         default:
//             return true;
//     }
// }
//
// /*
//  24 MemBit, Carry -- m.b,C
//   MOV1  m.b, C       CA    3     6   (m.b) = C ........ (MOV1) (3 bytes) (6
//   cycles)
//         1       PC      Op Code         1
//         2       PC+1    AAL             1
//         3       PC+2    AAH & BIT       1
//         4       AA      Data (read)     1
//         5       ??      IO              ?
//         6       AA      Data (write)    0
//     * Verified by blargg. 2 and 3 could be swapped, but that's unlikely.
// */
//
// // MOV1 m.b, C
// bool mov1_membit_carry(struct SPC_State* state, uint32_t cycle)
// {
//     static uint16_t addr;
//     static uint8_t bit_index;
//     static uint8_t data;
//
//     struct CPU_State* cpu = &state->cpu;
//
//     switch (cycle) {
//         case 2:
//             addr = bus_read(state, cpu->pc++);
//             return false;
//
//         case 3: {
//             // BBBA'AAAA
//             // BBB indexes the bit 0-7
//             // 000A'AAAA is the msb of the address
//             uint8_t raw_hi = bus_read(state, cpu->pc++);
//             bit_index = raw_hi >> 5;
//             addr = u16_parse(addr, raw_hi & 0x1f);
//             return false;
//         }
//
//         case 4:
//             // RMW Read
//             data = bus_read(state, addr);
//             return false;
//
//         case 5:
//             // Internal Operation
//             // RMW Modify
//             // could be done right before the write, doesn't really matter
//             but
//             // neater like this
//             bit_write(&data, bit_index, (cpu->status & PSW_C));
//             return false;
//
//         case 6:
//             // RMW Write
//             bus_write(state, addr, data);
//             return true;
//
//         default:
//             return true;
//     }
// }

int main(void)
{
    const char* spc_path = "./spc/304 Corridors of Time.spc";

    struct SPC_State spc_state;
    load_spc_or_exit(spc_path, &spc_state);
}
