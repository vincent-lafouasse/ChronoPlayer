#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_70, _70_0000) {
    const struct CPU_State initial_cpu = {.pc=0x9b76, .a=0x3f, .x=0x84, .y=0x7d, .sp=0x58, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x9b76, .value=0x70}, {.addr=0x9b77, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x9bf0, .a=0x3f, .x=0x84, .y=0x7d, .sp=0x58, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x9b76, .value=0x70}, {.addr=0x9b77, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x9b76, .value=0x70, .type=IO_READ},
        {.addr=0x9b77, .value=0x78, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0001) {
    const struct CPU_State initial_cpu = {.pc=0xb3c8, .a=0xb1, .x=0x1e, .y=0xf6, .sp=0x2d, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xb3c8, .value=0x70}, {.addr=0xb3c9, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0xb3ca, .a=0xb1, .x=0x1e, .y=0xf6, .sp=0x2d, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0xb3c8, .value=0x70}, {.addr=0xb3c9, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0xb3c8, .value=0x70, .type=IO_READ},
        {.addr=0xb3c9, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0002) {
    const struct CPU_State initial_cpu = {.pc=0x41a9, .a=0x84, .x=0xa7, .y=0xf2, .sp=0xd3, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x41a9, .value=0x70}, {.addr=0x41aa, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0x41ab, .a=0x84, .x=0xa7, .y=0xf2, .sp=0xd3, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x41a9, .value=0x70}, {.addr=0x41aa, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0x41a9, .value=0x70, .type=IO_READ},
        {.addr=0x41aa, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0003) {
    const struct CPU_State initial_cpu = {.pc=0x4bff, .a=0x92, .x=0x5c, .y=0xa9, .sp=0x7e, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x4bff, .value=0x70}, {.addr=0x4c00, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x4c01, .a=0x92, .x=0x5c, .y=0xa9, .sp=0x7e, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x4bff, .value=0x70}, {.addr=0x4c00, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x4bff, .value=0x70, .type=IO_READ},
        {.addr=0x4c00, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0004) {
    const struct CPU_State initial_cpu = {.pc=0x135b, .a=0x17, .x=0xa7, .y=0x7d, .sp=0xb5, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x135b, .value=0x70}, {.addr=0x135c, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0x1309, .a=0x17, .x=0xa7, .y=0x7d, .sp=0xb5, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x135b, .value=0x70}, {.addr=0x135c, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0x135b, .value=0x70, .type=IO_READ},
        {.addr=0x135c, .value=0xac, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0005) {
    const struct CPU_State initial_cpu = {.pc=0x64a3, .a=0x2a, .x=0xd0, .y=0x5c, .sp=0xbd, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x64a3, .value=0x70}, {.addr=0x64a4, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x64ee, .a=0x2a, .x=0xd0, .y=0x5c, .sp=0xbd, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x64a3, .value=0x70}, {.addr=0x64a4, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x64a3, .value=0x70, .type=IO_READ},
        {.addr=0x64a4, .value=0x49, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0006) {
    const struct CPU_State initial_cpu = {.pc=0xea36, .a=0x00, .x=0x21, .y=0x67, .sp=0xe1, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xea36, .value=0x70}, {.addr=0xea37, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0xea38, .a=0x00, .x=0x21, .y=0x67, .sp=0xe1, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0xea36, .value=0x70}, {.addr=0xea37, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0xea36, .value=0x70, .type=IO_READ},
        {.addr=0xea37, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0007) {
    const struct CPU_State initial_cpu = {.pc=0x5203, .a=0xdc, .x=0x6d, .y=0xc5, .sp=0xa5, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x5203, .value=0x70}, {.addr=0x5204, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x522c, .a=0xdc, .x=0x6d, .y=0xc5, .sp=0xa5, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x5203, .value=0x70}, {.addr=0x5204, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x5203, .value=0x70, .type=IO_READ},
        {.addr=0x5204, .value=0x27, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0008) {
    const struct CPU_State initial_cpu = {.pc=0x837e, .a=0x44, .x=0x00, .y=0x2a, .sp=0xea, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x837e, .value=0x70}, {.addr=0x837f, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0x836c, .a=0x44, .x=0x00, .y=0x2a, .sp=0xea, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x837e, .value=0x70}, {.addr=0x837f, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0x837e, .value=0x70, .type=IO_READ},
        {.addr=0x837f, .value=0xec, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0009) {
    const struct CPU_State initial_cpu = {.pc=0xca8f, .a=0x7a, .x=0x6d, .y=0x3a, .sp=0xe0, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xca8f, .value=0x70}, {.addr=0xca90, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0xcaf8, .a=0x7a, .x=0x6d, .y=0x3a, .sp=0xe0, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xca8f, .value=0x70}, {.addr=0xca90, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0xca8f, .value=0x70, .type=IO_READ},
        {.addr=0xca90, .value=0x67, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_000A) {
    const struct CPU_State initial_cpu = {.pc=0x1860, .a=0x1e, .x=0xe3, .y=0xe1, .sp=0x7b, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x1860, .value=0x70}, {.addr=0x1861, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0x1862, .a=0x1e, .x=0xe3, .y=0xe1, .sp=0x7b, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x1860, .value=0x70}, {.addr=0x1861, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0x1860, .value=0x70, .type=IO_READ},
        {.addr=0x1861, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_000B) {
    const struct CPU_State initial_cpu = {.pc=0x327c, .a=0xdc, .x=0x3c, .y=0x22, .sp=0xf5, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x327c, .value=0x70}, {.addr=0x327d, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0x32a3, .a=0xdc, .x=0x3c, .y=0x22, .sp=0xf5, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x327c, .value=0x70}, {.addr=0x327d, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0x327c, .value=0x70, .type=IO_READ},
        {.addr=0x327d, .value=0x25, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_000C) {
    const struct CPU_State initial_cpu = {.pc=0x8062, .a=0x16, .x=0xcc, .y=0x38, .sp=0x21, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x8062, .value=0x70}, {.addr=0x8063, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0x8014, .a=0x16, .x=0xcc, .y=0x38, .sp=0x21, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x8062, .value=0x70}, {.addr=0x8063, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0x8062, .value=0x70, .type=IO_READ},
        {.addr=0x8063, .value=0xb0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_000D) {
    const struct CPU_State initial_cpu = {.pc=0x3a1e, .a=0x41, .x=0xe0, .y=0x63, .sp=0x1e, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x3a1e, .value=0x70}, {.addr=0x3a1f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x3a3d, .a=0x41, .x=0xe0, .y=0x63, .sp=0x1e, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x3a1e, .value=0x70}, {.addr=0x3a1f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x3a1e, .value=0x70, .type=IO_READ},
        {.addr=0x3a1f, .value=0x1d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_000E) {
    const struct CPU_State initial_cpu = {.pc=0xd867, .a=0x77, .x=0x16, .y=0x5e, .sp=0x7c, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xd867, .value=0x70}, {.addr=0xd868, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0xd869, .a=0x77, .x=0x16, .y=0x5e, .sp=0x7c, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0xd867, .value=0x70}, {.addr=0xd868, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0xd867, .value=0x70, .type=IO_READ},
        {.addr=0xd868, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_000F) {
    const struct CPU_State initial_cpu = {.pc=0x4a6d, .a=0x53, .x=0xe7, .y=0x0a, .sp=0xa2, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x4a6d, .value=0x70}, {.addr=0x4a6e, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0x4a6f, .a=0x53, .x=0xe7, .y=0x0a, .sp=0xa2, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x4a6d, .value=0x70}, {.addr=0x4a6e, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0x4a6d, .value=0x70, .type=IO_READ},
        {.addr=0x4a6e, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0010) {
    const struct CPU_State initial_cpu = {.pc=0x06cb, .a=0x72, .x=0x4e, .y=0x44, .sp=0x6d, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x06cb, .value=0x70}, {.addr=0x06cc, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x06cd, .a=0x72, .x=0x4e, .y=0x44, .sp=0x6d, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x06cb, .value=0x70}, {.addr=0x06cc, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x06cb, .value=0x70, .type=IO_READ},
        {.addr=0x06cc, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0011) {
    const struct CPU_State initial_cpu = {.pc=0xac23, .a=0x88, .x=0xd6, .y=0x76, .sp=0x53, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xac23, .value=0x70}, {.addr=0xac24, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0xac25, .a=0x88, .x=0xd6, .y=0x76, .sp=0x53, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xac23, .value=0x70}, {.addr=0xac24, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0xac23, .value=0x70, .type=IO_READ},
        {.addr=0xac24, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0012) {
    const struct CPU_State initial_cpu = {.pc=0x699d, .a=0x1a, .x=0x64, .y=0xb0, .sp=0xfc, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x699d, .value=0x70}, {.addr=0x699e, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x699f, .a=0x1a, .x=0x64, .y=0xb0, .sp=0xfc, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x699d, .value=0x70}, {.addr=0x699e, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x699d, .value=0x70, .type=IO_READ},
        {.addr=0x699e, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0013) {
    const struct CPU_State initial_cpu = {.pc=0x6f47, .a=0xf8, .x=0x6f, .y=0xf0, .sp=0x79, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x6f47, .value=0x70}, {.addr=0x6f48, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x6f49, .a=0xf8, .x=0x6f, .y=0xf0, .sp=0x79, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x6f47, .value=0x70}, {.addr=0x6f48, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x6f47, .value=0x70, .type=IO_READ},
        {.addr=0x6f48, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0014) {
    const struct CPU_State initial_cpu = {.pc=0xbdc7, .a=0x4f, .x=0x7f, .y=0x6c, .sp=0xa1, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xbdc7, .value=0x70}, {.addr=0xbdc8, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0xbdd2, .a=0x4f, .x=0x7f, .y=0x6c, .sp=0xa1, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0xbdc7, .value=0x70}, {.addr=0xbdc8, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0xbdc7, .value=0x70, .type=IO_READ},
        {.addr=0xbdc8, .value=0x09, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0015) {
    const struct CPU_State initial_cpu = {.pc=0x88f6, .a=0x53, .x=0x79, .y=0xde, .sp=0x59, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x88f6, .value=0x70}, {.addr=0x88f7, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x88f8, .a=0x53, .x=0x79, .y=0xde, .sp=0x59, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x88f6, .value=0x70}, {.addr=0x88f7, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x88f6, .value=0x70, .type=IO_READ},
        {.addr=0x88f7, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0016) {
    const struct CPU_State initial_cpu = {.pc=0x1086, .a=0xf9, .x=0x0d, .y=0x0f, .sp=0xde, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x1086, .value=0x70}, {.addr=0x1087, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x10c0, .a=0xf9, .x=0x0d, .y=0x0f, .sp=0xde, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x1086, .value=0x70}, {.addr=0x1087, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x1086, .value=0x70, .type=IO_READ},
        {.addr=0x1087, .value=0x38, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0017) {
    const struct CPU_State initial_cpu = {.pc=0xa801, .a=0x31, .x=0x98, .y=0xfd, .sp=0x2c, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xa801, .value=0x70}, {.addr=0xa802, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0xa839, .a=0x31, .x=0x98, .y=0xfd, .sp=0x2c, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0xa801, .value=0x70}, {.addr=0xa802, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0xa801, .value=0x70, .type=IO_READ},
        {.addr=0xa802, .value=0x36, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0018) {
    const struct CPU_State initial_cpu = {.pc=0xb517, .a=0x07, .x=0xbb, .y=0xd7, .sp=0x72, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xb517, .value=0x70}, {.addr=0xb518, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0xb519, .a=0x07, .x=0xbb, .y=0xd7, .sp=0x72, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xb517, .value=0x70}, {.addr=0xb518, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0xb517, .value=0x70, .type=IO_READ},
        {.addr=0xb518, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0019) {
    const struct CPU_State initial_cpu = {.pc=0xe8f6, .a=0xe3, .x=0x3b, .y=0xdc, .sp=0xc2, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xe8f6, .value=0x70}, {.addr=0xe8f7, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0xe8f8, .a=0xe3, .x=0x3b, .y=0xdc, .sp=0xc2, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xe8f6, .value=0x70}, {.addr=0xe8f7, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0xe8f6, .value=0x70, .type=IO_READ},
        {.addr=0xe8f7, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_001A) {
    const struct CPU_State initial_cpu = {.pc=0x9639, .a=0xc1, .x=0xa7, .y=0x5e, .sp=0x3a, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x9639, .value=0x70}, {.addr=0x963a, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0x963b, .a=0xc1, .x=0xa7, .y=0x5e, .sp=0x3a, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x9639, .value=0x70}, {.addr=0x963a, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0x9639, .value=0x70, .type=IO_READ},
        {.addr=0x963a, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_001B) {
    const struct CPU_State initial_cpu = {.pc=0xd5f8, .a=0xf1, .x=0xfe, .y=0x75, .sp=0x4a, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xd5f8, .value=0x70}, {.addr=0xd5f9, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0xd5ff, .a=0xf1, .x=0xfe, .y=0x75, .sp=0x4a, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xd5f8, .value=0x70}, {.addr=0xd5f9, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0xd5f8, .value=0x70, .type=IO_READ},
        {.addr=0xd5f9, .value=0x05, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_001C) {
    const struct CPU_State initial_cpu = {.pc=0x279b, .a=0xfa, .x=0x60, .y=0xe7, .sp=0x7b, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x279b, .value=0x70}, {.addr=0x279c, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x279d, .a=0xfa, .x=0x60, .y=0xe7, .sp=0x7b, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x279b, .value=0x70}, {.addr=0x279c, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x279b, .value=0x70, .type=IO_READ},
        {.addr=0x279c, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_001D) {
    const struct CPU_State initial_cpu = {.pc=0xcaca, .a=0x51, .x=0x97, .y=0xd8, .sp=0x6d, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xcaca, .value=0x70}, {.addr=0xcacb, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0xcacc, .a=0x51, .x=0x97, .y=0xd8, .sp=0x6d, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xcaca, .value=0x70}, {.addr=0xcacb, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0xcaca, .value=0x70, .type=IO_READ},
        {.addr=0xcacb, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_001E) {
    const struct CPU_State initial_cpu = {.pc=0x5b40, .a=0x3d, .x=0x30, .y=0x88, .sp=0xbf, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x5b40, .value=0x70}, {.addr=0x5b41, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0x5b42, .a=0x3d, .x=0x30, .y=0x88, .sp=0xbf, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x5b40, .value=0x70}, {.addr=0x5b41, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0x5b40, .value=0x70, .type=IO_READ},
        {.addr=0x5b41, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_001F) {
    const struct CPU_State initial_cpu = {.pc=0x046d, .a=0xdd, .x=0xc7, .y=0x50, .sp=0x62, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x046d, .value=0x70}, {.addr=0x046e, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x0437, .a=0xdd, .x=0xc7, .y=0x50, .sp=0x62, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x046d, .value=0x70}, {.addr=0x046e, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x046d, .value=0x70, .type=IO_READ},
        {.addr=0x046e, .value=0xc8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0020) {
    const struct CPU_State initial_cpu = {.pc=0xbbf2, .a=0xb0, .x=0x96, .y=0x47, .sp=0x9b, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xbbf2, .value=0x70}, {.addr=0xbbf3, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0xbc3b, .a=0xb0, .x=0x96, .y=0x47, .sp=0x9b, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xbbf2, .value=0x70}, {.addr=0xbbf3, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0xbbf2, .value=0x70, .type=IO_READ},
        {.addr=0xbbf3, .value=0x47, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0021) {
    const struct CPU_State initial_cpu = {.pc=0xfbb5, .a=0x8a, .x=0x01, .y=0xfa, .sp=0x18, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xfbb5, .value=0x70}, {.addr=0xfbb6, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0xfbe6, .a=0x8a, .x=0x01, .y=0xfa, .sp=0x18, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0xfbb5, .value=0x70}, {.addr=0xfbb6, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0xfbb5, .value=0x70, .type=IO_READ},
        {.addr=0xfbb6, .value=0x2f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0022) {
    const struct CPU_State initial_cpu = {.pc=0x769c, .a=0xd9, .x=0x38, .y=0x7d, .sp=0xca, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x769c, .value=0x70}, {.addr=0x769d, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0x767f, .a=0xd9, .x=0x38, .y=0x7d, .sp=0xca, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x769c, .value=0x70}, {.addr=0x769d, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0x769c, .value=0x70, .type=IO_READ},
        {.addr=0x769d, .value=0xe1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0023) {
    const struct CPU_State initial_cpu = {.pc=0x5f08, .a=0x5b, .x=0xb1, .y=0x82, .sp=0x17, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x5f08, .value=0x70}, {.addr=0x5f09, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x5f0a, .a=0x5b, .x=0xb1, .y=0x82, .sp=0x17, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x5f08, .value=0x70}, {.addr=0x5f09, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x5f08, .value=0x70, .type=IO_READ},
        {.addr=0x5f09, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0024) {
    const struct CPU_State initial_cpu = {.pc=0x1953, .a=0xea, .x=0x44, .y=0xaf, .sp=0x4e, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x1953, .value=0x70}, {.addr=0x1954, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0x19d3, .a=0xea, .x=0x44, .y=0xaf, .sp=0x4e, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x1953, .value=0x70}, {.addr=0x1954, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0x1953, .value=0x70, .type=IO_READ},
        {.addr=0x1954, .value=0x7e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0025) {
    const struct CPU_State initial_cpu = {.pc=0x1226, .a=0x89, .x=0xa6, .y=0x8a, .sp=0x3d, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x1226, .value=0x70}, {.addr=0x1227, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x1260, .a=0x89, .x=0xa6, .y=0x8a, .sp=0x3d, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x1226, .value=0x70}, {.addr=0x1227, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x1226, .value=0x70, .type=IO_READ},
        {.addr=0x1227, .value=0x38, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0026) {
    const struct CPU_State initial_cpu = {.pc=0x8606, .a=0x2b, .x=0x6b, .y=0x46, .sp=0xf2, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x8606, .value=0x70}, {.addr=0x8607, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x8608, .a=0x2b, .x=0x6b, .y=0x46, .sp=0xf2, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x8606, .value=0x70}, {.addr=0x8607, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x8606, .value=0x70, .type=IO_READ},
        {.addr=0x8607, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0027) {
    const struct CPU_State initial_cpu = {.pc=0xcf0c, .a=0x35, .x=0x5e, .y=0x8d, .sp=0x9b, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xcf0c, .value=0x70}, {.addr=0xcf0d, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0xce9b, .a=0x35, .x=0x5e, .y=0x8d, .sp=0x9b, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0xcf0c, .value=0x70}, {.addr=0xcf0d, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0xcf0c, .value=0x70, .type=IO_READ},
        {.addr=0xcf0d, .value=0x8d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0028) {
    const struct CPU_State initial_cpu = {.pc=0x0371, .a=0x90, .x=0x74, .y=0xba, .sp=0xa4, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x0371, .value=0x70}, {.addr=0x0372, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0x0373, .a=0x90, .x=0x74, .y=0xba, .sp=0xa4, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x0371, .value=0x70}, {.addr=0x0372, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0x0371, .value=0x70, .type=IO_READ},
        {.addr=0x0372, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0029) {
    const struct CPU_State initial_cpu = {.pc=0x154d, .a=0x7d, .x=0xa7, .y=0x2c, .sp=0x60, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x154d, .value=0x70}, {.addr=0x154e, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x154f, .a=0x7d, .x=0xa7, .y=0x2c, .sp=0x60, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x154d, .value=0x70}, {.addr=0x154e, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x154d, .value=0x70, .type=IO_READ},
        {.addr=0x154e, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_002A) {
    const struct CPU_State initial_cpu = {.pc=0x7347, .a=0x80, .x=0x92, .y=0x29, .sp=0x3d, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x7347, .value=0x70}, {.addr=0x7348, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0x7302, .a=0x80, .x=0x92, .y=0x29, .sp=0x3d, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x7347, .value=0x70}, {.addr=0x7348, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0x7347, .value=0x70, .type=IO_READ},
        {.addr=0x7348, .value=0xb9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_002B) {
    const struct CPU_State initial_cpu = {.pc=0x9f2d, .a=0x4d, .x=0x79, .y=0x50, .sp=0x79, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x9f2d, .value=0x70}, {.addr=0x9f2e, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0x9f2f, .a=0x4d, .x=0x79, .y=0x50, .sp=0x79, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x9f2d, .value=0x70}, {.addr=0x9f2e, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0x9f2d, .value=0x70, .type=IO_READ},
        {.addr=0x9f2e, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_002C) {
    const struct CPU_State initial_cpu = {.pc=0x99b4, .a=0x7f, .x=0x6c, .y=0xe6, .sp=0xbd, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x99b4, .value=0x70}, {.addr=0x99b5, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0x99b6, .a=0x7f, .x=0x6c, .y=0xe6, .sp=0xbd, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x99b4, .value=0x70}, {.addr=0x99b5, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0x99b4, .value=0x70, .type=IO_READ},
        {.addr=0x99b5, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_002D) {
    const struct CPU_State initial_cpu = {.pc=0x976d, .a=0x90, .x=0x81, .y=0xce, .sp=0x0f, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x976d, .value=0x70}, {.addr=0x976e, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x9773, .a=0x90, .x=0x81, .y=0xce, .sp=0x0f, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x976d, .value=0x70}, {.addr=0x976e, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x976d, .value=0x70, .type=IO_READ},
        {.addr=0x976e, .value=0x04, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_002E) {
    const struct CPU_State initial_cpu = {.pc=0x0488, .a=0x1f, .x=0x65, .y=0xf0, .sp=0x80, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x0488, .value=0x70}, {.addr=0x0489, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0x048a, .a=0x1f, .x=0x65, .y=0xf0, .sp=0x80, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0488, .value=0x70}, {.addr=0x0489, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0x0488, .value=0x70, .type=IO_READ},
        {.addr=0x0489, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_002F) {
    const struct CPU_State initial_cpu = {.pc=0x3576, .a=0xa1, .x=0x92, .y=0xd3, .sp=0xa9, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x3576, .value=0x70}, {.addr=0x3577, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x35a0, .a=0xa1, .x=0x92, .y=0xd3, .sp=0xa9, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x3576, .value=0x70}, {.addr=0x3577, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x3576, .value=0x70, .type=IO_READ},
        {.addr=0x3577, .value=0x28, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0030) {
    const struct CPU_State initial_cpu = {.pc=0x3a0c, .a=0x72, .x=0xcc, .y=0xe0, .sp=0xf2, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x3a0c, .value=0x70}, {.addr=0x3a0d, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x39bd, .a=0x72, .x=0xcc, .y=0xe0, .sp=0xf2, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x3a0c, .value=0x70}, {.addr=0x3a0d, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x3a0c, .value=0x70, .type=IO_READ},
        {.addr=0x3a0d, .value=0xaf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0031) {
    const struct CPU_State initial_cpu = {.pc=0xa50c, .a=0x02, .x=0x0b, .y=0x65, .sp=0x6c, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xa50c, .value=0x70}, {.addr=0xa50d, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0xa556, .a=0x02, .x=0x0b, .y=0x65, .sp=0x6c, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xa50c, .value=0x70}, {.addr=0xa50d, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0xa50c, .value=0x70, .type=IO_READ},
        {.addr=0xa50d, .value=0x48, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0032) {
    const struct CPU_State initial_cpu = {.pc=0xb48a, .a=0xbd, .x=0xe4, .y=0xe0, .sp=0x75, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xb48a, .value=0x70}, {.addr=0xb48b, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0xb48c, .a=0xbd, .x=0xe4, .y=0xe0, .sp=0x75, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0xb48a, .value=0x70}, {.addr=0xb48b, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0xb48a, .value=0x70, .type=IO_READ},
        {.addr=0xb48b, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0033) {
    const struct CPU_State initial_cpu = {.pc=0xc1a5, .a=0x33, .x=0x39, .y=0xf2, .sp=0x79, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xc1a5, .value=0x70}, {.addr=0xc1a6, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0xc161, .a=0x33, .x=0x39, .y=0xf2, .sp=0x79, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xc1a5, .value=0x70}, {.addr=0xc1a6, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0xc1a5, .value=0x70, .type=IO_READ},
        {.addr=0xc1a6, .value=0xba, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0034) {
    const struct CPU_State initial_cpu = {.pc=0xbc5b, .a=0xe4, .x=0x5d, .y=0x83, .sp=0x03, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xbc5b, .value=0x70}, {.addr=0xbc5c, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0xbc75, .a=0xe4, .x=0x5d, .y=0x83, .sp=0x03, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0xbc5b, .value=0x70}, {.addr=0xbc5c, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0xbc5b, .value=0x70, .type=IO_READ},
        {.addr=0xbc5c, .value=0x18, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0035) {
    const struct CPU_State initial_cpu = {.pc=0x6474, .a=0xa9, .x=0x9e, .y=0x92, .sp=0x28, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x6474, .value=0x70}, {.addr=0x6475, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x643b, .a=0xa9, .x=0x9e, .y=0x92, .sp=0x28, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x6474, .value=0x70}, {.addr=0x6475, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x6474, .value=0x70, .type=IO_READ},
        {.addr=0x6475, .value=0xc5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0036) {
    const struct CPU_State initial_cpu = {.pc=0xfada, .a=0xfb, .x=0xe5, .y=0xe5, .sp=0x55, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xfada, .value=0x70}, {.addr=0xfadb, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xfadc, .a=0xfb, .x=0xe5, .y=0xe5, .sp=0x55, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0xfada, .value=0x70}, {.addr=0xfadb, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xfada, .value=0x70, .type=IO_READ},
        {.addr=0xfadb, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0037) {
    const struct CPU_State initial_cpu = {.pc=0xf5c6, .a=0x84, .x=0xf9, .y=0xa0, .sp=0xaa, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xf5c6, .value=0x70}, {.addr=0xf5c7, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xf5c8, .a=0x84, .x=0xf9, .y=0xa0, .sp=0xaa, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xf5c6, .value=0x70}, {.addr=0xf5c7, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xf5c6, .value=0x70, .type=IO_READ},
        {.addr=0xf5c7, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0038) {
    const struct CPU_State initial_cpu = {.pc=0xe556, .a=0x36, .x=0xf8, .y=0xdd, .sp=0xa8, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xe556, .value=0x70}, {.addr=0xe557, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0xe4e9, .a=0x36, .x=0xf8, .y=0xdd, .sp=0xa8, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0xe556, .value=0x70}, {.addr=0xe557, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0xe556, .value=0x70, .type=IO_READ},
        {.addr=0xe557, .value=0x91, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0039) {
    const struct CPU_State initial_cpu = {.pc=0xc28c, .a=0xde, .x=0x9a, .y=0x7e, .sp=0xdc, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xc28c, .value=0x70}, {.addr=0xc28d, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0xc28e, .a=0xde, .x=0x9a, .y=0x7e, .sp=0xdc, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0xc28c, .value=0x70}, {.addr=0xc28d, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0xc28c, .value=0x70, .type=IO_READ},
        {.addr=0xc28d, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_003A) {
    const struct CPU_State initial_cpu = {.pc=0x5f28, .a=0xea, .x=0x5f, .y=0xcc, .sp=0x14, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x5f28, .value=0x70}, {.addr=0x5f29, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0x5ed2, .a=0xea, .x=0x5f, .y=0xcc, .sp=0x14, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x5f28, .value=0x70}, {.addr=0x5f29, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0x5f28, .value=0x70, .type=IO_READ},
        {.addr=0x5f29, .value=0xa8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_003B) {
    const struct CPU_State initial_cpu = {.pc=0xf0e9, .a=0xa6, .x=0x2f, .y=0xb8, .sp=0xc7, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xf0e9, .value=0x70}, {.addr=0xf0ea, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0xf122, .a=0xa6, .x=0x2f, .y=0xb8, .sp=0xc7, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xf0e9, .value=0x70}, {.addr=0xf0ea, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0xf0e9, .value=0x70, .type=IO_READ},
        {.addr=0xf0ea, .value=0x37, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_003C) {
    const struct CPU_State initial_cpu = {.pc=0xed82, .a=0xfc, .x=0xa7, .y=0x18, .sp=0x78, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xed82, .value=0x70}, {.addr=0xed83, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0xed84, .a=0xfc, .x=0xa7, .y=0x18, .sp=0x78, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xed82, .value=0x70}, {.addr=0xed83, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0xed82, .value=0x70, .type=IO_READ},
        {.addr=0xed83, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_003D) {
    const struct CPU_State initial_cpu = {.pc=0x5b81, .a=0x67, .x=0xec, .y=0xd8, .sp=0x7b, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x5b81, .value=0x70}, {.addr=0x5b82, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0x5bfc, .a=0x67, .x=0xec, .y=0xd8, .sp=0x7b, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x5b81, .value=0x70}, {.addr=0x5b82, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0x5b81, .value=0x70, .type=IO_READ},
        {.addr=0x5b82, .value=0x79, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_003E) {
    const struct CPU_State initial_cpu = {.pc=0xa324, .a=0x30, .x=0xa3, .y=0x3c, .sp=0x8f, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xa324, .value=0x70}, {.addr=0xa325, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0xa316, .a=0x30, .x=0xa3, .y=0x3c, .sp=0x8f, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xa324, .value=0x70}, {.addr=0xa325, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0xa324, .value=0x70, .type=IO_READ},
        {.addr=0xa325, .value=0xf0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_003F) {
    const struct CPU_State initial_cpu = {.pc=0xeed0, .a=0xde, .x=0x07, .y=0xac, .sp=0x60, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xeed0, .value=0x70}, {.addr=0xeed1, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0xef36, .a=0xde, .x=0x07, .y=0xac, .sp=0x60, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xeed0, .value=0x70}, {.addr=0xeed1, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0xeed0, .value=0x70, .type=IO_READ},
        {.addr=0xeed1, .value=0x64, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0040) {
    const struct CPU_State initial_cpu = {.pc=0x5ec8, .a=0xf0, .x=0x2f, .y=0xb8, .sp=0xb1, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x5ec8, .value=0x70}, {.addr=0x5ec9, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0x5ebd, .a=0xf0, .x=0x2f, .y=0xb8, .sp=0xb1, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x5ec8, .value=0x70}, {.addr=0x5ec9, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0x5ec8, .value=0x70, .type=IO_READ},
        {.addr=0x5ec9, .value=0xf3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0041) {
    const struct CPU_State initial_cpu = {.pc=0xa7bc, .a=0x38, .x=0x2a, .y=0xa0, .sp=0x62, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xa7bc, .value=0x70}, {.addr=0xa7bd, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0xa7be, .a=0x38, .x=0x2a, .y=0xa0, .sp=0x62, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xa7bc, .value=0x70}, {.addr=0xa7bd, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0xa7bc, .value=0x70, .type=IO_READ},
        {.addr=0xa7bd, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0042) {
    const struct CPU_State initial_cpu = {.pc=0x496b, .a=0x0e, .x=0x93, .y=0x80, .sp=0x91, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x496b, .value=0x70}, {.addr=0x496c, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0x496d, .a=0x0e, .x=0x93, .y=0x80, .sp=0x91, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x496b, .value=0x70}, {.addr=0x496c, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0x496b, .value=0x70, .type=IO_READ},
        {.addr=0x496c, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0043) {
    const struct CPU_State initial_cpu = {.pc=0xa968, .a=0xf0, .x=0x58, .y=0xde, .sp=0x8a, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xa968, .value=0x70}, {.addr=0xa969, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0xa96a, .a=0xf0, .x=0x58, .y=0xde, .sp=0x8a, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0xa968, .value=0x70}, {.addr=0xa969, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0xa968, .value=0x70, .type=IO_READ},
        {.addr=0xa969, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0044) {
    const struct CPU_State initial_cpu = {.pc=0xbc91, .a=0x63, .x=0xcf, .y=0x1e, .sp=0x85, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xbc91, .value=0x70}, {.addr=0xbc92, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0xbc93, .a=0x63, .x=0xcf, .y=0x1e, .sp=0x85, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0xbc91, .value=0x70}, {.addr=0xbc92, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0xbc91, .value=0x70, .type=IO_READ},
        {.addr=0xbc92, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0045) {
    const struct CPU_State initial_cpu = {.pc=0x2436, .a=0xd1, .x=0x85, .y=0x44, .sp=0xe8, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x2436, .value=0x70}, {.addr=0x2437, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0x24b6, .a=0xd1, .x=0x85, .y=0x44, .sp=0xe8, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x2436, .value=0x70}, {.addr=0x2437, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0x2436, .value=0x70, .type=IO_READ},
        {.addr=0x2437, .value=0x7e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0046) {
    const struct CPU_State initial_cpu = {.pc=0x2cd5, .a=0x19, .x=0x98, .y=0xa7, .sp=0x69, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x2cd5, .value=0x70}, {.addr=0x2cd6, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x2cd7, .a=0x19, .x=0x98, .y=0xa7, .sp=0x69, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x2cd5, .value=0x70}, {.addr=0x2cd6, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x2cd5, .value=0x70, .type=IO_READ},
        {.addr=0x2cd6, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0047) {
    const struct CPU_State initial_cpu = {.pc=0x32cf, .a=0x79, .x=0x56, .y=0xa7, .sp=0x7d, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x32cf, .value=0x70}, {.addr=0x32d0, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x32d4, .a=0x79, .x=0x56, .y=0xa7, .sp=0x7d, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x32cf, .value=0x70}, {.addr=0x32d0, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x32cf, .value=0x70, .type=IO_READ},
        {.addr=0x32d0, .value=0x03, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0048) {
    const struct CPU_State initial_cpu = {.pc=0xccfc, .a=0xd1, .x=0x4e, .y=0xf5, .sp=0xa4, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xccfc, .value=0x70}, {.addr=0xccfd, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0xccd0, .a=0xd1, .x=0x4e, .y=0xf5, .sp=0xa4, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0xccfc, .value=0x70}, {.addr=0xccfd, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0xccfc, .value=0x70, .type=IO_READ},
        {.addr=0xccfd, .value=0xd2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0049) {
    const struct CPU_State initial_cpu = {.pc=0xf731, .a=0xd1, .x=0x6c, .y=0x4d, .sp=0xad, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xf731, .value=0x70}, {.addr=0xf732, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xf733, .a=0xd1, .x=0x6c, .y=0x4d, .sp=0xad, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xf731, .value=0x70}, {.addr=0xf732, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xf731, .value=0x70, .type=IO_READ},
        {.addr=0xf732, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_004A) {
    const struct CPU_State initial_cpu = {.pc=0x3f99, .a=0x23, .x=0x9f, .y=0x4b, .sp=0x83, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x3f99, .value=0x70}, {.addr=0x3f9a, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0x3fac, .a=0x23, .x=0x9f, .y=0x4b, .sp=0x83, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x3f99, .value=0x70}, {.addr=0x3f9a, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0x3f99, .value=0x70, .type=IO_READ},
        {.addr=0x3f9a, .value=0x11, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_004B) {
    const struct CPU_State initial_cpu = {.pc=0x87db, .a=0x88, .x=0x3b, .y=0xda, .sp=0xf0, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x87db, .value=0x70}, {.addr=0x87dc, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0x87db, .a=0x88, .x=0x3b, .y=0xda, .sp=0xf0, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x87db, .value=0x70}, {.addr=0x87dc, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0x87db, .value=0x70, .type=IO_READ},
        {.addr=0x87dc, .value=0xfe, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_004C) {
    const struct CPU_State initial_cpu = {.pc=0x4696, .a=0xcd, .x=0x01, .y=0x4c, .sp=0x00, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x4696, .value=0x70}, {.addr=0x4697, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x4698, .a=0xcd, .x=0x01, .y=0x4c, .sp=0x00, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x4696, .value=0x70}, {.addr=0x4697, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x4696, .value=0x70, .type=IO_READ},
        {.addr=0x4697, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_004D) {
    const struct CPU_State initial_cpu = {.pc=0x8aa1, .a=0xe0, .x=0xb6, .y=0xa3, .sp=0xa8, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x8aa1, .value=0x70}, {.addr=0x8aa2, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x8af4, .a=0xe0, .x=0xb6, .y=0xa3, .sp=0xa8, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x8aa1, .value=0x70}, {.addr=0x8aa2, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x8aa1, .value=0x70, .type=IO_READ},
        {.addr=0x8aa2, .value=0x51, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_004E) {
    const struct CPU_State initial_cpu = {.pc=0x2a5c, .a=0xd4, .x=0x82, .y=0x52, .sp=0xdd, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x2a5c, .value=0x70}, {.addr=0x2a5d, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0x2a81, .a=0xd4, .x=0x82, .y=0x52, .sp=0xdd, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x2a5c, .value=0x70}, {.addr=0x2a5d, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0x2a5c, .value=0x70, .type=IO_READ},
        {.addr=0x2a5d, .value=0x23, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_004F) {
    const struct CPU_State initial_cpu = {.pc=0xbd8d, .a=0x80, .x=0x06, .y=0xe1, .sp=0x5c, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xbd8d, .value=0x70}, {.addr=0xbd8e, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0xbd27, .a=0x80, .x=0x06, .y=0xe1, .sp=0x5c, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0xbd8d, .value=0x70}, {.addr=0xbd8e, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0xbd8d, .value=0x70, .type=IO_READ},
        {.addr=0xbd8e, .value=0x98, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0050) {
    const struct CPU_State initial_cpu = {.pc=0x82ed, .a=0xed, .x=0x39, .y=0x05, .sp=0xa5, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x82ed, .value=0x70}, {.addr=0x82ee, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x82ef, .a=0xed, .x=0x39, .y=0x05, .sp=0xa5, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x82ed, .value=0x70}, {.addr=0x82ee, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x82ed, .value=0x70, .type=IO_READ},
        {.addr=0x82ee, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0051) {
    const struct CPU_State initial_cpu = {.pc=0xb8cf, .a=0xba, .x=0x7a, .y=0x6b, .sp=0xc3, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xb8cf, .value=0x70}, {.addr=0xb8d0, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0xb8d1, .a=0xba, .x=0x7a, .y=0x6b, .sp=0xc3, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xb8cf, .value=0x70}, {.addr=0xb8d0, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0xb8cf, .value=0x70, .type=IO_READ},
        {.addr=0xb8d0, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0052) {
    const struct CPU_State initial_cpu = {.pc=0x586e, .a=0xc5, .x=0xee, .y=0x99, .sp=0x3d, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x586e, .value=0x70}, {.addr=0x586f, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x5870, .a=0xc5, .x=0xee, .y=0x99, .sp=0x3d, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x586e, .value=0x70}, {.addr=0x586f, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x586e, .value=0x70, .type=IO_READ},
        {.addr=0x586f, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0053) {
    const struct CPU_State initial_cpu = {.pc=0xb72d, .a=0x25, .x=0x77, .y=0x9e, .sp=0x22, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xb72d, .value=0x70}, {.addr=0xb72e, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0xb72f, .a=0x25, .x=0x77, .y=0x9e, .sp=0x22, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0xb72d, .value=0x70}, {.addr=0xb72e, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0xb72d, .value=0x70, .type=IO_READ},
        {.addr=0xb72e, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0054) {
    const struct CPU_State initial_cpu = {.pc=0x5a2c, .a=0xb3, .x=0x20, .y=0x42, .sp=0xa5, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x5a2c, .value=0x70}, {.addr=0x5a2d, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0x5a2e, .a=0xb3, .x=0x20, .y=0x42, .sp=0xa5, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x5a2c, .value=0x70}, {.addr=0x5a2d, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0x5a2c, .value=0x70, .type=IO_READ},
        {.addr=0x5a2d, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0055) {
    const struct CPU_State initial_cpu = {.pc=0x3c20, .a=0xa3, .x=0xd0, .y=0x4f, .sp=0x08, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x3c20, .value=0x70}, {.addr=0x3c21, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0x3bf8, .a=0xa3, .x=0xd0, .y=0x4f, .sp=0x08, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x3c20, .value=0x70}, {.addr=0x3c21, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0x3c20, .value=0x70, .type=IO_READ},
        {.addr=0x3c21, .value=0xd6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0056) {
    const struct CPU_State initial_cpu = {.pc=0x0965, .a=0x3a, .x=0x0d, .y=0x4b, .sp=0x6e, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x0965, .value=0x70}, {.addr=0x0966, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x091a, .a=0x3a, .x=0x0d, .y=0x4b, .sp=0x6e, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x0965, .value=0x70}, {.addr=0x0966, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x0965, .value=0x70, .type=IO_READ},
        {.addr=0x0966, .value=0xb3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0057) {
    const struct CPU_State initial_cpu = {.pc=0xa5ad, .a=0xdb, .x=0x90, .y=0xd5, .sp=0xcb, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xa5ad, .value=0x70}, {.addr=0xa5ae, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0xa608, .a=0xdb, .x=0x90, .y=0xd5, .sp=0xcb, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xa5ad, .value=0x70}, {.addr=0xa5ae, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0xa5ad, .value=0x70, .type=IO_READ},
        {.addr=0xa5ae, .value=0x59, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0058) {
    const struct CPU_State initial_cpu = {.pc=0xbe09, .a=0x39, .x=0xe3, .y=0x2d, .sp=0x74, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xbe09, .value=0x70}, {.addr=0xbe0a, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xbdd9, .a=0x39, .x=0xe3, .y=0x2d, .sp=0x74, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xbe09, .value=0x70}, {.addr=0xbe0a, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xbe09, .value=0x70, .type=IO_READ},
        {.addr=0xbe0a, .value=0xce, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0059) {
    const struct CPU_State initial_cpu = {.pc=0xe011, .a=0x1f, .x=0x34, .y=0x84, .sp=0x07, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xe011, .value=0x70}, {.addr=0xe012, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0xe013, .a=0x1f, .x=0x34, .y=0x84, .sp=0x07, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0xe011, .value=0x70}, {.addr=0xe012, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0xe011, .value=0x70, .type=IO_READ},
        {.addr=0xe012, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_005A) {
    const struct CPU_State initial_cpu = {.pc=0xf357, .a=0xe0, .x=0x54, .y=0xc9, .sp=0x4c, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xf357, .value=0x70}, {.addr=0xf358, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0xf2fd, .a=0xe0, .x=0x54, .y=0xc9, .sp=0x4c, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xf357, .value=0x70}, {.addr=0xf358, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0xf357, .value=0x70, .type=IO_READ},
        {.addr=0xf358, .value=0xa4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_005B) {
    const struct CPU_State initial_cpu = {.pc=0x467e, .a=0xbf, .x=0x20, .y=0xf4, .sp=0x03, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x467e, .value=0x70}, {.addr=0x467f, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0x4692, .a=0xbf, .x=0x20, .y=0xf4, .sp=0x03, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x467e, .value=0x70}, {.addr=0x467f, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0x467e, .value=0x70, .type=IO_READ},
        {.addr=0x467f, .value=0x12, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_005C) {
    const struct CPU_State initial_cpu = {.pc=0x69c2, .a=0x71, .x=0x37, .y=0x89, .sp=0x29, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x69c2, .value=0x70}, {.addr=0x69c3, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x6954, .a=0x71, .x=0x37, .y=0x89, .sp=0x29, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x69c2, .value=0x70}, {.addr=0x69c3, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x69c2, .value=0x70, .type=IO_READ},
        {.addr=0x69c3, .value=0x90, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_005D) {
    const struct CPU_State initial_cpu = {.pc=0x4e9b, .a=0x6a, .x=0x93, .y=0xb4, .sp=0x25, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x4e9b, .value=0x70}, {.addr=0x4e9c, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x4e9d, .a=0x6a, .x=0x93, .y=0xb4, .sp=0x25, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x4e9b, .value=0x70}, {.addr=0x4e9c, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x4e9b, .value=0x70, .type=IO_READ},
        {.addr=0x4e9c, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_005E) {
    const struct CPU_State initial_cpu = {.pc=0xf687, .a=0x05, .x=0xcc, .y=0x3a, .sp=0xc4, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xf687, .value=0x70}, {.addr=0xf688, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0xf68c, .a=0x05, .x=0xcc, .y=0x3a, .sp=0xc4, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xf687, .value=0x70}, {.addr=0xf688, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0xf687, .value=0x70, .type=IO_READ},
        {.addr=0xf688, .value=0x03, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_005F) {
    const struct CPU_State initial_cpu = {.pc=0x4672, .a=0xcb, .x=0xec, .y=0xb5, .sp=0x2e, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x4672, .value=0x70}, {.addr=0x4673, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0x468a, .a=0xcb, .x=0xec, .y=0xb5, .sp=0x2e, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x4672, .value=0x70}, {.addr=0x4673, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0x4672, .value=0x70, .type=IO_READ},
        {.addr=0x4673, .value=0x16, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0060) {
    const struct CPU_State initial_cpu = {.pc=0xfa97, .a=0xa5, .x=0x1e, .y=0xcb, .sp=0x3f, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xfa97, .value=0x70}, {.addr=0xfa98, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0xfa99, .a=0xa5, .x=0x1e, .y=0xcb, .sp=0x3f, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xfa97, .value=0x70}, {.addr=0xfa98, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0xfa97, .value=0x70, .type=IO_READ},
        {.addr=0xfa98, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0061) {
    const struct CPU_State initial_cpu = {.pc=0x5e40, .a=0xaf, .x=0x59, .y=0x94, .sp=0xc5, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x5e40, .value=0x70}, {.addr=0x5e41, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0x5e42, .a=0xaf, .x=0x59, .y=0x94, .sp=0xc5, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x5e40, .value=0x70}, {.addr=0x5e41, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0x5e40, .value=0x70, .type=IO_READ},
        {.addr=0x5e41, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0062) {
    const struct CPU_State initial_cpu = {.pc=0x46de, .a=0x80, .x=0x7d, .y=0x45, .sp=0x1a, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x46de, .value=0x70}, {.addr=0x46df, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x46e4, .a=0x80, .x=0x7d, .y=0x45, .sp=0x1a, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x46de, .value=0x70}, {.addr=0x46df, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x46de, .value=0x70, .type=IO_READ},
        {.addr=0x46df, .value=0x04, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0063) {
    const struct CPU_State initial_cpu = {.pc=0xffd4, .a=0x0d, .x=0xeb, .y=0xe6, .sp=0x09, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xffd4, .value=0x70}, {.addr=0xffd5, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0xffd6, .a=0x0d, .x=0xeb, .y=0xe6, .sp=0x09, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0xffd4, .value=0x70}, {.addr=0xffd5, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0xffd4, .value=0x70, .type=IO_READ},
        {.addr=0xffd5, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0064) {
    const struct CPU_State initial_cpu = {.pc=0x11ae, .a=0xdb, .x=0x5a, .y=0xc3, .sp=0xb0, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x11ae, .value=0x70}, {.addr=0x11af, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x11b0, .a=0xdb, .x=0x5a, .y=0xc3, .sp=0xb0, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x11ae, .value=0x70}, {.addr=0x11af, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x11ae, .value=0x70, .type=IO_READ},
        {.addr=0x11af, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0065) {
    const struct CPU_State initial_cpu = {.pc=0xc672, .a=0x6c, .x=0x02, .y=0xaa, .sp=0x6d, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xc672, .value=0x70}, {.addr=0xc673, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0xc674, .a=0x6c, .x=0x02, .y=0xaa, .sp=0x6d, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0xc672, .value=0x70}, {.addr=0xc673, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0xc672, .value=0x70, .type=IO_READ},
        {.addr=0xc673, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0066) {
    const struct CPU_State initial_cpu = {.pc=0x3e11, .a=0x9b, .x=0x36, .y=0x0b, .sp=0xa7, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x3e11, .value=0x70}, {.addr=0x3e12, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x3db9, .a=0x9b, .x=0x36, .y=0x0b, .sp=0xa7, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x3e11, .value=0x70}, {.addr=0x3e12, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x3e11, .value=0x70, .type=IO_READ},
        {.addr=0x3e12, .value=0xa6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0067) {
    const struct CPU_State initial_cpu = {.pc=0x342a, .a=0xcc, .x=0x93, .y=0x50, .sp=0x4f, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x342a, .value=0x70}, {.addr=0x342b, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x3497, .a=0xcc, .x=0x93, .y=0x50, .sp=0x4f, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x342a, .value=0x70}, {.addr=0x342b, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x342a, .value=0x70, .type=IO_READ},
        {.addr=0x342b, .value=0x6b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0068) {
    const struct CPU_State initial_cpu = {.pc=0xe84e, .a=0x7a, .x=0xf7, .y=0xba, .sp=0xf9, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xe84e, .value=0x70}, {.addr=0xe84f, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0xe8be, .a=0x7a, .x=0xf7, .y=0xba, .sp=0xf9, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xe84e, .value=0x70}, {.addr=0xe84f, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0xe84e, .value=0x70, .type=IO_READ},
        {.addr=0xe84f, .value=0x6e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0069) {
    const struct CPU_State initial_cpu = {.pc=0x4229, .a=0xcd, .x=0x97, .y=0x0f, .sp=0x4a, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x4229, .value=0x70}, {.addr=0x422a, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0x4241, .a=0xcd, .x=0x97, .y=0x0f, .sp=0x4a, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x4229, .value=0x70}, {.addr=0x422a, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0x4229, .value=0x70, .type=IO_READ},
        {.addr=0x422a, .value=0x16, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_006A) {
    const struct CPU_State initial_cpu = {.pc=0xe4c8, .a=0xc1, .x=0x97, .y=0x34, .sp=0x36, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xe4c8, .value=0x70}, {.addr=0xe4c9, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xe4ca, .a=0xc1, .x=0x97, .y=0x34, .sp=0x36, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xe4c8, .value=0x70}, {.addr=0xe4c9, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xe4c8, .value=0x70, .type=IO_READ},
        {.addr=0xe4c9, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_006B) {
    const struct CPU_State initial_cpu = {.pc=0xbb11, .a=0xbe, .x=0xa0, .y=0x49, .sp=0x9c, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xbb11, .value=0x70}, {.addr=0xbb12, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0xbb13, .a=0xbe, .x=0xa0, .y=0x49, .sp=0x9c, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0xbb11, .value=0x70}, {.addr=0xbb12, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0xbb11, .value=0x70, .type=IO_READ},
        {.addr=0xbb12, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_006C) {
    const struct CPU_State initial_cpu = {.pc=0xbfd2, .a=0x1e, .x=0x87, .y=0xf5, .sp=0xec, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xbfd2, .value=0x70}, {.addr=0xbfd3, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0xbf9b, .a=0x1e, .x=0x87, .y=0xf5, .sp=0xec, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xbfd2, .value=0x70}, {.addr=0xbfd3, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0xbfd2, .value=0x70, .type=IO_READ},
        {.addr=0xbfd3, .value=0xc7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_006D) {
    const struct CPU_State initial_cpu = {.pc=0x266e, .a=0xe8, .x=0x39, .y=0x99, .sp=0x4f, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x266e, .value=0x70}, {.addr=0x266f, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0x2686, .a=0xe8, .x=0x39, .y=0x99, .sp=0x4f, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x266e, .value=0x70}, {.addr=0x266f, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0x266e, .value=0x70, .type=IO_READ},
        {.addr=0x266f, .value=0x16, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_006E) {
    const struct CPU_State initial_cpu = {.pc=0x0199, .a=0x21, .x=0x71, .y=0xef, .sp=0x47, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0x70}, {.addr=0x019a, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x0145, .a=0x21, .x=0x71, .y=0xef, .sp=0x47, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0x70}, {.addr=0x019a, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x0199, .value=0x70, .type=IO_READ},
        {.addr=0x019a, .value=0xaa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_006F) {
    const struct CPU_State initial_cpu = {.pc=0xbbc5, .a=0x8b, .x=0xa2, .y=0xe1, .sp=0x7c, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xbbc5, .value=0x70}, {.addr=0xbbc6, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0xbb99, .a=0x8b, .x=0xa2, .y=0xe1, .sp=0x7c, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0xbbc5, .value=0x70}, {.addr=0xbbc6, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0xbbc5, .value=0x70, .type=IO_READ},
        {.addr=0xbbc6, .value=0xd2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0070) {
    const struct CPU_State initial_cpu = {.pc=0x6c13, .a=0xa5, .x=0x23, .y=0x77, .sp=0xf5, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x6c13, .value=0x70}, {.addr=0x6c14, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x6c15, .a=0xa5, .x=0x23, .y=0x77, .sp=0xf5, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x6c13, .value=0x70}, {.addr=0x6c14, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x6c13, .value=0x70, .type=IO_READ},
        {.addr=0x6c14, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0071) {
    const struct CPU_State initial_cpu = {.pc=0xb8b8, .a=0x9e, .x=0xa4, .y=0x55, .sp=0xad, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xb8b8, .value=0x70}, {.addr=0xb8b9, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0xb867, .a=0x9e, .x=0xa4, .y=0x55, .sp=0xad, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0xb8b8, .value=0x70}, {.addr=0xb8b9, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0xb8b8, .value=0x70, .type=IO_READ},
        {.addr=0xb8b9, .value=0xad, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0072) {
    const struct CPU_State initial_cpu = {.pc=0x136a, .a=0x9c, .x=0xbc, .y=0xbe, .sp=0x6e, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x136a, .value=0x70}, {.addr=0x136b, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x136c, .a=0x9c, .x=0xbc, .y=0xbe, .sp=0x6e, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x136a, .value=0x70}, {.addr=0x136b, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x136a, .value=0x70, .type=IO_READ},
        {.addr=0x136b, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0073) {
    const struct CPU_State initial_cpu = {.pc=0xd4c3, .a=0x95, .x=0xb7, .y=0x99, .sp=0xe7, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xd4c3, .value=0x70}, {.addr=0xd4c4, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0xd4e9, .a=0x95, .x=0xb7, .y=0x99, .sp=0xe7, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xd4c3, .value=0x70}, {.addr=0xd4c4, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0xd4c3, .value=0x70, .type=IO_READ},
        {.addr=0xd4c4, .value=0x24, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0074) {
    const struct CPU_State initial_cpu = {.pc=0xf869, .a=0x86, .x=0xa5, .y=0x45, .sp=0xba, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xf869, .value=0x70}, {.addr=0xf86a, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xf848, .a=0x86, .x=0xa5, .y=0x45, .sp=0xba, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xf869, .value=0x70}, {.addr=0xf86a, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xf869, .value=0x70, .type=IO_READ},
        {.addr=0xf86a, .value=0xdd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0075) {
    const struct CPU_State initial_cpu = {.pc=0x1bf5, .a=0x7b, .x=0x1c, .y=0x05, .sp=0x08, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x1bf5, .value=0x70}, {.addr=0x1bf6, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0x1c69, .a=0x7b, .x=0x1c, .y=0x05, .sp=0x08, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x1bf5, .value=0x70}, {.addr=0x1bf6, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0x1bf5, .value=0x70, .type=IO_READ},
        {.addr=0x1bf6, .value=0x72, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0076) {
    const struct CPU_State initial_cpu = {.pc=0x35e2, .a=0x2f, .x=0x9b, .y=0x1f, .sp=0xc6, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x35e2, .value=0x70}, {.addr=0x35e3, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0x35e4, .a=0x2f, .x=0x9b, .y=0x1f, .sp=0xc6, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x35e2, .value=0x70}, {.addr=0x35e3, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0x35e2, .value=0x70, .type=IO_READ},
        {.addr=0x35e3, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0077) {
    const struct CPU_State initial_cpu = {.pc=0xb369, .a=0x76, .x=0x9a, .y=0x94, .sp=0x33, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xb369, .value=0x70}, {.addr=0xb36a, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0xb349, .a=0x76, .x=0x9a, .y=0x94, .sp=0x33, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xb369, .value=0x70}, {.addr=0xb36a, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0xb369, .value=0x70, .type=IO_READ},
        {.addr=0xb36a, .value=0xde, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0078) {
    const struct CPU_State initial_cpu = {.pc=0x6db2, .a=0x09, .x=0x06, .y=0x97, .sp=0x0f, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x6db2, .value=0x70}, {.addr=0x6db3, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0x6db4, .a=0x09, .x=0x06, .y=0x97, .sp=0x0f, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x6db2, .value=0x70}, {.addr=0x6db3, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0x6db2, .value=0x70, .type=IO_READ},
        {.addr=0x6db3, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0079) {
    const struct CPU_State initial_cpu = {.pc=0x485b, .a=0x49, .x=0xf2, .y=0x6b, .sp=0x09, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x485b, .value=0x70}, {.addr=0x485c, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x48a9, .a=0x49, .x=0xf2, .y=0x6b, .sp=0x09, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x485b, .value=0x70}, {.addr=0x485c, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x485b, .value=0x70, .type=IO_READ},
        {.addr=0x485c, .value=0x4c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_007A) {
    const struct CPU_State initial_cpu = {.pc=0x81f4, .a=0x98, .x=0x4b, .y=0xe1, .sp=0xd3, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x81f4, .value=0x70}, {.addr=0x81f5, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x81d2, .a=0x98, .x=0x4b, .y=0xe1, .sp=0xd3, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x81f4, .value=0x70}, {.addr=0x81f5, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x81f4, .value=0x70, .type=IO_READ},
        {.addr=0x81f5, .value=0xdc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_007B) {
    const struct CPU_State initial_cpu = {.pc=0xc110, .a=0x40, .x=0x1d, .y=0xe3, .sp=0xf8, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xc110, .value=0x70}, {.addr=0xc111, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0xc130, .a=0x40, .x=0x1d, .y=0xe3, .sp=0xf8, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0xc110, .value=0x70}, {.addr=0xc111, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0xc110, .value=0x70, .type=IO_READ},
        {.addr=0xc111, .value=0x1e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_007C) {
    const struct CPU_State initial_cpu = {.pc=0xdc42, .a=0xee, .x=0x33, .y=0x36, .sp=0xdf, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xdc42, .value=0x70}, {.addr=0xdc43, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0xdc44, .a=0xee, .x=0x33, .y=0x36, .sp=0xdf, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0xdc42, .value=0x70}, {.addr=0xdc43, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0xdc42, .value=0x70, .type=IO_READ},
        {.addr=0xdc43, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_007D) {
    const struct CPU_State initial_cpu = {.pc=0x4aef, .a=0x48, .x=0x9b, .y=0xb4, .sp=0x5a, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x4aef, .value=0x70}, {.addr=0x4af0, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0x4afb, .a=0x48, .x=0x9b, .y=0xb4, .sp=0x5a, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x4aef, .value=0x70}, {.addr=0x4af0, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0x4aef, .value=0x70, .type=IO_READ},
        {.addr=0x4af0, .value=0x0a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_007E) {
    const struct CPU_State initial_cpu = {.pc=0xabed, .a=0xf2, .x=0xf5, .y=0x6c, .sp=0xfa, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xabed, .value=0x70}, {.addr=0xabee, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0xabef, .a=0xf2, .x=0xf5, .y=0x6c, .sp=0xfa, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xabed, .value=0x70}, {.addr=0xabee, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0xabed, .value=0x70, .type=IO_READ},
        {.addr=0xabee, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_007F) {
    const struct CPU_State initial_cpu = {.pc=0xae99, .a=0xa6, .x=0x2b, .y=0x2a, .sp=0x5d, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xae99, .value=0x70}, {.addr=0xae9a, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0xae9c, .a=0xa6, .x=0x2b, .y=0x2a, .sp=0x5d, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0xae99, .value=0x70}, {.addr=0xae9a, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0xae99, .value=0x70, .type=IO_READ},
        {.addr=0xae9a, .value=0x01, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0080) {
    const struct CPU_State initial_cpu = {.pc=0x657b, .a=0xec, .x=0x18, .y=0x58, .sp=0xd6, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x657b, .value=0x70}, {.addr=0x657c, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x65ba, .a=0xec, .x=0x18, .y=0x58, .sp=0xd6, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x657b, .value=0x70}, {.addr=0x657c, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x657b, .value=0x70, .type=IO_READ},
        {.addr=0x657c, .value=0x3d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0081) {
    const struct CPU_State initial_cpu = {.pc=0x8bf4, .a=0xdc, .x=0xb7, .y=0x70, .sp=0x19, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x8bf4, .value=0x70}, {.addr=0x8bf5, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x8bc9, .a=0xdc, .x=0xb7, .y=0x70, .sp=0x19, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x8bf4, .value=0x70}, {.addr=0x8bf5, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x8bf4, .value=0x70, .type=IO_READ},
        {.addr=0x8bf5, .value=0xd3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0082) {
    const struct CPU_State initial_cpu = {.pc=0x53e6, .a=0xd8, .x=0x97, .y=0x0b, .sp=0xdc, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x53e6, .value=0x70}, {.addr=0x53e7, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0x53e8, .a=0xd8, .x=0x97, .y=0x0b, .sp=0xdc, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x53e6, .value=0x70}, {.addr=0x53e7, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0x53e6, .value=0x70, .type=IO_READ},
        {.addr=0x53e7, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0083) {
    const struct CPU_State initial_cpu = {.pc=0x721b, .a=0x03, .x=0xa0, .y=0x33, .sp=0x12, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x721b, .value=0x70}, {.addr=0x721c, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0x7209, .a=0x03, .x=0xa0, .y=0x33, .sp=0x12, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x721b, .value=0x70}, {.addr=0x721c, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0x721b, .value=0x70, .type=IO_READ},
        {.addr=0x721c, .value=0xec, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0084) {
    const struct CPU_State initial_cpu = {.pc=0x2591, .a=0xb8, .x=0x94, .y=0xf6, .sp=0x84, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x2591, .value=0x70}, {.addr=0x2592, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0x2586, .a=0xb8, .x=0x94, .y=0xf6, .sp=0x84, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x2591, .value=0x70}, {.addr=0x2592, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0x2591, .value=0x70, .type=IO_READ},
        {.addr=0x2592, .value=0xf3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0085) {
    const struct CPU_State initial_cpu = {.pc=0x5c7d, .a=0x70, .x=0x8e, .y=0xb1, .sp=0x9b, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x5c7d, .value=0x70}, {.addr=0x5c7e, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0x5c7f, .a=0x70, .x=0x8e, .y=0xb1, .sp=0x9b, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x5c7d, .value=0x70}, {.addr=0x5c7e, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0x5c7d, .value=0x70, .type=IO_READ},
        {.addr=0x5c7e, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0086) {
    const struct CPU_State initial_cpu = {.pc=0x7872, .a=0xd5, .x=0x7f, .y=0x8d, .sp=0xdc, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x7872, .value=0x70}, {.addr=0x7873, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0x7874, .a=0xd5, .x=0x7f, .y=0x8d, .sp=0xdc, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x7872, .value=0x70}, {.addr=0x7873, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0x7872, .value=0x70, .type=IO_READ},
        {.addr=0x7873, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0087) {
    const struct CPU_State initial_cpu = {.pc=0x3aa8, .a=0x0e, .x=0x74, .y=0xcc, .sp=0x4c, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x3aa8, .value=0x70}, {.addr=0x3aa9, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x3ac7, .a=0x0e, .x=0x74, .y=0xcc, .sp=0x4c, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x3aa8, .value=0x70}, {.addr=0x3aa9, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x3aa8, .value=0x70, .type=IO_READ},
        {.addr=0x3aa9, .value=0x1d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0088) {
    const struct CPU_State initial_cpu = {.pc=0x84a8, .a=0x48, .x=0x77, .y=0xb3, .sp=0x99, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x84a8, .value=0x70}, {.addr=0x84a9, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x84aa, .a=0x48, .x=0x77, .y=0xb3, .sp=0x99, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x84a8, .value=0x70}, {.addr=0x84a9, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x84a8, .value=0x70, .type=IO_READ},
        {.addr=0x84a9, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0089) {
    const struct CPU_State initial_cpu = {.pc=0xeb88, .a=0xe2, .x=0x82, .y=0x69, .sp=0x08, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xeb88, .value=0x70}, {.addr=0xeb89, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0xeb6f, .a=0xe2, .x=0x82, .y=0x69, .sp=0x08, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0xeb88, .value=0x70}, {.addr=0xeb89, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0xeb88, .value=0x70, .type=IO_READ},
        {.addr=0xeb89, .value=0xe5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_008A) {
    const struct CPU_State initial_cpu = {.pc=0x1b95, .a=0x5f, .x=0x85, .y=0x7d, .sp=0x16, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x1b95, .value=0x70}, {.addr=0x1b96, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0x1bce, .a=0x5f, .x=0x85, .y=0x7d, .sp=0x16, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x1b95, .value=0x70}, {.addr=0x1b96, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0x1b95, .value=0x70, .type=IO_READ},
        {.addr=0x1b96, .value=0x37, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_008B) {
    const struct CPU_State initial_cpu = {.pc=0xba27, .a=0xc5, .x=0xf5, .y=0x43, .sp=0x19, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xba27, .value=0x70}, {.addr=0xba28, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0xba29, .a=0xc5, .x=0xf5, .y=0x43, .sp=0x19, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xba27, .value=0x70}, {.addr=0xba28, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0xba27, .value=0x70, .type=IO_READ},
        {.addr=0xba28, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_008C) {
    const struct CPU_State initial_cpu = {.pc=0x40b3, .a=0x66, .x=0x90, .y=0x47, .sp=0xb9, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x40b3, .value=0x70}, {.addr=0x40b4, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0x40b5, .a=0x66, .x=0x90, .y=0x47, .sp=0xb9, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x40b3, .value=0x70}, {.addr=0x40b4, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0x40b3, .value=0x70, .type=IO_READ},
        {.addr=0x40b4, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_008D) {
    const struct CPU_State initial_cpu = {.pc=0x8687, .a=0xee, .x=0x17, .y=0x28, .sp=0x5e, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x8687, .value=0x70}, {.addr=0x8688, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0x866e, .a=0xee, .x=0x17, .y=0x28, .sp=0x5e, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x8687, .value=0x70}, {.addr=0x8688, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0x8687, .value=0x70, .type=IO_READ},
        {.addr=0x8688, .value=0xe5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_008E) {
    const struct CPU_State initial_cpu = {.pc=0xfb14, .a=0x79, .x=0x9c, .y=0x68, .sp=0x56, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xfb14, .value=0x70}, {.addr=0xfb15, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0xfb8f, .a=0x79, .x=0x9c, .y=0x68, .sp=0x56, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xfb14, .value=0x70}, {.addr=0xfb15, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0xfb14, .value=0x70, .type=IO_READ},
        {.addr=0xfb15, .value=0x79, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_008F) {
    const struct CPU_State initial_cpu = {.pc=0x4e2d, .a=0x87, .x=0xa2, .y=0xbf, .sp=0xbe, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x4e2d, .value=0x70}, {.addr=0x4e2e, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0x4e2f, .a=0x87, .x=0xa2, .y=0xbf, .sp=0xbe, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x4e2d, .value=0x70}, {.addr=0x4e2e, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0x4e2d, .value=0x70, .type=IO_READ},
        {.addr=0x4e2e, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0090) {
    const struct CPU_State initial_cpu = {.pc=0x162e, .a=0x6f, .x=0x06, .y=0x8d, .sp=0x48, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x162e, .value=0x70}, {.addr=0x162f, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x15e4, .a=0x6f, .x=0x06, .y=0x8d, .sp=0x48, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x162e, .value=0x70}, {.addr=0x162f, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x162e, .value=0x70, .type=IO_READ},
        {.addr=0x162f, .value=0xb4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0091) {
    const struct CPU_State initial_cpu = {.pc=0x96ee, .a=0xce, .x=0x9b, .y=0x19, .sp=0x95, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x96ee, .value=0x70}, {.addr=0x96ef, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x96f0, .a=0xce, .x=0x9b, .y=0x19, .sp=0x95, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x96ee, .value=0x70}, {.addr=0x96ef, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x96ee, .value=0x70, .type=IO_READ},
        {.addr=0x96ef, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0092) {
    const struct CPU_State initial_cpu = {.pc=0xaae4, .a=0x86, .x=0x4a, .y=0x2d, .sp=0x58, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xaae4, .value=0x70}, {.addr=0xaae5, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0xaae6, .a=0x86, .x=0x4a, .y=0x2d, .sp=0x58, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0xaae4, .value=0x70}, {.addr=0xaae5, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0xaae4, .value=0x70, .type=IO_READ},
        {.addr=0xaae5, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0093) {
    const struct CPU_State initial_cpu = {.pc=0x8306, .a=0xd4, .x=0xfa, .y=0x5d, .sp=0xb8, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x8306, .value=0x70}, {.addr=0x8307, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0x8308, .a=0xd4, .x=0xfa, .y=0x5d, .sp=0xb8, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x8306, .value=0x70}, {.addr=0x8307, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0x8306, .value=0x70, .type=IO_READ},
        {.addr=0x8307, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0094) {
    const struct CPU_State initial_cpu = {.pc=0xa646, .a=0xf7, .x=0x6c, .y=0x5c, .sp=0x71, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xa646, .value=0x70}, {.addr=0xa647, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0xa5db, .a=0xf7, .x=0x6c, .y=0x5c, .sp=0x71, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0xa646, .value=0x70}, {.addr=0xa647, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0xa646, .value=0x70, .type=IO_READ},
        {.addr=0xa647, .value=0x93, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0095) {
    const struct CPU_State initial_cpu = {.pc=0xadda, .a=0x4c, .x=0x18, .y=0x25, .sp=0xfd, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xadda, .value=0x70}, {.addr=0xaddb, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0xaddc, .a=0x4c, .x=0x18, .y=0x25, .sp=0xfd, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0xadda, .value=0x70}, {.addr=0xaddb, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0xadda, .value=0x70, .type=IO_READ},
        {.addr=0xaddb, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0096) {
    const struct CPU_State initial_cpu = {.pc=0x6f71, .a=0x80, .x=0xca, .y=0xc2, .sp=0x4a, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x6f71, .value=0x70}, {.addr=0x6f72, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x6fbe, .a=0x80, .x=0xca, .y=0xc2, .sp=0x4a, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x6f71, .value=0x70}, {.addr=0x6f72, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x6f71, .value=0x70, .type=IO_READ},
        {.addr=0x6f72, .value=0x4b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0097) {
    const struct CPU_State initial_cpu = {.pc=0xd5d2, .a=0x0c, .x=0x24, .y=0xad, .sp=0x2e, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xd5d2, .value=0x70}, {.addr=0xd5d3, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0xd632, .a=0x0c, .x=0x24, .y=0xad, .sp=0x2e, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xd5d2, .value=0x70}, {.addr=0xd5d3, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0xd5d2, .value=0x70, .type=IO_READ},
        {.addr=0xd5d3, .value=0x5e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0098) {
    const struct CPU_State initial_cpu = {.pc=0x7250, .a=0x36, .x=0x09, .y=0x5f, .sp=0x6d, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x7250, .value=0x70}, {.addr=0x7251, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x7252, .a=0x36, .x=0x09, .y=0x5f, .sp=0x6d, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x7250, .value=0x70}, {.addr=0x7251, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x7250, .value=0x70, .type=IO_READ},
        {.addr=0x7251, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0099) {
    const struct CPU_State initial_cpu = {.pc=0xa33f, .a=0x4c, .x=0xf1, .y=0x08, .sp=0x88, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xa33f, .value=0x70}, {.addr=0xa340, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0xa341, .a=0x4c, .x=0xf1, .y=0x08, .sp=0x88, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xa33f, .value=0x70}, {.addr=0xa340, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0xa33f, .value=0x70, .type=IO_READ},
        {.addr=0xa340, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_009A) {
    const struct CPU_State initial_cpu = {.pc=0xcdb7, .a=0x56, .x=0x65, .y=0x3d, .sp=0xb1, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xcdb7, .value=0x70}, {.addr=0xcdb8, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0xcdb9, .a=0x56, .x=0x65, .y=0x3d, .sp=0xb1, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xcdb7, .value=0x70}, {.addr=0xcdb8, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0xcdb7, .value=0x70, .type=IO_READ},
        {.addr=0xcdb8, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_009B) {
    const struct CPU_State initial_cpu = {.pc=0x6321, .a=0x53, .x=0x3f, .y=0x9c, .sp=0x44, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x6321, .value=0x70}, {.addr=0x6322, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x6323, .a=0x53, .x=0x3f, .y=0x9c, .sp=0x44, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x6321, .value=0x70}, {.addr=0x6322, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x6321, .value=0x70, .type=IO_READ},
        {.addr=0x6322, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_009C) {
    const struct CPU_State initial_cpu = {.pc=0xe754, .a=0x74, .x=0xbe, .y=0xc9, .sp=0xa7, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xe754, .value=0x70}, {.addr=0xe755, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0xe774, .a=0x74, .x=0xbe, .y=0xc9, .sp=0xa7, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xe754, .value=0x70}, {.addr=0xe755, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0xe754, .value=0x70, .type=IO_READ},
        {.addr=0xe755, .value=0x1e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_009D) {
    const struct CPU_State initial_cpu = {.pc=0xcc22, .a=0xfe, .x=0xcd, .y=0xf7, .sp=0x36, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xcc22, .value=0x70}, {.addr=0xcc23, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0xcc24, .a=0xfe, .x=0xcd, .y=0xf7, .sp=0x36, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xcc22, .value=0x70}, {.addr=0xcc23, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0xcc22, .value=0x70, .type=IO_READ},
        {.addr=0xcc23, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_009E) {
    const struct CPU_State initial_cpu = {.pc=0x6154, .a=0xbc, .x=0xb6, .y=0xcc, .sp=0x3c, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x6154, .value=0x70}, {.addr=0x6155, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0x6138, .a=0xbc, .x=0xb6, .y=0xcc, .sp=0x3c, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x6154, .value=0x70}, {.addr=0x6155, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0x6154, .value=0x70, .type=IO_READ},
        {.addr=0x6155, .value=0xe2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_009F) {
    const struct CPU_State initial_cpu = {.pc=0xff52, .a=0x13, .x=0x6d, .y=0x1d, .sp=0xe3, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xff52, .value=0x70}, {.addr=0xff53, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0xff54, .a=0x13, .x=0x6d, .y=0x1d, .sp=0xe3, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0xff52, .value=0x70}, {.addr=0xff53, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0xff52, .value=0x70, .type=IO_READ},
        {.addr=0xff53, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00A0) {
    const struct CPU_State initial_cpu = {.pc=0xd82b, .a=0x69, .x=0x26, .y=0xe5, .sp=0xb2, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xd82b, .value=0x70}, {.addr=0xd82c, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0xd82d, .a=0x69, .x=0x26, .y=0xe5, .sp=0xb2, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xd82b, .value=0x70}, {.addr=0xd82c, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0xd82b, .value=0x70, .type=IO_READ},
        {.addr=0xd82c, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x882f, .a=0xa3, .x=0x2f, .y=0x3c, .sp=0x9a, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x882f, .value=0x70}, {.addr=0x8830, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x87bf, .a=0xa3, .x=0x2f, .y=0x3c, .sp=0x9a, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x882f, .value=0x70}, {.addr=0x8830, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x882f, .value=0x70, .type=IO_READ},
        {.addr=0x8830, .value=0x8e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00A2) {
    const struct CPU_State initial_cpu = {.pc=0x4219, .a=0xc1, .x=0x88, .y=0x35, .sp=0x19, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x4219, .value=0x70}, {.addr=0x421a, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0x4213, .a=0xc1, .x=0x88, .y=0x35, .sp=0x19, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x4219, .value=0x70}, {.addr=0x421a, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0x4219, .value=0x70, .type=IO_READ},
        {.addr=0x421a, .value=0xf8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00A3) {
    const struct CPU_State initial_cpu = {.pc=0xa8e5, .a=0xe1, .x=0xd6, .y=0x13, .sp=0xf0, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xa8e5, .value=0x70}, {.addr=0xa8e6, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xa8e4, .a=0xe1, .x=0xd6, .y=0x13, .sp=0xf0, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xa8e5, .value=0x70}, {.addr=0xa8e6, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xa8e5, .value=0x70, .type=IO_READ},
        {.addr=0xa8e6, .value=0xfd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00A4) {
    const struct CPU_State initial_cpu = {.pc=0xf622, .a=0x03, .x=0xed, .y=0x77, .sp=0x57, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xf622, .value=0x70}, {.addr=0xf623, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0xf60d, .a=0x03, .x=0xed, .y=0x77, .sp=0x57, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0xf622, .value=0x70}, {.addr=0xf623, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0xf622, .value=0x70, .type=IO_READ},
        {.addr=0xf623, .value=0xe9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x0ee3, .a=0xe1, .x=0x2e, .y=0xb9, .sp=0xc3, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0ee3, .value=0x70}, {.addr=0x0ee4, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x0f60, .a=0xe1, .x=0x2e, .y=0xb9, .sp=0xc3, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0ee3, .value=0x70}, {.addr=0x0ee4, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x0ee3, .value=0x70, .type=IO_READ},
        {.addr=0x0ee4, .value=0x7b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00A6) {
    const struct CPU_State initial_cpu = {.pc=0xd74e, .a=0x27, .x=0xa9, .y=0x4a, .sp=0x56, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xd74e, .value=0x70}, {.addr=0xd74f, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0xd707, .a=0x27, .x=0xa9, .y=0x4a, .sp=0x56, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0xd74e, .value=0x70}, {.addr=0xd74f, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0xd74e, .value=0x70, .type=IO_READ},
        {.addr=0xd74f, .value=0xb7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00A7) {
    const struct CPU_State initial_cpu = {.pc=0xde7f, .a=0x10, .x=0xa9, .y=0xab, .sp=0x29, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xde7f, .value=0x70}, {.addr=0xde80, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xdebe, .a=0x10, .x=0xa9, .y=0xab, .sp=0x29, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0xde7f, .value=0x70}, {.addr=0xde80, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xde7f, .value=0x70, .type=IO_READ},
        {.addr=0xde80, .value=0x3d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x07f2, .a=0xaf, .x=0xf1, .y=0xd5, .sp=0x91, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x07f2, .value=0x70}, {.addr=0x07f3, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0x07fc, .a=0xaf, .x=0xf1, .y=0xd5, .sp=0x91, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x07f2, .value=0x70}, {.addr=0x07f3, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0x07f2, .value=0x70, .type=IO_READ},
        {.addr=0x07f3, .value=0x08, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x410c, .a=0x8e, .x=0xbb, .y=0x64, .sp=0x2b, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x410c, .value=0x70}, {.addr=0x410d, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0x410e, .a=0x8e, .x=0xbb, .y=0x64, .sp=0x2b, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x410c, .value=0x70}, {.addr=0x410d, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0x410c, .value=0x70, .type=IO_READ},
        {.addr=0x410d, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x231f, .a=0x9f, .x=0xdc, .y=0xd2, .sp=0xbe, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x231f, .value=0x70}, {.addr=0x2320, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x234a, .a=0x9f, .x=0xdc, .y=0xd2, .sp=0xbe, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x231f, .value=0x70}, {.addr=0x2320, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x231f, .value=0x70, .type=IO_READ},
        {.addr=0x2320, .value=0x29, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00AB) {
    const struct CPU_State initial_cpu = {.pc=0xbfc5, .a=0xbd, .x=0x19, .y=0x49, .sp=0x2d, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xbfc5, .value=0x70}, {.addr=0xbfc6, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0xbf4f, .a=0xbd, .x=0x19, .y=0x49, .sp=0x2d, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xbfc5, .value=0x70}, {.addr=0xbfc6, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0xbfc5, .value=0x70, .type=IO_READ},
        {.addr=0xbfc6, .value=0x88, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00AC) {
    const struct CPU_State initial_cpu = {.pc=0x015e, .a=0x1c, .x=0xb5, .y=0x1e, .sp=0x73, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x015e, .value=0x70}, {.addr=0x015f, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0x0160, .a=0x1c, .x=0xb5, .y=0x1e, .sp=0x73, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x015e, .value=0x70}, {.addr=0x015f, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0x015e, .value=0x70, .type=IO_READ},
        {.addr=0x015f, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x6f3f, .a=0x62, .x=0xa8, .y=0x21, .sp=0xf6, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x6f3f, .value=0x70}, {.addr=0x6f40, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x6f41, .a=0x62, .x=0xa8, .y=0x21, .sp=0xf6, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x6f3f, .value=0x70}, {.addr=0x6f40, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x6f3f, .value=0x70, .type=IO_READ},
        {.addr=0x6f40, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00AE) {
    const struct CPU_State initial_cpu = {.pc=0x80ad, .a=0xc5, .x=0xb5, .y=0x6f, .sp=0x12, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x80ad, .value=0x70}, {.addr=0x80ae, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0x8061, .a=0xc5, .x=0xb5, .y=0x6f, .sp=0x12, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x80ad, .value=0x70}, {.addr=0x80ae, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0x80ad, .value=0x70, .type=IO_READ},
        {.addr=0x80ae, .value=0xb2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00AF) {
    const struct CPU_State initial_cpu = {.pc=0x63d0, .a=0xb6, .x=0x06, .y=0xf2, .sp=0x13, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x63d0, .value=0x70}, {.addr=0x63d1, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x63d2, .a=0xb6, .x=0x06, .y=0xf2, .sp=0x13, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x63d0, .value=0x70}, {.addr=0x63d1, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x63d0, .value=0x70, .type=IO_READ},
        {.addr=0x63d1, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00B0) {
    const struct CPU_State initial_cpu = {.pc=0xd193, .a=0xca, .x=0x43, .y=0x1b, .sp=0x41, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xd193, .value=0x70}, {.addr=0xd194, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xd195, .a=0xca, .x=0x43, .y=0x1b, .sp=0x41, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0xd193, .value=0x70}, {.addr=0xd194, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xd193, .value=0x70, .type=IO_READ},
        {.addr=0xd194, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00B1) {
    const struct CPU_State initial_cpu = {.pc=0x1aca, .a=0xd3, .x=0x10, .y=0xc1, .sp=0x4e, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x1aca, .value=0x70}, {.addr=0x1acb, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0x1b4b, .a=0xd3, .x=0x10, .y=0xc1, .sp=0x4e, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x1aca, .value=0x70}, {.addr=0x1acb, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0x1aca, .value=0x70, .type=IO_READ},
        {.addr=0x1acb, .value=0x7f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00B2) {
    const struct CPU_State initial_cpu = {.pc=0x9f62, .a=0xbd, .x=0x41, .y=0x23, .sp=0x2b, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x9f62, .value=0x70}, {.addr=0x9f63, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x9f81, .a=0xbd, .x=0x41, .y=0x23, .sp=0x2b, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x9f62, .value=0x70}, {.addr=0x9f63, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x9f62, .value=0x70, .type=IO_READ},
        {.addr=0x9f63, .value=0x1d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00B3) {
    const struct CPU_State initial_cpu = {.pc=0x5f53, .a=0x47, .x=0x4b, .y=0x62, .sp=0x29, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x5f53, .value=0x70}, {.addr=0x5f54, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5f43, .a=0x47, .x=0x4b, .y=0x62, .sp=0x29, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x5f53, .value=0x70}, {.addr=0x5f54, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x5f53, .value=0x70, .type=IO_READ},
        {.addr=0x5f54, .value=0xee, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00B4) {
    const struct CPU_State initial_cpu = {.pc=0x9662, .a=0xd7, .x=0x03, .y=0xe9, .sp=0x8d, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x9662, .value=0x70}, {.addr=0x9663, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x96ae, .a=0xd7, .x=0x03, .y=0xe9, .sp=0x8d, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x9662, .value=0x70}, {.addr=0x9663, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x9662, .value=0x70, .type=IO_READ},
        {.addr=0x9663, .value=0x4a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00B5) {
    const struct CPU_State initial_cpu = {.pc=0x01d1, .a=0x0f, .x=0xc9, .y=0xad, .sp=0x9c, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0x70}, {.addr=0x01d2, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x0193, .a=0x0f, .x=0xc9, .y=0xad, .sp=0x9c, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0x70}, {.addr=0x01d2, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x01d1, .value=0x70, .type=IO_READ},
        {.addr=0x01d2, .value=0xc0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00B6) {
    const struct CPU_State initial_cpu = {.pc=0x78bf, .a=0x2e, .x=0x8c, .y=0xab, .sp=0xdf, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x78bf, .value=0x70}, {.addr=0x78c0, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x78c1, .a=0x2e, .x=0x8c, .y=0xab, .sp=0xdf, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x78bf, .value=0x70}, {.addr=0x78c0, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x78bf, .value=0x70, .type=IO_READ},
        {.addr=0x78c0, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x6a86, .a=0x2a, .x=0xda, .y=0xad, .sp=0x73, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x6a86, .value=0x70}, {.addr=0x6a87, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0x6adc, .a=0x2a, .x=0xda, .y=0xad, .sp=0x73, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x6a86, .value=0x70}, {.addr=0x6a87, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0x6a86, .value=0x70, .type=IO_READ},
        {.addr=0x6a87, .value=0x54, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00B8) {
    const struct CPU_State initial_cpu = {.pc=0x460f, .a=0x89, .x=0xed, .y=0x83, .sp=0x23, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x460f, .value=0x70}, {.addr=0x4610, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0x460c, .a=0x89, .x=0xed, .y=0x83, .sp=0x23, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x460f, .value=0x70}, {.addr=0x4610, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0x460f, .value=0x70, .type=IO_READ},
        {.addr=0x4610, .value=0xfb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00B9) {
    const struct CPU_State initial_cpu = {.pc=0x49c2, .a=0x65, .x=0xd1, .y=0x38, .sp=0x39, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x49c2, .value=0x70}, {.addr=0x49c3, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x49c4, .a=0x65, .x=0xd1, .y=0x38, .sp=0x39, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x49c2, .value=0x70}, {.addr=0x49c3, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x49c2, .value=0x70, .type=IO_READ},
        {.addr=0x49c3, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00BA) {
    const struct CPU_State initial_cpu = {.pc=0x9339, .a=0x33, .x=0xec, .y=0x26, .sp=0xd0, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x9339, .value=0x70}, {.addr=0x933a, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0x937c, .a=0x33, .x=0xec, .y=0x26, .sp=0xd0, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x9339, .value=0x70}, {.addr=0x933a, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0x9339, .value=0x70, .type=IO_READ},
        {.addr=0x933a, .value=0x41, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00BB) {
    const struct CPU_State initial_cpu = {.pc=0xb15b, .a=0xf1, .x=0x2d, .y=0x73, .sp=0x6f, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xb15b, .value=0x70}, {.addr=0xb15c, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xb15d, .a=0xf1, .x=0x2d, .y=0x73, .sp=0x6f, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0xb15b, .value=0x70}, {.addr=0xb15c, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xb15b, .value=0x70, .type=IO_READ},
        {.addr=0xb15c, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x0938, .a=0xfa, .x=0xed, .y=0x14, .sp=0xad, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x0938, .value=0x70}, {.addr=0x0939, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x098c, .a=0xfa, .x=0xed, .y=0x14, .sp=0xad, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0938, .value=0x70}, {.addr=0x0939, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x0938, .value=0x70, .type=IO_READ},
        {.addr=0x0939, .value=0x52, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00BD) {
    const struct CPU_State initial_cpu = {.pc=0x6303, .a=0x92, .x=0x04, .y=0x16, .sp=0x17, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x6303, .value=0x70}, {.addr=0x6304, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x62ce, .a=0x92, .x=0x04, .y=0x16, .sp=0x17, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x6303, .value=0x70}, {.addr=0x6304, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x6303, .value=0x70, .type=IO_READ},
        {.addr=0x6304, .value=0xc9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00BE) {
    const struct CPU_State initial_cpu = {.pc=0x4aea, .a=0x1b, .x=0x85, .y=0x9e, .sp=0x33, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x4aea, .value=0x70}, {.addr=0x4aeb, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x4aec, .a=0x1b, .x=0x85, .y=0x9e, .sp=0x33, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x4aea, .value=0x70}, {.addr=0x4aeb, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x4aea, .value=0x70, .type=IO_READ},
        {.addr=0x4aeb, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00BF) {
    const struct CPU_State initial_cpu = {.pc=0x24ac, .a=0x25, .x=0x83, .y=0x3a, .sp=0x3a, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x24ac, .value=0x70}, {.addr=0x24ad, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x251b, .a=0x25, .x=0x83, .y=0x3a, .sp=0x3a, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x24ac, .value=0x70}, {.addr=0x24ad, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x24ac, .value=0x70, .type=IO_READ},
        {.addr=0x24ad, .value=0x6d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00C0) {
    const struct CPU_State initial_cpu = {.pc=0x6206, .a=0x72, .x=0x71, .y=0x3f, .sp=0xa7, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x6206, .value=0x70}, {.addr=0x6207, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0x619c, .a=0x72, .x=0x71, .y=0x3f, .sp=0xa7, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x6206, .value=0x70}, {.addr=0x6207, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0x6206, .value=0x70, .type=IO_READ},
        {.addr=0x6207, .value=0x94, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00C1) {
    const struct CPU_State initial_cpu = {.pc=0x1038, .a=0x08, .x=0x56, .y=0x4b, .sp=0xc5, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x1038, .value=0x70}, {.addr=0x1039, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0x0ffc, .a=0x08, .x=0x56, .y=0x4b, .sp=0xc5, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x1038, .value=0x70}, {.addr=0x1039, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0x1038, .value=0x70, .type=IO_READ},
        {.addr=0x1039, .value=0xc2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00C2) {
    const struct CPU_State initial_cpu = {.pc=0xccf2, .a=0xe4, .x=0x41, .y=0x70, .sp=0x7e, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xccf2, .value=0x70}, {.addr=0xccf3, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0xccf4, .a=0xe4, .x=0x41, .y=0x70, .sp=0x7e, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xccf2, .value=0x70}, {.addr=0xccf3, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0xccf2, .value=0x70, .type=IO_READ},
        {.addr=0xccf3, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00C3) {
    const struct CPU_State initial_cpu = {.pc=0x7e14, .a=0xbb, .x=0xf9, .y=0xe1, .sp=0x38, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x7e14, .value=0x70}, {.addr=0x7e15, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x7e16, .a=0xbb, .x=0xf9, .y=0xe1, .sp=0x38, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x7e14, .value=0x70}, {.addr=0x7e15, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x7e14, .value=0x70, .type=IO_READ},
        {.addr=0x7e15, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00C4) {
    const struct CPU_State initial_cpu = {.pc=0xd5de, .a=0x3f, .x=0x95, .y=0x02, .sp=0x73, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xd5de, .value=0x70}, {.addr=0xd5df, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xd5dc, .a=0x3f, .x=0x95, .y=0x02, .sp=0x73, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xd5de, .value=0x70}, {.addr=0xd5df, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xd5de, .value=0x70, .type=IO_READ},
        {.addr=0xd5df, .value=0xfc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00C5) {
    const struct CPU_State initial_cpu = {.pc=0xc84f, .a=0x5e, .x=0x31, .y=0x57, .sp=0x3e, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xc84f, .value=0x70}, {.addr=0xc850, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0xc851, .a=0x5e, .x=0x31, .y=0x57, .sp=0x3e, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xc84f, .value=0x70}, {.addr=0xc850, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0xc84f, .value=0x70, .type=IO_READ},
        {.addr=0xc850, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00C6) {
    const struct CPU_State initial_cpu = {.pc=0xb306, .a=0x32, .x=0x63, .y=0x76, .sp=0xcc, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xb306, .value=0x70}, {.addr=0xb307, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xb2ae, .a=0x32, .x=0x63, .y=0x76, .sp=0xcc, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0xb306, .value=0x70}, {.addr=0xb307, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xb306, .value=0x70, .type=IO_READ},
        {.addr=0xb307, .value=0xa6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00C7) {
    const struct CPU_State initial_cpu = {.pc=0xdafc, .a=0xf3, .x=0xaa, .y=0xd3, .sp=0x6c, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xdafc, .value=0x70}, {.addr=0xdafd, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0xdb32, .a=0xf3, .x=0xaa, .y=0xd3, .sp=0x6c, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0xdafc, .value=0x70}, {.addr=0xdafd, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0xdafc, .value=0x70, .type=IO_READ},
        {.addr=0xdafd, .value=0x34, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00C8) {
    const struct CPU_State initial_cpu = {.pc=0xcdc3, .a=0xfe, .x=0x3c, .y=0xfb, .sp=0x95, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xcdc3, .value=0x70}, {.addr=0xcdc4, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0xcdc5, .a=0xfe, .x=0x3c, .y=0xfb, .sp=0x95, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0xcdc3, .value=0x70}, {.addr=0xcdc4, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0xcdc3, .value=0x70, .type=IO_READ},
        {.addr=0xcdc4, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00C9) {
    const struct CPU_State initial_cpu = {.pc=0x4696, .a=0x38, .x=0x88, .y=0x33, .sp=0xab, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x4696, .value=0x70}, {.addr=0x4697, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0x46a3, .a=0x38, .x=0x88, .y=0x33, .sp=0xab, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x4696, .value=0x70}, {.addr=0x4697, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0x4696, .value=0x70, .type=IO_READ},
        {.addr=0x4697, .value=0x0b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00CA) {
    const struct CPU_State initial_cpu = {.pc=0x6fb4, .a=0xab, .x=0xa1, .y=0xa7, .sp=0x71, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x6fb4, .value=0x70}, {.addr=0x6fb5, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0x701b, .a=0xab, .x=0xa1, .y=0xa7, .sp=0x71, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x6fb4, .value=0x70}, {.addr=0x6fb5, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0x6fb4, .value=0x70, .type=IO_READ},
        {.addr=0x6fb5, .value=0x65, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00CB) {
    const struct CPU_State initial_cpu = {.pc=0xab89, .a=0x58, .x=0xe4, .y=0xa0, .sp=0xf9, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xab89, .value=0x70}, {.addr=0xab8a, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0xab8b, .a=0x58, .x=0xe4, .y=0xa0, .sp=0xf9, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xab89, .value=0x70}, {.addr=0xab8a, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0xab89, .value=0x70, .type=IO_READ},
        {.addr=0xab8a, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00CC) {
    const struct CPU_State initial_cpu = {.pc=0xad1b, .a=0xb7, .x=0xca, .y=0x9c, .sp=0x82, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xad1b, .value=0x70}, {.addr=0xad1c, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0xad1d, .a=0xb7, .x=0xca, .y=0x9c, .sp=0x82, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xad1b, .value=0x70}, {.addr=0xad1c, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0xad1b, .value=0x70, .type=IO_READ},
        {.addr=0xad1c, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00CD) {
    const struct CPU_State initial_cpu = {.pc=0x744d, .a=0xc7, .x=0x60, .y=0xa5, .sp=0x11, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x744d, .value=0x70}, {.addr=0x744e, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x744f, .a=0xc7, .x=0x60, .y=0xa5, .sp=0x11, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x744d, .value=0x70}, {.addr=0x744e, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x744d, .value=0x70, .type=IO_READ},
        {.addr=0x744e, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x06db, .a=0x16, .x=0xa4, .y=0x9c, .sp=0xba, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x06db, .value=0x70}, {.addr=0x06dc, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x067c, .a=0x16, .x=0xa4, .y=0x9c, .sp=0xba, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x06db, .value=0x70}, {.addr=0x06dc, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x06db, .value=0x70, .type=IO_READ},
        {.addr=0x06dc, .value=0x9f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00CF) {
    const struct CPU_State initial_cpu = {.pc=0xa530, .a=0x0e, .x=0x13, .y=0xef, .sp=0x65, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xa530, .value=0x70}, {.addr=0xa531, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa56f, .a=0x0e, .x=0x13, .y=0xef, .sp=0x65, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0xa530, .value=0x70}, {.addr=0xa531, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa530, .value=0x70, .type=IO_READ},
        {.addr=0xa531, .value=0x3d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00D0) {
    const struct CPU_State initial_cpu = {.pc=0xb7d2, .a=0xe2, .x=0x7e, .y=0x6a, .sp=0x47, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xb7d2, .value=0x70}, {.addr=0xb7d3, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0xb79e, .a=0xe2, .x=0x7e, .y=0x6a, .sp=0x47, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xb7d2, .value=0x70}, {.addr=0xb7d3, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0xb7d2, .value=0x70, .type=IO_READ},
        {.addr=0xb7d3, .value=0xca, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00D1) {
    const struct CPU_State initial_cpu = {.pc=0xc205, .a=0x83, .x=0xee, .y=0x07, .sp=0x2a, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xc205, .value=0x70}, {.addr=0xc206, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0xc207, .a=0x83, .x=0xee, .y=0x07, .sp=0x2a, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0xc205, .value=0x70}, {.addr=0xc206, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0xc205, .value=0x70, .type=IO_READ},
        {.addr=0xc206, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00D2) {
    const struct CPU_State initial_cpu = {.pc=0x780f, .a=0xe5, .x=0x43, .y=0x10, .sp=0xfd, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x780f, .value=0x70}, {.addr=0x7810, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0x7811, .a=0xe5, .x=0x43, .y=0x10, .sp=0xfd, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x780f, .value=0x70}, {.addr=0x7810, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0x780f, .value=0x70, .type=IO_READ},
        {.addr=0x7810, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00D3) {
    const struct CPU_State initial_cpu = {.pc=0x7819, .a=0x2f, .x=0xc5, .y=0x80, .sp=0x77, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x7819, .value=0x70}, {.addr=0x781a, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x77cf, .a=0x2f, .x=0xc5, .y=0x80, .sp=0x77, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x7819, .value=0x70}, {.addr=0x781a, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x7819, .value=0x70, .type=IO_READ},
        {.addr=0x781a, .value=0xb4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00D4) {
    const struct CPU_State initial_cpu = {.pc=0xad33, .a=0x73, .x=0x94, .y=0x96, .sp=0x47, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xad33, .value=0x70}, {.addr=0xad34, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xad55, .a=0x73, .x=0x94, .y=0x96, .sp=0x47, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0xad33, .value=0x70}, {.addr=0xad34, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xad33, .value=0x70, .type=IO_READ},
        {.addr=0xad34, .value=0x20, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00D5) {
    const struct CPU_State initial_cpu = {.pc=0x65b5, .a=0x40, .x=0x44, .y=0x02, .sp=0xaf, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x65b5, .value=0x70}, {.addr=0x65b6, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x65cf, .a=0x40, .x=0x44, .y=0x02, .sp=0xaf, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x65b5, .value=0x70}, {.addr=0x65b6, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x65b5, .value=0x70, .type=IO_READ},
        {.addr=0x65b6, .value=0x18, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00D6) {
    const struct CPU_State initial_cpu = {.pc=0xc34a, .a=0xbe, .x=0xda, .y=0x93, .sp=0xf0, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xc34a, .value=0x70}, {.addr=0xc34b, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0xc35a, .a=0xbe, .x=0xda, .y=0x93, .sp=0xf0, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xc34a, .value=0x70}, {.addr=0xc34b, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0xc34a, .value=0x70, .type=IO_READ},
        {.addr=0xc34b, .value=0x0e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00D7) {
    const struct CPU_State initial_cpu = {.pc=0x0911, .a=0x65, .x=0xc7, .y=0xc3, .sp=0xed, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x0911, .value=0x70}, {.addr=0x0912, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x0940, .a=0x65, .x=0xc7, .y=0xc3, .sp=0xed, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0911, .value=0x70}, {.addr=0x0912, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x0911, .value=0x70, .type=IO_READ},
        {.addr=0x0912, .value=0x2d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00D8) {
    const struct CPU_State initial_cpu = {.pc=0x58e1, .a=0xa0, .x=0x8c, .y=0x0b, .sp=0x88, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x58e1, .value=0x70}, {.addr=0x58e2, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x58e3, .a=0xa0, .x=0x8c, .y=0x0b, .sp=0x88, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x58e1, .value=0x70}, {.addr=0x58e2, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x58e1, .value=0x70, .type=IO_READ},
        {.addr=0x58e2, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00D9) {
    const struct CPU_State initial_cpu = {.pc=0x49ea, .a=0x72, .x=0x59, .y=0x11, .sp=0x9c, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x49ea, .value=0x70}, {.addr=0x49eb, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x49a4, .a=0x72, .x=0x59, .y=0x11, .sp=0x9c, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x49ea, .value=0x70}, {.addr=0x49eb, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x49ea, .value=0x70, .type=IO_READ},
        {.addr=0x49eb, .value=0xb8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00DA) {
    const struct CPU_State initial_cpu = {.pc=0x675e, .a=0x0f, .x=0x55, .y=0x63, .sp=0x93, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x675e, .value=0x70}, {.addr=0x675f, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x66e2, .a=0x0f, .x=0x55, .y=0x63, .sp=0x93, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x675e, .value=0x70}, {.addr=0x675f, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x675e, .value=0x70, .type=IO_READ},
        {.addr=0x675f, .value=0x82, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x6172, .a=0x68, .x=0x19, .y=0x3f, .sp=0x4d, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x6172, .value=0x70}, {.addr=0x6173, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0x6192, .a=0x68, .x=0x19, .y=0x3f, .sp=0x4d, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x6172, .value=0x70}, {.addr=0x6173, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0x6172, .value=0x70, .type=IO_READ},
        {.addr=0x6173, .value=0x1e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00DC) {
    const struct CPU_State initial_cpu = {.pc=0x6663, .a=0x3b, .x=0x0b, .y=0xba, .sp=0xfa, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x6663, .value=0x70}, {.addr=0x6664, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x6665, .a=0x3b, .x=0x0b, .y=0xba, .sp=0xfa, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x6663, .value=0x70}, {.addr=0x6664, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x6663, .value=0x70, .type=IO_READ},
        {.addr=0x6664, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x04d3, .a=0x2c, .x=0xca, .y=0x72, .sp=0xf1, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x04d3, .value=0x70}, {.addr=0x04d4, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0x0499, .a=0x2c, .x=0xca, .y=0x72, .sp=0xf1, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x04d3, .value=0x70}, {.addr=0x04d4, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0x04d3, .value=0x70, .type=IO_READ},
        {.addr=0x04d4, .value=0xc4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00DE) {
    const struct CPU_State initial_cpu = {.pc=0x4cb6, .a=0xc5, .x=0x8f, .y=0x16, .sp=0x55, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x4cb6, .value=0x70}, {.addr=0x4cb7, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x4c8b, .a=0xc5, .x=0x8f, .y=0x16, .sp=0x55, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x4cb6, .value=0x70}, {.addr=0x4cb7, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x4cb6, .value=0x70, .type=IO_READ},
        {.addr=0x4cb7, .value=0xd3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00DF) {
    const struct CPU_State initial_cpu = {.pc=0x74c7, .a=0x40, .x=0x63, .y=0x0f, .sp=0x0a, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x74c7, .value=0x70}, {.addr=0x74c8, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0x744a, .a=0x40, .x=0x63, .y=0x0f, .sp=0x0a, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x74c7, .value=0x70}, {.addr=0x74c8, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0x74c7, .value=0x70, .type=IO_READ},
        {.addr=0x74c8, .value=0x81, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x529a, .a=0x60, .x=0x97, .y=0x85, .sp=0x2e, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x529a, .value=0x70}, {.addr=0x529b, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x52e6, .a=0x60, .x=0x97, .y=0x85, .sp=0x2e, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x529a, .value=0x70}, {.addr=0x529b, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x529a, .value=0x70, .type=IO_READ},
        {.addr=0x529b, .value=0x4a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00E1) {
    const struct CPU_State initial_cpu = {.pc=0xe950, .a=0x85, .x=0x54, .y=0x19, .sp=0xf5, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xe950, .value=0x70}, {.addr=0xe951, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0xe952, .a=0x85, .x=0x54, .y=0x19, .sp=0xf5, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0xe950, .value=0x70}, {.addr=0xe951, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0xe950, .value=0x70, .type=IO_READ},
        {.addr=0xe951, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x4d99, .a=0xdf, .x=0xfc, .y=0x99, .sp=0xdf, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x4d99, .value=0x70}, {.addr=0x4d9a, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0x4df9, .a=0xdf, .x=0xfc, .y=0x99, .sp=0xdf, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x4d99, .value=0x70}, {.addr=0x4d9a, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0x4d99, .value=0x70, .type=IO_READ},
        {.addr=0x4d9a, .value=0x5e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00E3) {
    const struct CPU_State initial_cpu = {.pc=0xc15b, .a=0xfa, .x=0x91, .y=0x6a, .sp=0x35, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xc15b, .value=0x70}, {.addr=0xc15c, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0xc15d, .a=0xfa, .x=0x91, .y=0x6a, .sp=0x35, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0xc15b, .value=0x70}, {.addr=0xc15c, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0xc15b, .value=0x70, .type=IO_READ},
        {.addr=0xc15c, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x771a, .a=0x56, .x=0x94, .y=0x89, .sp=0x63, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x771a, .value=0x70}, {.addr=0x771b, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0x771c, .a=0x56, .x=0x94, .y=0x89, .sp=0x63, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x771a, .value=0x70}, {.addr=0x771b, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0x771a, .value=0x70, .type=IO_READ},
        {.addr=0x771b, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00E5) {
    const struct CPU_State initial_cpu = {.pc=0xea34, .a=0xd4, .x=0x59, .y=0xa3, .sp=0x0e, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xea34, .value=0x70}, {.addr=0xea35, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0xea36, .a=0xd4, .x=0x59, .y=0xa3, .sp=0x0e, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0xea34, .value=0x70}, {.addr=0xea35, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0xea34, .value=0x70, .type=IO_READ},
        {.addr=0xea35, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00E6) {
    const struct CPU_State initial_cpu = {.pc=0xe70b, .a=0x92, .x=0x7b, .y=0xd6, .sp=0x87, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xe70b, .value=0x70}, {.addr=0xe70c, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0xe770, .a=0x92, .x=0x7b, .y=0xd6, .sp=0x87, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xe70b, .value=0x70}, {.addr=0xe70c, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0xe70b, .value=0x70, .type=IO_READ},
        {.addr=0xe70c, .value=0x63, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00E7) {
    const struct CPU_State initial_cpu = {.pc=0x597e, .a=0x10, .x=0x55, .y=0xd3, .sp=0x2f, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x597e, .value=0x70}, {.addr=0x597f, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x5980, .a=0x10, .x=0x55, .y=0xd3, .sp=0x2f, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x597e, .value=0x70}, {.addr=0x597f, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x597e, .value=0x70, .type=IO_READ},
        {.addr=0x597f, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00E8) {
    const struct CPU_State initial_cpu = {.pc=0x9fa4, .a=0x95, .x=0xde, .y=0x01, .sp=0x56, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x9fa4, .value=0x70}, {.addr=0x9fa5, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x9fa6, .a=0x95, .x=0xde, .y=0x01, .sp=0x56, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x9fa4, .value=0x70}, {.addr=0x9fa5, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x9fa4, .value=0x70, .type=IO_READ},
        {.addr=0x9fa5, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00E9) {
    const struct CPU_State initial_cpu = {.pc=0x0219, .a=0x8a, .x=0xc1, .y=0xa6, .sp=0x47, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x0219, .value=0x70}, {.addr=0x021a, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x021b, .a=0x8a, .x=0xc1, .y=0xa6, .sp=0x47, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0219, .value=0x70}, {.addr=0x021a, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x0219, .value=0x70, .type=IO_READ},
        {.addr=0x021a, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00EA) {
    const struct CPU_State initial_cpu = {.pc=0xdfe6, .a=0x50, .x=0x78, .y=0x01, .sp=0xe0, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xdfe6, .value=0x70}, {.addr=0xdfe7, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0xdfe8, .a=0x50, .x=0x78, .y=0x01, .sp=0xe0, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xdfe6, .value=0x70}, {.addr=0xdfe7, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0xdfe6, .value=0x70, .type=IO_READ},
        {.addr=0xdfe7, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00EB) {
    const struct CPU_State initial_cpu = {.pc=0xa863, .a=0x94, .x=0x75, .y=0xa1, .sp=0x37, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xa863, .value=0x70}, {.addr=0xa864, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0xa865, .a=0x94, .x=0x75, .y=0xa1, .sp=0x37, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xa863, .value=0x70}, {.addr=0xa864, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0xa863, .value=0x70, .type=IO_READ},
        {.addr=0xa864, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00EC) {
    const struct CPU_State initial_cpu = {.pc=0x4c56, .a=0x29, .x=0x0a, .y=0x49, .sp=0x9f, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x4c56, .value=0x70}, {.addr=0x4c57, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0x4c63, .a=0x29, .x=0x0a, .y=0x49, .sp=0x9f, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x4c56, .value=0x70}, {.addr=0x4c57, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0x4c56, .value=0x70, .type=IO_READ},
        {.addr=0x4c57, .value=0x0b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00ED) {
    const struct CPU_State initial_cpu = {.pc=0x47ac, .a=0x1b, .x=0xc7, .y=0xa9, .sp=0x8b, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x47ac, .value=0x70}, {.addr=0x47ad, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x47d4, .a=0x1b, .x=0xc7, .y=0xa9, .sp=0x8b, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x47ac, .value=0x70}, {.addr=0x47ad, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x47ac, .value=0x70, .type=IO_READ},
        {.addr=0x47ad, .value=0x26, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00EE) {
    const struct CPU_State initial_cpu = {.pc=0x668f, .a=0x9f, .x=0xe3, .y=0xfc, .sp=0x9e, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x668f, .value=0x70}, {.addr=0x6690, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x6691, .a=0x9f, .x=0xe3, .y=0xfc, .sp=0x9e, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x668f, .value=0x70}, {.addr=0x6690, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x668f, .value=0x70, .type=IO_READ},
        {.addr=0x6690, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00EF) {
    const struct CPU_State initial_cpu = {.pc=0xda42, .a=0x06, .x=0x44, .y=0x31, .sp=0x95, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xda42, .value=0x70}, {.addr=0xda43, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0xda7b, .a=0x06, .x=0x44, .y=0x31, .sp=0x95, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xda42, .value=0x70}, {.addr=0xda43, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0xda42, .value=0x70, .type=IO_READ},
        {.addr=0xda43, .value=0x37, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x78dc, .a=0x7d, .x=0x9c, .y=0x9b, .sp=0xca, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x78dc, .value=0x70}, {.addr=0x78dd, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0x78de, .a=0x7d, .x=0x9c, .y=0x9b, .sp=0xca, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x78dc, .value=0x70}, {.addr=0x78dd, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0x78dc, .value=0x70, .type=IO_READ},
        {.addr=0x78dd, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00F1) {
    const struct CPU_State initial_cpu = {.pc=0x3018, .a=0x37, .x=0x99, .y=0x9d, .sp=0xaf, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x3018, .value=0x70}, {.addr=0x3019, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x301a, .a=0x37, .x=0x99, .y=0x9d, .sp=0xaf, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x3018, .value=0x70}, {.addr=0x3019, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x3018, .value=0x70, .type=IO_READ},
        {.addr=0x3019, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00F2) {
    const struct CPU_State initial_cpu = {.pc=0xb8d1, .a=0x16, .x=0xf8, .y=0x28, .sp=0xdf, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xb8d1, .value=0x70}, {.addr=0xb8d2, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0xb924, .a=0x16, .x=0xf8, .y=0x28, .sp=0xdf, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0xb8d1, .value=0x70}, {.addr=0xb8d2, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0xb8d1, .value=0x70, .type=IO_READ},
        {.addr=0xb8d2, .value=0x51, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00F3) {
    const struct CPU_State initial_cpu = {.pc=0xba2a, .a=0x95, .x=0x05, .y=0xcf, .sp=0x1b, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xba2a, .value=0x70}, {.addr=0xba2b, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0xba2c, .a=0x95, .x=0x05, .y=0xcf, .sp=0x1b, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0xba2a, .value=0x70}, {.addr=0xba2b, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0xba2a, .value=0x70, .type=IO_READ},
        {.addr=0xba2b, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00F4) {
    const struct CPU_State initial_cpu = {.pc=0x1f24, .a=0xf1, .x=0x1d, .y=0xe4, .sp=0xda, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x1f24, .value=0x70}, {.addr=0x1f25, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x1f26, .a=0xf1, .x=0x1d, .y=0xe4, .sp=0xda, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x1f24, .value=0x70}, {.addr=0x1f25, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x1f24, .value=0x70, .type=IO_READ},
        {.addr=0x1f25, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00F5) {
    const struct CPU_State initial_cpu = {.pc=0x4518, .a=0xc0, .x=0xa9, .y=0x5e, .sp=0xa5, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x4518, .value=0x70}, {.addr=0x4519, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x451a, .a=0xc0, .x=0xa9, .y=0x5e, .sp=0xa5, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x4518, .value=0x70}, {.addr=0x4519, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x4518, .value=0x70, .type=IO_READ},
        {.addr=0x4519, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00F6) {
    const struct CPU_State initial_cpu = {.pc=0x27c0, .a=0xb1, .x=0x33, .y=0xf4, .sp=0xc0, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x27c0, .value=0x70}, {.addr=0x27c1, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0x27c2, .a=0xb1, .x=0x33, .y=0xf4, .sp=0xc0, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x27c0, .value=0x70}, {.addr=0x27c1, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0x27c0, .value=0x70, .type=IO_READ},
        {.addr=0x27c1, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00F7) {
    const struct CPU_State initial_cpu = {.pc=0x2adb, .a=0x9b, .x=0x54, .y=0x22, .sp=0x6b, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x2adb, .value=0x70}, {.addr=0x2adc, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x2add, .a=0x9b, .x=0x54, .y=0x22, .sp=0x6b, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x2adb, .value=0x70}, {.addr=0x2adc, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x2adb, .value=0x70, .type=IO_READ},
        {.addr=0x2adc, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00F8) {
    const struct CPU_State initial_cpu = {.pc=0xbd4f, .a=0x90, .x=0x85, .y=0xe7, .sp=0xb4, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xbd4f, .value=0x70}, {.addr=0xbd50, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xbd11, .a=0x90, .x=0x85, .y=0xe7, .sp=0xb4, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xbd4f, .value=0x70}, {.addr=0xbd50, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xbd4f, .value=0x70, .type=IO_READ},
        {.addr=0xbd50, .value=0xc0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00F9) {
    const struct CPU_State initial_cpu = {.pc=0xa19d, .a=0xc9, .x=0x7a, .y=0x8e, .sp=0xe6, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xa19d, .value=0x70}, {.addr=0xa19e, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0xa177, .a=0xc9, .x=0x7a, .y=0x8e, .sp=0xe6, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xa19d, .value=0x70}, {.addr=0xa19e, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0xa19d, .value=0x70, .type=IO_READ},
        {.addr=0xa19e, .value=0xd8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00FA) {
    const struct CPU_State initial_cpu = {.pc=0x90a0, .a=0x78, .x=0x6f, .y=0xb5, .sp=0xcf, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x90a0, .value=0x70}, {.addr=0x90a1, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x90a2, .a=0x78, .x=0x6f, .y=0xb5, .sp=0xcf, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x90a0, .value=0x70}, {.addr=0x90a1, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x90a0, .value=0x70, .type=IO_READ},
        {.addr=0x90a1, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00FB) {
    const struct CPU_State initial_cpu = {.pc=0xd7b4, .a=0x82, .x=0x04, .y=0xd1, .sp=0xb8, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xd7b4, .value=0x70}, {.addr=0xd7b5, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0xd7b6, .a=0x82, .x=0x04, .y=0xd1, .sp=0xb8, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xd7b4, .value=0x70}, {.addr=0xd7b5, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0xd7b4, .value=0x70, .type=IO_READ},
        {.addr=0xd7b5, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00FC) {
    const struct CPU_State initial_cpu = {.pc=0x20ab, .a=0xad, .x=0x26, .y=0xc6, .sp=0x24, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x20ab, .value=0x70}, {.addr=0x20ac, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0x20ad, .a=0xad, .x=0x26, .y=0xc6, .sp=0x24, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x20ab, .value=0x70}, {.addr=0x20ac, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0x20ab, .value=0x70, .type=IO_READ},
        {.addr=0x20ac, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x1309, .a=0x04, .x=0x66, .y=0xdf, .sp=0x3f, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x1309, .value=0x70}, {.addr=0x130a, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x12eb, .a=0x04, .x=0x66, .y=0xdf, .sp=0x3f, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x1309, .value=0x70}, {.addr=0x130a, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x1309, .value=0x70, .type=IO_READ},
        {.addr=0x130a, .value=0xe0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00FE) {
    const struct CPU_State initial_cpu = {.pc=0xe052, .a=0xe3, .x=0x42, .y=0x19, .sp=0x23, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xe052, .value=0x70}, {.addr=0xe053, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0xdffc, .a=0xe3, .x=0x42, .y=0x19, .sp=0x23, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xe052, .value=0x70}, {.addr=0xe053, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0xe052, .value=0x70, .type=IO_READ},
        {.addr=0xe053, .value=0xa8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_00FF) {
    const struct CPU_State initial_cpu = {.pc=0x5786, .a=0xf2, .x=0x06, .y=0x4f, .sp=0xfa, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x5786, .value=0x70}, {.addr=0x5787, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x5788, .a=0xf2, .x=0x06, .y=0x4f, .sp=0xfa, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x5786, .value=0x70}, {.addr=0x5787, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x5786, .value=0x70, .type=IO_READ},
        {.addr=0x5787, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0100) {
    const struct CPU_State initial_cpu = {.pc=0xe6e2, .a=0xe7, .x=0x5c, .y=0xb5, .sp=0xe6, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xe6e2, .value=0x70}, {.addr=0xe6e3, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0xe70d, .a=0xe7, .x=0x5c, .y=0xb5, .sp=0xe6, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0xe6e2, .value=0x70}, {.addr=0xe6e3, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0xe6e2, .value=0x70, .type=IO_READ},
        {.addr=0xe6e3, .value=0x29, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0101) {
    const struct CPU_State initial_cpu = {.pc=0xe513, .a=0xed, .x=0xd1, .y=0xe6, .sp=0x36, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xe513, .value=0x70}, {.addr=0xe514, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xe495, .a=0xed, .x=0xd1, .y=0xe6, .sp=0x36, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xe513, .value=0x70}, {.addr=0xe514, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xe513, .value=0x70, .type=IO_READ},
        {.addr=0xe514, .value=0x80, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0102) {
    const struct CPU_State initial_cpu = {.pc=0x26d4, .a=0xd2, .x=0x2e, .y=0xb0, .sp=0x9d, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x26d4, .value=0x70}, {.addr=0x26d5, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0x2674, .a=0xd2, .x=0x2e, .y=0xb0, .sp=0x9d, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x26d4, .value=0x70}, {.addr=0x26d5, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0x26d4, .value=0x70, .type=IO_READ},
        {.addr=0x26d5, .value=0x9e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0103) {
    const struct CPU_State initial_cpu = {.pc=0x946a, .a=0x95, .x=0x90, .y=0xd0, .sp=0xf5, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x946a, .value=0x70}, {.addr=0x946b, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0x948a, .a=0x95, .x=0x90, .y=0xd0, .sp=0xf5, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x946a, .value=0x70}, {.addr=0x946b, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0x946a, .value=0x70, .type=IO_READ},
        {.addr=0x946b, .value=0x1e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0104) {
    const struct CPU_State initial_cpu = {.pc=0xe09c, .a=0xfa, .x=0x63, .y=0xdd, .sp=0xd2, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xe09c, .value=0x70}, {.addr=0xe09d, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0xe09e, .a=0xfa, .x=0x63, .y=0xdd, .sp=0xd2, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xe09c, .value=0x70}, {.addr=0xe09d, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0xe09c, .value=0x70, .type=IO_READ},
        {.addr=0xe09d, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0105) {
    const struct CPU_State initial_cpu = {.pc=0xb3c6, .a=0x5d, .x=0x99, .y=0xa8, .sp=0xb7, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xb3c6, .value=0x70}, {.addr=0xb3c7, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0xb3c8, .a=0x5d, .x=0x99, .y=0xa8, .sp=0xb7, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xb3c6, .value=0x70}, {.addr=0xb3c7, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0xb3c6, .value=0x70, .type=IO_READ},
        {.addr=0xb3c7, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0106) {
    const struct CPU_State initial_cpu = {.pc=0xdf1e, .a=0xb6, .x=0x3f, .y=0xc6, .sp=0x87, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xdf1e, .value=0x70}, {.addr=0xdf1f, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0xdf20, .a=0xb6, .x=0x3f, .y=0xc6, .sp=0x87, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xdf1e, .value=0x70}, {.addr=0xdf1f, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0xdf1e, .value=0x70, .type=IO_READ},
        {.addr=0xdf1f, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0107) {
    const struct CPU_State initial_cpu = {.pc=0x922b, .a=0x22, .x=0xea, .y=0x98, .sp=0x64, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x922b, .value=0x70}, {.addr=0x922c, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0x9261, .a=0x22, .x=0xea, .y=0x98, .sp=0x64, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x922b, .value=0x70}, {.addr=0x922c, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0x922b, .value=0x70, .type=IO_READ},
        {.addr=0x922c, .value=0x34, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0108) {
    const struct CPU_State initial_cpu = {.pc=0x20ec, .a=0xee, .x=0x11, .y=0xce, .sp=0x86, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x20ec, .value=0x70}, {.addr=0x20ed, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x20c8, .a=0xee, .x=0x11, .y=0xce, .sp=0x86, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x20ec, .value=0x70}, {.addr=0x20ed, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x20ec, .value=0x70, .type=IO_READ},
        {.addr=0x20ed, .value=0xda, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0109) {
    const struct CPU_State initial_cpu = {.pc=0x0ca1, .a=0x30, .x=0x20, .y=0xc8, .sp=0xbd, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x0ca1, .value=0x70}, {.addr=0x0ca2, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x0c36, .a=0x30, .x=0x20, .y=0xc8, .sp=0xbd, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0ca1, .value=0x70}, {.addr=0x0ca2, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x0ca1, .value=0x70, .type=IO_READ},
        {.addr=0x0ca2, .value=0x93, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_010A) {
    const struct CPU_State initial_cpu = {.pc=0xe782, .a=0x8b, .x=0x73, .y=0xfc, .sp=0x40, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xe782, .value=0x70}, {.addr=0xe783, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0xe784, .a=0x8b, .x=0x73, .y=0xfc, .sp=0x40, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0xe782, .value=0x70}, {.addr=0xe783, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0xe782, .value=0x70, .type=IO_READ},
        {.addr=0xe783, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_010B) {
    const struct CPU_State initial_cpu = {.pc=0x1e27, .a=0x85, .x=0x3b, .y=0xd5, .sp=0x19, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x1e27, .value=0x70}, {.addr=0x1e28, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0x1e8d, .a=0x85, .x=0x3b, .y=0xd5, .sp=0x19, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x1e27, .value=0x70}, {.addr=0x1e28, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0x1e27, .value=0x70, .type=IO_READ},
        {.addr=0x1e28, .value=0x64, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_010C) {
    const struct CPU_State initial_cpu = {.pc=0x6f8d, .a=0x97, .x=0xb3, .y=0xb4, .sp=0xe9, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x6f8d, .value=0x70}, {.addr=0x6f8e, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0x6f2a, .a=0x97, .x=0xb3, .y=0xb4, .sp=0xe9, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x6f8d, .value=0x70}, {.addr=0x6f8e, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0x6f8d, .value=0x70, .type=IO_READ},
        {.addr=0x6f8e, .value=0x9b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_010D) {
    const struct CPU_State initial_cpu = {.pc=0x4c48, .a=0xaf, .x=0x96, .y=0xd9, .sp=0x52, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x4c48, .value=0x70}, {.addr=0x4c49, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0x4bdf, .a=0xaf, .x=0x96, .y=0xd9, .sp=0x52, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x4c48, .value=0x70}, {.addr=0x4c49, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0x4c48, .value=0x70, .type=IO_READ},
        {.addr=0x4c49, .value=0x95, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_010E) {
    const struct CPU_State initial_cpu = {.pc=0x73dc, .a=0x6e, .x=0x62, .y=0x12, .sp=0x48, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x73dc, .value=0x70}, {.addr=0x73dd, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0x7458, .a=0x6e, .x=0x62, .y=0x12, .sp=0x48, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x73dc, .value=0x70}, {.addr=0x73dd, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0x73dc, .value=0x70, .type=IO_READ},
        {.addr=0x73dd, .value=0x7a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_010F) {
    const struct CPU_State initial_cpu = {.pc=0x5bc2, .a=0xc5, .x=0x4e, .y=0xe0, .sp=0x94, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x5bc2, .value=0x70}, {.addr=0x5bc3, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x5c25, .a=0xc5, .x=0x4e, .y=0xe0, .sp=0x94, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x5bc2, .value=0x70}, {.addr=0x5bc3, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x5bc2, .value=0x70, .type=IO_READ},
        {.addr=0x5bc3, .value=0x61, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0110) {
    const struct CPU_State initial_cpu = {.pc=0xfcf2, .a=0x8e, .x=0x3a, .y=0x3e, .sp=0x4f, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xfcf2, .value=0x70}, {.addr=0xfcf3, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0xfd0d, .a=0x8e, .x=0x3a, .y=0x3e, .sp=0x4f, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0xfcf2, .value=0x70}, {.addr=0xfcf3, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0xfcf2, .value=0x70, .type=IO_READ},
        {.addr=0xfcf3, .value=0x19, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0111) {
    const struct CPU_State initial_cpu = {.pc=0xfdbf, .a=0x51, .x=0xd7, .y=0x5b, .sp=0xd1, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xfdbf, .value=0x70}, {.addr=0xfdc0, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0xfe30, .a=0x51, .x=0xd7, .y=0x5b, .sp=0xd1, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0xfdbf, .value=0x70}, {.addr=0xfdc0, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0xfdbf, .value=0x70, .type=IO_READ},
        {.addr=0xfdc0, .value=0x6f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0112) {
    const struct CPU_State initial_cpu = {.pc=0xd8a4, .a=0xdf, .x=0x0e, .y=0x05, .sp=0x01, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xd8a4, .value=0x70}, {.addr=0xd8a5, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xd8ec, .a=0xdf, .x=0x0e, .y=0x05, .sp=0x01, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0xd8a4, .value=0x70}, {.addr=0xd8a5, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xd8a4, .value=0x70, .type=IO_READ},
        {.addr=0xd8a5, .value=0x46, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0113) {
    const struct CPU_State initial_cpu = {.pc=0x2110, .a=0x0a, .x=0x67, .y=0x07, .sp=0xd1, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x2110, .value=0x70}, {.addr=0x2111, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x2112, .a=0x0a, .x=0x67, .y=0x07, .sp=0xd1, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x2110, .value=0x70}, {.addr=0x2111, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x2110, .value=0x70, .type=IO_READ},
        {.addr=0x2111, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0114) {
    const struct CPU_State initial_cpu = {.pc=0x92b8, .a=0x17, .x=0xf8, .y=0x9d, .sp=0xa5, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x92b8, .value=0x70}, {.addr=0x92b9, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x92ba, .a=0x17, .x=0xf8, .y=0x9d, .sp=0xa5, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x92b8, .value=0x70}, {.addr=0x92b9, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x92b8, .value=0x70, .type=IO_READ},
        {.addr=0x92b9, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0115) {
    const struct CPU_State initial_cpu = {.pc=0x1cdc, .a=0x33, .x=0x59, .y=0x9c, .sp=0x4c, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x1cdc, .value=0x70}, {.addr=0x1cdd, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x1cde, .a=0x33, .x=0x59, .y=0x9c, .sp=0x4c, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x1cdc, .value=0x70}, {.addr=0x1cdd, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x1cdc, .value=0x70, .type=IO_READ},
        {.addr=0x1cdd, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0116) {
    const struct CPU_State initial_cpu = {.pc=0x912e, .a=0xb2, .x=0x6b, .y=0x93, .sp=0x03, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x912e, .value=0x70}, {.addr=0x912f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x914d, .a=0xb2, .x=0x6b, .y=0x93, .sp=0x03, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x912e, .value=0x70}, {.addr=0x912f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x912e, .value=0x70, .type=IO_READ},
        {.addr=0x912f, .value=0x1d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0117) {
    const struct CPU_State initial_cpu = {.pc=0x600c, .a=0xdf, .x=0xaa, .y=0xb9, .sp=0x4e, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x600c, .value=0x70}, {.addr=0x600d, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x5fb5, .a=0xdf, .x=0xaa, .y=0xb9, .sp=0x4e, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x600c, .value=0x70}, {.addr=0x600d, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x600c, .value=0x70, .type=IO_READ},
        {.addr=0x600d, .value=0xa7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0118) {
    const struct CPU_State initial_cpu = {.pc=0x961c, .a=0xe0, .x=0x85, .y=0xde, .sp=0xd5, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x961c, .value=0x70}, {.addr=0x961d, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0x961e, .a=0xe0, .x=0x85, .y=0xde, .sp=0xd5, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x961c, .value=0x70}, {.addr=0x961d, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0x961c, .value=0x70, .type=IO_READ},
        {.addr=0x961d, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0119) {
    const struct CPU_State initial_cpu = {.pc=0xf52d, .a=0xb2, .x=0x17, .y=0x1c, .sp=0xd5, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xf52d, .value=0x70}, {.addr=0xf52e, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0xf52f, .a=0xb2, .x=0x17, .y=0x1c, .sp=0xd5, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xf52d, .value=0x70}, {.addr=0xf52e, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0xf52d, .value=0x70, .type=IO_READ},
        {.addr=0xf52e, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_011A) {
    const struct CPU_State initial_cpu = {.pc=0x0170, .a=0xea, .x=0x01, .y=0x98, .sp=0x72, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x0170, .value=0x70}, {.addr=0x0171, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x0140, .a=0xea, .x=0x01, .y=0x98, .sp=0x72, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x0170, .value=0x70}, {.addr=0x0171, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x0170, .value=0x70, .type=IO_READ},
        {.addr=0x0171, .value=0xce, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_011B) {
    const struct CPU_State initial_cpu = {.pc=0x3bf4, .a=0xdb, .x=0xe0, .y=0xa5, .sp=0x81, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x3bf4, .value=0x70}, {.addr=0x3bf5, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0x3bf6, .a=0xdb, .x=0xe0, .y=0xa5, .sp=0x81, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x3bf4, .value=0x70}, {.addr=0x3bf5, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0x3bf4, .value=0x70, .type=IO_READ},
        {.addr=0x3bf5, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_011C) {
    const struct CPU_State initial_cpu = {.pc=0x17c0, .a=0x91, .x=0x99, .y=0xbc, .sp=0xe5, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x17c0, .value=0x70}, {.addr=0x17c1, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0x17c2, .a=0x91, .x=0x99, .y=0xbc, .sp=0xe5, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x17c0, .value=0x70}, {.addr=0x17c1, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0x17c0, .value=0x70, .type=IO_READ},
        {.addr=0x17c1, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_011D) {
    const struct CPU_State initial_cpu = {.pc=0x07d2, .a=0x47, .x=0x81, .y=0x56, .sp=0x11, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x07d2, .value=0x70}, {.addr=0x07d3, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x07d4, .a=0x47, .x=0x81, .y=0x56, .sp=0x11, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x07d2, .value=0x70}, {.addr=0x07d3, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x07d2, .value=0x70, .type=IO_READ},
        {.addr=0x07d3, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_011E) {
    const struct CPU_State initial_cpu = {.pc=0x9878, .a=0xd3, .x=0xeb, .y=0x80, .sp=0x54, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x9878, .value=0x70}, {.addr=0x9879, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x987a, .a=0xd3, .x=0xeb, .y=0x80, .sp=0x54, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x9878, .value=0x70}, {.addr=0x9879, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x9878, .value=0x70, .type=IO_READ},
        {.addr=0x9879, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_011F) {
    const struct CPU_State initial_cpu = {.pc=0x7c4f, .a=0x9b, .x=0x2d, .y=0xf7, .sp=0x23, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x7c4f, .value=0x70}, {.addr=0x7c50, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0x7c4c, .a=0x9b, .x=0x2d, .y=0xf7, .sp=0x23, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x7c4f, .value=0x70}, {.addr=0x7c50, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0x7c4f, .value=0x70, .type=IO_READ},
        {.addr=0x7c50, .value=0xfb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0120) {
    const struct CPU_State initial_cpu = {.pc=0xd6d3, .a=0xc9, .x=0xcc, .y=0x2b, .sp=0x27, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xd6d3, .value=0x70}, {.addr=0xd6d4, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0xd72e, .a=0xc9, .x=0xcc, .y=0x2b, .sp=0x27, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xd6d3, .value=0x70}, {.addr=0xd6d4, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0xd6d3, .value=0x70, .type=IO_READ},
        {.addr=0xd6d4, .value=0x59, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0121) {
    const struct CPU_State initial_cpu = {.pc=0x0582, .a=0x58, .x=0x63, .y=0xd0, .sp=0xd8, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x0582, .value=0x70}, {.addr=0x0583, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x0584, .a=0x58, .x=0x63, .y=0xd0, .sp=0xd8, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0582, .value=0x70}, {.addr=0x0583, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x0582, .value=0x70, .type=IO_READ},
        {.addr=0x0583, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0122) {
    const struct CPU_State initial_cpu = {.pc=0x43a1, .a=0x7b, .x=0xb0, .y=0x13, .sp=0x83, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x43a1, .value=0x70}, {.addr=0x43a2, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0x4330, .a=0x7b, .x=0xb0, .y=0x13, .sp=0x83, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x43a1, .value=0x70}, {.addr=0x43a2, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0x43a1, .value=0x70, .type=IO_READ},
        {.addr=0x43a2, .value=0x8d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0123) {
    const struct CPU_State initial_cpu = {.pc=0x43ae, .a=0x80, .x=0x14, .y=0x3a, .sp=0x6a, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x43ae, .value=0x70}, {.addr=0x43af, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0x4334, .a=0x80, .x=0x14, .y=0x3a, .sp=0x6a, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x43ae, .value=0x70}, {.addr=0x43af, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0x43ae, .value=0x70, .type=IO_READ},
        {.addr=0x43af, .value=0x84, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0124) {
    const struct CPU_State initial_cpu = {.pc=0x9e97, .a=0xab, .x=0x4f, .y=0xc2, .sp=0x48, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x9e97, .value=0x70}, {.addr=0x9e98, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0x9e99, .a=0xab, .x=0x4f, .y=0xc2, .sp=0x48, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x9e97, .value=0x70}, {.addr=0x9e98, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0x9e97, .value=0x70, .type=IO_READ},
        {.addr=0x9e98, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0125) {
    const struct CPU_State initial_cpu = {.pc=0xaab8, .a=0xa9, .x=0x65, .y=0x10, .sp=0x6c, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xaab8, .value=0x70}, {.addr=0xaab9, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0xaab1, .a=0xa9, .x=0x65, .y=0x10, .sp=0x6c, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0xaab8, .value=0x70}, {.addr=0xaab9, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0xaab8, .value=0x70, .type=IO_READ},
        {.addr=0xaab9, .value=0xf7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0126) {
    const struct CPU_State initial_cpu = {.pc=0x0d46, .a=0xb8, .x=0xbc, .y=0x55, .sp=0x0e, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x0d46, .value=0x70}, {.addr=0x0d47, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x0d48, .a=0xb8, .x=0xbc, .y=0x55, .sp=0x0e, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0d46, .value=0x70}, {.addr=0x0d47, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x0d46, .value=0x70, .type=IO_READ},
        {.addr=0x0d47, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0127) {
    const struct CPU_State initial_cpu = {.pc=0x4326, .a=0x17, .x=0xbc, .y=0x0c, .sp=0xa5, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x4326, .value=0x70}, {.addr=0x4327, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x4328, .a=0x17, .x=0xbc, .y=0x0c, .sp=0xa5, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x4326, .value=0x70}, {.addr=0x4327, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x4326, .value=0x70, .type=IO_READ},
        {.addr=0x4327, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0128) {
    const struct CPU_State initial_cpu = {.pc=0xfd55, .a=0x8f, .x=0x9e, .y=0x58, .sp=0x53, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xfd55, .value=0x70}, {.addr=0xfd56, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0xfd57, .a=0x8f, .x=0x9e, .y=0x58, .sp=0x53, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xfd55, .value=0x70}, {.addr=0xfd56, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0xfd55, .value=0x70, .type=IO_READ},
        {.addr=0xfd56, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0129) {
    const struct CPU_State initial_cpu = {.pc=0x969d, .a=0x92, .x=0xee, .y=0x23, .sp=0x8b, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x969d, .value=0x70}, {.addr=0x969e, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x969f, .a=0x92, .x=0xee, .y=0x23, .sp=0x8b, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x969d, .value=0x70}, {.addr=0x969e, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x969d, .value=0x70, .type=IO_READ},
        {.addr=0x969e, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_012A) {
    const struct CPU_State initial_cpu = {.pc=0x55a6, .a=0x6f, .x=0xd1, .y=0xad, .sp=0x31, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x55a6, .value=0x70}, {.addr=0x55a7, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x55d8, .a=0x6f, .x=0xd1, .y=0xad, .sp=0x31, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x55a6, .value=0x70}, {.addr=0x55a7, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x55a6, .value=0x70, .type=IO_READ},
        {.addr=0x55a7, .value=0x30, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_012B) {
    const struct CPU_State initial_cpu = {.pc=0x0afa, .a=0x2c, .x=0x0b, .y=0x1d, .sp=0x1f, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x0afa, .value=0x70}, {.addr=0x0afb, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0x0afc, .a=0x2c, .x=0x0b, .y=0x1d, .sp=0x1f, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x0afa, .value=0x70}, {.addr=0x0afb, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0x0afa, .value=0x70, .type=IO_READ},
        {.addr=0x0afb, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_012C) {
    const struct CPU_State initial_cpu = {.pc=0xfd1d, .a=0x1b, .x=0x28, .y=0x12, .sp=0xca, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xfd1d, .value=0x70}, {.addr=0xfd1e, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0xfd10, .a=0x1b, .x=0x28, .y=0x12, .sp=0xca, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xfd1d, .value=0x70}, {.addr=0xfd1e, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0xfd1d, .value=0x70, .type=IO_READ},
        {.addr=0xfd1e, .value=0xf1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_012D) {
    const struct CPU_State initial_cpu = {.pc=0xa034, .a=0x23, .x=0x85, .y=0xcb, .sp=0x54, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xa034, .value=0x70}, {.addr=0xa035, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0xa036, .a=0x23, .x=0x85, .y=0xcb, .sp=0x54, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xa034, .value=0x70}, {.addr=0xa035, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0xa034, .value=0x70, .type=IO_READ},
        {.addr=0xa035, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_012E) {
    const struct CPU_State initial_cpu = {.pc=0xc9cd, .a=0xe5, .x=0xb2, .y=0xd2, .sp=0x9f, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xc9cd, .value=0x70}, {.addr=0xc9ce, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0xca0d, .a=0xe5, .x=0xb2, .y=0xd2, .sp=0x9f, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0xc9cd, .value=0x70}, {.addr=0xc9ce, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0xc9cd, .value=0x70, .type=IO_READ},
        {.addr=0xc9ce, .value=0x3e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_012F) {
    const struct CPU_State initial_cpu = {.pc=0x7e69, .a=0x4e, .x=0x54, .y=0xe6, .sp=0xf6, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x7e69, .value=0x70}, {.addr=0x7e6a, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0x7edd, .a=0x4e, .x=0x54, .y=0xe6, .sp=0xf6, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x7e69, .value=0x70}, {.addr=0x7e6a, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0x7e69, .value=0x70, .type=IO_READ},
        {.addr=0x7e6a, .value=0x72, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0130) {
    const struct CPU_State initial_cpu = {.pc=0x2733, .a=0x02, .x=0x24, .y=0xbb, .sp=0x46, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x2733, .value=0x70}, {.addr=0x2734, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x2735, .a=0x02, .x=0x24, .y=0xbb, .sp=0x46, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x2733, .value=0x70}, {.addr=0x2734, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x2733, .value=0x70, .type=IO_READ},
        {.addr=0x2734, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0131) {
    const struct CPU_State initial_cpu = {.pc=0xd0eb, .a=0xdd, .x=0x06, .y=0x1d, .sp=0x46, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xd0eb, .value=0x70}, {.addr=0xd0ec, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0xd0ed, .a=0xdd, .x=0x06, .y=0x1d, .sp=0x46, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xd0eb, .value=0x70}, {.addr=0xd0ec, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0xd0eb, .value=0x70, .type=IO_READ},
        {.addr=0xd0ec, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0132) {
    const struct CPU_State initial_cpu = {.pc=0x47a7, .a=0xf2, .x=0xc2, .y=0xad, .sp=0x25, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x47a7, .value=0x70}, {.addr=0x47a8, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0x4760, .a=0xf2, .x=0xc2, .y=0xad, .sp=0x25, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x47a7, .value=0x70}, {.addr=0x47a8, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0x47a7, .value=0x70, .type=IO_READ},
        {.addr=0x47a8, .value=0xb7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0133) {
    const struct CPU_State initial_cpu = {.pc=0xa0a3, .a=0xdf, .x=0xdd, .y=0xd5, .sp=0x0d, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xa0a3, .value=0x70}, {.addr=0xa0a4, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0xa106, .a=0xdf, .x=0xdd, .y=0xd5, .sp=0x0d, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xa0a3, .value=0x70}, {.addr=0xa0a4, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0xa0a3, .value=0x70, .type=IO_READ},
        {.addr=0xa0a4, .value=0x61, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0134) {
    const struct CPU_State initial_cpu = {.pc=0x30c6, .a=0x2a, .x=0x56, .y=0xf0, .sp=0xfa, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x30c6, .value=0x70}, {.addr=0x30c7, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0x30e7, .a=0x2a, .x=0x56, .y=0xf0, .sp=0xfa, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x30c6, .value=0x70}, {.addr=0x30c7, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0x30c6, .value=0x70, .type=IO_READ},
        {.addr=0x30c7, .value=0x1f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0135) {
    const struct CPU_State initial_cpu = {.pc=0xee7e, .a=0x92, .x=0x76, .y=0xf0, .sp=0xa6, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xee7e, .value=0x70}, {.addr=0xee7f, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0xee80, .a=0x92, .x=0x76, .y=0xf0, .sp=0xa6, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0xee7e, .value=0x70}, {.addr=0xee7f, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0xee7e, .value=0x70, .type=IO_READ},
        {.addr=0xee7f, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0136) {
    const struct CPU_State initial_cpu = {.pc=0xdf26, .a=0x18, .x=0xb3, .y=0xb3, .sp=0x5f, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xdf26, .value=0x70}, {.addr=0xdf27, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0xdf21, .a=0x18, .x=0xb3, .y=0xb3, .sp=0x5f, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xdf26, .value=0x70}, {.addr=0xdf27, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0xdf26, .value=0x70, .type=IO_READ},
        {.addr=0xdf27, .value=0xf9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0137) {
    const struct CPU_State initial_cpu = {.pc=0x1367, .a=0xa7, .x=0x67, .y=0x7c, .sp=0xa0, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x1367, .value=0x70}, {.addr=0x1368, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1369, .a=0xa7, .x=0x67, .y=0x7c, .sp=0xa0, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x1367, .value=0x70}, {.addr=0x1368, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1367, .value=0x70, .type=IO_READ},
        {.addr=0x1368, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0138) {
    const struct CPU_State initial_cpu = {.pc=0x1313, .a=0xd9, .x=0xe8, .y=0x49, .sp=0x10, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x1313, .value=0x70}, {.addr=0x1314, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x12c9, .a=0xd9, .x=0xe8, .y=0x49, .sp=0x10, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x1313, .value=0x70}, {.addr=0x1314, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x1313, .value=0x70, .type=IO_READ},
        {.addr=0x1314, .value=0xb4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0139) {
    const struct CPU_State initial_cpu = {.pc=0x0922, .a=0xb1, .x=0x04, .y=0x9e, .sp=0x8c, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x0922, .value=0x70}, {.addr=0x0923, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x0924, .a=0xb1, .x=0x04, .y=0x9e, .sp=0x8c, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x0922, .value=0x70}, {.addr=0x0923, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x0922, .value=0x70, .type=IO_READ},
        {.addr=0x0923, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_013A) {
    const struct CPU_State initial_cpu = {.pc=0xca29, .a=0x1b, .x=0x4b, .y=0x14, .sp=0xe9, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xca29, .value=0x70}, {.addr=0xca2a, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0xca2b, .a=0x1b, .x=0x4b, .y=0x14, .sp=0xe9, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0xca29, .value=0x70}, {.addr=0xca2a, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0xca29, .value=0x70, .type=IO_READ},
        {.addr=0xca2a, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_013B) {
    const struct CPU_State initial_cpu = {.pc=0x0c37, .a=0x8d, .x=0xd6, .y=0x56, .sp=0x36, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x0c37, .value=0x70}, {.addr=0x0c38, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0x0c8f, .a=0x8d, .x=0xd6, .y=0x56, .sp=0x36, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x0c37, .value=0x70}, {.addr=0x0c38, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0x0c37, .value=0x70, .type=IO_READ},
        {.addr=0x0c38, .value=0x56, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_013C) {
    const struct CPU_State initial_cpu = {.pc=0x4deb, .a=0xb5, .x=0xde, .y=0x47, .sp=0x98, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x4deb, .value=0x70}, {.addr=0x4dec, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x4ded, .a=0xb5, .x=0xde, .y=0x47, .sp=0x98, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x4deb, .value=0x70}, {.addr=0x4dec, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x4deb, .value=0x70, .type=IO_READ},
        {.addr=0x4dec, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_013D) {
    const struct CPU_State initial_cpu = {.pc=0x7930, .a=0x8a, .x=0xf2, .y=0x9e, .sp=0x0f, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x7930, .value=0x70}, {.addr=0x7931, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x7932, .a=0x8a, .x=0xf2, .y=0x9e, .sp=0x0f, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x7930, .value=0x70}, {.addr=0x7931, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x7930, .value=0x70, .type=IO_READ},
        {.addr=0x7931, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_013E) {
    const struct CPU_State initial_cpu = {.pc=0x147e, .a=0xe7, .x=0x7c, .y=0x34, .sp=0xf2, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x147e, .value=0x70}, {.addr=0x147f, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x1480, .a=0xe7, .x=0x7c, .y=0x34, .sp=0xf2, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x147e, .value=0x70}, {.addr=0x147f, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x147e, .value=0x70, .type=IO_READ},
        {.addr=0x147f, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_013F) {
    const struct CPU_State initial_cpu = {.pc=0x5002, .a=0x9d, .x=0x16, .y=0xbd, .sp=0xbe, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x5002, .value=0x70}, {.addr=0x5003, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0x5004, .a=0x9d, .x=0x16, .y=0xbd, .sp=0xbe, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x5002, .value=0x70}, {.addr=0x5003, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0x5002, .value=0x70, .type=IO_READ},
        {.addr=0x5003, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0140) {
    const struct CPU_State initial_cpu = {.pc=0xae92, .a=0x80, .x=0x1c, .y=0xba, .sp=0xf3, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xae92, .value=0x70}, {.addr=0xae93, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0xae94, .a=0x80, .x=0x1c, .y=0xba, .sp=0xf3, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0xae92, .value=0x70}, {.addr=0xae93, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0xae92, .value=0x70, .type=IO_READ},
        {.addr=0xae93, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0141) {
    const struct CPU_State initial_cpu = {.pc=0xb151, .a=0x41, .x=0x72, .y=0xc1, .sp=0x00, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xb151, .value=0x70}, {.addr=0xb152, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0xb153, .a=0x41, .x=0x72, .y=0xc1, .sp=0x00, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0xb151, .value=0x70}, {.addr=0xb152, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0xb151, .value=0x70, .type=IO_READ},
        {.addr=0xb152, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0142) {
    const struct CPU_State initial_cpu = {.pc=0xbb44, .a=0x66, .x=0xea, .y=0x90, .sp=0x61, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xbb44, .value=0x70}, {.addr=0xbb45, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0xbad3, .a=0x66, .x=0xea, .y=0x90, .sp=0x61, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xbb44, .value=0x70}, {.addr=0xbb45, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0xbb44, .value=0x70, .type=IO_READ},
        {.addr=0xbb45, .value=0x8d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0143) {
    const struct CPU_State initial_cpu = {.pc=0xd66c, .a=0x10, .x=0xd6, .y=0xd1, .sp=0xf2, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xd66c, .value=0x70}, {.addr=0xd66d, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0xd6e2, .a=0x10, .x=0xd6, .y=0xd1, .sp=0xf2, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0xd66c, .value=0x70}, {.addr=0xd66d, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0xd66c, .value=0x70, .type=IO_READ},
        {.addr=0xd66d, .value=0x74, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0144) {
    const struct CPU_State initial_cpu = {.pc=0xd986, .a=0x9a, .x=0xa3, .y=0x8d, .sp=0xdc, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xd986, .value=0x70}, {.addr=0xd987, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0xd939, .a=0x9a, .x=0xa3, .y=0x8d, .sp=0xdc, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xd986, .value=0x70}, {.addr=0xd987, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0xd986, .value=0x70, .type=IO_READ},
        {.addr=0xd987, .value=0xb1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0145) {
    const struct CPU_State initial_cpu = {.pc=0x769d, .a=0x83, .x=0x64, .y=0x26, .sp=0x09, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x769d, .value=0x70}, {.addr=0x769e, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x769f, .a=0x83, .x=0x64, .y=0x26, .sp=0x09, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x769d, .value=0x70}, {.addr=0x769e, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x769d, .value=0x70, .type=IO_READ},
        {.addr=0x769e, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0146) {
    const struct CPU_State initial_cpu = {.pc=0xae21, .a=0xd1, .x=0x68, .y=0xeb, .sp=0x14, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xae21, .value=0x70}, {.addr=0xae22, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0xadc6, .a=0xd1, .x=0x68, .y=0xeb, .sp=0x14, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xae21, .value=0x70}, {.addr=0xae22, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0xae21, .value=0x70, .type=IO_READ},
        {.addr=0xae22, .value=0xa3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0147) {
    const struct CPU_State initial_cpu = {.pc=0x3a8e, .a=0x91, .x=0xd7, .y=0x86, .sp=0x80, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x3a8e, .value=0x70}, {.addr=0x3a8f, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0x3a42, .a=0x91, .x=0xd7, .y=0x86, .sp=0x80, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x3a8e, .value=0x70}, {.addr=0x3a8f, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0x3a8e, .value=0x70, .type=IO_READ},
        {.addr=0x3a8f, .value=0xb2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0148) {
    const struct CPU_State initial_cpu = {.pc=0x5c61, .a=0x5d, .x=0x94, .y=0xcf, .sp=0x4b, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x5c61, .value=0x70}, {.addr=0x5c62, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0x5c63, .a=0x5d, .x=0x94, .y=0xcf, .sp=0x4b, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x5c61, .value=0x70}, {.addr=0x5c62, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0x5c61, .value=0x70, .type=IO_READ},
        {.addr=0x5c62, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0149) {
    const struct CPU_State initial_cpu = {.pc=0x8787, .a=0x27, .x=0x16, .y=0x16, .sp=0xf8, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x8787, .value=0x70}, {.addr=0x8788, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0x8789, .a=0x27, .x=0x16, .y=0x16, .sp=0xf8, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x8787, .value=0x70}, {.addr=0x8788, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0x8787, .value=0x70, .type=IO_READ},
        {.addr=0x8788, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_014A) {
    const struct CPU_State initial_cpu = {.pc=0x883d, .a=0xe6, .x=0x20, .y=0xc8, .sp=0x30, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x883d, .value=0x70}, {.addr=0x883e, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0x883f, .a=0xe6, .x=0x20, .y=0xc8, .sp=0x30, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x883d, .value=0x70}, {.addr=0x883e, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0x883d, .value=0x70, .type=IO_READ},
        {.addr=0x883e, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_014B) {
    const struct CPU_State initial_cpu = {.pc=0x138e, .a=0x9c, .x=0x3b, .y=0x6a, .sp=0x7f, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x138e, .value=0x70}, {.addr=0x138f, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x13e8, .a=0x9c, .x=0x3b, .y=0x6a, .sp=0x7f, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x138e, .value=0x70}, {.addr=0x138f, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x138e, .value=0x70, .type=IO_READ},
        {.addr=0x138f, .value=0x58, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_014C) {
    const struct CPU_State initial_cpu = {.pc=0xd268, .a=0xd8, .x=0xf2, .y=0xce, .sp=0x5f, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xd268, .value=0x70}, {.addr=0xd269, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0xd1ec, .a=0xd8, .x=0xf2, .y=0xce, .sp=0x5f, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xd268, .value=0x70}, {.addr=0xd269, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0xd268, .value=0x70, .type=IO_READ},
        {.addr=0xd269, .value=0x82, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_014D) {
    const struct CPU_State initial_cpu = {.pc=0x9730, .a=0x61, .x=0x98, .y=0x7c, .sp=0xdd, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x9730, .value=0x70}, {.addr=0x9731, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x979d, .a=0x61, .x=0x98, .y=0x7c, .sp=0xdd, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x9730, .value=0x70}, {.addr=0x9731, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x9730, .value=0x70, .type=IO_READ},
        {.addr=0x9731, .value=0x6b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_014E) {
    const struct CPU_State initial_cpu = {.pc=0xb195, .a=0x00, .x=0x0d, .y=0x31, .sp=0xcf, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xb195, .value=0x70}, {.addr=0xb196, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0xb147, .a=0x00, .x=0x0d, .y=0x31, .sp=0xcf, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0xb195, .value=0x70}, {.addr=0xb196, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0xb195, .value=0x70, .type=IO_READ},
        {.addr=0xb196, .value=0xb0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_014F) {
    const struct CPU_State initial_cpu = {.pc=0x4d1f, .a=0x5f, .x=0x4a, .y=0xf3, .sp=0x4a, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x4d1f, .value=0x70}, {.addr=0x4d20, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0x4cda, .a=0x5f, .x=0x4a, .y=0xf3, .sp=0x4a, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x4d1f, .value=0x70}, {.addr=0x4d20, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0x4d1f, .value=0x70, .type=IO_READ},
        {.addr=0x4d20, .value=0xb9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0150) {
    const struct CPU_State initial_cpu = {.pc=0xe28e, .a=0x0f, .x=0x45, .y=0x36, .sp=0x52, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xe28e, .value=0x70}, {.addr=0xe28f, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0xe290, .a=0x0f, .x=0x45, .y=0x36, .sp=0x52, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0xe28e, .value=0x70}, {.addr=0xe28f, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0xe28e, .value=0x70, .type=IO_READ},
        {.addr=0xe28f, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0151) {
    const struct CPU_State initial_cpu = {.pc=0x940f, .a=0x6f, .x=0x0c, .y=0x29, .sp=0x5c, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x940f, .value=0x70}, {.addr=0x9410, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x9397, .a=0x6f, .x=0x0c, .y=0x29, .sp=0x5c, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x940f, .value=0x70}, {.addr=0x9410, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x940f, .value=0x70, .type=IO_READ},
        {.addr=0x9410, .value=0x86, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0152) {
    const struct CPU_State initial_cpu = {.pc=0x0807, .a=0x11, .x=0xa1, .y=0x51, .sp=0x41, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x0807, .value=0x70}, {.addr=0x0808, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x0809, .a=0x11, .x=0xa1, .y=0x51, .sp=0x41, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x0807, .value=0x70}, {.addr=0x0808, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x0807, .value=0x70, .type=IO_READ},
        {.addr=0x0808, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0153) {
    const struct CPU_State initial_cpu = {.pc=0x3cee, .a=0x5b, .x=0x8c, .y=0x75, .sp=0x1b, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x3cee, .value=0x70}, {.addr=0x3cef, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0x3cb4, .a=0x5b, .x=0x8c, .y=0x75, .sp=0x1b, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x3cee, .value=0x70}, {.addr=0x3cef, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0x3cee, .value=0x70, .type=IO_READ},
        {.addr=0x3cef, .value=0xc4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0154) {
    const struct CPU_State initial_cpu = {.pc=0x6c11, .a=0x90, .x=0x2e, .y=0x9f, .sp=0xd8, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x6c11, .value=0x70}, {.addr=0x6c12, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0x6c82, .a=0x90, .x=0x2e, .y=0x9f, .sp=0xd8, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x6c11, .value=0x70}, {.addr=0x6c12, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0x6c11, .value=0x70, .type=IO_READ},
        {.addr=0x6c12, .value=0x6f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0155) {
    const struct CPU_State initial_cpu = {.pc=0xd304, .a=0x95, .x=0xa1, .y=0x7b, .sp=0x9b, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xd304, .value=0x70}, {.addr=0xd305, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0xd28f, .a=0x95, .x=0xa1, .y=0x7b, .sp=0x9b, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0xd304, .value=0x70}, {.addr=0xd305, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0xd304, .value=0x70, .type=IO_READ},
        {.addr=0xd305, .value=0x89, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0156) {
    const struct CPU_State initial_cpu = {.pc=0xf8c1, .a=0x98, .x=0x52, .y=0xd7, .sp=0x34, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xf8c1, .value=0x70}, {.addr=0xf8c2, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0xf8c3, .a=0x98, .x=0x52, .y=0xd7, .sp=0x34, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xf8c1, .value=0x70}, {.addr=0xf8c2, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0xf8c1, .value=0x70, .type=IO_READ},
        {.addr=0xf8c2, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0157) {
    const struct CPU_State initial_cpu = {.pc=0xd7c3, .a=0x10, .x=0x38, .y=0x27, .sp=0x17, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xd7c3, .value=0x70}, {.addr=0xd7c4, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0xd7c5, .a=0x10, .x=0x38, .y=0x27, .sp=0x17, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0xd7c3, .value=0x70}, {.addr=0xd7c4, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0xd7c3, .value=0x70, .type=IO_READ},
        {.addr=0xd7c4, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0158) {
    const struct CPU_State initial_cpu = {.pc=0xdc2a, .a=0xb9, .x=0xd3, .y=0x3f, .sp=0x83, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xdc2a, .value=0x70}, {.addr=0xdc2b, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0xdbf4, .a=0xb9, .x=0xd3, .y=0x3f, .sp=0x83, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0xdc2a, .value=0x70}, {.addr=0xdc2b, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0xdc2a, .value=0x70, .type=IO_READ},
        {.addr=0xdc2b, .value=0xc8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0159) {
    const struct CPU_State initial_cpu = {.pc=0xc45d, .a=0x7d, .x=0xb7, .y=0x0d, .sp=0x3f, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xc45d, .value=0x70}, {.addr=0xc45e, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0xc401, .a=0x7d, .x=0xb7, .y=0x0d, .sp=0x3f, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0xc45d, .value=0x70}, {.addr=0xc45e, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0xc45d, .value=0x70, .type=IO_READ},
        {.addr=0xc45e, .value=0xa2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_015A) {
    const struct CPU_State initial_cpu = {.pc=0x909b, .a=0x6d, .x=0x06, .y=0xe4, .sp=0x8b, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x909b, .value=0x70}, {.addr=0x909c, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x90e0, .a=0x6d, .x=0x06, .y=0xe4, .sp=0x8b, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x909b, .value=0x70}, {.addr=0x909c, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x909b, .value=0x70, .type=IO_READ},
        {.addr=0x909c, .value=0x43, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_015B) {
    const struct CPU_State initial_cpu = {.pc=0x560a, .a=0x6f, .x=0xf5, .y=0x17, .sp=0xe0, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x560a, .value=0x70}, {.addr=0x560b, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0x55c1, .a=0x6f, .x=0xf5, .y=0x17, .sp=0xe0, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x560a, .value=0x70}, {.addr=0x560b, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0x560a, .value=0x70, .type=IO_READ},
        {.addr=0x560b, .value=0xb5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_015C) {
    const struct CPU_State initial_cpu = {.pc=0xd8e2, .a=0xec, .x=0x8b, .y=0xe2, .sp=0xf0, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xd8e2, .value=0x70}, {.addr=0xd8e3, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0xd8e4, .a=0xec, .x=0x8b, .y=0xe2, .sp=0xf0, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0xd8e2, .value=0x70}, {.addr=0xd8e3, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0xd8e2, .value=0x70, .type=IO_READ},
        {.addr=0xd8e3, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_015D) {
    const struct CPU_State initial_cpu = {.pc=0xe223, .a=0x1f, .x=0x75, .y=0x26, .sp=0x79, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xe223, .value=0x70}, {.addr=0xe224, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0xe243, .a=0x1f, .x=0x75, .y=0x26, .sp=0x79, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xe223, .value=0x70}, {.addr=0xe224, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0xe223, .value=0x70, .type=IO_READ},
        {.addr=0xe224, .value=0x1e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_015E) {
    const struct CPU_State initial_cpu = {.pc=0xf518, .a=0x2e, .x=0x6e, .y=0x20, .sp=0x32, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xf518, .value=0x70}, {.addr=0xf519, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0xf51a, .a=0x2e, .x=0x6e, .y=0x20, .sp=0x32, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0xf518, .value=0x70}, {.addr=0xf519, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0xf518, .value=0x70, .type=IO_READ},
        {.addr=0xf519, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_015F) {
    const struct CPU_State initial_cpu = {.pc=0xaf80, .a=0xa0, .x=0xbf, .y=0xea, .sp=0x5a, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xaf80, .value=0x70}, {.addr=0xaf81, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0xaf7a, .a=0xa0, .x=0xbf, .y=0xea, .sp=0x5a, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0xaf80, .value=0x70}, {.addr=0xaf81, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0xaf80, .value=0x70, .type=IO_READ},
        {.addr=0xaf81, .value=0xf8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0160) {
    const struct CPU_State initial_cpu = {.pc=0x49ab, .a=0x7c, .x=0x87, .y=0xa2, .sp=0xf2, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x49ab, .value=0x70}, {.addr=0x49ac, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x49ad, .a=0x7c, .x=0x87, .y=0xa2, .sp=0xf2, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x49ab, .value=0x70}, {.addr=0x49ac, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x49ab, .value=0x70, .type=IO_READ},
        {.addr=0x49ac, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0161) {
    const struct CPU_State initial_cpu = {.pc=0xe2bb, .a=0xff, .x=0x8b, .y=0xcc, .sp=0x79, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xe2bb, .value=0x70}, {.addr=0xe2bc, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0xe29f, .a=0xff, .x=0x8b, .y=0xcc, .sp=0x79, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0xe2bb, .value=0x70}, {.addr=0xe2bc, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0xe2bb, .value=0x70, .type=IO_READ},
        {.addr=0xe2bc, .value=0xe2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0162) {
    const struct CPU_State initial_cpu = {.pc=0x5051, .a=0xfb, .x=0x11, .y=0xe5, .sp=0x43, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x5051, .value=0x70}, {.addr=0x5052, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0x5053, .a=0xfb, .x=0x11, .y=0xe5, .sp=0x43, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x5051, .value=0x70}, {.addr=0x5052, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0x5051, .value=0x70, .type=IO_READ},
        {.addr=0x5052, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0163) {
    const struct CPU_State initial_cpu = {.pc=0x5648, .a=0x8a, .x=0xa7, .y=0x20, .sp=0x21, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x5648, .value=0x70}, {.addr=0x5649, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0x564a, .a=0x8a, .x=0xa7, .y=0x20, .sp=0x21, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x5648, .value=0x70}, {.addr=0x5649, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0x5648, .value=0x70, .type=IO_READ},
        {.addr=0x5649, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0164) {
    const struct CPU_State initial_cpu = {.pc=0x2c11, .a=0x1b, .x=0x8e, .y=0x37, .sp=0xb6, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x2c11, .value=0x70}, {.addr=0x2c12, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0x2c15, .a=0x1b, .x=0x8e, .y=0x37, .sp=0xb6, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x2c11, .value=0x70}, {.addr=0x2c12, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0x2c11, .value=0x70, .type=IO_READ},
        {.addr=0x2c12, .value=0x02, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0165) {
    const struct CPU_State initial_cpu = {.pc=0xe54e, .a=0x75, .x=0xd2, .y=0x02, .sp=0x87, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xe54e, .value=0x70}, {.addr=0xe54f, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0xe550, .a=0x75, .x=0xd2, .y=0x02, .sp=0x87, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xe54e, .value=0x70}, {.addr=0xe54f, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0xe54e, .value=0x70, .type=IO_READ},
        {.addr=0xe54f, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0166) {
    const struct CPU_State initial_cpu = {.pc=0x39a3, .a=0x1e, .x=0x94, .y=0x0d, .sp=0x33, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x39a3, .value=0x70}, {.addr=0x39a4, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x39a5, .a=0x1e, .x=0x94, .y=0x0d, .sp=0x33, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x39a3, .value=0x70}, {.addr=0x39a4, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x39a3, .value=0x70, .type=IO_READ},
        {.addr=0x39a4, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0167) {
    const struct CPU_State initial_cpu = {.pc=0x4788, .a=0xa0, .x=0x99, .y=0x7b, .sp=0xf6, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x4788, .value=0x70}, {.addr=0x4789, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0x478a, .a=0xa0, .x=0x99, .y=0x7b, .sp=0xf6, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x4788, .value=0x70}, {.addr=0x4789, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0x4788, .value=0x70, .type=IO_READ},
        {.addr=0x4789, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0168) {
    const struct CPU_State initial_cpu = {.pc=0x7da0, .a=0xfd, .x=0x18, .y=0x92, .sp=0x53, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x7da0, .value=0x70}, {.addr=0x7da1, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x7d3f, .a=0xfd, .x=0x18, .y=0x92, .sp=0x53, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x7da0, .value=0x70}, {.addr=0x7da1, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x7da0, .value=0x70, .type=IO_READ},
        {.addr=0x7da1, .value=0x9d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0169) {
    const struct CPU_State initial_cpu = {.pc=0xb653, .a=0x4f, .x=0x79, .y=0x50, .sp=0xab, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xb653, .value=0x70}, {.addr=0xb654, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0xb618, .a=0x4f, .x=0x79, .y=0x50, .sp=0xab, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0xb653, .value=0x70}, {.addr=0xb654, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0xb653, .value=0x70, .type=IO_READ},
        {.addr=0xb654, .value=0xc3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_016A) {
    const struct CPU_State initial_cpu = {.pc=0x8c76, .a=0x29, .x=0xfa, .y=0xe1, .sp=0x80, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x8c76, .value=0x70}, {.addr=0x8c77, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x8c50, .a=0x29, .x=0xfa, .y=0xe1, .sp=0x80, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x8c76, .value=0x70}, {.addr=0x8c77, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x8c76, .value=0x70, .type=IO_READ},
        {.addr=0x8c77, .value=0xd8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_016B) {
    const struct CPU_State initial_cpu = {.pc=0x611e, .a=0xda, .x=0x8b, .y=0x7f, .sp=0x0a, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x611e, .value=0x70}, {.addr=0x611f, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x6120, .a=0xda, .x=0x8b, .y=0x7f, .sp=0x0a, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x611e, .value=0x70}, {.addr=0x611f, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x611e, .value=0x70, .type=IO_READ},
        {.addr=0x611f, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_016C) {
    const struct CPU_State initial_cpu = {.pc=0x7a3e, .a=0x10, .x=0xbb, .y=0x55, .sp=0xb3, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x7a3e, .value=0x70}, {.addr=0x7a3f, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0x7a5f, .a=0x10, .x=0xbb, .y=0x55, .sp=0xb3, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x7a3e, .value=0x70}, {.addr=0x7a3f, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0x7a3e, .value=0x70, .type=IO_READ},
        {.addr=0x7a3f, .value=0x1f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_016D) {
    const struct CPU_State initial_cpu = {.pc=0x6f5d, .a=0x15, .x=0x6e, .y=0xaf, .sp=0xba, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x6f5d, .value=0x70}, {.addr=0x6f5e, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x6f5f, .a=0x15, .x=0x6e, .y=0xaf, .sp=0xba, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x6f5d, .value=0x70}, {.addr=0x6f5e, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x6f5d, .value=0x70, .type=IO_READ},
        {.addr=0x6f5e, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_016E) {
    const struct CPU_State initial_cpu = {.pc=0x612b, .a=0xcf, .x=0x44, .y=0x2a, .sp=0xf5, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x612b, .value=0x70}, {.addr=0x612c, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0x613c, .a=0xcf, .x=0x44, .y=0x2a, .sp=0xf5, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x612b, .value=0x70}, {.addr=0x612c, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0x612b, .value=0x70, .type=IO_READ},
        {.addr=0x612c, .value=0x0f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_016F) {
    const struct CPU_State initial_cpu = {.pc=0x5cb6, .a=0x50, .x=0x4b, .y=0x10, .sp=0xa8, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x5cb6, .value=0x70}, {.addr=0x5cb7, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0x5c50, .a=0x50, .x=0x4b, .y=0x10, .sp=0xa8, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x5cb6, .value=0x70}, {.addr=0x5cb7, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0x5cb6, .value=0x70, .type=IO_READ},
        {.addr=0x5cb7, .value=0x98, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0170) {
    const struct CPU_State initial_cpu = {.pc=0x02bf, .a=0x85, .x=0xed, .y=0xe5, .sp=0xf7, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x02bf, .value=0x70}, {.addr=0x02c0, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x02c1, .a=0x85, .x=0xed, .y=0xe5, .sp=0xf7, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x02bf, .value=0x70}, {.addr=0x02c0, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x02bf, .value=0x70, .type=IO_READ},
        {.addr=0x02c0, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0171) {
    const struct CPU_State initial_cpu = {.pc=0xda98, .a=0xd3, .x=0x96, .y=0x41, .sp=0xa0, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xda98, .value=0x70}, {.addr=0xda99, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xda9a, .a=0xd3, .x=0x96, .y=0x41, .sp=0xa0, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xda98, .value=0x70}, {.addr=0xda99, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xda98, .value=0x70, .type=IO_READ},
        {.addr=0xda99, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0172) {
    const struct CPU_State initial_cpu = {.pc=0xd1f2, .a=0x67, .x=0xb8, .y=0xf5, .sp=0x5c, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xd1f2, .value=0x70}, {.addr=0xd1f3, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0xd1f4, .a=0x67, .x=0xb8, .y=0xf5, .sp=0x5c, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xd1f2, .value=0x70}, {.addr=0xd1f3, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0xd1f2, .value=0x70, .type=IO_READ},
        {.addr=0xd1f3, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0173) {
    const struct CPU_State initial_cpu = {.pc=0x24b0, .a=0x8a, .x=0x91, .y=0xc1, .sp=0xd6, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x24b0, .value=0x70}, {.addr=0x24b1, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x24b2, .a=0x8a, .x=0x91, .y=0xc1, .sp=0xd6, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x24b0, .value=0x70}, {.addr=0x24b1, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x24b0, .value=0x70, .type=IO_READ},
        {.addr=0x24b1, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0174) {
    const struct CPU_State initial_cpu = {.pc=0x8717, .a=0x47, .x=0x26, .y=0x0d, .sp=0xe6, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x8717, .value=0x70}, {.addr=0x8718, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x86d6, .a=0x47, .x=0x26, .y=0x0d, .sp=0xe6, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x8717, .value=0x70}, {.addr=0x8718, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x8717, .value=0x70, .type=IO_READ},
        {.addr=0x8718, .value=0xbd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0175) {
    const struct CPU_State initial_cpu = {.pc=0xab65, .a=0xa5, .x=0x8a, .y=0x4a, .sp=0x94, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xab65, .value=0x70}, {.addr=0xab66, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0xab67, .a=0xa5, .x=0x8a, .y=0x4a, .sp=0x94, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xab65, .value=0x70}, {.addr=0xab66, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0xab65, .value=0x70, .type=IO_READ},
        {.addr=0xab66, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0176) {
    const struct CPU_State initial_cpu = {.pc=0xd87f, .a=0xa0, .x=0xd7, .y=0xd4, .sp=0xbc, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xd87f, .value=0x70}, {.addr=0xd880, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0xd8f6, .a=0xa0, .x=0xd7, .y=0xd4, .sp=0xbc, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xd87f, .value=0x70}, {.addr=0xd880, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0xd87f, .value=0x70, .type=IO_READ},
        {.addr=0xd880, .value=0x75, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0177) {
    const struct CPU_State initial_cpu = {.pc=0x3661, .a=0xea, .x=0x9d, .y=0x9e, .sp=0x4f, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x3661, .value=0x70}, {.addr=0x3662, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x3663, .a=0xea, .x=0x9d, .y=0x9e, .sp=0x4f, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x3661, .value=0x70}, {.addr=0x3662, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x3661, .value=0x70, .type=IO_READ},
        {.addr=0x3662, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0178) {
    const struct CPU_State initial_cpu = {.pc=0x2304, .a=0xc5, .x=0x16, .y=0xc0, .sp=0x07, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x2304, .value=0x70}, {.addr=0x2305, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x2306, .a=0xc5, .x=0x16, .y=0xc0, .sp=0x07, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x2304, .value=0x70}, {.addr=0x2305, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x2304, .value=0x70, .type=IO_READ},
        {.addr=0x2305, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0179) {
    const struct CPU_State initial_cpu = {.pc=0x2aaa, .a=0xa6, .x=0xb2, .y=0x5c, .sp=0x19, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x2aaa, .value=0x70}, {.addr=0x2aab, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0x2aa4, .a=0xa6, .x=0xb2, .y=0x5c, .sp=0x19, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x2aaa, .value=0x70}, {.addr=0x2aab, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0x2aaa, .value=0x70, .type=IO_READ},
        {.addr=0x2aab, .value=0xf8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_017A) {
    const struct CPU_State initial_cpu = {.pc=0x1ff0, .a=0x6a, .x=0x65, .y=0x81, .sp=0x47, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x1ff0, .value=0x70}, {.addr=0x1ff1, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0x206b, .a=0x6a, .x=0x65, .y=0x81, .sp=0x47, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x1ff0, .value=0x70}, {.addr=0x1ff1, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0x1ff0, .value=0x70, .type=IO_READ},
        {.addr=0x1ff1, .value=0x79, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_017B) {
    const struct CPU_State initial_cpu = {.pc=0x5e91, .a=0xd0, .x=0x8a, .y=0xdf, .sp=0x9c, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x5e91, .value=0x70}, {.addr=0x5e92, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x5ed6, .a=0xd0, .x=0x8a, .y=0xdf, .sp=0x9c, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x5e91, .value=0x70}, {.addr=0x5e92, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x5e91, .value=0x70, .type=IO_READ},
        {.addr=0x5e92, .value=0x43, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_017C) {
    const struct CPU_State initial_cpu = {.pc=0xe4fb, .a=0x44, .x=0x22, .y=0xf7, .sp=0x3a, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xe4fb, .value=0x70}, {.addr=0xe4fc, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0xe4b1, .a=0x44, .x=0x22, .y=0xf7, .sp=0x3a, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xe4fb, .value=0x70}, {.addr=0xe4fc, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0xe4fb, .value=0x70, .type=IO_READ},
        {.addr=0xe4fc, .value=0xb4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_017D) {
    const struct CPU_State initial_cpu = {.pc=0xf0df, .a=0xf4, .x=0x4b, .y=0xd7, .sp=0x0b, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xf0df, .value=0x70}, {.addr=0xf0e0, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0xf0e1, .a=0xf4, .x=0x4b, .y=0xd7, .sp=0x0b, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xf0df, .value=0x70}, {.addr=0xf0e0, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0xf0df, .value=0x70, .type=IO_READ},
        {.addr=0xf0e0, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_017E) {
    const struct CPU_State initial_cpu = {.pc=0x9445, .a=0xc7, .x=0xe0, .y=0x1a, .sp=0x4b, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x9445, .value=0x70}, {.addr=0x9446, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x9447, .a=0xc7, .x=0xe0, .y=0x1a, .sp=0x4b, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x9445, .value=0x70}, {.addr=0x9446, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x9445, .value=0x70, .type=IO_READ},
        {.addr=0x9446, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_017F) {
    const struct CPU_State initial_cpu = {.pc=0x2f77, .a=0x3d, .x=0xda, .y=0x47, .sp=0x14, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x2f77, .value=0x70}, {.addr=0x2f78, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x2f79, .a=0x3d, .x=0xda, .y=0x47, .sp=0x14, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x2f77, .value=0x70}, {.addr=0x2f78, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x2f77, .value=0x70, .type=IO_READ},
        {.addr=0x2f78, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0180) {
    const struct CPU_State initial_cpu = {.pc=0x3a52, .a=0x60, .x=0x30, .y=0x0e, .sp=0xfb, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x3a52, .value=0x70}, {.addr=0x3a53, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x3a54, .a=0x60, .x=0x30, .y=0x0e, .sp=0xfb, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x3a52, .value=0x70}, {.addr=0x3a53, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x3a52, .value=0x70, .type=IO_READ},
        {.addr=0x3a53, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0181) {
    const struct CPU_State initial_cpu = {.pc=0xc32b, .a=0xdd, .x=0xf2, .y=0x1e, .sp=0x27, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xc32b, .value=0x70}, {.addr=0xc32c, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0xc32d, .a=0xdd, .x=0xf2, .y=0x1e, .sp=0x27, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xc32b, .value=0x70}, {.addr=0xc32c, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0xc32b, .value=0x70, .type=IO_READ},
        {.addr=0xc32c, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0182) {
    const struct CPU_State initial_cpu = {.pc=0x0f87, .a=0xc1, .x=0x18, .y=0x4b, .sp=0xc5, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x0f87, .value=0x70}, {.addr=0x0f88, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x0f89, .a=0xc1, .x=0x18, .y=0x4b, .sp=0xc5, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0f87, .value=0x70}, {.addr=0x0f88, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x0f87, .value=0x70, .type=IO_READ},
        {.addr=0x0f88, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0183) {
    const struct CPU_State initial_cpu = {.pc=0x3e5b, .a=0x71, .x=0xb4, .y=0xaa, .sp=0xc4, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x3e5b, .value=0x70}, {.addr=0x3e5c, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x3e5c, .a=0x71, .x=0xb4, .y=0xaa, .sp=0xc4, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x3e5b, .value=0x70}, {.addr=0x3e5c, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x3e5b, .value=0x70, .type=IO_READ},
        {.addr=0x3e5c, .value=0xff, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0184) {
    const struct CPU_State initial_cpu = {.pc=0x8c06, .a=0xce, .x=0x1d, .y=0x9c, .sp=0x1a, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x8c06, .value=0x70}, {.addr=0x8c07, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x8c08, .a=0xce, .x=0x1d, .y=0x9c, .sp=0x1a, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x8c06, .value=0x70}, {.addr=0x8c07, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x8c06, .value=0x70, .type=IO_READ},
        {.addr=0x8c07, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0185) {
    const struct CPU_State initial_cpu = {.pc=0x22ae, .a=0x1c, .x=0xa1, .y=0x90, .sp=0x26, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x22ae, .value=0x70}, {.addr=0x22af, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0x230a, .a=0x1c, .x=0xa1, .y=0x90, .sp=0x26, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x22ae, .value=0x70}, {.addr=0x22af, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0x22ae, .value=0x70, .type=IO_READ},
        {.addr=0x22af, .value=0x5a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0186) {
    const struct CPU_State initial_cpu = {.pc=0x6fca, .a=0xf4, .x=0x7b, .y=0x68, .sp=0xc3, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x6fca, .value=0x70}, {.addr=0x6fcb, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0x6fcc, .a=0xf4, .x=0x7b, .y=0x68, .sp=0xc3, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x6fca, .value=0x70}, {.addr=0x6fcb, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0x6fca, .value=0x70, .type=IO_READ},
        {.addr=0x6fcb, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0187) {
    const struct CPU_State initial_cpu = {.pc=0x8dfe, .a=0xa3, .x=0x9f, .y=0x6d, .sp=0xbf, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x8dfe, .value=0x70}, {.addr=0x8dff, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0x8e00, .a=0xa3, .x=0x9f, .y=0x6d, .sp=0xbf, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x8dfe, .value=0x70}, {.addr=0x8dff, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0x8dfe, .value=0x70, .type=IO_READ},
        {.addr=0x8dff, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0188) {
    const struct CPU_State initial_cpu = {.pc=0x9f7d, .a=0x24, .x=0x5d, .y=0x63, .sp=0xa5, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x9f7d, .value=0x70}, {.addr=0x9f7e, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x9f7f, .a=0x24, .x=0x5d, .y=0x63, .sp=0xa5, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x9f7d, .value=0x70}, {.addr=0x9f7e, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x9f7d, .value=0x70, .type=IO_READ},
        {.addr=0x9f7e, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0189) {
    const struct CPU_State initial_cpu = {.pc=0xfaa1, .a=0x7b, .x=0xe0, .y=0x7f, .sp=0x2c, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xfaa1, .value=0x70}, {.addr=0xfaa2, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0xfa2c, .a=0x7b, .x=0xe0, .y=0x7f, .sp=0x2c, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0xfaa1, .value=0x70}, {.addr=0xfaa2, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0xfaa1, .value=0x70, .type=IO_READ},
        {.addr=0xfaa2, .value=0x89, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_018A) {
    const struct CPU_State initial_cpu = {.pc=0xec61, .a=0x0e, .x=0x58, .y=0x81, .sp=0xcf, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xec61, .value=0x70}, {.addr=0xec62, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xec89, .a=0x0e, .x=0x58, .y=0x81, .sp=0xcf, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xec61, .value=0x70}, {.addr=0xec62, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xec61, .value=0x70, .type=IO_READ},
        {.addr=0xec62, .value=0x26, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_018B) {
    const struct CPU_State initial_cpu = {.pc=0x0c9e, .a=0x75, .x=0x9c, .y=0xca, .sp=0x32, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x0c9e, .value=0x70}, {.addr=0x0c9f, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x0ca0, .a=0x75, .x=0x9c, .y=0xca, .sp=0x32, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x0c9e, .value=0x70}, {.addr=0x0c9f, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x0c9e, .value=0x70, .type=IO_READ},
        {.addr=0x0c9f, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_018C) {
    const struct CPU_State initial_cpu = {.pc=0xe79e, .a=0xc3, .x=0xa7, .y=0xed, .sp=0xd0, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xe79e, .value=0x70}, {.addr=0xe79f, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0xe7a0, .a=0xc3, .x=0xa7, .y=0xed, .sp=0xd0, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xe79e, .value=0x70}, {.addr=0xe79f, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0xe79e, .value=0x70, .type=IO_READ},
        {.addr=0xe79f, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_018D) {
    const struct CPU_State initial_cpu = {.pc=0xc383, .a=0xe4, .x=0xa8, .y=0x8d, .sp=0x31, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xc383, .value=0x70}, {.addr=0xc384, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xc385, .a=0xe4, .x=0xa8, .y=0x8d, .sp=0x31, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0xc383, .value=0x70}, {.addr=0xc384, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xc383, .value=0x70, .type=IO_READ},
        {.addr=0xc384, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_018E) {
    const struct CPU_State initial_cpu = {.pc=0x7194, .a=0xf5, .x=0x57, .y=0x5f, .sp=0x01, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x7194, .value=0x70}, {.addr=0x7195, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0x7161, .a=0xf5, .x=0x57, .y=0x5f, .sp=0x01, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x7194, .value=0x70}, {.addr=0x7195, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0x7194, .value=0x70, .type=IO_READ},
        {.addr=0x7195, .value=0xcb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_018F) {
    const struct CPU_State initial_cpu = {.pc=0x5388, .a=0x2d, .x=0xbf, .y=0x0f, .sp=0xd5, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x5388, .value=0x70}, {.addr=0x5389, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x539e, .a=0x2d, .x=0xbf, .y=0x0f, .sp=0xd5, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x5388, .value=0x70}, {.addr=0x5389, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x5388, .value=0x70, .type=IO_READ},
        {.addr=0x5389, .value=0x14, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0190) {
    const struct CPU_State initial_cpu = {.pc=0x70b0, .a=0x4d, .x=0x0c, .y=0x26, .sp=0x8d, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x70b0, .value=0x70}, {.addr=0x70b1, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x7090, .a=0x4d, .x=0x0c, .y=0x26, .sp=0x8d, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x70b0, .value=0x70}, {.addr=0x70b1, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x70b0, .value=0x70, .type=IO_READ},
        {.addr=0x70b1, .value=0xde, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0191) {
    const struct CPU_State initial_cpu = {.pc=0xb2b2, .a=0x2d, .x=0xc0, .y=0x54, .sp=0x32, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xb2b2, .value=0x70}, {.addr=0xb2b3, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0xb32c, .a=0x2d, .x=0xc0, .y=0x54, .sp=0x32, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xb2b2, .value=0x70}, {.addr=0xb2b3, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0xb2b2, .value=0x70, .type=IO_READ},
        {.addr=0xb2b3, .value=0x78, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0192) {
    const struct CPU_State initial_cpu = {.pc=0xee13, .a=0x83, .x=0xfc, .y=0x62, .sp=0xb3, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xee13, .value=0x70}, {.addr=0xee14, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0xee15, .a=0x83, .x=0xfc, .y=0x62, .sp=0xb3, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xee13, .value=0x70}, {.addr=0xee14, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0xee13, .value=0x70, .type=IO_READ},
        {.addr=0xee14, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0193) {
    const struct CPU_State initial_cpu = {.pc=0xc9dc, .a=0x5f, .x=0x01, .y=0xb5, .sp=0xe8, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xc9dc, .value=0x70}, {.addr=0xc9dd, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xc9de, .a=0x5f, .x=0x01, .y=0xb5, .sp=0xe8, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0xc9dc, .value=0x70}, {.addr=0xc9dd, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xc9dc, .value=0x70, .type=IO_READ},
        {.addr=0xc9dd, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0194) {
    const struct CPU_State initial_cpu = {.pc=0xa947, .a=0xf9, .x=0x72, .y=0x11, .sp=0xdb, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xa947, .value=0x70}, {.addr=0xa948, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0xa8da, .a=0xf9, .x=0x72, .y=0x11, .sp=0xdb, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xa947, .value=0x70}, {.addr=0xa948, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0xa947, .value=0x70, .type=IO_READ},
        {.addr=0xa948, .value=0x91, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0195) {
    const struct CPU_State initial_cpu = {.pc=0x09b9, .a=0xf4, .x=0x5b, .y=0x34, .sp=0x25, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x09b9, .value=0x70}, {.addr=0x09ba, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x09bb, .a=0xf4, .x=0x5b, .y=0x34, .sp=0x25, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x09b9, .value=0x70}, {.addr=0x09ba, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x09b9, .value=0x70, .type=IO_READ},
        {.addr=0x09ba, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0196) {
    const struct CPU_State initial_cpu = {.pc=0xc93e, .a=0x11, .x=0x40, .y=0x18, .sp=0x8f, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xc93e, .value=0x70}, {.addr=0xc93f, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xc946, .a=0x11, .x=0x40, .y=0x18, .sp=0x8f, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0xc93e, .value=0x70}, {.addr=0xc93f, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xc93e, .value=0x70, .type=IO_READ},
        {.addr=0xc93f, .value=0x06, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0197) {
    const struct CPU_State initial_cpu = {.pc=0xc8f7, .a=0x4c, .x=0x9b, .y=0xef, .sp=0x55, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xc8f7, .value=0x70}, {.addr=0xc8f8, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0xc8f9, .a=0x4c, .x=0x9b, .y=0xef, .sp=0x55, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xc8f7, .value=0x70}, {.addr=0xc8f8, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0xc8f7, .value=0x70, .type=IO_READ},
        {.addr=0xc8f8, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0198) {
    const struct CPU_State initial_cpu = {.pc=0xc147, .a=0xee, .x=0x8a, .y=0x7f, .sp=0x9c, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xc147, .value=0x70}, {.addr=0xc148, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0xc0d2, .a=0xee, .x=0x8a, .y=0x7f, .sp=0x9c, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xc147, .value=0x70}, {.addr=0xc148, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0xc147, .value=0x70, .type=IO_READ},
        {.addr=0xc148, .value=0x89, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0199) {
    const struct CPU_State initial_cpu = {.pc=0x4669, .a=0x9b, .x=0xd7, .y=0xba, .sp=0x2d, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x4669, .value=0x70}, {.addr=0x466a, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0x466b, .a=0x9b, .x=0xd7, .y=0xba, .sp=0x2d, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x4669, .value=0x70}, {.addr=0x466a, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0x4669, .value=0x70, .type=IO_READ},
        {.addr=0x466a, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_019A) {
    const struct CPU_State initial_cpu = {.pc=0xcc62, .a=0xae, .x=0xcf, .y=0xe2, .sp=0x51, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xcc62, .value=0x70}, {.addr=0xcc63, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0xcbf7, .a=0xae, .x=0xcf, .y=0xe2, .sp=0x51, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xcc62, .value=0x70}, {.addr=0xcc63, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0xcc62, .value=0x70, .type=IO_READ},
        {.addr=0xcc63, .value=0x93, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_019B) {
    const struct CPU_State initial_cpu = {.pc=0xdbdc, .a=0xdc, .x=0x6f, .y=0xf7, .sp=0x1d, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xdbdc, .value=0x70}, {.addr=0xdbdd, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0xdbde, .a=0xdc, .x=0x6f, .y=0xf7, .sp=0x1d, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xdbdc, .value=0x70}, {.addr=0xdbdd, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0xdbdc, .value=0x70, .type=IO_READ},
        {.addr=0xdbdd, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_019C) {
    const struct CPU_State initial_cpu = {.pc=0x8b9f, .a=0x28, .x=0x81, .y=0xe9, .sp=0xe3, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x8b9f, .value=0x70}, {.addr=0x8ba0, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0x8ba1, .a=0x28, .x=0x81, .y=0xe9, .sp=0xe3, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x8b9f, .value=0x70}, {.addr=0x8ba0, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0x8b9f, .value=0x70, .type=IO_READ},
        {.addr=0x8ba0, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_019D) {
    const struct CPU_State initial_cpu = {.pc=0xe510, .a=0x3b, .x=0x9a, .y=0x5e, .sp=0x55, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xe510, .value=0x70}, {.addr=0xe511, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0xe512, .a=0x3b, .x=0x9a, .y=0x5e, .sp=0x55, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xe510, .value=0x70}, {.addr=0xe511, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0xe510, .value=0x70, .type=IO_READ},
        {.addr=0xe511, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_019E) {
    const struct CPU_State initial_cpu = {.pc=0x6dd4, .a=0xe7, .x=0x97, .y=0x8f, .sp=0x0f, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x6dd4, .value=0x70}, {.addr=0x6dd5, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0x6d5e, .a=0xe7, .x=0x97, .y=0x8f, .sp=0x0f, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x6dd4, .value=0x70}, {.addr=0x6dd5, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0x6dd4, .value=0x70, .type=IO_READ},
        {.addr=0x6dd5, .value=0x88, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_019F) {
    const struct CPU_State initial_cpu = {.pc=0x8388, .a=0x2e, .x=0x09, .y=0x0e, .sp=0x68, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x8388, .value=0x70}, {.addr=0x8389, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0x83e5, .a=0x2e, .x=0x09, .y=0x0e, .sp=0x68, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x8388, .value=0x70}, {.addr=0x8389, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0x8388, .value=0x70, .type=IO_READ},
        {.addr=0x8389, .value=0x5b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x7c37, .a=0xe2, .x=0x52, .y=0xb9, .sp=0xae, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x7c37, .value=0x70}, {.addr=0x7c38, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0x7bd2, .a=0xe2, .x=0x52, .y=0xb9, .sp=0xae, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x7c37, .value=0x70}, {.addr=0x7c38, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0x7c37, .value=0x70, .type=IO_READ},
        {.addr=0x7c38, .value=0x99, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01A1) {
    const struct CPU_State initial_cpu = {.pc=0x2ae7, .a=0x8a, .x=0x16, .y=0xbb, .sp=0x53, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x2ae7, .value=0x70}, {.addr=0x2ae8, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x2ae9, .a=0x8a, .x=0x16, .y=0xbb, .sp=0x53, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x2ae7, .value=0x70}, {.addr=0x2ae8, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x2ae7, .value=0x70, .type=IO_READ},
        {.addr=0x2ae8, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01A2) {
    const struct CPU_State initial_cpu = {.pc=0xe379, .a=0x15, .x=0x4e, .y=0x57, .sp=0x7b, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xe379, .value=0x70}, {.addr=0xe37a, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0xe37b, .a=0x15, .x=0x4e, .y=0x57, .sp=0x7b, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xe379, .value=0x70}, {.addr=0xe37a, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0xe379, .value=0x70, .type=IO_READ},
        {.addr=0xe37a, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01A3) {
    const struct CPU_State initial_cpu = {.pc=0x0013, .a=0xf4, .x=0x15, .y=0x5e, .sp=0xc2, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x0013, .value=0x70}, {.addr=0x0014, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0xffa7, .a=0xf4, .x=0x15, .y=0x5e, .sp=0xc2, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0013, .value=0x70}, {.addr=0x0014, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0x0013, .value=0x70, .type=IO_READ},
        {.addr=0x0014, .value=0x92, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01A4) {
    const struct CPU_State initial_cpu = {.pc=0xa03f, .a=0x4e, .x=0x79, .y=0x22, .sp=0xfc, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xa03f, .value=0x70}, {.addr=0xa040, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0xa041, .a=0x4e, .x=0x79, .y=0x22, .sp=0xfc, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xa03f, .value=0x70}, {.addr=0xa040, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0xa03f, .value=0x70, .type=IO_READ},
        {.addr=0xa040, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01A5) {
    const struct CPU_State initial_cpu = {.pc=0x2b3f, .a=0x4c, .x=0x74, .y=0xeb, .sp=0xd0, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x2b3f, .value=0x70}, {.addr=0x2b40, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x2b41, .a=0x4c, .x=0x74, .y=0xeb, .sp=0xd0, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x2b3f, .value=0x70}, {.addr=0x2b40, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x2b3f, .value=0x70, .type=IO_READ},
        {.addr=0x2b40, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01A6) {
    const struct CPU_State initial_cpu = {.pc=0xe5b6, .a=0x47, .x=0x51, .y=0x43, .sp=0xc2, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xe5b6, .value=0x70}, {.addr=0xe5b7, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0xe559, .a=0x47, .x=0x51, .y=0x43, .sp=0xc2, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xe5b6, .value=0x70}, {.addr=0xe5b7, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0xe5b6, .value=0x70, .type=IO_READ},
        {.addr=0xe5b7, .value=0xa1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01A7) {
    const struct CPU_State initial_cpu = {.pc=0xa2ff, .a=0x91, .x=0x2d, .y=0x17, .sp=0xe8, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xa2ff, .value=0x70}, {.addr=0xa300, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0xa301, .a=0x91, .x=0x2d, .y=0x17, .sp=0xe8, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xa2ff, .value=0x70}, {.addr=0xa300, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0xa2ff, .value=0x70, .type=IO_READ},
        {.addr=0xa300, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01A8) {
    const struct CPU_State initial_cpu = {.pc=0x744f, .a=0x6f, .x=0x9f, .y=0x56, .sp=0x18, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x744f, .value=0x70}, {.addr=0x7450, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x7469, .a=0x6f, .x=0x9f, .y=0x56, .sp=0x18, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x744f, .value=0x70}, {.addr=0x7450, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x744f, .value=0x70, .type=IO_READ},
        {.addr=0x7450, .value=0x18, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01A9) {
    const struct CPU_State initial_cpu = {.pc=0x89a0, .a=0x10, .x=0x6f, .y=0x7c, .sp=0xf8, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x89a0, .value=0x70}, {.addr=0x89a1, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0x8a20, .a=0x10, .x=0x6f, .y=0x7c, .sp=0xf8, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x89a0, .value=0x70}, {.addr=0x89a1, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0x89a0, .value=0x70, .type=IO_READ},
        {.addr=0x89a1, .value=0x7e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01AA) {
    const struct CPU_State initial_cpu = {.pc=0xdbf6, .a=0xe1, .x=0x12, .y=0x67, .sp=0xba, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xdbf6, .value=0x70}, {.addr=0xdbf7, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0xdc39, .a=0xe1, .x=0x12, .y=0x67, .sp=0xba, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0xdbf6, .value=0x70}, {.addr=0xdbf7, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0xdbf6, .value=0x70, .type=IO_READ},
        {.addr=0xdbf7, .value=0x41, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01AB) {
    const struct CPU_State initial_cpu = {.pc=0xe373, .a=0x6c, .x=0x27, .y=0x25, .sp=0xa6, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xe373, .value=0x70}, {.addr=0xe374, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0xe387, .a=0x6c, .x=0x27, .y=0x25, .sp=0xa6, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0xe373, .value=0x70}, {.addr=0xe374, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0xe373, .value=0x70, .type=IO_READ},
        {.addr=0xe374, .value=0x12, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01AC) {
    const struct CPU_State initial_cpu = {.pc=0x6c06, .a=0xeb, .x=0x89, .y=0x48, .sp=0x2c, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x6c06, .value=0x70}, {.addr=0x6c07, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x6c08, .a=0xeb, .x=0x89, .y=0x48, .sp=0x2c, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x6c06, .value=0x70}, {.addr=0x6c07, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x6c06, .value=0x70, .type=IO_READ},
        {.addr=0x6c07, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01AD) {
    const struct CPU_State initial_cpu = {.pc=0x70ab, .a=0xf9, .x=0xed, .y=0xe7, .sp=0x19, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x70ab, .value=0x70}, {.addr=0x70ac, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0x70ad, .a=0xf9, .x=0xed, .y=0xe7, .sp=0x19, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x70ab, .value=0x70}, {.addr=0x70ac, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0x70ab, .value=0x70, .type=IO_READ},
        {.addr=0x70ac, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01AE) {
    const struct CPU_State initial_cpu = {.pc=0x7a40, .a=0x98, .x=0xaa, .y=0x39, .sp=0xde, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x7a40, .value=0x70}, {.addr=0x7a41, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x7a42, .a=0x98, .x=0xaa, .y=0x39, .sp=0xde, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x7a40, .value=0x70}, {.addr=0x7a41, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x7a40, .value=0x70, .type=IO_READ},
        {.addr=0x7a41, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01AF) {
    const struct CPU_State initial_cpu = {.pc=0x03ad, .a=0xab, .x=0x5c, .y=0x49, .sp=0xa4, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x03ad, .value=0x70}, {.addr=0x03ae, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x03af, .a=0xab, .x=0x5c, .y=0x49, .sp=0xa4, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x03ad, .value=0x70}, {.addr=0x03ae, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x03ad, .value=0x70, .type=IO_READ},
        {.addr=0x03ae, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01B0) {
    const struct CPU_State initial_cpu = {.pc=0xbe76, .a=0xec, .x=0x17, .y=0x81, .sp=0xd7, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xbe76, .value=0x70}, {.addr=0xbe77, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xbdf8, .a=0xec, .x=0x17, .y=0x81, .sp=0xd7, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0xbe76, .value=0x70}, {.addr=0xbe77, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xbe76, .value=0x70, .type=IO_READ},
        {.addr=0xbe77, .value=0x80, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01B1) {
    const struct CPU_State initial_cpu = {.pc=0xfff3, .a=0x86, .x=0x1e, .y=0xb6, .sp=0x7c, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xfff3, .value=0x70}, {.addr=0xfff4, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0x006b, .a=0x86, .x=0x1e, .y=0xb6, .sp=0x7c, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0xfff3, .value=0x70}, {.addr=0xfff4, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0xfff3, .value=0x70, .type=IO_READ},
        {.addr=0xfff4, .value=0x76, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x8b76, .a=0x63, .x=0xd4, .y=0x72, .sp=0xab, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x8b76, .value=0x70}, {.addr=0x8b77, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0x8b78, .a=0x63, .x=0xd4, .y=0x72, .sp=0xab, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x8b76, .value=0x70}, {.addr=0x8b77, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0x8b76, .value=0x70, .type=IO_READ},
        {.addr=0x8b77, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01B3) {
    const struct CPU_State initial_cpu = {.pc=0x2b98, .a=0x3b, .x=0xc1, .y=0x5b, .sp=0xef, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x2b98, .value=0x70}, {.addr=0x2b99, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0x2b9a, .a=0x3b, .x=0xc1, .y=0x5b, .sp=0xef, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x2b98, .value=0x70}, {.addr=0x2b99, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0x2b98, .value=0x70, .type=IO_READ},
        {.addr=0x2b99, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01B4) {
    const struct CPU_State initial_cpu = {.pc=0x1762, .a=0x60, .x=0x8c, .y=0xc7, .sp=0x91, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x1762, .value=0x70}, {.addr=0x1763, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0x1764, .a=0x60, .x=0x8c, .y=0xc7, .sp=0x91, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x1762, .value=0x70}, {.addr=0x1763, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0x1762, .value=0x70, .type=IO_READ},
        {.addr=0x1763, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01B5) {
    const struct CPU_State initial_cpu = {.pc=0x076e, .a=0x0d, .x=0x80, .y=0x0f, .sp=0x4e, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x076e, .value=0x70}, {.addr=0x076f, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0x06f1, .a=0x0d, .x=0x80, .y=0x0f, .sp=0x4e, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x076e, .value=0x70}, {.addr=0x076f, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0x076e, .value=0x70, .type=IO_READ},
        {.addr=0x076f, .value=0x81, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01B6) {
    const struct CPU_State initial_cpu = {.pc=0x53ae, .a=0x81, .x=0x5c, .y=0x44, .sp=0x89, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x53ae, .value=0x70}, {.addr=0x53af, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x53b0, .a=0x81, .x=0x5c, .y=0x44, .sp=0x89, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x53ae, .value=0x70}, {.addr=0x53af, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x53ae, .value=0x70, .type=IO_READ},
        {.addr=0x53af, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01B7) {
    const struct CPU_State initial_cpu = {.pc=0x876a, .a=0xad, .x=0xef, .y=0x0b, .sp=0x98, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x876a, .value=0x70}, {.addr=0x876b, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0x876c, .a=0xad, .x=0xef, .y=0x0b, .sp=0x98, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x876a, .value=0x70}, {.addr=0x876b, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0x876a, .value=0x70, .type=IO_READ},
        {.addr=0x876b, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01B8) {
    const struct CPU_State initial_cpu = {.pc=0x307e, .a=0x56, .x=0xb9, .y=0xca, .sp=0x68, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x307e, .value=0x70}, {.addr=0x307f, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0x3059, .a=0x56, .x=0xb9, .y=0xca, .sp=0x68, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x307e, .value=0x70}, {.addr=0x307f, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0x307e, .value=0x70, .type=IO_READ},
        {.addr=0x307f, .value=0xd9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x7011, .a=0x05, .x=0x67, .y=0xa9, .sp=0xd7, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x7011, .value=0x70}, {.addr=0x7012, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x6fce, .a=0x05, .x=0x67, .y=0xa9, .sp=0xd7, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x7011, .value=0x70}, {.addr=0x7012, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x7011, .value=0x70, .type=IO_READ},
        {.addr=0x7012, .value=0xbb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01BA) {
    const struct CPU_State initial_cpu = {.pc=0x372d, .a=0xa6, .x=0xd6, .y=0x17, .sp=0x84, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x372d, .value=0x70}, {.addr=0x372e, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0x372f, .a=0xa6, .x=0xd6, .y=0x17, .sp=0x84, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x372d, .value=0x70}, {.addr=0x372e, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0x372d, .value=0x70, .type=IO_READ},
        {.addr=0x372e, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01BB) {
    const struct CPU_State initial_cpu = {.pc=0xc764, .a=0x31, .x=0x53, .y=0xe9, .sp=0x9f, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xc764, .value=0x70}, {.addr=0xc765, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xc766, .a=0x31, .x=0x53, .y=0xe9, .sp=0x9f, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0xc764, .value=0x70}, {.addr=0xc765, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xc764, .value=0x70, .type=IO_READ},
        {.addr=0xc765, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01BC) {
    const struct CPU_State initial_cpu = {.pc=0x5259, .a=0xcb, .x=0x5a, .y=0xf3, .sp=0x2c, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x5259, .value=0x70}, {.addr=0x525a, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0x525b, .a=0xcb, .x=0x5a, .y=0xf3, .sp=0x2c, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x5259, .value=0x70}, {.addr=0x525a, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0x5259, .value=0x70, .type=IO_READ},
        {.addr=0x525a, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01BD) {
    const struct CPU_State initial_cpu = {.pc=0xa4ab, .a=0x65, .x=0x1e, .y=0xcf, .sp=0xa7, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xa4ab, .value=0x70}, {.addr=0xa4ac, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0xa4ad, .a=0x65, .x=0x1e, .y=0xcf, .sp=0xa7, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xa4ab, .value=0x70}, {.addr=0xa4ac, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0xa4ab, .value=0x70, .type=IO_READ},
        {.addr=0xa4ac, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01BE) {
    const struct CPU_State initial_cpu = {.pc=0xe117, .a=0x0f, .x=0xfe, .y=0x1a, .sp=0xee, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xe117, .value=0x70}, {.addr=0xe118, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0xe119, .a=0x0f, .x=0xfe, .y=0x1a, .sp=0xee, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xe117, .value=0x70}, {.addr=0xe118, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0xe117, .value=0x70, .type=IO_READ},
        {.addr=0xe118, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01BF) {
    const struct CPU_State initial_cpu = {.pc=0xa33e, .a=0xe9, .x=0xb6, .y=0x36, .sp=0x09, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xa33e, .value=0x70}, {.addr=0xa33f, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xa340, .a=0xe9, .x=0xb6, .y=0x36, .sp=0x09, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xa33e, .value=0x70}, {.addr=0xa33f, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xa33e, .value=0x70, .type=IO_READ},
        {.addr=0xa33f, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01C0) {
    const struct CPU_State initial_cpu = {.pc=0xe554, .a=0x52, .x=0xe9, .y=0xb9, .sp=0x2f, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xe554, .value=0x70}, {.addr=0xe555, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0xe4ea, .a=0x52, .x=0xe9, .y=0xb9, .sp=0x2f, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xe554, .value=0x70}, {.addr=0xe555, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0xe554, .value=0x70, .type=IO_READ},
        {.addr=0xe555, .value=0x94, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x8574, .a=0xff, .x=0xce, .y=0x25, .sp=0x68, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x8574, .value=0x70}, {.addr=0x8575, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0x8576, .a=0xff, .x=0xce, .y=0x25, .sp=0x68, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x8574, .value=0x70}, {.addr=0x8575, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0x8574, .value=0x70, .type=IO_READ},
        {.addr=0x8575, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01C2) {
    const struct CPU_State initial_cpu = {.pc=0xcf68, .a=0xd6, .x=0xdc, .y=0x4d, .sp=0x4d, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xcf68, .value=0x70}, {.addr=0xcf69, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0xcfe3, .a=0xd6, .x=0xdc, .y=0x4d, .sp=0x4d, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0xcf68, .value=0x70}, {.addr=0xcf69, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0xcf68, .value=0x70, .type=IO_READ},
        {.addr=0xcf69, .value=0x79, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01C3) {
    const struct CPU_State initial_cpu = {.pc=0x2e8e, .a=0x9d, .x=0x60, .y=0xb1, .sp=0x36, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x2e8e, .value=0x70}, {.addr=0x2e8f, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x2e90, .a=0x9d, .x=0x60, .y=0xb1, .sp=0x36, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x2e8e, .value=0x70}, {.addr=0x2e8f, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x2e8e, .value=0x70, .type=IO_READ},
        {.addr=0x2e8f, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01C4) {
    const struct CPU_State initial_cpu = {.pc=0xb1ce, .a=0x00, .x=0xad, .y=0xd5, .sp=0xb5, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xb1ce, .value=0x70}, {.addr=0xb1cf, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0xb1d0, .a=0x00, .x=0xad, .y=0xd5, .sp=0xb5, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0xb1ce, .value=0x70}, {.addr=0xb1cf, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0xb1ce, .value=0x70, .type=IO_READ},
        {.addr=0xb1cf, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x033f, .a=0xde, .x=0xeb, .y=0xee, .sp=0xf0, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x033f, .value=0x70}, {.addr=0x0340, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x03ac, .a=0xde, .x=0xeb, .y=0xee, .sp=0xf0, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x033f, .value=0x70}, {.addr=0x0340, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x033f, .value=0x70, .type=IO_READ},
        {.addr=0x0340, .value=0x6b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01C6) {
    const struct CPU_State initial_cpu = {.pc=0x85ce, .a=0xea, .x=0xbb, .y=0xe6, .sp=0x30, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x85ce, .value=0x70}, {.addr=0x85cf, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x85d0, .a=0xea, .x=0xbb, .y=0xe6, .sp=0x30, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x85ce, .value=0x70}, {.addr=0x85cf, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x85ce, .value=0x70, .type=IO_READ},
        {.addr=0x85cf, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01C7) {
    const struct CPU_State initial_cpu = {.pc=0x5d3b, .a=0xd1, .x=0x07, .y=0xf5, .sp=0x31, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x5d3b, .value=0x70}, {.addr=0x5d3c, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x5db5, .a=0xd1, .x=0x07, .y=0xf5, .sp=0x31, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x5d3b, .value=0x70}, {.addr=0x5d3c, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x5d3b, .value=0x70, .type=IO_READ},
        {.addr=0x5d3c, .value=0x78, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01C8) {
    const struct CPU_State initial_cpu = {.pc=0x3091, .a=0xb3, .x=0xb1, .y=0x26, .sp=0xba, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x3091, .value=0x70}, {.addr=0x3092, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x3058, .a=0xb3, .x=0xb1, .y=0x26, .sp=0xba, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x3091, .value=0x70}, {.addr=0x3092, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x3091, .value=0x70, .type=IO_READ},
        {.addr=0x3092, .value=0xc5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01C9) {
    const struct CPU_State initial_cpu = {.pc=0x5d24, .a=0x69, .x=0x96, .y=0x17, .sp=0xb7, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x5d24, .value=0x70}, {.addr=0x5d25, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x5d26, .a=0x69, .x=0x96, .y=0x17, .sp=0xb7, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x5d24, .value=0x70}, {.addr=0x5d25, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x5d24, .value=0x70, .type=IO_READ},
        {.addr=0x5d25, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01CA) {
    const struct CPU_State initial_cpu = {.pc=0xe046, .a=0x1e, .x=0x23, .y=0x66, .sp=0x1f, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xe046, .value=0x70}, {.addr=0xe047, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0xe048, .a=0x1e, .x=0x23, .y=0x66, .sp=0x1f, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xe046, .value=0x70}, {.addr=0xe047, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0xe046, .value=0x70, .type=IO_READ},
        {.addr=0xe047, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01CB) {
    const struct CPU_State initial_cpu = {.pc=0x3e3b, .a=0x89, .x=0x35, .y=0xb0, .sp=0x18, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x3e3b, .value=0x70}, {.addr=0x3e3c, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x3e3d, .a=0x89, .x=0x35, .y=0xb0, .sp=0x18, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x3e3b, .value=0x70}, {.addr=0x3e3c, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x3e3b, .value=0x70, .type=IO_READ},
        {.addr=0x3e3c, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01CC) {
    const struct CPU_State initial_cpu = {.pc=0x5f42, .a=0x92, .x=0x24, .y=0xb5, .sp=0x7a, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x5f42, .value=0x70}, {.addr=0x5f43, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0x5f50, .a=0x92, .x=0x24, .y=0xb5, .sp=0x7a, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x5f42, .value=0x70}, {.addr=0x5f43, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0x5f42, .value=0x70, .type=IO_READ},
        {.addr=0x5f43, .value=0x0c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01CD) {
    const struct CPU_State initial_cpu = {.pc=0xc453, .a=0x4d, .x=0x9f, .y=0x6a, .sp=0xcc, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xc453, .value=0x70}, {.addr=0xc454, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0xc455, .a=0x4d, .x=0x9f, .y=0x6a, .sp=0xcc, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xc453, .value=0x70}, {.addr=0xc454, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0xc453, .value=0x70, .type=IO_READ},
        {.addr=0xc454, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01CE) {
    const struct CPU_State initial_cpu = {.pc=0xd678, .a=0x33, .x=0xc1, .y=0x09, .sp=0xe8, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xd678, .value=0x70}, {.addr=0xd679, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0xd6ca, .a=0x33, .x=0xc1, .y=0x09, .sp=0xe8, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xd678, .value=0x70}, {.addr=0xd679, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0xd678, .value=0x70, .type=IO_READ},
        {.addr=0xd679, .value=0x50, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01CF) {
    const struct CPU_State initial_cpu = {.pc=0xa5a2, .a=0x12, .x=0x7c, .y=0xce, .sp=0x52, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xa5a2, .value=0x70}, {.addr=0xa5a3, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0xa5a4, .a=0x12, .x=0x7c, .y=0xce, .sp=0x52, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xa5a2, .value=0x70}, {.addr=0xa5a3, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0xa5a2, .value=0x70, .type=IO_READ},
        {.addr=0xa5a3, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01D0) {
    const struct CPU_State initial_cpu = {.pc=0x9825, .a=0xd1, .x=0x20, .y=0xb3, .sp=0xee, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x9825, .value=0x70}, {.addr=0x9826, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0x9827, .a=0xd1, .x=0x20, .y=0xb3, .sp=0xee, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x9825, .value=0x70}, {.addr=0x9826, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0x9825, .value=0x70, .type=IO_READ},
        {.addr=0x9826, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01D1) {
    const struct CPU_State initial_cpu = {.pc=0x6c05, .a=0xec, .x=0x89, .y=0xc8, .sp=0xdb, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x6c05, .value=0x70}, {.addr=0x6c06, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0x6bca, .a=0xec, .x=0x89, .y=0xc8, .sp=0xdb, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x6c05, .value=0x70}, {.addr=0x6c06, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0x6c05, .value=0x70, .type=IO_READ},
        {.addr=0x6c06, .value=0xc3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x8a55, .a=0x22, .x=0x3a, .y=0xbd, .sp=0x0e, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x8a55, .value=0x70}, {.addr=0x8a56, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x8acf, .a=0x22, .x=0x3a, .y=0xbd, .sp=0x0e, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x8a55, .value=0x70}, {.addr=0x8a56, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x8a55, .value=0x70, .type=IO_READ},
        {.addr=0x8a56, .value=0x78, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01D3) {
    const struct CPU_State initial_cpu = {.pc=0xc3a9, .a=0xdd, .x=0x96, .y=0xda, .sp=0xca, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xc3a9, .value=0x70}, {.addr=0xc3aa, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xc331, .a=0xdd, .x=0x96, .y=0xda, .sp=0xca, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xc3a9, .value=0x70}, {.addr=0xc3aa, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xc3a9, .value=0x70, .type=IO_READ},
        {.addr=0xc3aa, .value=0x86, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01D4) {
    const struct CPU_State initial_cpu = {.pc=0xdeff, .a=0xcf, .x=0x06, .y=0x61, .sp=0x4f, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xdeff, .value=0x70}, {.addr=0xdf00, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xdec1, .a=0xcf, .x=0x06, .y=0x61, .sp=0x4f, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xdeff, .value=0x70}, {.addr=0xdf00, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xdeff, .value=0x70, .type=IO_READ},
        {.addr=0xdf00, .value=0xc0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01D5) {
    const struct CPU_State initial_cpu = {.pc=0x55d1, .a=0x29, .x=0xd4, .y=0xfa, .sp=0x77, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x55d1, .value=0x70}, {.addr=0x55d2, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x55d3, .a=0x29, .x=0xd4, .y=0xfa, .sp=0x77, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x55d1, .value=0x70}, {.addr=0x55d2, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x55d1, .value=0x70, .type=IO_READ},
        {.addr=0x55d2, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01D6) {
    const struct CPU_State initial_cpu = {.pc=0x4d53, .a=0x06, .x=0x7a, .y=0x3d, .sp=0x30, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x4d53, .value=0x70}, {.addr=0x4d54, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0x4d55, .a=0x06, .x=0x7a, .y=0x3d, .sp=0x30, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x4d53, .value=0x70}, {.addr=0x4d54, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0x4d53, .value=0x70, .type=IO_READ},
        {.addr=0x4d54, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01D7) {
    const struct CPU_State initial_cpu = {.pc=0x2db7, .a=0x60, .x=0x77, .y=0xb4, .sp=0x40, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x2db7, .value=0x70}, {.addr=0x2db8, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0x2def, .a=0x60, .x=0x77, .y=0xb4, .sp=0x40, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x2db7, .value=0x70}, {.addr=0x2db8, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0x2db7, .value=0x70, .type=IO_READ},
        {.addr=0x2db8, .value=0x36, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01D8) {
    const struct CPU_State initial_cpu = {.pc=0x2a61, .a=0xf2, .x=0xd0, .y=0xd5, .sp=0x36, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x2a61, .value=0x70}, {.addr=0x2a62, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x2a17, .a=0xf2, .x=0xd0, .y=0xd5, .sp=0x36, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x2a61, .value=0x70}, {.addr=0x2a62, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x2a61, .value=0x70, .type=IO_READ},
        {.addr=0x2a62, .value=0xb4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01D9) {
    const struct CPU_State initial_cpu = {.pc=0x3c0b, .a=0x3c, .x=0x34, .y=0x92, .sp=0x18, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x3c0b, .value=0x70}, {.addr=0x3c0c, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x3c0d, .a=0x3c, .x=0x34, .y=0x92, .sp=0x18, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x3c0b, .value=0x70}, {.addr=0x3c0c, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x3c0b, .value=0x70, .type=IO_READ},
        {.addr=0x3c0c, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01DA) {
    const struct CPU_State initial_cpu = {.pc=0x2228, .a=0x8f, .x=0xb3, .y=0xd8, .sp=0xc5, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x2228, .value=0x70}, {.addr=0x2229, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x222a, .a=0x8f, .x=0xb3, .y=0xd8, .sp=0xc5, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x2228, .value=0x70}, {.addr=0x2229, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x2228, .value=0x70, .type=IO_READ},
        {.addr=0x2229, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01DB) {
    const struct CPU_State initial_cpu = {.pc=0xc555, .a=0x83, .x=0x18, .y=0xc4, .sp=0xf2, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xc555, .value=0x70}, {.addr=0xc556, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0xc5c6, .a=0x83, .x=0x18, .y=0xc4, .sp=0xf2, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xc555, .value=0x70}, {.addr=0xc556, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0xc555, .value=0x70, .type=IO_READ},
        {.addr=0xc556, .value=0x6f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x2cf5, .a=0xa6, .x=0x5f, .y=0xb1, .sp=0x33, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x2cf5, .value=0x70}, {.addr=0x2cf6, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x2d0e, .a=0xa6, .x=0x5f, .y=0xb1, .sp=0x33, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x2cf5, .value=0x70}, {.addr=0x2cf6, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x2cf5, .value=0x70, .type=IO_READ},
        {.addr=0x2cf6, .value=0x17, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x12bf, .a=0x16, .x=0x8a, .y=0x45, .sp=0x04, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x12bf, .value=0x70}, {.addr=0x12c0, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0x12c1, .a=0x16, .x=0x8a, .y=0x45, .sp=0x04, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x12bf, .value=0x70}, {.addr=0x12c0, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0x12bf, .value=0x70, .type=IO_READ},
        {.addr=0x12c0, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01DE) {
    const struct CPU_State initial_cpu = {.pc=0xd2a6, .a=0x8b, .x=0x64, .y=0xbf, .sp=0xa7, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xd2a6, .value=0x70}, {.addr=0xd2a7, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0xd2a8, .a=0x8b, .x=0x64, .y=0xbf, .sp=0xa7, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xd2a6, .value=0x70}, {.addr=0xd2a7, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0xd2a6, .value=0x70, .type=IO_READ},
        {.addr=0xd2a7, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01DF) {
    const struct CPU_State initial_cpu = {.pc=0xb87e, .a=0xb8, .x=0xb6, .y=0xbf, .sp=0xb2, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xb87e, .value=0x70}, {.addr=0xb87f, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xb880, .a=0xb8, .x=0xb6, .y=0xbf, .sp=0xb2, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xb87e, .value=0x70}, {.addr=0xb87f, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xb87e, .value=0x70, .type=IO_READ},
        {.addr=0xb87f, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01E0) {
    const struct CPU_State initial_cpu = {.pc=0xd8b6, .a=0x36, .x=0x32, .y=0xcd, .sp=0x0e, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xd8b6, .value=0x70}, {.addr=0xd8b7, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0xd8b8, .a=0x36, .x=0x32, .y=0xcd, .sp=0x0e, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0xd8b6, .value=0x70}, {.addr=0xd8b7, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0xd8b6, .value=0x70, .type=IO_READ},
        {.addr=0xd8b7, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x21fc, .a=0x5d, .x=0x6d, .y=0x68, .sp=0xd0, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x21fc, .value=0x70}, {.addr=0x21fd, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x21fa, .a=0x5d, .x=0x6d, .y=0x68, .sp=0xd0, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x21fc, .value=0x70}, {.addr=0x21fd, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x21fc, .value=0x70, .type=IO_READ},
        {.addr=0x21fd, .value=0xfc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01E2) {
    const struct CPU_State initial_cpu = {.pc=0x896a, .a=0x6d, .x=0x15, .y=0x54, .sp=0x33, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x896a, .value=0x70}, {.addr=0x896b, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0x894d, .a=0x6d, .x=0x15, .y=0x54, .sp=0x33, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x896a, .value=0x70}, {.addr=0x896b, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0x896a, .value=0x70, .type=IO_READ},
        {.addr=0x896b, .value=0xe1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01E3) {
    const struct CPU_State initial_cpu = {.pc=0x5fc2, .a=0xb0, .x=0xd9, .y=0x25, .sp=0x88, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x5fc2, .value=0x70}, {.addr=0x5fc3, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x5fca, .a=0xb0, .x=0xd9, .y=0x25, .sp=0x88, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x5fc2, .value=0x70}, {.addr=0x5fc3, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x5fc2, .value=0x70, .type=IO_READ},
        {.addr=0x5fc3, .value=0x06, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01E4) {
    const struct CPU_State initial_cpu = {.pc=0x354b, .a=0xd1, .x=0xa3, .y=0xf7, .sp=0x42, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x354b, .value=0x70}, {.addr=0x354c, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x34cf, .a=0xd1, .x=0xa3, .y=0xf7, .sp=0x42, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x354b, .value=0x70}, {.addr=0x354c, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x354b, .value=0x70, .type=IO_READ},
        {.addr=0x354c, .value=0x82, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01E5) {
    const struct CPU_State initial_cpu = {.pc=0xa09b, .a=0x6c, .x=0x21, .y=0x27, .sp=0x00, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xa09b, .value=0x70}, {.addr=0xa09c, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xa08a, .a=0x6c, .x=0x21, .y=0x27, .sp=0x00, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0xa09b, .value=0x70}, {.addr=0xa09c, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xa09b, .value=0x70, .type=IO_READ},
        {.addr=0xa09c, .value=0xed, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01E6) {
    const struct CPU_State initial_cpu = {.pc=0xa0db, .a=0x4f, .x=0x45, .y=0x9b, .sp=0x68, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xa0db, .value=0x70}, {.addr=0xa0dc, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0xa0b6, .a=0x4f, .x=0x45, .y=0x9b, .sp=0x68, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xa0db, .value=0x70}, {.addr=0xa0dc, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0xa0db, .value=0x70, .type=IO_READ},
        {.addr=0xa0dc, .value=0xd9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x635e, .a=0x56, .x=0xc3, .y=0x0b, .sp=0xc1, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x635e, .value=0x70}, {.addr=0x635f, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x6334, .a=0x56, .x=0xc3, .y=0x0b, .sp=0xc1, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x635e, .value=0x70}, {.addr=0x635f, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x635e, .value=0x70, .type=IO_READ},
        {.addr=0x635f, .value=0xd4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01E8) {
    const struct CPU_State initial_cpu = {.pc=0x193e, .a=0x29, .x=0x2e, .y=0x08, .sp=0x5f, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x193e, .value=0x70}, {.addr=0x193f, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0x1901, .a=0x29, .x=0x2e, .y=0x08, .sp=0x5f, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x193e, .value=0x70}, {.addr=0x193f, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0x193e, .value=0x70, .type=IO_READ},
        {.addr=0x193f, .value=0xc1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01E9) {
    const struct CPU_State initial_cpu = {.pc=0xc26a, .a=0x9b, .x=0x7d, .y=0x06, .sp=0x3d, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xc26a, .value=0x70}, {.addr=0xc26b, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0xc26c, .a=0x9b, .x=0x7d, .y=0x06, .sp=0x3d, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0xc26a, .value=0x70}, {.addr=0xc26b, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0xc26a, .value=0x70, .type=IO_READ},
        {.addr=0xc26b, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01EA) {
    const struct CPU_State initial_cpu = {.pc=0xc179, .a=0x87, .x=0x60, .y=0x7e, .sp=0x31, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xc179, .value=0x70}, {.addr=0xc17a, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0xc116, .a=0x87, .x=0x60, .y=0x7e, .sp=0x31, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xc179, .value=0x70}, {.addr=0xc17a, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0xc179, .value=0x70, .type=IO_READ},
        {.addr=0xc17a, .value=0x9b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01EB) {
    const struct CPU_State initial_cpu = {.pc=0x34b5, .a=0x5c, .x=0x28, .y=0x31, .sp=0xda, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x34b5, .value=0x70}, {.addr=0x34b6, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0x34b7, .a=0x5c, .x=0x28, .y=0x31, .sp=0xda, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x34b5, .value=0x70}, {.addr=0x34b6, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0x34b5, .value=0x70, .type=IO_READ},
        {.addr=0x34b6, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01EC) {
    const struct CPU_State initial_cpu = {.pc=0x1755, .a=0x36, .x=0x66, .y=0x20, .sp=0xed, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x1755, .value=0x70}, {.addr=0x1756, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x1757, .a=0x36, .x=0x66, .y=0x20, .sp=0xed, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x1755, .value=0x70}, {.addr=0x1756, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x1755, .value=0x70, .type=IO_READ},
        {.addr=0x1756, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01ED) {
    const struct CPU_State initial_cpu = {.pc=0x9c58, .a=0xb6, .x=0x98, .y=0xf5, .sp=0x35, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x9c58, .value=0x70}, {.addr=0x9c59, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0x9c0c, .a=0xb6, .x=0x98, .y=0xf5, .sp=0x35, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x9c58, .value=0x70}, {.addr=0x9c59, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0x9c58, .value=0x70, .type=IO_READ},
        {.addr=0x9c59, .value=0xb2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01EE) {
    const struct CPU_State initial_cpu = {.pc=0xb3c7, .a=0xab, .x=0x03, .y=0x7b, .sp=0x97, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xb3c7, .value=0x70}, {.addr=0xb3c8, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0xb3c9, .a=0xab, .x=0x03, .y=0x7b, .sp=0x97, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xb3c7, .value=0x70}, {.addr=0xb3c8, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0xb3c7, .value=0x70, .type=IO_READ},
        {.addr=0xb3c8, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01EF) {
    const struct CPU_State initial_cpu = {.pc=0x7dbd, .a=0xa3, .x=0x7c, .y=0x7b, .sp=0x45, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x7dbd, .value=0x70}, {.addr=0x7dbe, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0x7d62, .a=0xa3, .x=0x7c, .y=0x7b, .sp=0x45, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x7dbd, .value=0x70}, {.addr=0x7dbe, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0x7dbd, .value=0x70, .type=IO_READ},
        {.addr=0x7dbe, .value=0xa3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01F0) {
    const struct CPU_State initial_cpu = {.pc=0x802a, .a=0xfc, .x=0x93, .y=0xc4, .sp=0xd0, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x802a, .value=0x70}, {.addr=0x802b, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0x8045, .a=0xfc, .x=0x93, .y=0xc4, .sp=0xd0, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x802a, .value=0x70}, {.addr=0x802b, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0x802a, .value=0x70, .type=IO_READ},
        {.addr=0x802b, .value=0x19, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01F1) {
    const struct CPU_State initial_cpu = {.pc=0x731a, .a=0x76, .x=0xfc, .y=0x35, .sp=0x67, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x731a, .value=0x70}, {.addr=0x731b, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x7329, .a=0x76, .x=0xfc, .y=0x35, .sp=0x67, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x731a, .value=0x70}, {.addr=0x731b, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x731a, .value=0x70, .type=IO_READ},
        {.addr=0x731b, .value=0x0d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01F2) {
    const struct CPU_State initial_cpu = {.pc=0xcc02, .a=0x4f, .x=0x58, .y=0xb9, .sp=0xbb, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xcc02, .value=0x70}, {.addr=0xcc03, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0xcc04, .a=0x4f, .x=0x58, .y=0xb9, .sp=0xbb, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0xcc02, .value=0x70}, {.addr=0xcc03, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0xcc02, .value=0x70, .type=IO_READ},
        {.addr=0xcc03, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01F3) {
    const struct CPU_State initial_cpu = {.pc=0x54d3, .a=0xca, .x=0xd3, .y=0xc6, .sp=0x5b, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x54d3, .value=0x70}, {.addr=0x54d4, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x54d5, .a=0xca, .x=0xd3, .y=0xc6, .sp=0x5b, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x54d3, .value=0x70}, {.addr=0x54d4, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x54d3, .value=0x70, .type=IO_READ},
        {.addr=0x54d4, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01F4) {
    const struct CPU_State initial_cpu = {.pc=0x1870, .a=0xb4, .x=0xf0, .y=0x5c, .sp=0xf6, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x1870, .value=0x70}, {.addr=0x1871, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x18aa, .a=0xb4, .x=0xf0, .y=0x5c, .sp=0xf6, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x1870, .value=0x70}, {.addr=0x1871, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x1870, .value=0x70, .type=IO_READ},
        {.addr=0x1871, .value=0x38, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01F5) {
    const struct CPU_State initial_cpu = {.pc=0x1a04, .a=0x01, .x=0xe9, .y=0xfd, .sp=0x39, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x1a04, .value=0x70}, {.addr=0x1a05, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x1a06, .a=0x01, .x=0xe9, .y=0xfd, .sp=0x39, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x1a04, .value=0x70}, {.addr=0x1a05, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x1a04, .value=0x70, .type=IO_READ},
        {.addr=0x1a05, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01F6) {
    const struct CPU_State initial_cpu = {.pc=0x68e6, .a=0x15, .x=0x26, .y=0x2c, .sp=0xe5, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x68e6, .value=0x70}, {.addr=0x68e7, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0x68e8, .a=0x15, .x=0x26, .y=0x2c, .sp=0xe5, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x68e6, .value=0x70}, {.addr=0x68e7, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0x68e6, .value=0x70, .type=IO_READ},
        {.addr=0x68e7, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01F7) {
    const struct CPU_State initial_cpu = {.pc=0x07fa, .a=0xe7, .x=0xcc, .y=0xf4, .sp=0x16, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x07fa, .value=0x70}, {.addr=0x07fb, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0x07f2, .a=0xe7, .x=0xcc, .y=0xf4, .sp=0x16, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x07fa, .value=0x70}, {.addr=0x07fb, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0x07fa, .value=0x70, .type=IO_READ},
        {.addr=0x07fb, .value=0xf6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01F8) {
    const struct CPU_State initial_cpu = {.pc=0x206e, .a=0x69, .x=0x25, .y=0xda, .sp=0xcb, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x206e, .value=0x70}, {.addr=0x206f, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0x2070, .a=0x69, .x=0x25, .y=0xda, .sp=0xcb, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x206e, .value=0x70}, {.addr=0x206f, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0x206e, .value=0x70, .type=IO_READ},
        {.addr=0x206f, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x71ff, .a=0x74, .x=0xea, .y=0x4f, .sp=0x38, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x71ff, .value=0x70}, {.addr=0x7200, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x7201, .a=0x74, .x=0xea, .y=0x4f, .sp=0x38, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x71ff, .value=0x70}, {.addr=0x7200, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x71ff, .value=0x70, .type=IO_READ},
        {.addr=0x7200, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01FA) {
    const struct CPU_State initial_cpu = {.pc=0x0d03, .a=0x39, .x=0xad, .y=0x39, .sp=0x45, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x0d03, .value=0x70}, {.addr=0x0d04, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0x0cbc, .a=0x39, .x=0xad, .y=0x39, .sp=0x45, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x0d03, .value=0x70}, {.addr=0x0d04, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0x0d03, .value=0x70, .type=IO_READ},
        {.addr=0x0d04, .value=0xb7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01FB) {
    const struct CPU_State initial_cpu = {.pc=0xa8b2, .a=0xed, .x=0x43, .y=0xf6, .sp=0xb6, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xa8b2, .value=0x70}, {.addr=0xa8b3, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0xa85d, .a=0xed, .x=0x43, .y=0xf6, .sp=0xb6, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0xa8b2, .value=0x70}, {.addr=0xa8b3, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0xa8b2, .value=0x70, .type=IO_READ},
        {.addr=0xa8b3, .value=0xa9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01FC) {
    const struct CPU_State initial_cpu = {.pc=0xe5e3, .a=0x2f, .x=0x65, .y=0xae, .sp=0xf2, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xe5e3, .value=0x70}, {.addr=0xe5e4, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0xe623, .a=0x2f, .x=0x65, .y=0xae, .sp=0xf2, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xe5e3, .value=0x70}, {.addr=0xe5e4, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0xe5e3, .value=0x70, .type=IO_READ},
        {.addr=0xe5e4, .value=0x3e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01FD) {
    const struct CPU_State initial_cpu = {.pc=0xfc62, .a=0x80, .x=0x9b, .y=0x77, .sp=0xd7, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xfc62, .value=0x70}, {.addr=0xfc63, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0xfc0f, .a=0x80, .x=0x9b, .y=0x77, .sp=0xd7, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0xfc62, .value=0x70}, {.addr=0xfc63, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0xfc62, .value=0x70, .type=IO_READ},
        {.addr=0xfc63, .value=0xab, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01FE) {
    const struct CPU_State initial_cpu = {.pc=0x79ec, .a=0x32, .x=0xfc, .y=0x6c, .sp=0xd6, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x79ec, .value=0x70}, {.addr=0x79ed, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0x79c4, .a=0x32, .x=0xfc, .y=0x6c, .sp=0xd6, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x79ec, .value=0x70}, {.addr=0x79ed, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0x79ec, .value=0x70, .type=IO_READ},
        {.addr=0x79ed, .value=0xd6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x38c2, .a=0x40, .x=0xf7, .y=0x5c, .sp=0x43, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x38c2, .value=0x70}, {.addr=0x38c3, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0x38ff, .a=0x40, .x=0xf7, .y=0x5c, .sp=0x43, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x38c2, .value=0x70}, {.addr=0x38c3, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0x38c2, .value=0x70, .type=IO_READ},
        {.addr=0x38c3, .value=0x3b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0200) {
    const struct CPU_State initial_cpu = {.pc=0x8451, .a=0x6b, .x=0xfb, .y=0x36, .sp=0x89, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x8451, .value=0x70}, {.addr=0x8452, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x8453, .a=0x6b, .x=0xfb, .y=0x36, .sp=0x89, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x8451, .value=0x70}, {.addr=0x8452, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x8451, .value=0x70, .type=IO_READ},
        {.addr=0x8452, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0201) {
    const struct CPU_State initial_cpu = {.pc=0x060b, .a=0x73, .x=0xaa, .y=0x35, .sp=0x27, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x060b, .value=0x70}, {.addr=0x060c, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0x060d, .a=0x73, .x=0xaa, .y=0x35, .sp=0x27, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x060b, .value=0x70}, {.addr=0x060c, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0x060b, .value=0x70, .type=IO_READ},
        {.addr=0x060c, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0202) {
    const struct CPU_State initial_cpu = {.pc=0xb15c, .a=0x38, .x=0xe6, .y=0x6b, .sp=0x81, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xb15c, .value=0x70}, {.addr=0xb15d, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0xb15e, .a=0x38, .x=0xe6, .y=0x6b, .sp=0x81, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xb15c, .value=0x70}, {.addr=0xb15d, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0xb15c, .value=0x70, .type=IO_READ},
        {.addr=0xb15d, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0203) {
    const struct CPU_State initial_cpu = {.pc=0xe724, .a=0xc3, .x=0x9d, .y=0x8b, .sp=0xff, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xe724, .value=0x70}, {.addr=0xe725, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0xe726, .a=0xc3, .x=0x9d, .y=0x8b, .sp=0xff, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xe724, .value=0x70}, {.addr=0xe725, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0xe724, .value=0x70, .type=IO_READ},
        {.addr=0xe725, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0204) {
    const struct CPU_State initial_cpu = {.pc=0x5c15, .a=0x5a, .x=0x78, .y=0xa5, .sp=0x48, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x5c15, .value=0x70}, {.addr=0x5c16, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0x5b9f, .a=0x5a, .x=0x78, .y=0xa5, .sp=0x48, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x5c15, .value=0x70}, {.addr=0x5c16, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0x5c15, .value=0x70, .type=IO_READ},
        {.addr=0x5c16, .value=0x88, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0205) {
    const struct CPU_State initial_cpu = {.pc=0xf49e, .a=0xc5, .x=0x17, .y=0xdf, .sp=0x6c, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xf49e, .value=0x70}, {.addr=0xf49f, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0xf4a0, .a=0xc5, .x=0x17, .y=0xdf, .sp=0x6c, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xf49e, .value=0x70}, {.addr=0xf49f, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0xf49e, .value=0x70, .type=IO_READ},
        {.addr=0xf49f, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0206) {
    const struct CPU_State initial_cpu = {.pc=0x7006, .a=0x7b, .x=0x4b, .y=0x63, .sp=0xf9, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x7006, .value=0x70}, {.addr=0x7007, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0x7008, .a=0x7b, .x=0x4b, .y=0x63, .sp=0xf9, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x7006, .value=0x70}, {.addr=0x7007, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0x7006, .value=0x70, .type=IO_READ},
        {.addr=0x7007, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0207) {
    const struct CPU_State initial_cpu = {.pc=0x7d85, .a=0x65, .x=0x35, .y=0x49, .sp=0x49, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x7d85, .value=0x70}, {.addr=0x7d86, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0x7d87, .a=0x65, .x=0x35, .y=0x49, .sp=0x49, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x7d85, .value=0x70}, {.addr=0x7d86, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0x7d85, .value=0x70, .type=IO_READ},
        {.addr=0x7d86, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0208) {
    const struct CPU_State initial_cpu = {.pc=0x0fcc, .a=0xd9, .x=0x6d, .y=0x62, .sp=0x4a, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x0fcc, .value=0x70}, {.addr=0x0fcd, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x1043, .a=0xd9, .x=0x6d, .y=0x62, .sp=0x4a, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x0fcc, .value=0x70}, {.addr=0x0fcd, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x0fcc, .value=0x70, .type=IO_READ},
        {.addr=0x0fcd, .value=0x75, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0209) {
    const struct CPU_State initial_cpu = {.pc=0x5ca7, .a=0x3e, .x=0x8f, .y=0xe4, .sp=0x74, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x5ca7, .value=0x70}, {.addr=0x5ca8, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0x5d04, .a=0x3e, .x=0x8f, .y=0xe4, .sp=0x74, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x5ca7, .value=0x70}, {.addr=0x5ca8, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0x5ca7, .value=0x70, .type=IO_READ},
        {.addr=0x5ca8, .value=0x5b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_020A) {
    const struct CPU_State initial_cpu = {.pc=0x4101, .a=0x8f, .x=0x8e, .y=0x95, .sp=0x50, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x4101, .value=0x70}, {.addr=0x4102, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x40a2, .a=0x8f, .x=0x8e, .y=0x95, .sp=0x50, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x4101, .value=0x70}, {.addr=0x4102, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x4101, .value=0x70, .type=IO_READ},
        {.addr=0x4102, .value=0x9f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_020B) {
    const struct CPU_State initial_cpu = {.pc=0xbdf3, .a=0x5d, .x=0xba, .y=0xfc, .sp=0xeb, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xbdf3, .value=0x70}, {.addr=0xbdf4, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0xbdf5, .a=0x5d, .x=0xba, .y=0xfc, .sp=0xeb, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0xbdf3, .value=0x70}, {.addr=0xbdf4, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0xbdf3, .value=0x70, .type=IO_READ},
        {.addr=0xbdf4, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_020C) {
    const struct CPU_State initial_cpu = {.pc=0x85ce, .a=0x3d, .x=0xe0, .y=0xe3, .sp=0x08, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x85ce, .value=0x70}, {.addr=0x85cf, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x85d0, .a=0x3d, .x=0xe0, .y=0xe3, .sp=0x08, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x85ce, .value=0x70}, {.addr=0x85cf, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x85ce, .value=0x70, .type=IO_READ},
        {.addr=0x85cf, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_020D) {
    const struct CPU_State initial_cpu = {.pc=0xa607, .a=0x13, .x=0x83, .y=0x02, .sp=0x5d, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xa607, .value=0x70}, {.addr=0xa608, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa5b7, .a=0x13, .x=0x83, .y=0x02, .sp=0x5d, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0xa607, .value=0x70}, {.addr=0xa608, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa607, .value=0x70, .type=IO_READ},
        {.addr=0xa608, .value=0xae, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_020E) {
    const struct CPU_State initial_cpu = {.pc=0xd864, .a=0x7a, .x=0x18, .y=0x2e, .sp=0x1a, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xd864, .value=0x70}, {.addr=0xd865, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0xd8a7, .a=0x7a, .x=0x18, .y=0x2e, .sp=0x1a, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0xd864, .value=0x70}, {.addr=0xd865, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0xd864, .value=0x70, .type=IO_READ},
        {.addr=0xd865, .value=0x41, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_020F) {
    const struct CPU_State initial_cpu = {.pc=0xe755, .a=0xc7, .x=0x19, .y=0xf8, .sp=0xa5, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xe755, .value=0x70}, {.addr=0xe756, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0xe799, .a=0xc7, .x=0x19, .y=0xf8, .sp=0xa5, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0xe755, .value=0x70}, {.addr=0xe756, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0xe755, .value=0x70, .type=IO_READ},
        {.addr=0xe756, .value=0x42, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0210) {
    const struct CPU_State initial_cpu = {.pc=0x347e, .a=0x28, .x=0x96, .y=0xc6, .sp=0x7d, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x347e, .value=0x70}, {.addr=0x347f, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0x3480, .a=0x28, .x=0x96, .y=0xc6, .sp=0x7d, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x347e, .value=0x70}, {.addr=0x347f, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0x347e, .value=0x70, .type=IO_READ},
        {.addr=0x347f, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0211) {
    const struct CPU_State initial_cpu = {.pc=0x48a2, .a=0x04, .x=0x1a, .y=0x3b, .sp=0x1e, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x48a2, .value=0x70}, {.addr=0x48a3, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0x4876, .a=0x04, .x=0x1a, .y=0x3b, .sp=0x1e, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x48a2, .value=0x70}, {.addr=0x48a3, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0x48a2, .value=0x70, .type=IO_READ},
        {.addr=0x48a3, .value=0xd2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0212) {
    const struct CPU_State initial_cpu = {.pc=0x554d, .a=0xbb, .x=0x69, .y=0x6f, .sp=0xc7, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x554d, .value=0x70}, {.addr=0x554e, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x554f, .a=0xbb, .x=0x69, .y=0x6f, .sp=0xc7, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x554d, .value=0x70}, {.addr=0x554e, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x554d, .value=0x70, .type=IO_READ},
        {.addr=0x554e, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0213) {
    const struct CPU_State initial_cpu = {.pc=0x1b76, .a=0xc2, .x=0x7a, .y=0x23, .sp=0xd4, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x1b76, .value=0x70}, {.addr=0x1b77, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x1b19, .a=0xc2, .x=0x7a, .y=0x23, .sp=0xd4, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x1b76, .value=0x70}, {.addr=0x1b77, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x1b76, .value=0x70, .type=IO_READ},
        {.addr=0x1b77, .value=0xa1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0214) {
    const struct CPU_State initial_cpu = {.pc=0x369c, .a=0x99, .x=0x7b, .y=0x6c, .sp=0x0b, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x369c, .value=0x70}, {.addr=0x369d, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0x3690, .a=0x99, .x=0x7b, .y=0x6c, .sp=0x0b, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x369c, .value=0x70}, {.addr=0x369d, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0x369c, .value=0x70, .type=IO_READ},
        {.addr=0x369d, .value=0xf2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0215) {
    const struct CPU_State initial_cpu = {.pc=0xc05d, .a=0x1a, .x=0xd1, .y=0x68, .sp=0x2d, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xc05d, .value=0x70}, {.addr=0xc05e, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0xc05f, .a=0x1a, .x=0xd1, .y=0x68, .sp=0x2d, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0xc05d, .value=0x70}, {.addr=0xc05e, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0xc05d, .value=0x70, .type=IO_READ},
        {.addr=0xc05e, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0216) {
    const struct CPU_State initial_cpu = {.pc=0xb306, .a=0x82, .x=0xa4, .y=0x38, .sp=0x94, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xb306, .value=0x70}, {.addr=0xb307, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0xb308, .a=0x82, .x=0xa4, .y=0x38, .sp=0x94, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0xb306, .value=0x70}, {.addr=0xb307, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0xb306, .value=0x70, .type=IO_READ},
        {.addr=0xb307, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0217) {
    const struct CPU_State initial_cpu = {.pc=0xae65, .a=0x9f, .x=0x7d, .y=0x30, .sp=0x3a, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xae65, .value=0x70}, {.addr=0xae66, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0xae81, .a=0x9f, .x=0x7d, .y=0x30, .sp=0x3a, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0xae65, .value=0x70}, {.addr=0xae66, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0xae65, .value=0x70, .type=IO_READ},
        {.addr=0xae66, .value=0x1a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0218) {
    const struct CPU_State initial_cpu = {.pc=0x9613, .a=0x36, .x=0xe9, .y=0x30, .sp=0xba, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x9613, .value=0x70}, {.addr=0x9614, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x9615, .a=0x36, .x=0xe9, .y=0x30, .sp=0xba, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x9613, .value=0x70}, {.addr=0x9614, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x9613, .value=0x70, .type=IO_READ},
        {.addr=0x9614, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0219) {
    const struct CPU_State initial_cpu = {.pc=0x7ae6, .a=0x73, .x=0x27, .y=0x62, .sp=0x56, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x7ae6, .value=0x70}, {.addr=0x7ae7, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x7a95, .a=0x73, .x=0x27, .y=0x62, .sp=0x56, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x7ae6, .value=0x70}, {.addr=0x7ae7, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x7ae6, .value=0x70, .type=IO_READ},
        {.addr=0x7ae7, .value=0xad, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_021A) {
    const struct CPU_State initial_cpu = {.pc=0x40bb, .a=0x51, .x=0xcc, .y=0x19, .sp=0x98, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x40bb, .value=0x70}, {.addr=0x40bc, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0x404c, .a=0x51, .x=0xcc, .y=0x19, .sp=0x98, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x40bb, .value=0x70}, {.addr=0x40bc, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0x40bb, .value=0x70, .type=IO_READ},
        {.addr=0x40bc, .value=0x8f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_021B) {
    const struct CPU_State initial_cpu = {.pc=0x95a4, .a=0x1a, .x=0xef, .y=0xb3, .sp=0x7d, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x95a4, .value=0x70}, {.addr=0x95a5, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x95a6, .a=0x1a, .x=0xef, .y=0xb3, .sp=0x7d, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x95a4, .value=0x70}, {.addr=0x95a5, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x95a4, .value=0x70, .type=IO_READ},
        {.addr=0x95a5, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_021C) {
    const struct CPU_State initial_cpu = {.pc=0x0ecd, .a=0xd7, .x=0x63, .y=0x14, .sp=0xf6, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x0ecd, .value=0x70}, {.addr=0x0ece, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0x0e96, .a=0xd7, .x=0x63, .y=0x14, .sp=0xf6, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x0ecd, .value=0x70}, {.addr=0x0ece, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0x0ecd, .value=0x70, .type=IO_READ},
        {.addr=0x0ece, .value=0xc7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_021D) {
    const struct CPU_State initial_cpu = {.pc=0xf0b4, .a=0x2e, .x=0x6b, .y=0xcd, .sp=0x53, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xf0b4, .value=0x70}, {.addr=0xf0b5, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0xf0b6, .a=0x2e, .x=0x6b, .y=0xcd, .sp=0x53, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0xf0b4, .value=0x70}, {.addr=0xf0b5, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0xf0b4, .value=0x70, .type=IO_READ},
        {.addr=0xf0b5, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_021E) {
    const struct CPU_State initial_cpu = {.pc=0x7b93, .a=0xa4, .x=0x75, .y=0x01, .sp=0x98, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x7b93, .value=0x70}, {.addr=0x7b94, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0x7b95, .a=0xa4, .x=0x75, .y=0x01, .sp=0x98, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x7b93, .value=0x70}, {.addr=0x7b94, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0x7b93, .value=0x70, .type=IO_READ},
        {.addr=0x7b94, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_021F) {
    const struct CPU_State initial_cpu = {.pc=0xf806, .a=0x34, .x=0x4e, .y=0xc6, .sp=0xd4, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xf806, .value=0x70}, {.addr=0xf807, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0xf799, .a=0x34, .x=0x4e, .y=0xc6, .sp=0xd4, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0xf806, .value=0x70}, {.addr=0xf807, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0xf806, .value=0x70, .type=IO_READ},
        {.addr=0xf807, .value=0x91, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0220) {
    const struct CPU_State initial_cpu = {.pc=0x9f93, .a=0x58, .x=0x22, .y=0xec, .sp=0xa1, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x9f93, .value=0x70}, {.addr=0x9f94, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0x9fa6, .a=0x58, .x=0x22, .y=0xec, .sp=0xa1, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x9f93, .value=0x70}, {.addr=0x9f94, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0x9f93, .value=0x70, .type=IO_READ},
        {.addr=0x9f94, .value=0x11, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0221) {
    const struct CPU_State initial_cpu = {.pc=0x19ba, .a=0x06, .x=0x55, .y=0x15, .sp=0x6f, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x19ba, .value=0x70}, {.addr=0x19bb, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0x19bc, .a=0x06, .x=0x55, .y=0x15, .sp=0x6f, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x19ba, .value=0x70}, {.addr=0x19bb, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0x19ba, .value=0x70, .type=IO_READ},
        {.addr=0x19bb, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0222) {
    const struct CPU_State initial_cpu = {.pc=0x5e10, .a=0xc2, .x=0x85, .y=0x65, .sp=0x30, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x5e10, .value=0x70}, {.addr=0x5e11, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x5e12, .a=0xc2, .x=0x85, .y=0x65, .sp=0x30, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x5e10, .value=0x70}, {.addr=0x5e11, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x5e10, .value=0x70, .type=IO_READ},
        {.addr=0x5e11, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0223) {
    const struct CPU_State initial_cpu = {.pc=0xf002, .a=0xb9, .x=0xc6, .y=0x05, .sp=0x54, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xf002, .value=0x70}, {.addr=0xf003, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0xf004, .a=0xb9, .x=0xc6, .y=0x05, .sp=0x54, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xf002, .value=0x70}, {.addr=0xf003, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0xf002, .value=0x70, .type=IO_READ},
        {.addr=0xf003, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0224) {
    const struct CPU_State initial_cpu = {.pc=0xe33b, .a=0xa4, .x=0x4a, .y=0x24, .sp=0x1b, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xe33b, .value=0x70}, {.addr=0xe33c, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0xe311, .a=0xa4, .x=0x4a, .y=0x24, .sp=0x1b, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xe33b, .value=0x70}, {.addr=0xe33c, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0xe33b, .value=0x70, .type=IO_READ},
        {.addr=0xe33c, .value=0xd4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0225) {
    const struct CPU_State initial_cpu = {.pc=0x4c14, .a=0x8e, .x=0x04, .y=0xea, .sp=0x6d, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x4c14, .value=0x70}, {.addr=0x4c15, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0x4ba5, .a=0x8e, .x=0x04, .y=0xea, .sp=0x6d, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x4c14, .value=0x70}, {.addr=0x4c15, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0x4c14, .value=0x70, .type=IO_READ},
        {.addr=0x4c15, .value=0x8f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0226) {
    const struct CPU_State initial_cpu = {.pc=0x426a, .a=0xc5, .x=0x6a, .y=0x1e, .sp=0x4a, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x426a, .value=0x70}, {.addr=0x426b, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x426c, .a=0xc5, .x=0x6a, .y=0x1e, .sp=0x4a, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x426a, .value=0x70}, {.addr=0x426b, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x426a, .value=0x70, .type=IO_READ},
        {.addr=0x426b, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0227) {
    const struct CPU_State initial_cpu = {.pc=0x2473, .a=0x6b, .x=0xa7, .y=0x1a, .sp=0xa9, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x2473, .value=0x70}, {.addr=0x2474, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x2475, .a=0x6b, .x=0xa7, .y=0x1a, .sp=0xa9, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x2473, .value=0x70}, {.addr=0x2474, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x2473, .value=0x70, .type=IO_READ},
        {.addr=0x2474, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0228) {
    const struct CPU_State initial_cpu = {.pc=0x7e7e, .a=0xf0, .x=0x07, .y=0xc2, .sp=0x0f, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x7e7e, .value=0x70}, {.addr=0x7e7f, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x7e80, .a=0xf0, .x=0x07, .y=0xc2, .sp=0x0f, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x7e7e, .value=0x70}, {.addr=0x7e7f, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x7e7e, .value=0x70, .type=IO_READ},
        {.addr=0x7e7f, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0229) {
    const struct CPU_State initial_cpu = {.pc=0xc601, .a=0x7b, .x=0x9e, .y=0xe4, .sp=0x0a, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xc601, .value=0x70}, {.addr=0xc602, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xc5c9, .a=0x7b, .x=0x9e, .y=0xe4, .sp=0x0a, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xc601, .value=0x70}, {.addr=0xc602, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xc601, .value=0x70, .type=IO_READ},
        {.addr=0xc602, .value=0xc6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_022A) {
    const struct CPU_State initial_cpu = {.pc=0x4671, .a=0x77, .x=0xd6, .y=0x2b, .sp=0xfd, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x4671, .value=0x70}, {.addr=0x4672, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x4673, .a=0x77, .x=0xd6, .y=0x2b, .sp=0xfd, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x4671, .value=0x70}, {.addr=0x4672, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x4671, .value=0x70, .type=IO_READ},
        {.addr=0x4672, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_022B) {
    const struct CPU_State initial_cpu = {.pc=0xca58, .a=0x74, .x=0x7a, .y=0x12, .sp=0xcf, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xca58, .value=0x70}, {.addr=0xca59, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0xca5a, .a=0x74, .x=0x7a, .y=0x12, .sp=0xcf, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xca58, .value=0x70}, {.addr=0xca59, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0xca58, .value=0x70, .type=IO_READ},
        {.addr=0xca59, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_022C) {
    const struct CPU_State initial_cpu = {.pc=0x10b7, .a=0xa6, .x=0x5f, .y=0x14, .sp=0x28, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x10b7, .value=0x70}, {.addr=0x10b8, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x103f, .a=0xa6, .x=0x5f, .y=0x14, .sp=0x28, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x10b7, .value=0x70}, {.addr=0x10b8, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x10b7, .value=0x70, .type=IO_READ},
        {.addr=0x10b8, .value=0x86, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_022D) {
    const struct CPU_State initial_cpu = {.pc=0x88cf, .a=0x15, .x=0x4c, .y=0xa9, .sp=0x75, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x88cf, .value=0x70}, {.addr=0x88d0, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x8901, .a=0x15, .x=0x4c, .y=0xa9, .sp=0x75, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x88cf, .value=0x70}, {.addr=0x88d0, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x88cf, .value=0x70, .type=IO_READ},
        {.addr=0x88d0, .value=0x30, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_022E) {
    const struct CPU_State initial_cpu = {.pc=0x15c6, .a=0x1e, .x=0x9a, .y=0x77, .sp=0xe4, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x15c6, .value=0x70}, {.addr=0x15c7, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0x15c8, .a=0x1e, .x=0x9a, .y=0x77, .sp=0xe4, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x15c6, .value=0x70}, {.addr=0x15c7, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0x15c6, .value=0x70, .type=IO_READ},
        {.addr=0x15c7, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_022F) {
    const struct CPU_State initial_cpu = {.pc=0x9079, .a=0xda, .x=0x4b, .y=0x48, .sp=0x3f, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x9079, .value=0x70}, {.addr=0x907a, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x9015, .a=0xda, .x=0x4b, .y=0x48, .sp=0x3f, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x9079, .value=0x70}, {.addr=0x907a, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x9079, .value=0x70, .type=IO_READ},
        {.addr=0x907a, .value=0x9a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0230) {
    const struct CPU_State initial_cpu = {.pc=0x5d04, .a=0xc3, .x=0xa9, .y=0x6c, .sp=0x5f, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x5d04, .value=0x70}, {.addr=0x5d05, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0x5cf0, .a=0xc3, .x=0xa9, .y=0x6c, .sp=0x5f, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x5d04, .value=0x70}, {.addr=0x5d05, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0x5d04, .value=0x70, .type=IO_READ},
        {.addr=0x5d05, .value=0xea, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0231) {
    const struct CPU_State initial_cpu = {.pc=0x9877, .a=0xa5, .x=0x23, .y=0x52, .sp=0x83, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x9877, .value=0x70}, {.addr=0x9878, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x989f, .a=0xa5, .x=0x23, .y=0x52, .sp=0x83, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x9877, .value=0x70}, {.addr=0x9878, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x9877, .value=0x70, .type=IO_READ},
        {.addr=0x9878, .value=0x26, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0232) {
    const struct CPU_State initial_cpu = {.pc=0x2d17, .a=0x16, .x=0x16, .y=0x3b, .sp=0xab, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x2d17, .value=0x70}, {.addr=0x2d18, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x2d19, .a=0x16, .x=0x16, .y=0x3b, .sp=0xab, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x2d17, .value=0x70}, {.addr=0x2d18, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x2d17, .value=0x70, .type=IO_READ},
        {.addr=0x2d18, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0233) {
    const struct CPU_State initial_cpu = {.pc=0x1b98, .a=0x1b, .x=0x36, .y=0x67, .sp=0x51, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x1b98, .value=0x70}, {.addr=0x1b99, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x1b9a, .a=0x1b, .x=0x36, .y=0x67, .sp=0x51, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x1b98, .value=0x70}, {.addr=0x1b99, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x1b98, .value=0x70, .type=IO_READ},
        {.addr=0x1b99, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0234) {
    const struct CPU_State initial_cpu = {.pc=0xf0c2, .a=0x31, .x=0xf3, .y=0xa9, .sp=0xa2, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xf0c2, .value=0x70}, {.addr=0xf0c3, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0xf0c4, .a=0x31, .x=0xf3, .y=0xa9, .sp=0xa2, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xf0c2, .value=0x70}, {.addr=0xf0c3, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0xf0c2, .value=0x70, .type=IO_READ},
        {.addr=0xf0c3, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0235) {
    const struct CPU_State initial_cpu = {.pc=0x30c0, .a=0x00, .x=0x75, .y=0xb3, .sp=0x75, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x30c0, .value=0x70}, {.addr=0x30c1, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0x30f0, .a=0x00, .x=0x75, .y=0xb3, .sp=0x75, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x30c0, .value=0x70}, {.addr=0x30c1, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0x30c0, .value=0x70, .type=IO_READ},
        {.addr=0x30c1, .value=0x2e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0236) {
    const struct CPU_State initial_cpu = {.pc=0xc62a, .a=0xf1, .x=0xc0, .y=0xd1, .sp=0xa6, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xc62a, .value=0x70}, {.addr=0xc62b, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0xc677, .a=0xf1, .x=0xc0, .y=0xd1, .sp=0xa6, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xc62a, .value=0x70}, {.addr=0xc62b, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0xc62a, .value=0x70, .type=IO_READ},
        {.addr=0xc62b, .value=0x4b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0237) {
    const struct CPU_State initial_cpu = {.pc=0xfbe6, .a=0x20, .x=0x5a, .y=0xe7, .sp=0x8c, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xfbe6, .value=0x70}, {.addr=0xfbe7, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xfbe8, .a=0x20, .x=0x5a, .y=0xe7, .sp=0x8c, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xfbe6, .value=0x70}, {.addr=0xfbe7, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xfbe6, .value=0x70, .type=IO_READ},
        {.addr=0xfbe7, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0238) {
    const struct CPU_State initial_cpu = {.pc=0xf118, .a=0xed, .x=0x64, .y=0x40, .sp=0x01, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xf118, .value=0x70}, {.addr=0xf119, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0xf11a, .a=0xed, .x=0x64, .y=0x40, .sp=0x01, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xf118, .value=0x70}, {.addr=0xf119, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0xf118, .value=0x70, .type=IO_READ},
        {.addr=0xf119, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0239) {
    const struct CPU_State initial_cpu = {.pc=0x47bb, .a=0x32, .x=0x66, .y=0x2d, .sp=0xdc, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x47bb, .value=0x70}, {.addr=0x47bc, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x477d, .a=0x32, .x=0x66, .y=0x2d, .sp=0xdc, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x47bb, .value=0x70}, {.addr=0x47bc, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x47bb, .value=0x70, .type=IO_READ},
        {.addr=0x47bc, .value=0xc0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_023A) {
    const struct CPU_State initial_cpu = {.pc=0xe353, .a=0x0a, .x=0xfb, .y=0x42, .sp=0x18, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xe353, .value=0x70}, {.addr=0xe354, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0xe309, .a=0x0a, .x=0xfb, .y=0x42, .sp=0x18, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0xe353, .value=0x70}, {.addr=0xe354, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0xe353, .value=0x70, .type=IO_READ},
        {.addr=0xe354, .value=0xb4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_023B) {
    const struct CPU_State initial_cpu = {.pc=0x0349, .a=0xea, .x=0x87, .y=0xf5, .sp=0x84, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x0349, .value=0x70}, {.addr=0x034a, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0x0357, .a=0xea, .x=0x87, .y=0xf5, .sp=0x84, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x0349, .value=0x70}, {.addr=0x034a, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0x0349, .value=0x70, .type=IO_READ},
        {.addr=0x034a, .value=0x0c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_023C) {
    const struct CPU_State initial_cpu = {.pc=0x099a, .a=0xde, .x=0x7d, .y=0x86, .sp=0x26, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x099a, .value=0x70}, {.addr=0x099b, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0x099c, .a=0xde, .x=0x7d, .y=0x86, .sp=0x26, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x099a, .value=0x70}, {.addr=0x099b, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0x099a, .value=0x70, .type=IO_READ},
        {.addr=0x099b, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_023D) {
    const struct CPU_State initial_cpu = {.pc=0xfbb0, .a=0x45, .x=0xd6, .y=0x67, .sp=0xd5, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xfbb0, .value=0x70}, {.addr=0xfbb1, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0xfb65, .a=0x45, .x=0xd6, .y=0x67, .sp=0xd5, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0xfbb0, .value=0x70}, {.addr=0xfbb1, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0xfbb0, .value=0x70, .type=IO_READ},
        {.addr=0xfbb1, .value=0xb3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_023E) {
    const struct CPU_State initial_cpu = {.pc=0xd933, .a=0x24, .x=0x39, .y=0x1d, .sp=0x5f, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xd933, .value=0x70}, {.addr=0xd934, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xd935, .a=0x24, .x=0x39, .y=0x1d, .sp=0x5f, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xd933, .value=0x70}, {.addr=0xd934, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xd933, .value=0x70, .type=IO_READ},
        {.addr=0xd934, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_023F) {
    const struct CPU_State initial_cpu = {.pc=0x2f98, .a=0x10, .x=0x45, .y=0x7d, .sp=0x2c, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x2f98, .value=0x70}, {.addr=0x2f99, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0x2f9a, .a=0x10, .x=0x45, .y=0x7d, .sp=0x2c, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x2f98, .value=0x70}, {.addr=0x2f99, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0x2f98, .value=0x70, .type=IO_READ},
        {.addr=0x2f99, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0240) {
    const struct CPU_State initial_cpu = {.pc=0xfdd4, .a=0x74, .x=0xc5, .y=0x0a, .sp=0xc8, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xfdd4, .value=0x70}, {.addr=0xfdd5, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0xfdd5, .a=0x74, .x=0xc5, .y=0x0a, .sp=0xc8, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xfdd4, .value=0x70}, {.addr=0xfdd5, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0xfdd4, .value=0x70, .type=IO_READ},
        {.addr=0xfdd5, .value=0xff, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0241) {
    const struct CPU_State initial_cpu = {.pc=0x87b6, .a=0x33, .x=0xa5, .y=0x7b, .sp=0x64, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x87b6, .value=0x70}, {.addr=0x87b7, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x8767, .a=0x33, .x=0xa5, .y=0x7b, .sp=0x64, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x87b6, .value=0x70}, {.addr=0x87b7, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x87b6, .value=0x70, .type=IO_READ},
        {.addr=0x87b7, .value=0xaf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0242) {
    const struct CPU_State initial_cpu = {.pc=0x2612, .a=0x8c, .x=0xab, .y=0x67, .sp=0x86, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x2612, .value=0x70}, {.addr=0x2613, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x2614, .a=0x8c, .x=0xab, .y=0x67, .sp=0x86, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x2612, .value=0x70}, {.addr=0x2613, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x2612, .value=0x70, .type=IO_READ},
        {.addr=0x2613, .value=0x00, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0243) {
    const struct CPU_State initial_cpu = {.pc=0x1d5c, .a=0x33, .x=0x26, .y=0xb8, .sp=0xb9, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x1d5c, .value=0x70}, {.addr=0x1d5d, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0x1d5e, .a=0x33, .x=0x26, .y=0xb8, .sp=0xb9, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x1d5c, .value=0x70}, {.addr=0x1d5d, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0x1d5c, .value=0x70, .type=IO_READ},
        {.addr=0x1d5d, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0244) {
    const struct CPU_State initial_cpu = {.pc=0x2659, .a=0xdb, .x=0x96, .y=0xba, .sp=0x55, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x2659, .value=0x70}, {.addr=0x265a, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x265b, .a=0xdb, .x=0x96, .y=0xba, .sp=0x55, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x2659, .value=0x70}, {.addr=0x265a, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x2659, .value=0x70, .type=IO_READ},
        {.addr=0x265a, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0245) {
    const struct CPU_State initial_cpu = {.pc=0xdf1a, .a=0x3f, .x=0xcb, .y=0xf1, .sp=0x7c, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xdf1a, .value=0x70}, {.addr=0xdf1b, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0xdf1c, .a=0x3f, .x=0xcb, .y=0xf1, .sp=0x7c, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xdf1a, .value=0x70}, {.addr=0xdf1b, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0xdf1a, .value=0x70, .type=IO_READ},
        {.addr=0xdf1b, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0246) {
    const struct CPU_State initial_cpu = {.pc=0x5873, .a=0x46, .x=0x3a, .y=0xca, .sp=0x06, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x5873, .value=0x70}, {.addr=0x5874, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0x5875, .a=0x46, .x=0x3a, .y=0xca, .sp=0x06, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x5873, .value=0x70}, {.addr=0x5874, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0x5873, .value=0x70, .type=IO_READ},
        {.addr=0x5874, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0247) {
    const struct CPU_State initial_cpu = {.pc=0x4a1e, .a=0x18, .x=0x31, .y=0xbd, .sp=0xc0, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x4a1e, .value=0x70}, {.addr=0x4a1f, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x4a20, .a=0x18, .x=0x31, .y=0xbd, .sp=0xc0, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x4a1e, .value=0x70}, {.addr=0x4a1f, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x4a1e, .value=0x70, .type=IO_READ},
        {.addr=0x4a1f, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0248) {
    const struct CPU_State initial_cpu = {.pc=0x2638, .a=0x23, .x=0xc6, .y=0xd4, .sp=0x2f, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x2638, .value=0x70}, {.addr=0x2639, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0x261d, .a=0x23, .x=0xc6, .y=0xd4, .sp=0x2f, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x2638, .value=0x70}, {.addr=0x2639, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0x2638, .value=0x70, .type=IO_READ},
        {.addr=0x2639, .value=0xe3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0249) {
    const struct CPU_State initial_cpu = {.pc=0xaf3f, .a=0xd4, .x=0x3d, .y=0xfb, .sp=0x82, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xaf3f, .value=0x70}, {.addr=0xaf40, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0xaf41, .a=0xd4, .x=0x3d, .y=0xfb, .sp=0x82, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0xaf3f, .value=0x70}, {.addr=0xaf40, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0xaf3f, .value=0x70, .type=IO_READ},
        {.addr=0xaf40, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_024A) {
    const struct CPU_State initial_cpu = {.pc=0x3d9e, .a=0x06, .x=0xab, .y=0x5a, .sp=0x77, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x3d9e, .value=0x70}, {.addr=0x3d9f, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0x3da0, .a=0x06, .x=0xab, .y=0x5a, .sp=0x77, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x3d9e, .value=0x70}, {.addr=0x3d9f, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0x3d9e, .value=0x70, .type=IO_READ},
        {.addr=0x3d9f, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_024B) {
    const struct CPU_State initial_cpu = {.pc=0x91ad, .a=0x33, .x=0xae, .y=0x06, .sp=0x63, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x91ad, .value=0x70}, {.addr=0x91ae, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0x91ad, .a=0x33, .x=0xae, .y=0x06, .sp=0x63, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x91ad, .value=0x70}, {.addr=0x91ae, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0x91ad, .value=0x70, .type=IO_READ},
        {.addr=0x91ae, .value=0xfe, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_024C) {
    const struct CPU_State initial_cpu = {.pc=0x0ed0, .a=0xa6, .x=0x7f, .y=0xb7, .sp=0x39, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x0ed0, .value=0x70}, {.addr=0x0ed1, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0x0ed2, .a=0xa6, .x=0x7f, .y=0xb7, .sp=0x39, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x0ed0, .value=0x70}, {.addr=0x0ed1, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0x0ed0, .value=0x70, .type=IO_READ},
        {.addr=0x0ed1, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_024D) {
    const struct CPU_State initial_cpu = {.pc=0x2468, .a=0x54, .x=0x02, .y=0x4f, .sp=0x73, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x2468, .value=0x70}, {.addr=0x2469, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x246a, .a=0x54, .x=0x02, .y=0x4f, .sp=0x73, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x2468, .value=0x70}, {.addr=0x2469, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x2468, .value=0x70, .type=IO_READ},
        {.addr=0x2469, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_024E) {
    const struct CPU_State initial_cpu = {.pc=0xdd7e, .a=0xff, .x=0x4a, .y=0x29, .sp=0x89, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xdd7e, .value=0x70}, {.addr=0xdd7f, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0xdd54, .a=0xff, .x=0x4a, .y=0x29, .sp=0x89, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xdd7e, .value=0x70}, {.addr=0xdd7f, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0xdd7e, .value=0x70, .type=IO_READ},
        {.addr=0xdd7f, .value=0xd4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_024F) {
    const struct CPU_State initial_cpu = {.pc=0x057d, .a=0x33, .x=0xe3, .y=0xae, .sp=0xfa, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x057d, .value=0x70}, {.addr=0x057e, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x0519, .a=0x33, .x=0xe3, .y=0xae, .sp=0xfa, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x057d, .value=0x70}, {.addr=0x057e, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x057d, .value=0x70, .type=IO_READ},
        {.addr=0x057e, .value=0x9a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0250) {
    const struct CPU_State initial_cpu = {.pc=0x3084, .a=0x46, .x=0xb9, .y=0x40, .sp=0x09, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x3084, .value=0x70}, {.addr=0x3085, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x3086, .a=0x46, .x=0xb9, .y=0x40, .sp=0x09, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x3084, .value=0x70}, {.addr=0x3085, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x3084, .value=0x70, .type=IO_READ},
        {.addr=0x3085, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0251) {
    const struct CPU_State initial_cpu = {.pc=0xb88f, .a=0xc6, .x=0xc7, .y=0x20, .sp=0xb3, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xb88f, .value=0x70}, {.addr=0xb890, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0xb87c, .a=0xc6, .x=0xc7, .y=0x20, .sp=0xb3, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xb88f, .value=0x70}, {.addr=0xb890, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0xb88f, .value=0x70, .type=IO_READ},
        {.addr=0xb890, .value=0xeb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0252) {
    const struct CPU_State initial_cpu = {.pc=0xd29d, .a=0x7d, .x=0x5f, .y=0xa8, .sp=0x96, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xd29d, .value=0x70}, {.addr=0xd29e, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xd29f, .a=0x7d, .x=0x5f, .y=0xa8, .sp=0x96, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0xd29d, .value=0x70}, {.addr=0xd29e, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xd29d, .value=0x70, .type=IO_READ},
        {.addr=0xd29e, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0253) {
    const struct CPU_State initial_cpu = {.pc=0xa582, .a=0x0d, .x=0xf4, .y=0xad, .sp=0x51, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xa582, .value=0x70}, {.addr=0xa583, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0xa576, .a=0x0d, .x=0xf4, .y=0xad, .sp=0x51, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xa582, .value=0x70}, {.addr=0xa583, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0xa582, .value=0x70, .type=IO_READ},
        {.addr=0xa583, .value=0xf2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0254) {
    const struct CPU_State initial_cpu = {.pc=0x5529, .a=0x29, .x=0x18, .y=0x95, .sp=0x43, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x5529, .value=0x70}, {.addr=0x552a, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0x54f5, .a=0x29, .x=0x18, .y=0x95, .sp=0x43, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x5529, .value=0x70}, {.addr=0x552a, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0x5529, .value=0x70, .type=IO_READ},
        {.addr=0x552a, .value=0xca, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0255) {
    const struct CPU_State initial_cpu = {.pc=0x44e1, .a=0xb7, .x=0x98, .y=0x58, .sp=0xdd, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x44e1, .value=0x70}, {.addr=0x44e2, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0x44e3, .a=0xb7, .x=0x98, .y=0x58, .sp=0xdd, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x44e1, .value=0x70}, {.addr=0x44e2, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0x44e1, .value=0x70, .type=IO_READ},
        {.addr=0x44e2, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0256) {
    const struct CPU_State initial_cpu = {.pc=0x7176, .a=0xf7, .x=0xbb, .y=0x7b, .sp=0xe9, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x7176, .value=0x70}, {.addr=0x7177, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x7178, .a=0xf7, .x=0xbb, .y=0x7b, .sp=0xe9, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x7176, .value=0x70}, {.addr=0x7177, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x7176, .value=0x70, .type=IO_READ},
        {.addr=0x7177, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0257) {
    const struct CPU_State initial_cpu = {.pc=0x164b, .a=0x52, .x=0x7a, .y=0xc0, .sp=0x43, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x164b, .value=0x70}, {.addr=0x164c, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0x164d, .a=0x52, .x=0x7a, .y=0xc0, .sp=0x43, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x164b, .value=0x70}, {.addr=0x164c, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0x164b, .value=0x70, .type=IO_READ},
        {.addr=0x164c, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0258) {
    const struct CPU_State initial_cpu = {.pc=0x4f07, .a=0x2c, .x=0xb0, .y=0xb1, .sp=0x5c, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x4f07, .value=0x70}, {.addr=0x4f08, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0x4ecb, .a=0x2c, .x=0xb0, .y=0xb1, .sp=0x5c, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x4f07, .value=0x70}, {.addr=0x4f08, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0x4f07, .value=0x70, .type=IO_READ},
        {.addr=0x4f08, .value=0xc2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0259) {
    const struct CPU_State initial_cpu = {.pc=0xd837, .a=0xc6, .x=0xb3, .y=0xb0, .sp=0xa6, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xd837, .value=0x70}, {.addr=0xd838, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0xd839, .a=0xc6, .x=0xb3, .y=0xb0, .sp=0xa6, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xd837, .value=0x70}, {.addr=0xd838, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0xd837, .value=0x70, .type=IO_READ},
        {.addr=0xd838, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_025A) {
    const struct CPU_State initial_cpu = {.pc=0x5a03, .a=0x08, .x=0x26, .y=0xa8, .sp=0x3e, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x5a03, .value=0x70}, {.addr=0x5a04, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0x5a05, .a=0x08, .x=0x26, .y=0xa8, .sp=0x3e, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x5a03, .value=0x70}, {.addr=0x5a04, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0x5a03, .value=0x70, .type=IO_READ},
        {.addr=0x5a04, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_025B) {
    const struct CPU_State initial_cpu = {.pc=0xf173, .a=0x6c, .x=0x00, .y=0x6c, .sp=0x4a, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xf173, .value=0x70}, {.addr=0xf174, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0xf1a0, .a=0x6c, .x=0x00, .y=0x6c, .sp=0x4a, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0xf173, .value=0x70}, {.addr=0xf174, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0xf173, .value=0x70, .type=IO_READ},
        {.addr=0xf174, .value=0x2b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_025C) {
    const struct CPU_State initial_cpu = {.pc=0xb062, .a=0xff, .x=0x8b, .y=0x99, .sp=0x25, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xb062, .value=0x70}, {.addr=0xb063, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0xb018, .a=0xff, .x=0x8b, .y=0x99, .sp=0x25, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0xb062, .value=0x70}, {.addr=0xb063, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0xb062, .value=0x70, .type=IO_READ},
        {.addr=0xb063, .value=0xb4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_025D) {
    const struct CPU_State initial_cpu = {.pc=0x62a2, .a=0x7f, .x=0x54, .y=0x6c, .sp=0x6e, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x62a2, .value=0x70}, {.addr=0x62a3, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0x62a4, .a=0x7f, .x=0x54, .y=0x6c, .sp=0x6e, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x62a2, .value=0x70}, {.addr=0x62a3, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0x62a2, .value=0x70, .type=IO_READ},
        {.addr=0x62a3, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_025E) {
    const struct CPU_State initial_cpu = {.pc=0x75bf, .a=0xed, .x=0x0b, .y=0x4a, .sp=0x87, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x75bf, .value=0x70}, {.addr=0x75c0, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0x75c8, .a=0xed, .x=0x0b, .y=0x4a, .sp=0x87, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x75bf, .value=0x70}, {.addr=0x75c0, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0x75bf, .value=0x70, .type=IO_READ},
        {.addr=0x75c0, .value=0x07, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_025F) {
    const struct CPU_State initial_cpu = {.pc=0x66bf, .a=0x78, .x=0x86, .y=0x4d, .sp=0xb4, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x66bf, .value=0x70}, {.addr=0x66c0, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0x66c1, .a=0x78, .x=0x86, .y=0x4d, .sp=0xb4, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x66bf, .value=0x70}, {.addr=0x66c0, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0x66bf, .value=0x70, .type=IO_READ},
        {.addr=0x66c0, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0260) {
    const struct CPU_State initial_cpu = {.pc=0x3138, .a=0xe2, .x=0x76, .y=0xa9, .sp=0x55, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x3138, .value=0x70}, {.addr=0x3139, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x310a, .a=0xe2, .x=0x76, .y=0xa9, .sp=0x55, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x3138, .value=0x70}, {.addr=0x3139, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x3138, .value=0x70, .type=IO_READ},
        {.addr=0x3139, .value=0xd0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0261) {
    const struct CPU_State initial_cpu = {.pc=0x12bc, .a=0x33, .x=0xbc, .y=0xdc, .sp=0xaa, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x12bc, .value=0x70}, {.addr=0x12bd, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x12be, .a=0x33, .x=0xbc, .y=0xdc, .sp=0xaa, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x12bc, .value=0x70}, {.addr=0x12bd, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x12bc, .value=0x70, .type=IO_READ},
        {.addr=0x12bd, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0262) {
    const struct CPU_State initial_cpu = {.pc=0x9317, .a=0xac, .x=0x88, .y=0x74, .sp=0x37, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x9317, .value=0x70}, {.addr=0x9318, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0x9319, .a=0xac, .x=0x88, .y=0x74, .sp=0x37, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x9317, .value=0x70}, {.addr=0x9318, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0x9317, .value=0x70, .type=IO_READ},
        {.addr=0x9318, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0263) {
    const struct CPU_State initial_cpu = {.pc=0x682a, .a=0x47, .x=0xa3, .y=0xb9, .sp=0x4e, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x682a, .value=0x70}, {.addr=0x682b, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x682c, .a=0x47, .x=0xa3, .y=0xb9, .sp=0x4e, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x682a, .value=0x70}, {.addr=0x682b, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x682a, .value=0x70, .type=IO_READ},
        {.addr=0x682b, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0264) {
    const struct CPU_State initial_cpu = {.pc=0x39e1, .a=0x0a, .x=0xd4, .y=0x8b, .sp=0xec, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x39e1, .value=0x70}, {.addr=0x39e2, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0x39e3, .a=0x0a, .x=0xd4, .y=0x8b, .sp=0xec, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x39e1, .value=0x70}, {.addr=0x39e2, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0x39e1, .value=0x70, .type=IO_READ},
        {.addr=0x39e2, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0265) {
    const struct CPU_State initial_cpu = {.pc=0x035f, .a=0x29, .x=0x95, .y=0xfd, .sp=0x15, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x035f, .value=0x70}, {.addr=0x0360, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0x03d1, .a=0x29, .x=0x95, .y=0xfd, .sp=0x15, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x035f, .value=0x70}, {.addr=0x0360, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0x035f, .value=0x70, .type=IO_READ},
        {.addr=0x0360, .value=0x70, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0266) {
    const struct CPU_State initial_cpu = {.pc=0x728a, .a=0x6a, .x=0x21, .y=0xb9, .sp=0xd7, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x728a, .value=0x70}, {.addr=0x728b, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x728c, .a=0x6a, .x=0x21, .y=0xb9, .sp=0xd7, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x728a, .value=0x70}, {.addr=0x728b, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x728a, .value=0x70, .type=IO_READ},
        {.addr=0x728b, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0267) {
    const struct CPU_State initial_cpu = {.pc=0xebb0, .a=0xc5, .x=0x3b, .y=0x18, .sp=0x65, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xebb0, .value=0x70}, {.addr=0xebb1, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xebb2, .a=0xc5, .x=0x3b, .y=0x18, .sp=0x65, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xebb0, .value=0x70}, {.addr=0xebb1, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xebb0, .value=0x70, .type=IO_READ},
        {.addr=0xebb1, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0268) {
    const struct CPU_State initial_cpu = {.pc=0xb932, .a=0xee, .x=0xa6, .y=0xa0, .sp=0x12, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xb932, .value=0x70}, {.addr=0xb933, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0xb934, .a=0xee, .x=0xa6, .y=0xa0, .sp=0x12, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0xb932, .value=0x70}, {.addr=0xb933, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0xb932, .value=0x70, .type=IO_READ},
        {.addr=0xb933, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0269) {
    const struct CPU_State initial_cpu = {.pc=0xa072, .a=0x89, .x=0x6f, .y=0x66, .sp=0xcf, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xa072, .value=0x70}, {.addr=0xa073, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0xa01c, .a=0x89, .x=0x6f, .y=0x66, .sp=0xcf, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xa072, .value=0x70}, {.addr=0xa073, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0xa072, .value=0x70, .type=IO_READ},
        {.addr=0xa073, .value=0xa8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_026A) {
    const struct CPU_State initial_cpu = {.pc=0x3686, .a=0x65, .x=0x83, .y=0x7c, .sp=0x36, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x3686, .value=0x70}, {.addr=0x3687, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0x3682, .a=0x65, .x=0x83, .y=0x7c, .sp=0x36, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x3686, .value=0x70}, {.addr=0x3687, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0x3686, .value=0x70, .type=IO_READ},
        {.addr=0x3687, .value=0xfa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_026B) {
    const struct CPU_State initial_cpu = {.pc=0xa816, .a=0xcf, .x=0xe2, .y=0x45, .sp=0xcd, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xa816, .value=0x70}, {.addr=0xa817, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0xa801, .a=0xcf, .x=0xe2, .y=0x45, .sp=0xcd, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xa816, .value=0x70}, {.addr=0xa817, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0xa816, .value=0x70, .type=IO_READ},
        {.addr=0xa817, .value=0xe9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_026C) {
    const struct CPU_State initial_cpu = {.pc=0xc54b, .a=0xd9, .x=0x4d, .y=0x02, .sp=0x3d, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xc54b, .value=0x70}, {.addr=0xc54c, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0xc5a5, .a=0xd9, .x=0x4d, .y=0x02, .sp=0x3d, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xc54b, .value=0x70}, {.addr=0xc54c, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0xc54b, .value=0x70, .type=IO_READ},
        {.addr=0xc54c, .value=0x58, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_026D) {
    const struct CPU_State initial_cpu = {.pc=0x4eeb, .a=0x1f, .x=0x68, .y=0x43, .sp=0x8e, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x4eeb, .value=0x70}, {.addr=0x4eec, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x4eed, .a=0x1f, .x=0x68, .y=0x43, .sp=0x8e, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x4eeb, .value=0x70}, {.addr=0x4eec, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x4eeb, .value=0x70, .type=IO_READ},
        {.addr=0x4eec, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_026E) {
    const struct CPU_State initial_cpu = {.pc=0x7242, .a=0x82, .x=0x70, .y=0x9f, .sp=0xa1, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x7242, .value=0x70}, {.addr=0x7243, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0x7244, .a=0x82, .x=0x70, .y=0x9f, .sp=0xa1, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x7242, .value=0x70}, {.addr=0x7243, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0x7242, .value=0x70, .type=IO_READ},
        {.addr=0x7243, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_026F) {
    const struct CPU_State initial_cpu = {.pc=0x8069, .a=0x1f, .x=0x93, .y=0xb2, .sp=0x59, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x8069, .value=0x70}, {.addr=0x806a, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x80c8, .a=0x1f, .x=0x93, .y=0xb2, .sp=0x59, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x8069, .value=0x70}, {.addr=0x806a, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x8069, .value=0x70, .type=IO_READ},
        {.addr=0x806a, .value=0x5d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0270) {
    const struct CPU_State initial_cpu = {.pc=0x11ab, .a=0x59, .x=0x50, .y=0x9f, .sp=0xb2, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x11ab, .value=0x70}, {.addr=0x11ac, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0x1134, .a=0x59, .x=0x50, .y=0x9f, .sp=0xb2, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x11ab, .value=0x70}, {.addr=0x11ac, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0x11ab, .value=0x70, .type=IO_READ},
        {.addr=0x11ac, .value=0x87, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0271) {
    const struct CPU_State initial_cpu = {.pc=0xfc52, .a=0x95, .x=0xbc, .y=0xff, .sp=0x5b, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xfc52, .value=0x70}, {.addr=0xfc53, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0xfc78, .a=0x95, .x=0xbc, .y=0xff, .sp=0x5b, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xfc52, .value=0x70}, {.addr=0xfc53, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0xfc52, .value=0x70, .type=IO_READ},
        {.addr=0xfc53, .value=0x24, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0272) {
    const struct CPU_State initial_cpu = {.pc=0xb412, .a=0xdf, .x=0xc8, .y=0x64, .sp=0x5f, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xb412, .value=0x70}, {.addr=0xb413, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0xb414, .a=0xdf, .x=0xc8, .y=0x64, .sp=0x5f, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xb412, .value=0x70}, {.addr=0xb413, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0xb412, .value=0x70, .type=IO_READ},
        {.addr=0xb413, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0273) {
    const struct CPU_State initial_cpu = {.pc=0xb5d1, .a=0x90, .x=0x31, .y=0x1e, .sp=0x4c, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xb5d1, .value=0x70}, {.addr=0xb5d2, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0xb5d3, .a=0x90, .x=0x31, .y=0x1e, .sp=0x4c, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xb5d1, .value=0x70}, {.addr=0xb5d2, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0xb5d1, .value=0x70, .type=IO_READ},
        {.addr=0xb5d2, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0274) {
    const struct CPU_State initial_cpu = {.pc=0xc5c4, .a=0xa1, .x=0xa3, .y=0x18, .sp=0xea, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xc5c4, .value=0x70}, {.addr=0xc5c5, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0xc617, .a=0xa1, .x=0xa3, .y=0x18, .sp=0xea, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xc5c4, .value=0x70}, {.addr=0xc5c5, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0xc5c4, .value=0x70, .type=IO_READ},
        {.addr=0xc5c5, .value=0x51, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0275) {
    const struct CPU_State initial_cpu = {.pc=0x7544, .a=0xf7, .x=0x1e, .y=0x77, .sp=0xae, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x7544, .value=0x70}, {.addr=0x7545, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x7546, .a=0xf7, .x=0x1e, .y=0x77, .sp=0xae, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x7544, .value=0x70}, {.addr=0x7545, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x7544, .value=0x70, .type=IO_READ},
        {.addr=0x7545, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0276) {
    const struct CPU_State initial_cpu = {.pc=0xe2d4, .a=0x2f, .x=0xf2, .y=0x24, .sp=0xf7, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xe2d4, .value=0x70}, {.addr=0xe2d5, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0xe317, .a=0x2f, .x=0xf2, .y=0x24, .sp=0xf7, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xe2d4, .value=0x70}, {.addr=0xe2d5, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0xe2d4, .value=0x70, .type=IO_READ},
        {.addr=0xe2d5, .value=0x41, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0277) {
    const struct CPU_State initial_cpu = {.pc=0x3454, .a=0xd6, .x=0x71, .y=0x5c, .sp=0x62, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x3454, .value=0x70}, {.addr=0x3455, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x33d8, .a=0xd6, .x=0x71, .y=0x5c, .sp=0x62, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x3454, .value=0x70}, {.addr=0x3455, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x3454, .value=0x70, .type=IO_READ},
        {.addr=0x3455, .value=0x82, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0278) {
    const struct CPU_State initial_cpu = {.pc=0x17e6, .a=0x5a, .x=0xc1, .y=0x4c, .sp=0x0d, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x17e6, .value=0x70}, {.addr=0x17e7, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0x184b, .a=0x5a, .x=0xc1, .y=0x4c, .sp=0x0d, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x17e6, .value=0x70}, {.addr=0x17e7, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0x17e6, .value=0x70, .type=IO_READ},
        {.addr=0x17e7, .value=0x63, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0279) {
    const struct CPU_State initial_cpu = {.pc=0x2ae2, .a=0xa8, .x=0x80, .y=0x5c, .sp=0xc3, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x2ae2, .value=0x70}, {.addr=0x2ae3, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x2ae4, .a=0xa8, .x=0x80, .y=0x5c, .sp=0xc3, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x2ae2, .value=0x70}, {.addr=0x2ae3, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x2ae2, .value=0x70, .type=IO_READ},
        {.addr=0x2ae3, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_027A) {
    const struct CPU_State initial_cpu = {.pc=0xaa0b, .a=0x13, .x=0x7a, .y=0x0c, .sp=0x36, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xaa0b, .value=0x70}, {.addr=0xaa0c, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0xaa80, .a=0x13, .x=0x7a, .y=0x0c, .sp=0x36, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xaa0b, .value=0x70}, {.addr=0xaa0c, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0xaa0b, .value=0x70, .type=IO_READ},
        {.addr=0xaa0c, .value=0x73, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_027B) {
    const struct CPU_State initial_cpu = {.pc=0xf731, .a=0x15, .x=0xcb, .y=0xe0, .sp=0xf8, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xf731, .value=0x70}, {.addr=0xf732, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xf74f, .a=0x15, .x=0xcb, .y=0xe0, .sp=0xf8, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0xf731, .value=0x70}, {.addr=0xf732, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xf731, .value=0x70, .type=IO_READ},
        {.addr=0xf732, .value=0x1c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_027C) {
    const struct CPU_State initial_cpu = {.pc=0x97f7, .a=0xea, .x=0x2b, .y=0x3d, .sp=0x5c, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x97f7, .value=0x70}, {.addr=0x97f8, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0x9788, .a=0xea, .x=0x2b, .y=0x3d, .sp=0x5c, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x97f7, .value=0x70}, {.addr=0x97f8, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0x97f7, .value=0x70, .type=IO_READ},
        {.addr=0x97f8, .value=0x8f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_027D) {
    const struct CPU_State initial_cpu = {.pc=0xb01c, .a=0xc0, .x=0xec, .y=0x43, .sp=0x9e, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xb01c, .value=0x70}, {.addr=0xb01d, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0xb01e, .a=0xc0, .x=0xec, .y=0x43, .sp=0x9e, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xb01c, .value=0x70}, {.addr=0xb01d, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0xb01c, .value=0x70, .type=IO_READ},
        {.addr=0xb01d, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_027E) {
    const struct CPU_State initial_cpu = {.pc=0xec72, .a=0xa1, .x=0xf1, .y=0x41, .sp=0x25, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xec72, .value=0x70}, {.addr=0xec73, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0xec84, .a=0xa1, .x=0xf1, .y=0x41, .sp=0x25, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0xec72, .value=0x70}, {.addr=0xec73, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0xec72, .value=0x70, .type=IO_READ},
        {.addr=0xec73, .value=0x10, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_027F) {
    const struct CPU_State initial_cpu = {.pc=0xfe12, .a=0xf0, .x=0x2a, .y=0x15, .sp=0x86, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xfe12, .value=0x70}, {.addr=0xfe13, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0xfe03, .a=0xf0, .x=0x2a, .y=0x15, .sp=0x86, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xfe12, .value=0x70}, {.addr=0xfe13, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0xfe12, .value=0x70, .type=IO_READ},
        {.addr=0xfe13, .value=0xef, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0280) {
    const struct CPU_State initial_cpu = {.pc=0x9aab, .a=0xa6, .x=0x71, .y=0x35, .sp=0x1c, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x9aab, .value=0x70}, {.addr=0x9aac, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0x9b14, .a=0xa6, .x=0x71, .y=0x35, .sp=0x1c, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x9aab, .value=0x70}, {.addr=0x9aac, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0x9aab, .value=0x70, .type=IO_READ},
        {.addr=0x9aac, .value=0x67, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0281) {
    const struct CPU_State initial_cpu = {.pc=0xe621, .a=0x6e, .x=0xff, .y=0xbe, .sp=0x4b, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xe621, .value=0x70}, {.addr=0xe622, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0xe5f6, .a=0x6e, .x=0xff, .y=0xbe, .sp=0x4b, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xe621, .value=0x70}, {.addr=0xe622, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0xe621, .value=0x70, .type=IO_READ},
        {.addr=0xe622, .value=0xd3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0282) {
    const struct CPU_State initial_cpu = {.pc=0xe74a, .a=0x70, .x=0x66, .y=0x86, .sp=0xa4, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xe74a, .value=0x70}, {.addr=0xe74b, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0xe79f, .a=0x70, .x=0x66, .y=0x86, .sp=0xa4, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xe74a, .value=0x70}, {.addr=0xe74b, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0xe74a, .value=0x70, .type=IO_READ},
        {.addr=0xe74b, .value=0x53, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0283) {
    const struct CPU_State initial_cpu = {.pc=0xf70d, .a=0x50, .x=0x92, .y=0x7c, .sp=0xaf, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xf70d, .value=0x70}, {.addr=0xf70e, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0xf70f, .a=0x50, .x=0x92, .y=0x7c, .sp=0xaf, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0xf70d, .value=0x70}, {.addr=0xf70e, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0xf70d, .value=0x70, .type=IO_READ},
        {.addr=0xf70e, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0284) {
    const struct CPU_State initial_cpu = {.pc=0x05fe, .a=0x62, .x=0xee, .y=0xf4, .sp=0x0e, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x05fe, .value=0x70}, {.addr=0x05ff, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x05dd, .a=0x62, .x=0xee, .y=0xf4, .sp=0x0e, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x05fe, .value=0x70}, {.addr=0x05ff, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x05fe, .value=0x70, .type=IO_READ},
        {.addr=0x05ff, .value=0xdd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0285) {
    const struct CPU_State initial_cpu = {.pc=0xe52b, .a=0x47, .x=0x2c, .y=0x69, .sp=0xb8, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xe52b, .value=0x70}, {.addr=0xe52c, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0xe52d, .a=0x47, .x=0x2c, .y=0x69, .sp=0xb8, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xe52b, .value=0x70}, {.addr=0xe52c, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0xe52b, .value=0x70, .type=IO_READ},
        {.addr=0xe52c, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0286) {
    const struct CPU_State initial_cpu = {.pc=0xd104, .a=0xbe, .x=0x7e, .y=0x8c, .sp=0xdc, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xd104, .value=0x70}, {.addr=0xd105, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xd12c, .a=0xbe, .x=0x7e, .y=0x8c, .sp=0xdc, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0xd104, .value=0x70}, {.addr=0xd105, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xd104, .value=0x70, .type=IO_READ},
        {.addr=0xd105, .value=0x26, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0287) {
    const struct CPU_State initial_cpu = {.pc=0x1670, .a=0xf1, .x=0x3f, .y=0x69, .sp=0xaa, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x1670, .value=0x70}, {.addr=0x1671, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x1672, .a=0xf1, .x=0x3f, .y=0x69, .sp=0xaa, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x1670, .value=0x70}, {.addr=0x1671, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x1670, .value=0x70, .type=IO_READ},
        {.addr=0x1671, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0288) {
    const struct CPU_State initial_cpu = {.pc=0x3d54, .a=0x11, .x=0x3e, .y=0x54, .sp=0x17, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x3d54, .value=0x70}, {.addr=0x3d55, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0x3d56, .a=0x11, .x=0x3e, .y=0x54, .sp=0x17, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x3d54, .value=0x70}, {.addr=0x3d55, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0x3d54, .value=0x70, .type=IO_READ},
        {.addr=0x3d55, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0289) {
    const struct CPU_State initial_cpu = {.pc=0x42fb, .a=0x7a, .x=0x12, .y=0x8e, .sp=0x97, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x42fb, .value=0x70}, {.addr=0x42fc, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x432d, .a=0x7a, .x=0x12, .y=0x8e, .sp=0x97, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x42fb, .value=0x70}, {.addr=0x42fc, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x42fb, .value=0x70, .type=IO_READ},
        {.addr=0x42fc, .value=0x30, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_028A) {
    const struct CPU_State initial_cpu = {.pc=0x23ea, .a=0x6b, .x=0xa1, .y=0x67, .sp=0x9f, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x23ea, .value=0x70}, {.addr=0x23eb, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x23c6, .a=0x6b, .x=0xa1, .y=0x67, .sp=0x9f, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x23ea, .value=0x70}, {.addr=0x23eb, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x23ea, .value=0x70, .type=IO_READ},
        {.addr=0x23eb, .value=0xda, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_028B) {
    const struct CPU_State initial_cpu = {.pc=0x40a9, .a=0x01, .x=0x5b, .y=0x40, .sp=0xdf, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x40a9, .value=0x70}, {.addr=0x40aa, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x4069, .a=0x01, .x=0x5b, .y=0x40, .sp=0xdf, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x40a9, .value=0x70}, {.addr=0x40aa, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x40a9, .value=0x70, .type=IO_READ},
        {.addr=0x40aa, .value=0xbe, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_028C) {
    const struct CPU_State initial_cpu = {.pc=0x8679, .a=0xc6, .x=0x2b, .y=0x93, .sp=0x1a, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x8679, .value=0x70}, {.addr=0x867a, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0x867b, .a=0xc6, .x=0x2b, .y=0x93, .sp=0x1a, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x8679, .value=0x70}, {.addr=0x867a, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0x8679, .value=0x70, .type=IO_READ},
        {.addr=0x867a, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_028D) {
    const struct CPU_State initial_cpu = {.pc=0x173d, .a=0xbb, .x=0x66, .y=0x11, .sp=0xe2, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x173d, .value=0x70}, {.addr=0x173e, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x173f, .a=0xbb, .x=0x66, .y=0x11, .sp=0xe2, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x173d, .value=0x70}, {.addr=0x173e, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x173d, .value=0x70, .type=IO_READ},
        {.addr=0x173e, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_028E) {
    const struct CPU_State initial_cpu = {.pc=0x312f, .a=0x14, .x=0xe2, .y=0xbd, .sp=0x2c, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x312f, .value=0x70}, {.addr=0x3130, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x3131, .a=0x14, .x=0xe2, .y=0xbd, .sp=0x2c, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x312f, .value=0x70}, {.addr=0x3130, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x312f, .value=0x70, .type=IO_READ},
        {.addr=0x3130, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_028F) {
    const struct CPU_State initial_cpu = {.pc=0xf389, .a=0xfe, .x=0xc6, .y=0xb9, .sp=0x00, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xf389, .value=0x70}, {.addr=0xf38a, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0xf380, .a=0xfe, .x=0xc6, .y=0xb9, .sp=0x00, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xf389, .value=0x70}, {.addr=0xf38a, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0xf389, .value=0x70, .type=IO_READ},
        {.addr=0xf38a, .value=0xf5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0290) {
    const struct CPU_State initial_cpu = {.pc=0x6a9e, .a=0x56, .x=0x4a, .y=0x9f, .sp=0xff, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x6a9e, .value=0x70}, {.addr=0x6a9f, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x6b06, .a=0x56, .x=0x4a, .y=0x9f, .sp=0xff, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x6a9e, .value=0x70}, {.addr=0x6a9f, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x6a9e, .value=0x70, .type=IO_READ},
        {.addr=0x6a9f, .value=0x66, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0291) {
    const struct CPU_State initial_cpu = {.pc=0x39c2, .a=0x7f, .x=0x33, .y=0xfd, .sp=0x59, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x39c2, .value=0x70}, {.addr=0x39c3, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0x39ee, .a=0x7f, .x=0x33, .y=0xfd, .sp=0x59, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x39c2, .value=0x70}, {.addr=0x39c3, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0x39c2, .value=0x70, .type=IO_READ},
        {.addr=0x39c3, .value=0x2a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0292) {
    const struct CPU_State initial_cpu = {.pc=0x6bf2, .a=0x4a, .x=0x24, .y=0xca, .sp=0x6f, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x6bf2, .value=0x70}, {.addr=0x6bf3, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x6c45, .a=0x4a, .x=0x24, .y=0xca, .sp=0x6f, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x6bf2, .value=0x70}, {.addr=0x6bf3, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x6bf2, .value=0x70, .type=IO_READ},
        {.addr=0x6bf3, .value=0x51, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0293) {
    const struct CPU_State initial_cpu = {.pc=0xe194, .a=0x8f, .x=0xfa, .y=0xc1, .sp=0x07, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xe194, .value=0x70}, {.addr=0xe195, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0xe1e9, .a=0x8f, .x=0xfa, .y=0xc1, .sp=0x07, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xe194, .value=0x70}, {.addr=0xe195, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0xe194, .value=0x70, .type=IO_READ},
        {.addr=0xe195, .value=0x53, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0294) {
    const struct CPU_State initial_cpu = {.pc=0x79d7, .a=0x94, .x=0x05, .y=0xdf, .sp=0x2a, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x79d7, .value=0x70}, {.addr=0x79d8, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x79d9, .a=0x94, .x=0x05, .y=0xdf, .sp=0x2a, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x79d7, .value=0x70}, {.addr=0x79d8, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x79d7, .value=0x70, .type=IO_READ},
        {.addr=0x79d8, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0295) {
    const struct CPU_State initial_cpu = {.pc=0x4c97, .a=0x9a, .x=0xf2, .y=0x25, .sp=0x4b, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x4c97, .value=0x70}, {.addr=0x4c98, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x4c2f, .a=0x9a, .x=0xf2, .y=0x25, .sp=0x4b, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x4c97, .value=0x70}, {.addr=0x4c98, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x4c97, .value=0x70, .type=IO_READ},
        {.addr=0x4c98, .value=0x96, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0296) {
    const struct CPU_State initial_cpu = {.pc=0xf17c, .a=0xb1, .x=0x31, .y=0x49, .sp=0xf9, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xf17c, .value=0x70}, {.addr=0xf17d, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0xf1b3, .a=0xb1, .x=0x31, .y=0x49, .sp=0xf9, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0xf17c, .value=0x70}, {.addr=0xf17d, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0xf17c, .value=0x70, .type=IO_READ},
        {.addr=0xf17d, .value=0x35, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0297) {
    const struct CPU_State initial_cpu = {.pc=0x4916, .a=0xca, .x=0xe3, .y=0x4c, .sp=0x63, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x4916, .value=0x70}, {.addr=0x4917, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x491e, .a=0xca, .x=0xe3, .y=0x4c, .sp=0x63, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x4916, .value=0x70}, {.addr=0x4917, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x4916, .value=0x70, .type=IO_READ},
        {.addr=0x4917, .value=0x06, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0298) {
    const struct CPU_State initial_cpu = {.pc=0x5a22, .a=0x42, .x=0x65, .y=0x02, .sp=0x6d, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x5a22, .value=0x70}, {.addr=0x5a23, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x5a77, .a=0x42, .x=0x65, .y=0x02, .sp=0x6d, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x5a22, .value=0x70}, {.addr=0x5a23, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x5a22, .value=0x70, .type=IO_READ},
        {.addr=0x5a23, .value=0x53, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0299) {
    const struct CPU_State initial_cpu = {.pc=0x8662, .a=0x69, .x=0x6b, .y=0x09, .sp=0x36, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x8662, .value=0x70}, {.addr=0x8663, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x861f, .a=0x69, .x=0x6b, .y=0x09, .sp=0x36, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x8662, .value=0x70}, {.addr=0x8663, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x8662, .value=0x70, .type=IO_READ},
        {.addr=0x8663, .value=0xbb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_029A) {
    const struct CPU_State initial_cpu = {.pc=0xe0a0, .a=0xed, .x=0x56, .y=0x11, .sp=0x91, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xe0a0, .value=0x70}, {.addr=0xe0a1, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0xe085, .a=0xed, .x=0x56, .y=0x11, .sp=0x91, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0xe0a0, .value=0x70}, {.addr=0xe0a1, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0xe0a0, .value=0x70, .type=IO_READ},
        {.addr=0xe0a1, .value=0xe3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_029B) {
    const struct CPU_State initial_cpu = {.pc=0xbcbb, .a=0x53, .x=0xe5, .y=0xd9, .sp=0xfd, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xbcbb, .value=0x70}, {.addr=0xbcbc, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xbd1a, .a=0x53, .x=0xe5, .y=0xd9, .sp=0xfd, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0xbcbb, .value=0x70}, {.addr=0xbcbc, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xbcbb, .value=0x70, .type=IO_READ},
        {.addr=0xbcbc, .value=0x5d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_029C) {
    const struct CPU_State initial_cpu = {.pc=0x752a, .a=0x0e, .x=0x60, .y=0x61, .sp=0xba, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x752a, .value=0x70}, {.addr=0x752b, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x752c, .a=0x0e, .x=0x60, .y=0x61, .sp=0xba, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x752a, .value=0x70}, {.addr=0x752b, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x752a, .value=0x70, .type=IO_READ},
        {.addr=0x752b, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_029D) {
    const struct CPU_State initial_cpu = {.pc=0xe0f7, .a=0x09, .x=0x4d, .y=0x71, .sp=0xc8, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xe0f7, .value=0x70}, {.addr=0xe0f8, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0xe15c, .a=0x09, .x=0x4d, .y=0x71, .sp=0xc8, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0xe0f7, .value=0x70}, {.addr=0xe0f8, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0xe0f7, .value=0x70, .type=IO_READ},
        {.addr=0xe0f8, .value=0x63, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_029E) {
    const struct CPU_State initial_cpu = {.pc=0x95e6, .a=0xde, .x=0x56, .y=0x76, .sp=0xcf, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x95e6, .value=0x70}, {.addr=0x95e7, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0x95e8, .a=0xde, .x=0x56, .y=0x76, .sp=0xcf, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x95e6, .value=0x70}, {.addr=0x95e7, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0x95e6, .value=0x70, .type=IO_READ},
        {.addr=0x95e7, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_029F) {
    const struct CPU_State initial_cpu = {.pc=0x97be, .a=0x12, .x=0x7c, .y=0x21, .sp=0xc6, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x97be, .value=0x70}, {.addr=0x97bf, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x9788, .a=0x12, .x=0x7c, .y=0x21, .sp=0xc6, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x97be, .value=0x70}, {.addr=0x97bf, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x97be, .value=0x70, .type=IO_READ},
        {.addr=0x97bf, .value=0xc8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02A0) {
    const struct CPU_State initial_cpu = {.pc=0xd60c, .a=0x84, .x=0x64, .y=0xb8, .sp=0xf4, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xd60c, .value=0x70}, {.addr=0xd60d, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0xd60e, .a=0x84, .x=0x64, .y=0xb8, .sp=0xf4, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0xd60c, .value=0x70}, {.addr=0xd60d, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0xd60c, .value=0x70, .type=IO_READ},
        {.addr=0xd60d, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02A1) {
    const struct CPU_State initial_cpu = {.pc=0x9851, .a=0xed, .x=0x91, .y=0x5a, .sp=0xd6, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x9851, .value=0x70}, {.addr=0x9852, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0x9853, .a=0xed, .x=0x91, .y=0x5a, .sp=0xd6, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x9851, .value=0x70}, {.addr=0x9852, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0x9851, .value=0x70, .type=IO_READ},
        {.addr=0x9852, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02A2) {
    const struct CPU_State initial_cpu = {.pc=0xe33e, .a=0xaf, .x=0x9d, .y=0x14, .sp=0x04, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xe33e, .value=0x70}, {.addr=0xe33f, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xe2df, .a=0xaf, .x=0x9d, .y=0x14, .sp=0x04, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0xe33e, .value=0x70}, {.addr=0xe33f, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xe33e, .value=0x70, .type=IO_READ},
        {.addr=0xe33f, .value=0x9f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02A3) {
    const struct CPU_State initial_cpu = {.pc=0x8c17, .a=0xab, .x=0x29, .y=0x58, .sp=0x78, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x8c17, .value=0x70}, {.addr=0x8c18, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x8bf6, .a=0xab, .x=0x29, .y=0x58, .sp=0x78, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x8c17, .value=0x70}, {.addr=0x8c18, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x8c17, .value=0x70, .type=IO_READ},
        {.addr=0x8c18, .value=0xdd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02A4) {
    const struct CPU_State initial_cpu = {.pc=0x3383, .a=0x28, .x=0x71, .y=0x42, .sp=0xbd, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x3383, .value=0x70}, {.addr=0x3384, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x3385, .a=0x28, .x=0x71, .y=0x42, .sp=0xbd, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x3383, .value=0x70}, {.addr=0x3384, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x3383, .value=0x70, .type=IO_READ},
        {.addr=0x3384, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x2d4c, .a=0x5a, .x=0x86, .y=0x6a, .sp=0xd8, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x2d4c, .value=0x70}, {.addr=0x2d4d, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x2d4e, .a=0x5a, .x=0x86, .y=0x6a, .sp=0xd8, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x2d4c, .value=0x70}, {.addr=0x2d4d, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x2d4c, .value=0x70, .type=IO_READ},
        {.addr=0x2d4d, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02A6) {
    const struct CPU_State initial_cpu = {.pc=0xf333, .a=0xa7, .x=0xa0, .y=0x8e, .sp=0xff, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xf333, .value=0x70}, {.addr=0xf334, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0xf2ce, .a=0xa7, .x=0xa0, .y=0x8e, .sp=0xff, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xf333, .value=0x70}, {.addr=0xf334, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0xf333, .value=0x70, .type=IO_READ},
        {.addr=0xf334, .value=0x99, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02A7) {
    const struct CPU_State initial_cpu = {.pc=0x6161, .a=0xfe, .x=0x41, .y=0xba, .sp=0x92, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x6161, .value=0x70}, {.addr=0x6162, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0x6163, .a=0xfe, .x=0x41, .y=0xba, .sp=0x92, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x6161, .value=0x70}, {.addr=0x6162, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0x6161, .value=0x70, .type=IO_READ},
        {.addr=0x6162, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02A8) {
    const struct CPU_State initial_cpu = {.pc=0x6254, .a=0xf9, .x=0x6c, .y=0x7d, .sp=0xc0, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x6254, .value=0x70}, {.addr=0x6255, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x6256, .a=0xf9, .x=0x6c, .y=0x7d, .sp=0xc0, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x6254, .value=0x70}, {.addr=0x6255, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x6254, .value=0x70, .type=IO_READ},
        {.addr=0x6255, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02A9) {
    const struct CPU_State initial_cpu = {.pc=0x2020, .a=0xe2, .x=0xd6, .y=0xcc, .sp=0x2c, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x2020, .value=0x70}, {.addr=0x2021, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x1fde, .a=0xe2, .x=0xd6, .y=0xcc, .sp=0x2c, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x2020, .value=0x70}, {.addr=0x2021, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x2020, .value=0x70, .type=IO_READ},
        {.addr=0x2021, .value=0xbc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02AA) {
    const struct CPU_State initial_cpu = {.pc=0x6523, .a=0xb0, .x=0x98, .y=0xbb, .sp=0xcd, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x6523, .value=0x70}, {.addr=0x6524, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0x6525, .a=0xb0, .x=0x98, .y=0xbb, .sp=0xcd, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x6523, .value=0x70}, {.addr=0x6524, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0x6523, .value=0x70, .type=IO_READ},
        {.addr=0x6524, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02AB) {
    const struct CPU_State initial_cpu = {.pc=0xc488, .a=0xef, .x=0x57, .y=0x16, .sp=0x4e, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xc488, .value=0x70}, {.addr=0xc489, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0xc48a, .a=0xef, .x=0x57, .y=0x16, .sp=0x4e, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xc488, .value=0x70}, {.addr=0xc489, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0xc488, .value=0x70, .type=IO_READ},
        {.addr=0xc489, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x3150, .a=0xe1, .x=0x60, .y=0x65, .sp=0xcc, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x3150, .value=0x70}, {.addr=0x3151, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0x316d, .a=0xe1, .x=0x60, .y=0x65, .sp=0xcc, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x3150, .value=0x70}, {.addr=0x3151, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0x3150, .value=0x70, .type=IO_READ},
        {.addr=0x3151, .value=0x1b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02AD) {
    const struct CPU_State initial_cpu = {.pc=0x631e, .a=0x5a, .x=0xd9, .y=0x33, .sp=0x71, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x631e, .value=0x70}, {.addr=0x631f, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x6320, .a=0x5a, .x=0xd9, .y=0x33, .sp=0x71, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x631e, .value=0x70}, {.addr=0x631f, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x631e, .value=0x70, .type=IO_READ},
        {.addr=0x631f, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02AE) {
    const struct CPU_State initial_cpu = {.pc=0xbce6, .a=0x02, .x=0xb5, .y=0x8f, .sp=0x92, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xbce6, .value=0x70}, {.addr=0xbce7, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0xbd09, .a=0x02, .x=0xb5, .y=0x8f, .sp=0x92, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xbce6, .value=0x70}, {.addr=0xbce7, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0xbce6, .value=0x70, .type=IO_READ},
        {.addr=0xbce7, .value=0x21, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x26b9, .a=0xce, .x=0x1b, .y=0x6e, .sp=0x64, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x26b9, .value=0x70}, {.addr=0x26ba, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0x26bb, .a=0xce, .x=0x1b, .y=0x6e, .sp=0x64, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x26b9, .value=0x70}, {.addr=0x26ba, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0x26b9, .value=0x70, .type=IO_READ},
        {.addr=0x26ba, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02B0) {
    const struct CPU_State initial_cpu = {.pc=0x826b, .a=0x70, .x=0x2a, .y=0xbe, .sp=0xb3, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x826b, .value=0x70}, {.addr=0x826c, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0x8291, .a=0x70, .x=0x2a, .y=0xbe, .sp=0xb3, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x826b, .value=0x70}, {.addr=0x826c, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0x826b, .value=0x70, .type=IO_READ},
        {.addr=0x826c, .value=0x24, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02B1) {
    const struct CPU_State initial_cpu = {.pc=0xdeda, .a=0xd7, .x=0x4f, .y=0xe0, .sp=0x6e, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xdeda, .value=0x70}, {.addr=0xdedb, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0xdedc, .a=0xd7, .x=0x4f, .y=0xe0, .sp=0x6e, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xdeda, .value=0x70}, {.addr=0xdedb, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0xdeda, .value=0x70, .type=IO_READ},
        {.addr=0xdedb, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02B2) {
    const struct CPU_State initial_cpu = {.pc=0x3e1e, .a=0xc5, .x=0x6b, .y=0x4c, .sp=0x01, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x3e1e, .value=0x70}, {.addr=0x3e1f, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0x3e20, .a=0xc5, .x=0x6b, .y=0x4c, .sp=0x01, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x3e1e, .value=0x70}, {.addr=0x3e1f, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0x3e1e, .value=0x70, .type=IO_READ},
        {.addr=0x3e1f, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02B3) {
    const struct CPU_State initial_cpu = {.pc=0xef8b, .a=0xa3, .x=0x14, .y=0x14, .sp=0x32, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xef8b, .value=0x70}, {.addr=0xef8c, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0xef92, .a=0xa3, .x=0x14, .y=0x14, .sp=0x32, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xef8b, .value=0x70}, {.addr=0xef8c, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0xef8b, .value=0x70, .type=IO_READ},
        {.addr=0xef8c, .value=0x05, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02B4) {
    const struct CPU_State initial_cpu = {.pc=0x23c8, .a=0x2e, .x=0x04, .y=0x41, .sp=0x53, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x23c8, .value=0x70}, {.addr=0x23c9, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0x23ca, .a=0x2e, .x=0x04, .y=0x41, .sp=0x53, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x23c8, .value=0x70}, {.addr=0x23c9, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0x23c8, .value=0x70, .type=IO_READ},
        {.addr=0x23c9, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02B5) {
    const struct CPU_State initial_cpu = {.pc=0xaed6, .a=0xf9, .x=0x47, .y=0x6e, .sp=0x8d, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xaed6, .value=0x70}, {.addr=0xaed7, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0xaed8, .a=0xf9, .x=0x47, .y=0x6e, .sp=0x8d, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0xaed6, .value=0x70}, {.addr=0xaed7, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0xaed6, .value=0x70, .type=IO_READ},
        {.addr=0xaed7, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02B6) {
    const struct CPU_State initial_cpu = {.pc=0xf87a, .a=0xad, .x=0x1c, .y=0x6b, .sp=0xd5, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xf87a, .value=0x70}, {.addr=0xf87b, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0xf87c, .a=0xad, .x=0x1c, .y=0x6b, .sp=0xd5, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0xf87a, .value=0x70}, {.addr=0xf87b, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0xf87a, .value=0x70, .type=IO_READ},
        {.addr=0xf87b, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02B7) {
    const struct CPU_State initial_cpu = {.pc=0x94f3, .a=0x25, .x=0x32, .y=0x7a, .sp=0x05, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x94f3, .value=0x70}, {.addr=0x94f4, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0x94f5, .a=0x25, .x=0x32, .y=0x7a, .sp=0x05, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x94f3, .value=0x70}, {.addr=0x94f4, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0x94f3, .value=0x70, .type=IO_READ},
        {.addr=0x94f4, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02B8) {
    const struct CPU_State initial_cpu = {.pc=0x701a, .a=0xc0, .x=0x18, .y=0xf0, .sp=0xe8, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x701a, .value=0x70}, {.addr=0x701b, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x7011, .a=0xc0, .x=0x18, .y=0xf0, .sp=0xe8, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x701a, .value=0x70}, {.addr=0x701b, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x701a, .value=0x70, .type=IO_READ},
        {.addr=0x701b, .value=0xf5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02B9) {
    const struct CPU_State initial_cpu = {.pc=0x2d18, .a=0x4d, .x=0x6e, .y=0x25, .sp=0x50, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x2d18, .value=0x70}, {.addr=0x2d19, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x2ca4, .a=0x4d, .x=0x6e, .y=0x25, .sp=0x50, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x2d18, .value=0x70}, {.addr=0x2d19, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x2d18, .value=0x70, .type=IO_READ},
        {.addr=0x2d19, .value=0x8a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02BA) {
    const struct CPU_State initial_cpu = {.pc=0xffaf, .a=0x02, .x=0x1d, .y=0x9d, .sp=0xea, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xffaf, .value=0x70}, {.addr=0xffb0, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0xffb1, .a=0x02, .x=0x1d, .y=0x9d, .sp=0xea, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0xffaf, .value=0x70}, {.addr=0xffb0, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0xffaf, .value=0x70, .type=IO_READ},
        {.addr=0xffb0, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02BB) {
    const struct CPU_State initial_cpu = {.pc=0x04b7, .a=0x52, .x=0x0e, .y=0xf7, .sp=0xee, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x04b7, .value=0x70}, {.addr=0x04b8, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0x04b7, .a=0x52, .x=0x0e, .y=0xf7, .sp=0xee, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x04b7, .value=0x70}, {.addr=0x04b8, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0x04b7, .value=0x70, .type=IO_READ},
        {.addr=0x04b8, .value=0xfe, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02BC) {
    const struct CPU_State initial_cpu = {.pc=0xa2e8, .a=0xed, .x=0xd0, .y=0x6a, .sp=0x0a, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xa2e8, .value=0x70}, {.addr=0xa2e9, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0xa2ea, .a=0xed, .x=0xd0, .y=0x6a, .sp=0x0a, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0xa2e8, .value=0x70}, {.addr=0xa2e9, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0xa2e8, .value=0x70, .type=IO_READ},
        {.addr=0xa2e9, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02BD) {
    const struct CPU_State initial_cpu = {.pc=0x68c4, .a=0x42, .x=0xf0, .y=0xb5, .sp=0x2c, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x68c4, .value=0x70}, {.addr=0x68c5, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0x68c6, .a=0x42, .x=0xf0, .y=0xb5, .sp=0x2c, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x68c4, .value=0x70}, {.addr=0x68c5, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0x68c4, .value=0x70, .type=IO_READ},
        {.addr=0x68c5, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02BE) {
    const struct CPU_State initial_cpu = {.pc=0x100f, .a=0xdc, .x=0xa4, .y=0x06, .sp=0x68, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x100f, .value=0x70}, {.addr=0x1010, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0x1011, .a=0xdc, .x=0xa4, .y=0x06, .sp=0x68, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x100f, .value=0x70}, {.addr=0x1010, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0x100f, .value=0x70, .type=IO_READ},
        {.addr=0x1010, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02BF) {
    const struct CPU_State initial_cpu = {.pc=0xf781, .a=0xc5, .x=0x28, .y=0x02, .sp=0xbb, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xf781, .value=0x70}, {.addr=0xf782, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0xf7c6, .a=0xc5, .x=0x28, .y=0x02, .sp=0xbb, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0xf781, .value=0x70}, {.addr=0xf782, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0xf781, .value=0x70, .type=IO_READ},
        {.addr=0xf782, .value=0x43, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x80e0, .a=0x4d, .x=0x80, .y=0x7c, .sp=0xdc, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x80e0, .value=0x70}, {.addr=0x80e1, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0x806e, .a=0x4d, .x=0x80, .y=0x7c, .sp=0xdc, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x80e0, .value=0x70}, {.addr=0x80e1, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0x80e0, .value=0x70, .type=IO_READ},
        {.addr=0x80e1, .value=0x8c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x8be0, .a=0xee, .x=0x0b, .y=0xe2, .sp=0xcd, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x8be0, .value=0x70}, {.addr=0x8be1, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0x8be2, .a=0xee, .x=0x0b, .y=0xe2, .sp=0xcd, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x8be0, .value=0x70}, {.addr=0x8be1, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0x8be0, .value=0x70, .type=IO_READ},
        {.addr=0x8be1, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02C2) {
    const struct CPU_State initial_cpu = {.pc=0xa6b2, .a=0xbd, .x=0x63, .y=0xa1, .sp=0x3e, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xa6b2, .value=0x70}, {.addr=0xa6b3, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0xa6ef, .a=0xbd, .x=0x63, .y=0xa1, .sp=0x3e, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xa6b2, .value=0x70}, {.addr=0xa6b3, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0xa6b2, .value=0x70, .type=IO_READ},
        {.addr=0xa6b3, .value=0x3b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02C3) {
    const struct CPU_State initial_cpu = {.pc=0x2e08, .a=0x9d, .x=0xba, .y=0xbc, .sp=0x5d, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x2e08, .value=0x70}, {.addr=0x2e09, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x2e55, .a=0x9d, .x=0xba, .y=0xbc, .sp=0x5d, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x2e08, .value=0x70}, {.addr=0x2e09, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x2e08, .value=0x70, .type=IO_READ},
        {.addr=0x2e09, .value=0x4b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02C4) {
    const struct CPU_State initial_cpu = {.pc=0x93e4, .a=0xa5, .x=0x6f, .y=0xde, .sp=0x83, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x93e4, .value=0x70}, {.addr=0x93e5, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x93fd, .a=0xa5, .x=0x6f, .y=0xde, .sp=0x83, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x93e4, .value=0x70}, {.addr=0x93e5, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x93e4, .value=0x70, .type=IO_READ},
        {.addr=0x93e5, .value=0x17, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x56ea, .a=0x04, .x=0x2d, .y=0xcf, .sp=0xa7, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x56ea, .value=0x70}, {.addr=0x56eb, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0x576a, .a=0x04, .x=0x2d, .y=0xcf, .sp=0xa7, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x56ea, .value=0x70}, {.addr=0x56eb, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0x56ea, .value=0x70, .type=IO_READ},
        {.addr=0x56eb, .value=0x7e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02C6) {
    const struct CPU_State initial_cpu = {.pc=0x328c, .a=0xbe, .x=0x8a, .y=0xf6, .sp=0x2f, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x328c, .value=0x70}, {.addr=0x328d, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x328e, .a=0xbe, .x=0x8a, .y=0xf6, .sp=0x2f, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x328c, .value=0x70}, {.addr=0x328d, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x328c, .value=0x70, .type=IO_READ},
        {.addr=0x328d, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02C7) {
    const struct CPU_State initial_cpu = {.pc=0x9e11, .a=0x1e, .x=0xb6, .y=0x3d, .sp=0x3c, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x9e11, .value=0x70}, {.addr=0x9e12, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0x9e13, .a=0x1e, .x=0xb6, .y=0x3d, .sp=0x3c, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x9e11, .value=0x70}, {.addr=0x9e12, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0x9e11, .value=0x70, .type=IO_READ},
        {.addr=0x9e12, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02C8) {
    const struct CPU_State initial_cpu = {.pc=0x157b, .a=0x31, .x=0x4e, .y=0x1e, .sp=0x72, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x157b, .value=0x70}, {.addr=0x157c, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x157d, .a=0x31, .x=0x4e, .y=0x1e, .sp=0x72, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x157b, .value=0x70}, {.addr=0x157c, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x157b, .value=0x70, .type=IO_READ},
        {.addr=0x157c, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02C9) {
    const struct CPU_State initial_cpu = {.pc=0x601b, .a=0xd3, .x=0xde, .y=0x8e, .sp=0x10, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x601b, .value=0x70}, {.addr=0x601c, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x601d, .a=0xd3, .x=0xde, .y=0x8e, .sp=0x10, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x601b, .value=0x70}, {.addr=0x601c, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x601b, .value=0x70, .type=IO_READ},
        {.addr=0x601c, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02CA) {
    const struct CPU_State initial_cpu = {.pc=0xc6f3, .a=0x40, .x=0x8d, .y=0xd0, .sp=0xf2, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xc6f3, .value=0x70}, {.addr=0xc6f4, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0xc700, .a=0x40, .x=0x8d, .y=0xd0, .sp=0xf2, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0xc6f3, .value=0x70}, {.addr=0xc6f4, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0xc6f3, .value=0x70, .type=IO_READ},
        {.addr=0xc6f4, .value=0x0b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02CB) {
    const struct CPU_State initial_cpu = {.pc=0x1fa1, .a=0x07, .x=0x56, .y=0x3b, .sp=0x2d, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x1fa1, .value=0x70}, {.addr=0x1fa2, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x1fa3, .a=0x07, .x=0x56, .y=0x3b, .sp=0x2d, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x1fa1, .value=0x70}, {.addr=0x1fa2, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x1fa1, .value=0x70, .type=IO_READ},
        {.addr=0x1fa2, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02CC) {
    const struct CPU_State initial_cpu = {.pc=0x37a1, .a=0xa8, .x=0x2a, .y=0x8f, .sp=0x82, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x37a1, .value=0x70}, {.addr=0x37a2, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0x37a3, .a=0xa8, .x=0x2a, .y=0x8f, .sp=0x82, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x37a1, .value=0x70}, {.addr=0x37a2, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0x37a1, .value=0x70, .type=IO_READ},
        {.addr=0x37a2, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x2a64, .a=0xd2, .x=0xcc, .y=0xff, .sp=0x04, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x2a64, .value=0x70}, {.addr=0x2a65, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x2a66, .a=0xd2, .x=0xcc, .y=0xff, .sp=0x04, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x2a64, .value=0x70}, {.addr=0x2a65, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x2a64, .value=0x70, .type=IO_READ},
        {.addr=0x2a65, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x3c64, .a=0x91, .x=0xab, .y=0x47, .sp=0x96, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x3c64, .value=0x70}, {.addr=0x3c65, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0x3c66, .a=0x91, .x=0xab, .y=0x47, .sp=0x96, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x3c64, .value=0x70}, {.addr=0x3c65, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0x3c64, .value=0x70, .type=IO_READ},
        {.addr=0x3c65, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02CF) {
    const struct CPU_State initial_cpu = {.pc=0x09e4, .a=0xe7, .x=0xc5, .y=0x9f, .sp=0xb5, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x09e4, .value=0x70}, {.addr=0x09e5, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x0a02, .a=0xe7, .x=0xc5, .y=0x9f, .sp=0xb5, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x09e4, .value=0x70}, {.addr=0x09e5, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x09e4, .value=0x70, .type=IO_READ},
        {.addr=0x09e5, .value=0x1c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02D0) {
    const struct CPU_State initial_cpu = {.pc=0xbb7a, .a=0xb9, .x=0x3b, .y=0xa0, .sp=0x30, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xbb7a, .value=0x70}, {.addr=0xbb7b, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0xbb7c, .a=0xb9, .x=0x3b, .y=0xa0, .sp=0x30, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0xbb7a, .value=0x70}, {.addr=0xbb7b, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0xbb7a, .value=0x70, .type=IO_READ},
        {.addr=0xbb7b, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02D1) {
    const struct CPU_State initial_cpu = {.pc=0xd4de, .a=0xf6, .x=0x7e, .y=0x75, .sp=0x8c, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xd4de, .value=0x70}, {.addr=0xd4df, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0xd4e0, .a=0xf6, .x=0x7e, .y=0x75, .sp=0x8c, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0xd4de, .value=0x70}, {.addr=0xd4df, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0xd4de, .value=0x70, .type=IO_READ},
        {.addr=0xd4df, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x774e, .a=0xec, .x=0xa3, .y=0xe6, .sp=0x1e, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x774e, .value=0x70}, {.addr=0x774f, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0x771c, .a=0xec, .x=0xa3, .y=0xe6, .sp=0x1e, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x774e, .value=0x70}, {.addr=0x774f, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0x774e, .value=0x70, .type=IO_READ},
        {.addr=0x774f, .value=0xcc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x3afe, .a=0x5f, .x=0x1f, .y=0x4a, .sp=0x99, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x3afe, .value=0x70}, {.addr=0x3aff, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x3ac0, .a=0x5f, .x=0x1f, .y=0x4a, .sp=0x99, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x3afe, .value=0x70}, {.addr=0x3aff, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x3afe, .value=0x70, .type=IO_READ},
        {.addr=0x3aff, .value=0xc0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02D4) {
    const struct CPU_State initial_cpu = {.pc=0xcd21, .a=0x0c, .x=0x53, .y=0xa3, .sp=0x0d, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xcd21, .value=0x70}, {.addr=0xcd22, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0xcd23, .a=0x0c, .x=0x53, .y=0xa3, .sp=0x0d, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0xcd21, .value=0x70}, {.addr=0xcd22, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0xcd21, .value=0x70, .type=IO_READ},
        {.addr=0xcd22, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02D5) {
    const struct CPU_State initial_cpu = {.pc=0xca2c, .a=0x49, .x=0xc4, .y=0x6d, .sp=0xe5, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xca2c, .value=0x70}, {.addr=0xca2d, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0xca2e, .a=0x49, .x=0xc4, .y=0x6d, .sp=0xe5, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xca2c, .value=0x70}, {.addr=0xca2d, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0xca2c, .value=0x70, .type=IO_READ},
        {.addr=0xca2d, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02D6) {
    const struct CPU_State initial_cpu = {.pc=0x2905, .a=0x37, .x=0x39, .y=0x61, .sp=0x78, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x2905, .value=0x70}, {.addr=0x2906, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x28e5, .a=0x37, .x=0x39, .y=0x61, .sp=0x78, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x2905, .value=0x70}, {.addr=0x2906, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x2905, .value=0x70, .type=IO_READ},
        {.addr=0x2906, .value=0xde, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x943c, .a=0x83, .x=0xa5, .y=0xc2, .sp=0xbb, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x943c, .value=0x70}, {.addr=0x943d, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x9482, .a=0x83, .x=0xa5, .y=0xc2, .sp=0xbb, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x943c, .value=0x70}, {.addr=0x943d, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x943c, .value=0x70, .type=IO_READ},
        {.addr=0x943d, .value=0x44, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02D8) {
    const struct CPU_State initial_cpu = {.pc=0xc3f9, .a=0xc5, .x=0x29, .y=0xb0, .sp=0xe4, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xc3f9, .value=0x70}, {.addr=0xc3fa, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0xc3fb, .a=0xc5, .x=0x29, .y=0xb0, .sp=0xe4, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xc3f9, .value=0x70}, {.addr=0xc3fa, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0xc3f9, .value=0x70, .type=IO_READ},
        {.addr=0xc3fa, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02D9) {
    const struct CPU_State initial_cpu = {.pc=0x72c5, .a=0x71, .x=0x3d, .y=0xaf, .sp=0xfa, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x72c5, .value=0x70}, {.addr=0x72c6, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x7285, .a=0x71, .x=0x3d, .y=0xaf, .sp=0xfa, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x72c5, .value=0x70}, {.addr=0x72c6, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x72c5, .value=0x70, .type=IO_READ},
        {.addr=0x72c6, .value=0xbe, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02DA) {
    const struct CPU_State initial_cpu = {.pc=0x3a79, .a=0xd3, .x=0xa4, .y=0x94, .sp=0xd6, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x3a79, .value=0x70}, {.addr=0x3a7a, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0x3a64, .a=0xd3, .x=0xa4, .y=0x94, .sp=0xd6, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x3a79, .value=0x70}, {.addr=0x3a7a, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0x3a79, .value=0x70, .type=IO_READ},
        {.addr=0x3a7a, .value=0xe9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02DB) {
    const struct CPU_State initial_cpu = {.pc=0x8988, .a=0xba, .x=0xe3, .y=0x84, .sp=0x5c, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x8988, .value=0x70}, {.addr=0x8989, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0x8912, .a=0xba, .x=0xe3, .y=0x84, .sp=0x5c, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x8988, .value=0x70}, {.addr=0x8989, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0x8988, .value=0x70, .type=IO_READ},
        {.addr=0x8989, .value=0x88, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x4eb2, .a=0x55, .x=0xcd, .y=0xc2, .sp=0x6b, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x4eb2, .value=0x70}, {.addr=0x4eb3, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x4eb4, .a=0x55, .x=0xcd, .y=0xc2, .sp=0x6b, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x4eb2, .value=0x70}, {.addr=0x4eb3, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x4eb2, .value=0x70, .type=IO_READ},
        {.addr=0x4eb3, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02DD) {
    const struct CPU_State initial_cpu = {.pc=0xb931, .a=0x46, .x=0x07, .y=0xbb, .sp=0x8e, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xb931, .value=0x70}, {.addr=0xb932, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0xb935, .a=0x46, .x=0x07, .y=0xbb, .sp=0x8e, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xb931, .value=0x70}, {.addr=0xb932, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0xb931, .value=0x70, .type=IO_READ},
        {.addr=0xb932, .value=0x02, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02DE) {
    const struct CPU_State initial_cpu = {.pc=0x4bef, .a=0x26, .x=0x92, .y=0xb6, .sp=0x06, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x4bef, .value=0x70}, {.addr=0x4bf0, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x4bf1, .a=0x26, .x=0x92, .y=0xb6, .sp=0x06, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x4bef, .value=0x70}, {.addr=0x4bf0, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x4bef, .value=0x70, .type=IO_READ},
        {.addr=0x4bf0, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02DF) {
    const struct CPU_State initial_cpu = {.pc=0xe13e, .a=0x40, .x=0x90, .y=0x92, .sp=0xf4, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xe13e, .value=0x70}, {.addr=0xe13f, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xe106, .a=0x40, .x=0x90, .y=0x92, .sp=0xf4, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0xe13e, .value=0x70}, {.addr=0xe13f, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xe13e, .value=0x70, .type=IO_READ},
        {.addr=0xe13f, .value=0xc6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02E0) {
    const struct CPU_State initial_cpu = {.pc=0x5b25, .a=0xc6, .x=0x54, .y=0x88, .sp=0x2a, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x5b25, .value=0x70}, {.addr=0x5b26, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x5b27, .a=0xc6, .x=0x54, .y=0x88, .sp=0x2a, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x5b25, .value=0x70}, {.addr=0x5b26, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x5b25, .value=0x70, .type=IO_READ},
        {.addr=0x5b26, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02E1) {
    const struct CPU_State initial_cpu = {.pc=0xa939, .a=0x55, .x=0xd7, .y=0x00, .sp=0xf8, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xa939, .value=0x70}, {.addr=0xa93a, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0xa93b, .a=0x55, .x=0xd7, .y=0x00, .sp=0xf8, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xa939, .value=0x70}, {.addr=0xa93a, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0xa939, .value=0x70, .type=IO_READ},
        {.addr=0xa93a, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02E2) {
    const struct CPU_State initial_cpu = {.pc=0x1972, .a=0x4e, .x=0x04, .y=0x6b, .sp=0x9d, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x1972, .value=0x70}, {.addr=0x1973, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x1994, .a=0x4e, .x=0x04, .y=0x6b, .sp=0x9d, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x1972, .value=0x70}, {.addr=0x1973, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x1972, .value=0x70, .type=IO_READ},
        {.addr=0x1973, .value=0x20, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02E3) {
    const struct CPU_State initial_cpu = {.pc=0xb98e, .a=0x46, .x=0x0e, .y=0x5b, .sp=0x53, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xb98e, .value=0x70}, {.addr=0xb98f, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xb990, .a=0x46, .x=0x0e, .y=0x5b, .sp=0x53, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xb98e, .value=0x70}, {.addr=0xb98f, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xb98e, .value=0x70, .type=IO_READ},
        {.addr=0xb98f, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02E4) {
    const struct CPU_State initial_cpu = {.pc=0x6c65, .a=0x03, .x=0xe6, .y=0xc0, .sp=0x94, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x6c65, .value=0x70}, {.addr=0x6c66, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0x6cd0, .a=0x03, .x=0xe6, .y=0xc0, .sp=0x94, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x6c65, .value=0x70}, {.addr=0x6c66, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0x6c65, .value=0x70, .type=IO_READ},
        {.addr=0x6c66, .value=0x69, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02E5) {
    const struct CPU_State initial_cpu = {.pc=0x9a04, .a=0x38, .x=0x9d, .y=0xcb, .sp=0x54, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x9a04, .value=0x70}, {.addr=0x9a05, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0x9a06, .a=0x38, .x=0x9d, .y=0xcb, .sp=0x54, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x9a04, .value=0x70}, {.addr=0x9a05, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0x9a04, .value=0x70, .type=IO_READ},
        {.addr=0x9a05, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02E6) {
    const struct CPU_State initial_cpu = {.pc=0xf828, .a=0x53, .x=0x64, .y=0x34, .sp=0xb6, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xf828, .value=0x70}, {.addr=0xf829, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xf88a, .a=0x53, .x=0x64, .y=0x34, .sp=0xb6, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0xf828, .value=0x70}, {.addr=0xf829, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xf828, .value=0x70, .type=IO_READ},
        {.addr=0xf829, .value=0x60, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02E7) {
    const struct CPU_State initial_cpu = {.pc=0x138f, .a=0xfa, .x=0x4c, .y=0x79, .sp=0x98, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x138f, .value=0x70}, {.addr=0x1390, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0x1391, .a=0xfa, .x=0x4c, .y=0x79, .sp=0x98, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x138f, .value=0x70}, {.addr=0x1390, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0x138f, .value=0x70, .type=IO_READ},
        {.addr=0x1390, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02E8) {
    const struct CPU_State initial_cpu = {.pc=0x5728, .a=0x1b, .x=0xcd, .y=0x0e, .sp=0xe8, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x5728, .value=0x70}, {.addr=0x5729, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x572a, .a=0x1b, .x=0xcd, .y=0x0e, .sp=0xe8, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x5728, .value=0x70}, {.addr=0x5729, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x5728, .value=0x70, .type=IO_READ},
        {.addr=0x5729, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x6889, .a=0x37, .x=0xd8, .y=0x5b, .sp=0x7a, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x6889, .value=0x70}, {.addr=0x688a, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0x688b, .a=0x37, .x=0xd8, .y=0x5b, .sp=0x7a, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x6889, .value=0x70}, {.addr=0x688a, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0x6889, .value=0x70, .type=IO_READ},
        {.addr=0x688a, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x3390, .a=0x35, .x=0xbb, .y=0x7e, .sp=0x18, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x3390, .value=0x70}, {.addr=0x3391, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x339b, .a=0x35, .x=0xbb, .y=0x7e, .sp=0x18, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x3390, .value=0x70}, {.addr=0x3391, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x3390, .value=0x70, .type=IO_READ},
        {.addr=0x3391, .value=0x09, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x7b36, .a=0x7e, .x=0x8d, .y=0x27, .sp=0xa9, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x7b36, .value=0x70}, {.addr=0x7b37, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0x7b0e, .a=0x7e, .x=0x8d, .y=0x27, .sp=0xa9, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x7b36, .value=0x70}, {.addr=0x7b37, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0x7b36, .value=0x70, .type=IO_READ},
        {.addr=0x7b37, .value=0xd6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02EC) {
    const struct CPU_State initial_cpu = {.pc=0xefc3, .a=0x52, .x=0x5e, .y=0x49, .sp=0x74, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xefc3, .value=0x70}, {.addr=0xefc4, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0xeffd, .a=0x52, .x=0x5e, .y=0x49, .sp=0x74, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0xefc3, .value=0x70}, {.addr=0xefc4, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0xefc3, .value=0x70, .type=IO_READ},
        {.addr=0xefc4, .value=0x38, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02ED) {
    const struct CPU_State initial_cpu = {.pc=0xe95a, .a=0x30, .x=0xd3, .y=0x98, .sp=0x42, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xe95a, .value=0x70}, {.addr=0xe95b, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0xe98a, .a=0x30, .x=0xd3, .y=0x98, .sp=0x42, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0xe95a, .value=0x70}, {.addr=0xe95b, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0xe95a, .value=0x70, .type=IO_READ},
        {.addr=0xe95b, .value=0x2e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02EE) {
    const struct CPU_State initial_cpu = {.pc=0xf473, .a=0x26, .x=0xc2, .y=0xdb, .sp=0x2c, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xf473, .value=0x70}, {.addr=0xf474, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0xf48a, .a=0x26, .x=0xc2, .y=0xdb, .sp=0x2c, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0xf473, .value=0x70}, {.addr=0xf474, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0xf473, .value=0x70, .type=IO_READ},
        {.addr=0xf474, .value=0x15, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02EF) {
    const struct CPU_State initial_cpu = {.pc=0x8ff8, .a=0x3b, .x=0x56, .y=0x68, .sp=0x5c, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x8ff8, .value=0x70}, {.addr=0x8ff9, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0x8f93, .a=0x3b, .x=0x56, .y=0x68, .sp=0x5c, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x8ff8, .value=0x70}, {.addr=0x8ff9, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0x8ff8, .value=0x70, .type=IO_READ},
        {.addr=0x8ff9, .value=0x99, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02F0) {
    const struct CPU_State initial_cpu = {.pc=0xdf89, .a=0xb2, .x=0x61, .y=0x82, .sp=0xf0, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xdf89, .value=0x70}, {.addr=0xdf8a, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0xe005, .a=0xb2, .x=0x61, .y=0x82, .sp=0xf0, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xdf89, .value=0x70}, {.addr=0xdf8a, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0xdf89, .value=0x70, .type=IO_READ},
        {.addr=0xdf8a, .value=0x7a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02F1) {
    const struct CPU_State initial_cpu = {.pc=0xf8fe, .a=0x08, .x=0xc7, .y=0x7a, .sp=0x05, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xf8fe, .value=0x70}, {.addr=0xf8ff, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0xf900, .a=0x08, .x=0xc7, .y=0x7a, .sp=0x05, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xf8fe, .value=0x70}, {.addr=0xf8ff, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0xf8fe, .value=0x70, .type=IO_READ},
        {.addr=0xf8ff, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02F2) {
    const struct CPU_State initial_cpu = {.pc=0xeb8d, .a=0xf1, .x=0x1d, .y=0xa6, .sp=0x0a, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xeb8d, .value=0x70}, {.addr=0xeb8e, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0xec09, .a=0xf1, .x=0x1d, .y=0xa6, .sp=0x0a, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xeb8d, .value=0x70}, {.addr=0xeb8e, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0xeb8d, .value=0x70, .type=IO_READ},
        {.addr=0xeb8e, .value=0x7a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02F3) {
    const struct CPU_State initial_cpu = {.pc=0x6578, .a=0xdb, .x=0x6b, .y=0x46, .sp=0x78, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x6578, .value=0x70}, {.addr=0x6579, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x6504, .a=0xdb, .x=0x6b, .y=0x46, .sp=0x78, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x6578, .value=0x70}, {.addr=0x6579, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x6578, .value=0x70, .type=IO_READ},
        {.addr=0x6579, .value=0x8a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02F4) {
    const struct CPU_State initial_cpu = {.pc=0x3ecf, .a=0x37, .x=0xa1, .y=0xff, .sp=0x36, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x3ecf, .value=0x70}, {.addr=0x3ed0, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x3ecd, .a=0x37, .x=0xa1, .y=0xff, .sp=0x36, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x3ecf, .value=0x70}, {.addr=0x3ed0, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x3ecf, .value=0x70, .type=IO_READ},
        {.addr=0x3ed0, .value=0xfc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x4569, .a=0xc2, .x=0x1b, .y=0xab, .sp=0x49, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x4569, .value=0x70}, {.addr=0x456a, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x44fb, .a=0xc2, .x=0x1b, .y=0xab, .sp=0x49, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x4569, .value=0x70}, {.addr=0x456a, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x4569, .value=0x70, .type=IO_READ},
        {.addr=0x456a, .value=0x90, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02F6) {
    const struct CPU_State initial_cpu = {.pc=0xc4bd, .a=0x87, .x=0x23, .y=0xf4, .sp=0x52, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xc4bd, .value=0x70}, {.addr=0xc4be, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0xc4bf, .a=0x87, .x=0x23, .y=0xf4, .sp=0x52, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0xc4bd, .value=0x70}, {.addr=0xc4be, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0xc4bd, .value=0x70, .type=IO_READ},
        {.addr=0xc4be, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x9835, .a=0xec, .x=0x52, .y=0x53, .sp=0x53, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x9835, .value=0x70}, {.addr=0x9836, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x987a, .a=0xec, .x=0x52, .y=0x53, .sp=0x53, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x9835, .value=0x70}, {.addr=0x9836, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x9835, .value=0x70, .type=IO_READ},
        {.addr=0x9836, .value=0x43, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02F8) {
    const struct CPU_State initial_cpu = {.pc=0xd661, .a=0x70, .x=0x8e, .y=0x62, .sp=0xb3, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xd661, .value=0x70}, {.addr=0xd662, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0xd663, .a=0x70, .x=0x8e, .y=0x62, .sp=0xb3, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xd661, .value=0x70}, {.addr=0xd662, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0xd661, .value=0x70, .type=IO_READ},
        {.addr=0xd662, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02F9) {
    const struct CPU_State initial_cpu = {.pc=0x22c3, .a=0xed, .x=0xaa, .y=0x6f, .sp=0x72, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x22c3, .value=0x70}, {.addr=0x22c4, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0x225a, .a=0xed, .x=0xaa, .y=0x6f, .sp=0x72, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x22c3, .value=0x70}, {.addr=0x22c4, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0x22c3, .value=0x70, .type=IO_READ},
        {.addr=0x22c4, .value=0x95, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02FA) {
    const struct CPU_State initial_cpu = {.pc=0xb192, .a=0x55, .x=0x99, .y=0x5c, .sp=0xb9, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xb192, .value=0x70}, {.addr=0xb193, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0xb194, .a=0x55, .x=0x99, .y=0x5c, .sp=0xb9, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0xb192, .value=0x70}, {.addr=0xb193, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0xb192, .value=0x70, .type=IO_READ},
        {.addr=0xb193, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02FB) {
    const struct CPU_State initial_cpu = {.pc=0x3f52, .a=0x1c, .x=0x56, .y=0xa6, .sp=0x80, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x3f52, .value=0x70}, {.addr=0x3f53, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x3f8c, .a=0x1c, .x=0x56, .y=0xa6, .sp=0x80, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x3f52, .value=0x70}, {.addr=0x3f53, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x3f52, .value=0x70, .type=IO_READ},
        {.addr=0x3f53, .value=0x38, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02FC) {
    const struct CPU_State initial_cpu = {.pc=0xd511, .a=0x1f, .x=0xf1, .y=0xb0, .sp=0x32, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xd511, .value=0x70}, {.addr=0xd512, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0xd564, .a=0x1f, .x=0xf1, .y=0xb0, .sp=0x32, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xd511, .value=0x70}, {.addr=0xd512, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0xd511, .value=0x70, .type=IO_READ},
        {.addr=0xd512, .value=0x51, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02FD) {
    const struct CPU_State initial_cpu = {.pc=0xa6ef, .a=0x3a, .x=0x06, .y=0x6e, .sp=0xf3, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xa6ef, .value=0x70}, {.addr=0xa6f0, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0xa688, .a=0x3a, .x=0x06, .y=0x6e, .sp=0xf3, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xa6ef, .value=0x70}, {.addr=0xa6f0, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0xa6ef, .value=0x70, .type=IO_READ},
        {.addr=0xa6f0, .value=0x97, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02FE) {
    const struct CPU_State initial_cpu = {.pc=0x6318, .a=0x42, .x=0xbf, .y=0xcc, .sp=0x72, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x6318, .value=0x70}, {.addr=0x6319, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0x631a, .a=0x42, .x=0xbf, .y=0xcc, .sp=0x72, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x6318, .value=0x70}, {.addr=0x6319, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0x6318, .value=0x70, .type=IO_READ},
        {.addr=0x6319, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x62e9, .a=0x5c, .x=0x1b, .y=0x80, .sp=0x8e, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x62e9, .value=0x70}, {.addr=0x62ea, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x6323, .a=0x5c, .x=0x1b, .y=0x80, .sp=0x8e, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x62e9, .value=0x70}, {.addr=0x62ea, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x62e9, .value=0x70, .type=IO_READ},
        {.addr=0x62ea, .value=0x38, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0300) {
    const struct CPU_State initial_cpu = {.pc=0x717d, .a=0xa1, .x=0xe5, .y=0x14, .sp=0x10, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x717d, .value=0x70}, {.addr=0x717e, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x717f, .a=0xa1, .x=0xe5, .y=0x14, .sp=0x10, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x717d, .value=0x70}, {.addr=0x717e, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x717d, .value=0x70, .type=IO_READ},
        {.addr=0x717e, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0301) {
    const struct CPU_State initial_cpu = {.pc=0x1de8, .a=0x9f, .x=0xcc, .y=0x2b, .sp=0xf8, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x1de8, .value=0x70}, {.addr=0x1de9, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0x1dea, .a=0x9f, .x=0xcc, .y=0x2b, .sp=0xf8, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x1de8, .value=0x70}, {.addr=0x1de9, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0x1de8, .value=0x70, .type=IO_READ},
        {.addr=0x1de9, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0302) {
    const struct CPU_State initial_cpu = {.pc=0x4fb6, .a=0x37, .x=0x97, .y=0x5d, .sp=0x63, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x4fb6, .value=0x70}, {.addr=0x4fb7, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x4fb8, .a=0x37, .x=0x97, .y=0x5d, .sp=0x63, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x4fb6, .value=0x70}, {.addr=0x4fb7, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x4fb6, .value=0x70, .type=IO_READ},
        {.addr=0x4fb7, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0303) {
    const struct CPU_State initial_cpu = {.pc=0xdf15, .a=0x0b, .x=0xdf, .y=0xde, .sp=0x61, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xdf15, .value=0x70}, {.addr=0xdf16, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0xdf00, .a=0x0b, .x=0xdf, .y=0xde, .sp=0x61, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0xdf15, .value=0x70}, {.addr=0xdf16, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0xdf15, .value=0x70, .type=IO_READ},
        {.addr=0xdf16, .value=0xe9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0304) {
    const struct CPU_State initial_cpu = {.pc=0x4677, .a=0x29, .x=0xa6, .y=0xc7, .sp=0x2e, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x4677, .value=0x70}, {.addr=0x4678, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x4679, .a=0x29, .x=0xa6, .y=0xc7, .sp=0x2e, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x4677, .value=0x70}, {.addr=0x4678, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x4677, .value=0x70, .type=IO_READ},
        {.addr=0x4678, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0305) {
    const struct CPU_State initial_cpu = {.pc=0xa966, .a=0x3d, .x=0x76, .y=0xb6, .sp=0xdc, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xa966, .value=0x70}, {.addr=0xa967, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xa968, .a=0x3d, .x=0x76, .y=0xb6, .sp=0xdc, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0xa966, .value=0x70}, {.addr=0xa967, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xa966, .value=0x70, .type=IO_READ},
        {.addr=0xa967, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0306) {
    const struct CPU_State initial_cpu = {.pc=0x0806, .a=0xd4, .x=0xe9, .y=0x3c, .sp=0xc3, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x0806, .value=0x70}, {.addr=0x0807, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x0808, .a=0xd4, .x=0xe9, .y=0x3c, .sp=0xc3, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x0806, .value=0x70}, {.addr=0x0807, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x0806, .value=0x70, .type=IO_READ},
        {.addr=0x0807, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0307) {
    const struct CPU_State initial_cpu = {.pc=0x3a27, .a=0x0e, .x=0xf9, .y=0x69, .sp=0x03, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x3a27, .value=0x70}, {.addr=0x3a28, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x3a29, .a=0x0e, .x=0xf9, .y=0x69, .sp=0x03, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x3a27, .value=0x70}, {.addr=0x3a28, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x3a27, .value=0x70, .type=IO_READ},
        {.addr=0x3a28, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0308) {
    const struct CPU_State initial_cpu = {.pc=0xa068, .a=0x17, .x=0xd7, .y=0x9d, .sp=0x29, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xa068, .value=0x70}, {.addr=0xa069, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0xa06a, .a=0x17, .x=0xd7, .y=0x9d, .sp=0x29, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xa068, .value=0x70}, {.addr=0xa069, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0xa068, .value=0x70, .type=IO_READ},
        {.addr=0xa069, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0309) {
    const struct CPU_State initial_cpu = {.pc=0x4ed1, .a=0x25, .x=0xd0, .y=0xd0, .sp=0x84, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x4ed1, .value=0x70}, {.addr=0x4ed2, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0x4e96, .a=0x25, .x=0xd0, .y=0xd0, .sp=0x84, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x4ed1, .value=0x70}, {.addr=0x4ed2, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0x4ed1, .value=0x70, .type=IO_READ},
        {.addr=0x4ed2, .value=0xc3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_030A) {
    const struct CPU_State initial_cpu = {.pc=0x4a8c, .a=0x16, .x=0x36, .y=0xb7, .sp=0x41, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x4a8c, .value=0x70}, {.addr=0x4a8d, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0x4a8e, .a=0x16, .x=0x36, .y=0xb7, .sp=0x41, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x4a8c, .value=0x70}, {.addr=0x4a8d, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0x4a8c, .value=0x70, .type=IO_READ},
        {.addr=0x4a8d, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_030B) {
    const struct CPU_State initial_cpu = {.pc=0xf68a, .a=0x80, .x=0x1b, .y=0x96, .sp=0x66, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xf68a, .value=0x70}, {.addr=0xf68b, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0xf644, .a=0x80, .x=0x1b, .y=0x96, .sp=0x66, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0xf68a, .value=0x70}, {.addr=0xf68b, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0xf68a, .value=0x70, .type=IO_READ},
        {.addr=0xf68b, .value=0xb8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_030C) {
    const struct CPU_State initial_cpu = {.pc=0xa927, .a=0x21, .x=0x41, .y=0xcf, .sp=0x02, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xa927, .value=0x70}, {.addr=0xa928, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0xa929, .a=0x21, .x=0x41, .y=0xcf, .sp=0x02, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0xa927, .value=0x70}, {.addr=0xa928, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0xa927, .value=0x70, .type=IO_READ},
        {.addr=0xa928, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_030D) {
    const struct CPU_State initial_cpu = {.pc=0x1151, .a=0xab, .x=0x35, .y=0x9d, .sp=0x30, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x1151, .value=0x70}, {.addr=0x1152, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x110f, .a=0xab, .x=0x35, .y=0x9d, .sp=0x30, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x1151, .value=0x70}, {.addr=0x1152, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x1151, .value=0x70, .type=IO_READ},
        {.addr=0x1152, .value=0xbc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_030E) {
    const struct CPU_State initial_cpu = {.pc=0x92f2, .a=0xbe, .x=0x01, .y=0x1b, .sp=0x83, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x92f2, .value=0x70}, {.addr=0x92f3, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x933d, .a=0xbe, .x=0x01, .y=0x1b, .sp=0x83, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x92f2, .value=0x70}, {.addr=0x92f3, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x92f2, .value=0x70, .type=IO_READ},
        {.addr=0x92f3, .value=0x49, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_030F) {
    const struct CPU_State initial_cpu = {.pc=0x989c, .a=0x46, .x=0x69, .y=0x6e, .sp=0x0e, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x989c, .value=0x70}, {.addr=0x989d, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x989e, .a=0x46, .x=0x69, .y=0x6e, .sp=0x0e, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x989c, .value=0x70}, {.addr=0x989d, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x989c, .value=0x70, .type=IO_READ},
        {.addr=0x989d, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0310) {
    const struct CPU_State initial_cpu = {.pc=0x1ce4, .a=0xcd, .x=0x39, .y=0x0e, .sp=0xed, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x1ce4, .value=0x70}, {.addr=0x1ce5, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x1cfe, .a=0xcd, .x=0x39, .y=0x0e, .sp=0xed, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x1ce4, .value=0x70}, {.addr=0x1ce5, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x1ce4, .value=0x70, .type=IO_READ},
        {.addr=0x1ce5, .value=0x18, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0311) {
    const struct CPU_State initial_cpu = {.pc=0xbfb4, .a=0x8a, .x=0x7e, .y=0xda, .sp=0x83, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xbfb4, .value=0x70}, {.addr=0xbfb5, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0xbf9d, .a=0x8a, .x=0x7e, .y=0xda, .sp=0x83, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0xbfb4, .value=0x70}, {.addr=0xbfb5, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0xbfb4, .value=0x70, .type=IO_READ},
        {.addr=0xbfb5, .value=0xe7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0312) {
    const struct CPU_State initial_cpu = {.pc=0xb54c, .a=0xf2, .x=0xde, .y=0xf7, .sp=0x00, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xb54c, .value=0x70}, {.addr=0xb54d, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0xb5a6, .a=0xf2, .x=0xde, .y=0xf7, .sp=0x00, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xb54c, .value=0x70}, {.addr=0xb54d, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0xb54c, .value=0x70, .type=IO_READ},
        {.addr=0xb54d, .value=0x58, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0313) {
    const struct CPU_State initial_cpu = {.pc=0xdbd5, .a=0x0a, .x=0xcd, .y=0xa0, .sp=0x7d, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xdbd5, .value=0x70}, {.addr=0xdbd6, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0xdb59, .a=0x0a, .x=0xcd, .y=0xa0, .sp=0x7d, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0xdbd5, .value=0x70}, {.addr=0xdbd6, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0xdbd5, .value=0x70, .type=IO_READ},
        {.addr=0xdbd6, .value=0x82, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0314) {
    const struct CPU_State initial_cpu = {.pc=0xb1d7, .a=0x33, .x=0xfe, .y=0x4d, .sp=0xfa, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xb1d7, .value=0x70}, {.addr=0xb1d8, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0xb1d9, .a=0x33, .x=0xfe, .y=0x4d, .sp=0xfa, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xb1d7, .value=0x70}, {.addr=0xb1d8, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0xb1d7, .value=0x70, .type=IO_READ},
        {.addr=0xb1d8, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0315) {
    const struct CPU_State initial_cpu = {.pc=0x77e7, .a=0x81, .x=0x31, .y=0xe4, .sp=0xab, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x77e7, .value=0x70}, {.addr=0x77e8, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x77a5, .a=0x81, .x=0x31, .y=0xe4, .sp=0xab, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x77e7, .value=0x70}, {.addr=0x77e8, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x77e7, .value=0x70, .type=IO_READ},
        {.addr=0x77e8, .value=0xbc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0316) {
    const struct CPU_State initial_cpu = {.pc=0x42f8, .a=0x56, .x=0xc4, .y=0xba, .sp=0x3a, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x42f8, .value=0x70}, {.addr=0x42f9, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0x42db, .a=0x56, .x=0xc4, .y=0xba, .sp=0x3a, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x42f8, .value=0x70}, {.addr=0x42f9, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0x42f8, .value=0x70, .type=IO_READ},
        {.addr=0x42f9, .value=0xe1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0317) {
    const struct CPU_State initial_cpu = {.pc=0xf52c, .a=0x3f, .x=0x0b, .y=0x14, .sp=0xb2, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xf52c, .value=0x70}, {.addr=0xf52d, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0xf597, .a=0x3f, .x=0x0b, .y=0x14, .sp=0xb2, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xf52c, .value=0x70}, {.addr=0xf52d, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0xf52c, .value=0x70, .type=IO_READ},
        {.addr=0xf52d, .value=0x69, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0318) {
    const struct CPU_State initial_cpu = {.pc=0xd240, .a=0xed, .x=0xb4, .y=0xd9, .sp=0xdf, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xd240, .value=0x70}, {.addr=0xd241, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0xd1ce, .a=0xed, .x=0xb4, .y=0xd9, .sp=0xdf, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0xd240, .value=0x70}, {.addr=0xd241, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0xd240, .value=0x70, .type=IO_READ},
        {.addr=0xd241, .value=0x8c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0319) {
    const struct CPU_State initial_cpu = {.pc=0xdc97, .a=0xbc, .x=0x63, .y=0x9b, .sp=0x35, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xdc97, .value=0x70}, {.addr=0xdc98, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0xdd0d, .a=0xbc, .x=0x63, .y=0x9b, .sp=0x35, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0xdc97, .value=0x70}, {.addr=0xdc98, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0xdc97, .value=0x70, .type=IO_READ},
        {.addr=0xdc98, .value=0x74, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_031A) {
    const struct CPU_State initial_cpu = {.pc=0x28de, .a=0x43, .x=0x2a, .y=0xf4, .sp=0x94, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x28de, .value=0x70}, {.addr=0x28df, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0x28e0, .a=0x43, .x=0x2a, .y=0xf4, .sp=0x94, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x28de, .value=0x70}, {.addr=0x28df, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0x28de, .value=0x70, .type=IO_READ},
        {.addr=0x28df, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_031B) {
    const struct CPU_State initial_cpu = {.pc=0xc49c, .a=0xc2, .x=0x67, .y=0x1c, .sp=0x22, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xc49c, .value=0x70}, {.addr=0xc49d, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xc49e, .a=0xc2, .x=0x67, .y=0x1c, .sp=0x22, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xc49c, .value=0x70}, {.addr=0xc49d, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xc49c, .value=0x70, .type=IO_READ},
        {.addr=0xc49d, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_031C) {
    const struct CPU_State initial_cpu = {.pc=0x6a49, .a=0x3e, .x=0x89, .y=0xb2, .sp=0x74, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x6a49, .value=0x70}, {.addr=0x6a4a, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0x69e9, .a=0x3e, .x=0x89, .y=0xb2, .sp=0x74, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x6a49, .value=0x70}, {.addr=0x6a4a, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0x6a49, .value=0x70, .type=IO_READ},
        {.addr=0x6a4a, .value=0x9e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_031D) {
    const struct CPU_State initial_cpu = {.pc=0x6c4f, .a=0xa5, .x=0xc0, .y=0xd1, .sp=0xd3, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x6c4f, .value=0x70}, {.addr=0x6c50, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0x6c51, .a=0xa5, .x=0xc0, .y=0xd1, .sp=0xd3, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x6c4f, .value=0x70}, {.addr=0x6c50, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0x6c4f, .value=0x70, .type=IO_READ},
        {.addr=0x6c50, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_031E) {
    const struct CPU_State initial_cpu = {.pc=0x7df2, .a=0x35, .x=0x43, .y=0x98, .sp=0x77, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x7df2, .value=0x70}, {.addr=0x7df3, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7df4, .a=0x35, .x=0x43, .y=0x98, .sp=0x77, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x7df2, .value=0x70}, {.addr=0x7df3, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7df2, .value=0x70, .type=IO_READ},
        {.addr=0x7df3, .value=0x00, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_031F) {
    const struct CPU_State initial_cpu = {.pc=0x69b5, .a=0xa6, .x=0x1e, .y=0x8f, .sp=0x1c, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x69b5, .value=0x70}, {.addr=0x69b6, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0x69b7, .a=0xa6, .x=0x1e, .y=0x8f, .sp=0x1c, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x69b5, .value=0x70}, {.addr=0x69b6, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0x69b5, .value=0x70, .type=IO_READ},
        {.addr=0x69b6, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0320) {
    const struct CPU_State initial_cpu = {.pc=0xdf7d, .a=0x50, .x=0x15, .y=0x5c, .sp=0xc6, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xdf7d, .value=0x70}, {.addr=0xdf7e, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0xdf69, .a=0x50, .x=0x15, .y=0x5c, .sp=0xc6, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0xdf7d, .value=0x70}, {.addr=0xdf7e, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0xdf7d, .value=0x70, .type=IO_READ},
        {.addr=0xdf7e, .value=0xea, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0321) {
    const struct CPU_State initial_cpu = {.pc=0xfee9, .a=0x94, .x=0xb7, .y=0x56, .sp=0x2f, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xfee9, .value=0x70}, {.addr=0xfeea, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xfeeb, .a=0x94, .x=0xb7, .y=0x56, .sp=0x2f, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xfee9, .value=0x70}, {.addr=0xfeea, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xfee9, .value=0x70, .type=IO_READ},
        {.addr=0xfeea, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0322) {
    const struct CPU_State initial_cpu = {.pc=0x90ad, .a=0xd8, .x=0x4c, .y=0xf7, .sp=0x3d, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x90ad, .value=0x70}, {.addr=0x90ae, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x90a0, .a=0xd8, .x=0x4c, .y=0xf7, .sp=0x3d, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x90ad, .value=0x70}, {.addr=0x90ae, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x90ad, .value=0x70, .type=IO_READ},
        {.addr=0x90ae, .value=0xf1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0323) {
    const struct CPU_State initial_cpu = {.pc=0x5d8f, .a=0xcb, .x=0xf9, .y=0x9d, .sp=0xa2, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x5d8f, .value=0x70}, {.addr=0x5d90, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0x5de7, .a=0xcb, .x=0xf9, .y=0x9d, .sp=0xa2, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x5d8f, .value=0x70}, {.addr=0x5d90, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0x5d8f, .value=0x70, .type=IO_READ},
        {.addr=0x5d90, .value=0x56, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0324) {
    const struct CPU_State initial_cpu = {.pc=0xb1cd, .a=0x6d, .x=0x4e, .y=0xc9, .sp=0x97, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xb1cd, .value=0x70}, {.addr=0xb1ce, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0xb1cf, .a=0x6d, .x=0x4e, .y=0xc9, .sp=0x97, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0xb1cd, .value=0x70}, {.addr=0xb1ce, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0xb1cd, .value=0x70, .type=IO_READ},
        {.addr=0xb1ce, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0325) {
    const struct CPU_State initial_cpu = {.pc=0xaea0, .a=0xc1, .x=0xac, .y=0x70, .sp=0x4f, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xaea0, .value=0x70}, {.addr=0xaea1, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0xaef6, .a=0xc1, .x=0xac, .y=0x70, .sp=0x4f, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0xaea0, .value=0x70}, {.addr=0xaea1, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0xaea0, .value=0x70, .type=IO_READ},
        {.addr=0xaea1, .value=0x54, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0326) {
    const struct CPU_State initial_cpu = {.pc=0xa1e0, .a=0x34, .x=0xe6, .y=0x39, .sp=0x47, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xa1e0, .value=0x70}, {.addr=0xa1e1, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0xa1a6, .a=0x34, .x=0xe6, .y=0x39, .sp=0x47, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0xa1e0, .value=0x70}, {.addr=0xa1e1, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0xa1e0, .value=0x70, .type=IO_READ},
        {.addr=0xa1e1, .value=0xc4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0327) {
    const struct CPU_State initial_cpu = {.pc=0xa9c3, .a=0xcf, .x=0xa9, .y=0x41, .sp=0x11, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xa9c3, .value=0x70}, {.addr=0xa9c4, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xa9a2, .a=0xcf, .x=0xa9, .y=0x41, .sp=0x11, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xa9c3, .value=0x70}, {.addr=0xa9c4, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xa9c3, .value=0x70, .type=IO_READ},
        {.addr=0xa9c4, .value=0xdd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0328) {
    const struct CPU_State initial_cpu = {.pc=0xa082, .a=0x3d, .x=0xc7, .y=0xfc, .sp=0xf5, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xa082, .value=0x70}, {.addr=0xa083, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0xa084, .a=0x3d, .x=0xc7, .y=0xfc, .sp=0xf5, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0xa082, .value=0x70}, {.addr=0xa083, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0xa082, .value=0x70, .type=IO_READ},
        {.addr=0xa083, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0329) {
    const struct CPU_State initial_cpu = {.pc=0x813f, .a=0x57, .x=0xdd, .y=0x6f, .sp=0xc3, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x813f, .value=0x70}, {.addr=0x8140, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0x8141, .a=0x57, .x=0xdd, .y=0x6f, .sp=0xc3, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x813f, .value=0x70}, {.addr=0x8140, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0x813f, .value=0x70, .type=IO_READ},
        {.addr=0x8140, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_032A) {
    const struct CPU_State initial_cpu = {.pc=0x4dd1, .a=0x2b, .x=0x54, .y=0x2f, .sp=0xcf, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x4dd1, .value=0x70}, {.addr=0x4dd2, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0x4dd3, .a=0x2b, .x=0x54, .y=0x2f, .sp=0xcf, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x4dd1, .value=0x70}, {.addr=0x4dd2, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0x4dd1, .value=0x70, .type=IO_READ},
        {.addr=0x4dd2, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_032B) {
    const struct CPU_State initial_cpu = {.pc=0x7907, .a=0x2d, .x=0xb3, .y=0x0d, .sp=0xcf, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x7907, .value=0x70}, {.addr=0x7908, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x7909, .a=0x2d, .x=0xb3, .y=0x0d, .sp=0xcf, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x7907, .value=0x70}, {.addr=0x7908, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x7907, .value=0x70, .type=IO_READ},
        {.addr=0x7908, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_032C) {
    const struct CPU_State initial_cpu = {.pc=0xb952, .a=0x9b, .x=0x7d, .y=0x7c, .sp=0x90, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xb952, .value=0x70}, {.addr=0xb953, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0xb954, .a=0x9b, .x=0x7d, .y=0x7c, .sp=0x90, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xb952, .value=0x70}, {.addr=0xb953, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0xb952, .value=0x70, .type=IO_READ},
        {.addr=0xb953, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_032D) {
    const struct CPU_State initial_cpu = {.pc=0xa7d9, .a=0x99, .x=0x79, .y=0xa0, .sp=0x7a, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xa7d9, .value=0x70}, {.addr=0xa7da, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xa7db, .a=0x99, .x=0x79, .y=0xa0, .sp=0x7a, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xa7d9, .value=0x70}, {.addr=0xa7da, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xa7d9, .value=0x70, .type=IO_READ},
        {.addr=0xa7da, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_032E) {
    const struct CPU_State initial_cpu = {.pc=0xa24d, .a=0xeb, .x=0x02, .y=0x03, .sp=0x02, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xa24d, .value=0x70}, {.addr=0xa24e, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xa24f, .a=0xeb, .x=0x02, .y=0x03, .sp=0x02, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0xa24d, .value=0x70}, {.addr=0xa24e, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xa24d, .value=0x70, .type=IO_READ},
        {.addr=0xa24e, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_032F) {
    const struct CPU_State initial_cpu = {.pc=0x2870, .a=0x32, .x=0xcd, .y=0x02, .sp=0x86, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x2870, .value=0x70}, {.addr=0x2871, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0x287d, .a=0x32, .x=0xcd, .y=0x02, .sp=0x86, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x2870, .value=0x70}, {.addr=0x2871, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0x2870, .value=0x70, .type=IO_READ},
        {.addr=0x2871, .value=0x0b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0330) {
    const struct CPU_State initial_cpu = {.pc=0x7af8, .a=0x63, .x=0xb3, .y=0x30, .sp=0xcf, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x7af8, .value=0x70}, {.addr=0x7af9, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0x7afa, .a=0x63, .x=0xb3, .y=0x30, .sp=0xcf, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x7af8, .value=0x70}, {.addr=0x7af9, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0x7af8, .value=0x70, .type=IO_READ},
        {.addr=0x7af9, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0331) {
    const struct CPU_State initial_cpu = {.pc=0xa26b, .a=0x92, .x=0xc9, .y=0x5e, .sp=0xcb, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xa26b, .value=0x70}, {.addr=0xa26c, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0xa29c, .a=0x92, .x=0xc9, .y=0x5e, .sp=0xcb, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xa26b, .value=0x70}, {.addr=0xa26c, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0xa26b, .value=0x70, .type=IO_READ},
        {.addr=0xa26c, .value=0x2f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0332) {
    const struct CPU_State initial_cpu = {.pc=0xcdf1, .a=0x60, .x=0x82, .y=0xfa, .sp=0x09, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xcdf1, .value=0x70}, {.addr=0xcdf2, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0xcdf3, .a=0x60, .x=0x82, .y=0xfa, .sp=0x09, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0xcdf1, .value=0x70}, {.addr=0xcdf2, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0xcdf1, .value=0x70, .type=IO_READ},
        {.addr=0xcdf2, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0333) {
    const struct CPU_State initial_cpu = {.pc=0x0f04, .a=0x57, .x=0xea, .y=0xbf, .sp=0xc5, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x0f04, .value=0x70}, {.addr=0x0f05, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x0ed9, .a=0x57, .x=0xea, .y=0xbf, .sp=0xc5, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x0f04, .value=0x70}, {.addr=0x0f05, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x0f04, .value=0x70, .type=IO_READ},
        {.addr=0x0f05, .value=0xd3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0334) {
    const struct CPU_State initial_cpu = {.pc=0x3975, .a=0x73, .x=0xac, .y=0xf5, .sp=0xba, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x3975, .value=0x70}, {.addr=0x3976, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x3977, .a=0x73, .x=0xac, .y=0xf5, .sp=0xba, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x3975, .value=0x70}, {.addr=0x3976, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x3975, .value=0x70, .type=IO_READ},
        {.addr=0x3976, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0335) {
    const struct CPU_State initial_cpu = {.pc=0x1d2e, .a=0x97, .x=0xa5, .y=0xaf, .sp=0x95, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x1d2e, .value=0x70}, {.addr=0x1d2f, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x1d72, .a=0x97, .x=0xa5, .y=0xaf, .sp=0x95, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x1d2e, .value=0x70}, {.addr=0x1d2f, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x1d2e, .value=0x70, .type=IO_READ},
        {.addr=0x1d2f, .value=0x42, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0336) {
    const struct CPU_State initial_cpu = {.pc=0x9843, .a=0x55, .x=0x8e, .y=0xdb, .sp=0x2c, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x9843, .value=0x70}, {.addr=0x9844, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x989d, .a=0x55, .x=0x8e, .y=0xdb, .sp=0x2c, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x9843, .value=0x70}, {.addr=0x9844, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x9843, .value=0x70, .type=IO_READ},
        {.addr=0x9844, .value=0x58, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0337) {
    const struct CPU_State initial_cpu = {.pc=0x68c1, .a=0xfb, .x=0x9d, .y=0xd8, .sp=0x57, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x68c1, .value=0x70}, {.addr=0x68c2, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x6905, .a=0xfb, .x=0x9d, .y=0xd8, .sp=0x57, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x68c1, .value=0x70}, {.addr=0x68c2, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x68c1, .value=0x70, .type=IO_READ},
        {.addr=0x68c2, .value=0x42, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0338) {
    const struct CPU_State initial_cpu = {.pc=0x8d6d, .a=0xe5, .x=0x4e, .y=0x98, .sp=0xdb, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x8d6d, .value=0x70}, {.addr=0x8d6e, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0x8dd2, .a=0xe5, .x=0x4e, .y=0x98, .sp=0xdb, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x8d6d, .value=0x70}, {.addr=0x8d6e, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0x8d6d, .value=0x70, .type=IO_READ},
        {.addr=0x8d6e, .value=0x63, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0339) {
    const struct CPU_State initial_cpu = {.pc=0x2df4, .a=0x66, .x=0xc7, .y=0xd3, .sp=0xad, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x2df4, .value=0x70}, {.addr=0x2df5, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x2df6, .a=0x66, .x=0xc7, .y=0xd3, .sp=0xad, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x2df4, .value=0x70}, {.addr=0x2df5, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x2df4, .value=0x70, .type=IO_READ},
        {.addr=0x2df5, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_033A) {
    const struct CPU_State initial_cpu = {.pc=0xf8ee, .a=0x49, .x=0x0d, .y=0xe7, .sp=0x1a, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xf8ee, .value=0x70}, {.addr=0xf8ef, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0xf8a6, .a=0x49, .x=0x0d, .y=0xe7, .sp=0x1a, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0xf8ee, .value=0x70}, {.addr=0xf8ef, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0xf8ee, .value=0x70, .type=IO_READ},
        {.addr=0xf8ef, .value=0xb6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_033B) {
    const struct CPU_State initial_cpu = {.pc=0xbb99, .a=0xfc, .x=0x31, .y=0xdf, .sp=0x08, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xbb99, .value=0x70}, {.addr=0xbb9a, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xbb9b, .a=0xfc, .x=0x31, .y=0xdf, .sp=0x08, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xbb99, .value=0x70}, {.addr=0xbb9a, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xbb99, .value=0x70, .type=IO_READ},
        {.addr=0xbb9a, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_033C) {
    const struct CPU_State initial_cpu = {.pc=0xf8b5, .a=0x20, .x=0x25, .y=0x14, .sp=0x8e, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xf8b5, .value=0x70}, {.addr=0xf8b6, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0xf883, .a=0x20, .x=0x25, .y=0x14, .sp=0x8e, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0xf8b5, .value=0x70}, {.addr=0xf8b6, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0xf8b5, .value=0x70, .type=IO_READ},
        {.addr=0xf8b6, .value=0xcc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_033D) {
    const struct CPU_State initial_cpu = {.pc=0x0fc0, .a=0xdc, .x=0x58, .y=0x00, .sp=0x0b, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x0fc0, .value=0x70}, {.addr=0x0fc1, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x0fc2, .a=0xdc, .x=0x58, .y=0x00, .sp=0x0b, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x0fc0, .value=0x70}, {.addr=0x0fc1, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x0fc0, .value=0x70, .type=IO_READ},
        {.addr=0x0fc1, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_033E) {
    const struct CPU_State initial_cpu = {.pc=0x20bd, .a=0x5d, .x=0x16, .y=0xec, .sp=0x1f, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x20bd, .value=0x70}, {.addr=0x20be, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x20bf, .a=0x5d, .x=0x16, .y=0xec, .sp=0x1f, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x20bd, .value=0x70}, {.addr=0x20be, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x20bd, .value=0x70, .type=IO_READ},
        {.addr=0x20be, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_033F) {
    const struct CPU_State initial_cpu = {.pc=0x6b6d, .a=0xca, .x=0xf0, .y=0x06, .sp=0x37, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x6b6d, .value=0x70}, {.addr=0x6b6e, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x6b4a, .a=0xca, .x=0xf0, .y=0x06, .sp=0x37, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x6b6d, .value=0x70}, {.addr=0x6b6e, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x6b6d, .value=0x70, .type=IO_READ},
        {.addr=0x6b6e, .value=0xdb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0340) {
    const struct CPU_State initial_cpu = {.pc=0x3cf1, .a=0x22, .x=0x9f, .y=0x13, .sp=0x73, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x3cf1, .value=0x70}, {.addr=0x3cf2, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0x3d1f, .a=0x22, .x=0x9f, .y=0x13, .sp=0x73, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x3cf1, .value=0x70}, {.addr=0x3cf2, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0x3cf1, .value=0x70, .type=IO_READ},
        {.addr=0x3cf2, .value=0x2c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0341) {
    const struct CPU_State initial_cpu = {.pc=0x471f, .a=0xd7, .x=0x9b, .y=0xcf, .sp=0x69, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x471f, .value=0x70}, {.addr=0x4720, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0x4780, .a=0xd7, .x=0x9b, .y=0xcf, .sp=0x69, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x471f, .value=0x70}, {.addr=0x4720, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0x471f, .value=0x70, .type=IO_READ},
        {.addr=0x4720, .value=0x5f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0342) {
    const struct CPU_State initial_cpu = {.pc=0xe09a, .a=0x4f, .x=0xbb, .y=0x79, .sp=0xa8, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xe09a, .value=0x70}, {.addr=0xe09b, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0xe115, .a=0x4f, .x=0xbb, .y=0x79, .sp=0xa8, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xe09a, .value=0x70}, {.addr=0xe09b, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0xe09a, .value=0x70, .type=IO_READ},
        {.addr=0xe09b, .value=0x79, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0343) {
    const struct CPU_State initial_cpu = {.pc=0xbc01, .a=0x79, .x=0x37, .y=0x5a, .sp=0xba, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xbc01, .value=0x70}, {.addr=0xbc02, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0xbc58, .a=0x79, .x=0x37, .y=0x5a, .sp=0xba, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0xbc01, .value=0x70}, {.addr=0xbc02, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0xbc01, .value=0x70, .type=IO_READ},
        {.addr=0xbc02, .value=0x55, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0344) {
    const struct CPU_State initial_cpu = {.pc=0x3654, .a=0xcf, .x=0x73, .y=0x44, .sp=0x3f, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x3654, .value=0x70}, {.addr=0x3655, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0x3656, .a=0xcf, .x=0x73, .y=0x44, .sp=0x3f, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x3654, .value=0x70}, {.addr=0x3655, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0x3654, .value=0x70, .type=IO_READ},
        {.addr=0x3655, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0345) {
    const struct CPU_State initial_cpu = {.pc=0x1fc7, .a=0xe1, .x=0xf2, .y=0x78, .sp=0x10, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x1fc7, .value=0x70}, {.addr=0x1fc8, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x1fc9, .a=0xe1, .x=0xf2, .y=0x78, .sp=0x10, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x1fc7, .value=0x70}, {.addr=0x1fc8, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x1fc7, .value=0x70, .type=IO_READ},
        {.addr=0x1fc8, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0346) {
    const struct CPU_State initial_cpu = {.pc=0xeaa5, .a=0xc4, .x=0x02, .y=0x18, .sp=0xc0, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xeaa5, .value=0x70}, {.addr=0xeaa6, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xeaa7, .a=0xc4, .x=0x02, .y=0x18, .sp=0xc0, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0xeaa5, .value=0x70}, {.addr=0xeaa6, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xeaa5, .value=0x70, .type=IO_READ},
        {.addr=0xeaa6, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0347) {
    const struct CPU_State initial_cpu = {.pc=0x2ecd, .a=0x72, .x=0x9c, .y=0x4e, .sp=0xf8, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x2ecd, .value=0x70}, {.addr=0x2ece, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0x2ecf, .a=0x72, .x=0x9c, .y=0x4e, .sp=0xf8, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x2ecd, .value=0x70}, {.addr=0x2ece, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0x2ecd, .value=0x70, .type=IO_READ},
        {.addr=0x2ece, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0348) {
    const struct CPU_State initial_cpu = {.pc=0xfe18, .a=0x6f, .x=0xce, .y=0x68, .sp=0xfd, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xfe18, .value=0x70}, {.addr=0xfe19, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0xfe1a, .a=0x6f, .x=0xce, .y=0x68, .sp=0xfd, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0xfe18, .value=0x70}, {.addr=0xfe19, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0xfe18, .value=0x70, .type=IO_READ},
        {.addr=0xfe19, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0349) {
    const struct CPU_State initial_cpu = {.pc=0x1ebf, .a=0xb6, .x=0x4f, .y=0xb1, .sp=0x84, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x1ebf, .value=0x70}, {.addr=0x1ec0, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0x1e92, .a=0xb6, .x=0x4f, .y=0xb1, .sp=0x84, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x1ebf, .value=0x70}, {.addr=0x1ec0, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0x1ebf, .value=0x70, .type=IO_READ},
        {.addr=0x1ec0, .value=0xd1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_034A) {
    const struct CPU_State initial_cpu = {.pc=0xe6c3, .a=0x09, .x=0x4b, .y=0x58, .sp=0x63, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xe6c3, .value=0x70}, {.addr=0xe6c4, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0xe71e, .a=0x09, .x=0x4b, .y=0x58, .sp=0x63, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0xe6c3, .value=0x70}, {.addr=0xe6c4, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0xe6c3, .value=0x70, .type=IO_READ},
        {.addr=0xe6c4, .value=0x59, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_034B) {
    const struct CPU_State initial_cpu = {.pc=0x2ed5, .a=0x6d, .x=0xc2, .y=0x9e, .sp=0x85, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x2ed5, .value=0x70}, {.addr=0x2ed6, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0x2f01, .a=0x6d, .x=0xc2, .y=0x9e, .sp=0x85, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x2ed5, .value=0x70}, {.addr=0x2ed6, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0x2ed5, .value=0x70, .type=IO_READ},
        {.addr=0x2ed6, .value=0x2a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_034C) {
    const struct CPU_State initial_cpu = {.pc=0xbb61, .a=0x1a, .x=0x23, .y=0x77, .sp=0x56, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xbb61, .value=0x70}, {.addr=0xbb62, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0xbb63, .a=0x1a, .x=0x23, .y=0x77, .sp=0x56, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0xbb61, .value=0x70}, {.addr=0xbb62, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0xbb61, .value=0x70, .type=IO_READ},
        {.addr=0xbb62, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_034D) {
    const struct CPU_State initial_cpu = {.pc=0xccbd, .a=0x8c, .x=0x3d, .y=0x97, .sp=0x94, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xccbd, .value=0x70}, {.addr=0xccbe, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0xccf9, .a=0x8c, .x=0x3d, .y=0x97, .sp=0x94, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xccbd, .value=0x70}, {.addr=0xccbe, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0xccbd, .value=0x70, .type=IO_READ},
        {.addr=0xccbe, .value=0x3a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_034E) {
    const struct CPU_State initial_cpu = {.pc=0x0c80, .a=0x52, .x=0xa7, .y=0x57, .sp=0x53, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x0c80, .value=0x70}, {.addr=0x0c81, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0x0c82, .a=0x52, .x=0xa7, .y=0x57, .sp=0x53, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0c80, .value=0x70}, {.addr=0x0c81, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0x0c80, .value=0x70, .type=IO_READ},
        {.addr=0x0c81, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_034F) {
    const struct CPU_State initial_cpu = {.pc=0x2f4d, .a=0x9b, .x=0xac, .y=0x56, .sp=0x32, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x2f4d, .value=0x70}, {.addr=0x2f4e, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0x2f90, .a=0x9b, .x=0xac, .y=0x56, .sp=0x32, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x2f4d, .value=0x70}, {.addr=0x2f4e, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0x2f4d, .value=0x70, .type=IO_READ},
        {.addr=0x2f4e, .value=0x41, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0350) {
    const struct CPU_State initial_cpu = {.pc=0xe612, .a=0xfe, .x=0x36, .y=0x37, .sp=0xad, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xe612, .value=0x70}, {.addr=0xe613, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0xe614, .a=0xfe, .x=0x36, .y=0x37, .sp=0xad, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xe612, .value=0x70}, {.addr=0xe613, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0xe612, .value=0x70, .type=IO_READ},
        {.addr=0xe613, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0351) {
    const struct CPU_State initial_cpu = {.pc=0x0eb4, .a=0x7a, .x=0xf5, .y=0xc3, .sp=0x02, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x0eb4, .value=0x70}, {.addr=0x0eb5, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0x0eb6, .a=0x7a, .x=0xf5, .y=0xc3, .sp=0x02, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x0eb4, .value=0x70}, {.addr=0x0eb5, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0x0eb4, .value=0x70, .type=IO_READ},
        {.addr=0x0eb5, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0352) {
    const struct CPU_State initial_cpu = {.pc=0x5256, .a=0x1e, .x=0xeb, .y=0x23, .sp=0x8b, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x5256, .value=0x70}, {.addr=0x5257, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0x5209, .a=0x1e, .x=0xeb, .y=0x23, .sp=0x8b, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x5256, .value=0x70}, {.addr=0x5257, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0x5256, .value=0x70, .type=IO_READ},
        {.addr=0x5257, .value=0xb1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0353) {
    const struct CPU_State initial_cpu = {.pc=0x57f1, .a=0x9f, .x=0x42, .y=0xc9, .sp=0x49, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x57f1, .value=0x70}, {.addr=0x57f2, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x57f3, .a=0x9f, .x=0x42, .y=0xc9, .sp=0x49, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x57f1, .value=0x70}, {.addr=0x57f2, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x57f1, .value=0x70, .type=IO_READ},
        {.addr=0x57f2, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0354) {
    const struct CPU_State initial_cpu = {.pc=0xeac8, .a=0x8c, .x=0x8a, .y=0x08, .sp=0x62, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xeac8, .value=0x70}, {.addr=0xeac9, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0xeaca, .a=0x8c, .x=0x8a, .y=0x08, .sp=0x62, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xeac8, .value=0x70}, {.addr=0xeac9, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0xeac8, .value=0x70, .type=IO_READ},
        {.addr=0xeac9, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0355) {
    const struct CPU_State initial_cpu = {.pc=0xe35b, .a=0x1c, .x=0x56, .y=0x51, .sp=0x28, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xe35b, .value=0x70}, {.addr=0xe35c, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0xe31f, .a=0x1c, .x=0x56, .y=0x51, .sp=0x28, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0xe35b, .value=0x70}, {.addr=0xe35c, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0xe35b, .value=0x70, .type=IO_READ},
        {.addr=0xe35c, .value=0xc2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0356) {
    const struct CPU_State initial_cpu = {.pc=0x3a0e, .a=0xdd, .x=0x99, .y=0x23, .sp=0x21, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x3a0e, .value=0x70}, {.addr=0x3a0f, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0x3a10, .a=0xdd, .x=0x99, .y=0x23, .sp=0x21, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x3a0e, .value=0x70}, {.addr=0x3a0f, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0x3a0e, .value=0x70, .type=IO_READ},
        {.addr=0x3a0f, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0357) {
    const struct CPU_State initial_cpu = {.pc=0x85b1, .a=0x94, .x=0xfd, .y=0x62, .sp=0xe3, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x85b1, .value=0x70}, {.addr=0x85b2, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x85b0, .a=0x94, .x=0xfd, .y=0x62, .sp=0xe3, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x85b1, .value=0x70}, {.addr=0x85b2, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x85b1, .value=0x70, .type=IO_READ},
        {.addr=0x85b2, .value=0xfd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0358) {
    const struct CPU_State initial_cpu = {.pc=0xb844, .a=0x70, .x=0xb8, .y=0xed, .sp=0xdc, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xb844, .value=0x70}, {.addr=0xb845, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xb846, .a=0x70, .x=0xb8, .y=0xed, .sp=0xdc, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0xb844, .value=0x70}, {.addr=0xb845, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xb844, .value=0x70, .type=IO_READ},
        {.addr=0xb845, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0359) {
    const struct CPU_State initial_cpu = {.pc=0x382d, .a=0x10, .x=0x8f, .y=0x07, .sp=0xce, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x382d, .value=0x70}, {.addr=0x382e, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x382f, .a=0x10, .x=0x8f, .y=0x07, .sp=0xce, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x382d, .value=0x70}, {.addr=0x382e, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x382d, .value=0x70, .type=IO_READ},
        {.addr=0x382e, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_035A) {
    const struct CPU_State initial_cpu = {.pc=0x9b2d, .a=0x98, .x=0x05, .y=0xcd, .sp=0x3d, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x9b2d, .value=0x70}, {.addr=0x9b2e, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0x9b08, .a=0x98, .x=0x05, .y=0xcd, .sp=0x3d, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x9b2d, .value=0x70}, {.addr=0x9b2e, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0x9b2d, .value=0x70, .type=IO_READ},
        {.addr=0x9b2e, .value=0xd9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_035B) {
    const struct CPU_State initial_cpu = {.pc=0xbfb5, .a=0x4b, .x=0x45, .y=0x1d, .sp=0xc4, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xbfb5, .value=0x70}, {.addr=0xbfb6, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc014, .a=0x4b, .x=0x45, .y=0x1d, .sp=0xc4, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xbfb5, .value=0x70}, {.addr=0xbfb6, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xbfb5, .value=0x70, .type=IO_READ},
        {.addr=0xbfb6, .value=0x5d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_035C) {
    const struct CPU_State initial_cpu = {.pc=0xa449, .a=0xe6, .x=0xbd, .y=0x87, .sp=0x5c, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xa449, .value=0x70}, {.addr=0xa44a, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0xa44b, .a=0xe6, .x=0xbd, .y=0x87, .sp=0x5c, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0xa449, .value=0x70}, {.addr=0xa44a, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0xa449, .value=0x70, .type=IO_READ},
        {.addr=0xa44a, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_035D) {
    const struct CPU_State initial_cpu = {.pc=0x1f65, .a=0x95, .x=0x10, .y=0xaf, .sp=0xeb, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x1f65, .value=0x70}, {.addr=0x1f66, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x1f22, .a=0x95, .x=0x10, .y=0xaf, .sp=0xeb, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x1f65, .value=0x70}, {.addr=0x1f66, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x1f65, .value=0x70, .type=IO_READ},
        {.addr=0x1f66, .value=0xbb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_035E) {
    const struct CPU_State initial_cpu = {.pc=0xa5ed, .a=0x17, .x=0x1e, .y=0x3b, .sp=0x4d, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xa5ed, .value=0x70}, {.addr=0xa5ee, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0xa5ef, .a=0x17, .x=0x1e, .y=0x3b, .sp=0x4d, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0xa5ed, .value=0x70}, {.addr=0xa5ee, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0xa5ed, .value=0x70, .type=IO_READ},
        {.addr=0xa5ee, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_035F) {
    const struct CPU_State initial_cpu = {.pc=0xc537, .a=0x36, .x=0x67, .y=0xd9, .sp=0xab, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xc537, .value=0x70}, {.addr=0xc538, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0xc588, .a=0x36, .x=0x67, .y=0xd9, .sp=0xab, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0xc537, .value=0x70}, {.addr=0xc538, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0xc537, .value=0x70, .type=IO_READ},
        {.addr=0xc538, .value=0x4f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0360) {
    const struct CPU_State initial_cpu = {.pc=0xabbc, .a=0xf5, .x=0x8f, .y=0xd5, .sp=0x37, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xabbc, .value=0x70}, {.addr=0xabbd, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0xabbe, .a=0xf5, .x=0x8f, .y=0xd5, .sp=0x37, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xabbc, .value=0x70}, {.addr=0xabbd, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0xabbc, .value=0x70, .type=IO_READ},
        {.addr=0xabbd, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0361) {
    const struct CPU_State initial_cpu = {.pc=0x1c84, .a=0x4e, .x=0x7e, .y=0xd1, .sp=0x28, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x1c84, .value=0x70}, {.addr=0x1c85, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x1cd7, .a=0x4e, .x=0x7e, .y=0xd1, .sp=0x28, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x1c84, .value=0x70}, {.addr=0x1c85, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x1c84, .value=0x70, .type=IO_READ},
        {.addr=0x1c85, .value=0x51, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0362) {
    const struct CPU_State initial_cpu = {.pc=0x8c7f, .a=0x18, .x=0xc0, .y=0x05, .sp=0xa1, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x8c7f, .value=0x70}, {.addr=0x8c80, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0x8ce0, .a=0x18, .x=0xc0, .y=0x05, .sp=0xa1, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x8c7f, .value=0x70}, {.addr=0x8c80, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0x8c7f, .value=0x70, .type=IO_READ},
        {.addr=0x8c80, .value=0x5f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0363) {
    const struct CPU_State initial_cpu = {.pc=0x01a4, .a=0x7d, .x=0x64, .y=0x68, .sp=0xae, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x01a4, .value=0x70}, {.addr=0x01a5, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x01a6, .a=0x7d, .x=0x64, .y=0x68, .sp=0xae, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x01a4, .value=0x70}, {.addr=0x01a5, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x01a4, .value=0x70, .type=IO_READ},
        {.addr=0x01a5, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0364) {
    const struct CPU_State initial_cpu = {.pc=0x4f78, .a=0xaf, .x=0x70, .y=0x95, .sp=0x59, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x4f78, .value=0x70}, {.addr=0x4f79, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x4fbf, .a=0xaf, .x=0x70, .y=0x95, .sp=0x59, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x4f78, .value=0x70}, {.addr=0x4f79, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x4f78, .value=0x70, .type=IO_READ},
        {.addr=0x4f79, .value=0x45, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0365) {
    const struct CPU_State initial_cpu = {.pc=0xe729, .a=0x14, .x=0x70, .y=0x42, .sp=0x0b, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xe729, .value=0x70}, {.addr=0xe72a, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0xe72a, .a=0x14, .x=0x70, .y=0x42, .sp=0x0b, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0xe729, .value=0x70}, {.addr=0xe72a, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0xe729, .value=0x70, .type=IO_READ},
        {.addr=0xe72a, .value=0xff, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0366) {
    const struct CPU_State initial_cpu = {.pc=0x0848, .a=0x2f, .x=0x0b, .y=0x63, .sp=0xd7, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x0848, .value=0x70}, {.addr=0x0849, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x084a, .a=0x2f, .x=0x0b, .y=0x63, .sp=0xd7, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x0848, .value=0x70}, {.addr=0x0849, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x0848, .value=0x70, .type=IO_READ},
        {.addr=0x0849, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0367) {
    const struct CPU_State initial_cpu = {.pc=0xfef3, .a=0x69, .x=0xeb, .y=0x93, .sp=0xa6, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xfef3, .value=0x70}, {.addr=0xfef4, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0xff44, .a=0x69, .x=0xeb, .y=0x93, .sp=0xa6, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xfef3, .value=0x70}, {.addr=0xfef4, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0xfef3, .value=0x70, .type=IO_READ},
        {.addr=0xfef4, .value=0x4f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0368) {
    const struct CPU_State initial_cpu = {.pc=0xbfd9, .a=0x11, .x=0x39, .y=0x5c, .sp=0x2e, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xbfd9, .value=0x70}, {.addr=0xbfda, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0xbf9f, .a=0x11, .x=0x39, .y=0x5c, .sp=0x2e, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xbfd9, .value=0x70}, {.addr=0xbfda, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0xbfd9, .value=0x70, .type=IO_READ},
        {.addr=0xbfda, .value=0xc4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0369) {
    const struct CPU_State initial_cpu = {.pc=0xc1b3, .a=0xc9, .x=0xc0, .y=0x66, .sp=0x94, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xc1b3, .value=0x70}, {.addr=0xc1b4, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0xc1b5, .a=0xc9, .x=0xc0, .y=0x66, .sp=0x94, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xc1b3, .value=0x70}, {.addr=0xc1b4, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0xc1b3, .value=0x70, .type=IO_READ},
        {.addr=0xc1b4, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_036A) {
    const struct CPU_State initial_cpu = {.pc=0x84db, .a=0xbc, .x=0x64, .y=0xb8, .sp=0x47, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x84db, .value=0x70}, {.addr=0x84dc, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0x8466, .a=0xbc, .x=0x64, .y=0xb8, .sp=0x47, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x84db, .value=0x70}, {.addr=0x84dc, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0x84db, .value=0x70, .type=IO_READ},
        {.addr=0x84dc, .value=0x89, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_036B) {
    const struct CPU_State initial_cpu = {.pc=0xa4de, .a=0x9f, .x=0xe4, .y=0xe3, .sp=0x4e, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xa4de, .value=0x70}, {.addr=0xa4df, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xa4ae, .a=0x9f, .x=0xe4, .y=0xe3, .sp=0x4e, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xa4de, .value=0x70}, {.addr=0xa4df, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xa4de, .value=0x70, .type=IO_READ},
        {.addr=0xa4df, .value=0xce, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_036C) {
    const struct CPU_State initial_cpu = {.pc=0xfbd4, .a=0xe3, .x=0xaf, .y=0xff, .sp=0xc5, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xfbd4, .value=0x70}, {.addr=0xfbd5, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0xfb91, .a=0xe3, .x=0xaf, .y=0xff, .sp=0xc5, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0xfbd4, .value=0x70}, {.addr=0xfbd5, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0xfbd4, .value=0x70, .type=IO_READ},
        {.addr=0xfbd5, .value=0xbb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_036D) {
    const struct CPU_State initial_cpu = {.pc=0xd701, .a=0xe5, .x=0x40, .y=0x31, .sp=0xe6, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xd701, .value=0x70}, {.addr=0xd702, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0xd6d6, .a=0xe5, .x=0x40, .y=0x31, .sp=0xe6, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xd701, .value=0x70}, {.addr=0xd702, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0xd701, .value=0x70, .type=IO_READ},
        {.addr=0xd702, .value=0xd3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_036E) {
    const struct CPU_State initial_cpu = {.pc=0x51a1, .a=0x20, .x=0xdb, .y=0xc6, .sp=0xf5, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x51a1, .value=0x70}, {.addr=0x51a2, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0x51a3, .a=0x20, .x=0xdb, .y=0xc6, .sp=0xf5, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x51a1, .value=0x70}, {.addr=0x51a2, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0x51a1, .value=0x70, .type=IO_READ},
        {.addr=0x51a2, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_036F) {
    const struct CPU_State initial_cpu = {.pc=0xc556, .a=0x17, .x=0xae, .y=0x48, .sp=0x99, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xc556, .value=0x70}, {.addr=0xc557, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0xc558, .a=0x17, .x=0xae, .y=0x48, .sp=0x99, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0xc556, .value=0x70}, {.addr=0xc557, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0xc556, .value=0x70, .type=IO_READ},
        {.addr=0xc557, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0370) {
    const struct CPU_State initial_cpu = {.pc=0x083e, .a=0xed, .x=0x8d, .y=0x49, .sp=0x54, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x083e, .value=0x70}, {.addr=0x083f, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0x0895, .a=0xed, .x=0x8d, .y=0x49, .sp=0x54, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x083e, .value=0x70}, {.addr=0x083f, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0x083e, .value=0x70, .type=IO_READ},
        {.addr=0x083f, .value=0x55, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0371) {
    const struct CPU_State initial_cpu = {.pc=0xa381, .a=0xaa, .x=0xec, .y=0xf5, .sp=0xae, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xa381, .value=0x70}, {.addr=0xa382, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0xa384, .a=0xaa, .x=0xec, .y=0xf5, .sp=0xae, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xa381, .value=0x70}, {.addr=0xa382, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0xa381, .value=0x70, .type=IO_READ},
        {.addr=0xa382, .value=0x01, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0372) {
    const struct CPU_State initial_cpu = {.pc=0x1647, .a=0x1d, .x=0xc7, .y=0x98, .sp=0x96, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x1647, .value=0x70}, {.addr=0x1648, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x16af, .a=0x1d, .x=0xc7, .y=0x98, .sp=0x96, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x1647, .value=0x70}, {.addr=0x1648, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x1647, .value=0x70, .type=IO_READ},
        {.addr=0x1648, .value=0x66, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0373) {
    const struct CPU_State initial_cpu = {.pc=0xa2c5, .a=0x4f, .x=0x78, .y=0xcb, .sp=0x7e, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0xa2c5, .value=0x70}, {.addr=0xa2c6, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0xa320, .a=0x4f, .x=0x78, .y=0xcb, .sp=0x7e, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xa2c5, .value=0x70}, {.addr=0xa2c6, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0xa2c5, .value=0x70, .type=IO_READ},
        {.addr=0xa2c6, .value=0x59, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0374) {
    const struct CPU_State initial_cpu = {.pc=0xc537, .a=0xc2, .x=0x45, .y=0x41, .sp=0x08, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xc537, .value=0x70}, {.addr=0xc538, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0xc522, .a=0xc2, .x=0x45, .y=0x41, .sp=0x08, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xc537, .value=0x70}, {.addr=0xc538, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0xc537, .value=0x70, .type=IO_READ},
        {.addr=0xc538, .value=0xe9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0375) {
    const struct CPU_State initial_cpu = {.pc=0xc8dc, .a=0x20, .x=0xb5, .y=0x7f, .sp=0xeb, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xc8dc, .value=0x70}, {.addr=0xc8dd, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0xc8de, .a=0x20, .x=0xb5, .y=0x7f, .sp=0xeb, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0xc8dc, .value=0x70}, {.addr=0xc8dd, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0xc8dc, .value=0x70, .type=IO_READ},
        {.addr=0xc8dd, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0376) {
    const struct CPU_State initial_cpu = {.pc=0xd5c3, .a=0x9e, .x=0xca, .y=0xe9, .sp=0x07, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xd5c3, .value=0x70}, {.addr=0xd5c4, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0xd5c5, .a=0x9e, .x=0xca, .y=0xe9, .sp=0x07, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0xd5c3, .value=0x70}, {.addr=0xd5c4, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0xd5c3, .value=0x70, .type=IO_READ},
        {.addr=0xd5c4, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0377) {
    const struct CPU_State initial_cpu = {.pc=0xeaee, .a=0xa1, .x=0x88, .y=0x32, .sp=0x4a, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xeaee, .value=0x70}, {.addr=0xeaef, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0xeb26, .a=0xa1, .x=0x88, .y=0x32, .sp=0x4a, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xeaee, .value=0x70}, {.addr=0xeaef, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0xeaee, .value=0x70, .type=IO_READ},
        {.addr=0xeaef, .value=0x36, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0378) {
    const struct CPU_State initial_cpu = {.pc=0x88c8, .a=0x9a, .x=0x0a, .y=0xee, .sp=0xcb, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x88c8, .value=0x70}, {.addr=0x88c9, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0x892f, .a=0x9a, .x=0x0a, .y=0xee, .sp=0xcb, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x88c8, .value=0x70}, {.addr=0x88c9, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0x88c8, .value=0x70, .type=IO_READ},
        {.addr=0x88c9, .value=0x65, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0379) {
    const struct CPU_State initial_cpu = {.pc=0x576a, .a=0xbe, .x=0x8d, .y=0x6d, .sp=0x98, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x576a, .value=0x70}, {.addr=0x576b, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x571a, .a=0xbe, .x=0x8d, .y=0x6d, .sp=0x98, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x576a, .value=0x70}, {.addr=0x576b, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x576a, .value=0x70, .type=IO_READ},
        {.addr=0x576b, .value=0xae, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_037A) {
    const struct CPU_State initial_cpu = {.pc=0x4b5d, .a=0x70, .x=0x4f, .y=0xe0, .sp=0x3b, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x4b5d, .value=0x70}, {.addr=0x4b5e, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x4b74, .a=0x70, .x=0x4f, .y=0xe0, .sp=0x3b, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x4b5d, .value=0x70}, {.addr=0x4b5e, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x4b5d, .value=0x70, .type=IO_READ},
        {.addr=0x4b5e, .value=0x15, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_037B) {
    const struct CPU_State initial_cpu = {.pc=0x109d, .a=0xee, .x=0xf9, .y=0xbd, .sp=0x33, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x109d, .value=0x70}, {.addr=0x109e, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0x1080, .a=0xee, .x=0xf9, .y=0xbd, .sp=0x33, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x109d, .value=0x70}, {.addr=0x109e, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0x109d, .value=0x70, .type=IO_READ},
        {.addr=0x109e, .value=0xe1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_037C) {
    const struct CPU_State initial_cpu = {.pc=0x8b5a, .a=0xde, .x=0x73, .y=0xb9, .sp=0x59, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x8b5a, .value=0x70}, {.addr=0x8b5b, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0x8bcf, .a=0xde, .x=0x73, .y=0xb9, .sp=0x59, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x8b5a, .value=0x70}, {.addr=0x8b5b, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0x8b5a, .value=0x70, .type=IO_READ},
        {.addr=0x8b5b, .value=0x73, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_037D) {
    const struct CPU_State initial_cpu = {.pc=0x1dda, .a=0x01, .x=0x3f, .y=0x19, .sp=0x96, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x1dda, .value=0x70}, {.addr=0x1ddb, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0x1dbe, .a=0x01, .x=0x3f, .y=0x19, .sp=0x96, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x1dda, .value=0x70}, {.addr=0x1ddb, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0x1dda, .value=0x70, .type=IO_READ},
        {.addr=0x1ddb, .value=0xe2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_037E) {
    const struct CPU_State initial_cpu = {.pc=0x5cb5, .a=0x0d, .x=0xe2, .y=0x01, .sp=0x88, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x5cb5, .value=0x70}, {.addr=0x5cb6, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x5d14, .a=0x0d, .x=0xe2, .y=0x01, .sp=0x88, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x5cb5, .value=0x70}, {.addr=0x5cb6, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x5cb5, .value=0x70, .type=IO_READ},
        {.addr=0x5cb6, .value=0x5d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_037F) {
    const struct CPU_State initial_cpu = {.pc=0x4c48, .a=0xa0, .x=0x2c, .y=0x93, .sp=0x05, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x4c48, .value=0x70}, {.addr=0x4c49, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x4c4a, .a=0xa0, .x=0x2c, .y=0x93, .sp=0x05, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x4c48, .value=0x70}, {.addr=0x4c49, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x4c48, .value=0x70, .type=IO_READ},
        {.addr=0x4c49, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0380) {
    const struct CPU_State initial_cpu = {.pc=0x308b, .a=0x16, .x=0x74, .y=0x7e, .sp=0x7d, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x308b, .value=0x70}, {.addr=0x308c, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x308d, .a=0x16, .x=0x74, .y=0x7e, .sp=0x7d, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x308b, .value=0x70}, {.addr=0x308c, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x308b, .value=0x70, .type=IO_READ},
        {.addr=0x308c, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0381) {
    const struct CPU_State initial_cpu = {.pc=0xede1, .a=0x77, .x=0x5a, .y=0xcd, .sp=0x86, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xede1, .value=0x70}, {.addr=0xede2, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0xee48, .a=0x77, .x=0x5a, .y=0xcd, .sp=0x86, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xede1, .value=0x70}, {.addr=0xede2, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0xede1, .value=0x70, .type=IO_READ},
        {.addr=0xede2, .value=0x65, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0382) {
    const struct CPU_State initial_cpu = {.pc=0xc823, .a=0xd1, .x=0x14, .y=0x5c, .sp=0x8f, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xc823, .value=0x70}, {.addr=0xc824, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0xc8a4, .a=0xd1, .x=0x14, .y=0x5c, .sp=0x8f, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xc823, .value=0x70}, {.addr=0xc824, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0xc823, .value=0x70, .type=IO_READ},
        {.addr=0xc824, .value=0x7f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0383) {
    const struct CPU_State initial_cpu = {.pc=0x66b0, .a=0x05, .x=0x79, .y=0x4d, .sp=0xd3, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x66b0, .value=0x70}, {.addr=0x66b1, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0x66b7, .a=0x05, .x=0x79, .y=0x4d, .sp=0xd3, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x66b0, .value=0x70}, {.addr=0x66b1, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0x66b0, .value=0x70, .type=IO_READ},
        {.addr=0x66b1, .value=0x05, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0384) {
    const struct CPU_State initial_cpu = {.pc=0x4e5c, .a=0xbc, .x=0x62, .y=0x8d, .sp=0x81, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x4e5c, .value=0x70}, {.addr=0x4e5d, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x4e5e, .a=0xbc, .x=0x62, .y=0x8d, .sp=0x81, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x4e5c, .value=0x70}, {.addr=0x4e5d, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x4e5c, .value=0x70, .type=IO_READ},
        {.addr=0x4e5d, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0385) {
    const struct CPU_State initial_cpu = {.pc=0x38b8, .a=0xd6, .x=0x78, .y=0xcf, .sp=0x93, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x38b8, .value=0x70}, {.addr=0x38b9, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x38ba, .a=0xd6, .x=0x78, .y=0xcf, .sp=0x93, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x38b8, .value=0x70}, {.addr=0x38b9, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x38b8, .value=0x70, .type=IO_READ},
        {.addr=0x38b9, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0386) {
    const struct CPU_State initial_cpu = {.pc=0x097c, .a=0x29, .x=0x02, .y=0x07, .sp=0x03, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x097c, .value=0x70}, {.addr=0x097d, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0x097e, .a=0x29, .x=0x02, .y=0x07, .sp=0x03, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x097c, .value=0x70}, {.addr=0x097d, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0x097c, .value=0x70, .type=IO_READ},
        {.addr=0x097d, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0387) {
    const struct CPU_State initial_cpu = {.pc=0xa28f, .a=0xe2, .x=0x3f, .y=0x68, .sp=0x5c, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xa28f, .value=0x70}, {.addr=0xa290, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0xa253, .a=0xe2, .x=0x3f, .y=0x68, .sp=0x5c, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xa28f, .value=0x70}, {.addr=0xa290, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0xa28f, .value=0x70, .type=IO_READ},
        {.addr=0xa290, .value=0xc2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0388) {
    const struct CPU_State initial_cpu = {.pc=0xe8e5, .a=0x96, .x=0x13, .y=0xb0, .sp=0x0c, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xe8e5, .value=0x70}, {.addr=0xe8e6, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0xe8e7, .a=0x96, .x=0x13, .y=0xb0, .sp=0x0c, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xe8e5, .value=0x70}, {.addr=0xe8e6, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0xe8e5, .value=0x70, .type=IO_READ},
        {.addr=0xe8e6, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0389) {
    const struct CPU_State initial_cpu = {.pc=0x8440, .a=0x2e, .x=0x70, .y=0x31, .sp=0x4c, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x8440, .value=0x70}, {.addr=0x8441, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x8442, .a=0x2e, .x=0x70, .y=0x31, .sp=0x4c, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x8440, .value=0x70}, {.addr=0x8441, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x8440, .value=0x70, .type=IO_READ},
        {.addr=0x8441, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_038A) {
    const struct CPU_State initial_cpu = {.pc=0x9ad8, .a=0x24, .x=0xed, .y=0xf0, .sp=0xa6, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x9ad8, .value=0x70}, {.addr=0x9ad9, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x9ada, .a=0x24, .x=0xed, .y=0xf0, .sp=0xa6, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x9ad8, .value=0x70}, {.addr=0x9ad9, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x9ad8, .value=0x70, .type=IO_READ},
        {.addr=0x9ad9, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_038B) {
    const struct CPU_State initial_cpu = {.pc=0xf90f, .a=0x28, .x=0x99, .y=0xbc, .sp=0x36, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xf90f, .value=0x70}, {.addr=0xf910, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xf94e, .a=0x28, .x=0x99, .y=0xbc, .sp=0x36, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xf90f, .value=0x70}, {.addr=0xf910, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xf90f, .value=0x70, .type=IO_READ},
        {.addr=0xf910, .value=0x3d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_038C) {
    const struct CPU_State initial_cpu = {.pc=0xf446, .a=0x53, .x=0x08, .y=0xea, .sp=0x4c, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xf446, .value=0x70}, {.addr=0xf447, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0xf448, .a=0x53, .x=0x08, .y=0xea, .sp=0x4c, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0xf446, .value=0x70}, {.addr=0xf447, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0xf446, .value=0x70, .type=IO_READ},
        {.addr=0xf447, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_038D) {
    const struct CPU_State initial_cpu = {.pc=0xbbb1, .a=0x91, .x=0x58, .y=0x89, .sp=0xf2, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xbbb1, .value=0x70}, {.addr=0xbbb2, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0xbbb3, .a=0x91, .x=0x58, .y=0x89, .sp=0xf2, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xbbb1, .value=0x70}, {.addr=0xbbb2, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0xbbb1, .value=0x70, .type=IO_READ},
        {.addr=0xbbb2, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_038E) {
    const struct CPU_State initial_cpu = {.pc=0xd238, .a=0x84, .x=0x69, .y=0x68, .sp=0xcb, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xd238, .value=0x70}, {.addr=0xd239, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0xd23a, .a=0x84, .x=0x69, .y=0x68, .sp=0xcb, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0xd238, .value=0x70}, {.addr=0xd239, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0xd238, .value=0x70, .type=IO_READ},
        {.addr=0xd239, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_038F) {
    const struct CPU_State initial_cpu = {.pc=0xc940, .a=0x13, .x=0xbd, .y=0x8d, .sp=0xca, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xc940, .value=0x70}, {.addr=0xc941, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0xc944, .a=0x13, .x=0xbd, .y=0x8d, .sp=0xca, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xc940, .value=0x70}, {.addr=0xc941, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0xc940, .value=0x70, .type=IO_READ},
        {.addr=0xc941, .value=0x02, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0390) {
    const struct CPU_State initial_cpu = {.pc=0xf2ff, .a=0x31, .x=0xa2, .y=0x11, .sp=0x5c, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xf2ff, .value=0x70}, {.addr=0xf300, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0xf29f, .a=0x31, .x=0xa2, .y=0x11, .sp=0x5c, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0xf2ff, .value=0x70}, {.addr=0xf300, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0xf2ff, .value=0x70, .type=IO_READ},
        {.addr=0xf300, .value=0x9e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0391) {
    const struct CPU_State initial_cpu = {.pc=0x0f64, .a=0xa4, .x=0x9f, .y=0x93, .sp=0x36, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x0f64, .value=0x70}, {.addr=0x0f65, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0x0fcf, .a=0xa4, .x=0x9f, .y=0x93, .sp=0x36, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x0f64, .value=0x70}, {.addr=0x0f65, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0x0f64, .value=0x70, .type=IO_READ},
        {.addr=0x0f65, .value=0x69, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0392) {
    const struct CPU_State initial_cpu = {.pc=0xb916, .a=0x44, .x=0x7e, .y=0x42, .sp=0x3d, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xb916, .value=0x70}, {.addr=0xb917, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0xb918, .a=0x44, .x=0x7e, .y=0x42, .sp=0x3d, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0xb916, .value=0x70}, {.addr=0xb917, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0xb916, .value=0x70, .type=IO_READ},
        {.addr=0xb917, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0393) {
    const struct CPU_State initial_cpu = {.pc=0x296d, .a=0xb4, .x=0x15, .y=0x71, .sp=0x72, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x296d, .value=0x70}, {.addr=0x296e, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x296f, .a=0xb4, .x=0x15, .y=0x71, .sp=0x72, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x296d, .value=0x70}, {.addr=0x296e, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x296d, .value=0x70, .type=IO_READ},
        {.addr=0x296e, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0394) {
    const struct CPU_State initial_cpu = {.pc=0xd61d, .a=0x1c, .x=0x6b, .y=0x29, .sp=0x7a, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xd61d, .value=0x70}, {.addr=0xd61e, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xd69c, .a=0x1c, .x=0x6b, .y=0x29, .sp=0x7a, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xd61d, .value=0x70}, {.addr=0xd61e, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xd61d, .value=0x70, .type=IO_READ},
        {.addr=0xd61e, .value=0x7d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0395) {
    const struct CPU_State initial_cpu = {.pc=0x93b0, .a=0x3a, .x=0xfb, .y=0xf3, .sp=0x55, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x93b0, .value=0x70}, {.addr=0x93b1, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x93b2, .a=0x3a, .x=0xfb, .y=0xf3, .sp=0x55, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x93b0, .value=0x70}, {.addr=0x93b1, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x93b0, .value=0x70, .type=IO_READ},
        {.addr=0x93b1, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0396) {
    const struct CPU_State initial_cpu = {.pc=0xfa48, .a=0x4a, .x=0x6f, .y=0x0a, .sp=0xd9, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xfa48, .value=0x70}, {.addr=0xfa49, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0xfaa2, .a=0x4a, .x=0x6f, .y=0x0a, .sp=0xd9, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0xfa48, .value=0x70}, {.addr=0xfa49, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0xfa48, .value=0x70, .type=IO_READ},
        {.addr=0xfa49, .value=0x58, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0397) {
    const struct CPU_State initial_cpu = {.pc=0x967c, .a=0x54, .x=0x4c, .y=0x59, .sp=0x43, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x967c, .value=0x70}, {.addr=0x967d, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0x96ef, .a=0x54, .x=0x4c, .y=0x59, .sp=0x43, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x967c, .value=0x70}, {.addr=0x967d, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0x967c, .value=0x70, .type=IO_READ},
        {.addr=0x967d, .value=0x71, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0398) {
    const struct CPU_State initial_cpu = {.pc=0xcf47, .a=0xbd, .x=0x60, .y=0x73, .sp=0xab, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xcf47, .value=0x70}, {.addr=0xcf48, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0xcf1a, .a=0xbd, .x=0x60, .y=0x73, .sp=0xab, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xcf47, .value=0x70}, {.addr=0xcf48, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0xcf47, .value=0x70, .type=IO_READ},
        {.addr=0xcf48, .value=0xd1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_0399) {
    const struct CPU_State initial_cpu = {.pc=0x9dd7, .a=0xd5, .x=0x81, .y=0x3f, .sp=0x91, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x9dd7, .value=0x70}, {.addr=0x9dd8, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x9e31, .a=0xd5, .x=0x81, .y=0x3f, .sp=0x91, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x9dd7, .value=0x70}, {.addr=0x9dd8, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x9dd7, .value=0x70, .type=IO_READ},
        {.addr=0x9dd8, .value=0x58, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_039A) {
    const struct CPU_State initial_cpu = {.pc=0xd430, .a=0x3c, .x=0x41, .y=0xa4, .sp=0x6f, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xd430, .value=0x70}, {.addr=0xd431, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xd43f, .a=0x3c, .x=0x41, .y=0xa4, .sp=0x6f, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xd430, .value=0x70}, {.addr=0xd431, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xd430, .value=0x70, .type=IO_READ},
        {.addr=0xd431, .value=0x0d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_039B) {
    const struct CPU_State initial_cpu = {.pc=0xe0c7, .a=0x98, .x=0x6b, .y=0x17, .sp=0x22, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xe0c7, .value=0x70}, {.addr=0xe0c8, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0xe0b9, .a=0x98, .x=0x6b, .y=0x17, .sp=0x22, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xe0c7, .value=0x70}, {.addr=0xe0c8, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0xe0c7, .value=0x70, .type=IO_READ},
        {.addr=0xe0c8, .value=0xf0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_039C) {
    const struct CPU_State initial_cpu = {.pc=0xe3a0, .a=0x1e, .x=0xc6, .y=0x39, .sp=0xd0, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xe3a0, .value=0x70}, {.addr=0xe3a1, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0xe3a2, .a=0x1e, .x=0xc6, .y=0x39, .sp=0xd0, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0xe3a0, .value=0x70}, {.addr=0xe3a1, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0xe3a0, .value=0x70, .type=IO_READ},
        {.addr=0xe3a1, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_039D) {
    const struct CPU_State initial_cpu = {.pc=0xc287, .a=0xed, .x=0x2c, .y=0xca, .sp=0xd4, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xc287, .value=0x70}, {.addr=0xc288, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0xc289, .a=0xed, .x=0x2c, .y=0xca, .sp=0xd4, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0xc287, .value=0x70}, {.addr=0xc288, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0xc287, .value=0x70, .type=IO_READ},
        {.addr=0xc288, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_039E) {
    const struct CPU_State initial_cpu = {.pc=0x7d3e, .a=0x3b, .x=0xfd, .y=0x52, .sp=0x85, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x7d3e, .value=0x70}, {.addr=0x7d3f, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0x7ce8, .a=0x3b, .x=0xfd, .y=0x52, .sp=0x85, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x7d3e, .value=0x70}, {.addr=0x7d3f, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0x7d3e, .value=0x70, .type=IO_READ},
        {.addr=0x7d3f, .value=0xa8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_039F) {
    const struct CPU_State initial_cpu = {.pc=0x995d, .a=0xd5, .x=0x03, .y=0xe5, .sp=0x54, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x995d, .value=0x70}, {.addr=0x995e, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x995f, .a=0xd5, .x=0x03, .y=0xe5, .sp=0x54, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x995d, .value=0x70}, {.addr=0x995e, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x995d, .value=0x70, .type=IO_READ},
        {.addr=0x995e, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03A0) {
    const struct CPU_State initial_cpu = {.pc=0x292f, .a=0xfc, .x=0xa7, .y=0x26, .sp=0xef, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x292f, .value=0x70}, {.addr=0x2930, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0x28ba, .a=0xfc, .x=0xa7, .y=0x26, .sp=0xef, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x292f, .value=0x70}, {.addr=0x2930, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0x292f, .value=0x70, .type=IO_READ},
        {.addr=0x2930, .value=0x89, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03A1) {
    const struct CPU_State initial_cpu = {.pc=0x9a56, .a=0xf7, .x=0x62, .y=0x9c, .sp=0xd3, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x9a56, .value=0x70}, {.addr=0x9a57, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x99f5, .a=0xf7, .x=0x62, .y=0x9c, .sp=0xd3, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x9a56, .value=0x70}, {.addr=0x9a57, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x9a56, .value=0x70, .type=IO_READ},
        {.addr=0x9a57, .value=0x9d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03A2) {
    const struct CPU_State initial_cpu = {.pc=0x5ff0, .a=0x4b, .x=0xcf, .y=0xbb, .sp=0xcf, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x5ff0, .value=0x70}, {.addr=0x5ff1, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0x5fed, .a=0x4b, .x=0xcf, .y=0xbb, .sp=0xcf, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x5ff0, .value=0x70}, {.addr=0x5ff1, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0x5ff0, .value=0x70, .type=IO_READ},
        {.addr=0x5ff1, .value=0xfb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03A3) {
    const struct CPU_State initial_cpu = {.pc=0x20b5, .a=0x23, .x=0x9f, .y=0x94, .sp=0xbe, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x20b5, .value=0x70}, {.addr=0x20b6, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0x2083, .a=0x23, .x=0x9f, .y=0x94, .sp=0xbe, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x20b5, .value=0x70}, {.addr=0x20b6, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0x20b5, .value=0x70, .type=IO_READ},
        {.addr=0x20b6, .value=0xcc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03A4) {
    const struct CPU_State initial_cpu = {.pc=0x25d1, .a=0x07, .x=0x9c, .y=0x41, .sp=0x06, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x25d1, .value=0x70}, {.addr=0x25d2, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0x25d3, .a=0x07, .x=0x9c, .y=0x41, .sp=0x06, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x25d1, .value=0x70}, {.addr=0x25d2, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0x25d1, .value=0x70, .type=IO_READ},
        {.addr=0x25d2, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03A5) {
    const struct CPU_State initial_cpu = {.pc=0xdb1a, .a=0xa9, .x=0xfa, .y=0x62, .sp=0x98, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xdb1a, .value=0x70}, {.addr=0xdb1b, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0xdac3, .a=0xa9, .x=0xfa, .y=0x62, .sp=0x98, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0xdb1a, .value=0x70}, {.addr=0xdb1b, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0xdb1a, .value=0x70, .type=IO_READ},
        {.addr=0xdb1b, .value=0xa7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x197a, .a=0xb0, .x=0x81, .y=0x13, .sp=0x5a, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x197a, .value=0x70}, {.addr=0x197b, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x197c, .a=0xb0, .x=0x81, .y=0x13, .sp=0x5a, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x197a, .value=0x70}, {.addr=0x197b, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x197a, .value=0x70, .type=IO_READ},
        {.addr=0x197b, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x30f4, .a=0x59, .x=0x7f, .y=0xdd, .sp=0xc5, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x30f4, .value=0x70}, {.addr=0x30f5, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0x30f6, .a=0x59, .x=0x7f, .y=0xdd, .sp=0xc5, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x30f4, .value=0x70}, {.addr=0x30f5, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0x30f4, .value=0x70, .type=IO_READ},
        {.addr=0x30f5, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03A8) {
    const struct CPU_State initial_cpu = {.pc=0xcc1a, .a=0xa2, .x=0x92, .y=0xa0, .sp=0x1b, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xcc1a, .value=0x70}, {.addr=0xcc1b, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0xcc1c, .a=0xa2, .x=0x92, .y=0xa0, .sp=0x1b, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xcc1a, .value=0x70}, {.addr=0xcc1b, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0xcc1a, .value=0x70, .type=IO_READ},
        {.addr=0xcc1b, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03A9) {
    const struct CPU_State initial_cpu = {.pc=0x88ad, .a=0x9e, .x=0x1f, .y=0x03, .sp=0x60, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x88ad, .value=0x70}, {.addr=0x88ae, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x88eb, .a=0x9e, .x=0x1f, .y=0x03, .sp=0x60, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x88ad, .value=0x70}, {.addr=0x88ae, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x88ad, .value=0x70, .type=IO_READ},
        {.addr=0x88ae, .value=0x3c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03AA) {
    const struct CPU_State initial_cpu = {.pc=0x7183, .a=0x75, .x=0x7c, .y=0x33, .sp=0xbe, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x7183, .value=0x70}, {.addr=0x7184, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x7133, .a=0x75, .x=0x7c, .y=0x33, .sp=0xbe, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x7183, .value=0x70}, {.addr=0x7184, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x7183, .value=0x70, .type=IO_READ},
        {.addr=0x7184, .value=0xae, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03AB) {
    const struct CPU_State initial_cpu = {.pc=0x709f, .a=0x77, .x=0x6d, .y=0x21, .sp=0x80, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x709f, .value=0x70}, {.addr=0x70a0, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0x70a1, .a=0x77, .x=0x6d, .y=0x21, .sp=0x80, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x709f, .value=0x70}, {.addr=0x70a0, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0x709f, .value=0x70, .type=IO_READ},
        {.addr=0x70a0, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03AC) {
    const struct CPU_State initial_cpu = {.pc=0x2241, .a=0xb2, .x=0x05, .y=0xad, .sp=0x32, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x2241, .value=0x70}, {.addr=0x2242, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0x2243, .a=0xb2, .x=0x05, .y=0xad, .sp=0x32, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x2241, .value=0x70}, {.addr=0x2242, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0x2241, .value=0x70, .type=IO_READ},
        {.addr=0x2242, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03AD) {
    const struct CPU_State initial_cpu = {.pc=0x6fca, .a=0x25, .x=0xc8, .y=0x36, .sp=0xcf, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x6fca, .value=0x70}, {.addr=0x6fcb, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0x6fb1, .a=0x25, .x=0xc8, .y=0x36, .sp=0xcf, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x6fca, .value=0x70}, {.addr=0x6fcb, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0x6fca, .value=0x70, .type=IO_READ},
        {.addr=0x6fcb, .value=0xe5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03AE) {
    const struct CPU_State initial_cpu = {.pc=0xf7a7, .a=0x48, .x=0x9f, .y=0x22, .sp=0x9b, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xf7a7, .value=0x70}, {.addr=0xf7a8, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0xf736, .a=0x48, .x=0x9f, .y=0x22, .sp=0x9b, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xf7a7, .value=0x70}, {.addr=0xf7a8, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0xf7a7, .value=0x70, .type=IO_READ},
        {.addr=0xf7a8, .value=0x8d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03AF) {
    const struct CPU_State initial_cpu = {.pc=0x6a3b, .a=0x96, .x=0x8f, .y=0x79, .sp=0x38, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x6a3b, .value=0x70}, {.addr=0x6a3c, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0x6a3d, .a=0x96, .x=0x8f, .y=0x79, .sp=0x38, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x6a3b, .value=0x70}, {.addr=0x6a3c, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0x6a3b, .value=0x70, .type=IO_READ},
        {.addr=0x6a3c, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x3410, .a=0xde, .x=0x13, .y=0x8d, .sp=0xd5, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x3410, .value=0x70}, {.addr=0x3411, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x3412, .a=0xde, .x=0x13, .y=0x8d, .sp=0xd5, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x3410, .value=0x70}, {.addr=0x3411, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x3410, .value=0x70, .type=IO_READ},
        {.addr=0x3411, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x925e, .a=0x3f, .x=0x77, .y=0x35, .sp=0x36, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x925e, .value=0x70}, {.addr=0x925f, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0x92bf, .a=0x3f, .x=0x77, .y=0x35, .sp=0x36, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x925e, .value=0x70}, {.addr=0x925f, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0x925e, .value=0x70, .type=IO_READ},
        {.addr=0x925f, .value=0x5f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03B2) {
    const struct CPU_State initial_cpu = {.pc=0xe791, .a=0x11, .x=0xba, .y=0x59, .sp=0x10, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xe791, .value=0x70}, {.addr=0xe792, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xe793, .a=0x11, .x=0xba, .y=0x59, .sp=0x10, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xe791, .value=0x70}, {.addr=0xe792, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xe791, .value=0x70, .type=IO_READ},
        {.addr=0xe792, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03B3) {
    const struct CPU_State initial_cpu = {.pc=0x4857, .a=0xec, .x=0x28, .y=0xc8, .sp=0x7b, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x4857, .value=0x70}, {.addr=0x4858, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x4859, .a=0xec, .x=0x28, .y=0xc8, .sp=0x7b, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x4857, .value=0x70}, {.addr=0x4858, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x4857, .value=0x70, .type=IO_READ},
        {.addr=0x4858, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x6cbd, .a=0x7f, .x=0xc8, .y=0xfb, .sp=0xf0, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x6cbd, .value=0x70}, {.addr=0x6cbe, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x6cd7, .a=0x7f, .x=0xc8, .y=0xfb, .sp=0xf0, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x6cbd, .value=0x70}, {.addr=0x6cbe, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x6cbd, .value=0x70, .type=IO_READ},
        {.addr=0x6cbe, .value=0x18, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03B5) {
    const struct CPU_State initial_cpu = {.pc=0x9a2c, .a=0x82, .x=0x79, .y=0x78, .sp=0x62, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x9a2c, .value=0x70}, {.addr=0x9a2d, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x9a67, .a=0x82, .x=0x79, .y=0x78, .sp=0x62, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x9a2c, .value=0x70}, {.addr=0x9a2d, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x9a2c, .value=0x70, .type=IO_READ},
        {.addr=0x9a2d, .value=0x39, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03B6) {
    const struct CPU_State initial_cpu = {.pc=0xd7e5, .a=0x35, .x=0xef, .y=0xcd, .sp=0xe9, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xd7e5, .value=0x70}, {.addr=0xd7e6, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0xd806, .a=0x35, .x=0xef, .y=0xcd, .sp=0xe9, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xd7e5, .value=0x70}, {.addr=0xd7e6, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0xd7e5, .value=0x70, .type=IO_READ},
        {.addr=0xd7e6, .value=0x1f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03B7) {
    const struct CPU_State initial_cpu = {.pc=0x6798, .a=0xc2, .x=0xcd, .y=0xdf, .sp=0xf5, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x6798, .value=0x70}, {.addr=0x6799, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0x679a, .a=0xc2, .x=0xcd, .y=0xdf, .sp=0xf5, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x6798, .value=0x70}, {.addr=0x6799, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0x6798, .value=0x70, .type=IO_READ},
        {.addr=0x6799, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03B8) {
    const struct CPU_State initial_cpu = {.pc=0xb0c6, .a=0x78, .x=0xdd, .y=0x0f, .sp=0x9e, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xb0c6, .value=0x70}, {.addr=0xb0c7, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0xb0c8, .a=0x78, .x=0xdd, .y=0x0f, .sp=0x9e, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xb0c6, .value=0x70}, {.addr=0xb0c7, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0xb0c6, .value=0x70, .type=IO_READ},
        {.addr=0xb0c7, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03B9) {
    const struct CPU_State initial_cpu = {.pc=0x1a02, .a=0x32, .x=0xed, .y=0x73, .sp=0x36, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x1a02, .value=0x70}, {.addr=0x1a03, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x1a04, .a=0x32, .x=0xed, .y=0x73, .sp=0x36, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x1a02, .value=0x70}, {.addr=0x1a03, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x1a02, .value=0x70, .type=IO_READ},
        {.addr=0x1a03, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03BA) {
    const struct CPU_State initial_cpu = {.pc=0x63d2, .a=0x8b, .x=0xcf, .y=0xc2, .sp=0x08, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x63d2, .value=0x70}, {.addr=0x63d3, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x63d4, .a=0x8b, .x=0xcf, .y=0xc2, .sp=0x08, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x63d2, .value=0x70}, {.addr=0x63d3, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x63d2, .value=0x70, .type=IO_READ},
        {.addr=0x63d3, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03BB) {
    const struct CPU_State initial_cpu = {.pc=0x55b5, .a=0x00, .x=0x99, .y=0xec, .sp=0xf7, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x55b5, .value=0x70}, {.addr=0x55b6, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0x55b7, .a=0x00, .x=0x99, .y=0xec, .sp=0xf7, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x55b5, .value=0x70}, {.addr=0x55b6, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0x55b5, .value=0x70, .type=IO_READ},
        {.addr=0x55b6, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03BC) {
    const struct CPU_State initial_cpu = {.pc=0xafdc, .a=0x8b, .x=0x48, .y=0x07, .sp=0xc0, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xafdc, .value=0x70}, {.addr=0xafdd, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xafde, .a=0x8b, .x=0x48, .y=0x07, .sp=0xc0, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0xafdc, .value=0x70}, {.addr=0xafdd, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xafdc, .value=0x70, .type=IO_READ},
        {.addr=0xafdd, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x908b, .a=0x0d, .x=0x16, .y=0x5e, .sp=0xf9, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x908b, .value=0x70}, {.addr=0x908c, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0x90a7, .a=0x0d, .x=0x16, .y=0x5e, .sp=0xf9, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x908b, .value=0x70}, {.addr=0x908c, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0x908b, .value=0x70, .type=IO_READ},
        {.addr=0x908c, .value=0x1a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03BE) {
    const struct CPU_State initial_cpu = {.pc=0x9969, .a=0x97, .x=0xc4, .y=0xa0, .sp=0x46, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x9969, .value=0x70}, {.addr=0x996a, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x996b, .a=0x97, .x=0xc4, .y=0xa0, .sp=0x46, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x9969, .value=0x70}, {.addr=0x996a, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x9969, .value=0x70, .type=IO_READ},
        {.addr=0x996a, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03BF) {
    const struct CPU_State initial_cpu = {.pc=0x965e, .a=0xa8, .x=0x08, .y=0x3c, .sp=0x2a, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x965e, .value=0x70}, {.addr=0x965f, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0x9679, .a=0xa8, .x=0x08, .y=0x3c, .sp=0x2a, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x965e, .value=0x70}, {.addr=0x965f, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0x965e, .value=0x70, .type=IO_READ},
        {.addr=0x965f, .value=0x19, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03C0) {
    const struct CPU_State initial_cpu = {.pc=0x06d4, .a=0x90, .x=0x79, .y=0xbe, .sp=0x06, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x06d4, .value=0x70}, {.addr=0x06d5, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x069b, .a=0x90, .x=0x79, .y=0xbe, .sp=0x06, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x06d4, .value=0x70}, {.addr=0x06d5, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x06d4, .value=0x70, .type=IO_READ},
        {.addr=0x06d5, .value=0xc5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03C1) {
    const struct CPU_State initial_cpu = {.pc=0x03b5, .a=0x2b, .x=0xb4, .y=0x6b, .sp=0x12, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x03b5, .value=0x70}, {.addr=0x03b6, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x037f, .a=0x2b, .x=0xb4, .y=0x6b, .sp=0x12, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x03b5, .value=0x70}, {.addr=0x03b6, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x03b5, .value=0x70, .type=IO_READ},
        {.addr=0x03b6, .value=0xc8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03C2) {
    const struct CPU_State initial_cpu = {.pc=0x09bc, .a=0xfe, .x=0x00, .y=0x30, .sp=0xb5, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x09bc, .value=0x70}, {.addr=0x09bd, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x099e, .a=0xfe, .x=0x00, .y=0x30, .sp=0xb5, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x09bc, .value=0x70}, {.addr=0x09bd, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x09bc, .value=0x70, .type=IO_READ},
        {.addr=0x09bd, .value=0xe0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03C3) {
    const struct CPU_State initial_cpu = {.pc=0x4f13, .a=0xbf, .x=0xf4, .y=0x5d, .sp=0xa4, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x4f13, .value=0x70}, {.addr=0x4f14, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x4f44, .a=0xbf, .x=0xf4, .y=0x5d, .sp=0xa4, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x4f13, .value=0x70}, {.addr=0x4f14, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x4f13, .value=0x70, .type=IO_READ},
        {.addr=0x4f14, .value=0x2f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03C4) {
    const struct CPU_State initial_cpu = {.pc=0x7e23, .a=0x9b, .x=0xaf, .y=0xd2, .sp=0x26, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x7e23, .value=0x70}, {.addr=0x7e24, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x7e25, .a=0x9b, .x=0xaf, .y=0xd2, .sp=0x26, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x7e23, .value=0x70}, {.addr=0x7e24, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x7e23, .value=0x70, .type=IO_READ},
        {.addr=0x7e24, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03C5) {
    const struct CPU_State initial_cpu = {.pc=0xa386, .a=0xb4, .x=0xf5, .y=0x65, .sp=0xe9, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xa386, .value=0x70}, {.addr=0xa387, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0xa388, .a=0xb4, .x=0xf5, .y=0x65, .sp=0xe9, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xa386, .value=0x70}, {.addr=0xa387, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0xa386, .value=0x70, .type=IO_READ},
        {.addr=0xa387, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x7341, .a=0x1d, .x=0x14, .y=0x58, .sp=0xc7, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x7341, .value=0x70}, {.addr=0x7342, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x7343, .a=0x1d, .x=0x14, .y=0x58, .sp=0xc7, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x7341, .value=0x70}, {.addr=0x7342, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x7341, .value=0x70, .type=IO_READ},
        {.addr=0x7342, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03C7) {
    const struct CPU_State initial_cpu = {.pc=0xa2d4, .a=0x4b, .x=0x1c, .y=0x1c, .sp=0x20, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xa2d4, .value=0x70}, {.addr=0xa2d5, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0xa2d6, .a=0x4b, .x=0x1c, .y=0x1c, .sp=0x20, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xa2d4, .value=0x70}, {.addr=0xa2d5, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0xa2d4, .value=0x70, .type=IO_READ},
        {.addr=0xa2d5, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03C8) {
    const struct CPU_State initial_cpu = {.pc=0x8317, .a=0x82, .x=0xc4, .y=0xe5, .sp=0x6f, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x8317, .value=0x70}, {.addr=0x8318, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0x8319, .a=0x82, .x=0xc4, .y=0xe5, .sp=0x6f, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x8317, .value=0x70}, {.addr=0x8318, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0x8317, .value=0x70, .type=IO_READ},
        {.addr=0x8318, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03C9) {
    const struct CPU_State initial_cpu = {.pc=0x6bd7, .a=0xac, .x=0xc6, .y=0x61, .sp=0x7b, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x6bd7, .value=0x70}, {.addr=0x6bd8, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x6c04, .a=0xac, .x=0xc6, .y=0x61, .sp=0x7b, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x6bd7, .value=0x70}, {.addr=0x6bd8, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x6bd7, .value=0x70, .type=IO_READ},
        {.addr=0x6bd8, .value=0x2b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x8555, .a=0x15, .x=0x7e, .y=0xaf, .sp=0xcb, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x8555, .value=0x70}, {.addr=0x8556, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x84dd, .a=0x15, .x=0x7e, .y=0xaf, .sp=0xcb, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x8555, .value=0x70}, {.addr=0x8556, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x8555, .value=0x70, .type=IO_READ},
        {.addr=0x8556, .value=0x86, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03CB) {
    const struct CPU_State initial_cpu = {.pc=0x9d07, .a=0x7e, .x=0xc3, .y=0xe2, .sp=0x76, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x9d07, .value=0x70}, {.addr=0x9d08, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0x9d09, .a=0x7e, .x=0xc3, .y=0xe2, .sp=0x76, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x9d07, .value=0x70}, {.addr=0x9d08, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0x9d07, .value=0x70, .type=IO_READ},
        {.addr=0x9d08, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03CC) {
    const struct CPU_State initial_cpu = {.pc=0xb3ff, .a=0xc4, .x=0xfb, .y=0x1f, .sp=0x9f, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xb3ff, .value=0x70}, {.addr=0xb400, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0xb401, .a=0xc4, .x=0xfb, .y=0x1f, .sp=0x9f, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0xb3ff, .value=0x70}, {.addr=0xb400, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0xb3ff, .value=0x70, .type=IO_READ},
        {.addr=0xb400, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03CD) {
    const struct CPU_State initial_cpu = {.pc=0x38e8, .a=0x6f, .x=0x16, .y=0xb8, .sp=0xf4, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x38e8, .value=0x70}, {.addr=0x38e9, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0x388f, .a=0x6f, .x=0x16, .y=0xb8, .sp=0xf4, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x38e8, .value=0x70}, {.addr=0x38e9, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0x38e8, .value=0x70, .type=IO_READ},
        {.addr=0x38e9, .value=0xa5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x254e, .a=0xc3, .x=0xf0, .y=0x72, .sp=0x8a, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x254e, .value=0x70}, {.addr=0x254f, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0x2550, .a=0xc3, .x=0xf0, .y=0x72, .sp=0x8a, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x254e, .value=0x70}, {.addr=0x254f, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0x254e, .value=0x70, .type=IO_READ},
        {.addr=0x254f, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03CF) {
    const struct CPU_State initial_cpu = {.pc=0xbb24, .a=0xcc, .x=0x9b, .y=0x7d, .sp=0xe2, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xbb24, .value=0x70}, {.addr=0xbb25, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0xbada, .a=0xcc, .x=0x9b, .y=0x7d, .sp=0xe2, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0xbb24, .value=0x70}, {.addr=0xbb25, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0xbb24, .value=0x70, .type=IO_READ},
        {.addr=0xbb25, .value=0xb4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03D0) {
    const struct CPU_State initial_cpu = {.pc=0xcc20, .a=0xb7, .x=0x38, .y=0x13, .sp=0xde, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xcc20, .value=0x70}, {.addr=0xcc21, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0xcc99, .a=0xb7, .x=0x38, .y=0x13, .sp=0xde, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0xcc20, .value=0x70}, {.addr=0xcc21, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0xcc20, .value=0x70, .type=IO_READ},
        {.addr=0xcc21, .value=0x77, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03D1) {
    const struct CPU_State initial_cpu = {.pc=0x7555, .a=0x03, .x=0x0d, .y=0x3f, .sp=0xd1, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x7555, .value=0x70}, {.addr=0x7556, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x7557, .a=0x03, .x=0x0d, .y=0x3f, .sp=0xd1, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x7555, .value=0x70}, {.addr=0x7556, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x7555, .value=0x70, .type=IO_READ},
        {.addr=0x7556, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03D2) {
    const struct CPU_State initial_cpu = {.pc=0x1d68, .a=0xed, .x=0x73, .y=0x6d, .sp=0x6a, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x1d68, .value=0x70}, {.addr=0x1d69, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x1d8a, .a=0xed, .x=0x73, .y=0x6d, .sp=0x6a, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x1d68, .value=0x70}, {.addr=0x1d69, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x1d68, .value=0x70, .type=IO_READ},
        {.addr=0x1d69, .value=0x20, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03D3) {
    const struct CPU_State initial_cpu = {.pc=0x0d2f, .a=0x73, .x=0xc0, .y=0x6f, .sp=0x58, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x0d2f, .value=0x70}, {.addr=0x0d30, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0x0d31, .a=0x73, .x=0xc0, .y=0x6f, .sp=0x58, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x0d2f, .value=0x70}, {.addr=0x0d30, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0x0d2f, .value=0x70, .type=IO_READ},
        {.addr=0x0d30, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03D4) {
    const struct CPU_State initial_cpu = {.pc=0x701b, .a=0xc2, .x=0x3d, .y=0xac, .sp=0x6d, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x701b, .value=0x70}, {.addr=0x701c, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x701d, .a=0xc2, .x=0x3d, .y=0xac, .sp=0x6d, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x701b, .value=0x70}, {.addr=0x701c, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x701b, .value=0x70, .type=IO_READ},
        {.addr=0x701c, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03D5) {
    const struct CPU_State initial_cpu = {.pc=0x1fc5, .a=0xf9, .x=0x69, .y=0xf1, .sp=0x7e, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x1fc5, .value=0x70}, {.addr=0x1fc6, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0x1fc7, .a=0xf9, .x=0x69, .y=0xf1, .sp=0x7e, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x1fc5, .value=0x70}, {.addr=0x1fc6, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0x1fc5, .value=0x70, .type=IO_READ},
        {.addr=0x1fc6, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03D6) {
    const struct CPU_State initial_cpu = {.pc=0x1618, .a=0x89, .x=0x0d, .y=0x2d, .sp=0xdb, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x1618, .value=0x70}, {.addr=0x1619, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x1684, .a=0x89, .x=0x0d, .y=0x2d, .sp=0xdb, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x1618, .value=0x70}, {.addr=0x1619, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x1618, .value=0x70, .type=IO_READ},
        {.addr=0x1619, .value=0x6a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03D7) {
    const struct CPU_State initial_cpu = {.pc=0x65c8, .a=0x4b, .x=0xcb, .y=0x7a, .sp=0xaa, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x65c8, .value=0x70}, {.addr=0x65c9, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0x657b, .a=0x4b, .x=0xcb, .y=0x7a, .sp=0xaa, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x65c8, .value=0x70}, {.addr=0x65c9, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0x65c8, .value=0x70, .type=IO_READ},
        {.addr=0x65c9, .value=0xb1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03D8) {
    const struct CPU_State initial_cpu = {.pc=0xc14d, .a=0x23, .x=0xc0, .y=0xe3, .sp=0xad, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xc14d, .value=0x70}, {.addr=0xc14e, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xc14f, .a=0x23, .x=0xc0, .y=0xe3, .sp=0xad, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xc14d, .value=0x70}, {.addr=0xc14e, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xc14d, .value=0x70, .type=IO_READ},
        {.addr=0xc14e, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03D9) {
    const struct CPU_State initial_cpu = {.pc=0xa3d3, .a=0x88, .x=0xfe, .y=0x05, .sp=0x1a, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xa3d3, .value=0x70}, {.addr=0xa3d4, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0xa3d5, .a=0x88, .x=0xfe, .y=0x05, .sp=0x1a, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0xa3d3, .value=0x70}, {.addr=0xa3d4, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0xa3d3, .value=0x70, .type=IO_READ},
        {.addr=0xa3d4, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03DA) {
    const struct CPU_State initial_cpu = {.pc=0x0b18, .a=0xb7, .x=0x23, .y=0xc9, .sp=0xf8, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x0b18, .value=0x70}, {.addr=0x0b19, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0x0a9b, .a=0xb7, .x=0x23, .y=0xc9, .sp=0xf8, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0b18, .value=0x70}, {.addr=0x0b19, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0x0b18, .value=0x70, .type=IO_READ},
        {.addr=0x0b19, .value=0x81, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03DB) {
    const struct CPU_State initial_cpu = {.pc=0x3108, .a=0xae, .x=0x63, .y=0x70, .sp=0x17, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x3108, .value=0x70}, {.addr=0x3109, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x310a, .a=0xae, .x=0x63, .y=0x70, .sp=0x17, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x3108, .value=0x70}, {.addr=0x3109, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x3108, .value=0x70, .type=IO_READ},
        {.addr=0x3109, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03DC) {
    const struct CPU_State initial_cpu = {.pc=0x801c, .a=0xf8, .x=0x8d, .y=0x42, .sp=0xca, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x801c, .value=0x70}, {.addr=0x801d, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x7ff1, .a=0xf8, .x=0x8d, .y=0x42, .sp=0xca, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x801c, .value=0x70}, {.addr=0x801d, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x801c, .value=0x70, .type=IO_READ},
        {.addr=0x801d, .value=0xd3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03DD) {
    const struct CPU_State initial_cpu = {.pc=0x1406, .a=0x54, .x=0x3d, .y=0xbe, .sp=0x7f, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x1406, .value=0x70}, {.addr=0x1407, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x1408, .a=0x54, .x=0x3d, .y=0xbe, .sp=0x7f, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x1406, .value=0x70}, {.addr=0x1407, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x1406, .value=0x70, .type=IO_READ},
        {.addr=0x1407, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03DE) {
    const struct CPU_State initial_cpu = {.pc=0x5edb, .a=0x34, .x=0x49, .y=0x98, .sp=0xa2, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x5edb, .value=0x70}, {.addr=0x5edc, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x5f20, .a=0x34, .x=0x49, .y=0x98, .sp=0xa2, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x5edb, .value=0x70}, {.addr=0x5edc, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x5edb, .value=0x70, .type=IO_READ},
        {.addr=0x5edc, .value=0x43, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03DF) {
    const struct CPU_State initial_cpu = {.pc=0xb1d5, .a=0xb8, .x=0x6b, .y=0xdd, .sp=0x0a, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xb1d5, .value=0x70}, {.addr=0xb1d6, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0xb1d7, .a=0xb8, .x=0x6b, .y=0xdd, .sp=0x0a, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0xb1d5, .value=0x70}, {.addr=0xb1d6, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0xb1d5, .value=0x70, .type=IO_READ},
        {.addr=0xb1d6, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03E0) {
    const struct CPU_State initial_cpu = {.pc=0xe181, .a=0x85, .x=0x42, .y=0x31, .sp=0xf4, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xe181, .value=0x70}, {.addr=0xe182, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0xe183, .a=0x85, .x=0x42, .y=0x31, .sp=0xf4, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xe181, .value=0x70}, {.addr=0xe182, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0xe181, .value=0x70, .type=IO_READ},
        {.addr=0xe182, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03E1) {
    const struct CPU_State initial_cpu = {.pc=0x199a, .a=0xee, .x=0x73, .y=0xbc, .sp=0x97, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x199a, .value=0x70}, {.addr=0x199b, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0x199c, .a=0xee, .x=0x73, .y=0xbc, .sp=0x97, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x199a, .value=0x70}, {.addr=0x199b, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0x199a, .value=0x70, .type=IO_READ},
        {.addr=0x199b, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03E2) {
    const struct CPU_State initial_cpu = {.pc=0xd76a, .a=0xf1, .x=0x28, .y=0x72, .sp=0xec, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xd76a, .value=0x70}, {.addr=0xd76b, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0xd76c, .a=0xf1, .x=0x28, .y=0x72, .sp=0xec, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xd76a, .value=0x70}, {.addr=0xd76b, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0xd76a, .value=0x70, .type=IO_READ},
        {.addr=0xd76b, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03E3) {
    const struct CPU_State initial_cpu = {.pc=0x5e4b, .a=0x8c, .x=0x8f, .y=0x08, .sp=0x0d, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x5e4b, .value=0x70}, {.addr=0x5e4c, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x5e4d, .a=0x8c, .x=0x8f, .y=0x08, .sp=0x0d, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x5e4b, .value=0x70}, {.addr=0x5e4c, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x5e4b, .value=0x70, .type=IO_READ},
        {.addr=0x5e4c, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x81e1, .a=0xd2, .x=0x2a, .y=0x3c, .sp=0x1d, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x81e1, .value=0x70}, {.addr=0x81e2, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x81d0, .a=0xd2, .x=0x2a, .y=0x3c, .sp=0x1d, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x81e1, .value=0x70}, {.addr=0x81e2, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x81e1, .value=0x70, .type=IO_READ},
        {.addr=0x81e2, .value=0xed, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03E5) {
    const struct CPU_State initial_cpu = {.pc=0x5155, .a=0xf0, .x=0x5f, .y=0x7a, .sp=0x60, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x5155, .value=0x70}, {.addr=0x5156, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0x5157, .a=0xf0, .x=0x5f, .y=0x7a, .sp=0x60, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x5155, .value=0x70}, {.addr=0x5156, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0x5155, .value=0x70, .type=IO_READ},
        {.addr=0x5156, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03E6) {
    const struct CPU_State initial_cpu = {.pc=0xbb1b, .a=0xa1, .x=0x9c, .y=0xc0, .sp=0x1c, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xbb1b, .value=0x70}, {.addr=0xbb1c, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0xbb1d, .a=0xa1, .x=0x9c, .y=0xc0, .sp=0x1c, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0xbb1b, .value=0x70}, {.addr=0xbb1c, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0xbb1b, .value=0x70, .type=IO_READ},
        {.addr=0xbb1c, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_70, _70_03E7) {
    const struct CPU_State initial_cpu = {.pc=0xc1d8, .a=0x93, .x=0x8a, .y=0xa0, .sp=0x67, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xc1d8, .value=0x70}, {.addr=0xc1d9, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0xc171, .a=0x93, .x=0x8a, .y=0xa0, .sp=0x67, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xc1d8, .value=0x70}, {.addr=0xc1d9, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0xc1d8, .value=0x70, .type=IO_READ},
        {.addr=0xc1d9, .value=0x97, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("70 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
