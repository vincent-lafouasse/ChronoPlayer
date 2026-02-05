#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_00, _00_0000) {
    const struct CPU_State initial_cpu = {.pc=0x7630, .a=0x38, .x=0x4e, .y=0x7f, .sp=0xec, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x7630, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7631, .a=0x38, .x=0x4e, .y=0x7f, .sp=0xec, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x7630, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7630, .value=0x00, .type=IO_READ},
        {.addr=0x7631, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0001) {
    const struct CPU_State initial_cpu = {.pc=0xae69, .a=0xab, .x=0x7d, .y=0xba, .sp=0x84, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xae69, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xae6a, .a=0xab, .x=0x7d, .y=0xba, .sp=0x84, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0xae69, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xae69, .value=0x00, .type=IO_READ},
        {.addr=0xae6a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0002) {
    const struct CPU_State initial_cpu = {.pc=0xd35f, .a=0x29, .x=0xca, .y=0x63, .sp=0xfb, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xd35f, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xd360, .a=0x29, .x=0xca, .y=0x63, .sp=0xfb, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xd35f, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xd35f, .value=0x00, .type=IO_READ},
        {.addr=0xd360, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0003) {
    const struct CPU_State initial_cpu = {.pc=0x346e, .a=0x34, .x=0x9d, .y=0xb7, .sp=0x3e, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x346e, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x346f, .a=0x34, .x=0x9d, .y=0xb7, .sp=0x3e, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x346e, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x346e, .value=0x00, .type=IO_READ},
        {.addr=0x346f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0004) {
    const struct CPU_State initial_cpu = {.pc=0x7b93, .a=0x88, .x=0xe3, .y=0xbe, .sp=0xf4, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x7b93, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7b94, .a=0x88, .x=0xe3, .y=0xbe, .sp=0xf4, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x7b93, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7b93, .value=0x00, .type=IO_READ},
        {.addr=0x7b94, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0005) {
    const struct CPU_State initial_cpu = {.pc=0xcb3d, .a=0x04, .x=0xbc, .y=0xed, .sp=0xeb, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xcb3d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xcb3e, .a=0x04, .x=0xbc, .y=0xed, .sp=0xeb, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0xcb3d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xcb3d, .value=0x00, .type=IO_READ},
        {.addr=0xcb3e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0006) {
    const struct CPU_State initial_cpu = {.pc=0xb931, .a=0xf7, .x=0xe8, .y=0x81, .sp=0xa5, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xb931, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xb932, .a=0xf7, .x=0xe8, .y=0x81, .sp=0xa5, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xb931, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xb931, .value=0x00, .type=IO_READ},
        {.addr=0xb932, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0007) {
    const struct CPU_State initial_cpu = {.pc=0x9a13, .a=0x07, .x=0x1d, .y=0xa0, .sp=0xeb, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x9a13, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x9a14, .a=0x07, .x=0x1d, .y=0xa0, .sp=0xeb, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x9a13, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x9a13, .value=0x00, .type=IO_READ},
        {.addr=0x9a14, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0008) {
    const struct CPU_State initial_cpu = {.pc=0x3339, .a=0x8b, .x=0x2f, .y=0x29, .sp=0x9a, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x3339, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x333a, .a=0x8b, .x=0x2f, .y=0x29, .sp=0x9a, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x3339, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x3339, .value=0x00, .type=IO_READ},
        {.addr=0x333a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0009) {
    const struct CPU_State initial_cpu = {.pc=0x72e2, .a=0xb0, .x=0x55, .y=0x99, .sp=0x91, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x72e2, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x72e3, .a=0xb0, .x=0x55, .y=0x99, .sp=0x91, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x72e2, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x72e2, .value=0x00, .type=IO_READ},
        {.addr=0x72e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_000A) {
    const struct CPU_State initial_cpu = {.pc=0x7eb5, .a=0x76, .x=0xcb, .y=0x3e, .sp=0xe3, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x7eb5, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7eb6, .a=0x76, .x=0xcb, .y=0x3e, .sp=0xe3, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x7eb5, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7eb5, .value=0x00, .type=IO_READ},
        {.addr=0x7eb6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_000B) {
    const struct CPU_State initial_cpu = {.pc=0xf33d, .a=0x7c, .x=0xb4, .y=0x27, .sp=0x30, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xf33d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xf33e, .a=0x7c, .x=0xb4, .y=0x27, .sp=0x30, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xf33d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xf33d, .value=0x00, .type=IO_READ},
        {.addr=0xf33e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_000C) {
    const struct CPU_State initial_cpu = {.pc=0xbbaf, .a=0x3d, .x=0x53, .y=0x42, .sp=0xbc, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xbbaf, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xbbb0, .a=0x3d, .x=0x53, .y=0x42, .sp=0xbc, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0xbbaf, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xbbaf, .value=0x00, .type=IO_READ},
        {.addr=0xbbb0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_000D) {
    const struct CPU_State initial_cpu = {.pc=0x1d2c, .a=0x98, .x=0xa8, .y=0x79, .sp=0x20, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x1d2c, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x1d2d, .a=0x98, .x=0xa8, .y=0x79, .sp=0x20, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x1d2c, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x1d2c, .value=0x00, .type=IO_READ},
        {.addr=0x1d2d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_000E) {
    const struct CPU_State initial_cpu = {.pc=0xdd64, .a=0x5a, .x=0x7b, .y=0xaa, .sp=0x3f, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xdd64, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xdd65, .a=0x5a, .x=0x7b, .y=0xaa, .sp=0x3f, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xdd64, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xdd64, .value=0x00, .type=IO_READ},
        {.addr=0xdd65, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_000F) {
    const struct CPU_State initial_cpu = {.pc=0x36c7, .a=0x52, .x=0xce, .y=0x93, .sp=0x2c, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x36c7, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x36c8, .a=0x52, .x=0xce, .y=0x93, .sp=0x2c, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x36c7, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x36c7, .value=0x00, .type=IO_READ},
        {.addr=0x36c8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0010) {
    const struct CPU_State initial_cpu = {.pc=0xf5df, .a=0xa7, .x=0x85, .y=0x0c, .sp=0x04, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xf5df, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xf5e0, .a=0xa7, .x=0x85, .y=0x0c, .sp=0x04, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0xf5df, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xf5df, .value=0x00, .type=IO_READ},
        {.addr=0xf5e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0011) {
    const struct CPU_State initial_cpu = {.pc=0x41ee, .a=0x9f, .x=0x6d, .y=0xf2, .sp=0xfa, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x41ee, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x41ef, .a=0x9f, .x=0x6d, .y=0xf2, .sp=0xfa, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x41ee, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x41ee, .value=0x00, .type=IO_READ},
        {.addr=0x41ef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0012) {
    const struct CPU_State initial_cpu = {.pc=0xfdcb, .a=0xb8, .x=0x67, .y=0x5d, .sp=0xeb, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xfdcb, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xfdcc, .a=0xb8, .x=0x67, .y=0x5d, .sp=0xeb, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xfdcb, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xfdcb, .value=0x00, .type=IO_READ},
        {.addr=0xfdcc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0013) {
    const struct CPU_State initial_cpu = {.pc=0x0c1f, .a=0x1c, .x=0xa9, .y=0xf7, .sp=0x5a, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x0c1f, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0c20, .a=0x1c, .x=0xa9, .y=0xf7, .sp=0x5a, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x0c1f, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x0c1f, .value=0x00, .type=IO_READ},
        {.addr=0x0c20, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0014) {
    const struct CPU_State initial_cpu = {.pc=0x767c, .a=0x7c, .x=0x3d, .y=0x65, .sp=0x5a, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x767c, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x767d, .a=0x7c, .x=0x3d, .y=0x65, .sp=0x5a, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x767c, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x767c, .value=0x00, .type=IO_READ},
        {.addr=0x767d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0015) {
    const struct CPU_State initial_cpu = {.pc=0x57c6, .a=0x27, .x=0x59, .y=0xe6, .sp=0x72, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x57c6, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x57c7, .a=0x27, .x=0x59, .y=0xe6, .sp=0x72, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x57c6, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x57c6, .value=0x00, .type=IO_READ},
        {.addr=0x57c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0016) {
    const struct CPU_State initial_cpu = {.pc=0x7754, .a=0x67, .x=0x86, .y=0x2f, .sp=0xd1, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x7754, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7755, .a=0x67, .x=0x86, .y=0x2f, .sp=0xd1, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x7754, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7754, .value=0x00, .type=IO_READ},
        {.addr=0x7755, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0017) {
    const struct CPU_State initial_cpu = {.pc=0xb47a, .a=0x32, .x=0x1d, .y=0xf5, .sp=0x59, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xb47a, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xb47b, .a=0x32, .x=0x1d, .y=0xf5, .sp=0x59, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0xb47a, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xb47a, .value=0x00, .type=IO_READ},
        {.addr=0xb47b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0018) {
    const struct CPU_State initial_cpu = {.pc=0xdbf0, .a=0xa4, .x=0xb6, .y=0x64, .sp=0x45, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xdbf0, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xdbf1, .a=0xa4, .x=0xb6, .y=0x64, .sp=0x45, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0xdbf0, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xdbf0, .value=0x00, .type=IO_READ},
        {.addr=0xdbf1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0019) {
    const struct CPU_State initial_cpu = {.pc=0x6d0a, .a=0xd4, .x=0xc6, .y=0x9c, .sp=0xfd, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x6d0a, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x6d0b, .a=0xd4, .x=0xc6, .y=0x9c, .sp=0xfd, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x6d0a, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x6d0a, .value=0x00, .type=IO_READ},
        {.addr=0x6d0b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_001A) {
    const struct CPU_State initial_cpu = {.pc=0x526c, .a=0x99, .x=0x70, .y=0x7b, .sp=0xbb, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x526c, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x526d, .a=0x99, .x=0x70, .y=0x7b, .sp=0xbb, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x526c, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x526c, .value=0x00, .type=IO_READ},
        {.addr=0x526d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_001B) {
    const struct CPU_State initial_cpu = {.pc=0x023f, .a=0xf9, .x=0xe1, .y=0x36, .sp=0xab, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x023f, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0240, .a=0xf9, .x=0xe1, .y=0x36, .sp=0xab, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x023f, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x023f, .value=0x00, .type=IO_READ},
        {.addr=0x0240, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_001C) {
    const struct CPU_State initial_cpu = {.pc=0x5ef6, .a=0xc7, .x=0x69, .y=0x4b, .sp=0x3c, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x5ef6, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x5ef7, .a=0xc7, .x=0x69, .y=0x4b, .sp=0x3c, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x5ef6, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x5ef6, .value=0x00, .type=IO_READ},
        {.addr=0x5ef7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_001D) {
    const struct CPU_State initial_cpu = {.pc=0x7634, .a=0x69, .x=0xd1, .y=0x87, .sp=0x38, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x7634, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7635, .a=0x69, .x=0xd1, .y=0x87, .sp=0x38, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x7634, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7634, .value=0x00, .type=IO_READ},
        {.addr=0x7635, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_001E) {
    const struct CPU_State initial_cpu = {.pc=0x27ac, .a=0x63, .x=0xa6, .y=0x4c, .sp=0x63, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x27ac, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x27ad, .a=0x63, .x=0xa6, .y=0x4c, .sp=0x63, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x27ac, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x27ac, .value=0x00, .type=IO_READ},
        {.addr=0x27ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_001F) {
    const struct CPU_State initial_cpu = {.pc=0xc7f5, .a=0xdf, .x=0x56, .y=0x17, .sp=0x1f, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xc7f5, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xc7f6, .a=0xdf, .x=0x56, .y=0x17, .sp=0x1f, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0xc7f5, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xc7f5, .value=0x00, .type=IO_READ},
        {.addr=0xc7f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0020) {
    const struct CPU_State initial_cpu = {.pc=0x8dd8, .a=0x0e, .x=0xf4, .y=0xe4, .sp=0xc6, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x8dd8, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x8dd9, .a=0x0e, .x=0xf4, .y=0xe4, .sp=0xc6, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x8dd8, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x8dd8, .value=0x00, .type=IO_READ},
        {.addr=0x8dd9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0021) {
    const struct CPU_State initial_cpu = {.pc=0x9a22, .a=0xcd, .x=0x94, .y=0x14, .sp=0x1f, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x9a22, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x9a23, .a=0xcd, .x=0x94, .y=0x14, .sp=0x1f, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x9a22, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x9a22, .value=0x00, .type=IO_READ},
        {.addr=0x9a23, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0022) {
    const struct CPU_State initial_cpu = {.pc=0xdb95, .a=0xb6, .x=0xea, .y=0x5e, .sp=0xcd, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xdb95, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xdb96, .a=0xb6, .x=0xea, .y=0x5e, .sp=0xcd, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xdb95, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xdb95, .value=0x00, .type=IO_READ},
        {.addr=0xdb96, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0023) {
    const struct CPU_State initial_cpu = {.pc=0x4ff1, .a=0x1c, .x=0x3e, .y=0x61, .sp=0xdc, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x4ff1, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x4ff2, .a=0x1c, .x=0x3e, .y=0x61, .sp=0xdc, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x4ff1, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x4ff1, .value=0x00, .type=IO_READ},
        {.addr=0x4ff2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0024) {
    const struct CPU_State initial_cpu = {.pc=0xb862, .a=0x85, .x=0x4f, .y=0xb2, .sp=0x86, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xb862, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xb863, .a=0x85, .x=0x4f, .y=0xb2, .sp=0x86, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0xb862, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xb862, .value=0x00, .type=IO_READ},
        {.addr=0xb863, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0025) {
    const struct CPU_State initial_cpu = {.pc=0xedb3, .a=0xda, .x=0x95, .y=0xf3, .sp=0xc5, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xedb3, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xedb4, .a=0xda, .x=0x95, .y=0xf3, .sp=0xc5, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0xedb3, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xedb3, .value=0x00, .type=IO_READ},
        {.addr=0xedb4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0026) {
    const struct CPU_State initial_cpu = {.pc=0x541c, .a=0xf1, .x=0x92, .y=0x7f, .sp=0x3b, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x541c, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x541d, .a=0xf1, .x=0x92, .y=0x7f, .sp=0x3b, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x541c, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x541c, .value=0x00, .type=IO_READ},
        {.addr=0x541d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0027) {
    const struct CPU_State initial_cpu = {.pc=0x6449, .a=0x28, .x=0xba, .y=0xdd, .sp=0x75, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x6449, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x644a, .a=0x28, .x=0xba, .y=0xdd, .sp=0x75, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x6449, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x6449, .value=0x00, .type=IO_READ},
        {.addr=0x644a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0028) {
    const struct CPU_State initial_cpu = {.pc=0x0acc, .a=0xe9, .x=0x5d, .y=0xff, .sp=0x22, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x0acc, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0acd, .a=0xe9, .x=0x5d, .y=0xff, .sp=0x22, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x0acc, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x0acc, .value=0x00, .type=IO_READ},
        {.addr=0x0acd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0029) {
    const struct CPU_State initial_cpu = {.pc=0x4d59, .a=0x66, .x=0x19, .y=0x3d, .sp=0xea, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x4d59, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x4d5a, .a=0x66, .x=0x19, .y=0x3d, .sp=0xea, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x4d59, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x4d59, .value=0x00, .type=IO_READ},
        {.addr=0x4d5a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_002A) {
    const struct CPU_State initial_cpu = {.pc=0xd291, .a=0x77, .x=0x4a, .y=0xfc, .sp=0x5f, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xd291, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xd292, .a=0x77, .x=0x4a, .y=0xfc, .sp=0x5f, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xd291, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xd291, .value=0x00, .type=IO_READ},
        {.addr=0xd292, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_002B) {
    const struct CPU_State initial_cpu = {.pc=0x9d5a, .a=0x0a, .x=0x5e, .y=0x61, .sp=0x3e, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x9d5a, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x9d5b, .a=0x0a, .x=0x5e, .y=0x61, .sp=0x3e, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x9d5a, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x9d5a, .value=0x00, .type=IO_READ},
        {.addr=0x9d5b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_002C) {
    const struct CPU_State initial_cpu = {.pc=0x9c34, .a=0x98, .x=0x6e, .y=0x45, .sp=0xd5, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x9c34, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x9c35, .a=0x98, .x=0x6e, .y=0x45, .sp=0xd5, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x9c34, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x9c34, .value=0x00, .type=IO_READ},
        {.addr=0x9c35, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_002D) {
    const struct CPU_State initial_cpu = {.pc=0x955d, .a=0x25, .x=0x7f, .y=0x2f, .sp=0x78, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x955d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x955e, .a=0x25, .x=0x7f, .y=0x2f, .sp=0x78, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x955d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x955d, .value=0x00, .type=IO_READ},
        {.addr=0x955e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_002E) {
    const struct CPU_State initial_cpu = {.pc=0x1cf9, .a=0x2a, .x=0x72, .y=0xe8, .sp=0x1f, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x1cf9, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x1cfa, .a=0x2a, .x=0x72, .y=0xe8, .sp=0x1f, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x1cf9, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x1cf9, .value=0x00, .type=IO_READ},
        {.addr=0x1cfa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_002F) {
    const struct CPU_State initial_cpu = {.pc=0xe73c, .a=0xf9, .x=0x8c, .y=0x5c, .sp=0x75, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xe73c, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xe73d, .a=0xf9, .x=0x8c, .y=0x5c, .sp=0x75, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0xe73c, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xe73c, .value=0x00, .type=IO_READ},
        {.addr=0xe73d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0030) {
    const struct CPU_State initial_cpu = {.pc=0x75e7, .a=0x9d, .x=0x37, .y=0x63, .sp=0x1c, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x75e7, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x75e8, .a=0x9d, .x=0x37, .y=0x63, .sp=0x1c, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x75e7, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x75e7, .value=0x00, .type=IO_READ},
        {.addr=0x75e8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0031) {
    const struct CPU_State initial_cpu = {.pc=0xe77f, .a=0xe4, .x=0x87, .y=0x0f, .sp=0x73, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xe77f, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xe780, .a=0xe4, .x=0x87, .y=0x0f, .sp=0x73, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xe77f, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xe77f, .value=0x00, .type=IO_READ},
        {.addr=0xe780, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0032) {
    const struct CPU_State initial_cpu = {.pc=0xb236, .a=0x62, .x=0xc5, .y=0x53, .sp=0x24, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xb236, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xb237, .a=0x62, .x=0xc5, .y=0x53, .sp=0x24, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0xb236, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xb236, .value=0x00, .type=IO_READ},
        {.addr=0xb237, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0033) {
    const struct CPU_State initial_cpu = {.pc=0xc675, .a=0x3e, .x=0xb7, .y=0x0a, .sp=0x2d, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xc675, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xc676, .a=0x3e, .x=0xb7, .y=0x0a, .sp=0x2d, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xc675, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xc675, .value=0x00, .type=IO_READ},
        {.addr=0xc676, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0034) {
    const struct CPU_State initial_cpu = {.pc=0xed1f, .a=0xc7, .x=0xec, .y=0x53, .sp=0x37, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xed1f, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xed20, .a=0xc7, .x=0xec, .y=0x53, .sp=0x37, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0xed1f, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xed1f, .value=0x00, .type=IO_READ},
        {.addr=0xed20, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0035) {
    const struct CPU_State initial_cpu = {.pc=0xb9e7, .a=0x01, .x=0xb9, .y=0xba, .sp=0x90, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xb9e7, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xb9e8, .a=0x01, .x=0xb9, .y=0xba, .sp=0x90, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xb9e7, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xb9e7, .value=0x00, .type=IO_READ},
        {.addr=0xb9e8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0036) {
    const struct CPU_State initial_cpu = {.pc=0xe366, .a=0xd2, .x=0x17, .y=0x00, .sp=0xb0, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xe366, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xe367, .a=0xd2, .x=0x17, .y=0x00, .sp=0xb0, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0xe366, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xe366, .value=0x00, .type=IO_READ},
        {.addr=0xe367, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0037) {
    const struct CPU_State initial_cpu = {.pc=0x9b78, .a=0x4d, .x=0x27, .y=0x71, .sp=0x3d, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x9b78, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x9b79, .a=0x4d, .x=0x27, .y=0x71, .sp=0x3d, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x9b78, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x9b78, .value=0x00, .type=IO_READ},
        {.addr=0x9b79, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0038) {
    const struct CPU_State initial_cpu = {.pc=0x22f5, .a=0xb1, .x=0xbf, .y=0xe7, .sp=0x85, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x22f5, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x22f6, .a=0xb1, .x=0xbf, .y=0xe7, .sp=0x85, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x22f5, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x22f5, .value=0x00, .type=IO_READ},
        {.addr=0x22f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0039) {
    const struct CPU_State initial_cpu = {.pc=0xb034, .a=0x65, .x=0xf3, .y=0x0e, .sp=0x31, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xb034, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xb035, .a=0x65, .x=0xf3, .y=0x0e, .sp=0x31, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xb034, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xb034, .value=0x00, .type=IO_READ},
        {.addr=0xb035, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_003A) {
    const struct CPU_State initial_cpu = {.pc=0xa836, .a=0xd3, .x=0x98, .y=0xec, .sp=0x9e, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xa836, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xa837, .a=0xd3, .x=0x98, .y=0xec, .sp=0x9e, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xa836, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xa836, .value=0x00, .type=IO_READ},
        {.addr=0xa837, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_003B) {
    const struct CPU_State initial_cpu = {.pc=0x9dd0, .a=0x64, .x=0xbe, .y=0x14, .sp=0x77, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x9dd0, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x9dd1, .a=0x64, .x=0xbe, .y=0x14, .sp=0x77, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x9dd0, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x9dd0, .value=0x00, .type=IO_READ},
        {.addr=0x9dd1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_003C) {
    const struct CPU_State initial_cpu = {.pc=0x1637, .a=0x0f, .x=0x35, .y=0xd9, .sp=0xa0, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x1637, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x1638, .a=0x0f, .x=0x35, .y=0xd9, .sp=0xa0, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x1637, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x1637, .value=0x00, .type=IO_READ},
        {.addr=0x1638, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_003D) {
    const struct CPU_State initial_cpu = {.pc=0xd1cb, .a=0xf5, .x=0x90, .y=0x85, .sp=0x3e, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xd1cb, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xd1cc, .a=0xf5, .x=0x90, .y=0x85, .sp=0x3e, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0xd1cb, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xd1cb, .value=0x00, .type=IO_READ},
        {.addr=0xd1cc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_003E) {
    const struct CPU_State initial_cpu = {.pc=0x4d19, .a=0x26, .x=0xf3, .y=0x09, .sp=0x03, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x4d19, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x4d1a, .a=0x26, .x=0xf3, .y=0x09, .sp=0x03, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x4d19, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x4d19, .value=0x00, .type=IO_READ},
        {.addr=0x4d1a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_003F) {
    const struct CPU_State initial_cpu = {.pc=0x03fb, .a=0xcd, .x=0x49, .y=0xde, .sp=0x52, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x03fb, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x03fc, .a=0xcd, .x=0x49, .y=0xde, .sp=0x52, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x03fb, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x03fb, .value=0x00, .type=IO_READ},
        {.addr=0x03fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0040) {
    const struct CPU_State initial_cpu = {.pc=0x8d8b, .a=0x69, .x=0xee, .y=0x71, .sp=0x65, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x8d8b, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x8d8c, .a=0x69, .x=0xee, .y=0x71, .sp=0x65, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x8d8b, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x8d8b, .value=0x00, .type=IO_READ},
        {.addr=0x8d8c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0041) {
    const struct CPU_State initial_cpu = {.pc=0x46cb, .a=0xe2, .x=0x71, .y=0x38, .sp=0x25, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x46cb, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x46cc, .a=0xe2, .x=0x71, .y=0x38, .sp=0x25, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x46cb, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x46cb, .value=0x00, .type=IO_READ},
        {.addr=0x46cc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0042) {
    const struct CPU_State initial_cpu = {.pc=0x2171, .a=0x82, .x=0xc3, .y=0xf9, .sp=0xed, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x2171, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x2172, .a=0x82, .x=0xc3, .y=0xf9, .sp=0xed, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x2171, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x2171, .value=0x00, .type=IO_READ},
        {.addr=0x2172, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0043) {
    const struct CPU_State initial_cpu = {.pc=0xcd17, .a=0xe0, .x=0xad, .y=0x17, .sp=0x5f, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xcd17, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xcd18, .a=0xe0, .x=0xad, .y=0x17, .sp=0x5f, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0xcd17, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xcd17, .value=0x00, .type=IO_READ},
        {.addr=0xcd18, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0044) {
    const struct CPU_State initial_cpu = {.pc=0xd006, .a=0xdd, .x=0xab, .y=0x47, .sp=0x3c, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xd006, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xd007, .a=0xdd, .x=0xab, .y=0x47, .sp=0x3c, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0xd006, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xd006, .value=0x00, .type=IO_READ},
        {.addr=0xd007, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0045) {
    const struct CPU_State initial_cpu = {.pc=0x26b4, .a=0x9a, .x=0xbb, .y=0xc1, .sp=0xbf, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x26b4, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x26b5, .a=0x9a, .x=0xbb, .y=0xc1, .sp=0xbf, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x26b4, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x26b4, .value=0x00, .type=IO_READ},
        {.addr=0x26b5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0046) {
    const struct CPU_State initial_cpu = {.pc=0x6bb3, .a=0x87, .x=0xdf, .y=0xa4, .sp=0xf4, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x6bb3, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x6bb4, .a=0x87, .x=0xdf, .y=0xa4, .sp=0xf4, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x6bb3, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x6bb3, .value=0x00, .type=IO_READ},
        {.addr=0x6bb4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0047) {
    const struct CPU_State initial_cpu = {.pc=0x444b, .a=0x9f, .x=0x15, .y=0x9a, .sp=0xb1, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x444b, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x444c, .a=0x9f, .x=0x15, .y=0x9a, .sp=0xb1, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x444b, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x444b, .value=0x00, .type=IO_READ},
        {.addr=0x444c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0048) {
    const struct CPU_State initial_cpu = {.pc=0xd9bf, .a=0xde, .x=0xb2, .y=0xda, .sp=0xb5, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xd9bf, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xd9c0, .a=0xde, .x=0xb2, .y=0xda, .sp=0xb5, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0xd9bf, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xd9bf, .value=0x00, .type=IO_READ},
        {.addr=0xd9c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0049) {
    const struct CPU_State initial_cpu = {.pc=0xdd79, .a=0xa8, .x=0x40, .y=0xf0, .sp=0x40, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0xdd79, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xdd7a, .a=0xa8, .x=0x40, .y=0xf0, .sp=0x40, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xdd79, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xdd79, .value=0x00, .type=IO_READ},
        {.addr=0xdd7a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_004A) {
    const struct CPU_State initial_cpu = {.pc=0x3fd6, .a=0xe0, .x=0x3c, .y=0xc4, .sp=0x82, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x3fd6, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x3fd7, .a=0xe0, .x=0x3c, .y=0xc4, .sp=0x82, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x3fd6, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x3fd6, .value=0x00, .type=IO_READ},
        {.addr=0x3fd7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_004B) {
    const struct CPU_State initial_cpu = {.pc=0x8194, .a=0x6c, .x=0xe8, .y=0xa9, .sp=0x3d, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x8194, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x8195, .a=0x6c, .x=0xe8, .y=0xa9, .sp=0x3d, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x8194, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x8194, .value=0x00, .type=IO_READ},
        {.addr=0x8195, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_004C) {
    const struct CPU_State initial_cpu = {.pc=0x73c4, .a=0x2c, .x=0x76, .y=0x3c, .sp=0xa5, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x73c4, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x73c5, .a=0x2c, .x=0x76, .y=0x3c, .sp=0xa5, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x73c4, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x73c4, .value=0x00, .type=IO_READ},
        {.addr=0x73c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_004D) {
    const struct CPU_State initial_cpu = {.pc=0x5d7a, .a=0xcf, .x=0xb6, .y=0x7a, .sp=0xa6, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x5d7a, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x5d7b, .a=0xcf, .x=0xb6, .y=0x7a, .sp=0xa6, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x5d7a, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x5d7a, .value=0x00, .type=IO_READ},
        {.addr=0x5d7b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_004E) {
    const struct CPU_State initial_cpu = {.pc=0x86ef, .a=0xa1, .x=0xef, .y=0x45, .sp=0x8d, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x86ef, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x86f0, .a=0xa1, .x=0xef, .y=0x45, .sp=0x8d, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x86ef, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x86ef, .value=0x00, .type=IO_READ},
        {.addr=0x86f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_004F) {
    const struct CPU_State initial_cpu = {.pc=0x19e8, .a=0x39, .x=0xc0, .y=0x61, .sp=0x71, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x19e8, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x19e9, .a=0x39, .x=0xc0, .y=0x61, .sp=0x71, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x19e8, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x19e8, .value=0x00, .type=IO_READ},
        {.addr=0x19e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0050) {
    const struct CPU_State initial_cpu = {.pc=0xf687, .a=0x0d, .x=0x3d, .y=0x8e, .sp=0xe5, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xf687, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xf688, .a=0x0d, .x=0x3d, .y=0x8e, .sp=0xe5, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xf687, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xf687, .value=0x00, .type=IO_READ},
        {.addr=0xf688, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0051) {
    const struct CPU_State initial_cpu = {.pc=0x73da, .a=0xa2, .x=0xb9, .y=0x8c, .sp=0xd1, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x73da, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x73db, .a=0xa2, .x=0xb9, .y=0x8c, .sp=0xd1, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x73da, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x73da, .value=0x00, .type=IO_READ},
        {.addr=0x73db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0052) {
    const struct CPU_State initial_cpu = {.pc=0x95ef, .a=0x42, .x=0x19, .y=0x4b, .sp=0x4e, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x95ef, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x95f0, .a=0x42, .x=0x19, .y=0x4b, .sp=0x4e, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x95ef, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x95ef, .value=0x00, .type=IO_READ},
        {.addr=0x95f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0053) {
    const struct CPU_State initial_cpu = {.pc=0xe040, .a=0x32, .x=0xbc, .y=0xe1, .sp=0x6f, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xe040, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xe041, .a=0x32, .x=0xbc, .y=0xe1, .sp=0x6f, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xe040, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xe040, .value=0x00, .type=IO_READ},
        {.addr=0xe041, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0054) {
    const struct CPU_State initial_cpu = {.pc=0xad97, .a=0xa8, .x=0x58, .y=0x0d, .sp=0x7d, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xad97, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xad98, .a=0xa8, .x=0x58, .y=0x0d, .sp=0x7d, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xad97, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xad97, .value=0x00, .type=IO_READ},
        {.addr=0xad98, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0055) {
    const struct CPU_State initial_cpu = {.pc=0x29e2, .a=0x3c, .x=0xbf, .y=0xa5, .sp=0x34, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x29e2, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x29e3, .a=0x3c, .x=0xbf, .y=0xa5, .sp=0x34, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x29e2, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x29e2, .value=0x00, .type=IO_READ},
        {.addr=0x29e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0056) {
    const struct CPU_State initial_cpu = {.pc=0xe8a1, .a=0x99, .x=0x85, .y=0x19, .sp=0xe1, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xe8a1, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xe8a2, .a=0x99, .x=0x85, .y=0x19, .sp=0xe1, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0xe8a1, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xe8a1, .value=0x00, .type=IO_READ},
        {.addr=0xe8a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0057) {
    const struct CPU_State initial_cpu = {.pc=0x8c4b, .a=0xaa, .x=0xfa, .y=0x9b, .sp=0xd1, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x8c4b, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x8c4c, .a=0xaa, .x=0xfa, .y=0x9b, .sp=0xd1, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x8c4b, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x8c4b, .value=0x00, .type=IO_READ},
        {.addr=0x8c4c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0058) {
    const struct CPU_State initial_cpu = {.pc=0x7fb5, .a=0xb3, .x=0x48, .y=0x10, .sp=0x1c, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x7fb5, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7fb6, .a=0xb3, .x=0x48, .y=0x10, .sp=0x1c, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x7fb5, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7fb5, .value=0x00, .type=IO_READ},
        {.addr=0x7fb6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0059) {
    const struct CPU_State initial_cpu = {.pc=0x6b77, .a=0xb8, .x=0x02, .y=0xc7, .sp=0x7f, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x6b77, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x6b78, .a=0xb8, .x=0x02, .y=0xc7, .sp=0x7f, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x6b77, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x6b77, .value=0x00, .type=IO_READ},
        {.addr=0x6b78, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_005A) {
    const struct CPU_State initial_cpu = {.pc=0xdbba, .a=0x9a, .x=0x46, .y=0x7b, .sp=0x5f, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xdbba, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xdbbb, .a=0x9a, .x=0x46, .y=0x7b, .sp=0x5f, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0xdbba, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xdbba, .value=0x00, .type=IO_READ},
        {.addr=0xdbbb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_005B) {
    const struct CPU_State initial_cpu = {.pc=0xe0fb, .a=0xf6, .x=0x79, .y=0x7d, .sp=0x3b, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xe0fb, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xe0fc, .a=0xf6, .x=0x79, .y=0x7d, .sp=0x3b, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xe0fb, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xe0fb, .value=0x00, .type=IO_READ},
        {.addr=0xe0fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_005C) {
    const struct CPU_State initial_cpu = {.pc=0xe100, .a=0xa6, .x=0xd3, .y=0xb9, .sp=0xb7, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xe100, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xe101, .a=0xa6, .x=0xd3, .y=0xb9, .sp=0xb7, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0xe100, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xe100, .value=0x00, .type=IO_READ},
        {.addr=0xe101, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_005D) {
    const struct CPU_State initial_cpu = {.pc=0xadc8, .a=0x9d, .x=0xe2, .y=0x81, .sp=0xd8, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xadc8, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xadc9, .a=0x9d, .x=0xe2, .y=0x81, .sp=0xd8, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xadc8, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xadc8, .value=0x00, .type=IO_READ},
        {.addr=0xadc9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_005E) {
    const struct CPU_State initial_cpu = {.pc=0x9c10, .a=0xef, .x=0xae, .y=0x74, .sp=0x50, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x9c10, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x9c11, .a=0xef, .x=0xae, .y=0x74, .sp=0x50, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x9c10, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x9c10, .value=0x00, .type=IO_READ},
        {.addr=0x9c11, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_005F) {
    const struct CPU_State initial_cpu = {.pc=0x6fe6, .a=0x5e, .x=0x2b, .y=0x85, .sp=0x00, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x6fe6, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x6fe7, .a=0x5e, .x=0x2b, .y=0x85, .sp=0x00, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x6fe6, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x6fe6, .value=0x00, .type=IO_READ},
        {.addr=0x6fe7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0060) {
    const struct CPU_State initial_cpu = {.pc=0x40c2, .a=0x28, .x=0x27, .y=0xc3, .sp=0x91, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x40c2, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x40c3, .a=0x28, .x=0x27, .y=0xc3, .sp=0x91, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x40c2, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x40c2, .value=0x00, .type=IO_READ},
        {.addr=0x40c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0061) {
    const struct CPU_State initial_cpu = {.pc=0x7b68, .a=0x41, .x=0x4e, .y=0xcd, .sp=0xda, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x7b68, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7b69, .a=0x41, .x=0x4e, .y=0xcd, .sp=0xda, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x7b68, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7b68, .value=0x00, .type=IO_READ},
        {.addr=0x7b69, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0062) {
    const struct CPU_State initial_cpu = {.pc=0x1337, .a=0x65, .x=0x41, .y=0x77, .sp=0x96, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x1337, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x1338, .a=0x65, .x=0x41, .y=0x77, .sp=0x96, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x1337, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x1337, .value=0x00, .type=IO_READ},
        {.addr=0x1338, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0063) {
    const struct CPU_State initial_cpu = {.pc=0xf5f7, .a=0xa7, .x=0x04, .y=0xe8, .sp=0xbe, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xf5f7, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xf5f8, .a=0xa7, .x=0x04, .y=0xe8, .sp=0xbe, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xf5f7, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xf5f7, .value=0x00, .type=IO_READ},
        {.addr=0xf5f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0064) {
    const struct CPU_State initial_cpu = {.pc=0x6126, .a=0x31, .x=0xf6, .y=0xb2, .sp=0x58, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x6126, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x6127, .a=0x31, .x=0xf6, .y=0xb2, .sp=0x58, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x6126, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x6126, .value=0x00, .type=IO_READ},
        {.addr=0x6127, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0065) {
    const struct CPU_State initial_cpu = {.pc=0x3a3a, .a=0xd3, .x=0x1e, .y=0xd9, .sp=0x07, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x3a3a, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x3a3b, .a=0xd3, .x=0x1e, .y=0xd9, .sp=0x07, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x3a3a, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x3a3a, .value=0x00, .type=IO_READ},
        {.addr=0x3a3b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0066) {
    const struct CPU_State initial_cpu = {.pc=0x42f6, .a=0x8a, .x=0xce, .y=0xf3, .sp=0x04, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x42f6, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x42f7, .a=0x8a, .x=0xce, .y=0xf3, .sp=0x04, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x42f6, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x42f6, .value=0x00, .type=IO_READ},
        {.addr=0x42f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0067) {
    const struct CPU_State initial_cpu = {.pc=0x0fdc, .a=0x6e, .x=0xfe, .y=0xff, .sp=0xc1, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x0fdc, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0fdd, .a=0x6e, .x=0xfe, .y=0xff, .sp=0xc1, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0fdc, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x0fdc, .value=0x00, .type=IO_READ},
        {.addr=0x0fdd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0068) {
    const struct CPU_State initial_cpu = {.pc=0x4f71, .a=0x51, .x=0x8a, .y=0x89, .sp=0x8f, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x4f71, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x4f72, .a=0x51, .x=0x8a, .y=0x89, .sp=0x8f, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x4f71, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x4f71, .value=0x00, .type=IO_READ},
        {.addr=0x4f72, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0069) {
    const struct CPU_State initial_cpu = {.pc=0xcec1, .a=0xed, .x=0x8d, .y=0x7f, .sp=0xda, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xcec1, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xcec2, .a=0xed, .x=0x8d, .y=0x7f, .sp=0xda, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xcec1, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xcec1, .value=0x00, .type=IO_READ},
        {.addr=0xcec2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_006A) {
    const struct CPU_State initial_cpu = {.pc=0xdbe7, .a=0x77, .x=0x79, .y=0x60, .sp=0x82, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xdbe7, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xdbe8, .a=0x77, .x=0x79, .y=0x60, .sp=0x82, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xdbe7, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xdbe7, .value=0x00, .type=IO_READ},
        {.addr=0xdbe8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_006B) {
    const struct CPU_State initial_cpu = {.pc=0x4f3b, .a=0xd4, .x=0x5d, .y=0xb0, .sp=0x6a, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x4f3b, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x4f3c, .a=0xd4, .x=0x5d, .y=0xb0, .sp=0x6a, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x4f3b, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x4f3b, .value=0x00, .type=IO_READ},
        {.addr=0x4f3c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_006C) {
    const struct CPU_State initial_cpu = {.pc=0x0369, .a=0xe0, .x=0xb0, .y=0x81, .sp=0xee, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x0369, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x036a, .a=0xe0, .x=0xb0, .y=0x81, .sp=0xee, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0369, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x0369, .value=0x00, .type=IO_READ},
        {.addr=0x036a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_006D) {
    const struct CPU_State initial_cpu = {.pc=0xd293, .a=0xad, .x=0x94, .y=0xaa, .sp=0xc0, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xd293, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xd294, .a=0xad, .x=0x94, .y=0xaa, .sp=0xc0, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xd293, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xd293, .value=0x00, .type=IO_READ},
        {.addr=0xd294, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_006E) {
    const struct CPU_State initial_cpu = {.pc=0x2de5, .a=0xaf, .x=0x74, .y=0x4e, .sp=0x17, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x2de5, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x2de6, .a=0xaf, .x=0x74, .y=0x4e, .sp=0x17, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x2de5, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x2de5, .value=0x00, .type=IO_READ},
        {.addr=0x2de6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_006F) {
    const struct CPU_State initial_cpu = {.pc=0x3622, .a=0x43, .x=0x95, .y=0x7d, .sp=0x8a, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x3622, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x3623, .a=0x43, .x=0x95, .y=0x7d, .sp=0x8a, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x3622, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x3622, .value=0x00, .type=IO_READ},
        {.addr=0x3623, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0070) {
    const struct CPU_State initial_cpu = {.pc=0xfc04, .a=0x46, .x=0x81, .y=0x16, .sp=0x98, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xfc04, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xfc05, .a=0x46, .x=0x81, .y=0x16, .sp=0x98, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xfc04, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xfc04, .value=0x00, .type=IO_READ},
        {.addr=0xfc05, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0071) {
    const struct CPU_State initial_cpu = {.pc=0x363f, .a=0x89, .x=0x42, .y=0x10, .sp=0x41, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x363f, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x3640, .a=0x89, .x=0x42, .y=0x10, .sp=0x41, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x363f, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x363f, .value=0x00, .type=IO_READ},
        {.addr=0x3640, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0072) {
    const struct CPU_State initial_cpu = {.pc=0xa05f, .a=0x48, .x=0x5e, .y=0x39, .sp=0x6a, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xa05f, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xa060, .a=0x48, .x=0x5e, .y=0x39, .sp=0x6a, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xa05f, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xa05f, .value=0x00, .type=IO_READ},
        {.addr=0xa060, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0073) {
    const struct CPU_State initial_cpu = {.pc=0x6d35, .a=0x09, .x=0x23, .y=0xa4, .sp=0x0e, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x6d35, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x6d36, .a=0x09, .x=0x23, .y=0xa4, .sp=0x0e, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x6d35, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x6d35, .value=0x00, .type=IO_READ},
        {.addr=0x6d36, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0074) {
    const struct CPU_State initial_cpu = {.pc=0x5513, .a=0x3b, .x=0x12, .y=0x06, .sp=0x27, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x5513, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x5514, .a=0x3b, .x=0x12, .y=0x06, .sp=0x27, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x5513, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x5513, .value=0x00, .type=IO_READ},
        {.addr=0x5514, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0075) {
    const struct CPU_State initial_cpu = {.pc=0x87a9, .a=0x61, .x=0x50, .y=0x1b, .sp=0x72, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x87a9, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x87aa, .a=0x61, .x=0x50, .y=0x1b, .sp=0x72, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x87a9, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x87a9, .value=0x00, .type=IO_READ},
        {.addr=0x87aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0076) {
    const struct CPU_State initial_cpu = {.pc=0xf73e, .a=0xb7, .x=0x69, .y=0xdb, .sp=0xa5, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xf73e, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xf73f, .a=0xb7, .x=0x69, .y=0xdb, .sp=0xa5, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0xf73e, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xf73e, .value=0x00, .type=IO_READ},
        {.addr=0xf73f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0077) {
    const struct CPU_State initial_cpu = {.pc=0x6ba0, .a=0xeb, .x=0xbb, .y=0xce, .sp=0xd1, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x6ba0, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x6ba1, .a=0xeb, .x=0xbb, .y=0xce, .sp=0xd1, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x6ba0, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x6ba0, .value=0x00, .type=IO_READ},
        {.addr=0x6ba1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0078) {
    const struct CPU_State initial_cpu = {.pc=0xbb55, .a=0x89, .x=0x8e, .y=0xb0, .sp=0x03, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xbb55, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xbb56, .a=0x89, .x=0x8e, .y=0xb0, .sp=0x03, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0xbb55, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xbb55, .value=0x00, .type=IO_READ},
        {.addr=0xbb56, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0079) {
    const struct CPU_State initial_cpu = {.pc=0x0823, .a=0x26, .x=0xe5, .y=0xf0, .sp=0x5c, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x0823, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0824, .a=0x26, .x=0xe5, .y=0xf0, .sp=0x5c, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x0823, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x0823, .value=0x00, .type=IO_READ},
        {.addr=0x0824, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_007A) {
    const struct CPU_State initial_cpu = {.pc=0x2af4, .a=0x30, .x=0x40, .y=0xbd, .sp=0xd5, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x2af4, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x2af5, .a=0x30, .x=0x40, .y=0xbd, .sp=0xd5, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x2af4, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x2af4, .value=0x00, .type=IO_READ},
        {.addr=0x2af5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_007B) {
    const struct CPU_State initial_cpu = {.pc=0x56dc, .a=0x08, .x=0x04, .y=0x8c, .sp=0xc8, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x56dc, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x56dd, .a=0x08, .x=0x04, .y=0x8c, .sp=0xc8, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x56dc, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x56dc, .value=0x00, .type=IO_READ},
        {.addr=0x56dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_007C) {
    const struct CPU_State initial_cpu = {.pc=0xa5da, .a=0xfa, .x=0xdc, .y=0xc3, .sp=0xef, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xa5da, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xa5db, .a=0xfa, .x=0xdc, .y=0xc3, .sp=0xef, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xa5da, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xa5da, .value=0x00, .type=IO_READ},
        {.addr=0xa5db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_007D) {
    const struct CPU_State initial_cpu = {.pc=0x6a9d, .a=0x73, .x=0x06, .y=0xcf, .sp=0xa2, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x6a9d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x6a9e, .a=0x73, .x=0x06, .y=0xcf, .sp=0xa2, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x6a9d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x6a9d, .value=0x00, .type=IO_READ},
        {.addr=0x6a9e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_007E) {
    const struct CPU_State initial_cpu = {.pc=0xce08, .a=0x94, .x=0xa1, .y=0x6d, .sp=0xd8, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xce08, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xce09, .a=0x94, .x=0xa1, .y=0x6d, .sp=0xd8, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xce08, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xce08, .value=0x00, .type=IO_READ},
        {.addr=0xce09, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_007F) {
    const struct CPU_State initial_cpu = {.pc=0x1ec3, .a=0x91, .x=0x75, .y=0x0b, .sp=0x66, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x1ec3, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x1ec4, .a=0x91, .x=0x75, .y=0x0b, .sp=0x66, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x1ec3, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x1ec3, .value=0x00, .type=IO_READ},
        {.addr=0x1ec4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0080) {
    const struct CPU_State initial_cpu = {.pc=0x8305, .a=0xf8, .x=0xbc, .y=0xd4, .sp=0x97, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x8305, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x8306, .a=0xf8, .x=0xbc, .y=0xd4, .sp=0x97, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x8305, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x8305, .value=0x00, .type=IO_READ},
        {.addr=0x8306, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0081) {
    const struct CPU_State initial_cpu = {.pc=0xdf27, .a=0xf7, .x=0xd1, .y=0xc5, .sp=0x6d, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0xdf27, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xdf28, .a=0xf7, .x=0xd1, .y=0xc5, .sp=0x6d, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xdf27, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xdf27, .value=0x00, .type=IO_READ},
        {.addr=0xdf28, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0082) {
    const struct CPU_State initial_cpu = {.pc=0x1c20, .a=0xa3, .x=0xe9, .y=0xb6, .sp=0xec, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x1c20, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x1c21, .a=0xa3, .x=0xe9, .y=0xb6, .sp=0xec, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x1c20, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x1c20, .value=0x00, .type=IO_READ},
        {.addr=0x1c21, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0083) {
    const struct CPU_State initial_cpu = {.pc=0xbdcc, .a=0xe6, .x=0x95, .y=0xcf, .sp=0x3a, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xbdcc, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xbdcd, .a=0xe6, .x=0x95, .y=0xcf, .sp=0x3a, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xbdcc, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xbdcc, .value=0x00, .type=IO_READ},
        {.addr=0xbdcd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0084) {
    const struct CPU_State initial_cpu = {.pc=0xe7c4, .a=0x1d, .x=0x7b, .y=0x3e, .sp=0xde, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xe7c4, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xe7c5, .a=0x1d, .x=0x7b, .y=0x3e, .sp=0xde, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0xe7c4, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xe7c4, .value=0x00, .type=IO_READ},
        {.addr=0xe7c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0085) {
    const struct CPU_State initial_cpu = {.pc=0x4225, .a=0xa9, .x=0xca, .y=0xc4, .sp=0x6d, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x4225, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x4226, .a=0xa9, .x=0xca, .y=0xc4, .sp=0x6d, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x4225, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x4225, .value=0x00, .type=IO_READ},
        {.addr=0x4226, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0086) {
    const struct CPU_State initial_cpu = {.pc=0x638d, .a=0xec, .x=0x43, .y=0x53, .sp=0xc4, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x638d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x638e, .a=0xec, .x=0x43, .y=0x53, .sp=0xc4, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x638d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x638d, .value=0x00, .type=IO_READ},
        {.addr=0x638e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0087) {
    const struct CPU_State initial_cpu = {.pc=0xbe91, .a=0xfe, .x=0xe5, .y=0xd7, .sp=0x70, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xbe91, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xbe92, .a=0xfe, .x=0xe5, .y=0xd7, .sp=0x70, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0xbe91, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xbe91, .value=0x00, .type=IO_READ},
        {.addr=0xbe92, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0088) {
    const struct CPU_State initial_cpu = {.pc=0xd8e4, .a=0x97, .x=0x2f, .y=0x21, .sp=0x10, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xd8e4, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xd8e5, .a=0x97, .x=0x2f, .y=0x21, .sp=0x10, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0xd8e4, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xd8e4, .value=0x00, .type=IO_READ},
        {.addr=0xd8e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0089) {
    const struct CPU_State initial_cpu = {.pc=0x47ae, .a=0x29, .x=0x79, .y=0x24, .sp=0x09, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x47ae, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x47af, .a=0x29, .x=0x79, .y=0x24, .sp=0x09, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x47ae, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x47ae, .value=0x00, .type=IO_READ},
        {.addr=0x47af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_008A) {
    const struct CPU_State initial_cpu = {.pc=0x1bca, .a=0x4c, .x=0x88, .y=0x35, .sp=0xd0, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x1bca, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x1bcb, .a=0x4c, .x=0x88, .y=0x35, .sp=0xd0, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x1bca, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x1bca, .value=0x00, .type=IO_READ},
        {.addr=0x1bcb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_008B) {
    const struct CPU_State initial_cpu = {.pc=0x9476, .a=0xaa, .x=0xbc, .y=0xa9, .sp=0x18, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x9476, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x9477, .a=0xaa, .x=0xbc, .y=0xa9, .sp=0x18, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x9476, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x9476, .value=0x00, .type=IO_READ},
        {.addr=0x9477, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_008C) {
    const struct CPU_State initial_cpu = {.pc=0xb944, .a=0x49, .x=0xf9, .y=0xac, .sp=0x6f, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xb944, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xb945, .a=0x49, .x=0xf9, .y=0xac, .sp=0x6f, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xb944, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xb944, .value=0x00, .type=IO_READ},
        {.addr=0xb945, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_008D) {
    const struct CPU_State initial_cpu = {.pc=0xbf40, .a=0xae, .x=0x5c, .y=0x2b, .sp=0x21, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xbf40, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xbf41, .a=0xae, .x=0x5c, .y=0x2b, .sp=0x21, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xbf40, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xbf40, .value=0x00, .type=IO_READ},
        {.addr=0xbf41, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_008E) {
    const struct CPU_State initial_cpu = {.pc=0xc372, .a=0xc7, .x=0xe0, .y=0x84, .sp=0x7d, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xc372, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xc373, .a=0xc7, .x=0xe0, .y=0x84, .sp=0x7d, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xc372, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xc372, .value=0x00, .type=IO_READ},
        {.addr=0xc373, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_008F) {
    const struct CPU_State initial_cpu = {.pc=0x0a2e, .a=0xdb, .x=0x89, .y=0x67, .sp=0xc9, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x0a2e, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0a2f, .a=0xdb, .x=0x89, .y=0x67, .sp=0xc9, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x0a2e, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x0a2e, .value=0x00, .type=IO_READ},
        {.addr=0x0a2f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0090) {
    const struct CPU_State initial_cpu = {.pc=0x544e, .a=0x4a, .x=0xc6, .y=0xfa, .sp=0xfa, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x544e, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x544f, .a=0x4a, .x=0xc6, .y=0xfa, .sp=0xfa, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x544e, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x544e, .value=0x00, .type=IO_READ},
        {.addr=0x544f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0091) {
    const struct CPU_State initial_cpu = {.pc=0xbcf4, .a=0x32, .x=0xe4, .y=0xb1, .sp=0x4b, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xbcf4, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xbcf5, .a=0x32, .x=0xe4, .y=0xb1, .sp=0x4b, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0xbcf4, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xbcf4, .value=0x00, .type=IO_READ},
        {.addr=0xbcf5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0092) {
    const struct CPU_State initial_cpu = {.pc=0xf34a, .a=0x79, .x=0xdd, .y=0xd3, .sp=0xdf, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xf34a, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xf34b, .a=0x79, .x=0xdd, .y=0xd3, .sp=0xdf, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0xf34a, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xf34a, .value=0x00, .type=IO_READ},
        {.addr=0xf34b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0093) {
    const struct CPU_State initial_cpu = {.pc=0x88f7, .a=0x0b, .x=0x08, .y=0xd2, .sp=0xc2, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x88f7, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x88f8, .a=0x0b, .x=0x08, .y=0xd2, .sp=0xc2, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x88f7, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x88f7, .value=0x00, .type=IO_READ},
        {.addr=0x88f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0094) {
    const struct CPU_State initial_cpu = {.pc=0x952f, .a=0xf0, .x=0x3b, .y=0xc4, .sp=0x91, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x952f, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x9530, .a=0xf0, .x=0x3b, .y=0xc4, .sp=0x91, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x952f, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x952f, .value=0x00, .type=IO_READ},
        {.addr=0x9530, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0095) {
    const struct CPU_State initial_cpu = {.pc=0xf2ec, .a=0x6c, .x=0x5e, .y=0xad, .sp=0x5f, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xf2ec, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xf2ed, .a=0x6c, .x=0x5e, .y=0xad, .sp=0x5f, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0xf2ec, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xf2ec, .value=0x00, .type=IO_READ},
        {.addr=0xf2ed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0096) {
    const struct CPU_State initial_cpu = {.pc=0xc6e8, .a=0x6a, .x=0xfb, .y=0x88, .sp=0x3c, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xc6e8, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xc6e9, .a=0x6a, .x=0xfb, .y=0x88, .sp=0x3c, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0xc6e8, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xc6e8, .value=0x00, .type=IO_READ},
        {.addr=0xc6e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0097) {
    const struct CPU_State initial_cpu = {.pc=0xb699, .a=0x4b, .x=0xc5, .y=0xee, .sp=0x88, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xb699, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xb69a, .a=0x4b, .x=0xc5, .y=0xee, .sp=0x88, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0xb699, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xb699, .value=0x00, .type=IO_READ},
        {.addr=0xb69a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0098) {
    const struct CPU_State initial_cpu = {.pc=0xd439, .a=0x0e, .x=0x95, .y=0xdd, .sp=0x3a, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xd439, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xd43a, .a=0x0e, .x=0x95, .y=0xdd, .sp=0x3a, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xd439, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xd439, .value=0x00, .type=IO_READ},
        {.addr=0xd43a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0099) {
    const struct CPU_State initial_cpu = {.pc=0xdab7, .a=0xed, .x=0x48, .y=0x2e, .sp=0x80, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xdab7, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xdab8, .a=0xed, .x=0x48, .y=0x2e, .sp=0x80, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xdab7, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xdab7, .value=0x00, .type=IO_READ},
        {.addr=0xdab8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_009A) {
    const struct CPU_State initial_cpu = {.pc=0x29ae, .a=0x90, .x=0x89, .y=0x94, .sp=0x34, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x29ae, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x29af, .a=0x90, .x=0x89, .y=0x94, .sp=0x34, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x29ae, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x29ae, .value=0x00, .type=IO_READ},
        {.addr=0x29af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_009B) {
    const struct CPU_State initial_cpu = {.pc=0x527a, .a=0x70, .x=0xe9, .y=0xe2, .sp=0x4a, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x527a, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x527b, .a=0x70, .x=0xe9, .y=0xe2, .sp=0x4a, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x527a, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x527a, .value=0x00, .type=IO_READ},
        {.addr=0x527b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_009C) {
    const struct CPU_State initial_cpu = {.pc=0xc6de, .a=0x99, .x=0x95, .y=0x77, .sp=0xcd, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xc6de, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xc6df, .a=0x99, .x=0x95, .y=0x77, .sp=0xcd, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xc6de, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xc6de, .value=0x00, .type=IO_READ},
        {.addr=0xc6df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_009D) {
    const struct CPU_State initial_cpu = {.pc=0xf036, .a=0xbf, .x=0xf9, .y=0xe3, .sp=0xa8, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xf036, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xf037, .a=0xbf, .x=0xf9, .y=0xe3, .sp=0xa8, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xf036, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xf036, .value=0x00, .type=IO_READ},
        {.addr=0xf037, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_009E) {
    const struct CPU_State initial_cpu = {.pc=0x8d25, .a=0x24, .x=0x44, .y=0x5c, .sp=0xba, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x8d25, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x8d26, .a=0x24, .x=0x44, .y=0x5c, .sp=0xba, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x8d25, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x8d25, .value=0x00, .type=IO_READ},
        {.addr=0x8d26, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_009F) {
    const struct CPU_State initial_cpu = {.pc=0x052c, .a=0xcb, .x=0xa0, .y=0x1a, .sp=0x3b, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x052c, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x052d, .a=0xcb, .x=0xa0, .y=0x1a, .sp=0x3b, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x052c, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x052c, .value=0x00, .type=IO_READ},
        {.addr=0x052d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00A0) {
    const struct CPU_State initial_cpu = {.pc=0x182c, .a=0x25, .x=0xe9, .y=0xe7, .sp=0x9b, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x182c, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x182d, .a=0x25, .x=0xe9, .y=0xe7, .sp=0x9b, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x182c, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x182c, .value=0x00, .type=IO_READ},
        {.addr=0x182d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00A1) {
    const struct CPU_State initial_cpu = {.pc=0xe8a8, .a=0x85, .x=0x52, .y=0xe8, .sp=0x83, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xe8a8, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xe8a9, .a=0x85, .x=0x52, .y=0xe8, .sp=0x83, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0xe8a8, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xe8a8, .value=0x00, .type=IO_READ},
        {.addr=0xe8a9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00A2) {
    const struct CPU_State initial_cpu = {.pc=0xc104, .a=0x21, .x=0xec, .y=0xa1, .sp=0xd2, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xc104, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xc105, .a=0x21, .x=0xec, .y=0xa1, .sp=0xd2, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0xc104, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xc104, .value=0x00, .type=IO_READ},
        {.addr=0xc105, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00A3) {
    const struct CPU_State initial_cpu = {.pc=0xe508, .a=0xdd, .x=0xfa, .y=0x32, .sp=0xc6, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xe508, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xe509, .a=0xdd, .x=0xfa, .y=0x32, .sp=0xc6, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0xe508, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xe508, .value=0x00, .type=IO_READ},
        {.addr=0xe509, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00A4) {
    const struct CPU_State initial_cpu = {.pc=0x4be4, .a=0xab, .x=0x84, .y=0x50, .sp=0xac, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x4be4, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x4be5, .a=0xab, .x=0x84, .y=0x50, .sp=0xac, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x4be4, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x4be4, .value=0x00, .type=IO_READ},
        {.addr=0x4be5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00A5) {
    const struct CPU_State initial_cpu = {.pc=0xecbf, .a=0x3a, .x=0x0e, .y=0x03, .sp=0xf5, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xecbf, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xecc0, .a=0x3a, .x=0x0e, .y=0x03, .sp=0xf5, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xecbf, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xecbf, .value=0x00, .type=IO_READ},
        {.addr=0xecc0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00A6) {
    const struct CPU_State initial_cpu = {.pc=0xf96f, .a=0x93, .x=0xbc, .y=0x22, .sp=0x4a, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xf96f, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xf970, .a=0x93, .x=0xbc, .y=0x22, .sp=0x4a, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0xf96f, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xf96f, .value=0x00, .type=IO_READ},
        {.addr=0xf970, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00A7) {
    const struct CPU_State initial_cpu = {.pc=0xcaca, .a=0x2d, .x=0xab, .y=0x40, .sp=0x82, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xcaca, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xcacb, .a=0x2d, .x=0xab, .y=0x40, .sp=0x82, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xcaca, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xcaca, .value=0x00, .type=IO_READ},
        {.addr=0xcacb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x6948, .a=0x8f, .x=0x14, .y=0x31, .sp=0xd5, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x6948, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x6949, .a=0x8f, .x=0x14, .y=0x31, .sp=0xd5, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x6948, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x6948, .value=0x00, .type=IO_READ},
        {.addr=0x6949, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x8bf9, .a=0xaa, .x=0x5f, .y=0x6e, .sp=0xb4, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x8bf9, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x8bfa, .a=0xaa, .x=0x5f, .y=0x6e, .sp=0xb4, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x8bf9, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x8bf9, .value=0x00, .type=IO_READ},
        {.addr=0x8bfa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x051f, .a=0x7a, .x=0x89, .y=0x4d, .sp=0x81, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x051f, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0520, .a=0x7a, .x=0x89, .y=0x4d, .sp=0x81, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x051f, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x051f, .value=0x00, .type=IO_READ},
        {.addr=0x0520, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x6038, .a=0x04, .x=0x98, .y=0x5b, .sp=0xb9, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x6038, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x6039, .a=0x04, .x=0x98, .y=0x5b, .sp=0xb9, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x6038, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x6038, .value=0x00, .type=IO_READ},
        {.addr=0x6039, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00AC) {
    const struct CPU_State initial_cpu = {.pc=0xddb8, .a=0xbe, .x=0xbd, .y=0x5e, .sp=0x1a, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xddb8, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xddb9, .a=0xbe, .x=0xbd, .y=0x5e, .sp=0x1a, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xddb8, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xddb8, .value=0x00, .type=IO_READ},
        {.addr=0xddb9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x1344, .a=0x3c, .x=0x86, .y=0x89, .sp=0x72, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x1344, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x1345, .a=0x3c, .x=0x86, .y=0x89, .sp=0x72, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x1344, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x1344, .value=0x00, .type=IO_READ},
        {.addr=0x1345, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00AE) {
    const struct CPU_State initial_cpu = {.pc=0x463a, .a=0x4f, .x=0xf5, .y=0x74, .sp=0x5f, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x463a, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x463b, .a=0x4f, .x=0xf5, .y=0x74, .sp=0x5f, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x463a, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x463a, .value=0x00, .type=IO_READ},
        {.addr=0x463b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00AF) {
    const struct CPU_State initial_cpu = {.pc=0xedda, .a=0xdb, .x=0x9d, .y=0x09, .sp=0x94, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xedda, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xeddb, .a=0xdb, .x=0x9d, .y=0x09, .sp=0x94, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xedda, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xedda, .value=0x00, .type=IO_READ},
        {.addr=0xeddb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00B0) {
    const struct CPU_State initial_cpu = {.pc=0xf175, .a=0xc5, .x=0x9b, .y=0xc9, .sp=0xe1, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xf175, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xf176, .a=0xc5, .x=0x9b, .y=0xc9, .sp=0xe1, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0xf175, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xf175, .value=0x00, .type=IO_READ},
        {.addr=0xf176, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00B1) {
    const struct CPU_State initial_cpu = {.pc=0xad28, .a=0x25, .x=0x1c, .y=0x8c, .sp=0x15, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xad28, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xad29, .a=0x25, .x=0x1c, .y=0x8c, .sp=0x15, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0xad28, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xad28, .value=0x00, .type=IO_READ},
        {.addr=0xad29, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00B2) {
    const struct CPU_State initial_cpu = {.pc=0x6a13, .a=0x9d, .x=0x30, .y=0x5f, .sp=0xc1, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x6a13, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x6a14, .a=0x9d, .x=0x30, .y=0x5f, .sp=0xc1, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x6a13, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x6a13, .value=0x00, .type=IO_READ},
        {.addr=0x6a14, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00B3) {
    const struct CPU_State initial_cpu = {.pc=0xff81, .a=0x69, .x=0x44, .y=0xdd, .sp=0x07, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xff81, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xff82, .a=0x69, .x=0x44, .y=0xdd, .sp=0x07, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xff81, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xff81, .value=0x00, .type=IO_READ},
        {.addr=0xff82, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00B4) {
    const struct CPU_State initial_cpu = {.pc=0xaa5d, .a=0xbd, .x=0xa7, .y=0x53, .sp=0xb9, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xaa5d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xaa5e, .a=0xbd, .x=0xa7, .y=0x53, .sp=0xb9, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xaa5d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xaa5d, .value=0x00, .type=IO_READ},
        {.addr=0xaa5e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00B5) {
    const struct CPU_State initial_cpu = {.pc=0xbeba, .a=0xd5, .x=0x1f, .y=0x0a, .sp=0x77, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xbeba, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xbebb, .a=0xd5, .x=0x1f, .y=0x0a, .sp=0x77, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0xbeba, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xbeba, .value=0x00, .type=IO_READ},
        {.addr=0xbebb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00B6) {
    const struct CPU_State initial_cpu = {.pc=0xce93, .a=0x64, .x=0x45, .y=0x9c, .sp=0x9c, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xce93, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xce94, .a=0x64, .x=0x45, .y=0x9c, .sp=0x9c, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xce93, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xce93, .value=0x00, .type=IO_READ},
        {.addr=0xce94, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x02d4, .a=0xa2, .x=0xef, .y=0xc5, .sp=0x3e, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x02d4, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x02d5, .a=0xa2, .x=0xef, .y=0xc5, .sp=0x3e, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x02d4, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x02d4, .value=0x00, .type=IO_READ},
        {.addr=0x02d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00B8) {
    const struct CPU_State initial_cpu = {.pc=0x03ef, .a=0xc3, .x=0xf8, .y=0x25, .sp=0x40, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x03ef, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x03f0, .a=0xc3, .x=0xf8, .y=0x25, .sp=0x40, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x03ef, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x03ef, .value=0x00, .type=IO_READ},
        {.addr=0x03f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00B9) {
    const struct CPU_State initial_cpu = {.pc=0xc244, .a=0xbb, .x=0x22, .y=0xca, .sp=0x20, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xc244, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xc245, .a=0xbb, .x=0x22, .y=0xca, .sp=0x20, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0xc244, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xc244, .value=0x00, .type=IO_READ},
        {.addr=0xc245, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00BA) {
    const struct CPU_State initial_cpu = {.pc=0x510c, .a=0xb0, .x=0x84, .y=0x7c, .sp=0x93, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x510c, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x510d, .a=0xb0, .x=0x84, .y=0x7c, .sp=0x93, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x510c, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x510c, .value=0x00, .type=IO_READ},
        {.addr=0x510d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00BB) {
    const struct CPU_State initial_cpu = {.pc=0xd447, .a=0x99, .x=0x1d, .y=0xab, .sp=0xc1, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xd447, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xd448, .a=0x99, .x=0x1d, .y=0xab, .sp=0xc1, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xd447, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xd447, .value=0x00, .type=IO_READ},
        {.addr=0xd448, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x6b46, .a=0x9f, .x=0x69, .y=0x78, .sp=0xba, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x6b46, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x6b47, .a=0x9f, .x=0x69, .y=0x78, .sp=0xba, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x6b46, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x6b46, .value=0x00, .type=IO_READ},
        {.addr=0x6b47, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00BD) {
    const struct CPU_State initial_cpu = {.pc=0xaaa5, .a=0xd3, .x=0x00, .y=0xc5, .sp=0xd7, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xaaa5, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xaaa6, .a=0xd3, .x=0x00, .y=0xc5, .sp=0xd7, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xaaa5, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xaaa5, .value=0x00, .type=IO_READ},
        {.addr=0xaaa6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00BE) {
    const struct CPU_State initial_cpu = {.pc=0x2e13, .a=0x95, .x=0xe2, .y=0x4f, .sp=0xa2, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x2e13, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x2e14, .a=0x95, .x=0xe2, .y=0x4f, .sp=0xa2, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x2e13, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x2e13, .value=0x00, .type=IO_READ},
        {.addr=0x2e14, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00BF) {
    const struct CPU_State initial_cpu = {.pc=0x1a27, .a=0x8e, .x=0x62, .y=0xed, .sp=0xf2, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x1a27, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x1a28, .a=0x8e, .x=0x62, .y=0xed, .sp=0xf2, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x1a27, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x1a27, .value=0x00, .type=IO_READ},
        {.addr=0x1a28, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00C0) {
    const struct CPU_State initial_cpu = {.pc=0xf65a, .a=0x9b, .x=0x62, .y=0xa9, .sp=0x09, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xf65a, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xf65b, .a=0x9b, .x=0x62, .y=0xa9, .sp=0x09, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xf65a, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xf65a, .value=0x00, .type=IO_READ},
        {.addr=0xf65b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00C1) {
    const struct CPU_State initial_cpu = {.pc=0x29e5, .a=0x24, .x=0x7e, .y=0x49, .sp=0x86, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x29e5, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x29e6, .a=0x24, .x=0x7e, .y=0x49, .sp=0x86, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x29e5, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x29e5, .value=0x00, .type=IO_READ},
        {.addr=0x29e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00C2) {
    const struct CPU_State initial_cpu = {.pc=0x70d7, .a=0xc9, .x=0x7f, .y=0xe3, .sp=0x95, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x70d7, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x70d8, .a=0xc9, .x=0x7f, .y=0xe3, .sp=0x95, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x70d7, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x70d7, .value=0x00, .type=IO_READ},
        {.addr=0x70d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00C3) {
    const struct CPU_State initial_cpu = {.pc=0x6899, .a=0xe6, .x=0xf4, .y=0x9c, .sp=0xa4, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x6899, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x689a, .a=0xe6, .x=0xf4, .y=0x9c, .sp=0xa4, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x6899, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x6899, .value=0x00, .type=IO_READ},
        {.addr=0x689a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00C4) {
    const struct CPU_State initial_cpu = {.pc=0x0392, .a=0xe3, .x=0x1f, .y=0x24, .sp=0x95, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x0392, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0393, .a=0xe3, .x=0x1f, .y=0x24, .sp=0x95, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0392, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x0392, .value=0x00, .type=IO_READ},
        {.addr=0x0393, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x787f, .a=0x50, .x=0x83, .y=0xf0, .sp=0x70, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x787f, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7880, .a=0x50, .x=0x83, .y=0xf0, .sp=0x70, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x787f, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x787f, .value=0x00, .type=IO_READ},
        {.addr=0x7880, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00C6) {
    const struct CPU_State initial_cpu = {.pc=0x6aeb, .a=0xb9, .x=0xf3, .y=0xec, .sp=0x2a, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x6aeb, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x6aec, .a=0xb9, .x=0xf3, .y=0xec, .sp=0x2a, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x6aeb, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x6aeb, .value=0x00, .type=IO_READ},
        {.addr=0x6aec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00C7) {
    const struct CPU_State initial_cpu = {.pc=0xd401, .a=0xe5, .x=0x56, .y=0x9f, .sp=0x41, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xd401, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xd402, .a=0xe5, .x=0x56, .y=0x9f, .sp=0x41, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xd401, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xd401, .value=0x00, .type=IO_READ},
        {.addr=0xd402, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00C8) {
    const struct CPU_State initial_cpu = {.pc=0xb9a9, .a=0xbb, .x=0x60, .y=0x17, .sp=0xff, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xb9a9, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xb9aa, .a=0xbb, .x=0x60, .y=0x17, .sp=0xff, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0xb9a9, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xb9a9, .value=0x00, .type=IO_READ},
        {.addr=0xb9aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00C9) {
    const struct CPU_State initial_cpu = {.pc=0x0f78, .a=0x92, .x=0xd3, .y=0x6b, .sp=0x07, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x0f78, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0f79, .a=0x92, .x=0xd3, .y=0x6b, .sp=0x07, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x0f78, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x0f78, .value=0x00, .type=IO_READ},
        {.addr=0x0f79, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00CA) {
    const struct CPU_State initial_cpu = {.pc=0xfd34, .a=0x61, .x=0x5e, .y=0x4c, .sp=0x90, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xfd34, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xfd35, .a=0x61, .x=0x5e, .y=0x4c, .sp=0x90, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0xfd34, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xfd34, .value=0x00, .type=IO_READ},
        {.addr=0xfd35, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00CB) {
    const struct CPU_State initial_cpu = {.pc=0xf3e2, .a=0x71, .x=0x08, .y=0x34, .sp=0x86, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xf3e2, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xf3e3, .a=0x71, .x=0x08, .y=0x34, .sp=0x86, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xf3e2, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xf3e2, .value=0x00, .type=IO_READ},
        {.addr=0xf3e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00CC) {
    const struct CPU_State initial_cpu = {.pc=0xcc4f, .a=0x07, .x=0x89, .y=0x44, .sp=0x55, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xcc4f, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xcc50, .a=0x07, .x=0x89, .y=0x44, .sp=0x55, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0xcc4f, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xcc4f, .value=0x00, .type=IO_READ},
        {.addr=0xcc50, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00CD) {
    const struct CPU_State initial_cpu = {.pc=0x394d, .a=0x1a, .x=0x05, .y=0x2f, .sp=0xb3, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x394d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x394e, .a=0x1a, .x=0x05, .y=0x2f, .sp=0xb3, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x394d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x394d, .value=0x00, .type=IO_READ},
        {.addr=0x394e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00CE) {
    const struct CPU_State initial_cpu = {.pc=0xff4a, .a=0x60, .x=0x65, .y=0x1a, .sp=0xf9, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xff4a, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xff4b, .a=0x60, .x=0x65, .y=0x1a, .sp=0xf9, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0xff4a, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xff4a, .value=0x00, .type=IO_READ},
        {.addr=0xff4b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00CF) {
    const struct CPU_State initial_cpu = {.pc=0x6a3e, .a=0x04, .x=0x3b, .y=0x6d, .sp=0x68, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x6a3e, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x6a3f, .a=0x04, .x=0x3b, .y=0x6d, .sp=0x68, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x6a3e, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x6a3e, .value=0x00, .type=IO_READ},
        {.addr=0x6a3f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00D0) {
    const struct CPU_State initial_cpu = {.pc=0xb63d, .a=0x52, .x=0xb6, .y=0x5b, .sp=0xc4, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xb63d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xb63e, .a=0x52, .x=0xb6, .y=0x5b, .sp=0xc4, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0xb63d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xb63d, .value=0x00, .type=IO_READ},
        {.addr=0xb63e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x964b, .a=0xa0, .x=0x26, .y=0x70, .sp=0x43, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x964b, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x964c, .a=0xa0, .x=0x26, .y=0x70, .sp=0x43, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x964b, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x964b, .value=0x00, .type=IO_READ},
        {.addr=0x964c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00D2) {
    const struct CPU_State initial_cpu = {.pc=0xf79a, .a=0x9c, .x=0x75, .y=0x02, .sp=0x99, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xf79a, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xf79b, .a=0x9c, .x=0x75, .y=0x02, .sp=0x99, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xf79a, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xf79a, .value=0x00, .type=IO_READ},
        {.addr=0xf79b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00D3) {
    const struct CPU_State initial_cpu = {.pc=0x23fc, .a=0xd8, .x=0x49, .y=0x9f, .sp=0xe2, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x23fc, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x23fd, .a=0xd8, .x=0x49, .y=0x9f, .sp=0xe2, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x23fc, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x23fc, .value=0x00, .type=IO_READ},
        {.addr=0x23fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00D4) {
    const struct CPU_State initial_cpu = {.pc=0xbdd4, .a=0xaa, .x=0xba, .y=0x49, .sp=0xc0, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xbdd4, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xbdd5, .a=0xaa, .x=0xba, .y=0x49, .sp=0xc0, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xbdd4, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xbdd4, .value=0x00, .type=IO_READ},
        {.addr=0xbdd5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00D5) {
    const struct CPU_State initial_cpu = {.pc=0x3097, .a=0xe3, .x=0x2a, .y=0xdd, .sp=0x6a, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x3097, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x3098, .a=0xe3, .x=0x2a, .y=0xdd, .sp=0x6a, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x3097, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x3097, .value=0x00, .type=IO_READ},
        {.addr=0x3098, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00D6) {
    const struct CPU_State initial_cpu = {.pc=0xce1c, .a=0xbf, .x=0xae, .y=0x28, .sp=0x28, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xce1c, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xce1d, .a=0xbf, .x=0xae, .y=0x28, .sp=0x28, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xce1c, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xce1c, .value=0x00, .type=IO_READ},
        {.addr=0xce1d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00D7) {
    const struct CPU_State initial_cpu = {.pc=0xe951, .a=0xf9, .x=0x42, .y=0x5d, .sp=0xff, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xe951, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xe952, .a=0xf9, .x=0x42, .y=0x5d, .sp=0xff, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xe951, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xe951, .value=0x00, .type=IO_READ},
        {.addr=0xe952, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00D8) {
    const struct CPU_State initial_cpu = {.pc=0x8750, .a=0xd4, .x=0x50, .y=0x29, .sp=0xad, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x8750, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x8751, .a=0xd4, .x=0x50, .y=0x29, .sp=0xad, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x8750, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x8750, .value=0x00, .type=IO_READ},
        {.addr=0x8751, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00D9) {
    const struct CPU_State initial_cpu = {.pc=0x8abb, .a=0x3d, .x=0x09, .y=0x2f, .sp=0x6d, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x8abb, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x8abc, .a=0x3d, .x=0x09, .y=0x2f, .sp=0x6d, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x8abb, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x8abb, .value=0x00, .type=IO_READ},
        {.addr=0x8abc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00DA) {
    const struct CPU_State initial_cpu = {.pc=0xd643, .a=0x7b, .x=0xc0, .y=0xfa, .sp=0xd8, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xd643, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xd644, .a=0x7b, .x=0xc0, .y=0xfa, .sp=0xd8, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xd643, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xd643, .value=0x00, .type=IO_READ},
        {.addr=0xd644, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x5121, .a=0x97, .x=0x4c, .y=0x0b, .sp=0xc6, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x5121, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x5122, .a=0x97, .x=0x4c, .y=0x0b, .sp=0xc6, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x5121, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x5121, .value=0x00, .type=IO_READ},
        {.addr=0x5122, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00DC) {
    const struct CPU_State initial_cpu = {.pc=0xfd4e, .a=0x4a, .x=0x1b, .y=0x7f, .sp=0x30, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xfd4e, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xfd4f, .a=0x4a, .x=0x1b, .y=0x7f, .sp=0x30, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xfd4e, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xfd4e, .value=0x00, .type=IO_READ},
        {.addr=0xfd4f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x43ac, .a=0x82, .x=0x8b, .y=0xad, .sp=0x30, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x43ac, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x43ad, .a=0x82, .x=0x8b, .y=0xad, .sp=0x30, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x43ac, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x43ac, .value=0x00, .type=IO_READ},
        {.addr=0x43ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00DE) {
    const struct CPU_State initial_cpu = {.pc=0xa6ec, .a=0x73, .x=0x77, .y=0xa2, .sp=0xda, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xa6ec, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xa6ed, .a=0x73, .x=0x77, .y=0xa2, .sp=0xda, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0xa6ec, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xa6ec, .value=0x00, .type=IO_READ},
        {.addr=0xa6ed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00DF) {
    const struct CPU_State initial_cpu = {.pc=0xfa21, .a=0x12, .x=0x15, .y=0x09, .sp=0xd9, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xfa21, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xfa22, .a=0x12, .x=0x15, .y=0x09, .sp=0xd9, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xfa21, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xfa21, .value=0x00, .type=IO_READ},
        {.addr=0xfa22, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00E0) {
    const struct CPU_State initial_cpu = {.pc=0xd3c9, .a=0x51, .x=0xe0, .y=0xcc, .sp=0x13, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xd3c9, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xd3ca, .a=0x51, .x=0xe0, .y=0xcc, .sp=0x13, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xd3c9, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xd3c9, .value=0x00, .type=IO_READ},
        {.addr=0xd3ca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00E1) {
    const struct CPU_State initial_cpu = {.pc=0x01e5, .a=0xec, .x=0x43, .y=0xbf, .sp=0x4c, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x01e5, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x01e6, .a=0xec, .x=0x43, .y=0xbf, .sp=0x4c, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x01e5, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x01e5, .value=0x00, .type=IO_READ},
        {.addr=0x01e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x2c20, .a=0x0b, .x=0x4a, .y=0xcf, .sp=0xa8, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x2c20, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x2c21, .a=0x0b, .x=0x4a, .y=0xcf, .sp=0xa8, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x2c20, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x2c20, .value=0x00, .type=IO_READ},
        {.addr=0x2c21, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00E3) {
    const struct CPU_State initial_cpu = {.pc=0xf499, .a=0x76, .x=0xf7, .y=0xdc, .sp=0xe0, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xf499, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xf49a, .a=0x76, .x=0xf7, .y=0xdc, .sp=0xe0, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0xf499, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xf499, .value=0x00, .type=IO_READ},
        {.addr=0xf49a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x645f, .a=0xf1, .x=0xa2, .y=0x1a, .sp=0xf3, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x645f, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x6460, .a=0xf1, .x=0xa2, .y=0x1a, .sp=0xf3, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x645f, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x645f, .value=0x00, .type=IO_READ},
        {.addr=0x6460, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00E5) {
    const struct CPU_State initial_cpu = {.pc=0xd922, .a=0x5b, .x=0x5d, .y=0xa4, .sp=0x57, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xd922, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xd923, .a=0x5b, .x=0x5d, .y=0xa4, .sp=0x57, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0xd922, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xd922, .value=0x00, .type=IO_READ},
        {.addr=0xd923, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00E6) {
    const struct CPU_State initial_cpu = {.pc=0xaea5, .a=0x03, .x=0xb7, .y=0x23, .sp=0x83, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xaea5, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xaea6, .a=0x03, .x=0xb7, .y=0x23, .sp=0x83, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xaea5, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xaea5, .value=0x00, .type=IO_READ},
        {.addr=0xaea6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00E7) {
    const struct CPU_State initial_cpu = {.pc=0x7762, .a=0x3c, .x=0x09, .y=0x4b, .sp=0x8f, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x7762, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7763, .a=0x3c, .x=0x09, .y=0x4b, .sp=0x8f, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x7762, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7762, .value=0x00, .type=IO_READ},
        {.addr=0x7763, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00E8) {
    const struct CPU_State initial_cpu = {.pc=0xc4bb, .a=0x79, .x=0x5a, .y=0x92, .sp=0x53, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xc4bb, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xc4bc, .a=0x79, .x=0x5a, .y=0x92, .sp=0x53, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0xc4bb, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xc4bb, .value=0x00, .type=IO_READ},
        {.addr=0xc4bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00E9) {
    const struct CPU_State initial_cpu = {.pc=0xefd4, .a=0xd9, .x=0x51, .y=0x70, .sp=0x45, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xefd4, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xefd5, .a=0xd9, .x=0x51, .y=0x70, .sp=0x45, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0xefd4, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xefd4, .value=0x00, .type=IO_READ},
        {.addr=0xefd5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x2007, .a=0x46, .x=0xcc, .y=0x70, .sp=0x0a, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x2007, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x2008, .a=0x46, .x=0xcc, .y=0x70, .sp=0x0a, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x2007, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x2007, .value=0x00, .type=IO_READ},
        {.addr=0x2008, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00EB) {
    const struct CPU_State initial_cpu = {.pc=0x387c, .a=0x20, .x=0x82, .y=0xec, .sp=0x8c, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x387c, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x387d, .a=0x20, .x=0x82, .y=0xec, .sp=0x8c, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x387c, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x387c, .value=0x00, .type=IO_READ},
        {.addr=0x387d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00EC) {
    const struct CPU_State initial_cpu = {.pc=0xa5d8, .a=0x7a, .x=0x82, .y=0xa6, .sp=0x57, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xa5d8, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xa5d9, .a=0x7a, .x=0x82, .y=0xa6, .sp=0x57, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0xa5d8, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xa5d8, .value=0x00, .type=IO_READ},
        {.addr=0xa5d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00ED) {
    const struct CPU_State initial_cpu = {.pc=0x9284, .a=0x77, .x=0x3a, .y=0x0d, .sp=0x06, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x9284, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x9285, .a=0x77, .x=0x3a, .y=0x0d, .sp=0x06, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x9284, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x9284, .value=0x00, .type=IO_READ},
        {.addr=0x9285, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00EE) {
    const struct CPU_State initial_cpu = {.pc=0xedc4, .a=0x9e, .x=0xb6, .y=0x79, .sp=0x88, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xedc4, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xedc5, .a=0x9e, .x=0xb6, .y=0x79, .sp=0x88, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0xedc4, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xedc4, .value=0x00, .type=IO_READ},
        {.addr=0xedc5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00EF) {
    const struct CPU_State initial_cpu = {.pc=0x63a4, .a=0x65, .x=0x3c, .y=0x40, .sp=0x12, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x63a4, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x63a5, .a=0x65, .x=0x3c, .y=0x40, .sp=0x12, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x63a4, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x63a4, .value=0x00, .type=IO_READ},
        {.addr=0x63a5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x8d72, .a=0x6f, .x=0x17, .y=0x6f, .sp=0x14, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x8d72, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x8d73, .a=0x6f, .x=0x17, .y=0x6f, .sp=0x14, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x8d72, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x8d72, .value=0x00, .type=IO_READ},
        {.addr=0x8d73, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00F1) {
    const struct CPU_State initial_cpu = {.pc=0x55db, .a=0x16, .x=0x0b, .y=0x64, .sp=0x64, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x55db, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x55dc, .a=0x16, .x=0x0b, .y=0x64, .sp=0x64, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x55db, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x55db, .value=0x00, .type=IO_READ},
        {.addr=0x55dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00F2) {
    const struct CPU_State initial_cpu = {.pc=0x63ed, .a=0x44, .x=0x2a, .y=0xd7, .sp=0x81, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x63ed, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x63ee, .a=0x44, .x=0x2a, .y=0xd7, .sp=0x81, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x63ed, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x63ed, .value=0x00, .type=IO_READ},
        {.addr=0x63ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00F3) {
    const struct CPU_State initial_cpu = {.pc=0x2a80, .a=0xb3, .x=0x79, .y=0x44, .sp=0x27, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x2a80, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x2a81, .a=0xb3, .x=0x79, .y=0x44, .sp=0x27, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x2a80, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x2a80, .value=0x00, .type=IO_READ},
        {.addr=0x2a81, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00F4) {
    const struct CPU_State initial_cpu = {.pc=0x3590, .a=0x99, .x=0xcf, .y=0xb4, .sp=0x17, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x3590, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x3591, .a=0x99, .x=0xcf, .y=0xb4, .sp=0x17, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x3590, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x3590, .value=0x00, .type=IO_READ},
        {.addr=0x3591, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00F5) {
    const struct CPU_State initial_cpu = {.pc=0x4575, .a=0x01, .x=0x73, .y=0xf2, .sp=0x04, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x4575, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x4576, .a=0x01, .x=0x73, .y=0xf2, .sp=0x04, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x4575, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x4575, .value=0x00, .type=IO_READ},
        {.addr=0x4576, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00F6) {
    const struct CPU_State initial_cpu = {.pc=0xfcfc, .a=0x36, .x=0xe4, .y=0x08, .sp=0xe8, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xfcfc, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xfcfd, .a=0x36, .x=0xe4, .y=0x08, .sp=0xe8, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0xfcfc, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xfcfc, .value=0x00, .type=IO_READ},
        {.addr=0xfcfd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00F7) {
    const struct CPU_State initial_cpu = {.pc=0x8546, .a=0xbd, .x=0x13, .y=0x34, .sp=0xfc, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x8546, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x8547, .a=0xbd, .x=0x13, .y=0x34, .sp=0xfc, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x8546, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x8546, .value=0x00, .type=IO_READ},
        {.addr=0x8547, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00F8) {
    const struct CPU_State initial_cpu = {.pc=0xebcc, .a=0x8d, .x=0xdb, .y=0xb9, .sp=0x41, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xebcc, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xebcd, .a=0x8d, .x=0xdb, .y=0xb9, .sp=0x41, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0xebcc, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xebcc, .value=0x00, .type=IO_READ},
        {.addr=0xebcd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00F9) {
    const struct CPU_State initial_cpu = {.pc=0x00cc, .a=0xca, .x=0x11, .y=0xbf, .sp=0xd7, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x00cc, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x00cd, .a=0xca, .x=0x11, .y=0xbf, .sp=0xd7, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x00cc, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x00cc, .value=0x00, .type=IO_READ},
        {.addr=0x00cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00FA) {
    const struct CPU_State initial_cpu = {.pc=0x3e9f, .a=0x8e, .x=0x26, .y=0xf7, .sp=0xd4, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x3e9f, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x3ea0, .a=0x8e, .x=0x26, .y=0xf7, .sp=0xd4, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x3e9f, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x3e9f, .value=0x00, .type=IO_READ},
        {.addr=0x3ea0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00FB) {
    const struct CPU_State initial_cpu = {.pc=0x921d, .a=0x61, .x=0xac, .y=0xe9, .sp=0x0d, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x921d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x921e, .a=0x61, .x=0xac, .y=0xe9, .sp=0x0d, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x921d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x921d, .value=0x00, .type=IO_READ},
        {.addr=0x921e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00FC) {
    const struct CPU_State initial_cpu = {.pc=0x5cb0, .a=0x11, .x=0x29, .y=0xb6, .sp=0x96, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x5cb0, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x5cb1, .a=0x11, .x=0x29, .y=0xb6, .sp=0x96, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x5cb0, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x5cb0, .value=0x00, .type=IO_READ},
        {.addr=0x5cb1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x66ac, .a=0x33, .x=0xc7, .y=0x84, .sp=0xb7, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x66ac, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x66ad, .a=0x33, .x=0xc7, .y=0x84, .sp=0xb7, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x66ac, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x66ac, .value=0x00, .type=IO_READ},
        {.addr=0x66ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00FE) {
    const struct CPU_State initial_cpu = {.pc=0x13f4, .a=0x10, .x=0xdb, .y=0x64, .sp=0x4d, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x13f4, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x13f5, .a=0x10, .x=0xdb, .y=0x64, .sp=0x4d, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x13f4, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x13f4, .value=0x00, .type=IO_READ},
        {.addr=0x13f5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_00FF) {
    const struct CPU_State initial_cpu = {.pc=0x191d, .a=0x9b, .x=0x29, .y=0x9a, .sp=0xd2, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x191d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x191e, .a=0x9b, .x=0x29, .y=0x9a, .sp=0xd2, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x191d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x191d, .value=0x00, .type=IO_READ},
        {.addr=0x191e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0100) {
    const struct CPU_State initial_cpu = {.pc=0xaf9c, .a=0x98, .x=0x87, .y=0x8c, .sp=0x1c, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xaf9c, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xaf9d, .a=0x98, .x=0x87, .y=0x8c, .sp=0x1c, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0xaf9c, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xaf9c, .value=0x00, .type=IO_READ},
        {.addr=0xaf9d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0101) {
    const struct CPU_State initial_cpu = {.pc=0x21bb, .a=0xac, .x=0x0b, .y=0x93, .sp=0x33, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x21bb, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x21bc, .a=0xac, .x=0x0b, .y=0x93, .sp=0x33, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x21bb, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x21bb, .value=0x00, .type=IO_READ},
        {.addr=0x21bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0102) {
    const struct CPU_State initial_cpu = {.pc=0xea72, .a=0xb6, .x=0xc3, .y=0xec, .sp=0x28, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xea72, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xea73, .a=0xb6, .x=0xc3, .y=0xec, .sp=0x28, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0xea72, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xea72, .value=0x00, .type=IO_READ},
        {.addr=0xea73, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0103) {
    const struct CPU_State initial_cpu = {.pc=0xb542, .a=0xb3, .x=0x10, .y=0x2f, .sp=0x67, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xb542, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xb543, .a=0xb3, .x=0x10, .y=0x2f, .sp=0x67, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xb542, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xb542, .value=0x00, .type=IO_READ},
        {.addr=0xb543, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0104) {
    const struct CPU_State initial_cpu = {.pc=0x3ef5, .a=0x65, .x=0x60, .y=0xeb, .sp=0x03, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x3ef5, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x3ef6, .a=0x65, .x=0x60, .y=0xeb, .sp=0x03, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x3ef5, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x3ef5, .value=0x00, .type=IO_READ},
        {.addr=0x3ef6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0105) {
    const struct CPU_State initial_cpu = {.pc=0x6bf6, .a=0x39, .x=0x0b, .y=0xb8, .sp=0x11, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x6bf6, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x6bf7, .a=0x39, .x=0x0b, .y=0xb8, .sp=0x11, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x6bf6, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x6bf6, .value=0x00, .type=IO_READ},
        {.addr=0x6bf7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0106) {
    const struct CPU_State initial_cpu = {.pc=0x5237, .a=0xc3, .x=0x9a, .y=0xc5, .sp=0x4b, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x5237, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x5238, .a=0xc3, .x=0x9a, .y=0xc5, .sp=0x4b, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x5237, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x5237, .value=0x00, .type=IO_READ},
        {.addr=0x5238, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0107) {
    const struct CPU_State initial_cpu = {.pc=0xf07b, .a=0xfb, .x=0xbc, .y=0x7e, .sp=0x6e, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xf07b, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xf07c, .a=0xfb, .x=0xbc, .y=0x7e, .sp=0x6e, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0xf07b, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xf07b, .value=0x00, .type=IO_READ},
        {.addr=0xf07c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0108) {
    const struct CPU_State initial_cpu = {.pc=0x7870, .a=0xfb, .x=0x09, .y=0x25, .sp=0x28, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x7870, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7871, .a=0xfb, .x=0x09, .y=0x25, .sp=0x28, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x7870, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7870, .value=0x00, .type=IO_READ},
        {.addr=0x7871, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0109) {
    const struct CPU_State initial_cpu = {.pc=0x243b, .a=0x77, .x=0xc0, .y=0xd6, .sp=0xac, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x243b, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x243c, .a=0x77, .x=0xc0, .y=0xd6, .sp=0xac, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x243b, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x243b, .value=0x00, .type=IO_READ},
        {.addr=0x243c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_010A) {
    const struct CPU_State initial_cpu = {.pc=0x4151, .a=0xbf, .x=0x77, .y=0x81, .sp=0xcc, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x4151, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x4152, .a=0xbf, .x=0x77, .y=0x81, .sp=0xcc, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x4151, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x4151, .value=0x00, .type=IO_READ},
        {.addr=0x4152, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_010B) {
    const struct CPU_State initial_cpu = {.pc=0x972d, .a=0xde, .x=0x87, .y=0x16, .sp=0xb7, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x972d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x972e, .a=0xde, .x=0x87, .y=0x16, .sp=0xb7, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x972d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x972d, .value=0x00, .type=IO_READ},
        {.addr=0x972e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_010C) {
    const struct CPU_State initial_cpu = {.pc=0x53bc, .a=0xd3, .x=0xf4, .y=0x5f, .sp=0x67, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x53bc, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x53bd, .a=0xd3, .x=0xf4, .y=0x5f, .sp=0x67, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x53bc, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x53bc, .value=0x00, .type=IO_READ},
        {.addr=0x53bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_010D) {
    const struct CPU_State initial_cpu = {.pc=0x924f, .a=0x39, .x=0x4b, .y=0xda, .sp=0xea, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x924f, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x9250, .a=0x39, .x=0x4b, .y=0xda, .sp=0xea, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x924f, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x924f, .value=0x00, .type=IO_READ},
        {.addr=0x9250, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_010E) {
    const struct CPU_State initial_cpu = {.pc=0x4b31, .a=0x53, .x=0xfa, .y=0x71, .sp=0x38, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x4b31, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x4b32, .a=0x53, .x=0xfa, .y=0x71, .sp=0x38, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x4b31, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x4b31, .value=0x00, .type=IO_READ},
        {.addr=0x4b32, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_010F) {
    const struct CPU_State initial_cpu = {.pc=0x236e, .a=0x17, .x=0x11, .y=0x30, .sp=0x23, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x236e, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x236f, .a=0x17, .x=0x11, .y=0x30, .sp=0x23, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x236e, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x236e, .value=0x00, .type=IO_READ},
        {.addr=0x236f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0110) {
    const struct CPU_State initial_cpu = {.pc=0x5fe1, .a=0xfe, .x=0xb2, .y=0xa9, .sp=0xb5, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x5fe1, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x5fe2, .a=0xfe, .x=0xb2, .y=0xa9, .sp=0xb5, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x5fe1, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x5fe1, .value=0x00, .type=IO_READ},
        {.addr=0x5fe2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0111) {
    const struct CPU_State initial_cpu = {.pc=0x3205, .a=0x05, .x=0xaa, .y=0x46, .sp=0xe7, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x3205, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x3206, .a=0x05, .x=0xaa, .y=0x46, .sp=0xe7, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x3205, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x3205, .value=0x00, .type=IO_READ},
        {.addr=0x3206, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0112) {
    const struct CPU_State initial_cpu = {.pc=0x45a6, .a=0xe9, .x=0x0c, .y=0xd8, .sp=0x22, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x45a6, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x45a7, .a=0xe9, .x=0x0c, .y=0xd8, .sp=0x22, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x45a6, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x45a6, .value=0x00, .type=IO_READ},
        {.addr=0x45a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0113) {
    const struct CPU_State initial_cpu = {.pc=0x60b8, .a=0x8f, .x=0x5e, .y=0xb5, .sp=0x46, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x60b8, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x60b9, .a=0x8f, .x=0x5e, .y=0xb5, .sp=0x46, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x60b8, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x60b8, .value=0x00, .type=IO_READ},
        {.addr=0x60b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0114) {
    const struct CPU_State initial_cpu = {.pc=0x9508, .a=0x3e, .x=0xbd, .y=0x03, .sp=0x34, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x9508, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x9509, .a=0x3e, .x=0xbd, .y=0x03, .sp=0x34, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x9508, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x9508, .value=0x00, .type=IO_READ},
        {.addr=0x9509, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0115) {
    const struct CPU_State initial_cpu = {.pc=0x65ce, .a=0x60, .x=0x46, .y=0x02, .sp=0x9e, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x65ce, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x65cf, .a=0x60, .x=0x46, .y=0x02, .sp=0x9e, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x65ce, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x65ce, .value=0x00, .type=IO_READ},
        {.addr=0x65cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0116) {
    const struct CPU_State initial_cpu = {.pc=0x61e9, .a=0x28, .x=0xbf, .y=0xea, .sp=0xaf, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x61e9, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x61ea, .a=0x28, .x=0xbf, .y=0xea, .sp=0xaf, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x61e9, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x61e9, .value=0x00, .type=IO_READ},
        {.addr=0x61ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0117) {
    const struct CPU_State initial_cpu = {.pc=0x32ec, .a=0xf6, .x=0xcc, .y=0xd3, .sp=0x29, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x32ec, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x32ed, .a=0xf6, .x=0xcc, .y=0xd3, .sp=0x29, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x32ec, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x32ec, .value=0x00, .type=IO_READ},
        {.addr=0x32ed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0118) {
    const struct CPU_State initial_cpu = {.pc=0xcfa1, .a=0x1b, .x=0xb4, .y=0x5c, .sp=0x5b, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xcfa1, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xcfa2, .a=0x1b, .x=0xb4, .y=0x5c, .sp=0x5b, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0xcfa1, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xcfa1, .value=0x00, .type=IO_READ},
        {.addr=0xcfa2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0119) {
    const struct CPU_State initial_cpu = {.pc=0x5802, .a=0xb3, .x=0xf6, .y=0x2a, .sp=0x46, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x5802, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x5803, .a=0xb3, .x=0xf6, .y=0x2a, .sp=0x46, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x5802, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x5802, .value=0x00, .type=IO_READ},
        {.addr=0x5803, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_011A) {
    const struct CPU_State initial_cpu = {.pc=0x0da1, .a=0x07, .x=0x43, .y=0x20, .sp=0x06, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x0da1, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0da2, .a=0x07, .x=0x43, .y=0x20, .sp=0x06, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x0da1, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x0da1, .value=0x00, .type=IO_READ},
        {.addr=0x0da2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_011B) {
    const struct CPU_State initial_cpu = {.pc=0xc0da, .a=0x53, .x=0x94, .y=0x40, .sp=0x96, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xc0da, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xc0db, .a=0x53, .x=0x94, .y=0x40, .sp=0x96, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xc0da, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xc0da, .value=0x00, .type=IO_READ},
        {.addr=0xc0db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_011C) {
    const struct CPU_State initial_cpu = {.pc=0x3c1a, .a=0x2f, .x=0xeb, .y=0xfe, .sp=0xa7, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x3c1a, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x3c1b, .a=0x2f, .x=0xeb, .y=0xfe, .sp=0xa7, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x3c1a, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x3c1a, .value=0x00, .type=IO_READ},
        {.addr=0x3c1b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_011D) {
    const struct CPU_State initial_cpu = {.pc=0xe19c, .a=0xd6, .x=0x40, .y=0xa7, .sp=0x4a, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xe19c, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xe19d, .a=0xd6, .x=0x40, .y=0xa7, .sp=0x4a, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xe19c, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xe19c, .value=0x00, .type=IO_READ},
        {.addr=0xe19d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_011E) {
    const struct CPU_State initial_cpu = {.pc=0x7eff, .a=0x69, .x=0xf7, .y=0x07, .sp=0xfd, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x7eff, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7f00, .a=0x69, .x=0xf7, .y=0x07, .sp=0xfd, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x7eff, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7eff, .value=0x00, .type=IO_READ},
        {.addr=0x7f00, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_011F) {
    const struct CPU_State initial_cpu = {.pc=0x307a, .a=0x44, .x=0xc0, .y=0x2a, .sp=0xe3, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x307a, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x307b, .a=0x44, .x=0xc0, .y=0x2a, .sp=0xe3, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x307a, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x307a, .value=0x00, .type=IO_READ},
        {.addr=0x307b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0120) {
    const struct CPU_State initial_cpu = {.pc=0xb79c, .a=0x5f, .x=0x5b, .y=0x5c, .sp=0xbe, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xb79c, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xb79d, .a=0x5f, .x=0x5b, .y=0x5c, .sp=0xbe, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0xb79c, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xb79c, .value=0x00, .type=IO_READ},
        {.addr=0xb79d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0121) {
    const struct CPU_State initial_cpu = {.pc=0x6349, .a=0x99, .x=0xd3, .y=0x43, .sp=0xa9, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x6349, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x634a, .a=0x99, .x=0xd3, .y=0x43, .sp=0xa9, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x6349, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x6349, .value=0x00, .type=IO_READ},
        {.addr=0x634a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0122) {
    const struct CPU_State initial_cpu = {.pc=0x08b8, .a=0x80, .x=0x17, .y=0x15, .sp=0x71, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x08b8, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x08b9, .a=0x80, .x=0x17, .y=0x15, .sp=0x71, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x08b8, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x08b8, .value=0x00, .type=IO_READ},
        {.addr=0x08b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0123) {
    const struct CPU_State initial_cpu = {.pc=0xf94e, .a=0xfd, .x=0xec, .y=0xff, .sp=0x1a, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xf94e, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xf94f, .a=0xfd, .x=0xec, .y=0xff, .sp=0x1a, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0xf94e, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xf94e, .value=0x00, .type=IO_READ},
        {.addr=0xf94f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0124) {
    const struct CPU_State initial_cpu = {.pc=0x2486, .a=0xff, .x=0x42, .y=0xb5, .sp=0xd5, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x2486, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x2487, .a=0xff, .x=0x42, .y=0xb5, .sp=0xd5, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x2486, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x2486, .value=0x00, .type=IO_READ},
        {.addr=0x2487, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0125) {
    const struct CPU_State initial_cpu = {.pc=0x731f, .a=0x66, .x=0xfb, .y=0xf8, .sp=0xcf, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x731f, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7320, .a=0x66, .x=0xfb, .y=0xf8, .sp=0xcf, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x731f, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x731f, .value=0x00, .type=IO_READ},
        {.addr=0x7320, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0126) {
    const struct CPU_State initial_cpu = {.pc=0x46ca, .a=0x1d, .x=0xcd, .y=0x70, .sp=0x52, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x46ca, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x46cb, .a=0x1d, .x=0xcd, .y=0x70, .sp=0x52, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x46ca, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x46ca, .value=0x00, .type=IO_READ},
        {.addr=0x46cb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0127) {
    const struct CPU_State initial_cpu = {.pc=0xfc9b, .a=0x97, .x=0xc7, .y=0x44, .sp=0xa1, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xfc9b, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xfc9c, .a=0x97, .x=0xc7, .y=0x44, .sp=0xa1, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xfc9b, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xfc9b, .value=0x00, .type=IO_READ},
        {.addr=0xfc9c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0128) {
    const struct CPU_State initial_cpu = {.pc=0xb05c, .a=0x5b, .x=0x1b, .y=0x4d, .sp=0x1a, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xb05c, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xb05d, .a=0x5b, .x=0x1b, .y=0x4d, .sp=0x1a, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xb05c, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xb05c, .value=0x00, .type=IO_READ},
        {.addr=0xb05d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0129) {
    const struct CPU_State initial_cpu = {.pc=0xa268, .a=0x47, .x=0x00, .y=0xf2, .sp=0x5a, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xa268, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xa269, .a=0x47, .x=0x00, .y=0xf2, .sp=0x5a, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xa268, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xa268, .value=0x00, .type=IO_READ},
        {.addr=0xa269, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_012A) {
    const struct CPU_State initial_cpu = {.pc=0x8601, .a=0x79, .x=0xd6, .y=0x72, .sp=0x6e, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x8601, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x8602, .a=0x79, .x=0xd6, .y=0x72, .sp=0x6e, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x8601, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x8601, .value=0x00, .type=IO_READ},
        {.addr=0x8602, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_012B) {
    const struct CPU_State initial_cpu = {.pc=0x4bb9, .a=0x1a, .x=0xf4, .y=0x4d, .sp=0x85, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x4bb9, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x4bba, .a=0x1a, .x=0xf4, .y=0x4d, .sp=0x85, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x4bb9, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x4bb9, .value=0x00, .type=IO_READ},
        {.addr=0x4bba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_012C) {
    const struct CPU_State initial_cpu = {.pc=0xe0c8, .a=0xf5, .x=0x83, .y=0xcb, .sp=0x3e, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xe0c8, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xe0c9, .a=0xf5, .x=0x83, .y=0xcb, .sp=0x3e, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0xe0c8, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xe0c8, .value=0x00, .type=IO_READ},
        {.addr=0xe0c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_012D) {
    const struct CPU_State initial_cpu = {.pc=0x060b, .a=0xc3, .x=0x81, .y=0x61, .sp=0xc2, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x060b, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x060c, .a=0xc3, .x=0x81, .y=0x61, .sp=0xc2, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x060b, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x060b, .value=0x00, .type=IO_READ},
        {.addr=0x060c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_012E) {
    const struct CPU_State initial_cpu = {.pc=0x7054, .a=0xd1, .x=0x37, .y=0x41, .sp=0x5f, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x7054, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7055, .a=0xd1, .x=0x37, .y=0x41, .sp=0x5f, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x7054, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7054, .value=0x00, .type=IO_READ},
        {.addr=0x7055, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_012F) {
    const struct CPU_State initial_cpu = {.pc=0x42bd, .a=0x41, .x=0xe0, .y=0xd4, .sp=0xad, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x42bd, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x42be, .a=0x41, .x=0xe0, .y=0xd4, .sp=0xad, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x42bd, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x42bd, .value=0x00, .type=IO_READ},
        {.addr=0x42be, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0130) {
    const struct CPU_State initial_cpu = {.pc=0x28e7, .a=0x9b, .x=0xe2, .y=0xb9, .sp=0x74, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x28e7, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x28e8, .a=0x9b, .x=0xe2, .y=0xb9, .sp=0x74, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x28e7, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x28e7, .value=0x00, .type=IO_READ},
        {.addr=0x28e8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0131) {
    const struct CPU_State initial_cpu = {.pc=0x5232, .a=0xbb, .x=0xb5, .y=0xa7, .sp=0xde, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x5232, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x5233, .a=0xbb, .x=0xb5, .y=0xa7, .sp=0xde, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x5232, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x5232, .value=0x00, .type=IO_READ},
        {.addr=0x5233, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0132) {
    const struct CPU_State initial_cpu = {.pc=0xb5ce, .a=0x7a, .x=0x43, .y=0xa1, .sp=0x54, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xb5ce, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xb5cf, .a=0x7a, .x=0x43, .y=0xa1, .sp=0x54, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xb5ce, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xb5ce, .value=0x00, .type=IO_READ},
        {.addr=0xb5cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0133) {
    const struct CPU_State initial_cpu = {.pc=0x85c3, .a=0xa7, .x=0x01, .y=0x83, .sp=0xb4, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x85c3, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x85c4, .a=0xa7, .x=0x01, .y=0x83, .sp=0xb4, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x85c3, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x85c3, .value=0x00, .type=IO_READ},
        {.addr=0x85c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0134) {
    const struct CPU_State initial_cpu = {.pc=0xba6c, .a=0xdc, .x=0x65, .y=0x4d, .sp=0x2b, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xba6c, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xba6d, .a=0xdc, .x=0x65, .y=0x4d, .sp=0x2b, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xba6c, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xba6c, .value=0x00, .type=IO_READ},
        {.addr=0xba6d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0135) {
    const struct CPU_State initial_cpu = {.pc=0xf0ac, .a=0xd9, .x=0x73, .y=0x6a, .sp=0x1e, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xf0ac, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xf0ad, .a=0xd9, .x=0x73, .y=0x6a, .sp=0x1e, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0xf0ac, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xf0ac, .value=0x00, .type=IO_READ},
        {.addr=0xf0ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0136) {
    const struct CPU_State initial_cpu = {.pc=0x9a5a, .a=0xf4, .x=0x26, .y=0x27, .sp=0xe2, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x9a5a, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x9a5b, .a=0xf4, .x=0x26, .y=0x27, .sp=0xe2, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x9a5a, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x9a5a, .value=0x00, .type=IO_READ},
        {.addr=0x9a5b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0137) {
    const struct CPU_State initial_cpu = {.pc=0x694d, .a=0x98, .x=0xa1, .y=0xa0, .sp=0x58, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x694d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x694e, .a=0x98, .x=0xa1, .y=0xa0, .sp=0x58, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x694d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x694d, .value=0x00, .type=IO_READ},
        {.addr=0x694e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0138) {
    const struct CPU_State initial_cpu = {.pc=0x2b7d, .a=0x99, .x=0x92, .y=0xdd, .sp=0xb5, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x2b7d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x2b7e, .a=0x99, .x=0x92, .y=0xdd, .sp=0xb5, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x2b7d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x2b7d, .value=0x00, .type=IO_READ},
        {.addr=0x2b7e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0139) {
    const struct CPU_State initial_cpu = {.pc=0xdaf1, .a=0xa7, .x=0x98, .y=0x2f, .sp=0x11, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xdaf1, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xdaf2, .a=0xa7, .x=0x98, .y=0x2f, .sp=0x11, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0xdaf1, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xdaf1, .value=0x00, .type=IO_READ},
        {.addr=0xdaf2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_013A) {
    const struct CPU_State initial_cpu = {.pc=0x08d0, .a=0xa4, .x=0x50, .y=0x69, .sp=0xbe, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x08d0, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x08d1, .a=0xa4, .x=0x50, .y=0x69, .sp=0xbe, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x08d0, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x08d0, .value=0x00, .type=IO_READ},
        {.addr=0x08d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_013B) {
    const struct CPU_State initial_cpu = {.pc=0x227b, .a=0xa3, .x=0x95, .y=0xf8, .sp=0xd1, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x227b, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x227c, .a=0xa3, .x=0x95, .y=0xf8, .sp=0xd1, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x227b, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x227b, .value=0x00, .type=IO_READ},
        {.addr=0x227c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_013C) {
    const struct CPU_State initial_cpu = {.pc=0x9c67, .a=0x2d, .x=0xbb, .y=0xdd, .sp=0x8c, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x9c67, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x9c68, .a=0x2d, .x=0xbb, .y=0xdd, .sp=0x8c, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x9c67, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x9c67, .value=0x00, .type=IO_READ},
        {.addr=0x9c68, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_013D) {
    const struct CPU_State initial_cpu = {.pc=0x9556, .a=0xa9, .x=0x75, .y=0x8a, .sp=0xc2, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x9556, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x9557, .a=0xa9, .x=0x75, .y=0x8a, .sp=0xc2, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x9556, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x9556, .value=0x00, .type=IO_READ},
        {.addr=0x9557, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_013E) {
    const struct CPU_State initial_cpu = {.pc=0xa925, .a=0xc5, .x=0x64, .y=0x80, .sp=0x6a, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xa925, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xa926, .a=0xc5, .x=0x64, .y=0x80, .sp=0x6a, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0xa925, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xa925, .value=0x00, .type=IO_READ},
        {.addr=0xa926, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_013F) {
    const struct CPU_State initial_cpu = {.pc=0x8558, .a=0x1a, .x=0x6e, .y=0x1f, .sp=0xdd, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x8558, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x8559, .a=0x1a, .x=0x6e, .y=0x1f, .sp=0xdd, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x8558, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x8558, .value=0x00, .type=IO_READ},
        {.addr=0x8559, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0140) {
    const struct CPU_State initial_cpu = {.pc=0x3bbf, .a=0xe0, .x=0x30, .y=0x5f, .sp=0xb3, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x3bbf, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x3bc0, .a=0xe0, .x=0x30, .y=0x5f, .sp=0xb3, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x3bbf, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x3bbf, .value=0x00, .type=IO_READ},
        {.addr=0x3bc0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0141) {
    const struct CPU_State initial_cpu = {.pc=0x8f71, .a=0x0b, .x=0x33, .y=0x9c, .sp=0x4f, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x8f71, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x8f72, .a=0x0b, .x=0x33, .y=0x9c, .sp=0x4f, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x8f71, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x8f71, .value=0x00, .type=IO_READ},
        {.addr=0x8f72, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0142) {
    const struct CPU_State initial_cpu = {.pc=0x58e8, .a=0x2d, .x=0x39, .y=0xcd, .sp=0x66, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x58e8, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x58e9, .a=0x2d, .x=0x39, .y=0xcd, .sp=0x66, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x58e8, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x58e8, .value=0x00, .type=IO_READ},
        {.addr=0x58e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0143) {
    const struct CPU_State initial_cpu = {.pc=0xf82e, .a=0x5c, .x=0xe9, .y=0xd2, .sp=0x64, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xf82e, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xf82f, .a=0x5c, .x=0xe9, .y=0xd2, .sp=0x64, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0xf82e, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xf82e, .value=0x00, .type=IO_READ},
        {.addr=0xf82f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0144) {
    const struct CPU_State initial_cpu = {.pc=0xeb85, .a=0x1a, .x=0xd5, .y=0x7e, .sp=0x30, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xeb85, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xeb86, .a=0x1a, .x=0xd5, .y=0x7e, .sp=0x30, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0xeb85, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xeb85, .value=0x00, .type=IO_READ},
        {.addr=0xeb86, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0145) {
    const struct CPU_State initial_cpu = {.pc=0x847b, .a=0x61, .x=0x5b, .y=0x5e, .sp=0xda, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x847b, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x847c, .a=0x61, .x=0x5b, .y=0x5e, .sp=0xda, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x847b, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x847b, .value=0x00, .type=IO_READ},
        {.addr=0x847c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0146) {
    const struct CPU_State initial_cpu = {.pc=0x19bc, .a=0xbf, .x=0x48, .y=0x64, .sp=0xab, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x19bc, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x19bd, .a=0xbf, .x=0x48, .y=0x64, .sp=0xab, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x19bc, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x19bc, .value=0x00, .type=IO_READ},
        {.addr=0x19bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0147) {
    const struct CPU_State initial_cpu = {.pc=0x5bd5, .a=0xc7, .x=0xc3, .y=0x94, .sp=0x3a, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x5bd5, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x5bd6, .a=0xc7, .x=0xc3, .y=0x94, .sp=0x3a, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x5bd5, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x5bd5, .value=0x00, .type=IO_READ},
        {.addr=0x5bd6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0148) {
    const struct CPU_State initial_cpu = {.pc=0x1419, .a=0x64, .x=0x98, .y=0xac, .sp=0xf5, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x1419, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x141a, .a=0x64, .x=0x98, .y=0xac, .sp=0xf5, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x1419, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x1419, .value=0x00, .type=IO_READ},
        {.addr=0x141a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0149) {
    const struct CPU_State initial_cpu = {.pc=0x8b3c, .a=0x25, .x=0x61, .y=0x57, .sp=0xa6, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x8b3c, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x8b3d, .a=0x25, .x=0x61, .y=0x57, .sp=0xa6, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x8b3c, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x8b3c, .value=0x00, .type=IO_READ},
        {.addr=0x8b3d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_014A) {
    const struct CPU_State initial_cpu = {.pc=0x2477, .a=0x9b, .x=0x20, .y=0xe3, .sp=0x12, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x2477, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x2478, .a=0x9b, .x=0x20, .y=0xe3, .sp=0x12, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x2477, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x2477, .value=0x00, .type=IO_READ},
        {.addr=0x2478, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_014B) {
    const struct CPU_State initial_cpu = {.pc=0x5b44, .a=0x76, .x=0xc3, .y=0x78, .sp=0x8a, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x5b44, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x5b45, .a=0x76, .x=0xc3, .y=0x78, .sp=0x8a, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x5b44, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x5b44, .value=0x00, .type=IO_READ},
        {.addr=0x5b45, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_014C) {
    const struct CPU_State initial_cpu = {.pc=0x467c, .a=0x0b, .x=0x35, .y=0x24, .sp=0x00, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x467c, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x467d, .a=0x0b, .x=0x35, .y=0x24, .sp=0x00, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x467c, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x467c, .value=0x00, .type=IO_READ},
        {.addr=0x467d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_014D) {
    const struct CPU_State initial_cpu = {.pc=0x3b63, .a=0x4c, .x=0xc6, .y=0xd2, .sp=0x93, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x3b63, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x3b64, .a=0x4c, .x=0xc6, .y=0xd2, .sp=0x93, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x3b63, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x3b63, .value=0x00, .type=IO_READ},
        {.addr=0x3b64, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_014E) {
    const struct CPU_State initial_cpu = {.pc=0x13f1, .a=0x3a, .x=0xc4, .y=0x75, .sp=0x3f, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x13f1, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x13f2, .a=0x3a, .x=0xc4, .y=0x75, .sp=0x3f, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x13f1, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x13f1, .value=0x00, .type=IO_READ},
        {.addr=0x13f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_014F) {
    const struct CPU_State initial_cpu = {.pc=0xcb96, .a=0x9a, .x=0xdb, .y=0x46, .sp=0xb1, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xcb96, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xcb97, .a=0x9a, .x=0xdb, .y=0x46, .sp=0xb1, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xcb96, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xcb96, .value=0x00, .type=IO_READ},
        {.addr=0xcb97, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0150) {
    const struct CPU_State initial_cpu = {.pc=0xcc75, .a=0x88, .x=0xa3, .y=0x6b, .sp=0x2f, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xcc75, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xcc76, .a=0x88, .x=0xa3, .y=0x6b, .sp=0x2f, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0xcc75, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xcc75, .value=0x00, .type=IO_READ},
        {.addr=0xcc76, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0151) {
    const struct CPU_State initial_cpu = {.pc=0x67af, .a=0x31, .x=0x31, .y=0x0e, .sp=0xb6, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x67af, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x67b0, .a=0x31, .x=0x31, .y=0x0e, .sp=0xb6, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x67af, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x67af, .value=0x00, .type=IO_READ},
        {.addr=0x67b0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0152) {
    const struct CPU_State initial_cpu = {.pc=0x4f1b, .a=0x76, .x=0x7e, .y=0x64, .sp=0xa5, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x4f1b, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x4f1c, .a=0x76, .x=0x7e, .y=0x64, .sp=0xa5, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x4f1b, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x4f1b, .value=0x00, .type=IO_READ},
        {.addr=0x4f1c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0153) {
    const struct CPU_State initial_cpu = {.pc=0x7bb0, .a=0xe4, .x=0xf5, .y=0x38, .sp=0x8c, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x7bb0, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7bb1, .a=0xe4, .x=0xf5, .y=0x38, .sp=0x8c, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x7bb0, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7bb0, .value=0x00, .type=IO_READ},
        {.addr=0x7bb1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0154) {
    const struct CPU_State initial_cpu = {.pc=0x826f, .a=0x42, .x=0xd1, .y=0xdc, .sp=0xef, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x826f, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x8270, .a=0x42, .x=0xd1, .y=0xdc, .sp=0xef, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x826f, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x826f, .value=0x00, .type=IO_READ},
        {.addr=0x8270, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0155) {
    const struct CPU_State initial_cpu = {.pc=0x95f8, .a=0xd5, .x=0x8f, .y=0x33, .sp=0x2d, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x95f8, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x95f9, .a=0xd5, .x=0x8f, .y=0x33, .sp=0x2d, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x95f8, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x95f8, .value=0x00, .type=IO_READ},
        {.addr=0x95f9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0156) {
    const struct CPU_State initial_cpu = {.pc=0x2350, .a=0x0f, .x=0xb7, .y=0x8f, .sp=0xd8, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x2350, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x2351, .a=0x0f, .x=0xb7, .y=0x8f, .sp=0xd8, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x2350, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x2350, .value=0x00, .type=IO_READ},
        {.addr=0x2351, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0157) {
    const struct CPU_State initial_cpu = {.pc=0x78f1, .a=0xb8, .x=0xdc, .y=0x81, .sp=0x0e, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x78f1, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x78f2, .a=0xb8, .x=0xdc, .y=0x81, .sp=0x0e, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x78f1, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x78f1, .value=0x00, .type=IO_READ},
        {.addr=0x78f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0158) {
    const struct CPU_State initial_cpu = {.pc=0x53af, .a=0xf3, .x=0x81, .y=0x8f, .sp=0xe0, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x53af, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x53b0, .a=0xf3, .x=0x81, .y=0x8f, .sp=0xe0, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x53af, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x53af, .value=0x00, .type=IO_READ},
        {.addr=0x53b0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0159) {
    const struct CPU_State initial_cpu = {.pc=0x8dff, .a=0x2f, .x=0x85, .y=0xa9, .sp=0x50, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x8dff, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x8e00, .a=0x2f, .x=0x85, .y=0xa9, .sp=0x50, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x8dff, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x8dff, .value=0x00, .type=IO_READ},
        {.addr=0x8e00, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_015A) {
    const struct CPU_State initial_cpu = {.pc=0x081f, .a=0x5d, .x=0xfd, .y=0x28, .sp=0x68, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x081f, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0820, .a=0x5d, .x=0xfd, .y=0x28, .sp=0x68, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x081f, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x081f, .value=0x00, .type=IO_READ},
        {.addr=0x0820, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_015B) {
    const struct CPU_State initial_cpu = {.pc=0xd7c3, .a=0xd1, .x=0xa4, .y=0x9d, .sp=0x0f, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xd7c3, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xd7c4, .a=0xd1, .x=0xa4, .y=0x9d, .sp=0x0f, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xd7c3, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xd7c3, .value=0x00, .type=IO_READ},
        {.addr=0xd7c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_015C) {
    const struct CPU_State initial_cpu = {.pc=0x1153, .a=0xc7, .x=0x52, .y=0xeb, .sp=0x57, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x1153, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x1154, .a=0xc7, .x=0x52, .y=0xeb, .sp=0x57, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x1153, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x1153, .value=0x00, .type=IO_READ},
        {.addr=0x1154, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_015D) {
    const struct CPU_State initial_cpu = {.pc=0xefd1, .a=0x12, .x=0x3f, .y=0x46, .sp=0xe1, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xefd1, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xefd2, .a=0x12, .x=0x3f, .y=0x46, .sp=0xe1, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xefd1, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xefd1, .value=0x00, .type=IO_READ},
        {.addr=0xefd2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_015E) {
    const struct CPU_State initial_cpu = {.pc=0x908a, .a=0x0e, .x=0xe2, .y=0x60, .sp=0xd8, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x908a, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x908b, .a=0x0e, .x=0xe2, .y=0x60, .sp=0xd8, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x908a, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x908a, .value=0x00, .type=IO_READ},
        {.addr=0x908b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_015F) {
    const struct CPU_State initial_cpu = {.pc=0x863d, .a=0x28, .x=0x96, .y=0x79, .sp=0x1a, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x863d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x863e, .a=0x28, .x=0x96, .y=0x79, .sp=0x1a, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x863d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x863d, .value=0x00, .type=IO_READ},
        {.addr=0x863e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0160) {
    const struct CPU_State initial_cpu = {.pc=0x7aa3, .a=0x15, .x=0xf5, .y=0x20, .sp=0x7a, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x7aa3, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7aa4, .a=0x15, .x=0xf5, .y=0x20, .sp=0x7a, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x7aa3, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7aa3, .value=0x00, .type=IO_READ},
        {.addr=0x7aa4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0161) {
    const struct CPU_State initial_cpu = {.pc=0x7285, .a=0x49, .x=0x5b, .y=0x57, .sp=0x93, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x7285, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7286, .a=0x49, .x=0x5b, .y=0x57, .sp=0x93, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x7285, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7285, .value=0x00, .type=IO_READ},
        {.addr=0x7286, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0162) {
    const struct CPU_State initial_cpu = {.pc=0xd4e3, .a=0xfc, .x=0x35, .y=0xb3, .sp=0x54, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xd4e3, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xd4e4, .a=0xfc, .x=0x35, .y=0xb3, .sp=0x54, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xd4e3, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xd4e3, .value=0x00, .type=IO_READ},
        {.addr=0xd4e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0163) {
    const struct CPU_State initial_cpu = {.pc=0x2ad6, .a=0xa0, .x=0xba, .y=0x0a, .sp=0x75, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x2ad6, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x2ad7, .a=0xa0, .x=0xba, .y=0x0a, .sp=0x75, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x2ad6, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x2ad6, .value=0x00, .type=IO_READ},
        {.addr=0x2ad7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0164) {
    const struct CPU_State initial_cpu = {.pc=0x5b40, .a=0xb0, .x=0xa4, .y=0xa5, .sp=0x02, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x5b40, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x5b41, .a=0xb0, .x=0xa4, .y=0xa5, .sp=0x02, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x5b40, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x5b40, .value=0x00, .type=IO_READ},
        {.addr=0x5b41, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0165) {
    const struct CPU_State initial_cpu = {.pc=0xbce6, .a=0xfa, .x=0x8a, .y=0x61, .sp=0xa4, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xbce6, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xbce7, .a=0xfa, .x=0x8a, .y=0x61, .sp=0xa4, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xbce6, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xbce6, .value=0x00, .type=IO_READ},
        {.addr=0xbce7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0166) {
    const struct CPU_State initial_cpu = {.pc=0x311f, .a=0x25, .x=0x03, .y=0xe3, .sp=0x6c, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x311f, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x3120, .a=0x25, .x=0x03, .y=0xe3, .sp=0x6c, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x311f, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x311f, .value=0x00, .type=IO_READ},
        {.addr=0x3120, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0167) {
    const struct CPU_State initial_cpu = {.pc=0x11a7, .a=0xfd, .x=0x9a, .y=0x9c, .sp=0x4e, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x11a7, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x11a8, .a=0xfd, .x=0x9a, .y=0x9c, .sp=0x4e, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x11a7, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x11a7, .value=0x00, .type=IO_READ},
        {.addr=0x11a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0168) {
    const struct CPU_State initial_cpu = {.pc=0xea26, .a=0xa3, .x=0xfd, .y=0x87, .sp=0xc8, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xea26, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xea27, .a=0xa3, .x=0xfd, .y=0x87, .sp=0xc8, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xea26, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xea26, .value=0x00, .type=IO_READ},
        {.addr=0xea27, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0169) {
    const struct CPU_State initial_cpu = {.pc=0x0cd0, .a=0x99, .x=0x12, .y=0xf5, .sp=0x41, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x0cd0, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0cd1, .a=0x99, .x=0x12, .y=0xf5, .sp=0x41, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x0cd0, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x0cd0, .value=0x00, .type=IO_READ},
        {.addr=0x0cd1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_016A) {
    const struct CPU_State initial_cpu = {.pc=0x451a, .a=0x4d, .x=0x44, .y=0x08, .sp=0x86, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x451a, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x451b, .a=0x4d, .x=0x44, .y=0x08, .sp=0x86, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x451a, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x451a, .value=0x00, .type=IO_READ},
        {.addr=0x451b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_016B) {
    const struct CPU_State initial_cpu = {.pc=0xcb30, .a=0xf6, .x=0x4e, .y=0x88, .sp=0x50, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xcb30, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xcb31, .a=0xf6, .x=0x4e, .y=0x88, .sp=0x50, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xcb30, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xcb30, .value=0x00, .type=IO_READ},
        {.addr=0xcb31, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_016C) {
    const struct CPU_State initial_cpu = {.pc=0xe728, .a=0xc9, .x=0x15, .y=0x95, .sp=0x45, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xe728, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xe729, .a=0xc9, .x=0x15, .y=0x95, .sp=0x45, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xe728, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xe728, .value=0x00, .type=IO_READ},
        {.addr=0xe729, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_016D) {
    const struct CPU_State initial_cpu = {.pc=0x7490, .a=0x13, .x=0x2c, .y=0x0f, .sp=0x88, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x7490, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7491, .a=0x13, .x=0x2c, .y=0x0f, .sp=0x88, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x7490, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7490, .value=0x00, .type=IO_READ},
        {.addr=0x7491, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_016E) {
    const struct CPU_State initial_cpu = {.pc=0x692a, .a=0xf7, .x=0xe3, .y=0x05, .sp=0x1b, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x692a, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x692b, .a=0xf7, .x=0xe3, .y=0x05, .sp=0x1b, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x692a, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x692a, .value=0x00, .type=IO_READ},
        {.addr=0x692b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_016F) {
    const struct CPU_State initial_cpu = {.pc=0x0d5f, .a=0x31, .x=0x96, .y=0x3a, .sp=0xf8, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x0d5f, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0d60, .a=0x31, .x=0x96, .y=0x3a, .sp=0xf8, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x0d5f, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x0d5f, .value=0x00, .type=IO_READ},
        {.addr=0x0d60, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0170) {
    const struct CPU_State initial_cpu = {.pc=0xf442, .a=0x79, .x=0x64, .y=0x50, .sp=0x49, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xf442, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xf443, .a=0x79, .x=0x64, .y=0x50, .sp=0x49, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xf442, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xf442, .value=0x00, .type=IO_READ},
        {.addr=0xf443, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0171) {
    const struct CPU_State initial_cpu = {.pc=0x8f86, .a=0xd0, .x=0x43, .y=0x45, .sp=0x6a, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x8f86, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x8f87, .a=0xd0, .x=0x43, .y=0x45, .sp=0x6a, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x8f86, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x8f86, .value=0x00, .type=IO_READ},
        {.addr=0x8f87, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0172) {
    const struct CPU_State initial_cpu = {.pc=0x047e, .a=0xa0, .x=0xbe, .y=0x01, .sp=0x5e, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x047e, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x047f, .a=0xa0, .x=0xbe, .y=0x01, .sp=0x5e, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x047e, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x047e, .value=0x00, .type=IO_READ},
        {.addr=0x047f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0173) {
    const struct CPU_State initial_cpu = {.pc=0x11e9, .a=0x81, .x=0x9c, .y=0x77, .sp=0x17, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x11e9, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x11ea, .a=0x81, .x=0x9c, .y=0x77, .sp=0x17, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x11e9, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x11e9, .value=0x00, .type=IO_READ},
        {.addr=0x11ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0174) {
    const struct CPU_State initial_cpu = {.pc=0x3a9f, .a=0x12, .x=0xf0, .y=0x24, .sp=0xea, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x3a9f, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x3aa0, .a=0x12, .x=0xf0, .y=0x24, .sp=0xea, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x3a9f, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x3a9f, .value=0x00, .type=IO_READ},
        {.addr=0x3aa0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0175) {
    const struct CPU_State initial_cpu = {.pc=0xcec7, .a=0xc8, .x=0xf6, .y=0x09, .sp=0x3c, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xcec7, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xcec8, .a=0xc8, .x=0xf6, .y=0x09, .sp=0x3c, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xcec7, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xcec7, .value=0x00, .type=IO_READ},
        {.addr=0xcec8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0176) {
    const struct CPU_State initial_cpu = {.pc=0xf031, .a=0xc4, .x=0xa4, .y=0x7c, .sp=0xd9, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xf031, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xf032, .a=0xc4, .x=0xa4, .y=0x7c, .sp=0xd9, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0xf031, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xf031, .value=0x00, .type=IO_READ},
        {.addr=0xf032, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0177) {
    const struct CPU_State initial_cpu = {.pc=0xb6b7, .a=0x6c, .x=0x34, .y=0x17, .sp=0x91, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xb6b7, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xb6b8, .a=0x6c, .x=0x34, .y=0x17, .sp=0x91, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0xb6b7, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xb6b7, .value=0x00, .type=IO_READ},
        {.addr=0xb6b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0178) {
    const struct CPU_State initial_cpu = {.pc=0xba34, .a=0x9d, .x=0x1d, .y=0x33, .sp=0x82, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xba34, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xba35, .a=0x9d, .x=0x1d, .y=0x33, .sp=0x82, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xba34, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xba34, .value=0x00, .type=IO_READ},
        {.addr=0xba35, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0179) {
    const struct CPU_State initial_cpu = {.pc=0xea24, .a=0x29, .x=0xd7, .y=0x07, .sp=0xa5, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xea24, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xea25, .a=0x29, .x=0xd7, .y=0x07, .sp=0xa5, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xea24, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xea24, .value=0x00, .type=IO_READ},
        {.addr=0xea25, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_017A) {
    const struct CPU_State initial_cpu = {.pc=0x5057, .a=0xbe, .x=0x9b, .y=0x8a, .sp=0x23, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x5057, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x5058, .a=0xbe, .x=0x9b, .y=0x8a, .sp=0x23, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x5057, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x5057, .value=0x00, .type=IO_READ},
        {.addr=0x5058, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_017B) {
    const struct CPU_State initial_cpu = {.pc=0x78fd, .a=0x07, .x=0x03, .y=0x02, .sp=0xe4, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x78fd, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x78fe, .a=0x07, .x=0x03, .y=0x02, .sp=0xe4, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x78fd, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x78fd, .value=0x00, .type=IO_READ},
        {.addr=0x78fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_017C) {
    const struct CPU_State initial_cpu = {.pc=0x7301, .a=0xda, .x=0x5e, .y=0xe2, .sp=0xf5, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x7301, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7302, .a=0xda, .x=0x5e, .y=0xe2, .sp=0xf5, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x7301, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7301, .value=0x00, .type=IO_READ},
        {.addr=0x7302, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_017D) {
    const struct CPU_State initial_cpu = {.pc=0xf349, .a=0x30, .x=0xd9, .y=0xaf, .sp=0xe0, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xf349, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xf34a, .a=0x30, .x=0xd9, .y=0xaf, .sp=0xe0, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0xf349, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xf349, .value=0x00, .type=IO_READ},
        {.addr=0xf34a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_017E) {
    const struct CPU_State initial_cpu = {.pc=0x5d35, .a=0x01, .x=0x6a, .y=0xef, .sp=0x2b, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x5d35, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x5d36, .a=0x01, .x=0x6a, .y=0xef, .sp=0x2b, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x5d35, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x5d35, .value=0x00, .type=IO_READ},
        {.addr=0x5d36, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_017F) {
    const struct CPU_State initial_cpu = {.pc=0x8c36, .a=0x42, .x=0x39, .y=0x71, .sp=0x51, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x8c36, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x8c37, .a=0x42, .x=0x39, .y=0x71, .sp=0x51, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x8c36, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x8c36, .value=0x00, .type=IO_READ},
        {.addr=0x8c37, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0180) {
    const struct CPU_State initial_cpu = {.pc=0x365f, .a=0x8e, .x=0x46, .y=0xd2, .sp=0x5e, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x365f, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x3660, .a=0x8e, .x=0x46, .y=0xd2, .sp=0x5e, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x365f, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x365f, .value=0x00, .type=IO_READ},
        {.addr=0x3660, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0181) {
    const struct CPU_State initial_cpu = {.pc=0x66fb, .a=0xc6, .x=0xb4, .y=0xf1, .sp=0x8c, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x66fb, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x66fc, .a=0xc6, .x=0xb4, .y=0xf1, .sp=0x8c, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x66fb, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x66fb, .value=0x00, .type=IO_READ},
        {.addr=0x66fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0182) {
    const struct CPU_State initial_cpu = {.pc=0xef70, .a=0xa0, .x=0xca, .y=0x92, .sp=0xf7, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xef70, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xef71, .a=0xa0, .x=0xca, .y=0x92, .sp=0xf7, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0xef70, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xef70, .value=0x00, .type=IO_READ},
        {.addr=0xef71, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0183) {
    const struct CPU_State initial_cpu = {.pc=0x0457, .a=0x00, .x=0x53, .y=0xd2, .sp=0x5b, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x0457, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0458, .a=0x00, .x=0x53, .y=0xd2, .sp=0x5b, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x0457, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x0457, .value=0x00, .type=IO_READ},
        {.addr=0x0458, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0184) {
    const struct CPU_State initial_cpu = {.pc=0x891b, .a=0x93, .x=0x35, .y=0xa0, .sp=0xe4, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x891b, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x891c, .a=0x93, .x=0x35, .y=0xa0, .sp=0xe4, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x891b, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x891b, .value=0x00, .type=IO_READ},
        {.addr=0x891c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0185) {
    const struct CPU_State initial_cpu = {.pc=0xfe76, .a=0xb9, .x=0x4a, .y=0x9b, .sp=0x20, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xfe76, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xfe77, .a=0xb9, .x=0x4a, .y=0x9b, .sp=0x20, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0xfe76, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xfe76, .value=0x00, .type=IO_READ},
        {.addr=0xfe77, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0186) {
    const struct CPU_State initial_cpu = {.pc=0x19ef, .a=0x8b, .x=0xc4, .y=0x88, .sp=0x95, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x19ef, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x19f0, .a=0x8b, .x=0xc4, .y=0x88, .sp=0x95, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x19ef, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x19ef, .value=0x00, .type=IO_READ},
        {.addr=0x19f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0187) {
    const struct CPU_State initial_cpu = {.pc=0xbebb, .a=0xb2, .x=0x90, .y=0x75, .sp=0x1f, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xbebb, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xbebc, .a=0xb2, .x=0x90, .y=0x75, .sp=0x1f, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0xbebb, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xbebb, .value=0x00, .type=IO_READ},
        {.addr=0xbebc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0188) {
    const struct CPU_State initial_cpu = {.pc=0x33c6, .a=0x7d, .x=0x34, .y=0x55, .sp=0x54, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x33c6, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x33c7, .a=0x7d, .x=0x34, .y=0x55, .sp=0x54, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x33c6, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x33c6, .value=0x00, .type=IO_READ},
        {.addr=0x33c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0189) {
    const struct CPU_State initial_cpu = {.pc=0xcb7c, .a=0x2a, .x=0x0e, .y=0x11, .sp=0xd8, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xcb7c, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xcb7d, .a=0x2a, .x=0x0e, .y=0x11, .sp=0xd8, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xcb7c, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xcb7c, .value=0x00, .type=IO_READ},
        {.addr=0xcb7d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_018A) {
    const struct CPU_State initial_cpu = {.pc=0xba79, .a=0xd7, .x=0xfc, .y=0xe7, .sp=0x08, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xba79, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xba7a, .a=0xd7, .x=0xfc, .y=0xe7, .sp=0x08, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0xba79, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xba79, .value=0x00, .type=IO_READ},
        {.addr=0xba7a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_018B) {
    const struct CPU_State initial_cpu = {.pc=0xe62b, .a=0xf2, .x=0x0b, .y=0x74, .sp=0xd1, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xe62b, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xe62c, .a=0xf2, .x=0x0b, .y=0x74, .sp=0xd1, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0xe62b, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xe62b, .value=0x00, .type=IO_READ},
        {.addr=0xe62c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_018C) {
    const struct CPU_State initial_cpu = {.pc=0xdc4d, .a=0xc0, .x=0xe9, .y=0xfe, .sp=0x48, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xdc4d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xdc4e, .a=0xc0, .x=0xe9, .y=0xfe, .sp=0x48, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xdc4d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xdc4d, .value=0x00, .type=IO_READ},
        {.addr=0xdc4e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_018D) {
    const struct CPU_State initial_cpu = {.pc=0x7a19, .a=0x0a, .x=0x05, .y=0x23, .sp=0xd9, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x7a19, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7a1a, .a=0x0a, .x=0x05, .y=0x23, .sp=0xd9, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x7a19, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7a19, .value=0x00, .type=IO_READ},
        {.addr=0x7a1a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_018E) {
    const struct CPU_State initial_cpu = {.pc=0x3ee2, .a=0x07, .x=0x5f, .y=0xd4, .sp=0x55, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x3ee2, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x3ee3, .a=0x07, .x=0x5f, .y=0xd4, .sp=0x55, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x3ee2, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x3ee2, .value=0x00, .type=IO_READ},
        {.addr=0x3ee3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_018F) {
    const struct CPU_State initial_cpu = {.pc=0xa53c, .a=0x97, .x=0x19, .y=0x27, .sp=0xea, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xa53c, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xa53d, .a=0x97, .x=0x19, .y=0x27, .sp=0xea, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xa53c, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xa53c, .value=0x00, .type=IO_READ},
        {.addr=0xa53d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0190) {
    const struct CPU_State initial_cpu = {.pc=0x9fec, .a=0xb9, .x=0xa3, .y=0xdb, .sp=0x40, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x9fec, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x9fed, .a=0xb9, .x=0xa3, .y=0xdb, .sp=0x40, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x9fec, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x9fec, .value=0x00, .type=IO_READ},
        {.addr=0x9fed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0191) {
    const struct CPU_State initial_cpu = {.pc=0x66ef, .a=0x09, .x=0x73, .y=0x18, .sp=0xe0, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x66ef, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x66f0, .a=0x09, .x=0x73, .y=0x18, .sp=0xe0, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x66ef, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x66ef, .value=0x00, .type=IO_READ},
        {.addr=0x66f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0192) {
    const struct CPU_State initial_cpu = {.pc=0x4130, .a=0xf1, .x=0x2f, .y=0x97, .sp=0xd3, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x4130, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x4131, .a=0xf1, .x=0x2f, .y=0x97, .sp=0xd3, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x4130, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x4130, .value=0x00, .type=IO_READ},
        {.addr=0x4131, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0193) {
    const struct CPU_State initial_cpu = {.pc=0x5f56, .a=0x19, .x=0x99, .y=0xdd, .sp=0xec, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x5f56, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x5f57, .a=0x19, .x=0x99, .y=0xdd, .sp=0xec, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x5f56, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x5f56, .value=0x00, .type=IO_READ},
        {.addr=0x5f57, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0194) {
    const struct CPU_State initial_cpu = {.pc=0xe024, .a=0xc3, .x=0xfb, .y=0x4a, .sp=0x88, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xe024, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xe025, .a=0xc3, .x=0xfb, .y=0x4a, .sp=0x88, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0xe024, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xe024, .value=0x00, .type=IO_READ},
        {.addr=0xe025, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0195) {
    const struct CPU_State initial_cpu = {.pc=0x7bb6, .a=0x5e, .x=0x46, .y=0x8d, .sp=0x0f, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x7bb6, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7bb7, .a=0x5e, .x=0x46, .y=0x8d, .sp=0x0f, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x7bb6, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7bb6, .value=0x00, .type=IO_READ},
        {.addr=0x7bb7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0196) {
    const struct CPU_State initial_cpu = {.pc=0x2551, .a=0x45, .x=0xee, .y=0x6e, .sp=0xa7, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x2551, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x2552, .a=0x45, .x=0xee, .y=0x6e, .sp=0xa7, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x2551, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x2551, .value=0x00, .type=IO_READ},
        {.addr=0x2552, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0197) {
    const struct CPU_State initial_cpu = {.pc=0xfdb1, .a=0x6a, .x=0x9b, .y=0xda, .sp=0x84, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xfdb1, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xfdb2, .a=0x6a, .x=0x9b, .y=0xda, .sp=0x84, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xfdb1, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xfdb1, .value=0x00, .type=IO_READ},
        {.addr=0xfdb2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0198) {
    const struct CPU_State initial_cpu = {.pc=0xa89d, .a=0x22, .x=0x8a, .y=0x29, .sp=0x94, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xa89d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xa89e, .a=0x22, .x=0x8a, .y=0x29, .sp=0x94, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xa89d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xa89d, .value=0x00, .type=IO_READ},
        {.addr=0xa89e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0199) {
    const struct CPU_State initial_cpu = {.pc=0x7a31, .a=0x3a, .x=0x8f, .y=0x8b, .sp=0x95, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x7a31, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7a32, .a=0x3a, .x=0x8f, .y=0x8b, .sp=0x95, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x7a31, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7a31, .value=0x00, .type=IO_READ},
        {.addr=0x7a32, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_019A) {
    const struct CPU_State initial_cpu = {.pc=0xa306, .a=0x4b, .x=0xe7, .y=0x75, .sp=0xe7, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xa306, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xa307, .a=0x4b, .x=0xe7, .y=0x75, .sp=0xe7, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xa306, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xa306, .value=0x00, .type=IO_READ},
        {.addr=0xa307, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_019B) {
    const struct CPU_State initial_cpu = {.pc=0xc99a, .a=0x96, .x=0x56, .y=0xe6, .sp=0xf0, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xc99a, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xc99b, .a=0x96, .x=0x56, .y=0xe6, .sp=0xf0, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0xc99a, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xc99a, .value=0x00, .type=IO_READ},
        {.addr=0xc99b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_019C) {
    const struct CPU_State initial_cpu = {.pc=0xe11f, .a=0xbd, .x=0x84, .y=0xa3, .sp=0xd5, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xe11f, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xe120, .a=0xbd, .x=0x84, .y=0xa3, .sp=0xd5, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xe11f, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xe11f, .value=0x00, .type=IO_READ},
        {.addr=0xe120, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_019D) {
    const struct CPU_State initial_cpu = {.pc=0xb6af, .a=0x68, .x=0xf2, .y=0x5c, .sp=0xf7, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xb6af, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xb6b0, .a=0x68, .x=0xf2, .y=0x5c, .sp=0xf7, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0xb6af, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xb6af, .value=0x00, .type=IO_READ},
        {.addr=0xb6b0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_019E) {
    const struct CPU_State initial_cpu = {.pc=0xcbde, .a=0x36, .x=0xbd, .y=0x78, .sp=0x1f, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xcbde, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xcbdf, .a=0x36, .x=0xbd, .y=0x78, .sp=0x1f, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xcbde, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xcbde, .value=0x00, .type=IO_READ},
        {.addr=0xcbdf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_019F) {
    const struct CPU_State initial_cpu = {.pc=0x8aef, .a=0x1d, .x=0x38, .y=0xa3, .sp=0x63, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x8aef, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x8af0, .a=0x1d, .x=0x38, .y=0xa3, .sp=0x63, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x8aef, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x8aef, .value=0x00, .type=IO_READ},
        {.addr=0x8af0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x7f4e, .a=0xb2, .x=0xb5, .y=0x9c, .sp=0x0d, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x7f4e, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7f4f, .a=0xb2, .x=0xb5, .y=0x9c, .sp=0x0d, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x7f4e, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7f4e, .value=0x00, .type=IO_READ},
        {.addr=0x7f4f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01A1) {
    const struct CPU_State initial_cpu = {.pc=0x4d79, .a=0x08, .x=0x6c, .y=0x5c, .sp=0x08, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x4d79, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x4d7a, .a=0x08, .x=0x6c, .y=0x5c, .sp=0x08, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x4d79, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x4d79, .value=0x00, .type=IO_READ},
        {.addr=0x4d7a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01A2) {
    const struct CPU_State initial_cpu = {.pc=0xa555, .a=0xe3, .x=0x64, .y=0xe6, .sp=0x8a, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xa555, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xa556, .a=0xe3, .x=0x64, .y=0xe6, .sp=0x8a, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0xa555, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xa555, .value=0x00, .type=IO_READ},
        {.addr=0xa556, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01A3) {
    const struct CPU_State initial_cpu = {.pc=0xca4a, .a=0xbb, .x=0x64, .y=0x69, .sp=0xed, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xca4a, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xca4b, .a=0xbb, .x=0x64, .y=0x69, .sp=0xed, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0xca4a, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xca4a, .value=0x00, .type=IO_READ},
        {.addr=0xca4b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01A4) {
    const struct CPU_State initial_cpu = {.pc=0xd549, .a=0x8d, .x=0x2f, .y=0xda, .sp=0x28, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xd549, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xd54a, .a=0x8d, .x=0x2f, .y=0xda, .sp=0x28, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xd549, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xd549, .value=0x00, .type=IO_READ},
        {.addr=0xd54a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01A5) {
    const struct CPU_State initial_cpu = {.pc=0xdc57, .a=0x64, .x=0x39, .y=0xa0, .sp=0x66, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xdc57, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xdc58, .a=0x64, .x=0x39, .y=0xa0, .sp=0x66, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xdc57, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xdc57, .value=0x00, .type=IO_READ},
        {.addr=0xdc58, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01A6) {
    const struct CPU_State initial_cpu = {.pc=0xf7e8, .a=0x0a, .x=0xe3, .y=0x28, .sp=0x7e, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xf7e8, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xf7e9, .a=0x0a, .x=0xe3, .y=0x28, .sp=0x7e, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0xf7e8, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xf7e8, .value=0x00, .type=IO_READ},
        {.addr=0xf7e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01A7) {
    const struct CPU_State initial_cpu = {.pc=0xf70f, .a=0x36, .x=0x4b, .y=0xb9, .sp=0xed, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xf70f, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xf710, .a=0x36, .x=0x4b, .y=0xb9, .sp=0xed, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0xf70f, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xf70f, .value=0x00, .type=IO_READ},
        {.addr=0xf710, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01A8) {
    const struct CPU_State initial_cpu = {.pc=0x3e3d, .a=0xdc, .x=0xdf, .y=0xc5, .sp=0xcb, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x3e3d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x3e3e, .a=0xdc, .x=0xdf, .y=0xc5, .sp=0xcb, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x3e3d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x3e3d, .value=0x00, .type=IO_READ},
        {.addr=0x3e3e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01A9) {
    const struct CPU_State initial_cpu = {.pc=0x8a07, .a=0x19, .x=0x7b, .y=0x81, .sp=0x62, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x8a07, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x8a08, .a=0x19, .x=0x7b, .y=0x81, .sp=0x62, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x8a07, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x8a07, .value=0x00, .type=IO_READ},
        {.addr=0x8a08, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x4cdb, .a=0x15, .x=0x91, .y=0x78, .sp=0x87, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x4cdb, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x4cdc, .a=0x15, .x=0x91, .y=0x78, .sp=0x87, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x4cdb, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x4cdb, .value=0x00, .type=IO_READ},
        {.addr=0x4cdc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x0583, .a=0xfa, .x=0x19, .y=0x51, .sp=0x6d, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0583, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0584, .a=0xfa, .x=0x19, .y=0x51, .sp=0x6d, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0583, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x0583, .value=0x00, .type=IO_READ},
        {.addr=0x0584, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01AC) {
    const struct CPU_State initial_cpu = {.pc=0x70a2, .a=0x10, .x=0x90, .y=0xaf, .sp=0x10, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x70a2, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x70a3, .a=0x10, .x=0x90, .y=0xaf, .sp=0x10, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x70a2, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x70a2, .value=0x00, .type=IO_READ},
        {.addr=0x70a3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01AD) {
    const struct CPU_State initial_cpu = {.pc=0xfa46, .a=0x73, .x=0x81, .y=0x46, .sp=0x9c, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xfa46, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xfa47, .a=0x73, .x=0x81, .y=0x46, .sp=0x9c, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0xfa46, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xfa46, .value=0x00, .type=IO_READ},
        {.addr=0xfa47, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01AE) {
    const struct CPU_State initial_cpu = {.pc=0xd029, .a=0x41, .x=0x9e, .y=0x08, .sp=0x56, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xd029, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xd02a, .a=0x41, .x=0x9e, .y=0x08, .sp=0x56, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0xd029, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xd029, .value=0x00, .type=IO_READ},
        {.addr=0xd02a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01AF) {
    const struct CPU_State initial_cpu = {.pc=0x7018, .a=0xfa, .x=0x06, .y=0x8f, .sp=0x70, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x7018, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7019, .a=0xfa, .x=0x06, .y=0x8f, .sp=0x70, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x7018, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7018, .value=0x00, .type=IO_READ},
        {.addr=0x7019, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01B0) {
    const struct CPU_State initial_cpu = {.pc=0xcaa7, .a=0x04, .x=0xde, .y=0x19, .sp=0x20, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xcaa7, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xcaa8, .a=0x04, .x=0xde, .y=0x19, .sp=0x20, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0xcaa7, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xcaa7, .value=0x00, .type=IO_READ},
        {.addr=0xcaa8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01B1) {
    const struct CPU_State initial_cpu = {.pc=0x0d53, .a=0xd7, .x=0x8d, .y=0x60, .sp=0xd5, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x0d53, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0d54, .a=0xd7, .x=0x8d, .y=0x60, .sp=0xd5, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x0d53, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x0d53, .value=0x00, .type=IO_READ},
        {.addr=0x0d54, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x65d8, .a=0xfe, .x=0x0b, .y=0x64, .sp=0x86, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x65d8, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x65d9, .a=0xfe, .x=0x0b, .y=0x64, .sp=0x86, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x65d8, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x65d8, .value=0x00, .type=IO_READ},
        {.addr=0x65d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01B3) {
    const struct CPU_State initial_cpu = {.pc=0xbdff, .a=0x0d, .x=0x87, .y=0xea, .sp=0x28, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xbdff, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xbe00, .a=0x0d, .x=0x87, .y=0xea, .sp=0x28, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xbdff, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xbdff, .value=0x00, .type=IO_READ},
        {.addr=0xbe00, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01B4) {
    const struct CPU_State initial_cpu = {.pc=0x810c, .a=0x17, .x=0x9d, .y=0xb2, .sp=0x6c, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x810c, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x810d, .a=0x17, .x=0x9d, .y=0xb2, .sp=0x6c, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x810c, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x810c, .value=0x00, .type=IO_READ},
        {.addr=0x810d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01B5) {
    const struct CPU_State initial_cpu = {.pc=0xa41d, .a=0x82, .x=0x40, .y=0xd3, .sp=0x26, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xa41d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xa41e, .a=0x82, .x=0x40, .y=0xd3, .sp=0x26, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0xa41d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xa41d, .value=0x00, .type=IO_READ},
        {.addr=0xa41e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01B6) {
    const struct CPU_State initial_cpu = {.pc=0x55cd, .a=0x36, .x=0xef, .y=0x3a, .sp=0xa5, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x55cd, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x55ce, .a=0x36, .x=0xef, .y=0x3a, .sp=0xa5, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x55cd, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x55cd, .value=0x00, .type=IO_READ},
        {.addr=0x55ce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01B7) {
    const struct CPU_State initial_cpu = {.pc=0x4e20, .a=0x4b, .x=0xe2, .y=0x0b, .sp=0xe2, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x4e20, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x4e21, .a=0x4b, .x=0xe2, .y=0x0b, .sp=0xe2, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x4e20, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x4e20, .value=0x00, .type=IO_READ},
        {.addr=0x4e21, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01B8) {
    const struct CPU_State initial_cpu = {.pc=0x68be, .a=0xbb, .x=0x53, .y=0x03, .sp=0x15, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x68be, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x68bf, .a=0xbb, .x=0x53, .y=0x03, .sp=0x15, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x68be, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x68be, .value=0x00, .type=IO_READ},
        {.addr=0x68bf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x1ca5, .a=0xc4, .x=0x43, .y=0x70, .sp=0x5a, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x1ca5, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x1ca6, .a=0xc4, .x=0x43, .y=0x70, .sp=0x5a, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x1ca5, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x1ca5, .value=0x00, .type=IO_READ},
        {.addr=0x1ca6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01BA) {
    const struct CPU_State initial_cpu = {.pc=0xa388, .a=0x01, .x=0xb7, .y=0xfb, .sp=0x77, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xa388, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xa389, .a=0x01, .x=0xb7, .y=0xfb, .sp=0x77, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0xa388, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xa388, .value=0x00, .type=IO_READ},
        {.addr=0xa389, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01BB) {
    const struct CPU_State initial_cpu = {.pc=0x41ba, .a=0x6f, .x=0xe9, .y=0xf2, .sp=0x8e, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x41ba, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x41bb, .a=0x6f, .x=0xe9, .y=0xf2, .sp=0x8e, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x41ba, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x41ba, .value=0x00, .type=IO_READ},
        {.addr=0x41bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01BC) {
    const struct CPU_State initial_cpu = {.pc=0x3b9a, .a=0x92, .x=0x88, .y=0xbd, .sp=0x81, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x3b9a, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x3b9b, .a=0x92, .x=0x88, .y=0xbd, .sp=0x81, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x3b9a, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x3b9a, .value=0x00, .type=IO_READ},
        {.addr=0x3b9b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01BD) {
    const struct CPU_State initial_cpu = {.pc=0x3510, .a=0x5c, .x=0x34, .y=0x5f, .sp=0x6f, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x3510, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x3511, .a=0x5c, .x=0x34, .y=0x5f, .sp=0x6f, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x3510, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x3510, .value=0x00, .type=IO_READ},
        {.addr=0x3511, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01BE) {
    const struct CPU_State initial_cpu = {.pc=0x975a, .a=0x88, .x=0x1b, .y=0x1f, .sp=0x4b, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x975a, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x975b, .a=0x88, .x=0x1b, .y=0x1f, .sp=0x4b, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x975a, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x975a, .value=0x00, .type=IO_READ},
        {.addr=0x975b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01BF) {
    const struct CPU_State initial_cpu = {.pc=0x0723, .a=0xbd, .x=0xe4, .y=0xb7, .sp=0xb9, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x0723, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0724, .a=0xbd, .x=0xe4, .y=0xb7, .sp=0xb9, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x0723, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x0723, .value=0x00, .type=IO_READ},
        {.addr=0x0724, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01C0) {
    const struct CPU_State initial_cpu = {.pc=0xfc11, .a=0x51, .x=0x4a, .y=0x81, .sp=0x8b, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xfc11, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xfc12, .a=0x51, .x=0x4a, .y=0x81, .sp=0x8b, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0xfc11, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xfc11, .value=0x00, .type=IO_READ},
        {.addr=0xfc12, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x56c3, .a=0x08, .x=0xd4, .y=0x19, .sp=0xc6, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x56c3, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x56c4, .a=0x08, .x=0xd4, .y=0x19, .sp=0xc6, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x56c3, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x56c3, .value=0x00, .type=IO_READ},
        {.addr=0x56c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01C2) {
    const struct CPU_State initial_cpu = {.pc=0x9138, .a=0xa6, .x=0x2f, .y=0x2d, .sp=0xe0, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x9138, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x9139, .a=0xa6, .x=0x2f, .y=0x2d, .sp=0xe0, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x9138, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x9138, .value=0x00, .type=IO_READ},
        {.addr=0x9139, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01C3) {
    const struct CPU_State initial_cpu = {.pc=0x7a0b, .a=0x66, .x=0x59, .y=0x05, .sp=0x2b, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x7a0b, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7a0c, .a=0x66, .x=0x59, .y=0x05, .sp=0x2b, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x7a0b, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7a0b, .value=0x00, .type=IO_READ},
        {.addr=0x7a0c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x9b66, .a=0x64, .x=0xdc, .y=0x48, .sp=0x2b, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x9b66, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x9b67, .a=0x64, .x=0xdc, .y=0x48, .sp=0x2b, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x9b66, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x9b66, .value=0x00, .type=IO_READ},
        {.addr=0x9b67, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x986c, .a=0xcf, .x=0xa0, .y=0x62, .sp=0xbe, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x986c, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x986d, .a=0xcf, .x=0xa0, .y=0x62, .sp=0xbe, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x986c, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x986c, .value=0x00, .type=IO_READ},
        {.addr=0x986d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01C6) {
    const struct CPU_State initial_cpu = {.pc=0x6dc4, .a=0x6a, .x=0x8e, .y=0x78, .sp=0xc2, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x6dc4, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x6dc5, .a=0x6a, .x=0x8e, .y=0x78, .sp=0xc2, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x6dc4, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x6dc4, .value=0x00, .type=IO_READ},
        {.addr=0x6dc5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01C7) {
    const struct CPU_State initial_cpu = {.pc=0x7d63, .a=0x03, .x=0x13, .y=0x55, .sp=0xa7, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x7d63, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7d64, .a=0x03, .x=0x13, .y=0x55, .sp=0xa7, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x7d63, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7d63, .value=0x00, .type=IO_READ},
        {.addr=0x7d64, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01C8) {
    const struct CPU_State initial_cpu = {.pc=0x81a4, .a=0x68, .x=0xfe, .y=0x63, .sp=0x5d, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x81a4, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x81a5, .a=0x68, .x=0xfe, .y=0x63, .sp=0x5d, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x81a4, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x81a4, .value=0x00, .type=IO_READ},
        {.addr=0x81a5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01C9) {
    const struct CPU_State initial_cpu = {.pc=0x1c16, .a=0x0c, .x=0x85, .y=0xe7, .sp=0x18, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x1c16, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x1c17, .a=0x0c, .x=0x85, .y=0xe7, .sp=0x18, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x1c16, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x1c16, .value=0x00, .type=IO_READ},
        {.addr=0x1c17, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01CA) {
    const struct CPU_State initial_cpu = {.pc=0x89a5, .a=0x83, .x=0xa2, .y=0xb5, .sp=0x3e, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x89a5, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x89a6, .a=0x83, .x=0xa2, .y=0xb5, .sp=0x3e, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x89a5, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x89a5, .value=0x00, .type=IO_READ},
        {.addr=0x89a6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01CB) {
    const struct CPU_State initial_cpu = {.pc=0xa135, .a=0x53, .x=0x81, .y=0x4b, .sp=0x9f, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xa135, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xa136, .a=0x53, .x=0x81, .y=0x4b, .sp=0x9f, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xa135, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xa135, .value=0x00, .type=IO_READ},
        {.addr=0xa136, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01CC) {
    const struct CPU_State initial_cpu = {.pc=0x7787, .a=0x42, .x=0x82, .y=0x47, .sp=0x10, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x7787, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7788, .a=0x42, .x=0x82, .y=0x47, .sp=0x10, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x7787, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7787, .value=0x00, .type=IO_READ},
        {.addr=0x7788, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x7601, .a=0x87, .x=0xed, .y=0xf4, .sp=0x51, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x7601, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7602, .a=0x87, .x=0xed, .y=0xf4, .sp=0x51, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x7601, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7601, .value=0x00, .type=IO_READ},
        {.addr=0x7602, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01CE) {
    const struct CPU_State initial_cpu = {.pc=0x546d, .a=0xf1, .x=0x61, .y=0xaa, .sp=0xd8, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x546d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x546e, .a=0xf1, .x=0x61, .y=0xaa, .sp=0xd8, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x546d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x546d, .value=0x00, .type=IO_READ},
        {.addr=0x546e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x9ce9, .a=0x60, .x=0x2f, .y=0xb0, .sp=0x8a, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x9ce9, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x9cea, .a=0x60, .x=0x2f, .y=0xb0, .sp=0x8a, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x9ce9, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x9ce9, .value=0x00, .type=IO_READ},
        {.addr=0x9cea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01D0) {
    const struct CPU_State initial_cpu = {.pc=0x5407, .a=0x24, .x=0xc6, .y=0xce, .sp=0xc6, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x5407, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x5408, .a=0x24, .x=0xc6, .y=0xce, .sp=0xc6, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x5407, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x5407, .value=0x00, .type=IO_READ},
        {.addr=0x5408, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01D1) {
    const struct CPU_State initial_cpu = {.pc=0x8fa0, .a=0x45, .x=0xe0, .y=0x28, .sp=0x5b, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x8fa0, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x8fa1, .a=0x45, .x=0xe0, .y=0x28, .sp=0x5b, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x8fa0, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x8fa0, .value=0x00, .type=IO_READ},
        {.addr=0x8fa1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01D2) {
    const struct CPU_State initial_cpu = {.pc=0xcb2d, .a=0x27, .x=0x37, .y=0x72, .sp=0x17, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xcb2d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xcb2e, .a=0x27, .x=0x37, .y=0x72, .sp=0x17, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xcb2d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xcb2d, .value=0x00, .type=IO_READ},
        {.addr=0xcb2e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01D3) {
    const struct CPU_State initial_cpu = {.pc=0x4c34, .a=0x3d, .x=0xa9, .y=0xa3, .sp=0xed, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x4c34, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x4c35, .a=0x3d, .x=0xa9, .y=0xa3, .sp=0xed, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x4c34, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x4c34, .value=0x00, .type=IO_READ},
        {.addr=0x4c35, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x7c3c, .a=0xce, .x=0x79, .y=0x25, .sp=0xd1, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x7c3c, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7c3d, .a=0xce, .x=0x79, .y=0x25, .sp=0xd1, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x7c3c, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7c3c, .value=0x00, .type=IO_READ},
        {.addr=0x7c3d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01D5) {
    const struct CPU_State initial_cpu = {.pc=0x0ed9, .a=0xe6, .x=0x85, .y=0xd1, .sp=0xd9, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x0ed9, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0eda, .a=0xe6, .x=0x85, .y=0xd1, .sp=0xd9, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0ed9, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x0ed9, .value=0x00, .type=IO_READ},
        {.addr=0x0eda, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01D6) {
    const struct CPU_State initial_cpu = {.pc=0x6d77, .a=0x77, .x=0x41, .y=0x89, .sp=0x83, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x6d77, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x6d78, .a=0x77, .x=0x41, .y=0x89, .sp=0x83, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x6d77, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x6d77, .value=0x00, .type=IO_READ},
        {.addr=0x6d78, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01D7) {
    const struct CPU_State initial_cpu = {.pc=0x090c, .a=0x8e, .x=0xb8, .y=0xce, .sp=0x99, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x090c, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x090d, .a=0x8e, .x=0xb8, .y=0xce, .sp=0x99, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x090c, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x090c, .value=0x00, .type=IO_READ},
        {.addr=0x090d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01D8) {
    const struct CPU_State initial_cpu = {.pc=0xdc2b, .a=0xbd, .x=0x2b, .y=0xd5, .sp=0x1c, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xdc2b, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xdc2c, .a=0xbd, .x=0x2b, .y=0xd5, .sp=0x1c, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0xdc2b, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xdc2b, .value=0x00, .type=IO_READ},
        {.addr=0xdc2c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01D9) {
    const struct CPU_State initial_cpu = {.pc=0x6a0f, .a=0x74, .x=0x56, .y=0xf8, .sp=0xa8, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x6a0f, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x6a10, .a=0x74, .x=0x56, .y=0xf8, .sp=0xa8, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x6a0f, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x6a0f, .value=0x00, .type=IO_READ},
        {.addr=0x6a10, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01DA) {
    const struct CPU_State initial_cpu = {.pc=0x1521, .a=0xbf, .x=0x95, .y=0xeb, .sp=0x73, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x1521, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x1522, .a=0xbf, .x=0x95, .y=0xeb, .sp=0x73, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x1521, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x1521, .value=0x00, .type=IO_READ},
        {.addr=0x1522, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x7794, .a=0x08, .x=0xa1, .y=0x4e, .sp=0x31, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x7794, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7795, .a=0x08, .x=0xa1, .y=0x4e, .sp=0x31, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x7794, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7794, .value=0x00, .type=IO_READ},
        {.addr=0x7795, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01DC) {
    const struct CPU_State initial_cpu = {.pc=0xa8cc, .a=0x1b, .x=0x94, .y=0x9a, .sp=0xec, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xa8cc, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xa8cd, .a=0x1b, .x=0x94, .y=0x9a, .sp=0xec, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0xa8cc, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xa8cc, .value=0x00, .type=IO_READ},
        {.addr=0xa8cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x7cec, .a=0x4c, .x=0x97, .y=0xbf, .sp=0xf2, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x7cec, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7ced, .a=0x4c, .x=0x97, .y=0xbf, .sp=0xf2, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x7cec, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7cec, .value=0x00, .type=IO_READ},
        {.addr=0x7ced, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x1582, .a=0xe0, .x=0xab, .y=0xec, .sp=0xfe, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x1582, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x1583, .a=0xe0, .x=0xab, .y=0xec, .sp=0xfe, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x1582, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x1582, .value=0x00, .type=IO_READ},
        {.addr=0x1583, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01DF) {
    const struct CPU_State initial_cpu = {.pc=0x4224, .a=0xab, .x=0x60, .y=0x7c, .sp=0x5f, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x4224, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x4225, .a=0xab, .x=0x60, .y=0x7c, .sp=0x5f, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x4224, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x4224, .value=0x00, .type=IO_READ},
        {.addr=0x4225, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01E0) {
    const struct CPU_State initial_cpu = {.pc=0x41ad, .a=0xed, .x=0xa1, .y=0x6c, .sp=0x54, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x41ad, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x41ae, .a=0xed, .x=0xa1, .y=0x6c, .sp=0x54, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x41ad, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x41ad, .value=0x00, .type=IO_READ},
        {.addr=0x41ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x9653, .a=0x6e, .x=0x2d, .y=0x14, .sp=0x9f, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x9653, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x9654, .a=0x6e, .x=0x2d, .y=0x14, .sp=0x9f, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x9653, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x9653, .value=0x00, .type=IO_READ},
        {.addr=0x9654, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01E2) {
    const struct CPU_State initial_cpu = {.pc=0x4fb3, .a=0x5d, .x=0x58, .y=0x6f, .sp=0xbf, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x4fb3, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x4fb4, .a=0x5d, .x=0x58, .y=0x6f, .sp=0xbf, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x4fb3, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x4fb3, .value=0x00, .type=IO_READ},
        {.addr=0x4fb4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01E3) {
    const struct CPU_State initial_cpu = {.pc=0x8238, .a=0xf4, .x=0x61, .y=0xf7, .sp=0x55, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x8238, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x8239, .a=0xf4, .x=0x61, .y=0xf7, .sp=0x55, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x8238, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x8238, .value=0x00, .type=IO_READ},
        {.addr=0x8239, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01E4) {
    const struct CPU_State initial_cpu = {.pc=0x7c6d, .a=0x30, .x=0x48, .y=0x22, .sp=0xa1, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x7c6d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7c6e, .a=0x30, .x=0x48, .y=0x22, .sp=0xa1, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x7c6d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7c6d, .value=0x00, .type=IO_READ},
        {.addr=0x7c6e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01E5) {
    const struct CPU_State initial_cpu = {.pc=0x01e4, .a=0x02, .x=0x30, .y=0x39, .sp=0xfd, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x01e5, .a=0x02, .x=0x30, .y=0x39, .sp=0xfd, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x01e4, .value=0x00, .type=IO_READ},
        {.addr=0x01e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01E6) {
    const struct CPU_State initial_cpu = {.pc=0xa65e, .a=0xd4, .x=0x69, .y=0x7f, .sp=0xfe, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xa65e, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xa65f, .a=0xd4, .x=0x69, .y=0x7f, .sp=0xfe, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xa65e, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xa65e, .value=0x00, .type=IO_READ},
        {.addr=0xa65f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x88d6, .a=0x41, .x=0x13, .y=0xa7, .sp=0x71, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x88d6, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x88d7, .a=0x41, .x=0x13, .y=0xa7, .sp=0x71, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x88d6, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x88d6, .value=0x00, .type=IO_READ},
        {.addr=0x88d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01E8) {
    const struct CPU_State initial_cpu = {.pc=0x8a06, .a=0x57, .x=0xf5, .y=0x65, .sp=0x54, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x8a06, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x8a07, .a=0x57, .x=0xf5, .y=0x65, .sp=0x54, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x8a06, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x8a06, .value=0x00, .type=IO_READ},
        {.addr=0x8a07, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01E9) {
    const struct CPU_State initial_cpu = {.pc=0x38d6, .a=0xf7, .x=0xa2, .y=0xe1, .sp=0x60, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x38d6, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x38d7, .a=0xf7, .x=0xa2, .y=0xe1, .sp=0x60, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x38d6, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x38d6, .value=0x00, .type=IO_READ},
        {.addr=0x38d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01EA) {
    const struct CPU_State initial_cpu = {.pc=0x7df3, .a=0x9f, .x=0x92, .y=0x3d, .sp=0x05, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x7df3, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7df4, .a=0x9f, .x=0x92, .y=0x3d, .sp=0x05, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x7df3, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7df3, .value=0x00, .type=IO_READ},
        {.addr=0x7df4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01EB) {
    const struct CPU_State initial_cpu = {.pc=0xd9ca, .a=0x92, .x=0x6a, .y=0xcd, .sp=0x19, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xd9ca, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xd9cb, .a=0x92, .x=0x6a, .y=0xcd, .sp=0x19, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0xd9ca, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xd9ca, .value=0x00, .type=IO_READ},
        {.addr=0xd9cb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01EC) {
    const struct CPU_State initial_cpu = {.pc=0x4bfd, .a=0x3d, .x=0x59, .y=0xba, .sp=0x4c, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x4bfd, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x4bfe, .a=0x3d, .x=0x59, .y=0xba, .sp=0x4c, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x4bfd, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x4bfd, .value=0x00, .type=IO_READ},
        {.addr=0x4bfe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01ED) {
    const struct CPU_State initial_cpu = {.pc=0xa064, .a=0x68, .x=0x5e, .y=0x6d, .sp=0x29, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xa064, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xa065, .a=0x68, .x=0x5e, .y=0x6d, .sp=0x29, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0xa064, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xa064, .value=0x00, .type=IO_READ},
        {.addr=0xa065, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01EE) {
    const struct CPU_State initial_cpu = {.pc=0xd39d, .a=0x50, .x=0xde, .y=0xc9, .sp=0x39, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xd39d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xd39e, .a=0x50, .x=0xde, .y=0xc9, .sp=0x39, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0xd39d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xd39d, .value=0x00, .type=IO_READ},
        {.addr=0xd39e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01EF) {
    const struct CPU_State initial_cpu = {.pc=0xde59, .a=0xc5, .x=0x6c, .y=0xf5, .sp=0x0d, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xde59, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xde5a, .a=0xc5, .x=0x6c, .y=0xf5, .sp=0x0d, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xde59, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xde59, .value=0x00, .type=IO_READ},
        {.addr=0xde5a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01F0) {
    const struct CPU_State initial_cpu = {.pc=0xff47, .a=0x91, .x=0xae, .y=0x4a, .sp=0x06, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xff47, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xff48, .a=0x91, .x=0xae, .y=0x4a, .sp=0x06, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0xff47, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xff47, .value=0x00, .type=IO_READ},
        {.addr=0xff48, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01F1) {
    const struct CPU_State initial_cpu = {.pc=0x19c4, .a=0x08, .x=0x43, .y=0xf9, .sp=0xba, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x19c4, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x19c5, .a=0x08, .x=0x43, .y=0xf9, .sp=0xba, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x19c4, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x19c4, .value=0x00, .type=IO_READ},
        {.addr=0x19c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01F2) {
    const struct CPU_State initial_cpu = {.pc=0xa2ce, .a=0xa4, .x=0x12, .y=0x73, .sp=0x81, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xa2ce, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xa2cf, .a=0xa4, .x=0x12, .y=0x73, .sp=0x81, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0xa2ce, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xa2ce, .value=0x00, .type=IO_READ},
        {.addr=0xa2cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01F3) {
    const struct CPU_State initial_cpu = {.pc=0x5675, .a=0x9c, .x=0x8c, .y=0x33, .sp=0xbc, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x5675, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x5676, .a=0x9c, .x=0x8c, .y=0x33, .sp=0xbc, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x5675, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x5675, .value=0x00, .type=IO_READ},
        {.addr=0x5676, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01F4) {
    const struct CPU_State initial_cpu = {.pc=0x552d, .a=0x79, .x=0xf2, .y=0x0e, .sp=0x69, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x552d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x552e, .a=0x79, .x=0xf2, .y=0x0e, .sp=0x69, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x552d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x552d, .value=0x00, .type=IO_READ},
        {.addr=0x552e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01F5) {
    const struct CPU_State initial_cpu = {.pc=0xe074, .a=0x03, .x=0x03, .y=0x13, .sp=0x38, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xe074, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xe075, .a=0x03, .x=0x03, .y=0x13, .sp=0x38, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0xe074, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xe074, .value=0x00, .type=IO_READ},
        {.addr=0xe075, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01F6) {
    const struct CPU_State initial_cpu = {.pc=0x35b0, .a=0xce, .x=0xed, .y=0xa9, .sp=0x0e, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x35b0, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x35b1, .a=0xce, .x=0xed, .y=0xa9, .sp=0x0e, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x35b0, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x35b0, .value=0x00, .type=IO_READ},
        {.addr=0x35b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01F7) {
    const struct CPU_State initial_cpu = {.pc=0xdfbb, .a=0x98, .x=0xd6, .y=0x17, .sp=0x13, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xdfbb, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xdfbc, .a=0x98, .x=0xd6, .y=0x17, .sp=0x13, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xdfbb, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xdfbb, .value=0x00, .type=IO_READ},
        {.addr=0xdfbc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01F8) {
    const struct CPU_State initial_cpu = {.pc=0x7e24, .a=0xff, .x=0xe7, .y=0x1f, .sp=0x47, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x7e24, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7e25, .a=0xff, .x=0xe7, .y=0x1f, .sp=0x47, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x7e24, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7e24, .value=0x00, .type=IO_READ},
        {.addr=0x7e25, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x7800, .a=0x31, .x=0x8a, .y=0xbf, .sp=0xb2, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x7800, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7801, .a=0x31, .x=0x8a, .y=0xbf, .sp=0xb2, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x7800, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7800, .value=0x00, .type=IO_READ},
        {.addr=0x7801, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01FA) {
    const struct CPU_State initial_cpu = {.pc=0xe3c1, .a=0xbf, .x=0x35, .y=0xa0, .sp=0xc6, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xe3c1, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xe3c2, .a=0xbf, .x=0x35, .y=0xa0, .sp=0xc6, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0xe3c1, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xe3c1, .value=0x00, .type=IO_READ},
        {.addr=0xe3c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01FB) {
    const struct CPU_State initial_cpu = {.pc=0x3ee8, .a=0x3d, .x=0xdf, .y=0xe1, .sp=0xb3, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x3ee8, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x3ee9, .a=0x3d, .x=0xdf, .y=0xe1, .sp=0xb3, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x3ee8, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x3ee8, .value=0x00, .type=IO_READ},
        {.addr=0x3ee9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01FC) {
    const struct CPU_State initial_cpu = {.pc=0x0112, .a=0x72, .x=0x8d, .y=0x1d, .sp=0x38, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0113, .a=0x72, .x=0x8d, .y=0x1d, .sp=0x38, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x0112, .value=0x00, .type=IO_READ},
        {.addr=0x0113, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01FD) {
    const struct CPU_State initial_cpu = {.pc=0x7a04, .a=0x3f, .x=0xe9, .y=0x6b, .sp=0xda, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x7a04, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7a05, .a=0x3f, .x=0xe9, .y=0x6b, .sp=0xda, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x7a04, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7a04, .value=0x00, .type=IO_READ},
        {.addr=0x7a05, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01FE) {
    const struct CPU_State initial_cpu = {.pc=0xad62, .a=0x02, .x=0x0d, .y=0x0b, .sp=0x3f, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xad62, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xad63, .a=0x02, .x=0x0d, .y=0x0b, .sp=0x3f, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xad62, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xad62, .value=0x00, .type=IO_READ},
        {.addr=0xad63, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_01FF) {
    const struct CPU_State initial_cpu = {.pc=0xb5d8, .a=0x92, .x=0x0d, .y=0xe3, .sp=0xe7, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xb5d8, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xb5d9, .a=0x92, .x=0x0d, .y=0xe3, .sp=0xe7, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0xb5d8, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xb5d8, .value=0x00, .type=IO_READ},
        {.addr=0xb5d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0200) {
    const struct CPU_State initial_cpu = {.pc=0x3186, .a=0xee, .x=0x40, .y=0xc9, .sp=0x32, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x3186, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x3187, .a=0xee, .x=0x40, .y=0xc9, .sp=0x32, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x3186, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x3186, .value=0x00, .type=IO_READ},
        {.addr=0x3187, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0201) {
    const struct CPU_State initial_cpu = {.pc=0x3aac, .a=0x4d, .x=0x7a, .y=0x5a, .sp=0x6b, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x3aac, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x3aad, .a=0x4d, .x=0x7a, .y=0x5a, .sp=0x6b, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x3aac, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x3aac, .value=0x00, .type=IO_READ},
        {.addr=0x3aad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0202) {
    const struct CPU_State initial_cpu = {.pc=0xd683, .a=0x90, .x=0xfe, .y=0x63, .sp=0xff, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xd683, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xd684, .a=0x90, .x=0xfe, .y=0x63, .sp=0xff, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xd683, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xd683, .value=0x00, .type=IO_READ},
        {.addr=0xd684, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0203) {
    const struct CPU_State initial_cpu = {.pc=0x945e, .a=0xcf, .x=0x9b, .y=0x20, .sp=0x94, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x945e, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x945f, .a=0xcf, .x=0x9b, .y=0x20, .sp=0x94, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x945e, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x945e, .value=0x00, .type=IO_READ},
        {.addr=0x945f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0204) {
    const struct CPU_State initial_cpu = {.pc=0x630b, .a=0xf2, .x=0x69, .y=0xe6, .sp=0xb9, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x630b, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x630c, .a=0xf2, .x=0x69, .y=0xe6, .sp=0xb9, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x630b, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x630b, .value=0x00, .type=IO_READ},
        {.addr=0x630c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0205) {
    const struct CPU_State initial_cpu = {.pc=0x5bd0, .a=0xb2, .x=0x28, .y=0x54, .sp=0x13, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x5bd0, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x5bd1, .a=0xb2, .x=0x28, .y=0x54, .sp=0x13, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x5bd0, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x5bd0, .value=0x00, .type=IO_READ},
        {.addr=0x5bd1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0206) {
    const struct CPU_State initial_cpu = {.pc=0xe3e9, .a=0x56, .x=0x87, .y=0x6b, .sp=0xbd, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xe3e9, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xe3ea, .a=0x56, .x=0x87, .y=0x6b, .sp=0xbd, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xe3e9, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xe3e9, .value=0x00, .type=IO_READ},
        {.addr=0xe3ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0207) {
    const struct CPU_State initial_cpu = {.pc=0x3321, .a=0xed, .x=0x8f, .y=0xeb, .sp=0x2a, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x3321, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x3322, .a=0xed, .x=0x8f, .y=0xeb, .sp=0x2a, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x3321, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x3321, .value=0x00, .type=IO_READ},
        {.addr=0x3322, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0208) {
    const struct CPU_State initial_cpu = {.pc=0xc5de, .a=0x12, .x=0xaf, .y=0xca, .sp=0x13, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xc5de, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xc5df, .a=0x12, .x=0xaf, .y=0xca, .sp=0x13, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0xc5de, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xc5de, .value=0x00, .type=IO_READ},
        {.addr=0xc5df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0209) {
    const struct CPU_State initial_cpu = {.pc=0xb562, .a=0x6c, .x=0xc4, .y=0x79, .sp=0x87, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xb562, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xb563, .a=0x6c, .x=0xc4, .y=0x79, .sp=0x87, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0xb562, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xb562, .value=0x00, .type=IO_READ},
        {.addr=0xb563, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_020A) {
    const struct CPU_State initial_cpu = {.pc=0xb3e3, .a=0x3e, .x=0x8a, .y=0x2b, .sp=0xfb, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xb3e3, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xb3e4, .a=0x3e, .x=0x8a, .y=0x2b, .sp=0xfb, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0xb3e3, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xb3e3, .value=0x00, .type=IO_READ},
        {.addr=0xb3e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_020B) {
    const struct CPU_State initial_cpu = {.pc=0xed22, .a=0x91, .x=0x41, .y=0xee, .sp=0x36, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xed22, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xed23, .a=0x91, .x=0x41, .y=0xee, .sp=0x36, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xed22, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xed22, .value=0x00, .type=IO_READ},
        {.addr=0xed23, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_020C) {
    const struct CPU_State initial_cpu = {.pc=0x7447, .a=0x37, .x=0x6e, .y=0xdd, .sp=0x9d, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x7447, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7448, .a=0x37, .x=0x6e, .y=0xdd, .sp=0x9d, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x7447, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7447, .value=0x00, .type=IO_READ},
        {.addr=0x7448, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_020D) {
    const struct CPU_State initial_cpu = {.pc=0x5f8e, .a=0x0a, .x=0x11, .y=0x75, .sp=0xde, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x5f8e, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x5f8f, .a=0x0a, .x=0x11, .y=0x75, .sp=0xde, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x5f8e, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x5f8e, .value=0x00, .type=IO_READ},
        {.addr=0x5f8f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_020E) {
    const struct CPU_State initial_cpu = {.pc=0xdae0, .a=0x44, .x=0x9e, .y=0x5e, .sp=0xb2, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xdae0, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xdae1, .a=0x44, .x=0x9e, .y=0x5e, .sp=0xb2, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0xdae0, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xdae0, .value=0x00, .type=IO_READ},
        {.addr=0xdae1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_020F) {
    const struct CPU_State initial_cpu = {.pc=0x096c, .a=0xce, .x=0x6b, .y=0xf4, .sp=0xc5, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x096c, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x096d, .a=0xce, .x=0x6b, .y=0xf4, .sp=0xc5, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x096c, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x096c, .value=0x00, .type=IO_READ},
        {.addr=0x096d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0210) {
    const struct CPU_State initial_cpu = {.pc=0x9962, .a=0xbc, .x=0x23, .y=0x8a, .sp=0xa7, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x9962, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x9963, .a=0xbc, .x=0x23, .y=0x8a, .sp=0xa7, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x9962, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x9962, .value=0x00, .type=IO_READ},
        {.addr=0x9963, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0211) {
    const struct CPU_State initial_cpu = {.pc=0xd502, .a=0x1c, .x=0x8e, .y=0xf0, .sp=0xc8, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xd502, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xd503, .a=0x1c, .x=0x8e, .y=0xf0, .sp=0xc8, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0xd502, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xd502, .value=0x00, .type=IO_READ},
        {.addr=0xd503, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0212) {
    const struct CPU_State initial_cpu = {.pc=0x0942, .a=0x77, .x=0xf0, .y=0x1d, .sp=0x66, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x0942, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0943, .a=0x77, .x=0xf0, .y=0x1d, .sp=0x66, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x0942, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x0942, .value=0x00, .type=IO_READ},
        {.addr=0x0943, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0213) {
    const struct CPU_State initial_cpu = {.pc=0x1ced, .a=0xc5, .x=0x48, .y=0x4b, .sp=0xbe, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x1ced, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x1cee, .a=0xc5, .x=0x48, .y=0x4b, .sp=0xbe, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x1ced, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x1ced, .value=0x00, .type=IO_READ},
        {.addr=0x1cee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0214) {
    const struct CPU_State initial_cpu = {.pc=0x278e, .a=0x51, .x=0xfb, .y=0x7a, .sp=0xd9, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x278e, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x278f, .a=0x51, .x=0xfb, .y=0x7a, .sp=0xd9, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x278e, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x278e, .value=0x00, .type=IO_READ},
        {.addr=0x278f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0215) {
    const struct CPU_State initial_cpu = {.pc=0x6c4c, .a=0x41, .x=0x92, .y=0x58, .sp=0x99, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x6c4c, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x6c4d, .a=0x41, .x=0x92, .y=0x58, .sp=0x99, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x6c4c, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x6c4c, .value=0x00, .type=IO_READ},
        {.addr=0x6c4d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0216) {
    const struct CPU_State initial_cpu = {.pc=0x4b73, .a=0x07, .x=0x6b, .y=0xfc, .sp=0x47, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x4b73, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x4b74, .a=0x07, .x=0x6b, .y=0xfc, .sp=0x47, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x4b73, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x4b73, .value=0x00, .type=IO_READ},
        {.addr=0x4b74, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0217) {
    const struct CPU_State initial_cpu = {.pc=0x09a7, .a=0x71, .x=0x77, .y=0x5c, .sp=0x4b, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x09a7, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x09a8, .a=0x71, .x=0x77, .y=0x5c, .sp=0x4b, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x09a7, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x09a7, .value=0x00, .type=IO_READ},
        {.addr=0x09a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0218) {
    const struct CPU_State initial_cpu = {.pc=0xed68, .a=0x2c, .x=0xd9, .y=0xa7, .sp=0x71, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xed68, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xed69, .a=0x2c, .x=0xd9, .y=0xa7, .sp=0x71, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0xed68, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xed68, .value=0x00, .type=IO_READ},
        {.addr=0xed69, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0219) {
    const struct CPU_State initial_cpu = {.pc=0x1107, .a=0x2d, .x=0xf4, .y=0x74, .sp=0xa2, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x1107, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x1108, .a=0x2d, .x=0xf4, .y=0x74, .sp=0xa2, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x1107, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x1107, .value=0x00, .type=IO_READ},
        {.addr=0x1108, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_021A) {
    const struct CPU_State initial_cpu = {.pc=0x1326, .a=0xf6, .x=0x75, .y=0xac, .sp=0x35, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x1326, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x1327, .a=0xf6, .x=0x75, .y=0xac, .sp=0x35, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x1326, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x1326, .value=0x00, .type=IO_READ},
        {.addr=0x1327, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_021B) {
    const struct CPU_State initial_cpu = {.pc=0xe59d, .a=0x5c, .x=0xb1, .y=0x1b, .sp=0x1e, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xe59d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xe59e, .a=0x5c, .x=0xb1, .y=0x1b, .sp=0x1e, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xe59d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xe59d, .value=0x00, .type=IO_READ},
        {.addr=0xe59e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_021C) {
    const struct CPU_State initial_cpu = {.pc=0x2c18, .a=0x9c, .x=0xf9, .y=0x34, .sp=0x89, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x2c18, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x2c19, .a=0x9c, .x=0xf9, .y=0x34, .sp=0x89, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x2c18, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x2c18, .value=0x00, .type=IO_READ},
        {.addr=0x2c19, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_021D) {
    const struct CPU_State initial_cpu = {.pc=0x2b01, .a=0x44, .x=0x3b, .y=0x70, .sp=0x7d, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x2b01, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x2b02, .a=0x44, .x=0x3b, .y=0x70, .sp=0x7d, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x2b01, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x2b01, .value=0x00, .type=IO_READ},
        {.addr=0x2b02, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_021E) {
    const struct CPU_State initial_cpu = {.pc=0xa312, .a=0xa0, .x=0xef, .y=0x07, .sp=0xb0, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xa312, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xa313, .a=0xa0, .x=0xef, .y=0x07, .sp=0xb0, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0xa312, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xa312, .value=0x00, .type=IO_READ},
        {.addr=0xa313, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_021F) {
    const struct CPU_State initial_cpu = {.pc=0x93c9, .a=0x90, .x=0xd2, .y=0xb6, .sp=0x04, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x93c9, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x93ca, .a=0x90, .x=0xd2, .y=0xb6, .sp=0x04, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x93c9, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x93c9, .value=0x00, .type=IO_READ},
        {.addr=0x93ca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0220) {
    const struct CPU_State initial_cpu = {.pc=0xfc0c, .a=0xc1, .x=0xd1, .y=0x3f, .sp=0x15, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xfc0c, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xfc0d, .a=0xc1, .x=0xd1, .y=0x3f, .sp=0x15, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0xfc0c, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xfc0c, .value=0x00, .type=IO_READ},
        {.addr=0xfc0d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0221) {
    const struct CPU_State initial_cpu = {.pc=0xcd10, .a=0x34, .x=0x06, .y=0xf9, .sp=0xf9, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xcd10, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xcd11, .a=0x34, .x=0x06, .y=0xf9, .sp=0xf9, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xcd10, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xcd10, .value=0x00, .type=IO_READ},
        {.addr=0xcd11, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0222) {
    const struct CPU_State initial_cpu = {.pc=0x1317, .a=0x90, .x=0xc5, .y=0xb9, .sp=0xe1, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x1317, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x1318, .a=0x90, .x=0xc5, .y=0xb9, .sp=0xe1, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x1317, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x1317, .value=0x00, .type=IO_READ},
        {.addr=0x1318, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0223) {
    const struct CPU_State initial_cpu = {.pc=0x3156, .a=0xb5, .x=0x60, .y=0x49, .sp=0x5f, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x3156, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x3157, .a=0xb5, .x=0x60, .y=0x49, .sp=0x5f, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x3156, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x3156, .value=0x00, .type=IO_READ},
        {.addr=0x3157, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0224) {
    const struct CPU_State initial_cpu = {.pc=0x1996, .a=0x74, .x=0x96, .y=0xe1, .sp=0xf5, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x1996, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x1997, .a=0x74, .x=0x96, .y=0xe1, .sp=0xf5, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x1996, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x1996, .value=0x00, .type=IO_READ},
        {.addr=0x1997, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0225) {
    const struct CPU_State initial_cpu = {.pc=0xae68, .a=0x5e, .x=0xa1, .y=0x10, .sp=0x07, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xae68, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xae69, .a=0x5e, .x=0xa1, .y=0x10, .sp=0x07, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xae68, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xae68, .value=0x00, .type=IO_READ},
        {.addr=0xae69, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0226) {
    const struct CPU_State initial_cpu = {.pc=0x188d, .a=0x7c, .x=0xc0, .y=0x01, .sp=0x86, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x188d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x188e, .a=0x7c, .x=0xc0, .y=0x01, .sp=0x86, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x188d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x188d, .value=0x00, .type=IO_READ},
        {.addr=0x188e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0227) {
    const struct CPU_State initial_cpu = {.pc=0x7e9d, .a=0x83, .x=0x6a, .y=0x28, .sp=0x24, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x7e9d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7e9e, .a=0x83, .x=0x6a, .y=0x28, .sp=0x24, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x7e9d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7e9d, .value=0x00, .type=IO_READ},
        {.addr=0x7e9e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0228) {
    const struct CPU_State initial_cpu = {.pc=0x326d, .a=0xd4, .x=0x31, .y=0xae, .sp=0x3c, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x326d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x326e, .a=0xd4, .x=0x31, .y=0xae, .sp=0x3c, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x326d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x326d, .value=0x00, .type=IO_READ},
        {.addr=0x326e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0229) {
    const struct CPU_State initial_cpu = {.pc=0xe976, .a=0x07, .x=0x15, .y=0xca, .sp=0xa3, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xe976, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xe977, .a=0x07, .x=0x15, .y=0xca, .sp=0xa3, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xe976, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xe976, .value=0x00, .type=IO_READ},
        {.addr=0xe977, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_022A) {
    const struct CPU_State initial_cpu = {.pc=0x8513, .a=0x2d, .x=0x19, .y=0x03, .sp=0xd1, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x8513, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x8514, .a=0x2d, .x=0x19, .y=0x03, .sp=0xd1, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x8513, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x8513, .value=0x00, .type=IO_READ},
        {.addr=0x8514, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_022B) {
    const struct CPU_State initial_cpu = {.pc=0x95a9, .a=0x3d, .x=0xd4, .y=0xeb, .sp=0x20, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x95a9, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x95aa, .a=0x3d, .x=0xd4, .y=0xeb, .sp=0x20, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x95a9, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x95a9, .value=0x00, .type=IO_READ},
        {.addr=0x95aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_022C) {
    const struct CPU_State initial_cpu = {.pc=0x4149, .a=0xf6, .x=0x73, .y=0xd1, .sp=0x08, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x4149, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x414a, .a=0xf6, .x=0x73, .y=0xd1, .sp=0x08, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x4149, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x4149, .value=0x00, .type=IO_READ},
        {.addr=0x414a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_022D) {
    const struct CPU_State initial_cpu = {.pc=0x1174, .a=0x63, .x=0xaf, .y=0x59, .sp=0xb3, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x1174, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x1175, .a=0x63, .x=0xaf, .y=0x59, .sp=0xb3, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x1174, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x1174, .value=0x00, .type=IO_READ},
        {.addr=0x1175, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_022E) {
    const struct CPU_State initial_cpu = {.pc=0x845a, .a=0x4d, .x=0x39, .y=0x65, .sp=0x5f, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x845a, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x845b, .a=0x4d, .x=0x39, .y=0x65, .sp=0x5f, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x845a, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x845a, .value=0x00, .type=IO_READ},
        {.addr=0x845b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_022F) {
    const struct CPU_State initial_cpu = {.pc=0xc758, .a=0x62, .x=0x67, .y=0x6c, .sp=0xee, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xc758, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xc759, .a=0x62, .x=0x67, .y=0x6c, .sp=0xee, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xc758, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xc758, .value=0x00, .type=IO_READ},
        {.addr=0xc759, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0230) {
    const struct CPU_State initial_cpu = {.pc=0xe16d, .a=0xc3, .x=0x51, .y=0x4c, .sp=0xbd, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xe16d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xe16e, .a=0xc3, .x=0x51, .y=0x4c, .sp=0xbd, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0xe16d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xe16d, .value=0x00, .type=IO_READ},
        {.addr=0xe16e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0231) {
    const struct CPU_State initial_cpu = {.pc=0x812d, .a=0x19, .x=0xbc, .y=0xff, .sp=0x24, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x812d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x812e, .a=0x19, .x=0xbc, .y=0xff, .sp=0x24, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x812d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x812d, .value=0x00, .type=IO_READ},
        {.addr=0x812e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0232) {
    const struct CPU_State initial_cpu = {.pc=0x65e6, .a=0x1f, .x=0x8f, .y=0x16, .sp=0x8e, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x65e6, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x65e7, .a=0x1f, .x=0x8f, .y=0x16, .sp=0x8e, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x65e6, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x65e6, .value=0x00, .type=IO_READ},
        {.addr=0x65e7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0233) {
    const struct CPU_State initial_cpu = {.pc=0xf1d7, .a=0x8a, .x=0x78, .y=0x51, .sp=0xc9, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xf1d7, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xf1d8, .a=0x8a, .x=0x78, .y=0x51, .sp=0xc9, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0xf1d7, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xf1d7, .value=0x00, .type=IO_READ},
        {.addr=0xf1d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0234) {
    const struct CPU_State initial_cpu = {.pc=0x40b5, .a=0x93, .x=0xe6, .y=0x35, .sp=0x7c, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x40b5, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x40b6, .a=0x93, .x=0xe6, .y=0x35, .sp=0x7c, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x40b5, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x40b5, .value=0x00, .type=IO_READ},
        {.addr=0x40b6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0235) {
    const struct CPU_State initial_cpu = {.pc=0xe980, .a=0xfc, .x=0xf8, .y=0x7d, .sp=0xf9, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xe980, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xe981, .a=0xfc, .x=0xf8, .y=0x7d, .sp=0xf9, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0xe980, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xe980, .value=0x00, .type=IO_READ},
        {.addr=0xe981, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0236) {
    const struct CPU_State initial_cpu = {.pc=0x35ab, .a=0x33, .x=0x82, .y=0xff, .sp=0x22, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x35ab, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x35ac, .a=0x33, .x=0x82, .y=0xff, .sp=0x22, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x35ab, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x35ab, .value=0x00, .type=IO_READ},
        {.addr=0x35ac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0237) {
    const struct CPU_State initial_cpu = {.pc=0xc50a, .a=0xf4, .x=0x1e, .y=0x00, .sp=0x75, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xc50a, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xc50b, .a=0xf4, .x=0x1e, .y=0x00, .sp=0x75, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0xc50a, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xc50a, .value=0x00, .type=IO_READ},
        {.addr=0xc50b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0238) {
    const struct CPU_State initial_cpu = {.pc=0xd82d, .a=0x42, .x=0x39, .y=0xa3, .sp=0xb9, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xd82d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xd82e, .a=0x42, .x=0x39, .y=0xa3, .sp=0xb9, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xd82d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xd82d, .value=0x00, .type=IO_READ},
        {.addr=0xd82e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0239) {
    const struct CPU_State initial_cpu = {.pc=0xb88c, .a=0xfd, .x=0xd6, .y=0x59, .sp=0x2a, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xb88c, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xb88d, .a=0xfd, .x=0xd6, .y=0x59, .sp=0x2a, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xb88c, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xb88c, .value=0x00, .type=IO_READ},
        {.addr=0xb88d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_023A) {
    const struct CPU_State initial_cpu = {.pc=0x0ded, .a=0xf2, .x=0x2e, .y=0xb9, .sp=0x92, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x0ded, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0dee, .a=0xf2, .x=0x2e, .y=0xb9, .sp=0x92, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0ded, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x0ded, .value=0x00, .type=IO_READ},
        {.addr=0x0dee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_023B) {
    const struct CPU_State initial_cpu = {.pc=0xd82e, .a=0x79, .x=0x5a, .y=0xb4, .sp=0x07, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xd82e, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xd82f, .a=0x79, .x=0x5a, .y=0xb4, .sp=0x07, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xd82e, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xd82e, .value=0x00, .type=IO_READ},
        {.addr=0xd82f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_023C) {
    const struct CPU_State initial_cpu = {.pc=0xb9fb, .a=0xff, .x=0x95, .y=0x58, .sp=0xb3, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xb9fb, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xb9fc, .a=0xff, .x=0x95, .y=0x58, .sp=0xb3, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xb9fb, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xb9fb, .value=0x00, .type=IO_READ},
        {.addr=0xb9fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_023D) {
    const struct CPU_State initial_cpu = {.pc=0x32f8, .a=0x4f, .x=0xc4, .y=0x0d, .sp=0x8b, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x32f8, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x32f9, .a=0x4f, .x=0xc4, .y=0x0d, .sp=0x8b, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x32f8, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x32f8, .value=0x00, .type=IO_READ},
        {.addr=0x32f9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_023E) {
    const struct CPU_State initial_cpu = {.pc=0x7955, .a=0xcc, .x=0x8b, .y=0x03, .sp=0x52, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x7955, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7956, .a=0xcc, .x=0x8b, .y=0x03, .sp=0x52, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x7955, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7955, .value=0x00, .type=IO_READ},
        {.addr=0x7956, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_023F) {
    const struct CPU_State initial_cpu = {.pc=0x3878, .a=0x07, .x=0xb1, .y=0x97, .sp=0x90, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x3878, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x3879, .a=0x07, .x=0xb1, .y=0x97, .sp=0x90, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x3878, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x3878, .value=0x00, .type=IO_READ},
        {.addr=0x3879, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0240) {
    const struct CPU_State initial_cpu = {.pc=0x9063, .a=0xc4, .x=0x8e, .y=0x15, .sp=0x2d, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x9063, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x9064, .a=0xc4, .x=0x8e, .y=0x15, .sp=0x2d, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x9063, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x9063, .value=0x00, .type=IO_READ},
        {.addr=0x9064, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0241) {
    const struct CPU_State initial_cpu = {.pc=0x4aa2, .a=0x84, .x=0x26, .y=0x8c, .sp=0x23, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x4aa2, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x4aa3, .a=0x84, .x=0x26, .y=0x8c, .sp=0x23, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x4aa2, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x4aa2, .value=0x00, .type=IO_READ},
        {.addr=0x4aa3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0242) {
    const struct CPU_State initial_cpu = {.pc=0x61a8, .a=0xa3, .x=0xac, .y=0x56, .sp=0xbc, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x61a8, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x61a9, .a=0xa3, .x=0xac, .y=0x56, .sp=0xbc, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x61a8, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x61a8, .value=0x00, .type=IO_READ},
        {.addr=0x61a9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0243) {
    const struct CPU_State initial_cpu = {.pc=0xed63, .a=0xf9, .x=0xe7, .y=0x02, .sp=0x8e, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xed63, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xed64, .a=0xf9, .x=0xe7, .y=0x02, .sp=0x8e, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xed63, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xed63, .value=0x00, .type=IO_READ},
        {.addr=0xed64, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0244) {
    const struct CPU_State initial_cpu = {.pc=0x693a, .a=0xac, .x=0xf9, .y=0x77, .sp=0xd3, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x693a, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x693b, .a=0xac, .x=0xf9, .y=0x77, .sp=0xd3, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x693a, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x693a, .value=0x00, .type=IO_READ},
        {.addr=0x693b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0245) {
    const struct CPU_State initial_cpu = {.pc=0xcd50, .a=0x14, .x=0x7e, .y=0xfa, .sp=0x39, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xcd50, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xcd51, .a=0x14, .x=0x7e, .y=0xfa, .sp=0x39, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xcd50, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xcd50, .value=0x00, .type=IO_READ},
        {.addr=0xcd51, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0246) {
    const struct CPU_State initial_cpu = {.pc=0xce0d, .a=0xb1, .x=0xe4, .y=0xed, .sp=0x15, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xce0d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xce0e, .a=0xb1, .x=0xe4, .y=0xed, .sp=0x15, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0xce0d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xce0d, .value=0x00, .type=IO_READ},
        {.addr=0xce0e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0247) {
    const struct CPU_State initial_cpu = {.pc=0xe693, .a=0x4d, .x=0xe5, .y=0x1b, .sp=0x25, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xe693, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xe694, .a=0x4d, .x=0xe5, .y=0x1b, .sp=0x25, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xe693, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xe693, .value=0x00, .type=IO_READ},
        {.addr=0xe694, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0248) {
    const struct CPU_State initial_cpu = {.pc=0x641d, .a=0x90, .x=0x08, .y=0x46, .sp=0xf1, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x641d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x641e, .a=0x90, .x=0x08, .y=0x46, .sp=0xf1, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x641d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x641d, .value=0x00, .type=IO_READ},
        {.addr=0x641e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0249) {
    const struct CPU_State initial_cpu = {.pc=0x5893, .a=0x84, .x=0x37, .y=0x3d, .sp=0xd1, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x5893, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x5894, .a=0x84, .x=0x37, .y=0x3d, .sp=0xd1, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x5893, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x5893, .value=0x00, .type=IO_READ},
        {.addr=0x5894, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_024A) {
    const struct CPU_State initial_cpu = {.pc=0x7339, .a=0xd8, .x=0x13, .y=0x24, .sp=0x3f, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x7339, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x733a, .a=0xd8, .x=0x13, .y=0x24, .sp=0x3f, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x7339, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7339, .value=0x00, .type=IO_READ},
        {.addr=0x733a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_024B) {
    const struct CPU_State initial_cpu = {.pc=0xfb1b, .a=0x93, .x=0xc1, .y=0x20, .sp=0xf8, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xfb1b, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xfb1c, .a=0x93, .x=0xc1, .y=0x20, .sp=0xf8, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0xfb1b, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xfb1b, .value=0x00, .type=IO_READ},
        {.addr=0xfb1c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_024C) {
    const struct CPU_State initial_cpu = {.pc=0x5e01, .a=0x43, .x=0x99, .y=0xaa, .sp=0x67, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x5e01, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x5e02, .a=0x43, .x=0x99, .y=0xaa, .sp=0x67, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x5e01, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x5e01, .value=0x00, .type=IO_READ},
        {.addr=0x5e02, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_024D) {
    const struct CPU_State initial_cpu = {.pc=0xc2e1, .a=0x52, .x=0xd3, .y=0x7f, .sp=0x6b, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xc2e1, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xc2e2, .a=0x52, .x=0xd3, .y=0x7f, .sp=0x6b, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0xc2e1, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xc2e1, .value=0x00, .type=IO_READ},
        {.addr=0xc2e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_024E) {
    const struct CPU_State initial_cpu = {.pc=0x81d9, .a=0x72, .x=0xba, .y=0x8b, .sp=0x9d, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x81d9, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x81da, .a=0x72, .x=0xba, .y=0x8b, .sp=0x9d, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x81d9, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x81d9, .value=0x00, .type=IO_READ},
        {.addr=0x81da, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_024F) {
    const struct CPU_State initial_cpu = {.pc=0xc363, .a=0x82, .x=0x18, .y=0x32, .sp=0x5f, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xc363, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xc364, .a=0x82, .x=0x18, .y=0x32, .sp=0x5f, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0xc363, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xc363, .value=0x00, .type=IO_READ},
        {.addr=0xc364, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0250) {
    const struct CPU_State initial_cpu = {.pc=0x6143, .a=0x6c, .x=0xb8, .y=0x44, .sp=0xd0, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x6143, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x6144, .a=0x6c, .x=0xb8, .y=0x44, .sp=0xd0, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x6143, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x6143, .value=0x00, .type=IO_READ},
        {.addr=0x6144, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0251) {
    const struct CPU_State initial_cpu = {.pc=0x9a94, .a=0xfa, .x=0x54, .y=0x3d, .sp=0x83, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x9a94, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x9a95, .a=0xfa, .x=0x54, .y=0x3d, .sp=0x83, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x9a94, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x9a94, .value=0x00, .type=IO_READ},
        {.addr=0x9a95, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0252) {
    const struct CPU_State initial_cpu = {.pc=0xab2b, .a=0x37, .x=0x65, .y=0x71, .sp=0xdb, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xab2b, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xab2c, .a=0x37, .x=0x65, .y=0x71, .sp=0xdb, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xab2b, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xab2b, .value=0x00, .type=IO_READ},
        {.addr=0xab2c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0253) {
    const struct CPU_State initial_cpu = {.pc=0x5739, .a=0x66, .x=0x1e, .y=0xb1, .sp=0x8c, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x5739, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x573a, .a=0x66, .x=0x1e, .y=0xb1, .sp=0x8c, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x5739, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x5739, .value=0x00, .type=IO_READ},
        {.addr=0x573a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0254) {
    const struct CPU_State initial_cpu = {.pc=0xb553, .a=0x98, .x=0x6b, .y=0xd3, .sp=0xe9, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xb553, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xb554, .a=0x98, .x=0x6b, .y=0xd3, .sp=0xe9, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0xb553, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xb553, .value=0x00, .type=IO_READ},
        {.addr=0xb554, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0255) {
    const struct CPU_State initial_cpu = {.pc=0xe8cd, .a=0x45, .x=0x87, .y=0xf0, .sp=0xa1, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xe8cd, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xe8ce, .a=0x45, .x=0x87, .y=0xf0, .sp=0xa1, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xe8cd, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xe8cd, .value=0x00, .type=IO_READ},
        {.addr=0xe8ce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0256) {
    const struct CPU_State initial_cpu = {.pc=0x49d7, .a=0xca, .x=0xf2, .y=0x94, .sp=0xca, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x49d7, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x49d8, .a=0xca, .x=0xf2, .y=0x94, .sp=0xca, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x49d7, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x49d7, .value=0x00, .type=IO_READ},
        {.addr=0x49d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0257) {
    const struct CPU_State initial_cpu = {.pc=0x0110, .a=0x57, .x=0x94, .y=0x79, .sp=0x76, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0111, .a=0x57, .x=0x94, .y=0x79, .sp=0x76, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x0110, .value=0x00, .type=IO_READ},
        {.addr=0x0111, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0258) {
    const struct CPU_State initial_cpu = {.pc=0xa941, .a=0x93, .x=0x8b, .y=0xb9, .sp=0x29, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xa941, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xa942, .a=0x93, .x=0x8b, .y=0xb9, .sp=0x29, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xa941, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xa941, .value=0x00, .type=IO_READ},
        {.addr=0xa942, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0259) {
    const struct CPU_State initial_cpu = {.pc=0xe405, .a=0x3f, .x=0xe1, .y=0xda, .sp=0x56, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xe405, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xe406, .a=0x3f, .x=0xe1, .y=0xda, .sp=0x56, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xe405, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xe405, .value=0x00, .type=IO_READ},
        {.addr=0xe406, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_025A) {
    const struct CPU_State initial_cpu = {.pc=0xed2a, .a=0x39, .x=0x8e, .y=0xd2, .sp=0xf1, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xed2a, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xed2b, .a=0x39, .x=0x8e, .y=0xd2, .sp=0xf1, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xed2a, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xed2a, .value=0x00, .type=IO_READ},
        {.addr=0xed2b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_025B) {
    const struct CPU_State initial_cpu = {.pc=0x4cd0, .a=0x8e, .x=0x1d, .y=0xcb, .sp=0xfa, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x4cd0, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x4cd1, .a=0x8e, .x=0x1d, .y=0xcb, .sp=0xfa, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x4cd0, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x4cd0, .value=0x00, .type=IO_READ},
        {.addr=0x4cd1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_025C) {
    const struct CPU_State initial_cpu = {.pc=0x3cd7, .a=0xe3, .x=0x0e, .y=0xd3, .sp=0x82, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x3cd7, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x3cd8, .a=0xe3, .x=0x0e, .y=0xd3, .sp=0x82, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x3cd7, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x3cd7, .value=0x00, .type=IO_READ},
        {.addr=0x3cd8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_025D) {
    const struct CPU_State initial_cpu = {.pc=0x78c1, .a=0x20, .x=0x52, .y=0xbb, .sp=0x0e, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x78c1, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x78c2, .a=0x20, .x=0x52, .y=0xbb, .sp=0x0e, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x78c1, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x78c1, .value=0x00, .type=IO_READ},
        {.addr=0x78c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_025E) {
    const struct CPU_State initial_cpu = {.pc=0x131d, .a=0x53, .x=0x22, .y=0x69, .sp=0x18, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x131d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x131e, .a=0x53, .x=0x22, .y=0x69, .sp=0x18, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x131d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x131d, .value=0x00, .type=IO_READ},
        {.addr=0x131e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_025F) {
    const struct CPU_State initial_cpu = {.pc=0x83c7, .a=0xa7, .x=0xab, .y=0xe1, .sp=0xc4, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x83c7, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x83c8, .a=0xa7, .x=0xab, .y=0xe1, .sp=0xc4, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x83c7, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x83c7, .value=0x00, .type=IO_READ},
        {.addr=0x83c8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0260) {
    const struct CPU_State initial_cpu = {.pc=0x0c48, .a=0xf0, .x=0x80, .y=0x21, .sp=0x41, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x0c48, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0c49, .a=0xf0, .x=0x80, .y=0x21, .sp=0x41, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x0c48, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x0c48, .value=0x00, .type=IO_READ},
        {.addr=0x0c49, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0261) {
    const struct CPU_State initial_cpu = {.pc=0x3344, .a=0x3a, .x=0xae, .y=0xe1, .sp=0xb2, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x3344, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x3345, .a=0x3a, .x=0xae, .y=0xe1, .sp=0xb2, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x3344, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x3344, .value=0x00, .type=IO_READ},
        {.addr=0x3345, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0262) {
    const struct CPU_State initial_cpu = {.pc=0x7d2a, .a=0xd8, .x=0x9f, .y=0x65, .sp=0xae, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x7d2a, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7d2b, .a=0xd8, .x=0x9f, .y=0x65, .sp=0xae, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x7d2a, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7d2a, .value=0x00, .type=IO_READ},
        {.addr=0x7d2b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0263) {
    const struct CPU_State initial_cpu = {.pc=0xab14, .a=0x20, .x=0xf8, .y=0x21, .sp=0x6a, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xab14, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xab15, .a=0x20, .x=0xf8, .y=0x21, .sp=0x6a, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0xab14, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xab14, .value=0x00, .type=IO_READ},
        {.addr=0xab15, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0264) {
    const struct CPU_State initial_cpu = {.pc=0x81f9, .a=0x51, .x=0x1b, .y=0x0e, .sp=0xb7, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x81f9, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x81fa, .a=0x51, .x=0x1b, .y=0x0e, .sp=0xb7, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x81f9, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x81f9, .value=0x00, .type=IO_READ},
        {.addr=0x81fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0265) {
    const struct CPU_State initial_cpu = {.pc=0xecfd, .a=0xe4, .x=0xfb, .y=0xeb, .sp=0xfb, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xecfd, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xecfe, .a=0xe4, .x=0xfb, .y=0xeb, .sp=0xfb, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xecfd, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xecfd, .value=0x00, .type=IO_READ},
        {.addr=0xecfe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0266) {
    const struct CPU_State initial_cpu = {.pc=0xe9b6, .a=0x22, .x=0xb1, .y=0xd5, .sp=0x64, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xe9b6, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xe9b7, .a=0x22, .x=0xb1, .y=0xd5, .sp=0x64, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xe9b6, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xe9b6, .value=0x00, .type=IO_READ},
        {.addr=0xe9b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0267) {
    const struct CPU_State initial_cpu = {.pc=0x7390, .a=0x1d, .x=0xc0, .y=0x06, .sp=0x31, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x7390, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7391, .a=0x1d, .x=0xc0, .y=0x06, .sp=0x31, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x7390, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7390, .value=0x00, .type=IO_READ},
        {.addr=0x7391, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0268) {
    const struct CPU_State initial_cpu = {.pc=0x0d34, .a=0x6a, .x=0x4d, .y=0x80, .sp=0xf7, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x0d34, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0d35, .a=0x6a, .x=0x4d, .y=0x80, .sp=0xf7, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x0d34, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x0d34, .value=0x00, .type=IO_READ},
        {.addr=0x0d35, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0269) {
    const struct CPU_State initial_cpu = {.pc=0xaf33, .a=0x83, .x=0x8c, .y=0x7b, .sp=0xe1, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xaf33, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xaf34, .a=0x83, .x=0x8c, .y=0x7b, .sp=0xe1, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0xaf33, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xaf33, .value=0x00, .type=IO_READ},
        {.addr=0xaf34, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_026A) {
    const struct CPU_State initial_cpu = {.pc=0x91f3, .a=0x96, .x=0x24, .y=0x7e, .sp=0x6d, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x91f3, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x91f4, .a=0x96, .x=0x24, .y=0x7e, .sp=0x6d, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x91f3, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x91f3, .value=0x00, .type=IO_READ},
        {.addr=0x91f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_026B) {
    const struct CPU_State initial_cpu = {.pc=0xfde9, .a=0x2e, .x=0xc0, .y=0x5a, .sp=0x8b, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xfde9, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xfdea, .a=0x2e, .x=0xc0, .y=0x5a, .sp=0x8b, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xfde9, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xfde9, .value=0x00, .type=IO_READ},
        {.addr=0xfdea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_026C) {
    const struct CPU_State initial_cpu = {.pc=0x3f6d, .a=0x01, .x=0xda, .y=0x92, .sp=0xc0, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x3f6d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x3f6e, .a=0x01, .x=0xda, .y=0x92, .sp=0xc0, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x3f6d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x3f6d, .value=0x00, .type=IO_READ},
        {.addr=0x3f6e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_026D) {
    const struct CPU_State initial_cpu = {.pc=0xb6d5, .a=0x3d, .x=0xd7, .y=0x5e, .sp=0x4d, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xb6d5, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xb6d6, .a=0x3d, .x=0xd7, .y=0x5e, .sp=0x4d, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0xb6d5, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xb6d5, .value=0x00, .type=IO_READ},
        {.addr=0xb6d6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_026E) {
    const struct CPU_State initial_cpu = {.pc=0x037c, .a=0xfd, .x=0xdd, .y=0x2d, .sp=0xae, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x037c, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x037d, .a=0xfd, .x=0xdd, .y=0x2d, .sp=0xae, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x037c, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x037c, .value=0x00, .type=IO_READ},
        {.addr=0x037d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_026F) {
    const struct CPU_State initial_cpu = {.pc=0x0c5e, .a=0x0c, .x=0x99, .y=0x2f, .sp=0x52, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x0c5e, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0c5f, .a=0x0c, .x=0x99, .y=0x2f, .sp=0x52, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x0c5e, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x0c5e, .value=0x00, .type=IO_READ},
        {.addr=0x0c5f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0270) {
    const struct CPU_State initial_cpu = {.pc=0xb473, .a=0xe0, .x=0x6c, .y=0xe7, .sp=0x11, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xb473, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xb474, .a=0xe0, .x=0x6c, .y=0xe7, .sp=0x11, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xb473, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xb473, .value=0x00, .type=IO_READ},
        {.addr=0xb474, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0271) {
    const struct CPU_State initial_cpu = {.pc=0xdcc5, .a=0x6a, .x=0x45, .y=0x8b, .sp=0x09, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xdcc5, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xdcc6, .a=0x6a, .x=0x45, .y=0x8b, .sp=0x09, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xdcc5, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xdcc5, .value=0x00, .type=IO_READ},
        {.addr=0xdcc6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0272) {
    const struct CPU_State initial_cpu = {.pc=0x5bf2, .a=0x35, .x=0x9c, .y=0x89, .sp=0xa9, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x5bf2, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x5bf3, .a=0x35, .x=0x9c, .y=0x89, .sp=0xa9, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x5bf2, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x5bf2, .value=0x00, .type=IO_READ},
        {.addr=0x5bf3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0273) {
    const struct CPU_State initial_cpu = {.pc=0xd150, .a=0x85, .x=0xde, .y=0xfe, .sp=0x51, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xd150, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xd151, .a=0x85, .x=0xde, .y=0xfe, .sp=0x51, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0xd150, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xd150, .value=0x00, .type=IO_READ},
        {.addr=0xd151, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0274) {
    const struct CPU_State initial_cpu = {.pc=0xf7e5, .a=0x25, .x=0x9b, .y=0x8f, .sp=0x1a, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xf7e5, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xf7e6, .a=0x25, .x=0x9b, .y=0x8f, .sp=0x1a, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0xf7e5, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xf7e5, .value=0x00, .type=IO_READ},
        {.addr=0xf7e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0275) {
    const struct CPU_State initial_cpu = {.pc=0x5679, .a=0x54, .x=0x0c, .y=0x4d, .sp=0xf9, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x5679, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x567a, .a=0x54, .x=0x0c, .y=0x4d, .sp=0xf9, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x5679, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x5679, .value=0x00, .type=IO_READ},
        {.addr=0x567a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0276) {
    const struct CPU_State initial_cpu = {.pc=0x5e2a, .a=0xc8, .x=0x69, .y=0xbd, .sp=0x78, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x5e2a, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x5e2b, .a=0xc8, .x=0x69, .y=0xbd, .sp=0x78, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x5e2a, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x5e2a, .value=0x00, .type=IO_READ},
        {.addr=0x5e2b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0277) {
    const struct CPU_State initial_cpu = {.pc=0xff8e, .a=0x87, .x=0x3c, .y=0x73, .sp=0x50, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xff8e, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xff8f, .a=0x87, .x=0x3c, .y=0x73, .sp=0x50, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xff8e, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xff8e, .value=0x00, .type=IO_READ},
        {.addr=0xff8f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0278) {
    const struct CPU_State initial_cpu = {.pc=0x78d9, .a=0x63, .x=0x86, .y=0xc5, .sp=0xf8, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x78d9, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x78da, .a=0x63, .x=0x86, .y=0xc5, .sp=0xf8, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x78d9, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x78d9, .value=0x00, .type=IO_READ},
        {.addr=0x78da, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0279) {
    const struct CPU_State initial_cpu = {.pc=0x191c, .a=0x15, .x=0x20, .y=0x4a, .sp=0xfa, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x191c, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x191d, .a=0x15, .x=0x20, .y=0x4a, .sp=0xfa, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x191c, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x191c, .value=0x00, .type=IO_READ},
        {.addr=0x191d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_027A) {
    const struct CPU_State initial_cpu = {.pc=0x2268, .a=0xb1, .x=0xb8, .y=0x3c, .sp=0xcb, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x2268, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x2269, .a=0xb1, .x=0xb8, .y=0x3c, .sp=0xcb, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x2268, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x2268, .value=0x00, .type=IO_READ},
        {.addr=0x2269, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_027B) {
    const struct CPU_State initial_cpu = {.pc=0xb530, .a=0x14, .x=0xa7, .y=0x61, .sp=0x42, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xb530, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xb531, .a=0x14, .x=0xa7, .y=0x61, .sp=0x42, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0xb530, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xb530, .value=0x00, .type=IO_READ},
        {.addr=0xb531, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_027C) {
    const struct CPU_State initial_cpu = {.pc=0x4219, .a=0x49, .x=0x4f, .y=0xe2, .sp=0x85, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x4219, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x421a, .a=0x49, .x=0x4f, .y=0xe2, .sp=0x85, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x4219, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x4219, .value=0x00, .type=IO_READ},
        {.addr=0x421a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_027D) {
    const struct CPU_State initial_cpu = {.pc=0x3584, .a=0x26, .x=0x11, .y=0x3c, .sp=0xbc, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x3584, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x3585, .a=0x26, .x=0x11, .y=0x3c, .sp=0xbc, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x3584, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x3584, .value=0x00, .type=IO_READ},
        {.addr=0x3585, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_027E) {
    const struct CPU_State initial_cpu = {.pc=0x316b, .a=0xd6, .x=0x5c, .y=0xae, .sp=0xc4, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x316b, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x316c, .a=0xd6, .x=0x5c, .y=0xae, .sp=0xc4, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x316b, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x316b, .value=0x00, .type=IO_READ},
        {.addr=0x316c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_027F) {
    const struct CPU_State initial_cpu = {.pc=0xdb87, .a=0x65, .x=0xff, .y=0xf0, .sp=0x4f, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xdb87, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xdb88, .a=0x65, .x=0xff, .y=0xf0, .sp=0x4f, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0xdb87, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xdb87, .value=0x00, .type=IO_READ},
        {.addr=0xdb88, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0280) {
    const struct CPU_State initial_cpu = {.pc=0xeae9, .a=0xe3, .x=0xd2, .y=0x47, .sp=0x99, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xeae9, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xeaea, .a=0xe3, .x=0xd2, .y=0x47, .sp=0x99, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xeae9, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xeae9, .value=0x00, .type=IO_READ},
        {.addr=0xeaea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0281) {
    const struct CPU_State initial_cpu = {.pc=0xe665, .a=0x45, .x=0xc7, .y=0xdc, .sp=0xc7, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xe665, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xe666, .a=0x45, .x=0xc7, .y=0xdc, .sp=0xc7, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xe665, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xe665, .value=0x00, .type=IO_READ},
        {.addr=0xe666, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0282) {
    const struct CPU_State initial_cpu = {.pc=0x8328, .a=0x77, .x=0x92, .y=0xd4, .sp=0xfd, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x8328, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x8329, .a=0x77, .x=0x92, .y=0xd4, .sp=0xfd, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x8328, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x8328, .value=0x00, .type=IO_READ},
        {.addr=0x8329, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0283) {
    const struct CPU_State initial_cpu = {.pc=0x1138, .a=0x02, .x=0x29, .y=0x18, .sp=0x2c, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x1138, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x1139, .a=0x02, .x=0x29, .y=0x18, .sp=0x2c, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x1138, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x1138, .value=0x00, .type=IO_READ},
        {.addr=0x1139, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0284) {
    const struct CPU_State initial_cpu = {.pc=0x4a18, .a=0x66, .x=0x1e, .y=0x1f, .sp=0x37, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x4a18, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x4a19, .a=0x66, .x=0x1e, .y=0x1f, .sp=0x37, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x4a18, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x4a18, .value=0x00, .type=IO_READ},
        {.addr=0x4a19, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0285) {
    const struct CPU_State initial_cpu = {.pc=0x0638, .a=0x1a, .x=0x73, .y=0xba, .sp=0xb0, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x0638, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0639, .a=0x1a, .x=0x73, .y=0xba, .sp=0xb0, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x0638, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x0638, .value=0x00, .type=IO_READ},
        {.addr=0x0639, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0286) {
    const struct CPU_State initial_cpu = {.pc=0x7ee4, .a=0xc2, .x=0x53, .y=0xf7, .sp=0xff, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x7ee4, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7ee5, .a=0xc2, .x=0x53, .y=0xf7, .sp=0xff, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x7ee4, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7ee4, .value=0x00, .type=IO_READ},
        {.addr=0x7ee5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0287) {
    const struct CPU_State initial_cpu = {.pc=0x7d99, .a=0x0b, .x=0xfe, .y=0x60, .sp=0x9f, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x7d99, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7d9a, .a=0x0b, .x=0xfe, .y=0x60, .sp=0x9f, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x7d99, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7d99, .value=0x00, .type=IO_READ},
        {.addr=0x7d9a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0288) {
    const struct CPU_State initial_cpu = {.pc=0xea63, .a=0x33, .x=0x74, .y=0x52, .sp=0x99, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xea63, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xea64, .a=0x33, .x=0x74, .y=0x52, .sp=0x99, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0xea63, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xea63, .value=0x00, .type=IO_READ},
        {.addr=0xea64, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0289) {
    const struct CPU_State initial_cpu = {.pc=0xc61e, .a=0x83, .x=0xc6, .y=0x7f, .sp=0xda, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xc61e, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xc61f, .a=0x83, .x=0xc6, .y=0x7f, .sp=0xda, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xc61e, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xc61e, .value=0x00, .type=IO_READ},
        {.addr=0xc61f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_028A) {
    const struct CPU_State initial_cpu = {.pc=0xf90d, .a=0xb6, .x=0x1d, .y=0x1e, .sp=0x49, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xf90d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xf90e, .a=0xb6, .x=0x1d, .y=0x1e, .sp=0x49, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0xf90d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xf90d, .value=0x00, .type=IO_READ},
        {.addr=0xf90e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_028B) {
    const struct CPU_State initial_cpu = {.pc=0x0c5c, .a=0x16, .x=0x1b, .y=0x60, .sp=0xde, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x0c5c, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0c5d, .a=0x16, .x=0x1b, .y=0x60, .sp=0xde, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x0c5c, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x0c5c, .value=0x00, .type=IO_READ},
        {.addr=0x0c5d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_028C) {
    const struct CPU_State initial_cpu = {.pc=0x7a25, .a=0x21, .x=0xef, .y=0xb2, .sp=0x29, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x7a25, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7a26, .a=0x21, .x=0xef, .y=0xb2, .sp=0x29, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x7a25, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7a25, .value=0x00, .type=IO_READ},
        {.addr=0x7a26, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_028D) {
    const struct CPU_State initial_cpu = {.pc=0x848b, .a=0xd0, .x=0x2a, .y=0xd1, .sp=0x9c, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x848b, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x848c, .a=0xd0, .x=0x2a, .y=0xd1, .sp=0x9c, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x848b, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x848b, .value=0x00, .type=IO_READ},
        {.addr=0x848c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_028E) {
    const struct CPU_State initial_cpu = {.pc=0x9d2a, .a=0x02, .x=0xf7, .y=0xb0, .sp=0x56, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x9d2a, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x9d2b, .a=0x02, .x=0xf7, .y=0xb0, .sp=0x56, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x9d2a, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x9d2a, .value=0x00, .type=IO_READ},
        {.addr=0x9d2b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_028F) {
    const struct CPU_State initial_cpu = {.pc=0x6724, .a=0xc0, .x=0x1a, .y=0x6a, .sp=0x1e, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x6724, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x6725, .a=0xc0, .x=0x1a, .y=0x6a, .sp=0x1e, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x6724, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x6724, .value=0x00, .type=IO_READ},
        {.addr=0x6725, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0290) {
    const struct CPU_State initial_cpu = {.pc=0x9181, .a=0xfc, .x=0xcb, .y=0xea, .sp=0x56, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x9181, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x9182, .a=0xfc, .x=0xcb, .y=0xea, .sp=0x56, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x9181, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x9181, .value=0x00, .type=IO_READ},
        {.addr=0x9182, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0291) {
    const struct CPU_State initial_cpu = {.pc=0x7e7b, .a=0x87, .x=0x3b, .y=0xe1, .sp=0x48, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x7e7b, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7e7c, .a=0x87, .x=0x3b, .y=0xe1, .sp=0x48, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x7e7b, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7e7b, .value=0x00, .type=IO_READ},
        {.addr=0x7e7c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0292) {
    const struct CPU_State initial_cpu = {.pc=0xba0e, .a=0xbf, .x=0x01, .y=0xe6, .sp=0xb7, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xba0e, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xba0f, .a=0xbf, .x=0x01, .y=0xe6, .sp=0xb7, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xba0e, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xba0e, .value=0x00, .type=IO_READ},
        {.addr=0xba0f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0293) {
    const struct CPU_State initial_cpu = {.pc=0x42ca, .a=0x8c, .x=0x3f, .y=0x4d, .sp=0x15, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x42ca, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x42cb, .a=0x8c, .x=0x3f, .y=0x4d, .sp=0x15, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x42ca, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x42ca, .value=0x00, .type=IO_READ},
        {.addr=0x42cb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0294) {
    const struct CPU_State initial_cpu = {.pc=0x6c1f, .a=0xa2, .x=0x21, .y=0x7a, .sp=0x1b, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x6c1f, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x6c20, .a=0xa2, .x=0x21, .y=0x7a, .sp=0x1b, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x6c1f, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x6c1f, .value=0x00, .type=IO_READ},
        {.addr=0x6c20, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0295) {
    const struct CPU_State initial_cpu = {.pc=0x69c7, .a=0x7a, .x=0x67, .y=0x1f, .sp=0x58, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x69c7, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x69c8, .a=0x7a, .x=0x67, .y=0x1f, .sp=0x58, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x69c7, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x69c7, .value=0x00, .type=IO_READ},
        {.addr=0x69c8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0296) {
    const struct CPU_State initial_cpu = {.pc=0xf41d, .a=0xec, .x=0xba, .y=0x79, .sp=0x8c, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xf41d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xf41e, .a=0xec, .x=0xba, .y=0x79, .sp=0x8c, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xf41d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xf41d, .value=0x00, .type=IO_READ},
        {.addr=0xf41e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0297) {
    const struct CPU_State initial_cpu = {.pc=0x16e6, .a=0x22, .x=0x5e, .y=0x48, .sp=0x4b, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x16e6, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x16e7, .a=0x22, .x=0x5e, .y=0x48, .sp=0x4b, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x16e6, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x16e6, .value=0x00, .type=IO_READ},
        {.addr=0x16e7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0298) {
    const struct CPU_State initial_cpu = {.pc=0x3ac2, .a=0xef, .x=0xc8, .y=0xa0, .sp=0x3c, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x3ac2, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x3ac3, .a=0xef, .x=0xc8, .y=0xa0, .sp=0x3c, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x3ac2, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x3ac2, .value=0x00, .type=IO_READ},
        {.addr=0x3ac3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0299) {
    const struct CPU_State initial_cpu = {.pc=0xd17c, .a=0xd2, .x=0x79, .y=0x99, .sp=0x39, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xd17c, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xd17d, .a=0xd2, .x=0x79, .y=0x99, .sp=0x39, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0xd17c, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xd17c, .value=0x00, .type=IO_READ},
        {.addr=0xd17d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_029A) {
    const struct CPU_State initial_cpu = {.pc=0xc781, .a=0xcd, .x=0xc3, .y=0x79, .sp=0x6b, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xc781, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xc782, .a=0xcd, .x=0xc3, .y=0x79, .sp=0x6b, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xc781, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xc781, .value=0x00, .type=IO_READ},
        {.addr=0xc782, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_029B) {
    const struct CPU_State initial_cpu = {.pc=0xfac0, .a=0xc6, .x=0xbf, .y=0xb9, .sp=0xf5, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xfac0, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xfac1, .a=0xc6, .x=0xbf, .y=0xb9, .sp=0xf5, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xfac0, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xfac0, .value=0x00, .type=IO_READ},
        {.addr=0xfac1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_029C) {
    const struct CPU_State initial_cpu = {.pc=0xefd5, .a=0xbc, .x=0xcd, .y=0x51, .sp=0x4c, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xefd5, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xefd6, .a=0xbc, .x=0xcd, .y=0x51, .sp=0x4c, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xefd5, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xefd5, .value=0x00, .type=IO_READ},
        {.addr=0xefd6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_029D) {
    const struct CPU_State initial_cpu = {.pc=0xf83e, .a=0x1f, .x=0xce, .y=0x5b, .sp=0x2e, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xf83e, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xf83f, .a=0x1f, .x=0xce, .y=0x5b, .sp=0x2e, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0xf83e, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xf83e, .value=0x00, .type=IO_READ},
        {.addr=0xf83f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_029E) {
    const struct CPU_State initial_cpu = {.pc=0x52b8, .a=0x66, .x=0x29, .y=0xe1, .sp=0x6b, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x52b8, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x52b9, .a=0x66, .x=0x29, .y=0xe1, .sp=0x6b, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x52b8, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x52b8, .value=0x00, .type=IO_READ},
        {.addr=0x52b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_029F) {
    const struct CPU_State initial_cpu = {.pc=0xb477, .a=0xd3, .x=0xa6, .y=0x32, .sp=0xb9, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xb477, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xb478, .a=0xd3, .x=0xa6, .y=0x32, .sp=0xb9, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0xb477, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xb477, .value=0x00, .type=IO_READ},
        {.addr=0xb478, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02A0) {
    const struct CPU_State initial_cpu = {.pc=0xb0f9, .a=0xef, .x=0x7e, .y=0xd6, .sp=0x50, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xb0f9, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xb0fa, .a=0xef, .x=0x7e, .y=0xd6, .sp=0x50, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0xb0f9, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xb0f9, .value=0x00, .type=IO_READ},
        {.addr=0xb0fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02A1) {
    const struct CPU_State initial_cpu = {.pc=0x559d, .a=0xfd, .x=0xe5, .y=0x12, .sp=0x45, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x559d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x559e, .a=0xfd, .x=0xe5, .y=0x12, .sp=0x45, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x559d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x559d, .value=0x00, .type=IO_READ},
        {.addr=0x559e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02A2) {
    const struct CPU_State initial_cpu = {.pc=0xd7f0, .a=0x3f, .x=0x0d, .y=0xb6, .sp=0x80, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xd7f0, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xd7f1, .a=0x3f, .x=0x0d, .y=0xb6, .sp=0x80, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xd7f0, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xd7f0, .value=0x00, .type=IO_READ},
        {.addr=0xd7f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02A3) {
    const struct CPU_State initial_cpu = {.pc=0x2941, .a=0x00, .x=0x16, .y=0x2d, .sp=0xab, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x2941, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x2942, .a=0x00, .x=0x16, .y=0x2d, .sp=0xab, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x2941, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x2941, .value=0x00, .type=IO_READ},
        {.addr=0x2942, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02A4) {
    const struct CPU_State initial_cpu = {.pc=0xd3f5, .a=0x99, .x=0x9a, .y=0x8d, .sp=0x20, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xd3f5, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xd3f6, .a=0x99, .x=0x9a, .y=0x8d, .sp=0x20, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xd3f5, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xd3f5, .value=0x00, .type=IO_READ},
        {.addr=0xd3f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02A5) {
    const struct CPU_State initial_cpu = {.pc=0xdbef, .a=0xe2, .x=0xdd, .y=0xf7, .sp=0x9c, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xdbef, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xdbf0, .a=0xe2, .x=0xdd, .y=0xf7, .sp=0x9c, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xdbef, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xdbef, .value=0x00, .type=IO_READ},
        {.addr=0xdbf0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02A6) {
    const struct CPU_State initial_cpu = {.pc=0x6ac9, .a=0x69, .x=0xc3, .y=0x42, .sp=0x0c, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x6ac9, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x6aca, .a=0x69, .x=0xc3, .y=0x42, .sp=0x0c, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x6ac9, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x6ac9, .value=0x00, .type=IO_READ},
        {.addr=0x6aca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02A7) {
    const struct CPU_State initial_cpu = {.pc=0xfd48, .a=0x0e, .x=0x99, .y=0xc7, .sp=0xb4, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xfd48, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xfd49, .a=0x0e, .x=0x99, .y=0xc7, .sp=0xb4, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0xfd48, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xfd48, .value=0x00, .type=IO_READ},
        {.addr=0xfd49, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02A8) {
    const struct CPU_State initial_cpu = {.pc=0x563b, .a=0xba, .x=0xa3, .y=0xf3, .sp=0x2b, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x563b, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x563c, .a=0xba, .x=0xa3, .y=0xf3, .sp=0x2b, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x563b, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x563b, .value=0x00, .type=IO_READ},
        {.addr=0x563c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02A9) {
    const struct CPU_State initial_cpu = {.pc=0x6bd1, .a=0xa2, .x=0x9c, .y=0xd3, .sp=0x3c, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x6bd1, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x6bd2, .a=0xa2, .x=0x9c, .y=0xd3, .sp=0x3c, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x6bd1, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x6bd1, .value=0x00, .type=IO_READ},
        {.addr=0x6bd2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02AA) {
    const struct CPU_State initial_cpu = {.pc=0xa0bf, .a=0xf1, .x=0x2f, .y=0x05, .sp=0xb3, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xa0bf, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xa0c0, .a=0xf1, .x=0x2f, .y=0x05, .sp=0xb3, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0xa0bf, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xa0bf, .value=0x00, .type=IO_READ},
        {.addr=0xa0c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02AB) {
    const struct CPU_State initial_cpu = {.pc=0xac7e, .a=0x51, .x=0x57, .y=0xc1, .sp=0xac, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xac7e, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xac7f, .a=0x51, .x=0x57, .y=0xc1, .sp=0xac, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0xac7e, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xac7e, .value=0x00, .type=IO_READ},
        {.addr=0xac7f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02AC) {
    const struct CPU_State initial_cpu = {.pc=0xa8f1, .a=0xa4, .x=0x83, .y=0x41, .sp=0xcb, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xa8f1, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xa8f2, .a=0xa4, .x=0x83, .y=0x41, .sp=0xcb, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0xa8f1, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xa8f1, .value=0x00, .type=IO_READ},
        {.addr=0xa8f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02AD) {
    const struct CPU_State initial_cpu = {.pc=0x0145, .a=0x94, .x=0xed, .y=0xb3, .sp=0xf8, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0146, .a=0x94, .x=0xed, .y=0xb3, .sp=0xf8, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x0145, .value=0x00, .type=IO_READ},
        {.addr=0x0146, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02AE) {
    const struct CPU_State initial_cpu = {.pc=0xcaa0, .a=0x7d, .x=0x86, .y=0xe1, .sp=0xb6, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xcaa0, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xcaa1, .a=0x7d, .x=0x86, .y=0xe1, .sp=0xb6, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0xcaa0, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xcaa0, .value=0x00, .type=IO_READ},
        {.addr=0xcaa1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02AF) {
    const struct CPU_State initial_cpu = {.pc=0xc0af, .a=0x5f, .x=0xc4, .y=0x5f, .sp=0xda, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xc0af, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xc0b0, .a=0x5f, .x=0xc4, .y=0x5f, .sp=0xda, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0xc0af, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xc0af, .value=0x00, .type=IO_READ},
        {.addr=0xc0b0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02B0) {
    const struct CPU_State initial_cpu = {.pc=0xeb62, .a=0xfc, .x=0xe3, .y=0xfc, .sp=0x4b, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xeb62, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xeb63, .a=0xfc, .x=0xe3, .y=0xfc, .sp=0x4b, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xeb62, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xeb62, .value=0x00, .type=IO_READ},
        {.addr=0xeb63, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02B1) {
    const struct CPU_State initial_cpu = {.pc=0x2e31, .a=0xc9, .x=0xe1, .y=0xe5, .sp=0xe9, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x2e31, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x2e32, .a=0xc9, .x=0xe1, .y=0xe5, .sp=0xe9, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x2e31, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x2e31, .value=0x00, .type=IO_READ},
        {.addr=0x2e32, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02B2) {
    const struct CPU_State initial_cpu = {.pc=0x0809, .a=0x5b, .x=0x2e, .y=0xf2, .sp=0x10, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x0809, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x080a, .a=0x5b, .x=0x2e, .y=0xf2, .sp=0x10, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x0809, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x0809, .value=0x00, .type=IO_READ},
        {.addr=0x080a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02B3) {
    const struct CPU_State initial_cpu = {.pc=0x4e5e, .a=0xdc, .x=0x7d, .y=0x61, .sp=0x3b, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x4e5e, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x4e5f, .a=0xdc, .x=0x7d, .y=0x61, .sp=0x3b, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x4e5e, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x4e5e, .value=0x00, .type=IO_READ},
        {.addr=0x4e5f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02B4) {
    const struct CPU_State initial_cpu = {.pc=0x5bb5, .a=0xf0, .x=0x9c, .y=0x39, .sp=0xd1, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x5bb5, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x5bb6, .a=0xf0, .x=0x9c, .y=0x39, .sp=0xd1, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x5bb5, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x5bb5, .value=0x00, .type=IO_READ},
        {.addr=0x5bb6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02B5) {
    const struct CPU_State initial_cpu = {.pc=0x4740, .a=0x20, .x=0x61, .y=0xba, .sp=0x38, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x4740, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x4741, .a=0x20, .x=0x61, .y=0xba, .sp=0x38, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x4740, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x4740, .value=0x00, .type=IO_READ},
        {.addr=0x4741, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02B6) {
    const struct CPU_State initial_cpu = {.pc=0x390b, .a=0x66, .x=0x84, .y=0x8c, .sp=0xbe, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x390b, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x390c, .a=0x66, .x=0x84, .y=0x8c, .sp=0xbe, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x390b, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x390b, .value=0x00, .type=IO_READ},
        {.addr=0x390c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02B7) {
    const struct CPU_State initial_cpu = {.pc=0x3017, .a=0xc7, .x=0xfa, .y=0x99, .sp=0x91, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x3017, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x3018, .a=0xc7, .x=0xfa, .y=0x99, .sp=0x91, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x3017, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x3017, .value=0x00, .type=IO_READ},
        {.addr=0x3018, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02B8) {
    const struct CPU_State initial_cpu = {.pc=0xd4dc, .a=0x7c, .x=0xbb, .y=0x67, .sp=0xec, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xd4dc, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xd4dd, .a=0x7c, .x=0xbb, .y=0x67, .sp=0xec, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xd4dc, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xd4dc, .value=0x00, .type=IO_READ},
        {.addr=0xd4dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02B9) {
    const struct CPU_State initial_cpu = {.pc=0x7e94, .a=0x7a, .x=0x4c, .y=0xad, .sp=0x29, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x7e94, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7e95, .a=0x7a, .x=0x4c, .y=0xad, .sp=0x29, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x7e94, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7e94, .value=0x00, .type=IO_READ},
        {.addr=0x7e95, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02BA) {
    const struct CPU_State initial_cpu = {.pc=0x0eaf, .a=0x43, .x=0x58, .y=0x55, .sp=0x94, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x0eaf, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0eb0, .a=0x43, .x=0x58, .y=0x55, .sp=0x94, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x0eaf, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x0eaf, .value=0x00, .type=IO_READ},
        {.addr=0x0eb0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02BB) {
    const struct CPU_State initial_cpu = {.pc=0xd180, .a=0xff, .x=0xf7, .y=0x93, .sp=0x71, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xd180, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xd181, .a=0xff, .x=0xf7, .y=0x93, .sp=0x71, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0xd180, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xd180, .value=0x00, .type=IO_READ},
        {.addr=0xd181, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02BC) {
    const struct CPU_State initial_cpu = {.pc=0x4d96, .a=0xb3, .x=0x23, .y=0xa2, .sp=0x5d, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x4d96, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x4d97, .a=0xb3, .x=0x23, .y=0xa2, .sp=0x5d, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x4d96, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x4d96, .value=0x00, .type=IO_READ},
        {.addr=0x4d97, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02BD) {
    const struct CPU_State initial_cpu = {.pc=0x5083, .a=0x31, .x=0x58, .y=0xf2, .sp=0x5c, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x5083, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x5084, .a=0x31, .x=0x58, .y=0xf2, .sp=0x5c, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x5083, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x5083, .value=0x00, .type=IO_READ},
        {.addr=0x5084, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02BE) {
    const struct CPU_State initial_cpu = {.pc=0x2d7f, .a=0xc4, .x=0x07, .y=0xc5, .sp=0x70, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x2d7f, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x2d80, .a=0xc4, .x=0x07, .y=0xc5, .sp=0x70, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x2d7f, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x2d7f, .value=0x00, .type=IO_READ},
        {.addr=0x2d80, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02BF) {
    const struct CPU_State initial_cpu = {.pc=0xba09, .a=0x87, .x=0xc1, .y=0x1e, .sp=0xc9, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xba09, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xba0a, .a=0x87, .x=0xc1, .y=0x1e, .sp=0xc9, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xba09, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xba09, .value=0x00, .type=IO_READ},
        {.addr=0xba0a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02C0) {
    const struct CPU_State initial_cpu = {.pc=0xef9d, .a=0xc6, .x=0xdd, .y=0x7c, .sp=0x8d, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xef9d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xef9e, .a=0xc6, .x=0xdd, .y=0x7c, .sp=0x8d, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0xef9d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xef9d, .value=0x00, .type=IO_READ},
        {.addr=0xef9e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02C1) {
    const struct CPU_State initial_cpu = {.pc=0xc768, .a=0x5a, .x=0xea, .y=0xe7, .sp=0x24, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xc768, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xc769, .a=0x5a, .x=0xea, .y=0xe7, .sp=0x24, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xc768, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xc768, .value=0x00, .type=IO_READ},
        {.addr=0xc769, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02C2) {
    const struct CPU_State initial_cpu = {.pc=0xfd14, .a=0x04, .x=0x69, .y=0x80, .sp=0x4c, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xfd14, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xfd15, .a=0x04, .x=0x69, .y=0x80, .sp=0x4c, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xfd14, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xfd14, .value=0x00, .type=IO_READ},
        {.addr=0xfd15, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02C3) {
    const struct CPU_State initial_cpu = {.pc=0x7142, .a=0xe9, .x=0x35, .y=0x72, .sp=0x01, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x7142, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7143, .a=0xe9, .x=0x35, .y=0x72, .sp=0x01, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x7142, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7142, .value=0x00, .type=IO_READ},
        {.addr=0x7143, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02C4) {
    const struct CPU_State initial_cpu = {.pc=0x38eb, .a=0x7f, .x=0xd5, .y=0x6c, .sp=0x78, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x38eb, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x38ec, .a=0x7f, .x=0xd5, .y=0x6c, .sp=0x78, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x38eb, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x38eb, .value=0x00, .type=IO_READ},
        {.addr=0x38ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x90d3, .a=0xad, .x=0x4d, .y=0x9d, .sp=0x95, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x90d3, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x90d4, .a=0xad, .x=0x4d, .y=0x9d, .sp=0x95, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x90d3, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x90d3, .value=0x00, .type=IO_READ},
        {.addr=0x90d4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02C6) {
    const struct CPU_State initial_cpu = {.pc=0xe52f, .a=0xbc, .x=0x7c, .y=0x6c, .sp=0x47, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xe52f, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xe530, .a=0xbc, .x=0x7c, .y=0x6c, .sp=0x47, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0xe52f, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xe52f, .value=0x00, .type=IO_READ},
        {.addr=0xe530, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02C7) {
    const struct CPU_State initial_cpu = {.pc=0xa6b7, .a=0xe8, .x=0xf8, .y=0x14, .sp=0x6a, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xa6b7, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xa6b8, .a=0xe8, .x=0xf8, .y=0x14, .sp=0x6a, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xa6b7, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xa6b7, .value=0x00, .type=IO_READ},
        {.addr=0xa6b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02C8) {
    const struct CPU_State initial_cpu = {.pc=0x47ac, .a=0x4a, .x=0x66, .y=0x83, .sp=0x21, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x47ac, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x47ad, .a=0x4a, .x=0x66, .y=0x83, .sp=0x21, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x47ac, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x47ac, .value=0x00, .type=IO_READ},
        {.addr=0x47ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02C9) {
    const struct CPU_State initial_cpu = {.pc=0xa6f6, .a=0x99, .x=0xfd, .y=0x7c, .sp=0xd8, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xa6f6, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xa6f7, .a=0x99, .x=0xfd, .y=0x7c, .sp=0xd8, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xa6f6, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xa6f6, .value=0x00, .type=IO_READ},
        {.addr=0xa6f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02CA) {
    const struct CPU_State initial_cpu = {.pc=0xfd96, .a=0x61, .x=0x97, .y=0xa6, .sp=0x61, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xfd96, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xfd97, .a=0x61, .x=0x97, .y=0xa6, .sp=0x61, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0xfd96, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xfd96, .value=0x00, .type=IO_READ},
        {.addr=0xfd97, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02CB) {
    const struct CPU_State initial_cpu = {.pc=0x69fd, .a=0x7b, .x=0x6b, .y=0xbb, .sp=0x0c, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x69fd, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x69fe, .a=0x7b, .x=0x6b, .y=0xbb, .sp=0x0c, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x69fd, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x69fd, .value=0x00, .type=IO_READ},
        {.addr=0x69fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02CC) {
    const struct CPU_State initial_cpu = {.pc=0x19cb, .a=0x96, .x=0x96, .y=0x18, .sp=0x33, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x19cb, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x19cc, .a=0x96, .x=0x96, .y=0x18, .sp=0x33, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x19cb, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x19cb, .value=0x00, .type=IO_READ},
        {.addr=0x19cc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x0a68, .a=0xc1, .x=0x77, .y=0x6f, .sp=0x3e, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x0a68, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0a69, .a=0xc1, .x=0x77, .y=0x6f, .sp=0x3e, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x0a68, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x0a68, .value=0x00, .type=IO_READ},
        {.addr=0x0a69, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x5c43, .a=0x5d, .x=0xd3, .y=0xd7, .sp=0xfa, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x5c43, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x5c44, .a=0x5d, .x=0xd3, .y=0xd7, .sp=0xfa, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x5c43, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x5c43, .value=0x00, .type=IO_READ},
        {.addr=0x5c44, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02CF) {
    const struct CPU_State initial_cpu = {.pc=0x45c0, .a=0x17, .x=0xda, .y=0x86, .sp=0xc4, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x45c0, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x45c1, .a=0x17, .x=0xda, .y=0x86, .sp=0xc4, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x45c0, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x45c0, .value=0x00, .type=IO_READ},
        {.addr=0x45c1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02D0) {
    const struct CPU_State initial_cpu = {.pc=0xd2f9, .a=0x4f, .x=0xd3, .y=0x6e, .sp=0x03, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xd2f9, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xd2fa, .a=0x4f, .x=0xd3, .y=0x6e, .sp=0x03, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xd2f9, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xd2f9, .value=0x00, .type=IO_READ},
        {.addr=0xd2fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02D1) {
    const struct CPU_State initial_cpu = {.pc=0x7104, .a=0x24, .x=0x4f, .y=0x67, .sp=0x73, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x7104, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7105, .a=0x24, .x=0x4f, .y=0x67, .sp=0x73, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x7104, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7104, .value=0x00, .type=IO_READ},
        {.addr=0x7105, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x4175, .a=0x61, .x=0xe9, .y=0x46, .sp=0xcc, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x4175, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x4176, .a=0x61, .x=0xe9, .y=0x46, .sp=0xcc, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x4175, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x4175, .value=0x00, .type=IO_READ},
        {.addr=0x4176, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x4cac, .a=0x7f, .x=0x7d, .y=0x0a, .sp=0xaf, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x4cac, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x4cad, .a=0x7f, .x=0x7d, .y=0x0a, .sp=0xaf, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x4cac, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x4cac, .value=0x00, .type=IO_READ},
        {.addr=0x4cad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x6224, .a=0x62, .x=0x98, .y=0x25, .sp=0x61, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x6224, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x6225, .a=0x62, .x=0x98, .y=0x25, .sp=0x61, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x6224, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x6224, .value=0x00, .type=IO_READ},
        {.addr=0x6225, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x4309, .a=0x54, .x=0x2b, .y=0x70, .sp=0x61, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x4309, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x430a, .a=0x54, .x=0x2b, .y=0x70, .sp=0x61, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x4309, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x4309, .value=0x00, .type=IO_READ},
        {.addr=0x430a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02D6) {
    const struct CPU_State initial_cpu = {.pc=0x62a3, .a=0x2b, .x=0x01, .y=0x07, .sp=0x47, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x62a3, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x62a4, .a=0x2b, .x=0x01, .y=0x07, .sp=0x47, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x62a3, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x62a3, .value=0x00, .type=IO_READ},
        {.addr=0x62a4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02D7) {
    const struct CPU_State initial_cpu = {.pc=0xdaee, .a=0x72, .x=0x2f, .y=0x1f, .sp=0xfb, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xdaee, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xdaef, .a=0x72, .x=0x2f, .y=0x1f, .sp=0xfb, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xdaee, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xdaee, .value=0x00, .type=IO_READ},
        {.addr=0xdaef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x3cd1, .a=0xaa, .x=0x0e, .y=0x8c, .sp=0x40, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x3cd1, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x3cd2, .a=0xaa, .x=0x0e, .y=0x8c, .sp=0x40, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x3cd1, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x3cd1, .value=0x00, .type=IO_READ},
        {.addr=0x3cd2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02D9) {
    const struct CPU_State initial_cpu = {.pc=0xfe34, .a=0x85, .x=0x85, .y=0x51, .sp=0xaf, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xfe34, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xfe35, .a=0x85, .x=0x85, .y=0x51, .sp=0xaf, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0xfe34, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xfe34, .value=0x00, .type=IO_READ},
        {.addr=0xfe35, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02DA) {
    const struct CPU_State initial_cpu = {.pc=0x3bfe, .a=0x25, .x=0x8f, .y=0x30, .sp=0xb3, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x3bfe, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x3bff, .a=0x25, .x=0x8f, .y=0x30, .sp=0xb3, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x3bfe, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x3bfe, .value=0x00, .type=IO_READ},
        {.addr=0x3bff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02DB) {
    const struct CPU_State initial_cpu = {.pc=0xb33e, .a=0x9f, .x=0x2a, .y=0x64, .sp=0xdf, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xb33e, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xb33f, .a=0x9f, .x=0x2a, .y=0x64, .sp=0xdf, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xb33e, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xb33e, .value=0x00, .type=IO_READ},
        {.addr=0xb33f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x9dcf, .a=0x8c, .x=0xc0, .y=0x8c, .sp=0x8b, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x9dcf, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x9dd0, .a=0x8c, .x=0xc0, .y=0x8c, .sp=0x8b, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x9dcf, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x9dcf, .value=0x00, .type=IO_READ},
        {.addr=0x9dd0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02DD) {
    const struct CPU_State initial_cpu = {.pc=0x9d84, .a=0xa0, .x=0xaa, .y=0x53, .sp=0xfb, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x9d84, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x9d85, .a=0xa0, .x=0xaa, .y=0x53, .sp=0xfb, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x9d84, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x9d84, .value=0x00, .type=IO_READ},
        {.addr=0x9d85, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02DE) {
    const struct CPU_State initial_cpu = {.pc=0x4bec, .a=0xe4, .x=0xfd, .y=0x5d, .sp=0x90, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x4bec, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x4bed, .a=0xe4, .x=0xfd, .y=0x5d, .sp=0x90, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x4bec, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x4bec, .value=0x00, .type=IO_READ},
        {.addr=0x4bed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02DF) {
    const struct CPU_State initial_cpu = {.pc=0x8676, .a=0xc0, .x=0xbd, .y=0x45, .sp=0x0a, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x8676, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x8677, .a=0xc0, .x=0xbd, .y=0x45, .sp=0x0a, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x8676, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x8676, .value=0x00, .type=IO_READ},
        {.addr=0x8677, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02E0) {
    const struct CPU_State initial_cpu = {.pc=0x1867, .a=0xab, .x=0x11, .y=0x04, .sp=0xa3, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x1867, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x1868, .a=0xab, .x=0x11, .y=0x04, .sp=0xa3, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x1867, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x1867, .value=0x00, .type=IO_READ},
        {.addr=0x1868, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02E1) {
    const struct CPU_State initial_cpu = {.pc=0x8af8, .a=0xa5, .x=0x1e, .y=0x89, .sp=0xce, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x8af8, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x8af9, .a=0xa5, .x=0x1e, .y=0x89, .sp=0xce, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x8af8, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x8af8, .value=0x00, .type=IO_READ},
        {.addr=0x8af9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02E2) {
    const struct CPU_State initial_cpu = {.pc=0x66c2, .a=0x35, .x=0x96, .y=0x19, .sp=0x92, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x66c2, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x66c3, .a=0x35, .x=0x96, .y=0x19, .sp=0x92, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x66c2, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x66c2, .value=0x00, .type=IO_READ},
        {.addr=0x66c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02E3) {
    const struct CPU_State initial_cpu = {.pc=0xfa00, .a=0x6d, .x=0xd7, .y=0x10, .sp=0x25, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xfa00, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xfa01, .a=0x6d, .x=0xd7, .y=0x10, .sp=0x25, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xfa00, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xfa00, .value=0x00, .type=IO_READ},
        {.addr=0xfa01, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02E4) {
    const struct CPU_State initial_cpu = {.pc=0x4df2, .a=0xee, .x=0x70, .y=0x59, .sp=0xce, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x4df2, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x4df3, .a=0xee, .x=0x70, .y=0x59, .sp=0xce, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x4df2, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x4df2, .value=0x00, .type=IO_READ},
        {.addr=0x4df3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02E5) {
    const struct CPU_State initial_cpu = {.pc=0x3d63, .a=0xa9, .x=0x5f, .y=0xb3, .sp=0x73, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x3d63, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x3d64, .a=0xa9, .x=0x5f, .y=0xb3, .sp=0x73, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x3d63, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x3d63, .value=0x00, .type=IO_READ},
        {.addr=0x3d64, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02E6) {
    const struct CPU_State initial_cpu = {.pc=0xae49, .a=0xbb, .x=0x2a, .y=0xdd, .sp=0x26, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xae49, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xae4a, .a=0xbb, .x=0x2a, .y=0xdd, .sp=0x26, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xae49, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xae49, .value=0x00, .type=IO_READ},
        {.addr=0xae4a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02E7) {
    const struct CPU_State initial_cpu = {.pc=0x5ada, .a=0x9b, .x=0x4a, .y=0xed, .sp=0xd1, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x5ada, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x5adb, .a=0x9b, .x=0x4a, .y=0xed, .sp=0xd1, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x5ada, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x5ada, .value=0x00, .type=IO_READ},
        {.addr=0x5adb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02E8) {
    const struct CPU_State initial_cpu = {.pc=0x4e60, .a=0x83, .x=0x84, .y=0xa9, .sp=0xe2, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x4e60, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x4e61, .a=0x83, .x=0x84, .y=0xa9, .sp=0xe2, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x4e60, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x4e60, .value=0x00, .type=IO_READ},
        {.addr=0x4e61, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x6680, .a=0xee, .x=0x7f, .y=0x70, .sp=0x37, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x6680, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x6681, .a=0xee, .x=0x7f, .y=0x70, .sp=0x37, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x6680, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x6680, .value=0x00, .type=IO_READ},
        {.addr=0x6681, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x8d01, .a=0xbd, .x=0xed, .y=0x7d, .sp=0x5b, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x8d01, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x8d02, .a=0xbd, .x=0xed, .y=0x7d, .sp=0x5b, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x8d01, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x8d01, .value=0x00, .type=IO_READ},
        {.addr=0x8d02, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02EB) {
    const struct CPU_State initial_cpu = {.pc=0xd9d1, .a=0xdc, .x=0x0a, .y=0xf3, .sp=0x3f, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xd9d1, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xd9d2, .a=0xdc, .x=0x0a, .y=0xf3, .sp=0x3f, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0xd9d1, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xd9d1, .value=0x00, .type=IO_READ},
        {.addr=0xd9d2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02EC) {
    const struct CPU_State initial_cpu = {.pc=0xaed0, .a=0x8c, .x=0x37, .y=0x38, .sp=0x7c, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xaed0, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xaed1, .a=0x8c, .x=0x37, .y=0x38, .sp=0x7c, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xaed0, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xaed0, .value=0x00, .type=IO_READ},
        {.addr=0xaed1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02ED) {
    const struct CPU_State initial_cpu = {.pc=0xc0b4, .a=0xa2, .x=0x1b, .y=0xcb, .sp=0xe8, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xc0b4, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xc0b5, .a=0xa2, .x=0x1b, .y=0xcb, .sp=0xe8, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xc0b4, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xc0b4, .value=0x00, .type=IO_READ},
        {.addr=0xc0b5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02EE) {
    const struct CPU_State initial_cpu = {.pc=0x3b70, .a=0xcb, .x=0xda, .y=0x1f, .sp=0x0c, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x3b70, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x3b71, .a=0xcb, .x=0xda, .y=0x1f, .sp=0x0c, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x3b70, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x3b70, .value=0x00, .type=IO_READ},
        {.addr=0x3b71, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02EF) {
    const struct CPU_State initial_cpu = {.pc=0x5060, .a=0x32, .x=0x07, .y=0x9e, .sp=0x5a, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x5060, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x5061, .a=0x32, .x=0x07, .y=0x9e, .sp=0x5a, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x5060, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x5060, .value=0x00, .type=IO_READ},
        {.addr=0x5061, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02F0) {
    const struct CPU_State initial_cpu = {.pc=0xdf4a, .a=0xbf, .x=0xcc, .y=0x7f, .sp=0xd9, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xdf4a, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xdf4b, .a=0xbf, .x=0xcc, .y=0x7f, .sp=0xd9, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0xdf4a, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xdf4a, .value=0x00, .type=IO_READ},
        {.addr=0xdf4b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x2c49, .a=0x13, .x=0x8a, .y=0x93, .sp=0x10, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x2c49, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x2c4a, .a=0x13, .x=0x8a, .y=0x93, .sp=0x10, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x2c49, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x2c49, .value=0x00, .type=IO_READ},
        {.addr=0x2c4a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02F2) {
    const struct CPU_State initial_cpu = {.pc=0xd12b, .a=0x4f, .x=0x1e, .y=0xfb, .sp=0xdf, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xd12b, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xd12c, .a=0x4f, .x=0x1e, .y=0xfb, .sp=0xdf, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xd12b, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xd12b, .value=0x00, .type=IO_READ},
        {.addr=0xd12c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02F3) {
    const struct CPU_State initial_cpu = {.pc=0x7b5a, .a=0xb7, .x=0xd0, .y=0xa5, .sp=0xd5, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x7b5a, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7b5b, .a=0xb7, .x=0xd0, .y=0xa5, .sp=0xd5, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x7b5a, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7b5a, .value=0x00, .type=IO_READ},
        {.addr=0x7b5b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02F4) {
    const struct CPU_State initial_cpu = {.pc=0x7c92, .a=0x41, .x=0x65, .y=0x3e, .sp=0xb3, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x7c92, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7c93, .a=0x41, .x=0x65, .y=0x3e, .sp=0xb3, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x7c92, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7c92, .value=0x00, .type=IO_READ},
        {.addr=0x7c93, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x527e, .a=0xee, .x=0x35, .y=0xe1, .sp=0xc9, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x527e, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x527f, .a=0xee, .x=0x35, .y=0xe1, .sp=0xc9, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x527e, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x527e, .value=0x00, .type=IO_READ},
        {.addr=0x527f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x243b, .a=0xa8, .x=0x3c, .y=0x58, .sp=0xe3, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x243b, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x243c, .a=0xa8, .x=0x3c, .y=0x58, .sp=0xe3, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x243b, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x243b, .value=0x00, .type=IO_READ},
        {.addr=0x243c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x1107, .a=0x10, .x=0x68, .y=0x5e, .sp=0xac, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x1107, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x1108, .a=0x10, .x=0x68, .y=0x5e, .sp=0xac, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x1107, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x1107, .value=0x00, .type=IO_READ},
        {.addr=0x1108, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02F8) {
    const struct CPU_State initial_cpu = {.pc=0x43fc, .a=0x3e, .x=0x1e, .y=0x25, .sp=0x74, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x43fc, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x43fd, .a=0x3e, .x=0x1e, .y=0x25, .sp=0x74, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x43fc, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x43fc, .value=0x00, .type=IO_READ},
        {.addr=0x43fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02F9) {
    const struct CPU_State initial_cpu = {.pc=0xe96d, .a=0x71, .x=0x56, .y=0xe6, .sp=0xb5, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xe96d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xe96e, .a=0x71, .x=0x56, .y=0xe6, .sp=0xb5, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xe96d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xe96d, .value=0x00, .type=IO_READ},
        {.addr=0xe96e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02FA) {
    const struct CPU_State initial_cpu = {.pc=0xad22, .a=0x8c, .x=0xd4, .y=0xd7, .sp=0xf8, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xad22, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xad23, .a=0x8c, .x=0xd4, .y=0xd7, .sp=0xf8, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0xad22, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xad22, .value=0x00, .type=IO_READ},
        {.addr=0xad23, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02FB) {
    const struct CPU_State initial_cpu = {.pc=0x642b, .a=0x16, .x=0x74, .y=0xe2, .sp=0x6b, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x642b, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x642c, .a=0x16, .x=0x74, .y=0xe2, .sp=0x6b, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x642b, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x642b, .value=0x00, .type=IO_READ},
        {.addr=0x642c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02FC) {
    const struct CPU_State initial_cpu = {.pc=0xe7d7, .a=0xa9, .x=0x3b, .y=0x81, .sp=0x52, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xe7d7, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xe7d8, .a=0xa9, .x=0x3b, .y=0x81, .sp=0x52, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xe7d7, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xe7d7, .value=0x00, .type=IO_READ},
        {.addr=0xe7d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02FD) {
    const struct CPU_State initial_cpu = {.pc=0x34d4, .a=0xf5, .x=0x38, .y=0x24, .sp=0xe0, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x34d4, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x34d5, .a=0xf5, .x=0x38, .y=0x24, .sp=0xe0, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x34d4, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x34d4, .value=0x00, .type=IO_READ},
        {.addr=0x34d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02FE) {
    const struct CPU_State initial_cpu = {.pc=0xed83, .a=0x94, .x=0x38, .y=0xa2, .sp=0x4d, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xed83, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xed84, .a=0x94, .x=0x38, .y=0xa2, .sp=0x4d, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xed83, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xed83, .value=0x00, .type=IO_READ},
        {.addr=0xed84, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x71a1, .a=0x2f, .x=0x08, .y=0xa6, .sp=0x4f, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x71a1, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x71a2, .a=0x2f, .x=0x08, .y=0xa6, .sp=0x4f, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x71a1, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x71a1, .value=0x00, .type=IO_READ},
        {.addr=0x71a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0300) {
    const struct CPU_State initial_cpu = {.pc=0xd37d, .a=0x97, .x=0xfe, .y=0xc3, .sp=0x4e, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xd37d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xd37e, .a=0x97, .x=0xfe, .y=0xc3, .sp=0x4e, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xd37d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xd37d, .value=0x00, .type=IO_READ},
        {.addr=0xd37e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0301) {
    const struct CPU_State initial_cpu = {.pc=0x3a8e, .a=0xfa, .x=0x19, .y=0x54, .sp=0x89, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x3a8e, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x3a8f, .a=0xfa, .x=0x19, .y=0x54, .sp=0x89, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x3a8e, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x3a8e, .value=0x00, .type=IO_READ},
        {.addr=0x3a8f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0302) {
    const struct CPU_State initial_cpu = {.pc=0x55c0, .a=0x0c, .x=0x0c, .y=0xa0, .sp=0xba, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x55c0, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x55c1, .a=0x0c, .x=0x0c, .y=0xa0, .sp=0xba, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x55c0, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x55c0, .value=0x00, .type=IO_READ},
        {.addr=0x55c1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0303) {
    const struct CPU_State initial_cpu = {.pc=0xe130, .a=0x91, .x=0xf3, .y=0xe3, .sp=0x8a, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xe130, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xe131, .a=0x91, .x=0xf3, .y=0xe3, .sp=0x8a, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0xe130, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xe130, .value=0x00, .type=IO_READ},
        {.addr=0xe131, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0304) {
    const struct CPU_State initial_cpu = {.pc=0x47e3, .a=0x20, .x=0xc4, .y=0xeb, .sp=0x30, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x47e3, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x47e4, .a=0x20, .x=0xc4, .y=0xeb, .sp=0x30, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x47e3, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x47e3, .value=0x00, .type=IO_READ},
        {.addr=0x47e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0305) {
    const struct CPU_State initial_cpu = {.pc=0xcc27, .a=0x95, .x=0x80, .y=0x8f, .sp=0xf8, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xcc27, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xcc28, .a=0x95, .x=0x80, .y=0x8f, .sp=0xf8, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0xcc27, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xcc27, .value=0x00, .type=IO_READ},
        {.addr=0xcc28, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0306) {
    const struct CPU_State initial_cpu = {.pc=0xb466, .a=0xe5, .x=0xb4, .y=0xf2, .sp=0xe3, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xb466, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xb467, .a=0xe5, .x=0xb4, .y=0xf2, .sp=0xe3, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xb466, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xb466, .value=0x00, .type=IO_READ},
        {.addr=0xb467, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0307) {
    const struct CPU_State initial_cpu = {.pc=0x624c, .a=0xf8, .x=0x3b, .y=0x5e, .sp=0xe4, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x624c, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x624d, .a=0xf8, .x=0x3b, .y=0x5e, .sp=0xe4, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x624c, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x624c, .value=0x00, .type=IO_READ},
        {.addr=0x624d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0308) {
    const struct CPU_State initial_cpu = {.pc=0x088d, .a=0xe7, .x=0x29, .y=0xa4, .sp=0xbe, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x088d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x088e, .a=0xe7, .x=0x29, .y=0xa4, .sp=0xbe, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x088d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x088d, .value=0x00, .type=IO_READ},
        {.addr=0x088e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0309) {
    const struct CPU_State initial_cpu = {.pc=0x650b, .a=0x85, .x=0xba, .y=0xdd, .sp=0x3f, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x650b, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x650c, .a=0x85, .x=0xba, .y=0xdd, .sp=0x3f, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x650b, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x650b, .value=0x00, .type=IO_READ},
        {.addr=0x650c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_030A) {
    const struct CPU_State initial_cpu = {.pc=0xddcf, .a=0x4a, .x=0x5c, .y=0xbd, .sp=0x12, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xddcf, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xddd0, .a=0x4a, .x=0x5c, .y=0xbd, .sp=0x12, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0xddcf, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xddcf, .value=0x00, .type=IO_READ},
        {.addr=0xddd0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_030B) {
    const struct CPU_State initial_cpu = {.pc=0xfa12, .a=0xc7, .x=0xd5, .y=0x71, .sp=0x25, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xfa12, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xfa13, .a=0xc7, .x=0xd5, .y=0x71, .sp=0x25, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xfa12, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xfa12, .value=0x00, .type=IO_READ},
        {.addr=0xfa13, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_030C) {
    const struct CPU_State initial_cpu = {.pc=0xd75b, .a=0x61, .x=0xea, .y=0xeb, .sp=0xe8, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xd75b, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xd75c, .a=0x61, .x=0xea, .y=0xeb, .sp=0xe8, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0xd75b, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xd75b, .value=0x00, .type=IO_READ},
        {.addr=0xd75c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_030D) {
    const struct CPU_State initial_cpu = {.pc=0x685e, .a=0xb3, .x=0xde, .y=0x6f, .sp=0x85, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x685e, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x685f, .a=0xb3, .x=0xde, .y=0x6f, .sp=0x85, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x685e, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x685e, .value=0x00, .type=IO_READ},
        {.addr=0x685f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_030E) {
    const struct CPU_State initial_cpu = {.pc=0x023d, .a=0xad, .x=0xf1, .y=0x0e, .sp=0xa8, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x023d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x023e, .a=0xad, .x=0xf1, .y=0x0e, .sp=0xa8, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x023d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x023d, .value=0x00, .type=IO_READ},
        {.addr=0x023e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_030F) {
    const struct CPU_State initial_cpu = {.pc=0xa953, .a=0x24, .x=0x33, .y=0xc3, .sp=0xf1, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xa953, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xa954, .a=0x24, .x=0x33, .y=0xc3, .sp=0xf1, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0xa953, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xa953, .value=0x00, .type=IO_READ},
        {.addr=0xa954, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0310) {
    const struct CPU_State initial_cpu = {.pc=0x819e, .a=0xfb, .x=0xee, .y=0x7a, .sp=0x5b, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x819e, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x819f, .a=0xfb, .x=0xee, .y=0x7a, .sp=0x5b, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x819e, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x819e, .value=0x00, .type=IO_READ},
        {.addr=0x819f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0311) {
    const struct CPU_State initial_cpu = {.pc=0x57df, .a=0xd3, .x=0x6e, .y=0xc4, .sp=0x10, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x57df, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x57e0, .a=0xd3, .x=0x6e, .y=0xc4, .sp=0x10, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x57df, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x57df, .value=0x00, .type=IO_READ},
        {.addr=0x57e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0312) {
    const struct CPU_State initial_cpu = {.pc=0x2d07, .a=0x30, .x=0xf2, .y=0xac, .sp=0x60, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x2d07, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x2d08, .a=0x30, .x=0xf2, .y=0xac, .sp=0x60, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x2d07, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x2d07, .value=0x00, .type=IO_READ},
        {.addr=0x2d08, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0313) {
    const struct CPU_State initial_cpu = {.pc=0x1858, .a=0x8d, .x=0xcc, .y=0x1a, .sp=0x60, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x1858, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x1859, .a=0x8d, .x=0xcc, .y=0x1a, .sp=0x60, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x1858, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x1858, .value=0x00, .type=IO_READ},
        {.addr=0x1859, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0314) {
    const struct CPU_State initial_cpu = {.pc=0xc7c1, .a=0x01, .x=0x7b, .y=0x9a, .sp=0xf4, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xc7c1, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xc7c2, .a=0x01, .x=0x7b, .y=0x9a, .sp=0xf4, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0xc7c1, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xc7c1, .value=0x00, .type=IO_READ},
        {.addr=0xc7c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0315) {
    const struct CPU_State initial_cpu = {.pc=0xb1d2, .a=0xe1, .x=0xe1, .y=0x21, .sp=0x5c, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xb1d2, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xb1d3, .a=0xe1, .x=0xe1, .y=0x21, .sp=0x5c, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0xb1d2, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xb1d2, .value=0x00, .type=IO_READ},
        {.addr=0xb1d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0316) {
    const struct CPU_State initial_cpu = {.pc=0x19e2, .a=0xd4, .x=0x88, .y=0x3f, .sp=0xef, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x19e2, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x19e3, .a=0xd4, .x=0x88, .y=0x3f, .sp=0xef, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x19e2, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x19e2, .value=0x00, .type=IO_READ},
        {.addr=0x19e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0317) {
    const struct CPU_State initial_cpu = {.pc=0xd8ed, .a=0xa7, .x=0xbd, .y=0x6c, .sp=0xe8, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xd8ed, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xd8ee, .a=0xa7, .x=0xbd, .y=0x6c, .sp=0xe8, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xd8ed, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xd8ed, .value=0x00, .type=IO_READ},
        {.addr=0xd8ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0318) {
    const struct CPU_State initial_cpu = {.pc=0xa5b0, .a=0xce, .x=0x8e, .y=0xa3, .sp=0x82, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xa5b0, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xa5b1, .a=0xce, .x=0x8e, .y=0xa3, .sp=0x82, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0xa5b0, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xa5b0, .value=0x00, .type=IO_READ},
        {.addr=0xa5b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0319) {
    const struct CPU_State initial_cpu = {.pc=0x2672, .a=0x74, .x=0x78, .y=0x86, .sp=0xf0, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x2672, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x2673, .a=0x74, .x=0x78, .y=0x86, .sp=0xf0, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x2672, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x2672, .value=0x00, .type=IO_READ},
        {.addr=0x2673, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_031A) {
    const struct CPU_State initial_cpu = {.pc=0x0092, .a=0x31, .x=0xa9, .y=0xd3, .sp=0xae, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x0092, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0093, .a=0x31, .x=0xa9, .y=0xd3, .sp=0xae, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x0092, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x0092, .value=0x00, .type=IO_READ},
        {.addr=0x0093, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_031B) {
    const struct CPU_State initial_cpu = {.pc=0x214a, .a=0xf2, .x=0x37, .y=0x7a, .sp=0x64, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x214a, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x214b, .a=0xf2, .x=0x37, .y=0x7a, .sp=0x64, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x214a, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x214a, .value=0x00, .type=IO_READ},
        {.addr=0x214b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_031C) {
    const struct CPU_State initial_cpu = {.pc=0xdee5, .a=0x3d, .x=0x81, .y=0x7b, .sp=0x6a, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xdee5, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xdee6, .a=0x3d, .x=0x81, .y=0x7b, .sp=0x6a, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xdee5, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xdee5, .value=0x00, .type=IO_READ},
        {.addr=0xdee6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_031D) {
    const struct CPU_State initial_cpu = {.pc=0x91d2, .a=0x2b, .x=0x8b, .y=0x2a, .sp=0x48, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x91d2, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x91d3, .a=0x2b, .x=0x8b, .y=0x2a, .sp=0x48, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x91d2, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x91d2, .value=0x00, .type=IO_READ},
        {.addr=0x91d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_031E) {
    const struct CPU_State initial_cpu = {.pc=0x2607, .a=0xf4, .x=0x3b, .y=0x38, .sp=0x7c, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x2607, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x2608, .a=0xf4, .x=0x3b, .y=0x38, .sp=0x7c, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x2607, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x2607, .value=0x00, .type=IO_READ},
        {.addr=0x2608, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_031F) {
    const struct CPU_State initial_cpu = {.pc=0x9490, .a=0x4c, .x=0x71, .y=0xaa, .sp=0x7a, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x9490, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x9491, .a=0x4c, .x=0x71, .y=0xaa, .sp=0x7a, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x9490, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x9490, .value=0x00, .type=IO_READ},
        {.addr=0x9491, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0320) {
    const struct CPU_State initial_cpu = {.pc=0xefa7, .a=0x6a, .x=0x2d, .y=0x1b, .sp=0xa4, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xefa7, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xefa8, .a=0x6a, .x=0x2d, .y=0x1b, .sp=0xa4, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xefa7, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xefa7, .value=0x00, .type=IO_READ},
        {.addr=0xefa8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0321) {
    const struct CPU_State initial_cpu = {.pc=0xc3ff, .a=0x1f, .x=0x75, .y=0x60, .sp=0xe5, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xc3ff, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xc400, .a=0x1f, .x=0x75, .y=0x60, .sp=0xe5, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0xc3ff, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xc3ff, .value=0x00, .type=IO_READ},
        {.addr=0xc400, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0322) {
    const struct CPU_State initial_cpu = {.pc=0xb701, .a=0x9e, .x=0xc6, .y=0x73, .sp=0x15, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xb701, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xb702, .a=0x9e, .x=0xc6, .y=0x73, .sp=0x15, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xb701, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xb701, .value=0x00, .type=IO_READ},
        {.addr=0xb702, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0323) {
    const struct CPU_State initial_cpu = {.pc=0xb248, .a=0xf6, .x=0xdd, .y=0x49, .sp=0xcc, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xb248, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xb249, .a=0xf6, .x=0xdd, .y=0x49, .sp=0xcc, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xb248, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xb248, .value=0x00, .type=IO_READ},
        {.addr=0xb249, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0324) {
    const struct CPU_State initial_cpu = {.pc=0xbf4d, .a=0x19, .x=0x6a, .y=0xfc, .sp=0x1a, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xbf4d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xbf4e, .a=0x19, .x=0x6a, .y=0xfc, .sp=0x1a, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0xbf4d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xbf4d, .value=0x00, .type=IO_READ},
        {.addr=0xbf4e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0325) {
    const struct CPU_State initial_cpu = {.pc=0x88fd, .a=0xbb, .x=0x10, .y=0xb1, .sp=0xdb, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x88fd, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x88fe, .a=0xbb, .x=0x10, .y=0xb1, .sp=0xdb, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x88fd, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x88fd, .value=0x00, .type=IO_READ},
        {.addr=0x88fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0326) {
    const struct CPU_State initial_cpu = {.pc=0x1038, .a=0x81, .x=0x94, .y=0xfa, .sp=0xa8, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x1038, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x1039, .a=0x81, .x=0x94, .y=0xfa, .sp=0xa8, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x1038, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x1038, .value=0x00, .type=IO_READ},
        {.addr=0x1039, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0327) {
    const struct CPU_State initial_cpu = {.pc=0x9def, .a=0x8b, .x=0xc4, .y=0x58, .sp=0x2a, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x9def, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x9df0, .a=0x8b, .x=0xc4, .y=0x58, .sp=0x2a, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x9def, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x9def, .value=0x00, .type=IO_READ},
        {.addr=0x9df0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0328) {
    const struct CPU_State initial_cpu = {.pc=0x4ac5, .a=0x8f, .x=0x42, .y=0xe1, .sp=0xeb, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x4ac5, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x4ac6, .a=0x8f, .x=0x42, .y=0xe1, .sp=0xeb, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x4ac5, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x4ac5, .value=0x00, .type=IO_READ},
        {.addr=0x4ac6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0329) {
    const struct CPU_State initial_cpu = {.pc=0x0af4, .a=0xfd, .x=0xc2, .y=0x3f, .sp=0x13, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x0af4, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0af5, .a=0xfd, .x=0xc2, .y=0x3f, .sp=0x13, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x0af4, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x0af4, .value=0x00, .type=IO_READ},
        {.addr=0x0af5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_032A) {
    const struct CPU_State initial_cpu = {.pc=0x249d, .a=0x31, .x=0x33, .y=0xc8, .sp=0xd1, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x249d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x249e, .a=0x31, .x=0x33, .y=0xc8, .sp=0xd1, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x249d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x249d, .value=0x00, .type=IO_READ},
        {.addr=0x249e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_032B) {
    const struct CPU_State initial_cpu = {.pc=0x5ebf, .a=0x3c, .x=0x6c, .y=0x79, .sp=0xe6, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x5ebf, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x5ec0, .a=0x3c, .x=0x6c, .y=0x79, .sp=0xe6, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x5ebf, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x5ebf, .value=0x00, .type=IO_READ},
        {.addr=0x5ec0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_032C) {
    const struct CPU_State initial_cpu = {.pc=0x407e, .a=0x69, .x=0x3b, .y=0x6e, .sp=0x8c, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x407e, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x407f, .a=0x69, .x=0x3b, .y=0x6e, .sp=0x8c, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x407e, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x407e, .value=0x00, .type=IO_READ},
        {.addr=0x407f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_032D) {
    const struct CPU_State initial_cpu = {.pc=0x2977, .a=0x38, .x=0x25, .y=0x88, .sp=0xef, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x2977, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x2978, .a=0x38, .x=0x25, .y=0x88, .sp=0xef, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x2977, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x2977, .value=0x00, .type=IO_READ},
        {.addr=0x2978, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_032E) {
    const struct CPU_State initial_cpu = {.pc=0x7b50, .a=0x27, .x=0x59, .y=0x9d, .sp=0xd1, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x7b50, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7b51, .a=0x27, .x=0x59, .y=0x9d, .sp=0xd1, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x7b50, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7b50, .value=0x00, .type=IO_READ},
        {.addr=0x7b51, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_032F) {
    const struct CPU_State initial_cpu = {.pc=0x2ecf, .a=0x2a, .x=0x48, .y=0x37, .sp=0x65, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x2ecf, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x2ed0, .a=0x2a, .x=0x48, .y=0x37, .sp=0x65, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x2ecf, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x2ecf, .value=0x00, .type=IO_READ},
        {.addr=0x2ed0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0330) {
    const struct CPU_State initial_cpu = {.pc=0x2d32, .a=0x13, .x=0xfe, .y=0x86, .sp=0x0d, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x2d32, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x2d33, .a=0x13, .x=0xfe, .y=0x86, .sp=0x0d, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x2d32, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x2d32, .value=0x00, .type=IO_READ},
        {.addr=0x2d33, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0331) {
    const struct CPU_State initial_cpu = {.pc=0x0bf9, .a=0xa0, .x=0x5c, .y=0x6e, .sp=0x35, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x0bf9, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0bfa, .a=0xa0, .x=0x5c, .y=0x6e, .sp=0x35, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x0bf9, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x0bf9, .value=0x00, .type=IO_READ},
        {.addr=0x0bfa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0332) {
    const struct CPU_State initial_cpu = {.pc=0x55a3, .a=0xb7, .x=0x0e, .y=0x38, .sp=0x80, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x55a3, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x55a4, .a=0xb7, .x=0x0e, .y=0x38, .sp=0x80, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x55a3, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x55a3, .value=0x00, .type=IO_READ},
        {.addr=0x55a4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0333) {
    const struct CPU_State initial_cpu = {.pc=0xdd9e, .a=0x8c, .x=0xa2, .y=0x51, .sp=0xc5, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xdd9e, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xdd9f, .a=0x8c, .x=0xa2, .y=0x51, .sp=0xc5, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0xdd9e, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xdd9e, .value=0x00, .type=IO_READ},
        {.addr=0xdd9f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0334) {
    const struct CPU_State initial_cpu = {.pc=0x4357, .a=0x29, .x=0xad, .y=0xe8, .sp=0x04, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x4357, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x4358, .a=0x29, .x=0xad, .y=0xe8, .sp=0x04, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x4357, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x4357, .value=0x00, .type=IO_READ},
        {.addr=0x4358, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0335) {
    const struct CPU_State initial_cpu = {.pc=0xf239, .a=0x07, .x=0x73, .y=0x3a, .sp=0xff, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xf239, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xf23a, .a=0x07, .x=0x73, .y=0x3a, .sp=0xff, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0xf239, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xf239, .value=0x00, .type=IO_READ},
        {.addr=0xf23a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0336) {
    const struct CPU_State initial_cpu = {.pc=0x4352, .a=0x9b, .x=0xc7, .y=0x53, .sp=0xe2, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x4352, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x4353, .a=0x9b, .x=0xc7, .y=0x53, .sp=0xe2, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x4352, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x4352, .value=0x00, .type=IO_READ},
        {.addr=0x4353, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0337) {
    const struct CPU_State initial_cpu = {.pc=0x4462, .a=0xf4, .x=0x8b, .y=0x1a, .sp=0x4f, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x4462, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x4463, .a=0xf4, .x=0x8b, .y=0x1a, .sp=0x4f, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x4462, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x4462, .value=0x00, .type=IO_READ},
        {.addr=0x4463, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0338) {
    const struct CPU_State initial_cpu = {.pc=0xeb7c, .a=0xa1, .x=0xc2, .y=0x5f, .sp=0xdb, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xeb7c, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xeb7d, .a=0xa1, .x=0xc2, .y=0x5f, .sp=0xdb, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xeb7c, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xeb7c, .value=0x00, .type=IO_READ},
        {.addr=0xeb7d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0339) {
    const struct CPU_State initial_cpu = {.pc=0x9cef, .a=0x59, .x=0xf1, .y=0xc9, .sp=0x4d, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x9cef, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x9cf0, .a=0x59, .x=0xf1, .y=0xc9, .sp=0x4d, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x9cef, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x9cef, .value=0x00, .type=IO_READ},
        {.addr=0x9cf0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_033A) {
    const struct CPU_State initial_cpu = {.pc=0xa63e, .a=0x38, .x=0xa8, .y=0x4a, .sp=0x1e, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xa63e, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xa63f, .a=0x38, .x=0xa8, .y=0x4a, .sp=0x1e, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xa63e, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xa63e, .value=0x00, .type=IO_READ},
        {.addr=0xa63f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_033B) {
    const struct CPU_State initial_cpu = {.pc=0xd634, .a=0xc2, .x=0xf2, .y=0xb7, .sp=0xc0, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xd634, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xd635, .a=0xc2, .x=0xf2, .y=0xb7, .sp=0xc0, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xd634, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xd634, .value=0x00, .type=IO_READ},
        {.addr=0xd635, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_033C) {
    const struct CPU_State initial_cpu = {.pc=0x1f3d, .a=0x87, .x=0xaf, .y=0x91, .sp=0x61, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x1f3d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x1f3e, .a=0x87, .x=0xaf, .y=0x91, .sp=0x61, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x1f3d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x1f3d, .value=0x00, .type=IO_READ},
        {.addr=0x1f3e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_033D) {
    const struct CPU_State initial_cpu = {.pc=0xf977, .a=0x0a, .x=0x40, .y=0xf1, .sp=0xcb, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xf977, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xf978, .a=0x0a, .x=0x40, .y=0xf1, .sp=0xcb, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0xf977, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xf977, .value=0x00, .type=IO_READ},
        {.addr=0xf978, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_033E) {
    const struct CPU_State initial_cpu = {.pc=0xede6, .a=0xeb, .x=0x73, .y=0xf9, .sp=0xa5, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xede6, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xede7, .a=0xeb, .x=0x73, .y=0xf9, .sp=0xa5, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xede6, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xede6, .value=0x00, .type=IO_READ},
        {.addr=0xede7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_033F) {
    const struct CPU_State initial_cpu = {.pc=0xeea3, .a=0xd7, .x=0x8b, .y=0xe5, .sp=0x51, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xeea3, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xeea4, .a=0xd7, .x=0x8b, .y=0xe5, .sp=0x51, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0xeea3, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xeea3, .value=0x00, .type=IO_READ},
        {.addr=0xeea4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0340) {
    const struct CPU_State initial_cpu = {.pc=0x7ea6, .a=0x06, .x=0xfe, .y=0x99, .sp=0xb8, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x7ea6, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7ea7, .a=0x06, .x=0xfe, .y=0x99, .sp=0xb8, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x7ea6, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7ea6, .value=0x00, .type=IO_READ},
        {.addr=0x7ea7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0341) {
    const struct CPU_State initial_cpu = {.pc=0xc0c6, .a=0x4d, .x=0xb5, .y=0x1d, .sp=0x9c, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xc0c6, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xc0c7, .a=0x4d, .x=0xb5, .y=0x1d, .sp=0x9c, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xc0c6, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xc0c6, .value=0x00, .type=IO_READ},
        {.addr=0xc0c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0342) {
    const struct CPU_State initial_cpu = {.pc=0x3ca3, .a=0xcf, .x=0xaf, .y=0x1c, .sp=0xa1, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x3ca3, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x3ca4, .a=0xcf, .x=0xaf, .y=0x1c, .sp=0xa1, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x3ca3, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x3ca3, .value=0x00, .type=IO_READ},
        {.addr=0x3ca4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0343) {
    const struct CPU_State initial_cpu = {.pc=0x4270, .a=0x0f, .x=0x60, .y=0xc5, .sp=0x70, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x4270, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x4271, .a=0x0f, .x=0x60, .y=0xc5, .sp=0x70, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x4270, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x4270, .value=0x00, .type=IO_READ},
        {.addr=0x4271, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0344) {
    const struct CPU_State initial_cpu = {.pc=0x00d4, .a=0xa4, .x=0xc3, .y=0x6d, .sp=0x27, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x00d4, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x00d5, .a=0xa4, .x=0xc3, .y=0x6d, .sp=0x27, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x00d4, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x00d4, .value=0x00, .type=IO_READ},
        {.addr=0x00d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0345) {
    const struct CPU_State initial_cpu = {.pc=0x7f44, .a=0x75, .x=0x22, .y=0x49, .sp=0xaa, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x7f44, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7f45, .a=0x75, .x=0x22, .y=0x49, .sp=0xaa, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x7f44, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7f44, .value=0x00, .type=IO_READ},
        {.addr=0x7f45, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0346) {
    const struct CPU_State initial_cpu = {.pc=0x1c08, .a=0xfe, .x=0x82, .y=0x43, .sp=0x3e, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x1c08, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x1c09, .a=0xfe, .x=0x82, .y=0x43, .sp=0x3e, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x1c08, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x1c08, .value=0x00, .type=IO_READ},
        {.addr=0x1c09, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0347) {
    const struct CPU_State initial_cpu = {.pc=0x15aa, .a=0x8c, .x=0x24, .y=0x16, .sp=0x2b, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x15aa, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x15ab, .a=0x8c, .x=0x24, .y=0x16, .sp=0x2b, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x15aa, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x15aa, .value=0x00, .type=IO_READ},
        {.addr=0x15ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0348) {
    const struct CPU_State initial_cpu = {.pc=0x43a4, .a=0xcc, .x=0xf3, .y=0x24, .sp=0x46, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x43a4, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x43a5, .a=0xcc, .x=0xf3, .y=0x24, .sp=0x46, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x43a4, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x43a4, .value=0x00, .type=IO_READ},
        {.addr=0x43a5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0349) {
    const struct CPU_State initial_cpu = {.pc=0x7dae, .a=0x5a, .x=0x0a, .y=0xd8, .sp=0xbb, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x7dae, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7daf, .a=0x5a, .x=0x0a, .y=0xd8, .sp=0xbb, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x7dae, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7dae, .value=0x00, .type=IO_READ},
        {.addr=0x7daf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_034A) {
    const struct CPU_State initial_cpu = {.pc=0xc577, .a=0x18, .x=0xf6, .y=0x17, .sp=0x4a, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xc577, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xc578, .a=0x18, .x=0xf6, .y=0x17, .sp=0x4a, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0xc577, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xc577, .value=0x00, .type=IO_READ},
        {.addr=0xc578, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_034B) {
    const struct CPU_State initial_cpu = {.pc=0x372a, .a=0x1d, .x=0xdb, .y=0x57, .sp=0xb3, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x372a, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x372b, .a=0x1d, .x=0xdb, .y=0x57, .sp=0xb3, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x372a, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x372a, .value=0x00, .type=IO_READ},
        {.addr=0x372b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_034C) {
    const struct CPU_State initial_cpu = {.pc=0x21f9, .a=0x03, .x=0x23, .y=0xf1, .sp=0x3d, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x21f9, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x21fa, .a=0x03, .x=0x23, .y=0xf1, .sp=0x3d, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x21f9, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x21f9, .value=0x00, .type=IO_READ},
        {.addr=0x21fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_034D) {
    const struct CPU_State initial_cpu = {.pc=0x1ce6, .a=0x0a, .x=0xec, .y=0x3c, .sp=0x96, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x1ce6, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x1ce7, .a=0x0a, .x=0xec, .y=0x3c, .sp=0x96, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x1ce6, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x1ce6, .value=0x00, .type=IO_READ},
        {.addr=0x1ce7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_034E) {
    const struct CPU_State initial_cpu = {.pc=0xca22, .a=0x72, .x=0x1e, .y=0x3b, .sp=0x83, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xca22, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xca23, .a=0x72, .x=0x1e, .y=0x3b, .sp=0x83, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xca22, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xca22, .value=0x00, .type=IO_READ},
        {.addr=0xca23, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_034F) {
    const struct CPU_State initial_cpu = {.pc=0x3a03, .a=0x47, .x=0x3f, .y=0xf4, .sp=0x37, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x3a03, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x3a04, .a=0x47, .x=0x3f, .y=0xf4, .sp=0x37, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x3a03, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x3a03, .value=0x00, .type=IO_READ},
        {.addr=0x3a04, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0350) {
    const struct CPU_State initial_cpu = {.pc=0xf44f, .a=0xbe, .x=0x45, .y=0xfb, .sp=0x52, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xf44f, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xf450, .a=0xbe, .x=0x45, .y=0xfb, .sp=0x52, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xf44f, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xf44f, .value=0x00, .type=IO_READ},
        {.addr=0xf450, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0351) {
    const struct CPU_State initial_cpu = {.pc=0xe1e9, .a=0x37, .x=0x85, .y=0x93, .sp=0x7a, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xe1e9, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xe1ea, .a=0x37, .x=0x85, .y=0x93, .sp=0x7a, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0xe1e9, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xe1e9, .value=0x00, .type=IO_READ},
        {.addr=0xe1ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0352) {
    const struct CPU_State initial_cpu = {.pc=0x5bbb, .a=0x10, .x=0x58, .y=0x95, .sp=0xcd, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x5bbb, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x5bbc, .a=0x10, .x=0x58, .y=0x95, .sp=0xcd, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x5bbb, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x5bbb, .value=0x00, .type=IO_READ},
        {.addr=0x5bbc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0353) {
    const struct CPU_State initial_cpu = {.pc=0x0847, .a=0x24, .x=0xf7, .y=0x75, .sp=0xc7, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x0847, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0848, .a=0x24, .x=0xf7, .y=0x75, .sp=0xc7, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x0847, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x0847, .value=0x00, .type=IO_READ},
        {.addr=0x0848, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0354) {
    const struct CPU_State initial_cpu = {.pc=0x8dd9, .a=0x32, .x=0x0c, .y=0xe9, .sp=0x24, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x8dd9, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x8dda, .a=0x32, .x=0x0c, .y=0xe9, .sp=0x24, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x8dd9, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x8dd9, .value=0x00, .type=IO_READ},
        {.addr=0x8dda, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0355) {
    const struct CPU_State initial_cpu = {.pc=0xd0b0, .a=0x8c, .x=0x1e, .y=0x6f, .sp=0x65, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xd0b0, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xd0b1, .a=0x8c, .x=0x1e, .y=0x6f, .sp=0x65, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0xd0b0, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xd0b0, .value=0x00, .type=IO_READ},
        {.addr=0xd0b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0356) {
    const struct CPU_State initial_cpu = {.pc=0xb981, .a=0x34, .x=0x6a, .y=0xdb, .sp=0x7b, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xb981, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xb982, .a=0x34, .x=0x6a, .y=0xdb, .sp=0x7b, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xb981, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xb981, .value=0x00, .type=IO_READ},
        {.addr=0xb982, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0357) {
    const struct CPU_State initial_cpu = {.pc=0xe5e2, .a=0x22, .x=0x82, .y=0x78, .sp=0x53, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xe5e2, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xe5e3, .a=0x22, .x=0x82, .y=0x78, .sp=0x53, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0xe5e2, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xe5e2, .value=0x00, .type=IO_READ},
        {.addr=0xe5e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0358) {
    const struct CPU_State initial_cpu = {.pc=0x6e14, .a=0x1a, .x=0x44, .y=0xb0, .sp=0x93, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x6e14, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x6e15, .a=0x1a, .x=0x44, .y=0xb0, .sp=0x93, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x6e14, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x6e14, .value=0x00, .type=IO_READ},
        {.addr=0x6e15, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0359) {
    const struct CPU_State initial_cpu = {.pc=0x3169, .a=0x29, .x=0xca, .y=0x3f, .sp=0xaa, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x3169, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x316a, .a=0x29, .x=0xca, .y=0x3f, .sp=0xaa, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x3169, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x3169, .value=0x00, .type=IO_READ},
        {.addr=0x316a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_035A) {
    const struct CPU_State initial_cpu = {.pc=0xd25f, .a=0x39, .x=0x2d, .y=0xe3, .sp=0xd8, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xd25f, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xd260, .a=0x39, .x=0x2d, .y=0xe3, .sp=0xd8, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xd25f, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xd25f, .value=0x00, .type=IO_READ},
        {.addr=0xd260, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_035B) {
    const struct CPU_State initial_cpu = {.pc=0xdf3f, .a=0x0f, .x=0xbc, .y=0xcf, .sp=0x0a, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xdf3f, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xdf40, .a=0x0f, .x=0xbc, .y=0xcf, .sp=0x0a, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0xdf3f, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xdf3f, .value=0x00, .type=IO_READ},
        {.addr=0xdf40, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_035C) {
    const struct CPU_State initial_cpu = {.pc=0x8ad4, .a=0xc2, .x=0x48, .y=0x38, .sp=0x0b, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x8ad4, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x8ad5, .a=0xc2, .x=0x48, .y=0x38, .sp=0x0b, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x8ad4, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x8ad4, .value=0x00, .type=IO_READ},
        {.addr=0x8ad5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_035D) {
    const struct CPU_State initial_cpu = {.pc=0xa215, .a=0x87, .x=0x81, .y=0xda, .sp=0x60, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xa215, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xa216, .a=0x87, .x=0x81, .y=0xda, .sp=0x60, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xa215, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xa215, .value=0x00, .type=IO_READ},
        {.addr=0xa216, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_035E) {
    const struct CPU_State initial_cpu = {.pc=0x19b4, .a=0x8d, .x=0x2e, .y=0x13, .sp=0x4d, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x19b4, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x19b5, .a=0x8d, .x=0x2e, .y=0x13, .sp=0x4d, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x19b4, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x19b4, .value=0x00, .type=IO_READ},
        {.addr=0x19b5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_035F) {
    const struct CPU_State initial_cpu = {.pc=0x99d2, .a=0xd9, .x=0xa5, .y=0x93, .sp=0x7d, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x99d2, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x99d3, .a=0xd9, .x=0xa5, .y=0x93, .sp=0x7d, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x99d2, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x99d2, .value=0x00, .type=IO_READ},
        {.addr=0x99d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0360) {
    const struct CPU_State initial_cpu = {.pc=0x84dd, .a=0x12, .x=0xfd, .y=0xd5, .sp=0x09, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x84dd, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x84de, .a=0x12, .x=0xfd, .y=0xd5, .sp=0x09, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x84dd, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x84dd, .value=0x00, .type=IO_READ},
        {.addr=0x84de, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0361) {
    const struct CPU_State initial_cpu = {.pc=0x4a3e, .a=0x0c, .x=0x43, .y=0x8a, .sp=0x1d, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x4a3e, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x4a3f, .a=0x0c, .x=0x43, .y=0x8a, .sp=0x1d, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x4a3e, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x4a3e, .value=0x00, .type=IO_READ},
        {.addr=0x4a3f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0362) {
    const struct CPU_State initial_cpu = {.pc=0xad06, .a=0xb6, .x=0x2a, .y=0x15, .sp=0xac, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xad06, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xad07, .a=0xb6, .x=0x2a, .y=0x15, .sp=0xac, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xad06, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xad06, .value=0x00, .type=IO_READ},
        {.addr=0xad07, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0363) {
    const struct CPU_State initial_cpu = {.pc=0x6a19, .a=0x3c, .x=0xcc, .y=0xf2, .sp=0x45, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x6a19, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x6a1a, .a=0x3c, .x=0xcc, .y=0xf2, .sp=0x45, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x6a19, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x6a19, .value=0x00, .type=IO_READ},
        {.addr=0x6a1a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0364) {
    const struct CPU_State initial_cpu = {.pc=0xecae, .a=0x2d, .x=0x76, .y=0x62, .sp=0x75, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xecae, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xecaf, .a=0x2d, .x=0x76, .y=0x62, .sp=0x75, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0xecae, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xecae, .value=0x00, .type=IO_READ},
        {.addr=0xecaf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0365) {
    const struct CPU_State initial_cpu = {.pc=0x7689, .a=0x04, .x=0xd0, .y=0x95, .sp=0x6b, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x7689, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x768a, .a=0x04, .x=0xd0, .y=0x95, .sp=0x6b, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x7689, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7689, .value=0x00, .type=IO_READ},
        {.addr=0x768a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0366) {
    const struct CPU_State initial_cpu = {.pc=0x62b3, .a=0x76, .x=0x23, .y=0xe3, .sp=0x92, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x62b3, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x62b4, .a=0x76, .x=0x23, .y=0xe3, .sp=0x92, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x62b3, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x62b3, .value=0x00, .type=IO_READ},
        {.addr=0x62b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0367) {
    const struct CPU_State initial_cpu = {.pc=0x08b1, .a=0x2c, .x=0x3b, .y=0xdc, .sp=0xf9, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x08b1, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x08b2, .a=0x2c, .x=0x3b, .y=0xdc, .sp=0xf9, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x08b1, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x08b1, .value=0x00, .type=IO_READ},
        {.addr=0x08b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0368) {
    const struct CPU_State initial_cpu = {.pc=0x8071, .a=0x3f, .x=0xe2, .y=0x84, .sp=0x04, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x8071, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x8072, .a=0x3f, .x=0xe2, .y=0x84, .sp=0x04, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x8071, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x8071, .value=0x00, .type=IO_READ},
        {.addr=0x8072, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0369) {
    const struct CPU_State initial_cpu = {.pc=0xcc42, .a=0x0c, .x=0x5a, .y=0x05, .sp=0x97, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0xcc42, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xcc43, .a=0x0c, .x=0x5a, .y=0x05, .sp=0x97, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xcc42, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xcc42, .value=0x00, .type=IO_READ},
        {.addr=0xcc43, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_036A) {
    const struct CPU_State initial_cpu = {.pc=0xf604, .a=0x89, .x=0x4b, .y=0xfc, .sp=0x36, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xf604, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xf605, .a=0x89, .x=0x4b, .y=0xfc, .sp=0x36, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0xf604, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xf604, .value=0x00, .type=IO_READ},
        {.addr=0xf605, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_036B) {
    const struct CPU_State initial_cpu = {.pc=0xca06, .a=0x0f, .x=0x2e, .y=0x33, .sp=0x37, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xca06, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xca07, .a=0x0f, .x=0x2e, .y=0x33, .sp=0x37, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xca06, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xca06, .value=0x00, .type=IO_READ},
        {.addr=0xca07, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_036C) {
    const struct CPU_State initial_cpu = {.pc=0x88b9, .a=0xeb, .x=0xdc, .y=0xb6, .sp=0x74, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x88b9, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x88ba, .a=0xeb, .x=0xdc, .y=0xb6, .sp=0x74, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x88b9, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x88b9, .value=0x00, .type=IO_READ},
        {.addr=0x88ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_036D) {
    const struct CPU_State initial_cpu = {.pc=0x1f25, .a=0x2a, .x=0x17, .y=0x33, .sp=0x96, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x1f25, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x1f26, .a=0x2a, .x=0x17, .y=0x33, .sp=0x96, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x1f25, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x1f25, .value=0x00, .type=IO_READ},
        {.addr=0x1f26, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_036E) {
    const struct CPU_State initial_cpu = {.pc=0x744d, .a=0x51, .x=0xca, .y=0x7a, .sp=0xca, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x744d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x744e, .a=0x51, .x=0xca, .y=0x7a, .sp=0xca, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x744d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x744d, .value=0x00, .type=IO_READ},
        {.addr=0x744e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_036F) {
    const struct CPU_State initial_cpu = {.pc=0x0e0a, .a=0xbb, .x=0xcd, .y=0x99, .sp=0xdc, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x0e0a, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0e0b, .a=0xbb, .x=0xcd, .y=0x99, .sp=0xdc, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x0e0a, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x0e0a, .value=0x00, .type=IO_READ},
        {.addr=0x0e0b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0370) {
    const struct CPU_State initial_cpu = {.pc=0x95ab, .a=0x2a, .x=0xa6, .y=0x55, .sp=0xee, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x95ab, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x95ac, .a=0x2a, .x=0xa6, .y=0x55, .sp=0xee, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x95ab, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x95ab, .value=0x00, .type=IO_READ},
        {.addr=0x95ac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0371) {
    const struct CPU_State initial_cpu = {.pc=0x88d2, .a=0xf7, .x=0x8e, .y=0xf8, .sp=0x59, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x88d2, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x88d3, .a=0xf7, .x=0x8e, .y=0xf8, .sp=0x59, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x88d2, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x88d2, .value=0x00, .type=IO_READ},
        {.addr=0x88d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0372) {
    const struct CPU_State initial_cpu = {.pc=0x17d8, .a=0x11, .x=0xa7, .y=0x58, .sp=0xf3, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x17d8, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x17d9, .a=0x11, .x=0xa7, .y=0x58, .sp=0xf3, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x17d8, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x17d8, .value=0x00, .type=IO_READ},
        {.addr=0x17d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0373) {
    const struct CPU_State initial_cpu = {.pc=0x2a02, .a=0x8a, .x=0x36, .y=0x73, .sp=0xe7, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x2a02, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x2a03, .a=0x8a, .x=0x36, .y=0x73, .sp=0xe7, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x2a02, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x2a02, .value=0x00, .type=IO_READ},
        {.addr=0x2a03, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0374) {
    const struct CPU_State initial_cpu = {.pc=0xc7ed, .a=0x31, .x=0xb0, .y=0x1a, .sp=0x84, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xc7ed, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xc7ee, .a=0x31, .x=0xb0, .y=0x1a, .sp=0x84, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0xc7ed, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xc7ed, .value=0x00, .type=IO_READ},
        {.addr=0xc7ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0375) {
    const struct CPU_State initial_cpu = {.pc=0xe34e, .a=0xf2, .x=0x13, .y=0x6a, .sp=0xdd, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xe34e, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xe34f, .a=0xf2, .x=0x13, .y=0x6a, .sp=0xdd, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xe34e, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xe34e, .value=0x00, .type=IO_READ},
        {.addr=0xe34f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0376) {
    const struct CPU_State initial_cpu = {.pc=0xfa69, .a=0x45, .x=0xc0, .y=0x85, .sp=0x1d, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xfa69, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xfa6a, .a=0x45, .x=0xc0, .y=0x85, .sp=0x1d, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0xfa69, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xfa69, .value=0x00, .type=IO_READ},
        {.addr=0xfa6a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0377) {
    const struct CPU_State initial_cpu = {.pc=0x2116, .a=0x26, .x=0xc5, .y=0xd9, .sp=0xcb, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x2116, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x2117, .a=0x26, .x=0xc5, .y=0xd9, .sp=0xcb, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x2116, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x2116, .value=0x00, .type=IO_READ},
        {.addr=0x2117, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0378) {
    const struct CPU_State initial_cpu = {.pc=0x552e, .a=0xc6, .x=0x3c, .y=0x9d, .sp=0xde, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x552e, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x552f, .a=0xc6, .x=0x3c, .y=0x9d, .sp=0xde, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x552e, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x552e, .value=0x00, .type=IO_READ},
        {.addr=0x552f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0379) {
    const struct CPU_State initial_cpu = {.pc=0x2244, .a=0x9f, .x=0x3d, .y=0xf3, .sp=0x87, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x2244, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x2245, .a=0x9f, .x=0x3d, .y=0xf3, .sp=0x87, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x2244, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x2244, .value=0x00, .type=IO_READ},
        {.addr=0x2245, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_037A) {
    const struct CPU_State initial_cpu = {.pc=0xbad0, .a=0x22, .x=0x04, .y=0x3a, .sp=0xa3, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xbad0, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xbad1, .a=0x22, .x=0x04, .y=0x3a, .sp=0xa3, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0xbad0, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xbad0, .value=0x00, .type=IO_READ},
        {.addr=0xbad1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_037B) {
    const struct CPU_State initial_cpu = {.pc=0x27b3, .a=0x57, .x=0x0f, .y=0x70, .sp=0x1f, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x27b3, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x27b4, .a=0x57, .x=0x0f, .y=0x70, .sp=0x1f, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x27b3, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x27b3, .value=0x00, .type=IO_READ},
        {.addr=0x27b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_037C) {
    const struct CPU_State initial_cpu = {.pc=0xd539, .a=0x2d, .x=0x0e, .y=0x7d, .sp=0xc0, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xd539, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xd53a, .a=0x2d, .x=0x0e, .y=0x7d, .sp=0xc0, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xd539, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xd539, .value=0x00, .type=IO_READ},
        {.addr=0xd53a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_037D) {
    const struct CPU_State initial_cpu = {.pc=0x5258, .a=0x3a, .x=0x63, .y=0x74, .sp=0xfe, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x5258, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x5259, .a=0x3a, .x=0x63, .y=0x74, .sp=0xfe, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x5258, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x5258, .value=0x00, .type=IO_READ},
        {.addr=0x5259, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_037E) {
    const struct CPU_State initial_cpu = {.pc=0x14bd, .a=0x9f, .x=0x63, .y=0x35, .sp=0x83, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x14bd, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x14be, .a=0x9f, .x=0x63, .y=0x35, .sp=0x83, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x14bd, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x14bd, .value=0x00, .type=IO_READ},
        {.addr=0x14be, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_037F) {
    const struct CPU_State initial_cpu = {.pc=0x3894, .a=0x6e, .x=0x2e, .y=0x32, .sp=0xbd, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x3894, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x3895, .a=0x6e, .x=0x2e, .y=0x32, .sp=0xbd, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x3894, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x3894, .value=0x00, .type=IO_READ},
        {.addr=0x3895, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0380) {
    const struct CPU_State initial_cpu = {.pc=0xceaf, .a=0x4e, .x=0x9b, .y=0xcc, .sp=0xf1, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xceaf, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xceb0, .a=0x4e, .x=0x9b, .y=0xcc, .sp=0xf1, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xceaf, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xceaf, .value=0x00, .type=IO_READ},
        {.addr=0xceb0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0381) {
    const struct CPU_State initial_cpu = {.pc=0x0f09, .a=0x12, .x=0x50, .y=0x07, .sp=0x3a, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x0f09, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0f0a, .a=0x12, .x=0x50, .y=0x07, .sp=0x3a, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x0f09, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x0f09, .value=0x00, .type=IO_READ},
        {.addr=0x0f0a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0382) {
    const struct CPU_State initial_cpu = {.pc=0xd0f4, .a=0x99, .x=0xc9, .y=0x0f, .sp=0x09, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xd0f4, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xd0f5, .a=0x99, .x=0xc9, .y=0x0f, .sp=0x09, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0xd0f4, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xd0f4, .value=0x00, .type=IO_READ},
        {.addr=0xd0f5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0383) {
    const struct CPU_State initial_cpu = {.pc=0xfa8b, .a=0xd3, .x=0x83, .y=0x8c, .sp=0x53, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xfa8b, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xfa8c, .a=0xd3, .x=0x83, .y=0x8c, .sp=0x53, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xfa8b, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xfa8b, .value=0x00, .type=IO_READ},
        {.addr=0xfa8c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0384) {
    const struct CPU_State initial_cpu = {.pc=0x0b1d, .a=0xad, .x=0x68, .y=0xe1, .sp=0xba, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x0b1d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0b1e, .a=0xad, .x=0x68, .y=0xe1, .sp=0xba, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x0b1d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x0b1d, .value=0x00, .type=IO_READ},
        {.addr=0x0b1e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0385) {
    const struct CPU_State initial_cpu = {.pc=0xb0bf, .a=0xe5, .x=0xb3, .y=0x88, .sp=0xdd, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xb0bf, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xb0c0, .a=0xe5, .x=0xb3, .y=0x88, .sp=0xdd, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xb0bf, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xb0bf, .value=0x00, .type=IO_READ},
        {.addr=0xb0c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0386) {
    const struct CPU_State initial_cpu = {.pc=0xa242, .a=0x1b, .x=0xdc, .y=0x24, .sp=0x7f, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xa242, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xa243, .a=0x1b, .x=0xdc, .y=0x24, .sp=0x7f, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xa242, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xa242, .value=0x00, .type=IO_READ},
        {.addr=0xa243, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0387) {
    const struct CPU_State initial_cpu = {.pc=0x03ca, .a=0x1a, .x=0xdf, .y=0xdb, .sp=0x48, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x03ca, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x03cb, .a=0x1a, .x=0xdf, .y=0xdb, .sp=0x48, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x03ca, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x03ca, .value=0x00, .type=IO_READ},
        {.addr=0x03cb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0388) {
    const struct CPU_State initial_cpu = {.pc=0xdf7b, .a=0x9f, .x=0x51, .y=0xd5, .sp=0x4e, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xdf7b, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xdf7c, .a=0x9f, .x=0x51, .y=0xd5, .sp=0x4e, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0xdf7b, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xdf7b, .value=0x00, .type=IO_READ},
        {.addr=0xdf7c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0389) {
    const struct CPU_State initial_cpu = {.pc=0x1a8e, .a=0xf5, .x=0xe1, .y=0x24, .sp=0xb5, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x1a8e, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x1a8f, .a=0xf5, .x=0xe1, .y=0x24, .sp=0xb5, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x1a8e, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x1a8e, .value=0x00, .type=IO_READ},
        {.addr=0x1a8f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_038A) {
    const struct CPU_State initial_cpu = {.pc=0xb04b, .a=0x83, .x=0x9d, .y=0x89, .sp=0x60, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xb04b, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xb04c, .a=0x83, .x=0x9d, .y=0x89, .sp=0x60, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0xb04b, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xb04b, .value=0x00, .type=IO_READ},
        {.addr=0xb04c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_038B) {
    const struct CPU_State initial_cpu = {.pc=0x6bca, .a=0x66, .x=0xf5, .y=0x13, .sp=0x58, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x6bca, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x6bcb, .a=0x66, .x=0xf5, .y=0x13, .sp=0x58, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x6bca, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x6bca, .value=0x00, .type=IO_READ},
        {.addr=0x6bcb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_038C) {
    const struct CPU_State initial_cpu = {.pc=0xb7cf, .a=0xed, .x=0x55, .y=0x45, .sp=0x32, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xb7cf, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xb7d0, .a=0xed, .x=0x55, .y=0x45, .sp=0x32, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xb7cf, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xb7cf, .value=0x00, .type=IO_READ},
        {.addr=0xb7d0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_038D) {
    const struct CPU_State initial_cpu = {.pc=0xf13b, .a=0xa3, .x=0xf5, .y=0xf1, .sp=0x9b, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xf13b, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xf13c, .a=0xa3, .x=0xf5, .y=0xf1, .sp=0x9b, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0xf13b, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xf13b, .value=0x00, .type=IO_READ},
        {.addr=0xf13c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_038E) {
    const struct CPU_State initial_cpu = {.pc=0x8106, .a=0x64, .x=0x91, .y=0x33, .sp=0xe5, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x8106, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x8107, .a=0x64, .x=0x91, .y=0x33, .sp=0xe5, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x8106, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x8106, .value=0x00, .type=IO_READ},
        {.addr=0x8107, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_038F) {
    const struct CPU_State initial_cpu = {.pc=0x38db, .a=0xac, .x=0x52, .y=0x32, .sp=0x3a, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x38db, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x38dc, .a=0xac, .x=0x52, .y=0x32, .sp=0x3a, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x38db, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x38db, .value=0x00, .type=IO_READ},
        {.addr=0x38dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0390) {
    const struct CPU_State initial_cpu = {.pc=0x57f6, .a=0xb3, .x=0xd5, .y=0x1d, .sp=0x73, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x57f6, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x57f7, .a=0xb3, .x=0xd5, .y=0x1d, .sp=0x73, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x57f6, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x57f6, .value=0x00, .type=IO_READ},
        {.addr=0x57f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0391) {
    const struct CPU_State initial_cpu = {.pc=0xfdbd, .a=0x85, .x=0xdc, .y=0xed, .sp=0x17, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xfdbd, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xfdbe, .a=0x85, .x=0xdc, .y=0xed, .sp=0x17, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xfdbd, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xfdbd, .value=0x00, .type=IO_READ},
        {.addr=0xfdbe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0392) {
    const struct CPU_State initial_cpu = {.pc=0x288a, .a=0x1f, .x=0x01, .y=0x0b, .sp=0xda, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x288a, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x288b, .a=0x1f, .x=0x01, .y=0x0b, .sp=0xda, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x288a, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x288a, .value=0x00, .type=IO_READ},
        {.addr=0x288b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0393) {
    const struct CPU_State initial_cpu = {.pc=0x77f7, .a=0x0c, .x=0x08, .y=0x47, .sp=0xbe, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x77f7, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x77f8, .a=0x0c, .x=0x08, .y=0x47, .sp=0xbe, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x77f7, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x77f7, .value=0x00, .type=IO_READ},
        {.addr=0x77f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0394) {
    const struct CPU_State initial_cpu = {.pc=0x9eb9, .a=0x70, .x=0xc0, .y=0xb7, .sp=0x26, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x9eb9, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x9eba, .a=0x70, .x=0xc0, .y=0xb7, .sp=0x26, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x9eb9, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x9eb9, .value=0x00, .type=IO_READ},
        {.addr=0x9eba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0395) {
    const struct CPU_State initial_cpu = {.pc=0xf7de, .a=0x72, .x=0xe7, .y=0xad, .sp=0x1b, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xf7de, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xf7df, .a=0x72, .x=0xe7, .y=0xad, .sp=0x1b, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0xf7de, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xf7de, .value=0x00, .type=IO_READ},
        {.addr=0xf7df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0396) {
    const struct CPU_State initial_cpu = {.pc=0x4ccb, .a=0x11, .x=0x81, .y=0xcc, .sp=0xf9, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x4ccb, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x4ccc, .a=0x11, .x=0x81, .y=0xcc, .sp=0xf9, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x4ccb, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x4ccb, .value=0x00, .type=IO_READ},
        {.addr=0x4ccc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0397) {
    const struct CPU_State initial_cpu = {.pc=0x9ae9, .a=0x2f, .x=0x4e, .y=0x0f, .sp=0x22, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x9ae9, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x9aea, .a=0x2f, .x=0x4e, .y=0x0f, .sp=0x22, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x9ae9, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x9ae9, .value=0x00, .type=IO_READ},
        {.addr=0x9aea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0398) {
    const struct CPU_State initial_cpu = {.pc=0xda8a, .a=0xc0, .x=0xe2, .y=0x40, .sp=0x26, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xda8a, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xda8b, .a=0xc0, .x=0xe2, .y=0x40, .sp=0x26, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0xda8a, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xda8a, .value=0x00, .type=IO_READ},
        {.addr=0xda8b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_0399) {
    const struct CPU_State initial_cpu = {.pc=0x30f7, .a=0x87, .x=0x1b, .y=0xa4, .sp=0x6d, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x30f7, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x30f8, .a=0x87, .x=0x1b, .y=0xa4, .sp=0x6d, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x30f7, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x30f7, .value=0x00, .type=IO_READ},
        {.addr=0x30f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_039A) {
    const struct CPU_State initial_cpu = {.pc=0xc109, .a=0x87, .x=0xf9, .y=0xa9, .sp=0x57, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xc109, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xc10a, .a=0x87, .x=0xf9, .y=0xa9, .sp=0x57, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xc109, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xc109, .value=0x00, .type=IO_READ},
        {.addr=0xc10a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_039B) {
    const struct CPU_State initial_cpu = {.pc=0x76c0, .a=0xb3, .x=0x14, .y=0xe3, .sp=0xb4, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x76c0, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x76c1, .a=0xb3, .x=0x14, .y=0xe3, .sp=0xb4, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x76c0, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x76c0, .value=0x00, .type=IO_READ},
        {.addr=0x76c1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_039C) {
    const struct CPU_State initial_cpu = {.pc=0xfa5f, .a=0xb4, .x=0x25, .y=0x84, .sp=0x23, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xfa5f, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xfa60, .a=0xb4, .x=0x25, .y=0x84, .sp=0x23, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0xfa5f, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xfa5f, .value=0x00, .type=IO_READ},
        {.addr=0xfa60, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_039D) {
    const struct CPU_State initial_cpu = {.pc=0xe547, .a=0xae, .x=0xb0, .y=0x03, .sp=0x84, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xe547, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xe548, .a=0xae, .x=0xb0, .y=0x03, .sp=0x84, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0xe547, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xe547, .value=0x00, .type=IO_READ},
        {.addr=0xe548, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_039E) {
    const struct CPU_State initial_cpu = {.pc=0x070f, .a=0x07, .x=0xc1, .y=0x84, .sp=0xf6, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x070f, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0710, .a=0x07, .x=0xc1, .y=0x84, .sp=0xf6, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x070f, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x070f, .value=0x00, .type=IO_READ},
        {.addr=0x0710, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_039F) {
    const struct CPU_State initial_cpu = {.pc=0x5b91, .a=0x20, .x=0x1b, .y=0x61, .sp=0x38, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x5b91, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x5b92, .a=0x20, .x=0x1b, .y=0x61, .sp=0x38, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x5b91, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x5b91, .value=0x00, .type=IO_READ},
        {.addr=0x5b92, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03A0) {
    const struct CPU_State initial_cpu = {.pc=0xdc39, .a=0x69, .x=0xbc, .y=0xd2, .sp=0x9b, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xdc39, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xdc3a, .a=0x69, .x=0xbc, .y=0xd2, .sp=0x9b, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0xdc39, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xdc39, .value=0x00, .type=IO_READ},
        {.addr=0xdc3a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03A1) {
    const struct CPU_State initial_cpu = {.pc=0xb746, .a=0xaa, .x=0x01, .y=0x44, .sp=0x41, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xb746, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xb747, .a=0xaa, .x=0x01, .y=0x44, .sp=0x41, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0xb746, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xb746, .value=0x00, .type=IO_READ},
        {.addr=0xb747, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03A2) {
    const struct CPU_State initial_cpu = {.pc=0xffa4, .a=0xf4, .x=0x82, .y=0x60, .sp=0x89, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xffa4, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xffa5, .a=0xf4, .x=0x82, .y=0x60, .sp=0x89, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0xffa4, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xffa4, .value=0x00, .type=IO_READ},
        {.addr=0xffa5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03A3) {
    const struct CPU_State initial_cpu = {.pc=0x7d36, .a=0x62, .x=0x2b, .y=0x90, .sp=0x3f, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x7d36, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7d37, .a=0x62, .x=0x2b, .y=0x90, .sp=0x3f, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x7d36, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7d36, .value=0x00, .type=IO_READ},
        {.addr=0x7d37, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03A4) {
    const struct CPU_State initial_cpu = {.pc=0x48bd, .a=0xc6, .x=0xdb, .y=0x33, .sp=0x40, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x48bd, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x48be, .a=0xc6, .x=0xdb, .y=0x33, .sp=0x40, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x48bd, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x48bd, .value=0x00, .type=IO_READ},
        {.addr=0x48be, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03A5) {
    const struct CPU_State initial_cpu = {.pc=0xac93, .a=0x3f, .x=0xa9, .y=0xbf, .sp=0x41, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xac93, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xac94, .a=0x3f, .x=0xa9, .y=0xbf, .sp=0x41, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0xac93, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xac93, .value=0x00, .type=IO_READ},
        {.addr=0xac94, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x3ed9, .a=0x82, .x=0x0c, .y=0xe9, .sp=0xb8, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x3ed9, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x3eda, .a=0x82, .x=0x0c, .y=0xe9, .sp=0xb8, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x3ed9, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x3ed9, .value=0x00, .type=IO_READ},
        {.addr=0x3eda, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x23e4, .a=0x78, .x=0x0f, .y=0x7e, .sp=0x76, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x23e4, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x23e5, .a=0x78, .x=0x0f, .y=0x7e, .sp=0x76, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x23e4, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x23e4, .value=0x00, .type=IO_READ},
        {.addr=0x23e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03A8) {
    const struct CPU_State initial_cpu = {.pc=0x6462, .a=0xda, .x=0x46, .y=0x82, .sp=0xf9, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x6462, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x6463, .a=0xda, .x=0x46, .y=0x82, .sp=0xf9, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x6462, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x6462, .value=0x00, .type=IO_READ},
        {.addr=0x6463, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03A9) {
    const struct CPU_State initial_cpu = {.pc=0xf03c, .a=0x8a, .x=0xf8, .y=0xd6, .sp=0x09, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xf03c, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xf03d, .a=0x8a, .x=0xf8, .y=0xd6, .sp=0x09, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0xf03c, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xf03c, .value=0x00, .type=IO_READ},
        {.addr=0xf03d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03AA) {
    const struct CPU_State initial_cpu = {.pc=0x715b, .a=0x69, .x=0x2d, .y=0x37, .sp=0x99, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x715b, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x715c, .a=0x69, .x=0x2d, .y=0x37, .sp=0x99, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x715b, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x715b, .value=0x00, .type=IO_READ},
        {.addr=0x715c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03AB) {
    const struct CPU_State initial_cpu = {.pc=0x33ca, .a=0x03, .x=0xe0, .y=0xc8, .sp=0xe1, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x33ca, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x33cb, .a=0x03, .x=0xe0, .y=0xc8, .sp=0xe1, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x33ca, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x33ca, .value=0x00, .type=IO_READ},
        {.addr=0x33cb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03AC) {
    const struct CPU_State initial_cpu = {.pc=0xcaec, .a=0x29, .x=0x96, .y=0x30, .sp=0x5a, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xcaec, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xcaed, .a=0x29, .x=0x96, .y=0x30, .sp=0x5a, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xcaec, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xcaec, .value=0x00, .type=IO_READ},
        {.addr=0xcaed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03AD) {
    const struct CPU_State initial_cpu = {.pc=0x8719, .a=0x0c, .x=0xe1, .y=0xca, .sp=0x4f, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x8719, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x871a, .a=0x0c, .x=0xe1, .y=0xca, .sp=0x4f, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x8719, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x8719, .value=0x00, .type=IO_READ},
        {.addr=0x871a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x4cee, .a=0x43, .x=0x89, .y=0xce, .sp=0x14, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x4cee, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x4cef, .a=0x43, .x=0x89, .y=0xce, .sp=0x14, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x4cee, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x4cee, .value=0x00, .type=IO_READ},
        {.addr=0x4cef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03AF) {
    const struct CPU_State initial_cpu = {.pc=0xf5e0, .a=0xb0, .x=0x7e, .y=0xfe, .sp=0x1a, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xf5e0, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xf5e1, .a=0xb0, .x=0x7e, .y=0xfe, .sp=0x1a, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0xf5e0, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xf5e0, .value=0x00, .type=IO_READ},
        {.addr=0xf5e1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x89b5, .a=0x0d, .x=0xa0, .y=0x19, .sp=0x56, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x89b5, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x89b6, .a=0x0d, .x=0xa0, .y=0x19, .sp=0x56, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x89b5, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x89b5, .value=0x00, .type=IO_READ},
        {.addr=0x89b6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03B1) {
    const struct CPU_State initial_cpu = {.pc=0xc5ba, .a=0x9b, .x=0x62, .y=0xc9, .sp=0x07, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0xc5ba, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xc5bb, .a=0x9b, .x=0x62, .y=0xc9, .sp=0x07, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xc5ba, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xc5ba, .value=0x00, .type=IO_READ},
        {.addr=0xc5bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03B2) {
    const struct CPU_State initial_cpu = {.pc=0x8707, .a=0xfa, .x=0x0a, .y=0xf2, .sp=0x89, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x8707, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x8708, .a=0xfa, .x=0x0a, .y=0xf2, .sp=0x89, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x8707, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x8707, .value=0x00, .type=IO_READ},
        {.addr=0x8708, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03B3) {
    const struct CPU_State initial_cpu = {.pc=0x73c6, .a=0xea, .x=0x96, .y=0x68, .sp=0xcc, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x73c6, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x73c7, .a=0xea, .x=0x96, .y=0x68, .sp=0xcc, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x73c6, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x73c6, .value=0x00, .type=IO_READ},
        {.addr=0x73c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x0278, .a=0xb7, .x=0x13, .y=0x72, .sp=0x93, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x0278, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0279, .a=0xb7, .x=0x13, .y=0x72, .sp=0x93, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x0278, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x0278, .value=0x00, .type=IO_READ},
        {.addr=0x0279, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03B5) {
    const struct CPU_State initial_cpu = {.pc=0x6fca, .a=0x29, .x=0x7f, .y=0xc5, .sp=0x5d, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x6fca, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x6fcb, .a=0x29, .x=0x7f, .y=0xc5, .sp=0x5d, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x6fca, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x6fca, .value=0x00, .type=IO_READ},
        {.addr=0x6fcb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03B6) {
    const struct CPU_State initial_cpu = {.pc=0x6258, .a=0x9d, .x=0x51, .y=0x0b, .sp=0xe9, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x6258, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x6259, .a=0x9d, .x=0x51, .y=0x0b, .sp=0xe9, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x6258, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x6258, .value=0x00, .type=IO_READ},
        {.addr=0x6259, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03B7) {
    const struct CPU_State initial_cpu = {.pc=0xcb97, .a=0xfa, .x=0x12, .y=0x8d, .sp=0x46, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xcb97, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xcb98, .a=0xfa, .x=0x12, .y=0x8d, .sp=0x46, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xcb97, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xcb97, .value=0x00, .type=IO_READ},
        {.addr=0xcb98, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03B8) {
    const struct CPU_State initial_cpu = {.pc=0x928c, .a=0x3a, .x=0xe3, .y=0x6b, .sp=0x21, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x928c, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x928d, .a=0x3a, .x=0xe3, .y=0x6b, .sp=0x21, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x928c, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x928c, .value=0x00, .type=IO_READ},
        {.addr=0x928d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03B9) {
    const struct CPU_State initial_cpu = {.pc=0x3eae, .a=0xc4, .x=0x58, .y=0x61, .sp=0xbf, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x3eae, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x3eaf, .a=0xc4, .x=0x58, .y=0x61, .sp=0xbf, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x3eae, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x3eae, .value=0x00, .type=IO_READ},
        {.addr=0x3eaf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03BA) {
    const struct CPU_State initial_cpu = {.pc=0x4262, .a=0x26, .x=0x86, .y=0x1b, .sp=0x7b, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x4262, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x4263, .a=0x26, .x=0x86, .y=0x1b, .sp=0x7b, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x4262, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x4262, .value=0x00, .type=IO_READ},
        {.addr=0x4263, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03BB) {
    const struct CPU_State initial_cpu = {.pc=0xa9eb, .a=0xef, .x=0x03, .y=0xc4, .sp=0x75, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xa9eb, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xa9ec, .a=0xef, .x=0x03, .y=0xc4, .sp=0x75, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xa9eb, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xa9eb, .value=0x00, .type=IO_READ},
        {.addr=0xa9ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03BC) {
    const struct CPU_State initial_cpu = {.pc=0x0d8e, .a=0xe4, .x=0x91, .y=0xab, .sp=0x9d, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x0d8e, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0d8f, .a=0xe4, .x=0x91, .y=0xab, .sp=0x9d, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x0d8e, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x0d8e, .value=0x00, .type=IO_READ},
        {.addr=0x0d8f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03BD) {
    const struct CPU_State initial_cpu = {.pc=0xd7f4, .a=0xf8, .x=0x98, .y=0xdd, .sp=0x66, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xd7f4, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xd7f5, .a=0xf8, .x=0x98, .y=0xdd, .sp=0x66, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0xd7f4, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xd7f4, .value=0x00, .type=IO_READ},
        {.addr=0xd7f5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03BE) {
    const struct CPU_State initial_cpu = {.pc=0x2112, .a=0x41, .x=0x99, .y=0xa9, .sp=0x76, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x2112, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x2113, .a=0x41, .x=0x99, .y=0xa9, .sp=0x76, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x2112, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x2112, .value=0x00, .type=IO_READ},
        {.addr=0x2113, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03BF) {
    const struct CPU_State initial_cpu = {.pc=0x2a34, .a=0x5d, .x=0x87, .y=0xbd, .sp=0x5a, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x2a34, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x2a35, .a=0x5d, .x=0x87, .y=0xbd, .sp=0x5a, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x2a34, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x2a34, .value=0x00, .type=IO_READ},
        {.addr=0x2a35, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03C0) {
    const struct CPU_State initial_cpu = {.pc=0xed29, .a=0xe1, .x=0x44, .y=0x1a, .sp=0xf1, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xed29, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xed2a, .a=0xe1, .x=0x44, .y=0x1a, .sp=0xf1, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xed29, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xed29, .value=0x00, .type=IO_READ},
        {.addr=0xed2a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03C1) {
    const struct CPU_State initial_cpu = {.pc=0x7a45, .a=0x5b, .x=0x81, .y=0x25, .sp=0xe1, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x7a45, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7a46, .a=0x5b, .x=0x81, .y=0x25, .sp=0xe1, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x7a45, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7a45, .value=0x00, .type=IO_READ},
        {.addr=0x7a46, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03C2) {
    const struct CPU_State initial_cpu = {.pc=0x1db4, .a=0xc0, .x=0x86, .y=0x4a, .sp=0x88, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x1db4, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x1db5, .a=0xc0, .x=0x86, .y=0x4a, .sp=0x88, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x1db4, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x1db4, .value=0x00, .type=IO_READ},
        {.addr=0x1db5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03C3) {
    const struct CPU_State initial_cpu = {.pc=0xeb9c, .a=0x0e, .x=0x3c, .y=0x8b, .sp=0x07, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xeb9c, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xeb9d, .a=0x0e, .x=0x3c, .y=0x8b, .sp=0x07, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0xeb9c, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xeb9c, .value=0x00, .type=IO_READ},
        {.addr=0xeb9d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03C4) {
    const struct CPU_State initial_cpu = {.pc=0xcd51, .a=0x14, .x=0x3c, .y=0x00, .sp=0x28, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xcd51, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xcd52, .a=0x14, .x=0x3c, .y=0x00, .sp=0x28, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0xcd51, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xcd51, .value=0x00, .type=IO_READ},
        {.addr=0xcd52, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03C5) {
    const struct CPU_State initial_cpu = {.pc=0x152c, .a=0x7d, .x=0xd0, .y=0xc1, .sp=0x89, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x152c, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x152d, .a=0x7d, .x=0xd0, .y=0xc1, .sp=0x89, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x152c, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x152c, .value=0x00, .type=IO_READ},
        {.addr=0x152d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03C6) {
    const struct CPU_State initial_cpu = {.pc=0xd2ca, .a=0x91, .x=0x48, .y=0xc5, .sp=0xce, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xd2ca, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xd2cb, .a=0x91, .x=0x48, .y=0xc5, .sp=0xce, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0xd2ca, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xd2ca, .value=0x00, .type=IO_READ},
        {.addr=0xd2cb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03C7) {
    const struct CPU_State initial_cpu = {.pc=0xdcc4, .a=0x94, .x=0x0d, .y=0xea, .sp=0x97, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xdcc4, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xdcc5, .a=0x94, .x=0x0d, .y=0xea, .sp=0x97, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xdcc4, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xdcc4, .value=0x00, .type=IO_READ},
        {.addr=0xdcc5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03C8) {
    const struct CPU_State initial_cpu = {.pc=0x8290, .a=0xd7, .x=0x46, .y=0x34, .sp=0xa7, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x8290, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x8291, .a=0xd7, .x=0x46, .y=0x34, .sp=0xa7, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x8290, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x8290, .value=0x00, .type=IO_READ},
        {.addr=0x8291, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03C9) {
    const struct CPU_State initial_cpu = {.pc=0xd084, .a=0xa4, .x=0x99, .y=0x8d, .sp=0x09, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xd084, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xd085, .a=0xa4, .x=0x99, .y=0x8d, .sp=0x09, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0xd084, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xd084, .value=0x00, .type=IO_READ},
        {.addr=0xd085, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03CA) {
    const struct CPU_State initial_cpu = {.pc=0xdf56, .a=0x78, .x=0x24, .y=0x7f, .sp=0x12, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xdf56, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xdf57, .a=0x78, .x=0x24, .y=0x7f, .sp=0x12, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xdf56, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xdf56, .value=0x00, .type=IO_READ},
        {.addr=0xdf57, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03CB) {
    const struct CPU_State initial_cpu = {.pc=0x1d61, .a=0xa9, .x=0xf8, .y=0xe8, .sp=0xc9, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x1d61, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x1d62, .a=0xa9, .x=0xf8, .y=0xe8, .sp=0xc9, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x1d61, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x1d61, .value=0x00, .type=IO_READ},
        {.addr=0x1d62, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03CC) {
    const struct CPU_State initial_cpu = {.pc=0x8704, .a=0x0d, .x=0xa6, .y=0x98, .sp=0x0f, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x8704, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x8705, .a=0x0d, .x=0xa6, .y=0x98, .sp=0x0f, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x8704, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x8704, .value=0x00, .type=IO_READ},
        {.addr=0x8705, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03CD) {
    const struct CPU_State initial_cpu = {.pc=0xbcfa, .a=0x68, .x=0x95, .y=0x5f, .sp=0x7e, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xbcfa, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xbcfb, .a=0x68, .x=0x95, .y=0x5f, .sp=0x7e, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xbcfa, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xbcfa, .value=0x00, .type=IO_READ},
        {.addr=0xbcfb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x5eaa, .a=0x04, .x=0xce, .y=0x4b, .sp=0x1f, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x5eaa, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x5eab, .a=0x04, .x=0xce, .y=0x4b, .sp=0x1f, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x5eaa, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x5eaa, .value=0x00, .type=IO_READ},
        {.addr=0x5eab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x5f5b, .a=0xa2, .x=0x9f, .y=0x29, .sp=0x9a, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x5f5b, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x5f5c, .a=0xa2, .x=0x9f, .y=0x29, .sp=0x9a, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x5f5b, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x5f5b, .value=0x00, .type=IO_READ},
        {.addr=0x5f5c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x898f, .a=0xe0, .x=0x1c, .y=0x75, .sp=0xf5, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x898f, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x8990, .a=0xe0, .x=0x1c, .y=0x75, .sp=0xf5, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x898f, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x898f, .value=0x00, .type=IO_READ},
        {.addr=0x8990, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03D1) {
    const struct CPU_State initial_cpu = {.pc=0x5112, .a=0xf5, .x=0x51, .y=0xe0, .sp=0x3d, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x5112, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x5113, .a=0xf5, .x=0x51, .y=0xe0, .sp=0x3d, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x5112, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x5112, .value=0x00, .type=IO_READ},
        {.addr=0x5113, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03D2) {
    const struct CPU_State initial_cpu = {.pc=0x48e0, .a=0x72, .x=0x04, .y=0x6c, .sp=0x5a, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x48e0, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x48e1, .a=0x72, .x=0x04, .y=0x6c, .sp=0x5a, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x48e0, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x48e0, .value=0x00, .type=IO_READ},
        {.addr=0x48e1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03D3) {
    const struct CPU_State initial_cpu = {.pc=0x52ec, .a=0x4c, .x=0x59, .y=0x06, .sp=0x2c, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x52ec, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x52ed, .a=0x4c, .x=0x59, .y=0x06, .sp=0x2c, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x52ec, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x52ec, .value=0x00, .type=IO_READ},
        {.addr=0x52ed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03D4) {
    const struct CPU_State initial_cpu = {.pc=0x7fcd, .a=0x34, .x=0x8d, .y=0x0c, .sp=0x3a, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x7fcd, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7fce, .a=0x34, .x=0x8d, .y=0x0c, .sp=0x3a, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x7fcd, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x7fcd, .value=0x00, .type=IO_READ},
        {.addr=0x7fce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03D5) {
    const struct CPU_State initial_cpu = {.pc=0x8d8b, .a=0x18, .x=0x07, .y=0x6c, .sp=0xc8, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x8d8b, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x8d8c, .a=0x18, .x=0x07, .y=0x6c, .sp=0xc8, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x8d8b, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x8d8b, .value=0x00, .type=IO_READ},
        {.addr=0x8d8c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03D6) {
    const struct CPU_State initial_cpu = {.pc=0x3d8e, .a=0x52, .x=0x34, .y=0x9b, .sp=0x6b, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x3d8e, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x3d8f, .a=0x52, .x=0x34, .y=0x9b, .sp=0x6b, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x3d8e, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x3d8e, .value=0x00, .type=IO_READ},
        {.addr=0x3d8f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03D7) {
    const struct CPU_State initial_cpu = {.pc=0xb5ba, .a=0x9f, .x=0xc5, .y=0xe2, .sp=0x0b, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xb5ba, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xb5bb, .a=0x9f, .x=0xc5, .y=0xe2, .sp=0x0b, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0xb5ba, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xb5ba, .value=0x00, .type=IO_READ},
        {.addr=0xb5bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03D8) {
    const struct CPU_State initial_cpu = {.pc=0x0db0, .a=0x8f, .x=0x08, .y=0x6d, .sp=0x2b, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x0db0, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0db1, .a=0x8f, .x=0x08, .y=0x6d, .sp=0x2b, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x0db0, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x0db0, .value=0x00, .type=IO_READ},
        {.addr=0x0db1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03D9) {
    const struct CPU_State initial_cpu = {.pc=0xfa69, .a=0x93, .x=0x10, .y=0xef, .sp=0x09, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xfa69, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xfa6a, .a=0x93, .x=0x10, .y=0xef, .sp=0x09, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xfa69, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xfa69, .value=0x00, .type=IO_READ},
        {.addr=0xfa6a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03DA) {
    const struct CPU_State initial_cpu = {.pc=0x52de, .a=0x2d, .x=0xf3, .y=0x8d, .sp=0x96, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x52de, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x52df, .a=0x2d, .x=0xf3, .y=0x8d, .sp=0x96, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x52de, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x52de, .value=0x00, .type=IO_READ},
        {.addr=0x52df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03DB) {
    const struct CPU_State initial_cpu = {.pc=0xf162, .a=0xb3, .x=0x18, .y=0x31, .sp=0x17, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xf162, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xf163, .a=0xb3, .x=0x18, .y=0x31, .sp=0x17, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xf162, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xf162, .value=0x00, .type=IO_READ},
        {.addr=0xf163, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03DC) {
    const struct CPU_State initial_cpu = {.pc=0xacca, .a=0x28, .x=0xe9, .y=0xe6, .sp=0x62, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xacca, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xaccb, .a=0x28, .x=0xe9, .y=0xe6, .sp=0x62, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xacca, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xacca, .value=0x00, .type=IO_READ},
        {.addr=0xaccb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03DD) {
    const struct CPU_State initial_cpu = {.pc=0x4047, .a=0x27, .x=0xba, .y=0x6f, .sp=0x2c, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x4047, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x4048, .a=0x27, .x=0xba, .y=0x6f, .sp=0x2c, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x4047, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x4047, .value=0x00, .type=IO_READ},
        {.addr=0x4048, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03DE) {
    const struct CPU_State initial_cpu = {.pc=0xb745, .a=0xb2, .x=0x9d, .y=0xab, .sp=0x5e, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xb745, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xb746, .a=0xb2, .x=0x9d, .y=0xab, .sp=0x5e, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xb745, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xb745, .value=0x00, .type=IO_READ},
        {.addr=0xb746, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x028d, .a=0xe7, .x=0x9a, .y=0xdb, .sp=0xdc, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x028d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x028e, .a=0xe7, .x=0x9a, .y=0xdb, .sp=0xdc, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x028d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x028d, .value=0x00, .type=IO_READ},
        {.addr=0x028e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03E0) {
    const struct CPU_State initial_cpu = {.pc=0xde44, .a=0x81, .x=0xe4, .y=0x86, .sp=0xab, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xde44, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xde45, .a=0x81, .x=0xe4, .y=0x86, .sp=0xab, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xde44, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xde44, .value=0x00, .type=IO_READ},
        {.addr=0xde45, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03E1) {
    const struct CPU_State initial_cpu = {.pc=0x610b, .a=0x49, .x=0xc9, .y=0x96, .sp=0x6b, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x610b, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x610c, .a=0x49, .x=0xc9, .y=0x96, .sp=0x6b, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x610b, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x610b, .value=0x00, .type=IO_READ},
        {.addr=0x610c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03E2) {
    const struct CPU_State initial_cpu = {.pc=0xf8d3, .a=0xa8, .x=0x37, .y=0xb5, .sp=0x89, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xf8d3, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xf8d4, .a=0xa8, .x=0x37, .y=0xb5, .sp=0x89, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0xf8d3, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xf8d3, .value=0x00, .type=IO_READ},
        {.addr=0xf8d4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03E3) {
    const struct CPU_State initial_cpu = {.pc=0xf165, .a=0x89, .x=0x35, .y=0xd7, .sp=0x32, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xf165, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xf166, .a=0x89, .x=0x35, .y=0xd7, .sp=0x32, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xf165, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xf165, .value=0x00, .type=IO_READ},
        {.addr=0xf166, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x30b7, .a=0x41, .x=0xc1, .y=0x99, .sp=0x1a, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x30b7, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x30b8, .a=0x41, .x=0xc1, .y=0x99, .sp=0x1a, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x30b7, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x30b7, .value=0x00, .type=IO_READ},
        {.addr=0x30b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03E5) {
    const struct CPU_State initial_cpu = {.pc=0x8ff3, .a=0x95, .x=0x82, .y=0x86, .sp=0x98, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x8ff3, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x8ff4, .a=0x95, .x=0x82, .y=0x86, .sp=0x98, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x8ff3, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x8ff3, .value=0x00, .type=IO_READ},
        {.addr=0x8ff4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03E6) {
    const struct CPU_State initial_cpu = {.pc=0x2118, .a=0x2a, .x=0x71, .y=0x4b, .sp=0xad, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x2118, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x2119, .a=0x2a, .x=0x71, .y=0x4b, .sp=0xad, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x2118, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x2118, .value=0x00, .type=IO_READ},
        {.addr=0x2119, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_00, _00_03E7) {
    const struct CPU_State initial_cpu = {.pc=0xed01, .a=0x43, .x=0xdf, .y=0x81, .sp=0x28, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xed01, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xed02, .a=0x43, .x=0xdf, .y=0x81, .sp=0x28, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0xed01, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xed01, .value=0x00, .type=IO_READ},
        {.addr=0xed02, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("00 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
