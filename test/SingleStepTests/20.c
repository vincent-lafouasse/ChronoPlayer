#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_20, _20_0000) {
    const struct CPU_State initial_cpu = {.pc=0x66b2, .a=0xa9, .x=0x8a, .y=0xf4, .sp=0x8c, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x66b2, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x66b3, .a=0xa9, .x=0x8a, .y=0xf4, .sp=0x8c, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x66b2, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x66b2, .value=0x20, .type=IO_READ},
        {.addr=0x66b3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("20 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
