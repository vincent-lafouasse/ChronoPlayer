#pragma once

#include <stdio.h>
#include <string.h>

#include "bus_io.h"
#include "cpu.h"
#include "instruction.h"
#include "state.h"

#define DUMMY -1

struct BusEvent {
    int16_t value;  // Use DUMMY (-1) for dummy reads
    uint16_t addr;
    enum IoType type;
};

#define QUEUE_SIZE 16

_Static_assert((QUEUE_SIZE & (QUEUE_SIZE - 1)) == 0, "Queue size must be a power of 2");

struct BusEventQueue {
    struct BusEvent events[QUEUE_SIZE];
    uint32_t head;  // the next position to pop data off of
    uint32_t tail;  // the next position to write data
};

static inline struct BusEventQueue queue_new(void)
{
    return (struct BusEventQueue){
        .events = {0},
        .head = 0,
        .tail = 0,
    };
}

static inline uint32_t queue_len(const struct BusEventQueue queue[static 1])
{
    return queue->tail - queue->head;
}

static inline bool queue_has(const struct BusEventQueue queue[static 1],
                             uint32_t size)
{
    return queue_len(queue) == size;
}

static inline bool event_push(struct BusEventQueue queue[static 1],
                              struct BusEvent event)
{
    if (queue_len(queue) >= QUEUE_SIZE) {
        return false;
    }

    queue->events[queue->tail & (QUEUE_SIZE - 1)] = event;
    queue->tail += 1;
    return true;
}

static inline bool event_pop(struct BusEventQueue queue[static 1],
                             struct BusEvent* event)
{
    if (queue_len(queue) == 0) {
        return false;
    }

    *event = queue->events[queue->head & (QUEUE_SIZE - 1)];
    queue->head += 1;
    return true;
}

static inline void bus_hook(void* userdata,
                            const struct SPC_State state[static 1],
                            uint16_t addr,
                            uint8_t val,
                           enum IoType io_type)
{
    (void)state;
    struct BusEventQueue* queue = (struct BusEventQueue*)userdata;

    const struct BusEvent event = {
        .value = val,
        .addr = addr,
        .type = io_type,
    };

    event_push(queue, event);
}

struct RamEntry {
    uint16_t addr;
    uint8_t value;
};

static inline struct SPC_State setup_state(const struct CPU_State cpu[static 1],
                                           const struct RamEntry* ram_entries,
                                           size_t n_entries)
{
    struct SPC_State state = {0};

    state.cpu = *cpu;
    state.cpu.instruction_cycle = 1;

    for (size_t i = 0; i < n_entries; i++) {
        const uint16_t addr = ram_entries[i].addr;
        const uint8_t val = ram_entries[i].value;
        state.aram[addr] = val;
    }

    return state;
}

static inline void compare_bus_events(const char* test_name,
                                      size_t cyc,
                                      const struct BusEvent expected[static 1],
                                      const struct BusEvent actual[static 1],
                                      int* utest_result)
{
    char msg[256];
    const size_t msg_size = sizeof(msg) / sizeof(*msg);

    snprintf(msg, msg_size,
             "-- %s: Cycle %zu: Type mismatch at 0x%04X - expected "
             "%s, got %s",
             test_name, cyc, actual->addr, io_type_repr(expected->type),
             io_type_repr(actual->type));
    ASSERT_TRUE_MSG(expected->type == actual->type, msg);

    if (actual->type == IO_WAIT) {
        return;
    }

    snprintf(msg, msg_size,
             "-- %s: Cycle %zu: Address mismatch - expected "
             "0x%04X, got 0x%04X",
             test_name, cyc, expected->addr, actual->addr);
    ASSERT_TRUE_MSG(expected->addr == actual->addr, msg);

    if (expected->value == DUMMY) {
        return;
    }

    snprintf(msg, msg_size,
             "-- %s: Cycle %zu: Value mismatch at 0x%04X - "
             "expected 0x%02X, "
             "got 0x%02X",
             test_name, cyc, actual->addr, (uint8_t)expected->value,
             (uint8_t)actual->value);
    ASSERT_TRUE_MSG(expected->value == actual->value, msg);
}

static inline void compare_state(const char* test_name,
                                 struct SPC_State state[static 1],
                                 const struct CPU_State final_cpu[static 1],
                                 const struct RamEntry* final_ram,
                                 size_t final_ram_size,
                                 int* utest_result)
{
    char msg[256];
    const size_t msg_size = sizeof(msg) / sizeof(*msg);

    const struct CPU_State* cpu = &state->cpu;

    snprintf(msg, msg_size,
             "-- %s: Register A mismatch. expected 0x%02x was 0x%02x",
             test_name, final_cpu->a, cpu->a);
    ASSERT_EQ_MSG(final_cpu->a, cpu->a, msg);

    snprintf(msg, msg_size,
             "-- %s: Register X mismatch. expected 0x%02x was 0x%02x",
             test_name, final_cpu->x, cpu->x);
    ASSERT_EQ_MSG(final_cpu->x, cpu->x, msg);

    snprintf(msg, msg_size,
             "-- %s: Register Y mismatch. expected 0x%02x was 0x%02x",
             test_name, final_cpu->y, cpu->y);
    ASSERT_EQ_MSG(final_cpu->y, cpu->y, msg);

    snprintf(msg, msg_size,
             "-- %s: Register SP mismatch. expected 0x%02x was 0x%02x",
             test_name, final_cpu->sp, cpu->sp);
    ASSERT_EQ_MSG(final_cpu->sp, cpu->sp, msg);

    snprintf(msg, msg_size,
             "-- %s: Register PSW mismatch. expected 0x%02x was 0x%02x",
             test_name, final_cpu->status, cpu->status);
    ASSERT_EQ_MSG(final_cpu->status, cpu->status, msg);

    for (size_t i = 0; i < final_ram_size; i++) {
        const uint16_t addr = final_ram[i].addr;
        const uint8_t expected = final_ram[i].value;
        const uint8_t actual = state->aram[addr];

        snprintf(msg, msg_size,
                 "-- %s: Final ram mismatch at address 0x%04x. Expected "
                 "0x%02x "
                 "was 0x%02x.",
                 test_name, addr, expected, actual);
        ASSERT_EQ_MSG(expected, actual, msg);
    }
}

#define SETUP_TEST()               \
    queue = queue_new();           \
    g_bus_trace_userdata = &queue; \
    g_bus_trace_hook = &bus_hook;

#define TEARDOWN_TEST() g_bus_trace_userdata = NULL;

static inline void run_and_check(const char* test_name,
                                 struct SPC_State state[static 1],
                                 const struct CPU_State final_cpu[static 1],
                                 const struct RamEntry* final_ram,
                                 size_t final_ram_size,
                                 const struct BusEvent* events,
                                 size_t n_events,
                                 int* utest_result)
{
    struct BusEventQueue queue;
    SETUP_TEST();

    size_t i = 0;
    char msg[256];
    const size_t msg_size = sizeof(msg) / sizeof(*msg);

    do {
        cpu_tick(state);

        snprintf(msg, msg_size, "-- %s: Cycle %zu: Missing bus event",
                 test_name, i + 1);
        ASSERT_TRUE_MSG(queue_has(&queue, 1), msg);

        const struct BusEvent* expected = events + i;
        struct BusEvent actual;
        event_pop(&queue, &actual);  // infallible

        compare_bus_events(test_name, i + 1, expected, &actual, utest_result);

        i++;
    } while (state->cpu.instruction_cycle != 1);

    snprintf(msg, msg_size,
             "-- %s: Instruction len mismatch: expected %zu cycles, "
             "only got %zu",
             test_name, n_events, i);
    ASSERT_EQ_MSG(n_events, i, msg);

    compare_state(test_name, state, final_cpu, final_ram, final_ram_size,
                  utest_result);

    TEARDOWN_TEST();
}
