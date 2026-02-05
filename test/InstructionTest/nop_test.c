#include "../utest.h/utest.h"

#include "test_helper.h"

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

        snprintf(msg, msg_size,
                 "-- %s: Cycle %zu: Address mismatch - expected "
                 "0x%04X, got 0x%04X",
                 test_name, i + 1, expected->addr, actual.addr);
        ASSERT_TRUE_MSG(expected->addr == actual.addr, msg);

        snprintf(msg, msg_size,
                 "-- %s: Cycle %zu: Type mismatch at 0x%04X - expected "
                 "%s, got %s",
                 test_name, i + 1, actual.addr, io_type_repr(expected->type),
                 io_type_repr(actual.type));
        ASSERT_TRUE_MSG(expected->type == actual.type, msg);

        if (expected->value != DUMMY) {
            snprintf(msg, msg_size,
                     "-- %s: Cycle %zu: Value mismatch at 0x%04X - "
                     "expected 0x%02X, "
                     "got 0x%02X",
                     test_name, i + 1, actual.addr, (uint8_t)expected->value,
                     (uint8_t)actual.value);
            ASSERT_TRUE_MSG(expected->value == actual.value, msg);
        }

        i++;
    } while (state->cpu.instruction_cycle != 1);

    snprintf(msg, msg_size,
             "-- %s: Instruction len mismatch: expected %zu cycles, "
             "only got %zu",
             test_name, n_events, i);
    ASSERT_EQ_MSG(n_events, i, msg);

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

    TEARDOWN_TEST();
}

UTEST(SingleStepTests_00, _00_0000)
{
    // ----- data
    const struct CPU_State initial_cpu = (struct CPU_State){.pc = 0x7630,
                                                            .a = 0x38,
                                                            .x = 0x4e,
                                                            .y = 0x7f,
                                                            .sp = 0xec,
                                                            .status = 0x91};
    const struct RamEntry initial_ram[] = {
        {30256, 0},
    };

    const struct CPU_State final_cpu = (struct CPU_State){.pc = 0x7630,
                                                          .a = 0x38,
                                                          .x = 0x4e,
                                                          .y = 0x7f,
                                                          .sp = 0xec,
                                                          .status = 0x91};
    const struct RamEntry final_ram[] = {
        {30256, 0},
    };

    const struct BusEvent events[] = {
        {.addr = 0x7630, .value = 0x00, .type = IO_READ},
        {.addr = 0x7631, .value = DUMMY, .type = IO_READ},
    };

    // ----- execution
    struct SPC_State state = setup_state(
        &initial_cpu, initial_ram, sizeof(initial_ram) / sizeof(*initial_ram));
    run_and_check("00 0000", &state, &final_cpu, final_ram,
                  sizeof(final_ram) / sizeof(*final_ram), events,
                  sizeof(events) / sizeof(*events), utest_result);
}

UTEST_MAIN()
