#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_7C, _7C_0000) {
    const struct CPU_State initial_cpu = {.pc=0x74c0, .a=0x47, .x=0x1c, .y=0x94, .sp=0xdc, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x74c0, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x74c1, .a=0x23, .x=0x1c, .y=0x94, .sp=0xdc, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x74c0, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x74c0, .value=0x7c, .type=IO_READ},
        {.addr=0x74c1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0001) {
    const struct CPU_State initial_cpu = {.pc=0x77db, .a=0x2e, .x=0xf9, .y=0x4d, .sp=0xf3, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x77db, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x77dc, .a=0x97, .x=0xf9, .y=0x4d, .sp=0xf3, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x77db, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x77db, .value=0x7c, .type=IO_READ},
        {.addr=0x77dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0002) {
    const struct CPU_State initial_cpu = {.pc=0xcc06, .a=0x29, .x=0xcb, .y=0x91, .sp=0x20, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xcc06, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xcc07, .a=0x14, .x=0xcb, .y=0x91, .sp=0x20, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xcc06, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xcc06, .value=0x7c, .type=IO_READ},
        {.addr=0xcc07, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0003) {
    const struct CPU_State initial_cpu = {.pc=0x0c20, .a=0xf9, .x=0xf7, .y=0x11, .sp=0x02, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x0c20, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x0c21, .a=0xfc, .x=0xf7, .y=0x11, .sp=0x02, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0c20, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x0c20, .value=0x7c, .type=IO_READ},
        {.addr=0x0c21, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0004) {
    const struct CPU_State initial_cpu = {.pc=0xbc9f, .a=0x71, .x=0x8e, .y=0x86, .sp=0xd3, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xbc9f, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xbca0, .a=0xb8, .x=0x8e, .y=0x86, .sp=0xd3, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xbc9f, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xbc9f, .value=0x7c, .type=IO_READ},
        {.addr=0xbca0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0005) {
    const struct CPU_State initial_cpu = {.pc=0x0774, .a=0x9a, .x=0xb8, .y=0xe9, .sp=0x9c, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0774, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x0775, .a=0xcd, .x=0xb8, .y=0xe9, .sp=0x9c, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0774, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x0774, .value=0x7c, .type=IO_READ},
        {.addr=0x0775, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0006) {
    const struct CPU_State initial_cpu = {.pc=0x1236, .a=0xea, .x=0xea, .y=0x2b, .sp=0x89, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x1236, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x1237, .a=0xf5, .x=0xea, .y=0x2b, .sp=0x89, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x1236, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x1236, .value=0x7c, .type=IO_READ},
        {.addr=0x1237, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0007) {
    const struct CPU_State initial_cpu = {.pc=0x4ae0, .a=0x0f, .x=0xcf, .y=0x5e, .sp=0x69, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x4ae0, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x4ae1, .a=0x87, .x=0xcf, .y=0x5e, .sp=0x69, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x4ae0, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x4ae0, .value=0x7c, .type=IO_READ},
        {.addr=0x4ae1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0008) {
    const struct CPU_State initial_cpu = {.pc=0xccfa, .a=0x61, .x=0xcf, .y=0xd2, .sp=0xa5, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xccfa, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xccfb, .a=0xb0, .x=0xcf, .y=0xd2, .sp=0xa5, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xccfa, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xccfa, .value=0x7c, .type=IO_READ},
        {.addr=0xccfb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0009) {
    const struct CPU_State initial_cpu = {.pc=0xb571, .a=0xcf, .x=0xb2, .y=0x9a, .sp=0xe0, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xb571, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xb572, .a=0xe7, .x=0xb2, .y=0x9a, .sp=0xe0, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xb571, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xb571, .value=0x7c, .type=IO_READ},
        {.addr=0xb572, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_000A) {
    const struct CPU_State initial_cpu = {.pc=0x3654, .a=0x4a, .x=0x66, .y=0xbc, .sp=0x55, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x3654, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x3655, .a=0x25, .x=0x66, .y=0xbc, .sp=0x55, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x3654, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x3654, .value=0x7c, .type=IO_READ},
        {.addr=0x3655, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_000B) {
    const struct CPU_State initial_cpu = {.pc=0x7cfe, .a=0x0f, .x=0xfd, .y=0x83, .sp=0x4b, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x7cfe, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x7cff, .a=0x87, .x=0xfd, .y=0x83, .sp=0x4b, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x7cfe, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x7cfe, .value=0x7c, .type=IO_READ},
        {.addr=0x7cff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_000C) {
    const struct CPU_State initial_cpu = {.pc=0x5a9a, .a=0xae, .x=0xcf, .y=0x5a, .sp=0x22, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x5a9a, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x5a9b, .a=0x57, .x=0xcf, .y=0x5a, .sp=0x22, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x5a9a, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x5a9a, .value=0x7c, .type=IO_READ},
        {.addr=0x5a9b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_000D) {
    const struct CPU_State initial_cpu = {.pc=0x3cd2, .a=0x3f, .x=0xd1, .y=0x38, .sp=0x18, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x3cd2, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x3cd3, .a=0x9f, .x=0xd1, .y=0x38, .sp=0x18, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x3cd2, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x3cd2, .value=0x7c, .type=IO_READ},
        {.addr=0x3cd3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_000E) {
    const struct CPU_State initial_cpu = {.pc=0x7193, .a=0xeb, .x=0xa5, .y=0x15, .sp=0x6b, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x7193, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x7194, .a=0x75, .x=0xa5, .y=0x15, .sp=0x6b, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x7193, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x7193, .value=0x7c, .type=IO_READ},
        {.addr=0x7194, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_000F) {
    const struct CPU_State initial_cpu = {.pc=0xa4b3, .a=0xc0, .x=0x37, .y=0x08, .sp=0x75, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xa4b3, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xa4b4, .a=0x60, .x=0x37, .y=0x08, .sp=0x75, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xa4b3, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xa4b3, .value=0x7c, .type=IO_READ},
        {.addr=0xa4b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0010) {
    const struct CPU_State initial_cpu = {.pc=0xcc18, .a=0xb5, .x=0x5a, .y=0x0d, .sp=0x60, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xcc18, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xcc19, .a=0x5a, .x=0x5a, .y=0x0d, .sp=0x60, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xcc18, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xcc18, .value=0x7c, .type=IO_READ},
        {.addr=0xcc19, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0011) {
    const struct CPU_State initial_cpu = {.pc=0xa520, .a=0xc9, .x=0x99, .y=0xec, .sp=0xe4, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xa520, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xa521, .a=0xe4, .x=0x99, .y=0xec, .sp=0xe4, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xa520, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xa520, .value=0x7c, .type=IO_READ},
        {.addr=0xa521, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0012) {
    const struct CPU_State initial_cpu = {.pc=0x94e5, .a=0xd2, .x=0xe8, .y=0x24, .sp=0x4f, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x94e5, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x94e6, .a=0x69, .x=0xe8, .y=0x24, .sp=0x4f, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x94e5, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x94e5, .value=0x7c, .type=IO_READ},
        {.addr=0x94e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0013) {
    const struct CPU_State initial_cpu = {.pc=0x74f9, .a=0x4c, .x=0x49, .y=0xb3, .sp=0x34, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x74f9, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x74fa, .a=0x26, .x=0x49, .y=0xb3, .sp=0x34, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x74f9, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x74f9, .value=0x7c, .type=IO_READ},
        {.addr=0x74fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0014) {
    const struct CPU_State initial_cpu = {.pc=0xe4cd, .a=0x0e, .x=0xd8, .y=0x7e, .sp=0x9a, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xe4cd, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xe4ce, .a=0x07, .x=0xd8, .y=0x7e, .sp=0x9a, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xe4cd, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xe4cd, .value=0x7c, .type=IO_READ},
        {.addr=0xe4ce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0015) {
    const struct CPU_State initial_cpu = {.pc=0x01fb, .a=0xd7, .x=0x41, .y=0x7d, .sp=0xb0, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x01fc, .a=0x6b, .x=0x41, .y=0x7d, .sp=0xb0, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x01fb, .value=0x7c, .type=IO_READ},
        {.addr=0x01fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0016) {
    const struct CPU_State initial_cpu = {.pc=0x7aba, .a=0x04, .x=0xd0, .y=0x9e, .sp=0xd8, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x7aba, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x7abb, .a=0x82, .x=0xd0, .y=0x9e, .sp=0xd8, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x7aba, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x7aba, .value=0x7c, .type=IO_READ},
        {.addr=0x7abb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0017) {
    const struct CPU_State initial_cpu = {.pc=0xebaf, .a=0x7b, .x=0x04, .y=0x6e, .sp=0x30, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xebaf, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xebb0, .a=0x3d, .x=0x04, .y=0x6e, .sp=0x30, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xebaf, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xebaf, .value=0x7c, .type=IO_READ},
        {.addr=0xebb0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0018) {
    const struct CPU_State initial_cpu = {.pc=0xdaf1, .a=0x28, .x=0x1c, .y=0x38, .sp=0xfb, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xdaf1, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xdaf2, .a=0x94, .x=0x1c, .y=0x38, .sp=0xfb, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xdaf1, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xdaf1, .value=0x7c, .type=IO_READ},
        {.addr=0xdaf2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0019) {
    const struct CPU_State initial_cpu = {.pc=0x8dfe, .a=0xf4, .x=0x17, .y=0xef, .sp=0x23, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x8dfe, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x8dff, .a=0x7a, .x=0x17, .y=0xef, .sp=0x23, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x8dfe, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x8dfe, .value=0x7c, .type=IO_READ},
        {.addr=0x8dff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_001A) {
    const struct CPU_State initial_cpu = {.pc=0x8520, .a=0x58, .x=0x68, .y=0x60, .sp=0x1d, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x8520, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x8521, .a=0x2c, .x=0x68, .y=0x60, .sp=0x1d, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x8520, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x8520, .value=0x7c, .type=IO_READ},
        {.addr=0x8521, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_001B) {
    const struct CPU_State initial_cpu = {.pc=0x8681, .a=0xe7, .x=0x5f, .y=0xfe, .sp=0xbd, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x8681, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x8682, .a=0x73, .x=0x5f, .y=0xfe, .sp=0xbd, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x8681, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x8681, .value=0x7c, .type=IO_READ},
        {.addr=0x8682, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_001C) {
    const struct CPU_State initial_cpu = {.pc=0x7f7c, .a=0x77, .x=0x61, .y=0x20, .sp=0x40, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x7f7c, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x7f7d, .a=0xbb, .x=0x61, .y=0x20, .sp=0x40, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x7f7c, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x7f7c, .value=0x7c, .type=IO_READ},
        {.addr=0x7f7d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_001D) {
    const struct CPU_State initial_cpu = {.pc=0x8eb6, .a=0x1b, .x=0x40, .y=0x88, .sp=0x34, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x8eb6, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x8eb7, .a=0x8d, .x=0x40, .y=0x88, .sp=0x34, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x8eb6, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x8eb6, .value=0x7c, .type=IO_READ},
        {.addr=0x8eb7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_001E) {
    const struct CPU_State initial_cpu = {.pc=0xb8ca, .a=0xf0, .x=0xb4, .y=0xdc, .sp=0xce, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xb8ca, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xb8cb, .a=0xf8, .x=0xb4, .y=0xdc, .sp=0xce, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xb8ca, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xb8ca, .value=0x7c, .type=IO_READ},
        {.addr=0xb8cb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_001F) {
    const struct CPU_State initial_cpu = {.pc=0xb8f4, .a=0xc0, .x=0x22, .y=0x89, .sp=0xbe, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xb8f4, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xb8f5, .a=0x60, .x=0x22, .y=0x89, .sp=0xbe, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xb8f4, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xb8f4, .value=0x7c, .type=IO_READ},
        {.addr=0xb8f5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0020) {
    const struct CPU_State initial_cpu = {.pc=0xb148, .a=0x83, .x=0xfc, .y=0xd1, .sp=0x87, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xb148, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xb149, .a=0xc1, .x=0xfc, .y=0xd1, .sp=0x87, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xb148, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xb148, .value=0x7c, .type=IO_READ},
        {.addr=0xb149, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0021) {
    const struct CPU_State initial_cpu = {.pc=0xa30f, .a=0xc1, .x=0x08, .y=0x1e, .sp=0xe2, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xa30f, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xa310, .a=0xe0, .x=0x08, .y=0x1e, .sp=0xe2, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xa30f, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xa30f, .value=0x7c, .type=IO_READ},
        {.addr=0xa310, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0022) {
    const struct CPU_State initial_cpu = {.pc=0xbba1, .a=0x7b, .x=0xe9, .y=0x2e, .sp=0xe7, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xbba1, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xbba2, .a=0xbd, .x=0xe9, .y=0x2e, .sp=0xe7, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xbba1, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xbba1, .value=0x7c, .type=IO_READ},
        {.addr=0xbba2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0023) {
    const struct CPU_State initial_cpu = {.pc=0xac55, .a=0x6e, .x=0xdc, .y=0x1f, .sp=0xae, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xac55, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xac56, .a=0xb7, .x=0xdc, .y=0x1f, .sp=0xae, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xac55, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xac55, .value=0x7c, .type=IO_READ},
        {.addr=0xac56, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0024) {
    const struct CPU_State initial_cpu = {.pc=0x70fc, .a=0xbc, .x=0x88, .y=0x37, .sp=0x4e, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x70fc, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x70fd, .a=0x5e, .x=0x88, .y=0x37, .sp=0x4e, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x70fc, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x70fc, .value=0x7c, .type=IO_READ},
        {.addr=0x70fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0025) {
    const struct CPU_State initial_cpu = {.pc=0xaeb2, .a=0xfe, .x=0xde, .y=0xb7, .sp=0xd5, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xaeb2, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xaeb3, .a=0xff, .x=0xde, .y=0xb7, .sp=0xd5, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xaeb2, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xaeb2, .value=0x7c, .type=IO_READ},
        {.addr=0xaeb3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0026) {
    const struct CPU_State initial_cpu = {.pc=0x6d57, .a=0x8e, .x=0x8c, .y=0x11, .sp=0x2a, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x6d57, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6d58, .a=0x47, .x=0x8c, .y=0x11, .sp=0x2a, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x6d57, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6d57, .value=0x7c, .type=IO_READ},
        {.addr=0x6d58, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0027) {
    const struct CPU_State initial_cpu = {.pc=0xb449, .a=0x05, .x=0x08, .y=0x0d, .sp=0x60, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xb449, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xb44a, .a=0x02, .x=0x08, .y=0x0d, .sp=0x60, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xb449, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xb449, .value=0x7c, .type=IO_READ},
        {.addr=0xb44a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0028) {
    const struct CPU_State initial_cpu = {.pc=0xdf41, .a=0xaf, .x=0xf3, .y=0x3b, .sp=0xac, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xdf41, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xdf42, .a=0x57, .x=0xf3, .y=0x3b, .sp=0xac, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xdf41, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xdf41, .value=0x7c, .type=IO_READ},
        {.addr=0xdf42, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0029) {
    const struct CPU_State initial_cpu = {.pc=0xe661, .a=0x10, .x=0x30, .y=0x19, .sp=0x68, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xe661, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xe662, .a=0x08, .x=0x30, .y=0x19, .sp=0x68, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xe661, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xe661, .value=0x7c, .type=IO_READ},
        {.addr=0xe662, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_002A) {
    const struct CPU_State initial_cpu = {.pc=0x775c, .a=0x97, .x=0x3c, .y=0x8b, .sp=0x1a, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x775c, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x775d, .a=0xcb, .x=0x3c, .y=0x8b, .sp=0x1a, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x775c, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x775c, .value=0x7c, .type=IO_READ},
        {.addr=0x775d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_002B) {
    const struct CPU_State initial_cpu = {.pc=0xe455, .a=0xd7, .x=0x93, .y=0xf6, .sp=0xc4, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xe455, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xe456, .a=0x6b, .x=0x93, .y=0xf6, .sp=0xc4, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xe455, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xe455, .value=0x7c, .type=IO_READ},
        {.addr=0xe456, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_002C) {
    const struct CPU_State initial_cpu = {.pc=0xa2bc, .a=0x38, .x=0xe7, .y=0x34, .sp=0xce, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xa2bc, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xa2bd, .a=0x9c, .x=0xe7, .y=0x34, .sp=0xce, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xa2bc, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xa2bc, .value=0x7c, .type=IO_READ},
        {.addr=0xa2bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_002D) {
    const struct CPU_State initial_cpu = {.pc=0x3cb0, .a=0x2e, .x=0xa6, .y=0x4e, .sp=0x48, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x3cb0, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x3cb1, .a=0x97, .x=0xa6, .y=0x4e, .sp=0x48, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x3cb0, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x3cb0, .value=0x7c, .type=IO_READ},
        {.addr=0x3cb1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_002E) {
    const struct CPU_State initial_cpu = {.pc=0xbc98, .a=0xb5, .x=0x78, .y=0xa6, .sp=0xee, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xbc98, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xbc99, .a=0x5a, .x=0x78, .y=0xa6, .sp=0xee, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xbc98, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xbc98, .value=0x7c, .type=IO_READ},
        {.addr=0xbc99, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_002F) {
    const struct CPU_State initial_cpu = {.pc=0x1de6, .a=0x19, .x=0x65, .y=0xb5, .sp=0x01, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x1de6, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x1de7, .a=0x8c, .x=0x65, .y=0xb5, .sp=0x01, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x1de6, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x1de6, .value=0x7c, .type=IO_READ},
        {.addr=0x1de7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0030) {
    const struct CPU_State initial_cpu = {.pc=0xd2ad, .a=0x81, .x=0xcd, .y=0x22, .sp=0x1b, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xd2ad, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xd2ae, .a=0x40, .x=0xcd, .y=0x22, .sp=0x1b, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xd2ad, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xd2ad, .value=0x7c, .type=IO_READ},
        {.addr=0xd2ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0031) {
    const struct CPU_State initial_cpu = {.pc=0x2d11, .a=0x6c, .x=0x58, .y=0xae, .sp=0x18, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x2d11, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x2d12, .a=0x36, .x=0x58, .y=0xae, .sp=0x18, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x2d11, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x2d11, .value=0x7c, .type=IO_READ},
        {.addr=0x2d12, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0032) {
    const struct CPU_State initial_cpu = {.pc=0x2070, .a=0xf0, .x=0x4d, .y=0x2f, .sp=0x6e, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x2070, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x2071, .a=0xf8, .x=0x4d, .y=0x2f, .sp=0x6e, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x2070, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x2070, .value=0x7c, .type=IO_READ},
        {.addr=0x2071, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0033) {
    const struct CPU_State initial_cpu = {.pc=0xdee7, .a=0x19, .x=0x34, .y=0xad, .sp=0x2d, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xdee7, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xdee8, .a=0x8c, .x=0x34, .y=0xad, .sp=0x2d, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xdee7, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xdee7, .value=0x7c, .type=IO_READ},
        {.addr=0xdee8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0034) {
    const struct CPU_State initial_cpu = {.pc=0xc92d, .a=0xe7, .x=0x19, .y=0x21, .sp=0xfe, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xc92d, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xc92e, .a=0xf3, .x=0x19, .y=0x21, .sp=0xfe, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xc92d, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xc92d, .value=0x7c, .type=IO_READ},
        {.addr=0xc92e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0035) {
    const struct CPU_State initial_cpu = {.pc=0x5581, .a=0x10, .x=0x2b, .y=0xcb, .sp=0xd2, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x5581, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x5582, .a=0x88, .x=0x2b, .y=0xcb, .sp=0xd2, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x5581, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x5581, .value=0x7c, .type=IO_READ},
        {.addr=0x5582, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0036) {
    const struct CPU_State initial_cpu = {.pc=0xc37f, .a=0x53, .x=0x04, .y=0xf1, .sp=0xfc, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xc37f, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xc380, .a=0x29, .x=0x04, .y=0xf1, .sp=0xfc, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xc37f, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xc37f, .value=0x7c, .type=IO_READ},
        {.addr=0xc380, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0037) {
    const struct CPU_State initial_cpu = {.pc=0x9fad, .a=0xd8, .x=0x9b, .y=0x41, .sp=0x43, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x9fad, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x9fae, .a=0x6c, .x=0x9b, .y=0x41, .sp=0x43, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x9fad, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x9fad, .value=0x7c, .type=IO_READ},
        {.addr=0x9fae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0038) {
    const struct CPU_State initial_cpu = {.pc=0xeb32, .a=0x25, .x=0xe1, .y=0xd0, .sp=0xdd, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xeb32, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xeb33, .a=0x12, .x=0xe1, .y=0xd0, .sp=0xdd, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xeb32, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xeb32, .value=0x7c, .type=IO_READ},
        {.addr=0xeb33, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0039) {
    const struct CPU_State initial_cpu = {.pc=0x46f9, .a=0x30, .x=0x8b, .y=0x87, .sp=0xc8, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x46f9, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x46fa, .a=0x98, .x=0x8b, .y=0x87, .sp=0xc8, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x46f9, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x46f9, .value=0x7c, .type=IO_READ},
        {.addr=0x46fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_003A) {
    const struct CPU_State initial_cpu = {.pc=0x4e3a, .a=0x10, .x=0xcb, .y=0x92, .sp=0x30, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x4e3a, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x4e3b, .a=0x88, .x=0xcb, .y=0x92, .sp=0x30, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x4e3a, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x4e3a, .value=0x7c, .type=IO_READ},
        {.addr=0x4e3b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_003B) {
    const struct CPU_State initial_cpu = {.pc=0x7063, .a=0x24, .x=0x53, .y=0x4c, .sp=0x8b, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x7063, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x7064, .a=0x12, .x=0x53, .y=0x4c, .sp=0x8b, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x7063, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x7063, .value=0x7c, .type=IO_READ},
        {.addr=0x7064, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_003C) {
    const struct CPU_State initial_cpu = {.pc=0x6417, .a=0x69, .x=0xc9, .y=0xe8, .sp=0x4b, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x6417, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6418, .a=0xb4, .x=0xc9, .y=0xe8, .sp=0x4b, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x6417, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6417, .value=0x7c, .type=IO_READ},
        {.addr=0x6418, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_003D) {
    const struct CPU_State initial_cpu = {.pc=0xd999, .a=0x03, .x=0x9c, .y=0xa9, .sp=0x01, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xd999, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xd99a, .a=0x81, .x=0x9c, .y=0xa9, .sp=0x01, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xd999, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xd999, .value=0x7c, .type=IO_READ},
        {.addr=0xd99a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_003E) {
    const struct CPU_State initial_cpu = {.pc=0xb3ed, .a=0x01, .x=0x81, .y=0xa9, .sp=0x47, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xb3ed, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xb3ee, .a=0x80, .x=0x81, .y=0xa9, .sp=0x47, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xb3ed, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xb3ed, .value=0x7c, .type=IO_READ},
        {.addr=0xb3ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_003F) {
    const struct CPU_State initial_cpu = {.pc=0xa457, .a=0x04, .x=0x87, .y=0x74, .sp=0xa1, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xa457, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xa458, .a=0x82, .x=0x87, .y=0x74, .sp=0xa1, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xa457, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xa457, .value=0x7c, .type=IO_READ},
        {.addr=0xa458, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0040) {
    const struct CPU_State initial_cpu = {.pc=0xe9bf, .a=0x66, .x=0x49, .y=0x7e, .sp=0x7a, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xe9bf, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xe9c0, .a=0xb3, .x=0x49, .y=0x7e, .sp=0x7a, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xe9bf, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xe9bf, .value=0x7c, .type=IO_READ},
        {.addr=0xe9c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0041) {
    const struct CPU_State initial_cpu = {.pc=0x1aeb, .a=0x54, .x=0x64, .y=0xc4, .sp=0x28, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x1aeb, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x1aec, .a=0xaa, .x=0x64, .y=0xc4, .sp=0x28, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x1aeb, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x1aeb, .value=0x7c, .type=IO_READ},
        {.addr=0x1aec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0042) {
    const struct CPU_State initial_cpu = {.pc=0xf007, .a=0xe6, .x=0xc8, .y=0x83, .sp=0x92, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xf007, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xf008, .a=0xf3, .x=0xc8, .y=0x83, .sp=0x92, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xf007, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xf007, .value=0x7c, .type=IO_READ},
        {.addr=0xf008, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0043) {
    const struct CPU_State initial_cpu = {.pc=0x1f25, .a=0x43, .x=0xbe, .y=0x2c, .sp=0x23, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x1f25, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x1f26, .a=0x21, .x=0xbe, .y=0x2c, .sp=0x23, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x1f25, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x1f25, .value=0x7c, .type=IO_READ},
        {.addr=0x1f26, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0044) {
    const struct CPU_State initial_cpu = {.pc=0x220d, .a=0xcb, .x=0x7e, .y=0x05, .sp=0x3b, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x220d, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x220e, .a=0x65, .x=0x7e, .y=0x05, .sp=0x3b, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x220d, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x220d, .value=0x7c, .type=IO_READ},
        {.addr=0x220e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0045) {
    const struct CPU_State initial_cpu = {.pc=0x068b, .a=0x1b, .x=0xfd, .y=0x6d, .sp=0x47, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x068b, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x068c, .a=0x0d, .x=0xfd, .y=0x6d, .sp=0x47, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x068b, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x068b, .value=0x7c, .type=IO_READ},
        {.addr=0x068c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0046) {
    const struct CPU_State initial_cpu = {.pc=0x6581, .a=0x0c, .x=0x78, .y=0x16, .sp=0x6a, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x6581, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6582, .a=0x06, .x=0x78, .y=0x16, .sp=0x6a, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x6581, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6581, .value=0x7c, .type=IO_READ},
        {.addr=0x6582, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0047) {
    const struct CPU_State initial_cpu = {.pc=0x6c09, .a=0x10, .x=0x92, .y=0x6d, .sp=0x35, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x6c09, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6c0a, .a=0x08, .x=0x92, .y=0x6d, .sp=0x35, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x6c09, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6c09, .value=0x7c, .type=IO_READ},
        {.addr=0x6c0a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0048) {
    const struct CPU_State initial_cpu = {.pc=0xad4b, .a=0xa3, .x=0xc3, .y=0x95, .sp=0x7c, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xad4b, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xad4c, .a=0x51, .x=0xc3, .y=0x95, .sp=0x7c, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xad4b, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xad4b, .value=0x7c, .type=IO_READ},
        {.addr=0xad4c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0049) {
    const struct CPU_State initial_cpu = {.pc=0xadb3, .a=0xe5, .x=0x95, .y=0xe0, .sp=0xb1, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xadb3, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xadb4, .a=0x72, .x=0x95, .y=0xe0, .sp=0xb1, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xadb3, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xadb3, .value=0x7c, .type=IO_READ},
        {.addr=0xadb4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_004A) {
    const struct CPU_State initial_cpu = {.pc=0xa8d0, .a=0xdb, .x=0x4b, .y=0xfb, .sp=0x95, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xa8d0, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xa8d1, .a=0x6d, .x=0x4b, .y=0xfb, .sp=0x95, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xa8d0, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xa8d0, .value=0x7c, .type=IO_READ},
        {.addr=0xa8d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_004B) {
    const struct CPU_State initial_cpu = {.pc=0x247c, .a=0x69, .x=0x3c, .y=0xb1, .sp=0x74, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x247c, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x247d, .a=0xb4, .x=0x3c, .y=0xb1, .sp=0x74, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x247c, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x247c, .value=0x7c, .type=IO_READ},
        {.addr=0x247d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_004C) {
    const struct CPU_State initial_cpu = {.pc=0x7c01, .a=0x9a, .x=0xa8, .y=0xf0, .sp=0xd4, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x7c01, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x7c02, .a=0xcd, .x=0xa8, .y=0xf0, .sp=0xd4, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x7c01, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x7c01, .value=0x7c, .type=IO_READ},
        {.addr=0x7c02, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_004D) {
    const struct CPU_State initial_cpu = {.pc=0x122f, .a=0xa7, .x=0xf6, .y=0x4a, .sp=0xc8, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x122f, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x1230, .a=0xd3, .x=0xf6, .y=0x4a, .sp=0xc8, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x122f, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x122f, .value=0x7c, .type=IO_READ},
        {.addr=0x1230, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_004E) {
    const struct CPU_State initial_cpu = {.pc=0x26b9, .a=0xd0, .x=0x66, .y=0xa7, .sp=0x0c, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x26b9, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x26ba, .a=0xe8, .x=0x66, .y=0xa7, .sp=0x0c, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x26b9, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x26b9, .value=0x7c, .type=IO_READ},
        {.addr=0x26ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_004F) {
    const struct CPU_State initial_cpu = {.pc=0xa3aa, .a=0x92, .x=0xe6, .y=0x2b, .sp=0x31, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xa3aa, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xa3ab, .a=0x49, .x=0xe6, .y=0x2b, .sp=0x31, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xa3aa, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xa3aa, .value=0x7c, .type=IO_READ},
        {.addr=0xa3ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0050) {
    const struct CPU_State initial_cpu = {.pc=0x3633, .a=0xef, .x=0xbc, .y=0x12, .sp=0x30, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x3633, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x3634, .a=0x77, .x=0xbc, .y=0x12, .sp=0x30, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x3633, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x3633, .value=0x7c, .type=IO_READ},
        {.addr=0x3634, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0051) {
    const struct CPU_State initial_cpu = {.pc=0xbf6a, .a=0x54, .x=0x02, .y=0x11, .sp=0xa4, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xbf6a, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xbf6b, .a=0x2a, .x=0x02, .y=0x11, .sp=0xa4, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xbf6a, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xbf6a, .value=0x7c, .type=IO_READ},
        {.addr=0xbf6b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0052) {
    const struct CPU_State initial_cpu = {.pc=0x701d, .a=0x60, .x=0xfc, .y=0x88, .sp=0xa1, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x701d, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x701e, .a=0x30, .x=0xfc, .y=0x88, .sp=0xa1, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x701d, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x701d, .value=0x7c, .type=IO_READ},
        {.addr=0x701e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0053) {
    const struct CPU_State initial_cpu = {.pc=0x6e92, .a=0x61, .x=0x82, .y=0x53, .sp=0x1c, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x6e92, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6e93, .a=0x30, .x=0x82, .y=0x53, .sp=0x1c, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x6e92, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6e92, .value=0x7c, .type=IO_READ},
        {.addr=0x6e93, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0054) {
    const struct CPU_State initial_cpu = {.pc=0x8361, .a=0xfe, .x=0x9e, .y=0x76, .sp=0xb4, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x8361, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x8362, .a=0x7f, .x=0x9e, .y=0x76, .sp=0xb4, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x8361, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x8361, .value=0x7c, .type=IO_READ},
        {.addr=0x8362, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0055) {
    const struct CPU_State initial_cpu = {.pc=0x1ab5, .a=0x99, .x=0x03, .y=0x4c, .sp=0x94, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x1ab5, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x1ab6, .a=0xcc, .x=0x03, .y=0x4c, .sp=0x94, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x1ab5, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x1ab5, .value=0x7c, .type=IO_READ},
        {.addr=0x1ab6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0056) {
    const struct CPU_State initial_cpu = {.pc=0x6d57, .a=0xaa, .x=0x1b, .y=0x15, .sp=0xc0, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x6d57, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6d58, .a=0x55, .x=0x1b, .y=0x15, .sp=0xc0, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x6d57, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6d57, .value=0x7c, .type=IO_READ},
        {.addr=0x6d58, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0057) {
    const struct CPU_State initial_cpu = {.pc=0x4946, .a=0xf3, .x=0xf0, .y=0xbb, .sp=0x18, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x4946, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x4947, .a=0xf9, .x=0xf0, .y=0xbb, .sp=0x18, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x4946, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x4946, .value=0x7c, .type=IO_READ},
        {.addr=0x4947, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0058) {
    const struct CPU_State initial_cpu = {.pc=0xa335, .a=0x29, .x=0x84, .y=0x4d, .sp=0x85, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xa335, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xa336, .a=0x94, .x=0x84, .y=0x4d, .sp=0x85, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xa335, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xa335, .value=0x7c, .type=IO_READ},
        {.addr=0xa336, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0059) {
    const struct CPU_State initial_cpu = {.pc=0x0f82, .a=0xc5, .x=0xb7, .y=0x43, .sp=0x1e, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x0f82, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x0f83, .a=0xe2, .x=0xb7, .y=0x43, .sp=0x1e, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x0f82, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x0f82, .value=0x7c, .type=IO_READ},
        {.addr=0x0f83, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_005A) {
    const struct CPU_State initial_cpu = {.pc=0x958f, .a=0x45, .x=0x1b, .y=0x66, .sp=0x57, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x958f, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x9590, .a=0xa2, .x=0x1b, .y=0x66, .sp=0x57, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x958f, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x958f, .value=0x7c, .type=IO_READ},
        {.addr=0x9590, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_005B) {
    const struct CPU_State initial_cpu = {.pc=0x58fb, .a=0x80, .x=0x5c, .y=0xad, .sp=0x14, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x58fb, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x58fc, .a=0xc0, .x=0x5c, .y=0xad, .sp=0x14, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x58fb, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x58fb, .value=0x7c, .type=IO_READ},
        {.addr=0x58fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_005C) {
    const struct CPU_State initial_cpu = {.pc=0x8612, .a=0x43, .x=0xe6, .y=0x10, .sp=0xc5, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x8612, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x8613, .a=0x21, .x=0xe6, .y=0x10, .sp=0xc5, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x8612, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x8612, .value=0x7c, .type=IO_READ},
        {.addr=0x8613, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_005D) {
    const struct CPU_State initial_cpu = {.pc=0x4d42, .a=0xfe, .x=0xa4, .y=0x7e, .sp=0x1a, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x4d42, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x4d43, .a=0x7f, .x=0xa4, .y=0x7e, .sp=0x1a, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x4d42, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x4d42, .value=0x7c, .type=IO_READ},
        {.addr=0x4d43, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_005E) {
    const struct CPU_State initial_cpu = {.pc=0x6e3b, .a=0x34, .x=0xc4, .y=0x96, .sp=0x3c, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x6e3b, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6e3c, .a=0x1a, .x=0xc4, .y=0x96, .sp=0x3c, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x6e3b, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6e3b, .value=0x7c, .type=IO_READ},
        {.addr=0x6e3c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_005F) {
    const struct CPU_State initial_cpu = {.pc=0xc6e5, .a=0x90, .x=0xf4, .y=0xe0, .sp=0xed, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xc6e5, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xc6e6, .a=0xc8, .x=0xf4, .y=0xe0, .sp=0xed, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xc6e5, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xc6e5, .value=0x7c, .type=IO_READ},
        {.addr=0xc6e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0060) {
    const struct CPU_State initial_cpu = {.pc=0xdc94, .a=0x45, .x=0x1c, .y=0x80, .sp=0xcc, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xdc94, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xdc95, .a=0xa2, .x=0x1c, .y=0x80, .sp=0xcc, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xdc94, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xdc94, .value=0x7c, .type=IO_READ},
        {.addr=0xdc95, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0061) {
    const struct CPU_State initial_cpu = {.pc=0xadb5, .a=0xd9, .x=0xf0, .y=0x73, .sp=0xb8, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xadb5, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xadb6, .a=0x6c, .x=0xf0, .y=0x73, .sp=0xb8, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xadb5, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xadb5, .value=0x7c, .type=IO_READ},
        {.addr=0xadb6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0062) {
    const struct CPU_State initial_cpu = {.pc=0x4f1b, .a=0x4c, .x=0xa5, .y=0xa4, .sp=0x80, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x4f1b, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x4f1c, .a=0xa6, .x=0xa5, .y=0xa4, .sp=0x80, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x4f1b, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x4f1b, .value=0x7c, .type=IO_READ},
        {.addr=0x4f1c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0063) {
    const struct CPU_State initial_cpu = {.pc=0x2667, .a=0xde, .x=0x44, .y=0xf8, .sp=0x68, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x2667, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x2668, .a=0x6f, .x=0x44, .y=0xf8, .sp=0x68, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x2667, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x2667, .value=0x7c, .type=IO_READ},
        {.addr=0x2668, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0064) {
    const struct CPU_State initial_cpu = {.pc=0x623f, .a=0x4e, .x=0x2d, .y=0x1e, .sp=0xee, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x623f, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6240, .a=0x27, .x=0x2d, .y=0x1e, .sp=0xee, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x623f, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x623f, .value=0x7c, .type=IO_READ},
        {.addr=0x6240, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0065) {
    const struct CPU_State initial_cpu = {.pc=0x9b63, .a=0x43, .x=0xc3, .y=0xdf, .sp=0x99, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x9b63, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x9b64, .a=0xa1, .x=0xc3, .y=0xdf, .sp=0x99, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x9b63, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x9b63, .value=0x7c, .type=IO_READ},
        {.addr=0x9b64, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0066) {
    const struct CPU_State initial_cpu = {.pc=0xca81, .a=0x5b, .x=0x6e, .y=0x43, .sp=0xdc, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xca81, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xca82, .a=0xad, .x=0x6e, .y=0x43, .sp=0xdc, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xca81, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xca81, .value=0x7c, .type=IO_READ},
        {.addr=0xca82, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0067) {
    const struct CPU_State initial_cpu = {.pc=0xe2f5, .a=0x70, .x=0xf6, .y=0xaa, .sp=0x6d, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xe2f5, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xe2f6, .a=0x38, .x=0xf6, .y=0xaa, .sp=0x6d, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xe2f5, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xe2f5, .value=0x7c, .type=IO_READ},
        {.addr=0xe2f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0068) {
    const struct CPU_State initial_cpu = {.pc=0x6fda, .a=0xd9, .x=0xcc, .y=0xc6, .sp=0xd0, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x6fda, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6fdb, .a=0xec, .x=0xcc, .y=0xc6, .sp=0xd0, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x6fda, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6fda, .value=0x7c, .type=IO_READ},
        {.addr=0x6fdb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0069) {
    const struct CPU_State initial_cpu = {.pc=0xeb24, .a=0xb4, .x=0x8e, .y=0x9a, .sp=0x74, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xeb24, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xeb25, .a=0xda, .x=0x8e, .y=0x9a, .sp=0x74, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xeb24, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xeb24, .value=0x7c, .type=IO_READ},
        {.addr=0xeb25, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_006A) {
    const struct CPU_State initial_cpu = {.pc=0x1bf5, .a=0x09, .x=0x12, .y=0x7b, .sp=0x60, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x1bf5, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x1bf6, .a=0x04, .x=0x12, .y=0x7b, .sp=0x60, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x1bf5, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x1bf5, .value=0x7c, .type=IO_READ},
        {.addr=0x1bf6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_006B) {
    const struct CPU_State initial_cpu = {.pc=0x56c0, .a=0x0d, .x=0xd3, .y=0x9c, .sp=0x6e, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x56c0, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x56c1, .a=0x06, .x=0xd3, .y=0x9c, .sp=0x6e, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x56c0, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x56c0, .value=0x7c, .type=IO_READ},
        {.addr=0x56c1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_006C) {
    const struct CPU_State initial_cpu = {.pc=0x89ad, .a=0xde, .x=0xd8, .y=0x75, .sp=0xc5, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x89ad, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x89ae, .a=0xef, .x=0xd8, .y=0x75, .sp=0xc5, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x89ad, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x89ad, .value=0x7c, .type=IO_READ},
        {.addr=0x89ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_006D) {
    const struct CPU_State initial_cpu = {.pc=0x49ef, .a=0x44, .x=0x6a, .y=0xed, .sp=0x72, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x49ef, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x49f0, .a=0xa2, .x=0x6a, .y=0xed, .sp=0x72, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x49ef, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x49ef, .value=0x7c, .type=IO_READ},
        {.addr=0x49f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_006E) {
    const struct CPU_State initial_cpu = {.pc=0x01ce, .a=0xe6, .x=0xc2, .y=0xc2, .sp=0xe4, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x01cf, .a=0x73, .x=0xc2, .y=0xc2, .sp=0xe4, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x01ce, .value=0x7c, .type=IO_READ},
        {.addr=0x01cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_006F) {
    const struct CPU_State initial_cpu = {.pc=0xa527, .a=0x37, .x=0x81, .y=0xb5, .sp=0xf5, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xa527, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xa528, .a=0x9b, .x=0x81, .y=0xb5, .sp=0xf5, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xa527, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xa527, .value=0x7c, .type=IO_READ},
        {.addr=0xa528, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0070) {
    const struct CPU_State initial_cpu = {.pc=0x022f, .a=0x55, .x=0x4c, .y=0x7d, .sp=0x14, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x022f, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x0230, .a=0xaa, .x=0x4c, .y=0x7d, .sp=0x14, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x022f, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x022f, .value=0x7c, .type=IO_READ},
        {.addr=0x0230, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0071) {
    const struct CPU_State initial_cpu = {.pc=0x2355, .a=0x14, .x=0x4e, .y=0xa5, .sp=0xff, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x2355, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x2356, .a=0x8a, .x=0x4e, .y=0xa5, .sp=0xff, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x2355, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x2355, .value=0x7c, .type=IO_READ},
        {.addr=0x2356, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0072) {
    const struct CPU_State initial_cpu = {.pc=0x2237, .a=0x70, .x=0xac, .y=0x70, .sp=0x53, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x2237, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x2238, .a=0x38, .x=0xac, .y=0x70, .sp=0x53, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x2237, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x2237, .value=0x7c, .type=IO_READ},
        {.addr=0x2238, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0073) {
    const struct CPU_State initial_cpu = {.pc=0x6242, .a=0x22, .x=0x9c, .y=0x6a, .sp=0xbb, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x6242, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6243, .a=0x11, .x=0x9c, .y=0x6a, .sp=0xbb, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x6242, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6242, .value=0x7c, .type=IO_READ},
        {.addr=0x6243, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0074) {
    const struct CPU_State initial_cpu = {.pc=0x4c4b, .a=0xf0, .x=0x45, .y=0x39, .sp=0xe8, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x4c4b, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x4c4c, .a=0xf8, .x=0x45, .y=0x39, .sp=0xe8, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x4c4b, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x4c4b, .value=0x7c, .type=IO_READ},
        {.addr=0x4c4c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0075) {
    const struct CPU_State initial_cpu = {.pc=0xc2ce, .a=0xba, .x=0x30, .y=0xe9, .sp=0x11, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xc2ce, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xc2cf, .a=0xdd, .x=0x30, .y=0xe9, .sp=0x11, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xc2ce, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xc2ce, .value=0x7c, .type=IO_READ},
        {.addr=0xc2cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0076) {
    const struct CPU_State initial_cpu = {.pc=0xbd3a, .a=0xb8, .x=0x91, .y=0xa3, .sp=0xf3, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xbd3a, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xbd3b, .a=0xdc, .x=0x91, .y=0xa3, .sp=0xf3, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xbd3a, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xbd3a, .value=0x7c, .type=IO_READ},
        {.addr=0xbd3b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0077) {
    const struct CPU_State initial_cpu = {.pc=0x6a0a, .a=0x68, .x=0x93, .y=0x2f, .sp=0x4c, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x6a0a, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6a0b, .a=0x34, .x=0x93, .y=0x2f, .sp=0x4c, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x6a0a, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6a0a, .value=0x7c, .type=IO_READ},
        {.addr=0x6a0b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0078) {
    const struct CPU_State initial_cpu = {.pc=0x110c, .a=0x47, .x=0x4a, .y=0x96, .sp=0x90, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x110c, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x110d, .a=0x23, .x=0x4a, .y=0x96, .sp=0x90, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x110c, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x110c, .value=0x7c, .type=IO_READ},
        {.addr=0x110d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0079) {
    const struct CPU_State initial_cpu = {.pc=0x1b48, .a=0xb0, .x=0x68, .y=0x05, .sp=0x9f, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x1b48, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x1b49, .a=0x58, .x=0x68, .y=0x05, .sp=0x9f, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x1b48, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x1b48, .value=0x7c, .type=IO_READ},
        {.addr=0x1b49, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_007A) {
    const struct CPU_State initial_cpu = {.pc=0x398c, .a=0xc2, .x=0x82, .y=0x7b, .sp=0xf2, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x398c, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x398d, .a=0xe1, .x=0x82, .y=0x7b, .sp=0xf2, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x398c, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x398c, .value=0x7c, .type=IO_READ},
        {.addr=0x398d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_007B) {
    const struct CPU_State initial_cpu = {.pc=0x8c8c, .a=0x83, .x=0xa8, .y=0xd7, .sp=0xe6, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x8c8c, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x8c8d, .a=0x41, .x=0xa8, .y=0xd7, .sp=0xe6, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x8c8c, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x8c8c, .value=0x7c, .type=IO_READ},
        {.addr=0x8c8d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_007C) {
    const struct CPU_State initial_cpu = {.pc=0x6a7a, .a=0x72, .x=0x8b, .y=0xd0, .sp=0xd1, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x6a7a, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6a7b, .a=0xb9, .x=0x8b, .y=0xd0, .sp=0xd1, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x6a7a, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6a7a, .value=0x7c, .type=IO_READ},
        {.addr=0x6a7b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_007D) {
    const struct CPU_State initial_cpu = {.pc=0x754c, .a=0x56, .x=0xd9, .y=0xbe, .sp=0xfe, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x754c, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x754d, .a=0xab, .x=0xd9, .y=0xbe, .sp=0xfe, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x754c, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x754c, .value=0x7c, .type=IO_READ},
        {.addr=0x754d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_007E) {
    const struct CPU_State initial_cpu = {.pc=0x1738, .a=0x23, .x=0xed, .y=0x09, .sp=0x7d, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x1738, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x1739, .a=0x11, .x=0xed, .y=0x09, .sp=0x7d, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x1738, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x1738, .value=0x7c, .type=IO_READ},
        {.addr=0x1739, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_007F) {
    const struct CPU_State initial_cpu = {.pc=0x047f, .a=0x87, .x=0xc7, .y=0x59, .sp=0xbe, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x047f, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x0480, .a=0xc3, .x=0xc7, .y=0x59, .sp=0xbe, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x047f, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x047f, .value=0x7c, .type=IO_READ},
        {.addr=0x0480, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0080) {
    const struct CPU_State initial_cpu = {.pc=0x1c95, .a=0x52, .x=0x5a, .y=0x88, .sp=0xf3, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x1c95, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x1c96, .a=0x29, .x=0x5a, .y=0x88, .sp=0xf3, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x1c95, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x1c95, .value=0x7c, .type=IO_READ},
        {.addr=0x1c96, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0081) {
    const struct CPU_State initial_cpu = {.pc=0x0894, .a=0x03, .x=0x16, .y=0x20, .sp=0x25, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x0894, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x0895, .a=0x81, .x=0x16, .y=0x20, .sp=0x25, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x0894, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x0894, .value=0x7c, .type=IO_READ},
        {.addr=0x0895, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0082) {
    const struct CPU_State initial_cpu = {.pc=0x5cd6, .a=0x39, .x=0xc0, .y=0x0a, .sp=0x04, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x5cd6, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x5cd7, .a=0x9c, .x=0xc0, .y=0x0a, .sp=0x04, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x5cd6, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x5cd6, .value=0x7c, .type=IO_READ},
        {.addr=0x5cd7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0083) {
    const struct CPU_State initial_cpu = {.pc=0xcd6b, .a=0x52, .x=0x72, .y=0x60, .sp=0x0a, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xcd6b, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xcd6c, .a=0x29, .x=0x72, .y=0x60, .sp=0x0a, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xcd6b, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xcd6b, .value=0x7c, .type=IO_READ},
        {.addr=0xcd6c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0084) {
    const struct CPU_State initial_cpu = {.pc=0x2166, .a=0x38, .x=0xe3, .y=0xcb, .sp=0xb0, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x2166, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x2167, .a=0x9c, .x=0xe3, .y=0xcb, .sp=0xb0, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x2166, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x2166, .value=0x7c, .type=IO_READ},
        {.addr=0x2167, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0085) {
    const struct CPU_State initial_cpu = {.pc=0x97c8, .a=0xec, .x=0x1a, .y=0xce, .sp=0x81, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x97c8, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x97c9, .a=0xf6, .x=0x1a, .y=0xce, .sp=0x81, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x97c8, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x97c8, .value=0x7c, .type=IO_READ},
        {.addr=0x97c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0086) {
    const struct CPU_State initial_cpu = {.pc=0xaf6c, .a=0xa7, .x=0xc8, .y=0x19, .sp=0x2e, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xaf6c, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xaf6d, .a=0x53, .x=0xc8, .y=0x19, .sp=0x2e, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xaf6c, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xaf6c, .value=0x7c, .type=IO_READ},
        {.addr=0xaf6d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0087) {
    const struct CPU_State initial_cpu = {.pc=0xa150, .a=0xc9, .x=0x19, .y=0xd1, .sp=0x75, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xa150, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xa151, .a=0x64, .x=0x19, .y=0xd1, .sp=0x75, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xa150, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xa150, .value=0x7c, .type=IO_READ},
        {.addr=0xa151, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0088) {
    const struct CPU_State initial_cpu = {.pc=0xfc3f, .a=0xe1, .x=0x80, .y=0x41, .sp=0xc4, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xfc3f, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xfc40, .a=0x70, .x=0x80, .y=0x41, .sp=0xc4, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xfc3f, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xfc3f, .value=0x7c, .type=IO_READ},
        {.addr=0xfc40, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0089) {
    const struct CPU_State initial_cpu = {.pc=0x5b76, .a=0x30, .x=0x08, .y=0xec, .sp=0xf0, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x5b76, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x5b77, .a=0x98, .x=0x08, .y=0xec, .sp=0xf0, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x5b76, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x5b76, .value=0x7c, .type=IO_READ},
        {.addr=0x5b77, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_008A) {
    const struct CPU_State initial_cpu = {.pc=0xbecd, .a=0x86, .x=0x65, .y=0x65, .sp=0xfe, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xbecd, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xbece, .a=0x43, .x=0x65, .y=0x65, .sp=0xfe, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xbecd, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xbecd, .value=0x7c, .type=IO_READ},
        {.addr=0xbece, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_008B) {
    const struct CPU_State initial_cpu = {.pc=0x2a33, .a=0x90, .x=0x86, .y=0x24, .sp=0x95, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x2a33, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x2a34, .a=0x48, .x=0x86, .y=0x24, .sp=0x95, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x2a33, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x2a33, .value=0x7c, .type=IO_READ},
        {.addr=0x2a34, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_008C) {
    const struct CPU_State initial_cpu = {.pc=0x8fae, .a=0xe5, .x=0x82, .y=0x97, .sp=0xa0, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x8fae, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x8faf, .a=0x72, .x=0x82, .y=0x97, .sp=0xa0, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x8fae, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x8fae, .value=0x7c, .type=IO_READ},
        {.addr=0x8faf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_008D) {
    const struct CPU_State initial_cpu = {.pc=0x2b5e, .a=0x96, .x=0xbf, .y=0x0d, .sp=0x16, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x2b5e, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x2b5f, .a=0xcb, .x=0xbf, .y=0x0d, .sp=0x16, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x2b5e, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x2b5e, .value=0x7c, .type=IO_READ},
        {.addr=0x2b5f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_008E) {
    const struct CPU_State initial_cpu = {.pc=0xec32, .a=0x7f, .x=0xcb, .y=0x76, .sp=0xe2, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xec32, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xec33, .a=0x3f, .x=0xcb, .y=0x76, .sp=0xe2, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xec32, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xec32, .value=0x7c, .type=IO_READ},
        {.addr=0xec33, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_008F) {
    const struct CPU_State initial_cpu = {.pc=0x9d2e, .a=0xb0, .x=0x58, .y=0xfe, .sp=0xb3, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x9d2e, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x9d2f, .a=0x58, .x=0x58, .y=0xfe, .sp=0xb3, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x9d2e, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x9d2e, .value=0x7c, .type=IO_READ},
        {.addr=0x9d2f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0090) {
    const struct CPU_State initial_cpu = {.pc=0x63d2, .a=0xb2, .x=0x1d, .y=0x9b, .sp=0xc6, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x63d2, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x63d3, .a=0xd9, .x=0x1d, .y=0x9b, .sp=0xc6, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x63d2, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x63d2, .value=0x7c, .type=IO_READ},
        {.addr=0x63d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0091) {
    const struct CPU_State initial_cpu = {.pc=0xd16e, .a=0x53, .x=0xcc, .y=0xf9, .sp=0x67, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xd16e, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xd16f, .a=0x29, .x=0xcc, .y=0xf9, .sp=0x67, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xd16e, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xd16e, .value=0x7c, .type=IO_READ},
        {.addr=0xd16f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0092) {
    const struct CPU_State initial_cpu = {.pc=0x031d, .a=0x50, .x=0x29, .y=0x9d, .sp=0x80, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x031d, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x031e, .a=0xa8, .x=0x29, .y=0x9d, .sp=0x80, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x031d, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x031d, .value=0x7c, .type=IO_READ},
        {.addr=0x031e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0093) {
    const struct CPU_State initial_cpu = {.pc=0x9007, .a=0x2c, .x=0x84, .y=0x04, .sp=0x96, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x9007, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x9008, .a=0x16, .x=0x84, .y=0x04, .sp=0x96, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x9007, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x9007, .value=0x7c, .type=IO_READ},
        {.addr=0x9008, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0094) {
    const struct CPU_State initial_cpu = {.pc=0x59f5, .a=0x09, .x=0xb3, .y=0xef, .sp=0x82, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x59f5, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x59f6, .a=0x84, .x=0xb3, .y=0xef, .sp=0x82, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x59f5, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x59f5, .value=0x7c, .type=IO_READ},
        {.addr=0x59f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0095) {
    const struct CPU_State initial_cpu = {.pc=0xc59d, .a=0x1f, .x=0x07, .y=0x80, .sp=0x0b, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xc59d, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xc59e, .a=0x0f, .x=0x07, .y=0x80, .sp=0x0b, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xc59d, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xc59d, .value=0x7c, .type=IO_READ},
        {.addr=0xc59e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0096) {
    const struct CPU_State initial_cpu = {.pc=0x6d5f, .a=0xd2, .x=0x47, .y=0x56, .sp=0xb5, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x6d5f, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6d60, .a=0xe9, .x=0x47, .y=0x56, .sp=0xb5, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x6d5f, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6d5f, .value=0x7c, .type=IO_READ},
        {.addr=0x6d60, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0097) {
    const struct CPU_State initial_cpu = {.pc=0xd919, .a=0x4f, .x=0xa9, .y=0x71, .sp=0x14, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xd919, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xd91a, .a=0x27, .x=0xa9, .y=0x71, .sp=0x14, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xd919, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xd919, .value=0x7c, .type=IO_READ},
        {.addr=0xd91a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0098) {
    const struct CPU_State initial_cpu = {.pc=0xaebd, .a=0x2b, .x=0x9d, .y=0x62, .sp=0x4f, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xaebd, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xaebe, .a=0x95, .x=0x9d, .y=0x62, .sp=0x4f, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xaebd, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xaebd, .value=0x7c, .type=IO_READ},
        {.addr=0xaebe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0099) {
    const struct CPU_State initial_cpu = {.pc=0x1102, .a=0xf5, .x=0x21, .y=0xb6, .sp=0x9d, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x1102, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x1103, .a=0xfa, .x=0x21, .y=0xb6, .sp=0x9d, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x1102, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x1102, .value=0x7c, .type=IO_READ},
        {.addr=0x1103, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_009A) {
    const struct CPU_State initial_cpu = {.pc=0xf8ba, .a=0x33, .x=0x19, .y=0xfd, .sp=0x8e, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xf8ba, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xf8bb, .a=0x99, .x=0x19, .y=0xfd, .sp=0x8e, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xf8ba, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xf8ba, .value=0x7c, .type=IO_READ},
        {.addr=0xf8bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_009B) {
    const struct CPU_State initial_cpu = {.pc=0x4a54, .a=0xa5, .x=0x1e, .y=0x84, .sp=0x33, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x4a54, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x4a55, .a=0xd2, .x=0x1e, .y=0x84, .sp=0x33, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x4a54, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x4a54, .value=0x7c, .type=IO_READ},
        {.addr=0x4a55, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_009C) {
    const struct CPU_State initial_cpu = {.pc=0xb8eb, .a=0x55, .x=0xc3, .y=0x1f, .sp=0x97, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xb8eb, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xb8ec, .a=0xaa, .x=0xc3, .y=0x1f, .sp=0x97, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xb8eb, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xb8eb, .value=0x7c, .type=IO_READ},
        {.addr=0xb8ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_009D) {
    const struct CPU_State initial_cpu = {.pc=0x8d96, .a=0xae, .x=0xc5, .y=0xf9, .sp=0xc8, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x8d96, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x8d97, .a=0x57, .x=0xc5, .y=0xf9, .sp=0xc8, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x8d96, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x8d96, .value=0x7c, .type=IO_READ},
        {.addr=0x8d97, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_009E) {
    const struct CPU_State initial_cpu = {.pc=0x2827, .a=0xb9, .x=0xe4, .y=0x35, .sp=0xf3, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x2827, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x2828, .a=0x5c, .x=0xe4, .y=0x35, .sp=0xf3, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x2827, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x2827, .value=0x7c, .type=IO_READ},
        {.addr=0x2828, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_009F) {
    const struct CPU_State initial_cpu = {.pc=0xb70f, .a=0xed, .x=0x7c, .y=0x3f, .sp=0x0a, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xb70f, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xb710, .a=0x76, .x=0x7c, .y=0x3f, .sp=0x0a, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xb70f, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xb70f, .value=0x7c, .type=IO_READ},
        {.addr=0xb710, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00A0) {
    const struct CPU_State initial_cpu = {.pc=0xfd1d, .a=0xa9, .x=0x49, .y=0xef, .sp=0xec, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xfd1d, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xfd1e, .a=0x54, .x=0x49, .y=0xef, .sp=0xec, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xfd1d, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xfd1d, .value=0x7c, .type=IO_READ},
        {.addr=0xfd1e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00A1) {
    const struct CPU_State initial_cpu = {.pc=0xf8de, .a=0xf6, .x=0xf4, .y=0xe7, .sp=0xe6, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xf8de, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xf8df, .a=0xfb, .x=0xf4, .y=0xe7, .sp=0xe6, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xf8de, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xf8de, .value=0x7c, .type=IO_READ},
        {.addr=0xf8df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00A2) {
    const struct CPU_State initial_cpu = {.pc=0xc91d, .a=0x4b, .x=0xaa, .y=0x5a, .sp=0x80, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xc91d, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xc91e, .a=0x25, .x=0xaa, .y=0x5a, .sp=0x80, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xc91d, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xc91d, .value=0x7c, .type=IO_READ},
        {.addr=0xc91e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00A3) {
    const struct CPU_State initial_cpu = {.pc=0xb17d, .a=0xf7, .x=0x55, .y=0x04, .sp=0x27, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xb17d, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xb17e, .a=0xfb, .x=0x55, .y=0x04, .sp=0x27, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xb17d, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xb17d, .value=0x7c, .type=IO_READ},
        {.addr=0xb17e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00A4) {
    const struct CPU_State initial_cpu = {.pc=0xc4a1, .a=0x1e, .x=0xd9, .y=0x9d, .sp=0x2e, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xc4a1, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xc4a2, .a=0x0f, .x=0xd9, .y=0x9d, .sp=0x2e, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xc4a1, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xc4a1, .value=0x7c, .type=IO_READ},
        {.addr=0xc4a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x7214, .a=0x90, .x=0xe2, .y=0xb5, .sp=0x4e, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x7214, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x7215, .a=0xc8, .x=0xe2, .y=0xb5, .sp=0x4e, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x7214, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x7214, .value=0x7c, .type=IO_READ},
        {.addr=0x7215, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00A6) {
    const struct CPU_State initial_cpu = {.pc=0xab23, .a=0x92, .x=0x71, .y=0x29, .sp=0xd6, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xab23, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xab24, .a=0x49, .x=0x71, .y=0x29, .sp=0xd6, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xab23, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xab23, .value=0x7c, .type=IO_READ},
        {.addr=0xab24, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x0745, .a=0xc6, .x=0x40, .y=0x73, .sp=0x86, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x0745, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x0746, .a=0x63, .x=0x40, .y=0x73, .sp=0x86, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x0745, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x0745, .value=0x7c, .type=IO_READ},
        {.addr=0x0746, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x187f, .a=0x9a, .x=0x10, .y=0x0a, .sp=0x62, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x187f, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x1880, .a=0xcd, .x=0x10, .y=0x0a, .sp=0x62, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x187f, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x187f, .value=0x7c, .type=IO_READ},
        {.addr=0x1880, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00A9) {
    const struct CPU_State initial_cpu = {.pc=0xdde3, .a=0x5a, .x=0x6c, .y=0x77, .sp=0xb7, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xdde3, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xdde4, .a=0x2d, .x=0x6c, .y=0x77, .sp=0xb7, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xdde3, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xdde3, .value=0x7c, .type=IO_READ},
        {.addr=0xdde4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x5bce, .a=0x73, .x=0x45, .y=0xf0, .sp=0xb9, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x5bce, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x5bcf, .a=0x39, .x=0x45, .y=0xf0, .sp=0xb9, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x5bce, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x5bce, .value=0x7c, .type=IO_READ},
        {.addr=0x5bcf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x878d, .a=0xeb, .x=0xa4, .y=0xab, .sp=0x31, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x878d, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x878e, .a=0x75, .x=0xa4, .y=0xab, .sp=0x31, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x878d, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x878d, .value=0x7c, .type=IO_READ},
        {.addr=0x878e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00AC) {
    const struct CPU_State initial_cpu = {.pc=0xa14b, .a=0x47, .x=0xb8, .y=0xd4, .sp=0x7a, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xa14b, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xa14c, .a=0xa3, .x=0xb8, .y=0xd4, .sp=0x7a, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xa14b, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xa14b, .value=0x7c, .type=IO_READ},
        {.addr=0xa14c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00AD) {
    const struct CPU_State initial_cpu = {.pc=0xb350, .a=0x26, .x=0x51, .y=0x5d, .sp=0x51, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xb350, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xb351, .a=0x93, .x=0x51, .y=0x5d, .sp=0x51, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xb350, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xb350, .value=0x7c, .type=IO_READ},
        {.addr=0xb351, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00AE) {
    const struct CPU_State initial_cpu = {.pc=0x3c42, .a=0x0c, .x=0x0b, .y=0xcf, .sp=0xa6, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x3c42, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x3c43, .a=0x86, .x=0x0b, .y=0xcf, .sp=0xa6, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x3c42, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x3c42, .value=0x7c, .type=IO_READ},
        {.addr=0x3c43, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00AF) {
    const struct CPU_State initial_cpu = {.pc=0xd017, .a=0xc6, .x=0x27, .y=0x45, .sp=0xef, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xd017, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xd018, .a=0xe3, .x=0x27, .y=0x45, .sp=0xef, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xd017, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xd017, .value=0x7c, .type=IO_READ},
        {.addr=0xd018, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00B0) {
    const struct CPU_State initial_cpu = {.pc=0xc3f6, .a=0x2c, .x=0xaf, .y=0xc2, .sp=0x13, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xc3f6, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xc3f7, .a=0x96, .x=0xaf, .y=0xc2, .sp=0x13, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xc3f6, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xc3f6, .value=0x7c, .type=IO_READ},
        {.addr=0xc3f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00B1) {
    const struct CPU_State initial_cpu = {.pc=0x6b12, .a=0xd9, .x=0x48, .y=0xcd, .sp=0xaa, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x6b12, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6b13, .a=0xec, .x=0x48, .y=0xcd, .sp=0xaa, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x6b12, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6b12, .value=0x7c, .type=IO_READ},
        {.addr=0x6b13, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00B2) {
    const struct CPU_State initial_cpu = {.pc=0x6efa, .a=0x3b, .x=0x26, .y=0x8c, .sp=0x8d, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x6efa, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6efb, .a=0x9d, .x=0x26, .y=0x8c, .sp=0x8d, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x6efa, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6efa, .value=0x7c, .type=IO_READ},
        {.addr=0x6efb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00B3) {
    const struct CPU_State initial_cpu = {.pc=0x1f8f, .a=0xff, .x=0x5e, .y=0x8f, .sp=0x0e, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x1f8f, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x1f90, .a=0x7f, .x=0x5e, .y=0x8f, .sp=0x0e, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x1f8f, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x1f8f, .value=0x7c, .type=IO_READ},
        {.addr=0x1f90, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00B4) {
    const struct CPU_State initial_cpu = {.pc=0x0b7e, .a=0x17, .x=0x19, .y=0x89, .sp=0xea, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x0b7e, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x0b7f, .a=0x8b, .x=0x19, .y=0x89, .sp=0xea, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0b7e, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x0b7e, .value=0x7c, .type=IO_READ},
        {.addr=0x0b7f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00B5) {
    const struct CPU_State initial_cpu = {.pc=0x9503, .a=0xd9, .x=0x5f, .y=0x1c, .sp=0x61, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x9503, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x9504, .a=0xec, .x=0x5f, .y=0x1c, .sp=0x61, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x9503, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x9503, .value=0x7c, .type=IO_READ},
        {.addr=0x9504, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00B6) {
    const struct CPU_State initial_cpu = {.pc=0xcb64, .a=0x3b, .x=0x87, .y=0x88, .sp=0xa0, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xcb64, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xcb65, .a=0x9d, .x=0x87, .y=0x88, .sp=0xa0, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xcb64, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xcb64, .value=0x7c, .type=IO_READ},
        {.addr=0xcb65, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x96c0, .a=0x09, .x=0x19, .y=0xae, .sp=0x77, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x96c0, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x96c1, .a=0x84, .x=0x19, .y=0xae, .sp=0x77, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x96c0, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x96c0, .value=0x7c, .type=IO_READ},
        {.addr=0x96c1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00B8) {
    const struct CPU_State initial_cpu = {.pc=0x6cee, .a=0xe5, .x=0x7a, .y=0x65, .sp=0x6a, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x6cee, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6cef, .a=0xf2, .x=0x7a, .y=0x65, .sp=0x6a, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x6cee, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6cee, .value=0x7c, .type=IO_READ},
        {.addr=0x6cef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00B9) {
    const struct CPU_State initial_cpu = {.pc=0x8b4d, .a=0xc6, .x=0x91, .y=0x44, .sp=0x82, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x8b4d, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x8b4e, .a=0xe3, .x=0x91, .y=0x44, .sp=0x82, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x8b4d, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x8b4d, .value=0x7c, .type=IO_READ},
        {.addr=0x8b4e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00BA) {
    const struct CPU_State initial_cpu = {.pc=0x9dd3, .a=0x17, .x=0x01, .y=0xa0, .sp=0x39, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x9dd3, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x9dd4, .a=0x8b, .x=0x01, .y=0xa0, .sp=0x39, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x9dd3, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x9dd3, .value=0x7c, .type=IO_READ},
        {.addr=0x9dd4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00BB) {
    const struct CPU_State initial_cpu = {.pc=0x971b, .a=0xf7, .x=0xbd, .y=0x15, .sp=0x5b, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x971b, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x971c, .a=0x7b, .x=0xbd, .y=0x15, .sp=0x5b, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x971b, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x971b, .value=0x7c, .type=IO_READ},
        {.addr=0x971c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x34d3, .a=0xe9, .x=0x2c, .y=0x56, .sp=0x24, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x34d3, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x34d4, .a=0xf4, .x=0x2c, .y=0x56, .sp=0x24, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x34d3, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x34d3, .value=0x7c, .type=IO_READ},
        {.addr=0x34d4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00BD) {
    const struct CPU_State initial_cpu = {.pc=0x8928, .a=0x70, .x=0xa7, .y=0x48, .sp=0xd3, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x8928, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x8929, .a=0xb8, .x=0xa7, .y=0x48, .sp=0xd3, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x8928, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x8928, .value=0x7c, .type=IO_READ},
        {.addr=0x8929, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00BE) {
    const struct CPU_State initial_cpu = {.pc=0x4b92, .a=0x4d, .x=0x4d, .y=0x41, .sp=0xc5, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x4b92, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x4b93, .a=0xa6, .x=0x4d, .y=0x41, .sp=0xc5, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x4b92, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x4b92, .value=0x7c, .type=IO_READ},
        {.addr=0x4b93, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00BF) {
    const struct CPU_State initial_cpu = {.pc=0x223b, .a=0x21, .x=0x9c, .y=0xd5, .sp=0xeb, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x223b, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x223c, .a=0x10, .x=0x9c, .y=0xd5, .sp=0xeb, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x223b, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x223b, .value=0x7c, .type=IO_READ},
        {.addr=0x223c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00C0) {
    const struct CPU_State initial_cpu = {.pc=0x4b7e, .a=0x1e, .x=0x6d, .y=0x38, .sp=0x0f, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x4b7e, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x4b7f, .a=0x8f, .x=0x6d, .y=0x38, .sp=0x0f, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x4b7e, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x4b7e, .value=0x7c, .type=IO_READ},
        {.addr=0x4b7f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00C1) {
    const struct CPU_State initial_cpu = {.pc=0x14c1, .a=0x48, .x=0x5e, .y=0xf3, .sp=0xf4, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x14c1, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x14c2, .a=0xa4, .x=0x5e, .y=0xf3, .sp=0xf4, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x14c1, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x14c1, .value=0x7c, .type=IO_READ},
        {.addr=0x14c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00C2) {
    const struct CPU_State initial_cpu = {.pc=0x1c8a, .a=0xd3, .x=0xa7, .y=0x10, .sp=0x99, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x1c8a, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x1c8b, .a=0x69, .x=0xa7, .y=0x10, .sp=0x99, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x1c8a, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x1c8a, .value=0x7c, .type=IO_READ},
        {.addr=0x1c8b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00C3) {
    const struct CPU_State initial_cpu = {.pc=0xb7d6, .a=0xbd, .x=0x6e, .y=0x70, .sp=0x0b, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xb7d6, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xb7d7, .a=0x5e, .x=0x6e, .y=0x70, .sp=0x0b, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xb7d6, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xb7d6, .value=0x7c, .type=IO_READ},
        {.addr=0xb7d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00C4) {
    const struct CPU_State initial_cpu = {.pc=0xd2da, .a=0x76, .x=0x3a, .y=0x98, .sp=0x58, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xd2da, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xd2db, .a=0xbb, .x=0x3a, .y=0x98, .sp=0x58, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xd2da, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xd2da, .value=0x7c, .type=IO_READ},
        {.addr=0xd2db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x896f, .a=0x2a, .x=0xb4, .y=0xd6, .sp=0x73, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x896f, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x8970, .a=0x15, .x=0xb4, .y=0xd6, .sp=0x73, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x896f, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x896f, .value=0x7c, .type=IO_READ},
        {.addr=0x8970, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00C6) {
    const struct CPU_State initial_cpu = {.pc=0x7827, .a=0xf2, .x=0x6d, .y=0xce, .sp=0x07, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x7827, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x7828, .a=0x79, .x=0x6d, .y=0xce, .sp=0x07, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x7827, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x7827, .value=0x7c, .type=IO_READ},
        {.addr=0x7828, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00C7) {
    const struct CPU_State initial_cpu = {.pc=0xec1b, .a=0x29, .x=0xa9, .y=0xf6, .sp=0x0a, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xec1b, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xec1c, .a=0x14, .x=0xa9, .y=0xf6, .sp=0x0a, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xec1b, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xec1b, .value=0x7c, .type=IO_READ},
        {.addr=0xec1c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00C8) {
    const struct CPU_State initial_cpu = {.pc=0x0b80, .a=0x27, .x=0x62, .y=0x73, .sp=0x68, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x0b80, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x0b81, .a=0x93, .x=0x62, .y=0x73, .sp=0x68, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x0b80, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x0b80, .value=0x7c, .type=IO_READ},
        {.addr=0x0b81, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00C9) {
    const struct CPU_State initial_cpu = {.pc=0xa500, .a=0x8a, .x=0xe5, .y=0xdb, .sp=0x2a, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xa500, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xa501, .a=0xc5, .x=0xe5, .y=0xdb, .sp=0x2a, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xa500, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xa500, .value=0x7c, .type=IO_READ},
        {.addr=0xa501, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00CA) {
    const struct CPU_State initial_cpu = {.pc=0x92f6, .a=0x38, .x=0x08, .y=0xb6, .sp=0x76, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x92f6, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x92f7, .a=0x9c, .x=0x08, .y=0xb6, .sp=0x76, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x92f6, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x92f6, .value=0x7c, .type=IO_READ},
        {.addr=0x92f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x35da, .a=0x2e, .x=0xa3, .y=0x02, .sp=0x97, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x35da, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x35db, .a=0x17, .x=0xa3, .y=0x02, .sp=0x97, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x35da, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x35da, .value=0x7c, .type=IO_READ},
        {.addr=0x35db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00CC) {
    const struct CPU_State initial_cpu = {.pc=0xe1d8, .a=0x89, .x=0x5c, .y=0xb3, .sp=0x8e, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xe1d8, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xe1d9, .a=0x44, .x=0x5c, .y=0xb3, .sp=0x8e, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xe1d8, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xe1d8, .value=0x7c, .type=IO_READ},
        {.addr=0xe1d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00CD) {
    const struct CPU_State initial_cpu = {.pc=0x02a9, .a=0xe1, .x=0x16, .y=0x5d, .sp=0x1a, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x02a9, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x02aa, .a=0xf0, .x=0x16, .y=0x5d, .sp=0x1a, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x02a9, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x02a9, .value=0x7c, .type=IO_READ},
        {.addr=0x02aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00CE) {
    const struct CPU_State initial_cpu = {.pc=0xa097, .a=0x63, .x=0x01, .y=0x37, .sp=0x49, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xa097, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xa098, .a=0xb1, .x=0x01, .y=0x37, .sp=0x49, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xa097, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xa097, .value=0x7c, .type=IO_READ},
        {.addr=0xa098, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00CF) {
    const struct CPU_State initial_cpu = {.pc=0xcb97, .a=0x3f, .x=0xd8, .y=0x2a, .sp=0x77, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xcb97, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xcb98, .a=0x1f, .x=0xd8, .y=0x2a, .sp=0x77, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xcb97, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xcb97, .value=0x7c, .type=IO_READ},
        {.addr=0xcb98, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00D0) {
    const struct CPU_State initial_cpu = {.pc=0x6a8b, .a=0x65, .x=0x83, .y=0x89, .sp=0xda, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x6a8b, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6a8c, .a=0xb2, .x=0x83, .y=0x89, .sp=0xda, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x6a8b, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6a8b, .value=0x7c, .type=IO_READ},
        {.addr=0x6a8c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00D1) {
    const struct CPU_State initial_cpu = {.pc=0xc44d, .a=0xce, .x=0x1f, .y=0xb5, .sp=0xc8, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xc44d, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xc44e, .a=0xe7, .x=0x1f, .y=0xb5, .sp=0xc8, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xc44d, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xc44d, .value=0x7c, .type=IO_READ},
        {.addr=0xc44e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00D2) {
    const struct CPU_State initial_cpu = {.pc=0x5771, .a=0x49, .x=0x86, .y=0xef, .sp=0x74, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x5771, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x5772, .a=0xa4, .x=0x86, .y=0xef, .sp=0x74, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x5771, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x5771, .value=0x7c, .type=IO_READ},
        {.addr=0x5772, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00D3) {
    const struct CPU_State initial_cpu = {.pc=0x7cad, .a=0x6b, .x=0xfe, .y=0xd1, .sp=0x77, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x7cad, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x7cae, .a=0xb5, .x=0xfe, .y=0xd1, .sp=0x77, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x7cad, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x7cad, .value=0x7c, .type=IO_READ},
        {.addr=0x7cae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00D4) {
    const struct CPU_State initial_cpu = {.pc=0x6826, .a=0x88, .x=0xc0, .y=0x7e, .sp=0xc8, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x6826, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6827, .a=0x44, .x=0xc0, .y=0x7e, .sp=0xc8, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x6826, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6826, .value=0x7c, .type=IO_READ},
        {.addr=0x6827, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00D5) {
    const struct CPU_State initial_cpu = {.pc=0x5443, .a=0xaf, .x=0xcb, .y=0xcd, .sp=0x87, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x5443, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x5444, .a=0xd7, .x=0xcb, .y=0xcd, .sp=0x87, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x5443, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x5443, .value=0x7c, .type=IO_READ},
        {.addr=0x5444, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00D6) {
    const struct CPU_State initial_cpu = {.pc=0x9627, .a=0x1c, .x=0xd8, .y=0x0c, .sp=0x4b, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x9627, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x9628, .a=0x0e, .x=0xd8, .y=0x0c, .sp=0x4b, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x9627, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x9627, .value=0x7c, .type=IO_READ},
        {.addr=0x9628, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00D7) {
    const struct CPU_State initial_cpu = {.pc=0xd068, .a=0x2a, .x=0xb3, .y=0xd8, .sp=0x5c, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xd068, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xd069, .a=0x15, .x=0xb3, .y=0xd8, .sp=0x5c, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xd068, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xd068, .value=0x7c, .type=IO_READ},
        {.addr=0xd069, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00D8) {
    const struct CPU_State initial_cpu = {.pc=0x42ca, .a=0x84, .x=0xa6, .y=0xf0, .sp=0x77, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x42ca, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x42cb, .a=0xc2, .x=0xa6, .y=0xf0, .sp=0x77, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x42ca, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x42ca, .value=0x7c, .type=IO_READ},
        {.addr=0x42cb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00D9) {
    const struct CPU_State initial_cpu = {.pc=0x5ab0, .a=0x91, .x=0xca, .y=0x48, .sp=0x40, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x5ab0, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x5ab1, .a=0xc8, .x=0xca, .y=0x48, .sp=0x40, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x5ab0, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x5ab0, .value=0x7c, .type=IO_READ},
        {.addr=0x5ab1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00DA) {
    const struct CPU_State initial_cpu = {.pc=0x69cc, .a=0x8c, .x=0xcb, .y=0x16, .sp=0xba, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x69cc, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x69cd, .a=0xc6, .x=0xcb, .y=0x16, .sp=0xba, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x69cc, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x69cc, .value=0x7c, .type=IO_READ},
        {.addr=0x69cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x30d0, .a=0x9e, .x=0xaa, .y=0x80, .sp=0xca, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x30d0, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x30d1, .a=0x4f, .x=0xaa, .y=0x80, .sp=0xca, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x30d0, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x30d0, .value=0x7c, .type=IO_READ},
        {.addr=0x30d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00DC) {
    const struct CPU_State initial_cpu = {.pc=0x01e5, .a=0xab, .x=0x68, .y=0x51, .sp=0x00, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x01e5, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x01e6, .a=0xd5, .x=0x68, .y=0x51, .sp=0x00, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x01e5, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x01e5, .value=0x7c, .type=IO_READ},
        {.addr=0x01e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x8ba5, .a=0xe0, .x=0x28, .y=0x84, .sp=0xf3, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x8ba5, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x8ba6, .a=0x70, .x=0x28, .y=0x84, .sp=0xf3, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x8ba5, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x8ba5, .value=0x7c, .type=IO_READ},
        {.addr=0x8ba6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00DE) {
    const struct CPU_State initial_cpu = {.pc=0xb6e2, .a=0x2a, .x=0x57, .y=0xf6, .sp=0x30, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xb6e2, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xb6e3, .a=0x15, .x=0x57, .y=0xf6, .sp=0x30, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xb6e2, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xb6e2, .value=0x7c, .type=IO_READ},
        {.addr=0xb6e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00DF) {
    const struct CPU_State initial_cpu = {.pc=0xcb7c, .a=0xe3, .x=0x4c, .y=0xbb, .sp=0xd3, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xcb7c, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xcb7d, .a=0xf1, .x=0x4c, .y=0xbb, .sp=0xd3, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xcb7c, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xcb7c, .value=0x7c, .type=IO_READ},
        {.addr=0xcb7d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x5ee5, .a=0x6b, .x=0x3c, .y=0x18, .sp=0xcf, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x5ee5, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x5ee6, .a=0x35, .x=0x3c, .y=0x18, .sp=0xcf, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x5ee5, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x5ee5, .value=0x7c, .type=IO_READ},
        {.addr=0x5ee6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00E1) {
    const struct CPU_State initial_cpu = {.pc=0xeae3, .a=0x73, .x=0xe5, .y=0x51, .sp=0x42, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xeae3, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xeae4, .a=0x39, .x=0xe5, .y=0x51, .sp=0x42, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xeae3, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xeae3, .value=0x7c, .type=IO_READ},
        {.addr=0xeae4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00E2) {
    const struct CPU_State initial_cpu = {.pc=0xb6c1, .a=0x35, .x=0x90, .y=0x29, .sp=0x7a, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xb6c1, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xb6c2, .a=0x9a, .x=0x90, .y=0x29, .sp=0x7a, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xb6c1, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xb6c1, .value=0x7c, .type=IO_READ},
        {.addr=0xb6c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00E3) {
    const struct CPU_State initial_cpu = {.pc=0xf832, .a=0x78, .x=0xa0, .y=0x1d, .sp=0x88, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xf832, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xf833, .a=0xbc, .x=0xa0, .y=0x1d, .sp=0x88, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xf832, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xf832, .value=0x7c, .type=IO_READ},
        {.addr=0xf833, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x9ede, .a=0x51, .x=0xe1, .y=0x94, .sp=0x58, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x9ede, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x9edf, .a=0x28, .x=0xe1, .y=0x94, .sp=0x58, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x9ede, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x9ede, .value=0x7c, .type=IO_READ},
        {.addr=0x9edf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00E5) {
    const struct CPU_State initial_cpu = {.pc=0x0858, .a=0xcd, .x=0xe5, .y=0x83, .sp=0x5f, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x0858, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x0859, .a=0x66, .x=0xe5, .y=0x83, .sp=0x5f, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0858, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x0858, .value=0x7c, .type=IO_READ},
        {.addr=0x0859, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00E6) {
    const struct CPU_State initial_cpu = {.pc=0x4fea, .a=0x99, .x=0xbe, .y=0x6a, .sp=0x40, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x4fea, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x4feb, .a=0xcc, .x=0xbe, .y=0x6a, .sp=0x40, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x4fea, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x4fea, .value=0x7c, .type=IO_READ},
        {.addr=0x4feb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00E7) {
    const struct CPU_State initial_cpu = {.pc=0x9860, .a=0xd8, .x=0x49, .y=0x46, .sp=0xb1, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x9860, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x9861, .a=0x6c, .x=0x49, .y=0x46, .sp=0xb1, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x9860, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x9860, .value=0x7c, .type=IO_READ},
        {.addr=0x9861, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00E8) {
    const struct CPU_State initial_cpu = {.pc=0x1b48, .a=0x28, .x=0x3f, .y=0xb4, .sp=0xd4, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x1b48, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x1b49, .a=0x14, .x=0x3f, .y=0xb4, .sp=0xd4, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x1b48, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x1b48, .value=0x7c, .type=IO_READ},
        {.addr=0x1b49, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00E9) {
    const struct CPU_State initial_cpu = {.pc=0xca61, .a=0x2d, .x=0x4c, .y=0xcb, .sp=0xa9, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xca61, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xca62, .a=0x96, .x=0x4c, .y=0xcb, .sp=0xa9, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xca61, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xca61, .value=0x7c, .type=IO_READ},
        {.addr=0xca62, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x7332, .a=0x01, .x=0x15, .y=0xad, .sp=0xb2, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x7332, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x7333, .a=0x00, .x=0x15, .y=0xad, .sp=0xb2, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x7332, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x7332, .value=0x7c, .type=IO_READ},
        {.addr=0x7333, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00EB) {
    const struct CPU_State initial_cpu = {.pc=0x7f0b, .a=0x4b, .x=0xef, .y=0xa9, .sp=0x7b, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x7f0b, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x7f0c, .a=0xa5, .x=0xef, .y=0xa9, .sp=0x7b, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x7f0b, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x7f0b, .value=0x7c, .type=IO_READ},
        {.addr=0x7f0c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00EC) {
    const struct CPU_State initial_cpu = {.pc=0x2009, .a=0x61, .x=0xd8, .y=0xf5, .sp=0x0e, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x2009, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x200a, .a=0x30, .x=0xd8, .y=0xf5, .sp=0x0e, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x2009, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x2009, .value=0x7c, .type=IO_READ},
        {.addr=0x200a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00ED) {
    const struct CPU_State initial_cpu = {.pc=0xc4fd, .a=0x05, .x=0x7d, .y=0x39, .sp=0xd4, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xc4fd, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xc4fe, .a=0x02, .x=0x7d, .y=0x39, .sp=0xd4, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xc4fd, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xc4fd, .value=0x7c, .type=IO_READ},
        {.addr=0xc4fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00EE) {
    const struct CPU_State initial_cpu = {.pc=0x91d1, .a=0xc2, .x=0xf4, .y=0x66, .sp=0x6f, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x91d1, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x91d2, .a=0x61, .x=0xf4, .y=0x66, .sp=0x6f, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x91d1, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x91d1, .value=0x7c, .type=IO_READ},
        {.addr=0x91d2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00EF) {
    const struct CPU_State initial_cpu = {.pc=0xdb61, .a=0x67, .x=0x05, .y=0x91, .sp=0x4c, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xdb61, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xdb62, .a=0x33, .x=0x05, .y=0x91, .sp=0x4c, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xdb61, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xdb61, .value=0x7c, .type=IO_READ},
        {.addr=0xdb62, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x15da, .a=0xaa, .x=0x8e, .y=0x5c, .sp=0x2e, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x15da, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x15db, .a=0xd5, .x=0x8e, .y=0x5c, .sp=0x2e, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x15da, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x15da, .value=0x7c, .type=IO_READ},
        {.addr=0x15db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00F1) {
    const struct CPU_State initial_cpu = {.pc=0x99c7, .a=0x53, .x=0xb4, .y=0x5d, .sp=0x5f, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x99c7, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x99c8, .a=0x29, .x=0xb4, .y=0x5d, .sp=0x5f, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x99c7, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x99c7, .value=0x7c, .type=IO_READ},
        {.addr=0x99c8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00F2) {
    const struct CPU_State initial_cpu = {.pc=0xd13b, .a=0xb6, .x=0x7c, .y=0xbe, .sp=0xd0, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xd13b, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xd13c, .a=0x5b, .x=0x7c, .y=0xbe, .sp=0xd0, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xd13b, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xd13b, .value=0x7c, .type=IO_READ},
        {.addr=0xd13c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00F3) {
    const struct CPU_State initial_cpu = {.pc=0xe940, .a=0x52, .x=0x26, .y=0xff, .sp=0x43, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xe940, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xe941, .a=0xa9, .x=0x26, .y=0xff, .sp=0x43, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xe940, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xe940, .value=0x7c, .type=IO_READ},
        {.addr=0xe941, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00F4) {
    const struct CPU_State initial_cpu = {.pc=0x40db, .a=0x3e, .x=0x4c, .y=0x65, .sp=0x97, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x40db, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x40dc, .a=0x9f, .x=0x4c, .y=0x65, .sp=0x97, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x40db, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x40db, .value=0x7c, .type=IO_READ},
        {.addr=0x40dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00F5) {
    const struct CPU_State initial_cpu = {.pc=0x9f0b, .a=0x94, .x=0x14, .y=0x81, .sp=0xe5, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x9f0b, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x9f0c, .a=0x4a, .x=0x14, .y=0x81, .sp=0xe5, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x9f0b, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x9f0b, .value=0x7c, .type=IO_READ},
        {.addr=0x9f0c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00F6) {
    const struct CPU_State initial_cpu = {.pc=0x63a3, .a=0x94, .x=0x89, .y=0x11, .sp=0x93, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x63a3, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x63a4, .a=0xca, .x=0x89, .y=0x11, .sp=0x93, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x63a3, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x63a3, .value=0x7c, .type=IO_READ},
        {.addr=0x63a4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00F7) {
    const struct CPU_State initial_cpu = {.pc=0x83f5, .a=0xd1, .x=0x96, .y=0x57, .sp=0xda, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x83f5, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x83f6, .a=0x68, .x=0x96, .y=0x57, .sp=0xda, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x83f5, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x83f5, .value=0x7c, .type=IO_READ},
        {.addr=0x83f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x948a, .a=0x8a, .x=0xfa, .y=0xcc, .sp=0x22, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x948a, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x948b, .a=0xc5, .x=0xfa, .y=0xcc, .sp=0x22, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x948a, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x948a, .value=0x7c, .type=IO_READ},
        {.addr=0x948b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00F9) {
    const struct CPU_State initial_cpu = {.pc=0xd5d3, .a=0x75, .x=0x81, .y=0x79, .sp=0x45, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xd5d3, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xd5d4, .a=0x3a, .x=0x81, .y=0x79, .sp=0x45, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xd5d3, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xd5d3, .value=0x7c, .type=IO_READ},
        {.addr=0xd5d4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00FA) {
    const struct CPU_State initial_cpu = {.pc=0xb389, .a=0x68, .x=0x1a, .y=0x24, .sp=0x03, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xb389, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xb38a, .a=0xb4, .x=0x1a, .y=0x24, .sp=0x03, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xb389, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xb389, .value=0x7c, .type=IO_READ},
        {.addr=0xb38a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00FB) {
    const struct CPU_State initial_cpu = {.pc=0x44b3, .a=0x37, .x=0x19, .y=0x4f, .sp=0xf8, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x44b3, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x44b4, .a=0x1b, .x=0x19, .y=0x4f, .sp=0xf8, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x44b3, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x44b3, .value=0x7c, .type=IO_READ},
        {.addr=0x44b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00FC) {
    const struct CPU_State initial_cpu = {.pc=0xf272, .a=0x2f, .x=0x93, .y=0x5e, .sp=0x2a, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xf272, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xf273, .a=0x97, .x=0x93, .y=0x5e, .sp=0x2a, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xf272, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xf272, .value=0x7c, .type=IO_READ},
        {.addr=0xf273, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00FD) {
    const struct CPU_State initial_cpu = {.pc=0xcd47, .a=0x58, .x=0x25, .y=0xb6, .sp=0xb8, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xcd47, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xcd48, .a=0xac, .x=0x25, .y=0xb6, .sp=0xb8, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xcd47, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xcd47, .value=0x7c, .type=IO_READ},
        {.addr=0xcd48, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00FE) {
    const struct CPU_State initial_cpu = {.pc=0x7fde, .a=0x9e, .x=0x43, .y=0x75, .sp=0xc7, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x7fde, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x7fdf, .a=0x4f, .x=0x43, .y=0x75, .sp=0xc7, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x7fde, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x7fde, .value=0x7c, .type=IO_READ},
        {.addr=0x7fdf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_00FF) {
    const struct CPU_State initial_cpu = {.pc=0x6b46, .a=0x02, .x=0x2f, .y=0xcd, .sp=0x56, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x6b46, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6b47, .a=0x01, .x=0x2f, .y=0xcd, .sp=0x56, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x6b46, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6b46, .value=0x7c, .type=IO_READ},
        {.addr=0x6b47, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0100) {
    const struct CPU_State initial_cpu = {.pc=0xa837, .a=0x86, .x=0x08, .y=0xb6, .sp=0xde, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xa837, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xa838, .a=0xc3, .x=0x08, .y=0xb6, .sp=0xde, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xa837, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xa837, .value=0x7c, .type=IO_READ},
        {.addr=0xa838, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0101) {
    const struct CPU_State initial_cpu = {.pc=0xc6a9, .a=0x94, .x=0x88, .y=0x51, .sp=0x1d, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xc6a9, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xc6aa, .a=0x4a, .x=0x88, .y=0x51, .sp=0x1d, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xc6a9, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xc6a9, .value=0x7c, .type=IO_READ},
        {.addr=0xc6aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0102) {
    const struct CPU_State initial_cpu = {.pc=0x63e6, .a=0x76, .x=0x97, .y=0x3d, .sp=0x1e, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x63e6, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x63e7, .a=0xbb, .x=0x97, .y=0x3d, .sp=0x1e, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x63e6, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x63e6, .value=0x7c, .type=IO_READ},
        {.addr=0x63e7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0103) {
    const struct CPU_State initial_cpu = {.pc=0x49b0, .a=0x69, .x=0x8d, .y=0x58, .sp=0x54, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x49b0, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x49b1, .a=0xb4, .x=0x8d, .y=0x58, .sp=0x54, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x49b0, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x49b0, .value=0x7c, .type=IO_READ},
        {.addr=0x49b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0104) {
    const struct CPU_State initial_cpu = {.pc=0xaf79, .a=0xb5, .x=0xb7, .y=0xcc, .sp=0x38, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xaf79, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xaf7a, .a=0x5a, .x=0xb7, .y=0xcc, .sp=0x38, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xaf79, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xaf79, .value=0x7c, .type=IO_READ},
        {.addr=0xaf7a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0105) {
    const struct CPU_State initial_cpu = {.pc=0xebfa, .a=0x6c, .x=0x1b, .y=0x5c, .sp=0x34, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xebfa, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xebfb, .a=0xb6, .x=0x1b, .y=0x5c, .sp=0x34, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xebfa, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xebfa, .value=0x7c, .type=IO_READ},
        {.addr=0xebfb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0106) {
    const struct CPU_State initial_cpu = {.pc=0x8cae, .a=0xf0, .x=0x04, .y=0x0f, .sp=0x0d, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x8cae, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x8caf, .a=0x78, .x=0x04, .y=0x0f, .sp=0x0d, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x8cae, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x8cae, .value=0x7c, .type=IO_READ},
        {.addr=0x8caf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0107) {
    const struct CPU_State initial_cpu = {.pc=0x96c7, .a=0xf7, .x=0xb7, .y=0xd6, .sp=0xda, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x96c7, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x96c8, .a=0xfb, .x=0xb7, .y=0xd6, .sp=0xda, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x96c7, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x96c7, .value=0x7c, .type=IO_READ},
        {.addr=0x96c8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0108) {
    const struct CPU_State initial_cpu = {.pc=0x6a1e, .a=0x81, .x=0xa1, .y=0xb0, .sp=0x6c, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x6a1e, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6a1f, .a=0x40, .x=0xa1, .y=0xb0, .sp=0x6c, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x6a1e, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6a1e, .value=0x7c, .type=IO_READ},
        {.addr=0x6a1f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0109) {
    const struct CPU_State initial_cpu = {.pc=0xcfa1, .a=0x83, .x=0x7b, .y=0x0e, .sp=0x5c, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xcfa1, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xcfa2, .a=0x41, .x=0x7b, .y=0x0e, .sp=0x5c, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xcfa1, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xcfa1, .value=0x7c, .type=IO_READ},
        {.addr=0xcfa2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_010A) {
    const struct CPU_State initial_cpu = {.pc=0x704c, .a=0xe7, .x=0x78, .y=0x5c, .sp=0x03, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x704c, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x704d, .a=0xf3, .x=0x78, .y=0x5c, .sp=0x03, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x704c, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x704c, .value=0x7c, .type=IO_READ},
        {.addr=0x704d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_010B) {
    const struct CPU_State initial_cpu = {.pc=0x1d51, .a=0x5c, .x=0xf1, .y=0xea, .sp=0x3f, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x1d51, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x1d52, .a=0xae, .x=0xf1, .y=0xea, .sp=0x3f, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x1d51, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x1d51, .value=0x7c, .type=IO_READ},
        {.addr=0x1d52, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_010C) {
    const struct CPU_State initial_cpu = {.pc=0xebad, .a=0x6b, .x=0xd4, .y=0xfd, .sp=0xd7, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xebad, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xebae, .a=0xb5, .x=0xd4, .y=0xfd, .sp=0xd7, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xebad, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xebad, .value=0x7c, .type=IO_READ},
        {.addr=0xebae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_010D) {
    const struct CPU_State initial_cpu = {.pc=0x4e74, .a=0x99, .x=0xb5, .y=0x79, .sp=0xba, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x4e74, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x4e75, .a=0xcc, .x=0xb5, .y=0x79, .sp=0xba, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x4e74, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x4e74, .value=0x7c, .type=IO_READ},
        {.addr=0x4e75, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_010E) {
    const struct CPU_State initial_cpu = {.pc=0xcaff, .a=0xc1, .x=0x27, .y=0x57, .sp=0x23, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xcaff, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xcb00, .a=0xe0, .x=0x27, .y=0x57, .sp=0x23, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xcaff, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xcaff, .value=0x7c, .type=IO_READ},
        {.addr=0xcb00, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_010F) {
    const struct CPU_State initial_cpu = {.pc=0x99b3, .a=0xfd, .x=0xe5, .y=0xfc, .sp=0x93, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x99b3, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x99b4, .a=0xfe, .x=0xe5, .y=0xfc, .sp=0x93, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x99b3, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x99b3, .value=0x7c, .type=IO_READ},
        {.addr=0x99b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0110) {
    const struct CPU_State initial_cpu = {.pc=0xdc54, .a=0x48, .x=0x2e, .y=0xad, .sp=0xea, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xdc54, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xdc55, .a=0x24, .x=0x2e, .y=0xad, .sp=0xea, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xdc54, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xdc54, .value=0x7c, .type=IO_READ},
        {.addr=0xdc55, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0111) {
    const struct CPU_State initial_cpu = {.pc=0x46ff, .a=0x75, .x=0x5c, .y=0x2c, .sp=0x9b, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x46ff, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x4700, .a=0x3a, .x=0x5c, .y=0x2c, .sp=0x9b, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x46ff, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x46ff, .value=0x7c, .type=IO_READ},
        {.addr=0x4700, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0112) {
    const struct CPU_State initial_cpu = {.pc=0x71c9, .a=0xa6, .x=0xb4, .y=0xc5, .sp=0x25, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x71c9, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x71ca, .a=0xd3, .x=0xb4, .y=0xc5, .sp=0x25, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x71c9, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x71c9, .value=0x7c, .type=IO_READ},
        {.addr=0x71ca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0113) {
    const struct CPU_State initial_cpu = {.pc=0x22c6, .a=0x01, .x=0xb3, .y=0x02, .sp=0xa0, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x22c6, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x22c7, .a=0x80, .x=0xb3, .y=0x02, .sp=0xa0, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x22c6, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x22c6, .value=0x7c, .type=IO_READ},
        {.addr=0x22c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0114) {
    const struct CPU_State initial_cpu = {.pc=0x6590, .a=0xda, .x=0xc2, .y=0x04, .sp=0x74, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x6590, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6591, .a=0xed, .x=0xc2, .y=0x04, .sp=0x74, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x6590, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6590, .value=0x7c, .type=IO_READ},
        {.addr=0x6591, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0115) {
    const struct CPU_State initial_cpu = {.pc=0x1ec2, .a=0x09, .x=0x45, .y=0xa9, .sp=0x40, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x1ec2, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x1ec3, .a=0x84, .x=0x45, .y=0xa9, .sp=0x40, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x1ec2, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x1ec2, .value=0x7c, .type=IO_READ},
        {.addr=0x1ec3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0116) {
    const struct CPU_State initial_cpu = {.pc=0x873c, .a=0xd2, .x=0xf9, .y=0x50, .sp=0x91, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x873c, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x873d, .a=0x69, .x=0xf9, .y=0x50, .sp=0x91, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x873c, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x873c, .value=0x7c, .type=IO_READ},
        {.addr=0x873d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0117) {
    const struct CPU_State initial_cpu = {.pc=0x0282, .a=0x67, .x=0x30, .y=0x0b, .sp=0xbe, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x0282, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x0283, .a=0x33, .x=0x30, .y=0x0b, .sp=0xbe, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x0282, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x0282, .value=0x7c, .type=IO_READ},
        {.addr=0x0283, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0118) {
    const struct CPU_State initial_cpu = {.pc=0x8189, .a=0xdf, .x=0x5a, .y=0xca, .sp=0x7c, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x8189, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x818a, .a=0xef, .x=0x5a, .y=0xca, .sp=0x7c, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x8189, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x8189, .value=0x7c, .type=IO_READ},
        {.addr=0x818a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0119) {
    const struct CPU_State initial_cpu = {.pc=0xb0f7, .a=0x02, .x=0x78, .y=0x69, .sp=0x0d, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xb0f7, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xb0f8, .a=0x01, .x=0x78, .y=0x69, .sp=0x0d, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xb0f7, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xb0f7, .value=0x7c, .type=IO_READ},
        {.addr=0xb0f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_011A) {
    const struct CPU_State initial_cpu = {.pc=0x67da, .a=0xc1, .x=0x67, .y=0xe1, .sp=0x98, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x67da, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x67db, .a=0xe0, .x=0x67, .y=0xe1, .sp=0x98, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x67da, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x67da, .value=0x7c, .type=IO_READ},
        {.addr=0x67db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_011B) {
    const struct CPU_State initial_cpu = {.pc=0x0299, .a=0x70, .x=0x47, .y=0x89, .sp=0x8c, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x0299, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x029a, .a=0x38, .x=0x47, .y=0x89, .sp=0x8c, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x0299, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x0299, .value=0x7c, .type=IO_READ},
        {.addr=0x029a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_011C) {
    const struct CPU_State initial_cpu = {.pc=0xec2b, .a=0xae, .x=0x3e, .y=0x04, .sp=0xf6, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xec2b, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xec2c, .a=0x57, .x=0x3e, .y=0x04, .sp=0xf6, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xec2b, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xec2b, .value=0x7c, .type=IO_READ},
        {.addr=0xec2c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_011D) {
    const struct CPU_State initial_cpu = {.pc=0xee76, .a=0xc7, .x=0x55, .y=0x4f, .sp=0x9d, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xee76, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xee77, .a=0xe3, .x=0x55, .y=0x4f, .sp=0x9d, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xee76, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xee76, .value=0x7c, .type=IO_READ},
        {.addr=0xee77, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_011E) {
    const struct CPU_State initial_cpu = {.pc=0x7adb, .a=0x2d, .x=0xf2, .y=0x6b, .sp=0xd9, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x7adb, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x7adc, .a=0x16, .x=0xf2, .y=0x6b, .sp=0xd9, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x7adb, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x7adb, .value=0x7c, .type=IO_READ},
        {.addr=0x7adc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_011F) {
    const struct CPU_State initial_cpu = {.pc=0xf526, .a=0x47, .x=0x3b, .y=0xab, .sp=0xc1, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xf526, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xf527, .a=0xa3, .x=0x3b, .y=0xab, .sp=0xc1, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xf526, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xf526, .value=0x7c, .type=IO_READ},
        {.addr=0xf527, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0120) {
    const struct CPU_State initial_cpu = {.pc=0xbcc8, .a=0x4f, .x=0xe5, .y=0x8b, .sp=0x3a, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xbcc8, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xbcc9, .a=0xa7, .x=0xe5, .y=0x8b, .sp=0x3a, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xbcc8, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xbcc8, .value=0x7c, .type=IO_READ},
        {.addr=0xbcc9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0121) {
    const struct CPU_State initial_cpu = {.pc=0xe745, .a=0x5d, .x=0x2d, .y=0xb8, .sp=0xdf, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xe745, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xe746, .a=0xae, .x=0x2d, .y=0xb8, .sp=0xdf, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xe745, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xe745, .value=0x7c, .type=IO_READ},
        {.addr=0xe746, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0122) {
    const struct CPU_State initial_cpu = {.pc=0xc01e, .a=0xbd, .x=0x32, .y=0xa0, .sp=0x0d, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xc01e, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xc01f, .a=0x5e, .x=0x32, .y=0xa0, .sp=0x0d, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xc01e, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xc01e, .value=0x7c, .type=IO_READ},
        {.addr=0xc01f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0123) {
    const struct CPU_State initial_cpu = {.pc=0xc515, .a=0xf0, .x=0xbc, .y=0xee, .sp=0xaa, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xc515, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xc516, .a=0x78, .x=0xbc, .y=0xee, .sp=0xaa, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xc515, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xc515, .value=0x7c, .type=IO_READ},
        {.addr=0xc516, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0124) {
    const struct CPU_State initial_cpu = {.pc=0x9a90, .a=0x22, .x=0x88, .y=0x68, .sp=0x2a, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x9a90, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x9a91, .a=0x11, .x=0x88, .y=0x68, .sp=0x2a, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x9a90, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x9a90, .value=0x7c, .type=IO_READ},
        {.addr=0x9a91, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0125) {
    const struct CPU_State initial_cpu = {.pc=0x036b, .a=0xd7, .x=0x04, .y=0xa4, .sp=0xb2, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x036b, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x036c, .a=0xeb, .x=0x04, .y=0xa4, .sp=0xb2, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x036b, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x036b, .value=0x7c, .type=IO_READ},
        {.addr=0x036c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0126) {
    const struct CPU_State initial_cpu = {.pc=0x195f, .a=0x88, .x=0x38, .y=0x4e, .sp=0xff, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x195f, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x1960, .a=0x44, .x=0x38, .y=0x4e, .sp=0xff, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x195f, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x195f, .value=0x7c, .type=IO_READ},
        {.addr=0x1960, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0127) {
    const struct CPU_State initial_cpu = {.pc=0xbfbd, .a=0xcd, .x=0x57, .y=0x9f, .sp=0xeb, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xbfbd, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xbfbe, .a=0x66, .x=0x57, .y=0x9f, .sp=0xeb, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xbfbd, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xbfbd, .value=0x7c, .type=IO_READ},
        {.addr=0xbfbe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0128) {
    const struct CPU_State initial_cpu = {.pc=0xc645, .a=0xbe, .x=0x4b, .y=0x06, .sp=0x4f, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xc645, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xc646, .a=0xdf, .x=0x4b, .y=0x06, .sp=0x4f, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xc645, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xc645, .value=0x7c, .type=IO_READ},
        {.addr=0xc646, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0129) {
    const struct CPU_State initial_cpu = {.pc=0x5919, .a=0x0b, .x=0x6f, .y=0x86, .sp=0x9f, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x5919, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x591a, .a=0x05, .x=0x6f, .y=0x86, .sp=0x9f, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x5919, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x5919, .value=0x7c, .type=IO_READ},
        {.addr=0x591a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_012A) {
    const struct CPU_State initial_cpu = {.pc=0x32bb, .a=0xf1, .x=0x39, .y=0xf4, .sp=0xab, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x32bb, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x32bc, .a=0xf8, .x=0x39, .y=0xf4, .sp=0xab, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x32bb, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x32bb, .value=0x7c, .type=IO_READ},
        {.addr=0x32bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_012B) {
    const struct CPU_State initial_cpu = {.pc=0x1090, .a=0x4b, .x=0x35, .y=0xfa, .sp=0x7b, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x1090, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x1091, .a=0x25, .x=0x35, .y=0xfa, .sp=0x7b, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x1090, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x1090, .value=0x7c, .type=IO_READ},
        {.addr=0x1091, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_012C) {
    const struct CPU_State initial_cpu = {.pc=0xef93, .a=0xc8, .x=0x75, .y=0xf5, .sp=0x91, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xef93, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xef94, .a=0xe4, .x=0x75, .y=0xf5, .sp=0x91, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xef93, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xef93, .value=0x7c, .type=IO_READ},
        {.addr=0xef94, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_012D) {
    const struct CPU_State initial_cpu = {.pc=0xec57, .a=0x5d, .x=0x00, .y=0xf7, .sp=0x2e, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xec57, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xec58, .a=0xae, .x=0x00, .y=0xf7, .sp=0x2e, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xec57, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xec57, .value=0x7c, .type=IO_READ},
        {.addr=0xec58, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_012E) {
    const struct CPU_State initial_cpu = {.pc=0x595c, .a=0xb9, .x=0xdb, .y=0xe6, .sp=0x40, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x595c, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x595d, .a=0xdc, .x=0xdb, .y=0xe6, .sp=0x40, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x595c, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x595c, .value=0x7c, .type=IO_READ},
        {.addr=0x595d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_012F) {
    const struct CPU_State initial_cpu = {.pc=0x89a7, .a=0x54, .x=0xcc, .y=0xf7, .sp=0xd7, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x89a7, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x89a8, .a=0xaa, .x=0xcc, .y=0xf7, .sp=0xd7, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x89a7, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x89a7, .value=0x7c, .type=IO_READ},
        {.addr=0x89a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0130) {
    const struct CPU_State initial_cpu = {.pc=0xd18d, .a=0xd8, .x=0x48, .y=0xad, .sp=0x97, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xd18d, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xd18e, .a=0xec, .x=0x48, .y=0xad, .sp=0x97, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xd18d, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xd18d, .value=0x7c, .type=IO_READ},
        {.addr=0xd18e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0131) {
    const struct CPU_State initial_cpu = {.pc=0x0c00, .a=0xd1, .x=0x98, .y=0xc4, .sp=0x54, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x0c00, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x0c01, .a=0x68, .x=0x98, .y=0xc4, .sp=0x54, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x0c00, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x0c00, .value=0x7c, .type=IO_READ},
        {.addr=0x0c01, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0132) {
    const struct CPU_State initial_cpu = {.pc=0x84eb, .a=0xe5, .x=0xb2, .y=0xd7, .sp=0x48, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x84eb, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x84ec, .a=0x72, .x=0xb2, .y=0xd7, .sp=0x48, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x84eb, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x84eb, .value=0x7c, .type=IO_READ},
        {.addr=0x84ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0133) {
    const struct CPU_State initial_cpu = {.pc=0x043b, .a=0x9c, .x=0x00, .y=0x8d, .sp=0x2d, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x043b, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x043c, .a=0x4e, .x=0x00, .y=0x8d, .sp=0x2d, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x043b, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x043b, .value=0x7c, .type=IO_READ},
        {.addr=0x043c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0134) {
    const struct CPU_State initial_cpu = {.pc=0xf569, .a=0x3c, .x=0x06, .y=0x78, .sp=0x13, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xf569, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xf56a, .a=0x1e, .x=0x06, .y=0x78, .sp=0x13, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xf569, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xf569, .value=0x7c, .type=IO_READ},
        {.addr=0xf56a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0135) {
    const struct CPU_State initial_cpu = {.pc=0x1099, .a=0x05, .x=0xc8, .y=0xec, .sp=0x41, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x1099, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x109a, .a=0x02, .x=0xc8, .y=0xec, .sp=0x41, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x1099, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x1099, .value=0x7c, .type=IO_READ},
        {.addr=0x109a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0136) {
    const struct CPU_State initial_cpu = {.pc=0x30ed, .a=0xe5, .x=0x9f, .y=0x87, .sp=0x5d, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x30ed, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x30ee, .a=0xf2, .x=0x9f, .y=0x87, .sp=0x5d, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x30ed, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x30ed, .value=0x7c, .type=IO_READ},
        {.addr=0x30ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0137) {
    const struct CPU_State initial_cpu = {.pc=0x20c4, .a=0x79, .x=0x35, .y=0x99, .sp=0x03, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x20c4, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x20c5, .a=0xbc, .x=0x35, .y=0x99, .sp=0x03, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x20c4, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x20c4, .value=0x7c, .type=IO_READ},
        {.addr=0x20c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0138) {
    const struct CPU_State initial_cpu = {.pc=0x5bd0, .a=0x8e, .x=0x55, .y=0x76, .sp=0x18, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x5bd0, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x5bd1, .a=0x47, .x=0x55, .y=0x76, .sp=0x18, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x5bd0, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x5bd0, .value=0x7c, .type=IO_READ},
        {.addr=0x5bd1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0139) {
    const struct CPU_State initial_cpu = {.pc=0x660c, .a=0x30, .x=0xbe, .y=0xa0, .sp=0xdc, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x660c, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x660d, .a=0x18, .x=0xbe, .y=0xa0, .sp=0xdc, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x660c, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x660c, .value=0x7c, .type=IO_READ},
        {.addr=0x660d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_013A) {
    const struct CPU_State initial_cpu = {.pc=0x7931, .a=0x66, .x=0x5b, .y=0x9b, .sp=0x69, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x7931, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x7932, .a=0x33, .x=0x5b, .y=0x9b, .sp=0x69, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x7931, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x7931, .value=0x7c, .type=IO_READ},
        {.addr=0x7932, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_013B) {
    const struct CPU_State initial_cpu = {.pc=0x4c79, .a=0x95, .x=0xd1, .y=0xee, .sp=0xc0, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x4c79, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x4c7a, .a=0xca, .x=0xd1, .y=0xee, .sp=0xc0, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x4c79, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x4c79, .value=0x7c, .type=IO_READ},
        {.addr=0x4c7a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_013C) {
    const struct CPU_State initial_cpu = {.pc=0xa2e1, .a=0xf1, .x=0x35, .y=0x9f, .sp=0x45, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xa2e1, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xa2e2, .a=0xf8, .x=0x35, .y=0x9f, .sp=0x45, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xa2e1, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xa2e1, .value=0x7c, .type=IO_READ},
        {.addr=0xa2e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_013D) {
    const struct CPU_State initial_cpu = {.pc=0x0896, .a=0x24, .x=0x41, .y=0xa5, .sp=0xa5, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x0896, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x0897, .a=0x92, .x=0x41, .y=0xa5, .sp=0xa5, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0896, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x0896, .value=0x7c, .type=IO_READ},
        {.addr=0x0897, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_013E) {
    const struct CPU_State initial_cpu = {.pc=0x05c1, .a=0x7c, .x=0x4f, .y=0xac, .sp=0xfa, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x05c1, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x05c2, .a=0xbe, .x=0x4f, .y=0xac, .sp=0xfa, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x05c1, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x05c1, .value=0x7c, .type=IO_READ},
        {.addr=0x05c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_013F) {
    const struct CPU_State initial_cpu = {.pc=0xb4a8, .a=0x7f, .x=0x78, .y=0x2c, .sp=0x84, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xb4a8, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xb4a9, .a=0x3f, .x=0x78, .y=0x2c, .sp=0x84, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xb4a8, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xb4a8, .value=0x7c, .type=IO_READ},
        {.addr=0xb4a9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0140) {
    const struct CPU_State initial_cpu = {.pc=0x61f0, .a=0xb5, .x=0xc7, .y=0xa6, .sp=0xa8, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x61f0, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x61f1, .a=0xda, .x=0xc7, .y=0xa6, .sp=0xa8, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x61f0, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x61f0, .value=0x7c, .type=IO_READ},
        {.addr=0x61f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0141) {
    const struct CPU_State initial_cpu = {.pc=0x72ce, .a=0xa0, .x=0x34, .y=0xcd, .sp=0xe2, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x72ce, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x72cf, .a=0x50, .x=0x34, .y=0xcd, .sp=0xe2, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x72ce, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x72ce, .value=0x7c, .type=IO_READ},
        {.addr=0x72cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0142) {
    const struct CPU_State initial_cpu = {.pc=0x9ffd, .a=0x5f, .x=0x3b, .y=0x93, .sp=0xf8, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x9ffd, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x9ffe, .a=0xaf, .x=0x3b, .y=0x93, .sp=0xf8, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x9ffd, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x9ffd, .value=0x7c, .type=IO_READ},
        {.addr=0x9ffe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0143) {
    const struct CPU_State initial_cpu = {.pc=0x8191, .a=0x3c, .x=0x13, .y=0x1e, .sp=0x0e, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x8191, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x8192, .a=0x1e, .x=0x13, .y=0x1e, .sp=0x0e, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x8191, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x8191, .value=0x7c, .type=IO_READ},
        {.addr=0x8192, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0144) {
    const struct CPU_State initial_cpu = {.pc=0x7977, .a=0x14, .x=0x8f, .y=0xcc, .sp=0xa9, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x7977, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x7978, .a=0x0a, .x=0x8f, .y=0xcc, .sp=0xa9, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x7977, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x7977, .value=0x7c, .type=IO_READ},
        {.addr=0x7978, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0145) {
    const struct CPU_State initial_cpu = {.pc=0x1b82, .a=0x60, .x=0xb9, .y=0xfd, .sp=0x10, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x1b82, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x1b83, .a=0xb0, .x=0xb9, .y=0xfd, .sp=0x10, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x1b82, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x1b82, .value=0x7c, .type=IO_READ},
        {.addr=0x1b83, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0146) {
    const struct CPU_State initial_cpu = {.pc=0xf100, .a=0xe5, .x=0xd0, .y=0xba, .sp=0x2a, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xf100, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xf101, .a=0xf2, .x=0xd0, .y=0xba, .sp=0x2a, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xf100, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xf100, .value=0x7c, .type=IO_READ},
        {.addr=0xf101, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0147) {
    const struct CPU_State initial_cpu = {.pc=0xf5a0, .a=0xc5, .x=0xf0, .y=0x0d, .sp=0x4a, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xf5a0, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xf5a1, .a=0x62, .x=0xf0, .y=0x0d, .sp=0x4a, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xf5a0, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xf5a0, .value=0x7c, .type=IO_READ},
        {.addr=0xf5a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0148) {
    const struct CPU_State initial_cpu = {.pc=0x419a, .a=0xec, .x=0x51, .y=0x62, .sp=0x4f, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x419a, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x419b, .a=0xf6, .x=0x51, .y=0x62, .sp=0x4f, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x419a, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x419a, .value=0x7c, .type=IO_READ},
        {.addr=0x419b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0149) {
    const struct CPU_State initial_cpu = {.pc=0xc992, .a=0xb5, .x=0xb2, .y=0x32, .sp=0x22, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xc992, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xc993, .a=0xda, .x=0xb2, .y=0x32, .sp=0x22, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xc992, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xc992, .value=0x7c, .type=IO_READ},
        {.addr=0xc993, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_014A) {
    const struct CPU_State initial_cpu = {.pc=0x5eb1, .a=0xb8, .x=0x96, .y=0x7a, .sp=0x6f, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x5eb1, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x5eb2, .a=0xdc, .x=0x96, .y=0x7a, .sp=0x6f, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x5eb1, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x5eb1, .value=0x7c, .type=IO_READ},
        {.addr=0x5eb2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_014B) {
    const struct CPU_State initial_cpu = {.pc=0xf327, .a=0x09, .x=0x9f, .y=0x28, .sp=0x05, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xf327, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xf328, .a=0x84, .x=0x9f, .y=0x28, .sp=0x05, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xf327, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xf327, .value=0x7c, .type=IO_READ},
        {.addr=0xf328, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_014C) {
    const struct CPU_State initial_cpu = {.pc=0xf951, .a=0x43, .x=0x23, .y=0xf6, .sp=0xb0, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xf951, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xf952, .a=0x21, .x=0x23, .y=0xf6, .sp=0xb0, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xf951, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xf951, .value=0x7c, .type=IO_READ},
        {.addr=0xf952, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_014D) {
    const struct CPU_State initial_cpu = {.pc=0xa3ee, .a=0x74, .x=0x6a, .y=0x7d, .sp=0xf5, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xa3ee, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xa3ef, .a=0x3a, .x=0x6a, .y=0x7d, .sp=0xf5, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xa3ee, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xa3ee, .value=0x7c, .type=IO_READ},
        {.addr=0xa3ef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_014E) {
    const struct CPU_State initial_cpu = {.pc=0x7013, .a=0xa0, .x=0xa7, .y=0x34, .sp=0x80, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x7013, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x7014, .a=0xd0, .x=0xa7, .y=0x34, .sp=0x80, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x7013, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x7013, .value=0x7c, .type=IO_READ},
        {.addr=0x7014, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_014F) {
    const struct CPU_State initial_cpu = {.pc=0x2384, .a=0x34, .x=0x98, .y=0xad, .sp=0x0e, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x2384, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x2385, .a=0x9a, .x=0x98, .y=0xad, .sp=0x0e, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x2384, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x2384, .value=0x7c, .type=IO_READ},
        {.addr=0x2385, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0150) {
    const struct CPU_State initial_cpu = {.pc=0x215a, .a=0x88, .x=0x40, .y=0xbd, .sp=0x7c, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x215a, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x215b, .a=0xc4, .x=0x40, .y=0xbd, .sp=0x7c, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x215a, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x215a, .value=0x7c, .type=IO_READ},
        {.addr=0x215b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0151) {
    const struct CPU_State initial_cpu = {.pc=0xbdd9, .a=0x40, .x=0xf7, .y=0x81, .sp=0x73, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xbdd9, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xbdda, .a=0xa0, .x=0xf7, .y=0x81, .sp=0x73, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xbdd9, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xbdd9, .value=0x7c, .type=IO_READ},
        {.addr=0xbdda, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0152) {
    const struct CPU_State initial_cpu = {.pc=0xbabb, .a=0x1b, .x=0x11, .y=0x9d, .sp=0xa3, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xbabb, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xbabc, .a=0x0d, .x=0x11, .y=0x9d, .sp=0xa3, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xbabb, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xbabb, .value=0x7c, .type=IO_READ},
        {.addr=0xbabc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0153) {
    const struct CPU_State initial_cpu = {.pc=0xe391, .a=0xc1, .x=0x81, .y=0x16, .sp=0x5a, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xe391, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xe392, .a=0x60, .x=0x81, .y=0x16, .sp=0x5a, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xe391, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xe391, .value=0x7c, .type=IO_READ},
        {.addr=0xe392, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0154) {
    const struct CPU_State initial_cpu = {.pc=0x25bc, .a=0x9b, .x=0x5b, .y=0xc2, .sp=0x97, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x25bc, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x25bd, .a=0xcd, .x=0x5b, .y=0xc2, .sp=0x97, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x25bc, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x25bc, .value=0x7c, .type=IO_READ},
        {.addr=0x25bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0155) {
    const struct CPU_State initial_cpu = {.pc=0x6531, .a=0x3a, .x=0x3b, .y=0x43, .sp=0xbb, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x6531, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6532, .a=0x1d, .x=0x3b, .y=0x43, .sp=0xbb, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x6531, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6531, .value=0x7c, .type=IO_READ},
        {.addr=0x6532, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0156) {
    const struct CPU_State initial_cpu = {.pc=0x32e5, .a=0xf5, .x=0xca, .y=0x16, .sp=0xe7, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x32e5, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x32e6, .a=0x7a, .x=0xca, .y=0x16, .sp=0xe7, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x32e5, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x32e5, .value=0x7c, .type=IO_READ},
        {.addr=0x32e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0157) {
    const struct CPU_State initial_cpu = {.pc=0xf57f, .a=0x59, .x=0x06, .y=0x99, .sp=0xe2, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xf57f, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xf580, .a=0xac, .x=0x06, .y=0x99, .sp=0xe2, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xf57f, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xf57f, .value=0x7c, .type=IO_READ},
        {.addr=0xf580, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0158) {
    const struct CPU_State initial_cpu = {.pc=0x98a9, .a=0x69, .x=0x0f, .y=0xdf, .sp=0x9a, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x98a9, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x98aa, .a=0xb4, .x=0x0f, .y=0xdf, .sp=0x9a, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x98a9, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x98a9, .value=0x7c, .type=IO_READ},
        {.addr=0x98aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0159) {
    const struct CPU_State initial_cpu = {.pc=0xf5d4, .a=0x70, .x=0x67, .y=0xba, .sp=0x3b, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xf5d4, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xf5d5, .a=0xb8, .x=0x67, .y=0xba, .sp=0x3b, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xf5d4, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xf5d4, .value=0x7c, .type=IO_READ},
        {.addr=0xf5d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_015A) {
    const struct CPU_State initial_cpu = {.pc=0x6089, .a=0x0d, .x=0x39, .y=0xee, .sp=0x06, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x6089, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x608a, .a=0x86, .x=0x39, .y=0xee, .sp=0x06, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x6089, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6089, .value=0x7c, .type=IO_READ},
        {.addr=0x608a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_015B) {
    const struct CPU_State initial_cpu = {.pc=0xd911, .a=0x83, .x=0x6e, .y=0x24, .sp=0xf3, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0xd911, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xd912, .a=0xc1, .x=0x6e, .y=0x24, .sp=0xf3, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xd911, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xd911, .value=0x7c, .type=IO_READ},
        {.addr=0xd912, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_015C) {
    const struct CPU_State initial_cpu = {.pc=0xe541, .a=0x78, .x=0xde, .y=0x00, .sp=0x21, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xe541, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xe542, .a=0xbc, .x=0xde, .y=0x00, .sp=0x21, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xe541, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xe541, .value=0x7c, .type=IO_READ},
        {.addr=0xe542, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_015D) {
    const struct CPU_State initial_cpu = {.pc=0x371d, .a=0xd3, .x=0x06, .y=0xca, .sp=0x7e, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x371d, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x371e, .a=0xe9, .x=0x06, .y=0xca, .sp=0x7e, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x371d, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x371d, .value=0x7c, .type=IO_READ},
        {.addr=0x371e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_015E) {
    const struct CPU_State initial_cpu = {.pc=0x38e3, .a=0x33, .x=0x06, .y=0xb5, .sp=0x4d, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x38e3, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x38e4, .a=0x99, .x=0x06, .y=0xb5, .sp=0x4d, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x38e3, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x38e3, .value=0x7c, .type=IO_READ},
        {.addr=0x38e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_015F) {
    const struct CPU_State initial_cpu = {.pc=0x4633, .a=0x81, .x=0xb0, .y=0xf2, .sp=0xab, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x4633, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x4634, .a=0xc0, .x=0xb0, .y=0xf2, .sp=0xab, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x4633, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x4633, .value=0x7c, .type=IO_READ},
        {.addr=0x4634, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0160) {
    const struct CPU_State initial_cpu = {.pc=0xefd5, .a=0x7b, .x=0xf9, .y=0x5f, .sp=0xcf, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xefd5, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xefd6, .a=0x3d, .x=0xf9, .y=0x5f, .sp=0xcf, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xefd5, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xefd5, .value=0x7c, .type=IO_READ},
        {.addr=0xefd6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0161) {
    const struct CPU_State initial_cpu = {.pc=0xc597, .a=0x94, .x=0x97, .y=0x22, .sp=0x8a, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xc597, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xc598, .a=0xca, .x=0x97, .y=0x22, .sp=0x8a, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xc597, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xc597, .value=0x7c, .type=IO_READ},
        {.addr=0xc598, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0162) {
    const struct CPU_State initial_cpu = {.pc=0xfe18, .a=0x82, .x=0xc4, .y=0x6e, .sp=0x9c, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xfe18, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xfe19, .a=0x41, .x=0xc4, .y=0x6e, .sp=0x9c, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xfe18, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xfe18, .value=0x7c, .type=IO_READ},
        {.addr=0xfe19, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0163) {
    const struct CPU_State initial_cpu = {.pc=0x3094, .a=0x16, .x=0xd6, .y=0x83, .sp=0xcc, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x3094, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x3095, .a=0x8b, .x=0xd6, .y=0x83, .sp=0xcc, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x3094, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x3094, .value=0x7c, .type=IO_READ},
        {.addr=0x3095, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0164) {
    const struct CPU_State initial_cpu = {.pc=0x8afc, .a=0xb7, .x=0x68, .y=0x39, .sp=0x19, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x8afc, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x8afd, .a=0xdb, .x=0x68, .y=0x39, .sp=0x19, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x8afc, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x8afc, .value=0x7c, .type=IO_READ},
        {.addr=0x8afd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0165) {
    const struct CPU_State initial_cpu = {.pc=0xa7ce, .a=0x8d, .x=0xde, .y=0x4e, .sp=0x0e, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xa7ce, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xa7cf, .a=0xc6, .x=0xde, .y=0x4e, .sp=0x0e, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xa7ce, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xa7ce, .value=0x7c, .type=IO_READ},
        {.addr=0xa7cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0166) {
    const struct CPU_State initial_cpu = {.pc=0xcdb7, .a=0x1d, .x=0x30, .y=0xfc, .sp=0x90, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xcdb7, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xcdb8, .a=0x8e, .x=0x30, .y=0xfc, .sp=0x90, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xcdb7, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xcdb7, .value=0x7c, .type=IO_READ},
        {.addr=0xcdb8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0167) {
    const struct CPU_State initial_cpu = {.pc=0x904b, .a=0xef, .x=0x8e, .y=0xec, .sp=0xb0, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x904b, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x904c, .a=0xf7, .x=0x8e, .y=0xec, .sp=0xb0, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x904b, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x904b, .value=0x7c, .type=IO_READ},
        {.addr=0x904c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0168) {
    const struct CPU_State initial_cpu = {.pc=0xb980, .a=0x42, .x=0x7a, .y=0x63, .sp=0x93, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xb980, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xb981, .a=0xa1, .x=0x7a, .y=0x63, .sp=0x93, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xb980, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xb980, .value=0x7c, .type=IO_READ},
        {.addr=0xb981, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0169) {
    const struct CPU_State initial_cpu = {.pc=0xd7e0, .a=0x80, .x=0xbe, .y=0x1e, .sp=0xa1, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xd7e0, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xd7e1, .a=0x40, .x=0xbe, .y=0x1e, .sp=0xa1, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xd7e0, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xd7e0, .value=0x7c, .type=IO_READ},
        {.addr=0xd7e1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_016A) {
    const struct CPU_State initial_cpu = {.pc=0x9306, .a=0xe1, .x=0xc3, .y=0xc7, .sp=0x28, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x9306, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x9307, .a=0xf0, .x=0xc3, .y=0xc7, .sp=0x28, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x9306, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x9306, .value=0x7c, .type=IO_READ},
        {.addr=0x9307, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_016B) {
    const struct CPU_State initial_cpu = {.pc=0xafc0, .a=0xce, .x=0x05, .y=0xa6, .sp=0xe6, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xafc0, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xafc1, .a=0xe7, .x=0x05, .y=0xa6, .sp=0xe6, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xafc0, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xafc0, .value=0x7c, .type=IO_READ},
        {.addr=0xafc1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_016C) {
    const struct CPU_State initial_cpu = {.pc=0xcde8, .a=0x54, .x=0xb0, .y=0xb0, .sp=0xf7, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xcde8, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xcde9, .a=0xaa, .x=0xb0, .y=0xb0, .sp=0xf7, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xcde8, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xcde8, .value=0x7c, .type=IO_READ},
        {.addr=0xcde9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_016D) {
    const struct CPU_State initial_cpu = {.pc=0x772c, .a=0x05, .x=0x46, .y=0xf5, .sp=0xd4, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x772c, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x772d, .a=0x82, .x=0x46, .y=0xf5, .sp=0xd4, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x772c, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x772c, .value=0x7c, .type=IO_READ},
        {.addr=0x772d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_016E) {
    const struct CPU_State initial_cpu = {.pc=0x556e, .a=0x18, .x=0x8a, .y=0x61, .sp=0xde, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x556e, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x556f, .a=0x8c, .x=0x8a, .y=0x61, .sp=0xde, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x556e, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x556e, .value=0x7c, .type=IO_READ},
        {.addr=0x556f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_016F) {
    const struct CPU_State initial_cpu = {.pc=0x1d78, .a=0xd8, .x=0x92, .y=0x68, .sp=0x00, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x1d78, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x1d79, .a=0xec, .x=0x92, .y=0x68, .sp=0x00, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x1d78, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x1d78, .value=0x7c, .type=IO_READ},
        {.addr=0x1d79, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0170) {
    const struct CPU_State initial_cpu = {.pc=0x6f49, .a=0xe1, .x=0x97, .y=0x05, .sp=0x86, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x6f49, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6f4a, .a=0x70, .x=0x97, .y=0x05, .sp=0x86, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x6f49, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6f49, .value=0x7c, .type=IO_READ},
        {.addr=0x6f4a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0171) {
    const struct CPU_State initial_cpu = {.pc=0x4ea2, .a=0x52, .x=0x4b, .y=0x97, .sp=0x6c, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x4ea2, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x4ea3, .a=0x29, .x=0x4b, .y=0x97, .sp=0x6c, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x4ea2, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x4ea2, .value=0x7c, .type=IO_READ},
        {.addr=0x4ea3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0172) {
    const struct CPU_State initial_cpu = {.pc=0xcc62, .a=0x20, .x=0x60, .y=0x79, .sp=0xe5, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xcc62, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xcc63, .a=0x10, .x=0x60, .y=0x79, .sp=0xe5, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xcc62, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xcc62, .value=0x7c, .type=IO_READ},
        {.addr=0xcc63, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0173) {
    const struct CPU_State initial_cpu = {.pc=0x3927, .a=0xae, .x=0xf4, .y=0x3d, .sp=0x7e, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x3927, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x3928, .a=0xd7, .x=0xf4, .y=0x3d, .sp=0x7e, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x3927, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x3927, .value=0x7c, .type=IO_READ},
        {.addr=0x3928, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0174) {
    const struct CPU_State initial_cpu = {.pc=0xed5f, .a=0x29, .x=0xdf, .y=0x7c, .sp=0x43, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xed5f, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xed60, .a=0x14, .x=0xdf, .y=0x7c, .sp=0x43, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xed5f, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xed5f, .value=0x7c, .type=IO_READ},
        {.addr=0xed60, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0175) {
    const struct CPU_State initial_cpu = {.pc=0x8762, .a=0xe3, .x=0x04, .y=0xb6, .sp=0x82, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x8762, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x8763, .a=0xf1, .x=0x04, .y=0xb6, .sp=0x82, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x8762, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x8762, .value=0x7c, .type=IO_READ},
        {.addr=0x8763, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0176) {
    const struct CPU_State initial_cpu = {.pc=0x311d, .a=0x7c, .x=0x99, .y=0xd4, .sp=0x83, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x311d, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x311e, .a=0xbe, .x=0x99, .y=0xd4, .sp=0x83, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x311d, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x311d, .value=0x7c, .type=IO_READ},
        {.addr=0x311e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0177) {
    const struct CPU_State initial_cpu = {.pc=0xf8ed, .a=0x30, .x=0x71, .y=0x24, .sp=0x53, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xf8ed, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xf8ee, .a=0x18, .x=0x71, .y=0x24, .sp=0x53, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xf8ed, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xf8ed, .value=0x7c, .type=IO_READ},
        {.addr=0xf8ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0178) {
    const struct CPU_State initial_cpu = {.pc=0x4fd0, .a=0x93, .x=0x61, .y=0xca, .sp=0x2e, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x4fd0, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x4fd1, .a=0xc9, .x=0x61, .y=0xca, .sp=0x2e, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x4fd0, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x4fd0, .value=0x7c, .type=IO_READ},
        {.addr=0x4fd1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0179) {
    const struct CPU_State initial_cpu = {.pc=0xb487, .a=0x71, .x=0x12, .y=0x95, .sp=0xb9, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xb487, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xb488, .a=0xb8, .x=0x12, .y=0x95, .sp=0xb9, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xb487, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xb487, .value=0x7c, .type=IO_READ},
        {.addr=0xb488, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_017A) {
    const struct CPU_State initial_cpu = {.pc=0x2ab9, .a=0x32, .x=0xdf, .y=0xc2, .sp=0x4b, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x2ab9, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x2aba, .a=0x19, .x=0xdf, .y=0xc2, .sp=0x4b, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x2ab9, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x2ab9, .value=0x7c, .type=IO_READ},
        {.addr=0x2aba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_017B) {
    const struct CPU_State initial_cpu = {.pc=0x5a9a, .a=0x8f, .x=0xb3, .y=0xb3, .sp=0x3d, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x5a9a, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x5a9b, .a=0x47, .x=0xb3, .y=0xb3, .sp=0x3d, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x5a9a, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x5a9a, .value=0x7c, .type=IO_READ},
        {.addr=0x5a9b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_017C) {
    const struct CPU_State initial_cpu = {.pc=0x2ed7, .a=0xd4, .x=0x15, .y=0xd9, .sp=0xf5, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x2ed7, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x2ed8, .a=0xea, .x=0x15, .y=0xd9, .sp=0xf5, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x2ed7, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x2ed7, .value=0x7c, .type=IO_READ},
        {.addr=0x2ed8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_017D) {
    const struct CPU_State initial_cpu = {.pc=0xe331, .a=0xd6, .x=0x34, .y=0x07, .sp=0x59, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xe331, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xe332, .a=0xeb, .x=0x34, .y=0x07, .sp=0x59, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xe331, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xe331, .value=0x7c, .type=IO_READ},
        {.addr=0xe332, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_017E) {
    const struct CPU_State initial_cpu = {.pc=0xe8f6, .a=0x81, .x=0xf0, .y=0x6b, .sp=0x93, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0xe8f6, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xe8f7, .a=0xc0, .x=0xf0, .y=0x6b, .sp=0x93, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xe8f6, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xe8f6, .value=0x7c, .type=IO_READ},
        {.addr=0xe8f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_017F) {
    const struct CPU_State initial_cpu = {.pc=0xfec0, .a=0x7c, .x=0xc2, .y=0x68, .sp=0x91, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xfec0, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xfec1, .a=0x3e, .x=0xc2, .y=0x68, .sp=0x91, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xfec0, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xfec0, .value=0x7c, .type=IO_READ},
        {.addr=0xfec1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0180) {
    const struct CPU_State initial_cpu = {.pc=0x0ba1, .a=0x8f, .x=0x0e, .y=0x12, .sp=0x35, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x0ba1, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x0ba2, .a=0x47, .x=0x0e, .y=0x12, .sp=0x35, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0ba1, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x0ba1, .value=0x7c, .type=IO_READ},
        {.addr=0x0ba2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0181) {
    const struct CPU_State initial_cpu = {.pc=0xa46a, .a=0x8a, .x=0x12, .y=0x8e, .sp=0xc9, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xa46a, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xa46b, .a=0xc5, .x=0x12, .y=0x8e, .sp=0xc9, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xa46a, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xa46a, .value=0x7c, .type=IO_READ},
        {.addr=0xa46b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0182) {
    const struct CPU_State initial_cpu = {.pc=0x8121, .a=0x7b, .x=0x72, .y=0x02, .sp=0x7b, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x8121, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x8122, .a=0xbd, .x=0x72, .y=0x02, .sp=0x7b, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x8121, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x8121, .value=0x7c, .type=IO_READ},
        {.addr=0x8122, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0183) {
    const struct CPU_State initial_cpu = {.pc=0xc454, .a=0xaa, .x=0xfe, .y=0x87, .sp=0x80, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xc454, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xc455, .a=0x55, .x=0xfe, .y=0x87, .sp=0x80, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xc454, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xc454, .value=0x7c, .type=IO_READ},
        {.addr=0xc455, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0184) {
    const struct CPU_State initial_cpu = {.pc=0x989c, .a=0x3c, .x=0x89, .y=0x6f, .sp=0x63, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x989c, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x989d, .a=0x9e, .x=0x89, .y=0x6f, .sp=0x63, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x989c, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x989c, .value=0x7c, .type=IO_READ},
        {.addr=0x989d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0185) {
    const struct CPU_State initial_cpu = {.pc=0xcdd3, .a=0xf8, .x=0x5f, .y=0x7f, .sp=0xd3, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xcdd3, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xcdd4, .a=0x7c, .x=0x5f, .y=0x7f, .sp=0xd3, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xcdd3, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xcdd3, .value=0x7c, .type=IO_READ},
        {.addr=0xcdd4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0186) {
    const struct CPU_State initial_cpu = {.pc=0x73a1, .a=0xb0, .x=0x65, .y=0xee, .sp=0x01, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x73a1, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x73a2, .a=0xd8, .x=0x65, .y=0xee, .sp=0x01, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x73a1, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x73a1, .value=0x7c, .type=IO_READ},
        {.addr=0x73a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0187) {
    const struct CPU_State initial_cpu = {.pc=0x2466, .a=0xce, .x=0xfd, .y=0x97, .sp=0x55, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x2466, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x2467, .a=0x67, .x=0xfd, .y=0x97, .sp=0x55, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x2466, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x2466, .value=0x7c, .type=IO_READ},
        {.addr=0x2467, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0188) {
    const struct CPU_State initial_cpu = {.pc=0x0d8c, .a=0xa1, .x=0x3c, .y=0xf4, .sp=0xfc, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x0d8c, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x0d8d, .a=0xd0, .x=0x3c, .y=0xf4, .sp=0xfc, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x0d8c, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x0d8c, .value=0x7c, .type=IO_READ},
        {.addr=0x0d8d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0189) {
    const struct CPU_State initial_cpu = {.pc=0xe07f, .a=0x19, .x=0xf4, .y=0xda, .sp=0x2b, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xe07f, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xe080, .a=0x8c, .x=0xf4, .y=0xda, .sp=0x2b, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xe07f, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xe07f, .value=0x7c, .type=IO_READ},
        {.addr=0xe080, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_018A) {
    const struct CPU_State initial_cpu = {.pc=0xa170, .a=0x71, .x=0xec, .y=0xc5, .sp=0x0c, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xa170, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xa171, .a=0x38, .x=0xec, .y=0xc5, .sp=0x0c, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xa170, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xa170, .value=0x7c, .type=IO_READ},
        {.addr=0xa171, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_018B) {
    const struct CPU_State initial_cpu = {.pc=0x82fb, .a=0x6f, .x=0x08, .y=0x7d, .sp=0x0c, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x82fb, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x82fc, .a=0x37, .x=0x08, .y=0x7d, .sp=0x0c, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x82fb, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x82fb, .value=0x7c, .type=IO_READ},
        {.addr=0x82fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_018C) {
    const struct CPU_State initial_cpu = {.pc=0x83d8, .a=0x00, .x=0x68, .y=0xf8, .sp=0xe2, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x83d8, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x83d9, .a=0x80, .x=0x68, .y=0xf8, .sp=0xe2, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x83d8, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x83d8, .value=0x7c, .type=IO_READ},
        {.addr=0x83d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_018D) {
    const struct CPU_State initial_cpu = {.pc=0x6242, .a=0x47, .x=0x31, .y=0x2d, .sp=0x9e, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x6242, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6243, .a=0xa3, .x=0x31, .y=0x2d, .sp=0x9e, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x6242, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6242, .value=0x7c, .type=IO_READ},
        {.addr=0x6243, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_018E) {
    const struct CPU_State initial_cpu = {.pc=0x7d33, .a=0x85, .x=0x66, .y=0xa1, .sp=0x53, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x7d33, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x7d34, .a=0xc2, .x=0x66, .y=0xa1, .sp=0x53, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x7d33, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x7d33, .value=0x7c, .type=IO_READ},
        {.addr=0x7d34, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_018F) {
    const struct CPU_State initial_cpu = {.pc=0x9483, .a=0xd7, .x=0x30, .y=0x05, .sp=0x68, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x9483, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x9484, .a=0x6b, .x=0x30, .y=0x05, .sp=0x68, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x9483, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x9483, .value=0x7c, .type=IO_READ},
        {.addr=0x9484, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0190) {
    const struct CPU_State initial_cpu = {.pc=0xbb9f, .a=0x56, .x=0xb8, .y=0x3f, .sp=0x1f, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xbb9f, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xbba0, .a=0x2b, .x=0xb8, .y=0x3f, .sp=0x1f, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xbb9f, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xbb9f, .value=0x7c, .type=IO_READ},
        {.addr=0xbba0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0191) {
    const struct CPU_State initial_cpu = {.pc=0x5392, .a=0x79, .x=0xde, .y=0xee, .sp=0x9f, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x5392, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x5393, .a=0x3c, .x=0xde, .y=0xee, .sp=0x9f, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x5392, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x5392, .value=0x7c, .type=IO_READ},
        {.addr=0x5393, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0192) {
    const struct CPU_State initial_cpu = {.pc=0xaa0f, .a=0x64, .x=0xe6, .y=0xd4, .sp=0xf9, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xaa0f, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xaa10, .a=0xb2, .x=0xe6, .y=0xd4, .sp=0xf9, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xaa0f, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xaa0f, .value=0x7c, .type=IO_READ},
        {.addr=0xaa10, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0193) {
    const struct CPU_State initial_cpu = {.pc=0x06c8, .a=0x04, .x=0x3e, .y=0x6f, .sp=0xca, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x06c8, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x06c9, .a=0x82, .x=0x3e, .y=0x6f, .sp=0xca, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x06c8, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x06c8, .value=0x7c, .type=IO_READ},
        {.addr=0x06c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0194) {
    const struct CPU_State initial_cpu = {.pc=0x470b, .a=0x6f, .x=0xe5, .y=0x4d, .sp=0x18, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x470b, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x470c, .a=0xb7, .x=0xe5, .y=0x4d, .sp=0x18, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x470b, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x470b, .value=0x7c, .type=IO_READ},
        {.addr=0x470c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0195) {
    const struct CPU_State initial_cpu = {.pc=0xaef7, .a=0x18, .x=0x4e, .y=0xaa, .sp=0xf7, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xaef7, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xaef8, .a=0x0c, .x=0x4e, .y=0xaa, .sp=0xf7, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xaef7, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xaef7, .value=0x7c, .type=IO_READ},
        {.addr=0xaef8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0196) {
    const struct CPU_State initial_cpu = {.pc=0xb5b3, .a=0x47, .x=0x97, .y=0xd7, .sp=0xe6, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xb5b3, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xb5b4, .a=0xa3, .x=0x97, .y=0xd7, .sp=0xe6, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xb5b3, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xb5b3, .value=0x7c, .type=IO_READ},
        {.addr=0xb5b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0197) {
    const struct CPU_State initial_cpu = {.pc=0x595c, .a=0x47, .x=0x7e, .y=0xb4, .sp=0xee, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x595c, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x595d, .a=0x23, .x=0x7e, .y=0xb4, .sp=0xee, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x595c, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x595c, .value=0x7c, .type=IO_READ},
        {.addr=0x595d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0198) {
    const struct CPU_State initial_cpu = {.pc=0xb567, .a=0xa6, .x=0x78, .y=0x7b, .sp=0x5a, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xb567, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xb568, .a=0xd3, .x=0x78, .y=0x7b, .sp=0x5a, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xb567, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xb567, .value=0x7c, .type=IO_READ},
        {.addr=0xb568, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0199) {
    const struct CPU_State initial_cpu = {.pc=0x9eb8, .a=0x91, .x=0x83, .y=0x06, .sp=0x87, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x9eb8, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x9eb9, .a=0x48, .x=0x83, .y=0x06, .sp=0x87, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x9eb8, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x9eb8, .value=0x7c, .type=IO_READ},
        {.addr=0x9eb9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_019A) {
    const struct CPU_State initial_cpu = {.pc=0xc54a, .a=0xaf, .x=0x46, .y=0x03, .sp=0x7a, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xc54a, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xc54b, .a=0x57, .x=0x46, .y=0x03, .sp=0x7a, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xc54a, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xc54a, .value=0x7c, .type=IO_READ},
        {.addr=0xc54b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_019B) {
    const struct CPU_State initial_cpu = {.pc=0x5967, .a=0x85, .x=0xb5, .y=0xed, .sp=0x9f, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x5967, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x5968, .a=0xc2, .x=0xb5, .y=0xed, .sp=0x9f, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x5967, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x5967, .value=0x7c, .type=IO_READ},
        {.addr=0x5968, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_019C) {
    const struct CPU_State initial_cpu = {.pc=0xbe46, .a=0x66, .x=0x9c, .y=0x34, .sp=0x25, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xbe46, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xbe47, .a=0x33, .x=0x9c, .y=0x34, .sp=0x25, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xbe46, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xbe46, .value=0x7c, .type=IO_READ},
        {.addr=0xbe47, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_019D) {
    const struct CPU_State initial_cpu = {.pc=0xf622, .a=0xe8, .x=0xa1, .y=0xa7, .sp=0xbd, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xf622, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xf623, .a=0x74, .x=0xa1, .y=0xa7, .sp=0xbd, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xf622, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xf622, .value=0x7c, .type=IO_READ},
        {.addr=0xf623, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_019E) {
    const struct CPU_State initial_cpu = {.pc=0xe9eb, .a=0x53, .x=0x31, .y=0x57, .sp=0x1b, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xe9eb, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xe9ec, .a=0x29, .x=0x31, .y=0x57, .sp=0x1b, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xe9eb, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xe9eb, .value=0x7c, .type=IO_READ},
        {.addr=0xe9ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_019F) {
    const struct CPU_State initial_cpu = {.pc=0x90a7, .a=0x98, .x=0x81, .y=0x1e, .sp=0xe2, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x90a7, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x90a8, .a=0xcc, .x=0x81, .y=0x1e, .sp=0xe2, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x90a7, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x90a7, .value=0x7c, .type=IO_READ},
        {.addr=0x90a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x21d6, .a=0xd5, .x=0xcc, .y=0x6a, .sp=0xbf, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x21d6, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x21d7, .a=0xea, .x=0xcc, .y=0x6a, .sp=0xbf, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x21d6, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x21d6, .value=0x7c, .type=IO_READ},
        {.addr=0x21d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01A1) {
    const struct CPU_State initial_cpu = {.pc=0xe5a3, .a=0x9b, .x=0x88, .y=0x1e, .sp=0x06, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xe5a3, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xe5a4, .a=0x4d, .x=0x88, .y=0x1e, .sp=0x06, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xe5a3, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xe5a3, .value=0x7c, .type=IO_READ},
        {.addr=0xe5a4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01A2) {
    const struct CPU_State initial_cpu = {.pc=0x49b9, .a=0x4f, .x=0x5e, .y=0x8b, .sp=0xac, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x49b9, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x49ba, .a=0x27, .x=0x5e, .y=0x8b, .sp=0xac, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x49b9, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x49b9, .value=0x7c, .type=IO_READ},
        {.addr=0x49ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01A3) {
    const struct CPU_State initial_cpu = {.pc=0xd966, .a=0x5b, .x=0xaa, .y=0x69, .sp=0x78, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xd966, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xd967, .a=0x2d, .x=0xaa, .y=0x69, .sp=0x78, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xd966, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xd966, .value=0x7c, .type=IO_READ},
        {.addr=0xd967, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01A4) {
    const struct CPU_State initial_cpu = {.pc=0x65e2, .a=0xa9, .x=0x46, .y=0x93, .sp=0xae, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x65e2, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x65e3, .a=0xd4, .x=0x46, .y=0x93, .sp=0xae, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x65e2, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x65e2, .value=0x7c, .type=IO_READ},
        {.addr=0x65e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01A5) {
    const struct CPU_State initial_cpu = {.pc=0x9d33, .a=0x61, .x=0xac, .y=0xfe, .sp=0xab, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x9d33, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x9d34, .a=0x30, .x=0xac, .y=0xfe, .sp=0xab, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x9d33, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x9d33, .value=0x7c, .type=IO_READ},
        {.addr=0x9d34, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01A6) {
    const struct CPU_State initial_cpu = {.pc=0x61c3, .a=0x5e, .x=0xb6, .y=0xef, .sp=0x6b, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x61c3, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x61c4, .a=0x2f, .x=0xb6, .y=0xef, .sp=0x6b, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x61c3, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x61c3, .value=0x7c, .type=IO_READ},
        {.addr=0x61c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01A7) {
    const struct CPU_State initial_cpu = {.pc=0x9cc3, .a=0x55, .x=0x5d, .y=0x03, .sp=0xa6, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x9cc3, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x9cc4, .a=0x2a, .x=0x5d, .y=0x03, .sp=0xa6, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x9cc3, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x9cc3, .value=0x7c, .type=IO_READ},
        {.addr=0x9cc4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01A8) {
    const struct CPU_State initial_cpu = {.pc=0xcfe3, .a=0x43, .x=0x34, .y=0x39, .sp=0x4b, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xcfe3, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xcfe4, .a=0xa1, .x=0x34, .y=0x39, .sp=0x4b, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xcfe3, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xcfe3, .value=0x7c, .type=IO_READ},
        {.addr=0xcfe4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01A9) {
    const struct CPU_State initial_cpu = {.pc=0xd3c3, .a=0x88, .x=0xae, .y=0x47, .sp=0x57, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xd3c3, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xd3c4, .a=0x44, .x=0xae, .y=0x47, .sp=0x57, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xd3c3, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xd3c3, .value=0x7c, .type=IO_READ},
        {.addr=0xd3c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01AA) {
    const struct CPU_State initial_cpu = {.pc=0xd40e, .a=0x5c, .x=0x31, .y=0x98, .sp=0xe6, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xd40e, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xd40f, .a=0xae, .x=0x31, .y=0x98, .sp=0xe6, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xd40e, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xd40e, .value=0x7c, .type=IO_READ},
        {.addr=0xd40f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x71e2, .a=0xe7, .x=0x1a, .y=0x06, .sp=0x60, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x71e2, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x71e3, .a=0x73, .x=0x1a, .y=0x06, .sp=0x60, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x71e2, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x71e2, .value=0x7c, .type=IO_READ},
        {.addr=0x71e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01AC) {
    const struct CPU_State initial_cpu = {.pc=0x29c8, .a=0x78, .x=0x3c, .y=0xb9, .sp=0x04, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x29c8, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x29c9, .a=0x3c, .x=0x3c, .y=0xb9, .sp=0x04, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x29c8, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x29c8, .value=0x7c, .type=IO_READ},
        {.addr=0x29c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01AD) {
    const struct CPU_State initial_cpu = {.pc=0xdd2e, .a=0x10, .x=0x56, .y=0x4a, .sp=0x52, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xdd2e, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xdd2f, .a=0x08, .x=0x56, .y=0x4a, .sp=0x52, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xdd2e, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xdd2e, .value=0x7c, .type=IO_READ},
        {.addr=0xdd2f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01AE) {
    const struct CPU_State initial_cpu = {.pc=0x7f0f, .a=0xc6, .x=0x9b, .y=0x91, .sp=0x3c, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x7f0f, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x7f10, .a=0x63, .x=0x9b, .y=0x91, .sp=0x3c, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x7f0f, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x7f0f, .value=0x7c, .type=IO_READ},
        {.addr=0x7f10, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01AF) {
    const struct CPU_State initial_cpu = {.pc=0xb6bf, .a=0xeb, .x=0x4d, .y=0x0c, .sp=0xed, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xb6bf, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xb6c0, .a=0x75, .x=0x4d, .y=0x0c, .sp=0xed, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xb6bf, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xb6bf, .value=0x7c, .type=IO_READ},
        {.addr=0xb6c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x1579, .a=0x2a, .x=0x31, .y=0xcb, .sp=0x6d, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x1579, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x157a, .a=0x95, .x=0x31, .y=0xcb, .sp=0x6d, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x1579, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x1579, .value=0x7c, .type=IO_READ},
        {.addr=0x157a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01B1) {
    const struct CPU_State initial_cpu = {.pc=0x675a, .a=0x3e, .x=0xf5, .y=0x1d, .sp=0xc8, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x675a, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x675b, .a=0x9f, .x=0xf5, .y=0x1d, .sp=0xc8, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x675a, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x675a, .value=0x7c, .type=IO_READ},
        {.addr=0x675b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x9526, .a=0x7a, .x=0x3e, .y=0x14, .sp=0x77, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x9526, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x9527, .a=0x3d, .x=0x3e, .y=0x14, .sp=0x77, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x9526, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x9526, .value=0x7c, .type=IO_READ},
        {.addr=0x9527, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01B3) {
    const struct CPU_State initial_cpu = {.pc=0x94e7, .a=0xd9, .x=0x35, .y=0xab, .sp=0xa4, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x94e7, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x94e8, .a=0xec, .x=0x35, .y=0xab, .sp=0xa4, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x94e7, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x94e7, .value=0x7c, .type=IO_READ},
        {.addr=0x94e8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01B4) {
    const struct CPU_State initial_cpu = {.pc=0xa47e, .a=0x49, .x=0x01, .y=0xe8, .sp=0x21, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xa47e, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xa47f, .a=0xa4, .x=0x01, .y=0xe8, .sp=0x21, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xa47e, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xa47e, .value=0x7c, .type=IO_READ},
        {.addr=0xa47f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01B5) {
    const struct CPU_State initial_cpu = {.pc=0xfd18, .a=0xaf, .x=0xa3, .y=0x95, .sp=0x8c, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xfd18, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xfd19, .a=0x57, .x=0xa3, .y=0x95, .sp=0x8c, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xfd18, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xfd18, .value=0x7c, .type=IO_READ},
        {.addr=0xfd19, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01B6) {
    const struct CPU_State initial_cpu = {.pc=0x4497, .a=0x5d, .x=0x40, .y=0xe0, .sp=0x08, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x4497, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x4498, .a=0x2e, .x=0x40, .y=0xe0, .sp=0x08, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x4497, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x4497, .value=0x7c, .type=IO_READ},
        {.addr=0x4498, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01B7) {
    const struct CPU_State initial_cpu = {.pc=0x639f, .a=0xf4, .x=0x3b, .y=0x2b, .sp=0xac, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x639f, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x63a0, .a=0xfa, .x=0x3b, .y=0x2b, .sp=0xac, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x639f, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x639f, .value=0x7c, .type=IO_READ},
        {.addr=0x63a0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01B8) {
    const struct CPU_State initial_cpu = {.pc=0xf6e4, .a=0xf5, .x=0x75, .y=0xf0, .sp=0xba, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xf6e4, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xf6e5, .a=0xfa, .x=0x75, .y=0xf0, .sp=0xba, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xf6e4, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xf6e4, .value=0x7c, .type=IO_READ},
        {.addr=0xf6e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01B9) {
    const struct CPU_State initial_cpu = {.pc=0xcd8f, .a=0xf7, .x=0x13, .y=0x14, .sp=0x0f, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xcd8f, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xcd90, .a=0x7b, .x=0x13, .y=0x14, .sp=0x0f, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xcd8f, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xcd8f, .value=0x7c, .type=IO_READ},
        {.addr=0xcd90, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01BA) {
    const struct CPU_State initial_cpu = {.pc=0x0e86, .a=0x7d, .x=0xd0, .y=0x6c, .sp=0x38, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x0e86, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x0e87, .a=0x3e, .x=0xd0, .y=0x6c, .sp=0x38, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0e86, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x0e86, .value=0x7c, .type=IO_READ},
        {.addr=0x0e87, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01BB) {
    const struct CPU_State initial_cpu = {.pc=0x0569, .a=0x55, .x=0x36, .y=0x82, .sp=0xa4, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0569, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x056a, .a=0x2a, .x=0x36, .y=0x82, .sp=0xa4, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x0569, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x0569, .value=0x7c, .type=IO_READ},
        {.addr=0x056a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01BC) {
    const struct CPU_State initial_cpu = {.pc=0xe9f0, .a=0x4b, .x=0x70, .y=0xff, .sp=0x3c, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xe9f0, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xe9f1, .a=0xa5, .x=0x70, .y=0xff, .sp=0x3c, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xe9f0, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xe9f0, .value=0x7c, .type=IO_READ},
        {.addr=0xe9f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01BD) {
    const struct CPU_State initial_cpu = {.pc=0x2c35, .a=0x79, .x=0x77, .y=0x09, .sp=0x1a, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x2c35, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x2c36, .a=0xbc, .x=0x77, .y=0x09, .sp=0x1a, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x2c35, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x2c35, .value=0x7c, .type=IO_READ},
        {.addr=0x2c36, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01BE) {
    const struct CPU_State initial_cpu = {.pc=0xec6b, .a=0xf3, .x=0x14, .y=0x9a, .sp=0x19, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xec6b, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xec6c, .a=0xf9, .x=0x14, .y=0x9a, .sp=0x19, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xec6b, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xec6b, .value=0x7c, .type=IO_READ},
        {.addr=0xec6c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01BF) {
    const struct CPU_State initial_cpu = {.pc=0xb6a6, .a=0x34, .x=0x39, .y=0x15, .sp=0x95, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xb6a6, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xb6a7, .a=0x1a, .x=0x39, .y=0x15, .sp=0x95, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xb6a6, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xb6a6, .value=0x7c, .type=IO_READ},
        {.addr=0xb6a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01C0) {
    const struct CPU_State initial_cpu = {.pc=0x3009, .a=0x9b, .x=0x67, .y=0x46, .sp=0x9c, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x3009, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x300a, .a=0x4d, .x=0x67, .y=0x46, .sp=0x9c, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x3009, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x3009, .value=0x7c, .type=IO_READ},
        {.addr=0x300a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x6b9c, .a=0xbc, .x=0x4b, .y=0x1b, .sp=0x33, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x6b9c, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6b9d, .a=0x5e, .x=0x4b, .y=0x1b, .sp=0x33, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x6b9c, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6b9c, .value=0x7c, .type=IO_READ},
        {.addr=0x6b9d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01C2) {
    const struct CPU_State initial_cpu = {.pc=0xa57c, .a=0x6d, .x=0x28, .y=0x09, .sp=0x72, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xa57c, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xa57d, .a=0x36, .x=0x28, .y=0x09, .sp=0x72, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xa57c, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xa57c, .value=0x7c, .type=IO_READ},
        {.addr=0xa57d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01C3) {
    const struct CPU_State initial_cpu = {.pc=0x3c35, .a=0x2c, .x=0x07, .y=0xf2, .sp=0xcc, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x3c35, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x3c36, .a=0x96, .x=0x07, .y=0xf2, .sp=0xcc, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x3c35, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x3c35, .value=0x7c, .type=IO_READ},
        {.addr=0x3c36, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x5a12, .a=0x0b, .x=0xa3, .y=0xfb, .sp=0x35, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x5a12, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x5a13, .a=0x05, .x=0xa3, .y=0xfb, .sp=0x35, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x5a12, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x5a12, .value=0x7c, .type=IO_READ},
        {.addr=0x5a13, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x6aa9, .a=0xd1, .x=0x12, .y=0x10, .sp=0x77, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x6aa9, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6aaa, .a=0x68, .x=0x12, .y=0x10, .sp=0x77, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x6aa9, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6aa9, .value=0x7c, .type=IO_READ},
        {.addr=0x6aaa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01C6) {
    const struct CPU_State initial_cpu = {.pc=0xa01d, .a=0x03, .x=0x0c, .y=0x04, .sp=0x92, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xa01d, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xa01e, .a=0x01, .x=0x0c, .y=0x04, .sp=0x92, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xa01d, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xa01d, .value=0x7c, .type=IO_READ},
        {.addr=0xa01e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01C7) {
    const struct CPU_State initial_cpu = {.pc=0x433c, .a=0x68, .x=0x37, .y=0xdc, .sp=0x88, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x433c, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x433d, .a=0xb4, .x=0x37, .y=0xdc, .sp=0x88, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x433c, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x433c, .value=0x7c, .type=IO_READ},
        {.addr=0x433d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01C8) {
    const struct CPU_State initial_cpu = {.pc=0x5330, .a=0xa5, .x=0x55, .y=0x80, .sp=0x2a, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x5330, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x5331, .a=0x52, .x=0x55, .y=0x80, .sp=0x2a, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x5330, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x5330, .value=0x7c, .type=IO_READ},
        {.addr=0x5331, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01C9) {
    const struct CPU_State initial_cpu = {.pc=0x4341, .a=0xa7, .x=0xb1, .y=0x6f, .sp=0x2b, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x4341, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x4342, .a=0x53, .x=0xb1, .y=0x6f, .sp=0x2b, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x4341, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x4341, .value=0x7c, .type=IO_READ},
        {.addr=0x4342, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01CA) {
    const struct CPU_State initial_cpu = {.pc=0x3787, .a=0x30, .x=0xe3, .y=0x79, .sp=0xd0, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x3787, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x3788, .a=0x98, .x=0xe3, .y=0x79, .sp=0xd0, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x3787, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x3787, .value=0x7c, .type=IO_READ},
        {.addr=0x3788, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01CB) {
    const struct CPU_State initial_cpu = {.pc=0xbd01, .a=0xf3, .x=0x73, .y=0xb7, .sp=0xac, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xbd01, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xbd02, .a=0x79, .x=0x73, .y=0xb7, .sp=0xac, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xbd01, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xbd01, .value=0x7c, .type=IO_READ},
        {.addr=0xbd02, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01CC) {
    const struct CPU_State initial_cpu = {.pc=0xd62c, .a=0x84, .x=0x1d, .y=0xa6, .sp=0x87, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xd62c, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xd62d, .a=0xc2, .x=0x1d, .y=0xa6, .sp=0x87, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xd62c, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xd62c, .value=0x7c, .type=IO_READ},
        {.addr=0xd62d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x35de, .a=0xac, .x=0x1f, .y=0x91, .sp=0xa8, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x35de, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x35df, .a=0x56, .x=0x1f, .y=0x91, .sp=0xa8, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x35de, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x35de, .value=0x7c, .type=IO_READ},
        {.addr=0x35df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01CE) {
    const struct CPU_State initial_cpu = {.pc=0xb842, .a=0xdb, .x=0xb6, .y=0x9f, .sp=0x1c, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xb842, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xb843, .a=0xed, .x=0xb6, .y=0x9f, .sp=0x1c, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xb842, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xb842, .value=0x7c, .type=IO_READ},
        {.addr=0xb843, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x0124, .a=0xec, .x=0xb7, .y=0xdb, .sp=0xf1, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x0125, .a=0xf6, .x=0xb7, .y=0xdb, .sp=0xf1, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x0124, .value=0x7c, .type=IO_READ},
        {.addr=0x0125, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01D0) {
    const struct CPU_State initial_cpu = {.pc=0x8b03, .a=0xbd, .x=0x95, .y=0x20, .sp=0x96, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x8b03, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x8b04, .a=0xde, .x=0x95, .y=0x20, .sp=0x96, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x8b03, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x8b03, .value=0x7c, .type=IO_READ},
        {.addr=0x8b04, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01D1) {
    const struct CPU_State initial_cpu = {.pc=0xeb73, .a=0x79, .x=0xd5, .y=0x10, .sp=0x39, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xeb73, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xeb74, .a=0x3c, .x=0xd5, .y=0x10, .sp=0x39, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xeb73, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xeb73, .value=0x7c, .type=IO_READ},
        {.addr=0xeb74, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01D2) {
    const struct CPU_State initial_cpu = {.pc=0xa467, .a=0x70, .x=0xd7, .y=0x75, .sp=0x95, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xa467, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xa468, .a=0x38, .x=0xd7, .y=0x75, .sp=0x95, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xa467, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xa467, .value=0x7c, .type=IO_READ},
        {.addr=0xa468, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01D3) {
    const struct CPU_State initial_cpu = {.pc=0x0955, .a=0xc0, .x=0x88, .y=0x6e, .sp=0xc4, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x0955, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x0956, .a=0xe0, .x=0x88, .y=0x6e, .sp=0xc4, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0955, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x0955, .value=0x7c, .type=IO_READ},
        {.addr=0x0956, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01D4) {
    const struct CPU_State initial_cpu = {.pc=0xfa80, .a=0x93, .x=0x8b, .y=0x42, .sp=0x15, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xfa80, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xfa81, .a=0x49, .x=0x8b, .y=0x42, .sp=0x15, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xfa80, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xfa80, .value=0x7c, .type=IO_READ},
        {.addr=0xfa81, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01D5) {
    const struct CPU_State initial_cpu = {.pc=0x20a4, .a=0x32, .x=0x57, .y=0xdc, .sp=0xa9, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x20a4, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x20a5, .a=0x99, .x=0x57, .y=0xdc, .sp=0xa9, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x20a4, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x20a4, .value=0x7c, .type=IO_READ},
        {.addr=0x20a5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01D6) {
    const struct CPU_State initial_cpu = {.pc=0xce77, .a=0x53, .x=0xdc, .y=0x4b, .sp=0xff, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xce77, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xce78, .a=0xa9, .x=0xdc, .y=0x4b, .sp=0xff, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xce77, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xce77, .value=0x7c, .type=IO_READ},
        {.addr=0xce78, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01D7) {
    const struct CPU_State initial_cpu = {.pc=0x1189, .a=0x45, .x=0x1e, .y=0x4e, .sp=0x76, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x1189, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x118a, .a=0x22, .x=0x1e, .y=0x4e, .sp=0x76, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x1189, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x1189, .value=0x7c, .type=IO_READ},
        {.addr=0x118a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01D8) {
    const struct CPU_State initial_cpu = {.pc=0xba86, .a=0x2e, .x=0x1b, .y=0xba, .sp=0xdc, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xba86, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xba87, .a=0x97, .x=0x1b, .y=0xba, .sp=0xdc, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xba86, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xba86, .value=0x7c, .type=IO_READ},
        {.addr=0xba87, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01D9) {
    const struct CPU_State initial_cpu = {.pc=0xe86f, .a=0xab, .x=0x20, .y=0x3c, .sp=0xe0, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xe86f, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xe870, .a=0x55, .x=0x20, .y=0x3c, .sp=0xe0, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xe86f, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xe86f, .value=0x7c, .type=IO_READ},
        {.addr=0xe870, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01DA) {
    const struct CPU_State initial_cpu = {.pc=0xf6fa, .a=0xdf, .x=0x48, .y=0xc1, .sp=0xce, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xf6fa, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xf6fb, .a=0xef, .x=0x48, .y=0xc1, .sp=0xce, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xf6fa, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xf6fa, .value=0x7c, .type=IO_READ},
        {.addr=0xf6fb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01DB) {
    const struct CPU_State initial_cpu = {.pc=0xcbff, .a=0xfc, .x=0x60, .y=0xef, .sp=0xfd, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xcbff, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xcc00, .a=0xfe, .x=0x60, .y=0xef, .sp=0xfd, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xcbff, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xcbff, .value=0x7c, .type=IO_READ},
        {.addr=0xcc00, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x6ed5, .a=0x84, .x=0x7b, .y=0x24, .sp=0xaa, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x6ed5, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6ed6, .a=0x42, .x=0x7b, .y=0x24, .sp=0xaa, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x6ed5, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6ed5, .value=0x7c, .type=IO_READ},
        {.addr=0x6ed6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x1163, .a=0x3b, .x=0x2f, .y=0xb9, .sp=0x32, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x1163, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x1164, .a=0x9d, .x=0x2f, .y=0xb9, .sp=0x32, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x1163, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x1163, .value=0x7c, .type=IO_READ},
        {.addr=0x1164, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01DE) {
    const struct CPU_State initial_cpu = {.pc=0xf615, .a=0xfe, .x=0xfa, .y=0x47, .sp=0xd7, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xf615, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xf616, .a=0x7f, .x=0xfa, .y=0x47, .sp=0xd7, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xf615, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xf615, .value=0x7c, .type=IO_READ},
        {.addr=0xf616, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01DF) {
    const struct CPU_State initial_cpu = {.pc=0x72a0, .a=0x7d, .x=0xdd, .y=0x47, .sp=0x51, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x72a0, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x72a1, .a=0xbe, .x=0xdd, .y=0x47, .sp=0x51, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x72a0, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x72a0, .value=0x7c, .type=IO_READ},
        {.addr=0x72a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01E0) {
    const struct CPU_State initial_cpu = {.pc=0x9b9e, .a=0xa8, .x=0xfc, .y=0x7d, .sp=0x01, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x9b9e, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x9b9f, .a=0x54, .x=0xfc, .y=0x7d, .sp=0x01, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x9b9e, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x9b9e, .value=0x7c, .type=IO_READ},
        {.addr=0x9b9f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x1715, .a=0xc0, .x=0xe3, .y=0x66, .sp=0xa3, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x1715, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x1716, .a=0x60, .x=0xe3, .y=0x66, .sp=0xa3, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x1715, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x1715, .value=0x7c, .type=IO_READ},
        {.addr=0x1716, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01E2) {
    const struct CPU_State initial_cpu = {.pc=0x0359, .a=0x65, .x=0xa3, .y=0xf1, .sp=0x72, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x0359, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x035a, .a=0x32, .x=0xa3, .y=0xf1, .sp=0x72, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0359, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x0359, .value=0x7c, .type=IO_READ},
        {.addr=0x035a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01E3) {
    const struct CPU_State initial_cpu = {.pc=0xbba7, .a=0x3a, .x=0xbe, .y=0x99, .sp=0xa0, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xbba7, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xbba8, .a=0x9d, .x=0xbe, .y=0x99, .sp=0xa0, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xbba7, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xbba7, .value=0x7c, .type=IO_READ},
        {.addr=0xbba8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01E4) {
    const struct CPU_State initial_cpu = {.pc=0xa03a, .a=0x10, .x=0xaf, .y=0x09, .sp=0x8d, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xa03a, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xa03b, .a=0x08, .x=0xaf, .y=0x09, .sp=0x8d, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xa03a, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xa03a, .value=0x7c, .type=IO_READ},
        {.addr=0xa03b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01E5) {
    const struct CPU_State initial_cpu = {.pc=0xc0d9, .a=0x4a, .x=0x86, .y=0x3d, .sp=0x8f, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xc0d9, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xc0da, .a=0xa5, .x=0x86, .y=0x3d, .sp=0x8f, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xc0d9, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xc0d9, .value=0x7c, .type=IO_READ},
        {.addr=0xc0da, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01E6) {
    const struct CPU_State initial_cpu = {.pc=0xf7ed, .a=0x22, .x=0x2a, .y=0x9a, .sp=0x1b, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xf7ed, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xf7ee, .a=0x11, .x=0x2a, .y=0x9a, .sp=0x1b, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xf7ed, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xf7ed, .value=0x7c, .type=IO_READ},
        {.addr=0xf7ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01E7) {
    const struct CPU_State initial_cpu = {.pc=0xa6db, .a=0x0c, .x=0xa1, .y=0x0f, .sp=0x86, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xa6db, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xa6dc, .a=0x06, .x=0xa1, .y=0x0f, .sp=0x86, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xa6db, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xa6db, .value=0x7c, .type=IO_READ},
        {.addr=0xa6dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01E8) {
    const struct CPU_State initial_cpu = {.pc=0x38b1, .a=0x0d, .x=0xc5, .y=0x12, .sp=0x7c, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x38b1, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x38b2, .a=0x06, .x=0xc5, .y=0x12, .sp=0x7c, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x38b1, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x38b1, .value=0x7c, .type=IO_READ},
        {.addr=0x38b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01E9) {
    const struct CPU_State initial_cpu = {.pc=0x1d9f, .a=0xda, .x=0x1d, .y=0xfe, .sp=0x0b, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x1d9f, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x1da0, .a=0xed, .x=0x1d, .y=0xfe, .sp=0x0b, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x1d9f, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x1d9f, .value=0x7c, .type=IO_READ},
        {.addr=0x1da0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01EA) {
    const struct CPU_State initial_cpu = {.pc=0x6b05, .a=0xed, .x=0xe3, .y=0x4f, .sp=0x4a, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x6b05, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6b06, .a=0xf6, .x=0xe3, .y=0x4f, .sp=0x4a, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x6b05, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6b05, .value=0x7c, .type=IO_READ},
        {.addr=0x6b06, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01EB) {
    const struct CPU_State initial_cpu = {.pc=0x0378, .a=0x10, .x=0x1b, .y=0x18, .sp=0x23, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0378, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x0379, .a=0x88, .x=0x1b, .y=0x18, .sp=0x23, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0378, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x0378, .value=0x7c, .type=IO_READ},
        {.addr=0x0379, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01EC) {
    const struct CPU_State initial_cpu = {.pc=0x95f0, .a=0x06, .x=0x17, .y=0x79, .sp=0xc7, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x95f0, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x95f1, .a=0x83, .x=0x17, .y=0x79, .sp=0xc7, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x95f0, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x95f0, .value=0x7c, .type=IO_READ},
        {.addr=0x95f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01ED) {
    const struct CPU_State initial_cpu = {.pc=0x2fc1, .a=0x3c, .x=0xcc, .y=0xce, .sp=0x03, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x2fc1, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x2fc2, .a=0x1e, .x=0xcc, .y=0xce, .sp=0x03, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x2fc1, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x2fc1, .value=0x7c, .type=IO_READ},
        {.addr=0x2fc2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01EE) {
    const struct CPU_State initial_cpu = {.pc=0xe098, .a=0x71, .x=0x82, .y=0x3e, .sp=0x0f, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xe098, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xe099, .a=0xb8, .x=0x82, .y=0x3e, .sp=0x0f, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xe098, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xe098, .value=0x7c, .type=IO_READ},
        {.addr=0xe099, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01EF) {
    const struct CPU_State initial_cpu = {.pc=0xb9dc, .a=0x15, .x=0x7e, .y=0xc8, .sp=0x2e, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xb9dc, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xb9dd, .a=0x0a, .x=0x7e, .y=0xc8, .sp=0x2e, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xb9dc, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xb9dc, .value=0x7c, .type=IO_READ},
        {.addr=0xb9dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01F0) {
    const struct CPU_State initial_cpu = {.pc=0x0b9c, .a=0x28, .x=0x24, .y=0xb2, .sp=0x98, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x0b9c, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x0b9d, .a=0x14, .x=0x24, .y=0xb2, .sp=0x98, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x0b9c, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x0b9c, .value=0x7c, .type=IO_READ},
        {.addr=0x0b9d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01F1) {
    const struct CPU_State initial_cpu = {.pc=0xe346, .a=0x16, .x=0xf2, .y=0xa4, .sp=0x5d, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xe346, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xe347, .a=0x8b, .x=0xf2, .y=0xa4, .sp=0x5d, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xe346, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xe346, .value=0x7c, .type=IO_READ},
        {.addr=0xe347, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01F2) {
    const struct CPU_State initial_cpu = {.pc=0x6b2e, .a=0xa7, .x=0xaa, .y=0xb3, .sp=0x70, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x6b2e, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6b2f, .a=0xd3, .x=0xaa, .y=0xb3, .sp=0x70, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x6b2e, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6b2e, .value=0x7c, .type=IO_READ},
        {.addr=0x6b2f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01F3) {
    const struct CPU_State initial_cpu = {.pc=0xdcef, .a=0xd0, .x=0xcb, .y=0x16, .sp=0x23, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xdcef, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xdcf0, .a=0xe8, .x=0xcb, .y=0x16, .sp=0x23, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xdcef, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xdcef, .value=0x7c, .type=IO_READ},
        {.addr=0xdcf0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01F4) {
    const struct CPU_State initial_cpu = {.pc=0x8768, .a=0xd5, .x=0xe7, .y=0xde, .sp=0x8e, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x8768, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x8769, .a=0x6a, .x=0xe7, .y=0xde, .sp=0x8e, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x8768, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x8768, .value=0x7c, .type=IO_READ},
        {.addr=0x8769, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01F5) {
    const struct CPU_State initial_cpu = {.pc=0x45e9, .a=0x22, .x=0xd2, .y=0x4a, .sp=0xef, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x45e9, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x45ea, .a=0x91, .x=0xd2, .y=0x4a, .sp=0xef, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x45e9, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x45e9, .value=0x7c, .type=IO_READ},
        {.addr=0x45ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01F6) {
    const struct CPU_State initial_cpu = {.pc=0x3d48, .a=0x5b, .x=0xdf, .y=0xaa, .sp=0x15, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x3d48, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x3d49, .a=0xad, .x=0xdf, .y=0xaa, .sp=0x15, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x3d48, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x3d48, .value=0x7c, .type=IO_READ},
        {.addr=0x3d49, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01F7) {
    const struct CPU_State initial_cpu = {.pc=0x3218, .a=0x9e, .x=0x9d, .y=0x7e, .sp=0x29, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x3218, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x3219, .a=0x4f, .x=0x9d, .y=0x7e, .sp=0x29, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x3218, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x3218, .value=0x7c, .type=IO_READ},
        {.addr=0x3219, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01F8) {
    const struct CPU_State initial_cpu = {.pc=0x760f, .a=0x38, .x=0x7b, .y=0xed, .sp=0x19, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x760f, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x7610, .a=0x1c, .x=0x7b, .y=0xed, .sp=0x19, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x760f, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x760f, .value=0x7c, .type=IO_READ},
        {.addr=0x7610, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x6e2f, .a=0xda, .x=0xb1, .y=0x1a, .sp=0xeb, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x6e2f, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6e30, .a=0x6d, .x=0xb1, .y=0x1a, .sp=0xeb, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x6e2f, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6e2f, .value=0x7c, .type=IO_READ},
        {.addr=0x6e30, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01FA) {
    const struct CPU_State initial_cpu = {.pc=0x7035, .a=0x8b, .x=0x92, .y=0x99, .sp=0x2f, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x7035, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x7036, .a=0x45, .x=0x92, .y=0x99, .sp=0x2f, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x7035, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x7035, .value=0x7c, .type=IO_READ},
        {.addr=0x7036, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01FB) {
    const struct CPU_State initial_cpu = {.pc=0x57fb, .a=0xdf, .x=0x67, .y=0x0c, .sp=0x60, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x57fb, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x57fc, .a=0x6f, .x=0x67, .y=0x0c, .sp=0x60, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x57fb, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x57fb, .value=0x7c, .type=IO_READ},
        {.addr=0x57fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01FC) {
    const struct CPU_State initial_cpu = {.pc=0xb551, .a=0xb5, .x=0x3d, .y=0xf1, .sp=0x88, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xb551, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xb552, .a=0x5a, .x=0x3d, .y=0xf1, .sp=0x88, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xb551, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xb551, .value=0x7c, .type=IO_READ},
        {.addr=0xb552, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01FD) {
    const struct CPU_State initial_cpu = {.pc=0xfdb2, .a=0xd5, .x=0xa1, .y=0x0c, .sp=0x4e, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xfdb2, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xfdb3, .a=0x6a, .x=0xa1, .y=0x0c, .sp=0x4e, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xfdb2, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xfdb2, .value=0x7c, .type=IO_READ},
        {.addr=0xfdb3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01FE) {
    const struct CPU_State initial_cpu = {.pc=0x1263, .a=0xf9, .x=0x41, .y=0x78, .sp=0x59, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x1263, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x1264, .a=0x7c, .x=0x41, .y=0x78, .sp=0x59, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x1263, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x1263, .value=0x7c, .type=IO_READ},
        {.addr=0x1264, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x31e0, .a=0x8c, .x=0xaf, .y=0x24, .sp=0xae, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x31e0, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x31e1, .a=0xc6, .x=0xaf, .y=0x24, .sp=0xae, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x31e0, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x31e0, .value=0x7c, .type=IO_READ},
        {.addr=0x31e1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0200) {
    const struct CPU_State initial_cpu = {.pc=0x0a54, .a=0x9a, .x=0x97, .y=0x19, .sp=0x62, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x0a54, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x0a55, .a=0x4d, .x=0x97, .y=0x19, .sp=0x62, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x0a54, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x0a54, .value=0x7c, .type=IO_READ},
        {.addr=0x0a55, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0201) {
    const struct CPU_State initial_cpu = {.pc=0x1a7d, .a=0xad, .x=0x9d, .y=0x91, .sp=0x13, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x1a7d, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x1a7e, .a=0x56, .x=0x9d, .y=0x91, .sp=0x13, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x1a7d, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x1a7d, .value=0x7c, .type=IO_READ},
        {.addr=0x1a7e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0202) {
    const struct CPU_State initial_cpu = {.pc=0xa6f3, .a=0x60, .x=0xcd, .y=0x87, .sp=0xa6, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xa6f3, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xa6f4, .a=0x30, .x=0xcd, .y=0x87, .sp=0xa6, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xa6f3, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xa6f3, .value=0x7c, .type=IO_READ},
        {.addr=0xa6f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0203) {
    const struct CPU_State initial_cpu = {.pc=0x1494, .a=0x23, .x=0x9d, .y=0x1d, .sp=0x83, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x1494, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x1495, .a=0x91, .x=0x9d, .y=0x1d, .sp=0x83, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x1494, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x1494, .value=0x7c, .type=IO_READ},
        {.addr=0x1495, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0204) {
    const struct CPU_State initial_cpu = {.pc=0x068a, .a=0x47, .x=0x7a, .y=0x89, .sp=0xb7, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x068a, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x068b, .a=0x23, .x=0x7a, .y=0x89, .sp=0xb7, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x068a, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x068a, .value=0x7c, .type=IO_READ},
        {.addr=0x068b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0205) {
    const struct CPU_State initial_cpu = {.pc=0x7b6f, .a=0xa2, .x=0xa3, .y=0x27, .sp=0x81, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x7b6f, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x7b70, .a=0xd1, .x=0xa3, .y=0x27, .sp=0x81, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x7b6f, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x7b6f, .value=0x7c, .type=IO_READ},
        {.addr=0x7b70, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0206) {
    const struct CPU_State initial_cpu = {.pc=0xb502, .a=0xf3, .x=0xf3, .y=0x85, .sp=0xf5, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xb502, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xb503, .a=0xf9, .x=0xf3, .y=0x85, .sp=0xf5, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xb502, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xb502, .value=0x7c, .type=IO_READ},
        {.addr=0xb503, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0207) {
    const struct CPU_State initial_cpu = {.pc=0x9af6, .a=0x0b, .x=0x20, .y=0xb3, .sp=0x31, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x9af6, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x9af7, .a=0x85, .x=0x20, .y=0xb3, .sp=0x31, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x9af6, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x9af6, .value=0x7c, .type=IO_READ},
        {.addr=0x9af7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0208) {
    const struct CPU_State initial_cpu = {.pc=0xb62c, .a=0xb4, .x=0xbc, .y=0xdd, .sp=0xf8, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xb62c, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xb62d, .a=0xda, .x=0xbc, .y=0xdd, .sp=0xf8, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xb62c, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xb62c, .value=0x7c, .type=IO_READ},
        {.addr=0xb62d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0209) {
    const struct CPU_State initial_cpu = {.pc=0x6dd5, .a=0xba, .x=0xd5, .y=0x02, .sp=0x92, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x6dd5, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6dd6, .a=0xdd, .x=0xd5, .y=0x02, .sp=0x92, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x6dd5, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6dd5, .value=0x7c, .type=IO_READ},
        {.addr=0x6dd6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_020A) {
    const struct CPU_State initial_cpu = {.pc=0x6d95, .a=0xf1, .x=0xc9, .y=0x1c, .sp=0x6d, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x6d95, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6d96, .a=0x78, .x=0xc9, .y=0x1c, .sp=0x6d, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x6d95, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6d95, .value=0x7c, .type=IO_READ},
        {.addr=0x6d96, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_020B) {
    const struct CPU_State initial_cpu = {.pc=0x564d, .a=0x6a, .x=0xf9, .y=0xc2, .sp=0x9b, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x564d, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x564e, .a=0x35, .x=0xf9, .y=0xc2, .sp=0x9b, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x564d, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x564d, .value=0x7c, .type=IO_READ},
        {.addr=0x564e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_020C) {
    const struct CPU_State initial_cpu = {.pc=0xc9fc, .a=0x71, .x=0xe6, .y=0xfb, .sp=0xd3, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xc9fc, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xc9fd, .a=0x38, .x=0xe6, .y=0xfb, .sp=0xd3, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xc9fc, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xc9fc, .value=0x7c, .type=IO_READ},
        {.addr=0xc9fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_020D) {
    const struct CPU_State initial_cpu = {.pc=0x7862, .a=0xc3, .x=0xf9, .y=0xdb, .sp=0xd8, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x7862, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x7863, .a=0x61, .x=0xf9, .y=0xdb, .sp=0xd8, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x7862, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x7862, .value=0x7c, .type=IO_READ},
        {.addr=0x7863, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_020E) {
    const struct CPU_State initial_cpu = {.pc=0x8afc, .a=0x30, .x=0x29, .y=0x23, .sp=0x0f, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x8afc, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x8afd, .a=0x18, .x=0x29, .y=0x23, .sp=0x0f, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x8afc, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x8afc, .value=0x7c, .type=IO_READ},
        {.addr=0x8afd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_020F) {
    const struct CPU_State initial_cpu = {.pc=0xfe60, .a=0x98, .x=0x95, .y=0xb7, .sp=0x6f, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xfe60, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xfe61, .a=0xcc, .x=0x95, .y=0xb7, .sp=0x6f, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xfe60, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xfe60, .value=0x7c, .type=IO_READ},
        {.addr=0xfe61, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0210) {
    const struct CPU_State initial_cpu = {.pc=0xeded, .a=0x9a, .x=0x88, .y=0x64, .sp=0xc1, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xeded, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xedee, .a=0x4d, .x=0x88, .y=0x64, .sp=0xc1, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xeded, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xeded, .value=0x7c, .type=IO_READ},
        {.addr=0xedee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0211) {
    const struct CPU_State initial_cpu = {.pc=0x0224, .a=0x55, .x=0x3c, .y=0x0f, .sp=0xb1, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x0224, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x0225, .a=0xaa, .x=0x3c, .y=0x0f, .sp=0xb1, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x0224, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x0224, .value=0x7c, .type=IO_READ},
        {.addr=0x0225, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0212) {
    const struct CPU_State initial_cpu = {.pc=0x7f50, .a=0x55, .x=0x70, .y=0x02, .sp=0xf9, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x7f50, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x7f51, .a=0x2a, .x=0x70, .y=0x02, .sp=0xf9, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x7f50, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x7f50, .value=0x7c, .type=IO_READ},
        {.addr=0x7f51, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0213) {
    const struct CPU_State initial_cpu = {.pc=0x8d54, .a=0x66, .x=0x9e, .y=0x15, .sp=0x11, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x8d54, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x8d55, .a=0x33, .x=0x9e, .y=0x15, .sp=0x11, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x8d54, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x8d54, .value=0x7c, .type=IO_READ},
        {.addr=0x8d55, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0214) {
    const struct CPU_State initial_cpu = {.pc=0x5873, .a=0x7b, .x=0x60, .y=0x1d, .sp=0x9d, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x5873, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x5874, .a=0x3d, .x=0x60, .y=0x1d, .sp=0x9d, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x5873, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x5873, .value=0x7c, .type=IO_READ},
        {.addr=0x5874, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0215) {
    const struct CPU_State initial_cpu = {.pc=0xa5f9, .a=0xbd, .x=0x76, .y=0x7b, .sp=0x11, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xa5f9, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xa5fa, .a=0x5e, .x=0x76, .y=0x7b, .sp=0x11, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xa5f9, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xa5f9, .value=0x7c, .type=IO_READ},
        {.addr=0xa5fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0216) {
    const struct CPU_State initial_cpu = {.pc=0xa379, .a=0xa1, .x=0x05, .y=0x6e, .sp=0x4d, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xa379, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xa37a, .a=0xd0, .x=0x05, .y=0x6e, .sp=0x4d, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xa379, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xa379, .value=0x7c, .type=IO_READ},
        {.addr=0xa37a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0217) {
    const struct CPU_State initial_cpu = {.pc=0x50c5, .a=0xc0, .x=0xea, .y=0x9f, .sp=0x5c, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x50c5, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x50c6, .a=0xe0, .x=0xea, .y=0x9f, .sp=0x5c, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x50c5, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x50c5, .value=0x7c, .type=IO_READ},
        {.addr=0x50c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0218) {
    const struct CPU_State initial_cpu = {.pc=0xdad5, .a=0x4a, .x=0xd9, .y=0x21, .sp=0xa2, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xdad5, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xdad6, .a=0x25, .x=0xd9, .y=0x21, .sp=0xa2, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xdad5, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xdad5, .value=0x7c, .type=IO_READ},
        {.addr=0xdad6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0219) {
    const struct CPU_State initial_cpu = {.pc=0x09a1, .a=0x43, .x=0xe8, .y=0xc4, .sp=0x0d, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x09a1, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x09a2, .a=0xa1, .x=0xe8, .y=0xc4, .sp=0x0d, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x09a1, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x09a1, .value=0x7c, .type=IO_READ},
        {.addr=0x09a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_021A) {
    const struct CPU_State initial_cpu = {.pc=0x7531, .a=0x09, .x=0x40, .y=0x17, .sp=0xde, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x7531, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x7532, .a=0x84, .x=0x40, .y=0x17, .sp=0xde, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x7531, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x7531, .value=0x7c, .type=IO_READ},
        {.addr=0x7532, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_021B) {
    const struct CPU_State initial_cpu = {.pc=0x12e5, .a=0xe2, .x=0xb9, .y=0x52, .sp=0x7a, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x12e5, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x12e6, .a=0xf1, .x=0xb9, .y=0x52, .sp=0x7a, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x12e5, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x12e5, .value=0x7c, .type=IO_READ},
        {.addr=0x12e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_021C) {
    const struct CPU_State initial_cpu = {.pc=0x6584, .a=0xca, .x=0xc9, .y=0xbc, .sp=0x46, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x6584, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6585, .a=0x65, .x=0xc9, .y=0xbc, .sp=0x46, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x6584, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6584, .value=0x7c, .type=IO_READ},
        {.addr=0x6585, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_021D) {
    const struct CPU_State initial_cpu = {.pc=0x997f, .a=0x1a, .x=0xcb, .y=0x58, .sp=0xfd, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x997f, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x9980, .a=0x0d, .x=0xcb, .y=0x58, .sp=0xfd, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x997f, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x997f, .value=0x7c, .type=IO_READ},
        {.addr=0x9980, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_021E) {
    const struct CPU_State initial_cpu = {.pc=0x48c3, .a=0xd5, .x=0x18, .y=0x80, .sp=0x97, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x48c3, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x48c4, .a=0x6a, .x=0x18, .y=0x80, .sp=0x97, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x48c3, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x48c3, .value=0x7c, .type=IO_READ},
        {.addr=0x48c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_021F) {
    const struct CPU_State initial_cpu = {.pc=0x3764, .a=0xe9, .x=0x6b, .y=0x34, .sp=0x83, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x3764, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x3765, .a=0x74, .x=0x6b, .y=0x34, .sp=0x83, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x3764, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x3764, .value=0x7c, .type=IO_READ},
        {.addr=0x3765, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0220) {
    const struct CPU_State initial_cpu = {.pc=0x8240, .a=0x32, .x=0xb1, .y=0x20, .sp=0x3b, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x8240, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x8241, .a=0x99, .x=0xb1, .y=0x20, .sp=0x3b, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x8240, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x8240, .value=0x7c, .type=IO_READ},
        {.addr=0x8241, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0221) {
    const struct CPU_State initial_cpu = {.pc=0x821d, .a=0x60, .x=0x88, .y=0x03, .sp=0x36, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x821d, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x821e, .a=0xb0, .x=0x88, .y=0x03, .sp=0x36, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x821d, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x821d, .value=0x7c, .type=IO_READ},
        {.addr=0x821e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0222) {
    const struct CPU_State initial_cpu = {.pc=0x6c57, .a=0xe4, .x=0xbc, .y=0xcc, .sp=0xcb, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x6c57, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6c58, .a=0xf2, .x=0xbc, .y=0xcc, .sp=0xcb, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x6c57, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6c57, .value=0x7c, .type=IO_READ},
        {.addr=0x6c58, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0223) {
    const struct CPU_State initial_cpu = {.pc=0x984d, .a=0x51, .x=0x44, .y=0x3a, .sp=0x47, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x984d, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x984e, .a=0x28, .x=0x44, .y=0x3a, .sp=0x47, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x984d, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x984d, .value=0x7c, .type=IO_READ},
        {.addr=0x984e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0224) {
    const struct CPU_State initial_cpu = {.pc=0xa110, .a=0x80, .x=0x2d, .y=0x70, .sp=0x72, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xa110, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xa111, .a=0xc0, .x=0x2d, .y=0x70, .sp=0x72, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xa110, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xa110, .value=0x7c, .type=IO_READ},
        {.addr=0xa111, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0225) {
    const struct CPU_State initial_cpu = {.pc=0xe086, .a=0x11, .x=0x01, .y=0x92, .sp=0x03, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xe086, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xe087, .a=0x08, .x=0x01, .y=0x92, .sp=0x03, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xe086, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xe086, .value=0x7c, .type=IO_READ},
        {.addr=0xe087, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0226) {
    const struct CPU_State initial_cpu = {.pc=0x88a5, .a=0x1e, .x=0xad, .y=0x7d, .sp=0xdd, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x88a5, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x88a6, .a=0x8f, .x=0xad, .y=0x7d, .sp=0xdd, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x88a5, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x88a5, .value=0x7c, .type=IO_READ},
        {.addr=0x88a6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0227) {
    const struct CPU_State initial_cpu = {.pc=0x8ff4, .a=0xbb, .x=0x12, .y=0x96, .sp=0x64, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x8ff4, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x8ff5, .a=0x5d, .x=0x12, .y=0x96, .sp=0x64, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x8ff4, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x8ff4, .value=0x7c, .type=IO_READ},
        {.addr=0x8ff5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0228) {
    const struct CPU_State initial_cpu = {.pc=0xf77f, .a=0xbd, .x=0x6f, .y=0xd8, .sp=0x62, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xf77f, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xf780, .a=0x5e, .x=0x6f, .y=0xd8, .sp=0x62, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xf77f, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xf77f, .value=0x7c, .type=IO_READ},
        {.addr=0xf780, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0229) {
    const struct CPU_State initial_cpu = {.pc=0x984f, .a=0xa7, .x=0x10, .y=0x72, .sp=0x43, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x984f, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x9850, .a=0x53, .x=0x10, .y=0x72, .sp=0x43, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x984f, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x984f, .value=0x7c, .type=IO_READ},
        {.addr=0x9850, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_022A) {
    const struct CPU_State initial_cpu = {.pc=0x51e9, .a=0x76, .x=0x67, .y=0x20, .sp=0xc6, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x51e9, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x51ea, .a=0xbb, .x=0x67, .y=0x20, .sp=0xc6, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x51e9, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x51e9, .value=0x7c, .type=IO_READ},
        {.addr=0x51ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_022B) {
    const struct CPU_State initial_cpu = {.pc=0x7004, .a=0x39, .x=0x2e, .y=0x53, .sp=0x7a, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x7004, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x7005, .a=0x1c, .x=0x2e, .y=0x53, .sp=0x7a, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x7004, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x7004, .value=0x7c, .type=IO_READ},
        {.addr=0x7005, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_022C) {
    const struct CPU_State initial_cpu = {.pc=0x6145, .a=0x35, .x=0x5b, .y=0x2d, .sp=0x54, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x6145, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6146, .a=0x9a, .x=0x5b, .y=0x2d, .sp=0x54, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x6145, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6145, .value=0x7c, .type=IO_READ},
        {.addr=0x6146, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_022D) {
    const struct CPU_State initial_cpu = {.pc=0xa639, .a=0xd6, .x=0xc4, .y=0xd8, .sp=0x0a, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xa639, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xa63a, .a=0x6b, .x=0xc4, .y=0xd8, .sp=0x0a, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xa639, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xa639, .value=0x7c, .type=IO_READ},
        {.addr=0xa63a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_022E) {
    const struct CPU_State initial_cpu = {.pc=0x018f, .a=0x33, .x=0xb7, .y=0xdf, .sp=0x93, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x018f, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x0190, .a=0x19, .x=0xb7, .y=0xdf, .sp=0x93, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x018f, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x018f, .value=0x7c, .type=IO_READ},
        {.addr=0x0190, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_022F) {
    const struct CPU_State initial_cpu = {.pc=0x5409, .a=0x8e, .x=0x28, .y=0xf6, .sp=0xa5, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x5409, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x540a, .a=0x47, .x=0x28, .y=0xf6, .sp=0xa5, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x5409, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x5409, .value=0x7c, .type=IO_READ},
        {.addr=0x540a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0230) {
    const struct CPU_State initial_cpu = {.pc=0x82b2, .a=0x3e, .x=0x30, .y=0xc6, .sp=0x68, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x82b2, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x82b3, .a=0x1f, .x=0x30, .y=0xc6, .sp=0x68, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x82b2, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x82b2, .value=0x7c, .type=IO_READ},
        {.addr=0x82b3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0231) {
    const struct CPU_State initial_cpu = {.pc=0x8c87, .a=0x40, .x=0xba, .y=0xae, .sp=0xfc, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x8c87, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x8c88, .a=0xa0, .x=0xba, .y=0xae, .sp=0xfc, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x8c87, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x8c87, .value=0x7c, .type=IO_READ},
        {.addr=0x8c88, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0232) {
    const struct CPU_State initial_cpu = {.pc=0x81e3, .a=0x08, .x=0xbd, .y=0x99, .sp=0xd3, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x81e3, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x81e4, .a=0x04, .x=0xbd, .y=0x99, .sp=0xd3, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x81e3, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x81e3, .value=0x7c, .type=IO_READ},
        {.addr=0x81e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0233) {
    const struct CPU_State initial_cpu = {.pc=0x4b87, .a=0x0c, .x=0x5c, .y=0x07, .sp=0x2f, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x4b87, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x4b88, .a=0x86, .x=0x5c, .y=0x07, .sp=0x2f, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x4b87, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x4b87, .value=0x7c, .type=IO_READ},
        {.addr=0x4b88, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0234) {
    const struct CPU_State initial_cpu = {.pc=0xabda, .a=0x77, .x=0xc9, .y=0x6a, .sp=0x6f, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xabda, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xabdb, .a=0x3b, .x=0xc9, .y=0x6a, .sp=0x6f, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xabda, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xabda, .value=0x7c, .type=IO_READ},
        {.addr=0xabdb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0235) {
    const struct CPU_State initial_cpu = {.pc=0xb410, .a=0x46, .x=0xc8, .y=0xdf, .sp=0x23, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xb410, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xb411, .a=0x23, .x=0xc8, .y=0xdf, .sp=0x23, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xb410, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xb410, .value=0x7c, .type=IO_READ},
        {.addr=0xb411, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0236) {
    const struct CPU_State initial_cpu = {.pc=0xf2f5, .a=0xef, .x=0x30, .y=0xe8, .sp=0x18, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xf2f5, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xf2f6, .a=0x77, .x=0x30, .y=0xe8, .sp=0x18, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xf2f5, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xf2f5, .value=0x7c, .type=IO_READ},
        {.addr=0xf2f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0237) {
    const struct CPU_State initial_cpu = {.pc=0xe850, .a=0x0c, .x=0x83, .y=0x04, .sp=0x85, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xe850, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xe851, .a=0x06, .x=0x83, .y=0x04, .sp=0x85, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xe850, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xe850, .value=0x7c, .type=IO_READ},
        {.addr=0xe851, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0238) {
    const struct CPU_State initial_cpu = {.pc=0xa875, .a=0xb4, .x=0xa5, .y=0x7e, .sp=0xa5, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xa875, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xa876, .a=0x5a, .x=0xa5, .y=0x7e, .sp=0xa5, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xa875, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xa875, .value=0x7c, .type=IO_READ},
        {.addr=0xa876, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0239) {
    const struct CPU_State initial_cpu = {.pc=0x45cf, .a=0xbe, .x=0x94, .y=0xa5, .sp=0x57, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x45cf, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x45d0, .a=0x5f, .x=0x94, .y=0xa5, .sp=0x57, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x45cf, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x45cf, .value=0x7c, .type=IO_READ},
        {.addr=0x45d0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_023A) {
    const struct CPU_State initial_cpu = {.pc=0xeb5e, .a=0x92, .x=0x47, .y=0xa7, .sp=0x67, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xeb5e, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xeb5f, .a=0xc9, .x=0x47, .y=0xa7, .sp=0x67, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xeb5e, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xeb5e, .value=0x7c, .type=IO_READ},
        {.addr=0xeb5f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_023B) {
    const struct CPU_State initial_cpu = {.pc=0x4bd5, .a=0x39, .x=0xaf, .y=0x0a, .sp=0xcc, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x4bd5, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x4bd6, .a=0x9c, .x=0xaf, .y=0x0a, .sp=0xcc, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x4bd5, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x4bd5, .value=0x7c, .type=IO_READ},
        {.addr=0x4bd6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_023C) {
    const struct CPU_State initial_cpu = {.pc=0x21f1, .a=0x30, .x=0xa5, .y=0x06, .sp=0x9b, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x21f1, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x21f2, .a=0x98, .x=0xa5, .y=0x06, .sp=0x9b, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x21f1, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x21f1, .value=0x7c, .type=IO_READ},
        {.addr=0x21f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_023D) {
    const struct CPU_State initial_cpu = {.pc=0xf5ea, .a=0x29, .x=0x2d, .y=0x69, .sp=0x17, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xf5ea, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xf5eb, .a=0x14, .x=0x2d, .y=0x69, .sp=0x17, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xf5ea, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xf5ea, .value=0x7c, .type=IO_READ},
        {.addr=0xf5eb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_023E) {
    const struct CPU_State initial_cpu = {.pc=0x329f, .a=0x96, .x=0x5c, .y=0x27, .sp=0xc0, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x329f, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x32a0, .a=0x4b, .x=0x5c, .y=0x27, .sp=0xc0, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x329f, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x329f, .value=0x7c, .type=IO_READ},
        {.addr=0x32a0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_023F) {
    const struct CPU_State initial_cpu = {.pc=0x5814, .a=0xa2, .x=0x68, .y=0x3a, .sp=0x44, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x5814, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x5815, .a=0xd1, .x=0x68, .y=0x3a, .sp=0x44, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x5814, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x5814, .value=0x7c, .type=IO_READ},
        {.addr=0x5815, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0240) {
    const struct CPU_State initial_cpu = {.pc=0x8361, .a=0x11, .x=0xa4, .y=0xe1, .sp=0xbd, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x8361, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x8362, .a=0x88, .x=0xa4, .y=0xe1, .sp=0xbd, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x8361, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x8361, .value=0x7c, .type=IO_READ},
        {.addr=0x8362, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0241) {
    const struct CPU_State initial_cpu = {.pc=0x36fa, .a=0xf8, .x=0xc2, .y=0x2d, .sp=0x5e, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x36fa, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x36fb, .a=0xfc, .x=0xc2, .y=0x2d, .sp=0x5e, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x36fa, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x36fa, .value=0x7c, .type=IO_READ},
        {.addr=0x36fb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0242) {
    const struct CPU_State initial_cpu = {.pc=0x95a4, .a=0xe4, .x=0x65, .y=0xfa, .sp=0xcc, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x95a4, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x95a5, .a=0xf2, .x=0x65, .y=0xfa, .sp=0xcc, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x95a4, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x95a4, .value=0x7c, .type=IO_READ},
        {.addr=0x95a5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0243) {
    const struct CPU_State initial_cpu = {.pc=0x1ae2, .a=0x49, .x=0xda, .y=0x62, .sp=0x6e, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x1ae2, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x1ae3, .a=0xa4, .x=0xda, .y=0x62, .sp=0x6e, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x1ae2, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x1ae2, .value=0x7c, .type=IO_READ},
        {.addr=0x1ae3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0244) {
    const struct CPU_State initial_cpu = {.pc=0x3ecd, .a=0x08, .x=0x8c, .y=0x03, .sp=0xa4, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x3ecd, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x3ece, .a=0x84, .x=0x8c, .y=0x03, .sp=0xa4, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x3ecd, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x3ecd, .value=0x7c, .type=IO_READ},
        {.addr=0x3ece, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0245) {
    const struct CPU_State initial_cpu = {.pc=0x5d9c, .a=0xe5, .x=0x8e, .y=0xcd, .sp=0x3c, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x5d9c, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x5d9d, .a=0xf2, .x=0x8e, .y=0xcd, .sp=0x3c, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x5d9c, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x5d9c, .value=0x7c, .type=IO_READ},
        {.addr=0x5d9d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0246) {
    const struct CPU_State initial_cpu = {.pc=0x066b, .a=0x73, .x=0x5b, .y=0x6d, .sp=0xb2, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x066b, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x066c, .a=0xb9, .x=0x5b, .y=0x6d, .sp=0xb2, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x066b, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x066b, .value=0x7c, .type=IO_READ},
        {.addr=0x066c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0247) {
    const struct CPU_State initial_cpu = {.pc=0x8c21, .a=0x65, .x=0xbe, .y=0x80, .sp=0x1b, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x8c21, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x8c22, .a=0x32, .x=0xbe, .y=0x80, .sp=0x1b, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x8c21, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x8c21, .value=0x7c, .type=IO_READ},
        {.addr=0x8c22, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0248) {
    const struct CPU_State initial_cpu = {.pc=0x8325, .a=0x4c, .x=0xc2, .y=0xca, .sp=0xa0, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x8325, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x8326, .a=0xa6, .x=0xc2, .y=0xca, .sp=0xa0, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x8325, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x8325, .value=0x7c, .type=IO_READ},
        {.addr=0x8326, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0249) {
    const struct CPU_State initial_cpu = {.pc=0x2480, .a=0xb5, .x=0x8d, .y=0xef, .sp=0x17, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x2480, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x2481, .a=0x5a, .x=0x8d, .y=0xef, .sp=0x17, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x2480, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x2480, .value=0x7c, .type=IO_READ},
        {.addr=0x2481, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_024A) {
    const struct CPU_State initial_cpu = {.pc=0x81f6, .a=0x2e, .x=0xdb, .y=0x96, .sp=0x78, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x81f6, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x81f7, .a=0x17, .x=0xdb, .y=0x96, .sp=0x78, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x81f6, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x81f6, .value=0x7c, .type=IO_READ},
        {.addr=0x81f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_024B) {
    const struct CPU_State initial_cpu = {.pc=0x09d8, .a=0x8b, .x=0x26, .y=0x81, .sp=0x6d, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x09d8, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x09d9, .a=0x45, .x=0x26, .y=0x81, .sp=0x6d, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x09d8, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x09d8, .value=0x7c, .type=IO_READ},
        {.addr=0x09d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_024C) {
    const struct CPU_State initial_cpu = {.pc=0xd0c6, .a=0xd8, .x=0x9e, .y=0xf3, .sp=0xed, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xd0c6, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xd0c7, .a=0x6c, .x=0x9e, .y=0xf3, .sp=0xed, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xd0c6, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xd0c6, .value=0x7c, .type=IO_READ},
        {.addr=0xd0c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_024D) {
    const struct CPU_State initial_cpu = {.pc=0xd7ba, .a=0x80, .x=0x88, .y=0x10, .sp=0xf9, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xd7ba, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xd7bb, .a=0xc0, .x=0x88, .y=0x10, .sp=0xf9, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xd7ba, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xd7ba, .value=0x7c, .type=IO_READ},
        {.addr=0xd7bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_024E) {
    const struct CPU_State initial_cpu = {.pc=0x5db2, .a=0x9c, .x=0xa4, .y=0x04, .sp=0x58, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x5db2, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x5db3, .a=0xce, .x=0xa4, .y=0x04, .sp=0x58, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x5db2, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x5db2, .value=0x7c, .type=IO_READ},
        {.addr=0x5db3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_024F) {
    const struct CPU_State initial_cpu = {.pc=0x4a52, .a=0xdd, .x=0x86, .y=0x4b, .sp=0x7b, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x4a52, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x4a53, .a=0x6e, .x=0x86, .y=0x4b, .sp=0x7b, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x4a52, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x4a52, .value=0x7c, .type=IO_READ},
        {.addr=0x4a53, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0250) {
    const struct CPU_State initial_cpu = {.pc=0x2ca6, .a=0x3d, .x=0x6a, .y=0xc0, .sp=0x00, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x2ca6, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x2ca7, .a=0x1e, .x=0x6a, .y=0xc0, .sp=0x00, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x2ca6, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x2ca6, .value=0x7c, .type=IO_READ},
        {.addr=0x2ca7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0251) {
    const struct CPU_State initial_cpu = {.pc=0xbfa6, .a=0x02, .x=0x0e, .y=0x2a, .sp=0x05, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xbfa6, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xbfa7, .a=0x81, .x=0x0e, .y=0x2a, .sp=0x05, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xbfa6, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xbfa6, .value=0x7c, .type=IO_READ},
        {.addr=0xbfa7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0252) {
    const struct CPU_State initial_cpu = {.pc=0x8919, .a=0x81, .x=0x84, .y=0xc9, .sp=0x14, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x8919, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x891a, .a=0xc0, .x=0x84, .y=0xc9, .sp=0x14, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x8919, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x8919, .value=0x7c, .type=IO_READ},
        {.addr=0x891a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0253) {
    const struct CPU_State initial_cpu = {.pc=0xe338, .a=0x57, .x=0x7a, .y=0xf0, .sp=0x4a, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xe338, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xe339, .a=0xab, .x=0x7a, .y=0xf0, .sp=0x4a, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xe338, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xe338, .value=0x7c, .type=IO_READ},
        {.addr=0xe339, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0254) {
    const struct CPU_State initial_cpu = {.pc=0xbfb7, .a=0x91, .x=0x59, .y=0x1c, .sp=0xd9, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xbfb7, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xbfb8, .a=0xc8, .x=0x59, .y=0x1c, .sp=0xd9, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xbfb7, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xbfb7, .value=0x7c, .type=IO_READ},
        {.addr=0xbfb8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0255) {
    const struct CPU_State initial_cpu = {.pc=0xdebd, .a=0x06, .x=0x35, .y=0x18, .sp=0xc5, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xdebd, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xdebe, .a=0x03, .x=0x35, .y=0x18, .sp=0xc5, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xdebd, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xdebd, .value=0x7c, .type=IO_READ},
        {.addr=0xdebe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0256) {
    const struct CPU_State initial_cpu = {.pc=0x2c61, .a=0xf0, .x=0x92, .y=0xa2, .sp=0x18, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x2c61, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x2c62, .a=0xf8, .x=0x92, .y=0xa2, .sp=0x18, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x2c61, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x2c61, .value=0x7c, .type=IO_READ},
        {.addr=0x2c62, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0257) {
    const struct CPU_State initial_cpu = {.pc=0xe3f1, .a=0xb9, .x=0xfe, .y=0xdd, .sp=0x7e, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xe3f1, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xe3f2, .a=0xdc, .x=0xfe, .y=0xdd, .sp=0x7e, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xe3f1, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xe3f1, .value=0x7c, .type=IO_READ},
        {.addr=0xe3f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0258) {
    const struct CPU_State initial_cpu = {.pc=0x67ca, .a=0x2a, .x=0xc8, .y=0x39, .sp=0x18, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x67ca, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x67cb, .a=0x15, .x=0xc8, .y=0x39, .sp=0x18, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x67ca, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x67ca, .value=0x7c, .type=IO_READ},
        {.addr=0x67cb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0259) {
    const struct CPU_State initial_cpu = {.pc=0x4399, .a=0xfc, .x=0x6f, .y=0xea, .sp=0xa1, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x4399, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x439a, .a=0xfe, .x=0x6f, .y=0xea, .sp=0xa1, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x4399, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x4399, .value=0x7c, .type=IO_READ},
        {.addr=0x439a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_025A) {
    const struct CPU_State initial_cpu = {.pc=0x4ba1, .a=0xe6, .x=0xd4, .y=0xac, .sp=0x45, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x4ba1, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x4ba2, .a=0xf3, .x=0xd4, .y=0xac, .sp=0x45, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x4ba1, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x4ba1, .value=0x7c, .type=IO_READ},
        {.addr=0x4ba2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_025B) {
    const struct CPU_State initial_cpu = {.pc=0xd7e2, .a=0x97, .x=0x47, .y=0x94, .sp=0xc6, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xd7e2, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xd7e3, .a=0xcb, .x=0x47, .y=0x94, .sp=0xc6, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xd7e2, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xd7e2, .value=0x7c, .type=IO_READ},
        {.addr=0xd7e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_025C) {
    const struct CPU_State initial_cpu = {.pc=0x0ec7, .a=0x5d, .x=0xf0, .y=0xff, .sp=0xa8, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x0ec7, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x0ec8, .a=0xae, .x=0xf0, .y=0xff, .sp=0xa8, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x0ec7, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x0ec7, .value=0x7c, .type=IO_READ},
        {.addr=0x0ec8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_025D) {
    const struct CPU_State initial_cpu = {.pc=0x5c0b, .a=0x45, .x=0xff, .y=0x4c, .sp=0x41, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x5c0b, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x5c0c, .a=0xa2, .x=0xff, .y=0x4c, .sp=0x41, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x5c0b, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x5c0b, .value=0x7c, .type=IO_READ},
        {.addr=0x5c0c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_025E) {
    const struct CPU_State initial_cpu = {.pc=0xcd8d, .a=0x2b, .x=0x3c, .y=0xe5, .sp=0x37, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xcd8d, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xcd8e, .a=0x15, .x=0x3c, .y=0xe5, .sp=0x37, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xcd8d, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xcd8d, .value=0x7c, .type=IO_READ},
        {.addr=0xcd8e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_025F) {
    const struct CPU_State initial_cpu = {.pc=0xf46e, .a=0xef, .x=0x3f, .y=0x06, .sp=0x58, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xf46e, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xf46f, .a=0xf7, .x=0x3f, .y=0x06, .sp=0x58, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xf46e, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xf46e, .value=0x7c, .type=IO_READ},
        {.addr=0xf46f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0260) {
    const struct CPU_State initial_cpu = {.pc=0xe75e, .a=0xa3, .x=0x89, .y=0x56, .sp=0x05, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xe75e, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xe75f, .a=0xd1, .x=0x89, .y=0x56, .sp=0x05, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xe75e, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xe75e, .value=0x7c, .type=IO_READ},
        {.addr=0xe75f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0261) {
    const struct CPU_State initial_cpu = {.pc=0xc64c, .a=0xea, .x=0x2a, .y=0xfa, .sp=0x4c, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xc64c, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xc64d, .a=0x75, .x=0x2a, .y=0xfa, .sp=0x4c, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xc64c, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xc64c, .value=0x7c, .type=IO_READ},
        {.addr=0xc64d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0262) {
    const struct CPU_State initial_cpu = {.pc=0xd498, .a=0xa0, .x=0x28, .y=0x43, .sp=0x1e, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xd498, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xd499, .a=0x50, .x=0x28, .y=0x43, .sp=0x1e, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xd498, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xd498, .value=0x7c, .type=IO_READ},
        {.addr=0xd499, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0263) {
    const struct CPU_State initial_cpu = {.pc=0x2b53, .a=0x99, .x=0x5d, .y=0x73, .sp=0x24, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x2b53, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x2b54, .a=0x4c, .x=0x5d, .y=0x73, .sp=0x24, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x2b53, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x2b53, .value=0x7c, .type=IO_READ},
        {.addr=0x2b54, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0264) {
    const struct CPU_State initial_cpu = {.pc=0x1075, .a=0x7f, .x=0xc8, .y=0x39, .sp=0x63, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x1075, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x1076, .a=0x3f, .x=0xc8, .y=0x39, .sp=0x63, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x1075, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x1075, .value=0x7c, .type=IO_READ},
        {.addr=0x1076, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0265) {
    const struct CPU_State initial_cpu = {.pc=0xef65, .a=0xa2, .x=0x18, .y=0xa2, .sp=0x99, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xef65, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xef66, .a=0x51, .x=0x18, .y=0xa2, .sp=0x99, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xef65, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xef65, .value=0x7c, .type=IO_READ},
        {.addr=0xef66, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0266) {
    const struct CPU_State initial_cpu = {.pc=0x5f37, .a=0x69, .x=0x5c, .y=0x81, .sp=0x19, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x5f37, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x5f38, .a=0xb4, .x=0x5c, .y=0x81, .sp=0x19, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x5f37, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x5f37, .value=0x7c, .type=IO_READ},
        {.addr=0x5f38, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0267) {
    const struct CPU_State initial_cpu = {.pc=0x0b2e, .a=0xc4, .x=0x47, .y=0x27, .sp=0x9d, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x0b2e, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x0b2f, .a=0xe2, .x=0x47, .y=0x27, .sp=0x9d, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0b2e, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x0b2e, .value=0x7c, .type=IO_READ},
        {.addr=0x0b2f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0268) {
    const struct CPU_State initial_cpu = {.pc=0xf968, .a=0x59, .x=0x1f, .y=0xd8, .sp=0xe5, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xf968, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xf969, .a=0xac, .x=0x1f, .y=0xd8, .sp=0xe5, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xf968, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xf968, .value=0x7c, .type=IO_READ},
        {.addr=0xf969, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0269) {
    const struct CPU_State initial_cpu = {.pc=0x4eeb, .a=0x01, .x=0x15, .y=0x23, .sp=0x53, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x4eeb, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x4eec, .a=0x00, .x=0x15, .y=0x23, .sp=0x53, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x4eeb, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x4eeb, .value=0x7c, .type=IO_READ},
        {.addr=0x4eec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_026A) {
    const struct CPU_State initial_cpu = {.pc=0x7a77, .a=0xa6, .x=0xb2, .y=0xe0, .sp=0x7a, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x7a77, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x7a78, .a=0xd3, .x=0xb2, .y=0xe0, .sp=0x7a, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x7a77, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x7a77, .value=0x7c, .type=IO_READ},
        {.addr=0x7a78, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_026B) {
    const struct CPU_State initial_cpu = {.pc=0x3729, .a=0x9a, .x=0x39, .y=0x80, .sp=0x7c, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x3729, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x372a, .a=0x4d, .x=0x39, .y=0x80, .sp=0x7c, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x3729, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x3729, .value=0x7c, .type=IO_READ},
        {.addr=0x372a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_026C) {
    const struct CPU_State initial_cpu = {.pc=0xb691, .a=0xff, .x=0x13, .y=0xf7, .sp=0x19, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xb691, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xb692, .a=0xff, .x=0x13, .y=0xf7, .sp=0x19, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xb691, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xb691, .value=0x7c, .type=IO_READ},
        {.addr=0xb692, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_026D) {
    const struct CPU_State initial_cpu = {.pc=0xec43, .a=0x98, .x=0x07, .y=0x99, .sp=0x0f, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xec43, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xec44, .a=0xcc, .x=0x07, .y=0x99, .sp=0x0f, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xec43, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xec43, .value=0x7c, .type=IO_READ},
        {.addr=0xec44, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_026E) {
    const struct CPU_State initial_cpu = {.pc=0xa22a, .a=0x98, .x=0x1e, .y=0xe5, .sp=0x39, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xa22a, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xa22b, .a=0x4c, .x=0x1e, .y=0xe5, .sp=0x39, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xa22a, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xa22a, .value=0x7c, .type=IO_READ},
        {.addr=0xa22b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_026F) {
    const struct CPU_State initial_cpu = {.pc=0xdc46, .a=0xa1, .x=0xbb, .y=0xd9, .sp=0x79, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xdc46, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xdc47, .a=0x50, .x=0xbb, .y=0xd9, .sp=0x79, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xdc46, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xdc46, .value=0x7c, .type=IO_READ},
        {.addr=0xdc47, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0270) {
    const struct CPU_State initial_cpu = {.pc=0xca00, .a=0x1b, .x=0x27, .y=0xce, .sp=0xd3, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xca00, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xca01, .a=0x8d, .x=0x27, .y=0xce, .sp=0xd3, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xca00, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xca00, .value=0x7c, .type=IO_READ},
        {.addr=0xca01, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0271) {
    const struct CPU_State initial_cpu = {.pc=0x5574, .a=0x29, .x=0x8d, .y=0x29, .sp=0x51, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x5574, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x5575, .a=0x94, .x=0x8d, .y=0x29, .sp=0x51, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x5574, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x5574, .value=0x7c, .type=IO_READ},
        {.addr=0x5575, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0272) {
    const struct CPU_State initial_cpu = {.pc=0xe3b8, .a=0x76, .x=0xa7, .y=0x35, .sp=0xd8, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xe3b8, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xe3b9, .a=0x3b, .x=0xa7, .y=0x35, .sp=0xd8, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xe3b8, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xe3b8, .value=0x7c, .type=IO_READ},
        {.addr=0xe3b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0273) {
    const struct CPU_State initial_cpu = {.pc=0x82de, .a=0x56, .x=0x01, .y=0xb8, .sp=0x2e, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x82de, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x82df, .a=0x2b, .x=0x01, .y=0xb8, .sp=0x2e, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x82de, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x82de, .value=0x7c, .type=IO_READ},
        {.addr=0x82df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0274) {
    const struct CPU_State initial_cpu = {.pc=0x273d, .a=0xac, .x=0x42, .y=0x86, .sp=0x83, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x273d, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x273e, .a=0x56, .x=0x42, .y=0x86, .sp=0x83, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x273d, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x273d, .value=0x7c, .type=IO_READ},
        {.addr=0x273e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0275) {
    const struct CPU_State initial_cpu = {.pc=0x6083, .a=0x9f, .x=0xae, .y=0xb7, .sp=0xe9, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x6083, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6084, .a=0x4f, .x=0xae, .y=0xb7, .sp=0xe9, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x6083, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6083, .value=0x7c, .type=IO_READ},
        {.addr=0x6084, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0276) {
    const struct CPU_State initial_cpu = {.pc=0x5488, .a=0xc8, .x=0x81, .y=0xad, .sp=0x4e, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x5488, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x5489, .a=0x64, .x=0x81, .y=0xad, .sp=0x4e, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x5488, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x5488, .value=0x7c, .type=IO_READ},
        {.addr=0x5489, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0277) {
    const struct CPU_State initial_cpu = {.pc=0x0e4e, .a=0xd5, .x=0xca, .y=0xf9, .sp=0x01, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x0e4e, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x0e4f, .a=0x6a, .x=0xca, .y=0xf9, .sp=0x01, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0e4e, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x0e4e, .value=0x7c, .type=IO_READ},
        {.addr=0x0e4f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0278) {
    const struct CPU_State initial_cpu = {.pc=0x6604, .a=0x5e, .x=0x36, .y=0xa2, .sp=0x7a, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x6604, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6605, .a=0xaf, .x=0x36, .y=0xa2, .sp=0x7a, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x6604, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6604, .value=0x7c, .type=IO_READ},
        {.addr=0x6605, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0279) {
    const struct CPU_State initial_cpu = {.pc=0xd91b, .a=0x7c, .x=0x88, .y=0x8f, .sp=0xea, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xd91b, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xd91c, .a=0x3e, .x=0x88, .y=0x8f, .sp=0xea, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xd91b, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xd91b, .value=0x7c, .type=IO_READ},
        {.addr=0xd91c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_027A) {
    const struct CPU_State initial_cpu = {.pc=0xf89b, .a=0xd8, .x=0xf4, .y=0x42, .sp=0xa5, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xf89b, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xf89c, .a=0x6c, .x=0xf4, .y=0x42, .sp=0xa5, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xf89b, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xf89b, .value=0x7c, .type=IO_READ},
        {.addr=0xf89c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_027B) {
    const struct CPU_State initial_cpu = {.pc=0x8adf, .a=0x11, .x=0xad, .y=0x00, .sp=0xdc, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x8adf, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x8ae0, .a=0x88, .x=0xad, .y=0x00, .sp=0xdc, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x8adf, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x8adf, .value=0x7c, .type=IO_READ},
        {.addr=0x8ae0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_027C) {
    const struct CPU_State initial_cpu = {.pc=0xb8e0, .a=0xfe, .x=0xe0, .y=0x6a, .sp=0xbe, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xb8e0, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xb8e1, .a=0xff, .x=0xe0, .y=0x6a, .sp=0xbe, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xb8e0, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xb8e0, .value=0x7c, .type=IO_READ},
        {.addr=0xb8e1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_027D) {
    const struct CPU_State initial_cpu = {.pc=0x5516, .a=0xaf, .x=0x2b, .y=0x9d, .sp=0x6f, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x5516, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x5517, .a=0xd7, .x=0x2b, .y=0x9d, .sp=0x6f, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x5516, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x5516, .value=0x7c, .type=IO_READ},
        {.addr=0x5517, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_027E) {
    const struct CPU_State initial_cpu = {.pc=0x1a25, .a=0x85, .x=0x49, .y=0x7c, .sp=0x5f, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x1a25, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x1a26, .a=0x42, .x=0x49, .y=0x7c, .sp=0x5f, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x1a25, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x1a25, .value=0x7c, .type=IO_READ},
        {.addr=0x1a26, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_027F) {
    const struct CPU_State initial_cpu = {.pc=0x6fcd, .a=0x68, .x=0xb6, .y=0x64, .sp=0xad, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x6fcd, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6fce, .a=0x34, .x=0xb6, .y=0x64, .sp=0xad, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x6fcd, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6fcd, .value=0x7c, .type=IO_READ},
        {.addr=0x6fce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0280) {
    const struct CPU_State initial_cpu = {.pc=0x24cd, .a=0x92, .x=0x7f, .y=0xf5, .sp=0x67, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x24cd, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x24ce, .a=0x49, .x=0x7f, .y=0xf5, .sp=0x67, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x24cd, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x24cd, .value=0x7c, .type=IO_READ},
        {.addr=0x24ce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0281) {
    const struct CPU_State initial_cpu = {.pc=0x6e43, .a=0xc3, .x=0xd2, .y=0x83, .sp=0x00, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x6e43, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6e44, .a=0x61, .x=0xd2, .y=0x83, .sp=0x00, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x6e43, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6e43, .value=0x7c, .type=IO_READ},
        {.addr=0x6e44, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0282) {
    const struct CPU_State initial_cpu = {.pc=0xee99, .a=0xea, .x=0xf3, .y=0x85, .sp=0x19, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xee99, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xee9a, .a=0xf5, .x=0xf3, .y=0x85, .sp=0x19, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xee99, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xee99, .value=0x7c, .type=IO_READ},
        {.addr=0xee9a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0283) {
    const struct CPU_State initial_cpu = {.pc=0x5803, .a=0xb4, .x=0x99, .y=0xbe, .sp=0x28, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x5803, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x5804, .a=0x5a, .x=0x99, .y=0xbe, .sp=0x28, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x5803, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x5803, .value=0x7c, .type=IO_READ},
        {.addr=0x5804, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0284) {
    const struct CPU_State initial_cpu = {.pc=0x79fa, .a=0x45, .x=0xf3, .y=0xa9, .sp=0xe4, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x79fa, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x79fb, .a=0xa2, .x=0xf3, .y=0xa9, .sp=0xe4, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x79fa, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x79fa, .value=0x7c, .type=IO_READ},
        {.addr=0x79fb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0285) {
    const struct CPU_State initial_cpu = {.pc=0xb071, .a=0x8f, .x=0x8c, .y=0xff, .sp=0x56, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xb071, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xb072, .a=0xc7, .x=0x8c, .y=0xff, .sp=0x56, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xb071, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xb071, .value=0x7c, .type=IO_READ},
        {.addr=0xb072, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0286) {
    const struct CPU_State initial_cpu = {.pc=0x667c, .a=0x9a, .x=0xfd, .y=0x35, .sp=0x70, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x667c, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x667d, .a=0xcd, .x=0xfd, .y=0x35, .sp=0x70, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x667c, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x667c, .value=0x7c, .type=IO_READ},
        {.addr=0x667d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0287) {
    const struct CPU_State initial_cpu = {.pc=0xd908, .a=0x48, .x=0xcb, .y=0xd9, .sp=0x23, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xd908, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xd909, .a=0xa4, .x=0xcb, .y=0xd9, .sp=0x23, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xd908, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xd908, .value=0x7c, .type=IO_READ},
        {.addr=0xd909, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0288) {
    const struct CPU_State initial_cpu = {.pc=0xecb6, .a=0x7b, .x=0xd3, .y=0xcb, .sp=0xf0, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xecb6, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xecb7, .a=0x3d, .x=0xd3, .y=0xcb, .sp=0xf0, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xecb6, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xecb6, .value=0x7c, .type=IO_READ},
        {.addr=0xecb7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0289) {
    const struct CPU_State initial_cpu = {.pc=0x017d, .a=0xe4, .x=0x96, .y=0xe0, .sp=0x56, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x017e, .a=0xf2, .x=0x96, .y=0xe0, .sp=0x56, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x017d, .value=0x7c, .type=IO_READ},
        {.addr=0x017e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_028A) {
    const struct CPU_State initial_cpu = {.pc=0x9cb2, .a=0x82, .x=0x76, .y=0x72, .sp=0x31, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x9cb2, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x9cb3, .a=0x41, .x=0x76, .y=0x72, .sp=0x31, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x9cb2, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x9cb2, .value=0x7c, .type=IO_READ},
        {.addr=0x9cb3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_028B) {
    const struct CPU_State initial_cpu = {.pc=0x5c85, .a=0xd5, .x=0x9d, .y=0x70, .sp=0x55, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x5c85, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x5c86, .a=0x6a, .x=0x9d, .y=0x70, .sp=0x55, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x5c85, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x5c85, .value=0x7c, .type=IO_READ},
        {.addr=0x5c86, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_028C) {
    const struct CPU_State initial_cpu = {.pc=0x1eff, .a=0x24, .x=0x6b, .y=0xc4, .sp=0xe4, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x1eff, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x1f00, .a=0x92, .x=0x6b, .y=0xc4, .sp=0xe4, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x1eff, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x1eff, .value=0x7c, .type=IO_READ},
        {.addr=0x1f00, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_028D) {
    const struct CPU_State initial_cpu = {.pc=0x34a7, .a=0xa4, .x=0x26, .y=0x7f, .sp=0x15, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x34a7, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x34a8, .a=0xd2, .x=0x26, .y=0x7f, .sp=0x15, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x34a7, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x34a7, .value=0x7c, .type=IO_READ},
        {.addr=0x34a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_028E) {
    const struct CPU_State initial_cpu = {.pc=0xfa45, .a=0x55, .x=0x64, .y=0xd1, .sp=0x50, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xfa45, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xfa46, .a=0xaa, .x=0x64, .y=0xd1, .sp=0x50, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xfa45, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xfa45, .value=0x7c, .type=IO_READ},
        {.addr=0xfa46, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_028F) {
    const struct CPU_State initial_cpu = {.pc=0x2148, .a=0x18, .x=0xd1, .y=0xa1, .sp=0x6e, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x2148, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x2149, .a=0x0c, .x=0xd1, .y=0xa1, .sp=0x6e, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x2148, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x2148, .value=0x7c, .type=IO_READ},
        {.addr=0x2149, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0290) {
    const struct CPU_State initial_cpu = {.pc=0xd6b9, .a=0x8c, .x=0x91, .y=0x10, .sp=0x08, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xd6b9, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xd6ba, .a=0x46, .x=0x91, .y=0x10, .sp=0x08, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xd6b9, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xd6b9, .value=0x7c, .type=IO_READ},
        {.addr=0xd6ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0291) {
    const struct CPU_State initial_cpu = {.pc=0x36b1, .a=0x5c, .x=0x14, .y=0xa3, .sp=0x03, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x36b1, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x36b2, .a=0xae, .x=0x14, .y=0xa3, .sp=0x03, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x36b1, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x36b1, .value=0x7c, .type=IO_READ},
        {.addr=0x36b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0292) {
    const struct CPU_State initial_cpu = {.pc=0x81a7, .a=0xad, .x=0xdc, .y=0x7c, .sp=0xd9, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x81a7, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x81a8, .a=0xd6, .x=0xdc, .y=0x7c, .sp=0xd9, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x81a7, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x81a7, .value=0x7c, .type=IO_READ},
        {.addr=0x81a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0293) {
    const struct CPU_State initial_cpu = {.pc=0x1ce6, .a=0xa6, .x=0x53, .y=0x71, .sp=0x9b, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x1ce6, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x1ce7, .a=0x53, .x=0x53, .y=0x71, .sp=0x9b, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x1ce6, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x1ce6, .value=0x7c, .type=IO_READ},
        {.addr=0x1ce7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0294) {
    const struct CPU_State initial_cpu = {.pc=0xd6b8, .a=0x62, .x=0x6c, .y=0xd7, .sp=0xfb, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xd6b8, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xd6b9, .a=0xb1, .x=0x6c, .y=0xd7, .sp=0xfb, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xd6b8, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xd6b8, .value=0x7c, .type=IO_READ},
        {.addr=0xd6b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0295) {
    const struct CPU_State initial_cpu = {.pc=0xfa47, .a=0x0b, .x=0xad, .y=0xcf, .sp=0x0f, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xfa47, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xfa48, .a=0x05, .x=0xad, .y=0xcf, .sp=0x0f, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xfa47, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xfa47, .value=0x7c, .type=IO_READ},
        {.addr=0xfa48, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0296) {
    const struct CPU_State initial_cpu = {.pc=0x3487, .a=0xa1, .x=0x57, .y=0x24, .sp=0x15, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x3487, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x3488, .a=0x50, .x=0x57, .y=0x24, .sp=0x15, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x3487, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x3487, .value=0x7c, .type=IO_READ},
        {.addr=0x3488, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0297) {
    const struct CPU_State initial_cpu = {.pc=0x5574, .a=0x48, .x=0x0e, .y=0xe3, .sp=0x83, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x5574, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x5575, .a=0xa4, .x=0x0e, .y=0xe3, .sp=0x83, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x5574, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x5574, .value=0x7c, .type=IO_READ},
        {.addr=0x5575, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0298) {
    const struct CPU_State initial_cpu = {.pc=0x1ca6, .a=0x14, .x=0x0a, .y=0x7f, .sp=0x1c, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x1ca6, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x1ca7, .a=0x0a, .x=0x0a, .y=0x7f, .sp=0x1c, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x1ca6, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x1ca6, .value=0x7c, .type=IO_READ},
        {.addr=0x1ca7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0299) {
    const struct CPU_State initial_cpu = {.pc=0xa113, .a=0xb8, .x=0x9d, .y=0x71, .sp=0xdc, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xa113, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xa114, .a=0xdc, .x=0x9d, .y=0x71, .sp=0xdc, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xa113, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xa113, .value=0x7c, .type=IO_READ},
        {.addr=0xa114, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_029A) {
    const struct CPU_State initial_cpu = {.pc=0x0bb0, .a=0xb4, .x=0x37, .y=0x5e, .sp=0xff, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x0bb0, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x0bb1, .a=0x5a, .x=0x37, .y=0x5e, .sp=0xff, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0bb0, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x0bb0, .value=0x7c, .type=IO_READ},
        {.addr=0x0bb1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_029B) {
    const struct CPU_State initial_cpu = {.pc=0x2fac, .a=0x57, .x=0xd5, .y=0xe8, .sp=0x10, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x2fac, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x2fad, .a=0xab, .x=0xd5, .y=0xe8, .sp=0x10, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x2fac, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x2fac, .value=0x7c, .type=IO_READ},
        {.addr=0x2fad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_029C) {
    const struct CPU_State initial_cpu = {.pc=0x5257, .a=0xe2, .x=0x19, .y=0x67, .sp=0x0d, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x5257, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x5258, .a=0xf1, .x=0x19, .y=0x67, .sp=0x0d, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x5257, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x5257, .value=0x7c, .type=IO_READ},
        {.addr=0x5258, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_029D) {
    const struct CPU_State initial_cpu = {.pc=0x1eb9, .a=0xbb, .x=0x35, .y=0x4c, .sp=0x66, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x1eb9, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x1eba, .a=0xdd, .x=0x35, .y=0x4c, .sp=0x66, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x1eb9, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x1eb9, .value=0x7c, .type=IO_READ},
        {.addr=0x1eba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_029E) {
    const struct CPU_State initial_cpu = {.pc=0x9d2e, .a=0x98, .x=0x1f, .y=0x37, .sp=0x0f, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x9d2e, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x9d2f, .a=0xcc, .x=0x1f, .y=0x37, .sp=0x0f, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x9d2e, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x9d2e, .value=0x7c, .type=IO_READ},
        {.addr=0x9d2f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_029F) {
    const struct CPU_State initial_cpu = {.pc=0xa4b4, .a=0xc5, .x=0x21, .y=0x2f, .sp=0x22, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xa4b4, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xa4b5, .a=0xe2, .x=0x21, .y=0x2f, .sp=0x22, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xa4b4, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xa4b4, .value=0x7c, .type=IO_READ},
        {.addr=0xa4b5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02A0) {
    const struct CPU_State initial_cpu = {.pc=0xc82b, .a=0xb3, .x=0xba, .y=0x5c, .sp=0x09, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xc82b, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xc82c, .a=0xd9, .x=0xba, .y=0x5c, .sp=0x09, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xc82b, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xc82b, .value=0x7c, .type=IO_READ},
        {.addr=0xc82c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02A1) {
    const struct CPU_State initial_cpu = {.pc=0x2a1a, .a=0x84, .x=0xd5, .y=0x45, .sp=0x8d, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x2a1a, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x2a1b, .a=0x42, .x=0xd5, .y=0x45, .sp=0x8d, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x2a1a, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x2a1a, .value=0x7c, .type=IO_READ},
        {.addr=0x2a1b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02A2) {
    const struct CPU_State initial_cpu = {.pc=0x8502, .a=0xc6, .x=0xef, .y=0x20, .sp=0xdb, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x8502, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x8503, .a=0x63, .x=0xef, .y=0x20, .sp=0xdb, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x8502, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x8502, .value=0x7c, .type=IO_READ},
        {.addr=0x8503, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02A3) {
    const struct CPU_State initial_cpu = {.pc=0x6828, .a=0xf2, .x=0x8b, .y=0x3f, .sp=0xcc, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x6828, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6829, .a=0xf9, .x=0x8b, .y=0x3f, .sp=0xcc, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x6828, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6828, .value=0x7c, .type=IO_READ},
        {.addr=0x6829, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02A4) {
    const struct CPU_State initial_cpu = {.pc=0xb309, .a=0x6e, .x=0xd2, .y=0x2d, .sp=0xbf, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xb309, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xb30a, .a=0xb7, .x=0xd2, .y=0x2d, .sp=0xbf, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xb309, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xb309, .value=0x7c, .type=IO_READ},
        {.addr=0xb30a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x10e0, .a=0xf8, .x=0x29, .y=0x14, .sp=0xf4, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x10e0, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x10e1, .a=0x7c, .x=0x29, .y=0x14, .sp=0xf4, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x10e0, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x10e0, .value=0x7c, .type=IO_READ},
        {.addr=0x10e1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02A6) {
    const struct CPU_State initial_cpu = {.pc=0xa265, .a=0xe1, .x=0x01, .y=0xd1, .sp=0xf0, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xa265, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xa266, .a=0xf0, .x=0x01, .y=0xd1, .sp=0xf0, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xa265, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xa265, .value=0x7c, .type=IO_READ},
        {.addr=0xa266, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02A7) {
    const struct CPU_State initial_cpu = {.pc=0x90e8, .a=0x3f, .x=0x4a, .y=0x3a, .sp=0x71, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x90e8, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x90e9, .a=0x1f, .x=0x4a, .y=0x3a, .sp=0x71, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x90e8, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x90e8, .value=0x7c, .type=IO_READ},
        {.addr=0x90e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02A8) {
    const struct CPU_State initial_cpu = {.pc=0xb5e2, .a=0x56, .x=0x64, .y=0x77, .sp=0x64, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xb5e2, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xb5e3, .a=0x2b, .x=0x64, .y=0x77, .sp=0x64, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xb5e2, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xb5e2, .value=0x7c, .type=IO_READ},
        {.addr=0xb5e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02A9) {
    const struct CPU_State initial_cpu = {.pc=0x681a, .a=0xa1, .x=0xd6, .y=0x87, .sp=0xac, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x681a, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x681b, .a=0xd0, .x=0xd6, .y=0x87, .sp=0xac, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x681a, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x681a, .value=0x7c, .type=IO_READ},
        {.addr=0x681b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02AA) {
    const struct CPU_State initial_cpu = {.pc=0x26b5, .a=0x1e, .x=0xce, .y=0x9b, .sp=0xbe, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x26b5, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x26b6, .a=0x8f, .x=0xce, .y=0x9b, .sp=0xbe, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x26b5, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x26b5, .value=0x7c, .type=IO_READ},
        {.addr=0x26b6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02AB) {
    const struct CPU_State initial_cpu = {.pc=0x9c9a, .a=0xec, .x=0xe4, .y=0x7d, .sp=0xb0, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x9c9a, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x9c9b, .a=0xf6, .x=0xe4, .y=0x7d, .sp=0xb0, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x9c9a, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x9c9a, .value=0x7c, .type=IO_READ},
        {.addr=0x9c9b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02AC) {
    const struct CPU_State initial_cpu = {.pc=0xed55, .a=0x7c, .x=0xb8, .y=0x71, .sp=0xa2, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xed55, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xed56, .a=0x3e, .x=0xb8, .y=0x71, .sp=0xa2, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xed55, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xed55, .value=0x7c, .type=IO_READ},
        {.addr=0xed56, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02AD) {
    const struct CPU_State initial_cpu = {.pc=0xa7f6, .a=0x22, .x=0x78, .y=0xa3, .sp=0xff, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xa7f6, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xa7f7, .a=0x11, .x=0x78, .y=0xa3, .sp=0xff, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xa7f6, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xa7f6, .value=0x7c, .type=IO_READ},
        {.addr=0xa7f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02AE) {
    const struct CPU_State initial_cpu = {.pc=0x5931, .a=0xaa, .x=0x60, .y=0x97, .sp=0x71, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x5931, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x5932, .a=0x55, .x=0x60, .y=0x97, .sp=0x71, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x5931, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x5931, .value=0x7c, .type=IO_READ},
        {.addr=0x5932, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x7aa7, .a=0xce, .x=0xa3, .y=0x88, .sp=0x52, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x7aa7, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x7aa8, .a=0xe7, .x=0xa3, .y=0x88, .sp=0x52, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x7aa7, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x7aa7, .value=0x7c, .type=IO_READ},
        {.addr=0x7aa8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02B0) {
    const struct CPU_State initial_cpu = {.pc=0x9495, .a=0xf7, .x=0x51, .y=0x79, .sp=0x17, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x9495, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x9496, .a=0x7b, .x=0x51, .y=0x79, .sp=0x17, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x9495, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x9495, .value=0x7c, .type=IO_READ},
        {.addr=0x9496, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02B1) {
    const struct CPU_State initial_cpu = {.pc=0x07f4, .a=0xf4, .x=0xf4, .y=0xce, .sp=0x82, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x07f4, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x07f5, .a=0xfa, .x=0xf4, .y=0xce, .sp=0x82, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x07f4, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x07f4, .value=0x7c, .type=IO_READ},
        {.addr=0x07f5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02B2) {
    const struct CPU_State initial_cpu = {.pc=0x20b1, .a=0x34, .x=0xdc, .y=0x9c, .sp=0x6c, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x20b1, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x20b2, .a=0x9a, .x=0xdc, .y=0x9c, .sp=0x6c, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x20b1, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x20b1, .value=0x7c, .type=IO_READ},
        {.addr=0x20b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02B3) {
    const struct CPU_State initial_cpu = {.pc=0x8bce, .a=0xa1, .x=0x2a, .y=0x64, .sp=0x84, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x8bce, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x8bcf, .a=0xd0, .x=0x2a, .y=0x64, .sp=0x84, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x8bce, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x8bce, .value=0x7c, .type=IO_READ},
        {.addr=0x8bcf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02B4) {
    const struct CPU_State initial_cpu = {.pc=0xdc2e, .a=0x0a, .x=0xfc, .y=0x8a, .sp=0xa1, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xdc2e, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xdc2f, .a=0x05, .x=0xfc, .y=0x8a, .sp=0xa1, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xdc2e, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xdc2e, .value=0x7c, .type=IO_READ},
        {.addr=0xdc2f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02B5) {
    const struct CPU_State initial_cpu = {.pc=0x615e, .a=0x23, .x=0xcd, .y=0x16, .sp=0xc1, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x615e, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x615f, .a=0x91, .x=0xcd, .y=0x16, .sp=0xc1, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x615e, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x615e, .value=0x7c, .type=IO_READ},
        {.addr=0x615f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02B6) {
    const struct CPU_State initial_cpu = {.pc=0x4d36, .a=0xe8, .x=0x74, .y=0x6b, .sp=0x97, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x4d36, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x4d37, .a=0xf4, .x=0x74, .y=0x6b, .sp=0x97, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x4d36, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x4d36, .value=0x7c, .type=IO_READ},
        {.addr=0x4d37, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02B7) {
    const struct CPU_State initial_cpu = {.pc=0x39da, .a=0x8c, .x=0x73, .y=0x1e, .sp=0x77, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x39da, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x39db, .a=0xc6, .x=0x73, .y=0x1e, .sp=0x77, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x39da, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x39da, .value=0x7c, .type=IO_READ},
        {.addr=0x39db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02B8) {
    const struct CPU_State initial_cpu = {.pc=0x42dc, .a=0xc4, .x=0x27, .y=0x69, .sp=0x8e, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x42dc, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x42dd, .a=0xe2, .x=0x27, .y=0x69, .sp=0x8e, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x42dc, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x42dc, .value=0x7c, .type=IO_READ},
        {.addr=0x42dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02B9) {
    const struct CPU_State initial_cpu = {.pc=0xaa58, .a=0x16, .x=0xf8, .y=0xaa, .sp=0xd9, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xaa58, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xaa59, .a=0x8b, .x=0xf8, .y=0xaa, .sp=0xd9, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xaa58, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xaa58, .value=0x7c, .type=IO_READ},
        {.addr=0xaa59, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02BA) {
    const struct CPU_State initial_cpu = {.pc=0xd02e, .a=0xc8, .x=0x00, .y=0x05, .sp=0xea, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xd02e, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xd02f, .a=0xe4, .x=0x00, .y=0x05, .sp=0xea, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xd02e, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xd02e, .value=0x7c, .type=IO_READ},
        {.addr=0xd02f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02BB) {
    const struct CPU_State initial_cpu = {.pc=0x211b, .a=0xb5, .x=0x7d, .y=0x43, .sp=0x8a, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x211b, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x211c, .a=0xda, .x=0x7d, .y=0x43, .sp=0x8a, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x211b, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x211b, .value=0x7c, .type=IO_READ},
        {.addr=0x211c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02BC) {
    const struct CPU_State initial_cpu = {.pc=0xbba7, .a=0x8e, .x=0x29, .y=0x34, .sp=0x11, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xbba7, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xbba8, .a=0x47, .x=0x29, .y=0x34, .sp=0x11, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xbba7, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xbba7, .value=0x7c, .type=IO_READ},
        {.addr=0xbba8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02BD) {
    const struct CPU_State initial_cpu = {.pc=0x4af9, .a=0xf9, .x=0x45, .y=0xf0, .sp=0x96, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x4af9, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x4afa, .a=0xfc, .x=0x45, .y=0xf0, .sp=0x96, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x4af9, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x4af9, .value=0x7c, .type=IO_READ},
        {.addr=0x4afa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02BE) {
    const struct CPU_State initial_cpu = {.pc=0x8c90, .a=0x77, .x=0xb3, .y=0xce, .sp=0x05, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x8c90, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x8c91, .a=0xbb, .x=0xb3, .y=0xce, .sp=0x05, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x8c90, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x8c90, .value=0x7c, .type=IO_READ},
        {.addr=0x8c91, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x28eb, .a=0x30, .x=0xaf, .y=0x5d, .sp=0x53, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x28eb, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x28ec, .a=0x98, .x=0xaf, .y=0x5d, .sp=0x53, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x28eb, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x28eb, .value=0x7c, .type=IO_READ},
        {.addr=0x28ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02C0) {
    const struct CPU_State initial_cpu = {.pc=0xe5ed, .a=0x87, .x=0x2f, .y=0xee, .sp=0x8d, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xe5ed, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xe5ee, .a=0x43, .x=0x2f, .y=0xee, .sp=0x8d, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xe5ed, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xe5ed, .value=0x7c, .type=IO_READ},
        {.addr=0xe5ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x4989, .a=0x00, .x=0x7e, .y=0x6f, .sp=0x55, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x4989, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x498a, .a=0x00, .x=0x7e, .y=0x6f, .sp=0x55, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x4989, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x4989, .value=0x7c, .type=IO_READ},
        {.addr=0x498a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02C2) {
    const struct CPU_State initial_cpu = {.pc=0x4050, .a=0x29, .x=0xaa, .y=0xc7, .sp=0xb1, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x4050, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x4051, .a=0x94, .x=0xaa, .y=0xc7, .sp=0xb1, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x4050, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x4050, .value=0x7c, .type=IO_READ},
        {.addr=0x4051, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02C3) {
    const struct CPU_State initial_cpu = {.pc=0x09f3, .a=0xa5, .x=0x38, .y=0x1b, .sp=0x44, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x09f3, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x09f4, .a=0xd2, .x=0x38, .y=0x1b, .sp=0x44, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x09f3, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x09f3, .value=0x7c, .type=IO_READ},
        {.addr=0x09f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02C4) {
    const struct CPU_State initial_cpu = {.pc=0x46cd, .a=0x86, .x=0x18, .y=0xe7, .sp=0x13, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x46cd, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x46ce, .a=0xc3, .x=0x18, .y=0xe7, .sp=0x13, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x46cd, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x46cd, .value=0x7c, .type=IO_READ},
        {.addr=0x46ce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02C5) {
    const struct CPU_State initial_cpu = {.pc=0xe201, .a=0xe9, .x=0xfe, .y=0x7f, .sp=0xa8, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xe201, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xe202, .a=0xf4, .x=0xfe, .y=0x7f, .sp=0xa8, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xe201, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xe201, .value=0x7c, .type=IO_READ},
        {.addr=0xe202, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02C6) {
    const struct CPU_State initial_cpu = {.pc=0x94be, .a=0xf4, .x=0x9e, .y=0x11, .sp=0x13, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x94be, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x94bf, .a=0x7a, .x=0x9e, .y=0x11, .sp=0x13, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x94be, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x94be, .value=0x7c, .type=IO_READ},
        {.addr=0x94bf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02C7) {
    const struct CPU_State initial_cpu = {.pc=0xb35c, .a=0x90, .x=0x50, .y=0xdf, .sp=0xe0, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xb35c, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xb35d, .a=0xc8, .x=0x50, .y=0xdf, .sp=0xe0, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xb35c, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xb35c, .value=0x7c, .type=IO_READ},
        {.addr=0xb35d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02C8) {
    const struct CPU_State initial_cpu = {.pc=0x4782, .a=0x19, .x=0x56, .y=0x82, .sp=0x02, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x4782, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x4783, .a=0x0c, .x=0x56, .y=0x82, .sp=0x02, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x4782, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x4782, .value=0x7c, .type=IO_READ},
        {.addr=0x4783, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02C9) {
    const struct CPU_State initial_cpu = {.pc=0xd18c, .a=0xf1, .x=0xcc, .y=0x56, .sp=0xc7, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0xd18c, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xd18d, .a=0xf8, .x=0xcc, .y=0x56, .sp=0xc7, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xd18c, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xd18c, .value=0x7c, .type=IO_READ},
        {.addr=0xd18d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02CA) {
    const struct CPU_State initial_cpu = {.pc=0xf752, .a=0x3b, .x=0xf9, .y=0xb3, .sp=0xf5, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xf752, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xf753, .a=0x9d, .x=0xf9, .y=0xb3, .sp=0xf5, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xf752, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xf752, .value=0x7c, .type=IO_READ},
        {.addr=0xf753, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02CB) {
    const struct CPU_State initial_cpu = {.pc=0xba9d, .a=0xb2, .x=0x80, .y=0x11, .sp=0x95, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xba9d, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xba9e, .a=0xd9, .x=0x80, .y=0x11, .sp=0x95, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xba9d, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xba9d, .value=0x7c, .type=IO_READ},
        {.addr=0xba9e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02CC) {
    const struct CPU_State initial_cpu = {.pc=0xdbdd, .a=0x3c, .x=0x53, .y=0xb4, .sp=0x08, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xdbdd, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xdbde, .a=0x9e, .x=0x53, .y=0xb4, .sp=0x08, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xdbdd, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xdbdd, .value=0x7c, .type=IO_READ},
        {.addr=0xdbde, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02CD) {
    const struct CPU_State initial_cpu = {.pc=0xa232, .a=0xdf, .x=0x5c, .y=0x86, .sp=0xc8, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xa232, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xa233, .a=0xef, .x=0x5c, .y=0x86, .sp=0xc8, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xa232, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xa232, .value=0x7c, .type=IO_READ},
        {.addr=0xa233, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x3243, .a=0xf8, .x=0x16, .y=0x10, .sp=0xc9, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x3243, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x3244, .a=0x7c, .x=0x16, .y=0x10, .sp=0xc9, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x3243, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x3243, .value=0x7c, .type=IO_READ},
        {.addr=0x3244, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02CF) {
    const struct CPU_State initial_cpu = {.pc=0xfd76, .a=0xac, .x=0x43, .y=0x95, .sp=0x9c, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xfd76, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xfd77, .a=0xd6, .x=0x43, .y=0x95, .sp=0x9c, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xfd76, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xfd76, .value=0x7c, .type=IO_READ},
        {.addr=0xfd77, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02D0) {
    const struct CPU_State initial_cpu = {.pc=0xb577, .a=0x9a, .x=0x8c, .y=0x22, .sp=0x35, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xb577, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xb578, .a=0x4d, .x=0x8c, .y=0x22, .sp=0x35, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xb577, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xb577, .value=0x7c, .type=IO_READ},
        {.addr=0xb578, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02D1) {
    const struct CPU_State initial_cpu = {.pc=0x2916, .a=0x41, .x=0xdf, .y=0xd5, .sp=0xc9, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x2916, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x2917, .a=0x20, .x=0xdf, .y=0xd5, .sp=0xc9, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x2916, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x2916, .value=0x7c, .type=IO_READ},
        {.addr=0x2917, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02D2) {
    const struct CPU_State initial_cpu = {.pc=0xf956, .a=0x70, .x=0x6e, .y=0x90, .sp=0xc5, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xf956, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xf957, .a=0x38, .x=0x6e, .y=0x90, .sp=0xc5, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xf956, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xf956, .value=0x7c, .type=IO_READ},
        {.addr=0xf957, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x767d, .a=0xad, .x=0x00, .y=0x48, .sp=0x9a, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x767d, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x767e, .a=0xd6, .x=0x00, .y=0x48, .sp=0x9a, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x767d, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x767d, .value=0x7c, .type=IO_READ},
        {.addr=0x767e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x772d, .a=0xc2, .x=0xbe, .y=0xd4, .sp=0x5b, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x772d, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x772e, .a=0x61, .x=0xbe, .y=0xd4, .sp=0x5b, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x772d, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x772d, .value=0x7c, .type=IO_READ},
        {.addr=0x772e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02D5) {
    const struct CPU_State initial_cpu = {.pc=0xb656, .a=0x46, .x=0xa0, .y=0x57, .sp=0x7d, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xb656, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xb657, .a=0x23, .x=0xa0, .y=0x57, .sp=0x7d, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xb656, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xb656, .value=0x7c, .type=IO_READ},
        {.addr=0xb657, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02D6) {
    const struct CPU_State initial_cpu = {.pc=0xfe65, .a=0x00, .x=0x96, .y=0x83, .sp=0xa9, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xfe65, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xfe66, .a=0x80, .x=0x96, .y=0x83, .sp=0xa9, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xfe65, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xfe65, .value=0x7c, .type=IO_READ},
        {.addr=0xfe66, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x5920, .a=0x4a, .x=0x6e, .y=0x9e, .sp=0xd2, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x5920, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x5921, .a=0xa5, .x=0x6e, .y=0x9e, .sp=0xd2, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x5920, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x5920, .value=0x7c, .type=IO_READ},
        {.addr=0x5921, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02D8) {
    const struct CPU_State initial_cpu = {.pc=0xb5d5, .a=0xd0, .x=0x27, .y=0x3c, .sp=0x60, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xb5d5, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xb5d6, .a=0x68, .x=0x27, .y=0x3c, .sp=0x60, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xb5d5, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xb5d5, .value=0x7c, .type=IO_READ},
        {.addr=0xb5d6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02D9) {
    const struct CPU_State initial_cpu = {.pc=0x5b3f, .a=0xd5, .x=0xf0, .y=0x69, .sp=0xe9, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x5b3f, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x5b40, .a=0x6a, .x=0xf0, .y=0x69, .sp=0xe9, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x5b3f, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x5b3f, .value=0x7c, .type=IO_READ},
        {.addr=0x5b40, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02DA) {
    const struct CPU_State initial_cpu = {.pc=0x5563, .a=0x0d, .x=0x6a, .y=0x05, .sp=0x5e, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x5563, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x5564, .a=0x86, .x=0x6a, .y=0x05, .sp=0x5e, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x5563, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x5563, .value=0x7c, .type=IO_READ},
        {.addr=0x5564, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02DB) {
    const struct CPU_State initial_cpu = {.pc=0xdd12, .a=0x80, .x=0x8f, .y=0x15, .sp=0x8b, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xdd12, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xdd13, .a=0xc0, .x=0x8f, .y=0x15, .sp=0x8b, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xdd12, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xdd12, .value=0x7c, .type=IO_READ},
        {.addr=0xdd13, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02DC) {
    const struct CPU_State initial_cpu = {.pc=0xc06b, .a=0x42, .x=0xed, .y=0xaf, .sp=0x9b, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xc06b, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xc06c, .a=0x21, .x=0xed, .y=0xaf, .sp=0x9b, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xc06b, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xc06b, .value=0x7c, .type=IO_READ},
        {.addr=0xc06c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02DD) {
    const struct CPU_State initial_cpu = {.pc=0xfd67, .a=0xac, .x=0xde, .y=0x35, .sp=0xf5, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xfd67, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xfd68, .a=0xd6, .x=0xde, .y=0x35, .sp=0xf5, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xfd67, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xfd67, .value=0x7c, .type=IO_READ},
        {.addr=0xfd68, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02DE) {
    const struct CPU_State initial_cpu = {.pc=0x6836, .a=0xb8, .x=0x2f, .y=0xed, .sp=0x6c, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x6836, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6837, .a=0xdc, .x=0x2f, .y=0xed, .sp=0x6c, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x6836, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6836, .value=0x7c, .type=IO_READ},
        {.addr=0x6837, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02DF) {
    const struct CPU_State initial_cpu = {.pc=0x6215, .a=0xde, .x=0xa1, .y=0xb0, .sp=0xd7, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x6215, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6216, .a=0xef, .x=0xa1, .y=0xb0, .sp=0xd7, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x6215, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6215, .value=0x7c, .type=IO_READ},
        {.addr=0x6216, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02E0) {
    const struct CPU_State initial_cpu = {.pc=0x80ba, .a=0xb4, .x=0x61, .y=0x35, .sp=0x0f, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x80ba, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x80bb, .a=0x5a, .x=0x61, .y=0x35, .sp=0x0f, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x80ba, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x80ba, .value=0x7c, .type=IO_READ},
        {.addr=0x80bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02E1) {
    const struct CPU_State initial_cpu = {.pc=0x8e62, .a=0xbb, .x=0x3e, .y=0xd9, .sp=0xf9, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x8e62, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x8e63, .a=0x5d, .x=0x3e, .y=0xd9, .sp=0xf9, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x8e62, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x8e62, .value=0x7c, .type=IO_READ},
        {.addr=0x8e63, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02E2) {
    const struct CPU_State initial_cpu = {.pc=0x49ac, .a=0xfb, .x=0x1d, .y=0x5b, .sp=0xe0, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x49ac, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x49ad, .a=0x7d, .x=0x1d, .y=0x5b, .sp=0xe0, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x49ac, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x49ac, .value=0x7c, .type=IO_READ},
        {.addr=0x49ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02E3) {
    const struct CPU_State initial_cpu = {.pc=0xd517, .a=0x85, .x=0x33, .y=0x71, .sp=0x09, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xd517, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xd518, .a=0x42, .x=0x33, .y=0x71, .sp=0x09, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xd517, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xd517, .value=0x7c, .type=IO_READ},
        {.addr=0xd518, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02E4) {
    const struct CPU_State initial_cpu = {.pc=0x79e3, .a=0xb3, .x=0x5c, .y=0xd1, .sp=0x2d, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x79e3, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x79e4, .a=0xd9, .x=0x5c, .y=0xd1, .sp=0x2d, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x79e3, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x79e3, .value=0x7c, .type=IO_READ},
        {.addr=0x79e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02E5) {
    const struct CPU_State initial_cpu = {.pc=0x7d26, .a=0x34, .x=0xa5, .y=0xb6, .sp=0x3b, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x7d26, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x7d27, .a=0x1a, .x=0xa5, .y=0xb6, .sp=0x3b, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x7d26, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x7d26, .value=0x7c, .type=IO_READ},
        {.addr=0x7d27, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02E6) {
    const struct CPU_State initial_cpu = {.pc=0x20bc, .a=0x98, .x=0x29, .y=0xfa, .sp=0xf7, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x20bc, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x20bd, .a=0xcc, .x=0x29, .y=0xfa, .sp=0xf7, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x20bc, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x20bc, .value=0x7c, .type=IO_READ},
        {.addr=0x20bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02E7) {
    const struct CPU_State initial_cpu = {.pc=0x9491, .a=0x12, .x=0xd3, .y=0xc9, .sp=0x42, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x9491, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x9492, .a=0x09, .x=0xd3, .y=0xc9, .sp=0x42, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x9491, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x9491, .value=0x7c, .type=IO_READ},
        {.addr=0x9492, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02E8) {
    const struct CPU_State initial_cpu = {.pc=0x1994, .a=0x99, .x=0x8f, .y=0x99, .sp=0xf2, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x1994, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x1995, .a=0x4c, .x=0x8f, .y=0x99, .sp=0xf2, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x1994, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x1994, .value=0x7c, .type=IO_READ},
        {.addr=0x1995, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02E9) {
    const struct CPU_State initial_cpu = {.pc=0xe712, .a=0x2a, .x=0x48, .y=0x62, .sp=0xb5, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xe712, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xe713, .a=0x95, .x=0x48, .y=0x62, .sp=0xb5, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xe712, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xe712, .value=0x7c, .type=IO_READ},
        {.addr=0xe713, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x9827, .a=0x4f, .x=0xa8, .y=0xe6, .sp=0xac, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x9827, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x9828, .a=0xa7, .x=0xa8, .y=0xe6, .sp=0xac, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x9827, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x9827, .value=0x7c, .type=IO_READ},
        {.addr=0x9828, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x4673, .a=0x7d, .x=0xbe, .y=0x0e, .sp=0x64, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x4673, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x4674, .a=0xbe, .x=0xbe, .y=0x0e, .sp=0x64, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x4673, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x4673, .value=0x7c, .type=IO_READ},
        {.addr=0x4674, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02EC) {
    const struct CPU_State initial_cpu = {.pc=0x44d1, .a=0xd2, .x=0x95, .y=0xf9, .sp=0x7c, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x44d1, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x44d2, .a=0x69, .x=0x95, .y=0xf9, .sp=0x7c, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x44d1, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x44d1, .value=0x7c, .type=IO_READ},
        {.addr=0x44d2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x167d, .a=0x43, .x=0x63, .y=0x09, .sp=0xf7, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x167d, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x167e, .a=0x21, .x=0x63, .y=0x09, .sp=0xf7, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x167d, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x167d, .value=0x7c, .type=IO_READ},
        {.addr=0x167e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02EE) {
    const struct CPU_State initial_cpu = {.pc=0xb158, .a=0x31, .x=0x4a, .y=0xbc, .sp=0x25, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xb158, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xb159, .a=0x18, .x=0x4a, .y=0xbc, .sp=0x25, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xb158, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xb158, .value=0x7c, .type=IO_READ},
        {.addr=0xb159, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02EF) {
    const struct CPU_State initial_cpu = {.pc=0x78f5, .a=0x1a, .x=0x99, .y=0xd6, .sp=0x04, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x78f5, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x78f6, .a=0x8d, .x=0x99, .y=0xd6, .sp=0x04, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x78f5, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x78f5, .value=0x7c, .type=IO_READ},
        {.addr=0x78f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02F0) {
    const struct CPU_State initial_cpu = {.pc=0x2111, .a=0x30, .x=0x6d, .y=0xed, .sp=0xfd, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x2111, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x2112, .a=0x18, .x=0x6d, .y=0xed, .sp=0xfd, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x2111, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x2111, .value=0x7c, .type=IO_READ},
        {.addr=0x2112, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x61b1, .a=0x24, .x=0xc6, .y=0x95, .sp=0x3b, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x61b1, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x61b2, .a=0x92, .x=0xc6, .y=0x95, .sp=0x3b, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x61b1, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x61b1, .value=0x7c, .type=IO_READ},
        {.addr=0x61b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02F2) {
    const struct CPU_State initial_cpu = {.pc=0x6d36, .a=0x0f, .x=0xb1, .y=0x09, .sp=0x90, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x6d36, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6d37, .a=0x87, .x=0xb1, .y=0x09, .sp=0x90, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x6d36, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6d36, .value=0x7c, .type=IO_READ},
        {.addr=0x6d37, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02F3) {
    const struct CPU_State initial_cpu = {.pc=0xd517, .a=0xa6, .x=0x6a, .y=0x0d, .sp=0x55, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xd517, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xd518, .a=0x53, .x=0x6a, .y=0x0d, .sp=0x55, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xd517, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xd517, .value=0x7c, .type=IO_READ},
        {.addr=0xd518, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02F4) {
    const struct CPU_State initial_cpu = {.pc=0xcfa9, .a=0x2f, .x=0x75, .y=0x7a, .sp=0x2e, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xcfa9, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xcfaa, .a=0x97, .x=0x75, .y=0x7a, .sp=0x2e, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xcfa9, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xcfa9, .value=0x7c, .type=IO_READ},
        {.addr=0xcfaa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x2d0a, .a=0x6b, .x=0x18, .y=0xd0, .sp=0x4e, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x2d0a, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x2d0b, .a=0x35, .x=0x18, .y=0xd0, .sp=0x4e, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x2d0a, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x2d0a, .value=0x7c, .type=IO_READ},
        {.addr=0x2d0b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02F6) {
    const struct CPU_State initial_cpu = {.pc=0xe395, .a=0x3e, .x=0xfb, .y=0x95, .sp=0xe8, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xe395, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xe396, .a=0x1f, .x=0xfb, .y=0x95, .sp=0xe8, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xe395, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xe395, .value=0x7c, .type=IO_READ},
        {.addr=0xe396, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x1963, .a=0xfb, .x=0x62, .y=0xaa, .sp=0x7d, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x1963, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x1964, .a=0xfd, .x=0x62, .y=0xaa, .sp=0x7d, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x1963, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x1963, .value=0x7c, .type=IO_READ},
        {.addr=0x1964, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02F8) {
    const struct CPU_State initial_cpu = {.pc=0x4c05, .a=0xc5, .x=0xca, .y=0x95, .sp=0x75, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x4c05, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x4c06, .a=0xe2, .x=0xca, .y=0x95, .sp=0x75, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x4c05, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x4c05, .value=0x7c, .type=IO_READ},
        {.addr=0x4c06, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02F9) {
    const struct CPU_State initial_cpu = {.pc=0xe74a, .a=0x1f, .x=0x5d, .y=0xba, .sp=0x13, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xe74a, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xe74b, .a=0x0f, .x=0x5d, .y=0xba, .sp=0x13, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xe74a, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xe74a, .value=0x7c, .type=IO_READ},
        {.addr=0xe74b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02FA) {
    const struct CPU_State initial_cpu = {.pc=0x7bb1, .a=0xed, .x=0x38, .y=0xc2, .sp=0x4d, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x7bb1, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x7bb2, .a=0xf6, .x=0x38, .y=0xc2, .sp=0x4d, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x7bb1, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x7bb1, .value=0x7c, .type=IO_READ},
        {.addr=0x7bb2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02FB) {
    const struct CPU_State initial_cpu = {.pc=0x5e4a, .a=0x90, .x=0xa7, .y=0x1b, .sp=0x23, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x5e4a, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x5e4b, .a=0x48, .x=0xa7, .y=0x1b, .sp=0x23, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x5e4a, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x5e4a, .value=0x7c, .type=IO_READ},
        {.addr=0x5e4b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02FC) {
    const struct CPU_State initial_cpu = {.pc=0x7573, .a=0x22, .x=0x3a, .y=0xa3, .sp=0xe2, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x7573, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x7574, .a=0x91, .x=0x3a, .y=0xa3, .sp=0xe2, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x7573, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x7573, .value=0x7c, .type=IO_READ},
        {.addr=0x7574, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02FD) {
    const struct CPU_State initial_cpu = {.pc=0x9849, .a=0x75, .x=0xa9, .y=0x53, .sp=0xb6, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x9849, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x984a, .a=0xba, .x=0xa9, .y=0x53, .sp=0xb6, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x9849, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x9849, .value=0x7c, .type=IO_READ},
        {.addr=0x984a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02FE) {
    const struct CPU_State initial_cpu = {.pc=0x60d7, .a=0x1d, .x=0xbc, .y=0x3e, .sp=0xe5, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x60d7, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x60d8, .a=0x0e, .x=0xbc, .y=0x3e, .sp=0xe5, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x60d7, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x60d7, .value=0x7c, .type=IO_READ},
        {.addr=0x60d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x048a, .a=0x75, .x=0x00, .y=0x53, .sp=0xe9, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x048a, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x048b, .a=0x3a, .x=0x00, .y=0x53, .sp=0xe9, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x048a, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x048a, .value=0x7c, .type=IO_READ},
        {.addr=0x048b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0300) {
    const struct CPU_State initial_cpu = {.pc=0xf9f6, .a=0x71, .x=0x95, .y=0xc5, .sp=0x07, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xf9f6, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xf9f7, .a=0x38, .x=0x95, .y=0xc5, .sp=0x07, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xf9f6, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xf9f6, .value=0x7c, .type=IO_READ},
        {.addr=0xf9f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0301) {
    const struct CPU_State initial_cpu = {.pc=0xbddf, .a=0x7d, .x=0xd7, .y=0xb9, .sp=0x94, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xbddf, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xbde0, .a=0x3e, .x=0xd7, .y=0xb9, .sp=0x94, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xbddf, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xbddf, .value=0x7c, .type=IO_READ},
        {.addr=0xbde0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0302) {
    const struct CPU_State initial_cpu = {.pc=0xe98e, .a=0xba, .x=0x2f, .y=0x5f, .sp=0x8a, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xe98e, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xe98f, .a=0x5d, .x=0x2f, .y=0x5f, .sp=0x8a, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xe98e, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xe98e, .value=0x7c, .type=IO_READ},
        {.addr=0xe98f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0303) {
    const struct CPU_State initial_cpu = {.pc=0xb4ac, .a=0x73, .x=0xf0, .y=0xc1, .sp=0x1b, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xb4ac, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xb4ad, .a=0xb9, .x=0xf0, .y=0xc1, .sp=0x1b, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xb4ac, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xb4ac, .value=0x7c, .type=IO_READ},
        {.addr=0xb4ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0304) {
    const struct CPU_State initial_cpu = {.pc=0x8c3b, .a=0xc7, .x=0xfc, .y=0x1d, .sp=0x90, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x8c3b, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x8c3c, .a=0x63, .x=0xfc, .y=0x1d, .sp=0x90, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x8c3b, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x8c3b, .value=0x7c, .type=IO_READ},
        {.addr=0x8c3c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0305) {
    const struct CPU_State initial_cpu = {.pc=0x53bb, .a=0x59, .x=0xab, .y=0x86, .sp=0xdf, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x53bb, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x53bc, .a=0x2c, .x=0xab, .y=0x86, .sp=0xdf, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x53bb, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x53bb, .value=0x7c, .type=IO_READ},
        {.addr=0x53bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0306) {
    const struct CPU_State initial_cpu = {.pc=0x8c54, .a=0xf6, .x=0xa1, .y=0xfd, .sp=0x6a, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x8c54, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x8c55, .a=0xfb, .x=0xa1, .y=0xfd, .sp=0x6a, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x8c54, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x8c54, .value=0x7c, .type=IO_READ},
        {.addr=0x8c55, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0307) {
    const struct CPU_State initial_cpu = {.pc=0xb2b3, .a=0x8f, .x=0x92, .y=0xd6, .sp=0xed, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xb2b3, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xb2b4, .a=0xc7, .x=0x92, .y=0xd6, .sp=0xed, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xb2b3, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xb2b3, .value=0x7c, .type=IO_READ},
        {.addr=0xb2b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0308) {
    const struct CPU_State initial_cpu = {.pc=0x0d8c, .a=0xa3, .x=0x6a, .y=0x64, .sp=0x04, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x0d8c, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x0d8d, .a=0xd1, .x=0x6a, .y=0x64, .sp=0x04, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x0d8c, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x0d8c, .value=0x7c, .type=IO_READ},
        {.addr=0x0d8d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0309) {
    const struct CPU_State initial_cpu = {.pc=0x7b12, .a=0x22, .x=0x05, .y=0xa5, .sp=0x65, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x7b12, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x7b13, .a=0x91, .x=0x05, .y=0xa5, .sp=0x65, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x7b12, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x7b12, .value=0x7c, .type=IO_READ},
        {.addr=0x7b13, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_030A) {
    const struct CPU_State initial_cpu = {.pc=0x5eee, .a=0xfd, .x=0x8e, .y=0x11, .sp=0xe0, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x5eee, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x5eef, .a=0x7e, .x=0x8e, .y=0x11, .sp=0xe0, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x5eee, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x5eee, .value=0x7c, .type=IO_READ},
        {.addr=0x5eef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_030B) {
    const struct CPU_State initial_cpu = {.pc=0x7c68, .a=0x9e, .x=0x90, .y=0x2f, .sp=0x95, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x7c68, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x7c69, .a=0x4f, .x=0x90, .y=0x2f, .sp=0x95, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x7c68, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x7c68, .value=0x7c, .type=IO_READ},
        {.addr=0x7c69, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_030C) {
    const struct CPU_State initial_cpu = {.pc=0xbd27, .a=0x1e, .x=0xa4, .y=0xb2, .sp=0xf8, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xbd27, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xbd28, .a=0x8f, .x=0xa4, .y=0xb2, .sp=0xf8, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xbd27, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xbd27, .value=0x7c, .type=IO_READ},
        {.addr=0xbd28, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_030D) {
    const struct CPU_State initial_cpu = {.pc=0xce10, .a=0x89, .x=0xc3, .y=0x6a, .sp=0x0c, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xce10, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xce11, .a=0xc4, .x=0xc3, .y=0x6a, .sp=0x0c, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xce10, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xce10, .value=0x7c, .type=IO_READ},
        {.addr=0xce11, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_030E) {
    const struct CPU_State initial_cpu = {.pc=0xfcf9, .a=0x65, .x=0x8e, .y=0x82, .sp=0x25, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xfcf9, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xfcfa, .a=0xb2, .x=0x8e, .y=0x82, .sp=0x25, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xfcf9, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xfcf9, .value=0x7c, .type=IO_READ},
        {.addr=0xfcfa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_030F) {
    const struct CPU_State initial_cpu = {.pc=0x9fdc, .a=0xf2, .x=0x18, .y=0x5d, .sp=0xb9, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x9fdc, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x9fdd, .a=0xf9, .x=0x18, .y=0x5d, .sp=0xb9, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x9fdc, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x9fdc, .value=0x7c, .type=IO_READ},
        {.addr=0x9fdd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0310) {
    const struct CPU_State initial_cpu = {.pc=0x8553, .a=0xc9, .x=0x6c, .y=0x43, .sp=0xca, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x8553, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x8554, .a=0xe4, .x=0x6c, .y=0x43, .sp=0xca, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x8553, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x8553, .value=0x7c, .type=IO_READ},
        {.addr=0x8554, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0311) {
    const struct CPU_State initial_cpu = {.pc=0xe109, .a=0x1b, .x=0xde, .y=0xbd, .sp=0x4d, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xe109, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xe10a, .a=0x8d, .x=0xde, .y=0xbd, .sp=0x4d, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xe109, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xe109, .value=0x7c, .type=IO_READ},
        {.addr=0xe10a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0312) {
    const struct CPU_State initial_cpu = {.pc=0x1c70, .a=0x19, .x=0x5c, .y=0x06, .sp=0x77, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x1c70, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x1c71, .a=0x8c, .x=0x5c, .y=0x06, .sp=0x77, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x1c70, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x1c70, .value=0x7c, .type=IO_READ},
        {.addr=0x1c71, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0313) {
    const struct CPU_State initial_cpu = {.pc=0xf3e4, .a=0x77, .x=0xc8, .y=0x7c, .sp=0xe1, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xf3e4, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xf3e5, .a=0xbb, .x=0xc8, .y=0x7c, .sp=0xe1, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xf3e4, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xf3e4, .value=0x7c, .type=IO_READ},
        {.addr=0xf3e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0314) {
    const struct CPU_State initial_cpu = {.pc=0xf04f, .a=0xda, .x=0x8a, .y=0x1b, .sp=0x49, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xf04f, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xf050, .a=0x6d, .x=0x8a, .y=0x1b, .sp=0x49, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xf04f, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xf04f, .value=0x7c, .type=IO_READ},
        {.addr=0xf050, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0315) {
    const struct CPU_State initial_cpu = {.pc=0x99c5, .a=0xc4, .x=0xfe, .y=0x05, .sp=0xd9, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x99c5, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x99c6, .a=0x62, .x=0xfe, .y=0x05, .sp=0xd9, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x99c5, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x99c5, .value=0x7c, .type=IO_READ},
        {.addr=0x99c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0316) {
    const struct CPU_State initial_cpu = {.pc=0xcead, .a=0x26, .x=0x40, .y=0x2b, .sp=0x42, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xcead, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xceae, .a=0x13, .x=0x40, .y=0x2b, .sp=0x42, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xcead, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xcead, .value=0x7c, .type=IO_READ},
        {.addr=0xceae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0317) {
    const struct CPU_State initial_cpu = {.pc=0xbe62, .a=0xdb, .x=0xbb, .y=0xa0, .sp=0xd5, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xbe62, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xbe63, .a=0xed, .x=0xbb, .y=0xa0, .sp=0xd5, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xbe62, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xbe62, .value=0x7c, .type=IO_READ},
        {.addr=0xbe63, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0318) {
    const struct CPU_State initial_cpu = {.pc=0xda28, .a=0x07, .x=0x9f, .y=0x99, .sp=0x56, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xda28, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xda29, .a=0x03, .x=0x9f, .y=0x99, .sp=0x56, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xda28, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xda28, .value=0x7c, .type=IO_READ},
        {.addr=0xda29, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0319) {
    const struct CPU_State initial_cpu = {.pc=0x75a8, .a=0x6d, .x=0x11, .y=0x0d, .sp=0x82, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x75a8, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x75a9, .a=0xb6, .x=0x11, .y=0x0d, .sp=0x82, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x75a8, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x75a8, .value=0x7c, .type=IO_READ},
        {.addr=0x75a9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_031A) {
    const struct CPU_State initial_cpu = {.pc=0x6015, .a=0xa8, .x=0xd5, .y=0x0a, .sp=0xfc, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x6015, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6016, .a=0x54, .x=0xd5, .y=0x0a, .sp=0xfc, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x6015, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6015, .value=0x7c, .type=IO_READ},
        {.addr=0x6016, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_031B) {
    const struct CPU_State initial_cpu = {.pc=0x57e7, .a=0xf5, .x=0xa6, .y=0xcc, .sp=0x91, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x57e7, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x57e8, .a=0x7a, .x=0xa6, .y=0xcc, .sp=0x91, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x57e7, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x57e7, .value=0x7c, .type=IO_READ},
        {.addr=0x57e8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_031C) {
    const struct CPU_State initial_cpu = {.pc=0x9032, .a=0x30, .x=0x25, .y=0x34, .sp=0xb3, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x9032, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x9033, .a=0x18, .x=0x25, .y=0x34, .sp=0xb3, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x9032, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x9032, .value=0x7c, .type=IO_READ},
        {.addr=0x9033, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_031D) {
    const struct CPU_State initial_cpu = {.pc=0x0f4e, .a=0xe9, .x=0xf4, .y=0xc8, .sp=0x4c, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x0f4e, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x0f4f, .a=0x74, .x=0xf4, .y=0xc8, .sp=0x4c, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0f4e, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x0f4e, .value=0x7c, .type=IO_READ},
        {.addr=0x0f4f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_031E) {
    const struct CPU_State initial_cpu = {.pc=0x31be, .a=0x80, .x=0x18, .y=0x18, .sp=0x39, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x31be, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x31bf, .a=0x40, .x=0x18, .y=0x18, .sp=0x39, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x31be, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x31be, .value=0x7c, .type=IO_READ},
        {.addr=0x31bf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_031F) {
    const struct CPU_State initial_cpu = {.pc=0x4aa2, .a=0x55, .x=0x75, .y=0x62, .sp=0xf1, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x4aa2, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x4aa3, .a=0xaa, .x=0x75, .y=0x62, .sp=0xf1, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x4aa2, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x4aa2, .value=0x7c, .type=IO_READ},
        {.addr=0x4aa3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0320) {
    const struct CPU_State initial_cpu = {.pc=0xe423, .a=0x64, .x=0x56, .y=0x21, .sp=0x4b, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xe423, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xe424, .a=0xb2, .x=0x56, .y=0x21, .sp=0x4b, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xe423, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xe423, .value=0x7c, .type=IO_READ},
        {.addr=0xe424, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0321) {
    const struct CPU_State initial_cpu = {.pc=0xedd9, .a=0x6f, .x=0x31, .y=0x47, .sp=0xb4, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xedd9, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xedda, .a=0xb7, .x=0x31, .y=0x47, .sp=0xb4, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xedd9, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xedd9, .value=0x7c, .type=IO_READ},
        {.addr=0xedda, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0322) {
    const struct CPU_State initial_cpu = {.pc=0xd385, .a=0x32, .x=0x74, .y=0x04, .sp=0xd0, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xd385, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xd386, .a=0x19, .x=0x74, .y=0x04, .sp=0xd0, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xd385, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xd385, .value=0x7c, .type=IO_READ},
        {.addr=0xd386, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0323) {
    const struct CPU_State initial_cpu = {.pc=0xbc1c, .a=0xb1, .x=0x31, .y=0x34, .sp=0x49, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xbc1c, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xbc1d, .a=0xd8, .x=0x31, .y=0x34, .sp=0x49, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xbc1c, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xbc1c, .value=0x7c, .type=IO_READ},
        {.addr=0xbc1d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0324) {
    const struct CPU_State initial_cpu = {.pc=0xdd01, .a=0xe7, .x=0x4c, .y=0x16, .sp=0xad, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xdd01, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xdd02, .a=0xf3, .x=0x4c, .y=0x16, .sp=0xad, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xdd01, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xdd01, .value=0x7c, .type=IO_READ},
        {.addr=0xdd02, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0325) {
    const struct CPU_State initial_cpu = {.pc=0x84bf, .a=0x92, .x=0x77, .y=0xe9, .sp=0xd7, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x84bf, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x84c0, .a=0xc9, .x=0x77, .y=0xe9, .sp=0xd7, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x84bf, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x84bf, .value=0x7c, .type=IO_READ},
        {.addr=0x84c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0326) {
    const struct CPU_State initial_cpu = {.pc=0xf9e6, .a=0x7a, .x=0xf9, .y=0xf4, .sp=0xfc, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xf9e6, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xf9e7, .a=0x3d, .x=0xf9, .y=0xf4, .sp=0xfc, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xf9e6, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xf9e6, .value=0x7c, .type=IO_READ},
        {.addr=0xf9e7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0327) {
    const struct CPU_State initial_cpu = {.pc=0xefe8, .a=0xa3, .x=0xb9, .y=0x40, .sp=0x31, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xefe8, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xefe9, .a=0xd1, .x=0xb9, .y=0x40, .sp=0x31, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xefe8, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xefe8, .value=0x7c, .type=IO_READ},
        {.addr=0xefe9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0328) {
    const struct CPU_State initial_cpu = {.pc=0x78a1, .a=0xc1, .x=0x9c, .y=0x90, .sp=0x8c, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x78a1, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x78a2, .a=0xe0, .x=0x9c, .y=0x90, .sp=0x8c, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x78a1, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x78a1, .value=0x7c, .type=IO_READ},
        {.addr=0x78a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0329) {
    const struct CPU_State initial_cpu = {.pc=0xd5a6, .a=0x5e, .x=0xe9, .y=0xf1, .sp=0x04, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xd5a6, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xd5a7, .a=0x2f, .x=0xe9, .y=0xf1, .sp=0x04, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xd5a6, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xd5a6, .value=0x7c, .type=IO_READ},
        {.addr=0xd5a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_032A) {
    const struct CPU_State initial_cpu = {.pc=0x2d10, .a=0xba, .x=0xaf, .y=0x40, .sp=0xe8, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x2d10, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x2d11, .a=0xdd, .x=0xaf, .y=0x40, .sp=0xe8, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x2d10, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x2d10, .value=0x7c, .type=IO_READ},
        {.addr=0x2d11, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_032B) {
    const struct CPU_State initial_cpu = {.pc=0x6ccf, .a=0x43, .x=0x3a, .y=0xba, .sp=0xe2, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x6ccf, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6cd0, .a=0xa1, .x=0x3a, .y=0xba, .sp=0xe2, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x6ccf, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6ccf, .value=0x7c, .type=IO_READ},
        {.addr=0x6cd0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_032C) {
    const struct CPU_State initial_cpu = {.pc=0x5981, .a=0x68, .x=0x83, .y=0x7b, .sp=0xd8, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x5981, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x5982, .a=0xb4, .x=0x83, .y=0x7b, .sp=0xd8, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x5981, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x5981, .value=0x7c, .type=IO_READ},
        {.addr=0x5982, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_032D) {
    const struct CPU_State initial_cpu = {.pc=0x5731, .a=0xe5, .x=0x86, .y=0x60, .sp=0x35, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x5731, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x5732, .a=0x72, .x=0x86, .y=0x60, .sp=0x35, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x5731, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x5731, .value=0x7c, .type=IO_READ},
        {.addr=0x5732, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_032E) {
    const struct CPU_State initial_cpu = {.pc=0x8991, .a=0xaf, .x=0xfc, .y=0x60, .sp=0x8c, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x8991, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x8992, .a=0x57, .x=0xfc, .y=0x60, .sp=0x8c, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x8991, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x8991, .value=0x7c, .type=IO_READ},
        {.addr=0x8992, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_032F) {
    const struct CPU_State initial_cpu = {.pc=0x0784, .a=0xdc, .x=0x5c, .y=0xcc, .sp=0x99, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x0784, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x0785, .a=0x6e, .x=0x5c, .y=0xcc, .sp=0x99, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x0784, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x0784, .value=0x7c, .type=IO_READ},
        {.addr=0x0785, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0330) {
    const struct CPU_State initial_cpu = {.pc=0x525c, .a=0x88, .x=0x0a, .y=0x20, .sp=0x1c, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x525c, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x525d, .a=0xc4, .x=0x0a, .y=0x20, .sp=0x1c, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x525c, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x525c, .value=0x7c, .type=IO_READ},
        {.addr=0x525d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0331) {
    const struct CPU_State initial_cpu = {.pc=0x826b, .a=0x87, .x=0xaa, .y=0x92, .sp=0x39, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x826b, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x826c, .a=0xc3, .x=0xaa, .y=0x92, .sp=0x39, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x826b, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x826b, .value=0x7c, .type=IO_READ},
        {.addr=0x826c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0332) {
    const struct CPU_State initial_cpu = {.pc=0xbf4a, .a=0x53, .x=0xd6, .y=0x53, .sp=0x5f, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xbf4a, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xbf4b, .a=0x29, .x=0xd6, .y=0x53, .sp=0x5f, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xbf4a, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xbf4a, .value=0x7c, .type=IO_READ},
        {.addr=0xbf4b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0333) {
    const struct CPU_State initial_cpu = {.pc=0x603d, .a=0xdd, .x=0x70, .y=0x96, .sp=0x1b, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x603d, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x603e, .a=0xee, .x=0x70, .y=0x96, .sp=0x1b, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x603d, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x603d, .value=0x7c, .type=IO_READ},
        {.addr=0x603e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0334) {
    const struct CPU_State initial_cpu = {.pc=0x5561, .a=0x92, .x=0xe9, .y=0xf8, .sp=0xcd, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x5561, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x5562, .a=0xc9, .x=0xe9, .y=0xf8, .sp=0xcd, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x5561, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x5561, .value=0x7c, .type=IO_READ},
        {.addr=0x5562, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0335) {
    const struct CPU_State initial_cpu = {.pc=0x15e8, .a=0x9e, .x=0xf1, .y=0x2b, .sp=0xb6, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x15e8, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x15e9, .a=0x4f, .x=0xf1, .y=0x2b, .sp=0xb6, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x15e8, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x15e8, .value=0x7c, .type=IO_READ},
        {.addr=0x15e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0336) {
    const struct CPU_State initial_cpu = {.pc=0x2abe, .a=0xa5, .x=0x51, .y=0xc3, .sp=0x2d, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x2abe, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x2abf, .a=0xd2, .x=0x51, .y=0xc3, .sp=0x2d, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x2abe, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x2abe, .value=0x7c, .type=IO_READ},
        {.addr=0x2abf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0337) {
    const struct CPU_State initial_cpu = {.pc=0xa5d7, .a=0xab, .x=0x29, .y=0xbd, .sp=0xd2, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xa5d7, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xa5d8, .a=0xd5, .x=0x29, .y=0xbd, .sp=0xd2, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xa5d7, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xa5d7, .value=0x7c, .type=IO_READ},
        {.addr=0xa5d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0338) {
    const struct CPU_State initial_cpu = {.pc=0x83f8, .a=0xfd, .x=0x2f, .y=0x47, .sp=0x00, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x83f8, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x83f9, .a=0xfe, .x=0x2f, .y=0x47, .sp=0x00, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x83f8, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x83f8, .value=0x7c, .type=IO_READ},
        {.addr=0x83f9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0339) {
    const struct CPU_State initial_cpu = {.pc=0xfb01, .a=0x05, .x=0x83, .y=0x2c, .sp=0x68, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xfb01, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xfb02, .a=0x02, .x=0x83, .y=0x2c, .sp=0x68, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xfb01, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xfb01, .value=0x7c, .type=IO_READ},
        {.addr=0xfb02, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_033A) {
    const struct CPU_State initial_cpu = {.pc=0xe71c, .a=0x4f, .x=0xcd, .y=0xe4, .sp=0xa0, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xe71c, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xe71d, .a=0xa7, .x=0xcd, .y=0xe4, .sp=0xa0, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xe71c, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xe71c, .value=0x7c, .type=IO_READ},
        {.addr=0xe71d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_033B) {
    const struct CPU_State initial_cpu = {.pc=0xe364, .a=0xe4, .x=0x3c, .y=0x34, .sp=0x6c, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xe364, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xe365, .a=0x72, .x=0x3c, .y=0x34, .sp=0x6c, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xe364, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xe364, .value=0x7c, .type=IO_READ},
        {.addr=0xe365, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_033C) {
    const struct CPU_State initial_cpu = {.pc=0xf52b, .a=0xc6, .x=0x8b, .y=0x0d, .sp=0xe2, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xf52b, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xf52c, .a=0xe3, .x=0x8b, .y=0x0d, .sp=0xe2, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xf52b, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xf52b, .value=0x7c, .type=IO_READ},
        {.addr=0xf52c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_033D) {
    const struct CPU_State initial_cpu = {.pc=0xf2b7, .a=0x56, .x=0xb3, .y=0x2b, .sp=0xde, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xf2b7, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xf2b8, .a=0x2b, .x=0xb3, .y=0x2b, .sp=0xde, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xf2b7, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xf2b7, .value=0x7c, .type=IO_READ},
        {.addr=0xf2b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_033E) {
    const struct CPU_State initial_cpu = {.pc=0xf20b, .a=0xa6, .x=0xe9, .y=0x01, .sp=0x7d, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xf20b, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xf20c, .a=0x53, .x=0xe9, .y=0x01, .sp=0x7d, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xf20b, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xf20b, .value=0x7c, .type=IO_READ},
        {.addr=0xf20c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_033F) {
    const struct CPU_State initial_cpu = {.pc=0x0172, .a=0x13, .x=0x18, .y=0x2a, .sp=0x8e, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x0173, .a=0x09, .x=0x18, .y=0x2a, .sp=0x8e, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x0172, .value=0x7c, .type=IO_READ},
        {.addr=0x0173, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0340) {
    const struct CPU_State initial_cpu = {.pc=0xff00, .a=0x05, .x=0x18, .y=0x9c, .sp=0x18, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xff00, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xff01, .a=0x82, .x=0x18, .y=0x9c, .sp=0x18, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xff00, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xff00, .value=0x7c, .type=IO_READ},
        {.addr=0xff01, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0341) {
    const struct CPU_State initial_cpu = {.pc=0xd5fa, .a=0x23, .x=0xeb, .y=0x22, .sp=0x4f, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xd5fa, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xd5fb, .a=0x11, .x=0xeb, .y=0x22, .sp=0x4f, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xd5fa, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xd5fa, .value=0x7c, .type=IO_READ},
        {.addr=0xd5fb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0342) {
    const struct CPU_State initial_cpu = {.pc=0xc42a, .a=0x09, .x=0x26, .y=0x06, .sp=0xd3, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xc42a, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xc42b, .a=0x04, .x=0x26, .y=0x06, .sp=0xd3, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xc42a, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xc42a, .value=0x7c, .type=IO_READ},
        {.addr=0xc42b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0343) {
    const struct CPU_State initial_cpu = {.pc=0x080c, .a=0xb2, .x=0x5f, .y=0x50, .sp=0xa6, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x080c, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x080d, .a=0xd9, .x=0x5f, .y=0x50, .sp=0xa6, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x080c, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x080c, .value=0x7c, .type=IO_READ},
        {.addr=0x080d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0344) {
    const struct CPU_State initial_cpu = {.pc=0x04f5, .a=0x70, .x=0x78, .y=0x99, .sp=0xdd, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x04f5, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x04f6, .a=0x38, .x=0x78, .y=0x99, .sp=0xdd, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x04f5, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x04f5, .value=0x7c, .type=IO_READ},
        {.addr=0x04f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0345) {
    const struct CPU_State initial_cpu = {.pc=0x1352, .a=0x0e, .x=0x22, .y=0x30, .sp=0x94, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x1352, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x1353, .a=0x87, .x=0x22, .y=0x30, .sp=0x94, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x1352, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x1352, .value=0x7c, .type=IO_READ},
        {.addr=0x1353, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0346) {
    const struct CPU_State initial_cpu = {.pc=0x6d39, .a=0xc2, .x=0x75, .y=0xae, .sp=0x08, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x6d39, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6d3a, .a=0x61, .x=0x75, .y=0xae, .sp=0x08, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x6d39, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6d39, .value=0x7c, .type=IO_READ},
        {.addr=0x6d3a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0347) {
    const struct CPU_State initial_cpu = {.pc=0x703e, .a=0x22, .x=0xb5, .y=0xb7, .sp=0x1f, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x703e, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x703f, .a=0x91, .x=0xb5, .y=0xb7, .sp=0x1f, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x703e, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x703e, .value=0x7c, .type=IO_READ},
        {.addr=0x703f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0348) {
    const struct CPU_State initial_cpu = {.pc=0xc89a, .a=0x8c, .x=0xa0, .y=0xa5, .sp=0x30, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xc89a, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xc89b, .a=0xc6, .x=0xa0, .y=0xa5, .sp=0x30, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xc89a, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xc89a, .value=0x7c, .type=IO_READ},
        {.addr=0xc89b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0349) {
    const struct CPU_State initial_cpu = {.pc=0xda2c, .a=0xa3, .x=0xa4, .y=0xdf, .sp=0x2a, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xda2c, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xda2d, .a=0x51, .x=0xa4, .y=0xdf, .sp=0x2a, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xda2c, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xda2c, .value=0x7c, .type=IO_READ},
        {.addr=0xda2d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_034A) {
    const struct CPU_State initial_cpu = {.pc=0x2619, .a=0xef, .x=0x68, .y=0xf7, .sp=0x2c, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x2619, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x261a, .a=0x77, .x=0x68, .y=0xf7, .sp=0x2c, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x2619, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x2619, .value=0x7c, .type=IO_READ},
        {.addr=0x261a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_034B) {
    const struct CPU_State initial_cpu = {.pc=0x6547, .a=0x42, .x=0xf6, .y=0x36, .sp=0xe2, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x6547, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6548, .a=0x21, .x=0xf6, .y=0x36, .sp=0xe2, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x6547, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6547, .value=0x7c, .type=IO_READ},
        {.addr=0x6548, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_034C) {
    const struct CPU_State initial_cpu = {.pc=0x81b5, .a=0x5b, .x=0x25, .y=0xfe, .sp=0xea, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x81b5, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x81b6, .a=0xad, .x=0x25, .y=0xfe, .sp=0xea, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x81b5, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x81b5, .value=0x7c, .type=IO_READ},
        {.addr=0x81b6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_034D) {
    const struct CPU_State initial_cpu = {.pc=0xdb80, .a=0x16, .x=0x58, .y=0xb9, .sp=0xbf, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xdb80, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xdb81, .a=0x0b, .x=0x58, .y=0xb9, .sp=0xbf, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xdb80, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xdb80, .value=0x7c, .type=IO_READ},
        {.addr=0xdb81, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_034E) {
    const struct CPU_State initial_cpu = {.pc=0xbcca, .a=0x04, .x=0x43, .y=0xea, .sp=0x77, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xbcca, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xbccb, .a=0x82, .x=0x43, .y=0xea, .sp=0x77, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xbcca, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xbcca, .value=0x7c, .type=IO_READ},
        {.addr=0xbccb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_034F) {
    const struct CPU_State initial_cpu = {.pc=0xf174, .a=0xac, .x=0x54, .y=0x39, .sp=0x85, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xf174, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xf175, .a=0xd6, .x=0x54, .y=0x39, .sp=0x85, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xf174, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xf174, .value=0x7c, .type=IO_READ},
        {.addr=0xf175, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0350) {
    const struct CPU_State initial_cpu = {.pc=0x418f, .a=0x5b, .x=0x8b, .y=0xc7, .sp=0xc6, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x418f, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x4190, .a=0xad, .x=0x8b, .y=0xc7, .sp=0xc6, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x418f, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x418f, .value=0x7c, .type=IO_READ},
        {.addr=0x4190, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0351) {
    const struct CPU_State initial_cpu = {.pc=0xa066, .a=0xa0, .x=0x69, .y=0x35, .sp=0x35, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xa066, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xa067, .a=0x50, .x=0x69, .y=0x35, .sp=0x35, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xa066, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xa066, .value=0x7c, .type=IO_READ},
        {.addr=0xa067, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0352) {
    const struct CPU_State initial_cpu = {.pc=0x15dc, .a=0x83, .x=0xf7, .y=0x89, .sp=0xce, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x15dc, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x15dd, .a=0x41, .x=0xf7, .y=0x89, .sp=0xce, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x15dc, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x15dc, .value=0x7c, .type=IO_READ},
        {.addr=0x15dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0353) {
    const struct CPU_State initial_cpu = {.pc=0x16e9, .a=0x79, .x=0xe8, .y=0xfe, .sp=0xa4, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x16e9, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x16ea, .a=0x3c, .x=0xe8, .y=0xfe, .sp=0xa4, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x16e9, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x16e9, .value=0x7c, .type=IO_READ},
        {.addr=0x16ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0354) {
    const struct CPU_State initial_cpu = {.pc=0xf120, .a=0x5d, .x=0xc2, .y=0x0d, .sp=0x53, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xf120, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xf121, .a=0x2e, .x=0xc2, .y=0x0d, .sp=0x53, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xf120, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xf120, .value=0x7c, .type=IO_READ},
        {.addr=0xf121, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0355) {
    const struct CPU_State initial_cpu = {.pc=0xb0cc, .a=0x3b, .x=0x78, .y=0x83, .sp=0xbf, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xb0cc, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xb0cd, .a=0x9d, .x=0x78, .y=0x83, .sp=0xbf, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xb0cc, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xb0cc, .value=0x7c, .type=IO_READ},
        {.addr=0xb0cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0356) {
    const struct CPU_State initial_cpu = {.pc=0x6edf, .a=0xa3, .x=0xf2, .y=0x14, .sp=0xee, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x6edf, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6ee0, .a=0xd1, .x=0xf2, .y=0x14, .sp=0xee, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x6edf, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6edf, .value=0x7c, .type=IO_READ},
        {.addr=0x6ee0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0357) {
    const struct CPU_State initial_cpu = {.pc=0x9023, .a=0x71, .x=0x2a, .y=0x13, .sp=0xe3, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x9023, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x9024, .a=0x38, .x=0x2a, .y=0x13, .sp=0xe3, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x9023, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x9023, .value=0x7c, .type=IO_READ},
        {.addr=0x9024, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0358) {
    const struct CPU_State initial_cpu = {.pc=0xdacb, .a=0x3e, .x=0x1d, .y=0xa5, .sp=0xc3, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xdacb, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xdacc, .a=0x9f, .x=0x1d, .y=0xa5, .sp=0xc3, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xdacb, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xdacb, .value=0x7c, .type=IO_READ},
        {.addr=0xdacc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0359) {
    const struct CPU_State initial_cpu = {.pc=0x4ca7, .a=0x75, .x=0x38, .y=0xc6, .sp=0x37, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x4ca7, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x4ca8, .a=0x3a, .x=0x38, .y=0xc6, .sp=0x37, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x4ca7, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x4ca7, .value=0x7c, .type=IO_READ},
        {.addr=0x4ca8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_035A) {
    const struct CPU_State initial_cpu = {.pc=0x437c, .a=0xf4, .x=0x10, .y=0x2c, .sp=0x17, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x437c, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x437d, .a=0xfa, .x=0x10, .y=0x2c, .sp=0x17, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x437c, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x437c, .value=0x7c, .type=IO_READ},
        {.addr=0x437d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_035B) {
    const struct CPU_State initial_cpu = {.pc=0x0186, .a=0xed, .x=0x96, .y=0x23, .sp=0x80, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x0186, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x0187, .a=0x76, .x=0x96, .y=0x23, .sp=0x80, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0186, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x0186, .value=0x7c, .type=IO_READ},
        {.addr=0x0187, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_035C) {
    const struct CPU_State initial_cpu = {.pc=0x7888, .a=0xd1, .x=0x15, .y=0xd7, .sp=0xf4, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x7888, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x7889, .a=0x68, .x=0x15, .y=0xd7, .sp=0xf4, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x7888, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x7888, .value=0x7c, .type=IO_READ},
        {.addr=0x7889, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_035D) {
    const struct CPU_State initial_cpu = {.pc=0x786e, .a=0x5a, .x=0x1f, .y=0xbf, .sp=0xb9, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x786e, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x786f, .a=0xad, .x=0x1f, .y=0xbf, .sp=0xb9, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x786e, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x786e, .value=0x7c, .type=IO_READ},
        {.addr=0x786f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_035E) {
    const struct CPU_State initial_cpu = {.pc=0x7242, .a=0x50, .x=0xdd, .y=0x06, .sp=0xa2, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x7242, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x7243, .a=0x28, .x=0xdd, .y=0x06, .sp=0xa2, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x7242, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x7242, .value=0x7c, .type=IO_READ},
        {.addr=0x7243, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_035F) {
    const struct CPU_State initial_cpu = {.pc=0xd8d7, .a=0x09, .x=0x8b, .y=0x68, .sp=0xdb, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xd8d7, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xd8d8, .a=0x84, .x=0x8b, .y=0x68, .sp=0xdb, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xd8d7, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xd8d7, .value=0x7c, .type=IO_READ},
        {.addr=0xd8d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0360) {
    const struct CPU_State initial_cpu = {.pc=0xacba, .a=0x43, .x=0x61, .y=0x65, .sp=0x2b, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xacba, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xacbb, .a=0xa1, .x=0x61, .y=0x65, .sp=0x2b, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xacba, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xacba, .value=0x7c, .type=IO_READ},
        {.addr=0xacbb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0361) {
    const struct CPU_State initial_cpu = {.pc=0x6338, .a=0x2e, .x=0x97, .y=0x58, .sp=0xca, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x6338, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6339, .a=0x17, .x=0x97, .y=0x58, .sp=0xca, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x6338, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6338, .value=0x7c, .type=IO_READ},
        {.addr=0x6339, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0362) {
    const struct CPU_State initial_cpu = {.pc=0x675e, .a=0xc4, .x=0x6b, .y=0x69, .sp=0x2f, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x675e, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x675f, .a=0x62, .x=0x6b, .y=0x69, .sp=0x2f, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x675e, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x675e, .value=0x7c, .type=IO_READ},
        {.addr=0x675f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0363) {
    const struct CPU_State initial_cpu = {.pc=0x1f8f, .a=0xb9, .x=0xa9, .y=0x3c, .sp=0x23, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x1f8f, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x1f90, .a=0x5c, .x=0xa9, .y=0x3c, .sp=0x23, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x1f8f, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x1f8f, .value=0x7c, .type=IO_READ},
        {.addr=0x1f90, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0364) {
    const struct CPU_State initial_cpu = {.pc=0xaf55, .a=0x2c, .x=0xb6, .y=0xd3, .sp=0xe2, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xaf55, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xaf56, .a=0x96, .x=0xb6, .y=0xd3, .sp=0xe2, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xaf55, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xaf55, .value=0x7c, .type=IO_READ},
        {.addr=0xaf56, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0365) {
    const struct CPU_State initial_cpu = {.pc=0x21c5, .a=0x65, .x=0x48, .y=0xae, .sp=0x1e, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x21c5, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x21c6, .a=0x32, .x=0x48, .y=0xae, .sp=0x1e, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x21c5, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x21c5, .value=0x7c, .type=IO_READ},
        {.addr=0x21c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0366) {
    const struct CPU_State initial_cpu = {.pc=0x3b6f, .a=0xff, .x=0x26, .y=0x82, .sp=0xe2, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x3b6f, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x3b70, .a=0xff, .x=0x26, .y=0x82, .sp=0xe2, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x3b6f, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x3b6f, .value=0x7c, .type=IO_READ},
        {.addr=0x3b70, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0367) {
    const struct CPU_State initial_cpu = {.pc=0x4c04, .a=0x66, .x=0xd8, .y=0x9c, .sp=0x5f, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x4c04, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x4c05, .a=0xb3, .x=0xd8, .y=0x9c, .sp=0x5f, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x4c04, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x4c04, .value=0x7c, .type=IO_READ},
        {.addr=0x4c05, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0368) {
    const struct CPU_State initial_cpu = {.pc=0x166a, .a=0xff, .x=0x9d, .y=0xc0, .sp=0x2a, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x166a, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x166b, .a=0x7f, .x=0x9d, .y=0xc0, .sp=0x2a, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x166a, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x166a, .value=0x7c, .type=IO_READ},
        {.addr=0x166b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0369) {
    const struct CPU_State initial_cpu = {.pc=0x17fa, .a=0x92, .x=0xf2, .y=0x02, .sp=0xa8, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x17fa, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x17fb, .a=0xc9, .x=0xf2, .y=0x02, .sp=0xa8, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x17fa, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x17fa, .value=0x7c, .type=IO_READ},
        {.addr=0x17fb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_036A) {
    const struct CPU_State initial_cpu = {.pc=0x0887, .a=0xfe, .x=0x3d, .y=0x31, .sp=0x7e, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x0887, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x0888, .a=0xff, .x=0x3d, .y=0x31, .sp=0x7e, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0887, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x0887, .value=0x7c, .type=IO_READ},
        {.addr=0x0888, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_036B) {
    const struct CPU_State initial_cpu = {.pc=0xad6b, .a=0x95, .x=0xf0, .y=0xf5, .sp=0x22, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xad6b, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xad6c, .a=0xca, .x=0xf0, .y=0xf5, .sp=0x22, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xad6b, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xad6b, .value=0x7c, .type=IO_READ},
        {.addr=0xad6c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_036C) {
    const struct CPU_State initial_cpu = {.pc=0xc68e, .a=0xb9, .x=0x9c, .y=0x46, .sp=0xa7, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xc68e, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xc68f, .a=0xdc, .x=0x9c, .y=0x46, .sp=0xa7, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xc68e, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xc68e, .value=0x7c, .type=IO_READ},
        {.addr=0xc68f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_036D) {
    const struct CPU_State initial_cpu = {.pc=0x2dcd, .a=0x1a, .x=0x23, .y=0x6f, .sp=0x5c, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x2dcd, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x2dce, .a=0x8d, .x=0x23, .y=0x6f, .sp=0x5c, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x2dcd, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x2dcd, .value=0x7c, .type=IO_READ},
        {.addr=0x2dce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_036E) {
    const struct CPU_State initial_cpu = {.pc=0x12bb, .a=0xcc, .x=0x3e, .y=0x41, .sp=0x22, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x12bb, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x12bc, .a=0xe6, .x=0x3e, .y=0x41, .sp=0x22, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x12bb, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x12bb, .value=0x7c, .type=IO_READ},
        {.addr=0x12bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_036F) {
    const struct CPU_State initial_cpu = {.pc=0x7812, .a=0x99, .x=0x43, .y=0x90, .sp=0x56, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x7812, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x7813, .a=0x4c, .x=0x43, .y=0x90, .sp=0x56, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x7812, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x7812, .value=0x7c, .type=IO_READ},
        {.addr=0x7813, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0370) {
    const struct CPU_State initial_cpu = {.pc=0xad7f, .a=0x59, .x=0x6d, .y=0xd8, .sp=0xed, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xad7f, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xad80, .a=0x2c, .x=0x6d, .y=0xd8, .sp=0xed, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xad7f, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xad7f, .value=0x7c, .type=IO_READ},
        {.addr=0xad80, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0371) {
    const struct CPU_State initial_cpu = {.pc=0x0f9e, .a=0x50, .x=0xde, .y=0x8d, .sp=0x60, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x0f9e, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x0f9f, .a=0x28, .x=0xde, .y=0x8d, .sp=0x60, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0f9e, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x0f9e, .value=0x7c, .type=IO_READ},
        {.addr=0x0f9f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0372) {
    const struct CPU_State initial_cpu = {.pc=0x4249, .a=0xda, .x=0xf5, .y=0x53, .sp=0x57, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x4249, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x424a, .a=0x6d, .x=0xf5, .y=0x53, .sp=0x57, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x4249, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x4249, .value=0x7c, .type=IO_READ},
        {.addr=0x424a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0373) {
    const struct CPU_State initial_cpu = {.pc=0x8ca6, .a=0x15, .x=0x47, .y=0x5c, .sp=0x5f, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x8ca6, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x8ca7, .a=0x8a, .x=0x47, .y=0x5c, .sp=0x5f, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x8ca6, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x8ca6, .value=0x7c, .type=IO_READ},
        {.addr=0x8ca7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0374) {
    const struct CPU_State initial_cpu = {.pc=0x7cec, .a=0xdc, .x=0xa0, .y=0x2b, .sp=0xb0, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x7cec, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x7ced, .a=0xee, .x=0xa0, .y=0x2b, .sp=0xb0, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x7cec, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x7cec, .value=0x7c, .type=IO_READ},
        {.addr=0x7ced, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0375) {
    const struct CPU_State initial_cpu = {.pc=0xf9ef, .a=0x78, .x=0x0b, .y=0xb7, .sp=0xa8, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xf9ef, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xf9f0, .a=0x3c, .x=0x0b, .y=0xb7, .sp=0xa8, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xf9ef, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xf9ef, .value=0x7c, .type=IO_READ},
        {.addr=0xf9f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0376) {
    const struct CPU_State initial_cpu = {.pc=0x54fa, .a=0x84, .x=0x2b, .y=0xd1, .sp=0xb9, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x54fa, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x54fb, .a=0xc2, .x=0x2b, .y=0xd1, .sp=0xb9, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x54fa, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x54fa, .value=0x7c, .type=IO_READ},
        {.addr=0x54fb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0377) {
    const struct CPU_State initial_cpu = {.pc=0xcaca, .a=0xe2, .x=0x23, .y=0x4b, .sp=0x4f, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xcaca, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xcacb, .a=0x71, .x=0x23, .y=0x4b, .sp=0x4f, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xcaca, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xcaca, .value=0x7c, .type=IO_READ},
        {.addr=0xcacb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0378) {
    const struct CPU_State initial_cpu = {.pc=0xa13f, .a=0x0e, .x=0x4e, .y=0xdb, .sp=0x75, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xa13f, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xa140, .a=0x07, .x=0x4e, .y=0xdb, .sp=0x75, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xa13f, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xa13f, .value=0x7c, .type=IO_READ},
        {.addr=0xa140, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0379) {
    const struct CPU_State initial_cpu = {.pc=0x3af4, .a=0xbd, .x=0x3f, .y=0x97, .sp=0x71, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x3af4, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x3af5, .a=0x5e, .x=0x3f, .y=0x97, .sp=0x71, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x3af4, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x3af4, .value=0x7c, .type=IO_READ},
        {.addr=0x3af5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_037A) {
    const struct CPU_State initial_cpu = {.pc=0x6338, .a=0x8d, .x=0xf7, .y=0xb8, .sp=0x83, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x6338, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6339, .a=0xc6, .x=0xf7, .y=0xb8, .sp=0x83, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x6338, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6338, .value=0x7c, .type=IO_READ},
        {.addr=0x6339, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_037B) {
    const struct CPU_State initial_cpu = {.pc=0x4edf, .a=0x95, .x=0x6d, .y=0x1d, .sp=0x57, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x4edf, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x4ee0, .a=0xca, .x=0x6d, .y=0x1d, .sp=0x57, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x4edf, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x4edf, .value=0x7c, .type=IO_READ},
        {.addr=0x4ee0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_037C) {
    const struct CPU_State initial_cpu = {.pc=0xa538, .a=0x3b, .x=0xb5, .y=0x2a, .sp=0xe4, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xa538, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xa539, .a=0x1d, .x=0xb5, .y=0x2a, .sp=0xe4, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xa538, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xa538, .value=0x7c, .type=IO_READ},
        {.addr=0xa539, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_037D) {
    const struct CPU_State initial_cpu = {.pc=0xf46a, .a=0x1a, .x=0xc3, .y=0x8f, .sp=0xf2, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xf46a, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xf46b, .a=0x8d, .x=0xc3, .y=0x8f, .sp=0xf2, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xf46a, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xf46a, .value=0x7c, .type=IO_READ},
        {.addr=0xf46b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_037E) {
    const struct CPU_State initial_cpu = {.pc=0xe8bd, .a=0xb6, .x=0x8c, .y=0xea, .sp=0xb0, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xe8bd, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xe8be, .a=0x5b, .x=0x8c, .y=0xea, .sp=0xb0, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xe8bd, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xe8bd, .value=0x7c, .type=IO_READ},
        {.addr=0xe8be, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_037F) {
    const struct CPU_State initial_cpu = {.pc=0x9e4a, .a=0xf2, .x=0xb9, .y=0x73, .sp=0x64, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x9e4a, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x9e4b, .a=0xf9, .x=0xb9, .y=0x73, .sp=0x64, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x9e4a, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x9e4a, .value=0x7c, .type=IO_READ},
        {.addr=0x9e4b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0380) {
    const struct CPU_State initial_cpu = {.pc=0x9885, .a=0xa0, .x=0x1a, .y=0x10, .sp=0xc9, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x9885, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x9886, .a=0x50, .x=0x1a, .y=0x10, .sp=0xc9, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x9885, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x9885, .value=0x7c, .type=IO_READ},
        {.addr=0x9886, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0381) {
    const struct CPU_State initial_cpu = {.pc=0xc091, .a=0x6c, .x=0xe5, .y=0x80, .sp=0x37, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xc091, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xc092, .a=0xb6, .x=0xe5, .y=0x80, .sp=0x37, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xc091, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xc091, .value=0x7c, .type=IO_READ},
        {.addr=0xc092, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0382) {
    const struct CPU_State initial_cpu = {.pc=0x8f88, .a=0x3c, .x=0x47, .y=0x14, .sp=0x86, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x8f88, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x8f89, .a=0x9e, .x=0x47, .y=0x14, .sp=0x86, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x8f88, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x8f88, .value=0x7c, .type=IO_READ},
        {.addr=0x8f89, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0383) {
    const struct CPU_State initial_cpu = {.pc=0xd9d0, .a=0x8b, .x=0x87, .y=0x1c, .sp=0xea, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xd9d0, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xd9d1, .a=0x45, .x=0x87, .y=0x1c, .sp=0xea, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xd9d0, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xd9d0, .value=0x7c, .type=IO_READ},
        {.addr=0xd9d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0384) {
    const struct CPU_State initial_cpu = {.pc=0xa9ea, .a=0xd9, .x=0x5f, .y=0x08, .sp=0x23, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xa9ea, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xa9eb, .a=0xec, .x=0x5f, .y=0x08, .sp=0x23, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xa9ea, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xa9ea, .value=0x7c, .type=IO_READ},
        {.addr=0xa9eb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0385) {
    const struct CPU_State initial_cpu = {.pc=0x19ba, .a=0x85, .x=0xcb, .y=0x63, .sp=0xb3, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x19ba, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x19bb, .a=0x42, .x=0xcb, .y=0x63, .sp=0xb3, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x19ba, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x19ba, .value=0x7c, .type=IO_READ},
        {.addr=0x19bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0386) {
    const struct CPU_State initial_cpu = {.pc=0xb517, .a=0xf6, .x=0x0e, .y=0x35, .sp=0x06, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xb517, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xb518, .a=0xfb, .x=0x0e, .y=0x35, .sp=0x06, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xb517, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xb517, .value=0x7c, .type=IO_READ},
        {.addr=0xb518, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0387) {
    const struct CPU_State initial_cpu = {.pc=0xe394, .a=0x73, .x=0x14, .y=0x33, .sp=0x6e, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xe394, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xe395, .a=0x39, .x=0x14, .y=0x33, .sp=0x6e, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xe394, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xe394, .value=0x7c, .type=IO_READ},
        {.addr=0xe395, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0388) {
    const struct CPU_State initial_cpu = {.pc=0x91df, .a=0xa7, .x=0x74, .y=0xac, .sp=0x73, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x91df, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x91e0, .a=0xd3, .x=0x74, .y=0xac, .sp=0x73, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x91df, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x91df, .value=0x7c, .type=IO_READ},
        {.addr=0x91e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0389) {
    const struct CPU_State initial_cpu = {.pc=0xb533, .a=0xc2, .x=0x12, .y=0x94, .sp=0xf7, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xb533, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xb534, .a=0x61, .x=0x12, .y=0x94, .sp=0xf7, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xb533, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xb533, .value=0x7c, .type=IO_READ},
        {.addr=0xb534, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_038A) {
    const struct CPU_State initial_cpu = {.pc=0x8cda, .a=0xc7, .x=0x29, .y=0x72, .sp=0x40, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x8cda, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x8cdb, .a=0xe3, .x=0x29, .y=0x72, .sp=0x40, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x8cda, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x8cda, .value=0x7c, .type=IO_READ},
        {.addr=0x8cdb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_038B) {
    const struct CPU_State initial_cpu = {.pc=0xf995, .a=0x8d, .x=0xf1, .y=0xbf, .sp=0x7f, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xf995, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xf996, .a=0x46, .x=0xf1, .y=0xbf, .sp=0x7f, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xf995, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xf995, .value=0x7c, .type=IO_READ},
        {.addr=0xf996, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_038C) {
    const struct CPU_State initial_cpu = {.pc=0x614a, .a=0xe2, .x=0xb6, .y=0xff, .sp=0x81, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x614a, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x614b, .a=0x71, .x=0xb6, .y=0xff, .sp=0x81, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x614a, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x614a, .value=0x7c, .type=IO_READ},
        {.addr=0x614b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_038D) {
    const struct CPU_State initial_cpu = {.pc=0x6a95, .a=0x65, .x=0xc4, .y=0x0d, .sp=0x0d, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x6a95, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6a96, .a=0x32, .x=0xc4, .y=0x0d, .sp=0x0d, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x6a95, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6a95, .value=0x7c, .type=IO_READ},
        {.addr=0x6a96, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_038E) {
    const struct CPU_State initial_cpu = {.pc=0x7cfb, .a=0x3b, .x=0xd5, .y=0x23, .sp=0x60, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x7cfb, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x7cfc, .a=0x1d, .x=0xd5, .y=0x23, .sp=0x60, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x7cfb, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x7cfb, .value=0x7c, .type=IO_READ},
        {.addr=0x7cfc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_038F) {
    const struct CPU_State initial_cpu = {.pc=0x22eb, .a=0xe2, .x=0x00, .y=0xc7, .sp=0xf4, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x22eb, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x22ec, .a=0xf1, .x=0x00, .y=0xc7, .sp=0xf4, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x22eb, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x22eb, .value=0x7c, .type=IO_READ},
        {.addr=0x22ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0390) {
    const struct CPU_State initial_cpu = {.pc=0x0283, .a=0x75, .x=0x78, .y=0xf7, .sp=0xcd, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x0283, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x0284, .a=0x3a, .x=0x78, .y=0xf7, .sp=0xcd, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x0283, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x0283, .value=0x7c, .type=IO_READ},
        {.addr=0x0284, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0391) {
    const struct CPU_State initial_cpu = {.pc=0x034a, .a=0x0b, .x=0x10, .y=0xd6, .sp=0x21, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x034a, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x034b, .a=0x05, .x=0x10, .y=0xd6, .sp=0x21, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x034a, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x034a, .value=0x7c, .type=IO_READ},
        {.addr=0x034b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0392) {
    const struct CPU_State initial_cpu = {.pc=0x01cd, .a=0x64, .x=0xc9, .y=0x0c, .sp=0xf9, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x01ce, .a=0x32, .x=0xc9, .y=0x0c, .sp=0xf9, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x01cd, .value=0x7c, .type=IO_READ},
        {.addr=0x01ce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0393) {
    const struct CPU_State initial_cpu = {.pc=0x58f6, .a=0x31, .x=0x2d, .y=0xad, .sp=0xca, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x58f6, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x58f7, .a=0x18, .x=0x2d, .y=0xad, .sp=0xca, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x58f6, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x58f6, .value=0x7c, .type=IO_READ},
        {.addr=0x58f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0394) {
    const struct CPU_State initial_cpu = {.pc=0x1cc9, .a=0x4e, .x=0x96, .y=0xe7, .sp=0x47, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x1cc9, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x1cca, .a=0x27, .x=0x96, .y=0xe7, .sp=0x47, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x1cc9, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x1cc9, .value=0x7c, .type=IO_READ},
        {.addr=0x1cca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0395) {
    const struct CPU_State initial_cpu = {.pc=0xc5b5, .a=0xf1, .x=0x83, .y=0x30, .sp=0x50, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xc5b5, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xc5b6, .a=0x78, .x=0x83, .y=0x30, .sp=0x50, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xc5b5, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xc5b5, .value=0x7c, .type=IO_READ},
        {.addr=0xc5b6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0396) {
    const struct CPU_State initial_cpu = {.pc=0xddd2, .a=0xad, .x=0x76, .y=0x09, .sp=0x11, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xddd2, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xddd3, .a=0xd6, .x=0x76, .y=0x09, .sp=0x11, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xddd2, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xddd2, .value=0x7c, .type=IO_READ},
        {.addr=0xddd3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0397) {
    const struct CPU_State initial_cpu = {.pc=0x2003, .a=0xe4, .x=0xf8, .y=0xa6, .sp=0x03, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x2003, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x2004, .a=0x72, .x=0xf8, .y=0xa6, .sp=0x03, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x2003, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x2003, .value=0x7c, .type=IO_READ},
        {.addr=0x2004, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0398) {
    const struct CPU_State initial_cpu = {.pc=0x88b5, .a=0x6e, .x=0x96, .y=0x29, .sp=0x25, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x88b5, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x88b6, .a=0x37, .x=0x96, .y=0x29, .sp=0x25, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x88b5, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x88b5, .value=0x7c, .type=IO_READ},
        {.addr=0x88b6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_0399) {
    const struct CPU_State initial_cpu = {.pc=0xc786, .a=0x5d, .x=0x49, .y=0x1a, .sp=0x8d, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xc786, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xc787, .a=0xae, .x=0x49, .y=0x1a, .sp=0x8d, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xc786, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xc786, .value=0x7c, .type=IO_READ},
        {.addr=0xc787, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_039A) {
    const struct CPU_State initial_cpu = {.pc=0x062c, .a=0x61, .x=0x6e, .y=0xe7, .sp=0x6e, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x062c, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x062d, .a=0xb0, .x=0x6e, .y=0xe7, .sp=0x6e, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x062c, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x062c, .value=0x7c, .type=IO_READ},
        {.addr=0x062d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_039B) {
    const struct CPU_State initial_cpu = {.pc=0xc6df, .a=0xfb, .x=0xac, .y=0x15, .sp=0x09, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xc6df, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xc6e0, .a=0x7d, .x=0xac, .y=0x15, .sp=0x09, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xc6df, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xc6df, .value=0x7c, .type=IO_READ},
        {.addr=0xc6e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_039C) {
    const struct CPU_State initial_cpu = {.pc=0xd18d, .a=0x69, .x=0xe8, .y=0xdd, .sp=0xb1, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xd18d, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xd18e, .a=0xb4, .x=0xe8, .y=0xdd, .sp=0xb1, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xd18d, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xd18d, .value=0x7c, .type=IO_READ},
        {.addr=0xd18e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_039D) {
    const struct CPU_State initial_cpu = {.pc=0x0b57, .a=0xf3, .x=0xe4, .y=0x1b, .sp=0x34, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x0b57, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x0b58, .a=0x79, .x=0xe4, .y=0x1b, .sp=0x34, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0b57, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x0b57, .value=0x7c, .type=IO_READ},
        {.addr=0x0b58, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_039E) {
    const struct CPU_State initial_cpu = {.pc=0xa8c3, .a=0x98, .x=0xc0, .y=0x87, .sp=0x7c, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xa8c3, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xa8c4, .a=0x4c, .x=0xc0, .y=0x87, .sp=0x7c, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xa8c3, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xa8c3, .value=0x7c, .type=IO_READ},
        {.addr=0xa8c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_039F) {
    const struct CPU_State initial_cpu = {.pc=0x9aae, .a=0xd0, .x=0xe8, .y=0x15, .sp=0x3a, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x9aae, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x9aaf, .a=0xe8, .x=0xe8, .y=0x15, .sp=0x3a, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x9aae, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x9aae, .value=0x7c, .type=IO_READ},
        {.addr=0x9aaf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03A0) {
    const struct CPU_State initial_cpu = {.pc=0x5d2f, .a=0xaf, .x=0xc6, .y=0x9a, .sp=0xa0, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x5d2f, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x5d30, .a=0x57, .x=0xc6, .y=0x9a, .sp=0xa0, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x5d2f, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x5d2f, .value=0x7c, .type=IO_READ},
        {.addr=0x5d30, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03A1) {
    const struct CPU_State initial_cpu = {.pc=0xab61, .a=0x66, .x=0x05, .y=0x5b, .sp=0xaf, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xab61, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xab62, .a=0xb3, .x=0x05, .y=0x5b, .sp=0xaf, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xab61, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xab61, .value=0x7c, .type=IO_READ},
        {.addr=0xab62, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03A2) {
    const struct CPU_State initial_cpu = {.pc=0x92b1, .a=0x5c, .x=0xe9, .y=0x58, .sp=0xc4, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x92b1, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x92b2, .a=0xae, .x=0xe9, .y=0x58, .sp=0xc4, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x92b1, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x92b1, .value=0x7c, .type=IO_READ},
        {.addr=0x92b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03A3) {
    const struct CPU_State initial_cpu = {.pc=0x2923, .a=0x2f, .x=0x77, .y=0xc0, .sp=0xbf, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x2923, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x2924, .a=0x17, .x=0x77, .y=0xc0, .sp=0xbf, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x2923, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x2923, .value=0x7c, .type=IO_READ},
        {.addr=0x2924, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03A4) {
    const struct CPU_State initial_cpu = {.pc=0xeb2f, .a=0xc6, .x=0xd4, .y=0x16, .sp=0x47, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xeb2f, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xeb30, .a=0xe3, .x=0xd4, .y=0x16, .sp=0x47, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xeb2f, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xeb2f, .value=0x7c, .type=IO_READ},
        {.addr=0xeb30, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03A5) {
    const struct CPU_State initial_cpu = {.pc=0xe637, .a=0x9d, .x=0x67, .y=0x92, .sp=0x61, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xe637, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xe638, .a=0x4e, .x=0x67, .y=0x92, .sp=0x61, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xe637, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xe637, .value=0x7c, .type=IO_READ},
        {.addr=0xe638, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x2469, .a=0xbb, .x=0xd0, .y=0x26, .sp=0x7b, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x2469, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x246a, .a=0x5d, .x=0xd0, .y=0x26, .sp=0x7b, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x2469, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x2469, .value=0x7c, .type=IO_READ},
        {.addr=0x246a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x652a, .a=0xf7, .x=0xe2, .y=0x3b, .sp=0xae, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x652a, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x652b, .a=0xfb, .x=0xe2, .y=0x3b, .sp=0xae, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x652a, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x652a, .value=0x7c, .type=IO_READ},
        {.addr=0x652b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03A8) {
    const struct CPU_State initial_cpu = {.pc=0x357a, .a=0x01, .x=0x41, .y=0x7a, .sp=0xa0, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x357a, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x357b, .a=0x80, .x=0x41, .y=0x7a, .sp=0xa0, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x357a, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x357a, .value=0x7c, .type=IO_READ},
        {.addr=0x357b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03A9) {
    const struct CPU_State initial_cpu = {.pc=0x8db7, .a=0xca, .x=0x00, .y=0x26, .sp=0x86, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x8db7, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x8db8, .a=0x65, .x=0x00, .y=0x26, .sp=0x86, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x8db7, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x8db7, .value=0x7c, .type=IO_READ},
        {.addr=0x8db8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03AA) {
    const struct CPU_State initial_cpu = {.pc=0xbd84, .a=0x99, .x=0x67, .y=0x3f, .sp=0xde, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xbd84, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xbd85, .a=0x4c, .x=0x67, .y=0x3f, .sp=0xde, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xbd84, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xbd84, .value=0x7c, .type=IO_READ},
        {.addr=0xbd85, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03AB) {
    const struct CPU_State initial_cpu = {.pc=0x1a9b, .a=0x9c, .x=0x51, .y=0xd0, .sp=0x41, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x1a9b, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x1a9c, .a=0xce, .x=0x51, .y=0xd0, .sp=0x41, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x1a9b, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x1a9b, .value=0x7c, .type=IO_READ},
        {.addr=0x1a9c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03AC) {
    const struct CPU_State initial_cpu = {.pc=0x12b6, .a=0x7f, .x=0x03, .y=0x79, .sp=0xb8, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x12b6, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x12b7, .a=0x3f, .x=0x03, .y=0x79, .sp=0xb8, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x12b6, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x12b6, .value=0x7c, .type=IO_READ},
        {.addr=0x12b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03AD) {
    const struct CPU_State initial_cpu = {.pc=0x1011, .a=0x7e, .x=0x20, .y=0xac, .sp=0xb6, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x1011, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x1012, .a=0xbf, .x=0x20, .y=0xac, .sp=0xb6, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x1011, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x1011, .value=0x7c, .type=IO_READ},
        {.addr=0x1012, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x9dbb, .a=0x62, .x=0xfe, .y=0xf4, .sp=0x65, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x9dbb, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x9dbc, .a=0xb1, .x=0xfe, .y=0xf4, .sp=0x65, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x9dbb, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x9dbb, .value=0x7c, .type=IO_READ},
        {.addr=0x9dbc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03AF) {
    const struct CPU_State initial_cpu = {.pc=0xb50f, .a=0xb0, .x=0x19, .y=0x04, .sp=0x76, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xb50f, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xb510, .a=0xd8, .x=0x19, .y=0x04, .sp=0x76, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xb50f, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xb50f, .value=0x7c, .type=IO_READ},
        {.addr=0xb510, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x9072, .a=0x2b, .x=0x50, .y=0xb6, .sp=0xe1, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x9072, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x9073, .a=0x95, .x=0x50, .y=0xb6, .sp=0xe1, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x9072, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x9072, .value=0x7c, .type=IO_READ},
        {.addr=0x9073, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03B1) {
    const struct CPU_State initial_cpu = {.pc=0xf749, .a=0x29, .x=0x27, .y=0xf4, .sp=0xdc, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xf749, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xf74a, .a=0x14, .x=0x27, .y=0xf4, .sp=0xdc, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xf749, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xf749, .value=0x7c, .type=IO_READ},
        {.addr=0xf74a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03B2) {
    const struct CPU_State initial_cpu = {.pc=0xacd9, .a=0xcf, .x=0x4b, .y=0x10, .sp=0x6d, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xacd9, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xacda, .a=0x67, .x=0x4b, .y=0x10, .sp=0x6d, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xacd9, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xacd9, .value=0x7c, .type=IO_READ},
        {.addr=0xacda, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03B3) {
    const struct CPU_State initial_cpu = {.pc=0x970a, .a=0x2e, .x=0x77, .y=0xbb, .sp=0x10, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x970a, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x970b, .a=0x17, .x=0x77, .y=0xbb, .sp=0x10, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x970a, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x970a, .value=0x7c, .type=IO_READ},
        {.addr=0x970b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x86f5, .a=0x63, .x=0x1e, .y=0x0f, .sp=0xf3, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x86f5, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x86f6, .a=0xb1, .x=0x1e, .y=0x0f, .sp=0xf3, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x86f5, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x86f5, .value=0x7c, .type=IO_READ},
        {.addr=0x86f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03B5) {
    const struct CPU_State initial_cpu = {.pc=0x90e7, .a=0x77, .x=0xf7, .y=0x38, .sp=0x60, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x90e7, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x90e8, .a=0xbb, .x=0xf7, .y=0x38, .sp=0x60, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x90e7, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x90e7, .value=0x7c, .type=IO_READ},
        {.addr=0x90e8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03B6) {
    const struct CPU_State initial_cpu = {.pc=0x3a8e, .a=0x8e, .x=0x59, .y=0x56, .sp=0x1a, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x3a8e, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x3a8f, .a=0xc7, .x=0x59, .y=0x56, .sp=0x1a, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x3a8e, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x3a8e, .value=0x7c, .type=IO_READ},
        {.addr=0x3a8f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03B7) {
    const struct CPU_State initial_cpu = {.pc=0xad12, .a=0x2b, .x=0x1f, .y=0x7f, .sp=0x8e, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xad12, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xad13, .a=0x95, .x=0x1f, .y=0x7f, .sp=0x8e, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xad12, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xad12, .value=0x7c, .type=IO_READ},
        {.addr=0xad13, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03B8) {
    const struct CPU_State initial_cpu = {.pc=0xdf60, .a=0x80, .x=0x7a, .y=0xa2, .sp=0xbc, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xdf60, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xdf61, .a=0xc0, .x=0x7a, .y=0xa2, .sp=0xbc, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xdf60, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xdf60, .value=0x7c, .type=IO_READ},
        {.addr=0xdf61, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03B9) {
    const struct CPU_State initial_cpu = {.pc=0xdc7b, .a=0x81, .x=0x40, .y=0xe4, .sp=0x53, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xdc7b, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xdc7c, .a=0x40, .x=0x40, .y=0xe4, .sp=0x53, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xdc7b, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xdc7b, .value=0x7c, .type=IO_READ},
        {.addr=0xdc7c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03BA) {
    const struct CPU_State initial_cpu = {.pc=0xee57, .a=0x03, .x=0x89, .y=0x94, .sp=0x16, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xee57, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xee58, .a=0x81, .x=0x89, .y=0x94, .sp=0x16, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xee57, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xee57, .value=0x7c, .type=IO_READ},
        {.addr=0xee58, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03BB) {
    const struct CPU_State initial_cpu = {.pc=0x5c4a, .a=0x94, .x=0xd5, .y=0x9b, .sp=0x2a, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x5c4a, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x5c4b, .a=0x4a, .x=0xd5, .y=0x9b, .sp=0x2a, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x5c4a, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x5c4a, .value=0x7c, .type=IO_READ},
        {.addr=0x5c4b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03BC) {
    const struct CPU_State initial_cpu = {.pc=0xa73d, .a=0x37, .x=0xc6, .y=0x05, .sp=0x9c, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xa73d, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xa73e, .a=0x9b, .x=0xc6, .y=0x05, .sp=0x9c, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xa73d, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xa73d, .value=0x7c, .type=IO_READ},
        {.addr=0xa73e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x590b, .a=0xc9, .x=0x39, .y=0x5d, .sp=0x7b, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x590b, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x590c, .a=0x64, .x=0x39, .y=0x5d, .sp=0x7b, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x590b, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x590b, .value=0x7c, .type=IO_READ},
        {.addr=0x590c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03BE) {
    const struct CPU_State initial_cpu = {.pc=0x68bd, .a=0xf7, .x=0xf8, .y=0xb5, .sp=0x63, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x68bd, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x68be, .a=0xfb, .x=0xf8, .y=0xb5, .sp=0x63, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x68bd, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x68bd, .value=0x7c, .type=IO_READ},
        {.addr=0x68be, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03BF) {
    const struct CPU_State initial_cpu = {.pc=0xb5ad, .a=0xd4, .x=0x92, .y=0xbe, .sp=0xb7, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xb5ad, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xb5ae, .a=0xea, .x=0x92, .y=0xbe, .sp=0xb7, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xb5ad, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xb5ad, .value=0x7c, .type=IO_READ},
        {.addr=0xb5ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03C0) {
    const struct CPU_State initial_cpu = {.pc=0xc20f, .a=0xc0, .x=0x32, .y=0x16, .sp=0xc1, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xc20f, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xc210, .a=0xe0, .x=0x32, .y=0x16, .sp=0xc1, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xc20f, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xc20f, .value=0x7c, .type=IO_READ},
        {.addr=0xc210, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03C1) {
    const struct CPU_State initial_cpu = {.pc=0xeac7, .a=0x62, .x=0xa8, .y=0x9c, .sp=0xd9, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xeac7, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xeac8, .a=0x31, .x=0xa8, .y=0x9c, .sp=0xd9, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xeac7, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xeac7, .value=0x7c, .type=IO_READ},
        {.addr=0xeac8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03C2) {
    const struct CPU_State initial_cpu = {.pc=0x8821, .a=0x1b, .x=0x2d, .y=0xab, .sp=0xa5, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x8821, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x8822, .a=0x8d, .x=0x2d, .y=0xab, .sp=0xa5, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x8821, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x8821, .value=0x7c, .type=IO_READ},
        {.addr=0x8822, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03C3) {
    const struct CPU_State initial_cpu = {.pc=0xaf24, .a=0xd0, .x=0x03, .y=0x2e, .sp=0x85, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xaf24, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xaf25, .a=0xe8, .x=0x03, .y=0x2e, .sp=0x85, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xaf24, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xaf24, .value=0x7c, .type=IO_READ},
        {.addr=0xaf25, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03C4) {
    const struct CPU_State initial_cpu = {.pc=0x8192, .a=0xf6, .x=0xf7, .y=0x17, .sp=0x75, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x8192, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x8193, .a=0x7b, .x=0xf7, .y=0x17, .sp=0x75, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x8192, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x8192, .value=0x7c, .type=IO_READ},
        {.addr=0x8193, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03C5) {
    const struct CPU_State initial_cpu = {.pc=0x190d, .a=0xfc, .x=0x6f, .y=0xcc, .sp=0xff, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x190d, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x190e, .a=0xfe, .x=0x6f, .y=0xcc, .sp=0xff, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x190d, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x190d, .value=0x7c, .type=IO_READ},
        {.addr=0x190e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03C6) {
    const struct CPU_State initial_cpu = {.pc=0xc251, .a=0xa7, .x=0x66, .y=0xff, .sp=0xda, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xc251, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xc252, .a=0x53, .x=0x66, .y=0xff, .sp=0xda, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xc251, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xc251, .value=0x7c, .type=IO_READ},
        {.addr=0xc252, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03C7) {
    const struct CPU_State initial_cpu = {.pc=0x89d6, .a=0xb9, .x=0x75, .y=0xe4, .sp=0xf5, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x89d6, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x89d7, .a=0x5c, .x=0x75, .y=0xe4, .sp=0xf5, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x89d6, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x89d6, .value=0x7c, .type=IO_READ},
        {.addr=0x89d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03C8) {
    const struct CPU_State initial_cpu = {.pc=0x2e74, .a=0x7e, .x=0xd4, .y=0xab, .sp=0x19, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x2e74, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x2e75, .a=0xbf, .x=0xd4, .y=0xab, .sp=0x19, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x2e74, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x2e74, .value=0x7c, .type=IO_READ},
        {.addr=0x2e75, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03C9) {
    const struct CPU_State initial_cpu = {.pc=0xbfab, .a=0x34, .x=0xc0, .y=0x0d, .sp=0x88, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xbfab, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xbfac, .a=0x9a, .x=0xc0, .y=0x0d, .sp=0x88, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xbfab, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xbfab, .value=0x7c, .type=IO_READ},
        {.addr=0xbfac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x965c, .a=0x44, .x=0x8f, .y=0x9c, .sp=0x7d, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x965c, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x965d, .a=0x22, .x=0x8f, .y=0x9c, .sp=0x7d, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x965c, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x965c, .value=0x7c, .type=IO_READ},
        {.addr=0x965d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03CB) {
    const struct CPU_State initial_cpu = {.pc=0xd5c3, .a=0xba, .x=0x61, .y=0x53, .sp=0x5a, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xd5c3, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xd5c4, .a=0x5d, .x=0x61, .y=0x53, .sp=0x5a, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xd5c3, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xd5c3, .value=0x7c, .type=IO_READ},
        {.addr=0xd5c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03CC) {
    const struct CPU_State initial_cpu = {.pc=0xf729, .a=0x27, .x=0xcf, .y=0x01, .sp=0x92, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xf729, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xf72a, .a=0x13, .x=0xcf, .y=0x01, .sp=0x92, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xf729, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xf729, .value=0x7c, .type=IO_READ},
        {.addr=0xf72a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03CD) {
    const struct CPU_State initial_cpu = {.pc=0xb000, .a=0xac, .x=0x76, .y=0x2d, .sp=0xc4, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xb000, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xb001, .a=0xd6, .x=0x76, .y=0x2d, .sp=0xc4, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xb000, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xb000, .value=0x7c, .type=IO_READ},
        {.addr=0xb001, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03CE) {
    const struct CPU_State initial_cpu = {.pc=0xe4dc, .a=0x42, .x=0x54, .y=0xd1, .sp=0xcc, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xe4dc, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xe4dd, .a=0x21, .x=0x54, .y=0xd1, .sp=0xcc, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xe4dc, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xe4dc, .value=0x7c, .type=IO_READ},
        {.addr=0xe4dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03CF) {
    const struct CPU_State initial_cpu = {.pc=0xa366, .a=0xe2, .x=0x9c, .y=0xc0, .sp=0x87, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xa366, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xa367, .a=0x71, .x=0x9c, .y=0xc0, .sp=0x87, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xa366, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xa366, .value=0x7c, .type=IO_READ},
        {.addr=0xa367, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x7bcb, .a=0xf2, .x=0x7d, .y=0xf4, .sp=0x2a, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x7bcb, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x7bcc, .a=0xf9, .x=0x7d, .y=0xf4, .sp=0x2a, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x7bcb, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x7bcb, .value=0x7c, .type=IO_READ},
        {.addr=0x7bcc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03D1) {
    const struct CPU_State initial_cpu = {.pc=0x4b61, .a=0x9a, .x=0xbe, .y=0xc6, .sp=0xdb, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x4b61, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x4b62, .a=0xcd, .x=0xbe, .y=0xc6, .sp=0xdb, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x4b61, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x4b61, .value=0x7c, .type=IO_READ},
        {.addr=0x4b62, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03D2) {
    const struct CPU_State initial_cpu = {.pc=0xfea3, .a=0xa9, .x=0x90, .y=0x5d, .sp=0x76, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xfea3, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xfea4, .a=0x54, .x=0x90, .y=0x5d, .sp=0x76, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xfea3, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xfea3, .value=0x7c, .type=IO_READ},
        {.addr=0xfea4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03D3) {
    const struct CPU_State initial_cpu = {.pc=0x6418, .a=0xac, .x=0x1a, .y=0xe3, .sp=0xdd, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x6418, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6419, .a=0xd6, .x=0x1a, .y=0xe3, .sp=0xdd, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x6418, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6418, .value=0x7c, .type=IO_READ},
        {.addr=0x6419, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03D4) {
    const struct CPU_State initial_cpu = {.pc=0xd690, .a=0xe5, .x=0x0c, .y=0x04, .sp=0x8b, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xd690, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xd691, .a=0xf2, .x=0x0c, .y=0x04, .sp=0x8b, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xd690, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xd690, .value=0x7c, .type=IO_READ},
        {.addr=0xd691, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03D5) {
    const struct CPU_State initial_cpu = {.pc=0x44f1, .a=0x80, .x=0x5d, .y=0xaa, .sp=0x05, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x44f1, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x44f2, .a=0xc0, .x=0x5d, .y=0xaa, .sp=0x05, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x44f1, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x44f1, .value=0x7c, .type=IO_READ},
        {.addr=0x44f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03D6) {
    const struct CPU_State initial_cpu = {.pc=0x0fa5, .a=0xb1, .x=0x3d, .y=0x31, .sp=0xc8, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0fa5, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x0fa6, .a=0xd8, .x=0x3d, .y=0x31, .sp=0xc8, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x0fa5, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x0fa5, .value=0x7c, .type=IO_READ},
        {.addr=0x0fa6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03D7) {
    const struct CPU_State initial_cpu = {.pc=0x476b, .a=0x99, .x=0x73, .y=0xea, .sp=0x29, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x476b, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x476c, .a=0x4c, .x=0x73, .y=0xea, .sp=0x29, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x476b, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x476b, .value=0x7c, .type=IO_READ},
        {.addr=0x476c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03D8) {
    const struct CPU_State initial_cpu = {.pc=0x4b7a, .a=0x42, .x=0xdc, .y=0x24, .sp=0xae, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x4b7a, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x4b7b, .a=0x21, .x=0xdc, .y=0x24, .sp=0xae, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x4b7a, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x4b7a, .value=0x7c, .type=IO_READ},
        {.addr=0x4b7b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03D9) {
    const struct CPU_State initial_cpu = {.pc=0x75ad, .a=0xec, .x=0x39, .y=0xbf, .sp=0x25, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x75ad, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x75ae, .a=0xf6, .x=0x39, .y=0xbf, .sp=0x25, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x75ad, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x75ad, .value=0x7c, .type=IO_READ},
        {.addr=0x75ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03DA) {
    const struct CPU_State initial_cpu = {.pc=0xbef7, .a=0xd5, .x=0x5c, .y=0x3b, .sp=0x17, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xbef7, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xbef8, .a=0xea, .x=0x5c, .y=0x3b, .sp=0x17, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xbef7, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xbef7, .value=0x7c, .type=IO_READ},
        {.addr=0xbef8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03DB) {
    const struct CPU_State initial_cpu = {.pc=0x50ba, .a=0xb6, .x=0xea, .y=0xa3, .sp=0x8c, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x50ba, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x50bb, .a=0x5b, .x=0xea, .y=0xa3, .sp=0x8c, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x50ba, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x50ba, .value=0x7c, .type=IO_READ},
        {.addr=0x50bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03DC) {
    const struct CPU_State initial_cpu = {.pc=0x6496, .a=0xe1, .x=0xa5, .y=0x67, .sp=0x64, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x6496, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6497, .a=0x70, .x=0xa5, .y=0x67, .sp=0x64, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x6496, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x6496, .value=0x7c, .type=IO_READ},
        {.addr=0x6497, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03DD) {
    const struct CPU_State initial_cpu = {.pc=0xae8b, .a=0x58, .x=0x4c, .y=0x61, .sp=0x91, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xae8b, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xae8c, .a=0xac, .x=0x4c, .y=0x61, .sp=0x91, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xae8b, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xae8b, .value=0x7c, .type=IO_READ},
        {.addr=0xae8c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03DE) {
    const struct CPU_State initial_cpu = {.pc=0xff96, .a=0xaa, .x=0x12, .y=0xd3, .sp=0xaf, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xff96, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xff97, .a=0xd5, .x=0x12, .y=0xd3, .sp=0xaf, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xff96, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xff96, .value=0x7c, .type=IO_READ},
        {.addr=0xff97, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x117f, .a=0xef, .x=0xd5, .y=0xf3, .sp=0xa9, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x117f, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x1180, .a=0x77, .x=0xd5, .y=0xf3, .sp=0xa9, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x117f, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x117f, .value=0x7c, .type=IO_READ},
        {.addr=0x1180, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03E0) {
    const struct CPU_State initial_cpu = {.pc=0x0409, .a=0x53, .x=0xab, .y=0x5d, .sp=0xd9, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x0409, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x040a, .a=0x29, .x=0xab, .y=0x5d, .sp=0xd9, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x0409, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x0409, .value=0x7c, .type=IO_READ},
        {.addr=0x040a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03E1) {
    const struct CPU_State initial_cpu = {.pc=0x9e3a, .a=0xbf, .x=0x29, .y=0x49, .sp=0x41, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x9e3a, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x9e3b, .a=0x5f, .x=0x29, .y=0x49, .sp=0x41, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x9e3a, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x9e3a, .value=0x7c, .type=IO_READ},
        {.addr=0x9e3b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03E2) {
    const struct CPU_State initial_cpu = {.pc=0xc68c, .a=0xc0, .x=0x58, .y=0xc0, .sp=0x2b, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xc68c, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xc68d, .a=0xe0, .x=0x58, .y=0xc0, .sp=0x2b, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xc68c, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xc68c, .value=0x7c, .type=IO_READ},
        {.addr=0xc68d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03E3) {
    const struct CPU_State initial_cpu = {.pc=0x31c3, .a=0x3c, .x=0x65, .y=0x8f, .sp=0xf4, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x31c3, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x31c4, .a=0x9e, .x=0x65, .y=0x8f, .sp=0xf4, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x31c3, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x31c3, .value=0x7c, .type=IO_READ},
        {.addr=0x31c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03E4) {
    const struct CPU_State initial_cpu = {.pc=0xb956, .a=0x1b, .x=0xc8, .y=0x9c, .sp=0x80, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xb956, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xb957, .a=0x0d, .x=0xc8, .y=0x9c, .sp=0x80, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xb956, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xb956, .value=0x7c, .type=IO_READ},
        {.addr=0xb957, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03E5) {
    const struct CPU_State initial_cpu = {.pc=0x4107, .a=0x9c, .x=0x31, .y=0x09, .sp=0xf9, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x4107, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x4108, .a=0x4e, .x=0x31, .y=0x09, .sp=0xf9, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x4107, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x4107, .value=0x7c, .type=IO_READ},
        {.addr=0x4108, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03E6) {
    const struct CPU_State initial_cpu = {.pc=0xa16e, .a=0x3c, .x=0x94, .y=0x72, .sp=0x46, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xa16e, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xa16f, .a=0x9e, .x=0x94, .y=0x72, .sp=0x46, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xa16e, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xa16e, .value=0x7c, .type=IO_READ},
        {.addr=0xa16f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_7C, _7C_03E7) {
    const struct CPU_State initial_cpu = {.pc=0xd5b9, .a=0x21, .x=0x04, .y=0xfa, .sp=0x11, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xd5b9, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0xd5ba, .a=0x90, .x=0x04, .y=0xfa, .sp=0x11, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xd5b9, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0xd5b9, .value=0x7c, .type=IO_READ},
        {.addr=0xd5ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("7C 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
