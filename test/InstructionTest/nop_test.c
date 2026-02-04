#include "../utest.h/utest.h"

#include <string.h>

#include "instructions.gen.h"
#include "state.h"

#define I_OK INSTRUCTION_STATUS_DONE
#define I_PENDING INSTRUCTION_STATUS_PENDING
#define I_ERROR INSTRUCTION_STATUS_UNEXPECTED_CYCLE

enum IoType {
    IO_READ,
    IO_WRITE,
};

struct BusEvent {
    uint64_t total_cycles;
    uint8_t instruction_cycle;
    uint8_t value;
    uint16_t addr;
    enum IoType type;
};

#define LOG_SZ 128

struct BusEventLog {
    struct BusEvent events[LOG_SZ];
    uint32_t len;
    uint32_t cap;
};

void event_push(struct BusEventLog log[static 1], struct BusEvent event)
{
    if (log->len >= log->cap) {
        return;
    }

    log->events[log->len++] = event;
}

void bus_hook(void* userdata,
              const struct SPC_State state[static 1],
              uint16_t addr,
              uint8_t val,
              bool is_write)
{
    struct BusEventLog* log = (struct BusEventLog*)userdata;

    const struct BusEvent event = {
        .total_cycles = state->cpu.total_cycles,
        .instruction_cycle = state->cpu.instruction_cycle,
        .value = val,
        .addr = addr,
        .type = is_write ? IO_WRITE : IO_READ,
    };

    event_push(log, event);
}

UTEST(InstructionTest, H00_NOP)
{
    struct SPC_State state;

    int cycle;
    enum InstructionStatus expected;
    enum InstructionStatus actual;

    cycle = 1;
    expected = I_ERROR;
    actual = nop(&state, cycle);
    ASSERT_EQ(expected, actual);

    cycle = 2;
    expected = I_OK;
    actual = nop(&state, cycle);
    ASSERT_EQ(expected, actual);

    cycle = 3;
    expected = I_ERROR;
    actual = nop(&state, cycle);
    ASSERT_EQ(expected, actual);
}

UTEST_MAIN()
