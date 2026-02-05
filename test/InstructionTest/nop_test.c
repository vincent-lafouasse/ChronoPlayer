#include "../utest.h/utest.h"

#include "test_helper.h"

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
