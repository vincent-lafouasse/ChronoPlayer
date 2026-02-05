#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_00, _00_0000) {
    const struct CPU_State initial_cpu = {.pc=0x7630, .a=0x38, .x=0x4e, .y=0x7f, .sp=0xec, .status=0x91};
    const struct RamEntry initial_ram[] = {{0x7630,0x00}};
    const struct CPU_State final_cpu = {.pc=0x7631, .a=0x38, .x=0x4e, .y=0x7f, .sp=0xec, .status=0x91};
    const struct RamEntry final_ram[] = {{0x7630,0x00}};
    const struct BusEvent events[] = {
        {0x7630, 0x00, IO_READ},
        {0x7631, DUMMY, IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
