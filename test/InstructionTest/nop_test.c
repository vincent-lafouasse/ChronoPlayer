#include "../utest.h/utest.h"

#include <stdio.h>
#include <string.h>

#include "bus_io.h"
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

void log_bus_event(struct BusEvent e)
{
    fprintf(stderr, "0x%02x: 0x%04x %s 0x%02x\n", e.instruction_cycle, e.addr,
            (e.type == IO_READ) ? "->" : "<-", e.value);
}

#define LOG_SZ 128

struct BusEventLog {
    struct BusEvent events[LOG_SZ];
    uint32_t len;
    uint32_t cap;
};

struct BusEventLog log_new(void)
{
    return (struct BusEventLog){
        .events = {0},
        .len = 0,
        .cap = LOG_SZ,
    };
}

void event_push(struct BusEventLog log[static 1], struct BusEvent event)
{
    if (log->len >= log->cap) {
        return;
    }

    log->events[log->len] = event;
    log->len += 1;
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
    struct SPC_State state = {0};
    struct BusEventLog log;
    g_bus_trace_userdata = &log;
    g_bus_trace_hook = &bus_hook;

    int cycle;
    enum InstructionStatus expected;
    enum InstructionStatus actual;

    cycle = 1;
    expected = I_ERROR;
    log = log_new();
    actual = nop(&state, cycle);
    ASSERT_EQ(expected, actual);
    ASSERT_EQ(log.len, 0u);

    cycle = 2;
    expected = I_OK;
    log = log_new();
    actual = nop(&state, cycle);
    ASSERT_EQ(expected, actual);
    ASSERT_EQ(log.len, 1u);  // fails, len==0
    log_bus_event(log.events[0]);

    cycle = 3;
    expected = I_ERROR;
    log = log_new();
    actual = nop(&state, cycle);
    ASSERT_EQ(expected, actual);
    ASSERT_EQ(log.len, 0u);

    g_bus_trace_userdata = NULL;
}

UTEST_MAIN()
