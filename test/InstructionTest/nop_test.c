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

#define QUEUE_SIZE 128

struct BusEventQueue {
    struct BusEvent events[QUEUE_SIZE];
    uint32_t head;  // the next position to pop data off of
    uint32_t tail;  // the next position to write data
};

struct BusEventQueue queue_new(void)
{
    return (struct BusEventQueue){
        .events = {0},
        .head = 0,
        .tail = 0,
    };
}

uint32_t queue_len(const struct BusEventQueue queue[static 1])
{
    return queue->tail - queue->head;
}

bool queue_has(const struct BusEventQueue queue[static 1], uint32_t size)
{
    return queue_len(queue) == size;
}

bool event_push(struct BusEventQueue queue[static 1], struct BusEvent event)
{
    if (queue_len(queue) >= QUEUE_SIZE) {
        return false;
    }

    queue->events[queue->tail & (QUEUE_SIZE - 1)] = event;
    queue->tail += 1;
    return true;
}

bool event_pop(struct BusEventQueue queue[static 1], struct BusEvent* event)
{
    if (queue_len(queue) == 0) {
        return false;
    }

    *event = queue->events[queue->head & (QUEUE_SIZE - 1)];
    queue->head += 1;
    return true;
}

void bus_hook(void* userdata,
              const struct SPC_State state[static 1],
              uint16_t addr,
              uint8_t val,
              bool is_write)
{
    struct BusEventQueue* queue = (struct BusEventQueue*)userdata;

    const struct BusEvent event = {
        .total_cycles = state->cpu.total_cycles,
        .instruction_cycle = state->cpu.instruction_cycle,
        .value = val,
        .addr = addr,
        .type = is_write ? IO_WRITE : IO_READ,
    };

    event_push(queue, event);
}

/*
* Total tests in 00.json: 1000

============================================================
Test: 00 0000
============================================================

Initial State:
  PC:  0x7630
  A:   0x38
  X:   0x4E
  Y:   0x7F
  SP:  0xEC
  PSW: 0x91
  RAM: [[30256, 0]]

Final State:
  PC:  0x7631
  A:   0x38
  X:   0x4E
  Y:   0x7F
  SP:  0xEC
  PSW: 0x91
  RAM: [[30256, 0]]

Bus Accesses:
  [0]   addr=0x7630, val=0x00, op=read
  [1]   addr=0x7631, val=None, op=read

*/

UTEST(InstructionTest, H00_NOP)
{
    struct BusEventQueue queue;
    g_bus_trace_userdata = &queue;
    g_bus_trace_hook = &bus_hook;

    int cycle;
    enum InstructionStatus expected;
    enum InstructionStatus actual;

    struct SPC_State state = {0};
    state.cpu.pc = 0x7630;
    state.cpu.a = 0x38;
    state.cpu.x = 0x4E;
    state.cpu.y = 0x7F;
    state.cpu.sp = 0xEC;
    state.cpu.status = 0x91;
    state.aram[30256] = 0x00;

    cycle = 1;
    expected = I_ERROR;
    queue = queue_new();
    actual = nop(&state, cycle);
    ASSERT_EQ(expected, actual);
    ASSERT_EQ(queue_len(&queue), 0u);  // fails, no event

    cycle = 2;
    expected = I_OK;
    queue = queue_new();
    actual = nop(&state, cycle);
    ASSERT_EQ(expected, actual);
    ASSERT_EQ(queue_len(&queue), 1u);
    log_bus_event(queue.events[0]);

    cycle = 3;
    expected = I_ERROR;
    queue = queue_new();
    actual = nop(&state, cycle);
    ASSERT_EQ(expected, actual);
    ASSERT_EQ(queue_len(&queue), 0u);

    g_bus_trace_userdata = NULL;
}

UTEST_MAIN()
