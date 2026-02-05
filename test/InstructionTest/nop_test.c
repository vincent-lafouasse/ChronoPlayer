#include "../utest.h/utest.h"

#include <stdio.h>
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

#define DUMMY -1

struct BusEvent {
    int16_t value;  // Use DUMMY (-1) for dummy reads
    uint16_t addr;
    enum IoType type;
};

#define QUEUE_SIZE 4

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

struct RamEntry {
    uint16_t addr;
    uint8_t value;
};

#define SETUP_TEST()               \
    queue = queue_new();           \
    g_bus_trace_userdata = &queue; \
    g_bus_trace_hook = &bus_hook;

#define TEARDOWN_TEST() g_bus_trace_userdata = NULL;

#define SET_STATE(state, pc__, a__, x__, y__, sp__, psw__) \
    state.cpu.pc = pc__;                                   \
    state.cpu.a = a__;                                     \
    state.cpu.x = x__;                                     \
    state.cpu.y = y__;                                     \
    state.cpu.sp = sp__;                                   \
    state.cpu.status = psw__;                              \
    state.cpu.instruction_cycle = 1;

// Initial State:
//   PC:  0x7630
//   A:   0x38
//   X:   0x4E
//   Y:   0x7F
//   SP:  0xEC
//   PSW: 0x91
//   RAM: [[30256, 0]]
//
// Final State:
//   PC:  0x7631
//   A:   0x38
//   X:   0x4E
//   Y:   0x7F
//   SP:  0xEC
//   PSW: 0x91
//   RAM: [[30256, 0]]
//
// Bus Accesses:
//   [0]   addr=0x7630, val=0x00, op=read
//   [1]   addr=0x7631, val=None, op=read

UTEST(InstructionTest, H00_NOP_00_0000)
{
    struct BusEventQueue queue;
    SETUP_TEST();

    struct SPC_State state = {0};
    SET_STATE(state, 0x7630, 0x38, 0x4e, 0x7f, 0xec, 0x91);
    const struct RamEntry initialRam[] = {
        {30256, 0},
    };

    struct SPC_State final = {0};
    SET_STATE(final, 0x7631, 0x38, 0x4e, 0x7f, 0xec, 0x91);
    const struct RamEntry finalRam[] = {
        {30256, 0},
    };

    const struct BusEvent events[] = {
        {.addr = 0x7630, .value = 0x00, .type = IO_READ},
        {.addr = 0x7631, .value = DUMMY, .type = IO_READ},
    };
    const size_t expected_len =
        sizeof(events) / sizeof(*events);  // one Bus IO per cycle

    size_t i = 0;
    char msg[256];
    do {
        cpu_tick(&state);

        snprintf(msg, sizeof(msg), "-- Cycle %zu: Missing bus event", i);
        ASSERT_TRUE_MSG(queue_has(&queue, 1), msg);

        struct BusEvent actual;
        event_pop(&queue, &actual);  // infallible

        const struct BusEvent* expected = events + i;

        snprintf(msg, sizeof(msg),
                 "-- Cycle %zu: Address mismatch - expected 0x%04X, got 0x%04X",
                 i, expected->addr, actual.addr);
        ASSERT_TRUE_MSG(expected->addr == actual.addr, msg);

        snprintf(msg, sizeof(msg),
                 "-- Cycle %zu: Type mismatch at 0x%04X - expected %s, got %s",
                 i, actual.addr, expected->type == IO_READ ? "READ" : "WRITE",
                 actual.type == IO_READ ? "READ" : "WRITE");
        ASSERT_TRUE_MSG(expected->type == actual.type, msg);

        if (expected->value != DUMMY) {
            snprintf(
                msg, sizeof(msg),
                "-- Cycle %zu: Value mismatch at 0x%04X - expected 0x%02X, "
                "got 0x%02X",
                i, actual.addr, (uint8_t)expected->value,
                (uint8_t)actual.value);
            ASSERT_TRUE_MSG(expected->value == actual.value, msg);
        }

        i++;
    } while (state.cpu.instruction_cycle != 1);

    snprintf(msg, sizeof(msg),
             "-- Instruction len mismatch: expected %zu cycles, only got %zu",
             expected_len, i);
    ASSERT_EQ_MSG(expected_len, i, msg);

    TEARDOWN_TEST();
}

UTEST_MAIN()
