#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_1D, _1D_0000) {
    const struct CPU_State initial_cpu = {.pc=0x8ce4, .a=0x98, .x=0x39, .y=0x9f, .sp=0xf2, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x8ce4, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x8ce5, .a=0x98, .x=0x38, .y=0x9f, .sp=0xf2, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x8ce4, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x8ce4, .value=0x1d, .type=IO_READ},
        {.addr=0x8ce5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0001) {
    const struct CPU_State initial_cpu = {.pc=0x9b9b, .a=0xee, .x=0x8c, .y=0x47, .sp=0x1a, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x9b9b, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x9b9c, .a=0xee, .x=0x8b, .y=0x47, .sp=0x1a, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x9b9b, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x9b9b, .value=0x1d, .type=IO_READ},
        {.addr=0x9b9c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0002) {
    const struct CPU_State initial_cpu = {.pc=0x57c8, .a=0xa7, .x=0x8f, .y=0xb0, .sp=0x41, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x57c8, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x57c9, .a=0xa7, .x=0x8e, .y=0xb0, .sp=0x41, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x57c8, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x57c8, .value=0x1d, .type=IO_READ},
        {.addr=0x57c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0003) {
    const struct CPU_State initial_cpu = {.pc=0xd86e, .a=0xb0, .x=0x35, .y=0xe1, .sp=0x70, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xd86e, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xd86f, .a=0xb0, .x=0x34, .y=0xe1, .sp=0x70, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xd86e, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xd86e, .value=0x1d, .type=IO_READ},
        {.addr=0xd86f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0004) {
    const struct CPU_State initial_cpu = {.pc=0x388a, .a=0x06, .x=0xc5, .y=0xc3, .sp=0xfd, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x388a, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x388b, .a=0x06, .x=0xc4, .y=0xc3, .sp=0xfd, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x388a, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x388a, .value=0x1d, .type=IO_READ},
        {.addr=0x388b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0005) {
    const struct CPU_State initial_cpu = {.pc=0xf3b7, .a=0xd6, .x=0xa1, .y=0x9e, .sp=0xc9, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xf3b7, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xf3b8, .a=0xd6, .x=0xa0, .y=0x9e, .sp=0xc9, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xf3b7, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xf3b7, .value=0x1d, .type=IO_READ},
        {.addr=0xf3b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0006) {
    const struct CPU_State initial_cpu = {.pc=0xb24d, .a=0xf1, .x=0x99, .y=0x1e, .sp=0xd3, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xb24d, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xb24e, .a=0xf1, .x=0x98, .y=0x1e, .sp=0xd3, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xb24d, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xb24d, .value=0x1d, .type=IO_READ},
        {.addr=0xb24e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0007) {
    const struct CPU_State initial_cpu = {.pc=0x348b, .a=0x22, .x=0x20, .y=0xd8, .sp=0x55, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x348b, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x348c, .a=0x22, .x=0x1f, .y=0xd8, .sp=0x55, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x348b, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x348b, .value=0x1d, .type=IO_READ},
        {.addr=0x348c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0008) {
    const struct CPU_State initial_cpu = {.pc=0xe303, .a=0x8e, .x=0xd3, .y=0xe5, .sp=0xf6, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xe303, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xe304, .a=0x8e, .x=0xd2, .y=0xe5, .sp=0xf6, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xe303, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xe303, .value=0x1d, .type=IO_READ},
        {.addr=0xe304, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0009) {
    const struct CPU_State initial_cpu = {.pc=0xf274, .a=0xe4, .x=0xaf, .y=0x5f, .sp=0x7d, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xf274, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xf275, .a=0xe4, .x=0xae, .y=0x5f, .sp=0x7d, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xf274, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xf274, .value=0x1d, .type=IO_READ},
        {.addr=0xf275, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_000A) {
    const struct CPU_State initial_cpu = {.pc=0x2077, .a=0x51, .x=0x30, .y=0x34, .sp=0x9d, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x2077, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x2078, .a=0x51, .x=0x2f, .y=0x34, .sp=0x9d, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x2077, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x2077, .value=0x1d, .type=IO_READ},
        {.addr=0x2078, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_000B) {
    const struct CPU_State initial_cpu = {.pc=0xd759, .a=0x54, .x=0xa6, .y=0x79, .sp=0x40, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xd759, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xd75a, .a=0x54, .x=0xa5, .y=0x79, .sp=0x40, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xd759, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xd759, .value=0x1d, .type=IO_READ},
        {.addr=0xd75a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_000C) {
    const struct CPU_State initial_cpu = {.pc=0x95a2, .a=0x2c, .x=0x04, .y=0x06, .sp=0xe6, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x95a2, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x95a3, .a=0x2c, .x=0x03, .y=0x06, .sp=0xe6, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x95a2, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x95a2, .value=0x1d, .type=IO_READ},
        {.addr=0x95a3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_000D) {
    const struct CPU_State initial_cpu = {.pc=0x2f11, .a=0x81, .x=0x92, .y=0x80, .sp=0x58, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x2f11, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x2f12, .a=0x81, .x=0x91, .y=0x80, .sp=0x58, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x2f11, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x2f11, .value=0x1d, .type=IO_READ},
        {.addr=0x2f12, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_000E) {
    const struct CPU_State initial_cpu = {.pc=0x3d40, .a=0x8a, .x=0x91, .y=0x57, .sp=0xd9, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x3d40, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x3d41, .a=0x8a, .x=0x90, .y=0x57, .sp=0xd9, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x3d40, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x3d40, .value=0x1d, .type=IO_READ},
        {.addr=0x3d41, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_000F) {
    const struct CPU_State initial_cpu = {.pc=0x181c, .a=0x79, .x=0x76, .y=0x2e, .sp=0x40, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x181c, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x181d, .a=0x79, .x=0x75, .y=0x2e, .sp=0x40, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x181c, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x181c, .value=0x1d, .type=IO_READ},
        {.addr=0x181d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0010) {
    const struct CPU_State initial_cpu = {.pc=0xffbb, .a=0x28, .x=0xb7, .y=0xe5, .sp=0xc5, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xffbb, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xffbc, .a=0x28, .x=0xb6, .y=0xe5, .sp=0xc5, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xffbb, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xffbb, .value=0x1d, .type=IO_READ},
        {.addr=0xffbc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0011) {
    const struct CPU_State initial_cpu = {.pc=0xde05, .a=0x4f, .x=0x7e, .y=0x83, .sp=0xcb, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xde05, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xde06, .a=0x4f, .x=0x7d, .y=0x83, .sp=0xcb, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xde05, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xde05, .value=0x1d, .type=IO_READ},
        {.addr=0xde06, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0013) {
    const struct CPU_State initial_cpu = {.pc=0x8c51, .a=0x57, .x=0x02, .y=0x6f, .sp=0xae, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x8c51, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x8c52, .a=0x57, .x=0x01, .y=0x6f, .sp=0xae, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x8c51, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x8c51, .value=0x1d, .type=IO_READ},
        {.addr=0x8c52, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0014) {
    const struct CPU_State initial_cpu = {.pc=0xd10b, .a=0xa3, .x=0xe9, .y=0xca, .sp=0x5e, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xd10b, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xd10c, .a=0xa3, .x=0xe8, .y=0xca, .sp=0x5e, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xd10b, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xd10b, .value=0x1d, .type=IO_READ},
        {.addr=0xd10c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0015) {
    const struct CPU_State initial_cpu = {.pc=0x5dfc, .a=0x29, .x=0xea, .y=0x82, .sp=0x0a, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x5dfc, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x5dfd, .a=0x29, .x=0xe9, .y=0x82, .sp=0x0a, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x5dfc, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x5dfc, .value=0x1d, .type=IO_READ},
        {.addr=0x5dfd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0016) {
    const struct CPU_State initial_cpu = {.pc=0xc3e1, .a=0xb7, .x=0xec, .y=0x0e, .sp=0xaa, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xc3e1, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc3e2, .a=0xb7, .x=0xeb, .y=0x0e, .sp=0xaa, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xc3e1, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc3e1, .value=0x1d, .type=IO_READ},
        {.addr=0xc3e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0017) {
    const struct CPU_State initial_cpu = {.pc=0xba4a, .a=0xb6, .x=0xd3, .y=0x79, .sp=0xdf, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xba4a, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xba4b, .a=0xb6, .x=0xd2, .y=0x79, .sp=0xdf, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xba4a, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xba4a, .value=0x1d, .type=IO_READ},
        {.addr=0xba4b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0018) {
    const struct CPU_State initial_cpu = {.pc=0x73c7, .a=0x67, .x=0xc3, .y=0x87, .sp=0x47, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x73c7, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x73c8, .a=0x67, .x=0xc2, .y=0x87, .sp=0x47, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x73c7, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x73c7, .value=0x1d, .type=IO_READ},
        {.addr=0x73c8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0019) {
    const struct CPU_State initial_cpu = {.pc=0xbf0c, .a=0xe1, .x=0xaf, .y=0x60, .sp=0x95, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xbf0c, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xbf0d, .a=0xe1, .x=0xae, .y=0x60, .sp=0x95, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xbf0c, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xbf0c, .value=0x1d, .type=IO_READ},
        {.addr=0xbf0d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_001A) {
    const struct CPU_State initial_cpu = {.pc=0x20ba, .a=0x74, .x=0x79, .y=0x9f, .sp=0x00, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x20ba, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x20bb, .a=0x74, .x=0x78, .y=0x9f, .sp=0x00, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x20ba, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x20ba, .value=0x1d, .type=IO_READ},
        {.addr=0x20bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_001B) {
    const struct CPU_State initial_cpu = {.pc=0x94b2, .a=0x77, .x=0xd4, .y=0x8e, .sp=0x89, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x94b2, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x94b3, .a=0x77, .x=0xd3, .y=0x8e, .sp=0x89, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x94b2, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x94b2, .value=0x1d, .type=IO_READ},
        {.addr=0x94b3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_001C) {
    const struct CPU_State initial_cpu = {.pc=0x11c0, .a=0x39, .x=0x78, .y=0x53, .sp=0xe9, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x11c0, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x11c1, .a=0x39, .x=0x77, .y=0x53, .sp=0xe9, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x11c0, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x11c0, .value=0x1d, .type=IO_READ},
        {.addr=0x11c1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_001D) {
    const struct CPU_State initial_cpu = {.pc=0xf4d8, .a=0x4f, .x=0xbb, .y=0xbb, .sp=0xac, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xf4d8, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xf4d9, .a=0x4f, .x=0xba, .y=0xbb, .sp=0xac, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xf4d8, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xf4d8, .value=0x1d, .type=IO_READ},
        {.addr=0xf4d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_001E) {
    const struct CPU_State initial_cpu = {.pc=0xc85a, .a=0x43, .x=0x59, .y=0x12, .sp=0x58, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xc85a, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc85b, .a=0x43, .x=0x58, .y=0x12, .sp=0x58, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xc85a, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc85a, .value=0x1d, .type=IO_READ},
        {.addr=0xc85b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_001F) {
    const struct CPU_State initial_cpu = {.pc=0xa317, .a=0x45, .x=0xf3, .y=0x94, .sp=0x94, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xa317, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xa318, .a=0x45, .x=0xf2, .y=0x94, .sp=0x94, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xa317, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xa317, .value=0x1d, .type=IO_READ},
        {.addr=0xa318, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0020) {
    const struct CPU_State initial_cpu = {.pc=0x55d6, .a=0xac, .x=0x0a, .y=0xbf, .sp=0x75, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x55d6, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x55d7, .a=0xac, .x=0x09, .y=0xbf, .sp=0x75, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x55d6, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x55d6, .value=0x1d, .type=IO_READ},
        {.addr=0x55d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0021) {
    const struct CPU_State initial_cpu = {.pc=0x2f2a, .a=0x4c, .x=0x39, .y=0x3f, .sp=0xdb, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x2f2a, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x2f2b, .a=0x4c, .x=0x38, .y=0x3f, .sp=0xdb, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x2f2a, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x2f2a, .value=0x1d, .type=IO_READ},
        {.addr=0x2f2b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0022) {
    const struct CPU_State initial_cpu = {.pc=0xdd31, .a=0x58, .x=0x9e, .y=0xa8, .sp=0xa2, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xdd31, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xdd32, .a=0x58, .x=0x9d, .y=0xa8, .sp=0xa2, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xdd31, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xdd31, .value=0x1d, .type=IO_READ},
        {.addr=0xdd32, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0023) {
    const struct CPU_State initial_cpu = {.pc=0x98f2, .a=0x1d, .x=0x1c, .y=0x86, .sp=0x87, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x98f2, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x98f3, .a=0x1d, .x=0x1b, .y=0x86, .sp=0x87, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x98f2, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x98f2, .value=0x1d, .type=IO_READ},
        {.addr=0x98f3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0024) {
    const struct CPU_State initial_cpu = {.pc=0x5028, .a=0xb5, .x=0x61, .y=0xfb, .sp=0x7b, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x5028, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x5029, .a=0xb5, .x=0x60, .y=0xfb, .sp=0x7b, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x5028, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x5028, .value=0x1d, .type=IO_READ},
        {.addr=0x5029, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0025) {
    const struct CPU_State initial_cpu = {.pc=0x3804, .a=0xc9, .x=0x3a, .y=0x10, .sp=0x5d, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x3804, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x3805, .a=0xc9, .x=0x39, .y=0x10, .sp=0x5d, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x3804, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x3804, .value=0x1d, .type=IO_READ},
        {.addr=0x3805, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0026) {
    const struct CPU_State initial_cpu = {.pc=0xad26, .a=0xa0, .x=0x6b, .y=0x19, .sp=0x1c, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xad26, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xad27, .a=0xa0, .x=0x6a, .y=0x19, .sp=0x1c, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xad26, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xad26, .value=0x1d, .type=IO_READ},
        {.addr=0xad27, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0027) {
    const struct CPU_State initial_cpu = {.pc=0x5293, .a=0xef, .x=0xab, .y=0xa8, .sp=0x80, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x5293, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x5294, .a=0xef, .x=0xaa, .y=0xa8, .sp=0x80, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x5293, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x5293, .value=0x1d, .type=IO_READ},
        {.addr=0x5294, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0028) {
    const struct CPU_State initial_cpu = {.pc=0xb491, .a=0xcf, .x=0x24, .y=0xad, .sp=0x5b, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xb491, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xb492, .a=0xcf, .x=0x23, .y=0xad, .sp=0x5b, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xb491, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xb491, .value=0x1d, .type=IO_READ},
        {.addr=0xb492, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0029) {
    const struct CPU_State initial_cpu = {.pc=0xc941, .a=0x73, .x=0xac, .y=0x6c, .sp=0xa8, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xc941, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc942, .a=0x73, .x=0xab, .y=0x6c, .sp=0xa8, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xc941, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc941, .value=0x1d, .type=IO_READ},
        {.addr=0xc942, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_002A) {
    const struct CPU_State initial_cpu = {.pc=0xde78, .a=0x1e, .x=0x5b, .y=0xc2, .sp=0xb6, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xde78, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xde79, .a=0x1e, .x=0x5a, .y=0xc2, .sp=0xb6, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xde78, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xde78, .value=0x1d, .type=IO_READ},
        {.addr=0xde79, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_002B) {
    const struct CPU_State initial_cpu = {.pc=0xd3a8, .a=0xa2, .x=0x60, .y=0x8b, .sp=0x89, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xd3a8, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xd3a9, .a=0xa2, .x=0x5f, .y=0x8b, .sp=0x89, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xd3a8, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xd3a8, .value=0x1d, .type=IO_READ},
        {.addr=0xd3a9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_002C) {
    const struct CPU_State initial_cpu = {.pc=0x229c, .a=0x8b, .x=0x7b, .y=0x7c, .sp=0x1c, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x229c, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x229d, .a=0x8b, .x=0x7a, .y=0x7c, .sp=0x1c, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x229c, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x229c, .value=0x1d, .type=IO_READ},
        {.addr=0x229d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_002D) {
    const struct CPU_State initial_cpu = {.pc=0xca20, .a=0xad, .x=0xde, .y=0x4a, .sp=0xe1, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xca20, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xca21, .a=0xad, .x=0xdd, .y=0x4a, .sp=0xe1, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xca20, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xca20, .value=0x1d, .type=IO_READ},
        {.addr=0xca21, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_002E) {
    const struct CPU_State initial_cpu = {.pc=0x53a6, .a=0xd8, .x=0x4b, .y=0x37, .sp=0x8e, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x53a6, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x53a7, .a=0xd8, .x=0x4a, .y=0x37, .sp=0x8e, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x53a6, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x53a6, .value=0x1d, .type=IO_READ},
        {.addr=0x53a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_002F) {
    const struct CPU_State initial_cpu = {.pc=0xe60b, .a=0x93, .x=0x0c, .y=0xd0, .sp=0xff, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xe60b, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xe60c, .a=0x93, .x=0x0b, .y=0xd0, .sp=0xff, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xe60b, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xe60b, .value=0x1d, .type=IO_READ},
        {.addr=0xe60c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0030) {
    const struct CPU_State initial_cpu = {.pc=0x5a90, .a=0xbc, .x=0xc5, .y=0xd0, .sp=0x49, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x5a90, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x5a91, .a=0xbc, .x=0xc4, .y=0xd0, .sp=0x49, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x5a90, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x5a90, .value=0x1d, .type=IO_READ},
        {.addr=0x5a91, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0031) {
    const struct CPU_State initial_cpu = {.pc=0x009d, .a=0xf8, .x=0x17, .y=0xce, .sp=0x17, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x009d, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x009e, .a=0xf8, .x=0x16, .y=0xce, .sp=0x17, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x009d, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x009d, .value=0x1d, .type=IO_READ},
        {.addr=0x009e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0032) {
    const struct CPU_State initial_cpu = {.pc=0x49f1, .a=0xad, .x=0xb9, .y=0x52, .sp=0x7c, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x49f1, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x49f2, .a=0xad, .x=0xb8, .y=0x52, .sp=0x7c, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x49f1, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x49f1, .value=0x1d, .type=IO_READ},
        {.addr=0x49f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0033) {
    const struct CPU_State initial_cpu = {.pc=0xbfcf, .a=0xd9, .x=0x80, .y=0x83, .sp=0x90, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xbfcf, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xbfd0, .a=0xd9, .x=0x7f, .y=0x83, .sp=0x90, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xbfcf, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xbfcf, .value=0x1d, .type=IO_READ},
        {.addr=0xbfd0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0034) {
    const struct CPU_State initial_cpu = {.pc=0xc709, .a=0x61, .x=0xa5, .y=0xfe, .sp=0x4d, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xc709, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc70a, .a=0x61, .x=0xa4, .y=0xfe, .sp=0x4d, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xc709, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc709, .value=0x1d, .type=IO_READ},
        {.addr=0xc70a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0035) {
    const struct CPU_State initial_cpu = {.pc=0xa418, .a=0x2b, .x=0xa3, .y=0x99, .sp=0x22, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xa418, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xa419, .a=0x2b, .x=0xa2, .y=0x99, .sp=0x22, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xa418, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xa418, .value=0x1d, .type=IO_READ},
        {.addr=0xa419, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0036) {
    const struct CPU_State initial_cpu = {.pc=0x2b0b, .a=0xad, .x=0xf7, .y=0x18, .sp=0x8e, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x2b0b, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x2b0c, .a=0xad, .x=0xf6, .y=0x18, .sp=0x8e, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x2b0b, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x2b0b, .value=0x1d, .type=IO_READ},
        {.addr=0x2b0c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0037) {
    const struct CPU_State initial_cpu = {.pc=0xf290, .a=0x92, .x=0xfd, .y=0x8d, .sp=0x4e, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xf290, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xf291, .a=0x92, .x=0xfc, .y=0x8d, .sp=0x4e, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xf290, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xf290, .value=0x1d, .type=IO_READ},
        {.addr=0xf291, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0038) {
    const struct CPU_State initial_cpu = {.pc=0x3909, .a=0xac, .x=0xe0, .y=0x47, .sp=0xe8, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x3909, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x390a, .a=0xac, .x=0xdf, .y=0x47, .sp=0xe8, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x3909, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x3909, .value=0x1d, .type=IO_READ},
        {.addr=0x390a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0039) {
    const struct CPU_State initial_cpu = {.pc=0xbfe1, .a=0x6c, .x=0x6a, .y=0x0f, .sp=0x16, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xbfe1, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xbfe2, .a=0x6c, .x=0x69, .y=0x0f, .sp=0x16, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xbfe1, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xbfe1, .value=0x1d, .type=IO_READ},
        {.addr=0xbfe2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_003A) {
    const struct CPU_State initial_cpu = {.pc=0xd1f6, .a=0x8d, .x=0xd5, .y=0x72, .sp=0xc3, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xd1f6, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xd1f7, .a=0x8d, .x=0xd4, .y=0x72, .sp=0xc3, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xd1f6, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xd1f6, .value=0x1d, .type=IO_READ},
        {.addr=0xd1f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_003B) {
    const struct CPU_State initial_cpu = {.pc=0xca32, .a=0x30, .x=0x87, .y=0x13, .sp=0x16, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xca32, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xca33, .a=0x30, .x=0x86, .y=0x13, .sp=0x16, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xca32, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xca32, .value=0x1d, .type=IO_READ},
        {.addr=0xca33, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_003C) {
    const struct CPU_State initial_cpu = {.pc=0x4b49, .a=0x03, .x=0x21, .y=0xb0, .sp=0xf7, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x4b49, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x4b4a, .a=0x03, .x=0x20, .y=0xb0, .sp=0xf7, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x4b49, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x4b49, .value=0x1d, .type=IO_READ},
        {.addr=0x4b4a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_003D) {
    const struct CPU_State initial_cpu = {.pc=0x6430, .a=0x3e, .x=0xe5, .y=0x58, .sp=0x4f, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x6430, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x6431, .a=0x3e, .x=0xe4, .y=0x58, .sp=0x4f, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x6430, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x6430, .value=0x1d, .type=IO_READ},
        {.addr=0x6431, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_003E) {
    const struct CPU_State initial_cpu = {.pc=0x1368, .a=0xdb, .x=0x40, .y=0x47, .sp=0x27, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x1368, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x1369, .a=0xdb, .x=0x3f, .y=0x47, .sp=0x27, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x1368, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x1368, .value=0x1d, .type=IO_READ},
        {.addr=0x1369, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_003F) {
    const struct CPU_State initial_cpu = {.pc=0x4693, .a=0x68, .x=0xb6, .y=0xdd, .sp=0xba, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x4693, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x4694, .a=0x68, .x=0xb5, .y=0xdd, .sp=0xba, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x4693, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x4693, .value=0x1d, .type=IO_READ},
        {.addr=0x4694, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0040) {
    const struct CPU_State initial_cpu = {.pc=0x1afc, .a=0x37, .x=0xe8, .y=0x2c, .sp=0x27, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x1afc, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x1afd, .a=0x37, .x=0xe7, .y=0x2c, .sp=0x27, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x1afc, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x1afc, .value=0x1d, .type=IO_READ},
        {.addr=0x1afd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0041) {
    const struct CPU_State initial_cpu = {.pc=0x9761, .a=0x20, .x=0xd4, .y=0x55, .sp=0xdb, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x9761, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x9762, .a=0x20, .x=0xd3, .y=0x55, .sp=0xdb, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x9761, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x9761, .value=0x1d, .type=IO_READ},
        {.addr=0x9762, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0042) {
    const struct CPU_State initial_cpu = {.pc=0xdf4c, .a=0x6d, .x=0x10, .y=0x24, .sp=0x0f, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xdf4c, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xdf4d, .a=0x6d, .x=0x0f, .y=0x24, .sp=0x0f, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xdf4c, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xdf4c, .value=0x1d, .type=IO_READ},
        {.addr=0xdf4d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0043) {
    const struct CPU_State initial_cpu = {.pc=0xa667, .a=0x4d, .x=0xb3, .y=0x6e, .sp=0x2c, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xa667, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xa668, .a=0x4d, .x=0xb2, .y=0x6e, .sp=0x2c, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xa667, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xa667, .value=0x1d, .type=IO_READ},
        {.addr=0xa668, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0044) {
    const struct CPU_State initial_cpu = {.pc=0x5ecd, .a=0x66, .x=0x7a, .y=0xe8, .sp=0x5a, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x5ecd, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x5ece, .a=0x66, .x=0x79, .y=0xe8, .sp=0x5a, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x5ecd, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x5ecd, .value=0x1d, .type=IO_READ},
        {.addr=0x5ece, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0045) {
    const struct CPU_State initial_cpu = {.pc=0x910c, .a=0x9e, .x=0xb5, .y=0xbd, .sp=0xd3, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x910c, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x910d, .a=0x9e, .x=0xb4, .y=0xbd, .sp=0xd3, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x910c, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x910c, .value=0x1d, .type=IO_READ},
        {.addr=0x910d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0046) {
    const struct CPU_State initial_cpu = {.pc=0x77c1, .a=0x2b, .x=0x77, .y=0x68, .sp=0xbd, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x77c1, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x77c2, .a=0x2b, .x=0x76, .y=0x68, .sp=0xbd, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x77c1, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x77c1, .value=0x1d, .type=IO_READ},
        {.addr=0x77c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0047) {
    const struct CPU_State initial_cpu = {.pc=0x7bca, .a=0x7a, .x=0x76, .y=0x3b, .sp=0x52, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x7bca, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x7bcb, .a=0x7a, .x=0x75, .y=0x3b, .sp=0x52, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x7bca, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x7bca, .value=0x1d, .type=IO_READ},
        {.addr=0x7bcb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0048) {
    const struct CPU_State initial_cpu = {.pc=0x39dc, .a=0xba, .x=0xcd, .y=0x26, .sp=0x59, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x39dc, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x39dd, .a=0xba, .x=0xcc, .y=0x26, .sp=0x59, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x39dc, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x39dc, .value=0x1d, .type=IO_READ},
        {.addr=0x39dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0049) {
    const struct CPU_State initial_cpu = {.pc=0xe52c, .a=0x77, .x=0xea, .y=0x46, .sp=0x92, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xe52c, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xe52d, .a=0x77, .x=0xe9, .y=0x46, .sp=0x92, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xe52c, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xe52c, .value=0x1d, .type=IO_READ},
        {.addr=0xe52d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_004A) {
    const struct CPU_State initial_cpu = {.pc=0x854f, .a=0xd5, .x=0x92, .y=0xc3, .sp=0x9a, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x854f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x8550, .a=0xd5, .x=0x91, .y=0xc3, .sp=0x9a, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x854f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x854f, .value=0x1d, .type=IO_READ},
        {.addr=0x8550, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_004B) {
    const struct CPU_State initial_cpu = {.pc=0x975d, .a=0xd8, .x=0x51, .y=0x48, .sp=0x77, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x975d, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x975e, .a=0xd8, .x=0x50, .y=0x48, .sp=0x77, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x975d, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x975d, .value=0x1d, .type=IO_READ},
        {.addr=0x975e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_004C) {
    const struct CPU_State initial_cpu = {.pc=0x1200, .a=0xa6, .x=0x14, .y=0x5c, .sp=0x70, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x1200, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x1201, .a=0xa6, .x=0x13, .y=0x5c, .sp=0x70, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x1200, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x1200, .value=0x1d, .type=IO_READ},
        {.addr=0x1201, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_004D) {
    const struct CPU_State initial_cpu = {.pc=0xcec5, .a=0x62, .x=0x0f, .y=0x0e, .sp=0xc4, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xcec5, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xcec6, .a=0x62, .x=0x0e, .y=0x0e, .sp=0xc4, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xcec5, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xcec5, .value=0x1d, .type=IO_READ},
        {.addr=0xcec6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_004E) {
    const struct CPU_State initial_cpu = {.pc=0x9e50, .a=0x87, .x=0xf2, .y=0xfd, .sp=0x58, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x9e50, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x9e51, .a=0x87, .x=0xf1, .y=0xfd, .sp=0x58, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x9e50, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x9e50, .value=0x1d, .type=IO_READ},
        {.addr=0x9e51, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_004F) {
    const struct CPU_State initial_cpu = {.pc=0x08c9, .a=0x03, .x=0xed, .y=0x08, .sp=0xe9, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x08c9, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x08ca, .a=0x03, .x=0xec, .y=0x08, .sp=0xe9, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x08c9, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x08c9, .value=0x1d, .type=IO_READ},
        {.addr=0x08ca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0050) {
    const struct CPU_State initial_cpu = {.pc=0x341f, .a=0xa6, .x=0x81, .y=0x8c, .sp=0x85, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x341f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x3420, .a=0xa6, .x=0x80, .y=0x8c, .sp=0x85, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x341f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x341f, .value=0x1d, .type=IO_READ},
        {.addr=0x3420, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0051) {
    const struct CPU_State initial_cpu = {.pc=0x1421, .a=0xc4, .x=0x46, .y=0x55, .sp=0x21, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x1421, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x1422, .a=0xc4, .x=0x45, .y=0x55, .sp=0x21, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x1421, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x1421, .value=0x1d, .type=IO_READ},
        {.addr=0x1422, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0052) {
    const struct CPU_State initial_cpu = {.pc=0xfb53, .a=0x30, .x=0x4c, .y=0xda, .sp=0xa5, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xfb53, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xfb54, .a=0x30, .x=0x4b, .y=0xda, .sp=0xa5, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xfb53, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xfb53, .value=0x1d, .type=IO_READ},
        {.addr=0xfb54, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0053) {
    const struct CPU_State initial_cpu = {.pc=0x4748, .a=0x38, .x=0xc2, .y=0x57, .sp=0xc2, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x4748, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x4749, .a=0x38, .x=0xc1, .y=0x57, .sp=0xc2, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x4748, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x4748, .value=0x1d, .type=IO_READ},
        {.addr=0x4749, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0054) {
    const struct CPU_State initial_cpu = {.pc=0x503a, .a=0xce, .x=0xde, .y=0x0e, .sp=0x9f, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x503a, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x503b, .a=0xce, .x=0xdd, .y=0x0e, .sp=0x9f, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x503a, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x503a, .value=0x1d, .type=IO_READ},
        {.addr=0x503b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0055) {
    const struct CPU_State initial_cpu = {.pc=0x0d6a, .a=0xce, .x=0x9e, .y=0x0f, .sp=0x2c, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x0d6a, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x0d6b, .a=0xce, .x=0x9d, .y=0x0f, .sp=0x2c, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0d6a, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x0d6a, .value=0x1d, .type=IO_READ},
        {.addr=0x0d6b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0056) {
    const struct CPU_State initial_cpu = {.pc=0xf8e1, .a=0x7d, .x=0x0d, .y=0x07, .sp=0xd1, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xf8e1, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xf8e2, .a=0x7d, .x=0x0c, .y=0x07, .sp=0xd1, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xf8e1, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xf8e1, .value=0x1d, .type=IO_READ},
        {.addr=0xf8e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0057) {
    const struct CPU_State initial_cpu = {.pc=0x4ad6, .a=0x8e, .x=0x71, .y=0xad, .sp=0x7d, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x4ad6, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x4ad7, .a=0x8e, .x=0x70, .y=0xad, .sp=0x7d, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x4ad6, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x4ad6, .value=0x1d, .type=IO_READ},
        {.addr=0x4ad7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0058) {
    const struct CPU_State initial_cpu = {.pc=0x069d, .a=0xbc, .x=0xb6, .y=0xd3, .sp=0xf7, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x069d, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x069e, .a=0xbc, .x=0xb5, .y=0xd3, .sp=0xf7, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x069d, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x069d, .value=0x1d, .type=IO_READ},
        {.addr=0x069e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0059) {
    const struct CPU_State initial_cpu = {.pc=0x3cb4, .a=0xdf, .x=0x62, .y=0xd8, .sp=0xa0, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x3cb4, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x3cb5, .a=0xdf, .x=0x61, .y=0xd8, .sp=0xa0, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x3cb4, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x3cb4, .value=0x1d, .type=IO_READ},
        {.addr=0x3cb5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_005A) {
    const struct CPU_State initial_cpu = {.pc=0xeb9d, .a=0x61, .x=0x58, .y=0x63, .sp=0x01, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xeb9d, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xeb9e, .a=0x61, .x=0x57, .y=0x63, .sp=0x01, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xeb9d, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xeb9d, .value=0x1d, .type=IO_READ},
        {.addr=0xeb9e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_005B) {
    const struct CPU_State initial_cpu = {.pc=0xf750, .a=0x05, .x=0xda, .y=0xee, .sp=0x93, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xf750, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xf751, .a=0x05, .x=0xd9, .y=0xee, .sp=0x93, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xf750, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xf750, .value=0x1d, .type=IO_READ},
        {.addr=0xf751, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_005C) {
    const struct CPU_State initial_cpu = {.pc=0xd8b4, .a=0x40, .x=0x49, .y=0xfd, .sp=0xbd, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xd8b4, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xd8b5, .a=0x40, .x=0x48, .y=0xfd, .sp=0xbd, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xd8b4, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xd8b4, .value=0x1d, .type=IO_READ},
        {.addr=0xd8b5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_005D) {
    const struct CPU_State initial_cpu = {.pc=0x8926, .a=0xef, .x=0xe4, .y=0x51, .sp=0xb8, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x8926, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x8927, .a=0xef, .x=0xe3, .y=0x51, .sp=0xb8, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x8926, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x8926, .value=0x1d, .type=IO_READ},
        {.addr=0x8927, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_005E) {
    const struct CPU_State initial_cpu = {.pc=0x066e, .a=0x27, .x=0x51, .y=0xce, .sp=0xe8, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x066e, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x066f, .a=0x27, .x=0x50, .y=0xce, .sp=0xe8, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x066e, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x066e, .value=0x1d, .type=IO_READ},
        {.addr=0x066f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_005F) {
    const struct CPU_State initial_cpu = {.pc=0x1a1e, .a=0xe5, .x=0x7b, .y=0x26, .sp=0x68, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x1a1e, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x1a1f, .a=0xe5, .x=0x7a, .y=0x26, .sp=0x68, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x1a1e, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x1a1e, .value=0x1d, .type=IO_READ},
        {.addr=0x1a1f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0060) {
    const struct CPU_State initial_cpu = {.pc=0x9dd4, .a=0xc8, .x=0xfa, .y=0x5b, .sp=0x2a, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x9dd4, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x9dd5, .a=0xc8, .x=0xf9, .y=0x5b, .sp=0x2a, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x9dd4, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x9dd4, .value=0x1d, .type=IO_READ},
        {.addr=0x9dd5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0061) {
    const struct CPU_State initial_cpu = {.pc=0xe6a6, .a=0x13, .x=0x4f, .y=0x65, .sp=0xbf, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xe6a6, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xe6a7, .a=0x13, .x=0x4e, .y=0x65, .sp=0xbf, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xe6a6, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xe6a6, .value=0x1d, .type=IO_READ},
        {.addr=0xe6a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0062) {
    const struct CPU_State initial_cpu = {.pc=0x8970, .a=0xbe, .x=0x3c, .y=0x55, .sp=0x86, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x8970, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x8971, .a=0xbe, .x=0x3b, .y=0x55, .sp=0x86, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x8970, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x8970, .value=0x1d, .type=IO_READ},
        {.addr=0x8971, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0063) {
    const struct CPU_State initial_cpu = {.pc=0x8863, .a=0x6b, .x=0x70, .y=0x7a, .sp=0xe0, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x8863, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x8864, .a=0x6b, .x=0x6f, .y=0x7a, .sp=0xe0, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x8863, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x8863, .value=0x1d, .type=IO_READ},
        {.addr=0x8864, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0064) {
    const struct CPU_State initial_cpu = {.pc=0x94df, .a=0x7e, .x=0xc0, .y=0x85, .sp=0x99, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x94df, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x94e0, .a=0x7e, .x=0xbf, .y=0x85, .sp=0x99, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x94df, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x94df, .value=0x1d, .type=IO_READ},
        {.addr=0x94e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0065) {
    const struct CPU_State initial_cpu = {.pc=0x89d7, .a=0x72, .x=0x45, .y=0x35, .sp=0xa1, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x89d7, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x89d8, .a=0x72, .x=0x44, .y=0x35, .sp=0xa1, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x89d7, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x89d7, .value=0x1d, .type=IO_READ},
        {.addr=0x89d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0066) {
    const struct CPU_State initial_cpu = {.pc=0x49c8, .a=0x63, .x=0x88, .y=0x99, .sp=0x22, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x49c8, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x49c9, .a=0x63, .x=0x87, .y=0x99, .sp=0x22, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x49c8, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x49c8, .value=0x1d, .type=IO_READ},
        {.addr=0x49c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0067) {
    const struct CPU_State initial_cpu = {.pc=0xf538, .a=0xdf, .x=0x3a, .y=0x31, .sp=0xd6, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xf538, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xf539, .a=0xdf, .x=0x39, .y=0x31, .sp=0xd6, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xf538, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xf538, .value=0x1d, .type=IO_READ},
        {.addr=0xf539, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0068) {
    const struct CPU_State initial_cpu = {.pc=0x0c6c, .a=0x6c, .x=0x4d, .y=0x93, .sp=0xd5, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x0c6c, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x0c6d, .a=0x6c, .x=0x4c, .y=0x93, .sp=0xd5, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x0c6c, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x0c6c, .value=0x1d, .type=IO_READ},
        {.addr=0x0c6d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0069) {
    const struct CPU_State initial_cpu = {.pc=0x95c1, .a=0x37, .x=0x33, .y=0xc7, .sp=0x3d, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x95c1, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x95c2, .a=0x37, .x=0x32, .y=0xc7, .sp=0x3d, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x95c1, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x95c1, .value=0x1d, .type=IO_READ},
        {.addr=0x95c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_006A) {
    const struct CPU_State initial_cpu = {.pc=0xfdc4, .a=0xf8, .x=0xf3, .y=0x61, .sp=0x73, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xfdc4, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xfdc5, .a=0xf8, .x=0xf2, .y=0x61, .sp=0x73, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xfdc4, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xfdc4, .value=0x1d, .type=IO_READ},
        {.addr=0xfdc5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_006B) {
    const struct CPU_State initial_cpu = {.pc=0x9a8e, .a=0xfb, .x=0xb1, .y=0x4f, .sp=0xad, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x9a8e, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x9a8f, .a=0xfb, .x=0xb0, .y=0x4f, .sp=0xad, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x9a8e, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x9a8e, .value=0x1d, .type=IO_READ},
        {.addr=0x9a8f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_006C) {
    const struct CPU_State initial_cpu = {.pc=0x7d4f, .a=0x1b, .x=0x2e, .y=0x41, .sp=0x2c, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x7d4f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x7d50, .a=0x1b, .x=0x2d, .y=0x41, .sp=0x2c, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x7d4f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x7d4f, .value=0x1d, .type=IO_READ},
        {.addr=0x7d50, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_006D) {
    const struct CPU_State initial_cpu = {.pc=0x0e64, .a=0x04, .x=0xac, .y=0x15, .sp=0xe1, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x0e64, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x0e65, .a=0x04, .x=0xab, .y=0x15, .sp=0xe1, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0e64, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x0e64, .value=0x1d, .type=IO_READ},
        {.addr=0x0e65, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_006E) {
    const struct CPU_State initial_cpu = {.pc=0xc591, .a=0x3d, .x=0xd0, .y=0xd2, .sp=0x53, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xc591, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc592, .a=0x3d, .x=0xcf, .y=0xd2, .sp=0x53, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xc591, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc591, .value=0x1d, .type=IO_READ},
        {.addr=0xc592, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_006F) {
    const struct CPU_State initial_cpu = {.pc=0x46b3, .a=0x67, .x=0x19, .y=0xc9, .sp=0x79, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x46b3, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x46b4, .a=0x67, .x=0x18, .y=0xc9, .sp=0x79, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x46b3, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x46b3, .value=0x1d, .type=IO_READ},
        {.addr=0x46b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0070) {
    const struct CPU_State initial_cpu = {.pc=0x3c9f, .a=0x20, .x=0x4e, .y=0x61, .sp=0x31, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x3c9f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x3ca0, .a=0x20, .x=0x4d, .y=0x61, .sp=0x31, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x3c9f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x3c9f, .value=0x1d, .type=IO_READ},
        {.addr=0x3ca0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0071) {
    const struct CPU_State initial_cpu = {.pc=0xdf4d, .a=0xf7, .x=0x5d, .y=0xe7, .sp=0x0d, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xdf4d, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xdf4e, .a=0xf7, .x=0x5c, .y=0xe7, .sp=0x0d, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xdf4d, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xdf4d, .value=0x1d, .type=IO_READ},
        {.addr=0xdf4e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0072) {
    const struct CPU_State initial_cpu = {.pc=0x077d, .a=0x66, .x=0x43, .y=0x91, .sp=0x48, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x077d, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x077e, .a=0x66, .x=0x42, .y=0x91, .sp=0x48, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x077d, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x077d, .value=0x1d, .type=IO_READ},
        {.addr=0x077e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0073) {
    const struct CPU_State initial_cpu = {.pc=0xbae9, .a=0x94, .x=0xe3, .y=0x4f, .sp=0x43, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xbae9, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xbaea, .a=0x94, .x=0xe2, .y=0x4f, .sp=0x43, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xbae9, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xbae9, .value=0x1d, .type=IO_READ},
        {.addr=0xbaea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0074) {
    const struct CPU_State initial_cpu = {.pc=0xf6f8, .a=0x02, .x=0xe0, .y=0x62, .sp=0xe3, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xf6f8, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xf6f9, .a=0x02, .x=0xdf, .y=0x62, .sp=0xe3, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xf6f8, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xf6f8, .value=0x1d, .type=IO_READ},
        {.addr=0xf6f9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0075) {
    const struct CPU_State initial_cpu = {.pc=0x43ec, .a=0xfc, .x=0x99, .y=0xf6, .sp=0xa6, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x43ec, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x43ed, .a=0xfc, .x=0x98, .y=0xf6, .sp=0xa6, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x43ec, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x43ec, .value=0x1d, .type=IO_READ},
        {.addr=0x43ed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0076) {
    const struct CPU_State initial_cpu = {.pc=0x9afb, .a=0x9e, .x=0x1b, .y=0x49, .sp=0xba, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x9afb, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x9afc, .a=0x9e, .x=0x1a, .y=0x49, .sp=0xba, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x9afb, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x9afb, .value=0x1d, .type=IO_READ},
        {.addr=0x9afc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0077) {
    const struct CPU_State initial_cpu = {.pc=0x6784, .a=0x3a, .x=0x8c, .y=0xb7, .sp=0xf1, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x6784, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x6785, .a=0x3a, .x=0x8b, .y=0xb7, .sp=0xf1, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x6784, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x6784, .value=0x1d, .type=IO_READ},
        {.addr=0x6785, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0078) {
    const struct CPU_State initial_cpu = {.pc=0xc97c, .a=0x9c, .x=0x5c, .y=0x79, .sp=0x0f, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xc97c, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc97d, .a=0x9c, .x=0x5b, .y=0x79, .sp=0x0f, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xc97c, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc97c, .value=0x1d, .type=IO_READ},
        {.addr=0xc97d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0079) {
    const struct CPU_State initial_cpu = {.pc=0xfc26, .a=0x7d, .x=0x55, .y=0xca, .sp=0x80, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xfc26, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xfc27, .a=0x7d, .x=0x54, .y=0xca, .sp=0x80, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xfc26, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xfc26, .value=0x1d, .type=IO_READ},
        {.addr=0xfc27, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_007A) {
    const struct CPU_State initial_cpu = {.pc=0x9fcc, .a=0x5b, .x=0x6d, .y=0xe1, .sp=0x51, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x9fcc, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x9fcd, .a=0x5b, .x=0x6c, .y=0xe1, .sp=0x51, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x9fcc, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x9fcc, .value=0x1d, .type=IO_READ},
        {.addr=0x9fcd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_007B) {
    const struct CPU_State initial_cpu = {.pc=0x2dac, .a=0x3d, .x=0x2f, .y=0x7a, .sp=0x4b, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x2dac, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x2dad, .a=0x3d, .x=0x2e, .y=0x7a, .sp=0x4b, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x2dac, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x2dac, .value=0x1d, .type=IO_READ},
        {.addr=0x2dad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_007C) {
    const struct CPU_State initial_cpu = {.pc=0x3ae6, .a=0x6a, .x=0x5f, .y=0x53, .sp=0x34, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x3ae6, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x3ae7, .a=0x6a, .x=0x5e, .y=0x53, .sp=0x34, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x3ae6, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x3ae6, .value=0x1d, .type=IO_READ},
        {.addr=0x3ae7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_007D) {
    const struct CPU_State initial_cpu = {.pc=0x9420, .a=0xf8, .x=0xec, .y=0x39, .sp=0x23, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x9420, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x9421, .a=0xf8, .x=0xeb, .y=0x39, .sp=0x23, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x9420, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x9420, .value=0x1d, .type=IO_READ},
        {.addr=0x9421, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_007E) {
    const struct CPU_State initial_cpu = {.pc=0x3346, .a=0x66, .x=0x2d, .y=0x9d, .sp=0x91, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x3346, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x3347, .a=0x66, .x=0x2c, .y=0x9d, .sp=0x91, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x3346, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x3346, .value=0x1d, .type=IO_READ},
        {.addr=0x3347, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_007F) {
    const struct CPU_State initial_cpu = {.pc=0x0da0, .a=0xf6, .x=0xea, .y=0xea, .sp=0x96, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x0da0, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x0da1, .a=0xf6, .x=0xe9, .y=0xea, .sp=0x96, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x0da0, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x0da0, .value=0x1d, .type=IO_READ},
        {.addr=0x0da1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0080) {
    const struct CPU_State initial_cpu = {.pc=0x1716, .a=0xdb, .x=0x43, .y=0xd0, .sp=0xdc, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x1716, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x1717, .a=0xdb, .x=0x42, .y=0xd0, .sp=0xdc, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x1716, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x1716, .value=0x1d, .type=IO_READ},
        {.addr=0x1717, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0081) {
    const struct CPU_State initial_cpu = {.pc=0x396c, .a=0x09, .x=0x48, .y=0x91, .sp=0x7d, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x396c, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x396d, .a=0x09, .x=0x47, .y=0x91, .sp=0x7d, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x396c, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x396c, .value=0x1d, .type=IO_READ},
        {.addr=0x396d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0082) {
    const struct CPU_State initial_cpu = {.pc=0x9b1e, .a=0x90, .x=0xf0, .y=0xe8, .sp=0x21, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x9b1e, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x9b1f, .a=0x90, .x=0xef, .y=0xe8, .sp=0x21, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x9b1e, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x9b1e, .value=0x1d, .type=IO_READ},
        {.addr=0x9b1f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0083) {
    const struct CPU_State initial_cpu = {.pc=0x6746, .a=0x4d, .x=0xb0, .y=0xee, .sp=0xa7, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x6746, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x6747, .a=0x4d, .x=0xaf, .y=0xee, .sp=0xa7, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x6746, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x6746, .value=0x1d, .type=IO_READ},
        {.addr=0x6747, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0084) {
    const struct CPU_State initial_cpu = {.pc=0xafff, .a=0x5a, .x=0x97, .y=0x34, .sp=0xde, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xafff, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xb000, .a=0x5a, .x=0x96, .y=0x34, .sp=0xde, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xafff, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xafff, .value=0x1d, .type=IO_READ},
        {.addr=0xb000, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0085) {
    const struct CPU_State initial_cpu = {.pc=0x7912, .a=0x49, .x=0x57, .y=0x42, .sp=0xd1, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x7912, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x7913, .a=0x49, .x=0x56, .y=0x42, .sp=0xd1, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x7912, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x7912, .value=0x1d, .type=IO_READ},
        {.addr=0x7913, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0086) {
    const struct CPU_State initial_cpu = {.pc=0x27f7, .a=0xa3, .x=0xf0, .y=0xed, .sp=0xa0, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x27f7, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x27f8, .a=0xa3, .x=0xef, .y=0xed, .sp=0xa0, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x27f7, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x27f7, .value=0x1d, .type=IO_READ},
        {.addr=0x27f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0087) {
    const struct CPU_State initial_cpu = {.pc=0x4a93, .a=0x2a, .x=0x9c, .y=0xe2, .sp=0x8a, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x4a93, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x4a94, .a=0x2a, .x=0x9b, .y=0xe2, .sp=0x8a, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x4a93, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x4a93, .value=0x1d, .type=IO_READ},
        {.addr=0x4a94, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0088) {
    const struct CPU_State initial_cpu = {.pc=0x2e03, .a=0x5e, .x=0x15, .y=0x00, .sp=0x3d, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x2e03, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x2e04, .a=0x5e, .x=0x14, .y=0x00, .sp=0x3d, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x2e03, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x2e03, .value=0x1d, .type=IO_READ},
        {.addr=0x2e04, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0089) {
    const struct CPU_State initial_cpu = {.pc=0x4bec, .a=0xd0, .x=0xa0, .y=0x09, .sp=0x1c, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x4bec, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x4bed, .a=0xd0, .x=0x9f, .y=0x09, .sp=0x1c, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x4bec, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x4bec, .value=0x1d, .type=IO_READ},
        {.addr=0x4bed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_008A) {
    const struct CPU_State initial_cpu = {.pc=0x434d, .a=0x25, .x=0x05, .y=0x20, .sp=0x7f, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x434d, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x434e, .a=0x25, .x=0x04, .y=0x20, .sp=0x7f, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x434d, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x434d, .value=0x1d, .type=IO_READ},
        {.addr=0x434e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_008B) {
    const struct CPU_State initial_cpu = {.pc=0x611d, .a=0xd9, .x=0x6f, .y=0x26, .sp=0xd8, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x611d, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x611e, .a=0xd9, .x=0x6e, .y=0x26, .sp=0xd8, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x611d, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x611d, .value=0x1d, .type=IO_READ},
        {.addr=0x611e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_008C) {
    const struct CPU_State initial_cpu = {.pc=0x3d61, .a=0x2a, .x=0x18, .y=0x33, .sp=0xa2, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x3d61, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x3d62, .a=0x2a, .x=0x17, .y=0x33, .sp=0xa2, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x3d61, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x3d61, .value=0x1d, .type=IO_READ},
        {.addr=0x3d62, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_008D) {
    const struct CPU_State initial_cpu = {.pc=0x9bb5, .a=0x49, .x=0xa9, .y=0x88, .sp=0xab, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x9bb5, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x9bb6, .a=0x49, .x=0xa8, .y=0x88, .sp=0xab, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x9bb5, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x9bb5, .value=0x1d, .type=IO_READ},
        {.addr=0x9bb6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_008E) {
    const struct CPU_State initial_cpu = {.pc=0xd7b3, .a=0x7e, .x=0xc9, .y=0xb6, .sp=0x48, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xd7b3, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xd7b4, .a=0x7e, .x=0xc8, .y=0xb6, .sp=0x48, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xd7b3, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xd7b3, .value=0x1d, .type=IO_READ},
        {.addr=0xd7b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_008F) {
    const struct CPU_State initial_cpu = {.pc=0xbf8a, .a=0x58, .x=0x60, .y=0xc4, .sp=0x84, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xbf8a, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xbf8b, .a=0x58, .x=0x5f, .y=0xc4, .sp=0x84, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xbf8a, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xbf8a, .value=0x1d, .type=IO_READ},
        {.addr=0xbf8b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0090) {
    const struct CPU_State initial_cpu = {.pc=0x83d7, .a=0xb9, .x=0x9c, .y=0xe8, .sp=0xb0, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x83d7, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x83d8, .a=0xb9, .x=0x9b, .y=0xe8, .sp=0xb0, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x83d7, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x83d7, .value=0x1d, .type=IO_READ},
        {.addr=0x83d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0091) {
    const struct CPU_State initial_cpu = {.pc=0xdf15, .a=0x9a, .x=0x71, .y=0x88, .sp=0xae, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xdf15, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xdf16, .a=0x9a, .x=0x70, .y=0x88, .sp=0xae, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xdf15, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xdf15, .value=0x1d, .type=IO_READ},
        {.addr=0xdf16, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0092) {
    const struct CPU_State initial_cpu = {.pc=0xc71e, .a=0x1d, .x=0xc6, .y=0x76, .sp=0x5d, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xc71e, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc71f, .a=0x1d, .x=0xc5, .y=0x76, .sp=0x5d, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xc71e, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc71e, .value=0x1d, .type=IO_READ},
        {.addr=0xc71f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0093) {
    const struct CPU_State initial_cpu = {.pc=0x209a, .a=0x83, .x=0x88, .y=0x02, .sp=0x42, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x209a, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x209b, .a=0x83, .x=0x87, .y=0x02, .sp=0x42, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x209a, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x209a, .value=0x1d, .type=IO_READ},
        {.addr=0x209b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0094) {
    const struct CPU_State initial_cpu = {.pc=0x651b, .a=0x82, .x=0x26, .y=0xc3, .sp=0xf3, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x651b, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x651c, .a=0x82, .x=0x25, .y=0xc3, .sp=0xf3, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x651b, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x651b, .value=0x1d, .type=IO_READ},
        {.addr=0x651c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0095) {
    const struct CPU_State initial_cpu = {.pc=0x7b6f, .a=0x93, .x=0x94, .y=0xb7, .sp=0xdb, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x7b6f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x7b70, .a=0x93, .x=0x93, .y=0xb7, .sp=0xdb, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x7b6f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x7b6f, .value=0x1d, .type=IO_READ},
        {.addr=0x7b70, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0096) {
    const struct CPU_State initial_cpu = {.pc=0x9b1f, .a=0x70, .x=0xba, .y=0x13, .sp=0x37, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x9b1f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x9b20, .a=0x70, .x=0xb9, .y=0x13, .sp=0x37, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x9b1f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x9b1f, .value=0x1d, .type=IO_READ},
        {.addr=0x9b20, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0097) {
    const struct CPU_State initial_cpu = {.pc=0x641e, .a=0x44, .x=0x00, .y=0x6a, .sp=0xb9, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x641e, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x641f, .a=0x44, .x=0xff, .y=0x6a, .sp=0xb9, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x641e, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x641e, .value=0x1d, .type=IO_READ},
        {.addr=0x641f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0098) {
    const struct CPU_State initial_cpu = {.pc=0xb413, .a=0x73, .x=0x2b, .y=0xe1, .sp=0xb2, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xb413, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xb414, .a=0x73, .x=0x2a, .y=0xe1, .sp=0xb2, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xb413, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xb413, .value=0x1d, .type=IO_READ},
        {.addr=0xb414, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0099) {
    const struct CPU_State initial_cpu = {.pc=0x6f42, .a=0xb8, .x=0x32, .y=0x39, .sp=0x28, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x6f42, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x6f43, .a=0xb8, .x=0x31, .y=0x39, .sp=0x28, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x6f42, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x6f42, .value=0x1d, .type=IO_READ},
        {.addr=0x6f43, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_009A) {
    const struct CPU_State initial_cpu = {.pc=0xe094, .a=0x5d, .x=0x75, .y=0x82, .sp=0x0a, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xe094, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xe095, .a=0x5d, .x=0x74, .y=0x82, .sp=0x0a, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xe094, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xe094, .value=0x1d, .type=IO_READ},
        {.addr=0xe095, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_009B) {
    const struct CPU_State initial_cpu = {.pc=0xbe24, .a=0x29, .x=0xbf, .y=0xb8, .sp=0xe0, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xbe24, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xbe25, .a=0x29, .x=0xbe, .y=0xb8, .sp=0xe0, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xbe24, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xbe24, .value=0x1d, .type=IO_READ},
        {.addr=0xbe25, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_009C) {
    const struct CPU_State initial_cpu = {.pc=0x67dd, .a=0xa2, .x=0x4b, .y=0x47, .sp=0x05, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x67dd, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x67de, .a=0xa2, .x=0x4a, .y=0x47, .sp=0x05, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x67dd, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x67dd, .value=0x1d, .type=IO_READ},
        {.addr=0x67de, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_009D) {
    const struct CPU_State initial_cpu = {.pc=0x769f, .a=0x1d, .x=0xa5, .y=0x1d, .sp=0x6f, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x769f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x76a0, .a=0x1d, .x=0xa4, .y=0x1d, .sp=0x6f, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x769f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x769f, .value=0x1d, .type=IO_READ},
        {.addr=0x76a0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_009E) {
    const struct CPU_State initial_cpu = {.pc=0xf904, .a=0xf7, .x=0x60, .y=0x7c, .sp=0xae, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xf904, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xf905, .a=0xf7, .x=0x5f, .y=0x7c, .sp=0xae, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xf904, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xf904, .value=0x1d, .type=IO_READ},
        {.addr=0xf905, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_009F) {
    const struct CPU_State initial_cpu = {.pc=0x3ef8, .a=0x63, .x=0xe8, .y=0x9e, .sp=0xab, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x3ef8, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x3ef9, .a=0x63, .x=0xe7, .y=0x9e, .sp=0xab, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x3ef8, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x3ef8, .value=0x1d, .type=IO_READ},
        {.addr=0x3ef9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00A0) {
    const struct CPU_State initial_cpu = {.pc=0xa17b, .a=0x5f, .x=0x7e, .y=0xb7, .sp=0x52, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xa17b, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xa17c, .a=0x5f, .x=0x7d, .y=0xb7, .sp=0x52, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xa17b, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xa17b, .value=0x1d, .type=IO_READ},
        {.addr=0xa17c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00A1) {
    const struct CPU_State initial_cpu = {.pc=0xd026, .a=0xa0, .x=0xf6, .y=0x7f, .sp=0x9a, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xd026, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xd027, .a=0xa0, .x=0xf5, .y=0x7f, .sp=0x9a, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xd026, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xd026, .value=0x1d, .type=IO_READ},
        {.addr=0xd027, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00A2) {
    const struct CPU_State initial_cpu = {.pc=0xa9b2, .a=0x7f, .x=0x41, .y=0xe1, .sp=0x8c, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xa9b2, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xa9b3, .a=0x7f, .x=0x40, .y=0xe1, .sp=0x8c, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xa9b2, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xa9b2, .value=0x1d, .type=IO_READ},
        {.addr=0xa9b3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00A3) {
    const struct CPU_State initial_cpu = {.pc=0x548e, .a=0xa8, .x=0xbf, .y=0x31, .sp=0x24, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x548e, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x548f, .a=0xa8, .x=0xbe, .y=0x31, .sp=0x24, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x548e, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x548e, .value=0x1d, .type=IO_READ},
        {.addr=0x548f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00A4) {
    const struct CPU_State initial_cpu = {.pc=0x0a36, .a=0x28, .x=0xd8, .y=0xb7, .sp=0x5f, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x0a36, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x0a37, .a=0x28, .x=0xd7, .y=0xb7, .sp=0x5f, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x0a36, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x0a36, .value=0x1d, .type=IO_READ},
        {.addr=0x0a37, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00A5) {
    const struct CPU_State initial_cpu = {.pc=0xfd0d, .a=0x6c, .x=0xba, .y=0xa2, .sp=0x3d, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xfd0d, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xfd0e, .a=0x6c, .x=0xb9, .y=0xa2, .sp=0x3d, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xfd0d, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xfd0d, .value=0x1d, .type=IO_READ},
        {.addr=0xfd0e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00A6) {
    const struct CPU_State initial_cpu = {.pc=0xbe1e, .a=0xe4, .x=0xd2, .y=0x3c, .sp=0x58, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xbe1e, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xbe1f, .a=0xe4, .x=0xd1, .y=0x3c, .sp=0x58, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xbe1e, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xbe1e, .value=0x1d, .type=IO_READ},
        {.addr=0xbe1f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x6a64, .a=0x17, .x=0x4d, .y=0xb3, .sp=0x0e, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x6a64, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x6a65, .a=0x17, .x=0x4c, .y=0xb3, .sp=0x0e, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x6a64, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x6a64, .value=0x1d, .type=IO_READ},
        {.addr=0x6a65, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x5e29, .a=0x67, .x=0x24, .y=0xbc, .sp=0x4c, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x5e29, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x5e2a, .a=0x67, .x=0x23, .y=0xbc, .sp=0x4c, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x5e29, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x5e29, .value=0x1d, .type=IO_READ},
        {.addr=0x5e2a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00A9) {
    const struct CPU_State initial_cpu = {.pc=0xa20e, .a=0x6c, .x=0x47, .y=0x6d, .sp=0xd9, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xa20e, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xa20f, .a=0x6c, .x=0x46, .y=0x6d, .sp=0xd9, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xa20e, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xa20e, .value=0x1d, .type=IO_READ},
        {.addr=0xa20f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00AA) {
    const struct CPU_State initial_cpu = {.pc=0xe0a3, .a=0x39, .x=0xa9, .y=0x3d, .sp=0xb9, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xe0a3, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xe0a4, .a=0x39, .x=0xa8, .y=0x3d, .sp=0xb9, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xe0a3, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xe0a3, .value=0x1d, .type=IO_READ},
        {.addr=0xe0a4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x5adb, .a=0xda, .x=0x78, .y=0xea, .sp=0x25, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x5adb, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x5adc, .a=0xda, .x=0x77, .y=0xea, .sp=0x25, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x5adb, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x5adb, .value=0x1d, .type=IO_READ},
        {.addr=0x5adc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00AC) {
    const struct CPU_State initial_cpu = {.pc=0xce9a, .a=0x6a, .x=0xf7, .y=0x0e, .sp=0x1b, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xce9a, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xce9b, .a=0x6a, .x=0xf6, .y=0x0e, .sp=0x1b, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xce9a, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xce9a, .value=0x1d, .type=IO_READ},
        {.addr=0xce9b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x111e, .a=0x0a, .x=0xbd, .y=0x5b, .sp=0xe3, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x111e, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x111f, .a=0x0a, .x=0xbc, .y=0x5b, .sp=0xe3, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x111e, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x111e, .value=0x1d, .type=IO_READ},
        {.addr=0x111f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00AE) {
    const struct CPU_State initial_cpu = {.pc=0x66fc, .a=0xbf, .x=0xdc, .y=0x3b, .sp=0x4d, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x66fc, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x66fd, .a=0xbf, .x=0xdb, .y=0x3b, .sp=0x4d, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x66fc, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x66fc, .value=0x1d, .type=IO_READ},
        {.addr=0x66fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00AF) {
    const struct CPU_State initial_cpu = {.pc=0x53c1, .a=0x42, .x=0x20, .y=0x47, .sp=0x48, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x53c1, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x53c2, .a=0x42, .x=0x1f, .y=0x47, .sp=0x48, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x53c1, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x53c1, .value=0x1d, .type=IO_READ},
        {.addr=0x53c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00B0) {
    const struct CPU_State initial_cpu = {.pc=0xd572, .a=0x3e, .x=0x07, .y=0x1f, .sp=0xa9, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xd572, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xd573, .a=0x3e, .x=0x06, .y=0x1f, .sp=0xa9, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xd572, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xd572, .value=0x1d, .type=IO_READ},
        {.addr=0xd573, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00B1) {
    const struct CPU_State initial_cpu = {.pc=0xb56f, .a=0xd7, .x=0xcd, .y=0xcc, .sp=0xf0, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xb56f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xb570, .a=0xd7, .x=0xcc, .y=0xcc, .sp=0xf0, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xb56f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xb56f, .value=0x1d, .type=IO_READ},
        {.addr=0xb570, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00B2) {
    const struct CPU_State initial_cpu = {.pc=0x78d0, .a=0x58, .x=0xfe, .y=0x1a, .sp=0x47, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x78d0, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x78d1, .a=0x58, .x=0xfd, .y=0x1a, .sp=0x47, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x78d0, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x78d0, .value=0x1d, .type=IO_READ},
        {.addr=0x78d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00B3) {
    const struct CPU_State initial_cpu = {.pc=0x7ece, .a=0xde, .x=0x24, .y=0x09, .sp=0xdb, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x7ece, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x7ecf, .a=0xde, .x=0x23, .y=0x09, .sp=0xdb, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x7ece, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x7ece, .value=0x1d, .type=IO_READ},
        {.addr=0x7ecf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00B4) {
    const struct CPU_State initial_cpu = {.pc=0xf5ba, .a=0x04, .x=0x56, .y=0x3e, .sp=0x3c, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xf5ba, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xf5bb, .a=0x04, .x=0x55, .y=0x3e, .sp=0x3c, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xf5ba, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xf5ba, .value=0x1d, .type=IO_READ},
        {.addr=0xf5bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00B5) {
    const struct CPU_State initial_cpu = {.pc=0x285d, .a=0xaa, .x=0x65, .y=0x12, .sp=0x37, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x285d, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x285e, .a=0xaa, .x=0x64, .y=0x12, .sp=0x37, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x285d, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x285d, .value=0x1d, .type=IO_READ},
        {.addr=0x285e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00B6) {
    const struct CPU_State initial_cpu = {.pc=0x163a, .a=0x14, .x=0x7b, .y=0x7e, .sp=0x26, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x163a, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x163b, .a=0x14, .x=0x7a, .y=0x7e, .sp=0x26, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x163a, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x163a, .value=0x1d, .type=IO_READ},
        {.addr=0x163b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x5842, .a=0xd2, .x=0x4d, .y=0xa4, .sp=0x99, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x5842, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x5843, .a=0xd2, .x=0x4c, .y=0xa4, .sp=0x99, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x5842, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x5842, .value=0x1d, .type=IO_READ},
        {.addr=0x5843, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00B8) {
    const struct CPU_State initial_cpu = {.pc=0x3a78, .a=0x3a, .x=0xc2, .y=0xde, .sp=0xcf, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x3a78, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x3a79, .a=0x3a, .x=0xc1, .y=0xde, .sp=0xcf, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x3a78, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x3a78, .value=0x1d, .type=IO_READ},
        {.addr=0x3a79, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00B9) {
    const struct CPU_State initial_cpu = {.pc=0x5b1e, .a=0x72, .x=0x0c, .y=0x69, .sp=0x2c, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x5b1e, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x5b1f, .a=0x72, .x=0x0b, .y=0x69, .sp=0x2c, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x5b1e, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x5b1e, .value=0x1d, .type=IO_READ},
        {.addr=0x5b1f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00BA) {
    const struct CPU_State initial_cpu = {.pc=0xdbd6, .a=0xa8, .x=0x02, .y=0x54, .sp=0x32, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xdbd6, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xdbd7, .a=0xa8, .x=0x01, .y=0x54, .sp=0x32, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xdbd6, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xdbd6, .value=0x1d, .type=IO_READ},
        {.addr=0xdbd7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00BB) {
    const struct CPU_State initial_cpu = {.pc=0x19eb, .a=0xb0, .x=0xca, .y=0x4a, .sp=0xb8, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x19eb, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x19ec, .a=0xb0, .x=0xc9, .y=0x4a, .sp=0xb8, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x19eb, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x19eb, .value=0x1d, .type=IO_READ},
        {.addr=0x19ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x3d98, .a=0xfe, .x=0x9b, .y=0x07, .sp=0x4d, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x3d98, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x3d99, .a=0xfe, .x=0x9a, .y=0x07, .sp=0x4d, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x3d98, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x3d98, .value=0x1d, .type=IO_READ},
        {.addr=0x3d99, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00BD) {
    const struct CPU_State initial_cpu = {.pc=0x731e, .a=0xf2, .x=0x62, .y=0x6f, .sp=0x09, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x731e, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x731f, .a=0xf2, .x=0x61, .y=0x6f, .sp=0x09, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x731e, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x731e, .value=0x1d, .type=IO_READ},
        {.addr=0x731f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00BE) {
    const struct CPU_State initial_cpu = {.pc=0x0494, .a=0x6e, .x=0x43, .y=0x8c, .sp=0x78, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x0494, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x0495, .a=0x6e, .x=0x42, .y=0x8c, .sp=0x78, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0494, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x0494, .value=0x1d, .type=IO_READ},
        {.addr=0x0495, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00BF) {
    const struct CPU_State initial_cpu = {.pc=0x83a6, .a=0x76, .x=0xdf, .y=0x55, .sp=0xc7, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x83a6, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x83a7, .a=0x76, .x=0xde, .y=0x55, .sp=0xc7, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x83a6, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x83a6, .value=0x1d, .type=IO_READ},
        {.addr=0x83a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00C0) {
    const struct CPU_State initial_cpu = {.pc=0x507a, .a=0xec, .x=0x89, .y=0x54, .sp=0x71, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x507a, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x507b, .a=0xec, .x=0x88, .y=0x54, .sp=0x71, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x507a, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x507a, .value=0x1d, .type=IO_READ},
        {.addr=0x507b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00C1) {
    const struct CPU_State initial_cpu = {.pc=0x0025, .a=0x79, .x=0x65, .y=0x1c, .sp=0x35, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x0025, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x0026, .a=0x79, .x=0x64, .y=0x1c, .sp=0x35, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0025, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x0025, .value=0x1d, .type=IO_READ},
        {.addr=0x0026, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00C2) {
    const struct CPU_State initial_cpu = {.pc=0xd069, .a=0xcd, .x=0xee, .y=0xab, .sp=0x03, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xd069, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xd06a, .a=0xcd, .x=0xed, .y=0xab, .sp=0x03, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xd069, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xd069, .value=0x1d, .type=IO_READ},
        {.addr=0xd06a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00C3) {
    const struct CPU_State initial_cpu = {.pc=0x396a, .a=0x35, .x=0x3d, .y=0xf7, .sp=0x6c, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x396a, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x396b, .a=0x35, .x=0x3c, .y=0xf7, .sp=0x6c, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x396a, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x396a, .value=0x1d, .type=IO_READ},
        {.addr=0x396b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00C4) {
    const struct CPU_State initial_cpu = {.pc=0xb0a8, .a=0x1b, .x=0xde, .y=0xb7, .sp=0x62, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xb0a8, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xb0a9, .a=0x1b, .x=0xdd, .y=0xb7, .sp=0x62, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xb0a8, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xb0a8, .value=0x1d, .type=IO_READ},
        {.addr=0xb0a9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x91ae, .a=0xec, .x=0xcb, .y=0x97, .sp=0x9f, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x91ae, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x91af, .a=0xec, .x=0xca, .y=0x97, .sp=0x9f, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x91ae, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x91ae, .value=0x1d, .type=IO_READ},
        {.addr=0x91af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00C6) {
    const struct CPU_State initial_cpu = {.pc=0xeebd, .a=0x78, .x=0x25, .y=0x89, .sp=0xaa, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xeebd, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xeebe, .a=0x78, .x=0x24, .y=0x89, .sp=0xaa, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xeebd, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xeebd, .value=0x1d, .type=IO_READ},
        {.addr=0xeebe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00C7) {
    const struct CPU_State initial_cpu = {.pc=0x535e, .a=0xc9, .x=0x8e, .y=0x8b, .sp=0xbd, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x535e, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x535f, .a=0xc9, .x=0x8d, .y=0x8b, .sp=0xbd, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x535e, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x535e, .value=0x1d, .type=IO_READ},
        {.addr=0x535f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00C8) {
    const struct CPU_State initial_cpu = {.pc=0xa300, .a=0xd2, .x=0xff, .y=0xdd, .sp=0xca, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xa300, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xa301, .a=0xd2, .x=0xfe, .y=0xdd, .sp=0xca, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xa300, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xa300, .value=0x1d, .type=IO_READ},
        {.addr=0xa301, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00C9) {
    const struct CPU_State initial_cpu = {.pc=0x82e8, .a=0xab, .x=0x93, .y=0xa2, .sp=0x32, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x82e8, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x82e9, .a=0xab, .x=0x92, .y=0xa2, .sp=0x32, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x82e8, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x82e8, .value=0x1d, .type=IO_READ},
        {.addr=0x82e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00CA) {
    const struct CPU_State initial_cpu = {.pc=0x2887, .a=0xa8, .x=0xab, .y=0x7a, .sp=0x59, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x2887, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x2888, .a=0xa8, .x=0xaa, .y=0x7a, .sp=0x59, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x2887, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x2887, .value=0x1d, .type=IO_READ},
        {.addr=0x2888, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00CB) {
    const struct CPU_State initial_cpu = {.pc=0xbca8, .a=0xc0, .x=0x99, .y=0x99, .sp=0x50, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xbca8, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xbca9, .a=0xc0, .x=0x98, .y=0x99, .sp=0x50, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xbca8, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xbca8, .value=0x1d, .type=IO_READ},
        {.addr=0xbca9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x2851, .a=0xf5, .x=0xc3, .y=0xca, .sp=0x01, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x2851, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x2852, .a=0xf5, .x=0xc2, .y=0xca, .sp=0x01, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x2851, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x2851, .value=0x1d, .type=IO_READ},
        {.addr=0x2852, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00CD) {
    const struct CPU_State initial_cpu = {.pc=0xeead, .a=0xd5, .x=0x05, .y=0x21, .sp=0x08, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xeead, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xeeae, .a=0xd5, .x=0x04, .y=0x21, .sp=0x08, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xeead, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xeead, .value=0x1d, .type=IO_READ},
        {.addr=0xeeae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x9d52, .a=0x1b, .x=0x53, .y=0x53, .sp=0x4b, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x9d52, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x9d53, .a=0x1b, .x=0x52, .y=0x53, .sp=0x4b, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x9d52, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x9d52, .value=0x1d, .type=IO_READ},
        {.addr=0x9d53, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00CF) {
    const struct CPU_State initial_cpu = {.pc=0x7d34, .a=0xde, .x=0xd2, .y=0xa7, .sp=0x16, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x7d34, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x7d35, .a=0xde, .x=0xd1, .y=0xa7, .sp=0x16, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x7d34, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x7d34, .value=0x1d, .type=IO_READ},
        {.addr=0x7d35, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00D0) {
    const struct CPU_State initial_cpu = {.pc=0x7727, .a=0xd5, .x=0x40, .y=0xc4, .sp=0x1b, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x7727, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x7728, .a=0xd5, .x=0x3f, .y=0xc4, .sp=0x1b, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x7727, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x7727, .value=0x1d, .type=IO_READ},
        {.addr=0x7728, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00D1) {
    const struct CPU_State initial_cpu = {.pc=0xfd47, .a=0x75, .x=0x06, .y=0x58, .sp=0x92, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xfd47, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xfd48, .a=0x75, .x=0x05, .y=0x58, .sp=0x92, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xfd47, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xfd47, .value=0x1d, .type=IO_READ},
        {.addr=0xfd48, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00D2) {
    const struct CPU_State initial_cpu = {.pc=0x6ece, .a=0x87, .x=0xa5, .y=0x09, .sp=0xb8, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x6ece, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x6ecf, .a=0x87, .x=0xa4, .y=0x09, .sp=0xb8, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x6ece, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x6ece, .value=0x1d, .type=IO_READ},
        {.addr=0x6ecf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00D3) {
    const struct CPU_State initial_cpu = {.pc=0xc8d3, .a=0x5d, .x=0x75, .y=0x2f, .sp=0xd5, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xc8d3, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc8d4, .a=0x5d, .x=0x74, .y=0x2f, .sp=0xd5, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xc8d3, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc8d3, .value=0x1d, .type=IO_READ},
        {.addr=0xc8d4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00D4) {
    const struct CPU_State initial_cpu = {.pc=0x4f30, .a=0x34, .x=0xea, .y=0x7d, .sp=0x3a, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x4f30, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x4f31, .a=0x34, .x=0xe9, .y=0x7d, .sp=0x3a, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x4f30, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x4f30, .value=0x1d, .type=IO_READ},
        {.addr=0x4f31, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00D5) {
    const struct CPU_State initial_cpu = {.pc=0x066f, .a=0xb3, .x=0x8f, .y=0x21, .sp=0x66, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x066f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x0670, .a=0xb3, .x=0x8e, .y=0x21, .sp=0x66, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x066f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x066f, .value=0x1d, .type=IO_READ},
        {.addr=0x0670, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00D6) {
    const struct CPU_State initial_cpu = {.pc=0x5a70, .a=0x56, .x=0xc1, .y=0xa7, .sp=0x69, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x5a70, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x5a71, .a=0x56, .x=0xc0, .y=0xa7, .sp=0x69, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x5a70, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x5a70, .value=0x1d, .type=IO_READ},
        {.addr=0x5a71, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00D7) {
    const struct CPU_State initial_cpu = {.pc=0x1f37, .a=0xf7, .x=0x85, .y=0xec, .sp=0xb6, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x1f37, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x1f38, .a=0xf7, .x=0x84, .y=0xec, .sp=0xb6, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x1f37, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x1f37, .value=0x1d, .type=IO_READ},
        {.addr=0x1f38, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00D8) {
    const struct CPU_State initial_cpu = {.pc=0x815c, .a=0x37, .x=0xa9, .y=0x9b, .sp=0x0d, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x815c, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x815d, .a=0x37, .x=0xa8, .y=0x9b, .sp=0x0d, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x815c, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x815c, .value=0x1d, .type=IO_READ},
        {.addr=0x815d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00D9) {
    const struct CPU_State initial_cpu = {.pc=0x1be1, .a=0x54, .x=0x4b, .y=0x2f, .sp=0x4e, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x1be1, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x1be2, .a=0x54, .x=0x4a, .y=0x2f, .sp=0x4e, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x1be1, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x1be1, .value=0x1d, .type=IO_READ},
        {.addr=0x1be2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00DA) {
    const struct CPU_State initial_cpu = {.pc=0xedb1, .a=0xe5, .x=0xa2, .y=0x84, .sp=0x56, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xedb1, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xedb2, .a=0xe5, .x=0xa1, .y=0x84, .sp=0x56, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xedb1, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xedb1, .value=0x1d, .type=IO_READ},
        {.addr=0xedb2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x98d2, .a=0xe4, .x=0x3e, .y=0xec, .sp=0xe0, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x98d2, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x98d3, .a=0xe4, .x=0x3d, .y=0xec, .sp=0xe0, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x98d2, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x98d2, .value=0x1d, .type=IO_READ},
        {.addr=0x98d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00DC) {
    const struct CPU_State initial_cpu = {.pc=0x82ee, .a=0x67, .x=0xde, .y=0xb8, .sp=0xf7, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x82ee, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x82ef, .a=0x67, .x=0xdd, .y=0xb8, .sp=0xf7, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x82ee, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x82ee, .value=0x1d, .type=IO_READ},
        {.addr=0x82ef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00DD) {
    const struct CPU_State initial_cpu = {.pc=0xfb8c, .a=0x5a, .x=0xa6, .y=0x72, .sp=0xde, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xfb8c, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xfb8d, .a=0x5a, .x=0xa5, .y=0x72, .sp=0xde, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xfb8c, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xfb8c, .value=0x1d, .type=IO_READ},
        {.addr=0xfb8d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00DE) {
    const struct CPU_State initial_cpu = {.pc=0xbbf8, .a=0x7a, .x=0xc7, .y=0x38, .sp=0x19, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xbbf8, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xbbf9, .a=0x7a, .x=0xc6, .y=0x38, .sp=0x19, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xbbf8, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xbbf8, .value=0x1d, .type=IO_READ},
        {.addr=0xbbf9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00DF) {
    const struct CPU_State initial_cpu = {.pc=0x34f2, .a=0xa0, .x=0x0c, .y=0xa1, .sp=0xe8, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x34f2, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x34f3, .a=0xa0, .x=0x0b, .y=0xa1, .sp=0xe8, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x34f2, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x34f2, .value=0x1d, .type=IO_READ},
        {.addr=0x34f3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00E0) {
    const struct CPU_State initial_cpu = {.pc=0xc3da, .a=0xef, .x=0xd7, .y=0x6b, .sp=0xe3, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xc3da, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc3db, .a=0xef, .x=0xd6, .y=0x6b, .sp=0xe3, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xc3da, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc3da, .value=0x1d, .type=IO_READ},
        {.addr=0xc3db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00E1) {
    const struct CPU_State initial_cpu = {.pc=0xd16f, .a=0x4a, .x=0x00, .y=0xe4, .sp=0xbc, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xd16f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xd170, .a=0x4a, .x=0xff, .y=0xe4, .sp=0xbc, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xd16f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xd16f, .value=0x1d, .type=IO_READ},
        {.addr=0xd170, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00E2) {
    const struct CPU_State initial_cpu = {.pc=0xfecd, .a=0x67, .x=0xb9, .y=0x2f, .sp=0xc0, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xfecd, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xfece, .a=0x67, .x=0xb8, .y=0x2f, .sp=0xc0, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xfecd, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xfecd, .value=0x1d, .type=IO_READ},
        {.addr=0xfece, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00E3) {
    const struct CPU_State initial_cpu = {.pc=0x193d, .a=0x67, .x=0x64, .y=0x5b, .sp=0x9d, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x193d, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x193e, .a=0x67, .x=0x63, .y=0x5b, .sp=0x9d, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x193d, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x193d, .value=0x1d, .type=IO_READ},
        {.addr=0x193e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x7feb, .a=0x70, .x=0xf5, .y=0x42, .sp=0x6f, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x7feb, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x7fec, .a=0x70, .x=0xf4, .y=0x42, .sp=0x6f, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x7feb, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x7feb, .value=0x1d, .type=IO_READ},
        {.addr=0x7fec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00E5) {
    const struct CPU_State initial_cpu = {.pc=0x2936, .a=0x40, .x=0x95, .y=0xdd, .sp=0x0f, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x2936, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x2937, .a=0x40, .x=0x94, .y=0xdd, .sp=0x0f, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x2936, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x2936, .value=0x1d, .type=IO_READ},
        {.addr=0x2937, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00E6) {
    const struct CPU_State initial_cpu = {.pc=0xf8c0, .a=0xa5, .x=0x70, .y=0xd5, .sp=0x88, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xf8c0, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xf8c1, .a=0xa5, .x=0x6f, .y=0xd5, .sp=0x88, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xf8c0, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xf8c0, .value=0x1d, .type=IO_READ},
        {.addr=0xf8c1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00E7) {
    const struct CPU_State initial_cpu = {.pc=0xc664, .a=0xe2, .x=0xa4, .y=0x1d, .sp=0x2d, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xc664, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc665, .a=0xe2, .x=0xa3, .y=0x1d, .sp=0x2d, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xc664, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc664, .value=0x1d, .type=IO_READ},
        {.addr=0xc665, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00E8) {
    const struct CPU_State initial_cpu = {.pc=0x7033, .a=0x99, .x=0x85, .y=0x61, .sp=0xae, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x7033, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x7034, .a=0x99, .x=0x84, .y=0x61, .sp=0xae, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x7033, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x7033, .value=0x1d, .type=IO_READ},
        {.addr=0x7034, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00E9) {
    const struct CPU_State initial_cpu = {.pc=0x8cd3, .a=0xef, .x=0xdc, .y=0xe5, .sp=0x9c, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x8cd3, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x8cd4, .a=0xef, .x=0xdb, .y=0xe5, .sp=0x9c, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x8cd3, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x8cd3, .value=0x1d, .type=IO_READ},
        {.addr=0x8cd4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x4e15, .a=0x0e, .x=0x1c, .y=0x25, .sp=0x03, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x4e15, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x4e16, .a=0x0e, .x=0x1b, .y=0x25, .sp=0x03, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x4e15, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x4e15, .value=0x1d, .type=IO_READ},
        {.addr=0x4e16, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00EB) {
    const struct CPU_State initial_cpu = {.pc=0xa76e, .a=0x4d, .x=0x8b, .y=0xaa, .sp=0xdc, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xa76e, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xa76f, .a=0x4d, .x=0x8a, .y=0xaa, .sp=0xdc, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xa76e, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xa76e, .value=0x1d, .type=IO_READ},
        {.addr=0xa76f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00EC) {
    const struct CPU_State initial_cpu = {.pc=0x4469, .a=0x2a, .x=0x4d, .y=0xd0, .sp=0xd7, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x4469, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x446a, .a=0x2a, .x=0x4c, .y=0xd0, .sp=0xd7, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x4469, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x4469, .value=0x1d, .type=IO_READ},
        {.addr=0x446a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00ED) {
    const struct CPU_State initial_cpu = {.pc=0x7862, .a=0x78, .x=0x1d, .y=0x55, .sp=0xcf, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x7862, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x7863, .a=0x78, .x=0x1c, .y=0x55, .sp=0xcf, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x7862, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x7862, .value=0x1d, .type=IO_READ},
        {.addr=0x7863, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00EE) {
    const struct CPU_State initial_cpu = {.pc=0xec0b, .a=0x2c, .x=0xdc, .y=0x87, .sp=0xa2, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xec0b, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xec0c, .a=0x2c, .x=0xdb, .y=0x87, .sp=0xa2, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xec0b, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xec0b, .value=0x1d, .type=IO_READ},
        {.addr=0xec0c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00EF) {
    const struct CPU_State initial_cpu = {.pc=0x99ac, .a=0x98, .x=0x72, .y=0xe5, .sp=0xd0, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x99ac, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x99ad, .a=0x98, .x=0x71, .y=0xe5, .sp=0xd0, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x99ac, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x99ac, .value=0x1d, .type=IO_READ},
        {.addr=0x99ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00F0) {
    const struct CPU_State initial_cpu = {.pc=0xbfc6, .a=0xe6, .x=0xf4, .y=0x14, .sp=0x07, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xbfc6, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xbfc7, .a=0xe6, .x=0xf3, .y=0x14, .sp=0x07, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xbfc6, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xbfc6, .value=0x1d, .type=IO_READ},
        {.addr=0xbfc7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00F1) {
    const struct CPU_State initial_cpu = {.pc=0x5f51, .a=0x27, .x=0x32, .y=0x90, .sp=0x03, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x5f51, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x5f52, .a=0x27, .x=0x31, .y=0x90, .sp=0x03, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x5f51, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x5f51, .value=0x1d, .type=IO_READ},
        {.addr=0x5f52, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00F2) {
    const struct CPU_State initial_cpu = {.pc=0xfa57, .a=0xe6, .x=0x25, .y=0xba, .sp=0xa1, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xfa57, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xfa58, .a=0xe6, .x=0x24, .y=0xba, .sp=0xa1, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xfa57, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xfa57, .value=0x1d, .type=IO_READ},
        {.addr=0xfa58, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00F3) {
    const struct CPU_State initial_cpu = {.pc=0x5ed7, .a=0x33, .x=0xc3, .y=0xcb, .sp=0x25, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x5ed7, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x5ed8, .a=0x33, .x=0xc2, .y=0xcb, .sp=0x25, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x5ed7, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x5ed7, .value=0x1d, .type=IO_READ},
        {.addr=0x5ed8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00F4) {
    const struct CPU_State initial_cpu = {.pc=0x501e, .a=0x08, .x=0x0f, .y=0x70, .sp=0xb4, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x501e, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x501f, .a=0x08, .x=0x0e, .y=0x70, .sp=0xb4, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x501e, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x501e, .value=0x1d, .type=IO_READ},
        {.addr=0x501f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00F5) {
    const struct CPU_State initial_cpu = {.pc=0xb49c, .a=0xdf, .x=0x6e, .y=0x2a, .sp=0x32, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xb49c, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xb49d, .a=0xdf, .x=0x6d, .y=0x2a, .sp=0x32, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xb49c, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xb49c, .value=0x1d, .type=IO_READ},
        {.addr=0xb49d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00F6) {
    const struct CPU_State initial_cpu = {.pc=0xb45c, .a=0x54, .x=0xa2, .y=0x93, .sp=0xd8, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xb45c, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xb45d, .a=0x54, .x=0xa1, .y=0x93, .sp=0xd8, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xb45c, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xb45c, .value=0x1d, .type=IO_READ},
        {.addr=0xb45d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00F7) {
    const struct CPU_State initial_cpu = {.pc=0x6584, .a=0xab, .x=0xd2, .y=0x45, .sp=0xae, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x6584, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x6585, .a=0xab, .x=0xd1, .y=0x45, .sp=0xae, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x6584, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x6584, .value=0x1d, .type=IO_READ},
        {.addr=0x6585, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x2103, .a=0xbc, .x=0xc9, .y=0xbf, .sp=0xc0, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x2103, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x2104, .a=0xbc, .x=0xc8, .y=0xbf, .sp=0xc0, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x2103, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x2103, .value=0x1d, .type=IO_READ},
        {.addr=0x2104, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00F9) {
    const struct CPU_State initial_cpu = {.pc=0x3780, .a=0x4d, .x=0xb2, .y=0x8b, .sp=0x94, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x3780, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x3781, .a=0x4d, .x=0xb1, .y=0x8b, .sp=0x94, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x3780, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x3780, .value=0x1d, .type=IO_READ},
        {.addr=0x3781, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00FA) {
    const struct CPU_State initial_cpu = {.pc=0x4fa4, .a=0x65, .x=0x1e, .y=0xaa, .sp=0x5b, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x4fa4, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x4fa5, .a=0x65, .x=0x1d, .y=0xaa, .sp=0x5b, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x4fa4, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x4fa4, .value=0x1d, .type=IO_READ},
        {.addr=0x4fa5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00FB) {
    const struct CPU_State initial_cpu = {.pc=0x581c, .a=0x03, .x=0x83, .y=0xbd, .sp=0x92, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x581c, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x581d, .a=0x03, .x=0x82, .y=0xbd, .sp=0x92, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x581c, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x581c, .value=0x1d, .type=IO_READ},
        {.addr=0x581d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00FC) {
    const struct CPU_State initial_cpu = {.pc=0xfafb, .a=0x5d, .x=0x9c, .y=0x28, .sp=0x80, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xfafb, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xfafc, .a=0x5d, .x=0x9b, .y=0x28, .sp=0x80, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xfafb, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xfafb, .value=0x1d, .type=IO_READ},
        {.addr=0xfafc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00FD) {
    const struct CPU_State initial_cpu = {.pc=0xe771, .a=0x7d, .x=0xa4, .y=0xf9, .sp=0xf9, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xe771, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xe772, .a=0x7d, .x=0xa3, .y=0xf9, .sp=0xf9, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xe771, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xe771, .value=0x1d, .type=IO_READ},
        {.addr=0xe772, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00FE) {
    const struct CPU_State initial_cpu = {.pc=0xab6f, .a=0x8a, .x=0xbb, .y=0xd5, .sp=0xce, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xab6f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xab70, .a=0x8a, .x=0xba, .y=0xd5, .sp=0xce, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xab6f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xab6f, .value=0x1d, .type=IO_READ},
        {.addr=0xab70, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_00FF) {
    const struct CPU_State initial_cpu = {.pc=0x1574, .a=0xa7, .x=0x32, .y=0xfb, .sp=0xb9, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x1574, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x1575, .a=0xa7, .x=0x31, .y=0xfb, .sp=0xb9, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x1574, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x1574, .value=0x1d, .type=IO_READ},
        {.addr=0x1575, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0100) {
    const struct CPU_State initial_cpu = {.pc=0xec8c, .a=0xea, .x=0xbd, .y=0x7a, .sp=0x59, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xec8c, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xec8d, .a=0xea, .x=0xbc, .y=0x7a, .sp=0x59, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xec8c, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xec8c, .value=0x1d, .type=IO_READ},
        {.addr=0xec8d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0101) {
    const struct CPU_State initial_cpu = {.pc=0x32b0, .a=0xc3, .x=0x62, .y=0x9e, .sp=0xbe, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x32b0, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x32b1, .a=0xc3, .x=0x61, .y=0x9e, .sp=0xbe, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x32b0, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x32b0, .value=0x1d, .type=IO_READ},
        {.addr=0x32b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0102) {
    const struct CPU_State initial_cpu = {.pc=0x6105, .a=0x23, .x=0x7d, .y=0x4a, .sp=0xa9, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x6105, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x6106, .a=0x23, .x=0x7c, .y=0x4a, .sp=0xa9, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x6105, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x6105, .value=0x1d, .type=IO_READ},
        {.addr=0x6106, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0103) {
    const struct CPU_State initial_cpu = {.pc=0xd4f5, .a=0xa4, .x=0x1e, .y=0xa9, .sp=0xa6, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xd4f5, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xd4f6, .a=0xa4, .x=0x1d, .y=0xa9, .sp=0xa6, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xd4f5, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xd4f5, .value=0x1d, .type=IO_READ},
        {.addr=0xd4f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0104) {
    const struct CPU_State initial_cpu = {.pc=0x3588, .a=0x52, .x=0x2c, .y=0xc7, .sp=0xf5, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x3588, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x3589, .a=0x52, .x=0x2b, .y=0xc7, .sp=0xf5, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x3588, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x3588, .value=0x1d, .type=IO_READ},
        {.addr=0x3589, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0105) {
    const struct CPU_State initial_cpu = {.pc=0x6551, .a=0x8f, .x=0x0e, .y=0xbb, .sp=0x49, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x6551, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x6552, .a=0x8f, .x=0x0d, .y=0xbb, .sp=0x49, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x6551, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x6551, .value=0x1d, .type=IO_READ},
        {.addr=0x6552, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0106) {
    const struct CPU_State initial_cpu = {.pc=0xdd0e, .a=0xbc, .x=0x77, .y=0x95, .sp=0x44, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xdd0e, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xdd0f, .a=0xbc, .x=0x76, .y=0x95, .sp=0x44, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xdd0e, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xdd0e, .value=0x1d, .type=IO_READ},
        {.addr=0xdd0f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0107) {
    const struct CPU_State initial_cpu = {.pc=0xbf73, .a=0xe4, .x=0xd6, .y=0x85, .sp=0x03, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xbf73, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xbf74, .a=0xe4, .x=0xd5, .y=0x85, .sp=0x03, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xbf73, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xbf73, .value=0x1d, .type=IO_READ},
        {.addr=0xbf74, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0108) {
    const struct CPU_State initial_cpu = {.pc=0x97c5, .a=0xfe, .x=0x4e, .y=0xbc, .sp=0xa3, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x97c5, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x97c6, .a=0xfe, .x=0x4d, .y=0xbc, .sp=0xa3, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x97c5, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x97c5, .value=0x1d, .type=IO_READ},
        {.addr=0x97c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0109) {
    const struct CPU_State initial_cpu = {.pc=0x9ce0, .a=0x11, .x=0x7b, .y=0xbc, .sp=0xb5, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x9ce0, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x9ce1, .a=0x11, .x=0x7a, .y=0xbc, .sp=0xb5, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x9ce0, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x9ce0, .value=0x1d, .type=IO_READ},
        {.addr=0x9ce1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_010A) {
    const struct CPU_State initial_cpu = {.pc=0xe580, .a=0x37, .x=0x91, .y=0x2d, .sp=0x1d, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xe580, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xe581, .a=0x37, .x=0x90, .y=0x2d, .sp=0x1d, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xe580, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xe580, .value=0x1d, .type=IO_READ},
        {.addr=0xe581, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_010B) {
    const struct CPU_State initial_cpu = {.pc=0x0f72, .a=0x2b, .x=0xfa, .y=0xb4, .sp=0xd3, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x0f72, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x0f73, .a=0x2b, .x=0xf9, .y=0xb4, .sp=0xd3, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0f72, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x0f72, .value=0x1d, .type=IO_READ},
        {.addr=0x0f73, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_010C) {
    const struct CPU_State initial_cpu = {.pc=0x09e5, .a=0xa3, .x=0x97, .y=0xdc, .sp=0xdb, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x09e5, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x09e6, .a=0xa3, .x=0x96, .y=0xdc, .sp=0xdb, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x09e5, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x09e5, .value=0x1d, .type=IO_READ},
        {.addr=0x09e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_010D) {
    const struct CPU_State initial_cpu = {.pc=0xeeb1, .a=0x00, .x=0xa0, .y=0xb7, .sp=0x59, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xeeb1, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xeeb2, .a=0x00, .x=0x9f, .y=0xb7, .sp=0x59, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xeeb1, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xeeb1, .value=0x1d, .type=IO_READ},
        {.addr=0xeeb2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_010E) {
    const struct CPU_State initial_cpu = {.pc=0xf9ee, .a=0x0f, .x=0x4e, .y=0x63, .sp=0xd2, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xf9ee, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xf9ef, .a=0x0f, .x=0x4d, .y=0x63, .sp=0xd2, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xf9ee, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xf9ee, .value=0x1d, .type=IO_READ},
        {.addr=0xf9ef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_010F) {
    const struct CPU_State initial_cpu = {.pc=0xaf60, .a=0x3d, .x=0x6d, .y=0x7f, .sp=0x10, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xaf60, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xaf61, .a=0x3d, .x=0x6c, .y=0x7f, .sp=0x10, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xaf60, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xaf60, .value=0x1d, .type=IO_READ},
        {.addr=0xaf61, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0110) {
    const struct CPU_State initial_cpu = {.pc=0xe3a4, .a=0xc2, .x=0x8d, .y=0x3a, .sp=0xe0, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xe3a4, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xe3a5, .a=0xc2, .x=0x8c, .y=0x3a, .sp=0xe0, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xe3a4, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xe3a4, .value=0x1d, .type=IO_READ},
        {.addr=0xe3a5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0111) {
    const struct CPU_State initial_cpu = {.pc=0x586a, .a=0xa6, .x=0xd3, .y=0x90, .sp=0xc7, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x586a, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x586b, .a=0xa6, .x=0xd2, .y=0x90, .sp=0xc7, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x586a, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x586a, .value=0x1d, .type=IO_READ},
        {.addr=0x586b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0112) {
    const struct CPU_State initial_cpu = {.pc=0x7daf, .a=0x62, .x=0x0a, .y=0x28, .sp=0xc1, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x7daf, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x7db0, .a=0x62, .x=0x09, .y=0x28, .sp=0xc1, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x7daf, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x7daf, .value=0x1d, .type=IO_READ},
        {.addr=0x7db0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0113) {
    const struct CPU_State initial_cpu = {.pc=0xefa9, .a=0xce, .x=0x85, .y=0x9a, .sp=0x52, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xefa9, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xefaa, .a=0xce, .x=0x84, .y=0x9a, .sp=0x52, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xefa9, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xefa9, .value=0x1d, .type=IO_READ},
        {.addr=0xefaa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0114) {
    const struct CPU_State initial_cpu = {.pc=0x78b4, .a=0x88, .x=0xe3, .y=0xdc, .sp=0x0f, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x78b4, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x78b5, .a=0x88, .x=0xe2, .y=0xdc, .sp=0x0f, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x78b4, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x78b4, .value=0x1d, .type=IO_READ},
        {.addr=0x78b5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0115) {
    const struct CPU_State initial_cpu = {.pc=0xb60f, .a=0xb1, .x=0x49, .y=0xe1, .sp=0xc4, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xb60f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xb610, .a=0xb1, .x=0x48, .y=0xe1, .sp=0xc4, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xb60f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xb60f, .value=0x1d, .type=IO_READ},
        {.addr=0xb610, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0116) {
    const struct CPU_State initial_cpu = {.pc=0x11c1, .a=0x72, .x=0x32, .y=0x4a, .sp=0x75, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x11c1, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x11c2, .a=0x72, .x=0x31, .y=0x4a, .sp=0x75, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x11c1, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x11c1, .value=0x1d, .type=IO_READ},
        {.addr=0x11c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0117) {
    const struct CPU_State initial_cpu = {.pc=0xd510, .a=0x8d, .x=0x2c, .y=0xf6, .sp=0x9f, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xd510, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xd511, .a=0x8d, .x=0x2b, .y=0xf6, .sp=0x9f, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xd510, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xd510, .value=0x1d, .type=IO_READ},
        {.addr=0xd511, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0118) {
    const struct CPU_State initial_cpu = {.pc=0x0c05, .a=0x9b, .x=0xfd, .y=0xb9, .sp=0x5a, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x0c05, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x0c06, .a=0x9b, .x=0xfc, .y=0xb9, .sp=0x5a, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x0c05, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x0c05, .value=0x1d, .type=IO_READ},
        {.addr=0x0c06, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0119) {
    const struct CPU_State initial_cpu = {.pc=0x1a91, .a=0xc9, .x=0x56, .y=0x1e, .sp=0x1f, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x1a91, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x1a92, .a=0xc9, .x=0x55, .y=0x1e, .sp=0x1f, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x1a91, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x1a91, .value=0x1d, .type=IO_READ},
        {.addr=0x1a92, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_011A) {
    const struct CPU_State initial_cpu = {.pc=0x25b2, .a=0x34, .x=0x2a, .y=0x37, .sp=0xa9, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x25b2, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x25b3, .a=0x34, .x=0x29, .y=0x37, .sp=0xa9, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x25b2, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x25b2, .value=0x1d, .type=IO_READ},
        {.addr=0x25b3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_011B) {
    const struct CPU_State initial_cpu = {.pc=0x8ac3, .a=0x96, .x=0x01, .y=0xad, .sp=0xa6, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x8ac3, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x8ac4, .a=0x96, .x=0x00, .y=0xad, .sp=0xa6, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x8ac3, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x8ac3, .value=0x1d, .type=IO_READ},
        {.addr=0x8ac4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_011C) {
    const struct CPU_State initial_cpu = {.pc=0x6269, .a=0xf6, .x=0xb3, .y=0xc2, .sp=0x91, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x6269, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x626a, .a=0xf6, .x=0xb2, .y=0xc2, .sp=0x91, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x6269, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x6269, .value=0x1d, .type=IO_READ},
        {.addr=0x626a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_011D) {
    const struct CPU_State initial_cpu = {.pc=0x618a, .a=0x7a, .x=0x18, .y=0x3e, .sp=0x12, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x618a, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x618b, .a=0x7a, .x=0x17, .y=0x3e, .sp=0x12, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x618a, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x618a, .value=0x1d, .type=IO_READ},
        {.addr=0x618b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_011E) {
    const struct CPU_State initial_cpu = {.pc=0x4419, .a=0x7b, .x=0x74, .y=0x97, .sp=0xbc, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x4419, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x441a, .a=0x7b, .x=0x73, .y=0x97, .sp=0xbc, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x4419, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x4419, .value=0x1d, .type=IO_READ},
        {.addr=0x441a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_011F) {
    const struct CPU_State initial_cpu = {.pc=0xc4db, .a=0xf8, .x=0xf7, .y=0xe1, .sp=0x9d, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xc4db, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc4dc, .a=0xf8, .x=0xf6, .y=0xe1, .sp=0x9d, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xc4db, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc4db, .value=0x1d, .type=IO_READ},
        {.addr=0xc4dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0120) {
    const struct CPU_State initial_cpu = {.pc=0x8780, .a=0xd7, .x=0xd5, .y=0xca, .sp=0x47, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x8780, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x8781, .a=0xd7, .x=0xd4, .y=0xca, .sp=0x47, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x8780, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x8780, .value=0x1d, .type=IO_READ},
        {.addr=0x8781, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0121) {
    const struct CPU_State initial_cpu = {.pc=0x6ea4, .a=0xe0, .x=0x01, .y=0x5e, .sp=0xbd, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x6ea4, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x6ea5, .a=0xe0, .x=0x00, .y=0x5e, .sp=0xbd, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x6ea4, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x6ea4, .value=0x1d, .type=IO_READ},
        {.addr=0x6ea5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0122) {
    const struct CPU_State initial_cpu = {.pc=0x7bd7, .a=0x9f, .x=0x89, .y=0x61, .sp=0xa4, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x7bd7, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x7bd8, .a=0x9f, .x=0x88, .y=0x61, .sp=0xa4, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x7bd7, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x7bd7, .value=0x1d, .type=IO_READ},
        {.addr=0x7bd8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0123) {
    const struct CPU_State initial_cpu = {.pc=0x0011, .a=0x29, .x=0x2f, .y=0x7e, .sp=0xaf, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x0011, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x0012, .a=0x29, .x=0x2e, .y=0x7e, .sp=0xaf, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0011, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x0011, .value=0x1d, .type=IO_READ},
        {.addr=0x0012, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0124) {
    const struct CPU_State initial_cpu = {.pc=0xcde9, .a=0xb4, .x=0x21, .y=0x6d, .sp=0x0f, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xcde9, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xcdea, .a=0xb4, .x=0x20, .y=0x6d, .sp=0x0f, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xcde9, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xcde9, .value=0x1d, .type=IO_READ},
        {.addr=0xcdea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0125) {
    const struct CPU_State initial_cpu = {.pc=0xf640, .a=0xb6, .x=0xc1, .y=0x93, .sp=0x21, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xf640, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xf641, .a=0xb6, .x=0xc0, .y=0x93, .sp=0x21, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xf640, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xf640, .value=0x1d, .type=IO_READ},
        {.addr=0xf641, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0126) {
    const struct CPU_State initial_cpu = {.pc=0x8329, .a=0x68, .x=0xd5, .y=0x55, .sp=0x1c, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x8329, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x832a, .a=0x68, .x=0xd4, .y=0x55, .sp=0x1c, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x8329, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x8329, .value=0x1d, .type=IO_READ},
        {.addr=0x832a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0127) {
    const struct CPU_State initial_cpu = {.pc=0x8b24, .a=0xd8, .x=0xe2, .y=0xd7, .sp=0x2c, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x8b24, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x8b25, .a=0xd8, .x=0xe1, .y=0xd7, .sp=0x2c, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x8b24, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x8b24, .value=0x1d, .type=IO_READ},
        {.addr=0x8b25, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0128) {
    const struct CPU_State initial_cpu = {.pc=0x3685, .a=0xb6, .x=0x63, .y=0xa9, .sp=0xad, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x3685, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x3686, .a=0xb6, .x=0x62, .y=0xa9, .sp=0xad, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x3685, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x3685, .value=0x1d, .type=IO_READ},
        {.addr=0x3686, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0129) {
    const struct CPU_State initial_cpu = {.pc=0x7971, .a=0x5c, .x=0x6f, .y=0x6d, .sp=0x22, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x7971, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x7972, .a=0x5c, .x=0x6e, .y=0x6d, .sp=0x22, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x7971, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x7971, .value=0x1d, .type=IO_READ},
        {.addr=0x7972, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_012A) {
    const struct CPU_State initial_cpu = {.pc=0x8be4, .a=0xb5, .x=0x36, .y=0x69, .sp=0x65, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x8be4, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x8be5, .a=0xb5, .x=0x35, .y=0x69, .sp=0x65, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x8be4, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x8be4, .value=0x1d, .type=IO_READ},
        {.addr=0x8be5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_012B) {
    const struct CPU_State initial_cpu = {.pc=0x3545, .a=0x14, .x=0xe5, .y=0x8c, .sp=0xc7, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x3545, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x3546, .a=0x14, .x=0xe4, .y=0x8c, .sp=0xc7, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x3545, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x3545, .value=0x1d, .type=IO_READ},
        {.addr=0x3546, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_012C) {
    const struct CPU_State initial_cpu = {.pc=0xafb0, .a=0xb0, .x=0xc4, .y=0xbb, .sp=0xb1, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xafb0, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xafb1, .a=0xb0, .x=0xc3, .y=0xbb, .sp=0xb1, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xafb0, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xafb0, .value=0x1d, .type=IO_READ},
        {.addr=0xafb1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_012D) {
    const struct CPU_State initial_cpu = {.pc=0x55c4, .a=0x30, .x=0x36, .y=0x9d, .sp=0xed, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x55c4, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x55c5, .a=0x30, .x=0x35, .y=0x9d, .sp=0xed, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x55c4, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x55c4, .value=0x1d, .type=IO_READ},
        {.addr=0x55c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_012E) {
    const struct CPU_State initial_cpu = {.pc=0xa768, .a=0x10, .x=0xd5, .y=0x45, .sp=0xc8, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xa768, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xa769, .a=0x10, .x=0xd4, .y=0x45, .sp=0xc8, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xa768, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xa768, .value=0x1d, .type=IO_READ},
        {.addr=0xa769, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_012F) {
    const struct CPU_State initial_cpu = {.pc=0xc5d5, .a=0x38, .x=0x39, .y=0xcf, .sp=0xd3, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xc5d5, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc5d6, .a=0x38, .x=0x38, .y=0xcf, .sp=0xd3, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xc5d5, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc5d5, .value=0x1d, .type=IO_READ},
        {.addr=0xc5d6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0130) {
    const struct CPU_State initial_cpu = {.pc=0xf6a5, .a=0xb4, .x=0x0d, .y=0xb0, .sp=0xbf, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xf6a5, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xf6a6, .a=0xb4, .x=0x0c, .y=0xb0, .sp=0xbf, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xf6a5, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xf6a5, .value=0x1d, .type=IO_READ},
        {.addr=0xf6a6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0131) {
    const struct CPU_State initial_cpu = {.pc=0xb647, .a=0xab, .x=0xb7, .y=0xed, .sp=0x88, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xb647, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xb648, .a=0xab, .x=0xb6, .y=0xed, .sp=0x88, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xb647, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xb647, .value=0x1d, .type=IO_READ},
        {.addr=0xb648, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0132) {
    const struct CPU_State initial_cpu = {.pc=0xf55f, .a=0xe4, .x=0xbc, .y=0x19, .sp=0x6a, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xf55f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xf560, .a=0xe4, .x=0xbb, .y=0x19, .sp=0x6a, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xf55f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xf55f, .value=0x1d, .type=IO_READ},
        {.addr=0xf560, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0133) {
    const struct CPU_State initial_cpu = {.pc=0x43fc, .a=0xe4, .x=0xa6, .y=0x0f, .sp=0x5c, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x43fc, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x43fd, .a=0xe4, .x=0xa5, .y=0x0f, .sp=0x5c, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x43fc, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x43fc, .value=0x1d, .type=IO_READ},
        {.addr=0x43fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0134) {
    const struct CPU_State initial_cpu = {.pc=0xa620, .a=0x97, .x=0xa6, .y=0x11, .sp=0x3a, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xa620, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xa621, .a=0x97, .x=0xa5, .y=0x11, .sp=0x3a, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xa620, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xa620, .value=0x1d, .type=IO_READ},
        {.addr=0xa621, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0135) {
    const struct CPU_State initial_cpu = {.pc=0xc643, .a=0x70, .x=0x51, .y=0x87, .sp=0x72, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xc643, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc644, .a=0x70, .x=0x50, .y=0x87, .sp=0x72, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xc643, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc643, .value=0x1d, .type=IO_READ},
        {.addr=0xc644, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0136) {
    const struct CPU_State initial_cpu = {.pc=0xcae4, .a=0x03, .x=0x35, .y=0xbe, .sp=0x7c, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xcae4, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xcae5, .a=0x03, .x=0x34, .y=0xbe, .sp=0x7c, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xcae4, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xcae4, .value=0x1d, .type=IO_READ},
        {.addr=0xcae5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0137) {
    const struct CPU_State initial_cpu = {.pc=0x43cb, .a=0x32, .x=0xdc, .y=0x13, .sp=0xbc, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x43cb, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x43cc, .a=0x32, .x=0xdb, .y=0x13, .sp=0xbc, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x43cb, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x43cb, .value=0x1d, .type=IO_READ},
        {.addr=0x43cc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0138) {
    const struct CPU_State initial_cpu = {.pc=0x8cc7, .a=0xad, .x=0x14, .y=0xb3, .sp=0xc3, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x8cc7, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x8cc8, .a=0xad, .x=0x13, .y=0xb3, .sp=0xc3, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x8cc7, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x8cc7, .value=0x1d, .type=IO_READ},
        {.addr=0x8cc8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0139) {
    const struct CPU_State initial_cpu = {.pc=0x5b7c, .a=0x38, .x=0x92, .y=0x7c, .sp=0x96, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x5b7c, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x5b7d, .a=0x38, .x=0x91, .y=0x7c, .sp=0x96, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x5b7c, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x5b7c, .value=0x1d, .type=IO_READ},
        {.addr=0x5b7d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_013A) {
    const struct CPU_State initial_cpu = {.pc=0x53df, .a=0x85, .x=0xec, .y=0x0b, .sp=0x84, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x53df, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x53e0, .a=0x85, .x=0xeb, .y=0x0b, .sp=0x84, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x53df, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x53df, .value=0x1d, .type=IO_READ},
        {.addr=0x53e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_013B) {
    const struct CPU_State initial_cpu = {.pc=0xbc1f, .a=0x54, .x=0xf7, .y=0xc0, .sp=0xf8, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xbc1f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xbc20, .a=0x54, .x=0xf6, .y=0xc0, .sp=0xf8, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xbc1f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xbc1f, .value=0x1d, .type=IO_READ},
        {.addr=0xbc20, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_013C) {
    const struct CPU_State initial_cpu = {.pc=0x9fd9, .a=0x16, .x=0x8a, .y=0xff, .sp=0x62, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x9fd9, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x9fda, .a=0x16, .x=0x89, .y=0xff, .sp=0x62, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x9fd9, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x9fd9, .value=0x1d, .type=IO_READ},
        {.addr=0x9fda, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_013D) {
    const struct CPU_State initial_cpu = {.pc=0x5e55, .a=0xb1, .x=0x95, .y=0x6c, .sp=0x8c, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x5e55, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x5e56, .a=0xb1, .x=0x94, .y=0x6c, .sp=0x8c, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x5e55, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x5e55, .value=0x1d, .type=IO_READ},
        {.addr=0x5e56, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_013E) {
    const struct CPU_State initial_cpu = {.pc=0x4764, .a=0xb7, .x=0xa6, .y=0x80, .sp=0x86, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x4764, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x4765, .a=0xb7, .x=0xa5, .y=0x80, .sp=0x86, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x4764, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x4764, .value=0x1d, .type=IO_READ},
        {.addr=0x4765, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_013F) {
    const struct CPU_State initial_cpu = {.pc=0x3855, .a=0xe9, .x=0x57, .y=0xfc, .sp=0x74, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x3855, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x3856, .a=0xe9, .x=0x56, .y=0xfc, .sp=0x74, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x3855, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x3855, .value=0x1d, .type=IO_READ},
        {.addr=0x3856, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0140) {
    const struct CPU_State initial_cpu = {.pc=0x11d7, .a=0x65, .x=0xc5, .y=0xc9, .sp=0x2a, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x11d7, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x11d8, .a=0x65, .x=0xc4, .y=0xc9, .sp=0x2a, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x11d7, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x11d7, .value=0x1d, .type=IO_READ},
        {.addr=0x11d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0141) {
    const struct CPU_State initial_cpu = {.pc=0x4b88, .a=0x06, .x=0x9c, .y=0x7b, .sp=0x32, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x4b88, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x4b89, .a=0x06, .x=0x9b, .y=0x7b, .sp=0x32, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x4b88, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x4b88, .value=0x1d, .type=IO_READ},
        {.addr=0x4b89, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0142) {
    const struct CPU_State initial_cpu = {.pc=0x9b06, .a=0x88, .x=0x97, .y=0xa4, .sp=0x01, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x9b06, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x9b07, .a=0x88, .x=0x96, .y=0xa4, .sp=0x01, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x9b06, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x9b06, .value=0x1d, .type=IO_READ},
        {.addr=0x9b07, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0143) {
    const struct CPU_State initial_cpu = {.pc=0xd9f9, .a=0xff, .x=0xbe, .y=0x7a, .sp=0xdf, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xd9f9, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xd9fa, .a=0xff, .x=0xbd, .y=0x7a, .sp=0xdf, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xd9f9, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xd9f9, .value=0x1d, .type=IO_READ},
        {.addr=0xd9fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0144) {
    const struct CPU_State initial_cpu = {.pc=0xbb29, .a=0x1f, .x=0x96, .y=0xd2, .sp=0x2d, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xbb29, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xbb2a, .a=0x1f, .x=0x95, .y=0xd2, .sp=0x2d, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xbb29, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xbb29, .value=0x1d, .type=IO_READ},
        {.addr=0xbb2a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0145) {
    const struct CPU_State initial_cpu = {.pc=0x7679, .a=0x09, .x=0xd6, .y=0xc0, .sp=0x4c, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x7679, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x767a, .a=0x09, .x=0xd5, .y=0xc0, .sp=0x4c, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x7679, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x7679, .value=0x1d, .type=IO_READ},
        {.addr=0x767a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0146) {
    const struct CPU_State initial_cpu = {.pc=0x308f, .a=0xd7, .x=0x21, .y=0x3c, .sp=0x3a, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x308f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x3090, .a=0xd7, .x=0x20, .y=0x3c, .sp=0x3a, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x308f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x308f, .value=0x1d, .type=IO_READ},
        {.addr=0x3090, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0147) {
    const struct CPU_State initial_cpu = {.pc=0x6d78, .a=0x9a, .x=0x30, .y=0x7d, .sp=0x2a, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x6d78, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x6d79, .a=0x9a, .x=0x2f, .y=0x7d, .sp=0x2a, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x6d78, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x6d78, .value=0x1d, .type=IO_READ},
        {.addr=0x6d79, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0148) {
    const struct CPU_State initial_cpu = {.pc=0x8da6, .a=0x0a, .x=0xcf, .y=0x42, .sp=0x48, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x8da6, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x8da7, .a=0x0a, .x=0xce, .y=0x42, .sp=0x48, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x8da6, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x8da6, .value=0x1d, .type=IO_READ},
        {.addr=0x8da7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0149) {
    const struct CPU_State initial_cpu = {.pc=0x4efa, .a=0x1e, .x=0x2a, .y=0xae, .sp=0x6d, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x4efa, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x4efb, .a=0x1e, .x=0x29, .y=0xae, .sp=0x6d, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x4efa, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x4efa, .value=0x1d, .type=IO_READ},
        {.addr=0x4efb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_014A) {
    const struct CPU_State initial_cpu = {.pc=0x284e, .a=0xd0, .x=0x4e, .y=0x68, .sp=0xc4, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x284e, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x284f, .a=0xd0, .x=0x4d, .y=0x68, .sp=0xc4, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x284e, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x284e, .value=0x1d, .type=IO_READ},
        {.addr=0x284f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_014B) {
    const struct CPU_State initial_cpu = {.pc=0xbca7, .a=0x5b, .x=0x8f, .y=0x2b, .sp=0x9a, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xbca7, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xbca8, .a=0x5b, .x=0x8e, .y=0x2b, .sp=0x9a, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xbca7, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xbca7, .value=0x1d, .type=IO_READ},
        {.addr=0xbca8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_014C) {
    const struct CPU_State initial_cpu = {.pc=0x44bf, .a=0xbb, .x=0xdb, .y=0xd5, .sp=0x01, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x44bf, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x44c0, .a=0xbb, .x=0xda, .y=0xd5, .sp=0x01, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x44bf, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x44bf, .value=0x1d, .type=IO_READ},
        {.addr=0x44c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_014D) {
    const struct CPU_State initial_cpu = {.pc=0xa671, .a=0xd8, .x=0x1a, .y=0x2d, .sp=0x7a, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0xa671, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xa672, .a=0xd8, .x=0x19, .y=0x2d, .sp=0x7a, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xa671, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xa671, .value=0x1d, .type=IO_READ},
        {.addr=0xa672, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_014E) {
    const struct CPU_State initial_cpu = {.pc=0xed47, .a=0x1d, .x=0x57, .y=0xca, .sp=0x8e, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xed47, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xed48, .a=0x1d, .x=0x56, .y=0xca, .sp=0x8e, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xed47, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xed47, .value=0x1d, .type=IO_READ},
        {.addr=0xed48, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_014F) {
    const struct CPU_State initial_cpu = {.pc=0x3970, .a=0x5e, .x=0x8a, .y=0x4c, .sp=0x12, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x3970, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x3971, .a=0x5e, .x=0x89, .y=0x4c, .sp=0x12, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x3970, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x3970, .value=0x1d, .type=IO_READ},
        {.addr=0x3971, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0150) {
    const struct CPU_State initial_cpu = {.pc=0x57fb, .a=0xbf, .x=0x9c, .y=0x6b, .sp=0xdb, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x57fb, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x57fc, .a=0xbf, .x=0x9b, .y=0x6b, .sp=0xdb, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x57fb, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x57fb, .value=0x1d, .type=IO_READ},
        {.addr=0x57fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0151) {
    const struct CPU_State initial_cpu = {.pc=0x6b49, .a=0x84, .x=0x04, .y=0x7c, .sp=0xa6, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x6b49, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x6b4a, .a=0x84, .x=0x03, .y=0x7c, .sp=0xa6, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x6b49, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x6b49, .value=0x1d, .type=IO_READ},
        {.addr=0x6b4a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0152) {
    const struct CPU_State initial_cpu = {.pc=0x4b23, .a=0x08, .x=0x53, .y=0xff, .sp=0xdf, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x4b23, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x4b24, .a=0x08, .x=0x52, .y=0xff, .sp=0xdf, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x4b23, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x4b23, .value=0x1d, .type=IO_READ},
        {.addr=0x4b24, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0153) {
    const struct CPU_State initial_cpu = {.pc=0xed15, .a=0xa4, .x=0x50, .y=0x6b, .sp=0xac, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xed15, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xed16, .a=0xa4, .x=0x4f, .y=0x6b, .sp=0xac, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xed15, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xed15, .value=0x1d, .type=IO_READ},
        {.addr=0xed16, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0154) {
    const struct CPU_State initial_cpu = {.pc=0x42e9, .a=0xb5, .x=0x39, .y=0xcf, .sp=0x85, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x42e9, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x42ea, .a=0xb5, .x=0x38, .y=0xcf, .sp=0x85, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x42e9, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x42e9, .value=0x1d, .type=IO_READ},
        {.addr=0x42ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0155) {
    const struct CPU_State initial_cpu = {.pc=0x2786, .a=0x19, .x=0xc8, .y=0x42, .sp=0xab, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x2786, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x2787, .a=0x19, .x=0xc7, .y=0x42, .sp=0xab, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x2786, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x2786, .value=0x1d, .type=IO_READ},
        {.addr=0x2787, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0156) {
    const struct CPU_State initial_cpu = {.pc=0x4151, .a=0xef, .x=0x45, .y=0x5e, .sp=0x67, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x4151, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x4152, .a=0xef, .x=0x44, .y=0x5e, .sp=0x67, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x4151, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x4151, .value=0x1d, .type=IO_READ},
        {.addr=0x4152, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0157) {
    const struct CPU_State initial_cpu = {.pc=0x0a5b, .a=0x13, .x=0x11, .y=0x35, .sp=0x67, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x0a5b, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x0a5c, .a=0x13, .x=0x10, .y=0x35, .sp=0x67, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0a5b, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x0a5b, .value=0x1d, .type=IO_READ},
        {.addr=0x0a5c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0158) {
    const struct CPU_State initial_cpu = {.pc=0x57f3, .a=0x68, .x=0x65, .y=0x5d, .sp=0xf6, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x57f3, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x57f4, .a=0x68, .x=0x64, .y=0x5d, .sp=0xf6, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x57f3, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x57f3, .value=0x1d, .type=IO_READ},
        {.addr=0x57f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0159) {
    const struct CPU_State initial_cpu = {.pc=0xc23b, .a=0x7e, .x=0x15, .y=0x19, .sp=0x2d, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0xc23b, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc23c, .a=0x7e, .x=0x14, .y=0x19, .sp=0x2d, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xc23b, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc23b, .value=0x1d, .type=IO_READ},
        {.addr=0xc23c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_015A) {
    const struct CPU_State initial_cpu = {.pc=0xd667, .a=0x1b, .x=0xcd, .y=0x0f, .sp=0xb2, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xd667, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xd668, .a=0x1b, .x=0xcc, .y=0x0f, .sp=0xb2, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xd667, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xd667, .value=0x1d, .type=IO_READ},
        {.addr=0xd668, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_015B) {
    const struct CPU_State initial_cpu = {.pc=0xdd4c, .a=0xe5, .x=0x02, .y=0xb4, .sp=0xee, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xdd4c, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xdd4d, .a=0xe5, .x=0x01, .y=0xb4, .sp=0xee, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xdd4c, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xdd4c, .value=0x1d, .type=IO_READ},
        {.addr=0xdd4d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_015C) {
    const struct CPU_State initial_cpu = {.pc=0x1018, .a=0xac, .x=0xf6, .y=0xbc, .sp=0x70, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x1018, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x1019, .a=0xac, .x=0xf5, .y=0xbc, .sp=0x70, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x1018, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x1018, .value=0x1d, .type=IO_READ},
        {.addr=0x1019, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_015D) {
    const struct CPU_State initial_cpu = {.pc=0xd61c, .a=0x6a, .x=0xbf, .y=0x09, .sp=0xa8, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xd61c, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xd61d, .a=0x6a, .x=0xbe, .y=0x09, .sp=0xa8, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xd61c, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xd61c, .value=0x1d, .type=IO_READ},
        {.addr=0xd61d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_015E) {
    const struct CPU_State initial_cpu = {.pc=0xe286, .a=0xfd, .x=0x8e, .y=0x7b, .sp=0xcd, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xe286, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xe287, .a=0xfd, .x=0x8d, .y=0x7b, .sp=0xcd, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xe286, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xe286, .value=0x1d, .type=IO_READ},
        {.addr=0xe287, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_015F) {
    const struct CPU_State initial_cpu = {.pc=0x0537, .a=0xbc, .x=0x29, .y=0x1b, .sp=0x16, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x0537, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x0538, .a=0xbc, .x=0x28, .y=0x1b, .sp=0x16, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x0537, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x0537, .value=0x1d, .type=IO_READ},
        {.addr=0x0538, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0160) {
    const struct CPU_State initial_cpu = {.pc=0x711f, .a=0x66, .x=0x83, .y=0xe4, .sp=0xfb, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x711f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x7120, .a=0x66, .x=0x82, .y=0xe4, .sp=0xfb, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x711f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x711f, .value=0x1d, .type=IO_READ},
        {.addr=0x7120, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0161) {
    const struct CPU_State initial_cpu = {.pc=0xfd84, .a=0x02, .x=0xc6, .y=0x30, .sp=0x49, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xfd84, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xfd85, .a=0x02, .x=0xc5, .y=0x30, .sp=0x49, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xfd84, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xfd84, .value=0x1d, .type=IO_READ},
        {.addr=0xfd85, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0162) {
    const struct CPU_State initial_cpu = {.pc=0x28ef, .a=0xeb, .x=0x43, .y=0x0e, .sp=0x06, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x28ef, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x28f0, .a=0xeb, .x=0x42, .y=0x0e, .sp=0x06, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x28ef, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x28ef, .value=0x1d, .type=IO_READ},
        {.addr=0x28f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0163) {
    const struct CPU_State initial_cpu = {.pc=0xe631, .a=0x2e, .x=0x8d, .y=0xe2, .sp=0x00, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xe631, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xe632, .a=0x2e, .x=0x8c, .y=0xe2, .sp=0x00, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xe631, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xe631, .value=0x1d, .type=IO_READ},
        {.addr=0xe632, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0164) {
    const struct CPU_State initial_cpu = {.pc=0x8a49, .a=0x66, .x=0x1d, .y=0xd6, .sp=0x1a, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x8a49, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x8a4a, .a=0x66, .x=0x1c, .y=0xd6, .sp=0x1a, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x8a49, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x8a49, .value=0x1d, .type=IO_READ},
        {.addr=0x8a4a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0165) {
    const struct CPU_State initial_cpu = {.pc=0x2d9c, .a=0xd6, .x=0x6c, .y=0x23, .sp=0x06, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x2d9c, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x2d9d, .a=0xd6, .x=0x6b, .y=0x23, .sp=0x06, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x2d9c, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x2d9c, .value=0x1d, .type=IO_READ},
        {.addr=0x2d9d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0166) {
    const struct CPU_State initial_cpu = {.pc=0x70e4, .a=0x20, .x=0x08, .y=0x2d, .sp=0xcb, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x70e4, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x70e5, .a=0x20, .x=0x07, .y=0x2d, .sp=0xcb, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x70e4, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x70e4, .value=0x1d, .type=IO_READ},
        {.addr=0x70e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0167) {
    const struct CPU_State initial_cpu = {.pc=0x360d, .a=0x1f, .x=0xbc, .y=0x39, .sp=0x39, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x360d, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x360e, .a=0x1f, .x=0xbb, .y=0x39, .sp=0x39, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x360d, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x360d, .value=0x1d, .type=IO_READ},
        {.addr=0x360e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0168) {
    const struct CPU_State initial_cpu = {.pc=0xc1c8, .a=0x70, .x=0xd4, .y=0xb4, .sp=0x35, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xc1c8, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc1c9, .a=0x70, .x=0xd3, .y=0xb4, .sp=0x35, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xc1c8, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc1c8, .value=0x1d, .type=IO_READ},
        {.addr=0xc1c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0169) {
    const struct CPU_State initial_cpu = {.pc=0x551f, .a=0x5e, .x=0xb9, .y=0xd3, .sp=0x15, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x551f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x5520, .a=0x5e, .x=0xb8, .y=0xd3, .sp=0x15, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x551f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x551f, .value=0x1d, .type=IO_READ},
        {.addr=0x5520, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_016A) {
    const struct CPU_State initial_cpu = {.pc=0x22d6, .a=0x37, .x=0xe9, .y=0x68, .sp=0x17, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x22d6, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x22d7, .a=0x37, .x=0xe8, .y=0x68, .sp=0x17, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x22d6, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x22d6, .value=0x1d, .type=IO_READ},
        {.addr=0x22d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_016B) {
    const struct CPU_State initial_cpu = {.pc=0x2b32, .a=0x28, .x=0x04, .y=0x64, .sp=0xf3, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x2b32, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x2b33, .a=0x28, .x=0x03, .y=0x64, .sp=0xf3, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x2b32, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x2b32, .value=0x1d, .type=IO_READ},
        {.addr=0x2b33, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_016C) {
    const struct CPU_State initial_cpu = {.pc=0x4b1a, .a=0xb8, .x=0xde, .y=0x2c, .sp=0xc7, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x4b1a, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x4b1b, .a=0xb8, .x=0xdd, .y=0x2c, .sp=0xc7, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x4b1a, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x4b1a, .value=0x1d, .type=IO_READ},
        {.addr=0x4b1b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_016D) {
    const struct CPU_State initial_cpu = {.pc=0x219a, .a=0x94, .x=0xb8, .y=0x45, .sp=0x8c, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x219a, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x219b, .a=0x94, .x=0xb7, .y=0x45, .sp=0x8c, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x219a, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x219a, .value=0x1d, .type=IO_READ},
        {.addr=0x219b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_016E) {
    const struct CPU_State initial_cpu = {.pc=0xbbed, .a=0x49, .x=0x76, .y=0x8c, .sp=0x5d, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xbbed, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xbbee, .a=0x49, .x=0x75, .y=0x8c, .sp=0x5d, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xbbed, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xbbed, .value=0x1d, .type=IO_READ},
        {.addr=0xbbee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_016F) {
    const struct CPU_State initial_cpu = {.pc=0x6d49, .a=0x63, .x=0x2e, .y=0x1d, .sp=0x53, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x6d49, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x6d4a, .a=0x63, .x=0x2d, .y=0x1d, .sp=0x53, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x6d49, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x6d49, .value=0x1d, .type=IO_READ},
        {.addr=0x6d4a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0170) {
    const struct CPU_State initial_cpu = {.pc=0xc3f9, .a=0x7c, .x=0x16, .y=0x0b, .sp=0x81, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xc3f9, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc3fa, .a=0x7c, .x=0x15, .y=0x0b, .sp=0x81, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xc3f9, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc3f9, .value=0x1d, .type=IO_READ},
        {.addr=0xc3fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0171) {
    const struct CPU_State initial_cpu = {.pc=0xf6d8, .a=0xd5, .x=0x90, .y=0x7b, .sp=0xcc, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xf6d8, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xf6d9, .a=0xd5, .x=0x8f, .y=0x7b, .sp=0xcc, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xf6d8, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xf6d8, .value=0x1d, .type=IO_READ},
        {.addr=0xf6d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0172) {
    const struct CPU_State initial_cpu = {.pc=0x0145, .a=0x85, .x=0xde, .y=0xf7, .sp=0x96, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x0146, .a=0x85, .x=0xdd, .y=0xf7, .sp=0x96, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x0145, .value=0x1d, .type=IO_READ},
        {.addr=0x0146, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0173) {
    const struct CPU_State initial_cpu = {.pc=0x1852, .a=0xff, .x=0xda, .y=0xd6, .sp=0x5e, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x1852, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x1853, .a=0xff, .x=0xd9, .y=0xd6, .sp=0x5e, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x1852, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x1852, .value=0x1d, .type=IO_READ},
        {.addr=0x1853, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0174) {
    const struct CPU_State initial_cpu = {.pc=0x2780, .a=0xce, .x=0xe5, .y=0xfb, .sp=0x43, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x2780, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x2781, .a=0xce, .x=0xe4, .y=0xfb, .sp=0x43, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x2780, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x2780, .value=0x1d, .type=IO_READ},
        {.addr=0x2781, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0175) {
    const struct CPU_State initial_cpu = {.pc=0xadb2, .a=0xd6, .x=0xe8, .y=0x64, .sp=0xa6, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xadb2, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xadb3, .a=0xd6, .x=0xe7, .y=0x64, .sp=0xa6, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xadb2, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xadb2, .value=0x1d, .type=IO_READ},
        {.addr=0xadb3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0176) {
    const struct CPU_State initial_cpu = {.pc=0x1ab4, .a=0x75, .x=0x55, .y=0x8b, .sp=0x90, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x1ab4, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x1ab5, .a=0x75, .x=0x54, .y=0x8b, .sp=0x90, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x1ab4, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x1ab4, .value=0x1d, .type=IO_READ},
        {.addr=0x1ab5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0177) {
    const struct CPU_State initial_cpu = {.pc=0xafea, .a=0x15, .x=0x1b, .y=0xf5, .sp=0x90, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xafea, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xafeb, .a=0x15, .x=0x1a, .y=0xf5, .sp=0x90, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xafea, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xafea, .value=0x1d, .type=IO_READ},
        {.addr=0xafeb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0178) {
    const struct CPU_State initial_cpu = {.pc=0x0a41, .a=0x5b, .x=0x2b, .y=0xa3, .sp=0xbb, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x0a41, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x0a42, .a=0x5b, .x=0x2a, .y=0xa3, .sp=0xbb, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0a41, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x0a41, .value=0x1d, .type=IO_READ},
        {.addr=0x0a42, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0179) {
    const struct CPU_State initial_cpu = {.pc=0xdeef, .a=0x6f, .x=0x37, .y=0xb2, .sp=0x00, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xdeef, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xdef0, .a=0x6f, .x=0x36, .y=0xb2, .sp=0x00, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xdeef, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xdeef, .value=0x1d, .type=IO_READ},
        {.addr=0xdef0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_017A) {
    const struct CPU_State initial_cpu = {.pc=0xcfab, .a=0xa5, .x=0x88, .y=0x66, .sp=0x82, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xcfab, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xcfac, .a=0xa5, .x=0x87, .y=0x66, .sp=0x82, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xcfab, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xcfab, .value=0x1d, .type=IO_READ},
        {.addr=0xcfac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_017B) {
    const struct CPU_State initial_cpu = {.pc=0xf804, .a=0xdc, .x=0x8a, .y=0x01, .sp=0x4f, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xf804, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xf805, .a=0xdc, .x=0x89, .y=0x01, .sp=0x4f, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xf804, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xf804, .value=0x1d, .type=IO_READ},
        {.addr=0xf805, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_017C) {
    const struct CPU_State initial_cpu = {.pc=0xa666, .a=0x39, .x=0x2d, .y=0xf5, .sp=0xbd, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xa666, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xa667, .a=0x39, .x=0x2c, .y=0xf5, .sp=0xbd, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xa666, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xa666, .value=0x1d, .type=IO_READ},
        {.addr=0xa667, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_017D) {
    const struct CPU_State initial_cpu = {.pc=0x21e2, .a=0x27, .x=0x9e, .y=0xd0, .sp=0x1c, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x21e2, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x21e3, .a=0x27, .x=0x9d, .y=0xd0, .sp=0x1c, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x21e2, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x21e2, .value=0x1d, .type=IO_READ},
        {.addr=0x21e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_017E) {
    const struct CPU_State initial_cpu = {.pc=0x929b, .a=0xd8, .x=0xcc, .y=0x9c, .sp=0x86, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x929b, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x929c, .a=0xd8, .x=0xcb, .y=0x9c, .sp=0x86, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x929b, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x929b, .value=0x1d, .type=IO_READ},
        {.addr=0x929c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_017F) {
    const struct CPU_State initial_cpu = {.pc=0x30aa, .a=0xda, .x=0x20, .y=0x9d, .sp=0xa3, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x30aa, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x30ab, .a=0xda, .x=0x1f, .y=0x9d, .sp=0xa3, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x30aa, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x30aa, .value=0x1d, .type=IO_READ},
        {.addr=0x30ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0180) {
    const struct CPU_State initial_cpu = {.pc=0x4af8, .a=0x94, .x=0xf8, .y=0x1b, .sp=0x0c, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x4af8, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x4af9, .a=0x94, .x=0xf7, .y=0x1b, .sp=0x0c, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x4af8, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x4af8, .value=0x1d, .type=IO_READ},
        {.addr=0x4af9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0181) {
    const struct CPU_State initial_cpu = {.pc=0x7aac, .a=0xf1, .x=0x21, .y=0x5d, .sp=0xac, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x7aac, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x7aad, .a=0xf1, .x=0x20, .y=0x5d, .sp=0xac, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x7aac, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x7aac, .value=0x1d, .type=IO_READ},
        {.addr=0x7aad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0182) {
    const struct CPU_State initial_cpu = {.pc=0x31ca, .a=0xd6, .x=0x21, .y=0x18, .sp=0x09, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x31ca, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x31cb, .a=0xd6, .x=0x20, .y=0x18, .sp=0x09, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x31ca, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x31ca, .value=0x1d, .type=IO_READ},
        {.addr=0x31cb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0183) {
    const struct CPU_State initial_cpu = {.pc=0x9d46, .a=0x8b, .x=0x1d, .y=0xb7, .sp=0x17, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x9d46, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x9d47, .a=0x8b, .x=0x1c, .y=0xb7, .sp=0x17, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x9d46, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x9d46, .value=0x1d, .type=IO_READ},
        {.addr=0x9d47, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0184) {
    const struct CPU_State initial_cpu = {.pc=0xe0a8, .a=0x06, .x=0x8f, .y=0x61, .sp=0x3e, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xe0a8, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xe0a9, .a=0x06, .x=0x8e, .y=0x61, .sp=0x3e, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xe0a8, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xe0a8, .value=0x1d, .type=IO_READ},
        {.addr=0xe0a9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0185) {
    const struct CPU_State initial_cpu = {.pc=0xe865, .a=0x08, .x=0xf8, .y=0x41, .sp=0xba, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xe865, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xe866, .a=0x08, .x=0xf7, .y=0x41, .sp=0xba, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xe865, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xe865, .value=0x1d, .type=IO_READ},
        {.addr=0xe866, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0186) {
    const struct CPU_State initial_cpu = {.pc=0x7c38, .a=0xf0, .x=0x6e, .y=0x0d, .sp=0x45, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x7c38, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x7c39, .a=0xf0, .x=0x6d, .y=0x0d, .sp=0x45, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x7c38, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x7c38, .value=0x1d, .type=IO_READ},
        {.addr=0x7c39, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0187) {
    const struct CPU_State initial_cpu = {.pc=0x4e52, .a=0x0d, .x=0x23, .y=0xed, .sp=0x89, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x4e52, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x4e53, .a=0x0d, .x=0x22, .y=0xed, .sp=0x89, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x4e52, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x4e52, .value=0x1d, .type=IO_READ},
        {.addr=0x4e53, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0188) {
    const struct CPU_State initial_cpu = {.pc=0x8d96, .a=0x9e, .x=0x3e, .y=0x77, .sp=0xe6, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x8d96, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x8d97, .a=0x9e, .x=0x3d, .y=0x77, .sp=0xe6, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x8d96, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x8d96, .value=0x1d, .type=IO_READ},
        {.addr=0x8d97, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0189) {
    const struct CPU_State initial_cpu = {.pc=0xe3a6, .a=0x68, .x=0xb4, .y=0x54, .sp=0x25, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xe3a6, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xe3a7, .a=0x68, .x=0xb3, .y=0x54, .sp=0x25, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xe3a6, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xe3a6, .value=0x1d, .type=IO_READ},
        {.addr=0xe3a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_018A) {
    const struct CPU_State initial_cpu = {.pc=0x1f9e, .a=0xcf, .x=0xb3, .y=0xb4, .sp=0x9c, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x1f9e, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x1f9f, .a=0xcf, .x=0xb2, .y=0xb4, .sp=0x9c, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x1f9e, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x1f9e, .value=0x1d, .type=IO_READ},
        {.addr=0x1f9f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_018B) {
    const struct CPU_State initial_cpu = {.pc=0xf708, .a=0xea, .x=0xce, .y=0x35, .sp=0xc4, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xf708, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xf709, .a=0xea, .x=0xcd, .y=0x35, .sp=0xc4, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xf708, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xf708, .value=0x1d, .type=IO_READ},
        {.addr=0xf709, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_018C) {
    const struct CPU_State initial_cpu = {.pc=0x0b07, .a=0x7a, .x=0x20, .y=0xea, .sp=0xc0, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x0b07, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x0b08, .a=0x7a, .x=0x1f, .y=0xea, .sp=0xc0, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x0b07, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x0b07, .value=0x1d, .type=IO_READ},
        {.addr=0x0b08, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_018D) {
    const struct CPU_State initial_cpu = {.pc=0x42c7, .a=0x14, .x=0xf5, .y=0x01, .sp=0xd5, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x42c7, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x42c8, .a=0x14, .x=0xf4, .y=0x01, .sp=0xd5, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x42c7, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x42c7, .value=0x1d, .type=IO_READ},
        {.addr=0x42c8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_018E) {
    const struct CPU_State initial_cpu = {.pc=0x077e, .a=0x75, .x=0x51, .y=0xd3, .sp=0xd5, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x077e, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x077f, .a=0x75, .x=0x50, .y=0xd3, .sp=0xd5, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x077e, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x077e, .value=0x1d, .type=IO_READ},
        {.addr=0x077f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_018F) {
    const struct CPU_State initial_cpu = {.pc=0x081f, .a=0x11, .x=0xbd, .y=0x58, .sp=0x72, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x081f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x0820, .a=0x11, .x=0xbc, .y=0x58, .sp=0x72, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x081f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x081f, .value=0x1d, .type=IO_READ},
        {.addr=0x0820, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0190) {
    const struct CPU_State initial_cpu = {.pc=0xc340, .a=0x67, .x=0x88, .y=0x8b, .sp=0x32, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xc340, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc341, .a=0x67, .x=0x87, .y=0x8b, .sp=0x32, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xc340, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc340, .value=0x1d, .type=IO_READ},
        {.addr=0xc341, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0191) {
    const struct CPU_State initial_cpu = {.pc=0x8dd1, .a=0x2b, .x=0x77, .y=0x3f, .sp=0x95, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x8dd1, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x8dd2, .a=0x2b, .x=0x76, .y=0x3f, .sp=0x95, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x8dd1, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x8dd1, .value=0x1d, .type=IO_READ},
        {.addr=0x8dd2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0192) {
    const struct CPU_State initial_cpu = {.pc=0xb33a, .a=0x30, .x=0xae, .y=0x79, .sp=0xd2, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xb33a, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xb33b, .a=0x30, .x=0xad, .y=0x79, .sp=0xd2, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xb33a, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xb33a, .value=0x1d, .type=IO_READ},
        {.addr=0xb33b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0193) {
    const struct CPU_State initial_cpu = {.pc=0x3742, .a=0xf2, .x=0x31, .y=0xe5, .sp=0xe6, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x3742, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x3743, .a=0xf2, .x=0x30, .y=0xe5, .sp=0xe6, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x3742, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x3742, .value=0x1d, .type=IO_READ},
        {.addr=0x3743, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0194) {
    const struct CPU_State initial_cpu = {.pc=0x5008, .a=0x23, .x=0x6d, .y=0x13, .sp=0x41, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x5008, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x5009, .a=0x23, .x=0x6c, .y=0x13, .sp=0x41, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x5008, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x5008, .value=0x1d, .type=IO_READ},
        {.addr=0x5009, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0195) {
    const struct CPU_State initial_cpu = {.pc=0x219e, .a=0xcd, .x=0xbb, .y=0xd2, .sp=0xd6, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x219e, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x219f, .a=0xcd, .x=0xba, .y=0xd2, .sp=0xd6, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x219e, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x219e, .value=0x1d, .type=IO_READ},
        {.addr=0x219f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0196) {
    const struct CPU_State initial_cpu = {.pc=0xdb03, .a=0x9c, .x=0xa5, .y=0x43, .sp=0x5b, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xdb03, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xdb04, .a=0x9c, .x=0xa4, .y=0x43, .sp=0x5b, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xdb03, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xdb03, .value=0x1d, .type=IO_READ},
        {.addr=0xdb04, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0197) {
    const struct CPU_State initial_cpu = {.pc=0x7fd1, .a=0xa1, .x=0x83, .y=0x39, .sp=0x70, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x7fd1, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x7fd2, .a=0xa1, .x=0x82, .y=0x39, .sp=0x70, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x7fd1, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x7fd1, .value=0x1d, .type=IO_READ},
        {.addr=0x7fd2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0198) {
    const struct CPU_State initial_cpu = {.pc=0xb3e9, .a=0xbf, .x=0x9b, .y=0x80, .sp=0x83, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xb3e9, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xb3ea, .a=0xbf, .x=0x9a, .y=0x80, .sp=0x83, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xb3e9, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xb3e9, .value=0x1d, .type=IO_READ},
        {.addr=0xb3ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0199) {
    const struct CPU_State initial_cpu = {.pc=0xc335, .a=0x49, .x=0x4e, .y=0x08, .sp=0x98, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xc335, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc336, .a=0x49, .x=0x4d, .y=0x08, .sp=0x98, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xc335, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc335, .value=0x1d, .type=IO_READ},
        {.addr=0xc336, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_019A) {
    const struct CPU_State initial_cpu = {.pc=0x6412, .a=0x50, .x=0x42, .y=0x7a, .sp=0x54, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x6412, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x6413, .a=0x50, .x=0x41, .y=0x7a, .sp=0x54, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x6412, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x6412, .value=0x1d, .type=IO_READ},
        {.addr=0x6413, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_019B) {
    const struct CPU_State initial_cpu = {.pc=0x6f19, .a=0x15, .x=0xde, .y=0xd0, .sp=0x2f, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x6f19, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x6f1a, .a=0x15, .x=0xdd, .y=0xd0, .sp=0x2f, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x6f19, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x6f19, .value=0x1d, .type=IO_READ},
        {.addr=0x6f1a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_019C) {
    const struct CPU_State initial_cpu = {.pc=0xce0c, .a=0x70, .x=0x70, .y=0xb2, .sp=0xc2, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xce0c, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xce0d, .a=0x70, .x=0x6f, .y=0xb2, .sp=0xc2, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xce0c, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xce0c, .value=0x1d, .type=IO_READ},
        {.addr=0xce0d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_019D) {
    const struct CPU_State initial_cpu = {.pc=0x7dc8, .a=0xe4, .x=0x5e, .y=0x8c, .sp=0x0d, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x7dc8, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x7dc9, .a=0xe4, .x=0x5d, .y=0x8c, .sp=0x0d, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x7dc8, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x7dc8, .value=0x1d, .type=IO_READ},
        {.addr=0x7dc9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_019E) {
    const struct CPU_State initial_cpu = {.pc=0xb2f9, .a=0xb2, .x=0xae, .y=0x1b, .sp=0xf8, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xb2f9, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xb2fa, .a=0xb2, .x=0xad, .y=0x1b, .sp=0xf8, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xb2f9, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xb2f9, .value=0x1d, .type=IO_READ},
        {.addr=0xb2fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_019F) {
    const struct CPU_State initial_cpu = {.pc=0x455e, .a=0xcf, .x=0xe3, .y=0x4d, .sp=0x60, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x455e, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x455f, .a=0xcf, .x=0xe2, .y=0x4d, .sp=0x60, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x455e, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x455e, .value=0x1d, .type=IO_READ},
        {.addr=0x455f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x7221, .a=0x11, .x=0x02, .y=0x17, .sp=0x97, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x7221, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x7222, .a=0x11, .x=0x01, .y=0x17, .sp=0x97, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x7221, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x7221, .value=0x1d, .type=IO_READ},
        {.addr=0x7222, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01A1) {
    const struct CPU_State initial_cpu = {.pc=0x2974, .a=0xf0, .x=0x00, .y=0x67, .sp=0x11, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x2974, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x2975, .a=0xf0, .x=0xff, .y=0x67, .sp=0x11, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x2974, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x2974, .value=0x1d, .type=IO_READ},
        {.addr=0x2975, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01A2) {
    const struct CPU_State initial_cpu = {.pc=0x4e97, .a=0x8e, .x=0x81, .y=0xb6, .sp=0x07, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x4e97, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x4e98, .a=0x8e, .x=0x80, .y=0xb6, .sp=0x07, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x4e97, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x4e97, .value=0x1d, .type=IO_READ},
        {.addr=0x4e98, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01A3) {
    const struct CPU_State initial_cpu = {.pc=0x620d, .a=0x93, .x=0xc4, .y=0x2d, .sp=0x97, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x620d, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x620e, .a=0x93, .x=0xc3, .y=0x2d, .sp=0x97, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x620d, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x620d, .value=0x1d, .type=IO_READ},
        {.addr=0x620e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01A4) {
    const struct CPU_State initial_cpu = {.pc=0xb6ae, .a=0x38, .x=0xbf, .y=0xec, .sp=0x27, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xb6ae, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xb6af, .a=0x38, .x=0xbe, .y=0xec, .sp=0x27, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xb6ae, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xb6ae, .value=0x1d, .type=IO_READ},
        {.addr=0xb6af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01A5) {
    const struct CPU_State initial_cpu = {.pc=0xc4eb, .a=0x06, .x=0xef, .y=0xc5, .sp=0x20, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xc4eb, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc4ec, .a=0x06, .x=0xee, .y=0xc5, .sp=0x20, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xc4eb, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc4eb, .value=0x1d, .type=IO_READ},
        {.addr=0xc4ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01A6) {
    const struct CPU_State initial_cpu = {.pc=0x2fa6, .a=0xb9, .x=0x21, .y=0xab, .sp=0xee, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x2fa6, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x2fa7, .a=0xb9, .x=0x20, .y=0xab, .sp=0xee, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x2fa6, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x2fa6, .value=0x1d, .type=IO_READ},
        {.addr=0x2fa7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01A7) {
    const struct CPU_State initial_cpu = {.pc=0x8290, .a=0xd6, .x=0x7c, .y=0xe0, .sp=0xd4, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x8290, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x8291, .a=0xd6, .x=0x7b, .y=0xe0, .sp=0xd4, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x8290, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x8290, .value=0x1d, .type=IO_READ},
        {.addr=0x8291, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01A8) {
    const struct CPU_State initial_cpu = {.pc=0xf065, .a=0xd6, .x=0x9d, .y=0xb0, .sp=0xc3, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xf065, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xf066, .a=0xd6, .x=0x9c, .y=0xb0, .sp=0xc3, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xf065, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xf065, .value=0x1d, .type=IO_READ},
        {.addr=0xf066, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01A9) {
    const struct CPU_State initial_cpu = {.pc=0xacb3, .a=0x20, .x=0x5c, .y=0xbf, .sp=0x12, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xacb3, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xacb4, .a=0x20, .x=0x5b, .y=0xbf, .sp=0x12, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xacb3, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xacb3, .value=0x1d, .type=IO_READ},
        {.addr=0xacb4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x3184, .a=0x62, .x=0xc1, .y=0x63, .sp=0x53, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x3184, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x3185, .a=0x62, .x=0xc0, .y=0x63, .sp=0x53, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x3184, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x3184, .value=0x1d, .type=IO_READ},
        {.addr=0x3185, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01AB) {
    const struct CPU_State initial_cpu = {.pc=0xb693, .a=0x32, .x=0x63, .y=0x22, .sp=0x47, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xb693, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xb694, .a=0x32, .x=0x62, .y=0x22, .sp=0x47, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xb693, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xb693, .value=0x1d, .type=IO_READ},
        {.addr=0xb694, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01AC) {
    const struct CPU_State initial_cpu = {.pc=0x8867, .a=0x4c, .x=0x6e, .y=0xbe, .sp=0x57, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x8867, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x8868, .a=0x4c, .x=0x6d, .y=0xbe, .sp=0x57, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x8867, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x8867, .value=0x1d, .type=IO_READ},
        {.addr=0x8868, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01AD) {
    const struct CPU_State initial_cpu = {.pc=0xa0e8, .a=0x75, .x=0xd6, .y=0xc6, .sp=0xeb, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xa0e8, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xa0e9, .a=0x75, .x=0xd5, .y=0xc6, .sp=0xeb, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xa0e8, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xa0e8, .value=0x1d, .type=IO_READ},
        {.addr=0xa0e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01AE) {
    const struct CPU_State initial_cpu = {.pc=0x4903, .a=0xa3, .x=0x94, .y=0x66, .sp=0x40, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x4903, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x4904, .a=0xa3, .x=0x93, .y=0x66, .sp=0x40, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x4903, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x4903, .value=0x1d, .type=IO_READ},
        {.addr=0x4904, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01AF) {
    const struct CPU_State initial_cpu = {.pc=0x5ffa, .a=0xb7, .x=0xf9, .y=0xc8, .sp=0xc9, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x5ffa, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x5ffb, .a=0xb7, .x=0xf8, .y=0xc8, .sp=0xc9, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x5ffa, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x5ffa, .value=0x1d, .type=IO_READ},
        {.addr=0x5ffb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x3ac8, .a=0x63, .x=0x33, .y=0x55, .sp=0x4a, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x3ac8, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x3ac9, .a=0x63, .x=0x32, .y=0x55, .sp=0x4a, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x3ac8, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x3ac8, .value=0x1d, .type=IO_READ},
        {.addr=0x3ac9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01B1) {
    const struct CPU_State initial_cpu = {.pc=0xc0b9, .a=0xef, .x=0x5b, .y=0x63, .sp=0xcc, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xc0b9, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc0ba, .a=0xef, .x=0x5a, .y=0x63, .sp=0xcc, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xc0b9, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc0b9, .value=0x1d, .type=IO_READ},
        {.addr=0xc0ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01B2) {
    const struct CPU_State initial_cpu = {.pc=0xbfa8, .a=0x08, .x=0xc6, .y=0xa3, .sp=0x92, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xbfa8, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xbfa9, .a=0x08, .x=0xc5, .y=0xa3, .sp=0x92, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xbfa8, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xbfa8, .value=0x1d, .type=IO_READ},
        {.addr=0xbfa9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01B3) {
    const struct CPU_State initial_cpu = {.pc=0x402a, .a=0xeb, .x=0x0d, .y=0xa8, .sp=0x89, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x402a, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x402b, .a=0xeb, .x=0x0c, .y=0xa8, .sp=0x89, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x402a, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x402a, .value=0x1d, .type=IO_READ},
        {.addr=0x402b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01B4) {
    const struct CPU_State initial_cpu = {.pc=0x1aaf, .a=0xcc, .x=0xf2, .y=0x07, .sp=0xa2, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x1aaf, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x1ab0, .a=0xcc, .x=0xf1, .y=0x07, .sp=0xa2, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x1aaf, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x1aaf, .value=0x1d, .type=IO_READ},
        {.addr=0x1ab0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01B5) {
    const struct CPU_State initial_cpu = {.pc=0x0e1d, .a=0x2a, .x=0x88, .y=0x2c, .sp=0x9b, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x0e1d, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x0e1e, .a=0x2a, .x=0x87, .y=0x2c, .sp=0x9b, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0e1d, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x0e1d, .value=0x1d, .type=IO_READ},
        {.addr=0x0e1e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01B6) {
    const struct CPU_State initial_cpu = {.pc=0xdcb5, .a=0x2c, .x=0xcf, .y=0x38, .sp=0xb4, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xdcb5, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xdcb6, .a=0x2c, .x=0xce, .y=0x38, .sp=0xb4, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xdcb5, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xdcb5, .value=0x1d, .type=IO_READ},
        {.addr=0xdcb6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01B7) {
    const struct CPU_State initial_cpu = {.pc=0xea2f, .a=0x60, .x=0x31, .y=0x92, .sp=0x96, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xea2f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xea30, .a=0x60, .x=0x30, .y=0x92, .sp=0x96, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xea2f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xea2f, .value=0x1d, .type=IO_READ},
        {.addr=0xea30, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01B8) {
    const struct CPU_State initial_cpu = {.pc=0xc84f, .a=0x7b, .x=0xf9, .y=0xf7, .sp=0x2d, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xc84f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc850, .a=0x7b, .x=0xf8, .y=0xf7, .sp=0x2d, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xc84f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc84f, .value=0x1d, .type=IO_READ},
        {.addr=0xc850, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x0178, .a=0x99, .x=0x96, .y=0x2a, .sp=0x04, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x0179, .a=0x99, .x=0x95, .y=0x2a, .sp=0x04, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x0178, .value=0x1d, .type=IO_READ},
        {.addr=0x0179, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01BA) {
    const struct CPU_State initial_cpu = {.pc=0x5021, .a=0x9d, .x=0x3f, .y=0xf7, .sp=0x31, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x5021, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x5022, .a=0x9d, .x=0x3e, .y=0xf7, .sp=0x31, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x5021, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x5021, .value=0x1d, .type=IO_READ},
        {.addr=0x5022, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01BB) {
    const struct CPU_State initial_cpu = {.pc=0xd135, .a=0xa1, .x=0x47, .y=0x2f, .sp=0xa1, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xd135, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xd136, .a=0xa1, .x=0x46, .y=0x2f, .sp=0xa1, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xd135, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xd135, .value=0x1d, .type=IO_READ},
        {.addr=0xd136, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01BC) {
    const struct CPU_State initial_cpu = {.pc=0x86cd, .a=0xa0, .x=0xf4, .y=0x57, .sp=0x44, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x86cd, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x86ce, .a=0xa0, .x=0xf3, .y=0x57, .sp=0x44, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x86cd, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x86cd, .value=0x1d, .type=IO_READ},
        {.addr=0x86ce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01BD) {
    const struct CPU_State initial_cpu = {.pc=0xb127, .a=0x81, .x=0xc6, .y=0x2a, .sp=0x39, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xb127, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xb128, .a=0x81, .x=0xc5, .y=0x2a, .sp=0x39, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xb127, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xb127, .value=0x1d, .type=IO_READ},
        {.addr=0xb128, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01BE) {
    const struct CPU_State initial_cpu = {.pc=0xd9cc, .a=0xd4, .x=0xb8, .y=0x2a, .sp=0x6f, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xd9cc, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xd9cd, .a=0xd4, .x=0xb7, .y=0x2a, .sp=0x6f, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xd9cc, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xd9cc, .value=0x1d, .type=IO_READ},
        {.addr=0xd9cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01BF) {
    const struct CPU_State initial_cpu = {.pc=0x0fc3, .a=0x46, .x=0x33, .y=0x85, .sp=0x12, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x0fc3, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x0fc4, .a=0x46, .x=0x32, .y=0x85, .sp=0x12, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x0fc3, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x0fc3, .value=0x1d, .type=IO_READ},
        {.addr=0x0fc4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01C0) {
    const struct CPU_State initial_cpu = {.pc=0xcefb, .a=0xed, .x=0x8d, .y=0xf0, .sp=0x2c, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xcefb, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xcefc, .a=0xed, .x=0x8c, .y=0xf0, .sp=0x2c, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xcefb, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xcefb, .value=0x1d, .type=IO_READ},
        {.addr=0xcefc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x56f0, .a=0x15, .x=0x97, .y=0x15, .sp=0x5f, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x56f0, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x56f1, .a=0x15, .x=0x96, .y=0x15, .sp=0x5f, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x56f0, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x56f0, .value=0x1d, .type=IO_READ},
        {.addr=0x56f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01C2) {
    const struct CPU_State initial_cpu = {.pc=0x3332, .a=0x70, .x=0xf5, .y=0x9f, .sp=0xc1, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x3332, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x3333, .a=0x70, .x=0xf4, .y=0x9f, .sp=0xc1, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x3332, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x3332, .value=0x1d, .type=IO_READ},
        {.addr=0x3333, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01C3) {
    const struct CPU_State initial_cpu = {.pc=0x5474, .a=0x2b, .x=0x70, .y=0x5f, .sp=0x33, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x5474, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x5475, .a=0x2b, .x=0x6f, .y=0x5f, .sp=0x33, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x5474, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x5474, .value=0x1d, .type=IO_READ},
        {.addr=0x5475, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x1ab7, .a=0x7b, .x=0x4d, .y=0xb3, .sp=0xb5, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x1ab7, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x1ab8, .a=0x7b, .x=0x4c, .y=0xb3, .sp=0xb5, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x1ab7, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x1ab7, .value=0x1d, .type=IO_READ},
        {.addr=0x1ab8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x8e17, .a=0x98, .x=0xc1, .y=0x40, .sp=0x04, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x8e17, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x8e18, .a=0x98, .x=0xc0, .y=0x40, .sp=0x04, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x8e17, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x8e17, .value=0x1d, .type=IO_READ},
        {.addr=0x8e18, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01C6) {
    const struct CPU_State initial_cpu = {.pc=0xbdf1, .a=0x1b, .x=0x11, .y=0x04, .sp=0x71, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xbdf1, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xbdf2, .a=0x1b, .x=0x10, .y=0x04, .sp=0x71, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xbdf1, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xbdf1, .value=0x1d, .type=IO_READ},
        {.addr=0xbdf2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01C7) {
    const struct CPU_State initial_cpu = {.pc=0x7d88, .a=0x7c, .x=0x48, .y=0x66, .sp=0x7f, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x7d88, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x7d89, .a=0x7c, .x=0x47, .y=0x66, .sp=0x7f, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x7d88, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x7d88, .value=0x1d, .type=IO_READ},
        {.addr=0x7d89, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01C8) {
    const struct CPU_State initial_cpu = {.pc=0xb657, .a=0xa4, .x=0x20, .y=0x31, .sp=0xc9, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xb657, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xb658, .a=0xa4, .x=0x1f, .y=0x31, .sp=0xc9, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xb657, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xb657, .value=0x1d, .type=IO_READ},
        {.addr=0xb658, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01C9) {
    const struct CPU_State initial_cpu = {.pc=0x9370, .a=0xcb, .x=0x86, .y=0x4b, .sp=0x62, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x9370, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x9371, .a=0xcb, .x=0x85, .y=0x4b, .sp=0x62, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x9370, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x9370, .value=0x1d, .type=IO_READ},
        {.addr=0x9371, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01CA) {
    const struct CPU_State initial_cpu = {.pc=0xd8dd, .a=0x38, .x=0xc6, .y=0xf0, .sp=0x6f, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xd8dd, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xd8de, .a=0x38, .x=0xc5, .y=0xf0, .sp=0x6f, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xd8dd, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xd8dd, .value=0x1d, .type=IO_READ},
        {.addr=0xd8de, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01CB) {
    const struct CPU_State initial_cpu = {.pc=0x66cd, .a=0x81, .x=0x57, .y=0x13, .sp=0xaf, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x66cd, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x66ce, .a=0x81, .x=0x56, .y=0x13, .sp=0xaf, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x66cd, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x66cd, .value=0x1d, .type=IO_READ},
        {.addr=0x66ce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01CC) {
    const struct CPU_State initial_cpu = {.pc=0x9f23, .a=0xd1, .x=0xac, .y=0xad, .sp=0xcd, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x9f23, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x9f24, .a=0xd1, .x=0xab, .y=0xad, .sp=0xcd, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x9f23, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x9f23, .value=0x1d, .type=IO_READ},
        {.addr=0x9f24, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01CD) {
    const struct CPU_State initial_cpu = {.pc=0xc66a, .a=0xc2, .x=0x78, .y=0xbc, .sp=0x88, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xc66a, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc66b, .a=0xc2, .x=0x77, .y=0xbc, .sp=0x88, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xc66a, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc66a, .value=0x1d, .type=IO_READ},
        {.addr=0xc66b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01CE) {
    const struct CPU_State initial_cpu = {.pc=0xc531, .a=0xd8, .x=0xd0, .y=0x07, .sp=0x05, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xc531, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc532, .a=0xd8, .x=0xcf, .y=0x07, .sp=0x05, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xc531, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc531, .value=0x1d, .type=IO_READ},
        {.addr=0xc532, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x050e, .a=0x69, .x=0x1a, .y=0xc9, .sp=0x5e, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x050e, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x050f, .a=0x69, .x=0x19, .y=0xc9, .sp=0x5e, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x050e, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x050e, .value=0x1d, .type=IO_READ},
        {.addr=0x050f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01D0) {
    const struct CPU_State initial_cpu = {.pc=0x096d, .a=0xc7, .x=0xf8, .y=0x51, .sp=0x99, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x096d, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x096e, .a=0xc7, .x=0xf7, .y=0x51, .sp=0x99, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x096d, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x096d, .value=0x1d, .type=IO_READ},
        {.addr=0x096e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01D1) {
    const struct CPU_State initial_cpu = {.pc=0x23bb, .a=0xf1, .x=0x8a, .y=0xfd, .sp=0x54, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x23bb, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x23bc, .a=0xf1, .x=0x89, .y=0xfd, .sp=0x54, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x23bb, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x23bb, .value=0x1d, .type=IO_READ},
        {.addr=0x23bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x47b0, .a=0xdc, .x=0xda, .y=0x38, .sp=0x39, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x47b0, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x47b1, .a=0xdc, .x=0xd9, .y=0x38, .sp=0x39, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x47b0, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x47b0, .value=0x1d, .type=IO_READ},
        {.addr=0x47b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01D3) {
    const struct CPU_State initial_cpu = {.pc=0x7130, .a=0xa6, .x=0x85, .y=0xf5, .sp=0xb6, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x7130, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x7131, .a=0xa6, .x=0x84, .y=0xf5, .sp=0xb6, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x7130, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x7130, .value=0x1d, .type=IO_READ},
        {.addr=0x7131, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x26ee, .a=0x48, .x=0x11, .y=0x36, .sp=0x97, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x26ee, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x26ef, .a=0x48, .x=0x10, .y=0x36, .sp=0x97, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x26ee, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x26ee, .value=0x1d, .type=IO_READ},
        {.addr=0x26ef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01D5) {
    const struct CPU_State initial_cpu = {.pc=0x8a3f, .a=0x10, .x=0x0f, .y=0x6e, .sp=0xed, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x8a3f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x8a40, .a=0x10, .x=0x0e, .y=0x6e, .sp=0xed, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x8a3f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x8a3f, .value=0x1d, .type=IO_READ},
        {.addr=0x8a40, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01D6) {
    const struct CPU_State initial_cpu = {.pc=0x1e76, .a=0x07, .x=0x6c, .y=0x13, .sp=0x46, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x1e76, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x1e77, .a=0x07, .x=0x6b, .y=0x13, .sp=0x46, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x1e76, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x1e76, .value=0x1d, .type=IO_READ},
        {.addr=0x1e77, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01D7) {
    const struct CPU_State initial_cpu = {.pc=0x1b0b, .a=0x81, .x=0xb9, .y=0x7c, .sp=0x07, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x1b0b, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x1b0c, .a=0x81, .x=0xb8, .y=0x7c, .sp=0x07, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x1b0b, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x1b0b, .value=0x1d, .type=IO_READ},
        {.addr=0x1b0c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01D8) {
    const struct CPU_State initial_cpu = {.pc=0xd5b3, .a=0x19, .x=0xfd, .y=0x46, .sp=0xa7, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xd5b3, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xd5b4, .a=0x19, .x=0xfc, .y=0x46, .sp=0xa7, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xd5b3, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xd5b3, .value=0x1d, .type=IO_READ},
        {.addr=0xd5b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01D9) {
    const struct CPU_State initial_cpu = {.pc=0x3ede, .a=0x07, .x=0xf4, .y=0x28, .sp=0x6a, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x3ede, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x3edf, .a=0x07, .x=0xf3, .y=0x28, .sp=0x6a, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x3ede, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x3ede, .value=0x1d, .type=IO_READ},
        {.addr=0x3edf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01DA) {
    const struct CPU_State initial_cpu = {.pc=0x404f, .a=0x28, .x=0x17, .y=0xd4, .sp=0x3b, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x404f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x4050, .a=0x28, .x=0x16, .y=0xd4, .sp=0x3b, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x404f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x404f, .value=0x1d, .type=IO_READ},
        {.addr=0x4050, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x3400, .a=0xb7, .x=0x41, .y=0xb9, .sp=0xd9, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x3400, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x3401, .a=0xb7, .x=0x40, .y=0xb9, .sp=0xd9, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x3400, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x3400, .value=0x1d, .type=IO_READ},
        {.addr=0x3401, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x8ba5, .a=0x9c, .x=0xdb, .y=0xd3, .sp=0x26, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x8ba5, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x8ba6, .a=0x9c, .x=0xda, .y=0xd3, .sp=0x26, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x8ba5, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x8ba5, .value=0x1d, .type=IO_READ},
        {.addr=0x8ba6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01DD) {
    const struct CPU_State initial_cpu = {.pc=0xdaa3, .a=0x85, .x=0x20, .y=0x77, .sp=0x4b, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xdaa3, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xdaa4, .a=0x85, .x=0x1f, .y=0x77, .sp=0x4b, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xdaa3, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xdaa3, .value=0x1d, .type=IO_READ},
        {.addr=0xdaa4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01DE) {
    const struct CPU_State initial_cpu = {.pc=0xa4e0, .a=0x47, .x=0x7a, .y=0xc4, .sp=0x9e, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xa4e0, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xa4e1, .a=0x47, .x=0x79, .y=0xc4, .sp=0x9e, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xa4e0, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xa4e0, .value=0x1d, .type=IO_READ},
        {.addr=0xa4e1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01DF) {
    const struct CPU_State initial_cpu = {.pc=0x3b83, .a=0xe3, .x=0x12, .y=0xfb, .sp=0xb8, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x3b83, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x3b84, .a=0xe3, .x=0x11, .y=0xfb, .sp=0xb8, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x3b83, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x3b83, .value=0x1d, .type=IO_READ},
        {.addr=0x3b84, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01E0) {
    const struct CPU_State initial_cpu = {.pc=0xc03c, .a=0xad, .x=0x04, .y=0x99, .sp=0x64, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xc03c, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc03d, .a=0xad, .x=0x03, .y=0x99, .sp=0x64, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xc03c, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc03c, .value=0x1d, .type=IO_READ},
        {.addr=0xc03d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01E1) {
    const struct CPU_State initial_cpu = {.pc=0xa725, .a=0xa6, .x=0xaa, .y=0x5c, .sp=0xbb, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xa725, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xa726, .a=0xa6, .x=0xa9, .y=0x5c, .sp=0xbb, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xa725, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xa725, .value=0x1d, .type=IO_READ},
        {.addr=0xa726, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01E2) {
    const struct CPU_State initial_cpu = {.pc=0x6977, .a=0xf3, .x=0x25, .y=0x82, .sp=0x97, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x6977, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x6978, .a=0xf3, .x=0x24, .y=0x82, .sp=0x97, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x6977, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x6977, .value=0x1d, .type=IO_READ},
        {.addr=0x6978, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01E3) {
    const struct CPU_State initial_cpu = {.pc=0x7575, .a=0xa9, .x=0x87, .y=0x49, .sp=0xff, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x7575, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x7576, .a=0xa9, .x=0x86, .y=0x49, .sp=0xff, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x7575, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x7575, .value=0x1d, .type=IO_READ},
        {.addr=0x7576, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01E4) {
    const struct CPU_State initial_cpu = {.pc=0x0d2e, .a=0xc1, .x=0xe4, .y=0x0a, .sp=0x10, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x0d2e, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x0d2f, .a=0xc1, .x=0xe3, .y=0x0a, .sp=0x10, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x0d2e, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x0d2e, .value=0x1d, .type=IO_READ},
        {.addr=0x0d2f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01E5) {
    const struct CPU_State initial_cpu = {.pc=0xd829, .a=0x4c, .x=0x97, .y=0x82, .sp=0x8e, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xd829, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xd82a, .a=0x4c, .x=0x96, .y=0x82, .sp=0x8e, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xd829, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xd829, .value=0x1d, .type=IO_READ},
        {.addr=0xd82a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01E6) {
    const struct CPU_State initial_cpu = {.pc=0x9a6a, .a=0x6c, .x=0x85, .y=0xdd, .sp=0xcb, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x9a6a, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x9a6b, .a=0x6c, .x=0x84, .y=0xdd, .sp=0xcb, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x9a6a, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x9a6a, .value=0x1d, .type=IO_READ},
        {.addr=0x9a6b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01E7) {
    const struct CPU_State initial_cpu = {.pc=0xa45b, .a=0xbb, .x=0x37, .y=0x8d, .sp=0xdb, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xa45b, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xa45c, .a=0xbb, .x=0x36, .y=0x8d, .sp=0xdb, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xa45b, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xa45b, .value=0x1d, .type=IO_READ},
        {.addr=0xa45c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01E8) {
    const struct CPU_State initial_cpu = {.pc=0xf851, .a=0x6f, .x=0xa0, .y=0xdf, .sp=0x65, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xf851, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xf852, .a=0x6f, .x=0x9f, .y=0xdf, .sp=0x65, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xf851, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xf851, .value=0x1d, .type=IO_READ},
        {.addr=0xf852, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01E9) {
    const struct CPU_State initial_cpu = {.pc=0x327b, .a=0x90, .x=0xfd, .y=0xab, .sp=0x30, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x327b, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x327c, .a=0x90, .x=0xfc, .y=0xab, .sp=0x30, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x327b, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x327b, .value=0x1d, .type=IO_READ},
        {.addr=0x327c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01EA) {
    const struct CPU_State initial_cpu = {.pc=0xdc1d, .a=0x56, .x=0xa8, .y=0xe9, .sp=0xae, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xdc1d, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xdc1e, .a=0x56, .x=0xa7, .y=0xe9, .sp=0xae, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xdc1d, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xdc1d, .value=0x1d, .type=IO_READ},
        {.addr=0xdc1e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01EB) {
    const struct CPU_State initial_cpu = {.pc=0x9ea3, .a=0x3a, .x=0x0f, .y=0x94, .sp=0x6a, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x9ea3, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x9ea4, .a=0x3a, .x=0x0e, .y=0x94, .sp=0x6a, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x9ea3, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x9ea3, .value=0x1d, .type=IO_READ},
        {.addr=0x9ea4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01EC) {
    const struct CPU_State initial_cpu = {.pc=0x7c38, .a=0xd9, .x=0xa2, .y=0xa7, .sp=0xf1, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x7c38, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x7c39, .a=0xd9, .x=0xa1, .y=0xa7, .sp=0xf1, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x7c38, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x7c38, .value=0x1d, .type=IO_READ},
        {.addr=0x7c39, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01ED) {
    const struct CPU_State initial_cpu = {.pc=0x350e, .a=0x15, .x=0x2a, .y=0x53, .sp=0x6c, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x350e, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x350f, .a=0x15, .x=0x29, .y=0x53, .sp=0x6c, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x350e, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x350e, .value=0x1d, .type=IO_READ},
        {.addr=0x350f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01EE) {
    const struct CPU_State initial_cpu = {.pc=0x6cca, .a=0x17, .x=0x4c, .y=0x36, .sp=0x8d, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x6cca, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x6ccb, .a=0x17, .x=0x4b, .y=0x36, .sp=0x8d, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x6cca, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x6cca, .value=0x1d, .type=IO_READ},
        {.addr=0x6ccb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01EF) {
    const struct CPU_State initial_cpu = {.pc=0x8c5f, .a=0x4f, .x=0x9d, .y=0x1f, .sp=0xfd, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x8c5f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x8c60, .a=0x4f, .x=0x9c, .y=0x1f, .sp=0xfd, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x8c5f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x8c5f, .value=0x1d, .type=IO_READ},
        {.addr=0x8c60, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01F0) {
    const struct CPU_State initial_cpu = {.pc=0xff9c, .a=0x3d, .x=0xdd, .y=0x43, .sp=0x5f, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xff9c, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xff9d, .a=0x3d, .x=0xdc, .y=0x43, .sp=0x5f, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xff9c, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xff9c, .value=0x1d, .type=IO_READ},
        {.addr=0xff9d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01F1) {
    const struct CPU_State initial_cpu = {.pc=0x9142, .a=0x57, .x=0x82, .y=0x9c, .sp=0x5f, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x9142, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x9143, .a=0x57, .x=0x81, .y=0x9c, .sp=0x5f, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x9142, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x9142, .value=0x1d, .type=IO_READ},
        {.addr=0x9143, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01F2) {
    const struct CPU_State initial_cpu = {.pc=0x9fa0, .a=0xbf, .x=0x96, .y=0x35, .sp=0x8e, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x9fa0, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x9fa1, .a=0xbf, .x=0x95, .y=0x35, .sp=0x8e, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x9fa0, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x9fa0, .value=0x1d, .type=IO_READ},
        {.addr=0x9fa1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01F3) {
    const struct CPU_State initial_cpu = {.pc=0x1105, .a=0x6c, .x=0x23, .y=0xaf, .sp=0xb8, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x1105, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x1106, .a=0x6c, .x=0x22, .y=0xaf, .sp=0xb8, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x1105, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x1105, .value=0x1d, .type=IO_READ},
        {.addr=0x1106, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01F4) {
    const struct CPU_State initial_cpu = {.pc=0x5f16, .a=0x09, .x=0x68, .y=0x08, .sp=0x85, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x5f16, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x5f17, .a=0x09, .x=0x67, .y=0x08, .sp=0x85, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x5f16, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x5f16, .value=0x1d, .type=IO_READ},
        {.addr=0x5f17, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01F5) {
    const struct CPU_State initial_cpu = {.pc=0x88d1, .a=0xc9, .x=0xef, .y=0xac, .sp=0xdb, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x88d1, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x88d2, .a=0xc9, .x=0xee, .y=0xac, .sp=0xdb, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x88d1, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x88d1, .value=0x1d, .type=IO_READ},
        {.addr=0x88d2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01F6) {
    const struct CPU_State initial_cpu = {.pc=0x8dd7, .a=0x86, .x=0x1b, .y=0xfe, .sp=0x9d, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x8dd7, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x8dd8, .a=0x86, .x=0x1a, .y=0xfe, .sp=0x9d, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x8dd7, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x8dd7, .value=0x1d, .type=IO_READ},
        {.addr=0x8dd8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01F7) {
    const struct CPU_State initial_cpu = {.pc=0x4583, .a=0x5d, .x=0x0e, .y=0xde, .sp=0xc6, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x4583, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x4584, .a=0x5d, .x=0x0d, .y=0xde, .sp=0xc6, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x4583, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x4583, .value=0x1d, .type=IO_READ},
        {.addr=0x4584, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01F8) {
    const struct CPU_State initial_cpu = {.pc=0xcfeb, .a=0xdc, .x=0x0a, .y=0xef, .sp=0x10, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xcfeb, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xcfec, .a=0xdc, .x=0x09, .y=0xef, .sp=0x10, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xcfeb, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xcfeb, .value=0x1d, .type=IO_READ},
        {.addr=0xcfec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01F9) {
    const struct CPU_State initial_cpu = {.pc=0xf214, .a=0xd4, .x=0xbf, .y=0x82, .sp=0x17, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xf214, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xf215, .a=0xd4, .x=0xbe, .y=0x82, .sp=0x17, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xf214, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xf214, .value=0x1d, .type=IO_READ},
        {.addr=0xf215, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01FA) {
    const struct CPU_State initial_cpu = {.pc=0x2dd5, .a=0xe5, .x=0x26, .y=0xc1, .sp=0x45, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x2dd5, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x2dd6, .a=0xe5, .x=0x25, .y=0xc1, .sp=0x45, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x2dd5, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x2dd5, .value=0x1d, .type=IO_READ},
        {.addr=0x2dd6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01FB) {
    const struct CPU_State initial_cpu = {.pc=0xca14, .a=0xa3, .x=0x56, .y=0xc7, .sp=0xa4, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xca14, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xca15, .a=0xa3, .x=0x55, .y=0xc7, .sp=0xa4, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xca14, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xca14, .value=0x1d, .type=IO_READ},
        {.addr=0xca15, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01FC) {
    const struct CPU_State initial_cpu = {.pc=0x6698, .a=0x75, .x=0x69, .y=0x28, .sp=0x52, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x6698, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x6699, .a=0x75, .x=0x68, .y=0x28, .sp=0x52, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x6698, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x6698, .value=0x1d, .type=IO_READ},
        {.addr=0x6699, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01FD) {
    const struct CPU_State initial_cpu = {.pc=0x4ff1, .a=0x45, .x=0xb2, .y=0xb6, .sp=0x95, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x4ff1, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x4ff2, .a=0x45, .x=0xb1, .y=0xb6, .sp=0x95, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x4ff1, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x4ff1, .value=0x1d, .type=IO_READ},
        {.addr=0x4ff2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01FE) {
    const struct CPU_State initial_cpu = {.pc=0x6c6e, .a=0x44, .x=0x96, .y=0x5a, .sp=0xc3, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x6c6e, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x6c6f, .a=0x44, .x=0x95, .y=0x5a, .sp=0xc3, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x6c6e, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x6c6e, .value=0x1d, .type=IO_READ},
        {.addr=0x6c6f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_01FF) {
    const struct CPU_State initial_cpu = {.pc=0xbee0, .a=0x76, .x=0x40, .y=0x50, .sp=0x79, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xbee0, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xbee1, .a=0x76, .x=0x3f, .y=0x50, .sp=0x79, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xbee0, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xbee0, .value=0x1d, .type=IO_READ},
        {.addr=0xbee1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0200) {
    const struct CPU_State initial_cpu = {.pc=0xcad7, .a=0x34, .x=0xa3, .y=0xd8, .sp=0x19, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xcad7, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xcad8, .a=0x34, .x=0xa2, .y=0xd8, .sp=0x19, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xcad7, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xcad7, .value=0x1d, .type=IO_READ},
        {.addr=0xcad8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0201) {
    const struct CPU_State initial_cpu = {.pc=0xb381, .a=0x40, .x=0xde, .y=0xe0, .sp=0xf9, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xb381, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xb382, .a=0x40, .x=0xdd, .y=0xe0, .sp=0xf9, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xb381, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xb381, .value=0x1d, .type=IO_READ},
        {.addr=0xb382, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0202) {
    const struct CPU_State initial_cpu = {.pc=0xfdd8, .a=0xa6, .x=0xa4, .y=0x7e, .sp=0xd1, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xfdd8, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xfdd9, .a=0xa6, .x=0xa3, .y=0x7e, .sp=0xd1, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xfdd8, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xfdd8, .value=0x1d, .type=IO_READ},
        {.addr=0xfdd9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0203) {
    const struct CPU_State initial_cpu = {.pc=0x9dcf, .a=0x90, .x=0x59, .y=0x3e, .sp=0xec, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x9dcf, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x9dd0, .a=0x90, .x=0x58, .y=0x3e, .sp=0xec, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x9dcf, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x9dcf, .value=0x1d, .type=IO_READ},
        {.addr=0x9dd0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0204) {
    const struct CPU_State initial_cpu = {.pc=0xc36d, .a=0x11, .x=0xfd, .y=0x3a, .sp=0xc1, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xc36d, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc36e, .a=0x11, .x=0xfc, .y=0x3a, .sp=0xc1, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xc36d, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc36d, .value=0x1d, .type=IO_READ},
        {.addr=0xc36e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0205) {
    const struct CPU_State initial_cpu = {.pc=0xbdd7, .a=0xbd, .x=0x4f, .y=0x44, .sp=0x96, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xbdd7, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xbdd8, .a=0xbd, .x=0x4e, .y=0x44, .sp=0x96, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xbdd7, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xbdd7, .value=0x1d, .type=IO_READ},
        {.addr=0xbdd8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0206) {
    const struct CPU_State initial_cpu = {.pc=0xe108, .a=0x89, .x=0xa9, .y=0x92, .sp=0x1f, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xe108, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xe109, .a=0x89, .x=0xa8, .y=0x92, .sp=0x1f, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xe108, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xe108, .value=0x1d, .type=IO_READ},
        {.addr=0xe109, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0207) {
    const struct CPU_State initial_cpu = {.pc=0x0206, .a=0xd7, .x=0x9b, .y=0xef, .sp=0x13, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x0206, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x0207, .a=0xd7, .x=0x9a, .y=0xef, .sp=0x13, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0206, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x0206, .value=0x1d, .type=IO_READ},
        {.addr=0x0207, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0208) {
    const struct CPU_State initial_cpu = {.pc=0x43cb, .a=0x00, .x=0x75, .y=0x9a, .sp=0xae, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x43cb, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x43cc, .a=0x00, .x=0x74, .y=0x9a, .sp=0xae, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x43cb, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x43cb, .value=0x1d, .type=IO_READ},
        {.addr=0x43cc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0209) {
    const struct CPU_State initial_cpu = {.pc=0x217c, .a=0x0f, .x=0x61, .y=0x3c, .sp=0xb8, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x217c, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x217d, .a=0x0f, .x=0x60, .y=0x3c, .sp=0xb8, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x217c, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x217c, .value=0x1d, .type=IO_READ},
        {.addr=0x217d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_020A) {
    const struct CPU_State initial_cpu = {.pc=0x12a2, .a=0x46, .x=0xcf, .y=0xf4, .sp=0xcb, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x12a2, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x12a3, .a=0x46, .x=0xce, .y=0xf4, .sp=0xcb, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x12a2, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x12a2, .value=0x1d, .type=IO_READ},
        {.addr=0x12a3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_020B) {
    const struct CPU_State initial_cpu = {.pc=0x5d2f, .a=0xb4, .x=0xc8, .y=0xce, .sp=0x22, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x5d2f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x5d30, .a=0xb4, .x=0xc7, .y=0xce, .sp=0x22, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x5d2f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x5d2f, .value=0x1d, .type=IO_READ},
        {.addr=0x5d30, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_020C) {
    const struct CPU_State initial_cpu = {.pc=0x29a5, .a=0xb0, .x=0xb6, .y=0x39, .sp=0x28, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x29a5, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x29a6, .a=0xb0, .x=0xb5, .y=0x39, .sp=0x28, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x29a5, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x29a5, .value=0x1d, .type=IO_READ},
        {.addr=0x29a6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_020D) {
    const struct CPU_State initial_cpu = {.pc=0x0488, .a=0x4e, .x=0x56, .y=0x7b, .sp=0xfa, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x0488, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x0489, .a=0x4e, .x=0x55, .y=0x7b, .sp=0xfa, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0488, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x0488, .value=0x1d, .type=IO_READ},
        {.addr=0x0489, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_020E) {
    const struct CPU_State initial_cpu = {.pc=0x948b, .a=0x82, .x=0x0a, .y=0xf4, .sp=0xcc, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x948b, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x948c, .a=0x82, .x=0x09, .y=0xf4, .sp=0xcc, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x948b, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x948b, .value=0x1d, .type=IO_READ},
        {.addr=0x948c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_020F) {
    const struct CPU_State initial_cpu = {.pc=0x19d6, .a=0x8e, .x=0x56, .y=0x63, .sp=0x17, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x19d6, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x19d7, .a=0x8e, .x=0x55, .y=0x63, .sp=0x17, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x19d6, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x19d6, .value=0x1d, .type=IO_READ},
        {.addr=0x19d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0210) {
    const struct CPU_State initial_cpu = {.pc=0x488e, .a=0xca, .x=0x6f, .y=0xe1, .sp=0x8a, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x488e, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x488f, .a=0xca, .x=0x6e, .y=0xe1, .sp=0x8a, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x488e, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x488e, .value=0x1d, .type=IO_READ},
        {.addr=0x488f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0211) {
    const struct CPU_State initial_cpu = {.pc=0xcbc5, .a=0xc6, .x=0x97, .y=0x7f, .sp=0xb8, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xcbc5, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xcbc6, .a=0xc6, .x=0x96, .y=0x7f, .sp=0xb8, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xcbc5, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xcbc5, .value=0x1d, .type=IO_READ},
        {.addr=0xcbc6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0212) {
    const struct CPU_State initial_cpu = {.pc=0x4678, .a=0x41, .x=0x4e, .y=0x21, .sp=0x7c, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x4678, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x4679, .a=0x41, .x=0x4d, .y=0x21, .sp=0x7c, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x4678, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x4678, .value=0x1d, .type=IO_READ},
        {.addr=0x4679, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0213) {
    const struct CPU_State initial_cpu = {.pc=0x0edc, .a=0x59, .x=0xb3, .y=0xf7, .sp=0x3b, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x0edc, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x0edd, .a=0x59, .x=0xb2, .y=0xf7, .sp=0x3b, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0edc, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x0edc, .value=0x1d, .type=IO_READ},
        {.addr=0x0edd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0214) {
    const struct CPU_State initial_cpu = {.pc=0x407b, .a=0x67, .x=0x68, .y=0xa2, .sp=0xd6, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x407b, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x407c, .a=0x67, .x=0x67, .y=0xa2, .sp=0xd6, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x407b, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x407b, .value=0x1d, .type=IO_READ},
        {.addr=0x407c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0215) {
    const struct CPU_State initial_cpu = {.pc=0x07cd, .a=0xd9, .x=0x4f, .y=0x31, .sp=0x50, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x07cd, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x07ce, .a=0xd9, .x=0x4e, .y=0x31, .sp=0x50, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x07cd, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x07cd, .value=0x1d, .type=IO_READ},
        {.addr=0x07ce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0216) {
    const struct CPU_State initial_cpu = {.pc=0x0d5b, .a=0x3c, .x=0xe3, .y=0x33, .sp=0xe8, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x0d5b, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x0d5c, .a=0x3c, .x=0xe2, .y=0x33, .sp=0xe8, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x0d5b, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x0d5b, .value=0x1d, .type=IO_READ},
        {.addr=0x0d5c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0217) {
    const struct CPU_State initial_cpu = {.pc=0x36b9, .a=0x25, .x=0x92, .y=0xe0, .sp=0x0c, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x36b9, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x36ba, .a=0x25, .x=0x91, .y=0xe0, .sp=0x0c, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x36b9, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x36b9, .value=0x1d, .type=IO_READ},
        {.addr=0x36ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0218) {
    const struct CPU_State initial_cpu = {.pc=0x1af5, .a=0x1b, .x=0x22, .y=0x1a, .sp=0x3d, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x1af5, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x1af6, .a=0x1b, .x=0x21, .y=0x1a, .sp=0x3d, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x1af5, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x1af5, .value=0x1d, .type=IO_READ},
        {.addr=0x1af6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0219) {
    const struct CPU_State initial_cpu = {.pc=0x7b65, .a=0x4d, .x=0x03, .y=0x9d, .sp=0x96, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x7b65, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x7b66, .a=0x4d, .x=0x02, .y=0x9d, .sp=0x96, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x7b65, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x7b65, .value=0x1d, .type=IO_READ},
        {.addr=0x7b66, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_021A) {
    const struct CPU_State initial_cpu = {.pc=0xd7aa, .a=0x5b, .x=0xc0, .y=0x2a, .sp=0xd8, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xd7aa, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xd7ab, .a=0x5b, .x=0xbf, .y=0x2a, .sp=0xd8, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xd7aa, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xd7aa, .value=0x1d, .type=IO_READ},
        {.addr=0xd7ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_021B) {
    const struct CPU_State initial_cpu = {.pc=0xb890, .a=0x40, .x=0xda, .y=0xfc, .sp=0xd5, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xb890, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xb891, .a=0x40, .x=0xd9, .y=0xfc, .sp=0xd5, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xb890, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xb890, .value=0x1d, .type=IO_READ},
        {.addr=0xb891, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_021C) {
    const struct CPU_State initial_cpu = {.pc=0x6c2b, .a=0xde, .x=0x08, .y=0x6c, .sp=0x5f, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x6c2b, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x6c2c, .a=0xde, .x=0x07, .y=0x6c, .sp=0x5f, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x6c2b, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x6c2b, .value=0x1d, .type=IO_READ},
        {.addr=0x6c2c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_021D) {
    const struct CPU_State initial_cpu = {.pc=0x9d54, .a=0xa1, .x=0x77, .y=0x2e, .sp=0xc4, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x9d54, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x9d55, .a=0xa1, .x=0x76, .y=0x2e, .sp=0xc4, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x9d54, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x9d54, .value=0x1d, .type=IO_READ},
        {.addr=0x9d55, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_021E) {
    const struct CPU_State initial_cpu = {.pc=0xa13e, .a=0x70, .x=0x5f, .y=0x46, .sp=0xd5, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xa13e, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xa13f, .a=0x70, .x=0x5e, .y=0x46, .sp=0xd5, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xa13e, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xa13e, .value=0x1d, .type=IO_READ},
        {.addr=0xa13f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_021F) {
    const struct CPU_State initial_cpu = {.pc=0x0334, .a=0x10, .x=0x82, .y=0xa5, .sp=0xc2, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x0334, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x0335, .a=0x10, .x=0x81, .y=0xa5, .sp=0xc2, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x0334, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x0334, .value=0x1d, .type=IO_READ},
        {.addr=0x0335, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0220) {
    const struct CPU_State initial_cpu = {.pc=0xe6fb, .a=0xe4, .x=0xc9, .y=0xf9, .sp=0x9f, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xe6fb, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xe6fc, .a=0xe4, .x=0xc8, .y=0xf9, .sp=0x9f, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xe6fb, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xe6fb, .value=0x1d, .type=IO_READ},
        {.addr=0xe6fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0221) {
    const struct CPU_State initial_cpu = {.pc=0x6476, .a=0x12, .x=0x13, .y=0x90, .sp=0xe8, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x6476, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x6477, .a=0x12, .x=0x12, .y=0x90, .sp=0xe8, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x6476, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x6476, .value=0x1d, .type=IO_READ},
        {.addr=0x6477, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0222) {
    const struct CPU_State initial_cpu = {.pc=0x614e, .a=0xa4, .x=0x6b, .y=0xb7, .sp=0xd3, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x614e, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x614f, .a=0xa4, .x=0x6a, .y=0xb7, .sp=0xd3, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x614e, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x614e, .value=0x1d, .type=IO_READ},
        {.addr=0x614f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0223) {
    const struct CPU_State initial_cpu = {.pc=0xce56, .a=0x1a, .x=0x03, .y=0x3b, .sp=0xbd, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xce56, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xce57, .a=0x1a, .x=0x02, .y=0x3b, .sp=0xbd, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xce56, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xce56, .value=0x1d, .type=IO_READ},
        {.addr=0xce57, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0224) {
    const struct CPU_State initial_cpu = {.pc=0x6790, .a=0xff, .x=0xf1, .y=0xca, .sp=0x6a, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x6790, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x6791, .a=0xff, .x=0xf0, .y=0xca, .sp=0x6a, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x6790, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x6790, .value=0x1d, .type=IO_READ},
        {.addr=0x6791, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0225) {
    const struct CPU_State initial_cpu = {.pc=0x59c3, .a=0x11, .x=0x8c, .y=0x66, .sp=0xd2, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x59c3, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x59c4, .a=0x11, .x=0x8b, .y=0x66, .sp=0xd2, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x59c3, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x59c3, .value=0x1d, .type=IO_READ},
        {.addr=0x59c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0226) {
    const struct CPU_State initial_cpu = {.pc=0xb605, .a=0x08, .x=0x51, .y=0xac, .sp=0x4e, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xb605, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xb606, .a=0x08, .x=0x50, .y=0xac, .sp=0x4e, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xb605, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xb605, .value=0x1d, .type=IO_READ},
        {.addr=0xb606, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0227) {
    const struct CPU_State initial_cpu = {.pc=0xc467, .a=0x6b, .x=0x76, .y=0x31, .sp=0x0c, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xc467, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc468, .a=0x6b, .x=0x75, .y=0x31, .sp=0x0c, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xc467, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc467, .value=0x1d, .type=IO_READ},
        {.addr=0xc468, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0228) {
    const struct CPU_State initial_cpu = {.pc=0x7a9b, .a=0xcc, .x=0xab, .y=0xe8, .sp=0xfa, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x7a9b, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x7a9c, .a=0xcc, .x=0xaa, .y=0xe8, .sp=0xfa, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x7a9b, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x7a9b, .value=0x1d, .type=IO_READ},
        {.addr=0x7a9c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0229) {
    const struct CPU_State initial_cpu = {.pc=0xad4e, .a=0x1f, .x=0x6b, .y=0x3b, .sp=0x1d, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xad4e, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xad4f, .a=0x1f, .x=0x6a, .y=0x3b, .sp=0x1d, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xad4e, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xad4e, .value=0x1d, .type=IO_READ},
        {.addr=0xad4f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_022A) {
    const struct CPU_State initial_cpu = {.pc=0x83cb, .a=0x38, .x=0xbe, .y=0x28, .sp=0xa2, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x83cb, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x83cc, .a=0x38, .x=0xbd, .y=0x28, .sp=0xa2, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x83cb, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x83cb, .value=0x1d, .type=IO_READ},
        {.addr=0x83cc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_022B) {
    const struct CPU_State initial_cpu = {.pc=0x588d, .a=0xf8, .x=0xc9, .y=0x3e, .sp=0xb2, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x588d, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x588e, .a=0xf8, .x=0xc8, .y=0x3e, .sp=0xb2, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x588d, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x588d, .value=0x1d, .type=IO_READ},
        {.addr=0x588e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_022C) {
    const struct CPU_State initial_cpu = {.pc=0xf7a7, .a=0xa0, .x=0xa5, .y=0x7d, .sp=0xd5, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xf7a7, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xf7a8, .a=0xa0, .x=0xa4, .y=0x7d, .sp=0xd5, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xf7a7, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xf7a7, .value=0x1d, .type=IO_READ},
        {.addr=0xf7a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_022D) {
    const struct CPU_State initial_cpu = {.pc=0x8d66, .a=0x37, .x=0x55, .y=0x80, .sp=0xdc, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x8d66, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x8d67, .a=0x37, .x=0x54, .y=0x80, .sp=0xdc, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x8d66, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x8d66, .value=0x1d, .type=IO_READ},
        {.addr=0x8d67, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_022E) {
    const struct CPU_State initial_cpu = {.pc=0xbba8, .a=0xb6, .x=0x98, .y=0x1b, .sp=0xbd, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xbba8, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xbba9, .a=0xb6, .x=0x97, .y=0x1b, .sp=0xbd, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xbba8, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xbba8, .value=0x1d, .type=IO_READ},
        {.addr=0xbba9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_022F) {
    const struct CPU_State initial_cpu = {.pc=0x80fd, .a=0xbf, .x=0xe1, .y=0x17, .sp=0xb4, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x80fd, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x80fe, .a=0xbf, .x=0xe0, .y=0x17, .sp=0xb4, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x80fd, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x80fd, .value=0x1d, .type=IO_READ},
        {.addr=0x80fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0230) {
    const struct CPU_State initial_cpu = {.pc=0x3474, .a=0xde, .x=0xb3, .y=0x2e, .sp=0x91, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x3474, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x3475, .a=0xde, .x=0xb2, .y=0x2e, .sp=0x91, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x3474, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x3474, .value=0x1d, .type=IO_READ},
        {.addr=0x3475, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0231) {
    const struct CPU_State initial_cpu = {.pc=0x19c0, .a=0x32, .x=0x0f, .y=0xf9, .sp=0x0c, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x19c0, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x19c1, .a=0x32, .x=0x0e, .y=0xf9, .sp=0x0c, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x19c0, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x19c0, .value=0x1d, .type=IO_READ},
        {.addr=0x19c1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0232) {
    const struct CPU_State initial_cpu = {.pc=0xc221, .a=0x84, .x=0xe0, .y=0x16, .sp=0xef, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xc221, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc222, .a=0x84, .x=0xdf, .y=0x16, .sp=0xef, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xc221, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc221, .value=0x1d, .type=IO_READ},
        {.addr=0xc222, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0233) {
    const struct CPU_State initial_cpu = {.pc=0xd41a, .a=0xea, .x=0xc8, .y=0x72, .sp=0x1f, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xd41a, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xd41b, .a=0xea, .x=0xc7, .y=0x72, .sp=0x1f, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xd41a, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xd41a, .value=0x1d, .type=IO_READ},
        {.addr=0xd41b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0234) {
    const struct CPU_State initial_cpu = {.pc=0xc606, .a=0x40, .x=0xb6, .y=0xa7, .sp=0x9e, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xc606, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc607, .a=0x40, .x=0xb5, .y=0xa7, .sp=0x9e, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xc606, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc606, .value=0x1d, .type=IO_READ},
        {.addr=0xc607, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0235) {
    const struct CPU_State initial_cpu = {.pc=0x5961, .a=0x25, .x=0xb6, .y=0x74, .sp=0x12, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x5961, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x5962, .a=0x25, .x=0xb5, .y=0x74, .sp=0x12, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x5961, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x5961, .value=0x1d, .type=IO_READ},
        {.addr=0x5962, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0236) {
    const struct CPU_State initial_cpu = {.pc=0x1274, .a=0x34, .x=0x04, .y=0xc7, .sp=0x93, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x1274, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x1275, .a=0x34, .x=0x03, .y=0xc7, .sp=0x93, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x1274, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x1274, .value=0x1d, .type=IO_READ},
        {.addr=0x1275, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0237) {
    const struct CPU_State initial_cpu = {.pc=0x0568, .a=0x7f, .x=0xdf, .y=0x15, .sp=0xdf, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x0568, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x0569, .a=0x7f, .x=0xde, .y=0x15, .sp=0xdf, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x0568, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x0568, .value=0x1d, .type=IO_READ},
        {.addr=0x0569, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0238) {
    const struct CPU_State initial_cpu = {.pc=0x5565, .a=0x94, .x=0x58, .y=0x21, .sp=0x74, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x5565, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x5566, .a=0x94, .x=0x57, .y=0x21, .sp=0x74, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x5565, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x5565, .value=0x1d, .type=IO_READ},
        {.addr=0x5566, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0239) {
    const struct CPU_State initial_cpu = {.pc=0xaf1d, .a=0x8c, .x=0x60, .y=0xeb, .sp=0xeb, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xaf1d, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xaf1e, .a=0x8c, .x=0x5f, .y=0xeb, .sp=0xeb, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xaf1d, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xaf1d, .value=0x1d, .type=IO_READ},
        {.addr=0xaf1e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_023A) {
    const struct CPU_State initial_cpu = {.pc=0x04db, .a=0xd5, .x=0x93, .y=0xa4, .sp=0x8d, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x04db, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x04dc, .a=0xd5, .x=0x92, .y=0xa4, .sp=0x8d, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x04db, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x04db, .value=0x1d, .type=IO_READ},
        {.addr=0x04dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_023B) {
    const struct CPU_State initial_cpu = {.pc=0x8b6a, .a=0x10, .x=0x64, .y=0x34, .sp=0x96, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x8b6a, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x8b6b, .a=0x10, .x=0x63, .y=0x34, .sp=0x96, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x8b6a, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x8b6a, .value=0x1d, .type=IO_READ},
        {.addr=0x8b6b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_023C) {
    const struct CPU_State initial_cpu = {.pc=0xdd5c, .a=0x61, .x=0xd8, .y=0xa4, .sp=0x7e, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xdd5c, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xdd5d, .a=0x61, .x=0xd7, .y=0xa4, .sp=0x7e, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xdd5c, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xdd5c, .value=0x1d, .type=IO_READ},
        {.addr=0xdd5d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_023D) {
    const struct CPU_State initial_cpu = {.pc=0x6de1, .a=0x56, .x=0x30, .y=0xc0, .sp=0xb6, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x6de1, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x6de2, .a=0x56, .x=0x2f, .y=0xc0, .sp=0xb6, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x6de1, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x6de1, .value=0x1d, .type=IO_READ},
        {.addr=0x6de2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_023E) {
    const struct CPU_State initial_cpu = {.pc=0xae1d, .a=0x48, .x=0xb0, .y=0x17, .sp=0xd5, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xae1d, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xae1e, .a=0x48, .x=0xaf, .y=0x17, .sp=0xd5, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xae1d, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xae1d, .value=0x1d, .type=IO_READ},
        {.addr=0xae1e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_023F) {
    const struct CPU_State initial_cpu = {.pc=0x07e9, .a=0x2d, .x=0x9d, .y=0x7d, .sp=0x57, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x07e9, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x07ea, .a=0x2d, .x=0x9c, .y=0x7d, .sp=0x57, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x07e9, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x07e9, .value=0x1d, .type=IO_READ},
        {.addr=0x07ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0240) {
    const struct CPU_State initial_cpu = {.pc=0x4fa7, .a=0x1c, .x=0xb5, .y=0x22, .sp=0x90, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x4fa7, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x4fa8, .a=0x1c, .x=0xb4, .y=0x22, .sp=0x90, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x4fa7, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x4fa7, .value=0x1d, .type=IO_READ},
        {.addr=0x4fa8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0241) {
    const struct CPU_State initial_cpu = {.pc=0x9f49, .a=0x9d, .x=0x57, .y=0x46, .sp=0xe9, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x9f49, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x9f4a, .a=0x9d, .x=0x56, .y=0x46, .sp=0xe9, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x9f49, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x9f49, .value=0x1d, .type=IO_READ},
        {.addr=0x9f4a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0242) {
    const struct CPU_State initial_cpu = {.pc=0x4f3d, .a=0x0f, .x=0x59, .y=0x7a, .sp=0x0b, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x4f3d, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x4f3e, .a=0x0f, .x=0x58, .y=0x7a, .sp=0x0b, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x4f3d, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x4f3d, .value=0x1d, .type=IO_READ},
        {.addr=0x4f3e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0243) {
    const struct CPU_State initial_cpu = {.pc=0xd1f1, .a=0x34, .x=0x2b, .y=0xbd, .sp=0x08, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xd1f1, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xd1f2, .a=0x34, .x=0x2a, .y=0xbd, .sp=0x08, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xd1f1, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xd1f1, .value=0x1d, .type=IO_READ},
        {.addr=0xd1f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0244) {
    const struct CPU_State initial_cpu = {.pc=0x9376, .a=0x7a, .x=0xc0, .y=0x8f, .sp=0x1c, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x9376, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x9377, .a=0x7a, .x=0xbf, .y=0x8f, .sp=0x1c, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x9376, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x9376, .value=0x1d, .type=IO_READ},
        {.addr=0x9377, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0245) {
    const struct CPU_State initial_cpu = {.pc=0xef45, .a=0x90, .x=0x21, .y=0xa3, .sp=0xee, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xef45, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xef46, .a=0x90, .x=0x20, .y=0xa3, .sp=0xee, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xef45, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xef45, .value=0x1d, .type=IO_READ},
        {.addr=0xef46, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0246) {
    const struct CPU_State initial_cpu = {.pc=0x66d3, .a=0x93, .x=0x37, .y=0x82, .sp=0xe3, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x66d3, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x66d4, .a=0x93, .x=0x36, .y=0x82, .sp=0xe3, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x66d3, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x66d3, .value=0x1d, .type=IO_READ},
        {.addr=0x66d4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0247) {
    const struct CPU_State initial_cpu = {.pc=0x9d29, .a=0x9d, .x=0x3c, .y=0x3f, .sp=0x01, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x9d29, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x9d2a, .a=0x9d, .x=0x3b, .y=0x3f, .sp=0x01, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x9d29, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x9d29, .value=0x1d, .type=IO_READ},
        {.addr=0x9d2a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0248) {
    const struct CPU_State initial_cpu = {.pc=0xd9b8, .a=0x49, .x=0x12, .y=0x93, .sp=0xc9, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0xd9b8, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xd9b9, .a=0x49, .x=0x11, .y=0x93, .sp=0xc9, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xd9b8, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xd9b8, .value=0x1d, .type=IO_READ},
        {.addr=0xd9b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0249) {
    const struct CPU_State initial_cpu = {.pc=0x2375, .a=0x80, .x=0x59, .y=0xbe, .sp=0x31, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x2375, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x2376, .a=0x80, .x=0x58, .y=0xbe, .sp=0x31, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x2375, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x2375, .value=0x1d, .type=IO_READ},
        {.addr=0x2376, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_024A) {
    const struct CPU_State initial_cpu = {.pc=0xbe4b, .a=0x02, .x=0xe9, .y=0xf9, .sp=0x62, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xbe4b, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xbe4c, .a=0x02, .x=0xe8, .y=0xf9, .sp=0x62, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xbe4b, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xbe4b, .value=0x1d, .type=IO_READ},
        {.addr=0xbe4c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_024B) {
    const struct CPU_State initial_cpu = {.pc=0x4e3c, .a=0x9c, .x=0x19, .y=0xd5, .sp=0xa1, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x4e3c, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x4e3d, .a=0x9c, .x=0x18, .y=0xd5, .sp=0xa1, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x4e3c, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x4e3c, .value=0x1d, .type=IO_READ},
        {.addr=0x4e3d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_024C) {
    const struct CPU_State initial_cpu = {.pc=0x9b24, .a=0x04, .x=0x6c, .y=0x9e, .sp=0x19, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x9b24, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x9b25, .a=0x04, .x=0x6b, .y=0x9e, .sp=0x19, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x9b24, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x9b24, .value=0x1d, .type=IO_READ},
        {.addr=0x9b25, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_024D) {
    const struct CPU_State initial_cpu = {.pc=0xf1d7, .a=0xb9, .x=0xd0, .y=0x06, .sp=0x2d, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xf1d7, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xf1d8, .a=0xb9, .x=0xcf, .y=0x06, .sp=0x2d, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xf1d7, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xf1d7, .value=0x1d, .type=IO_READ},
        {.addr=0xf1d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_024E) {
    const struct CPU_State initial_cpu = {.pc=0xec4a, .a=0x35, .x=0x2e, .y=0x2e, .sp=0x7e, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xec4a, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xec4b, .a=0x35, .x=0x2d, .y=0x2e, .sp=0x7e, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xec4a, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xec4a, .value=0x1d, .type=IO_READ},
        {.addr=0xec4b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_024F) {
    const struct CPU_State initial_cpu = {.pc=0x42bb, .a=0x63, .x=0x54, .y=0x94, .sp=0x33, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x42bb, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x42bc, .a=0x63, .x=0x53, .y=0x94, .sp=0x33, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x42bb, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x42bb, .value=0x1d, .type=IO_READ},
        {.addr=0x42bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0250) {
    const struct CPU_State initial_cpu = {.pc=0xf41c, .a=0x73, .x=0x9e, .y=0xcb, .sp=0xc6, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xf41c, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xf41d, .a=0x73, .x=0x9d, .y=0xcb, .sp=0xc6, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xf41c, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xf41c, .value=0x1d, .type=IO_READ},
        {.addr=0xf41d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0251) {
    const struct CPU_State initial_cpu = {.pc=0x27a7, .a=0x50, .x=0xdc, .y=0x40, .sp=0x3f, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x27a7, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x27a8, .a=0x50, .x=0xdb, .y=0x40, .sp=0x3f, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x27a7, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x27a7, .value=0x1d, .type=IO_READ},
        {.addr=0x27a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0252) {
    const struct CPU_State initial_cpu = {.pc=0xc91b, .a=0x52, .x=0x9b, .y=0xfb, .sp=0xe7, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xc91b, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc91c, .a=0x52, .x=0x9a, .y=0xfb, .sp=0xe7, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xc91b, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc91b, .value=0x1d, .type=IO_READ},
        {.addr=0xc91c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0253) {
    const struct CPU_State initial_cpu = {.pc=0x1e69, .a=0xcc, .x=0x51, .y=0x26, .sp=0x6f, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x1e69, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x1e6a, .a=0xcc, .x=0x50, .y=0x26, .sp=0x6f, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x1e69, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x1e69, .value=0x1d, .type=IO_READ},
        {.addr=0x1e6a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0254) {
    const struct CPU_State initial_cpu = {.pc=0x47ae, .a=0x35, .x=0x50, .y=0xba, .sp=0x90, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x47ae, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x47af, .a=0x35, .x=0x4f, .y=0xba, .sp=0x90, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x47ae, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x47ae, .value=0x1d, .type=IO_READ},
        {.addr=0x47af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0255) {
    const struct CPU_State initial_cpu = {.pc=0xeaaa, .a=0x6e, .x=0xcd, .y=0xd8, .sp=0xec, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xeaaa, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xeaab, .a=0x6e, .x=0xcc, .y=0xd8, .sp=0xec, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xeaaa, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xeaaa, .value=0x1d, .type=IO_READ},
        {.addr=0xeaab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0256) {
    const struct CPU_State initial_cpu = {.pc=0x11d9, .a=0x7a, .x=0x6d, .y=0xf5, .sp=0x6b, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x11d9, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x11da, .a=0x7a, .x=0x6c, .y=0xf5, .sp=0x6b, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x11d9, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x11d9, .value=0x1d, .type=IO_READ},
        {.addr=0x11da, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0257) {
    const struct CPU_State initial_cpu = {.pc=0xdb64, .a=0xbc, .x=0xbe, .y=0x70, .sp=0x73, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xdb64, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xdb65, .a=0xbc, .x=0xbd, .y=0x70, .sp=0x73, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xdb64, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xdb64, .value=0x1d, .type=IO_READ},
        {.addr=0xdb65, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0258) {
    const struct CPU_State initial_cpu = {.pc=0x67de, .a=0x4c, .x=0x9f, .y=0x79, .sp=0x49, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x67de, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x67df, .a=0x4c, .x=0x9e, .y=0x79, .sp=0x49, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x67de, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x67de, .value=0x1d, .type=IO_READ},
        {.addr=0x67df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0259) {
    const struct CPU_State initial_cpu = {.pc=0xcd1d, .a=0x67, .x=0xac, .y=0x1f, .sp=0x0f, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xcd1d, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xcd1e, .a=0x67, .x=0xab, .y=0x1f, .sp=0x0f, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xcd1d, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xcd1d, .value=0x1d, .type=IO_READ},
        {.addr=0xcd1e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_025A) {
    const struct CPU_State initial_cpu = {.pc=0xd479, .a=0xf7, .x=0x61, .y=0xe8, .sp=0x44, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xd479, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xd47a, .a=0xf7, .x=0x60, .y=0xe8, .sp=0x44, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xd479, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xd479, .value=0x1d, .type=IO_READ},
        {.addr=0xd47a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_025B) {
    const struct CPU_State initial_cpu = {.pc=0xd440, .a=0xcc, .x=0x9a, .y=0x2a, .sp=0x79, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xd440, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xd441, .a=0xcc, .x=0x99, .y=0x2a, .sp=0x79, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xd440, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xd440, .value=0x1d, .type=IO_READ},
        {.addr=0xd441, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_025C) {
    const struct CPU_State initial_cpu = {.pc=0x710e, .a=0xf8, .x=0x48, .y=0x97, .sp=0x3f, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x710e, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x710f, .a=0xf8, .x=0x47, .y=0x97, .sp=0x3f, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x710e, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x710e, .value=0x1d, .type=IO_READ},
        {.addr=0x710f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_025D) {
    const struct CPU_State initial_cpu = {.pc=0xf55a, .a=0x11, .x=0xb6, .y=0x9b, .sp=0x18, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xf55a, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xf55b, .a=0x11, .x=0xb5, .y=0x9b, .sp=0x18, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xf55a, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xf55a, .value=0x1d, .type=IO_READ},
        {.addr=0xf55b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_025E) {
    const struct CPU_State initial_cpu = {.pc=0x4de8, .a=0x1b, .x=0x20, .y=0xd6, .sp=0x8f, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x4de8, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x4de9, .a=0x1b, .x=0x1f, .y=0xd6, .sp=0x8f, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x4de8, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x4de8, .value=0x1d, .type=IO_READ},
        {.addr=0x4de9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_025F) {
    const struct CPU_State initial_cpu = {.pc=0x003b, .a=0x9e, .x=0x75, .y=0x16, .sp=0x5b, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x003b, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x003c, .a=0x9e, .x=0x74, .y=0x16, .sp=0x5b, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x003b, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x003b, .value=0x1d, .type=IO_READ},
        {.addr=0x003c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0260) {
    const struct CPU_State initial_cpu = {.pc=0x32ff, .a=0xe8, .x=0x2c, .y=0xda, .sp=0xb5, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x32ff, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x3300, .a=0xe8, .x=0x2b, .y=0xda, .sp=0xb5, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x32ff, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x32ff, .value=0x1d, .type=IO_READ},
        {.addr=0x3300, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0261) {
    const struct CPU_State initial_cpu = {.pc=0x2b19, .a=0xdd, .x=0x57, .y=0xf3, .sp=0x90, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x2b19, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x2b1a, .a=0xdd, .x=0x56, .y=0xf3, .sp=0x90, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x2b19, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x2b19, .value=0x1d, .type=IO_READ},
        {.addr=0x2b1a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0262) {
    const struct CPU_State initial_cpu = {.pc=0x93c9, .a=0x7c, .x=0x20, .y=0x0b, .sp=0x09, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x93c9, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x93ca, .a=0x7c, .x=0x1f, .y=0x0b, .sp=0x09, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x93c9, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x93c9, .value=0x1d, .type=IO_READ},
        {.addr=0x93ca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0263) {
    const struct CPU_State initial_cpu = {.pc=0x20e4, .a=0xf7, .x=0x46, .y=0x73, .sp=0x31, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x20e4, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x20e5, .a=0xf7, .x=0x45, .y=0x73, .sp=0x31, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x20e4, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x20e4, .value=0x1d, .type=IO_READ},
        {.addr=0x20e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0264) {
    const struct CPU_State initial_cpu = {.pc=0xc9b7, .a=0xf3, .x=0x85, .y=0x99, .sp=0x9c, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xc9b7, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc9b8, .a=0xf3, .x=0x84, .y=0x99, .sp=0x9c, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xc9b7, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc9b7, .value=0x1d, .type=IO_READ},
        {.addr=0xc9b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0265) {
    const struct CPU_State initial_cpu = {.pc=0xbfa1, .a=0xf3, .x=0x14, .y=0xf5, .sp=0x6a, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xbfa1, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xbfa2, .a=0xf3, .x=0x13, .y=0xf5, .sp=0x6a, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xbfa1, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xbfa1, .value=0x1d, .type=IO_READ},
        {.addr=0xbfa2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0266) {
    const struct CPU_State initial_cpu = {.pc=0x63c7, .a=0xb6, .x=0x10, .y=0x5d, .sp=0xaa, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x63c7, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x63c8, .a=0xb6, .x=0x0f, .y=0x5d, .sp=0xaa, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x63c7, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x63c7, .value=0x1d, .type=IO_READ},
        {.addr=0x63c8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0267) {
    const struct CPU_State initial_cpu = {.pc=0x0fe1, .a=0xde, .x=0xc9, .y=0x5d, .sp=0xc3, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x0fe1, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x0fe2, .a=0xde, .x=0xc8, .y=0x5d, .sp=0xc3, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x0fe1, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x0fe1, .value=0x1d, .type=IO_READ},
        {.addr=0x0fe2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0268) {
    const struct CPU_State initial_cpu = {.pc=0xfc82, .a=0x04, .x=0x86, .y=0xd7, .sp=0x2a, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xfc82, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xfc83, .a=0x04, .x=0x85, .y=0xd7, .sp=0x2a, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xfc82, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xfc82, .value=0x1d, .type=IO_READ},
        {.addr=0xfc83, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0269) {
    const struct CPU_State initial_cpu = {.pc=0x1799, .a=0xee, .x=0xcc, .y=0xf6, .sp=0x7d, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x1799, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x179a, .a=0xee, .x=0xcb, .y=0xf6, .sp=0x7d, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x1799, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x1799, .value=0x1d, .type=IO_READ},
        {.addr=0x179a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_026A) {
    const struct CPU_State initial_cpu = {.pc=0x3776, .a=0x7e, .x=0x66, .y=0x27, .sp=0xac, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x3776, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x3777, .a=0x7e, .x=0x65, .y=0x27, .sp=0xac, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x3776, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x3776, .value=0x1d, .type=IO_READ},
        {.addr=0x3777, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_026B) {
    const struct CPU_State initial_cpu = {.pc=0xc2a1, .a=0x61, .x=0xf6, .y=0x9d, .sp=0x26, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xc2a1, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc2a2, .a=0x61, .x=0xf5, .y=0x9d, .sp=0x26, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xc2a1, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc2a1, .value=0x1d, .type=IO_READ},
        {.addr=0xc2a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_026C) {
    const struct CPU_State initial_cpu = {.pc=0x4591, .a=0x4e, .x=0x0b, .y=0xd1, .sp=0xe1, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x4591, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x4592, .a=0x4e, .x=0x0a, .y=0xd1, .sp=0xe1, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x4591, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x4591, .value=0x1d, .type=IO_READ},
        {.addr=0x4592, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_026D) {
    const struct CPU_State initial_cpu = {.pc=0x3a58, .a=0x70, .x=0xb7, .y=0x06, .sp=0x3b, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x3a58, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x3a59, .a=0x70, .x=0xb6, .y=0x06, .sp=0x3b, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x3a58, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x3a58, .value=0x1d, .type=IO_READ},
        {.addr=0x3a59, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_026E) {
    const struct CPU_State initial_cpu = {.pc=0x3885, .a=0x7d, .x=0x16, .y=0xd9, .sp=0x82, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x3885, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x3886, .a=0x7d, .x=0x15, .y=0xd9, .sp=0x82, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x3885, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x3885, .value=0x1d, .type=IO_READ},
        {.addr=0x3886, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_026F) {
    const struct CPU_State initial_cpu = {.pc=0xedad, .a=0x4b, .x=0xfd, .y=0x47, .sp=0x61, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xedad, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xedae, .a=0x4b, .x=0xfc, .y=0x47, .sp=0x61, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xedad, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xedad, .value=0x1d, .type=IO_READ},
        {.addr=0xedae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0270) {
    const struct CPU_State initial_cpu = {.pc=0xe8c1, .a=0x8d, .x=0x98, .y=0xf1, .sp=0x04, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xe8c1, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xe8c2, .a=0x8d, .x=0x97, .y=0xf1, .sp=0x04, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xe8c1, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xe8c1, .value=0x1d, .type=IO_READ},
        {.addr=0xe8c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0271) {
    const struct CPU_State initial_cpu = {.pc=0x37b0, .a=0xbb, .x=0xf4, .y=0xf5, .sp=0x87, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x37b0, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x37b1, .a=0xbb, .x=0xf3, .y=0xf5, .sp=0x87, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x37b0, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x37b0, .value=0x1d, .type=IO_READ},
        {.addr=0x37b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0272) {
    const struct CPU_State initial_cpu = {.pc=0xbf5a, .a=0xd1, .x=0xfb, .y=0x15, .sp=0x13, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xbf5a, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xbf5b, .a=0xd1, .x=0xfa, .y=0x15, .sp=0x13, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xbf5a, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xbf5a, .value=0x1d, .type=IO_READ},
        {.addr=0xbf5b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0273) {
    const struct CPU_State initial_cpu = {.pc=0x236a, .a=0x75, .x=0xda, .y=0xee, .sp=0xc8, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x236a, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x236b, .a=0x75, .x=0xd9, .y=0xee, .sp=0xc8, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x236a, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x236a, .value=0x1d, .type=IO_READ},
        {.addr=0x236b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0274) {
    const struct CPU_State initial_cpu = {.pc=0x4e7f, .a=0x5a, .x=0x4b, .y=0xc6, .sp=0xb1, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x4e7f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x4e80, .a=0x5a, .x=0x4a, .y=0xc6, .sp=0xb1, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x4e7f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x4e7f, .value=0x1d, .type=IO_READ},
        {.addr=0x4e80, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0275) {
    const struct CPU_State initial_cpu = {.pc=0x86cb, .a=0xbf, .x=0xca, .y=0xdf, .sp=0x88, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x86cb, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x86cc, .a=0xbf, .x=0xc9, .y=0xdf, .sp=0x88, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x86cb, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x86cb, .value=0x1d, .type=IO_READ},
        {.addr=0x86cc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0276) {
    const struct CPU_State initial_cpu = {.pc=0x14ac, .a=0x7b, .x=0xd4, .y=0xfd, .sp=0x5b, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x14ac, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x14ad, .a=0x7b, .x=0xd3, .y=0xfd, .sp=0x5b, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x14ac, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x14ac, .value=0x1d, .type=IO_READ},
        {.addr=0x14ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0277) {
    const struct CPU_State initial_cpu = {.pc=0x92f5, .a=0xc6, .x=0x2a, .y=0x6c, .sp=0xfe, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x92f5, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x92f6, .a=0xc6, .x=0x29, .y=0x6c, .sp=0xfe, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x92f5, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x92f5, .value=0x1d, .type=IO_READ},
        {.addr=0x92f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0278) {
    const struct CPU_State initial_cpu = {.pc=0xa578, .a=0xf4, .x=0x4a, .y=0x2d, .sp=0xb3, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xa578, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xa579, .a=0xf4, .x=0x49, .y=0x2d, .sp=0xb3, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xa578, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xa578, .value=0x1d, .type=IO_READ},
        {.addr=0xa579, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0279) {
    const struct CPU_State initial_cpu = {.pc=0xc177, .a=0x0a, .x=0xaa, .y=0x3e, .sp=0xed, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xc177, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc178, .a=0x0a, .x=0xa9, .y=0x3e, .sp=0xed, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xc177, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc177, .value=0x1d, .type=IO_READ},
        {.addr=0xc178, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_027A) {
    const struct CPU_State initial_cpu = {.pc=0x6b7c, .a=0xf2, .x=0xdb, .y=0xf2, .sp=0x28, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x6b7c, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x6b7d, .a=0xf2, .x=0xda, .y=0xf2, .sp=0x28, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x6b7c, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x6b7c, .value=0x1d, .type=IO_READ},
        {.addr=0x6b7d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_027B) {
    const struct CPU_State initial_cpu = {.pc=0x0415, .a=0x3b, .x=0x6b, .y=0xb3, .sp=0xad, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x0415, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x0416, .a=0x3b, .x=0x6a, .y=0xb3, .sp=0xad, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0415, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x0415, .value=0x1d, .type=IO_READ},
        {.addr=0x0416, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_027C) {
    const struct CPU_State initial_cpu = {.pc=0xf339, .a=0xf7, .x=0x20, .y=0x7a, .sp=0x04, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xf339, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xf33a, .a=0xf7, .x=0x1f, .y=0x7a, .sp=0x04, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xf339, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xf339, .value=0x1d, .type=IO_READ},
        {.addr=0xf33a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_027D) {
    const struct CPU_State initial_cpu = {.pc=0x0628, .a=0x85, .x=0x4b, .y=0x20, .sp=0x13, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x0628, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x0629, .a=0x85, .x=0x4a, .y=0x20, .sp=0x13, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0628, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x0628, .value=0x1d, .type=IO_READ},
        {.addr=0x0629, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_027E) {
    const struct CPU_State initial_cpu = {.pc=0x2763, .a=0x0e, .x=0x33, .y=0x95, .sp=0x8b, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x2763, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x2764, .a=0x0e, .x=0x32, .y=0x95, .sp=0x8b, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x2763, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x2763, .value=0x1d, .type=IO_READ},
        {.addr=0x2764, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_027F) {
    const struct CPU_State initial_cpu = {.pc=0x2607, .a=0x44, .x=0xe8, .y=0x93, .sp=0xf6, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x2607, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x2608, .a=0x44, .x=0xe7, .y=0x93, .sp=0xf6, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x2607, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x2607, .value=0x1d, .type=IO_READ},
        {.addr=0x2608, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0280) {
    const struct CPU_State initial_cpu = {.pc=0xbd91, .a=0x5d, .x=0x83, .y=0xea, .sp=0x49, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xbd91, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xbd92, .a=0x5d, .x=0x82, .y=0xea, .sp=0x49, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xbd91, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xbd91, .value=0x1d, .type=IO_READ},
        {.addr=0xbd92, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0281) {
    const struct CPU_State initial_cpu = {.pc=0x596f, .a=0xd5, .x=0xf3, .y=0xd7, .sp=0x9f, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x596f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x5970, .a=0xd5, .x=0xf2, .y=0xd7, .sp=0x9f, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x596f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x596f, .value=0x1d, .type=IO_READ},
        {.addr=0x5970, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0282) {
    const struct CPU_State initial_cpu = {.pc=0x3c0e, .a=0x2f, .x=0xba, .y=0xf7, .sp=0x4b, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x3c0e, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x3c0f, .a=0x2f, .x=0xb9, .y=0xf7, .sp=0x4b, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x3c0e, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x3c0e, .value=0x1d, .type=IO_READ},
        {.addr=0x3c0f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0283) {
    const struct CPU_State initial_cpu = {.pc=0xb2bc, .a=0x45, .x=0x88, .y=0x3e, .sp=0x27, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xb2bc, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xb2bd, .a=0x45, .x=0x87, .y=0x3e, .sp=0x27, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xb2bc, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xb2bc, .value=0x1d, .type=IO_READ},
        {.addr=0xb2bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0284) {
    const struct CPU_State initial_cpu = {.pc=0xcddb, .a=0x22, .x=0x8e, .y=0x4f, .sp=0x51, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xcddb, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xcddc, .a=0x22, .x=0x8d, .y=0x4f, .sp=0x51, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xcddb, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xcddb, .value=0x1d, .type=IO_READ},
        {.addr=0xcddc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0285) {
    const struct CPU_State initial_cpu = {.pc=0x594c, .a=0x47, .x=0x37, .y=0xa3, .sp=0xd1, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x594c, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x594d, .a=0x47, .x=0x36, .y=0xa3, .sp=0xd1, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x594c, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x594c, .value=0x1d, .type=IO_READ},
        {.addr=0x594d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0286) {
    const struct CPU_State initial_cpu = {.pc=0xdb40, .a=0x72, .x=0x72, .y=0x5b, .sp=0x4b, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xdb40, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xdb41, .a=0x72, .x=0x71, .y=0x5b, .sp=0x4b, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xdb40, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xdb40, .value=0x1d, .type=IO_READ},
        {.addr=0xdb41, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0287) {
    const struct CPU_State initial_cpu = {.pc=0x6e80, .a=0x06, .x=0x51, .y=0x21, .sp=0x78, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x6e80, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x6e81, .a=0x06, .x=0x50, .y=0x21, .sp=0x78, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x6e80, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x6e80, .value=0x1d, .type=IO_READ},
        {.addr=0x6e81, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0288) {
    const struct CPU_State initial_cpu = {.pc=0x6bd9, .a=0x8b, .x=0x63, .y=0xcc, .sp=0x9c, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x6bd9, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x6bda, .a=0x8b, .x=0x62, .y=0xcc, .sp=0x9c, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x6bd9, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x6bd9, .value=0x1d, .type=IO_READ},
        {.addr=0x6bda, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0289) {
    const struct CPU_State initial_cpu = {.pc=0x9577, .a=0xac, .x=0x67, .y=0xac, .sp=0x36, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x9577, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x9578, .a=0xac, .x=0x66, .y=0xac, .sp=0x36, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x9577, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x9577, .value=0x1d, .type=IO_READ},
        {.addr=0x9578, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_028A) {
    const struct CPU_State initial_cpu = {.pc=0x83ec, .a=0xc5, .x=0x2e, .y=0xbf, .sp=0x4d, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x83ec, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x83ed, .a=0xc5, .x=0x2d, .y=0xbf, .sp=0x4d, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x83ec, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x83ec, .value=0x1d, .type=IO_READ},
        {.addr=0x83ed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_028B) {
    const struct CPU_State initial_cpu = {.pc=0xbabe, .a=0xb8, .x=0xe2, .y=0x1c, .sp=0x08, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xbabe, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xbabf, .a=0xb8, .x=0xe1, .y=0x1c, .sp=0x08, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xbabe, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xbabe, .value=0x1d, .type=IO_READ},
        {.addr=0xbabf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_028C) {
    const struct CPU_State initial_cpu = {.pc=0x306b, .a=0x4e, .x=0xd7, .y=0x06, .sp=0xdd, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x306b, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x306c, .a=0x4e, .x=0xd6, .y=0x06, .sp=0xdd, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x306b, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x306b, .value=0x1d, .type=IO_READ},
        {.addr=0x306c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_028D) {
    const struct CPU_State initial_cpu = {.pc=0xc61f, .a=0x21, .x=0xed, .y=0xd7, .sp=0x15, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xc61f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc620, .a=0x21, .x=0xec, .y=0xd7, .sp=0x15, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xc61f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc61f, .value=0x1d, .type=IO_READ},
        {.addr=0xc620, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_028E) {
    const struct CPU_State initial_cpu = {.pc=0xad95, .a=0x03, .x=0x9a, .y=0xe4, .sp=0xc0, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xad95, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xad96, .a=0x03, .x=0x99, .y=0xe4, .sp=0xc0, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xad95, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xad95, .value=0x1d, .type=IO_READ},
        {.addr=0xad96, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_028F) {
    const struct CPU_State initial_cpu = {.pc=0xc920, .a=0xd9, .x=0x0f, .y=0x6d, .sp=0x50, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xc920, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc921, .a=0xd9, .x=0x0e, .y=0x6d, .sp=0x50, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xc920, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc920, .value=0x1d, .type=IO_READ},
        {.addr=0xc921, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0290) {
    const struct CPU_State initial_cpu = {.pc=0xf002, .a=0xc7, .x=0x90, .y=0xc1, .sp=0x33, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xf002, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xf003, .a=0xc7, .x=0x8f, .y=0xc1, .sp=0x33, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xf002, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xf002, .value=0x1d, .type=IO_READ},
        {.addr=0xf003, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0291) {
    const struct CPU_State initial_cpu = {.pc=0x1172, .a=0xdb, .x=0xb0, .y=0xf5, .sp=0xae, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x1172, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x1173, .a=0xdb, .x=0xaf, .y=0xf5, .sp=0xae, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x1172, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x1172, .value=0x1d, .type=IO_READ},
        {.addr=0x1173, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0292) {
    const struct CPU_State initial_cpu = {.pc=0x64e6, .a=0x24, .x=0x0d, .y=0x4f, .sp=0x06, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x64e6, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x64e7, .a=0x24, .x=0x0c, .y=0x4f, .sp=0x06, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x64e6, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x64e6, .value=0x1d, .type=IO_READ},
        {.addr=0x64e7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0293) {
    const struct CPU_State initial_cpu = {.pc=0x69f2, .a=0x1c, .x=0x11, .y=0xd9, .sp=0x07, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x69f2, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x69f3, .a=0x1c, .x=0x10, .y=0xd9, .sp=0x07, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x69f2, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x69f2, .value=0x1d, .type=IO_READ},
        {.addr=0x69f3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0294) {
    const struct CPU_State initial_cpu = {.pc=0x9de6, .a=0x83, .x=0x05, .y=0x39, .sp=0xf7, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x9de6, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x9de7, .a=0x83, .x=0x04, .y=0x39, .sp=0xf7, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x9de6, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x9de6, .value=0x1d, .type=IO_READ},
        {.addr=0x9de7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0295) {
    const struct CPU_State initial_cpu = {.pc=0xc66b, .a=0x99, .x=0xe4, .y=0x0a, .sp=0x48, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xc66b, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc66c, .a=0x99, .x=0xe3, .y=0x0a, .sp=0x48, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xc66b, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc66b, .value=0x1d, .type=IO_READ},
        {.addr=0xc66c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0296) {
    const struct CPU_State initial_cpu = {.pc=0x56f0, .a=0xc8, .x=0x69, .y=0xd5, .sp=0x6d, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x56f0, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x56f1, .a=0xc8, .x=0x68, .y=0xd5, .sp=0x6d, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x56f0, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x56f0, .value=0x1d, .type=IO_READ},
        {.addr=0x56f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0297) {
    const struct CPU_State initial_cpu = {.pc=0x7db6, .a=0xa9, .x=0x7e, .y=0xe8, .sp=0xa7, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x7db6, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x7db7, .a=0xa9, .x=0x7d, .y=0xe8, .sp=0xa7, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x7db6, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x7db6, .value=0x1d, .type=IO_READ},
        {.addr=0x7db7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0298) {
    const struct CPU_State initial_cpu = {.pc=0x878b, .a=0x73, .x=0x14, .y=0xab, .sp=0x90, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x878b, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x878c, .a=0x73, .x=0x13, .y=0xab, .sp=0x90, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x878b, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x878b, .value=0x1d, .type=IO_READ},
        {.addr=0x878c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0299) {
    const struct CPU_State initial_cpu = {.pc=0xc708, .a=0xd6, .x=0x48, .y=0x5c, .sp=0x04, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xc708, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc709, .a=0xd6, .x=0x47, .y=0x5c, .sp=0x04, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xc708, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc708, .value=0x1d, .type=IO_READ},
        {.addr=0xc709, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_029A) {
    const struct CPU_State initial_cpu = {.pc=0x097c, .a=0x6b, .x=0xe3, .y=0xb5, .sp=0x31, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x097c, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x097d, .a=0x6b, .x=0xe2, .y=0xb5, .sp=0x31, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x097c, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x097c, .value=0x1d, .type=IO_READ},
        {.addr=0x097d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_029B) {
    const struct CPU_State initial_cpu = {.pc=0x7854, .a=0xad, .x=0x0d, .y=0xed, .sp=0xc1, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x7854, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x7855, .a=0xad, .x=0x0c, .y=0xed, .sp=0xc1, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x7854, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x7854, .value=0x1d, .type=IO_READ},
        {.addr=0x7855, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_029C) {
    const struct CPU_State initial_cpu = {.pc=0x9f04, .a=0x6e, .x=0x8d, .y=0x0a, .sp=0x2f, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x9f04, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x9f05, .a=0x6e, .x=0x8c, .y=0x0a, .sp=0x2f, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x9f04, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x9f04, .value=0x1d, .type=IO_READ},
        {.addr=0x9f05, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_029D) {
    const struct CPU_State initial_cpu = {.pc=0xa220, .a=0xb6, .x=0xb1, .y=0xff, .sp=0x5b, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xa220, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xa221, .a=0xb6, .x=0xb0, .y=0xff, .sp=0x5b, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xa220, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xa220, .value=0x1d, .type=IO_READ},
        {.addr=0xa221, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_029E) {
    const struct CPU_State initial_cpu = {.pc=0x3275, .a=0x1b, .x=0x6a, .y=0x17, .sp=0x08, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x3275, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x3276, .a=0x1b, .x=0x69, .y=0x17, .sp=0x08, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x3275, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x3275, .value=0x1d, .type=IO_READ},
        {.addr=0x3276, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_029F) {
    const struct CPU_State initial_cpu = {.pc=0x9d2d, .a=0x69, .x=0x90, .y=0xfa, .sp=0xe4, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x9d2d, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x9d2e, .a=0x69, .x=0x8f, .y=0xfa, .sp=0xe4, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x9d2d, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x9d2d, .value=0x1d, .type=IO_READ},
        {.addr=0x9d2e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02A0) {
    const struct CPU_State initial_cpu = {.pc=0x2f71, .a=0x5a, .x=0x89, .y=0x48, .sp=0x67, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x2f71, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x2f72, .a=0x5a, .x=0x88, .y=0x48, .sp=0x67, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x2f71, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x2f71, .value=0x1d, .type=IO_READ},
        {.addr=0x2f72, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02A1) {
    const struct CPU_State initial_cpu = {.pc=0xa04d, .a=0xf3, .x=0x91, .y=0x09, .sp=0x65, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xa04d, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xa04e, .a=0xf3, .x=0x90, .y=0x09, .sp=0x65, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xa04d, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xa04d, .value=0x1d, .type=IO_READ},
        {.addr=0xa04e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02A2) {
    const struct CPU_State initial_cpu = {.pc=0x55ca, .a=0x18, .x=0x7b, .y=0xc3, .sp=0x1a, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x55ca, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x55cb, .a=0x18, .x=0x7a, .y=0xc3, .sp=0x1a, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x55ca, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x55ca, .value=0x1d, .type=IO_READ},
        {.addr=0x55cb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02A3) {
    const struct CPU_State initial_cpu = {.pc=0x1101, .a=0x36, .x=0x54, .y=0x1a, .sp=0x65, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x1101, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x1102, .a=0x36, .x=0x53, .y=0x1a, .sp=0x65, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x1101, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x1101, .value=0x1d, .type=IO_READ},
        {.addr=0x1102, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02A4) {
    const struct CPU_State initial_cpu = {.pc=0x67fe, .a=0x23, .x=0x77, .y=0xe2, .sp=0x14, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x67fe, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x67ff, .a=0x23, .x=0x76, .y=0xe2, .sp=0x14, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x67fe, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x67fe, .value=0x1d, .type=IO_READ},
        {.addr=0x67ff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x872d, .a=0xc8, .x=0xc5, .y=0x5c, .sp=0x17, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x872d, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x872e, .a=0xc8, .x=0xc4, .y=0x5c, .sp=0x17, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x872d, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x872d, .value=0x1d, .type=IO_READ},
        {.addr=0x872e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02A6) {
    const struct CPU_State initial_cpu = {.pc=0x14bc, .a=0x4f, .x=0xa3, .y=0x33, .sp=0x27, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x14bc, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x14bd, .a=0x4f, .x=0xa2, .y=0x33, .sp=0x27, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x14bc, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x14bc, .value=0x1d, .type=IO_READ},
        {.addr=0x14bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02A7) {
    const struct CPU_State initial_cpu = {.pc=0xedf1, .a=0x1a, .x=0x54, .y=0xd1, .sp=0xcf, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xedf1, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xedf2, .a=0x1a, .x=0x53, .y=0xd1, .sp=0xcf, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xedf1, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xedf1, .value=0x1d, .type=IO_READ},
        {.addr=0xedf2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02A8) {
    const struct CPU_State initial_cpu = {.pc=0x72ff, .a=0x3f, .x=0x31, .y=0x59, .sp=0xb3, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x72ff, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x7300, .a=0x3f, .x=0x30, .y=0x59, .sp=0xb3, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x72ff, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x72ff, .value=0x1d, .type=IO_READ},
        {.addr=0x7300, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02A9) {
    const struct CPU_State initial_cpu = {.pc=0xe080, .a=0xd9, .x=0x58, .y=0xd8, .sp=0x0e, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xe080, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xe081, .a=0xd9, .x=0x57, .y=0xd8, .sp=0x0e, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xe080, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xe080, .value=0x1d, .type=IO_READ},
        {.addr=0xe081, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02AA) {
    const struct CPU_State initial_cpu = {.pc=0xea78, .a=0x0d, .x=0x4e, .y=0x37, .sp=0xf1, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xea78, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xea79, .a=0x0d, .x=0x4d, .y=0x37, .sp=0xf1, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xea78, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xea78, .value=0x1d, .type=IO_READ},
        {.addr=0xea79, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02AB) {
    const struct CPU_State initial_cpu = {.pc=0x7541, .a=0xeb, .x=0x00, .y=0x5d, .sp=0x57, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x7541, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x7542, .a=0xeb, .x=0xff, .y=0x5d, .sp=0x57, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x7541, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x7541, .value=0x1d, .type=IO_READ},
        {.addr=0x7542, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02AC) {
    const struct CPU_State initial_cpu = {.pc=0xc7d6, .a=0x57, .x=0x0c, .y=0x27, .sp=0xce, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xc7d6, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc7d7, .a=0x57, .x=0x0b, .y=0x27, .sp=0xce, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xc7d6, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc7d6, .value=0x1d, .type=IO_READ},
        {.addr=0xc7d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02AD) {
    const struct CPU_State initial_cpu = {.pc=0x442f, .a=0xa4, .x=0x39, .y=0xc9, .sp=0x05, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x442f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x4430, .a=0xa4, .x=0x38, .y=0xc9, .sp=0x05, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x442f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x442f, .value=0x1d, .type=IO_READ},
        {.addr=0x4430, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02AE) {
    const struct CPU_State initial_cpu = {.pc=0x0dc4, .a=0xdc, .x=0x8b, .y=0x9b, .sp=0xc4, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x0dc4, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x0dc5, .a=0xdc, .x=0x8a, .y=0x9b, .sp=0xc4, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0dc4, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x0dc4, .value=0x1d, .type=IO_READ},
        {.addr=0x0dc5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x7c10, .a=0x92, .x=0x0a, .y=0xbd, .sp=0x52, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x7c10, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x7c11, .a=0x92, .x=0x09, .y=0xbd, .sp=0x52, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x7c10, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x7c10, .value=0x1d, .type=IO_READ},
        {.addr=0x7c11, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02B0) {
    const struct CPU_State initial_cpu = {.pc=0xb58e, .a=0xc9, .x=0xb6, .y=0x9a, .sp=0xd6, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xb58e, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xb58f, .a=0xc9, .x=0xb5, .y=0x9a, .sp=0xd6, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xb58e, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xb58e, .value=0x1d, .type=IO_READ},
        {.addr=0xb58f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02B1) {
    const struct CPU_State initial_cpu = {.pc=0xea65, .a=0x21, .x=0x8e, .y=0x59, .sp=0xf8, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xea65, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xea66, .a=0x21, .x=0x8d, .y=0x59, .sp=0xf8, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xea65, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xea65, .value=0x1d, .type=IO_READ},
        {.addr=0xea66, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02B2) {
    const struct CPU_State initial_cpu = {.pc=0x69e2, .a=0xa6, .x=0x78, .y=0x2a, .sp=0xe8, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x69e2, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x69e3, .a=0xa6, .x=0x77, .y=0x2a, .sp=0xe8, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x69e2, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x69e2, .value=0x1d, .type=IO_READ},
        {.addr=0x69e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02B3) {
    const struct CPU_State initial_cpu = {.pc=0xc5d4, .a=0x92, .x=0xc9, .y=0x97, .sp=0x62, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xc5d4, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc5d5, .a=0x92, .x=0xc8, .y=0x97, .sp=0x62, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xc5d4, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc5d4, .value=0x1d, .type=IO_READ},
        {.addr=0xc5d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02B4) {
    const struct CPU_State initial_cpu = {.pc=0xb70a, .a=0x70, .x=0x62, .y=0x51, .sp=0xc2, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xb70a, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xb70b, .a=0x70, .x=0x61, .y=0x51, .sp=0xc2, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xb70a, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xb70a, .value=0x1d, .type=IO_READ},
        {.addr=0xb70b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02B5) {
    const struct CPU_State initial_cpu = {.pc=0x18f1, .a=0x67, .x=0xe8, .y=0xd5, .sp=0x70, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x18f1, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x18f2, .a=0x67, .x=0xe7, .y=0xd5, .sp=0x70, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x18f1, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x18f1, .value=0x1d, .type=IO_READ},
        {.addr=0x18f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02B6) {
    const struct CPU_State initial_cpu = {.pc=0xc8c9, .a=0xb9, .x=0xb0, .y=0x78, .sp=0x34, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xc8c9, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc8ca, .a=0xb9, .x=0xaf, .y=0x78, .sp=0x34, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xc8c9, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc8c9, .value=0x1d, .type=IO_READ},
        {.addr=0xc8ca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02B7) {
    const struct CPU_State initial_cpu = {.pc=0x8d2c, .a=0x6d, .x=0xac, .y=0x11, .sp=0xea, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x8d2c, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x8d2d, .a=0x6d, .x=0xab, .y=0x11, .sp=0xea, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x8d2c, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x8d2c, .value=0x1d, .type=IO_READ},
        {.addr=0x8d2d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02B8) {
    const struct CPU_State initial_cpu = {.pc=0x29b8, .a=0xeb, .x=0x5a, .y=0x27, .sp=0xa6, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x29b8, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x29b9, .a=0xeb, .x=0x59, .y=0x27, .sp=0xa6, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x29b8, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x29b8, .value=0x1d, .type=IO_READ},
        {.addr=0x29b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02B9) {
    const struct CPU_State initial_cpu = {.pc=0x29cd, .a=0xd5, .x=0x29, .y=0x6e, .sp=0x5e, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x29cd, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x29ce, .a=0xd5, .x=0x28, .y=0x6e, .sp=0x5e, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x29cd, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x29cd, .value=0x1d, .type=IO_READ},
        {.addr=0x29ce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02BA) {
    const struct CPU_State initial_cpu = {.pc=0x0b78, .a=0x50, .x=0xaf, .y=0x12, .sp=0x9f, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x0b78, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x0b79, .a=0x50, .x=0xae, .y=0x12, .sp=0x9f, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0b78, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x0b78, .value=0x1d, .type=IO_READ},
        {.addr=0x0b79, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02BB) {
    const struct CPU_State initial_cpu = {.pc=0x2d71, .a=0x94, .x=0x2f, .y=0x6e, .sp=0x01, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x2d71, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x2d72, .a=0x94, .x=0x2e, .y=0x6e, .sp=0x01, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x2d71, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x2d71, .value=0x1d, .type=IO_READ},
        {.addr=0x2d72, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02BC) {
    const struct CPU_State initial_cpu = {.pc=0x8512, .a=0x91, .x=0x4c, .y=0x0d, .sp=0xf9, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x8512, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x8513, .a=0x91, .x=0x4b, .y=0x0d, .sp=0xf9, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x8512, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x8512, .value=0x1d, .type=IO_READ},
        {.addr=0x8513, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02BD) {
    const struct CPU_State initial_cpu = {.pc=0x42b4, .a=0xd9, .x=0x99, .y=0xe3, .sp=0x29, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x42b4, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x42b5, .a=0xd9, .x=0x98, .y=0xe3, .sp=0x29, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x42b4, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x42b4, .value=0x1d, .type=IO_READ},
        {.addr=0x42b5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02BE) {
    const struct CPU_State initial_cpu = {.pc=0x11d6, .a=0xfe, .x=0xac, .y=0x99, .sp=0xf2, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x11d6, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x11d7, .a=0xfe, .x=0xab, .y=0x99, .sp=0xf2, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x11d6, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x11d6, .value=0x1d, .type=IO_READ},
        {.addr=0x11d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x61c2, .a=0xb5, .x=0x8a, .y=0x92, .sp=0x03, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x61c2, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x61c3, .a=0xb5, .x=0x89, .y=0x92, .sp=0x03, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x61c2, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x61c2, .value=0x1d, .type=IO_READ},
        {.addr=0x61c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x609f, .a=0x0e, .x=0x0a, .y=0x6f, .sp=0xa4, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x609f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x60a0, .a=0x0e, .x=0x09, .y=0x6f, .sp=0xa4, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x609f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x609f, .value=0x1d, .type=IO_READ},
        {.addr=0x60a0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02C1) {
    const struct CPU_State initial_cpu = {.pc=0xfa49, .a=0x12, .x=0xba, .y=0x4d, .sp=0xf7, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xfa49, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xfa4a, .a=0x12, .x=0xb9, .y=0x4d, .sp=0xf7, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xfa49, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xfa49, .value=0x1d, .type=IO_READ},
        {.addr=0xfa4a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02C2) {
    const struct CPU_State initial_cpu = {.pc=0x3d2a, .a=0xbf, .x=0xe4, .y=0x02, .sp=0xe5, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x3d2a, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x3d2b, .a=0xbf, .x=0xe3, .y=0x02, .sp=0xe5, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x3d2a, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x3d2a, .value=0x1d, .type=IO_READ},
        {.addr=0x3d2b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02C3) {
    const struct CPU_State initial_cpu = {.pc=0xc237, .a=0x2d, .x=0xa9, .y=0x24, .sp=0x61, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xc237, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc238, .a=0x2d, .x=0xa8, .y=0x24, .sp=0x61, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xc237, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc237, .value=0x1d, .type=IO_READ},
        {.addr=0xc238, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02C4) {
    const struct CPU_State initial_cpu = {.pc=0x22c3, .a=0xe0, .x=0x70, .y=0x5a, .sp=0x59, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x22c3, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x22c4, .a=0xe0, .x=0x6f, .y=0x5a, .sp=0x59, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x22c3, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x22c3, .value=0x1d, .type=IO_READ},
        {.addr=0x22c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02C5) {
    const struct CPU_State initial_cpu = {.pc=0xe3c7, .a=0xc9, .x=0x30, .y=0xf1, .sp=0xc5, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xe3c7, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xe3c8, .a=0xc9, .x=0x2f, .y=0xf1, .sp=0xc5, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xe3c7, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xe3c7, .value=0x1d, .type=IO_READ},
        {.addr=0xe3c8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02C6) {
    const struct CPU_State initial_cpu = {.pc=0x72dc, .a=0x94, .x=0x07, .y=0xac, .sp=0x80, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x72dc, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x72dd, .a=0x94, .x=0x06, .y=0xac, .sp=0x80, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x72dc, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x72dc, .value=0x1d, .type=IO_READ},
        {.addr=0x72dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02C7) {
    const struct CPU_State initial_cpu = {.pc=0xfb65, .a=0x5a, .x=0xf0, .y=0xa3, .sp=0x42, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xfb65, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xfb66, .a=0x5a, .x=0xef, .y=0xa3, .sp=0x42, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xfb65, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xfb65, .value=0x1d, .type=IO_READ},
        {.addr=0xfb66, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02C8) {
    const struct CPU_State initial_cpu = {.pc=0x7f14, .a=0x91, .x=0x69, .y=0x4e, .sp=0xc7, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x7f14, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x7f15, .a=0x91, .x=0x68, .y=0x4e, .sp=0xc7, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x7f14, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x7f14, .value=0x1d, .type=IO_READ},
        {.addr=0x7f15, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02C9) {
    const struct CPU_State initial_cpu = {.pc=0xd941, .a=0x77, .x=0x4f, .y=0xe1, .sp=0x8a, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xd941, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xd942, .a=0x77, .x=0x4e, .y=0xe1, .sp=0x8a, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xd941, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xd941, .value=0x1d, .type=IO_READ},
        {.addr=0xd942, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02CA) {
    const struct CPU_State initial_cpu = {.pc=0x06a6, .a=0xeb, .x=0x5a, .y=0x24, .sp=0xa7, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x06a6, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x06a7, .a=0xeb, .x=0x59, .y=0x24, .sp=0xa7, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x06a6, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x06a6, .value=0x1d, .type=IO_READ},
        {.addr=0x06a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02CB) {
    const struct CPU_State initial_cpu = {.pc=0x2b65, .a=0xca, .x=0x27, .y=0x90, .sp=0xfa, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x2b65, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x2b66, .a=0xca, .x=0x26, .y=0x90, .sp=0xfa, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x2b65, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x2b65, .value=0x1d, .type=IO_READ},
        {.addr=0x2b66, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02CC) {
    const struct CPU_State initial_cpu = {.pc=0xfe13, .a=0xc0, .x=0x9a, .y=0x90, .sp=0xc7, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xfe13, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xfe14, .a=0xc0, .x=0x99, .y=0x90, .sp=0xc7, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xfe13, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xfe13, .value=0x1d, .type=IO_READ},
        {.addr=0xfe14, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x1e1d, .a=0x31, .x=0xbc, .y=0x1c, .sp=0xfa, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x1e1d, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x1e1e, .a=0x31, .x=0xbb, .y=0x1c, .sp=0xfa, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x1e1d, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x1e1d, .value=0x1d, .type=IO_READ},
        {.addr=0x1e1e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x952f, .a=0xb6, .x=0x51, .y=0x0b, .sp=0x9d, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x952f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x9530, .a=0xb6, .x=0x50, .y=0x0b, .sp=0x9d, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x952f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x952f, .value=0x1d, .type=IO_READ},
        {.addr=0x9530, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02CF) {
    const struct CPU_State initial_cpu = {.pc=0x2f6f, .a=0x4a, .x=0x36, .y=0x7c, .sp=0x55, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x2f6f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x2f70, .a=0x4a, .x=0x35, .y=0x7c, .sp=0x55, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x2f6f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x2f6f, .value=0x1d, .type=IO_READ},
        {.addr=0x2f70, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02D0) {
    const struct CPU_State initial_cpu = {.pc=0x85c9, .a=0x15, .x=0x89, .y=0xd1, .sp=0x24, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x85c9, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x85ca, .a=0x15, .x=0x88, .y=0xd1, .sp=0x24, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x85c9, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x85c9, .value=0x1d, .type=IO_READ},
        {.addr=0x85ca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02D1) {
    const struct CPU_State initial_cpu = {.pc=0xe6c0, .a=0x06, .x=0x25, .y=0xb3, .sp=0xb2, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xe6c0, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xe6c1, .a=0x06, .x=0x24, .y=0xb3, .sp=0xb2, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xe6c0, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xe6c0, .value=0x1d, .type=IO_READ},
        {.addr=0xe6c1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x19fc, .a=0xe0, .x=0x27, .y=0x3f, .sp=0xb2, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x19fc, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x19fd, .a=0xe0, .x=0x26, .y=0x3f, .sp=0xb2, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x19fc, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x19fc, .value=0x1d, .type=IO_READ},
        {.addr=0x19fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x8aba, .a=0x8d, .x=0x00, .y=0x95, .sp=0x9c, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x8aba, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x8abb, .a=0x8d, .x=0xff, .y=0x95, .sp=0x9c, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x8aba, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x8aba, .value=0x1d, .type=IO_READ},
        {.addr=0x8abb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x831a, .a=0x5c, .x=0x88, .y=0x55, .sp=0x98, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x831a, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x831b, .a=0x5c, .x=0x87, .y=0x55, .sp=0x98, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x831a, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x831a, .value=0x1d, .type=IO_READ},
        {.addr=0x831b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x9870, .a=0x7e, .x=0x4f, .y=0x08, .sp=0x28, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x9870, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x9871, .a=0x7e, .x=0x4e, .y=0x08, .sp=0x28, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x9870, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x9870, .value=0x1d, .type=IO_READ},
        {.addr=0x9871, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02D6) {
    const struct CPU_State initial_cpu = {.pc=0x637f, .a=0x0e, .x=0xca, .y=0xc2, .sp=0x4e, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x637f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x6380, .a=0x0e, .x=0xc9, .y=0xc2, .sp=0x4e, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x637f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x637f, .value=0x1d, .type=IO_READ},
        {.addr=0x6380, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x5e89, .a=0x58, .x=0x78, .y=0x47, .sp=0x6c, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x5e89, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x5e8a, .a=0x58, .x=0x77, .y=0x47, .sp=0x6c, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x5e89, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x5e89, .value=0x1d, .type=IO_READ},
        {.addr=0x5e8a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x2fc4, .a=0x9a, .x=0xa3, .y=0xa0, .sp=0x73, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x2fc4, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x2fc5, .a=0x9a, .x=0xa2, .y=0xa0, .sp=0x73, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x2fc4, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x2fc4, .value=0x1d, .type=IO_READ},
        {.addr=0x2fc5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02D9) {
    const struct CPU_State initial_cpu = {.pc=0x593f, .a=0x89, .x=0xa7, .y=0x76, .sp=0xe6, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x593f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x5940, .a=0x89, .x=0xa6, .y=0x76, .sp=0xe6, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x593f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x593f, .value=0x1d, .type=IO_READ},
        {.addr=0x5940, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02DA) {
    const struct CPU_State initial_cpu = {.pc=0xb08a, .a=0x4c, .x=0xd9, .y=0xe2, .sp=0x01, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xb08a, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xb08b, .a=0x4c, .x=0xd8, .y=0xe2, .sp=0x01, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xb08a, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xb08a, .value=0x1d, .type=IO_READ},
        {.addr=0xb08b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02DB) {
    const struct CPU_State initial_cpu = {.pc=0xec2a, .a=0x62, .x=0x10, .y=0xbd, .sp=0x60, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xec2a, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xec2b, .a=0x62, .x=0x0f, .y=0xbd, .sp=0x60, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xec2a, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xec2a, .value=0x1d, .type=IO_READ},
        {.addr=0xec2b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x30b5, .a=0x7c, .x=0x8a, .y=0xcd, .sp=0x31, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x30b5, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x30b6, .a=0x7c, .x=0x89, .y=0xcd, .sp=0x31, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x30b5, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x30b5, .value=0x1d, .type=IO_READ},
        {.addr=0x30b6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02DD) {
    const struct CPU_State initial_cpu = {.pc=0x67b8, .a=0x37, .x=0x9d, .y=0x66, .sp=0x43, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x67b8, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x67b9, .a=0x37, .x=0x9c, .y=0x66, .sp=0x43, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x67b8, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x67b8, .value=0x1d, .type=IO_READ},
        {.addr=0x67b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02DE) {
    const struct CPU_State initial_cpu = {.pc=0x6e70, .a=0xef, .x=0x05, .y=0x2d, .sp=0x8d, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x6e70, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x6e71, .a=0xef, .x=0x04, .y=0x2d, .sp=0x8d, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x6e70, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x6e70, .value=0x1d, .type=IO_READ},
        {.addr=0x6e71, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02DF) {
    const struct CPU_State initial_cpu = {.pc=0xca5b, .a=0xc8, .x=0xe5, .y=0x6d, .sp=0x90, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xca5b, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xca5c, .a=0xc8, .x=0xe4, .y=0x6d, .sp=0x90, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xca5b, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xca5b, .value=0x1d, .type=IO_READ},
        {.addr=0xca5c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02E0) {
    const struct CPU_State initial_cpu = {.pc=0x4823, .a=0xea, .x=0x30, .y=0x3a, .sp=0x78, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x4823, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x4824, .a=0xea, .x=0x2f, .y=0x3a, .sp=0x78, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x4823, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x4823, .value=0x1d, .type=IO_READ},
        {.addr=0x4824, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02E1) {
    const struct CPU_State initial_cpu = {.pc=0x9645, .a=0xb5, .x=0x06, .y=0xf1, .sp=0x8e, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x9645, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x9646, .a=0xb5, .x=0x05, .y=0xf1, .sp=0x8e, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x9645, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x9645, .value=0x1d, .type=IO_READ},
        {.addr=0x9646, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02E2) {
    const struct CPU_State initial_cpu = {.pc=0xa026, .a=0x86, .x=0xf0, .y=0x34, .sp=0x5b, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xa026, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xa027, .a=0x86, .x=0xef, .y=0x34, .sp=0x5b, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xa026, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xa026, .value=0x1d, .type=IO_READ},
        {.addr=0xa027, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02E3) {
    const struct CPU_State initial_cpu = {.pc=0x474c, .a=0x9b, .x=0x91, .y=0x60, .sp=0x56, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x474c, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x474d, .a=0x9b, .x=0x90, .y=0x60, .sp=0x56, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x474c, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x474c, .value=0x1d, .type=IO_READ},
        {.addr=0x474d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02E4) {
    const struct CPU_State initial_cpu = {.pc=0x3c6e, .a=0x79, .x=0x6a, .y=0xd7, .sp=0xf0, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x3c6e, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x3c6f, .a=0x79, .x=0x69, .y=0xd7, .sp=0xf0, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x3c6e, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x3c6e, .value=0x1d, .type=IO_READ},
        {.addr=0x3c6f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02E5) {
    const struct CPU_State initial_cpu = {.pc=0x3e98, .a=0xa0, .x=0x56, .y=0xd1, .sp=0xc1, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x3e98, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x3e99, .a=0xa0, .x=0x55, .y=0xd1, .sp=0xc1, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x3e98, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x3e98, .value=0x1d, .type=IO_READ},
        {.addr=0x3e99, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02E6) {
    const struct CPU_State initial_cpu = {.pc=0xa4e3, .a=0x34, .x=0x53, .y=0x36, .sp=0x97, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xa4e3, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xa4e4, .a=0x34, .x=0x52, .y=0x36, .sp=0x97, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xa4e3, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xa4e3, .value=0x1d, .type=IO_READ},
        {.addr=0xa4e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02E7) {
    const struct CPU_State initial_cpu = {.pc=0x5db6, .a=0xfc, .x=0xe7, .y=0x97, .sp=0x59, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x5db6, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x5db7, .a=0xfc, .x=0xe6, .y=0x97, .sp=0x59, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x5db6, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x5db6, .value=0x1d, .type=IO_READ},
        {.addr=0x5db7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02E8) {
    const struct CPU_State initial_cpu = {.pc=0xd8d7, .a=0x2b, .x=0x6c, .y=0x17, .sp=0x88, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xd8d7, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xd8d8, .a=0x2b, .x=0x6b, .y=0x17, .sp=0x88, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xd8d7, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xd8d7, .value=0x1d, .type=IO_READ},
        {.addr=0xd8d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x1b71, .a=0xb9, .x=0x9a, .y=0xee, .sp=0xbb, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x1b71, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x1b72, .a=0xb9, .x=0x99, .y=0xee, .sp=0xbb, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x1b71, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x1b71, .value=0x1d, .type=IO_READ},
        {.addr=0x1b72, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x21e7, .a=0x12, .x=0xfa, .y=0xdf, .sp=0xba, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x21e7, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x21e8, .a=0x12, .x=0xf9, .y=0xdf, .sp=0xba, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x21e7, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x21e7, .value=0x1d, .type=IO_READ},
        {.addr=0x21e8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02EB) {
    const struct CPU_State initial_cpu = {.pc=0xa2bb, .a=0xee, .x=0x08, .y=0x34, .sp=0xc2, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xa2bb, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xa2bc, .a=0xee, .x=0x07, .y=0x34, .sp=0xc2, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xa2bb, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xa2bb, .value=0x1d, .type=IO_READ},
        {.addr=0xa2bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02EC) {
    const struct CPU_State initial_cpu = {.pc=0xfaee, .a=0xd9, .x=0xc6, .y=0xb8, .sp=0x6e, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xfaee, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xfaef, .a=0xd9, .x=0xc5, .y=0xb8, .sp=0x6e, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xfaee, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xfaee, .value=0x1d, .type=IO_READ},
        {.addr=0xfaef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02ED) {
    const struct CPU_State initial_cpu = {.pc=0xf2de, .a=0x0e, .x=0x3a, .y=0x0f, .sp=0x94, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xf2de, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xf2df, .a=0x0e, .x=0x39, .y=0x0f, .sp=0x94, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xf2de, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xf2de, .value=0x1d, .type=IO_READ},
        {.addr=0xf2df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02EE) {
    const struct CPU_State initial_cpu = {.pc=0xf072, .a=0xed, .x=0x04, .y=0xdd, .sp=0x5b, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xf072, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xf073, .a=0xed, .x=0x03, .y=0xdd, .sp=0x5b, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xf072, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xf072, .value=0x1d, .type=IO_READ},
        {.addr=0xf073, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02EF) {
    const struct CPU_State initial_cpu = {.pc=0x7496, .a=0x11, .x=0x5d, .y=0xc0, .sp=0x63, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x7496, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x7497, .a=0x11, .x=0x5c, .y=0xc0, .sp=0x63, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x7496, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x7496, .value=0x1d, .type=IO_READ},
        {.addr=0x7497, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02F0) {
    const struct CPU_State initial_cpu = {.pc=0x1d09, .a=0xa7, .x=0xf1, .y=0xcd, .sp=0xd8, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x1d09, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x1d0a, .a=0xa7, .x=0xf0, .y=0xcd, .sp=0xd8, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x1d09, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x1d09, .value=0x1d, .type=IO_READ},
        {.addr=0x1d0a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02F1) {
    const struct CPU_State initial_cpu = {.pc=0xfa68, .a=0xf7, .x=0xea, .y=0x36, .sp=0xae, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xfa68, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xfa69, .a=0xf7, .x=0xe9, .y=0x36, .sp=0xae, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xfa68, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xfa68, .value=0x1d, .type=IO_READ},
        {.addr=0xfa69, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02F2) {
    const struct CPU_State initial_cpu = {.pc=0x2aca, .a=0x72, .x=0x80, .y=0x31, .sp=0x98, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x2aca, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x2acb, .a=0x72, .x=0x7f, .y=0x31, .sp=0x98, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x2aca, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x2aca, .value=0x1d, .type=IO_READ},
        {.addr=0x2acb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02F3) {
    const struct CPU_State initial_cpu = {.pc=0xc3ef, .a=0x1d, .x=0xed, .y=0x56, .sp=0xa4, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xc3ef, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc3f0, .a=0x1d, .x=0xec, .y=0x56, .sp=0xa4, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xc3ef, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc3ef, .value=0x1d, .type=IO_READ},
        {.addr=0xc3f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02F4) {
    const struct CPU_State initial_cpu = {.pc=0x9814, .a=0xf9, .x=0x46, .y=0x86, .sp=0x61, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x9814, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x9815, .a=0xf9, .x=0x45, .y=0x86, .sp=0x61, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x9814, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x9814, .value=0x1d, .type=IO_READ},
        {.addr=0x9815, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02F5) {
    const struct CPU_State initial_cpu = {.pc=0xd724, .a=0xda, .x=0xc5, .y=0x57, .sp=0x42, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xd724, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xd725, .a=0xda, .x=0xc4, .y=0x57, .sp=0x42, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xd724, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xd724, .value=0x1d, .type=IO_READ},
        {.addr=0xd725, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02F6) {
    const struct CPU_State initial_cpu = {.pc=0xde55, .a=0x79, .x=0x70, .y=0x9e, .sp=0xcd, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xde55, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xde56, .a=0x79, .x=0x6f, .y=0x9e, .sp=0xcd, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xde55, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xde55, .value=0x1d, .type=IO_READ},
        {.addr=0xde56, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x4404, .a=0x1c, .x=0x8a, .y=0xdf, .sp=0xb4, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x4404, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x4405, .a=0x1c, .x=0x89, .y=0xdf, .sp=0xb4, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x4404, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x4404, .value=0x1d, .type=IO_READ},
        {.addr=0x4405, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02F8) {
    const struct CPU_State initial_cpu = {.pc=0xa0e9, .a=0x60, .x=0x38, .y=0xdf, .sp=0x26, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xa0e9, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xa0ea, .a=0x60, .x=0x37, .y=0xdf, .sp=0x26, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xa0e9, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xa0e9, .value=0x1d, .type=IO_READ},
        {.addr=0xa0ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02F9) {
    const struct CPU_State initial_cpu = {.pc=0x7dda, .a=0x64, .x=0x28, .y=0x3c, .sp=0x82, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x7dda, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x7ddb, .a=0x64, .x=0x27, .y=0x3c, .sp=0x82, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x7dda, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x7dda, .value=0x1d, .type=IO_READ},
        {.addr=0x7ddb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02FA) {
    const struct CPU_State initial_cpu = {.pc=0xcf2f, .a=0x22, .x=0x26, .y=0x34, .sp=0xf7, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xcf2f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xcf30, .a=0x22, .x=0x25, .y=0x34, .sp=0xf7, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xcf2f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xcf2f, .value=0x1d, .type=IO_READ},
        {.addr=0xcf30, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02FB) {
    const struct CPU_State initial_cpu = {.pc=0x36e1, .a=0xd6, .x=0x36, .y=0x47, .sp=0xaa, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x36e1, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x36e2, .a=0xd6, .x=0x35, .y=0x47, .sp=0xaa, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x36e1, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x36e1, .value=0x1d, .type=IO_READ},
        {.addr=0x36e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02FC) {
    const struct CPU_State initial_cpu = {.pc=0x8c88, .a=0xf4, .x=0xda, .y=0x3c, .sp=0x3b, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x8c88, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x8c89, .a=0xf4, .x=0xd9, .y=0x3c, .sp=0x3b, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x8c88, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x8c88, .value=0x1d, .type=IO_READ},
        {.addr=0x8c89, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02FD) {
    const struct CPU_State initial_cpu = {.pc=0xcd86, .a=0x0d, .x=0xc5, .y=0xf3, .sp=0x66, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xcd86, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xcd87, .a=0x0d, .x=0xc4, .y=0xf3, .sp=0x66, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xcd86, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xcd86, .value=0x1d, .type=IO_READ},
        {.addr=0xcd87, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02FE) {
    const struct CPU_State initial_cpu = {.pc=0x57e4, .a=0x02, .x=0x47, .y=0x2b, .sp=0x17, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x57e4, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x57e5, .a=0x02, .x=0x46, .y=0x2b, .sp=0x17, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x57e4, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x57e4, .value=0x1d, .type=IO_READ},
        {.addr=0x57e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x0a88, .a=0xb6, .x=0x6b, .y=0x9e, .sp=0x7f, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x0a88, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x0a89, .a=0xb6, .x=0x6a, .y=0x9e, .sp=0x7f, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0a88, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x0a88, .value=0x1d, .type=IO_READ},
        {.addr=0x0a89, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0300) {
    const struct CPU_State initial_cpu = {.pc=0xddf9, .a=0xbf, .x=0xe0, .y=0x37, .sp=0x9f, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xddf9, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xddfa, .a=0xbf, .x=0xdf, .y=0x37, .sp=0x9f, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xddf9, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xddf9, .value=0x1d, .type=IO_READ},
        {.addr=0xddfa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0301) {
    const struct CPU_State initial_cpu = {.pc=0x35ab, .a=0xff, .x=0x40, .y=0x3c, .sp=0xe3, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x35ab, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x35ac, .a=0xff, .x=0x3f, .y=0x3c, .sp=0xe3, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x35ab, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x35ab, .value=0x1d, .type=IO_READ},
        {.addr=0x35ac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0302) {
    const struct CPU_State initial_cpu = {.pc=0xc7f9, .a=0x9c, .x=0xa8, .y=0xce, .sp=0xef, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xc7f9, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc7fa, .a=0x9c, .x=0xa7, .y=0xce, .sp=0xef, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xc7f9, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc7f9, .value=0x1d, .type=IO_READ},
        {.addr=0xc7fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0303) {
    const struct CPU_State initial_cpu = {.pc=0x3290, .a=0x44, .x=0x38, .y=0xd1, .sp=0x0d, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x3290, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x3291, .a=0x44, .x=0x37, .y=0xd1, .sp=0x0d, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x3290, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x3290, .value=0x1d, .type=IO_READ},
        {.addr=0x3291, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0304) {
    const struct CPU_State initial_cpu = {.pc=0x16dd, .a=0x18, .x=0x57, .y=0x68, .sp=0x60, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x16dd, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x16de, .a=0x18, .x=0x56, .y=0x68, .sp=0x60, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x16dd, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x16dd, .value=0x1d, .type=IO_READ},
        {.addr=0x16de, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0305) {
    const struct CPU_State initial_cpu = {.pc=0x0784, .a=0x85, .x=0xd7, .y=0x7c, .sp=0x7e, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x0784, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x0785, .a=0x85, .x=0xd6, .y=0x7c, .sp=0x7e, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0784, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x0784, .value=0x1d, .type=IO_READ},
        {.addr=0x0785, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0306) {
    const struct CPU_State initial_cpu = {.pc=0xda0a, .a=0x38, .x=0xfb, .y=0x17, .sp=0x1a, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xda0a, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xda0b, .a=0x38, .x=0xfa, .y=0x17, .sp=0x1a, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xda0a, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xda0a, .value=0x1d, .type=IO_READ},
        {.addr=0xda0b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0307) {
    const struct CPU_State initial_cpu = {.pc=0xd20e, .a=0x4d, .x=0x52, .y=0xe2, .sp=0x60, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xd20e, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xd20f, .a=0x4d, .x=0x51, .y=0xe2, .sp=0x60, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xd20e, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xd20e, .value=0x1d, .type=IO_READ},
        {.addr=0xd20f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0308) {
    const struct CPU_State initial_cpu = {.pc=0x30e6, .a=0xe7, .x=0x1c, .y=0x8a, .sp=0x19, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x30e6, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x30e7, .a=0xe7, .x=0x1b, .y=0x8a, .sp=0x19, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x30e6, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x30e6, .value=0x1d, .type=IO_READ},
        {.addr=0x30e7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0309) {
    const struct CPU_State initial_cpu = {.pc=0x6e77, .a=0x96, .x=0x48, .y=0xae, .sp=0x67, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x6e77, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x6e78, .a=0x96, .x=0x47, .y=0xae, .sp=0x67, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x6e77, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x6e77, .value=0x1d, .type=IO_READ},
        {.addr=0x6e78, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_030A) {
    const struct CPU_State initial_cpu = {.pc=0xcc9b, .a=0x86, .x=0x86, .y=0x55, .sp=0x04, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xcc9b, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xcc9c, .a=0x86, .x=0x85, .y=0x55, .sp=0x04, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xcc9b, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xcc9b, .value=0x1d, .type=IO_READ},
        {.addr=0xcc9c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_030B) {
    const struct CPU_State initial_cpu = {.pc=0x7497, .a=0xad, .x=0x01, .y=0x93, .sp=0xf4, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x7497, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x7498, .a=0xad, .x=0x00, .y=0x93, .sp=0xf4, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x7497, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x7497, .value=0x1d, .type=IO_READ},
        {.addr=0x7498, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_030C) {
    const struct CPU_State initial_cpu = {.pc=0x809c, .a=0x26, .x=0x03, .y=0xbc, .sp=0x33, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x809c, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x809d, .a=0x26, .x=0x02, .y=0xbc, .sp=0x33, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x809c, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x809c, .value=0x1d, .type=IO_READ},
        {.addr=0x809d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_030D) {
    const struct CPU_State initial_cpu = {.pc=0x23ff, .a=0xcb, .x=0x05, .y=0x6a, .sp=0x54, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x23ff, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x2400, .a=0xcb, .x=0x04, .y=0x6a, .sp=0x54, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x23ff, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x23ff, .value=0x1d, .type=IO_READ},
        {.addr=0x2400, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_030E) {
    const struct CPU_State initial_cpu = {.pc=0xc734, .a=0x36, .x=0x15, .y=0x07, .sp=0x2d, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xc734, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc735, .a=0x36, .x=0x14, .y=0x07, .sp=0x2d, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xc734, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc734, .value=0x1d, .type=IO_READ},
        {.addr=0xc735, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_030F) {
    const struct CPU_State initial_cpu = {.pc=0xaf5f, .a=0xed, .x=0xc0, .y=0xb6, .sp=0x15, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xaf5f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xaf60, .a=0xed, .x=0xbf, .y=0xb6, .sp=0x15, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xaf5f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xaf5f, .value=0x1d, .type=IO_READ},
        {.addr=0xaf60, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0310) {
    const struct CPU_State initial_cpu = {.pc=0x227f, .a=0x0b, .x=0x41, .y=0x69, .sp=0x26, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x227f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x2280, .a=0x0b, .x=0x40, .y=0x69, .sp=0x26, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x227f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x227f, .value=0x1d, .type=IO_READ},
        {.addr=0x2280, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0311) {
    const struct CPU_State initial_cpu = {.pc=0x2d8f, .a=0x5f, .x=0xa7, .y=0xf6, .sp=0x87, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x2d8f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x2d90, .a=0x5f, .x=0xa6, .y=0xf6, .sp=0x87, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x2d8f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x2d8f, .value=0x1d, .type=IO_READ},
        {.addr=0x2d90, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0312) {
    const struct CPU_State initial_cpu = {.pc=0x1145, .a=0x1d, .x=0x4f, .y=0xd3, .sp=0x6c, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x1145, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x1146, .a=0x1d, .x=0x4e, .y=0xd3, .sp=0x6c, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x1145, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x1145, .value=0x1d, .type=IO_READ},
        {.addr=0x1146, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0313) {
    const struct CPU_State initial_cpu = {.pc=0xaa05, .a=0x45, .x=0xaa, .y=0xee, .sp=0x57, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xaa05, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xaa06, .a=0x45, .x=0xa9, .y=0xee, .sp=0x57, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xaa05, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xaa05, .value=0x1d, .type=IO_READ},
        {.addr=0xaa06, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0314) {
    const struct CPU_State initial_cpu = {.pc=0x0fe4, .a=0x28, .x=0xa8, .y=0xd9, .sp=0x85, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x0fe4, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x0fe5, .a=0x28, .x=0xa7, .y=0xd9, .sp=0x85, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x0fe4, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x0fe4, .value=0x1d, .type=IO_READ},
        {.addr=0x0fe5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0315) {
    const struct CPU_State initial_cpu = {.pc=0x7a8a, .a=0x79, .x=0x8e, .y=0x0d, .sp=0x8f, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x7a8a, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x7a8b, .a=0x79, .x=0x8d, .y=0x0d, .sp=0x8f, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x7a8a, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x7a8a, .value=0x1d, .type=IO_READ},
        {.addr=0x7a8b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0316) {
    const struct CPU_State initial_cpu = {.pc=0xb4e6, .a=0x08, .x=0xe3, .y=0x1f, .sp=0x05, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xb4e6, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xb4e7, .a=0x08, .x=0xe2, .y=0x1f, .sp=0x05, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xb4e6, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xb4e6, .value=0x1d, .type=IO_READ},
        {.addr=0xb4e7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0317) {
    const struct CPU_State initial_cpu = {.pc=0xfc2b, .a=0x57, .x=0x0b, .y=0x52, .sp=0x8c, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xfc2b, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xfc2c, .a=0x57, .x=0x0a, .y=0x52, .sp=0x8c, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xfc2b, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xfc2b, .value=0x1d, .type=IO_READ},
        {.addr=0xfc2c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0318) {
    const struct CPU_State initial_cpu = {.pc=0xb547, .a=0x41, .x=0xff, .y=0xec, .sp=0xc5, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xb547, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xb548, .a=0x41, .x=0xfe, .y=0xec, .sp=0xc5, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xb547, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xb547, .value=0x1d, .type=IO_READ},
        {.addr=0xb548, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0319) {
    const struct CPU_State initial_cpu = {.pc=0x6da8, .a=0xf5, .x=0xe2, .y=0xe1, .sp=0x3d, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x6da8, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x6da9, .a=0xf5, .x=0xe1, .y=0xe1, .sp=0x3d, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x6da8, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x6da8, .value=0x1d, .type=IO_READ},
        {.addr=0x6da9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_031A) {
    const struct CPU_State initial_cpu = {.pc=0x2651, .a=0x4c, .x=0xa0, .y=0xa9, .sp=0x0f, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x2651, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x2652, .a=0x4c, .x=0x9f, .y=0xa9, .sp=0x0f, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x2651, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x2651, .value=0x1d, .type=IO_READ},
        {.addr=0x2652, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_031B) {
    const struct CPU_State initial_cpu = {.pc=0x154a, .a=0x8a, .x=0x6c, .y=0x5c, .sp=0xd4, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x154a, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x154b, .a=0x8a, .x=0x6b, .y=0x5c, .sp=0xd4, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x154a, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x154a, .value=0x1d, .type=IO_READ},
        {.addr=0x154b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_031C) {
    const struct CPU_State initial_cpu = {.pc=0x25bc, .a=0x39, .x=0x3b, .y=0x41, .sp=0x8e, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x25bc, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x25bd, .a=0x39, .x=0x3a, .y=0x41, .sp=0x8e, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x25bc, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x25bc, .value=0x1d, .type=IO_READ},
        {.addr=0x25bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_031D) {
    const struct CPU_State initial_cpu = {.pc=0x43a6, .a=0xe6, .x=0x46, .y=0xc7, .sp=0xca, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x43a6, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x43a7, .a=0xe6, .x=0x45, .y=0xc7, .sp=0xca, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x43a6, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x43a6, .value=0x1d, .type=IO_READ},
        {.addr=0x43a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_031E) {
    const struct CPU_State initial_cpu = {.pc=0x41c7, .a=0x29, .x=0x3d, .y=0x85, .sp=0x95, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x41c7, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x41c8, .a=0x29, .x=0x3c, .y=0x85, .sp=0x95, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x41c7, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x41c7, .value=0x1d, .type=IO_READ},
        {.addr=0x41c8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_031F) {
    const struct CPU_State initial_cpu = {.pc=0xc0ff, .a=0xbf, .x=0xa4, .y=0x1f, .sp=0x04, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xc0ff, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc100, .a=0xbf, .x=0xa3, .y=0x1f, .sp=0x04, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xc0ff, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc0ff, .value=0x1d, .type=IO_READ},
        {.addr=0xc100, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0320) {
    const struct CPU_State initial_cpu = {.pc=0x4f26, .a=0xcd, .x=0xf6, .y=0x53, .sp=0x0e, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x4f26, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x4f27, .a=0xcd, .x=0xf5, .y=0x53, .sp=0x0e, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x4f26, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x4f26, .value=0x1d, .type=IO_READ},
        {.addr=0x4f27, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0321) {
    const struct CPU_State initial_cpu = {.pc=0x7af2, .a=0xd6, .x=0x3e, .y=0x08, .sp=0xbe, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x7af2, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x7af3, .a=0xd6, .x=0x3d, .y=0x08, .sp=0xbe, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x7af2, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x7af2, .value=0x1d, .type=IO_READ},
        {.addr=0x7af3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0322) {
    const struct CPU_State initial_cpu = {.pc=0x5123, .a=0x48, .x=0xdf, .y=0x68, .sp=0xaf, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x5123, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x5124, .a=0x48, .x=0xde, .y=0x68, .sp=0xaf, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x5123, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x5123, .value=0x1d, .type=IO_READ},
        {.addr=0x5124, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0323) {
    const struct CPU_State initial_cpu = {.pc=0x49a9, .a=0x36, .x=0xd7, .y=0xf3, .sp=0x2c, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x49a9, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x49aa, .a=0x36, .x=0xd6, .y=0xf3, .sp=0x2c, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x49a9, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x49a9, .value=0x1d, .type=IO_READ},
        {.addr=0x49aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0324) {
    const struct CPU_State initial_cpu = {.pc=0xd359, .a=0x7c, .x=0x11, .y=0x3e, .sp=0x6a, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xd359, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xd35a, .a=0x7c, .x=0x10, .y=0x3e, .sp=0x6a, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xd359, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xd359, .value=0x1d, .type=IO_READ},
        {.addr=0xd35a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0325) {
    const struct CPU_State initial_cpu = {.pc=0x41f0, .a=0x11, .x=0x61, .y=0x46, .sp=0x15, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x41f0, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x41f1, .a=0x11, .x=0x60, .y=0x46, .sp=0x15, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x41f0, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x41f0, .value=0x1d, .type=IO_READ},
        {.addr=0x41f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0326) {
    const struct CPU_State initial_cpu = {.pc=0x4ca3, .a=0x14, .x=0xd8, .y=0x62, .sp=0x4e, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x4ca3, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x4ca4, .a=0x14, .x=0xd7, .y=0x62, .sp=0x4e, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x4ca3, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x4ca3, .value=0x1d, .type=IO_READ},
        {.addr=0x4ca4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0327) {
    const struct CPU_State initial_cpu = {.pc=0x39ec, .a=0xb7, .x=0xe3, .y=0xcb, .sp=0xb5, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x39ec, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x39ed, .a=0xb7, .x=0xe2, .y=0xcb, .sp=0xb5, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x39ec, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x39ec, .value=0x1d, .type=IO_READ},
        {.addr=0x39ed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0328) {
    const struct CPU_State initial_cpu = {.pc=0xd66a, .a=0xea, .x=0xa3, .y=0xf4, .sp=0xcb, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xd66a, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xd66b, .a=0xea, .x=0xa2, .y=0xf4, .sp=0xcb, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xd66a, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xd66a, .value=0x1d, .type=IO_READ},
        {.addr=0xd66b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0329) {
    const struct CPU_State initial_cpu = {.pc=0x9bc7, .a=0x0c, .x=0x08, .y=0x11, .sp=0x41, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x9bc7, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x9bc8, .a=0x0c, .x=0x07, .y=0x11, .sp=0x41, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x9bc7, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x9bc7, .value=0x1d, .type=IO_READ},
        {.addr=0x9bc8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_032A) {
    const struct CPU_State initial_cpu = {.pc=0xfb6e, .a=0x88, .x=0xd0, .y=0xb6, .sp=0xc1, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xfb6e, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xfb6f, .a=0x88, .x=0xcf, .y=0xb6, .sp=0xc1, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xfb6e, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xfb6e, .value=0x1d, .type=IO_READ},
        {.addr=0xfb6f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_032B) {
    const struct CPU_State initial_cpu = {.pc=0x7dcc, .a=0xb0, .x=0x4c, .y=0x9f, .sp=0x1c, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x7dcc, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x7dcd, .a=0xb0, .x=0x4b, .y=0x9f, .sp=0x1c, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x7dcc, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x7dcc, .value=0x1d, .type=IO_READ},
        {.addr=0x7dcd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_032C) {
    const struct CPU_State initial_cpu = {.pc=0xc194, .a=0x06, .x=0x51, .y=0xe5, .sp=0x92, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xc194, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc195, .a=0x06, .x=0x50, .y=0xe5, .sp=0x92, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xc194, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc194, .value=0x1d, .type=IO_READ},
        {.addr=0xc195, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_032D) {
    const struct CPU_State initial_cpu = {.pc=0x8c7e, .a=0x96, .x=0x26, .y=0x8b, .sp=0x00, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x8c7e, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x8c7f, .a=0x96, .x=0x25, .y=0x8b, .sp=0x00, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x8c7e, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x8c7e, .value=0x1d, .type=IO_READ},
        {.addr=0x8c7f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_032E) {
    const struct CPU_State initial_cpu = {.pc=0x48d9, .a=0x02, .x=0x73, .y=0x85, .sp=0x56, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x48d9, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x48da, .a=0x02, .x=0x72, .y=0x85, .sp=0x56, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x48d9, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x48d9, .value=0x1d, .type=IO_READ},
        {.addr=0x48da, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_032F) {
    const struct CPU_State initial_cpu = {.pc=0xcd67, .a=0x00, .x=0x65, .y=0x51, .sp=0xa0, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xcd67, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xcd68, .a=0x00, .x=0x64, .y=0x51, .sp=0xa0, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xcd67, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xcd67, .value=0x1d, .type=IO_READ},
        {.addr=0xcd68, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0330) {
    const struct CPU_State initial_cpu = {.pc=0x62cf, .a=0xfa, .x=0x5d, .y=0xd0, .sp=0xa0, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x62cf, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x62d0, .a=0xfa, .x=0x5c, .y=0xd0, .sp=0xa0, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x62cf, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x62cf, .value=0x1d, .type=IO_READ},
        {.addr=0x62d0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0331) {
    const struct CPU_State initial_cpu = {.pc=0x6a2a, .a=0xd8, .x=0x10, .y=0xb4, .sp=0x33, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x6a2a, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x6a2b, .a=0xd8, .x=0x0f, .y=0xb4, .sp=0x33, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x6a2a, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x6a2a, .value=0x1d, .type=IO_READ},
        {.addr=0x6a2b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0332) {
    const struct CPU_State initial_cpu = {.pc=0x992c, .a=0xbc, .x=0x13, .y=0x0d, .sp=0x2a, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x992c, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x992d, .a=0xbc, .x=0x12, .y=0x0d, .sp=0x2a, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x992c, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x992c, .value=0x1d, .type=IO_READ},
        {.addr=0x992d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0333) {
    const struct CPU_State initial_cpu = {.pc=0x80ad, .a=0xd2, .x=0xe6, .y=0x24, .sp=0x43, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x80ad, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x80ae, .a=0xd2, .x=0xe5, .y=0x24, .sp=0x43, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x80ad, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x80ad, .value=0x1d, .type=IO_READ},
        {.addr=0x80ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0334) {
    const struct CPU_State initial_cpu = {.pc=0x9deb, .a=0x16, .x=0x7d, .y=0x56, .sp=0x14, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x9deb, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x9dec, .a=0x16, .x=0x7c, .y=0x56, .sp=0x14, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x9deb, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x9deb, .value=0x1d, .type=IO_READ},
        {.addr=0x9dec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0335) {
    const struct CPU_State initial_cpu = {.pc=0x57ad, .a=0xe4, .x=0xe8, .y=0x2f, .sp=0x53, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x57ad, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x57ae, .a=0xe4, .x=0xe7, .y=0x2f, .sp=0x53, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x57ad, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x57ad, .value=0x1d, .type=IO_READ},
        {.addr=0x57ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0336) {
    const struct CPU_State initial_cpu = {.pc=0x8577, .a=0x72, .x=0x80, .y=0xa5, .sp=0xbc, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x8577, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x8578, .a=0x72, .x=0x7f, .y=0xa5, .sp=0xbc, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x8577, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x8577, .value=0x1d, .type=IO_READ},
        {.addr=0x8578, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0337) {
    const struct CPU_State initial_cpu = {.pc=0xd333, .a=0xa5, .x=0x09, .y=0x2f, .sp=0xf5, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xd333, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xd334, .a=0xa5, .x=0x08, .y=0x2f, .sp=0xf5, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xd333, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xd333, .value=0x1d, .type=IO_READ},
        {.addr=0xd334, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0338) {
    const struct CPU_State initial_cpu = {.pc=0xbb20, .a=0xbe, .x=0x10, .y=0x64, .sp=0x5f, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xbb20, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xbb21, .a=0xbe, .x=0x0f, .y=0x64, .sp=0x5f, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xbb20, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xbb20, .value=0x1d, .type=IO_READ},
        {.addr=0xbb21, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0339) {
    const struct CPU_State initial_cpu = {.pc=0x59d3, .a=0x5b, .x=0x57, .y=0x4e, .sp=0x91, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x59d3, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x59d4, .a=0x5b, .x=0x56, .y=0x4e, .sp=0x91, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x59d3, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x59d3, .value=0x1d, .type=IO_READ},
        {.addr=0x59d4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_033A) {
    const struct CPU_State initial_cpu = {.pc=0x9f41, .a=0x53, .x=0x5e, .y=0x24, .sp=0x5b, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x9f41, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x9f42, .a=0x53, .x=0x5d, .y=0x24, .sp=0x5b, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x9f41, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x9f41, .value=0x1d, .type=IO_READ},
        {.addr=0x9f42, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_033B) {
    const struct CPU_State initial_cpu = {.pc=0x20b4, .a=0xb4, .x=0xb4, .y=0xd4, .sp=0x27, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x20b4, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x20b5, .a=0xb4, .x=0xb3, .y=0xd4, .sp=0x27, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x20b4, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x20b4, .value=0x1d, .type=IO_READ},
        {.addr=0x20b5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_033C) {
    const struct CPU_State initial_cpu = {.pc=0xde58, .a=0xcd, .x=0xc1, .y=0x80, .sp=0xfc, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xde58, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xde59, .a=0xcd, .x=0xc0, .y=0x80, .sp=0xfc, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xde58, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xde58, .value=0x1d, .type=IO_READ},
        {.addr=0xde59, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_033D) {
    const struct CPU_State initial_cpu = {.pc=0xd7c6, .a=0x7f, .x=0x4a, .y=0x85, .sp=0x25, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xd7c6, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xd7c7, .a=0x7f, .x=0x49, .y=0x85, .sp=0x25, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xd7c6, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xd7c6, .value=0x1d, .type=IO_READ},
        {.addr=0xd7c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_033E) {
    const struct CPU_State initial_cpu = {.pc=0x44ee, .a=0x6b, .x=0xa4, .y=0xa7, .sp=0xc2, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x44ee, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x44ef, .a=0x6b, .x=0xa3, .y=0xa7, .sp=0xc2, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x44ee, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x44ee, .value=0x1d, .type=IO_READ},
        {.addr=0x44ef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_033F) {
    const struct CPU_State initial_cpu = {.pc=0x720e, .a=0xd7, .x=0x8b, .y=0x78, .sp=0xfa, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x720e, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x720f, .a=0xd7, .x=0x8a, .y=0x78, .sp=0xfa, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x720e, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x720e, .value=0x1d, .type=IO_READ},
        {.addr=0x720f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0340) {
    const struct CPU_State initial_cpu = {.pc=0xbfd7, .a=0xfe, .x=0xb6, .y=0xd3, .sp=0x7c, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xbfd7, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xbfd8, .a=0xfe, .x=0xb5, .y=0xd3, .sp=0x7c, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xbfd7, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xbfd7, .value=0x1d, .type=IO_READ},
        {.addr=0xbfd8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0341) {
    const struct CPU_State initial_cpu = {.pc=0xaa5d, .a=0xfb, .x=0x8e, .y=0x1a, .sp=0xc9, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xaa5d, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xaa5e, .a=0xfb, .x=0x8d, .y=0x1a, .sp=0xc9, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xaa5d, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xaa5d, .value=0x1d, .type=IO_READ},
        {.addr=0xaa5e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0342) {
    const struct CPU_State initial_cpu = {.pc=0xaa5a, .a=0x46, .x=0x1a, .y=0x63, .sp=0xc0, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xaa5a, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xaa5b, .a=0x46, .x=0x19, .y=0x63, .sp=0xc0, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xaa5a, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xaa5a, .value=0x1d, .type=IO_READ},
        {.addr=0xaa5b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0343) {
    const struct CPU_State initial_cpu = {.pc=0x035a, .a=0x5c, .x=0x57, .y=0x3f, .sp=0xa3, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x035a, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x035b, .a=0x5c, .x=0x56, .y=0x3f, .sp=0xa3, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x035a, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x035a, .value=0x1d, .type=IO_READ},
        {.addr=0x035b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0344) {
    const struct CPU_State initial_cpu = {.pc=0x9a34, .a=0xf9, .x=0x76, .y=0xa4, .sp=0xa2, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x9a34, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x9a35, .a=0xf9, .x=0x75, .y=0xa4, .sp=0xa2, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x9a34, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x9a34, .value=0x1d, .type=IO_READ},
        {.addr=0x9a35, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0345) {
    const struct CPU_State initial_cpu = {.pc=0x30d2, .a=0xc5, .x=0x4b, .y=0x08, .sp=0x06, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x30d2, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x30d3, .a=0xc5, .x=0x4a, .y=0x08, .sp=0x06, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x30d2, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x30d2, .value=0x1d, .type=IO_READ},
        {.addr=0x30d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0346) {
    const struct CPU_State initial_cpu = {.pc=0x8a1b, .a=0x84, .x=0x00, .y=0x89, .sp=0x29, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x8a1b, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x8a1c, .a=0x84, .x=0xff, .y=0x89, .sp=0x29, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x8a1b, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x8a1b, .value=0x1d, .type=IO_READ},
        {.addr=0x8a1c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0347) {
    const struct CPU_State initial_cpu = {.pc=0x9af7, .a=0xff, .x=0xee, .y=0x39, .sp=0xd6, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x9af7, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x9af8, .a=0xff, .x=0xed, .y=0x39, .sp=0xd6, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x9af7, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x9af7, .value=0x1d, .type=IO_READ},
        {.addr=0x9af8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0348) {
    const struct CPU_State initial_cpu = {.pc=0x090d, .a=0xa4, .x=0xde, .y=0x1a, .sp=0x4b, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x090d, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x090e, .a=0xa4, .x=0xdd, .y=0x1a, .sp=0x4b, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x090d, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x090d, .value=0x1d, .type=IO_READ},
        {.addr=0x090e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0349) {
    const struct CPU_State initial_cpu = {.pc=0x989c, .a=0x88, .x=0xbe, .y=0x26, .sp=0x11, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x989c, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x989d, .a=0x88, .x=0xbd, .y=0x26, .sp=0x11, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x989c, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x989c, .value=0x1d, .type=IO_READ},
        {.addr=0x989d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_034A) {
    const struct CPU_State initial_cpu = {.pc=0x8cc9, .a=0xf8, .x=0xbc, .y=0x35, .sp=0xd7, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x8cc9, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x8cca, .a=0xf8, .x=0xbb, .y=0x35, .sp=0xd7, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x8cc9, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x8cc9, .value=0x1d, .type=IO_READ},
        {.addr=0x8cca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_034B) {
    const struct CPU_State initial_cpu = {.pc=0xa8d0, .a=0x2e, .x=0x29, .y=0xfd, .sp=0xae, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xa8d0, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xa8d1, .a=0x2e, .x=0x28, .y=0xfd, .sp=0xae, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xa8d0, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xa8d0, .value=0x1d, .type=IO_READ},
        {.addr=0xa8d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_034C) {
    const struct CPU_State initial_cpu = {.pc=0xe5b5, .a=0x34, .x=0x74, .y=0xd3, .sp=0xc3, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xe5b5, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xe5b6, .a=0x34, .x=0x73, .y=0xd3, .sp=0xc3, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xe5b5, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xe5b5, .value=0x1d, .type=IO_READ},
        {.addr=0xe5b6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_034D) {
    const struct CPU_State initial_cpu = {.pc=0xb5ae, .a=0xa1, .x=0x15, .y=0x5d, .sp=0x99, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xb5ae, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xb5af, .a=0xa1, .x=0x14, .y=0x5d, .sp=0x99, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xb5ae, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xb5ae, .value=0x1d, .type=IO_READ},
        {.addr=0xb5af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_034E) {
    const struct CPU_State initial_cpu = {.pc=0x5035, .a=0xb3, .x=0x45, .y=0xa0, .sp=0xae, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x5035, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x5036, .a=0xb3, .x=0x44, .y=0xa0, .sp=0xae, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x5035, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x5035, .value=0x1d, .type=IO_READ},
        {.addr=0x5036, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_034F) {
    const struct CPU_State initial_cpu = {.pc=0x11ea, .a=0xa3, .x=0xa4, .y=0x21, .sp=0xcf, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x11ea, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x11eb, .a=0xa3, .x=0xa3, .y=0x21, .sp=0xcf, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x11ea, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x11ea, .value=0x1d, .type=IO_READ},
        {.addr=0x11eb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0350) {
    const struct CPU_State initial_cpu = {.pc=0x18f6, .a=0x6c, .x=0xac, .y=0xae, .sp=0x0a, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x18f6, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x18f7, .a=0x6c, .x=0xab, .y=0xae, .sp=0x0a, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x18f6, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x18f6, .value=0x1d, .type=IO_READ},
        {.addr=0x18f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0351) {
    const struct CPU_State initial_cpu = {.pc=0x232f, .a=0x41, .x=0x3d, .y=0xfc, .sp=0x88, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x232f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x2330, .a=0x41, .x=0x3c, .y=0xfc, .sp=0x88, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x232f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x232f, .value=0x1d, .type=IO_READ},
        {.addr=0x2330, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0352) {
    const struct CPU_State initial_cpu = {.pc=0x6213, .a=0x9c, .x=0x97, .y=0x35, .sp=0xb6, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x6213, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x6214, .a=0x9c, .x=0x96, .y=0x35, .sp=0xb6, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x6213, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x6213, .value=0x1d, .type=IO_READ},
        {.addr=0x6214, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0353) {
    const struct CPU_State initial_cpu = {.pc=0x81a2, .a=0xcc, .x=0x2d, .y=0x58, .sp=0x74, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x81a2, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x81a3, .a=0xcc, .x=0x2c, .y=0x58, .sp=0x74, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x81a2, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x81a2, .value=0x1d, .type=IO_READ},
        {.addr=0x81a3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0354) {
    const struct CPU_State initial_cpu = {.pc=0xbdac, .a=0x02, .x=0x67, .y=0x7c, .sp=0x3d, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xbdac, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xbdad, .a=0x02, .x=0x66, .y=0x7c, .sp=0x3d, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xbdac, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xbdac, .value=0x1d, .type=IO_READ},
        {.addr=0xbdad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0355) {
    const struct CPU_State initial_cpu = {.pc=0x287f, .a=0x1f, .x=0x42, .y=0xba, .sp=0x45, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x287f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x2880, .a=0x1f, .x=0x41, .y=0xba, .sp=0x45, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x287f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x287f, .value=0x1d, .type=IO_READ},
        {.addr=0x2880, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0356) {
    const struct CPU_State initial_cpu = {.pc=0x263b, .a=0xcb, .x=0xc7, .y=0xfc, .sp=0x1c, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x263b, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x263c, .a=0xcb, .x=0xc6, .y=0xfc, .sp=0x1c, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x263b, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x263b, .value=0x1d, .type=IO_READ},
        {.addr=0x263c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0357) {
    const struct CPU_State initial_cpu = {.pc=0x2584, .a=0x7e, .x=0xb8, .y=0x55, .sp=0x9e, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x2584, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x2585, .a=0x7e, .x=0xb7, .y=0x55, .sp=0x9e, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x2584, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x2584, .value=0x1d, .type=IO_READ},
        {.addr=0x2585, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0358) {
    const struct CPU_State initial_cpu = {.pc=0xa612, .a=0x05, .x=0x8d, .y=0x60, .sp=0xbb, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xa612, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xa613, .a=0x05, .x=0x8c, .y=0x60, .sp=0xbb, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xa612, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xa612, .value=0x1d, .type=IO_READ},
        {.addr=0xa613, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0359) {
    const struct CPU_State initial_cpu = {.pc=0xf59f, .a=0x9c, .x=0x48, .y=0xd5, .sp=0x4b, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xf59f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xf5a0, .a=0x9c, .x=0x47, .y=0xd5, .sp=0x4b, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xf59f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xf59f, .value=0x1d, .type=IO_READ},
        {.addr=0xf5a0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_035A) {
    const struct CPU_State initial_cpu = {.pc=0x5710, .a=0x71, .x=0x4a, .y=0x01, .sp=0x46, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x5710, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x5711, .a=0x71, .x=0x49, .y=0x01, .sp=0x46, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x5710, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x5710, .value=0x1d, .type=IO_READ},
        {.addr=0x5711, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_035B) {
    const struct CPU_State initial_cpu = {.pc=0xb7e7, .a=0x0c, .x=0x83, .y=0xae, .sp=0xee, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xb7e7, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xb7e8, .a=0x0c, .x=0x82, .y=0xae, .sp=0xee, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xb7e7, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xb7e7, .value=0x1d, .type=IO_READ},
        {.addr=0xb7e8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_035C) {
    const struct CPU_State initial_cpu = {.pc=0x6f49, .a=0xdd, .x=0xa2, .y=0xeb, .sp=0x7e, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x6f49, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x6f4a, .a=0xdd, .x=0xa1, .y=0xeb, .sp=0x7e, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x6f49, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x6f49, .value=0x1d, .type=IO_READ},
        {.addr=0x6f4a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_035D) {
    const struct CPU_State initial_cpu = {.pc=0xa5da, .a=0x46, .x=0x98, .y=0x89, .sp=0xc3, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xa5da, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xa5db, .a=0x46, .x=0x97, .y=0x89, .sp=0xc3, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xa5da, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xa5da, .value=0x1d, .type=IO_READ},
        {.addr=0xa5db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_035E) {
    const struct CPU_State initial_cpu = {.pc=0x382f, .a=0x6e, .x=0x94, .y=0x93, .sp=0xe4, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x382f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x3830, .a=0x6e, .x=0x93, .y=0x93, .sp=0xe4, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x382f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x382f, .value=0x1d, .type=IO_READ},
        {.addr=0x3830, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_035F) {
    const struct CPU_State initial_cpu = {.pc=0xc4ff, .a=0x86, .x=0x8a, .y=0xd4, .sp=0x51, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0xc4ff, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc500, .a=0x86, .x=0x89, .y=0xd4, .sp=0x51, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xc4ff, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc4ff, .value=0x1d, .type=IO_READ},
        {.addr=0xc500, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0360) {
    const struct CPU_State initial_cpu = {.pc=0x1fd1, .a=0x23, .x=0xec, .y=0xf7, .sp=0x3a, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x1fd1, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x1fd2, .a=0x23, .x=0xeb, .y=0xf7, .sp=0x3a, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x1fd1, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x1fd1, .value=0x1d, .type=IO_READ},
        {.addr=0x1fd2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0361) {
    const struct CPU_State initial_cpu = {.pc=0x4af2, .a=0xa6, .x=0x73, .y=0x75, .sp=0xc5, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x4af2, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x4af3, .a=0xa6, .x=0x72, .y=0x75, .sp=0xc5, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x4af2, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x4af2, .value=0x1d, .type=IO_READ},
        {.addr=0x4af3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0362) {
    const struct CPU_State initial_cpu = {.pc=0xa200, .a=0xde, .x=0x88, .y=0x95, .sp=0x0b, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xa200, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xa201, .a=0xde, .x=0x87, .y=0x95, .sp=0x0b, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xa200, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xa200, .value=0x1d, .type=IO_READ},
        {.addr=0xa201, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0363) {
    const struct CPU_State initial_cpu = {.pc=0x90bc, .a=0x27, .x=0x33, .y=0x71, .sp=0x1c, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x90bc, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x90bd, .a=0x27, .x=0x32, .y=0x71, .sp=0x1c, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x90bc, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x90bc, .value=0x1d, .type=IO_READ},
        {.addr=0x90bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0364) {
    const struct CPU_State initial_cpu = {.pc=0xef64, .a=0x9e, .x=0xef, .y=0xec, .sp=0xd0, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xef64, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xef65, .a=0x9e, .x=0xee, .y=0xec, .sp=0xd0, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xef64, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xef64, .value=0x1d, .type=IO_READ},
        {.addr=0xef65, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0365) {
    const struct CPU_State initial_cpu = {.pc=0x6cc0, .a=0x11, .x=0x05, .y=0xd1, .sp=0x71, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x6cc0, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x6cc1, .a=0x11, .x=0x04, .y=0xd1, .sp=0x71, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x6cc0, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x6cc0, .value=0x1d, .type=IO_READ},
        {.addr=0x6cc1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0366) {
    const struct CPU_State initial_cpu = {.pc=0x114a, .a=0x68, .x=0x36, .y=0x9a, .sp=0xc0, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x114a, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x114b, .a=0x68, .x=0x35, .y=0x9a, .sp=0xc0, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x114a, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x114a, .value=0x1d, .type=IO_READ},
        {.addr=0x114b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0367) {
    const struct CPU_State initial_cpu = {.pc=0x43e5, .a=0xd4, .x=0x8b, .y=0xc9, .sp=0x02, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x43e5, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x43e6, .a=0xd4, .x=0x8a, .y=0xc9, .sp=0x02, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x43e5, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x43e5, .value=0x1d, .type=IO_READ},
        {.addr=0x43e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0368) {
    const struct CPU_State initial_cpu = {.pc=0x7760, .a=0xf0, .x=0x9b, .y=0xba, .sp=0x00, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x7760, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x7761, .a=0xf0, .x=0x9a, .y=0xba, .sp=0x00, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x7760, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x7760, .value=0x1d, .type=IO_READ},
        {.addr=0x7761, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0369) {
    const struct CPU_State initial_cpu = {.pc=0x7fac, .a=0x00, .x=0xb6, .y=0x4a, .sp=0x38, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x7fac, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x7fad, .a=0x00, .x=0xb5, .y=0x4a, .sp=0x38, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x7fac, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x7fac, .value=0x1d, .type=IO_READ},
        {.addr=0x7fad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_036A) {
    const struct CPU_State initial_cpu = {.pc=0x52e8, .a=0xf2, .x=0x7c, .y=0x9a, .sp=0x99, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x52e8, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x52e9, .a=0xf2, .x=0x7b, .y=0x9a, .sp=0x99, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x52e8, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x52e8, .value=0x1d, .type=IO_READ},
        {.addr=0x52e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_036B) {
    const struct CPU_State initial_cpu = {.pc=0x99af, .a=0xec, .x=0x01, .y=0x70, .sp=0xad, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x99af, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x99b0, .a=0xec, .x=0x00, .y=0x70, .sp=0xad, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x99af, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x99af, .value=0x1d, .type=IO_READ},
        {.addr=0x99b0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_036C) {
    const struct CPU_State initial_cpu = {.pc=0x9392, .a=0x5d, .x=0xf2, .y=0x29, .sp=0x7a, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x9392, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x9393, .a=0x5d, .x=0xf1, .y=0x29, .sp=0x7a, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x9392, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x9392, .value=0x1d, .type=IO_READ},
        {.addr=0x9393, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_036D) {
    const struct CPU_State initial_cpu = {.pc=0x2b66, .a=0x5c, .x=0x2c, .y=0x99, .sp=0x5f, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x2b66, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x2b67, .a=0x5c, .x=0x2b, .y=0x99, .sp=0x5f, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x2b66, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x2b66, .value=0x1d, .type=IO_READ},
        {.addr=0x2b67, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_036E) {
    const struct CPU_State initial_cpu = {.pc=0x4f17, .a=0x3c, .x=0x69, .y=0x8f, .sp=0x41, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x4f17, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x4f18, .a=0x3c, .x=0x68, .y=0x8f, .sp=0x41, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x4f17, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x4f17, .value=0x1d, .type=IO_READ},
        {.addr=0x4f18, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_036F) {
    const struct CPU_State initial_cpu = {.pc=0x981a, .a=0xa4, .x=0xbc, .y=0x63, .sp=0xbe, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x981a, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x981b, .a=0xa4, .x=0xbb, .y=0x63, .sp=0xbe, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x981a, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x981a, .value=0x1d, .type=IO_READ},
        {.addr=0x981b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0370) {
    const struct CPU_State initial_cpu = {.pc=0x9673, .a=0x02, .x=0xac, .y=0x27, .sp=0x46, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x9673, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x9674, .a=0x02, .x=0xab, .y=0x27, .sp=0x46, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x9673, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x9673, .value=0x1d, .type=IO_READ},
        {.addr=0x9674, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0371) {
    const struct CPU_State initial_cpu = {.pc=0x846b, .a=0xb8, .x=0xc2, .y=0x98, .sp=0x94, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x846b, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x846c, .a=0xb8, .x=0xc1, .y=0x98, .sp=0x94, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x846b, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x846b, .value=0x1d, .type=IO_READ},
        {.addr=0x846c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0372) {
    const struct CPU_State initial_cpu = {.pc=0x4942, .a=0x4c, .x=0x19, .y=0x66, .sp=0x55, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x4942, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x4943, .a=0x4c, .x=0x18, .y=0x66, .sp=0x55, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x4942, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x4942, .value=0x1d, .type=IO_READ},
        {.addr=0x4943, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0373) {
    const struct CPU_State initial_cpu = {.pc=0xc35e, .a=0xdd, .x=0x00, .y=0xb4, .sp=0x45, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xc35e, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc35f, .a=0xdd, .x=0xff, .y=0xb4, .sp=0x45, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xc35e, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc35e, .value=0x1d, .type=IO_READ},
        {.addr=0xc35f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0374) {
    const struct CPU_State initial_cpu = {.pc=0x35fc, .a=0xe9, .x=0x83, .y=0x35, .sp=0xbe, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x35fc, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x35fd, .a=0xe9, .x=0x82, .y=0x35, .sp=0xbe, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x35fc, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x35fc, .value=0x1d, .type=IO_READ},
        {.addr=0x35fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0375) {
    const struct CPU_State initial_cpu = {.pc=0x194f, .a=0xb5, .x=0x6a, .y=0x2b, .sp=0x67, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x194f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x1950, .a=0xb5, .x=0x69, .y=0x2b, .sp=0x67, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x194f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x194f, .value=0x1d, .type=IO_READ},
        {.addr=0x1950, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0376) {
    const struct CPU_State initial_cpu = {.pc=0x7e07, .a=0x1e, .x=0x88, .y=0xfc, .sp=0x25, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x7e07, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x7e08, .a=0x1e, .x=0x87, .y=0xfc, .sp=0x25, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x7e07, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x7e07, .value=0x1d, .type=IO_READ},
        {.addr=0x7e08, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0377) {
    const struct CPU_State initial_cpu = {.pc=0x9e6c, .a=0x42, .x=0x4f, .y=0x60, .sp=0xa2, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x9e6c, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x9e6d, .a=0x42, .x=0x4e, .y=0x60, .sp=0xa2, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x9e6c, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x9e6c, .value=0x1d, .type=IO_READ},
        {.addr=0x9e6d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0378) {
    const struct CPU_State initial_cpu = {.pc=0xb3e8, .a=0xad, .x=0x00, .y=0x12, .sp=0x6c, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xb3e8, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xb3e9, .a=0xad, .x=0xff, .y=0x12, .sp=0x6c, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xb3e8, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xb3e8, .value=0x1d, .type=IO_READ},
        {.addr=0xb3e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0379) {
    const struct CPU_State initial_cpu = {.pc=0xddd1, .a=0x6f, .x=0xb6, .y=0x1b, .sp=0xb9, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xddd1, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xddd2, .a=0x6f, .x=0xb5, .y=0x1b, .sp=0xb9, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xddd1, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xddd1, .value=0x1d, .type=IO_READ},
        {.addr=0xddd2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_037A) {
    const struct CPU_State initial_cpu = {.pc=0xd0aa, .a=0xc1, .x=0x23, .y=0x68, .sp=0x3d, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xd0aa, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xd0ab, .a=0xc1, .x=0x22, .y=0x68, .sp=0x3d, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xd0aa, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xd0aa, .value=0x1d, .type=IO_READ},
        {.addr=0xd0ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_037B) {
    const struct CPU_State initial_cpu = {.pc=0x1d5c, .a=0xf0, .x=0x49, .y=0x90, .sp=0xf4, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x1d5c, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x1d5d, .a=0xf0, .x=0x48, .y=0x90, .sp=0xf4, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x1d5c, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x1d5c, .value=0x1d, .type=IO_READ},
        {.addr=0x1d5d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_037C) {
    const struct CPU_State initial_cpu = {.pc=0x056f, .a=0x51, .x=0x82, .y=0x0d, .sp=0xa3, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x056f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x0570, .a=0x51, .x=0x81, .y=0x0d, .sp=0xa3, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x056f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x056f, .value=0x1d, .type=IO_READ},
        {.addr=0x0570, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_037D) {
    const struct CPU_State initial_cpu = {.pc=0xf158, .a=0x46, .x=0x3c, .y=0x32, .sp=0xed, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xf158, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xf159, .a=0x46, .x=0x3b, .y=0x32, .sp=0xed, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xf158, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xf158, .value=0x1d, .type=IO_READ},
        {.addr=0xf159, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_037E) {
    const struct CPU_State initial_cpu = {.pc=0x3021, .a=0x51, .x=0x38, .y=0x79, .sp=0xfa, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x3021, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x3022, .a=0x51, .x=0x37, .y=0x79, .sp=0xfa, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x3021, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x3021, .value=0x1d, .type=IO_READ},
        {.addr=0x3022, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_037F) {
    const struct CPU_State initial_cpu = {.pc=0x14a7, .a=0x2e, .x=0x9d, .y=0x7a, .sp=0xec, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x14a7, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x14a8, .a=0x2e, .x=0x9c, .y=0x7a, .sp=0xec, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x14a7, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x14a7, .value=0x1d, .type=IO_READ},
        {.addr=0x14a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0380) {
    const struct CPU_State initial_cpu = {.pc=0x52a7, .a=0x77, .x=0xf4, .y=0x3c, .sp=0xe4, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x52a7, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x52a8, .a=0x77, .x=0xf3, .y=0x3c, .sp=0xe4, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x52a7, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x52a7, .value=0x1d, .type=IO_READ},
        {.addr=0x52a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0381) {
    const struct CPU_State initial_cpu = {.pc=0xe73b, .a=0xda, .x=0x67, .y=0x39, .sp=0xc9, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xe73b, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xe73c, .a=0xda, .x=0x66, .y=0x39, .sp=0xc9, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xe73b, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xe73b, .value=0x1d, .type=IO_READ},
        {.addr=0xe73c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0382) {
    const struct CPU_State initial_cpu = {.pc=0x8c30, .a=0x59, .x=0x1e, .y=0xb5, .sp=0x51, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x8c30, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x8c31, .a=0x59, .x=0x1d, .y=0xb5, .sp=0x51, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x8c30, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x8c30, .value=0x1d, .type=IO_READ},
        {.addr=0x8c31, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0383) {
    const struct CPU_State initial_cpu = {.pc=0xc2dd, .a=0x2f, .x=0x21, .y=0x0a, .sp=0x74, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xc2dd, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc2de, .a=0x2f, .x=0x20, .y=0x0a, .sp=0x74, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xc2dd, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc2dd, .value=0x1d, .type=IO_READ},
        {.addr=0xc2de, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0384) {
    const struct CPU_State initial_cpu = {.pc=0x6854, .a=0x64, .x=0x51, .y=0xbd, .sp=0xb0, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x6854, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x6855, .a=0x64, .x=0x50, .y=0xbd, .sp=0xb0, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x6854, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x6854, .value=0x1d, .type=IO_READ},
        {.addr=0x6855, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0385) {
    const struct CPU_State initial_cpu = {.pc=0x0f70, .a=0x9e, .x=0xaf, .y=0x86, .sp=0x8a, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x0f70, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x0f71, .a=0x9e, .x=0xae, .y=0x86, .sp=0x8a, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0f70, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x0f70, .value=0x1d, .type=IO_READ},
        {.addr=0x0f71, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0386) {
    const struct CPU_State initial_cpu = {.pc=0x0930, .a=0x3b, .x=0x95, .y=0x78, .sp=0x99, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x0930, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x0931, .a=0x3b, .x=0x94, .y=0x78, .sp=0x99, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0930, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x0930, .value=0x1d, .type=IO_READ},
        {.addr=0x0931, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0387) {
    const struct CPU_State initial_cpu = {.pc=0xcb3b, .a=0x53, .x=0xac, .y=0xdb, .sp=0xd7, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xcb3b, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xcb3c, .a=0x53, .x=0xab, .y=0xdb, .sp=0xd7, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xcb3b, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xcb3b, .value=0x1d, .type=IO_READ},
        {.addr=0xcb3c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0388) {
    const struct CPU_State initial_cpu = {.pc=0x4f6d, .a=0xf7, .x=0xab, .y=0x7e, .sp=0xc2, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x4f6d, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x4f6e, .a=0xf7, .x=0xaa, .y=0x7e, .sp=0xc2, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x4f6d, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x4f6d, .value=0x1d, .type=IO_READ},
        {.addr=0x4f6e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0389) {
    const struct CPU_State initial_cpu = {.pc=0xb0f3, .a=0xff, .x=0x4d, .y=0x8c, .sp=0xbe, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xb0f3, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xb0f4, .a=0xff, .x=0x4c, .y=0x8c, .sp=0xbe, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xb0f3, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xb0f3, .value=0x1d, .type=IO_READ},
        {.addr=0xb0f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_038A) {
    const struct CPU_State initial_cpu = {.pc=0x61e0, .a=0x06, .x=0x88, .y=0x36, .sp=0x64, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x61e0, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x61e1, .a=0x06, .x=0x87, .y=0x36, .sp=0x64, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x61e0, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x61e0, .value=0x1d, .type=IO_READ},
        {.addr=0x61e1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_038B) {
    const struct CPU_State initial_cpu = {.pc=0x556b, .a=0x08, .x=0x89, .y=0x17, .sp=0x12, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x556b, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x556c, .a=0x08, .x=0x88, .y=0x17, .sp=0x12, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x556b, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x556b, .value=0x1d, .type=IO_READ},
        {.addr=0x556c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_038C) {
    const struct CPU_State initial_cpu = {.pc=0x73bb, .a=0x32, .x=0x4f, .y=0x1f, .sp=0xf5, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x73bb, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x73bc, .a=0x32, .x=0x4e, .y=0x1f, .sp=0xf5, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x73bb, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x73bb, .value=0x1d, .type=IO_READ},
        {.addr=0x73bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_038D) {
    const struct CPU_State initial_cpu = {.pc=0x6292, .a=0x95, .x=0x7e, .y=0xef, .sp=0x8a, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x6292, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x6293, .a=0x95, .x=0x7d, .y=0xef, .sp=0x8a, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x6292, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x6292, .value=0x1d, .type=IO_READ},
        {.addr=0x6293, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_038E) {
    const struct CPU_State initial_cpu = {.pc=0x475d, .a=0x74, .x=0xdd, .y=0x06, .sp=0x80, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x475d, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x475e, .a=0x74, .x=0xdc, .y=0x06, .sp=0x80, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x475d, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x475d, .value=0x1d, .type=IO_READ},
        {.addr=0x475e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_038F) {
    const struct CPU_State initial_cpu = {.pc=0xba90, .a=0x27, .x=0xf3, .y=0x8e, .sp=0x4c, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xba90, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xba91, .a=0x27, .x=0xf2, .y=0x8e, .sp=0x4c, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xba90, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xba90, .value=0x1d, .type=IO_READ},
        {.addr=0xba91, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0390) {
    const struct CPU_State initial_cpu = {.pc=0xb75f, .a=0x0a, .x=0xbe, .y=0x03, .sp=0xd2, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xb75f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xb760, .a=0x0a, .x=0xbd, .y=0x03, .sp=0xd2, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xb75f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xb75f, .value=0x1d, .type=IO_READ},
        {.addr=0xb760, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0391) {
    const struct CPU_State initial_cpu = {.pc=0xf10e, .a=0xf6, .x=0x36, .y=0x06, .sp=0x81, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xf10e, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xf10f, .a=0xf6, .x=0x35, .y=0x06, .sp=0x81, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xf10e, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xf10e, .value=0x1d, .type=IO_READ},
        {.addr=0xf10f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0392) {
    const struct CPU_State initial_cpu = {.pc=0xc916, .a=0x10, .x=0xb5, .y=0x69, .sp=0x7c, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xc916, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc917, .a=0x10, .x=0xb4, .y=0x69, .sp=0x7c, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xc916, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc916, .value=0x1d, .type=IO_READ},
        {.addr=0xc917, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0393) {
    const struct CPU_State initial_cpu = {.pc=0xae59, .a=0x47, .x=0xf8, .y=0x49, .sp=0xb3, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xae59, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xae5a, .a=0x47, .x=0xf7, .y=0x49, .sp=0xb3, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xae59, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xae59, .value=0x1d, .type=IO_READ},
        {.addr=0xae5a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0394) {
    const struct CPU_State initial_cpu = {.pc=0xad63, .a=0xb1, .x=0xa3, .y=0xd2, .sp=0x65, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xad63, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xad64, .a=0xb1, .x=0xa2, .y=0xd2, .sp=0x65, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xad63, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xad63, .value=0x1d, .type=IO_READ},
        {.addr=0xad64, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0395) {
    const struct CPU_State initial_cpu = {.pc=0x0909, .a=0x30, .x=0x04, .y=0x1d, .sp=0x26, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x0909, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x090a, .a=0x30, .x=0x03, .y=0x1d, .sp=0x26, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x0909, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x0909, .value=0x1d, .type=IO_READ},
        {.addr=0x090a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0396) {
    const struct CPU_State initial_cpu = {.pc=0x13cc, .a=0x21, .x=0x3f, .y=0xdc, .sp=0x31, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x13cc, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x13cd, .a=0x21, .x=0x3e, .y=0xdc, .sp=0x31, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x13cc, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x13cc, .value=0x1d, .type=IO_READ},
        {.addr=0x13cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0397) {
    const struct CPU_State initial_cpu = {.pc=0xcfe8, .a=0x70, .x=0x5c, .y=0x71, .sp=0xa7, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xcfe8, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xcfe9, .a=0x70, .x=0x5b, .y=0x71, .sp=0xa7, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xcfe8, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xcfe8, .value=0x1d, .type=IO_READ},
        {.addr=0xcfe9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0398) {
    const struct CPU_State initial_cpu = {.pc=0x8fb5, .a=0xa8, .x=0x47, .y=0xaf, .sp=0xca, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x8fb5, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x8fb6, .a=0xa8, .x=0x46, .y=0xaf, .sp=0xca, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x8fb5, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x8fb5, .value=0x1d, .type=IO_READ},
        {.addr=0x8fb6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_0399) {
    const struct CPU_State initial_cpu = {.pc=0xcfe0, .a=0xbf, .x=0x11, .y=0xf8, .sp=0x83, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xcfe0, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xcfe1, .a=0xbf, .x=0x10, .y=0xf8, .sp=0x83, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xcfe0, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xcfe0, .value=0x1d, .type=IO_READ},
        {.addr=0xcfe1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_039A) {
    const struct CPU_State initial_cpu = {.pc=0x3b54, .a=0xb4, .x=0x4d, .y=0x97, .sp=0x3b, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x3b54, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x3b55, .a=0xb4, .x=0x4c, .y=0x97, .sp=0x3b, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x3b54, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x3b54, .value=0x1d, .type=IO_READ},
        {.addr=0x3b55, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_039B) {
    const struct CPU_State initial_cpu = {.pc=0x1616, .a=0xb7, .x=0xbe, .y=0xe1, .sp=0xe9, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x1616, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x1617, .a=0xb7, .x=0xbd, .y=0xe1, .sp=0xe9, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x1616, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x1616, .value=0x1d, .type=IO_READ},
        {.addr=0x1617, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_039C) {
    const struct CPU_State initial_cpu = {.pc=0x35d6, .a=0x8a, .x=0xd8, .y=0x8c, .sp=0x80, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x35d6, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x35d7, .a=0x8a, .x=0xd7, .y=0x8c, .sp=0x80, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x35d6, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x35d6, .value=0x1d, .type=IO_READ},
        {.addr=0x35d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_039D) {
    const struct CPU_State initial_cpu = {.pc=0xe061, .a=0x72, .x=0x98, .y=0xa0, .sp=0x10, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xe061, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xe062, .a=0x72, .x=0x97, .y=0xa0, .sp=0x10, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xe061, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xe061, .value=0x1d, .type=IO_READ},
        {.addr=0xe062, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_039E) {
    const struct CPU_State initial_cpu = {.pc=0x031f, .a=0x4a, .x=0xe1, .y=0xeb, .sp=0x3b, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x031f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x0320, .a=0x4a, .x=0xe0, .y=0xeb, .sp=0x3b, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x031f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x031f, .value=0x1d, .type=IO_READ},
        {.addr=0x0320, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_039F) {
    const struct CPU_State initial_cpu = {.pc=0x0a57, .a=0x20, .x=0xe5, .y=0x50, .sp=0xf2, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x0a57, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x0a58, .a=0x20, .x=0xe4, .y=0x50, .sp=0xf2, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0a57, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x0a57, .value=0x1d, .type=IO_READ},
        {.addr=0x0a58, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03A0) {
    const struct CPU_State initial_cpu = {.pc=0x8b39, .a=0x4c, .x=0xb8, .y=0xe3, .sp=0xce, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x8b39, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x8b3a, .a=0x4c, .x=0xb7, .y=0xe3, .sp=0xce, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x8b39, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x8b39, .value=0x1d, .type=IO_READ},
        {.addr=0x8b3a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03A1) {
    const struct CPU_State initial_cpu = {.pc=0xf2be, .a=0xc6, .x=0xd3, .y=0xe9, .sp=0xb5, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xf2be, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xf2bf, .a=0xc6, .x=0xd2, .y=0xe9, .sp=0xb5, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xf2be, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xf2be, .value=0x1d, .type=IO_READ},
        {.addr=0xf2bf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03A2) {
    const struct CPU_State initial_cpu = {.pc=0x2d39, .a=0x03, .x=0x5b, .y=0x86, .sp=0x86, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x2d39, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x2d3a, .a=0x03, .x=0x5a, .y=0x86, .sp=0x86, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x2d39, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x2d39, .value=0x1d, .type=IO_READ},
        {.addr=0x2d3a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03A3) {
    const struct CPU_State initial_cpu = {.pc=0x3316, .a=0xa5, .x=0xf5, .y=0x26, .sp=0xda, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x3316, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x3317, .a=0xa5, .x=0xf4, .y=0x26, .sp=0xda, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x3316, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x3316, .value=0x1d, .type=IO_READ},
        {.addr=0x3317, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03A4) {
    const struct CPU_State initial_cpu = {.pc=0x671c, .a=0x25, .x=0xe5, .y=0x11, .sp=0xd5, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x671c, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x671d, .a=0x25, .x=0xe4, .y=0x11, .sp=0xd5, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x671c, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x671c, .value=0x1d, .type=IO_READ},
        {.addr=0x671d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03A5) {
    const struct CPU_State initial_cpu = {.pc=0x0b63, .a=0x90, .x=0x62, .y=0xa5, .sp=0x9c, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x0b63, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x0b64, .a=0x90, .x=0x61, .y=0xa5, .sp=0x9c, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0b63, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x0b63, .value=0x1d, .type=IO_READ},
        {.addr=0x0b64, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x004e, .a=0x9f, .x=0xf6, .y=0x6f, .sp=0x45, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x004e, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x004f, .a=0x9f, .x=0xf5, .y=0x6f, .sp=0x45, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x004e, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x004e, .value=0x1d, .type=IO_READ},
        {.addr=0x004f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x8984, .a=0x65, .x=0xbd, .y=0x5e, .sp=0xe5, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x8984, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x8985, .a=0x65, .x=0xbc, .y=0x5e, .sp=0xe5, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x8984, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x8984, .value=0x1d, .type=IO_READ},
        {.addr=0x8985, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03A8) {
    const struct CPU_State initial_cpu = {.pc=0x7a1b, .a=0x9e, .x=0xe9, .y=0x82, .sp=0x1f, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x7a1b, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x7a1c, .a=0x9e, .x=0xe8, .y=0x82, .sp=0x1f, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x7a1b, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x7a1b, .value=0x1d, .type=IO_READ},
        {.addr=0x7a1c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03A9) {
    const struct CPU_State initial_cpu = {.pc=0xb5ec, .a=0x48, .x=0x17, .y=0x2d, .sp=0xdb, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xb5ec, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xb5ed, .a=0x48, .x=0x16, .y=0x2d, .sp=0xdb, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xb5ec, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xb5ec, .value=0x1d, .type=IO_READ},
        {.addr=0xb5ed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03AA) {
    const struct CPU_State initial_cpu = {.pc=0xa07d, .a=0xc7, .x=0x33, .y=0x3b, .sp=0x1a, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xa07d, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xa07e, .a=0xc7, .x=0x32, .y=0x3b, .sp=0x1a, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xa07d, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xa07d, .value=0x1d, .type=IO_READ},
        {.addr=0xa07e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03AB) {
    const struct CPU_State initial_cpu = {.pc=0xeac8, .a=0x0d, .x=0x2c, .y=0xf1, .sp=0x00, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xeac8, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xeac9, .a=0x0d, .x=0x2b, .y=0xf1, .sp=0x00, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xeac8, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xeac8, .value=0x1d, .type=IO_READ},
        {.addr=0xeac9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03AC) {
    const struct CPU_State initial_cpu = {.pc=0xdba6, .a=0x2c, .x=0x4c, .y=0x0c, .sp=0x4c, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xdba6, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xdba7, .a=0x2c, .x=0x4b, .y=0x0c, .sp=0x4c, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xdba6, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xdba6, .value=0x1d, .type=IO_READ},
        {.addr=0xdba7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03AD) {
    const struct CPU_State initial_cpu = {.pc=0x593e, .a=0x3b, .x=0x7a, .y=0xad, .sp=0x6c, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x593e, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x593f, .a=0x3b, .x=0x79, .y=0xad, .sp=0x6c, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x593e, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x593e, .value=0x1d, .type=IO_READ},
        {.addr=0x593f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x0628, .a=0x74, .x=0x28, .y=0x48, .sp=0xf5, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x0628, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x0629, .a=0x74, .x=0x27, .y=0x48, .sp=0xf5, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x0628, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x0628, .value=0x1d, .type=IO_READ},
        {.addr=0x0629, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03AF) {
    const struct CPU_State initial_cpu = {.pc=0x922b, .a=0x6c, .x=0xec, .y=0x35, .sp=0x86, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x922b, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x922c, .a=0x6c, .x=0xeb, .y=0x35, .sp=0x86, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x922b, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x922b, .value=0x1d, .type=IO_READ},
        {.addr=0x922c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03B0) {
    const struct CPU_State initial_cpu = {.pc=0xaf8e, .a=0xee, .x=0x54, .y=0x91, .sp=0xbd, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xaf8e, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xaf8f, .a=0xee, .x=0x53, .y=0x91, .sp=0xbd, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xaf8e, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xaf8e, .value=0x1d, .type=IO_READ},
        {.addr=0xaf8f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x8dca, .a=0xb2, .x=0xae, .y=0x0d, .sp=0xbd, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x8dca, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x8dcb, .a=0xb2, .x=0xad, .y=0x0d, .sp=0xbd, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x8dca, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x8dca, .value=0x1d, .type=IO_READ},
        {.addr=0x8dcb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03B2) {
    const struct CPU_State initial_cpu = {.pc=0x5e7c, .a=0xff, .x=0x73, .y=0x7f, .sp=0x9c, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x5e7c, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x5e7d, .a=0xff, .x=0x72, .y=0x7f, .sp=0x9c, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x5e7c, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x5e7c, .value=0x1d, .type=IO_READ},
        {.addr=0x5e7d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03B3) {
    const struct CPU_State initial_cpu = {.pc=0xd5fb, .a=0x21, .x=0xed, .y=0xb5, .sp=0xa2, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xd5fb, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xd5fc, .a=0x21, .x=0xec, .y=0xb5, .sp=0xa2, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xd5fb, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xd5fb, .value=0x1d, .type=IO_READ},
        {.addr=0xd5fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x26d3, .a=0xed, .x=0xe4, .y=0xed, .sp=0x44, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x26d3, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x26d4, .a=0xed, .x=0xe3, .y=0xed, .sp=0x44, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x26d3, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x26d3, .value=0x1d, .type=IO_READ},
        {.addr=0x26d4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03B5) {
    const struct CPU_State initial_cpu = {.pc=0x121e, .a=0xdd, .x=0x10, .y=0xfe, .sp=0xe0, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x121e, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x121f, .a=0xdd, .x=0x0f, .y=0xfe, .sp=0xe0, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x121e, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x121e, .value=0x1d, .type=IO_READ},
        {.addr=0x121f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03B6) {
    const struct CPU_State initial_cpu = {.pc=0xbfdf, .a=0x21, .x=0x5d, .y=0xf7, .sp=0x86, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xbfdf, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xbfe0, .a=0x21, .x=0x5c, .y=0xf7, .sp=0x86, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xbfdf, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xbfdf, .value=0x1d, .type=IO_READ},
        {.addr=0xbfe0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03B7) {
    const struct CPU_State initial_cpu = {.pc=0xfc19, .a=0xbb, .x=0x2c, .y=0xb9, .sp=0xee, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xfc19, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xfc1a, .a=0xbb, .x=0x2b, .y=0xb9, .sp=0xee, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xfc19, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xfc19, .value=0x1d, .type=IO_READ},
        {.addr=0xfc1a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03B8) {
    const struct CPU_State initial_cpu = {.pc=0x84d6, .a=0xbb, .x=0x4a, .y=0x76, .sp=0xa4, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x84d6, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x84d7, .a=0xbb, .x=0x49, .y=0x76, .sp=0xa4, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x84d6, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x84d6, .value=0x1d, .type=IO_READ},
        {.addr=0x84d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03B9) {
    const struct CPU_State initial_cpu = {.pc=0x45b1, .a=0x22, .x=0x1d, .y=0x7b, .sp=0xa0, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x45b1, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x45b2, .a=0x22, .x=0x1c, .y=0x7b, .sp=0xa0, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x45b1, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x45b1, .value=0x1d, .type=IO_READ},
        {.addr=0x45b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03BA) {
    const struct CPU_State initial_cpu = {.pc=0x39c6, .a=0x9a, .x=0xd5, .y=0xc6, .sp=0xe3, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x39c6, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x39c7, .a=0x9a, .x=0xd4, .y=0xc6, .sp=0xe3, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x39c6, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x39c6, .value=0x1d, .type=IO_READ},
        {.addr=0x39c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03BB) {
    const struct CPU_State initial_cpu = {.pc=0x068d, .a=0x8a, .x=0x2d, .y=0x62, .sp=0x6c, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x068d, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x068e, .a=0x8a, .x=0x2c, .y=0x62, .sp=0x6c, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x068d, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x068d, .value=0x1d, .type=IO_READ},
        {.addr=0x068e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03BC) {
    const struct CPU_State initial_cpu = {.pc=0x778c, .a=0x67, .x=0xfd, .y=0x19, .sp=0x60, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x778c, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x778d, .a=0x67, .x=0xfc, .y=0x19, .sp=0x60, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x778c, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x778c, .value=0x1d, .type=IO_READ},
        {.addr=0x778d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03BD) {
    const struct CPU_State initial_cpu = {.pc=0xec04, .a=0x9b, .x=0x9f, .y=0xa9, .sp=0xf2, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xec04, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xec05, .a=0x9b, .x=0x9e, .y=0xa9, .sp=0xf2, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xec04, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xec04, .value=0x1d, .type=IO_READ},
        {.addr=0xec05, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03BE) {
    const struct CPU_State initial_cpu = {.pc=0x072b, .a=0xb3, .x=0xff, .y=0x08, .sp=0x30, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x072b, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x072c, .a=0xb3, .x=0xfe, .y=0x08, .sp=0x30, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x072b, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x072b, .value=0x1d, .type=IO_READ},
        {.addr=0x072c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03BF) {
    const struct CPU_State initial_cpu = {.pc=0xf591, .a=0x7c, .x=0xe7, .y=0x0c, .sp=0x36, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xf591, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xf592, .a=0x7c, .x=0xe6, .y=0x0c, .sp=0x36, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xf591, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xf591, .value=0x1d, .type=IO_READ},
        {.addr=0xf592, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03C0) {
    const struct CPU_State initial_cpu = {.pc=0xabab, .a=0x7e, .x=0xe1, .y=0x2d, .sp=0x6a, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xabab, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xabac, .a=0x7e, .x=0xe0, .y=0x2d, .sp=0x6a, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xabab, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xabab, .value=0x1d, .type=IO_READ},
        {.addr=0xabac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03C1) {
    const struct CPU_State initial_cpu = {.pc=0x5e5e, .a=0x33, .x=0x7b, .y=0x25, .sp=0x57, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x5e5e, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x5e5f, .a=0x33, .x=0x7a, .y=0x25, .sp=0x57, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x5e5e, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x5e5e, .value=0x1d, .type=IO_READ},
        {.addr=0x5e5f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03C2) {
    const struct CPU_State initial_cpu = {.pc=0xc69b, .a=0xe2, .x=0xd7, .y=0x02, .sp=0xd5, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xc69b, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc69c, .a=0xe2, .x=0xd6, .y=0x02, .sp=0xd5, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xc69b, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc69b, .value=0x1d, .type=IO_READ},
        {.addr=0xc69c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03C3) {
    const struct CPU_State initial_cpu = {.pc=0xc129, .a=0x97, .x=0x54, .y=0x48, .sp=0xbe, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xc129, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc12a, .a=0x97, .x=0x53, .y=0x48, .sp=0xbe, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xc129, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc129, .value=0x1d, .type=IO_READ},
        {.addr=0xc12a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03C4) {
    const struct CPU_State initial_cpu = {.pc=0x09e3, .a=0xf1, .x=0xce, .y=0x92, .sp=0xd3, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x09e3, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x09e4, .a=0xf1, .x=0xcd, .y=0x92, .sp=0xd3, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x09e3, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x09e3, .value=0x1d, .type=IO_READ},
        {.addr=0x09e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03C5) {
    const struct CPU_State initial_cpu = {.pc=0x475d, .a=0x6e, .x=0x47, .y=0x57, .sp=0x9c, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x475d, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x475e, .a=0x6e, .x=0x46, .y=0x57, .sp=0x9c, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x475d, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x475d, .value=0x1d, .type=IO_READ},
        {.addr=0x475e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x2afe, .a=0x36, .x=0xc1, .y=0x11, .sp=0xaf, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x2afe, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x2aff, .a=0x36, .x=0xc0, .y=0x11, .sp=0xaf, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x2afe, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x2afe, .value=0x1d, .type=IO_READ},
        {.addr=0x2aff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03C7) {
    const struct CPU_State initial_cpu = {.pc=0xc3da, .a=0xe8, .x=0x33, .y=0x49, .sp=0x2b, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xc3da, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc3db, .a=0xe8, .x=0x32, .y=0x49, .sp=0x2b, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xc3da, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc3da, .value=0x1d, .type=IO_READ},
        {.addr=0xc3db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03C8) {
    const struct CPU_State initial_cpu = {.pc=0x0150, .a=0x93, .x=0xd5, .y=0xa1, .sp=0x3a, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x0151, .a=0x93, .x=0xd4, .y=0xa1, .sp=0x3a, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x0150, .value=0x1d, .type=IO_READ},
        {.addr=0x0151, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03C9) {
    const struct CPU_State initial_cpu = {.pc=0x0f4b, .a=0x07, .x=0xd2, .y=0x56, .sp=0xea, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x0f4b, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x0f4c, .a=0x07, .x=0xd1, .y=0x56, .sp=0xea, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0f4b, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x0f4b, .value=0x1d, .type=IO_READ},
        {.addr=0x0f4c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x68a8, .a=0x52, .x=0x2c, .y=0x85, .sp=0xdd, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x68a8, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x68a9, .a=0x52, .x=0x2b, .y=0x85, .sp=0xdd, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x68a8, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x68a8, .value=0x1d, .type=IO_READ},
        {.addr=0x68a9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03CB) {
    const struct CPU_State initial_cpu = {.pc=0xd7c4, .a=0x63, .x=0x14, .y=0x98, .sp=0x02, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xd7c4, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xd7c5, .a=0x63, .x=0x13, .y=0x98, .sp=0x02, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xd7c4, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xd7c4, .value=0x1d, .type=IO_READ},
        {.addr=0xd7c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03CC) {
    const struct CPU_State initial_cpu = {.pc=0xff38, .a=0x6d, .x=0x01, .y=0x06, .sp=0x00, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xff38, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xff39, .a=0x6d, .x=0x00, .y=0x06, .sp=0x00, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0xff38, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xff38, .value=0x1d, .type=IO_READ},
        {.addr=0xff39, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03CD) {
    const struct CPU_State initial_cpu = {.pc=0xf05a, .a=0x4a, .x=0x3b, .y=0xee, .sp=0x95, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0xf05a, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xf05b, .a=0x4a, .x=0x3a, .y=0xee, .sp=0x95, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xf05a, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xf05a, .value=0x1d, .type=IO_READ},
        {.addr=0xf05b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03CE) {
    const struct CPU_State initial_cpu = {.pc=0xe1b2, .a=0xfc, .x=0xe4, .y=0xa3, .sp=0x6f, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xe1b2, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xe1b3, .a=0xfc, .x=0xe3, .y=0xa3, .sp=0x6f, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xe1b2, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xe1b2, .value=0x1d, .type=IO_READ},
        {.addr=0xe1b3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x3f3c, .a=0x9d, .x=0x7e, .y=0x0c, .sp=0xbf, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x3f3c, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x3f3d, .a=0x9d, .x=0x7d, .y=0x0c, .sp=0xbf, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x3f3c, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x3f3c, .value=0x1d, .type=IO_READ},
        {.addr=0x3f3d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x530c, .a=0x28, .x=0x3d, .y=0x04, .sp=0x56, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x530c, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x530d, .a=0x28, .x=0x3c, .y=0x04, .sp=0x56, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x530c, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x530c, .value=0x1d, .type=IO_READ},
        {.addr=0x530d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03D1) {
    const struct CPU_State initial_cpu = {.pc=0x79d5, .a=0x66, .x=0x01, .y=0xe3, .sp=0x59, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x79d5, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x79d6, .a=0x66, .x=0x00, .y=0xe3, .sp=0x59, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x79d5, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x79d5, .value=0x1d, .type=IO_READ},
        {.addr=0x79d6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03D2) {
    const struct CPU_State initial_cpu = {.pc=0x08b9, .a=0x27, .x=0x11, .y=0x06, .sp=0xee, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x08b9, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x08ba, .a=0x27, .x=0x10, .y=0x06, .sp=0xee, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x08b9, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x08b9, .value=0x1d, .type=IO_READ},
        {.addr=0x08ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03D3) {
    const struct CPU_State initial_cpu = {.pc=0x8607, .a=0x2d, .x=0xdf, .y=0x22, .sp=0x65, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x8607, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x8608, .a=0x2d, .x=0xde, .y=0x22, .sp=0x65, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x8607, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x8607, .value=0x1d, .type=IO_READ},
        {.addr=0x8608, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03D4) {
    const struct CPU_State initial_cpu = {.pc=0x4555, .a=0x43, .x=0x46, .y=0xde, .sp=0x09, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x4555, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x4556, .a=0x43, .x=0x45, .y=0xde, .sp=0x09, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x4555, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x4555, .value=0x1d, .type=IO_READ},
        {.addr=0x4556, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03D5) {
    const struct CPU_State initial_cpu = {.pc=0xe22a, .a=0xad, .x=0xc4, .y=0x9c, .sp=0xc8, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xe22a, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xe22b, .a=0xad, .x=0xc3, .y=0x9c, .sp=0xc8, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xe22a, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xe22a, .value=0x1d, .type=IO_READ},
        {.addr=0xe22b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03D6) {
    const struct CPU_State initial_cpu = {.pc=0xe122, .a=0x01, .x=0x3f, .y=0x87, .sp=0xb7, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xe122, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xe123, .a=0x01, .x=0x3e, .y=0x87, .sp=0xb7, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xe122, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xe122, .value=0x1d, .type=IO_READ},
        {.addr=0xe123, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03D7) {
    const struct CPU_State initial_cpu = {.pc=0x710c, .a=0xd1, .x=0xb5, .y=0xb2, .sp=0x5f, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x710c, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x710d, .a=0xd1, .x=0xb4, .y=0xb2, .sp=0x5f, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x710c, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x710c, .value=0x1d, .type=IO_READ},
        {.addr=0x710d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03D8) {
    const struct CPU_State initial_cpu = {.pc=0x9fef, .a=0xd6, .x=0x82, .y=0x67, .sp=0xea, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x9fef, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x9ff0, .a=0xd6, .x=0x81, .y=0x67, .sp=0xea, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x9fef, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x9fef, .value=0x1d, .type=IO_READ},
        {.addr=0x9ff0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03D9) {
    const struct CPU_State initial_cpu = {.pc=0x862f, .a=0x15, .x=0xdf, .y=0x9e, .sp=0x79, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x862f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x8630, .a=0x15, .x=0xde, .y=0x9e, .sp=0x79, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x862f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x862f, .value=0x1d, .type=IO_READ},
        {.addr=0x8630, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03DA) {
    const struct CPU_State initial_cpu = {.pc=0x6edc, .a=0x24, .x=0x81, .y=0xd3, .sp=0x7b, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x6edc, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x6edd, .a=0x24, .x=0x80, .y=0xd3, .sp=0x7b, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x6edc, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x6edc, .value=0x1d, .type=IO_READ},
        {.addr=0x6edd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03DB) {
    const struct CPU_State initial_cpu = {.pc=0xa51d, .a=0xd7, .x=0x14, .y=0xa9, .sp=0x1b, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xa51d, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xa51e, .a=0xd7, .x=0x13, .y=0xa9, .sp=0x1b, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xa51d, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xa51d, .value=0x1d, .type=IO_READ},
        {.addr=0xa51e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03DC) {
    const struct CPU_State initial_cpu = {.pc=0x623e, .a=0xdd, .x=0x39, .y=0x96, .sp=0x6c, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x623e, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x623f, .a=0xdd, .x=0x38, .y=0x96, .sp=0x6c, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x623e, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x623e, .value=0x1d, .type=IO_READ},
        {.addr=0x623f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03DD) {
    const struct CPU_State initial_cpu = {.pc=0xf636, .a=0x02, .x=0x6f, .y=0xc3, .sp=0x09, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xf636, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xf637, .a=0x02, .x=0x6e, .y=0xc3, .sp=0x09, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xf636, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xf636, .value=0x1d, .type=IO_READ},
        {.addr=0xf637, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03DE) {
    const struct CPU_State initial_cpu = {.pc=0x1ffb, .a=0x4c, .x=0xbc, .y=0x2f, .sp=0xff, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x1ffb, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x1ffc, .a=0x4c, .x=0xbb, .y=0x2f, .sp=0xff, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x1ffb, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x1ffb, .value=0x1d, .type=IO_READ},
        {.addr=0x1ffc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x431b, .a=0x14, .x=0xdc, .y=0xc8, .sp=0xc9, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x431b, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x431c, .a=0x14, .x=0xdb, .y=0xc8, .sp=0xc9, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x431b, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x431b, .value=0x1d, .type=IO_READ},
        {.addr=0x431c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03E0) {
    const struct CPU_State initial_cpu = {.pc=0xe477, .a=0x7c, .x=0x46, .y=0x2d, .sp=0xe1, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xe477, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xe478, .a=0x7c, .x=0x45, .y=0x2d, .sp=0xe1, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xe477, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xe477, .value=0x1d, .type=IO_READ},
        {.addr=0xe478, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03E1) {
    const struct CPU_State initial_cpu = {.pc=0x1a51, .a=0x0d, .x=0xcf, .y=0xc6, .sp=0xf4, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x1a51, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x1a52, .a=0x0d, .x=0xce, .y=0xc6, .sp=0xf4, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x1a51, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x1a51, .value=0x1d, .type=IO_READ},
        {.addr=0x1a52, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03E2) {
    const struct CPU_State initial_cpu = {.pc=0x64d3, .a=0x76, .x=0x34, .y=0x25, .sp=0x42, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x64d3, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x64d4, .a=0x76, .x=0x33, .y=0x25, .sp=0x42, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x64d3, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x64d3, .value=0x1d, .type=IO_READ},
        {.addr=0x64d4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03E3) {
    const struct CPU_State initial_cpu = {.pc=0x737e, .a=0x50, .x=0xe0, .y=0x23, .sp=0xd7, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x737e, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x737f, .a=0x50, .x=0xdf, .y=0x23, .sp=0xd7, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x737e, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x737e, .value=0x1d, .type=IO_READ},
        {.addr=0x737f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x1d16, .a=0x5e, .x=0x11, .y=0x8a, .sp=0x21, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x1d16, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x1d17, .a=0x5e, .x=0x10, .y=0x8a, .sp=0x21, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x1d16, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x1d16, .value=0x1d, .type=IO_READ},
        {.addr=0x1d17, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03E5) {
    const struct CPU_State initial_cpu = {.pc=0x1c55, .a=0xab, .x=0xc6, .y=0xf9, .sp=0x26, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x1c55, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x1c56, .a=0xab, .x=0xc5, .y=0xf9, .sp=0x26, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x1c55, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x1c55, .value=0x1d, .type=IO_READ},
        {.addr=0x1c56, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03E6) {
    const struct CPU_State initial_cpu = {.pc=0x117e, .a=0xb7, .x=0xf4, .y=0xbe, .sp=0xf2, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x117e, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x117f, .a=0xb7, .x=0xf3, .y=0xbe, .sp=0xf2, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x117e, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x117e, .value=0x1d, .type=IO_READ},
        {.addr=0x117f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1D, _1D_03E7) {
    const struct CPU_State initial_cpu = {.pc=0x123e, .a=0x74, .x=0x10, .y=0x08, .sp=0x67, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x123e, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x123f, .a=0x74, .x=0x0f, .y=0x08, .sp=0x67, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x123e, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x123e, .value=0x1d, .type=IO_READ},
        {.addr=0x123f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1D 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
