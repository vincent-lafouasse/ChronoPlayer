#include "../utest.h/utest.h"

#include <string.h>

#include "bus_io.h"
#include "cpu.h"
#include "instruction.h"
#include "state.h"

#define I_OK INSTRUCTION_STATUS_DONE
#define I_PENDING INSTRUCTION_STATUS_PENDING
#define I_ERROR INSTRUCTION_STATUS_UNEXPECTED_CYCLE

enum IoType {
    IO_READ,
    IO_WRITE,
};

struct BusEvent {
    uint8_t value;
    uint16_t addr;
    bool is_dummy;
    enum IoType type;
};

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
    (void)state;
    struct BusEventQueue* queue = (struct BusEventQueue*)userdata;

    const struct BusEvent event = {
        .value = val,
        .addr = addr,
        .type = is_write ? IO_WRITE : IO_READ,
    };

    event_push(queue, event);
}

/*
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

    struct SPC_State state = {0};
    state.cpu.pc = 0x7630;
    state.cpu.a = 0x38;
    state.cpu.x = 0x4E;
    state.cpu.y = 0x7F;
    state.cpu.sp = 0xEC;
    state.cpu.status = 0x91;
    state.aram[30256] = 0x00;
    state.cpu.instruction_cycle = 1;  // very important

    // later a while cycle != 1
    {
        const struct BusEvent expected_event = {
            .addr = 0x7630,
            .value = 0x00,
            .type = IO_READ,
            .is_dummy = false,
        };
        struct BusEvent actual_event;

        cpu_tick(&state);
        ASSERT_TRUE(queue_has(&queue, 1));

        event_pop(&queue, &actual_event);
        ASSERT_EQ(expected_event.addr, actual_event.addr);
        if (!expected_event.is_dummy) {
            ASSERT_EQ(expected_event.value, actual_event.value);
        }
        ASSERT_EQ(expected_event.type, actual_event.type);
    }
    {
        const struct BusEvent expected_event = {
            .addr = 0x7630,
            .type = IO_READ,
            .is_dummy = true,
        };
        struct BusEvent actual_event;

        cpu_tick(&state);
        ASSERT_TRUE(queue_has(&queue, 1));

        event_pop(&queue, &actual_event);
        ASSERT_EQ(expected_event.addr, actual_event.addr);
        if (!expected_event.is_dummy) {
            ASSERT_EQ(expected_event.value, actual_event.value);
        }
        ASSERT_EQ(expected_event.type, actual_event.type);
    }

    g_bus_trace_userdata = NULL;
}

UTEST_MAIN()
