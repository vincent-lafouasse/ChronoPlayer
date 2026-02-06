#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_1C, _1C_0000) {
    const struct CPU_State initial_cpu = {.pc=0xa270, .a=0xf4, .x=0x0e, .y=0x6f, .sp=0x8a, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xa270, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xa271, .a=0xe8, .x=0x0e, .y=0x6f, .sp=0x8a, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xa270, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xa270, .value=0x1c, .type=IO_READ},
        {.addr=0xa271, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0001) {
    const struct CPU_State initial_cpu = {.pc=0xc15a, .a=0x68, .x=0xaa, .y=0xc2, .sp=0x63, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xc15a, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xc15b, .a=0xd0, .x=0xaa, .y=0xc2, .sp=0x63, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xc15a, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xc15a, .value=0x1c, .type=IO_READ},
        {.addr=0xc15b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0002) {
    const struct CPU_State initial_cpu = {.pc=0x3291, .a=0x8d, .x=0xf9, .y=0x09, .sp=0xa6, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x3291, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x3292, .a=0x1a, .x=0xf9, .y=0x09, .sp=0xa6, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x3291, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x3291, .value=0x1c, .type=IO_READ},
        {.addr=0x3292, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0003) {
    const struct CPU_State initial_cpu = {.pc=0x7fd3, .a=0x03, .x=0xaf, .y=0x6e, .sp=0xf4, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x7fd3, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x7fd4, .a=0x06, .x=0xaf, .y=0x6e, .sp=0xf4, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x7fd3, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x7fd3, .value=0x1c, .type=IO_READ},
        {.addr=0x7fd4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0004) {
    const struct CPU_State initial_cpu = {.pc=0xc346, .a=0xdb, .x=0x0c, .y=0x3a, .sp=0xb1, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xc346, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xc347, .a=0xb6, .x=0x0c, .y=0x3a, .sp=0xb1, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xc346, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xc346, .value=0x1c, .type=IO_READ},
        {.addr=0xc347, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0005) {
    const struct CPU_State initial_cpu = {.pc=0x06dd, .a=0x43, .x=0x8c, .y=0x47, .sp=0x63, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x06dd, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x06de, .a=0x86, .x=0x8c, .y=0x47, .sp=0x63, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x06dd, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x06dd, .value=0x1c, .type=IO_READ},
        {.addr=0x06de, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0006) {
    const struct CPU_State initial_cpu = {.pc=0x9cb5, .a=0x65, .x=0xc2, .y=0x66, .sp=0x79, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x9cb5, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x9cb6, .a=0xca, .x=0xc2, .y=0x66, .sp=0x79, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x9cb5, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x9cb5, .value=0x1c, .type=IO_READ},
        {.addr=0x9cb6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0007) {
    const struct CPU_State initial_cpu = {.pc=0xa8c8, .a=0xcc, .x=0x81, .y=0x42, .sp=0xe0, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xa8c8, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xa8c9, .a=0x98, .x=0x81, .y=0x42, .sp=0xe0, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xa8c8, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xa8c8, .value=0x1c, .type=IO_READ},
        {.addr=0xa8c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0008) {
    const struct CPU_State initial_cpu = {.pc=0x55e1, .a=0x0a, .x=0xb1, .y=0xf2, .sp=0xc8, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x55e1, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x55e2, .a=0x14, .x=0xb1, .y=0xf2, .sp=0xc8, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x55e1, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x55e1, .value=0x1c, .type=IO_READ},
        {.addr=0x55e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0009) {
    const struct CPU_State initial_cpu = {.pc=0x57c6, .a=0xd6, .x=0xcc, .y=0x49, .sp=0x54, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x57c6, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x57c7, .a=0xac, .x=0xcc, .y=0x49, .sp=0x54, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x57c6, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x57c6, .value=0x1c, .type=IO_READ},
        {.addr=0x57c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_000A) {
    const struct CPU_State initial_cpu = {.pc=0x4710, .a=0xab, .x=0xcc, .y=0xb5, .sp=0x9a, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x4710, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x4711, .a=0x56, .x=0xcc, .y=0xb5, .sp=0x9a, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x4710, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x4710, .value=0x1c, .type=IO_READ},
        {.addr=0x4711, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_000B) {
    const struct CPU_State initial_cpu = {.pc=0x5588, .a=0xa8, .x=0xd8, .y=0xdd, .sp=0x70, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x5588, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x5589, .a=0x50, .x=0xd8, .y=0xdd, .sp=0x70, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x5588, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x5588, .value=0x1c, .type=IO_READ},
        {.addr=0x5589, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_000C) {
    const struct CPU_State initial_cpu = {.pc=0xa8fc, .a=0x1d, .x=0xc0, .y=0xe2, .sp=0xe7, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xa8fc, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xa8fd, .a=0x3a, .x=0xc0, .y=0xe2, .sp=0xe7, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xa8fc, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xa8fc, .value=0x1c, .type=IO_READ},
        {.addr=0xa8fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_000D) {
    const struct CPU_State initial_cpu = {.pc=0xdea4, .a=0x1e, .x=0xf1, .y=0x83, .sp=0x25, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xdea4, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xdea5, .a=0x3c, .x=0xf1, .y=0x83, .sp=0x25, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xdea4, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xdea4, .value=0x1c, .type=IO_READ},
        {.addr=0xdea5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_000E) {
    const struct CPU_State initial_cpu = {.pc=0x7815, .a=0xd9, .x=0x7b, .y=0x63, .sp=0x71, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x7815, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x7816, .a=0xb2, .x=0x7b, .y=0x63, .sp=0x71, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x7815, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x7815, .value=0x1c, .type=IO_READ},
        {.addr=0x7816, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_000F) {
    const struct CPU_State initial_cpu = {.pc=0x6e38, .a=0x30, .x=0xe8, .y=0x32, .sp=0xf7, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x6e38, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x6e39, .a=0x60, .x=0xe8, .y=0x32, .sp=0xf7, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x6e38, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x6e38, .value=0x1c, .type=IO_READ},
        {.addr=0x6e39, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0010) {
    const struct CPU_State initial_cpu = {.pc=0x9a8d, .a=0xf1, .x=0xe0, .y=0x7a, .sp=0xe1, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x9a8d, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x9a8e, .a=0xe2, .x=0xe0, .y=0x7a, .sp=0xe1, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x9a8d, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x9a8d, .value=0x1c, .type=IO_READ},
        {.addr=0x9a8e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0011) {
    const struct CPU_State initial_cpu = {.pc=0x9f5e, .a=0x59, .x=0xf3, .y=0x71, .sp=0x2b, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x9f5e, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x9f5f, .a=0xb2, .x=0xf3, .y=0x71, .sp=0x2b, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x9f5e, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x9f5e, .value=0x1c, .type=IO_READ},
        {.addr=0x9f5f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0012) {
    const struct CPU_State initial_cpu = {.pc=0x774a, .a=0x4b, .x=0x2f, .y=0xfd, .sp=0xdc, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x774a, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x774b, .a=0x96, .x=0x2f, .y=0xfd, .sp=0xdc, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x774a, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x774a, .value=0x1c, .type=IO_READ},
        {.addr=0x774b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0013) {
    const struct CPU_State initial_cpu = {.pc=0x9817, .a=0xf1, .x=0x02, .y=0x1b, .sp=0xb2, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x9817, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x9818, .a=0xe2, .x=0x02, .y=0x1b, .sp=0xb2, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x9817, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x9817, .value=0x1c, .type=IO_READ},
        {.addr=0x9818, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0014) {
    const struct CPU_State initial_cpu = {.pc=0x1bce, .a=0xf8, .x=0x91, .y=0xca, .sp=0x73, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x1bce, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x1bcf, .a=0xf0, .x=0x91, .y=0xca, .sp=0x73, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x1bce, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x1bce, .value=0x1c, .type=IO_READ},
        {.addr=0x1bcf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0015) {
    const struct CPU_State initial_cpu = {.pc=0x9668, .a=0x6e, .x=0xff, .y=0xf7, .sp=0x77, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x9668, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x9669, .a=0xdc, .x=0xff, .y=0xf7, .sp=0x77, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x9668, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x9668, .value=0x1c, .type=IO_READ},
        {.addr=0x9669, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0016) {
    const struct CPU_State initial_cpu = {.pc=0x8077, .a=0x21, .x=0x2d, .y=0xa4, .sp=0xc3, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x8077, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x8078, .a=0x42, .x=0x2d, .y=0xa4, .sp=0xc3, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x8077, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x8077, .value=0x1c, .type=IO_READ},
        {.addr=0x8078, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0017) {
    const struct CPU_State initial_cpu = {.pc=0x0401, .a=0xbf, .x=0xc7, .y=0x0a, .sp=0xd9, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x0401, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x0402, .a=0x7e, .x=0xc7, .y=0x0a, .sp=0xd9, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0401, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x0401, .value=0x1c, .type=IO_READ},
        {.addr=0x0402, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0018) {
    const struct CPU_State initial_cpu = {.pc=0xd5d0, .a=0x4c, .x=0x2d, .y=0x9d, .sp=0x07, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xd5d0, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd5d1, .a=0x98, .x=0x2d, .y=0x9d, .sp=0x07, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xd5d0, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd5d0, .value=0x1c, .type=IO_READ},
        {.addr=0xd5d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0019) {
    const struct CPU_State initial_cpu = {.pc=0x4ead, .a=0x95, .x=0x63, .y=0xe4, .sp=0xf8, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x4ead, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x4eae, .a=0x2a, .x=0x63, .y=0xe4, .sp=0xf8, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x4ead, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x4ead, .value=0x1c, .type=IO_READ},
        {.addr=0x4eae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_001A) {
    const struct CPU_State initial_cpu = {.pc=0xf64d, .a=0x78, .x=0xe7, .y=0x0d, .sp=0xa6, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xf64d, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xf64e, .a=0xf0, .x=0xe7, .y=0x0d, .sp=0xa6, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xf64d, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xf64d, .value=0x1c, .type=IO_READ},
        {.addr=0xf64e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_001B) {
    const struct CPU_State initial_cpu = {.pc=0x6038, .a=0xea, .x=0x01, .y=0x71, .sp=0x63, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x6038, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x6039, .a=0xd4, .x=0x01, .y=0x71, .sp=0x63, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x6038, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x6038, .value=0x1c, .type=IO_READ},
        {.addr=0x6039, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_001C) {
    const struct CPU_State initial_cpu = {.pc=0xb11c, .a=0x47, .x=0xf2, .y=0xf6, .sp=0x71, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xb11c, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xb11d, .a=0x8e, .x=0xf2, .y=0xf6, .sp=0x71, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xb11c, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xb11c, .value=0x1c, .type=IO_READ},
        {.addr=0xb11d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_001D) {
    const struct CPU_State initial_cpu = {.pc=0x4dab, .a=0xc4, .x=0x21, .y=0xf3, .sp=0x8e, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x4dab, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x4dac, .a=0x88, .x=0x21, .y=0xf3, .sp=0x8e, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x4dab, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x4dab, .value=0x1c, .type=IO_READ},
        {.addr=0x4dac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_001E) {
    const struct CPU_State initial_cpu = {.pc=0x5b40, .a=0xb4, .x=0x2e, .y=0xa9, .sp=0x47, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x5b40, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x5b41, .a=0x68, .x=0x2e, .y=0xa9, .sp=0x47, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x5b40, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x5b40, .value=0x1c, .type=IO_READ},
        {.addr=0x5b41, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_001F) {
    const struct CPU_State initial_cpu = {.pc=0x10a2, .a=0xb1, .x=0x7c, .y=0x5c, .sp=0x72, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x10a2, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x10a3, .a=0x62, .x=0x7c, .y=0x5c, .sp=0x72, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x10a2, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x10a2, .value=0x1c, .type=IO_READ},
        {.addr=0x10a3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0020) {
    const struct CPU_State initial_cpu = {.pc=0x9f15, .a=0x27, .x=0x70, .y=0xcb, .sp=0x69, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x9f15, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x9f16, .a=0x4e, .x=0x70, .y=0xcb, .sp=0x69, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x9f15, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x9f15, .value=0x1c, .type=IO_READ},
        {.addr=0x9f16, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0021) {
    const struct CPU_State initial_cpu = {.pc=0xd18d, .a=0x88, .x=0x48, .y=0x38, .sp=0x99, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xd18d, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd18e, .a=0x10, .x=0x48, .y=0x38, .sp=0x99, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xd18d, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd18d, .value=0x1c, .type=IO_READ},
        {.addr=0xd18e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0022) {
    const struct CPU_State initial_cpu = {.pc=0xc543, .a=0xb5, .x=0x46, .y=0x73, .sp=0x7e, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xc543, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xc544, .a=0x6a, .x=0x46, .y=0x73, .sp=0x7e, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xc543, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xc543, .value=0x1c, .type=IO_READ},
        {.addr=0xc544, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0023) {
    const struct CPU_State initial_cpu = {.pc=0x3139, .a=0x68, .x=0x26, .y=0x5a, .sp=0x6f, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x3139, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x313a, .a=0xd0, .x=0x26, .y=0x5a, .sp=0x6f, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x3139, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x3139, .value=0x1c, .type=IO_READ},
        {.addr=0x313a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0024) {
    const struct CPU_State initial_cpu = {.pc=0x4971, .a=0x19, .x=0xae, .y=0x8d, .sp=0x9b, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x4971, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x4972, .a=0x32, .x=0xae, .y=0x8d, .sp=0x9b, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x4971, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x4971, .value=0x1c, .type=IO_READ},
        {.addr=0x4972, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0025) {
    const struct CPU_State initial_cpu = {.pc=0x9988, .a=0xad, .x=0x9a, .y=0x63, .sp=0xd8, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x9988, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x9989, .a=0x5a, .x=0x9a, .y=0x63, .sp=0xd8, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x9988, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x9988, .value=0x1c, .type=IO_READ},
        {.addr=0x9989, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0026) {
    const struct CPU_State initial_cpu = {.pc=0x3b95, .a=0x00, .x=0x50, .y=0x72, .sp=0x8c, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x3b95, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x3b96, .a=0x00, .x=0x50, .y=0x72, .sp=0x8c, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x3b95, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x3b95, .value=0x1c, .type=IO_READ},
        {.addr=0x3b96, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0027) {
    const struct CPU_State initial_cpu = {.pc=0x1520, .a=0xc7, .x=0xad, .y=0x42, .sp=0xf3, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x1520, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x1521, .a=0x8e, .x=0xad, .y=0x42, .sp=0xf3, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x1520, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x1520, .value=0x1c, .type=IO_READ},
        {.addr=0x1521, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0028) {
    const struct CPU_State initial_cpu = {.pc=0xbb94, .a=0x00, .x=0xc6, .y=0x7a, .sp=0x8d, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xbb94, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xbb95, .a=0x00, .x=0xc6, .y=0x7a, .sp=0x8d, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0xbb94, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xbb94, .value=0x1c, .type=IO_READ},
        {.addr=0xbb95, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0029) {
    const struct CPU_State initial_cpu = {.pc=0x52a2, .a=0xb1, .x=0xe7, .y=0xf5, .sp=0xc0, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x52a2, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x52a3, .a=0x62, .x=0xe7, .y=0xf5, .sp=0xc0, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x52a2, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x52a2, .value=0x1c, .type=IO_READ},
        {.addr=0x52a3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_002A) {
    const struct CPU_State initial_cpu = {.pc=0x3e58, .a=0x8c, .x=0xec, .y=0xf3, .sp=0xbe, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x3e58, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x3e59, .a=0x18, .x=0xec, .y=0xf3, .sp=0xbe, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x3e58, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x3e58, .value=0x1c, .type=IO_READ},
        {.addr=0x3e59, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_002B) {
    const struct CPU_State initial_cpu = {.pc=0x9250, .a=0x73, .x=0x02, .y=0xdd, .sp=0xcc, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x9250, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x9251, .a=0xe6, .x=0x02, .y=0xdd, .sp=0xcc, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x9250, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x9250, .value=0x1c, .type=IO_READ},
        {.addr=0x9251, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_002C) {
    const struct CPU_State initial_cpu = {.pc=0xde3f, .a=0x11, .x=0xb5, .y=0xc7, .sp=0x8e, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xde3f, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xde40, .a=0x22, .x=0xb5, .y=0xc7, .sp=0x8e, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xde3f, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xde3f, .value=0x1c, .type=IO_READ},
        {.addr=0xde40, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_002D) {
    const struct CPU_State initial_cpu = {.pc=0xb422, .a=0xfd, .x=0x7c, .y=0xc7, .sp=0x4c, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xb422, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xb423, .a=0xfa, .x=0x7c, .y=0xc7, .sp=0x4c, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xb422, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xb422, .value=0x1c, .type=IO_READ},
        {.addr=0xb423, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_002E) {
    const struct CPU_State initial_cpu = {.pc=0xf68b, .a=0x52, .x=0x05, .y=0x85, .sp=0x82, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xf68b, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xf68c, .a=0xa4, .x=0x05, .y=0x85, .sp=0x82, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xf68b, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xf68b, .value=0x1c, .type=IO_READ},
        {.addr=0xf68c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_002F) {
    const struct CPU_State initial_cpu = {.pc=0xf9f5, .a=0x17, .x=0x8c, .y=0x2e, .sp=0xe0, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xf9f5, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xf9f6, .a=0x2e, .x=0x8c, .y=0x2e, .sp=0xe0, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xf9f5, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xf9f5, .value=0x1c, .type=IO_READ},
        {.addr=0xf9f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0030) {
    const struct CPU_State initial_cpu = {.pc=0x7255, .a=0x08, .x=0x76, .y=0x96, .sp=0xd7, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x7255, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x7256, .a=0x10, .x=0x76, .y=0x96, .sp=0xd7, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x7255, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x7255, .value=0x1c, .type=IO_READ},
        {.addr=0x7256, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0031) {
    const struct CPU_State initial_cpu = {.pc=0x1a3b, .a=0xd0, .x=0xe6, .y=0x2b, .sp=0xc3, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x1a3b, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x1a3c, .a=0xa0, .x=0xe6, .y=0x2b, .sp=0xc3, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x1a3b, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x1a3b, .value=0x1c, .type=IO_READ},
        {.addr=0x1a3c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0032) {
    const struct CPU_State initial_cpu = {.pc=0x788b, .a=0x29, .x=0x08, .y=0xb1, .sp=0xc7, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x788b, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x788c, .a=0x52, .x=0x08, .y=0xb1, .sp=0xc7, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x788b, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x788b, .value=0x1c, .type=IO_READ},
        {.addr=0x788c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0033) {
    const struct CPU_State initial_cpu = {.pc=0x4569, .a=0xe6, .x=0xe9, .y=0xcc, .sp=0xfb, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x4569, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x456a, .a=0xcc, .x=0xe9, .y=0xcc, .sp=0xfb, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x4569, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x4569, .value=0x1c, .type=IO_READ},
        {.addr=0x456a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0034) {
    const struct CPU_State initial_cpu = {.pc=0x64fc, .a=0xad, .x=0xde, .y=0x38, .sp=0x4d, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x64fc, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x64fd, .a=0x5a, .x=0xde, .y=0x38, .sp=0x4d, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x64fc, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x64fc, .value=0x1c, .type=IO_READ},
        {.addr=0x64fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0035) {
    const struct CPU_State initial_cpu = {.pc=0x913e, .a=0xc4, .x=0x22, .y=0x7c, .sp=0xd0, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x913e, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x913f, .a=0x88, .x=0x22, .y=0x7c, .sp=0xd0, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x913e, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x913e, .value=0x1c, .type=IO_READ},
        {.addr=0x913f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0036) {
    const struct CPU_State initial_cpu = {.pc=0x0c86, .a=0x80, .x=0xe6, .y=0xab, .sp=0x5e, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x0c86, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x0c87, .a=0x00, .x=0xe6, .y=0xab, .sp=0x5e, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x0c86, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x0c86, .value=0x1c, .type=IO_READ},
        {.addr=0x0c87, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0037) {
    const struct CPU_State initial_cpu = {.pc=0xe3cc, .a=0x97, .x=0x9e, .y=0x00, .sp=0x8c, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xe3cc, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xe3cd, .a=0x2e, .x=0x9e, .y=0x00, .sp=0x8c, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xe3cc, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xe3cc, .value=0x1c, .type=IO_READ},
        {.addr=0xe3cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0038) {
    const struct CPU_State initial_cpu = {.pc=0xcbe8, .a=0xc5, .x=0xb2, .y=0xd2, .sp=0xb1, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xcbe8, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xcbe9, .a=0x8a, .x=0xb2, .y=0xd2, .sp=0xb1, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xcbe8, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xcbe8, .value=0x1c, .type=IO_READ},
        {.addr=0xcbe9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0039) {
    const struct CPU_State initial_cpu = {.pc=0xb35e, .a=0x07, .x=0x29, .y=0x97, .sp=0x52, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xb35e, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xb35f, .a=0x0e, .x=0x29, .y=0x97, .sp=0x52, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xb35e, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xb35e, .value=0x1c, .type=IO_READ},
        {.addr=0xb35f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_003A) {
    const struct CPU_State initial_cpu = {.pc=0x9d6f, .a=0x5b, .x=0x96, .y=0x01, .sp=0x3f, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x9d6f, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x9d70, .a=0xb6, .x=0x96, .y=0x01, .sp=0x3f, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x9d6f, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x9d6f, .value=0x1c, .type=IO_READ},
        {.addr=0x9d70, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_003B) {
    const struct CPU_State initial_cpu = {.pc=0x2105, .a=0xf7, .x=0xce, .y=0xb3, .sp=0x49, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x2105, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x2106, .a=0xee, .x=0xce, .y=0xb3, .sp=0x49, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x2105, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x2105, .value=0x1c, .type=IO_READ},
        {.addr=0x2106, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_003C) {
    const struct CPU_State initial_cpu = {.pc=0xdf83, .a=0xad, .x=0xfe, .y=0xb5, .sp=0x06, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xdf83, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xdf84, .a=0x5a, .x=0xfe, .y=0xb5, .sp=0x06, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xdf83, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xdf83, .value=0x1c, .type=IO_READ},
        {.addr=0xdf84, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_003D) {
    const struct CPU_State initial_cpu = {.pc=0xb8c5, .a=0x93, .x=0x31, .y=0xd5, .sp=0x58, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xb8c5, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xb8c6, .a=0x26, .x=0x31, .y=0xd5, .sp=0x58, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xb8c5, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xb8c5, .value=0x1c, .type=IO_READ},
        {.addr=0xb8c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_003E) {
    const struct CPU_State initial_cpu = {.pc=0xa776, .a=0x84, .x=0x02, .y=0x0f, .sp=0xc4, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xa776, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xa777, .a=0x08, .x=0x02, .y=0x0f, .sp=0xc4, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xa776, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xa776, .value=0x1c, .type=IO_READ},
        {.addr=0xa777, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_003F) {
    const struct CPU_State initial_cpu = {.pc=0x1fcb, .a=0x1f, .x=0x95, .y=0x66, .sp=0x2c, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x1fcb, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x1fcc, .a=0x3e, .x=0x95, .y=0x66, .sp=0x2c, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x1fcb, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x1fcb, .value=0x1c, .type=IO_READ},
        {.addr=0x1fcc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0040) {
    const struct CPU_State initial_cpu = {.pc=0x1079, .a=0x46, .x=0x75, .y=0x66, .sp=0x4f, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x1079, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x107a, .a=0x8c, .x=0x75, .y=0x66, .sp=0x4f, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x1079, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x1079, .value=0x1c, .type=IO_READ},
        {.addr=0x107a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0041) {
    const struct CPU_State initial_cpu = {.pc=0x790f, .a=0xe8, .x=0xe8, .y=0x85, .sp=0x52, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x790f, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x7910, .a=0xd0, .x=0xe8, .y=0x85, .sp=0x52, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x790f, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x790f, .value=0x1c, .type=IO_READ},
        {.addr=0x7910, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0042) {
    const struct CPU_State initial_cpu = {.pc=0xb1d1, .a=0x04, .x=0x55, .y=0xe0, .sp=0xa0, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xb1d1, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xb1d2, .a=0x08, .x=0x55, .y=0xe0, .sp=0xa0, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xb1d1, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xb1d1, .value=0x1c, .type=IO_READ},
        {.addr=0xb1d2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0043) {
    const struct CPU_State initial_cpu = {.pc=0xc023, .a=0x7d, .x=0x65, .y=0x31, .sp=0xb5, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xc023, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xc024, .a=0xfa, .x=0x65, .y=0x31, .sp=0xb5, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xc023, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xc023, .value=0x1c, .type=IO_READ},
        {.addr=0xc024, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0044) {
    const struct CPU_State initial_cpu = {.pc=0x95c8, .a=0xae, .x=0x60, .y=0x32, .sp=0x12, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x95c8, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x95c9, .a=0x5c, .x=0x60, .y=0x32, .sp=0x12, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x95c8, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x95c8, .value=0x1c, .type=IO_READ},
        {.addr=0x95c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0045) {
    const struct CPU_State initial_cpu = {.pc=0x325c, .a=0x1e, .x=0x45, .y=0xe9, .sp=0xe1, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x325c, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x325d, .a=0x3c, .x=0x45, .y=0xe9, .sp=0xe1, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x325c, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x325c, .value=0x1c, .type=IO_READ},
        {.addr=0x325d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0046) {
    const struct CPU_State initial_cpu = {.pc=0xe0c1, .a=0x89, .x=0x22, .y=0x6a, .sp=0xeb, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xe0c1, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xe0c2, .a=0x12, .x=0x22, .y=0x6a, .sp=0xeb, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xe0c1, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xe0c1, .value=0x1c, .type=IO_READ},
        {.addr=0xe0c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0047) {
    const struct CPU_State initial_cpu = {.pc=0xf409, .a=0xae, .x=0x31, .y=0x2f, .sp=0x27, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xf409, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xf40a, .a=0x5c, .x=0x31, .y=0x2f, .sp=0x27, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xf409, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xf409, .value=0x1c, .type=IO_READ},
        {.addr=0xf40a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0048) {
    const struct CPU_State initial_cpu = {.pc=0x6405, .a=0x39, .x=0x48, .y=0x0a, .sp=0x41, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x6405, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x6406, .a=0x72, .x=0x48, .y=0x0a, .sp=0x41, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x6405, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x6405, .value=0x1c, .type=IO_READ},
        {.addr=0x6406, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0049) {
    const struct CPU_State initial_cpu = {.pc=0xdea0, .a=0x5b, .x=0xb2, .y=0x84, .sp=0x8c, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xdea0, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xdea1, .a=0xb6, .x=0xb2, .y=0x84, .sp=0x8c, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xdea0, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xdea0, .value=0x1c, .type=IO_READ},
        {.addr=0xdea1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_004A) {
    const struct CPU_State initial_cpu = {.pc=0xf107, .a=0xa1, .x=0xea, .y=0x75, .sp=0x43, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xf107, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xf108, .a=0x42, .x=0xea, .y=0x75, .sp=0x43, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xf107, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xf107, .value=0x1c, .type=IO_READ},
        {.addr=0xf108, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_004B) {
    const struct CPU_State initial_cpu = {.pc=0x525d, .a=0x66, .x=0x5b, .y=0x62, .sp=0x1d, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x525d, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x525e, .a=0xcc, .x=0x5b, .y=0x62, .sp=0x1d, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x525d, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x525d, .value=0x1c, .type=IO_READ},
        {.addr=0x525e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_004C) {
    const struct CPU_State initial_cpu = {.pc=0x58ab, .a=0x24, .x=0x55, .y=0x6d, .sp=0x3d, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x58ab, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x58ac, .a=0x48, .x=0x55, .y=0x6d, .sp=0x3d, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x58ab, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x58ab, .value=0x1c, .type=IO_READ},
        {.addr=0x58ac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_004D) {
    const struct CPU_State initial_cpu = {.pc=0x6ac7, .a=0xee, .x=0xbc, .y=0x26, .sp=0x3a, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x6ac7, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x6ac8, .a=0xdc, .x=0xbc, .y=0x26, .sp=0x3a, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x6ac7, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x6ac7, .value=0x1c, .type=IO_READ},
        {.addr=0x6ac8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_004E) {
    const struct CPU_State initial_cpu = {.pc=0x695c, .a=0x0c, .x=0x92, .y=0xdb, .sp=0x1d, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x695c, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x695d, .a=0x18, .x=0x92, .y=0xdb, .sp=0x1d, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x695c, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x695c, .value=0x1c, .type=IO_READ},
        {.addr=0x695d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_004F) {
    const struct CPU_State initial_cpu = {.pc=0xfc15, .a=0xac, .x=0xad, .y=0x89, .sp=0x18, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xfc15, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xfc16, .a=0x58, .x=0xad, .y=0x89, .sp=0x18, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xfc15, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xfc15, .value=0x1c, .type=IO_READ},
        {.addr=0xfc16, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0050) {
    const struct CPU_State initial_cpu = {.pc=0x2ef6, .a=0x45, .x=0x5e, .y=0x09, .sp=0xbd, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x2ef6, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x2ef7, .a=0x8a, .x=0x5e, .y=0x09, .sp=0xbd, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x2ef6, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x2ef6, .value=0x1c, .type=IO_READ},
        {.addr=0x2ef7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0051) {
    const struct CPU_State initial_cpu = {.pc=0xc50e, .a=0xbe, .x=0xde, .y=0xcb, .sp=0x87, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xc50e, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xc50f, .a=0x7c, .x=0xde, .y=0xcb, .sp=0x87, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xc50e, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xc50e, .value=0x1c, .type=IO_READ},
        {.addr=0xc50f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0052) {
    const struct CPU_State initial_cpu = {.pc=0xf56d, .a=0x70, .x=0xbb, .y=0x8d, .sp=0xd6, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xf56d, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xf56e, .a=0xe0, .x=0xbb, .y=0x8d, .sp=0xd6, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xf56d, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xf56d, .value=0x1c, .type=IO_READ},
        {.addr=0xf56e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0053) {
    const struct CPU_State initial_cpu = {.pc=0x1bd4, .a=0x04, .x=0xa5, .y=0x92, .sp=0x82, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x1bd4, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x1bd5, .a=0x08, .x=0xa5, .y=0x92, .sp=0x82, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x1bd4, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x1bd4, .value=0x1c, .type=IO_READ},
        {.addr=0x1bd5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0054) {
    const struct CPU_State initial_cpu = {.pc=0xdcaf, .a=0x56, .x=0x85, .y=0x34, .sp=0x55, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xdcaf, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xdcb0, .a=0xac, .x=0x85, .y=0x34, .sp=0x55, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xdcaf, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xdcaf, .value=0x1c, .type=IO_READ},
        {.addr=0xdcb0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0055) {
    const struct CPU_State initial_cpu = {.pc=0xe35a, .a=0xe0, .x=0xc3, .y=0x2b, .sp=0xce, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xe35a, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xe35b, .a=0xc0, .x=0xc3, .y=0x2b, .sp=0xce, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xe35a, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xe35a, .value=0x1c, .type=IO_READ},
        {.addr=0xe35b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0056) {
    const struct CPU_State initial_cpu = {.pc=0x8e9d, .a=0x84, .x=0x0e, .y=0xcf, .sp=0xb7, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x8e9d, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x8e9e, .a=0x08, .x=0x0e, .y=0xcf, .sp=0xb7, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x8e9d, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x8e9d, .value=0x1c, .type=IO_READ},
        {.addr=0x8e9e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0057) {
    const struct CPU_State initial_cpu = {.pc=0x8c5c, .a=0x26, .x=0x9d, .y=0x70, .sp=0x77, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x8c5c, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x8c5d, .a=0x4c, .x=0x9d, .y=0x70, .sp=0x77, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x8c5c, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x8c5c, .value=0x1c, .type=IO_READ},
        {.addr=0x8c5d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0058) {
    const struct CPU_State initial_cpu = {.pc=0x3fbb, .a=0xa9, .x=0xda, .y=0x83, .sp=0x5a, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x3fbb, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x3fbc, .a=0x52, .x=0xda, .y=0x83, .sp=0x5a, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x3fbb, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x3fbb, .value=0x1c, .type=IO_READ},
        {.addr=0x3fbc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0059) {
    const struct CPU_State initial_cpu = {.pc=0xbe4b, .a=0xdf, .x=0xe2, .y=0x51, .sp=0x72, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xbe4b, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xbe4c, .a=0xbe, .x=0xe2, .y=0x51, .sp=0x72, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xbe4b, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xbe4b, .value=0x1c, .type=IO_READ},
        {.addr=0xbe4c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_005A) {
    const struct CPU_State initial_cpu = {.pc=0x56d6, .a=0xcf, .x=0x76, .y=0x8b, .sp=0x9b, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x56d6, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x56d7, .a=0x9e, .x=0x76, .y=0x8b, .sp=0x9b, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x56d6, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x56d6, .value=0x1c, .type=IO_READ},
        {.addr=0x56d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_005B) {
    const struct CPU_State initial_cpu = {.pc=0x805e, .a=0xab, .x=0x0b, .y=0x94, .sp=0x6a, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x805e, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x805f, .a=0x56, .x=0x0b, .y=0x94, .sp=0x6a, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x805e, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x805e, .value=0x1c, .type=IO_READ},
        {.addr=0x805f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_005C) {
    const struct CPU_State initial_cpu = {.pc=0x7498, .a=0x98, .x=0x63, .y=0xee, .sp=0xb6, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x7498, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x7499, .a=0x30, .x=0x63, .y=0xee, .sp=0xb6, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x7498, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x7498, .value=0x1c, .type=IO_READ},
        {.addr=0x7499, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_005D) {
    const struct CPU_State initial_cpu = {.pc=0x747a, .a=0x48, .x=0xb0, .y=0xcd, .sp=0x19, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x747a, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x747b, .a=0x90, .x=0xb0, .y=0xcd, .sp=0x19, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x747a, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x747a, .value=0x1c, .type=IO_READ},
        {.addr=0x747b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_005E) {
    const struct CPU_State initial_cpu = {.pc=0x21ef, .a=0x1c, .x=0xc0, .y=0x47, .sp=0xe0, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x21ef, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x21f0, .a=0x38, .x=0xc0, .y=0x47, .sp=0xe0, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x21ef, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x21ef, .value=0x1c, .type=IO_READ},
        {.addr=0x21f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_005F) {
    const struct CPU_State initial_cpu = {.pc=0x696c, .a=0x23, .x=0xc3, .y=0xf9, .sp=0x45, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x696c, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x696d, .a=0x46, .x=0xc3, .y=0xf9, .sp=0x45, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x696c, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x696c, .value=0x1c, .type=IO_READ},
        {.addr=0x696d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0060) {
    const struct CPU_State initial_cpu = {.pc=0x75c7, .a=0x2c, .x=0x7b, .y=0x35, .sp=0x80, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x75c7, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x75c8, .a=0x58, .x=0x7b, .y=0x35, .sp=0x80, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x75c7, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x75c7, .value=0x1c, .type=IO_READ},
        {.addr=0x75c8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0061) {
    const struct CPU_State initial_cpu = {.pc=0xcc86, .a=0xb7, .x=0xdf, .y=0x13, .sp=0x8e, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xcc86, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xcc87, .a=0x6e, .x=0xdf, .y=0x13, .sp=0x8e, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xcc86, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xcc86, .value=0x1c, .type=IO_READ},
        {.addr=0xcc87, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0062) {
    const struct CPU_State initial_cpu = {.pc=0x1f8b, .a=0x5c, .x=0x23, .y=0xe2, .sp=0x36, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x1f8b, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x1f8c, .a=0xb8, .x=0x23, .y=0xe2, .sp=0x36, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x1f8b, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x1f8b, .value=0x1c, .type=IO_READ},
        {.addr=0x1f8c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0063) {
    const struct CPU_State initial_cpu = {.pc=0x1f04, .a=0x74, .x=0x4a, .y=0xff, .sp=0xaf, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x1f04, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x1f05, .a=0xe8, .x=0x4a, .y=0xff, .sp=0xaf, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x1f04, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x1f04, .value=0x1c, .type=IO_READ},
        {.addr=0x1f05, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0064) {
    const struct CPU_State initial_cpu = {.pc=0xc8c5, .a=0xa0, .x=0xe7, .y=0x86, .sp=0x54, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xc8c5, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xc8c6, .a=0x40, .x=0xe7, .y=0x86, .sp=0x54, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xc8c5, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xc8c5, .value=0x1c, .type=IO_READ},
        {.addr=0xc8c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0065) {
    const struct CPU_State initial_cpu = {.pc=0x6da9, .a=0x3e, .x=0x00, .y=0xb3, .sp=0x96, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x6da9, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x6daa, .a=0x7c, .x=0x00, .y=0xb3, .sp=0x96, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x6da9, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x6da9, .value=0x1c, .type=IO_READ},
        {.addr=0x6daa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0066) {
    const struct CPU_State initial_cpu = {.pc=0x4eac, .a=0x1f, .x=0x65, .y=0xd3, .sp=0x6e, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x4eac, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x4ead, .a=0x3e, .x=0x65, .y=0xd3, .sp=0x6e, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x4eac, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x4eac, .value=0x1c, .type=IO_READ},
        {.addr=0x4ead, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0067) {
    const struct CPU_State initial_cpu = {.pc=0x160d, .a=0x93, .x=0x0b, .y=0x15, .sp=0x81, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x160d, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x160e, .a=0x26, .x=0x0b, .y=0x15, .sp=0x81, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x160d, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x160d, .value=0x1c, .type=IO_READ},
        {.addr=0x160e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0068) {
    const struct CPU_State initial_cpu = {.pc=0xd708, .a=0xbb, .x=0x19, .y=0x0c, .sp=0x8f, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xd708, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd709, .a=0x76, .x=0x19, .y=0x0c, .sp=0x8f, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xd708, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd708, .value=0x1c, .type=IO_READ},
        {.addr=0xd709, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0069) {
    const struct CPU_State initial_cpu = {.pc=0x5ace, .a=0xb4, .x=0x9e, .y=0xee, .sp=0xf6, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x5ace, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x5acf, .a=0x68, .x=0x9e, .y=0xee, .sp=0xf6, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x5ace, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x5ace, .value=0x1c, .type=IO_READ},
        {.addr=0x5acf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_006A) {
    const struct CPU_State initial_cpu = {.pc=0x4667, .a=0xd6, .x=0xe8, .y=0x67, .sp=0x0d, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x4667, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x4668, .a=0xac, .x=0xe8, .y=0x67, .sp=0x0d, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x4667, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x4667, .value=0x1c, .type=IO_READ},
        {.addr=0x4668, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_006B) {
    const struct CPU_State initial_cpu = {.pc=0x1357, .a=0x3f, .x=0x9f, .y=0xd5, .sp=0xdf, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x1357, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x1358, .a=0x7e, .x=0x9f, .y=0xd5, .sp=0xdf, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x1357, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x1357, .value=0x1c, .type=IO_READ},
        {.addr=0x1358, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_006C) {
    const struct CPU_State initial_cpu = {.pc=0xcaa4, .a=0xc6, .x=0x88, .y=0x36, .sp=0x9c, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xcaa4, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xcaa5, .a=0x8c, .x=0x88, .y=0x36, .sp=0x9c, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xcaa4, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xcaa4, .value=0x1c, .type=IO_READ},
        {.addr=0xcaa5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_006D) {
    const struct CPU_State initial_cpu = {.pc=0x059a, .a=0xad, .x=0xcf, .y=0x71, .sp=0x21, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x059a, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x059b, .a=0x5a, .x=0xcf, .y=0x71, .sp=0x21, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x059a, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x059a, .value=0x1c, .type=IO_READ},
        {.addr=0x059b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_006E) {
    const struct CPU_State initial_cpu = {.pc=0xe903, .a=0x03, .x=0xe0, .y=0x96, .sp=0x7f, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xe903, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xe904, .a=0x06, .x=0xe0, .y=0x96, .sp=0x7f, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xe903, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xe903, .value=0x1c, .type=IO_READ},
        {.addr=0xe904, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_006F) {
    const struct CPU_State initial_cpu = {.pc=0xd0ea, .a=0xe9, .x=0xc0, .y=0x89, .sp=0xc4, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xd0ea, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd0eb, .a=0xd2, .x=0xc0, .y=0x89, .sp=0xc4, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xd0ea, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd0ea, .value=0x1c, .type=IO_READ},
        {.addr=0xd0eb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0070) {
    const struct CPU_State initial_cpu = {.pc=0x6452, .a=0xad, .x=0xc8, .y=0x67, .sp=0x1c, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x6452, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x6453, .a=0x5a, .x=0xc8, .y=0x67, .sp=0x1c, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x6452, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x6452, .value=0x1c, .type=IO_READ},
        {.addr=0x6453, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0071) {
    const struct CPU_State initial_cpu = {.pc=0xc9d1, .a=0x6d, .x=0x3a, .y=0x8e, .sp=0x57, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xc9d1, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xc9d2, .a=0xda, .x=0x3a, .y=0x8e, .sp=0x57, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xc9d1, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xc9d1, .value=0x1c, .type=IO_READ},
        {.addr=0xc9d2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0072) {
    const struct CPU_State initial_cpu = {.pc=0x69c2, .a=0xc4, .x=0x7c, .y=0x13, .sp=0xbf, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x69c2, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x69c3, .a=0x88, .x=0x7c, .y=0x13, .sp=0xbf, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x69c2, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x69c2, .value=0x1c, .type=IO_READ},
        {.addr=0x69c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0073) {
    const struct CPU_State initial_cpu = {.pc=0xdd0f, .a=0xf2, .x=0xe6, .y=0x1b, .sp=0xa5, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xdd0f, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xdd10, .a=0xe4, .x=0xe6, .y=0x1b, .sp=0xa5, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xdd0f, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xdd0f, .value=0x1c, .type=IO_READ},
        {.addr=0xdd10, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0074) {
    const struct CPU_State initial_cpu = {.pc=0xca14, .a=0x87, .x=0x93, .y=0x22, .sp=0x1a, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xca14, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xca15, .a=0x0e, .x=0x93, .y=0x22, .sp=0x1a, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xca14, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xca14, .value=0x1c, .type=IO_READ},
        {.addr=0xca15, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0075) {
    const struct CPU_State initial_cpu = {.pc=0x47c9, .a=0x64, .x=0x41, .y=0x84, .sp=0x2d, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x47c9, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x47ca, .a=0xc8, .x=0x41, .y=0x84, .sp=0x2d, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x47c9, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x47c9, .value=0x1c, .type=IO_READ},
        {.addr=0x47ca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0076) {
    const struct CPU_State initial_cpu = {.pc=0xc1b9, .a=0x79, .x=0xe9, .y=0x66, .sp=0xfe, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xc1b9, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xc1ba, .a=0xf2, .x=0xe9, .y=0x66, .sp=0xfe, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xc1b9, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xc1b9, .value=0x1c, .type=IO_READ},
        {.addr=0xc1ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0077) {
    const struct CPU_State initial_cpu = {.pc=0xfbe4, .a=0x2e, .x=0xd0, .y=0x8b, .sp=0x76, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xfbe4, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xfbe5, .a=0x5c, .x=0xd0, .y=0x8b, .sp=0x76, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xfbe4, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xfbe4, .value=0x1c, .type=IO_READ},
        {.addr=0xfbe5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0078) {
    const struct CPU_State initial_cpu = {.pc=0x4d72, .a=0x7c, .x=0xdc, .y=0xc0, .sp=0xd6, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x4d72, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x4d73, .a=0xf8, .x=0xdc, .y=0xc0, .sp=0xd6, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x4d72, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x4d72, .value=0x1c, .type=IO_READ},
        {.addr=0x4d73, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0079) {
    const struct CPU_State initial_cpu = {.pc=0x22f3, .a=0xff, .x=0x78, .y=0x5d, .sp=0xe6, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x22f3, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x22f4, .a=0xfe, .x=0x78, .y=0x5d, .sp=0xe6, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x22f3, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x22f3, .value=0x1c, .type=IO_READ},
        {.addr=0x22f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_007A) {
    const struct CPU_State initial_cpu = {.pc=0x6bcb, .a=0x80, .x=0x46, .y=0xb3, .sp=0x71, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x6bcb, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x6bcc, .a=0x00, .x=0x46, .y=0xb3, .sp=0x71, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x6bcb, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x6bcb, .value=0x1c, .type=IO_READ},
        {.addr=0x6bcc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_007B) {
    const struct CPU_State initial_cpu = {.pc=0xcaed, .a=0xaa, .x=0x8d, .y=0xb8, .sp=0xa6, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xcaed, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xcaee, .a=0x54, .x=0x8d, .y=0xb8, .sp=0xa6, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xcaed, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xcaed, .value=0x1c, .type=IO_READ},
        {.addr=0xcaee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_007C) {
    const struct CPU_State initial_cpu = {.pc=0x550d, .a=0x99, .x=0x44, .y=0x08, .sp=0x93, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x550d, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x550e, .a=0x32, .x=0x44, .y=0x08, .sp=0x93, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x550d, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x550d, .value=0x1c, .type=IO_READ},
        {.addr=0x550e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_007D) {
    const struct CPU_State initial_cpu = {.pc=0xd494, .a=0xdf, .x=0xb2, .y=0x07, .sp=0x86, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xd494, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd495, .a=0xbe, .x=0xb2, .y=0x07, .sp=0x86, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xd494, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd494, .value=0x1c, .type=IO_READ},
        {.addr=0xd495, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_007E) {
    const struct CPU_State initial_cpu = {.pc=0x4a81, .a=0xdc, .x=0xc0, .y=0xce, .sp=0x15, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x4a81, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x4a82, .a=0xb8, .x=0xc0, .y=0xce, .sp=0x15, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x4a81, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x4a81, .value=0x1c, .type=IO_READ},
        {.addr=0x4a82, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_007F) {
    const struct CPU_State initial_cpu = {.pc=0x8828, .a=0xd0, .x=0xc9, .y=0x99, .sp=0xb0, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x8828, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x8829, .a=0xa0, .x=0xc9, .y=0x99, .sp=0xb0, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x8828, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x8828, .value=0x1c, .type=IO_READ},
        {.addr=0x8829, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0080) {
    const struct CPU_State initial_cpu = {.pc=0x413a, .a=0x8f, .x=0x09, .y=0xdb, .sp=0x30, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x413a, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x413b, .a=0x1e, .x=0x09, .y=0xdb, .sp=0x30, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x413a, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x413a, .value=0x1c, .type=IO_READ},
        {.addr=0x413b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0081) {
    const struct CPU_State initial_cpu = {.pc=0xe8cf, .a=0x1e, .x=0xb8, .y=0x07, .sp=0xf4, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xe8cf, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xe8d0, .a=0x3c, .x=0xb8, .y=0x07, .sp=0xf4, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xe8cf, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xe8cf, .value=0x1c, .type=IO_READ},
        {.addr=0xe8d0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0082) {
    const struct CPU_State initial_cpu = {.pc=0xbad3, .a=0xa9, .x=0xfa, .y=0xe1, .sp=0xda, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xbad3, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xbad4, .a=0x52, .x=0xfa, .y=0xe1, .sp=0xda, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xbad3, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xbad3, .value=0x1c, .type=IO_READ},
        {.addr=0xbad4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0083) {
    const struct CPU_State initial_cpu = {.pc=0x4066, .a=0x11, .x=0x1d, .y=0x43, .sp=0xc5, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x4066, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x4067, .a=0x22, .x=0x1d, .y=0x43, .sp=0xc5, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x4066, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x4066, .value=0x1c, .type=IO_READ},
        {.addr=0x4067, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0084) {
    const struct CPU_State initial_cpu = {.pc=0x0713, .a=0xfa, .x=0xb6, .y=0xf9, .sp=0x4a, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x0713, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x0714, .a=0xf4, .x=0xb6, .y=0xf9, .sp=0x4a, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x0713, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x0713, .value=0x1c, .type=IO_READ},
        {.addr=0x0714, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0085) {
    const struct CPU_State initial_cpu = {.pc=0x9811, .a=0x48, .x=0xcf, .y=0x48, .sp=0xbd, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x9811, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x9812, .a=0x90, .x=0xcf, .y=0x48, .sp=0xbd, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x9811, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x9811, .value=0x1c, .type=IO_READ},
        {.addr=0x9812, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0086) {
    const struct CPU_State initial_cpu = {.pc=0xc483, .a=0xc0, .x=0xff, .y=0xa3, .sp=0xd7, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xc483, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xc484, .a=0x80, .x=0xff, .y=0xa3, .sp=0xd7, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xc483, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xc483, .value=0x1c, .type=IO_READ},
        {.addr=0xc484, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0087) {
    const struct CPU_State initial_cpu = {.pc=0x76aa, .a=0x59, .x=0xe5, .y=0x58, .sp=0x54, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x76aa, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x76ab, .a=0xb2, .x=0xe5, .y=0x58, .sp=0x54, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x76aa, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x76aa, .value=0x1c, .type=IO_READ},
        {.addr=0x76ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0088) {
    const struct CPU_State initial_cpu = {.pc=0x9fbd, .a=0x80, .x=0xb2, .y=0x82, .sp=0xe9, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x9fbd, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x9fbe, .a=0x00, .x=0xb2, .y=0x82, .sp=0xe9, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x9fbd, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x9fbd, .value=0x1c, .type=IO_READ},
        {.addr=0x9fbe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0089) {
    const struct CPU_State initial_cpu = {.pc=0xac65, .a=0x93, .x=0x32, .y=0x90, .sp=0x93, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xac65, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xac66, .a=0x26, .x=0x32, .y=0x90, .sp=0x93, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xac65, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xac65, .value=0x1c, .type=IO_READ},
        {.addr=0xac66, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_008A) {
    const struct CPU_State initial_cpu = {.pc=0x735d, .a=0x09, .x=0xc9, .y=0x48, .sp=0xbd, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x735d, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x735e, .a=0x12, .x=0xc9, .y=0x48, .sp=0xbd, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x735d, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x735d, .value=0x1c, .type=IO_READ},
        {.addr=0x735e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_008B) {
    const struct CPU_State initial_cpu = {.pc=0x2264, .a=0x8a, .x=0x66, .y=0x2b, .sp=0xd6, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x2264, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x2265, .a=0x14, .x=0x66, .y=0x2b, .sp=0xd6, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x2264, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x2264, .value=0x1c, .type=IO_READ},
        {.addr=0x2265, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_008C) {
    const struct CPU_State initial_cpu = {.pc=0xbdcd, .a=0x0f, .x=0x68, .y=0xa0, .sp=0xf8, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xbdcd, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xbdce, .a=0x1e, .x=0x68, .y=0xa0, .sp=0xf8, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xbdcd, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xbdcd, .value=0x1c, .type=IO_READ},
        {.addr=0xbdce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_008D) {
    const struct CPU_State initial_cpu = {.pc=0x1ba6, .a=0xc2, .x=0x0c, .y=0x40, .sp=0x5f, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x1ba6, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x1ba7, .a=0x84, .x=0x0c, .y=0x40, .sp=0x5f, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x1ba6, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x1ba6, .value=0x1c, .type=IO_READ},
        {.addr=0x1ba7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_008E) {
    const struct CPU_State initial_cpu = {.pc=0xe91d, .a=0xc0, .x=0x98, .y=0x28, .sp=0x2b, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xe91d, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xe91e, .a=0x80, .x=0x98, .y=0x28, .sp=0x2b, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xe91d, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xe91d, .value=0x1c, .type=IO_READ},
        {.addr=0xe91e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_008F) {
    const struct CPU_State initial_cpu = {.pc=0xf6ce, .a=0xa7, .x=0x3b, .y=0x19, .sp=0xdd, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xf6ce, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xf6cf, .a=0x4e, .x=0x3b, .y=0x19, .sp=0xdd, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xf6ce, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xf6ce, .value=0x1c, .type=IO_READ},
        {.addr=0xf6cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0090) {
    const struct CPU_State initial_cpu = {.pc=0xa26a, .a=0x83, .x=0xd0, .y=0x33, .sp=0x77, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xa26a, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xa26b, .a=0x06, .x=0xd0, .y=0x33, .sp=0x77, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xa26a, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xa26a, .value=0x1c, .type=IO_READ},
        {.addr=0xa26b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0091) {
    const struct CPU_State initial_cpu = {.pc=0x3a14, .a=0x4f, .x=0x42, .y=0xb8, .sp=0xe9, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x3a14, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x3a15, .a=0x9e, .x=0x42, .y=0xb8, .sp=0xe9, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x3a14, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x3a14, .value=0x1c, .type=IO_READ},
        {.addr=0x3a15, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0092) {
    const struct CPU_State initial_cpu = {.pc=0x784b, .a=0x09, .x=0xa8, .y=0x0b, .sp=0x9f, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x784b, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x784c, .a=0x12, .x=0xa8, .y=0x0b, .sp=0x9f, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x784b, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x784b, .value=0x1c, .type=IO_READ},
        {.addr=0x784c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0093) {
    const struct CPU_State initial_cpu = {.pc=0xa209, .a=0xcc, .x=0x52, .y=0x82, .sp=0xe8, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xa209, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xa20a, .a=0x98, .x=0x52, .y=0x82, .sp=0xe8, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xa209, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xa209, .value=0x1c, .type=IO_READ},
        {.addr=0xa20a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0094) {
    const struct CPU_State initial_cpu = {.pc=0xc8fc, .a=0x35, .x=0xf4, .y=0x16, .sp=0xb5, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xc8fc, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xc8fd, .a=0x6a, .x=0xf4, .y=0x16, .sp=0xb5, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xc8fc, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xc8fc, .value=0x1c, .type=IO_READ},
        {.addr=0xc8fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0095) {
    const struct CPU_State initial_cpu = {.pc=0xfc57, .a=0x61, .x=0x87, .y=0xfc, .sp=0xd5, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xfc57, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xfc58, .a=0xc2, .x=0x87, .y=0xfc, .sp=0xd5, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xfc57, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xfc57, .value=0x1c, .type=IO_READ},
        {.addr=0xfc58, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0096) {
    const struct CPU_State initial_cpu = {.pc=0x53e8, .a=0xba, .x=0xd3, .y=0x67, .sp=0x95, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x53e8, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x53e9, .a=0x74, .x=0xd3, .y=0x67, .sp=0x95, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x53e8, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x53e8, .value=0x1c, .type=IO_READ},
        {.addr=0x53e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0097) {
    const struct CPU_State initial_cpu = {.pc=0x0ace, .a=0xf4, .x=0xd1, .y=0x15, .sp=0x31, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x0ace, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x0acf, .a=0xe8, .x=0xd1, .y=0x15, .sp=0x31, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x0ace, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x0ace, .value=0x1c, .type=IO_READ},
        {.addr=0x0acf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0098) {
    const struct CPU_State initial_cpu = {.pc=0x8a04, .a=0x64, .x=0xd6, .y=0x1f, .sp=0x75, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x8a04, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x8a05, .a=0xc8, .x=0xd6, .y=0x1f, .sp=0x75, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x8a04, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x8a04, .value=0x1c, .type=IO_READ},
        {.addr=0x8a05, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0099) {
    const struct CPU_State initial_cpu = {.pc=0xaff2, .a=0x61, .x=0x91, .y=0x30, .sp=0xed, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xaff2, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xaff3, .a=0xc2, .x=0x91, .y=0x30, .sp=0xed, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xaff2, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xaff2, .value=0x1c, .type=IO_READ},
        {.addr=0xaff3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_009A) {
    const struct CPU_State initial_cpu = {.pc=0x374b, .a=0x3f, .x=0xda, .y=0xbf, .sp=0x3e, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x374b, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x374c, .a=0x7e, .x=0xda, .y=0xbf, .sp=0x3e, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x374b, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x374b, .value=0x1c, .type=IO_READ},
        {.addr=0x374c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_009B) {
    const struct CPU_State initial_cpu = {.pc=0x2882, .a=0x1f, .x=0xa8, .y=0x74, .sp=0xf0, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x2882, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x2883, .a=0x3e, .x=0xa8, .y=0x74, .sp=0xf0, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x2882, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x2882, .value=0x1c, .type=IO_READ},
        {.addr=0x2883, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_009C) {
    const struct CPU_State initial_cpu = {.pc=0xb525, .a=0xf7, .x=0xf6, .y=0x99, .sp=0xd6, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xb525, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xb526, .a=0xee, .x=0xf6, .y=0x99, .sp=0xd6, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xb525, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xb525, .value=0x1c, .type=IO_READ},
        {.addr=0xb526, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_009D) {
    const struct CPU_State initial_cpu = {.pc=0xb321, .a=0x44, .x=0x63, .y=0xd4, .sp=0x97, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xb321, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xb322, .a=0x88, .x=0x63, .y=0xd4, .sp=0x97, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xb321, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xb321, .value=0x1c, .type=IO_READ},
        {.addr=0xb322, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_009E) {
    const struct CPU_State initial_cpu = {.pc=0x1631, .a=0x2d, .x=0x41, .y=0x22, .sp=0x86, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x1631, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x1632, .a=0x5a, .x=0x41, .y=0x22, .sp=0x86, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x1631, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x1631, .value=0x1c, .type=IO_READ},
        {.addr=0x1632, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_009F) {
    const struct CPU_State initial_cpu = {.pc=0x1674, .a=0x00, .x=0x4e, .y=0xca, .sp=0x3c, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x1674, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x1675, .a=0x00, .x=0x4e, .y=0xca, .sp=0x3c, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x1674, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x1674, .value=0x1c, .type=IO_READ},
        {.addr=0x1675, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00A0) {
    const struct CPU_State initial_cpu = {.pc=0x353b, .a=0x34, .x=0x55, .y=0x6c, .sp=0x61, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x353b, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x353c, .a=0x68, .x=0x55, .y=0x6c, .sp=0x61, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x353b, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x353b, .value=0x1c, .type=IO_READ},
        {.addr=0x353c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x1d33, .a=0x15, .x=0x31, .y=0x86, .sp=0x2e, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x1d33, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x1d34, .a=0x2a, .x=0x31, .y=0x86, .sp=0x2e, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x1d33, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x1d33, .value=0x1c, .type=IO_READ},
        {.addr=0x1d34, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00A2) {
    const struct CPU_State initial_cpu = {.pc=0xbd06, .a=0x4b, .x=0x28, .y=0x5d, .sp=0xb2, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xbd06, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xbd07, .a=0x96, .x=0x28, .y=0x5d, .sp=0xb2, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xbd06, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xbd06, .value=0x1c, .type=IO_READ},
        {.addr=0xbd07, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00A3) {
    const struct CPU_State initial_cpu = {.pc=0xda13, .a=0xed, .x=0x06, .y=0x80, .sp=0x52, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xda13, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xda14, .a=0xda, .x=0x06, .y=0x80, .sp=0x52, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xda13, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xda13, .value=0x1c, .type=IO_READ},
        {.addr=0xda14, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00A4) {
    const struct CPU_State initial_cpu = {.pc=0xd325, .a=0xd3, .x=0x51, .y=0x6f, .sp=0x22, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xd325, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd326, .a=0xa6, .x=0x51, .y=0x6f, .sp=0x22, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xd325, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd325, .value=0x1c, .type=IO_READ},
        {.addr=0xd326, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00A5) {
    const struct CPU_State initial_cpu = {.pc=0xa4c4, .a=0x70, .x=0xa7, .y=0x00, .sp=0x3b, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xa4c4, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xa4c5, .a=0xe0, .x=0xa7, .y=0x00, .sp=0x3b, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xa4c4, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xa4c4, .value=0x1c, .type=IO_READ},
        {.addr=0xa4c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00A6) {
    const struct CPU_State initial_cpu = {.pc=0xeb0c, .a=0x90, .x=0x20, .y=0x0d, .sp=0xb4, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xeb0c, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xeb0d, .a=0x20, .x=0x20, .y=0x0d, .sp=0xb4, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xeb0c, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xeb0c, .value=0x1c, .type=IO_READ},
        {.addr=0xeb0d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x81ba, .a=0x50, .x=0xbd, .y=0x98, .sp=0x7f, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x81ba, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x81bb, .a=0xa0, .x=0xbd, .y=0x98, .sp=0x7f, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x81ba, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x81ba, .value=0x1c, .type=IO_READ},
        {.addr=0x81bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x4667, .a=0xeb, .x=0xa4, .y=0xfa, .sp=0xed, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x4667, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x4668, .a=0xd6, .x=0xa4, .y=0xfa, .sp=0xed, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x4667, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x4667, .value=0x1c, .type=IO_READ},
        {.addr=0x4668, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00A9) {
    const struct CPU_State initial_cpu = {.pc=0xbc50, .a=0x58, .x=0x5f, .y=0xdb, .sp=0x24, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xbc50, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xbc51, .a=0xb0, .x=0x5f, .y=0xdb, .sp=0x24, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xbc50, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xbc50, .value=0x1c, .type=IO_READ},
        {.addr=0xbc51, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x5a6c, .a=0xad, .x=0x77, .y=0xb3, .sp=0x35, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x5a6c, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x5a6d, .a=0x5a, .x=0x77, .y=0xb3, .sp=0x35, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x5a6c, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x5a6c, .value=0x1c, .type=IO_READ},
        {.addr=0x5a6d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x2519, .a=0xf9, .x=0x79, .y=0x2d, .sp=0x3f, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x2519, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x251a, .a=0xf2, .x=0x79, .y=0x2d, .sp=0x3f, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x2519, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x2519, .value=0x1c, .type=IO_READ},
        {.addr=0x251a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00AC) {
    const struct CPU_State initial_cpu = {.pc=0x5afb, .a=0xcf, .x=0x2c, .y=0xa0, .sp=0x95, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x5afb, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x5afc, .a=0x9e, .x=0x2c, .y=0xa0, .sp=0x95, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x5afb, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x5afb, .value=0x1c, .type=IO_READ},
        {.addr=0x5afc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x7481, .a=0x80, .x=0xda, .y=0x13, .sp=0x63, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x7481, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x7482, .a=0x00, .x=0xda, .y=0x13, .sp=0x63, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x7481, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x7481, .value=0x1c, .type=IO_READ},
        {.addr=0x7482, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00AE) {
    const struct CPU_State initial_cpu = {.pc=0x2fcb, .a=0x75, .x=0x90, .y=0x9e, .sp=0xbb, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x2fcb, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x2fcc, .a=0xea, .x=0x90, .y=0x9e, .sp=0xbb, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x2fcb, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x2fcb, .value=0x1c, .type=IO_READ},
        {.addr=0x2fcc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00AF) {
    const struct CPU_State initial_cpu = {.pc=0xa8f3, .a=0xe9, .x=0xfe, .y=0x94, .sp=0x87, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xa8f3, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xa8f4, .a=0xd2, .x=0xfe, .y=0x94, .sp=0x87, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xa8f3, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xa8f3, .value=0x1c, .type=IO_READ},
        {.addr=0xa8f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00B0) {
    const struct CPU_State initial_cpu = {.pc=0x4723, .a=0xda, .x=0x40, .y=0xe9, .sp=0xd4, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x4723, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x4724, .a=0xb4, .x=0x40, .y=0xe9, .sp=0xd4, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x4723, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x4723, .value=0x1c, .type=IO_READ},
        {.addr=0x4724, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00B1) {
    const struct CPU_State initial_cpu = {.pc=0x17c1, .a=0x62, .x=0x8d, .y=0x75, .sp=0x15, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x17c1, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x17c2, .a=0xc4, .x=0x8d, .y=0x75, .sp=0x15, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x17c1, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x17c1, .value=0x1c, .type=IO_READ},
        {.addr=0x17c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00B2) {
    const struct CPU_State initial_cpu = {.pc=0xddb2, .a=0xf1, .x=0xd8, .y=0xc3, .sp=0xb2, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xddb2, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xddb3, .a=0xe2, .x=0xd8, .y=0xc3, .sp=0xb2, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xddb2, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xddb2, .value=0x1c, .type=IO_READ},
        {.addr=0xddb3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00B3) {
    const struct CPU_State initial_cpu = {.pc=0xd54b, .a=0xca, .x=0xcb, .y=0xbb, .sp=0x13, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xd54b, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd54c, .a=0x94, .x=0xcb, .y=0xbb, .sp=0x13, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xd54b, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd54b, .value=0x1c, .type=IO_READ},
        {.addr=0xd54c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00B4) {
    const struct CPU_State initial_cpu = {.pc=0xbaca, .a=0xcb, .x=0x35, .y=0x69, .sp=0xd3, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xbaca, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xbacb, .a=0x96, .x=0x35, .y=0x69, .sp=0xd3, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xbaca, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xbaca, .value=0x1c, .type=IO_READ},
        {.addr=0xbacb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00B5) {
    const struct CPU_State initial_cpu = {.pc=0xd63a, .a=0x5a, .x=0x45, .y=0xc4, .sp=0x7a, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xd63a, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd63b, .a=0xb4, .x=0x45, .y=0xc4, .sp=0x7a, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xd63a, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd63a, .value=0x1c, .type=IO_READ},
        {.addr=0xd63b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00B6) {
    const struct CPU_State initial_cpu = {.pc=0xbb0d, .a=0x73, .x=0xac, .y=0x83, .sp=0x63, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xbb0d, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xbb0e, .a=0xe6, .x=0xac, .y=0x83, .sp=0x63, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xbb0d, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xbb0d, .value=0x1c, .type=IO_READ},
        {.addr=0xbb0e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00B7) {
    const struct CPU_State initial_cpu = {.pc=0xce74, .a=0x2c, .x=0x52, .y=0x02, .sp=0xe3, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xce74, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xce75, .a=0x58, .x=0x52, .y=0x02, .sp=0xe3, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xce74, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xce74, .value=0x1c, .type=IO_READ},
        {.addr=0xce75, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00B8) {
    const struct CPU_State initial_cpu = {.pc=0xa3fd, .a=0xd5, .x=0x84, .y=0x6a, .sp=0x6a, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xa3fd, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xa3fe, .a=0xaa, .x=0x84, .y=0x6a, .sp=0x6a, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xa3fd, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xa3fd, .value=0x1c, .type=IO_READ},
        {.addr=0xa3fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00B9) {
    const struct CPU_State initial_cpu = {.pc=0xd56b, .a=0x99, .x=0x6c, .y=0x5f, .sp=0xdf, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xd56b, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd56c, .a=0x32, .x=0x6c, .y=0x5f, .sp=0xdf, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xd56b, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd56b, .value=0x1c, .type=IO_READ},
        {.addr=0xd56c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00BA) {
    const struct CPU_State initial_cpu = {.pc=0x6403, .a=0xa9, .x=0x2f, .y=0xde, .sp=0x2c, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x6403, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x6404, .a=0x52, .x=0x2f, .y=0xde, .sp=0x2c, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x6403, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x6403, .value=0x1c, .type=IO_READ},
        {.addr=0x6404, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00BB) {
    const struct CPU_State initial_cpu = {.pc=0xdead, .a=0xf8, .x=0x55, .y=0x1a, .sp=0x85, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xdead, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xdeae, .a=0xf0, .x=0x55, .y=0x1a, .sp=0x85, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xdead, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xdead, .value=0x1c, .type=IO_READ},
        {.addr=0xdeae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x1902, .a=0xc0, .x=0xca, .y=0x36, .sp=0x76, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x1902, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x1903, .a=0x80, .x=0xca, .y=0x36, .sp=0x76, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x1902, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x1902, .value=0x1c, .type=IO_READ},
        {.addr=0x1903, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00BD) {
    const struct CPU_State initial_cpu = {.pc=0xea72, .a=0x9e, .x=0xaa, .y=0x1e, .sp=0x3e, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xea72, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xea73, .a=0x3c, .x=0xaa, .y=0x1e, .sp=0x3e, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xea72, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xea72, .value=0x1c, .type=IO_READ},
        {.addr=0xea73, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00BE) {
    const struct CPU_State initial_cpu = {.pc=0x794c, .a=0x49, .x=0x53, .y=0x1a, .sp=0x90, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x794c, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x794d, .a=0x92, .x=0x53, .y=0x1a, .sp=0x90, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x794c, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x794c, .value=0x1c, .type=IO_READ},
        {.addr=0x794d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00BF) {
    const struct CPU_State initial_cpu = {.pc=0x6e80, .a=0x7b, .x=0x8a, .y=0x5b, .sp=0xc0, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x6e80, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x6e81, .a=0xf6, .x=0x8a, .y=0x5b, .sp=0xc0, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x6e80, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x6e80, .value=0x1c, .type=IO_READ},
        {.addr=0x6e81, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00C0) {
    const struct CPU_State initial_cpu = {.pc=0x746d, .a=0x00, .x=0x71, .y=0xa4, .sp=0xa5, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x746d, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x746e, .a=0x00, .x=0x71, .y=0xa4, .sp=0xa5, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x746d, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x746d, .value=0x1c, .type=IO_READ},
        {.addr=0x746e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00C1) {
    const struct CPU_State initial_cpu = {.pc=0xe4b0, .a=0xb1, .x=0xd5, .y=0x2a, .sp=0xef, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xe4b0, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xe4b1, .a=0x62, .x=0xd5, .y=0x2a, .sp=0xef, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xe4b0, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xe4b0, .value=0x1c, .type=IO_READ},
        {.addr=0xe4b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00C2) {
    const struct CPU_State initial_cpu = {.pc=0x4cdc, .a=0x69, .x=0x71, .y=0x30, .sp=0x07, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x4cdc, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x4cdd, .a=0xd2, .x=0x71, .y=0x30, .sp=0x07, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x4cdc, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x4cdc, .value=0x1c, .type=IO_READ},
        {.addr=0x4cdd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00C3) {
    const struct CPU_State initial_cpu = {.pc=0xe8e0, .a=0x75, .x=0xe4, .y=0x12, .sp=0x9d, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xe8e0, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xe8e1, .a=0xea, .x=0xe4, .y=0x12, .sp=0x9d, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xe8e0, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xe8e0, .value=0x1c, .type=IO_READ},
        {.addr=0xe8e1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00C4) {
    const struct CPU_State initial_cpu = {.pc=0xe866, .a=0x28, .x=0xac, .y=0xdf, .sp=0x37, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xe866, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xe867, .a=0x50, .x=0xac, .y=0xdf, .sp=0x37, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xe866, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xe866, .value=0x1c, .type=IO_READ},
        {.addr=0xe867, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x72a4, .a=0xda, .x=0xf3, .y=0x02, .sp=0x81, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x72a4, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x72a5, .a=0xb4, .x=0xf3, .y=0x02, .sp=0x81, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x72a4, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x72a4, .value=0x1c, .type=IO_READ},
        {.addr=0x72a5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00C6) {
    const struct CPU_State initial_cpu = {.pc=0x54db, .a=0xe4, .x=0xa3, .y=0x5c, .sp=0x60, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x54db, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x54dc, .a=0xc8, .x=0xa3, .y=0x5c, .sp=0x60, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x54db, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x54db, .value=0x1c, .type=IO_READ},
        {.addr=0x54dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00C7) {
    const struct CPU_State initial_cpu = {.pc=0x41bb, .a=0x75, .x=0x5e, .y=0xdb, .sp=0x7f, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x41bb, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x41bc, .a=0xea, .x=0x5e, .y=0xdb, .sp=0x7f, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x41bb, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x41bb, .value=0x1c, .type=IO_READ},
        {.addr=0x41bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00C8) {
    const struct CPU_State initial_cpu = {.pc=0xcab3, .a=0x93, .x=0x93, .y=0xaf, .sp=0x58, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xcab3, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xcab4, .a=0x26, .x=0x93, .y=0xaf, .sp=0x58, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xcab3, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xcab3, .value=0x1c, .type=IO_READ},
        {.addr=0xcab4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00C9) {
    const struct CPU_State initial_cpu = {.pc=0x17f5, .a=0x38, .x=0x53, .y=0x0d, .sp=0xe0, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x17f5, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x17f6, .a=0x70, .x=0x53, .y=0x0d, .sp=0xe0, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x17f5, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x17f5, .value=0x1c, .type=IO_READ},
        {.addr=0x17f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00CA) {
    const struct CPU_State initial_cpu = {.pc=0x8981, .a=0x01, .x=0x66, .y=0x6d, .sp=0x74, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x8981, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x8982, .a=0x02, .x=0x66, .y=0x6d, .sp=0x74, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x8981, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x8981, .value=0x1c, .type=IO_READ},
        {.addr=0x8982, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x01de, .a=0xe5, .x=0x21, .y=0x5d, .sp=0x57, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x01de, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x01df, .a=0xca, .x=0x21, .y=0x5d, .sp=0x57, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x01de, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x01de, .value=0x1c, .type=IO_READ},
        {.addr=0x01df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00CC) {
    const struct CPU_State initial_cpu = {.pc=0xc53a, .a=0x4c, .x=0xe2, .y=0x0e, .sp=0x46, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xc53a, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xc53b, .a=0x98, .x=0xe2, .y=0x0e, .sp=0x46, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xc53a, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xc53a, .value=0x1c, .type=IO_READ},
        {.addr=0xc53b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00CD) {
    const struct CPU_State initial_cpu = {.pc=0x5624, .a=0x5d, .x=0xa2, .y=0x8e, .sp=0x69, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x5624, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x5625, .a=0xba, .x=0xa2, .y=0x8e, .sp=0x69, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x5624, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x5624, .value=0x1c, .type=IO_READ},
        {.addr=0x5625, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x640f, .a=0xc7, .x=0x74, .y=0xa5, .sp=0x00, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x640f, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x6410, .a=0x8e, .x=0x74, .y=0xa5, .sp=0x00, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x640f, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x640f, .value=0x1c, .type=IO_READ},
        {.addr=0x6410, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00CF) {
    const struct CPU_State initial_cpu = {.pc=0x4f9b, .a=0x15, .x=0x18, .y=0x83, .sp=0x15, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x4f9b, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x4f9c, .a=0x2a, .x=0x18, .y=0x83, .sp=0x15, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x4f9b, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x4f9b, .value=0x1c, .type=IO_READ},
        {.addr=0x4f9c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00D0) {
    const struct CPU_State initial_cpu = {.pc=0xb194, .a=0xe4, .x=0x88, .y=0xfc, .sp=0x9e, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xb194, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xb195, .a=0xc8, .x=0x88, .y=0xfc, .sp=0x9e, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xb194, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xb194, .value=0x1c, .type=IO_READ},
        {.addr=0xb195, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00D1) {
    const struct CPU_State initial_cpu = {.pc=0xe5d4, .a=0x52, .x=0x9a, .y=0x8b, .sp=0x7a, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xe5d4, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xe5d5, .a=0xa4, .x=0x9a, .y=0x8b, .sp=0x7a, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xe5d4, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xe5d4, .value=0x1c, .type=IO_READ},
        {.addr=0xe5d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00D2) {
    const struct CPU_State initial_cpu = {.pc=0x16a5, .a=0xd4, .x=0x5e, .y=0xa8, .sp=0x85, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x16a5, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x16a6, .a=0xa8, .x=0x5e, .y=0xa8, .sp=0x85, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x16a5, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x16a5, .value=0x1c, .type=IO_READ},
        {.addr=0x16a6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00D3) {
    const struct CPU_State initial_cpu = {.pc=0xe203, .a=0x44, .x=0x79, .y=0x6a, .sp=0xb9, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xe203, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xe204, .a=0x88, .x=0x79, .y=0x6a, .sp=0xb9, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xe203, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xe203, .value=0x1c, .type=IO_READ},
        {.addr=0xe204, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00D4) {
    const struct CPU_State initial_cpu = {.pc=0x1a17, .a=0x40, .x=0x19, .y=0x7a, .sp=0x29, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x1a17, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x1a18, .a=0x80, .x=0x19, .y=0x7a, .sp=0x29, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x1a17, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x1a17, .value=0x1c, .type=IO_READ},
        {.addr=0x1a18, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00D5) {
    const struct CPU_State initial_cpu = {.pc=0x3fa5, .a=0x13, .x=0x46, .y=0x36, .sp=0x73, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x3fa5, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x3fa6, .a=0x26, .x=0x46, .y=0x36, .sp=0x73, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x3fa5, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x3fa5, .value=0x1c, .type=IO_READ},
        {.addr=0x3fa6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00D6) {
    const struct CPU_State initial_cpu = {.pc=0x2bd6, .a=0x5e, .x=0x67, .y=0x7b, .sp=0xea, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x2bd6, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x2bd7, .a=0xbc, .x=0x67, .y=0x7b, .sp=0xea, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x2bd6, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x2bd6, .value=0x1c, .type=IO_READ},
        {.addr=0x2bd7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00D7) {
    const struct CPU_State initial_cpu = {.pc=0x056f, .a=0x39, .x=0x5e, .y=0xb0, .sp=0x39, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x056f, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x0570, .a=0x72, .x=0x5e, .y=0xb0, .sp=0x39, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x056f, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x056f, .value=0x1c, .type=IO_READ},
        {.addr=0x0570, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00D8) {
    const struct CPU_State initial_cpu = {.pc=0xa9c4, .a=0x14, .x=0x81, .y=0xe9, .sp=0xef, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xa9c4, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xa9c5, .a=0x28, .x=0x81, .y=0xe9, .sp=0xef, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xa9c4, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xa9c4, .value=0x1c, .type=IO_READ},
        {.addr=0xa9c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00D9) {
    const struct CPU_State initial_cpu = {.pc=0x8fb9, .a=0xf5, .x=0x11, .y=0x1c, .sp=0xb4, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x8fb9, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x8fba, .a=0xea, .x=0x11, .y=0x1c, .sp=0xb4, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x8fb9, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x8fb9, .value=0x1c, .type=IO_READ},
        {.addr=0x8fba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00DA) {
    const struct CPU_State initial_cpu = {.pc=0x8932, .a=0x82, .x=0x0e, .y=0xba, .sp=0xcf, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x8932, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x8933, .a=0x04, .x=0x0e, .y=0xba, .sp=0xcf, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x8932, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x8932, .value=0x1c, .type=IO_READ},
        {.addr=0x8933, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x79d8, .a=0x18, .x=0x39, .y=0x89, .sp=0x6e, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x79d8, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x79d9, .a=0x30, .x=0x39, .y=0x89, .sp=0x6e, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x79d8, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x79d8, .value=0x1c, .type=IO_READ},
        {.addr=0x79d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00DC) {
    const struct CPU_State initial_cpu = {.pc=0x4535, .a=0xae, .x=0xf3, .y=0xab, .sp=0x36, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x4535, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x4536, .a=0x5c, .x=0xf3, .y=0xab, .sp=0x36, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x4535, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x4535, .value=0x1c, .type=IO_READ},
        {.addr=0x4536, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x4f04, .a=0x1c, .x=0xaf, .y=0x2a, .sp=0x30, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x4f04, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x4f05, .a=0x38, .x=0xaf, .y=0x2a, .sp=0x30, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x4f04, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x4f04, .value=0x1c, .type=IO_READ},
        {.addr=0x4f05, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00DE) {
    const struct CPU_State initial_cpu = {.pc=0xd128, .a=0x78, .x=0x81, .y=0x33, .sp=0x4c, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xd128, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd129, .a=0xf0, .x=0x81, .y=0x33, .sp=0x4c, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xd128, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd128, .value=0x1c, .type=IO_READ},
        {.addr=0xd129, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00DF) {
    const struct CPU_State initial_cpu = {.pc=0x56d9, .a=0x2e, .x=0x73, .y=0x2c, .sp=0x56, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x56d9, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x56da, .a=0x5c, .x=0x73, .y=0x2c, .sp=0x56, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x56d9, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x56d9, .value=0x1c, .type=IO_READ},
        {.addr=0x56da, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x1d1c, .a=0xeb, .x=0x72, .y=0x34, .sp=0x13, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x1d1c, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x1d1d, .a=0xd6, .x=0x72, .y=0x34, .sp=0x13, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x1d1c, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x1d1c, .value=0x1c, .type=IO_READ},
        {.addr=0x1d1d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00E1) {
    const struct CPU_State initial_cpu = {.pc=0xdcc7, .a=0x0d, .x=0x93, .y=0x99, .sp=0x27, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xdcc7, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xdcc8, .a=0x1a, .x=0x93, .y=0x99, .sp=0x27, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xdcc7, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xdcc7, .value=0x1c, .type=IO_READ},
        {.addr=0xdcc8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x2755, .a=0x50, .x=0x34, .y=0x2a, .sp=0x2d, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x2755, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x2756, .a=0xa0, .x=0x34, .y=0x2a, .sp=0x2d, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x2755, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x2755, .value=0x1c, .type=IO_READ},
        {.addr=0x2756, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00E3) {
    const struct CPU_State initial_cpu = {.pc=0xc10d, .a=0xe2, .x=0x05, .y=0x28, .sp=0xab, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xc10d, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xc10e, .a=0xc4, .x=0x05, .y=0x28, .sp=0xab, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xc10d, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xc10d, .value=0x1c, .type=IO_READ},
        {.addr=0xc10e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00E4) {
    const struct CPU_State initial_cpu = {.pc=0xd8d0, .a=0x18, .x=0xac, .y=0x4c, .sp=0xed, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xd8d0, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd8d1, .a=0x30, .x=0xac, .y=0x4c, .sp=0xed, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xd8d0, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd8d0, .value=0x1c, .type=IO_READ},
        {.addr=0xd8d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00E5) {
    const struct CPU_State initial_cpu = {.pc=0x415a, .a=0x22, .x=0xe7, .y=0x32, .sp=0x2d, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x415a, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x415b, .a=0x44, .x=0xe7, .y=0x32, .sp=0x2d, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x415a, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x415a, .value=0x1c, .type=IO_READ},
        {.addr=0x415b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00E6) {
    const struct CPU_State initial_cpu = {.pc=0x2443, .a=0x2c, .x=0xb5, .y=0x1e, .sp=0x3d, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x2443, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x2444, .a=0x58, .x=0xb5, .y=0x1e, .sp=0x3d, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x2443, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x2443, .value=0x1c, .type=IO_READ},
        {.addr=0x2444, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00E7) {
    const struct CPU_State initial_cpu = {.pc=0x5e3c, .a=0x2e, .x=0x4c, .y=0x32, .sp=0x74, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x5e3c, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x5e3d, .a=0x5c, .x=0x4c, .y=0x32, .sp=0x74, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x5e3c, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x5e3c, .value=0x1c, .type=IO_READ},
        {.addr=0x5e3d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00E8) {
    const struct CPU_State initial_cpu = {.pc=0x5472, .a=0x27, .x=0xff, .y=0x3a, .sp=0x4c, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x5472, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x5473, .a=0x4e, .x=0xff, .y=0x3a, .sp=0x4c, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x5472, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x5472, .value=0x1c, .type=IO_READ},
        {.addr=0x5473, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00E9) {
    const struct CPU_State initial_cpu = {.pc=0xcd33, .a=0xd2, .x=0xa5, .y=0x24, .sp=0x27, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xcd33, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xcd34, .a=0xa4, .x=0xa5, .y=0x24, .sp=0x27, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xcd33, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xcd33, .value=0x1c, .type=IO_READ},
        {.addr=0xcd34, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x1495, .a=0xee, .x=0xaa, .y=0xb9, .sp=0x67, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x1495, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x1496, .a=0xdc, .x=0xaa, .y=0xb9, .sp=0x67, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x1495, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x1495, .value=0x1c, .type=IO_READ},
        {.addr=0x1496, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00EB) {
    const struct CPU_State initial_cpu = {.pc=0xf521, .a=0xd0, .x=0x8f, .y=0xf9, .sp=0x9a, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xf521, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xf522, .a=0xa0, .x=0x8f, .y=0xf9, .sp=0x9a, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xf521, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xf521, .value=0x1c, .type=IO_READ},
        {.addr=0xf522, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00EC) {
    const struct CPU_State initial_cpu = {.pc=0x12e8, .a=0x8e, .x=0xba, .y=0x72, .sp=0xd5, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x12e8, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x12e9, .a=0x1c, .x=0xba, .y=0x72, .sp=0xd5, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x12e8, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x12e8, .value=0x1c, .type=IO_READ},
        {.addr=0x12e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00ED) {
    const struct CPU_State initial_cpu = {.pc=0x4bf4, .a=0xcb, .x=0x3b, .y=0x29, .sp=0xdf, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x4bf4, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x4bf5, .a=0x96, .x=0x3b, .y=0x29, .sp=0xdf, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x4bf4, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x4bf4, .value=0x1c, .type=IO_READ},
        {.addr=0x4bf5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00EE) {
    const struct CPU_State initial_cpu = {.pc=0x5469, .a=0x31, .x=0x61, .y=0x81, .sp=0x06, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x5469, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x546a, .a=0x62, .x=0x61, .y=0x81, .sp=0x06, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x5469, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x5469, .value=0x1c, .type=IO_READ},
        {.addr=0x546a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00EF) {
    const struct CPU_State initial_cpu = {.pc=0xaa88, .a=0x1b, .x=0x0e, .y=0x5c, .sp=0x56, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xaa88, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xaa89, .a=0x36, .x=0x0e, .y=0x5c, .sp=0x56, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xaa88, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xaa88, .value=0x1c, .type=IO_READ},
        {.addr=0xaa89, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x639e, .a=0xdf, .x=0xb1, .y=0x0a, .sp=0x6c, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x639e, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x639f, .a=0xbe, .x=0xb1, .y=0x0a, .sp=0x6c, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x639e, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x639e, .value=0x1c, .type=IO_READ},
        {.addr=0x639f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00F1) {
    const struct CPU_State initial_cpu = {.pc=0x2f79, .a=0x46, .x=0x80, .y=0xf7, .sp=0x9a, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x2f79, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x2f7a, .a=0x8c, .x=0x80, .y=0xf7, .sp=0x9a, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x2f79, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x2f79, .value=0x1c, .type=IO_READ},
        {.addr=0x2f7a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00F2) {
    const struct CPU_State initial_cpu = {.pc=0x3a0a, .a=0x99, .x=0x5d, .y=0x4a, .sp=0x4b, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x3a0a, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x3a0b, .a=0x32, .x=0x5d, .y=0x4a, .sp=0x4b, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x3a0a, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x3a0a, .value=0x1c, .type=IO_READ},
        {.addr=0x3a0b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00F3) {
    const struct CPU_State initial_cpu = {.pc=0xaae9, .a=0x37, .x=0xfa, .y=0x6f, .sp=0x43, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xaae9, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xaaea, .a=0x6e, .x=0xfa, .y=0x6f, .sp=0x43, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xaae9, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xaae9, .value=0x1c, .type=IO_READ},
        {.addr=0xaaea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00F4) {
    const struct CPU_State initial_cpu = {.pc=0xbc0a, .a=0x4d, .x=0x21, .y=0xc1, .sp=0xa5, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xbc0a, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xbc0b, .a=0x9a, .x=0x21, .y=0xc1, .sp=0xa5, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xbc0a, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xbc0a, .value=0x1c, .type=IO_READ},
        {.addr=0xbc0b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00F5) {
    const struct CPU_State initial_cpu = {.pc=0x6a0a, .a=0x0d, .x=0xcd, .y=0x77, .sp=0x16, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x6a0a, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x6a0b, .a=0x1a, .x=0xcd, .y=0x77, .sp=0x16, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x6a0a, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x6a0a, .value=0x1c, .type=IO_READ},
        {.addr=0x6a0b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00F6) {
    const struct CPU_State initial_cpu = {.pc=0x2e4b, .a=0x82, .x=0x93, .y=0xfd, .sp=0xbc, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x2e4b, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x2e4c, .a=0x04, .x=0x93, .y=0xfd, .sp=0xbc, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x2e4b, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x2e4b, .value=0x1c, .type=IO_READ},
        {.addr=0x2e4c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00F7) {
    const struct CPU_State initial_cpu = {.pc=0xfa71, .a=0xc2, .x=0xd0, .y=0x1e, .sp=0x2e, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xfa71, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xfa72, .a=0x84, .x=0xd0, .y=0x1e, .sp=0x2e, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xfa71, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xfa71, .value=0x1c, .type=IO_READ},
        {.addr=0xfa72, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00F8) {
    const struct CPU_State initial_cpu = {.pc=0xbef2, .a=0xd3, .x=0xbb, .y=0x42, .sp=0x65, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xbef2, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xbef3, .a=0xa6, .x=0xbb, .y=0x42, .sp=0x65, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xbef2, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xbef2, .value=0x1c, .type=IO_READ},
        {.addr=0xbef3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00F9) {
    const struct CPU_State initial_cpu = {.pc=0xb8ab, .a=0x40, .x=0x50, .y=0xd8, .sp=0x75, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xb8ab, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xb8ac, .a=0x80, .x=0x50, .y=0xd8, .sp=0x75, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xb8ab, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xb8ab, .value=0x1c, .type=IO_READ},
        {.addr=0xb8ac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00FA) {
    const struct CPU_State initial_cpu = {.pc=0x2079, .a=0x95, .x=0xbb, .y=0x29, .sp=0xad, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x2079, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x207a, .a=0x2a, .x=0xbb, .y=0x29, .sp=0xad, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x2079, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x2079, .value=0x1c, .type=IO_READ},
        {.addr=0x207a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00FB) {
    const struct CPU_State initial_cpu = {.pc=0x3d1e, .a=0x10, .x=0x14, .y=0x76, .sp=0x3c, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x3d1e, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x3d1f, .a=0x20, .x=0x14, .y=0x76, .sp=0x3c, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x3d1e, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x3d1e, .value=0x1c, .type=IO_READ},
        {.addr=0x3d1f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00FC) {
    const struct CPU_State initial_cpu = {.pc=0xc74f, .a=0xba, .x=0xda, .y=0x4e, .sp=0x29, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xc74f, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xc750, .a=0x74, .x=0xda, .y=0x4e, .sp=0x29, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xc74f, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xc74f, .value=0x1c, .type=IO_READ},
        {.addr=0xc750, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00FD) {
    const struct CPU_State initial_cpu = {.pc=0xc9f3, .a=0xd4, .x=0xfb, .y=0x5c, .sp=0xa6, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xc9f3, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xc9f4, .a=0xa8, .x=0xfb, .y=0x5c, .sp=0xa6, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xc9f3, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xc9f3, .value=0x1c, .type=IO_READ},
        {.addr=0xc9f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00FE) {
    const struct CPU_State initial_cpu = {.pc=0x64a7, .a=0x81, .x=0x6c, .y=0xcd, .sp=0x81, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x64a7, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x64a8, .a=0x02, .x=0x6c, .y=0xcd, .sp=0x81, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x64a7, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x64a7, .value=0x1c, .type=IO_READ},
        {.addr=0x64a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_00FF) {
    const struct CPU_State initial_cpu = {.pc=0x2f8e, .a=0x63, .x=0x17, .y=0xb4, .sp=0x9c, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x2f8e, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x2f8f, .a=0xc6, .x=0x17, .y=0xb4, .sp=0x9c, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x2f8e, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x2f8e, .value=0x1c, .type=IO_READ},
        {.addr=0x2f8f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0100) {
    const struct CPU_State initial_cpu = {.pc=0x0fb1, .a=0x25, .x=0x33, .y=0x3b, .sp=0xaa, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x0fb1, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x0fb2, .a=0x4a, .x=0x33, .y=0x3b, .sp=0xaa, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0fb1, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x0fb1, .value=0x1c, .type=IO_READ},
        {.addr=0x0fb2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0101) {
    const struct CPU_State initial_cpu = {.pc=0xd1dc, .a=0xb3, .x=0xa4, .y=0x96, .sp=0x63, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xd1dc, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd1dd, .a=0x66, .x=0xa4, .y=0x96, .sp=0x63, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xd1dc, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd1dc, .value=0x1c, .type=IO_READ},
        {.addr=0xd1dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0102) {
    const struct CPU_State initial_cpu = {.pc=0xf747, .a=0xce, .x=0x95, .y=0xcd, .sp=0x67, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xf747, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xf748, .a=0x9c, .x=0x95, .y=0xcd, .sp=0x67, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xf747, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xf747, .value=0x1c, .type=IO_READ},
        {.addr=0xf748, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0103) {
    const struct CPU_State initial_cpu = {.pc=0x56a2, .a=0x3c, .x=0xe1, .y=0xf3, .sp=0xac, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x56a2, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x56a3, .a=0x78, .x=0xe1, .y=0xf3, .sp=0xac, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x56a2, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x56a2, .value=0x1c, .type=IO_READ},
        {.addr=0x56a3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0104) {
    const struct CPU_State initial_cpu = {.pc=0x830a, .a=0x30, .x=0x5d, .y=0x49, .sp=0x1f, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x830a, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x830b, .a=0x60, .x=0x5d, .y=0x49, .sp=0x1f, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x830a, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x830a, .value=0x1c, .type=IO_READ},
        {.addr=0x830b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0105) {
    const struct CPU_State initial_cpu = {.pc=0x7291, .a=0x4b, .x=0x76, .y=0xf3, .sp=0xc0, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x7291, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x7292, .a=0x96, .x=0x76, .y=0xf3, .sp=0xc0, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x7291, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x7291, .value=0x1c, .type=IO_READ},
        {.addr=0x7292, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0106) {
    const struct CPU_State initial_cpu = {.pc=0xb6d4, .a=0xdb, .x=0x5e, .y=0x5a, .sp=0x77, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xb6d4, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xb6d5, .a=0xb6, .x=0x5e, .y=0x5a, .sp=0x77, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xb6d4, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xb6d4, .value=0x1c, .type=IO_READ},
        {.addr=0xb6d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0107) {
    const struct CPU_State initial_cpu = {.pc=0x8bc2, .a=0x1c, .x=0x42, .y=0xf7, .sp=0x9a, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x8bc2, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x8bc3, .a=0x38, .x=0x42, .y=0xf7, .sp=0x9a, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x8bc2, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x8bc2, .value=0x1c, .type=IO_READ},
        {.addr=0x8bc3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0108) {
    const struct CPU_State initial_cpu = {.pc=0x2b5a, .a=0x2c, .x=0x3b, .y=0xbb, .sp=0x04, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x2b5a, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x2b5b, .a=0x58, .x=0x3b, .y=0xbb, .sp=0x04, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x2b5a, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x2b5a, .value=0x1c, .type=IO_READ},
        {.addr=0x2b5b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0109) {
    const struct CPU_State initial_cpu = {.pc=0x5f9d, .a=0xf0, .x=0x0d, .y=0x34, .sp=0x97, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x5f9d, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x5f9e, .a=0xe0, .x=0x0d, .y=0x34, .sp=0x97, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x5f9d, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x5f9d, .value=0x1c, .type=IO_READ},
        {.addr=0x5f9e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_010A) {
    const struct CPU_State initial_cpu = {.pc=0x7f04, .a=0xff, .x=0xa8, .y=0xb3, .sp=0x24, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x7f04, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x7f05, .a=0xfe, .x=0xa8, .y=0xb3, .sp=0x24, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x7f04, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x7f04, .value=0x1c, .type=IO_READ},
        {.addr=0x7f05, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_010B) {
    const struct CPU_State initial_cpu = {.pc=0x1a34, .a=0xeb, .x=0xaf, .y=0x50, .sp=0xe8, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x1a34, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x1a35, .a=0xd6, .x=0xaf, .y=0x50, .sp=0xe8, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x1a34, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x1a34, .value=0x1c, .type=IO_READ},
        {.addr=0x1a35, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_010C) {
    const struct CPU_State initial_cpu = {.pc=0x03d1, .a=0xcb, .x=0x8a, .y=0x76, .sp=0x4e, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x03d1, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x03d2, .a=0x96, .x=0x8a, .y=0x76, .sp=0x4e, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x03d1, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x03d1, .value=0x1c, .type=IO_READ},
        {.addr=0x03d2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_010D) {
    const struct CPU_State initial_cpu = {.pc=0x5cf0, .a=0x57, .x=0x13, .y=0x5c, .sp=0x86, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x5cf0, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x5cf1, .a=0xae, .x=0x13, .y=0x5c, .sp=0x86, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x5cf0, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x5cf0, .value=0x1c, .type=IO_READ},
        {.addr=0x5cf1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_010E) {
    const struct CPU_State initial_cpu = {.pc=0x9fe4, .a=0x71, .x=0xe4, .y=0x15, .sp=0x9a, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x9fe4, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x9fe5, .a=0xe2, .x=0xe4, .y=0x15, .sp=0x9a, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x9fe4, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x9fe4, .value=0x1c, .type=IO_READ},
        {.addr=0x9fe5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_010F) {
    const struct CPU_State initial_cpu = {.pc=0x293a, .a=0x54, .x=0xb5, .y=0xbd, .sp=0x9a, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x293a, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x293b, .a=0xa8, .x=0xb5, .y=0xbd, .sp=0x9a, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x293a, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x293a, .value=0x1c, .type=IO_READ},
        {.addr=0x293b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0110) {
    const struct CPU_State initial_cpu = {.pc=0xca1a, .a=0x3d, .x=0x14, .y=0x09, .sp=0x58, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xca1a, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xca1b, .a=0x7a, .x=0x14, .y=0x09, .sp=0x58, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xca1a, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xca1a, .value=0x1c, .type=IO_READ},
        {.addr=0xca1b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0111) {
    const struct CPU_State initial_cpu = {.pc=0xbecb, .a=0x0b, .x=0x35, .y=0xb5, .sp=0x16, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xbecb, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xbecc, .a=0x16, .x=0x35, .y=0xb5, .sp=0x16, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xbecb, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xbecb, .value=0x1c, .type=IO_READ},
        {.addr=0xbecc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0112) {
    const struct CPU_State initial_cpu = {.pc=0x5c18, .a=0xee, .x=0x81, .y=0xa7, .sp=0x72, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x5c18, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x5c19, .a=0xdc, .x=0x81, .y=0xa7, .sp=0x72, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x5c18, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x5c18, .value=0x1c, .type=IO_READ},
        {.addr=0x5c19, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0113) {
    const struct CPU_State initial_cpu = {.pc=0x01a8, .a=0x02, .x=0x06, .y=0x80, .sp=0x20, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x01a9, .a=0x04, .x=0x06, .y=0x80, .sp=0x20, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x01a8, .value=0x1c, .type=IO_READ},
        {.addr=0x01a9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0114) {
    const struct CPU_State initial_cpu = {.pc=0xf51d, .a=0xc7, .x=0xcf, .y=0xbf, .sp=0x4b, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xf51d, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xf51e, .a=0x8e, .x=0xcf, .y=0xbf, .sp=0x4b, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xf51d, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xf51d, .value=0x1c, .type=IO_READ},
        {.addr=0xf51e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0115) {
    const struct CPU_State initial_cpu = {.pc=0xd841, .a=0xfa, .x=0x2d, .y=0x62, .sp=0xcc, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xd841, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd842, .a=0xf4, .x=0x2d, .y=0x62, .sp=0xcc, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xd841, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd841, .value=0x1c, .type=IO_READ},
        {.addr=0xd842, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0116) {
    const struct CPU_State initial_cpu = {.pc=0x4053, .a=0x9d, .x=0xf7, .y=0x31, .sp=0x4e, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x4053, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x4054, .a=0x3a, .x=0xf7, .y=0x31, .sp=0x4e, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x4053, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x4053, .value=0x1c, .type=IO_READ},
        {.addr=0x4054, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0117) {
    const struct CPU_State initial_cpu = {.pc=0x9dd2, .a=0xa7, .x=0x25, .y=0x3e, .sp=0x6a, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x9dd2, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x9dd3, .a=0x4e, .x=0x25, .y=0x3e, .sp=0x6a, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x9dd2, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x9dd2, .value=0x1c, .type=IO_READ},
        {.addr=0x9dd3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0118) {
    const struct CPU_State initial_cpu = {.pc=0xe0a3, .a=0xf0, .x=0x86, .y=0x08, .sp=0xbc, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xe0a3, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xe0a4, .a=0xe0, .x=0x86, .y=0x08, .sp=0xbc, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xe0a3, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xe0a3, .value=0x1c, .type=IO_READ},
        {.addr=0xe0a4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0119) {
    const struct CPU_State initial_cpu = {.pc=0x2754, .a=0x8a, .x=0x0e, .y=0x01, .sp=0x3d, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x2754, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x2755, .a=0x14, .x=0x0e, .y=0x01, .sp=0x3d, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x2754, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x2754, .value=0x1c, .type=IO_READ},
        {.addr=0x2755, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_011A) {
    const struct CPU_State initial_cpu = {.pc=0x8ebc, .a=0x7e, .x=0x2b, .y=0x47, .sp=0x29, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x8ebc, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x8ebd, .a=0xfc, .x=0x2b, .y=0x47, .sp=0x29, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x8ebc, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x8ebc, .value=0x1c, .type=IO_READ},
        {.addr=0x8ebd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_011B) {
    const struct CPU_State initial_cpu = {.pc=0x7974, .a=0x5c, .x=0xf0, .y=0x18, .sp=0xe2, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x7974, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x7975, .a=0xb8, .x=0xf0, .y=0x18, .sp=0xe2, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x7974, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x7974, .value=0x1c, .type=IO_READ},
        {.addr=0x7975, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_011C) {
    const struct CPU_State initial_cpu = {.pc=0x9d3c, .a=0x3e, .x=0xee, .y=0xd8, .sp=0x94, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x9d3c, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x9d3d, .a=0x7c, .x=0xee, .y=0xd8, .sp=0x94, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x9d3c, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x9d3c, .value=0x1c, .type=IO_READ},
        {.addr=0x9d3d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_011D) {
    const struct CPU_State initial_cpu = {.pc=0x131a, .a=0xd1, .x=0x87, .y=0x00, .sp=0x43, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x131a, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x131b, .a=0xa2, .x=0x87, .y=0x00, .sp=0x43, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x131a, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x131a, .value=0x1c, .type=IO_READ},
        {.addr=0x131b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_011E) {
    const struct CPU_State initial_cpu = {.pc=0xd6e4, .a=0x90, .x=0x4b, .y=0xdc, .sp=0x91, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xd6e4, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd6e5, .a=0x20, .x=0x4b, .y=0xdc, .sp=0x91, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xd6e4, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd6e4, .value=0x1c, .type=IO_READ},
        {.addr=0xd6e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_011F) {
    const struct CPU_State initial_cpu = {.pc=0x9ef5, .a=0x08, .x=0x72, .y=0xf9, .sp=0xe7, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x9ef5, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x9ef6, .a=0x10, .x=0x72, .y=0xf9, .sp=0xe7, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x9ef5, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x9ef5, .value=0x1c, .type=IO_READ},
        {.addr=0x9ef6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0120) {
    const struct CPU_State initial_cpu = {.pc=0x02ad, .a=0xb2, .x=0xca, .y=0x27, .sp=0x63, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x02ad, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x02ae, .a=0x64, .x=0xca, .y=0x27, .sp=0x63, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x02ad, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x02ad, .value=0x1c, .type=IO_READ},
        {.addr=0x02ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0121) {
    const struct CPU_State initial_cpu = {.pc=0xa9bc, .a=0x90, .x=0x01, .y=0xd3, .sp=0xae, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xa9bc, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xa9bd, .a=0x20, .x=0x01, .y=0xd3, .sp=0xae, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xa9bc, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xa9bc, .value=0x1c, .type=IO_READ},
        {.addr=0xa9bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0122) {
    const struct CPU_State initial_cpu = {.pc=0x7663, .a=0x1c, .x=0xd5, .y=0x83, .sp=0x59, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x7663, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x7664, .a=0x38, .x=0xd5, .y=0x83, .sp=0x59, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x7663, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x7663, .value=0x1c, .type=IO_READ},
        {.addr=0x7664, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0123) {
    const struct CPU_State initial_cpu = {.pc=0x851d, .a=0x2f, .x=0x4e, .y=0x76, .sp=0x8d, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x851d, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x851e, .a=0x5e, .x=0x4e, .y=0x76, .sp=0x8d, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x851d, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x851d, .value=0x1c, .type=IO_READ},
        {.addr=0x851e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0124) {
    const struct CPU_State initial_cpu = {.pc=0x9a9c, .a=0x71, .x=0x0b, .y=0x6a, .sp=0x33, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x9a9c, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x9a9d, .a=0xe2, .x=0x0b, .y=0x6a, .sp=0x33, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x9a9c, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x9a9c, .value=0x1c, .type=IO_READ},
        {.addr=0x9a9d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0125) {
    const struct CPU_State initial_cpu = {.pc=0x370f, .a=0x45, .x=0x92, .y=0x0d, .sp=0x28, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x370f, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x3710, .a=0x8a, .x=0x92, .y=0x0d, .sp=0x28, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x370f, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x370f, .value=0x1c, .type=IO_READ},
        {.addr=0x3710, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0126) {
    const struct CPU_State initial_cpu = {.pc=0xe5a7, .a=0x4e, .x=0xc8, .y=0xdd, .sp=0x46, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xe5a7, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xe5a8, .a=0x9c, .x=0xc8, .y=0xdd, .sp=0x46, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xe5a7, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xe5a7, .value=0x1c, .type=IO_READ},
        {.addr=0xe5a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0127) {
    const struct CPU_State initial_cpu = {.pc=0x9fb1, .a=0x85, .x=0x3e, .y=0x1f, .sp=0xf5, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x9fb1, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x9fb2, .a=0x0a, .x=0x3e, .y=0x1f, .sp=0xf5, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x9fb1, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x9fb1, .value=0x1c, .type=IO_READ},
        {.addr=0x9fb2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0128) {
    const struct CPU_State initial_cpu = {.pc=0xec02, .a=0xe0, .x=0x70, .y=0x57, .sp=0x5e, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xec02, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xec03, .a=0xc0, .x=0x70, .y=0x57, .sp=0x5e, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xec02, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xec02, .value=0x1c, .type=IO_READ},
        {.addr=0xec03, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0129) {
    const struct CPU_State initial_cpu = {.pc=0x8a5d, .a=0xc1, .x=0x0e, .y=0x5c, .sp=0xaa, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x8a5d, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x8a5e, .a=0x82, .x=0x0e, .y=0x5c, .sp=0xaa, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x8a5d, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x8a5d, .value=0x1c, .type=IO_READ},
        {.addr=0x8a5e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_012A) {
    const struct CPU_State initial_cpu = {.pc=0x8d3b, .a=0x2d, .x=0x07, .y=0x9c, .sp=0x02, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x8d3b, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x8d3c, .a=0x5a, .x=0x07, .y=0x9c, .sp=0x02, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x8d3b, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x8d3b, .value=0x1c, .type=IO_READ},
        {.addr=0x8d3c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_012B) {
    const struct CPU_State initial_cpu = {.pc=0x2b7f, .a=0x59, .x=0x04, .y=0xa9, .sp=0x00, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x2b7f, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x2b80, .a=0xb2, .x=0x04, .y=0xa9, .sp=0x00, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x2b7f, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x2b7f, .value=0x1c, .type=IO_READ},
        {.addr=0x2b80, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_012C) {
    const struct CPU_State initial_cpu = {.pc=0x67f9, .a=0xae, .x=0x0b, .y=0xce, .sp=0xc7, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x67f9, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x67fa, .a=0x5c, .x=0x0b, .y=0xce, .sp=0xc7, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x67f9, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x67f9, .value=0x1c, .type=IO_READ},
        {.addr=0x67fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_012D) {
    const struct CPU_State initial_cpu = {.pc=0x5197, .a=0x4d, .x=0x97, .y=0xe8, .sp=0xa7, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x5197, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x5198, .a=0x9a, .x=0x97, .y=0xe8, .sp=0xa7, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x5197, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x5197, .value=0x1c, .type=IO_READ},
        {.addr=0x5198, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_012E) {
    const struct CPU_State initial_cpu = {.pc=0xaa4a, .a=0x1a, .x=0x91, .y=0xf4, .sp=0x93, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xaa4a, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xaa4b, .a=0x34, .x=0x91, .y=0xf4, .sp=0x93, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xaa4a, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xaa4a, .value=0x1c, .type=IO_READ},
        {.addr=0xaa4b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_012F) {
    const struct CPU_State initial_cpu = {.pc=0xf126, .a=0x91, .x=0x25, .y=0xb4, .sp=0xa3, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xf126, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xf127, .a=0x22, .x=0x25, .y=0xb4, .sp=0xa3, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xf126, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xf126, .value=0x1c, .type=IO_READ},
        {.addr=0xf127, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0130) {
    const struct CPU_State initial_cpu = {.pc=0x0325, .a=0xe8, .x=0xef, .y=0x8d, .sp=0x40, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x0325, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x0326, .a=0xd0, .x=0xef, .y=0x8d, .sp=0x40, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0325, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x0325, .value=0x1c, .type=IO_READ},
        {.addr=0x0326, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0131) {
    const struct CPU_State initial_cpu = {.pc=0x74f3, .a=0x07, .x=0x22, .y=0x58, .sp=0x02, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x74f3, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x74f4, .a=0x0e, .x=0x22, .y=0x58, .sp=0x02, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x74f3, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x74f3, .value=0x1c, .type=IO_READ},
        {.addr=0x74f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0132) {
    const struct CPU_State initial_cpu = {.pc=0xe7b2, .a=0xc0, .x=0x39, .y=0xea, .sp=0xda, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xe7b2, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xe7b3, .a=0x80, .x=0x39, .y=0xea, .sp=0xda, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xe7b2, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xe7b2, .value=0x1c, .type=IO_READ},
        {.addr=0xe7b3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0133) {
    const struct CPU_State initial_cpu = {.pc=0x6d2e, .a=0xd6, .x=0x66, .y=0x02, .sp=0x9f, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x6d2e, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x6d2f, .a=0xac, .x=0x66, .y=0x02, .sp=0x9f, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x6d2e, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x6d2e, .value=0x1c, .type=IO_READ},
        {.addr=0x6d2f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0134) {
    const struct CPU_State initial_cpu = {.pc=0x29d7, .a=0xd0, .x=0xc5, .y=0x47, .sp=0xe4, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x29d7, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x29d8, .a=0xa0, .x=0xc5, .y=0x47, .sp=0xe4, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x29d7, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x29d7, .value=0x1c, .type=IO_READ},
        {.addr=0x29d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0135) {
    const struct CPU_State initial_cpu = {.pc=0x2185, .a=0x5c, .x=0x82, .y=0x19, .sp=0xfa, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x2185, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x2186, .a=0xb8, .x=0x82, .y=0x19, .sp=0xfa, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x2185, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x2185, .value=0x1c, .type=IO_READ},
        {.addr=0x2186, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0136) {
    const struct CPU_State initial_cpu = {.pc=0x6902, .a=0x68, .x=0x1b, .y=0xef, .sp=0xf0, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x6902, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x6903, .a=0xd0, .x=0x1b, .y=0xef, .sp=0xf0, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x6902, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x6902, .value=0x1c, .type=IO_READ},
        {.addr=0x6903, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0137) {
    const struct CPU_State initial_cpu = {.pc=0xbc73, .a=0x6f, .x=0x65, .y=0xfb, .sp=0x2a, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xbc73, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xbc74, .a=0xde, .x=0x65, .y=0xfb, .sp=0x2a, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xbc73, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xbc73, .value=0x1c, .type=IO_READ},
        {.addr=0xbc74, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0138) {
    const struct CPU_State initial_cpu = {.pc=0x83bc, .a=0x1e, .x=0xc0, .y=0x39, .sp=0xdd, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x83bc, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x83bd, .a=0x3c, .x=0xc0, .y=0x39, .sp=0xdd, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x83bc, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x83bc, .value=0x1c, .type=IO_READ},
        {.addr=0x83bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0139) {
    const struct CPU_State initial_cpu = {.pc=0x8b62, .a=0x26, .x=0x5a, .y=0xc5, .sp=0x41, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x8b62, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x8b63, .a=0x4c, .x=0x5a, .y=0xc5, .sp=0x41, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x8b62, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x8b62, .value=0x1c, .type=IO_READ},
        {.addr=0x8b63, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_013A) {
    const struct CPU_State initial_cpu = {.pc=0xa489, .a=0xc8, .x=0x04, .y=0xeb, .sp=0x9c, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xa489, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xa48a, .a=0x90, .x=0x04, .y=0xeb, .sp=0x9c, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xa489, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xa489, .value=0x1c, .type=IO_READ},
        {.addr=0xa48a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_013B) {
    const struct CPU_State initial_cpu = {.pc=0xce84, .a=0xaa, .x=0x5f, .y=0x2d, .sp=0x97, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xce84, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xce85, .a=0x54, .x=0x5f, .y=0x2d, .sp=0x97, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xce84, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xce84, .value=0x1c, .type=IO_READ},
        {.addr=0xce85, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_013C) {
    const struct CPU_State initial_cpu = {.pc=0x9a48, .a=0x00, .x=0xd4, .y=0x6f, .sp=0xc0, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x9a48, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x9a49, .a=0x00, .x=0xd4, .y=0x6f, .sp=0xc0, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x9a48, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x9a48, .value=0x1c, .type=IO_READ},
        {.addr=0x9a49, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_013D) {
    const struct CPU_State initial_cpu = {.pc=0x9973, .a=0xdd, .x=0xac, .y=0x6c, .sp=0x0b, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x9973, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x9974, .a=0xba, .x=0xac, .y=0x6c, .sp=0x0b, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x9973, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x9973, .value=0x1c, .type=IO_READ},
        {.addr=0x9974, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_013E) {
    const struct CPU_State initial_cpu = {.pc=0x9bc2, .a=0x52, .x=0xc4, .y=0x3a, .sp=0x27, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x9bc2, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x9bc3, .a=0xa4, .x=0xc4, .y=0x3a, .sp=0x27, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x9bc2, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x9bc2, .value=0x1c, .type=IO_READ},
        {.addr=0x9bc3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_013F) {
    const struct CPU_State initial_cpu = {.pc=0xc0e0, .a=0x64, .x=0x5c, .y=0x24, .sp=0xc2, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xc0e0, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xc0e1, .a=0xc8, .x=0x5c, .y=0x24, .sp=0xc2, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xc0e0, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xc0e0, .value=0x1c, .type=IO_READ},
        {.addr=0xc0e1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0140) {
    const struct CPU_State initial_cpu = {.pc=0xaa1a, .a=0xcc, .x=0xbd, .y=0x71, .sp=0x00, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xaa1a, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xaa1b, .a=0x98, .x=0xbd, .y=0x71, .sp=0x00, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xaa1a, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xaa1a, .value=0x1c, .type=IO_READ},
        {.addr=0xaa1b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0141) {
    const struct CPU_State initial_cpu = {.pc=0x979f, .a=0x6a, .x=0x85, .y=0x08, .sp=0x3e, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x979f, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x97a0, .a=0xd4, .x=0x85, .y=0x08, .sp=0x3e, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x979f, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x979f, .value=0x1c, .type=IO_READ},
        {.addr=0x97a0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0142) {
    const struct CPU_State initial_cpu = {.pc=0xfcbc, .a=0x5f, .x=0xc5, .y=0x76, .sp=0x9c, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xfcbc, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xfcbd, .a=0xbe, .x=0xc5, .y=0x76, .sp=0x9c, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xfcbc, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xfcbc, .value=0x1c, .type=IO_READ},
        {.addr=0xfcbd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0143) {
    const struct CPU_State initial_cpu = {.pc=0x8f93, .a=0xf7, .x=0xfa, .y=0x40, .sp=0xd8, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x8f93, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x8f94, .a=0xee, .x=0xfa, .y=0x40, .sp=0xd8, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x8f93, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x8f93, .value=0x1c, .type=IO_READ},
        {.addr=0x8f94, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0144) {
    const struct CPU_State initial_cpu = {.pc=0xf9df, .a=0x69, .x=0x5a, .y=0x95, .sp=0x85, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xf9df, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xf9e0, .a=0xd2, .x=0x5a, .y=0x95, .sp=0x85, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xf9df, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xf9df, .value=0x1c, .type=IO_READ},
        {.addr=0xf9e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0145) {
    const struct CPU_State initial_cpu = {.pc=0xd8a3, .a=0xf9, .x=0xe4, .y=0x1f, .sp=0x47, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xd8a3, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd8a4, .a=0xf2, .x=0xe4, .y=0x1f, .sp=0x47, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xd8a3, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd8a3, .value=0x1c, .type=IO_READ},
        {.addr=0xd8a4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0146) {
    const struct CPU_State initial_cpu = {.pc=0x0b94, .a=0x0c, .x=0xa3, .y=0x3b, .sp=0x7d, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x0b94, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x0b95, .a=0x18, .x=0xa3, .y=0x3b, .sp=0x7d, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x0b94, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x0b94, .value=0x1c, .type=IO_READ},
        {.addr=0x0b95, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0147) {
    const struct CPU_State initial_cpu = {.pc=0xd3f0, .a=0x16, .x=0xf4, .y=0xeb, .sp=0xe7, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xd3f0, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd3f1, .a=0x2c, .x=0xf4, .y=0xeb, .sp=0xe7, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xd3f0, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd3f0, .value=0x1c, .type=IO_READ},
        {.addr=0xd3f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0148) {
    const struct CPU_State initial_cpu = {.pc=0xf717, .a=0xa5, .x=0xd9, .y=0xd2, .sp=0xd0, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xf717, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xf718, .a=0x4a, .x=0xd9, .y=0xd2, .sp=0xd0, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xf717, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xf717, .value=0x1c, .type=IO_READ},
        {.addr=0xf718, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0149) {
    const struct CPU_State initial_cpu = {.pc=0x819a, .a=0xfe, .x=0x8c, .y=0xae, .sp=0x5f, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x819a, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x819b, .a=0xfc, .x=0x8c, .y=0xae, .sp=0x5f, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x819a, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x819a, .value=0x1c, .type=IO_READ},
        {.addr=0x819b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_014A) {
    const struct CPU_State initial_cpu = {.pc=0xb92d, .a=0x14, .x=0xb5, .y=0x0b, .sp=0x35, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xb92d, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xb92e, .a=0x28, .x=0xb5, .y=0x0b, .sp=0x35, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xb92d, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xb92d, .value=0x1c, .type=IO_READ},
        {.addr=0xb92e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_014B) {
    const struct CPU_State initial_cpu = {.pc=0x18b0, .a=0x67, .x=0x67, .y=0x2e, .sp=0x18, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x18b0, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x18b1, .a=0xce, .x=0x67, .y=0x2e, .sp=0x18, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x18b0, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x18b0, .value=0x1c, .type=IO_READ},
        {.addr=0x18b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_014C) {
    const struct CPU_State initial_cpu = {.pc=0x2b71, .a=0xab, .x=0x09, .y=0x29, .sp=0xcb, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x2b71, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x2b72, .a=0x56, .x=0x09, .y=0x29, .sp=0xcb, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x2b71, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x2b71, .value=0x1c, .type=IO_READ},
        {.addr=0x2b72, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_014D) {
    const struct CPU_State initial_cpu = {.pc=0xaff5, .a=0xf3, .x=0x2a, .y=0x9b, .sp=0x63, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xaff5, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xaff6, .a=0xe6, .x=0x2a, .y=0x9b, .sp=0x63, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xaff5, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xaff5, .value=0x1c, .type=IO_READ},
        {.addr=0xaff6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_014E) {
    const struct CPU_State initial_cpu = {.pc=0xcecd, .a=0x60, .x=0xa1, .y=0xe6, .sp=0xb9, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xcecd, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xcece, .a=0xc0, .x=0xa1, .y=0xe6, .sp=0xb9, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xcecd, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xcecd, .value=0x1c, .type=IO_READ},
        {.addr=0xcece, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_014F) {
    const struct CPU_State initial_cpu = {.pc=0x09e8, .a=0x79, .x=0xd8, .y=0x58, .sp=0xa5, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x09e8, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x09e9, .a=0xf2, .x=0xd8, .y=0x58, .sp=0xa5, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x09e8, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x09e8, .value=0x1c, .type=IO_READ},
        {.addr=0x09e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0150) {
    const struct CPU_State initial_cpu = {.pc=0x6d44, .a=0x44, .x=0x29, .y=0x8f, .sp=0xc9, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x6d44, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x6d45, .a=0x88, .x=0x29, .y=0x8f, .sp=0xc9, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x6d44, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x6d44, .value=0x1c, .type=IO_READ},
        {.addr=0x6d45, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0151) {
    const struct CPU_State initial_cpu = {.pc=0xafbc, .a=0x3e, .x=0x1f, .y=0x82, .sp=0x4e, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xafbc, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xafbd, .a=0x7c, .x=0x1f, .y=0x82, .sp=0x4e, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xafbc, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xafbc, .value=0x1c, .type=IO_READ},
        {.addr=0xafbd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0152) {
    const struct CPU_State initial_cpu = {.pc=0xe716, .a=0x5e, .x=0xdc, .y=0xd2, .sp=0xc0, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xe716, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xe717, .a=0xbc, .x=0xdc, .y=0xd2, .sp=0xc0, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xe716, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xe716, .value=0x1c, .type=IO_READ},
        {.addr=0xe717, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0153) {
    const struct CPU_State initial_cpu = {.pc=0x8332, .a=0x56, .x=0x36, .y=0x4d, .sp=0x39, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x8332, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x8333, .a=0xac, .x=0x36, .y=0x4d, .sp=0x39, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x8332, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x8332, .value=0x1c, .type=IO_READ},
        {.addr=0x8333, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0154) {
    const struct CPU_State initial_cpu = {.pc=0x483f, .a=0x90, .x=0x58, .y=0xbd, .sp=0x67, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x483f, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x4840, .a=0x20, .x=0x58, .y=0xbd, .sp=0x67, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x483f, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x483f, .value=0x1c, .type=IO_READ},
        {.addr=0x4840, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0155) {
    const struct CPU_State initial_cpu = {.pc=0x2c60, .a=0x1a, .x=0x04, .y=0x05, .sp=0x2c, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x2c60, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x2c61, .a=0x34, .x=0x04, .y=0x05, .sp=0x2c, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x2c60, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x2c60, .value=0x1c, .type=IO_READ},
        {.addr=0x2c61, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0156) {
    const struct CPU_State initial_cpu = {.pc=0x0157, .a=0x1e, .x=0xd3, .y=0xe1, .sp=0xc2, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x0158, .a=0x3c, .x=0xd3, .y=0xe1, .sp=0xc2, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x0157, .value=0x1c, .type=IO_READ},
        {.addr=0x0158, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0157) {
    const struct CPU_State initial_cpu = {.pc=0xb1a9, .a=0x4f, .x=0xc1, .y=0xf4, .sp=0x97, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xb1a9, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xb1aa, .a=0x9e, .x=0xc1, .y=0xf4, .sp=0x97, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xb1a9, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xb1a9, .value=0x1c, .type=IO_READ},
        {.addr=0xb1aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0158) {
    const struct CPU_State initial_cpu = {.pc=0x052b, .a=0xeb, .x=0x57, .y=0x55, .sp=0x96, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x052b, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x052c, .a=0xd6, .x=0x57, .y=0x55, .sp=0x96, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x052b, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x052b, .value=0x1c, .type=IO_READ},
        {.addr=0x052c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0159) {
    const struct CPU_State initial_cpu = {.pc=0x0f70, .a=0xab, .x=0xf0, .y=0xb4, .sp=0x5b, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x0f70, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x0f71, .a=0x56, .x=0xf0, .y=0xb4, .sp=0x5b, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x0f70, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x0f70, .value=0x1c, .type=IO_READ},
        {.addr=0x0f71, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_015A) {
    const struct CPU_State initial_cpu = {.pc=0x4d4c, .a=0x49, .x=0xe1, .y=0x7e, .sp=0x7d, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x4d4c, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x4d4d, .a=0x92, .x=0xe1, .y=0x7e, .sp=0x7d, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x4d4c, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x4d4c, .value=0x1c, .type=IO_READ},
        {.addr=0x4d4d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_015B) {
    const struct CPU_State initial_cpu = {.pc=0xd01d, .a=0x2f, .x=0xd0, .y=0x98, .sp=0x2a, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xd01d, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd01e, .a=0x5e, .x=0xd0, .y=0x98, .sp=0x2a, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xd01d, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd01d, .value=0x1c, .type=IO_READ},
        {.addr=0xd01e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_015C) {
    const struct CPU_State initial_cpu = {.pc=0xd74e, .a=0x7c, .x=0x10, .y=0xac, .sp=0x24, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xd74e, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd74f, .a=0xf8, .x=0x10, .y=0xac, .sp=0x24, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xd74e, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd74e, .value=0x1c, .type=IO_READ},
        {.addr=0xd74f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_015D) {
    const struct CPU_State initial_cpu = {.pc=0x3e97, .a=0xd9, .x=0x73, .y=0xd4, .sp=0xe8, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x3e97, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x3e98, .a=0xb2, .x=0x73, .y=0xd4, .sp=0xe8, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x3e97, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x3e97, .value=0x1c, .type=IO_READ},
        {.addr=0x3e98, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_015E) {
    const struct CPU_State initial_cpu = {.pc=0x1564, .a=0x10, .x=0x82, .y=0x1b, .sp=0xce, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x1564, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x1565, .a=0x20, .x=0x82, .y=0x1b, .sp=0xce, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x1564, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x1564, .value=0x1c, .type=IO_READ},
        {.addr=0x1565, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_015F) {
    const struct CPU_State initial_cpu = {.pc=0x99ee, .a=0x72, .x=0x64, .y=0x91, .sp=0x00, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x99ee, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x99ef, .a=0xe4, .x=0x64, .y=0x91, .sp=0x00, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x99ee, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x99ee, .value=0x1c, .type=IO_READ},
        {.addr=0x99ef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0160) {
    const struct CPU_State initial_cpu = {.pc=0xd346, .a=0x8a, .x=0x71, .y=0xf8, .sp=0x1c, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xd346, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd347, .a=0x14, .x=0x71, .y=0xf8, .sp=0x1c, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xd346, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd346, .value=0x1c, .type=IO_READ},
        {.addr=0xd347, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0161) {
    const struct CPU_State initial_cpu = {.pc=0x8fa6, .a=0x14, .x=0xa2, .y=0x4f, .sp=0x7d, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x8fa6, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x8fa7, .a=0x28, .x=0xa2, .y=0x4f, .sp=0x7d, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x8fa6, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x8fa6, .value=0x1c, .type=IO_READ},
        {.addr=0x8fa7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0162) {
    const struct CPU_State initial_cpu = {.pc=0x3333, .a=0xb7, .x=0x23, .y=0x87, .sp=0x95, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x3333, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x3334, .a=0x6e, .x=0x23, .y=0x87, .sp=0x95, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x3333, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x3333, .value=0x1c, .type=IO_READ},
        {.addr=0x3334, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0163) {
    const struct CPU_State initial_cpu = {.pc=0x6805, .a=0x1c, .x=0x9b, .y=0x94, .sp=0x70, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x6805, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x6806, .a=0x38, .x=0x9b, .y=0x94, .sp=0x70, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x6805, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x6805, .value=0x1c, .type=IO_READ},
        {.addr=0x6806, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0164) {
    const struct CPU_State initial_cpu = {.pc=0xf014, .a=0xde, .x=0x72, .y=0x36, .sp=0x3c, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xf014, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xf015, .a=0xbc, .x=0x72, .y=0x36, .sp=0x3c, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xf014, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xf014, .value=0x1c, .type=IO_READ},
        {.addr=0xf015, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0165) {
    const struct CPU_State initial_cpu = {.pc=0x57f3, .a=0xdc, .x=0xd2, .y=0x8c, .sp=0x0a, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x57f3, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x57f4, .a=0xb8, .x=0xd2, .y=0x8c, .sp=0x0a, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x57f3, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x57f3, .value=0x1c, .type=IO_READ},
        {.addr=0x57f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0166) {
    const struct CPU_State initial_cpu = {.pc=0x0496, .a=0x02, .x=0x20, .y=0x8f, .sp=0xc5, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x0496, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x0497, .a=0x04, .x=0x20, .y=0x8f, .sp=0xc5, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x0496, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x0496, .value=0x1c, .type=IO_READ},
        {.addr=0x0497, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0167) {
    const struct CPU_State initial_cpu = {.pc=0x6032, .a=0xd3, .x=0x0d, .y=0x82, .sp=0xc7, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x6032, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x6033, .a=0xa6, .x=0x0d, .y=0x82, .sp=0xc7, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x6032, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x6032, .value=0x1c, .type=IO_READ},
        {.addr=0x6033, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0168) {
    const struct CPU_State initial_cpu = {.pc=0xb7b2, .a=0x60, .x=0x64, .y=0x26, .sp=0xb8, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xb7b2, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xb7b3, .a=0xc0, .x=0x64, .y=0x26, .sp=0xb8, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xb7b2, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xb7b2, .value=0x1c, .type=IO_READ},
        {.addr=0xb7b3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0169) {
    const struct CPU_State initial_cpu = {.pc=0x0127, .a=0x6a, .x=0x67, .y=0xc4, .sp=0xc8, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x0127, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x0128, .a=0xd4, .x=0x67, .y=0xc4, .sp=0xc8, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x0127, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x0127, .value=0x1c, .type=IO_READ},
        {.addr=0x0128, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_016A) {
    const struct CPU_State initial_cpu = {.pc=0xed29, .a=0x4b, .x=0x31, .y=0x22, .sp=0x05, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xed29, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xed2a, .a=0x96, .x=0x31, .y=0x22, .sp=0x05, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xed29, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xed29, .value=0x1c, .type=IO_READ},
        {.addr=0xed2a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_016B) {
    const struct CPU_State initial_cpu = {.pc=0x9555, .a=0x3f, .x=0xdd, .y=0xd3, .sp=0x43, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x9555, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x9556, .a=0x7e, .x=0xdd, .y=0xd3, .sp=0x43, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x9555, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x9555, .value=0x1c, .type=IO_READ},
        {.addr=0x9556, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_016C) {
    const struct CPU_State initial_cpu = {.pc=0x3593, .a=0x49, .x=0x8b, .y=0xa5, .sp=0x10, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x3593, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x3594, .a=0x92, .x=0x8b, .y=0xa5, .sp=0x10, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x3593, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x3593, .value=0x1c, .type=IO_READ},
        {.addr=0x3594, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_016D) {
    const struct CPU_State initial_cpu = {.pc=0x103a, .a=0x56, .x=0xf5, .y=0xbc, .sp=0xd9, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x103a, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x103b, .a=0xac, .x=0xf5, .y=0xbc, .sp=0xd9, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x103a, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x103a, .value=0x1c, .type=IO_READ},
        {.addr=0x103b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_016E) {
    const struct CPU_State initial_cpu = {.pc=0x367d, .a=0x12, .x=0x59, .y=0x96, .sp=0xd4, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x367d, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x367e, .a=0x24, .x=0x59, .y=0x96, .sp=0xd4, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x367d, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x367d, .value=0x1c, .type=IO_READ},
        {.addr=0x367e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_016F) {
    const struct CPU_State initial_cpu = {.pc=0x9e50, .a=0x1d, .x=0x8f, .y=0x86, .sp=0x4b, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x9e50, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x9e51, .a=0x3a, .x=0x8f, .y=0x86, .sp=0x4b, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x9e50, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x9e50, .value=0x1c, .type=IO_READ},
        {.addr=0x9e51, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0170) {
    const struct CPU_State initial_cpu = {.pc=0xa85d, .a=0x4c, .x=0xcb, .y=0x53, .sp=0xbc, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xa85d, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xa85e, .a=0x98, .x=0xcb, .y=0x53, .sp=0xbc, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xa85d, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xa85d, .value=0x1c, .type=IO_READ},
        {.addr=0xa85e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0171) {
    const struct CPU_State initial_cpu = {.pc=0x3b51, .a=0xa1, .x=0x87, .y=0x38, .sp=0x2c, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x3b51, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x3b52, .a=0x42, .x=0x87, .y=0x38, .sp=0x2c, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x3b51, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x3b51, .value=0x1c, .type=IO_READ},
        {.addr=0x3b52, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0172) {
    const struct CPU_State initial_cpu = {.pc=0xaf40, .a=0x81, .x=0xfa, .y=0xca, .sp=0x97, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xaf40, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xaf41, .a=0x02, .x=0xfa, .y=0xca, .sp=0x97, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xaf40, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xaf40, .value=0x1c, .type=IO_READ},
        {.addr=0xaf41, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0173) {
    const struct CPU_State initial_cpu = {.pc=0xae82, .a=0x8c, .x=0xe3, .y=0x02, .sp=0x8e, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xae82, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xae83, .a=0x18, .x=0xe3, .y=0x02, .sp=0x8e, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xae82, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xae82, .value=0x1c, .type=IO_READ},
        {.addr=0xae83, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0174) {
    const struct CPU_State initial_cpu = {.pc=0x2584, .a=0x55, .x=0x2d, .y=0xee, .sp=0x2d, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x2584, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x2585, .a=0xaa, .x=0x2d, .y=0xee, .sp=0x2d, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x2584, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x2584, .value=0x1c, .type=IO_READ},
        {.addr=0x2585, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0175) {
    const struct CPU_State initial_cpu = {.pc=0x4f32, .a=0xa0, .x=0x1b, .y=0xc4, .sp=0x9a, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x4f32, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x4f33, .a=0x40, .x=0x1b, .y=0xc4, .sp=0x9a, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x4f32, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x4f32, .value=0x1c, .type=IO_READ},
        {.addr=0x4f33, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0176) {
    const struct CPU_State initial_cpu = {.pc=0x31bd, .a=0x84, .x=0x74, .y=0x3e, .sp=0x56, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x31bd, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x31be, .a=0x08, .x=0x74, .y=0x3e, .sp=0x56, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x31bd, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x31bd, .value=0x1c, .type=IO_READ},
        {.addr=0x31be, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0177) {
    const struct CPU_State initial_cpu = {.pc=0xb62f, .a=0xc8, .x=0x50, .y=0x73, .sp=0x49, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xb62f, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xb630, .a=0x90, .x=0x50, .y=0x73, .sp=0x49, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xb62f, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xb62f, .value=0x1c, .type=IO_READ},
        {.addr=0xb630, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0178) {
    const struct CPU_State initial_cpu = {.pc=0x101b, .a=0x50, .x=0x67, .y=0xb7, .sp=0xfa, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x101b, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x101c, .a=0xa0, .x=0x67, .y=0xb7, .sp=0xfa, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x101b, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x101b, .value=0x1c, .type=IO_READ},
        {.addr=0x101c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0179) {
    const struct CPU_State initial_cpu = {.pc=0x510f, .a=0x16, .x=0x42, .y=0xe6, .sp=0x9a, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x510f, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x5110, .a=0x2c, .x=0x42, .y=0xe6, .sp=0x9a, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x510f, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x510f, .value=0x1c, .type=IO_READ},
        {.addr=0x5110, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_017A) {
    const struct CPU_State initial_cpu = {.pc=0x200f, .a=0x6e, .x=0xde, .y=0x65, .sp=0x40, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x200f, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x2010, .a=0xdc, .x=0xde, .y=0x65, .sp=0x40, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x200f, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x200f, .value=0x1c, .type=IO_READ},
        {.addr=0x2010, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_017B) {
    const struct CPU_State initial_cpu = {.pc=0x27cf, .a=0xf4, .x=0x8b, .y=0xd0, .sp=0x87, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x27cf, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x27d0, .a=0xe8, .x=0x8b, .y=0xd0, .sp=0x87, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x27cf, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x27cf, .value=0x1c, .type=IO_READ},
        {.addr=0x27d0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_017C) {
    const struct CPU_State initial_cpu = {.pc=0x2051, .a=0x06, .x=0xca, .y=0x81, .sp=0x0f, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x2051, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x2052, .a=0x0c, .x=0xca, .y=0x81, .sp=0x0f, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x2051, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x2051, .value=0x1c, .type=IO_READ},
        {.addr=0x2052, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_017D) {
    const struct CPU_State initial_cpu = {.pc=0xe95a, .a=0x86, .x=0xb4, .y=0x86, .sp=0x12, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xe95a, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xe95b, .a=0x0c, .x=0xb4, .y=0x86, .sp=0x12, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xe95a, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xe95a, .value=0x1c, .type=IO_READ},
        {.addr=0xe95b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_017E) {
    const struct CPU_State initial_cpu = {.pc=0xdcf2, .a=0xe6, .x=0xd8, .y=0x82, .sp=0x1e, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xdcf2, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xdcf3, .a=0xcc, .x=0xd8, .y=0x82, .sp=0x1e, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xdcf2, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xdcf2, .value=0x1c, .type=IO_READ},
        {.addr=0xdcf3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_017F) {
    const struct CPU_State initial_cpu = {.pc=0x7295, .a=0x06, .x=0xa8, .y=0x5e, .sp=0xa8, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x7295, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x7296, .a=0x0c, .x=0xa8, .y=0x5e, .sp=0xa8, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x7295, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x7295, .value=0x1c, .type=IO_READ},
        {.addr=0x7296, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0180) {
    const struct CPU_State initial_cpu = {.pc=0xc39e, .a=0xc8, .x=0xf4, .y=0x92, .sp=0x4c, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xc39e, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xc39f, .a=0x90, .x=0xf4, .y=0x92, .sp=0x4c, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xc39e, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xc39e, .value=0x1c, .type=IO_READ},
        {.addr=0xc39f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0181) {
    const struct CPU_State initial_cpu = {.pc=0x0c8b, .a=0x7a, .x=0x7c, .y=0xe5, .sp=0x9a, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x0c8b, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x0c8c, .a=0xf4, .x=0x7c, .y=0xe5, .sp=0x9a, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0c8b, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x0c8b, .value=0x1c, .type=IO_READ},
        {.addr=0x0c8c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0182) {
    const struct CPU_State initial_cpu = {.pc=0xd798, .a=0x26, .x=0x89, .y=0x40, .sp=0xf5, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xd798, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd799, .a=0x4c, .x=0x89, .y=0x40, .sp=0xf5, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xd798, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd798, .value=0x1c, .type=IO_READ},
        {.addr=0xd799, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0183) {
    const struct CPU_State initial_cpu = {.pc=0x0a92, .a=0x1b, .x=0xc3, .y=0x56, .sp=0x22, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x0a92, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x0a93, .a=0x36, .x=0xc3, .y=0x56, .sp=0x22, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x0a92, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x0a92, .value=0x1c, .type=IO_READ},
        {.addr=0x0a93, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0184) {
    const struct CPU_State initial_cpu = {.pc=0xd489, .a=0xa8, .x=0x7c, .y=0xdb, .sp=0x32, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xd489, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd48a, .a=0x50, .x=0x7c, .y=0xdb, .sp=0x32, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xd489, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd489, .value=0x1c, .type=IO_READ},
        {.addr=0xd48a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0185) {
    const struct CPU_State initial_cpu = {.pc=0x002e, .a=0x43, .x=0x8d, .y=0xc2, .sp=0xe7, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x002e, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x002f, .a=0x86, .x=0x8d, .y=0xc2, .sp=0xe7, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x002e, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x002e, .value=0x1c, .type=IO_READ},
        {.addr=0x002f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0186) {
    const struct CPU_State initial_cpu = {.pc=0x5dd1, .a=0xfd, .x=0x18, .y=0xf7, .sp=0x5f, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x5dd1, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x5dd2, .a=0xfa, .x=0x18, .y=0xf7, .sp=0x5f, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x5dd1, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x5dd1, .value=0x1c, .type=IO_READ},
        {.addr=0x5dd2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0187) {
    const struct CPU_State initial_cpu = {.pc=0xaab9, .a=0xd9, .x=0xbe, .y=0xa3, .sp=0xd0, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xaab9, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xaaba, .a=0xb2, .x=0xbe, .y=0xa3, .sp=0xd0, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xaab9, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xaab9, .value=0x1c, .type=IO_READ},
        {.addr=0xaaba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0188) {
    const struct CPU_State initial_cpu = {.pc=0xbf5d, .a=0x40, .x=0xca, .y=0x14, .sp=0x27, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xbf5d, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xbf5e, .a=0x80, .x=0xca, .y=0x14, .sp=0x27, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xbf5d, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xbf5d, .value=0x1c, .type=IO_READ},
        {.addr=0xbf5e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0189) {
    const struct CPU_State initial_cpu = {.pc=0xdabe, .a=0xf2, .x=0x22, .y=0x45, .sp=0x2e, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xdabe, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xdabf, .a=0xe4, .x=0x22, .y=0x45, .sp=0x2e, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xdabe, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xdabe, .value=0x1c, .type=IO_READ},
        {.addr=0xdabf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_018A) {
    const struct CPU_State initial_cpu = {.pc=0x3f23, .a=0xa1, .x=0x73, .y=0xdf, .sp=0xe8, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x3f23, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x3f24, .a=0x42, .x=0x73, .y=0xdf, .sp=0xe8, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x3f23, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x3f23, .value=0x1c, .type=IO_READ},
        {.addr=0x3f24, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_018B) {
    const struct CPU_State initial_cpu = {.pc=0x3bd4, .a=0x72, .x=0x6c, .y=0x55, .sp=0x34, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x3bd4, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x3bd5, .a=0xe4, .x=0x6c, .y=0x55, .sp=0x34, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x3bd4, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x3bd4, .value=0x1c, .type=IO_READ},
        {.addr=0x3bd5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_018C) {
    const struct CPU_State initial_cpu = {.pc=0xee7e, .a=0x08, .x=0xcd, .y=0x75, .sp=0x48, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xee7e, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xee7f, .a=0x10, .x=0xcd, .y=0x75, .sp=0x48, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xee7e, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xee7e, .value=0x1c, .type=IO_READ},
        {.addr=0xee7f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_018D) {
    const struct CPU_State initial_cpu = {.pc=0xf308, .a=0xba, .x=0x43, .y=0x44, .sp=0x73, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xf308, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xf309, .a=0x74, .x=0x43, .y=0x44, .sp=0x73, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xf308, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xf308, .value=0x1c, .type=IO_READ},
        {.addr=0xf309, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_018E) {
    const struct CPU_State initial_cpu = {.pc=0xf618, .a=0x3e, .x=0x3d, .y=0x58, .sp=0x71, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xf618, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xf619, .a=0x7c, .x=0x3d, .y=0x58, .sp=0x71, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xf618, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xf618, .value=0x1c, .type=IO_READ},
        {.addr=0xf619, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_018F) {
    const struct CPU_State initial_cpu = {.pc=0x2981, .a=0xf5, .x=0x91, .y=0x40, .sp=0xd4, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x2981, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x2982, .a=0xea, .x=0x91, .y=0x40, .sp=0xd4, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x2981, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x2981, .value=0x1c, .type=IO_READ},
        {.addr=0x2982, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0190) {
    const struct CPU_State initial_cpu = {.pc=0x872e, .a=0xa9, .x=0xa1, .y=0xfa, .sp=0xf1, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x872e, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x872f, .a=0x52, .x=0xa1, .y=0xfa, .sp=0xf1, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x872e, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x872e, .value=0x1c, .type=IO_READ},
        {.addr=0x872f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0191) {
    const struct CPU_State initial_cpu = {.pc=0xcfd1, .a=0xa6, .x=0xfd, .y=0xa9, .sp=0x06, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xcfd1, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xcfd2, .a=0x4c, .x=0xfd, .y=0xa9, .sp=0x06, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xcfd1, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xcfd1, .value=0x1c, .type=IO_READ},
        {.addr=0xcfd2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0192) {
    const struct CPU_State initial_cpu = {.pc=0x2cbb, .a=0x1a, .x=0x75, .y=0x2c, .sp=0xf2, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x2cbb, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x2cbc, .a=0x34, .x=0x75, .y=0x2c, .sp=0xf2, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x2cbb, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x2cbb, .value=0x1c, .type=IO_READ},
        {.addr=0x2cbc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0193) {
    const struct CPU_State initial_cpu = {.pc=0xe0a3, .a=0x69, .x=0xa5, .y=0x17, .sp=0xa8, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xe0a3, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xe0a4, .a=0xd2, .x=0xa5, .y=0x17, .sp=0xa8, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xe0a3, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xe0a3, .value=0x1c, .type=IO_READ},
        {.addr=0xe0a4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0194) {
    const struct CPU_State initial_cpu = {.pc=0xfbd1, .a=0xf8, .x=0x8c, .y=0x08, .sp=0x73, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xfbd1, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xfbd2, .a=0xf0, .x=0x8c, .y=0x08, .sp=0x73, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xfbd1, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xfbd1, .value=0x1c, .type=IO_READ},
        {.addr=0xfbd2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0195) {
    const struct CPU_State initial_cpu = {.pc=0x4276, .a=0x80, .x=0x46, .y=0x27, .sp=0x92, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x4276, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x4277, .a=0x00, .x=0x46, .y=0x27, .sp=0x92, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x4276, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x4276, .value=0x1c, .type=IO_READ},
        {.addr=0x4277, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0196) {
    const struct CPU_State initial_cpu = {.pc=0x4dca, .a=0x97, .x=0x8e, .y=0x18, .sp=0x16, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x4dca, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x4dcb, .a=0x2e, .x=0x8e, .y=0x18, .sp=0x16, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x4dca, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x4dca, .value=0x1c, .type=IO_READ},
        {.addr=0x4dcb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0197) {
    const struct CPU_State initial_cpu = {.pc=0xa3e9, .a=0x20, .x=0xa7, .y=0x54, .sp=0x0c, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xa3e9, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xa3ea, .a=0x40, .x=0xa7, .y=0x54, .sp=0x0c, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xa3e9, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xa3e9, .value=0x1c, .type=IO_READ},
        {.addr=0xa3ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0198) {
    const struct CPU_State initial_cpu = {.pc=0xdba6, .a=0x74, .x=0x9e, .y=0xab, .sp=0x57, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xdba6, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xdba7, .a=0xe8, .x=0x9e, .y=0xab, .sp=0x57, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xdba6, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xdba6, .value=0x1c, .type=IO_READ},
        {.addr=0xdba7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0199) {
    const struct CPU_State initial_cpu = {.pc=0x93be, .a=0x4e, .x=0x7f, .y=0x46, .sp=0xcd, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x93be, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x93bf, .a=0x9c, .x=0x7f, .y=0x46, .sp=0xcd, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x93be, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x93be, .value=0x1c, .type=IO_READ},
        {.addr=0x93bf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_019A) {
    const struct CPU_State initial_cpu = {.pc=0xa1ee, .a=0x59, .x=0xf4, .y=0xe8, .sp=0x94, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xa1ee, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xa1ef, .a=0xb2, .x=0xf4, .y=0xe8, .sp=0x94, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xa1ee, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xa1ee, .value=0x1c, .type=IO_READ},
        {.addr=0xa1ef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_019B) {
    const struct CPU_State initial_cpu = {.pc=0x832f, .a=0xb2, .x=0xf8, .y=0x8d, .sp=0xf7, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x832f, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x8330, .a=0x64, .x=0xf8, .y=0x8d, .sp=0xf7, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x832f, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x832f, .value=0x1c, .type=IO_READ},
        {.addr=0x8330, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_019C) {
    const struct CPU_State initial_cpu = {.pc=0x1022, .a=0x96, .x=0x8c, .y=0x19, .sp=0x05, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x1022, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x1023, .a=0x2c, .x=0x8c, .y=0x19, .sp=0x05, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x1022, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x1022, .value=0x1c, .type=IO_READ},
        {.addr=0x1023, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_019D) {
    const struct CPU_State initial_cpu = {.pc=0xa608, .a=0x47, .x=0xab, .y=0x5f, .sp=0xc9, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xa608, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xa609, .a=0x8e, .x=0xab, .y=0x5f, .sp=0xc9, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xa608, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xa608, .value=0x1c, .type=IO_READ},
        {.addr=0xa609, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_019E) {
    const struct CPU_State initial_cpu = {.pc=0xda94, .a=0xd5, .x=0x84, .y=0x06, .sp=0x52, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xda94, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xda95, .a=0xaa, .x=0x84, .y=0x06, .sp=0x52, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xda94, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xda94, .value=0x1c, .type=IO_READ},
        {.addr=0xda95, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_019F) {
    const struct CPU_State initial_cpu = {.pc=0x7b6d, .a=0x7b, .x=0x32, .y=0x69, .sp=0xb6, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x7b6d, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x7b6e, .a=0xf6, .x=0x32, .y=0x69, .sp=0xb6, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x7b6d, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x7b6d, .value=0x1c, .type=IO_READ},
        {.addr=0x7b6e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x06d2, .a=0xb7, .x=0x77, .y=0x34, .sp=0x4f, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x06d2, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x06d3, .a=0x6e, .x=0x77, .y=0x34, .sp=0x4f, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x06d2, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x06d2, .value=0x1c, .type=IO_READ},
        {.addr=0x06d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01A1) {
    const struct CPU_State initial_cpu = {.pc=0x3d7a, .a=0x56, .x=0x99, .y=0xc8, .sp=0x17, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x3d7a, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x3d7b, .a=0xac, .x=0x99, .y=0xc8, .sp=0x17, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x3d7a, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x3d7a, .value=0x1c, .type=IO_READ},
        {.addr=0x3d7b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01A2) {
    const struct CPU_State initial_cpu = {.pc=0x5e20, .a=0x4a, .x=0x2d, .y=0x55, .sp=0x15, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x5e20, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x5e21, .a=0x94, .x=0x2d, .y=0x55, .sp=0x15, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x5e20, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x5e20, .value=0x1c, .type=IO_READ},
        {.addr=0x5e21, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01A3) {
    const struct CPU_State initial_cpu = {.pc=0x823c, .a=0x04, .x=0x0f, .y=0xd3, .sp=0x5a, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x823c, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x823d, .a=0x08, .x=0x0f, .y=0xd3, .sp=0x5a, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x823c, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x823c, .value=0x1c, .type=IO_READ},
        {.addr=0x823d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01A4) {
    const struct CPU_State initial_cpu = {.pc=0xbb66, .a=0x67, .x=0xcd, .y=0xfc, .sp=0x4f, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xbb66, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xbb67, .a=0xce, .x=0xcd, .y=0xfc, .sp=0x4f, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xbb66, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xbb66, .value=0x1c, .type=IO_READ},
        {.addr=0xbb67, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01A5) {
    const struct CPU_State initial_cpu = {.pc=0xfc0a, .a=0x3a, .x=0xb0, .y=0x1d, .sp=0x5a, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xfc0a, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xfc0b, .a=0x74, .x=0xb0, .y=0x1d, .sp=0x5a, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xfc0a, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xfc0a, .value=0x1c, .type=IO_READ},
        {.addr=0xfc0b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01A6) {
    const struct CPU_State initial_cpu = {.pc=0x03d7, .a=0xad, .x=0x44, .y=0xf4, .sp=0xc2, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x03d7, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x03d8, .a=0x5a, .x=0x44, .y=0xf4, .sp=0xc2, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x03d7, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x03d7, .value=0x1c, .type=IO_READ},
        {.addr=0x03d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01A7) {
    const struct CPU_State initial_cpu = {.pc=0xe582, .a=0x6f, .x=0x9c, .y=0x3c, .sp=0x18, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xe582, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xe583, .a=0xde, .x=0x9c, .y=0x3c, .sp=0x18, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xe582, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xe582, .value=0x1c, .type=IO_READ},
        {.addr=0xe583, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01A8) {
    const struct CPU_State initial_cpu = {.pc=0x2383, .a=0x38, .x=0x51, .y=0xd4, .sp=0x5e, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x2383, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x2384, .a=0x70, .x=0x51, .y=0xd4, .sp=0x5e, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x2383, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x2383, .value=0x1c, .type=IO_READ},
        {.addr=0x2384, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01A9) {
    const struct CPU_State initial_cpu = {.pc=0xc10f, .a=0xe8, .x=0x65, .y=0x93, .sp=0x4a, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xc10f, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xc110, .a=0xd0, .x=0x65, .y=0x93, .sp=0x4a, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xc10f, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xc10f, .value=0x1c, .type=IO_READ},
        {.addr=0xc110, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01AA) {
    const struct CPU_State initial_cpu = {.pc=0xb42d, .a=0x79, .x=0x17, .y=0x85, .sp=0xc0, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xb42d, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xb42e, .a=0xf2, .x=0x17, .y=0x85, .sp=0xc0, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xb42d, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xb42d, .value=0x1c, .type=IO_READ},
        {.addr=0xb42e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x898c, .a=0xf4, .x=0x42, .y=0xf9, .sp=0xa4, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x898c, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x898d, .a=0xe8, .x=0x42, .y=0xf9, .sp=0xa4, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x898c, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x898c, .value=0x1c, .type=IO_READ},
        {.addr=0x898d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01AC) {
    const struct CPU_State initial_cpu = {.pc=0x214c, .a=0xba, .x=0x12, .y=0x2e, .sp=0xcc, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x214c, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x214d, .a=0x74, .x=0x12, .y=0x2e, .sp=0xcc, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x214c, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x214c, .value=0x1c, .type=IO_READ},
        {.addr=0x214d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01AD) {
    const struct CPU_State initial_cpu = {.pc=0xdb1d, .a=0xbd, .x=0x4b, .y=0x5c, .sp=0x34, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xdb1d, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xdb1e, .a=0x7a, .x=0x4b, .y=0x5c, .sp=0x34, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xdb1d, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xdb1d, .value=0x1c, .type=IO_READ},
        {.addr=0xdb1e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01AE) {
    const struct CPU_State initial_cpu = {.pc=0xc180, .a=0x27, .x=0x8b, .y=0xca, .sp=0x44, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xc180, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xc181, .a=0x4e, .x=0x8b, .y=0xca, .sp=0x44, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xc180, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xc180, .value=0x1c, .type=IO_READ},
        {.addr=0xc181, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01AF) {
    const struct CPU_State initial_cpu = {.pc=0x9fa8, .a=0x26, .x=0x0e, .y=0xd3, .sp=0x09, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x9fa8, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x9fa9, .a=0x4c, .x=0x0e, .y=0xd3, .sp=0x09, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x9fa8, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x9fa8, .value=0x1c, .type=IO_READ},
        {.addr=0x9fa9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x15fa, .a=0xeb, .x=0x67, .y=0x5b, .sp=0x09, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x15fa, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x15fb, .a=0xd6, .x=0x67, .y=0x5b, .sp=0x09, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x15fa, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x15fa, .value=0x1c, .type=IO_READ},
        {.addr=0x15fb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01B1) {
    const struct CPU_State initial_cpu = {.pc=0x9f43, .a=0xf2, .x=0x1b, .y=0xff, .sp=0x78, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x9f43, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x9f44, .a=0xe4, .x=0x1b, .y=0xff, .sp=0x78, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x9f43, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x9f43, .value=0x1c, .type=IO_READ},
        {.addr=0x9f44, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x0ca3, .a=0xc4, .x=0xbc, .y=0x62, .sp=0x69, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x0ca3, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x0ca4, .a=0x88, .x=0xbc, .y=0x62, .sp=0x69, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x0ca3, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x0ca3, .value=0x1c, .type=IO_READ},
        {.addr=0x0ca4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01B3) {
    const struct CPU_State initial_cpu = {.pc=0x610c, .a=0xd3, .x=0x6a, .y=0xec, .sp=0x5c, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x610c, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x610d, .a=0xa6, .x=0x6a, .y=0xec, .sp=0x5c, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x610c, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x610c, .value=0x1c, .type=IO_READ},
        {.addr=0x610d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01B4) {
    const struct CPU_State initial_cpu = {.pc=0xc74b, .a=0x14, .x=0x91, .y=0x41, .sp=0xe0, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xc74b, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xc74c, .a=0x28, .x=0x91, .y=0x41, .sp=0xe0, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xc74b, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xc74b, .value=0x1c, .type=IO_READ},
        {.addr=0xc74c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01B5) {
    const struct CPU_State initial_cpu = {.pc=0x11c2, .a=0xd2, .x=0x01, .y=0x5f, .sp=0x6a, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x11c2, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x11c3, .a=0xa4, .x=0x01, .y=0x5f, .sp=0x6a, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x11c2, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x11c2, .value=0x1c, .type=IO_READ},
        {.addr=0x11c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01B6) {
    const struct CPU_State initial_cpu = {.pc=0x0290, .a=0x98, .x=0xa2, .y=0x05, .sp=0x3e, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x0290, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x0291, .a=0x30, .x=0xa2, .y=0x05, .sp=0x3e, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0290, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x0290, .value=0x1c, .type=IO_READ},
        {.addr=0x0291, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01B7) {
    const struct CPU_State initial_cpu = {.pc=0x410f, .a=0x6e, .x=0x5c, .y=0x72, .sp=0x66, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x410f, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x4110, .a=0xdc, .x=0x5c, .y=0x72, .sp=0x66, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x410f, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x410f, .value=0x1c, .type=IO_READ},
        {.addr=0x4110, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01B8) {
    const struct CPU_State initial_cpu = {.pc=0xe4d0, .a=0x67, .x=0x62, .y=0x4c, .sp=0x75, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xe4d0, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xe4d1, .a=0xce, .x=0x62, .y=0x4c, .sp=0x75, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xe4d0, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xe4d0, .value=0x1c, .type=IO_READ},
        {.addr=0xe4d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x43f7, .a=0xcc, .x=0x20, .y=0xcb, .sp=0x5a, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x43f7, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x43f8, .a=0x98, .x=0x20, .y=0xcb, .sp=0x5a, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x43f7, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x43f7, .value=0x1c, .type=IO_READ},
        {.addr=0x43f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01BA) {
    const struct CPU_State initial_cpu = {.pc=0x20a1, .a=0x09, .x=0xdc, .y=0x8b, .sp=0xf7, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x20a1, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x20a2, .a=0x12, .x=0xdc, .y=0x8b, .sp=0xf7, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x20a1, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x20a1, .value=0x1c, .type=IO_READ},
        {.addr=0x20a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01BB) {
    const struct CPU_State initial_cpu = {.pc=0x5e3a, .a=0xdd, .x=0x88, .y=0x87, .sp=0xc6, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x5e3a, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x5e3b, .a=0xba, .x=0x88, .y=0x87, .sp=0xc6, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x5e3a, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x5e3a, .value=0x1c, .type=IO_READ},
        {.addr=0x5e3b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01BC) {
    const struct CPU_State initial_cpu = {.pc=0x080d, .a=0x40, .x=0xaa, .y=0x4c, .sp=0x13, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x080d, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x080e, .a=0x80, .x=0xaa, .y=0x4c, .sp=0x13, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x080d, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x080d, .value=0x1c, .type=IO_READ},
        {.addr=0x080e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01BD) {
    const struct CPU_State initial_cpu = {.pc=0x2287, .a=0x7f, .x=0x62, .y=0x9c, .sp=0x1b, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x2287, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x2288, .a=0xfe, .x=0x62, .y=0x9c, .sp=0x1b, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x2287, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x2287, .value=0x1c, .type=IO_READ},
        {.addr=0x2288, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01BE) {
    const struct CPU_State initial_cpu = {.pc=0xe663, .a=0x26, .x=0x3e, .y=0x9a, .sp=0x56, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xe663, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xe664, .a=0x4c, .x=0x3e, .y=0x9a, .sp=0x56, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xe663, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xe663, .value=0x1c, .type=IO_READ},
        {.addr=0xe664, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01BF) {
    const struct CPU_State initial_cpu = {.pc=0x6e29, .a=0x13, .x=0x53, .y=0xfe, .sp=0x71, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x6e29, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x6e2a, .a=0x26, .x=0x53, .y=0xfe, .sp=0x71, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x6e29, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x6e29, .value=0x1c, .type=IO_READ},
        {.addr=0x6e2a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01C0) {
    const struct CPU_State initial_cpu = {.pc=0xb0ae, .a=0x9c, .x=0xbe, .y=0xf3, .sp=0x92, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xb0ae, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xb0af, .a=0x38, .x=0xbe, .y=0xf3, .sp=0x92, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xb0ae, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xb0ae, .value=0x1c, .type=IO_READ},
        {.addr=0xb0af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x11cb, .a=0x0d, .x=0xe8, .y=0x96, .sp=0x11, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x11cb, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x11cc, .a=0x1a, .x=0xe8, .y=0x96, .sp=0x11, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x11cb, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x11cb, .value=0x1c, .type=IO_READ},
        {.addr=0x11cc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01C2) {
    const struct CPU_State initial_cpu = {.pc=0x84fc, .a=0xc4, .x=0xe1, .y=0xf1, .sp=0x8e, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x84fc, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x84fd, .a=0x88, .x=0xe1, .y=0xf1, .sp=0x8e, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x84fc, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x84fc, .value=0x1c, .type=IO_READ},
        {.addr=0x84fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01C3) {
    const struct CPU_State initial_cpu = {.pc=0x9d7e, .a=0xcc, .x=0xbd, .y=0x2b, .sp=0x3d, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x9d7e, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x9d7f, .a=0x98, .x=0xbd, .y=0x2b, .sp=0x3d, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x9d7e, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x9d7e, .value=0x1c, .type=IO_READ},
        {.addr=0x9d7f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01C4) {
    const struct CPU_State initial_cpu = {.pc=0xd2c3, .a=0xdf, .x=0xff, .y=0x8e, .sp=0xbb, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xd2c3, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd2c4, .a=0xbe, .x=0xff, .y=0x8e, .sp=0xbb, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xd2c3, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd2c3, .value=0x1c, .type=IO_READ},
        {.addr=0xd2c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01C5) {
    const struct CPU_State initial_cpu = {.pc=0xe246, .a=0x09, .x=0xeb, .y=0x6a, .sp=0xc6, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xe246, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xe247, .a=0x12, .x=0xeb, .y=0x6a, .sp=0xc6, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xe246, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xe246, .value=0x1c, .type=IO_READ},
        {.addr=0xe247, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01C6) {
    const struct CPU_State initial_cpu = {.pc=0xa8a0, .a=0x24, .x=0x66, .y=0x55, .sp=0x15, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xa8a0, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xa8a1, .a=0x48, .x=0x66, .y=0x55, .sp=0x15, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xa8a0, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xa8a0, .value=0x1c, .type=IO_READ},
        {.addr=0xa8a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01C7) {
    const struct CPU_State initial_cpu = {.pc=0x3df4, .a=0x72, .x=0x61, .y=0x03, .sp=0x1f, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x3df4, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x3df5, .a=0xe4, .x=0x61, .y=0x03, .sp=0x1f, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x3df4, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x3df4, .value=0x1c, .type=IO_READ},
        {.addr=0x3df5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01C8) {
    const struct CPU_State initial_cpu = {.pc=0xb2fe, .a=0x4e, .x=0x92, .y=0x10, .sp=0xc3, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xb2fe, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xb2ff, .a=0x9c, .x=0x92, .y=0x10, .sp=0xc3, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xb2fe, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xb2fe, .value=0x1c, .type=IO_READ},
        {.addr=0xb2ff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01C9) {
    const struct CPU_State initial_cpu = {.pc=0xcecc, .a=0x0c, .x=0x29, .y=0x33, .sp=0x40, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xcecc, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xcecd, .a=0x18, .x=0x29, .y=0x33, .sp=0x40, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xcecc, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xcecc, .value=0x1c, .type=IO_READ},
        {.addr=0xcecd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01CA) {
    const struct CPU_State initial_cpu = {.pc=0xdc8f, .a=0x21, .x=0x91, .y=0x7e, .sp=0x5f, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xdc8f, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xdc90, .a=0x42, .x=0x91, .y=0x7e, .sp=0x5f, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xdc8f, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xdc8f, .value=0x1c, .type=IO_READ},
        {.addr=0xdc90, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01CB) {
    const struct CPU_State initial_cpu = {.pc=0x4b33, .a=0xa3, .x=0x5e, .y=0xf1, .sp=0x0e, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x4b33, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x4b34, .a=0x46, .x=0x5e, .y=0xf1, .sp=0x0e, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x4b33, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x4b33, .value=0x1c, .type=IO_READ},
        {.addr=0x4b34, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01CC) {
    const struct CPU_State initial_cpu = {.pc=0x976a, .a=0x6f, .x=0xdf, .y=0x9a, .sp=0xd1, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x976a, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x976b, .a=0xde, .x=0xdf, .y=0x9a, .sp=0xd1, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x976a, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x976a, .value=0x1c, .type=IO_READ},
        {.addr=0x976b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x9a98, .a=0x68, .x=0x38, .y=0xf6, .sp=0x5f, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x9a98, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x9a99, .a=0xd0, .x=0x38, .y=0xf6, .sp=0x5f, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x9a98, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x9a98, .value=0x1c, .type=IO_READ},
        {.addr=0x9a99, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01CE) {
    const struct CPU_State initial_cpu = {.pc=0x62c5, .a=0x74, .x=0xcc, .y=0x89, .sp=0x70, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x62c5, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x62c6, .a=0xe8, .x=0xcc, .y=0x89, .sp=0x70, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x62c5, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x62c5, .value=0x1c, .type=IO_READ},
        {.addr=0x62c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01CF) {
    const struct CPU_State initial_cpu = {.pc=0xcc47, .a=0xa9, .x=0xae, .y=0x47, .sp=0x09, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xcc47, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xcc48, .a=0x52, .x=0xae, .y=0x47, .sp=0x09, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xcc47, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xcc47, .value=0x1c, .type=IO_READ},
        {.addr=0xcc48, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01D0) {
    const struct CPU_State initial_cpu = {.pc=0xc007, .a=0x52, .x=0x5c, .y=0xf0, .sp=0x81, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xc007, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xc008, .a=0xa4, .x=0x5c, .y=0xf0, .sp=0x81, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xc007, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xc007, .value=0x1c, .type=IO_READ},
        {.addr=0xc008, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01D1) {
    const struct CPU_State initial_cpu = {.pc=0x356a, .a=0xbd, .x=0x1c, .y=0x34, .sp=0xc5, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x356a, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x356b, .a=0x7a, .x=0x1c, .y=0x34, .sp=0xc5, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x356a, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x356a, .value=0x1c, .type=IO_READ},
        {.addr=0x356b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x50e0, .a=0xd5, .x=0x43, .y=0x7d, .sp=0xd4, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x50e0, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x50e1, .a=0xaa, .x=0x43, .y=0x7d, .sp=0xd4, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x50e0, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x50e0, .value=0x1c, .type=IO_READ},
        {.addr=0x50e1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01D3) {
    const struct CPU_State initial_cpu = {.pc=0x2219, .a=0x5e, .x=0x39, .y=0x4d, .sp=0xa6, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x2219, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x221a, .a=0xbc, .x=0x39, .y=0x4d, .sp=0xa6, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x2219, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x2219, .value=0x1c, .type=IO_READ},
        {.addr=0x221a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x6cd0, .a=0xfa, .x=0x55, .y=0xdd, .sp=0xf1, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x6cd0, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x6cd1, .a=0xf4, .x=0x55, .y=0xdd, .sp=0xf1, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x6cd0, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x6cd0, .value=0x1c, .type=IO_READ},
        {.addr=0x6cd1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01D5) {
    const struct CPU_State initial_cpu = {.pc=0xd655, .a=0x2a, .x=0xa1, .y=0xa7, .sp=0xf5, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xd655, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd656, .a=0x54, .x=0xa1, .y=0xa7, .sp=0xf5, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xd655, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd655, .value=0x1c, .type=IO_READ},
        {.addr=0xd656, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01D6) {
    const struct CPU_State initial_cpu = {.pc=0x62d9, .a=0xa8, .x=0x7b, .y=0x7e, .sp=0x43, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x62d9, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x62da, .a=0x50, .x=0x7b, .y=0x7e, .sp=0x43, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x62d9, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x62d9, .value=0x1c, .type=IO_READ},
        {.addr=0x62da, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01D7) {
    const struct CPU_State initial_cpu = {.pc=0x060e, .a=0x5c, .x=0x45, .y=0xe6, .sp=0x2e, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x060e, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x060f, .a=0xb8, .x=0x45, .y=0xe6, .sp=0x2e, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x060e, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x060e, .value=0x1c, .type=IO_READ},
        {.addr=0x060f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01D8) {
    const struct CPU_State initial_cpu = {.pc=0xfbd7, .a=0x2e, .x=0xab, .y=0xee, .sp=0x77, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xfbd7, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xfbd8, .a=0x5c, .x=0xab, .y=0xee, .sp=0x77, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xfbd7, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xfbd7, .value=0x1c, .type=IO_READ},
        {.addr=0xfbd8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01D9) {
    const struct CPU_State initial_cpu = {.pc=0x2658, .a=0x12, .x=0xd7, .y=0x35, .sp=0xcb, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x2658, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x2659, .a=0x24, .x=0xd7, .y=0x35, .sp=0xcb, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x2658, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x2658, .value=0x1c, .type=IO_READ},
        {.addr=0x2659, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01DA) {
    const struct CPU_State initial_cpu = {.pc=0x47ff, .a=0x3f, .x=0xf3, .y=0xec, .sp=0xda, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x47ff, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x4800, .a=0x7e, .x=0xf3, .y=0xec, .sp=0xda, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x47ff, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x47ff, .value=0x1c, .type=IO_READ},
        {.addr=0x4800, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x3506, .a=0xd1, .x=0xc8, .y=0x7a, .sp=0x03, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x3506, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x3507, .a=0xa2, .x=0xc8, .y=0x7a, .sp=0x03, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x3506, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x3506, .value=0x1c, .type=IO_READ},
        {.addr=0x3507, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01DC) {
    const struct CPU_State initial_cpu = {.pc=0xfe5a, .a=0x2f, .x=0x32, .y=0xe3, .sp=0x6a, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xfe5a, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xfe5b, .a=0x5e, .x=0x32, .y=0xe3, .sp=0x6a, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xfe5a, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xfe5a, .value=0x1c, .type=IO_READ},
        {.addr=0xfe5b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x1a0e, .a=0x04, .x=0xa6, .y=0x06, .sp=0xfc, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x1a0e, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x1a0f, .a=0x08, .x=0xa6, .y=0x06, .sp=0xfc, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x1a0e, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x1a0e, .value=0x1c, .type=IO_READ},
        {.addr=0x1a0f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x490d, .a=0x85, .x=0x68, .y=0x73, .sp=0x83, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x490d, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x490e, .a=0x0a, .x=0x68, .y=0x73, .sp=0x83, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x490d, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x490d, .value=0x1c, .type=IO_READ},
        {.addr=0x490e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01DF) {
    const struct CPU_State initial_cpu = {.pc=0x0f4c, .a=0xf9, .x=0xd6, .y=0x8e, .sp=0x79, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x0f4c, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x0f4d, .a=0xf2, .x=0xd6, .y=0x8e, .sp=0x79, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x0f4c, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x0f4c, .value=0x1c, .type=IO_READ},
        {.addr=0x0f4d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01E0) {
    const struct CPU_State initial_cpu = {.pc=0x9a28, .a=0x1a, .x=0x3a, .y=0xc0, .sp=0x33, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x9a28, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x9a29, .a=0x34, .x=0x3a, .y=0xc0, .sp=0x33, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x9a28, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x9a28, .value=0x1c, .type=IO_READ},
        {.addr=0x9a29, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x900d, .a=0x5c, .x=0x21, .y=0xae, .sp=0x8c, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x900d, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x900e, .a=0xb8, .x=0x21, .y=0xae, .sp=0x8c, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x900d, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x900d, .value=0x1c, .type=IO_READ},
        {.addr=0x900e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01E2) {
    const struct CPU_State initial_cpu = {.pc=0x53f7, .a=0x26, .x=0xce, .y=0x3e, .sp=0xb4, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x53f7, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x53f8, .a=0x4c, .x=0xce, .y=0x3e, .sp=0xb4, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x53f7, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x53f7, .value=0x1c, .type=IO_READ},
        {.addr=0x53f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01E3) {
    const struct CPU_State initial_cpu = {.pc=0x7b14, .a=0xea, .x=0x58, .y=0xff, .sp=0xa2, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x7b14, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x7b15, .a=0xd4, .x=0x58, .y=0xff, .sp=0xa2, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x7b14, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x7b14, .value=0x1c, .type=IO_READ},
        {.addr=0x7b15, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01E4) {
    const struct CPU_State initial_cpu = {.pc=0x95f2, .a=0xd2, .x=0x20, .y=0xff, .sp=0x0c, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x95f2, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x95f3, .a=0xa4, .x=0x20, .y=0xff, .sp=0x0c, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x95f2, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x95f2, .value=0x1c, .type=IO_READ},
        {.addr=0x95f3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01E5) {
    const struct CPU_State initial_cpu = {.pc=0x2d36, .a=0xf5, .x=0x63, .y=0x7c, .sp=0xf9, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x2d36, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x2d37, .a=0xea, .x=0x63, .y=0x7c, .sp=0xf9, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x2d36, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x2d36, .value=0x1c, .type=IO_READ},
        {.addr=0x2d37, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01E6) {
    const struct CPU_State initial_cpu = {.pc=0x10b9, .a=0x3a, .x=0x9e, .y=0x5a, .sp=0x1f, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x10b9, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x10ba, .a=0x74, .x=0x9e, .y=0x5a, .sp=0x1f, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x10b9, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x10b9, .value=0x1c, .type=IO_READ},
        {.addr=0x10ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x55c2, .a=0x5d, .x=0xb9, .y=0xbf, .sp=0x6b, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x55c2, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x55c3, .a=0xba, .x=0xb9, .y=0xbf, .sp=0x6b, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x55c2, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x55c2, .value=0x1c, .type=IO_READ},
        {.addr=0x55c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01E8) {
    const struct CPU_State initial_cpu = {.pc=0xa185, .a=0x5c, .x=0xdc, .y=0xb4, .sp=0x61, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xa185, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xa186, .a=0xb8, .x=0xdc, .y=0xb4, .sp=0x61, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xa185, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xa185, .value=0x1c, .type=IO_READ},
        {.addr=0xa186, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01E9) {
    const struct CPU_State initial_cpu = {.pc=0xbed1, .a=0xbb, .x=0x77, .y=0x04, .sp=0x8a, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xbed1, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xbed2, .a=0x76, .x=0x77, .y=0x04, .sp=0x8a, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xbed1, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xbed1, .value=0x1c, .type=IO_READ},
        {.addr=0xbed2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01EA) {
    const struct CPU_State initial_cpu = {.pc=0xa50a, .a=0xc4, .x=0x12, .y=0xbc, .sp=0x81, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xa50a, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xa50b, .a=0x88, .x=0x12, .y=0xbc, .sp=0x81, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xa50a, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xa50a, .value=0x1c, .type=IO_READ},
        {.addr=0xa50b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01EB) {
    const struct CPU_State initial_cpu = {.pc=0x6b57, .a=0x8d, .x=0x16, .y=0xf7, .sp=0xad, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x6b57, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x6b58, .a=0x1a, .x=0x16, .y=0xf7, .sp=0xad, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x6b57, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x6b57, .value=0x1c, .type=IO_READ},
        {.addr=0x6b58, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01EC) {
    const struct CPU_State initial_cpu = {.pc=0xa4fa, .a=0x85, .x=0xc8, .y=0x63, .sp=0xcc, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xa4fa, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xa4fb, .a=0x0a, .x=0xc8, .y=0x63, .sp=0xcc, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xa4fa, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xa4fa, .value=0x1c, .type=IO_READ},
        {.addr=0xa4fb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01ED) {
    const struct CPU_State initial_cpu = {.pc=0x2cda, .a=0x37, .x=0xb5, .y=0xf6, .sp=0xf1, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x2cda, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x2cdb, .a=0x6e, .x=0xb5, .y=0xf6, .sp=0xf1, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x2cda, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x2cda, .value=0x1c, .type=IO_READ},
        {.addr=0x2cdb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01EE) {
    const struct CPU_State initial_cpu = {.pc=0xaaef, .a=0x2a, .x=0x1e, .y=0x49, .sp=0x16, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xaaef, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xaaf0, .a=0x54, .x=0x1e, .y=0x49, .sp=0x16, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xaaef, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xaaef, .value=0x1c, .type=IO_READ},
        {.addr=0xaaf0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01EF) {
    const struct CPU_State initial_cpu = {.pc=0xf2fa, .a=0xb0, .x=0x9e, .y=0xb9, .sp=0x85, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xf2fa, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xf2fb, .a=0x60, .x=0x9e, .y=0xb9, .sp=0x85, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xf2fa, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xf2fa, .value=0x1c, .type=IO_READ},
        {.addr=0xf2fb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01F0) {
    const struct CPU_State initial_cpu = {.pc=0xf777, .a=0x92, .x=0xc7, .y=0xb5, .sp=0xa5, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xf777, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xf778, .a=0x24, .x=0xc7, .y=0xb5, .sp=0xa5, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xf777, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xf777, .value=0x1c, .type=IO_READ},
        {.addr=0xf778, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01F1) {
    const struct CPU_State initial_cpu = {.pc=0x538f, .a=0xb1, .x=0xf3, .y=0x1c, .sp=0x08, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x538f, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x5390, .a=0x62, .x=0xf3, .y=0x1c, .sp=0x08, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x538f, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x538f, .value=0x1c, .type=IO_READ},
        {.addr=0x5390, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01F2) {
    const struct CPU_State initial_cpu = {.pc=0x8a02, .a=0x56, .x=0x0b, .y=0x90, .sp=0x3e, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x8a02, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x8a03, .a=0xac, .x=0x0b, .y=0x90, .sp=0x3e, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x8a02, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x8a02, .value=0x1c, .type=IO_READ},
        {.addr=0x8a03, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01F3) {
    const struct CPU_State initial_cpu = {.pc=0x649b, .a=0xea, .x=0x65, .y=0xe5, .sp=0x0c, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x649b, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x649c, .a=0xd4, .x=0x65, .y=0xe5, .sp=0x0c, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x649b, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x649b, .value=0x1c, .type=IO_READ},
        {.addr=0x649c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01F4) {
    const struct CPU_State initial_cpu = {.pc=0xa3fa, .a=0xdf, .x=0x5c, .y=0xf9, .sp=0x18, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xa3fa, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xa3fb, .a=0xbe, .x=0x5c, .y=0xf9, .sp=0x18, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xa3fa, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xa3fa, .value=0x1c, .type=IO_READ},
        {.addr=0xa3fb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01F5) {
    const struct CPU_State initial_cpu = {.pc=0x996c, .a=0xb0, .x=0x99, .y=0x00, .sp=0x34, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x996c, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x996d, .a=0x60, .x=0x99, .y=0x00, .sp=0x34, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x996c, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x996c, .value=0x1c, .type=IO_READ},
        {.addr=0x996d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01F6) {
    const struct CPU_State initial_cpu = {.pc=0x804f, .a=0xd2, .x=0x20, .y=0x6a, .sp=0xd1, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x804f, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x8050, .a=0xa4, .x=0x20, .y=0x6a, .sp=0xd1, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x804f, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x804f, .value=0x1c, .type=IO_READ},
        {.addr=0x8050, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01F7) {
    const struct CPU_State initial_cpu = {.pc=0x9bce, .a=0x7f, .x=0xc7, .y=0xd4, .sp=0x8e, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x9bce, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x9bcf, .a=0xfe, .x=0xc7, .y=0xd4, .sp=0x8e, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x9bce, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x9bce, .value=0x1c, .type=IO_READ},
        {.addr=0x9bcf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01F8) {
    const struct CPU_State initial_cpu = {.pc=0x204e, .a=0x48, .x=0x14, .y=0xce, .sp=0xa2, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x204e, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x204f, .a=0x90, .x=0x14, .y=0xce, .sp=0xa2, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x204e, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x204e, .value=0x1c, .type=IO_READ},
        {.addr=0x204f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x966f, .a=0x9c, .x=0xec, .y=0xf2, .sp=0x31, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x966f, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x9670, .a=0x38, .x=0xec, .y=0xf2, .sp=0x31, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x966f, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x966f, .value=0x1c, .type=IO_READ},
        {.addr=0x9670, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01FA) {
    const struct CPU_State initial_cpu = {.pc=0x4cd6, .a=0x12, .x=0xd9, .y=0xb9, .sp=0xef, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x4cd6, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x4cd7, .a=0x24, .x=0xd9, .y=0xb9, .sp=0xef, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x4cd6, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x4cd6, .value=0x1c, .type=IO_READ},
        {.addr=0x4cd7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01FB) {
    const struct CPU_State initial_cpu = {.pc=0x9e36, .a=0x7b, .x=0x28, .y=0xd6, .sp=0x09, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x9e36, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x9e37, .a=0xf6, .x=0x28, .y=0xd6, .sp=0x09, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x9e36, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x9e36, .value=0x1c, .type=IO_READ},
        {.addr=0x9e37, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01FC) {
    const struct CPU_State initial_cpu = {.pc=0x1838, .a=0x9d, .x=0x7c, .y=0xb6, .sp=0x2f, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x1838, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x1839, .a=0x3a, .x=0x7c, .y=0xb6, .sp=0x2f, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x1838, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x1838, .value=0x1c, .type=IO_READ},
        {.addr=0x1839, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01FD) {
    const struct CPU_State initial_cpu = {.pc=0x5e02, .a=0x6c, .x=0x3f, .y=0x6a, .sp=0xa9, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x5e02, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x5e03, .a=0xd8, .x=0x3f, .y=0x6a, .sp=0xa9, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x5e02, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x5e02, .value=0x1c, .type=IO_READ},
        {.addr=0x5e03, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01FE) {
    const struct CPU_State initial_cpu = {.pc=0x8444, .a=0x58, .x=0xb5, .y=0xc2, .sp=0x39, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x8444, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x8445, .a=0xb0, .x=0xb5, .y=0xc2, .sp=0x39, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x8444, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x8444, .value=0x1c, .type=IO_READ},
        {.addr=0x8445, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x1064, .a=0x29, .x=0x27, .y=0x66, .sp=0x6c, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x1064, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x1065, .a=0x52, .x=0x27, .y=0x66, .sp=0x6c, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x1064, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x1064, .value=0x1c, .type=IO_READ},
        {.addr=0x1065, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0200) {
    const struct CPU_State initial_cpu = {.pc=0x9f4c, .a=0x89, .x=0xa2, .y=0xb4, .sp=0xb8, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x9f4c, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x9f4d, .a=0x12, .x=0xa2, .y=0xb4, .sp=0xb8, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x9f4c, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x9f4c, .value=0x1c, .type=IO_READ},
        {.addr=0x9f4d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0201) {
    const struct CPU_State initial_cpu = {.pc=0x4855, .a=0xa3, .x=0xbd, .y=0x91, .sp=0x48, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x4855, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x4856, .a=0x46, .x=0xbd, .y=0x91, .sp=0x48, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x4855, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x4855, .value=0x1c, .type=IO_READ},
        {.addr=0x4856, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0202) {
    const struct CPU_State initial_cpu = {.pc=0xe62c, .a=0x0b, .x=0x60, .y=0xf3, .sp=0x5e, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xe62c, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xe62d, .a=0x16, .x=0x60, .y=0xf3, .sp=0x5e, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xe62c, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xe62c, .value=0x1c, .type=IO_READ},
        {.addr=0xe62d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0203) {
    const struct CPU_State initial_cpu = {.pc=0x47a8, .a=0x26, .x=0x94, .y=0x6f, .sp=0x9c, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x47a8, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x47a9, .a=0x4c, .x=0x94, .y=0x6f, .sp=0x9c, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x47a8, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x47a8, .value=0x1c, .type=IO_READ},
        {.addr=0x47a9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0204) {
    const struct CPU_State initial_cpu = {.pc=0x0ef9, .a=0xce, .x=0x29, .y=0x57, .sp=0x38, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x0ef9, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x0efa, .a=0x9c, .x=0x29, .y=0x57, .sp=0x38, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x0ef9, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x0ef9, .value=0x1c, .type=IO_READ},
        {.addr=0x0efa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0205) {
    const struct CPU_State initial_cpu = {.pc=0x66c5, .a=0x7f, .x=0x47, .y=0x75, .sp=0xb6, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x66c5, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x66c6, .a=0xfe, .x=0x47, .y=0x75, .sp=0xb6, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x66c5, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x66c5, .value=0x1c, .type=IO_READ},
        {.addr=0x66c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0206) {
    const struct CPU_State initial_cpu = {.pc=0x1d14, .a=0xf0, .x=0x0d, .y=0x24, .sp=0x80, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x1d14, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x1d15, .a=0xe0, .x=0x0d, .y=0x24, .sp=0x80, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x1d14, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x1d14, .value=0x1c, .type=IO_READ},
        {.addr=0x1d15, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0207) {
    const struct CPU_State initial_cpu = {.pc=0xc415, .a=0x7c, .x=0xc2, .y=0x2f, .sp=0x48, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xc415, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xc416, .a=0xf8, .x=0xc2, .y=0x2f, .sp=0x48, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xc415, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xc415, .value=0x1c, .type=IO_READ},
        {.addr=0xc416, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0208) {
    const struct CPU_State initial_cpu = {.pc=0x5c15, .a=0x08, .x=0x9e, .y=0xa1, .sp=0xb3, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x5c15, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x5c16, .a=0x10, .x=0x9e, .y=0xa1, .sp=0xb3, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x5c15, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x5c15, .value=0x1c, .type=IO_READ},
        {.addr=0x5c16, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0209) {
    const struct CPU_State initial_cpu = {.pc=0x0784, .a=0xbf, .x=0xd1, .y=0xb9, .sp=0xfe, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x0784, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x0785, .a=0x7e, .x=0xd1, .y=0xb9, .sp=0xfe, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0784, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x0784, .value=0x1c, .type=IO_READ},
        {.addr=0x0785, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_020A) {
    const struct CPU_State initial_cpu = {.pc=0x9d5e, .a=0x33, .x=0xa5, .y=0x17, .sp=0xbe, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x9d5e, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x9d5f, .a=0x66, .x=0xa5, .y=0x17, .sp=0xbe, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x9d5e, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x9d5e, .value=0x1c, .type=IO_READ},
        {.addr=0x9d5f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_020B) {
    const struct CPU_State initial_cpu = {.pc=0xd237, .a=0x5f, .x=0x16, .y=0xdd, .sp=0x44, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xd237, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd238, .a=0xbe, .x=0x16, .y=0xdd, .sp=0x44, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xd237, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd237, .value=0x1c, .type=IO_READ},
        {.addr=0xd238, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_020C) {
    const struct CPU_State initial_cpu = {.pc=0xc5a0, .a=0xfa, .x=0x73, .y=0x11, .sp=0xb5, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xc5a0, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xc5a1, .a=0xf4, .x=0x73, .y=0x11, .sp=0xb5, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xc5a0, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xc5a0, .value=0x1c, .type=IO_READ},
        {.addr=0xc5a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_020D) {
    const struct CPU_State initial_cpu = {.pc=0x699b, .a=0x1e, .x=0x15, .y=0x35, .sp=0xba, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x699b, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x699c, .a=0x3c, .x=0x15, .y=0x35, .sp=0xba, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x699b, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x699b, .value=0x1c, .type=IO_READ},
        {.addr=0x699c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_020E) {
    const struct CPU_State initial_cpu = {.pc=0x1419, .a=0xb5, .x=0x66, .y=0xfa, .sp=0x36, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x1419, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x141a, .a=0x6a, .x=0x66, .y=0xfa, .sp=0x36, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x1419, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x1419, .value=0x1c, .type=IO_READ},
        {.addr=0x141a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_020F) {
    const struct CPU_State initial_cpu = {.pc=0xd8dc, .a=0x18, .x=0x9e, .y=0x71, .sp=0x22, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xd8dc, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd8dd, .a=0x30, .x=0x9e, .y=0x71, .sp=0x22, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xd8dc, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd8dc, .value=0x1c, .type=IO_READ},
        {.addr=0xd8dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0210) {
    const struct CPU_State initial_cpu = {.pc=0xedba, .a=0xb0, .x=0xf6, .y=0xbe, .sp=0x74, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xedba, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xedbb, .a=0x60, .x=0xf6, .y=0xbe, .sp=0x74, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xedba, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xedba, .value=0x1c, .type=IO_READ},
        {.addr=0xedbb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0211) {
    const struct CPU_State initial_cpu = {.pc=0xfe28, .a=0xf5, .x=0xa9, .y=0xa9, .sp=0xc2, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xfe28, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xfe29, .a=0xea, .x=0xa9, .y=0xa9, .sp=0xc2, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xfe28, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xfe28, .value=0x1c, .type=IO_READ},
        {.addr=0xfe29, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0212) {
    const struct CPU_State initial_cpu = {.pc=0xf8ad, .a=0xfb, .x=0x3b, .y=0xa5, .sp=0xbc, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xf8ad, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xf8ae, .a=0xf6, .x=0x3b, .y=0xa5, .sp=0xbc, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xf8ad, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xf8ad, .value=0x1c, .type=IO_READ},
        {.addr=0xf8ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0213) {
    const struct CPU_State initial_cpu = {.pc=0xfd52, .a=0x02, .x=0xf0, .y=0xa5, .sp=0x93, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xfd52, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xfd53, .a=0x04, .x=0xf0, .y=0xa5, .sp=0x93, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xfd52, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xfd52, .value=0x1c, .type=IO_READ},
        {.addr=0xfd53, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0214) {
    const struct CPU_State initial_cpu = {.pc=0xe741, .a=0x58, .x=0xe0, .y=0x55, .sp=0x7c, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xe741, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xe742, .a=0xb0, .x=0xe0, .y=0x55, .sp=0x7c, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xe741, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xe741, .value=0x1c, .type=IO_READ},
        {.addr=0xe742, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0215) {
    const struct CPU_State initial_cpu = {.pc=0x70e6, .a=0xc5, .x=0xc0, .y=0xbe, .sp=0x42, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x70e6, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x70e7, .a=0x8a, .x=0xc0, .y=0xbe, .sp=0x42, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x70e6, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x70e6, .value=0x1c, .type=IO_READ},
        {.addr=0x70e7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0216) {
    const struct CPU_State initial_cpu = {.pc=0xb427, .a=0x26, .x=0x0c, .y=0x3a, .sp=0xa4, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xb427, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xb428, .a=0x4c, .x=0x0c, .y=0x3a, .sp=0xa4, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xb427, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xb427, .value=0x1c, .type=IO_READ},
        {.addr=0xb428, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0217) {
    const struct CPU_State initial_cpu = {.pc=0x58a9, .a=0xd1, .x=0x21, .y=0x3f, .sp=0x49, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x58a9, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x58aa, .a=0xa2, .x=0x21, .y=0x3f, .sp=0x49, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x58a9, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x58a9, .value=0x1c, .type=IO_READ},
        {.addr=0x58aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0218) {
    const struct CPU_State initial_cpu = {.pc=0x2c6a, .a=0x16, .x=0x30, .y=0x71, .sp=0x80, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x2c6a, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x2c6b, .a=0x2c, .x=0x30, .y=0x71, .sp=0x80, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x2c6a, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x2c6a, .value=0x1c, .type=IO_READ},
        {.addr=0x2c6b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0219) {
    const struct CPU_State initial_cpu = {.pc=0x8fe1, .a=0xeb, .x=0x9c, .y=0xf1, .sp=0x2d, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x8fe1, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x8fe2, .a=0xd6, .x=0x9c, .y=0xf1, .sp=0x2d, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x8fe1, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x8fe1, .value=0x1c, .type=IO_READ},
        {.addr=0x8fe2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_021A) {
    const struct CPU_State initial_cpu = {.pc=0x18e5, .a=0xa7, .x=0x53, .y=0x56, .sp=0x18, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x18e5, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x18e6, .a=0x4e, .x=0x53, .y=0x56, .sp=0x18, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x18e5, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x18e5, .value=0x1c, .type=IO_READ},
        {.addr=0x18e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_021B) {
    const struct CPU_State initial_cpu = {.pc=0x78e1, .a=0x6e, .x=0x1d, .y=0xe4, .sp=0x50, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x78e1, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x78e2, .a=0xdc, .x=0x1d, .y=0xe4, .sp=0x50, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x78e1, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x78e1, .value=0x1c, .type=IO_READ},
        {.addr=0x78e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_021C) {
    const struct CPU_State initial_cpu = {.pc=0x392b, .a=0x41, .x=0xbd, .y=0x24, .sp=0x6a, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x392b, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x392c, .a=0x82, .x=0xbd, .y=0x24, .sp=0x6a, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x392b, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x392b, .value=0x1c, .type=IO_READ},
        {.addr=0x392c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_021D) {
    const struct CPU_State initial_cpu = {.pc=0xb5c1, .a=0x01, .x=0x93, .y=0xd0, .sp=0x3e, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xb5c1, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xb5c2, .a=0x02, .x=0x93, .y=0xd0, .sp=0x3e, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xb5c1, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xb5c1, .value=0x1c, .type=IO_READ},
        {.addr=0xb5c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_021E) {
    const struct CPU_State initial_cpu = {.pc=0x821c, .a=0x5c, .x=0x2b, .y=0xf5, .sp=0xaf, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x821c, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x821d, .a=0xb8, .x=0x2b, .y=0xf5, .sp=0xaf, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x821c, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x821c, .value=0x1c, .type=IO_READ},
        {.addr=0x821d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_021F) {
    const struct CPU_State initial_cpu = {.pc=0xd605, .a=0x63, .x=0x1a, .y=0x24, .sp=0x5b, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xd605, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd606, .a=0xc6, .x=0x1a, .y=0x24, .sp=0x5b, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xd605, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd605, .value=0x1c, .type=IO_READ},
        {.addr=0xd606, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0220) {
    const struct CPU_State initial_cpu = {.pc=0xab01, .a=0xf1, .x=0xed, .y=0xac, .sp=0x13, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xab01, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xab02, .a=0xe2, .x=0xed, .y=0xac, .sp=0x13, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xab01, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xab01, .value=0x1c, .type=IO_READ},
        {.addr=0xab02, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0221) {
    const struct CPU_State initial_cpu = {.pc=0x10be, .a=0x06, .x=0x0a, .y=0xd6, .sp=0x09, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x10be, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x10bf, .a=0x0c, .x=0x0a, .y=0xd6, .sp=0x09, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x10be, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x10be, .value=0x1c, .type=IO_READ},
        {.addr=0x10bf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0222) {
    const struct CPU_State initial_cpu = {.pc=0xe413, .a=0x97, .x=0xca, .y=0x0b, .sp=0xdf, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xe413, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xe414, .a=0x2e, .x=0xca, .y=0x0b, .sp=0xdf, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xe413, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xe413, .value=0x1c, .type=IO_READ},
        {.addr=0xe414, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0223) {
    const struct CPU_State initial_cpu = {.pc=0xf204, .a=0x29, .x=0x4b, .y=0x2e, .sp=0xaf, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xf204, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xf205, .a=0x52, .x=0x4b, .y=0x2e, .sp=0xaf, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xf204, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xf204, .value=0x1c, .type=IO_READ},
        {.addr=0xf205, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0224) {
    const struct CPU_State initial_cpu = {.pc=0x149f, .a=0x98, .x=0x99, .y=0x23, .sp=0xdf, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x149f, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x14a0, .a=0x30, .x=0x99, .y=0x23, .sp=0xdf, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x149f, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x149f, .value=0x1c, .type=IO_READ},
        {.addr=0x14a0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0225) {
    const struct CPU_State initial_cpu = {.pc=0x8e32, .a=0x81, .x=0xa9, .y=0x63, .sp=0x8c, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x8e32, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x8e33, .a=0x02, .x=0xa9, .y=0x63, .sp=0x8c, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x8e32, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x8e32, .value=0x1c, .type=IO_READ},
        {.addr=0x8e33, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0226) {
    const struct CPU_State initial_cpu = {.pc=0xafe9, .a=0x2b, .x=0x3b, .y=0x77, .sp=0x9f, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xafe9, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xafea, .a=0x56, .x=0x3b, .y=0x77, .sp=0x9f, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xafe9, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xafe9, .value=0x1c, .type=IO_READ},
        {.addr=0xafea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0227) {
    const struct CPU_State initial_cpu = {.pc=0x9f87, .a=0x38, .x=0x6c, .y=0x72, .sp=0xf7, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x9f87, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x9f88, .a=0x70, .x=0x6c, .y=0x72, .sp=0xf7, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x9f87, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x9f87, .value=0x1c, .type=IO_READ},
        {.addr=0x9f88, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0228) {
    const struct CPU_State initial_cpu = {.pc=0x55f3, .a=0x85, .x=0x38, .y=0x9b, .sp=0xd7, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x55f3, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x55f4, .a=0x0a, .x=0x38, .y=0x9b, .sp=0xd7, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x55f3, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x55f3, .value=0x1c, .type=IO_READ},
        {.addr=0x55f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0229) {
    const struct CPU_State initial_cpu = {.pc=0x2eb8, .a=0xd1, .x=0xfe, .y=0x08, .sp=0x6d, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x2eb8, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x2eb9, .a=0xa2, .x=0xfe, .y=0x08, .sp=0x6d, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x2eb8, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x2eb8, .value=0x1c, .type=IO_READ},
        {.addr=0x2eb9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_022A) {
    const struct CPU_State initial_cpu = {.pc=0xfe22, .a=0x7e, .x=0x67, .y=0x60, .sp=0x54, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xfe22, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xfe23, .a=0xfc, .x=0x67, .y=0x60, .sp=0x54, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xfe22, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xfe22, .value=0x1c, .type=IO_READ},
        {.addr=0xfe23, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_022B) {
    const struct CPU_State initial_cpu = {.pc=0x0feb, .a=0x8d, .x=0x6d, .y=0xf9, .sp=0x03, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x0feb, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x0fec, .a=0x1a, .x=0x6d, .y=0xf9, .sp=0x03, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x0feb, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x0feb, .value=0x1c, .type=IO_READ},
        {.addr=0x0fec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_022C) {
    const struct CPU_State initial_cpu = {.pc=0xe26e, .a=0xab, .x=0xfe, .y=0x3b, .sp=0x36, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xe26e, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xe26f, .a=0x56, .x=0xfe, .y=0x3b, .sp=0x36, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xe26e, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xe26e, .value=0x1c, .type=IO_READ},
        {.addr=0xe26f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_022D) {
    const struct CPU_State initial_cpu = {.pc=0xe666, .a=0x46, .x=0xb6, .y=0x83, .sp=0x1d, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xe666, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xe667, .a=0x8c, .x=0xb6, .y=0x83, .sp=0x1d, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xe666, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xe666, .value=0x1c, .type=IO_READ},
        {.addr=0xe667, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_022E) {
    const struct CPU_State initial_cpu = {.pc=0xad60, .a=0x78, .x=0xdc, .y=0x2d, .sp=0x20, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xad60, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xad61, .a=0xf0, .x=0xdc, .y=0x2d, .sp=0x20, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xad60, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xad60, .value=0x1c, .type=IO_READ},
        {.addr=0xad61, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_022F) {
    const struct CPU_State initial_cpu = {.pc=0xc398, .a=0x88, .x=0xeb, .y=0x11, .sp=0xb6, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xc398, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xc399, .a=0x10, .x=0xeb, .y=0x11, .sp=0xb6, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xc398, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xc398, .value=0x1c, .type=IO_READ},
        {.addr=0xc399, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0230) {
    const struct CPU_State initial_cpu = {.pc=0xb580, .a=0xed, .x=0x29, .y=0x66, .sp=0x40, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xb580, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xb581, .a=0xda, .x=0x29, .y=0x66, .sp=0x40, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xb580, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xb580, .value=0x1c, .type=IO_READ},
        {.addr=0xb581, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0231) {
    const struct CPU_State initial_cpu = {.pc=0xa018, .a=0x8c, .x=0x76, .y=0xc0, .sp=0xa1, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xa018, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xa019, .a=0x18, .x=0x76, .y=0xc0, .sp=0xa1, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xa018, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xa018, .value=0x1c, .type=IO_READ},
        {.addr=0xa019, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0232) {
    const struct CPU_State initial_cpu = {.pc=0x8f2a, .a=0x54, .x=0xef, .y=0x5d, .sp=0x9f, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x8f2a, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x8f2b, .a=0xa8, .x=0xef, .y=0x5d, .sp=0x9f, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x8f2a, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x8f2a, .value=0x1c, .type=IO_READ},
        {.addr=0x8f2b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0233) {
    const struct CPU_State initial_cpu = {.pc=0x7bff, .a=0xcb, .x=0x81, .y=0x05, .sp=0x6a, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x7bff, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x7c00, .a=0x96, .x=0x81, .y=0x05, .sp=0x6a, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x7bff, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x7bff, .value=0x1c, .type=IO_READ},
        {.addr=0x7c00, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0234) {
    const struct CPU_State initial_cpu = {.pc=0x35ae, .a=0xe3, .x=0xc9, .y=0xb3, .sp=0x91, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x35ae, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x35af, .a=0xc6, .x=0xc9, .y=0xb3, .sp=0x91, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x35ae, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x35ae, .value=0x1c, .type=IO_READ},
        {.addr=0x35af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0235) {
    const struct CPU_State initial_cpu = {.pc=0xb4d9, .a=0xb0, .x=0x76, .y=0x51, .sp=0xb4, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xb4d9, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xb4da, .a=0x60, .x=0x76, .y=0x51, .sp=0xb4, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xb4d9, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xb4d9, .value=0x1c, .type=IO_READ},
        {.addr=0xb4da, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0236) {
    const struct CPU_State initial_cpu = {.pc=0x512f, .a=0x27, .x=0x5f, .y=0x46, .sp=0x53, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x512f, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x5130, .a=0x4e, .x=0x5f, .y=0x46, .sp=0x53, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x512f, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x512f, .value=0x1c, .type=IO_READ},
        {.addr=0x5130, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0237) {
    const struct CPU_State initial_cpu = {.pc=0x34ce, .a=0xae, .x=0xa1, .y=0x97, .sp=0x61, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x34ce, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x34cf, .a=0x5c, .x=0xa1, .y=0x97, .sp=0x61, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x34ce, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x34ce, .value=0x1c, .type=IO_READ},
        {.addr=0x34cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0238) {
    const struct CPU_State initial_cpu = {.pc=0x7874, .a=0x5f, .x=0x45, .y=0x96, .sp=0xa6, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x7874, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x7875, .a=0xbe, .x=0x45, .y=0x96, .sp=0xa6, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x7874, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x7874, .value=0x1c, .type=IO_READ},
        {.addr=0x7875, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0239) {
    const struct CPU_State initial_cpu = {.pc=0xd8f4, .a=0xa4, .x=0x0f, .y=0x43, .sp=0xc5, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xd8f4, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd8f5, .a=0x48, .x=0x0f, .y=0x43, .sp=0xc5, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xd8f4, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd8f4, .value=0x1c, .type=IO_READ},
        {.addr=0xd8f5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_023A) {
    const struct CPU_State initial_cpu = {.pc=0xfb36, .a=0x23, .x=0x36, .y=0x81, .sp=0xbb, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xfb36, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xfb37, .a=0x46, .x=0x36, .y=0x81, .sp=0xbb, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xfb36, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xfb36, .value=0x1c, .type=IO_READ},
        {.addr=0xfb37, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_023B) {
    const struct CPU_State initial_cpu = {.pc=0x0448, .a=0x33, .x=0x2a, .y=0xf7, .sp=0x37, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x0448, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x0449, .a=0x66, .x=0x2a, .y=0xf7, .sp=0x37, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x0448, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x0448, .value=0x1c, .type=IO_READ},
        {.addr=0x0449, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_023C) {
    const struct CPU_State initial_cpu = {.pc=0x3171, .a=0x3c, .x=0xa0, .y=0x03, .sp=0xf4, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x3171, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x3172, .a=0x78, .x=0xa0, .y=0x03, .sp=0xf4, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x3171, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x3171, .value=0x1c, .type=IO_READ},
        {.addr=0x3172, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_023D) {
    const struct CPU_State initial_cpu = {.pc=0xb729, .a=0x6f, .x=0xd3, .y=0x9c, .sp=0x9f, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xb729, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xb72a, .a=0xde, .x=0xd3, .y=0x9c, .sp=0x9f, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xb729, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xb729, .value=0x1c, .type=IO_READ},
        {.addr=0xb72a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_023E) {
    const struct CPU_State initial_cpu = {.pc=0x5b69, .a=0x08, .x=0x21, .y=0x17, .sp=0xe8, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x5b69, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x5b6a, .a=0x10, .x=0x21, .y=0x17, .sp=0xe8, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x5b69, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x5b69, .value=0x1c, .type=IO_READ},
        {.addr=0x5b6a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_023F) {
    const struct CPU_State initial_cpu = {.pc=0xd34d, .a=0xec, .x=0x34, .y=0x8f, .sp=0x12, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xd34d, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd34e, .a=0xd8, .x=0x34, .y=0x8f, .sp=0x12, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xd34d, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd34d, .value=0x1c, .type=IO_READ},
        {.addr=0xd34e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0240) {
    const struct CPU_State initial_cpu = {.pc=0xd2c1, .a=0x60, .x=0x96, .y=0x98, .sp=0xf4, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xd2c1, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd2c2, .a=0xc0, .x=0x96, .y=0x98, .sp=0xf4, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xd2c1, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd2c1, .value=0x1c, .type=IO_READ},
        {.addr=0xd2c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0241) {
    const struct CPU_State initial_cpu = {.pc=0xaec1, .a=0xcb, .x=0xbf, .y=0x1b, .sp=0x61, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xaec1, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xaec2, .a=0x96, .x=0xbf, .y=0x1b, .sp=0x61, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xaec1, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xaec1, .value=0x1c, .type=IO_READ},
        {.addr=0xaec2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0242) {
    const struct CPU_State initial_cpu = {.pc=0x79f6, .a=0xbe, .x=0x60, .y=0x0d, .sp=0x4d, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x79f6, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x79f7, .a=0x7c, .x=0x60, .y=0x0d, .sp=0x4d, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x79f6, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x79f6, .value=0x1c, .type=IO_READ},
        {.addr=0x79f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0243) {
    const struct CPU_State initial_cpu = {.pc=0x0846, .a=0x32, .x=0x7a, .y=0x61, .sp=0x74, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x0846, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x0847, .a=0x64, .x=0x7a, .y=0x61, .sp=0x74, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x0846, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x0846, .value=0x1c, .type=IO_READ},
        {.addr=0x0847, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0244) {
    const struct CPU_State initial_cpu = {.pc=0xcff5, .a=0x5f, .x=0xd6, .y=0xda, .sp=0x2f, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xcff5, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xcff6, .a=0xbe, .x=0xd6, .y=0xda, .sp=0x2f, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xcff5, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xcff5, .value=0x1c, .type=IO_READ},
        {.addr=0xcff6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0245) {
    const struct CPU_State initial_cpu = {.pc=0xaffc, .a=0x94, .x=0x5e, .y=0x30, .sp=0x62, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xaffc, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xaffd, .a=0x28, .x=0x5e, .y=0x30, .sp=0x62, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xaffc, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xaffc, .value=0x1c, .type=IO_READ},
        {.addr=0xaffd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0246) {
    const struct CPU_State initial_cpu = {.pc=0x6afe, .a=0x21, .x=0x72, .y=0x98, .sp=0xef, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x6afe, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x6aff, .a=0x42, .x=0x72, .y=0x98, .sp=0xef, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x6afe, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x6afe, .value=0x1c, .type=IO_READ},
        {.addr=0x6aff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0247) {
    const struct CPU_State initial_cpu = {.pc=0x366d, .a=0x22, .x=0xcb, .y=0xee, .sp=0xc6, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x366d, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x366e, .a=0x44, .x=0xcb, .y=0xee, .sp=0xc6, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x366d, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x366d, .value=0x1c, .type=IO_READ},
        {.addr=0x366e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0248) {
    const struct CPU_State initial_cpu = {.pc=0x75f8, .a=0xbb, .x=0x6f, .y=0x2d, .sp=0xfb, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x75f8, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x75f9, .a=0x76, .x=0x6f, .y=0x2d, .sp=0xfb, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x75f8, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x75f8, .value=0x1c, .type=IO_READ},
        {.addr=0x75f9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0249) {
    const struct CPU_State initial_cpu = {.pc=0x77f9, .a=0x09, .x=0x12, .y=0x93, .sp=0xaf, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x77f9, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x77fa, .a=0x12, .x=0x12, .y=0x93, .sp=0xaf, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x77f9, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x77f9, .value=0x1c, .type=IO_READ},
        {.addr=0x77fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_024A) {
    const struct CPU_State initial_cpu = {.pc=0x3e97, .a=0x5b, .x=0x0c, .y=0xd1, .sp=0x9a, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x3e97, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x3e98, .a=0xb6, .x=0x0c, .y=0xd1, .sp=0x9a, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x3e97, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x3e97, .value=0x1c, .type=IO_READ},
        {.addr=0x3e98, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_024B) {
    const struct CPU_State initial_cpu = {.pc=0xe1f5, .a=0x4e, .x=0xf6, .y=0x50, .sp=0xd4, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xe1f5, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xe1f6, .a=0x9c, .x=0xf6, .y=0x50, .sp=0xd4, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xe1f5, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xe1f5, .value=0x1c, .type=IO_READ},
        {.addr=0xe1f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_024C) {
    const struct CPU_State initial_cpu = {.pc=0xad5d, .a=0x4c, .x=0x8e, .y=0xda, .sp=0x4b, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xad5d, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xad5e, .a=0x98, .x=0x8e, .y=0xda, .sp=0x4b, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xad5d, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xad5d, .value=0x1c, .type=IO_READ},
        {.addr=0xad5e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_024D) {
    const struct CPU_State initial_cpu = {.pc=0x4b38, .a=0x45, .x=0x7a, .y=0x7c, .sp=0xde, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x4b38, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x4b39, .a=0x8a, .x=0x7a, .y=0x7c, .sp=0xde, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x4b38, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x4b38, .value=0x1c, .type=IO_READ},
        {.addr=0x4b39, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_024E) {
    const struct CPU_State initial_cpu = {.pc=0x27fc, .a=0xfa, .x=0x7e, .y=0x41, .sp=0xcd, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x27fc, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x27fd, .a=0xf4, .x=0x7e, .y=0x41, .sp=0xcd, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x27fc, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x27fc, .value=0x1c, .type=IO_READ},
        {.addr=0x27fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_024F) {
    const struct CPU_State initial_cpu = {.pc=0x2068, .a=0xef, .x=0x3b, .y=0x22, .sp=0x84, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x2068, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x2069, .a=0xde, .x=0x3b, .y=0x22, .sp=0x84, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x2068, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x2068, .value=0x1c, .type=IO_READ},
        {.addr=0x2069, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0250) {
    const struct CPU_State initial_cpu = {.pc=0x12ee, .a=0x4c, .x=0xb9, .y=0xa0, .sp=0x7c, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x12ee, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x12ef, .a=0x98, .x=0xb9, .y=0xa0, .sp=0x7c, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x12ee, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x12ee, .value=0x1c, .type=IO_READ},
        {.addr=0x12ef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0251) {
    const struct CPU_State initial_cpu = {.pc=0xc964, .a=0x53, .x=0x71, .y=0xcd, .sp=0x61, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xc964, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xc965, .a=0xa6, .x=0x71, .y=0xcd, .sp=0x61, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xc964, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xc964, .value=0x1c, .type=IO_READ},
        {.addr=0xc965, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0252) {
    const struct CPU_State initial_cpu = {.pc=0x1b70, .a=0xb5, .x=0x6a, .y=0x7e, .sp=0xb8, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x1b70, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x1b71, .a=0x6a, .x=0x6a, .y=0x7e, .sp=0xb8, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x1b70, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x1b70, .value=0x1c, .type=IO_READ},
        {.addr=0x1b71, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0253) {
    const struct CPU_State initial_cpu = {.pc=0x1523, .a=0x0d, .x=0x16, .y=0x18, .sp=0x08, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x1523, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x1524, .a=0x1a, .x=0x16, .y=0x18, .sp=0x08, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x1523, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x1523, .value=0x1c, .type=IO_READ},
        {.addr=0x1524, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0254) {
    const struct CPU_State initial_cpu = {.pc=0x55e2, .a=0x6e, .x=0x00, .y=0x92, .sp=0xa8, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x55e2, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x55e3, .a=0xdc, .x=0x00, .y=0x92, .sp=0xa8, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x55e2, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x55e2, .value=0x1c, .type=IO_READ},
        {.addr=0x55e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0255) {
    const struct CPU_State initial_cpu = {.pc=0xd47a, .a=0xf2, .x=0x9e, .y=0x03, .sp=0x72, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xd47a, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd47b, .a=0xe4, .x=0x9e, .y=0x03, .sp=0x72, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xd47a, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd47a, .value=0x1c, .type=IO_READ},
        {.addr=0xd47b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0256) {
    const struct CPU_State initial_cpu = {.pc=0x92e1, .a=0x62, .x=0x04, .y=0x71, .sp=0x9e, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x92e1, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x92e2, .a=0xc4, .x=0x04, .y=0x71, .sp=0x9e, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x92e1, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x92e1, .value=0x1c, .type=IO_READ},
        {.addr=0x92e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0257) {
    const struct CPU_State initial_cpu = {.pc=0x13de, .a=0x46, .x=0xd6, .y=0xa3, .sp=0x1e, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x13de, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x13df, .a=0x8c, .x=0xd6, .y=0xa3, .sp=0x1e, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x13de, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x13de, .value=0x1c, .type=IO_READ},
        {.addr=0x13df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0258) {
    const struct CPU_State initial_cpu = {.pc=0xccc7, .a=0x08, .x=0xae, .y=0xbf, .sp=0x1d, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xccc7, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xccc8, .a=0x10, .x=0xae, .y=0xbf, .sp=0x1d, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xccc7, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xccc7, .value=0x1c, .type=IO_READ},
        {.addr=0xccc8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0259) {
    const struct CPU_State initial_cpu = {.pc=0xd33f, .a=0x85, .x=0xec, .y=0x1f, .sp=0xc0, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xd33f, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd340, .a=0x0a, .x=0xec, .y=0x1f, .sp=0xc0, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xd33f, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd33f, .value=0x1c, .type=IO_READ},
        {.addr=0xd340, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_025A) {
    const struct CPU_State initial_cpu = {.pc=0x48b0, .a=0xb8, .x=0x55, .y=0x7e, .sp=0x58, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x48b0, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x48b1, .a=0x70, .x=0x55, .y=0x7e, .sp=0x58, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x48b0, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x48b0, .value=0x1c, .type=IO_READ},
        {.addr=0x48b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_025B) {
    const struct CPU_State initial_cpu = {.pc=0x96d6, .a=0x4f, .x=0x82, .y=0x99, .sp=0xf7, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x96d6, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x96d7, .a=0x9e, .x=0x82, .y=0x99, .sp=0xf7, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x96d6, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x96d6, .value=0x1c, .type=IO_READ},
        {.addr=0x96d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_025C) {
    const struct CPU_State initial_cpu = {.pc=0xf300, .a=0xe4, .x=0xb0, .y=0x2d, .sp=0x7c, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xf300, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xf301, .a=0xc8, .x=0xb0, .y=0x2d, .sp=0x7c, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xf300, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xf300, .value=0x1c, .type=IO_READ},
        {.addr=0xf301, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_025D) {
    const struct CPU_State initial_cpu = {.pc=0xfbff, .a=0xf0, .x=0x29, .y=0xf1, .sp=0x43, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xfbff, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xfc00, .a=0xe0, .x=0x29, .y=0xf1, .sp=0x43, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xfbff, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xfbff, .value=0x1c, .type=IO_READ},
        {.addr=0xfc00, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_025E) {
    const struct CPU_State initial_cpu = {.pc=0x677d, .a=0x81, .x=0x0c, .y=0x50, .sp=0x2b, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x677d, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x677e, .a=0x02, .x=0x0c, .y=0x50, .sp=0x2b, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x677d, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x677d, .value=0x1c, .type=IO_READ},
        {.addr=0x677e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_025F) {
    const struct CPU_State initial_cpu = {.pc=0x4dab, .a=0x50, .x=0xe7, .y=0x4d, .sp=0x3f, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x4dab, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x4dac, .a=0xa0, .x=0xe7, .y=0x4d, .sp=0x3f, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x4dab, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x4dab, .value=0x1c, .type=IO_READ},
        {.addr=0x4dac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0260) {
    const struct CPU_State initial_cpu = {.pc=0xc5c2, .a=0xe7, .x=0xe3, .y=0xe2, .sp=0xf8, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xc5c2, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xc5c3, .a=0xce, .x=0xe3, .y=0xe2, .sp=0xf8, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xc5c2, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xc5c2, .value=0x1c, .type=IO_READ},
        {.addr=0xc5c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0261) {
    const struct CPU_State initial_cpu = {.pc=0xceb7, .a=0xdb, .x=0x2d, .y=0x0f, .sp=0x9a, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xceb7, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xceb8, .a=0xb6, .x=0x2d, .y=0x0f, .sp=0x9a, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xceb7, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xceb7, .value=0x1c, .type=IO_READ},
        {.addr=0xceb8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0262) {
    const struct CPU_State initial_cpu = {.pc=0xebb2, .a=0xaf, .x=0xea, .y=0xf4, .sp=0x76, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xebb2, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xebb3, .a=0x5e, .x=0xea, .y=0xf4, .sp=0x76, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xebb2, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xebb2, .value=0x1c, .type=IO_READ},
        {.addr=0xebb3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0263) {
    const struct CPU_State initial_cpu = {.pc=0x0926, .a=0x29, .x=0x99, .y=0x8e, .sp=0x63, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x0926, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x0927, .a=0x52, .x=0x99, .y=0x8e, .sp=0x63, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x0926, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x0926, .value=0x1c, .type=IO_READ},
        {.addr=0x0927, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0264) {
    const struct CPU_State initial_cpu = {.pc=0x7a42, .a=0x4d, .x=0x95, .y=0xed, .sp=0x45, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x7a42, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x7a43, .a=0x9a, .x=0x95, .y=0xed, .sp=0x45, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x7a42, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x7a42, .value=0x1c, .type=IO_READ},
        {.addr=0x7a43, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0265) {
    const struct CPU_State initial_cpu = {.pc=0x20e9, .a=0xed, .x=0xb3, .y=0xb4, .sp=0xa4, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x20e9, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x20ea, .a=0xda, .x=0xb3, .y=0xb4, .sp=0xa4, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x20e9, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x20e9, .value=0x1c, .type=IO_READ},
        {.addr=0x20ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0266) {
    const struct CPU_State initial_cpu = {.pc=0x4cf6, .a=0x01, .x=0x21, .y=0x7d, .sp=0x26, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x4cf6, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x4cf7, .a=0x02, .x=0x21, .y=0x7d, .sp=0x26, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x4cf6, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x4cf6, .value=0x1c, .type=IO_READ},
        {.addr=0x4cf7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0267) {
    const struct CPU_State initial_cpu = {.pc=0xa233, .a=0x45, .x=0xbe, .y=0x73, .sp=0x90, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xa233, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xa234, .a=0x8a, .x=0xbe, .y=0x73, .sp=0x90, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xa233, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xa233, .value=0x1c, .type=IO_READ},
        {.addr=0xa234, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0268) {
    const struct CPU_State initial_cpu = {.pc=0xc672, .a=0xec, .x=0xd5, .y=0x10, .sp=0x64, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xc672, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xc673, .a=0xd8, .x=0xd5, .y=0x10, .sp=0x64, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xc672, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xc672, .value=0x1c, .type=IO_READ},
        {.addr=0xc673, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0269) {
    const struct CPU_State initial_cpu = {.pc=0x01bd, .a=0xcc, .x=0x79, .y=0xba, .sp=0x71, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x01be, .a=0x98, .x=0x79, .y=0xba, .sp=0x71, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x01bd, .value=0x1c, .type=IO_READ},
        {.addr=0x01be, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_026A) {
    const struct CPU_State initial_cpu = {.pc=0x9c5b, .a=0x71, .x=0xd1, .y=0xa3, .sp=0xe1, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x9c5b, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x9c5c, .a=0xe2, .x=0xd1, .y=0xa3, .sp=0xe1, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x9c5b, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x9c5b, .value=0x1c, .type=IO_READ},
        {.addr=0x9c5c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_026B) {
    const struct CPU_State initial_cpu = {.pc=0x1759, .a=0xaa, .x=0xd4, .y=0x40, .sp=0x48, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x1759, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x175a, .a=0x54, .x=0xd4, .y=0x40, .sp=0x48, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x1759, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x1759, .value=0x1c, .type=IO_READ},
        {.addr=0x175a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_026C) {
    const struct CPU_State initial_cpu = {.pc=0x2b69, .a=0x16, .x=0x99, .y=0x41, .sp=0xa0, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x2b69, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x2b6a, .a=0x2c, .x=0x99, .y=0x41, .sp=0xa0, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x2b69, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x2b69, .value=0x1c, .type=IO_READ},
        {.addr=0x2b6a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_026D) {
    const struct CPU_State initial_cpu = {.pc=0x4223, .a=0x3e, .x=0x93, .y=0x74, .sp=0xb7, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x4223, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x4224, .a=0x7c, .x=0x93, .y=0x74, .sp=0xb7, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x4223, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x4223, .value=0x1c, .type=IO_READ},
        {.addr=0x4224, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_026E) {
    const struct CPU_State initial_cpu = {.pc=0x74c4, .a=0xa8, .x=0x98, .y=0xd2, .sp=0xce, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x74c4, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x74c5, .a=0x50, .x=0x98, .y=0xd2, .sp=0xce, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x74c4, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x74c4, .value=0x1c, .type=IO_READ},
        {.addr=0x74c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_026F) {
    const struct CPU_State initial_cpu = {.pc=0x3d3b, .a=0x21, .x=0xaa, .y=0xfd, .sp=0xa8, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x3d3b, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x3d3c, .a=0x42, .x=0xaa, .y=0xfd, .sp=0xa8, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x3d3b, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x3d3b, .value=0x1c, .type=IO_READ},
        {.addr=0x3d3c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0270) {
    const struct CPU_State initial_cpu = {.pc=0xeefa, .a=0x34, .x=0x42, .y=0x98, .sp=0x5f, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xeefa, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xeefb, .a=0x68, .x=0x42, .y=0x98, .sp=0x5f, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xeefa, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xeefa, .value=0x1c, .type=IO_READ},
        {.addr=0xeefb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0271) {
    const struct CPU_State initial_cpu = {.pc=0x104b, .a=0x53, .x=0x77, .y=0xdd, .sp=0xd0, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x104b, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x104c, .a=0xa6, .x=0x77, .y=0xdd, .sp=0xd0, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x104b, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x104b, .value=0x1c, .type=IO_READ},
        {.addr=0x104c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0272) {
    const struct CPU_State initial_cpu = {.pc=0x0c62, .a=0xb2, .x=0x54, .y=0x58, .sp=0xe3, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x0c62, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x0c63, .a=0x64, .x=0x54, .y=0x58, .sp=0xe3, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0c62, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x0c62, .value=0x1c, .type=IO_READ},
        {.addr=0x0c63, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0273) {
    const struct CPU_State initial_cpu = {.pc=0x84e2, .a=0xa3, .x=0x11, .y=0xda, .sp=0xa7, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x84e2, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x84e3, .a=0x46, .x=0x11, .y=0xda, .sp=0xa7, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x84e2, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x84e2, .value=0x1c, .type=IO_READ},
        {.addr=0x84e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0274) {
    const struct CPU_State initial_cpu = {.pc=0xfdb2, .a=0x0b, .x=0xbf, .y=0xd4, .sp=0x2d, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xfdb2, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xfdb3, .a=0x16, .x=0xbf, .y=0xd4, .sp=0x2d, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xfdb2, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xfdb2, .value=0x1c, .type=IO_READ},
        {.addr=0xfdb3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0275) {
    const struct CPU_State initial_cpu = {.pc=0x8ac8, .a=0xb8, .x=0xae, .y=0x2a, .sp=0xab, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x8ac8, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x8ac9, .a=0x70, .x=0xae, .y=0x2a, .sp=0xab, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x8ac8, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x8ac8, .value=0x1c, .type=IO_READ},
        {.addr=0x8ac9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0276) {
    const struct CPU_State initial_cpu = {.pc=0x6eaa, .a=0x8d, .x=0x55, .y=0xa7, .sp=0x37, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x6eaa, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x6eab, .a=0x1a, .x=0x55, .y=0xa7, .sp=0x37, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x6eaa, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x6eaa, .value=0x1c, .type=IO_READ},
        {.addr=0x6eab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0277) {
    const struct CPU_State initial_cpu = {.pc=0x94c8, .a=0xa6, .x=0x60, .y=0x5c, .sp=0x91, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x94c8, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x94c9, .a=0x4c, .x=0x60, .y=0x5c, .sp=0x91, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x94c8, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x94c8, .value=0x1c, .type=IO_READ},
        {.addr=0x94c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0278) {
    const struct CPU_State initial_cpu = {.pc=0xafff, .a=0x84, .x=0xa0, .y=0x43, .sp=0x7c, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xafff, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xb000, .a=0x08, .x=0xa0, .y=0x43, .sp=0x7c, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xafff, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xafff, .value=0x1c, .type=IO_READ},
        {.addr=0xb000, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0279) {
    const struct CPU_State initial_cpu = {.pc=0x0a7e, .a=0x30, .x=0xda, .y=0xe6, .sp=0xe1, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x0a7e, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x0a7f, .a=0x60, .x=0xda, .y=0xe6, .sp=0xe1, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0a7e, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x0a7e, .value=0x1c, .type=IO_READ},
        {.addr=0x0a7f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_027A) {
    const struct CPU_State initial_cpu = {.pc=0xa358, .a=0xae, .x=0x99, .y=0x81, .sp=0xe4, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xa358, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xa359, .a=0x5c, .x=0x99, .y=0x81, .sp=0xe4, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xa358, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xa358, .value=0x1c, .type=IO_READ},
        {.addr=0xa359, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_027B) {
    const struct CPU_State initial_cpu = {.pc=0xacea, .a=0xe7, .x=0x5e, .y=0x0b, .sp=0xaa, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xacea, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xaceb, .a=0xce, .x=0x5e, .y=0x0b, .sp=0xaa, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xacea, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xacea, .value=0x1c, .type=IO_READ},
        {.addr=0xaceb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_027C) {
    const struct CPU_State initial_cpu = {.pc=0x3e27, .a=0x3e, .x=0xc7, .y=0x65, .sp=0xa3, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x3e27, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x3e28, .a=0x7c, .x=0xc7, .y=0x65, .sp=0xa3, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x3e27, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x3e27, .value=0x1c, .type=IO_READ},
        {.addr=0x3e28, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_027D) {
    const struct CPU_State initial_cpu = {.pc=0x6b89, .a=0x20, .x=0xf3, .y=0xe4, .sp=0x83, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x6b89, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x6b8a, .a=0x40, .x=0xf3, .y=0xe4, .sp=0x83, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x6b89, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x6b89, .value=0x1c, .type=IO_READ},
        {.addr=0x6b8a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_027E) {
    const struct CPU_State initial_cpu = {.pc=0x3f02, .a=0x68, .x=0xad, .y=0x67, .sp=0x4c, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x3f02, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x3f03, .a=0xd0, .x=0xad, .y=0x67, .sp=0x4c, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x3f02, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x3f02, .value=0x1c, .type=IO_READ},
        {.addr=0x3f03, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_027F) {
    const struct CPU_State initial_cpu = {.pc=0x6efa, .a=0x50, .x=0xdf, .y=0x4b, .sp=0x87, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x6efa, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x6efb, .a=0xa0, .x=0xdf, .y=0x4b, .sp=0x87, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x6efa, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x6efa, .value=0x1c, .type=IO_READ},
        {.addr=0x6efb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0280) {
    const struct CPU_State initial_cpu = {.pc=0xc5c1, .a=0xd7, .x=0xa6, .y=0xfc, .sp=0xde, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xc5c1, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xc5c2, .a=0xae, .x=0xa6, .y=0xfc, .sp=0xde, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xc5c1, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xc5c1, .value=0x1c, .type=IO_READ},
        {.addr=0xc5c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0281) {
    const struct CPU_State initial_cpu = {.pc=0xe48b, .a=0xf2, .x=0xdc, .y=0x5f, .sp=0x63, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xe48b, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xe48c, .a=0xe4, .x=0xdc, .y=0x5f, .sp=0x63, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xe48b, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xe48b, .value=0x1c, .type=IO_READ},
        {.addr=0xe48c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0282) {
    const struct CPU_State initial_cpu = {.pc=0x0593, .a=0xc8, .x=0x3f, .y=0x6b, .sp=0xc3, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x0593, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x0594, .a=0x90, .x=0x3f, .y=0x6b, .sp=0xc3, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x0593, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x0593, .value=0x1c, .type=IO_READ},
        {.addr=0x0594, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0283) {
    const struct CPU_State initial_cpu = {.pc=0x7525, .a=0xc3, .x=0x04, .y=0x5b, .sp=0xeb, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x7525, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x7526, .a=0x86, .x=0x04, .y=0x5b, .sp=0xeb, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x7525, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x7525, .value=0x1c, .type=IO_READ},
        {.addr=0x7526, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0284) {
    const struct CPU_State initial_cpu = {.pc=0x54a7, .a=0x84, .x=0xec, .y=0x06, .sp=0x94, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x54a7, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x54a8, .a=0x08, .x=0xec, .y=0x06, .sp=0x94, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x54a7, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x54a7, .value=0x1c, .type=IO_READ},
        {.addr=0x54a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0285) {
    const struct CPU_State initial_cpu = {.pc=0xa254, .a=0x3c, .x=0xd9, .y=0xd5, .sp=0xbf, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xa254, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xa255, .a=0x78, .x=0xd9, .y=0xd5, .sp=0xbf, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xa254, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xa254, .value=0x1c, .type=IO_READ},
        {.addr=0xa255, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0286) {
    const struct CPU_State initial_cpu = {.pc=0x952c, .a=0x9a, .x=0x5e, .y=0x8e, .sp=0xe2, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x952c, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x952d, .a=0x34, .x=0x5e, .y=0x8e, .sp=0xe2, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x952c, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x952c, .value=0x1c, .type=IO_READ},
        {.addr=0x952d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0287) {
    const struct CPU_State initial_cpu = {.pc=0x75d1, .a=0x98, .x=0x47, .y=0x99, .sp=0x7b, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x75d1, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x75d2, .a=0x30, .x=0x47, .y=0x99, .sp=0x7b, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x75d1, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x75d1, .value=0x1c, .type=IO_READ},
        {.addr=0x75d2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0288) {
    const struct CPU_State initial_cpu = {.pc=0x3d2a, .a=0xc3, .x=0xdc, .y=0x9e, .sp=0x62, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x3d2a, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x3d2b, .a=0x86, .x=0xdc, .y=0x9e, .sp=0x62, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x3d2a, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x3d2a, .value=0x1c, .type=IO_READ},
        {.addr=0x3d2b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0289) {
    const struct CPU_State initial_cpu = {.pc=0x98bc, .a=0x61, .x=0xe8, .y=0x33, .sp=0x9c, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x98bc, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x98bd, .a=0xc2, .x=0xe8, .y=0x33, .sp=0x9c, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x98bc, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x98bc, .value=0x1c, .type=IO_READ},
        {.addr=0x98bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_028A) {
    const struct CPU_State initial_cpu = {.pc=0xe072, .a=0x38, .x=0xc7, .y=0xdf, .sp=0x1b, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xe072, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xe073, .a=0x70, .x=0xc7, .y=0xdf, .sp=0x1b, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xe072, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xe072, .value=0x1c, .type=IO_READ},
        {.addr=0xe073, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_028B) {
    const struct CPU_State initial_cpu = {.pc=0x93ed, .a=0x6b, .x=0x43, .y=0x9b, .sp=0xb7, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x93ed, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x93ee, .a=0xd6, .x=0x43, .y=0x9b, .sp=0xb7, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x93ed, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x93ed, .value=0x1c, .type=IO_READ},
        {.addr=0x93ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_028C) {
    const struct CPU_State initial_cpu = {.pc=0x800c, .a=0x61, .x=0x09, .y=0x4d, .sp=0xba, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x800c, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x800d, .a=0xc2, .x=0x09, .y=0x4d, .sp=0xba, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x800c, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x800c, .value=0x1c, .type=IO_READ},
        {.addr=0x800d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_028D) {
    const struct CPU_State initial_cpu = {.pc=0x63ea, .a=0x9f, .x=0x55, .y=0x58, .sp=0x82, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x63ea, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x63eb, .a=0x3e, .x=0x55, .y=0x58, .sp=0x82, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x63ea, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x63ea, .value=0x1c, .type=IO_READ},
        {.addr=0x63eb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_028E) {
    const struct CPU_State initial_cpu = {.pc=0x7228, .a=0x83, .x=0x38, .y=0x88, .sp=0x06, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x7228, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x7229, .a=0x06, .x=0x38, .y=0x88, .sp=0x06, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x7228, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x7228, .value=0x1c, .type=IO_READ},
        {.addr=0x7229, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_028F) {
    const struct CPU_State initial_cpu = {.pc=0x2597, .a=0x35, .x=0x7c, .y=0x16, .sp=0x8b, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x2597, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x2598, .a=0x6a, .x=0x7c, .y=0x16, .sp=0x8b, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x2597, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x2597, .value=0x1c, .type=IO_READ},
        {.addr=0x2598, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0290) {
    const struct CPU_State initial_cpu = {.pc=0x5d65, .a=0xe6, .x=0xda, .y=0x71, .sp=0x9a, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x5d65, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x5d66, .a=0xcc, .x=0xda, .y=0x71, .sp=0x9a, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x5d65, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x5d65, .value=0x1c, .type=IO_READ},
        {.addr=0x5d66, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0291) {
    const struct CPU_State initial_cpu = {.pc=0xa548, .a=0x0b, .x=0x15, .y=0x35, .sp=0x68, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xa548, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xa549, .a=0x16, .x=0x15, .y=0x35, .sp=0x68, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xa548, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xa548, .value=0x1c, .type=IO_READ},
        {.addr=0xa549, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0292) {
    const struct CPU_State initial_cpu = {.pc=0x1fda, .a=0x97, .x=0x05, .y=0xef, .sp=0xb1, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x1fda, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x1fdb, .a=0x2e, .x=0x05, .y=0xef, .sp=0xb1, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x1fda, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x1fda, .value=0x1c, .type=IO_READ},
        {.addr=0x1fdb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0293) {
    const struct CPU_State initial_cpu = {.pc=0x0340, .a=0x1a, .x=0x84, .y=0x7e, .sp=0xd1, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x0340, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x0341, .a=0x34, .x=0x84, .y=0x7e, .sp=0xd1, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x0340, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x0340, .value=0x1c, .type=IO_READ},
        {.addr=0x0341, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0294) {
    const struct CPU_State initial_cpu = {.pc=0x04fa, .a=0x8a, .x=0x12, .y=0xd4, .sp=0x75, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x04fa, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x04fb, .a=0x14, .x=0x12, .y=0xd4, .sp=0x75, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x04fa, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x04fa, .value=0x1c, .type=IO_READ},
        {.addr=0x04fb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0295) {
    const struct CPU_State initial_cpu = {.pc=0x87dc, .a=0x3b, .x=0x03, .y=0x7a, .sp=0xf3, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x87dc, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x87dd, .a=0x76, .x=0x03, .y=0x7a, .sp=0xf3, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x87dc, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x87dc, .value=0x1c, .type=IO_READ},
        {.addr=0x87dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0296) {
    const struct CPU_State initial_cpu = {.pc=0x17e9, .a=0xcc, .x=0x9d, .y=0x71, .sp=0x44, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x17e9, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x17ea, .a=0x98, .x=0x9d, .y=0x71, .sp=0x44, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x17e9, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x17e9, .value=0x1c, .type=IO_READ},
        {.addr=0x17ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0297) {
    const struct CPU_State initial_cpu = {.pc=0x1624, .a=0x76, .x=0xd8, .y=0xd2, .sp=0x40, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x1624, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x1625, .a=0xec, .x=0xd8, .y=0xd2, .sp=0x40, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x1624, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x1624, .value=0x1c, .type=IO_READ},
        {.addr=0x1625, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0298) {
    const struct CPU_State initial_cpu = {.pc=0xf50d, .a=0x37, .x=0x51, .y=0xa0, .sp=0x59, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xf50d, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xf50e, .a=0x6e, .x=0x51, .y=0xa0, .sp=0x59, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xf50d, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xf50d, .value=0x1c, .type=IO_READ},
        {.addr=0xf50e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0299) {
    const struct CPU_State initial_cpu = {.pc=0x7ec9, .a=0xd2, .x=0xcf, .y=0x9e, .sp=0x3f, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x7ec9, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x7eca, .a=0xa4, .x=0xcf, .y=0x9e, .sp=0x3f, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x7ec9, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x7ec9, .value=0x1c, .type=IO_READ},
        {.addr=0x7eca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_029A) {
    const struct CPU_State initial_cpu = {.pc=0x58ac, .a=0xef, .x=0x73, .y=0x4a, .sp=0x8e, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x58ac, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x58ad, .a=0xde, .x=0x73, .y=0x4a, .sp=0x8e, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x58ac, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x58ac, .value=0x1c, .type=IO_READ},
        {.addr=0x58ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_029B) {
    const struct CPU_State initial_cpu = {.pc=0x262c, .a=0x5b, .x=0x34, .y=0x55, .sp=0x70, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x262c, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x262d, .a=0xb6, .x=0x34, .y=0x55, .sp=0x70, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x262c, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x262c, .value=0x1c, .type=IO_READ},
        {.addr=0x262d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_029C) {
    const struct CPU_State initial_cpu = {.pc=0x16b6, .a=0xfc, .x=0x5a, .y=0x02, .sp=0x5f, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x16b6, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x16b7, .a=0xf8, .x=0x5a, .y=0x02, .sp=0x5f, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x16b6, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x16b6, .value=0x1c, .type=IO_READ},
        {.addr=0x16b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_029D) {
    const struct CPU_State initial_cpu = {.pc=0xdb2f, .a=0x65, .x=0x25, .y=0x71, .sp=0xa4, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xdb2f, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xdb30, .a=0xca, .x=0x25, .y=0x71, .sp=0xa4, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xdb2f, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xdb2f, .value=0x1c, .type=IO_READ},
        {.addr=0xdb30, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_029E) {
    const struct CPU_State initial_cpu = {.pc=0x0b79, .a=0x4c, .x=0x86, .y=0xdc, .sp=0x4e, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x0b79, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x0b7a, .a=0x98, .x=0x86, .y=0xdc, .sp=0x4e, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0b79, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x0b79, .value=0x1c, .type=IO_READ},
        {.addr=0x0b7a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_029F) {
    const struct CPU_State initial_cpu = {.pc=0xcedb, .a=0xdb, .x=0xbb, .y=0x38, .sp=0x43, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xcedb, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xcedc, .a=0xb6, .x=0xbb, .y=0x38, .sp=0x43, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xcedb, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xcedb, .value=0x1c, .type=IO_READ},
        {.addr=0xcedc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02A0) {
    const struct CPU_State initial_cpu = {.pc=0xd1bd, .a=0xe0, .x=0xe5, .y=0xb9, .sp=0x1e, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xd1bd, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd1be, .a=0xc0, .x=0xe5, .y=0xb9, .sp=0x1e, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xd1bd, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd1bd, .value=0x1c, .type=IO_READ},
        {.addr=0xd1be, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02A1) {
    const struct CPU_State initial_cpu = {.pc=0x92fd, .a=0x17, .x=0x88, .y=0x2f, .sp=0xa6, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x92fd, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x92fe, .a=0x2e, .x=0x88, .y=0x2f, .sp=0xa6, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x92fd, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x92fd, .value=0x1c, .type=IO_READ},
        {.addr=0x92fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02A2) {
    const struct CPU_State initial_cpu = {.pc=0xce86, .a=0x97, .x=0x99, .y=0x27, .sp=0xca, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xce86, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xce87, .a=0x2e, .x=0x99, .y=0x27, .sp=0xca, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xce86, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xce86, .value=0x1c, .type=IO_READ},
        {.addr=0xce87, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02A3) {
    const struct CPU_State initial_cpu = {.pc=0xfa6d, .a=0x8d, .x=0x96, .y=0x69, .sp=0x5a, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xfa6d, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xfa6e, .a=0x1a, .x=0x96, .y=0x69, .sp=0x5a, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xfa6d, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xfa6d, .value=0x1c, .type=IO_READ},
        {.addr=0xfa6e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02A4) {
    const struct CPU_State initial_cpu = {.pc=0x4756, .a=0x40, .x=0x0c, .y=0x4a, .sp=0x41, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x4756, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x4757, .a=0x80, .x=0x0c, .y=0x4a, .sp=0x41, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x4756, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x4756, .value=0x1c, .type=IO_READ},
        {.addr=0x4757, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02A5) {
    const struct CPU_State initial_cpu = {.pc=0xee9e, .a=0x91, .x=0x9a, .y=0x1f, .sp=0xa6, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xee9e, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xee9f, .a=0x22, .x=0x9a, .y=0x1f, .sp=0xa6, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xee9e, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xee9e, .value=0x1c, .type=IO_READ},
        {.addr=0xee9f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02A6) {
    const struct CPU_State initial_cpu = {.pc=0xd715, .a=0x87, .x=0x89, .y=0x7c, .sp=0x07, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xd715, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd716, .a=0x0e, .x=0x89, .y=0x7c, .sp=0x07, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xd715, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd715, .value=0x1c, .type=IO_READ},
        {.addr=0xd716, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02A7) {
    const struct CPU_State initial_cpu = {.pc=0x60cf, .a=0xc8, .x=0x6b, .y=0x70, .sp=0x5b, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x60cf, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x60d0, .a=0x90, .x=0x6b, .y=0x70, .sp=0x5b, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x60cf, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x60cf, .value=0x1c, .type=IO_READ},
        {.addr=0x60d0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02A8) {
    const struct CPU_State initial_cpu = {.pc=0xdaf3, .a=0x73, .x=0x68, .y=0xd1, .sp=0xec, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xdaf3, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xdaf4, .a=0xe6, .x=0x68, .y=0xd1, .sp=0xec, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xdaf3, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xdaf3, .value=0x1c, .type=IO_READ},
        {.addr=0xdaf4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02A9) {
    const struct CPU_State initial_cpu = {.pc=0x773c, .a=0x2c, .x=0xec, .y=0xd0, .sp=0x8b, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x773c, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x773d, .a=0x58, .x=0xec, .y=0xd0, .sp=0x8b, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x773c, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x773c, .value=0x1c, .type=IO_READ},
        {.addr=0x773d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02AA) {
    const struct CPU_State initial_cpu = {.pc=0x0b6d, .a=0xf1, .x=0x14, .y=0xd1, .sp=0x37, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x0b6d, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x0b6e, .a=0xe2, .x=0x14, .y=0xd1, .sp=0x37, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x0b6d, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x0b6d, .value=0x1c, .type=IO_READ},
        {.addr=0x0b6e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02AB) {
    const struct CPU_State initial_cpu = {.pc=0x76c3, .a=0xc9, .x=0xf8, .y=0xff, .sp=0x6c, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x76c3, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x76c4, .a=0x92, .x=0xf8, .y=0xff, .sp=0x6c, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x76c3, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x76c3, .value=0x1c, .type=IO_READ},
        {.addr=0x76c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x5010, .a=0x85, .x=0x17, .y=0xbb, .sp=0x1c, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x5010, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x5011, .a=0x0a, .x=0x17, .y=0xbb, .sp=0x1c, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x5010, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x5010, .value=0x1c, .type=IO_READ},
        {.addr=0x5011, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02AD) {
    const struct CPU_State initial_cpu = {.pc=0xb251, .a=0x16, .x=0x4f, .y=0x28, .sp=0x68, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xb251, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xb252, .a=0x2c, .x=0x4f, .y=0x28, .sp=0x68, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xb251, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xb251, .value=0x1c, .type=IO_READ},
        {.addr=0xb252, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02AE) {
    const struct CPU_State initial_cpu = {.pc=0xbb94, .a=0xb0, .x=0xf5, .y=0xf1, .sp=0x05, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xbb94, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xbb95, .a=0x60, .x=0xf5, .y=0xf1, .sp=0x05, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xbb94, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xbb94, .value=0x1c, .type=IO_READ},
        {.addr=0xbb95, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x2bed, .a=0x00, .x=0xfd, .y=0x1a, .sp=0x6e, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x2bed, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x2bee, .a=0x00, .x=0xfd, .y=0x1a, .sp=0x6e, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x2bed, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x2bed, .value=0x1c, .type=IO_READ},
        {.addr=0x2bee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02B0) {
    const struct CPU_State initial_cpu = {.pc=0x54e4, .a=0x1d, .x=0x8b, .y=0x28, .sp=0x5e, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x54e4, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x54e5, .a=0x3a, .x=0x8b, .y=0x28, .sp=0x5e, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x54e4, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x54e4, .value=0x1c, .type=IO_READ},
        {.addr=0x54e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02B1) {
    const struct CPU_State initial_cpu = {.pc=0xdbcc, .a=0x8f, .x=0xab, .y=0x65, .sp=0x76, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xdbcc, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xdbcd, .a=0x1e, .x=0xab, .y=0x65, .sp=0x76, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xdbcc, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xdbcc, .value=0x1c, .type=IO_READ},
        {.addr=0xdbcd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02B2) {
    const struct CPU_State initial_cpu = {.pc=0x51f4, .a=0xe8, .x=0x36, .y=0x3c, .sp=0x7a, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x51f4, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x51f5, .a=0xd0, .x=0x36, .y=0x3c, .sp=0x7a, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x51f4, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x51f4, .value=0x1c, .type=IO_READ},
        {.addr=0x51f5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02B3) {
    const struct CPU_State initial_cpu = {.pc=0xb63f, .a=0xee, .x=0xa2, .y=0x7f, .sp=0xf6, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xb63f, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xb640, .a=0xdc, .x=0xa2, .y=0x7f, .sp=0xf6, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xb63f, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xb63f, .value=0x1c, .type=IO_READ},
        {.addr=0xb640, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02B4) {
    const struct CPU_State initial_cpu = {.pc=0x6742, .a=0x5b, .x=0x43, .y=0x27, .sp=0x73, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x6742, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x6743, .a=0xb6, .x=0x43, .y=0x27, .sp=0x73, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x6742, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x6742, .value=0x1c, .type=IO_READ},
        {.addr=0x6743, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02B5) {
    const struct CPU_State initial_cpu = {.pc=0x0ec4, .a=0xaf, .x=0x2d, .y=0x9e, .sp=0xa6, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x0ec4, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x0ec5, .a=0x5e, .x=0x2d, .y=0x9e, .sp=0xa6, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0ec4, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x0ec4, .value=0x1c, .type=IO_READ},
        {.addr=0x0ec5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02B6) {
    const struct CPU_State initial_cpu = {.pc=0xac1d, .a=0x95, .x=0x47, .y=0xdd, .sp=0x10, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xac1d, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xac1e, .a=0x2a, .x=0x47, .y=0xdd, .sp=0x10, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xac1d, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xac1d, .value=0x1c, .type=IO_READ},
        {.addr=0xac1e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02B7) {
    const struct CPU_State initial_cpu = {.pc=0xbb52, .a=0x13, .x=0x3e, .y=0x46, .sp=0x7e, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xbb52, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xbb53, .a=0x26, .x=0x3e, .y=0x46, .sp=0x7e, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xbb52, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xbb52, .value=0x1c, .type=IO_READ},
        {.addr=0xbb53, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02B8) {
    const struct CPU_State initial_cpu = {.pc=0xdb24, .a=0x5d, .x=0x3d, .y=0x66, .sp=0xb9, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xdb24, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xdb25, .a=0xba, .x=0x3d, .y=0x66, .sp=0xb9, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xdb24, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xdb24, .value=0x1c, .type=IO_READ},
        {.addr=0xdb25, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02B9) {
    const struct CPU_State initial_cpu = {.pc=0x5633, .a=0xb2, .x=0xc1, .y=0xfb, .sp=0xa6, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x5633, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x5634, .a=0x64, .x=0xc1, .y=0xfb, .sp=0xa6, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x5633, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x5633, .value=0x1c, .type=IO_READ},
        {.addr=0x5634, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02BA) {
    const struct CPU_State initial_cpu = {.pc=0xa77a, .a=0xc0, .x=0x1a, .y=0xb2, .sp=0xd4, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xa77a, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xa77b, .a=0x80, .x=0x1a, .y=0xb2, .sp=0xd4, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xa77a, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xa77a, .value=0x1c, .type=IO_READ},
        {.addr=0xa77b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02BB) {
    const struct CPU_State initial_cpu = {.pc=0x3da0, .a=0x5d, .x=0x46, .y=0x4d, .sp=0x34, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x3da0, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x3da1, .a=0xba, .x=0x46, .y=0x4d, .sp=0x34, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x3da0, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x3da0, .value=0x1c, .type=IO_READ},
        {.addr=0x3da1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02BC) {
    const struct CPU_State initial_cpu = {.pc=0x274c, .a=0x36, .x=0xb6, .y=0xdc, .sp=0x6f, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x274c, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x274d, .a=0x6c, .x=0xb6, .y=0xdc, .sp=0x6f, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x274c, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x274c, .value=0x1c, .type=IO_READ},
        {.addr=0x274d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02BD) {
    const struct CPU_State initial_cpu = {.pc=0xd300, .a=0xfc, .x=0x99, .y=0x65, .sp=0x52, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xd300, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd301, .a=0xf8, .x=0x99, .y=0x65, .sp=0x52, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xd300, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd300, .value=0x1c, .type=IO_READ},
        {.addr=0xd301, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02BE) {
    const struct CPU_State initial_cpu = {.pc=0xed0d, .a=0xf9, .x=0x17, .y=0x7f, .sp=0x3e, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xed0d, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xed0e, .a=0xf2, .x=0x17, .y=0x7f, .sp=0x3e, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xed0d, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xed0d, .value=0x1c, .type=IO_READ},
        {.addr=0xed0e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x6a3b, .a=0x65, .x=0x4c, .y=0xf9, .sp=0x8f, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x6a3b, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x6a3c, .a=0xca, .x=0x4c, .y=0xf9, .sp=0x8f, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x6a3b, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x6a3b, .value=0x1c, .type=IO_READ},
        {.addr=0x6a3c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x2227, .a=0x0f, .x=0x7e, .y=0xcc, .sp=0xde, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x2227, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x2228, .a=0x1e, .x=0x7e, .y=0xcc, .sp=0xde, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x2227, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x2227, .value=0x1c, .type=IO_READ},
        {.addr=0x2228, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x02da, .a=0x76, .x=0xab, .y=0xa6, .sp=0x6f, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x02da, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x02db, .a=0xec, .x=0xab, .y=0xa6, .sp=0x6f, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x02da, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x02da, .value=0x1c, .type=IO_READ},
        {.addr=0x02db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02C2) {
    const struct CPU_State initial_cpu = {.pc=0x0c56, .a=0x5a, .x=0x61, .y=0x30, .sp=0xef, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x0c56, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x0c57, .a=0xb4, .x=0x61, .y=0x30, .sp=0xef, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0c56, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x0c56, .value=0x1c, .type=IO_READ},
        {.addr=0x0c57, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02C3) {
    const struct CPU_State initial_cpu = {.pc=0x39be, .a=0xa0, .x=0x6a, .y=0x22, .sp=0xde, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x39be, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x39bf, .a=0x40, .x=0x6a, .y=0x22, .sp=0xde, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x39be, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x39be, .value=0x1c, .type=IO_READ},
        {.addr=0x39bf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02C4) {
    const struct CPU_State initial_cpu = {.pc=0x1ece, .a=0xab, .x=0x02, .y=0x41, .sp=0x48, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x1ece, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x1ecf, .a=0x56, .x=0x02, .y=0x41, .sp=0x48, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x1ece, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x1ece, .value=0x1c, .type=IO_READ},
        {.addr=0x1ecf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x569c, .a=0xb5, .x=0x4f, .y=0x19, .sp=0xec, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x569c, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x569d, .a=0x6a, .x=0x4f, .y=0x19, .sp=0xec, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x569c, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x569c, .value=0x1c, .type=IO_READ},
        {.addr=0x569d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02C6) {
    const struct CPU_State initial_cpu = {.pc=0xbeaf, .a=0xd9, .x=0x47, .y=0xa9, .sp=0xe4, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xbeaf, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xbeb0, .a=0xb2, .x=0x47, .y=0xa9, .sp=0xe4, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xbeaf, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xbeaf, .value=0x1c, .type=IO_READ},
        {.addr=0xbeb0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02C7) {
    const struct CPU_State initial_cpu = {.pc=0xb367, .a=0xe1, .x=0x63, .y=0x5e, .sp=0xe4, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xb367, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xb368, .a=0xc2, .x=0x63, .y=0x5e, .sp=0xe4, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xb367, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xb367, .value=0x1c, .type=IO_READ},
        {.addr=0xb368, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02C8) {
    const struct CPU_State initial_cpu = {.pc=0xdf17, .a=0x88, .x=0x5f, .y=0xb8, .sp=0x70, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xdf17, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xdf18, .a=0x10, .x=0x5f, .y=0xb8, .sp=0x70, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xdf17, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xdf17, .value=0x1c, .type=IO_READ},
        {.addr=0xdf18, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02C9) {
    const struct CPU_State initial_cpu = {.pc=0xc4d0, .a=0x10, .x=0xcf, .y=0xd8, .sp=0x44, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xc4d0, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xc4d1, .a=0x20, .x=0xcf, .y=0xd8, .sp=0x44, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xc4d0, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xc4d0, .value=0x1c, .type=IO_READ},
        {.addr=0xc4d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02CA) {
    const struct CPU_State initial_cpu = {.pc=0x65ef, .a=0x08, .x=0xdc, .y=0xb8, .sp=0xf2, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x65ef, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x65f0, .a=0x10, .x=0xdc, .y=0xb8, .sp=0xf2, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x65ef, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x65ef, .value=0x1c, .type=IO_READ},
        {.addr=0x65f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02CB) {
    const struct CPU_State initial_cpu = {.pc=0xd51f, .a=0xc1, .x=0x23, .y=0x53, .sp=0x62, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xd51f, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd520, .a=0x82, .x=0x23, .y=0x53, .sp=0x62, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xd51f, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd51f, .value=0x1c, .type=IO_READ},
        {.addr=0xd520, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02CC) {
    const struct CPU_State initial_cpu = {.pc=0x8364, .a=0x8a, .x=0x56, .y=0x6b, .sp=0xe3, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x8364, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x8365, .a=0x14, .x=0x56, .y=0x6b, .sp=0xe3, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x8364, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x8364, .value=0x1c, .type=IO_READ},
        {.addr=0x8365, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x8eed, .a=0xad, .x=0x44, .y=0x04, .sp=0x43, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x8eed, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x8eee, .a=0x5a, .x=0x44, .y=0x04, .sp=0x43, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x8eed, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x8eed, .value=0x1c, .type=IO_READ},
        {.addr=0x8eee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x88fc, .a=0xd3, .x=0x66, .y=0xe7, .sp=0x53, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x88fc, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x88fd, .a=0xa6, .x=0x66, .y=0xe7, .sp=0x53, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x88fc, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x88fc, .value=0x1c, .type=IO_READ},
        {.addr=0x88fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02CF) {
    const struct CPU_State initial_cpu = {.pc=0x0114, .a=0x64, .x=0xf7, .y=0xe0, .sp=0xef, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x0114, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x0115, .a=0xc8, .x=0xf7, .y=0xe0, .sp=0xef, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0114, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x0114, .value=0x1c, .type=IO_READ},
        {.addr=0x0115, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02D0) {
    const struct CPU_State initial_cpu = {.pc=0xf49f, .a=0xc2, .x=0xb2, .y=0x6c, .sp=0xb7, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xf49f, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xf4a0, .a=0x84, .x=0xb2, .y=0x6c, .sp=0xb7, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xf49f, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xf49f, .value=0x1c, .type=IO_READ},
        {.addr=0xf4a0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02D1) {
    const struct CPU_State initial_cpu = {.pc=0x7497, .a=0x46, .x=0x4d, .y=0xea, .sp=0xfd, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x7497, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x7498, .a=0x8c, .x=0x4d, .y=0xea, .sp=0xfd, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x7497, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x7497, .value=0x1c, .type=IO_READ},
        {.addr=0x7498, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02D2) {
    const struct CPU_State initial_cpu = {.pc=0xdbd4, .a=0xba, .x=0xd1, .y=0xe8, .sp=0xc4, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xdbd4, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xdbd5, .a=0x74, .x=0xd1, .y=0xe8, .sp=0xc4, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xdbd4, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xdbd4, .value=0x1c, .type=IO_READ},
        {.addr=0xdbd5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x7b54, .a=0x48, .x=0x03, .y=0x70, .sp=0xe4, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x7b54, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x7b55, .a=0x90, .x=0x03, .y=0x70, .sp=0xe4, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x7b54, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x7b54, .value=0x1c, .type=IO_READ},
        {.addr=0x7b55, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x6c0b, .a=0x57, .x=0x42, .y=0xe4, .sp=0x76, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x6c0b, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x6c0c, .a=0xae, .x=0x42, .y=0xe4, .sp=0x76, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x6c0b, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x6c0b, .value=0x1c, .type=IO_READ},
        {.addr=0x6c0c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x496c, .a=0x89, .x=0xd0, .y=0xa0, .sp=0x58, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x496c, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x496d, .a=0x12, .x=0xd0, .y=0xa0, .sp=0x58, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x496c, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x496c, .value=0x1c, .type=IO_READ},
        {.addr=0x496d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02D6) {
    const struct CPU_State initial_cpu = {.pc=0xa1c1, .a=0xde, .x=0xd0, .y=0x3a, .sp=0x3e, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xa1c1, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xa1c2, .a=0xbc, .x=0xd0, .y=0x3a, .sp=0x3e, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xa1c1, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xa1c1, .value=0x1c, .type=IO_READ},
        {.addr=0xa1c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x1382, .a=0x55, .x=0xda, .y=0x09, .sp=0xbf, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x1382, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x1383, .a=0xaa, .x=0xda, .y=0x09, .sp=0xbf, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x1382, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x1382, .value=0x1c, .type=IO_READ},
        {.addr=0x1383, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x4aeb, .a=0xfc, .x=0xdb, .y=0x62, .sp=0xbc, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x4aeb, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x4aec, .a=0xf8, .x=0xdb, .y=0x62, .sp=0xbc, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x4aeb, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x4aeb, .value=0x1c, .type=IO_READ},
        {.addr=0x4aec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02D9) {
    const struct CPU_State initial_cpu = {.pc=0x75e2, .a=0xbe, .x=0xda, .y=0x65, .sp=0xc8, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x75e2, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x75e3, .a=0x7c, .x=0xda, .y=0x65, .sp=0xc8, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x75e2, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x75e2, .value=0x1c, .type=IO_READ},
        {.addr=0x75e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02DA) {
    const struct CPU_State initial_cpu = {.pc=0x4051, .a=0x2e, .x=0xf5, .y=0x6a, .sp=0x10, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x4051, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x4052, .a=0x5c, .x=0xf5, .y=0x6a, .sp=0x10, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x4051, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x4051, .value=0x1c, .type=IO_READ},
        {.addr=0x4052, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02DB) {
    const struct CPU_State initial_cpu = {.pc=0xb87e, .a=0x68, .x=0x37, .y=0x72, .sp=0x71, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xb87e, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xb87f, .a=0xd0, .x=0x37, .y=0x72, .sp=0x71, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xb87e, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xb87e, .value=0x1c, .type=IO_READ},
        {.addr=0xb87f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02DC) {
    const struct CPU_State initial_cpu = {.pc=0xc5fb, .a=0x73, .x=0xe0, .y=0xe4, .sp=0xe1, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xc5fb, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xc5fc, .a=0xe6, .x=0xe0, .y=0xe4, .sp=0xe1, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xc5fb, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xc5fb, .value=0x1c, .type=IO_READ},
        {.addr=0xc5fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02DD) {
    const struct CPU_State initial_cpu = {.pc=0xcf09, .a=0x31, .x=0x65, .y=0x47, .sp=0x43, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xcf09, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xcf0a, .a=0x62, .x=0x65, .y=0x47, .sp=0x43, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xcf09, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xcf09, .value=0x1c, .type=IO_READ},
        {.addr=0xcf0a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02DE) {
    const struct CPU_State initial_cpu = {.pc=0xc93b, .a=0x4d, .x=0x43, .y=0x6a, .sp=0x36, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xc93b, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xc93c, .a=0x9a, .x=0x43, .y=0x6a, .sp=0x36, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xc93b, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xc93b, .value=0x1c, .type=IO_READ},
        {.addr=0xc93c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02DF) {
    const struct CPU_State initial_cpu = {.pc=0x68c8, .a=0xfa, .x=0x35, .y=0x1f, .sp=0x0c, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x68c8, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x68c9, .a=0xf4, .x=0x35, .y=0x1f, .sp=0x0c, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x68c8, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x68c8, .value=0x1c, .type=IO_READ},
        {.addr=0x68c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02E0) {
    const struct CPU_State initial_cpu = {.pc=0x84a4, .a=0xfc, .x=0xa3, .y=0x7d, .sp=0xff, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x84a4, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x84a5, .a=0xf8, .x=0xa3, .y=0x7d, .sp=0xff, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x84a4, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x84a4, .value=0x1c, .type=IO_READ},
        {.addr=0x84a5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02E1) {
    const struct CPU_State initial_cpu = {.pc=0xba4c, .a=0xcd, .x=0xc9, .y=0x03, .sp=0xda, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xba4c, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xba4d, .a=0x9a, .x=0xc9, .y=0x03, .sp=0xda, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xba4c, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xba4c, .value=0x1c, .type=IO_READ},
        {.addr=0xba4d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02E2) {
    const struct CPU_State initial_cpu = {.pc=0x3d59, .a=0x78, .x=0xf9, .y=0x5a, .sp=0x92, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x3d59, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x3d5a, .a=0xf0, .x=0xf9, .y=0x5a, .sp=0x92, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x3d59, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x3d59, .value=0x1c, .type=IO_READ},
        {.addr=0x3d5a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02E3) {
    const struct CPU_State initial_cpu = {.pc=0xa85e, .a=0x72, .x=0x1a, .y=0x50, .sp=0x42, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xa85e, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xa85f, .a=0xe4, .x=0x1a, .y=0x50, .sp=0x42, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xa85e, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xa85e, .value=0x1c, .type=IO_READ},
        {.addr=0xa85f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02E4) {
    const struct CPU_State initial_cpu = {.pc=0xc892, .a=0xcd, .x=0xf7, .y=0x0b, .sp=0x1a, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xc892, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xc893, .a=0x9a, .x=0xf7, .y=0x0b, .sp=0x1a, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xc892, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xc892, .value=0x1c, .type=IO_READ},
        {.addr=0xc893, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02E5) {
    const struct CPU_State initial_cpu = {.pc=0x26cd, .a=0x22, .x=0x69, .y=0x61, .sp=0x9e, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x26cd, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x26ce, .a=0x44, .x=0x69, .y=0x61, .sp=0x9e, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x26cd, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x26cd, .value=0x1c, .type=IO_READ},
        {.addr=0x26ce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02E6) {
    const struct CPU_State initial_cpu = {.pc=0x24ec, .a=0x96, .x=0xe6, .y=0x9d, .sp=0xce, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x24ec, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x24ed, .a=0x2c, .x=0xe6, .y=0x9d, .sp=0xce, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x24ec, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x24ec, .value=0x1c, .type=IO_READ},
        {.addr=0x24ed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02E7) {
    const struct CPU_State initial_cpu = {.pc=0x16d5, .a=0x50, .x=0xf6, .y=0xe2, .sp=0x6b, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x16d5, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x16d6, .a=0xa0, .x=0xf6, .y=0xe2, .sp=0x6b, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x16d5, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x16d5, .value=0x1c, .type=IO_READ},
        {.addr=0x16d6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02E8) {
    const struct CPU_State initial_cpu = {.pc=0xdaba, .a=0xe9, .x=0x1d, .y=0x96, .sp=0xb9, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xdaba, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xdabb, .a=0xd2, .x=0x1d, .y=0x96, .sp=0xb9, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xdaba, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xdaba, .value=0x1c, .type=IO_READ},
        {.addr=0xdabb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02E9) {
    const struct CPU_State initial_cpu = {.pc=0xa996, .a=0x5c, .x=0x1b, .y=0x62, .sp=0x3f, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xa996, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xa997, .a=0xb8, .x=0x1b, .y=0x62, .sp=0x3f, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xa996, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xa996, .value=0x1c, .type=IO_READ},
        {.addr=0xa997, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02EA) {
    const struct CPU_State initial_cpu = {.pc=0xd608, .a=0x37, .x=0x7e, .y=0x1c, .sp=0xce, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xd608, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd609, .a=0x6e, .x=0x7e, .y=0x1c, .sp=0xce, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xd608, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd608, .value=0x1c, .type=IO_READ},
        {.addr=0xd609, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x8c50, .a=0x11, .x=0x4a, .y=0x69, .sp=0x12, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x8c50, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x8c51, .a=0x22, .x=0x4a, .y=0x69, .sp=0x12, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x8c50, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x8c50, .value=0x1c, .type=IO_READ},
        {.addr=0x8c51, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02EC) {
    const struct CPU_State initial_cpu = {.pc=0x0961, .a=0xc5, .x=0xc7, .y=0x67, .sp=0x7b, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x0961, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x0962, .a=0x8a, .x=0xc7, .y=0x67, .sp=0x7b, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x0961, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x0961, .value=0x1c, .type=IO_READ},
        {.addr=0x0962, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02ED) {
    const struct CPU_State initial_cpu = {.pc=0xb087, .a=0x4e, .x=0xce, .y=0x75, .sp=0xf1, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xb087, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xb088, .a=0x9c, .x=0xce, .y=0x75, .sp=0xf1, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xb087, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xb087, .value=0x1c, .type=IO_READ},
        {.addr=0xb088, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02EE) {
    const struct CPU_State initial_cpu = {.pc=0x8294, .a=0x73, .x=0xb8, .y=0xc2, .sp=0x1f, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x8294, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x8295, .a=0xe6, .x=0xb8, .y=0xc2, .sp=0x1f, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x8294, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x8294, .value=0x1c, .type=IO_READ},
        {.addr=0x8295, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02EF) {
    const struct CPU_State initial_cpu = {.pc=0xcf47, .a=0xa6, .x=0x16, .y=0x4c, .sp=0xc1, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xcf47, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xcf48, .a=0x4c, .x=0x16, .y=0x4c, .sp=0xc1, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xcf47, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xcf47, .value=0x1c, .type=IO_READ},
        {.addr=0xcf48, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02F0) {
    const struct CPU_State initial_cpu = {.pc=0xef81, .a=0x16, .x=0x57, .y=0x30, .sp=0x6f, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xef81, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xef82, .a=0x2c, .x=0x57, .y=0x30, .sp=0x6f, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xef81, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xef81, .value=0x1c, .type=IO_READ},
        {.addr=0xef82, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02F1) {
    const struct CPU_State initial_cpu = {.pc=0xe775, .a=0xad, .x=0x65, .y=0x48, .sp=0x43, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xe775, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xe776, .a=0x5a, .x=0x65, .y=0x48, .sp=0x43, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xe775, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xe775, .value=0x1c, .type=IO_READ},
        {.addr=0xe776, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02F2) {
    const struct CPU_State initial_cpu = {.pc=0xc77c, .a=0x50, .x=0x0e, .y=0xd3, .sp=0x12, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xc77c, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xc77d, .a=0xa0, .x=0x0e, .y=0xd3, .sp=0x12, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xc77c, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xc77c, .value=0x1c, .type=IO_READ},
        {.addr=0xc77d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02F3) {
    const struct CPU_State initial_cpu = {.pc=0xbbc0, .a=0x18, .x=0xd5, .y=0x0d, .sp=0x5e, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xbbc0, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xbbc1, .a=0x30, .x=0xd5, .y=0x0d, .sp=0x5e, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xbbc0, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xbbc0, .value=0x1c, .type=IO_READ},
        {.addr=0xbbc1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02F4) {
    const struct CPU_State initial_cpu = {.pc=0xddf6, .a=0x21, .x=0xdc, .y=0x6a, .sp=0x37, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xddf6, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xddf7, .a=0x42, .x=0xdc, .y=0x6a, .sp=0x37, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xddf6, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xddf6, .value=0x1c, .type=IO_READ},
        {.addr=0xddf7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x0c50, .a=0x15, .x=0x66, .y=0x6a, .sp=0x2c, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x0c50, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x0c51, .a=0x2a, .x=0x66, .y=0x6a, .sp=0x2c, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x0c50, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x0c50, .value=0x1c, .type=IO_READ},
        {.addr=0x0c51, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x347c, .a=0xc8, .x=0xed, .y=0x41, .sp=0x00, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x347c, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x347d, .a=0x90, .x=0xed, .y=0x41, .sp=0x00, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x347c, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x347c, .value=0x1c, .type=IO_READ},
        {.addr=0x347d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x540a, .a=0xfd, .x=0xf8, .y=0xe8, .sp=0xb2, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x540a, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x540b, .a=0xfa, .x=0xf8, .y=0xe8, .sp=0xb2, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x540a, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x540a, .value=0x1c, .type=IO_READ},
        {.addr=0x540b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02F8) {
    const struct CPU_State initial_cpu = {.pc=0xf5ec, .a=0x7c, .x=0x45, .y=0x9c, .sp=0x27, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xf5ec, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xf5ed, .a=0xf8, .x=0x45, .y=0x9c, .sp=0x27, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xf5ec, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xf5ec, .value=0x1c, .type=IO_READ},
        {.addr=0xf5ed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02F9) {
    const struct CPU_State initial_cpu = {.pc=0x6e5a, .a=0x4d, .x=0x40, .y=0x64, .sp=0xe5, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x6e5a, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x6e5b, .a=0x9a, .x=0x40, .y=0x64, .sp=0xe5, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x6e5a, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x6e5a, .value=0x1c, .type=IO_READ},
        {.addr=0x6e5b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02FA) {
    const struct CPU_State initial_cpu = {.pc=0x8c43, .a=0x0a, .x=0xd3, .y=0x21, .sp=0x82, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x8c43, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x8c44, .a=0x14, .x=0xd3, .y=0x21, .sp=0x82, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x8c43, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x8c43, .value=0x1c, .type=IO_READ},
        {.addr=0x8c44, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02FB) {
    const struct CPU_State initial_cpu = {.pc=0xe061, .a=0x62, .x=0xd1, .y=0x0c, .sp=0xe8, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xe061, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xe062, .a=0xc4, .x=0xd1, .y=0x0c, .sp=0xe8, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xe061, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xe061, .value=0x1c, .type=IO_READ},
        {.addr=0xe062, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02FC) {
    const struct CPU_State initial_cpu = {.pc=0x07bb, .a=0xa3, .x=0x97, .y=0x53, .sp=0x5a, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x07bb, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x07bc, .a=0x46, .x=0x97, .y=0x53, .sp=0x5a, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x07bb, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x07bb, .value=0x1c, .type=IO_READ},
        {.addr=0x07bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02FD) {
    const struct CPU_State initial_cpu = {.pc=0x432b, .a=0xc0, .x=0x10, .y=0x46, .sp=0x07, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x432b, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x432c, .a=0x80, .x=0x10, .y=0x46, .sp=0x07, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x432b, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x432b, .value=0x1c, .type=IO_READ},
        {.addr=0x432c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02FE) {
    const struct CPU_State initial_cpu = {.pc=0x127a, .a=0xfe, .x=0x75, .y=0xe7, .sp=0xa9, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x127a, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x127b, .a=0xfc, .x=0x75, .y=0xe7, .sp=0xa9, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x127a, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x127a, .value=0x1c, .type=IO_READ},
        {.addr=0x127b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x6295, .a=0x2f, .x=0xe1, .y=0x61, .sp=0x29, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x6295, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x6296, .a=0x5e, .x=0xe1, .y=0x61, .sp=0x29, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x6295, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x6295, .value=0x1c, .type=IO_READ},
        {.addr=0x6296, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0300) {
    const struct CPU_State initial_cpu = {.pc=0xf136, .a=0x8b, .x=0x68, .y=0xa0, .sp=0x37, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xf136, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xf137, .a=0x16, .x=0x68, .y=0xa0, .sp=0x37, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xf136, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xf136, .value=0x1c, .type=IO_READ},
        {.addr=0xf137, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0301) {
    const struct CPU_State initial_cpu = {.pc=0x3422, .a=0x4a, .x=0x9f, .y=0x97, .sp=0xca, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x3422, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x3423, .a=0x94, .x=0x9f, .y=0x97, .sp=0xca, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x3422, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x3422, .value=0x1c, .type=IO_READ},
        {.addr=0x3423, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0302) {
    const struct CPU_State initial_cpu = {.pc=0xfbd2, .a=0x7d, .x=0x82, .y=0x28, .sp=0x32, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xfbd2, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xfbd3, .a=0xfa, .x=0x82, .y=0x28, .sp=0x32, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xfbd2, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xfbd2, .value=0x1c, .type=IO_READ},
        {.addr=0xfbd3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0303) {
    const struct CPU_State initial_cpu = {.pc=0x9608, .a=0x21, .x=0x7f, .y=0x48, .sp=0x24, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x9608, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x9609, .a=0x42, .x=0x7f, .y=0x48, .sp=0x24, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x9608, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x9608, .value=0x1c, .type=IO_READ},
        {.addr=0x9609, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0304) {
    const struct CPU_State initial_cpu = {.pc=0x2186, .a=0x3b, .x=0x5f, .y=0xb6, .sp=0x70, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x2186, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x2187, .a=0x76, .x=0x5f, .y=0xb6, .sp=0x70, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x2186, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x2186, .value=0x1c, .type=IO_READ},
        {.addr=0x2187, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0305) {
    const struct CPU_State initial_cpu = {.pc=0xa80e, .a=0x83, .x=0xfa, .y=0xbd, .sp=0xbb, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xa80e, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xa80f, .a=0x06, .x=0xfa, .y=0xbd, .sp=0xbb, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xa80e, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xa80e, .value=0x1c, .type=IO_READ},
        {.addr=0xa80f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0306) {
    const struct CPU_State initial_cpu = {.pc=0xdf4d, .a=0xf1, .x=0xb5, .y=0x05, .sp=0x41, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0xdf4d, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xdf4e, .a=0xe2, .x=0xb5, .y=0x05, .sp=0x41, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xdf4d, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xdf4d, .value=0x1c, .type=IO_READ},
        {.addr=0xdf4e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0307) {
    const struct CPU_State initial_cpu = {.pc=0x3359, .a=0xd1, .x=0x7e, .y=0x3a, .sp=0xdf, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x3359, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x335a, .a=0xa2, .x=0x7e, .y=0x3a, .sp=0xdf, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x3359, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x3359, .value=0x1c, .type=IO_READ},
        {.addr=0x335a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0308) {
    const struct CPU_State initial_cpu = {.pc=0xe8a2, .a=0x68, .x=0x9b, .y=0xe1, .sp=0x64, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xe8a2, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xe8a3, .a=0xd0, .x=0x9b, .y=0xe1, .sp=0x64, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xe8a2, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xe8a2, .value=0x1c, .type=IO_READ},
        {.addr=0xe8a3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0309) {
    const struct CPU_State initial_cpu = {.pc=0xe283, .a=0xfe, .x=0x2f, .y=0x8c, .sp=0x9f, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xe283, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xe284, .a=0xfc, .x=0x2f, .y=0x8c, .sp=0x9f, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xe283, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xe283, .value=0x1c, .type=IO_READ},
        {.addr=0xe284, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_030A) {
    const struct CPU_State initial_cpu = {.pc=0x0a5d, .a=0xdf, .x=0xeb, .y=0x50, .sp=0x8a, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x0a5d, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x0a5e, .a=0xbe, .x=0xeb, .y=0x50, .sp=0x8a, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x0a5d, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x0a5d, .value=0x1c, .type=IO_READ},
        {.addr=0x0a5e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_030B) {
    const struct CPU_State initial_cpu = {.pc=0x65ee, .a=0xd0, .x=0x0e, .y=0xc8, .sp=0x1a, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x65ee, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x65ef, .a=0xa0, .x=0x0e, .y=0xc8, .sp=0x1a, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x65ee, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x65ee, .value=0x1c, .type=IO_READ},
        {.addr=0x65ef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_030C) {
    const struct CPU_State initial_cpu = {.pc=0xa92a, .a=0x73, .x=0x4f, .y=0x6f, .sp=0x0c, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xa92a, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xa92b, .a=0xe6, .x=0x4f, .y=0x6f, .sp=0x0c, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xa92a, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xa92a, .value=0x1c, .type=IO_READ},
        {.addr=0xa92b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_030D) {
    const struct CPU_State initial_cpu = {.pc=0xaf04, .a=0x4f, .x=0xb5, .y=0x3b, .sp=0xce, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xaf04, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xaf05, .a=0x9e, .x=0xb5, .y=0x3b, .sp=0xce, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xaf04, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xaf04, .value=0x1c, .type=IO_READ},
        {.addr=0xaf05, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_030E) {
    const struct CPU_State initial_cpu = {.pc=0x59f9, .a=0xd6, .x=0x54, .y=0x17, .sp=0xb8, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x59f9, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x59fa, .a=0xac, .x=0x54, .y=0x17, .sp=0xb8, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x59f9, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x59f9, .value=0x1c, .type=IO_READ},
        {.addr=0x59fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_030F) {
    const struct CPU_State initial_cpu = {.pc=0x1278, .a=0xe9, .x=0x4b, .y=0x21, .sp=0xe2, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x1278, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x1279, .a=0xd2, .x=0x4b, .y=0x21, .sp=0xe2, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x1278, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x1278, .value=0x1c, .type=IO_READ},
        {.addr=0x1279, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0310) {
    const struct CPU_State initial_cpu = {.pc=0x567c, .a=0xfa, .x=0xf7, .y=0x05, .sp=0x80, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x567c, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x567d, .a=0xf4, .x=0xf7, .y=0x05, .sp=0x80, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x567c, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x567c, .value=0x1c, .type=IO_READ},
        {.addr=0x567d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0311) {
    const struct CPU_State initial_cpu = {.pc=0x6a24, .a=0xd4, .x=0x76, .y=0x7f, .sp=0x07, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x6a24, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x6a25, .a=0xa8, .x=0x76, .y=0x7f, .sp=0x07, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x6a24, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x6a24, .value=0x1c, .type=IO_READ},
        {.addr=0x6a25, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0312) {
    const struct CPU_State initial_cpu = {.pc=0x0ca4, .a=0xb2, .x=0x90, .y=0xd2, .sp=0x50, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x0ca4, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x0ca5, .a=0x64, .x=0x90, .y=0xd2, .sp=0x50, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0ca4, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x0ca4, .value=0x1c, .type=IO_READ},
        {.addr=0x0ca5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0313) {
    const struct CPU_State initial_cpu = {.pc=0xbfdd, .a=0x66, .x=0xde, .y=0x0e, .sp=0x96, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xbfdd, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xbfde, .a=0xcc, .x=0xde, .y=0x0e, .sp=0x96, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xbfdd, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xbfdd, .value=0x1c, .type=IO_READ},
        {.addr=0xbfde, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0314) {
    const struct CPU_State initial_cpu = {.pc=0x4476, .a=0xce, .x=0xa3, .y=0xfc, .sp=0x06, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x4476, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x4477, .a=0x9c, .x=0xa3, .y=0xfc, .sp=0x06, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x4476, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x4476, .value=0x1c, .type=IO_READ},
        {.addr=0x4477, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0315) {
    const struct CPU_State initial_cpu = {.pc=0x4ac9, .a=0xc1, .x=0x08, .y=0xf4, .sp=0xc2, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x4ac9, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x4aca, .a=0x82, .x=0x08, .y=0xf4, .sp=0xc2, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x4ac9, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x4ac9, .value=0x1c, .type=IO_READ},
        {.addr=0x4aca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0316) {
    const struct CPU_State initial_cpu = {.pc=0xe977, .a=0x9e, .x=0x61, .y=0xa1, .sp=0xb9, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xe977, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xe978, .a=0x3c, .x=0x61, .y=0xa1, .sp=0xb9, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xe977, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xe977, .value=0x1c, .type=IO_READ},
        {.addr=0xe978, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0317) {
    const struct CPU_State initial_cpu = {.pc=0xbdf6, .a=0xae, .x=0xf8, .y=0x3f, .sp=0xb2, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xbdf6, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xbdf7, .a=0x5c, .x=0xf8, .y=0x3f, .sp=0xb2, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xbdf6, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xbdf6, .value=0x1c, .type=IO_READ},
        {.addr=0xbdf7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0318) {
    const struct CPU_State initial_cpu = {.pc=0x877b, .a=0xaf, .x=0x4a, .y=0xee, .sp=0x8d, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x877b, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x877c, .a=0x5e, .x=0x4a, .y=0xee, .sp=0x8d, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x877b, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x877b, .value=0x1c, .type=IO_READ},
        {.addr=0x877c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0319) {
    const struct CPU_State initial_cpu = {.pc=0xc803, .a=0xc7, .x=0x07, .y=0x93, .sp=0x54, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xc803, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xc804, .a=0x8e, .x=0x07, .y=0x93, .sp=0x54, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xc803, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xc803, .value=0x1c, .type=IO_READ},
        {.addr=0xc804, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_031A) {
    const struct CPU_State initial_cpu = {.pc=0x11a3, .a=0x23, .x=0xe9, .y=0x60, .sp=0x75, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x11a3, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x11a4, .a=0x46, .x=0xe9, .y=0x60, .sp=0x75, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x11a3, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x11a3, .value=0x1c, .type=IO_READ},
        {.addr=0x11a4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_031B) {
    const struct CPU_State initial_cpu = {.pc=0x5db5, .a=0xd4, .x=0x88, .y=0xe9, .sp=0x3f, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x5db5, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x5db6, .a=0xa8, .x=0x88, .y=0xe9, .sp=0x3f, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x5db5, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x5db5, .value=0x1c, .type=IO_READ},
        {.addr=0x5db6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_031C) {
    const struct CPU_State initial_cpu = {.pc=0x3f52, .a=0xe1, .x=0xaf, .y=0xbe, .sp=0xd5, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x3f52, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x3f53, .a=0xc2, .x=0xaf, .y=0xbe, .sp=0xd5, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x3f52, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x3f52, .value=0x1c, .type=IO_READ},
        {.addr=0x3f53, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_031D) {
    const struct CPU_State initial_cpu = {.pc=0xfa48, .a=0xa8, .x=0xd0, .y=0x2b, .sp=0xaf, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xfa48, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xfa49, .a=0x50, .x=0xd0, .y=0x2b, .sp=0xaf, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xfa48, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xfa48, .value=0x1c, .type=IO_READ},
        {.addr=0xfa49, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_031E) {
    const struct CPU_State initial_cpu = {.pc=0x8cf4, .a=0x2e, .x=0x98, .y=0x36, .sp=0x27, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x8cf4, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x8cf5, .a=0x5c, .x=0x98, .y=0x36, .sp=0x27, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x8cf4, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x8cf4, .value=0x1c, .type=IO_READ},
        {.addr=0x8cf5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_031F) {
    const struct CPU_State initial_cpu = {.pc=0x31f0, .a=0x54, .x=0xc4, .y=0x46, .sp=0x33, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x31f0, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x31f1, .a=0xa8, .x=0xc4, .y=0x46, .sp=0x33, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x31f0, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x31f0, .value=0x1c, .type=IO_READ},
        {.addr=0x31f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0320) {
    const struct CPU_State initial_cpu = {.pc=0x0079, .a=0xc2, .x=0x55, .y=0xe5, .sp=0x73, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x0079, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x007a, .a=0x84, .x=0x55, .y=0xe5, .sp=0x73, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x0079, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x0079, .value=0x1c, .type=IO_READ},
        {.addr=0x007a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0321) {
    const struct CPU_State initial_cpu = {.pc=0x3352, .a=0x86, .x=0x42, .y=0xa4, .sp=0x76, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x3352, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x3353, .a=0x0c, .x=0x42, .y=0xa4, .sp=0x76, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x3352, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x3352, .value=0x1c, .type=IO_READ},
        {.addr=0x3353, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0322) {
    const struct CPU_State initial_cpu = {.pc=0xd8f0, .a=0xc0, .x=0x0d, .y=0x83, .sp=0x7b, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xd8f0, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd8f1, .a=0x80, .x=0x0d, .y=0x83, .sp=0x7b, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xd8f0, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd8f0, .value=0x1c, .type=IO_READ},
        {.addr=0xd8f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0323) {
    const struct CPU_State initial_cpu = {.pc=0x403a, .a=0xe7, .x=0x79, .y=0xa9, .sp=0x83, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x403a, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x403b, .a=0xce, .x=0x79, .y=0xa9, .sp=0x83, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x403a, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x403a, .value=0x1c, .type=IO_READ},
        {.addr=0x403b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0324) {
    const struct CPU_State initial_cpu = {.pc=0x4486, .a=0x26, .x=0xe4, .y=0xf7, .sp=0xfc, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x4486, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x4487, .a=0x4c, .x=0xe4, .y=0xf7, .sp=0xfc, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x4486, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x4486, .value=0x1c, .type=IO_READ},
        {.addr=0x4487, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0325) {
    const struct CPU_State initial_cpu = {.pc=0xce50, .a=0x89, .x=0x9b, .y=0x13, .sp=0x32, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xce50, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xce51, .a=0x12, .x=0x9b, .y=0x13, .sp=0x32, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xce50, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xce50, .value=0x1c, .type=IO_READ},
        {.addr=0xce51, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0326) {
    const struct CPU_State initial_cpu = {.pc=0x5f44, .a=0x6e, .x=0xd5, .y=0x0c, .sp=0x0d, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x5f44, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x5f45, .a=0xdc, .x=0xd5, .y=0x0c, .sp=0x0d, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x5f44, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x5f44, .value=0x1c, .type=IO_READ},
        {.addr=0x5f45, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0327) {
    const struct CPU_State initial_cpu = {.pc=0xc652, .a=0xd5, .x=0x1e, .y=0x77, .sp=0xb4, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xc652, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xc653, .a=0xaa, .x=0x1e, .y=0x77, .sp=0xb4, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xc652, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xc652, .value=0x1c, .type=IO_READ},
        {.addr=0xc653, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0328) {
    const struct CPU_State initial_cpu = {.pc=0x0f5f, .a=0x4d, .x=0xab, .y=0x04, .sp=0x8b, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x0f5f, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x0f60, .a=0x9a, .x=0xab, .y=0x04, .sp=0x8b, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0f5f, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x0f5f, .value=0x1c, .type=IO_READ},
        {.addr=0x0f60, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0329) {
    const struct CPU_State initial_cpu = {.pc=0x47fc, .a=0x32, .x=0x3c, .y=0xb0, .sp=0x91, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x47fc, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x47fd, .a=0x64, .x=0x3c, .y=0xb0, .sp=0x91, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x47fc, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x47fc, .value=0x1c, .type=IO_READ},
        {.addr=0x47fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_032A) {
    const struct CPU_State initial_cpu = {.pc=0x5304, .a=0x54, .x=0x04, .y=0xbe, .sp=0x94, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x5304, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x5305, .a=0xa8, .x=0x04, .y=0xbe, .sp=0x94, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x5304, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x5304, .value=0x1c, .type=IO_READ},
        {.addr=0x5305, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_032B) {
    const struct CPU_State initial_cpu = {.pc=0xd003, .a=0x48, .x=0x93, .y=0xaf, .sp=0xaf, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xd003, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd004, .a=0x90, .x=0x93, .y=0xaf, .sp=0xaf, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xd003, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd003, .value=0x1c, .type=IO_READ},
        {.addr=0xd004, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_032C) {
    const struct CPU_State initial_cpu = {.pc=0xa0d6, .a=0xea, .x=0x6b, .y=0x05, .sp=0x36, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xa0d6, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xa0d7, .a=0xd4, .x=0x6b, .y=0x05, .sp=0x36, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xa0d6, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xa0d6, .value=0x1c, .type=IO_READ},
        {.addr=0xa0d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_032D) {
    const struct CPU_State initial_cpu = {.pc=0xa436, .a=0xf5, .x=0x42, .y=0x0a, .sp=0xcb, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xa436, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xa437, .a=0xea, .x=0x42, .y=0x0a, .sp=0xcb, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xa436, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xa436, .value=0x1c, .type=IO_READ},
        {.addr=0xa437, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_032E) {
    const struct CPU_State initial_cpu = {.pc=0x3396, .a=0xf7, .x=0xb1, .y=0x3b, .sp=0x2f, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x3396, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x3397, .a=0xee, .x=0xb1, .y=0x3b, .sp=0x2f, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x3396, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x3396, .value=0x1c, .type=IO_READ},
        {.addr=0x3397, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_032F) {
    const struct CPU_State initial_cpu = {.pc=0xbe48, .a=0x15, .x=0xcb, .y=0x9a, .sp=0xaa, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xbe48, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xbe49, .a=0x2a, .x=0xcb, .y=0x9a, .sp=0xaa, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xbe48, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xbe48, .value=0x1c, .type=IO_READ},
        {.addr=0xbe49, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0330) {
    const struct CPU_State initial_cpu = {.pc=0x006c, .a=0x71, .x=0x94, .y=0xd0, .sp=0xc9, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x006c, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x006d, .a=0xe2, .x=0x94, .y=0xd0, .sp=0xc9, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x006c, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x006c, .value=0x1c, .type=IO_READ},
        {.addr=0x006d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0331) {
    const struct CPU_State initial_cpu = {.pc=0xfbbd, .a=0x76, .x=0xfa, .y=0x3e, .sp=0xe4, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xfbbd, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xfbbe, .a=0xec, .x=0xfa, .y=0x3e, .sp=0xe4, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xfbbd, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xfbbd, .value=0x1c, .type=IO_READ},
        {.addr=0xfbbe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0332) {
    const struct CPU_State initial_cpu = {.pc=0x2dcf, .a=0x0b, .x=0xb1, .y=0x5a, .sp=0x1c, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x2dcf, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x2dd0, .a=0x16, .x=0xb1, .y=0x5a, .sp=0x1c, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x2dcf, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x2dcf, .value=0x1c, .type=IO_READ},
        {.addr=0x2dd0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0333) {
    const struct CPU_State initial_cpu = {.pc=0xb04f, .a=0x0e, .x=0xef, .y=0x37, .sp=0x88, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xb04f, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xb050, .a=0x1c, .x=0xef, .y=0x37, .sp=0x88, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xb04f, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xb04f, .value=0x1c, .type=IO_READ},
        {.addr=0xb050, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0334) {
    const struct CPU_State initial_cpu = {.pc=0xe014, .a=0x57, .x=0x39, .y=0x98, .sp=0x48, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xe014, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xe015, .a=0xae, .x=0x39, .y=0x98, .sp=0x48, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xe014, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xe014, .value=0x1c, .type=IO_READ},
        {.addr=0xe015, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0335) {
    const struct CPU_State initial_cpu = {.pc=0xe253, .a=0xdd, .x=0x2f, .y=0xd2, .sp=0x48, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xe253, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xe254, .a=0xba, .x=0x2f, .y=0xd2, .sp=0x48, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xe253, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xe253, .value=0x1c, .type=IO_READ},
        {.addr=0xe254, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0336) {
    const struct CPU_State initial_cpu = {.pc=0x0a29, .a=0x3a, .x=0x0c, .y=0xe0, .sp=0x72, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x0a29, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x0a2a, .a=0x74, .x=0x0c, .y=0xe0, .sp=0x72, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0a29, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x0a29, .value=0x1c, .type=IO_READ},
        {.addr=0x0a2a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0337) {
    const struct CPU_State initial_cpu = {.pc=0x392c, .a=0xf4, .x=0xa4, .y=0xe9, .sp=0xc6, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x392c, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x392d, .a=0xe8, .x=0xa4, .y=0xe9, .sp=0xc6, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x392c, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x392c, .value=0x1c, .type=IO_READ},
        {.addr=0x392d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0338) {
    const struct CPU_State initial_cpu = {.pc=0x3bc1, .a=0x59, .x=0xb2, .y=0x4a, .sp=0x1a, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x3bc1, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x3bc2, .a=0xb2, .x=0xb2, .y=0x4a, .sp=0x1a, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x3bc1, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x3bc1, .value=0x1c, .type=IO_READ},
        {.addr=0x3bc2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0339) {
    const struct CPU_State initial_cpu = {.pc=0xc4f8, .a=0x3b, .x=0x78, .y=0xf1, .sp=0xfe, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xc4f8, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xc4f9, .a=0x76, .x=0x78, .y=0xf1, .sp=0xfe, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xc4f8, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xc4f8, .value=0x1c, .type=IO_READ},
        {.addr=0xc4f9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_033A) {
    const struct CPU_State initial_cpu = {.pc=0x2578, .a=0xaa, .x=0x53, .y=0x48, .sp=0xbe, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x2578, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x2579, .a=0x54, .x=0x53, .y=0x48, .sp=0xbe, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x2578, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x2578, .value=0x1c, .type=IO_READ},
        {.addr=0x2579, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_033B) {
    const struct CPU_State initial_cpu = {.pc=0xbe43, .a=0x45, .x=0x73, .y=0x8f, .sp=0xe6, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xbe43, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xbe44, .a=0x8a, .x=0x73, .y=0x8f, .sp=0xe6, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xbe43, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xbe43, .value=0x1c, .type=IO_READ},
        {.addr=0xbe44, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_033C) {
    const struct CPU_State initial_cpu = {.pc=0x2ee2, .a=0x9d, .x=0x6a, .y=0x53, .sp=0xd7, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x2ee2, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x2ee3, .a=0x3a, .x=0x6a, .y=0x53, .sp=0xd7, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x2ee2, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x2ee2, .value=0x1c, .type=IO_READ},
        {.addr=0x2ee3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_033D) {
    const struct CPU_State initial_cpu = {.pc=0x943f, .a=0xda, .x=0xab, .y=0xa0, .sp=0x4c, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x943f, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x9440, .a=0xb4, .x=0xab, .y=0xa0, .sp=0x4c, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x943f, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x943f, .value=0x1c, .type=IO_READ},
        {.addr=0x9440, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_033E) {
    const struct CPU_State initial_cpu = {.pc=0x694a, .a=0x35, .x=0xa0, .y=0x71, .sp=0x60, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x694a, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x694b, .a=0x6a, .x=0xa0, .y=0x71, .sp=0x60, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x694a, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x694a, .value=0x1c, .type=IO_READ},
        {.addr=0x694b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_033F) {
    const struct CPU_State initial_cpu = {.pc=0x04c5, .a=0x33, .x=0x39, .y=0xcf, .sp=0x38, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x04c5, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x04c6, .a=0x66, .x=0x39, .y=0xcf, .sp=0x38, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x04c5, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x04c5, .value=0x1c, .type=IO_READ},
        {.addr=0x04c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0340) {
    const struct CPU_State initial_cpu = {.pc=0x5386, .a=0x79, .x=0x16, .y=0xbf, .sp=0x8b, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x5386, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x5387, .a=0xf2, .x=0x16, .y=0xbf, .sp=0x8b, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x5386, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x5386, .value=0x1c, .type=IO_READ},
        {.addr=0x5387, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0341) {
    const struct CPU_State initial_cpu = {.pc=0x5150, .a=0x57, .x=0x0b, .y=0xef, .sp=0xd4, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x5150, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x5151, .a=0xae, .x=0x0b, .y=0xef, .sp=0xd4, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x5150, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x5150, .value=0x1c, .type=IO_READ},
        {.addr=0x5151, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0342) {
    const struct CPU_State initial_cpu = {.pc=0xa2c3, .a=0x4a, .x=0xaf, .y=0xf5, .sp=0x9b, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xa2c3, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xa2c4, .a=0x94, .x=0xaf, .y=0xf5, .sp=0x9b, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xa2c3, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xa2c3, .value=0x1c, .type=IO_READ},
        {.addr=0xa2c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0343) {
    const struct CPU_State initial_cpu = {.pc=0x32e4, .a=0x62, .x=0x95, .y=0x8a, .sp=0x89, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x32e4, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x32e5, .a=0xc4, .x=0x95, .y=0x8a, .sp=0x89, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x32e4, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x32e4, .value=0x1c, .type=IO_READ},
        {.addr=0x32e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0344) {
    const struct CPU_State initial_cpu = {.pc=0x870f, .a=0xfd, .x=0x05, .y=0xf3, .sp=0x1c, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x870f, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x8710, .a=0xfa, .x=0x05, .y=0xf3, .sp=0x1c, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x870f, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x870f, .value=0x1c, .type=IO_READ},
        {.addr=0x8710, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0345) {
    const struct CPU_State initial_cpu = {.pc=0x71fd, .a=0xfe, .x=0x8a, .y=0xb7, .sp=0xe7, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x71fd, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x71fe, .a=0xfc, .x=0x8a, .y=0xb7, .sp=0xe7, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x71fd, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x71fd, .value=0x1c, .type=IO_READ},
        {.addr=0x71fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0346) {
    const struct CPU_State initial_cpu = {.pc=0xfe47, .a=0x88, .x=0x97, .y=0xad, .sp=0x8c, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xfe47, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xfe48, .a=0x10, .x=0x97, .y=0xad, .sp=0x8c, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xfe47, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xfe47, .value=0x1c, .type=IO_READ},
        {.addr=0xfe48, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0347) {
    const struct CPU_State initial_cpu = {.pc=0xfce3, .a=0x22, .x=0x14, .y=0xa0, .sp=0xf5, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xfce3, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xfce4, .a=0x44, .x=0x14, .y=0xa0, .sp=0xf5, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xfce3, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xfce3, .value=0x1c, .type=IO_READ},
        {.addr=0xfce4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0348) {
    const struct CPU_State initial_cpu = {.pc=0xab39, .a=0x52, .x=0xa7, .y=0x00, .sp=0xf0, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xab39, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xab3a, .a=0xa4, .x=0xa7, .y=0x00, .sp=0xf0, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xab39, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xab39, .value=0x1c, .type=IO_READ},
        {.addr=0xab3a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0349) {
    const struct CPU_State initial_cpu = {.pc=0xcd2f, .a=0xd1, .x=0x3d, .y=0x12, .sp=0xe5, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xcd2f, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xcd30, .a=0xa2, .x=0x3d, .y=0x12, .sp=0xe5, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xcd2f, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xcd2f, .value=0x1c, .type=IO_READ},
        {.addr=0xcd30, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_034A) {
    const struct CPU_State initial_cpu = {.pc=0x56d4, .a=0x20, .x=0x2c, .y=0x69, .sp=0xd9, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x56d4, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x56d5, .a=0x40, .x=0x2c, .y=0x69, .sp=0xd9, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x56d4, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x56d4, .value=0x1c, .type=IO_READ},
        {.addr=0x56d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_034B) {
    const struct CPU_State initial_cpu = {.pc=0x08ca, .a=0x64, .x=0x08, .y=0xb6, .sp=0x7d, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x08ca, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x08cb, .a=0xc8, .x=0x08, .y=0xb6, .sp=0x7d, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x08ca, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x08ca, .value=0x1c, .type=IO_READ},
        {.addr=0x08cb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_034C) {
    const struct CPU_State initial_cpu = {.pc=0xf835, .a=0x0e, .x=0xb4, .y=0xd0, .sp=0xf8, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xf835, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xf836, .a=0x1c, .x=0xb4, .y=0xd0, .sp=0xf8, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xf835, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xf835, .value=0x1c, .type=IO_READ},
        {.addr=0xf836, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_034D) {
    const struct CPU_State initial_cpu = {.pc=0xd4d4, .a=0x66, .x=0x65, .y=0xa0, .sp=0x9e, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xd4d4, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd4d5, .a=0xcc, .x=0x65, .y=0xa0, .sp=0x9e, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xd4d4, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd4d4, .value=0x1c, .type=IO_READ},
        {.addr=0xd4d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_034E) {
    const struct CPU_State initial_cpu = {.pc=0x1a47, .a=0xea, .x=0x3d, .y=0xe2, .sp=0x72, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x1a47, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x1a48, .a=0xd4, .x=0x3d, .y=0xe2, .sp=0x72, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x1a47, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x1a47, .value=0x1c, .type=IO_READ},
        {.addr=0x1a48, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_034F) {
    const struct CPU_State initial_cpu = {.pc=0xe235, .a=0x76, .x=0x8a, .y=0x41, .sp=0x9e, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xe235, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xe236, .a=0xec, .x=0x8a, .y=0x41, .sp=0x9e, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xe235, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xe235, .value=0x1c, .type=IO_READ},
        {.addr=0xe236, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0350) {
    const struct CPU_State initial_cpu = {.pc=0xb0f2, .a=0x49, .x=0x16, .y=0x35, .sp=0xa6, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xb0f2, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xb0f3, .a=0x92, .x=0x16, .y=0x35, .sp=0xa6, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xb0f2, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xb0f2, .value=0x1c, .type=IO_READ},
        {.addr=0xb0f3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0351) {
    const struct CPU_State initial_cpu = {.pc=0x9738, .a=0xe4, .x=0xc6, .y=0x4a, .sp=0xe7, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x9738, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x9739, .a=0xc8, .x=0xc6, .y=0x4a, .sp=0xe7, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x9738, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x9738, .value=0x1c, .type=IO_READ},
        {.addr=0x9739, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0352) {
    const struct CPU_State initial_cpu = {.pc=0xb5dc, .a=0x82, .x=0x21, .y=0x6e, .sp=0xb7, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xb5dc, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xb5dd, .a=0x04, .x=0x21, .y=0x6e, .sp=0xb7, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xb5dc, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xb5dc, .value=0x1c, .type=IO_READ},
        {.addr=0xb5dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0353) {
    const struct CPU_State initial_cpu = {.pc=0x829a, .a=0xd0, .x=0x8f, .y=0xb3, .sp=0x01, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x829a, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x829b, .a=0xa0, .x=0x8f, .y=0xb3, .sp=0x01, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x829a, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x829a, .value=0x1c, .type=IO_READ},
        {.addr=0x829b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0354) {
    const struct CPU_State initial_cpu = {.pc=0x51da, .a=0x51, .x=0xeb, .y=0x10, .sp=0x8a, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x51da, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x51db, .a=0xa2, .x=0xeb, .y=0x10, .sp=0x8a, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x51da, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x51da, .value=0x1c, .type=IO_READ},
        {.addr=0x51db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0355) {
    const struct CPU_State initial_cpu = {.pc=0x2fdf, .a=0xab, .x=0x6f, .y=0xc5, .sp=0x3b, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x2fdf, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x2fe0, .a=0x56, .x=0x6f, .y=0xc5, .sp=0x3b, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x2fdf, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x2fdf, .value=0x1c, .type=IO_READ},
        {.addr=0x2fe0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0356) {
    const struct CPU_State initial_cpu = {.pc=0xcc16, .a=0x64, .x=0x45, .y=0x46, .sp=0x3e, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xcc16, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xcc17, .a=0xc8, .x=0x45, .y=0x46, .sp=0x3e, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xcc16, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xcc16, .value=0x1c, .type=IO_READ},
        {.addr=0xcc17, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0357) {
    const struct CPU_State initial_cpu = {.pc=0xbdde, .a=0x59, .x=0xc3, .y=0x55, .sp=0x1f, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0xbdde, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xbddf, .a=0xb2, .x=0xc3, .y=0x55, .sp=0x1f, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xbdde, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xbdde, .value=0x1c, .type=IO_READ},
        {.addr=0xbddf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0358) {
    const struct CPU_State initial_cpu = {.pc=0x4c52, .a=0xc0, .x=0x57, .y=0x9c, .sp=0xff, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x4c52, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x4c53, .a=0x80, .x=0x57, .y=0x9c, .sp=0xff, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x4c52, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x4c52, .value=0x1c, .type=IO_READ},
        {.addr=0x4c53, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0359) {
    const struct CPU_State initial_cpu = {.pc=0x8680, .a=0xa6, .x=0x80, .y=0xb3, .sp=0xb8, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x8680, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x8681, .a=0x4c, .x=0x80, .y=0xb3, .sp=0xb8, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x8680, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x8680, .value=0x1c, .type=IO_READ},
        {.addr=0x8681, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_035A) {
    const struct CPU_State initial_cpu = {.pc=0x30ae, .a=0x0e, .x=0x3b, .y=0xdb, .sp=0xa0, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x30ae, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x30af, .a=0x1c, .x=0x3b, .y=0xdb, .sp=0xa0, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x30ae, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x30ae, .value=0x1c, .type=IO_READ},
        {.addr=0x30af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_035B) {
    const struct CPU_State initial_cpu = {.pc=0x0ff0, .a=0xa2, .x=0xa0, .y=0x8c, .sp=0xed, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x0ff0, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x0ff1, .a=0x44, .x=0xa0, .y=0x8c, .sp=0xed, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0ff0, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x0ff0, .value=0x1c, .type=IO_READ},
        {.addr=0x0ff1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_035C) {
    const struct CPU_State initial_cpu = {.pc=0x3a31, .a=0xa6, .x=0xd9, .y=0x76, .sp=0x72, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x3a31, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x3a32, .a=0x4c, .x=0xd9, .y=0x76, .sp=0x72, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x3a31, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x3a31, .value=0x1c, .type=IO_READ},
        {.addr=0x3a32, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_035D) {
    const struct CPU_State initial_cpu = {.pc=0x7077, .a=0x95, .x=0xb9, .y=0x27, .sp=0xf7, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x7077, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x7078, .a=0x2a, .x=0xb9, .y=0x27, .sp=0xf7, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x7077, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x7077, .value=0x1c, .type=IO_READ},
        {.addr=0x7078, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_035E) {
    const struct CPU_State initial_cpu = {.pc=0x7306, .a=0x28, .x=0x35, .y=0xf2, .sp=0x4d, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x7306, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x7307, .a=0x50, .x=0x35, .y=0xf2, .sp=0x4d, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x7306, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x7306, .value=0x1c, .type=IO_READ},
        {.addr=0x7307, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_035F) {
    const struct CPU_State initial_cpu = {.pc=0xdaed, .a=0x82, .x=0x08, .y=0x54, .sp=0x9f, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xdaed, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xdaee, .a=0x04, .x=0x08, .y=0x54, .sp=0x9f, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xdaed, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xdaed, .value=0x1c, .type=IO_READ},
        {.addr=0xdaee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0360) {
    const struct CPU_State initial_cpu = {.pc=0x046d, .a=0x92, .x=0x7f, .y=0xa3, .sp=0xa4, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x046d, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x046e, .a=0x24, .x=0x7f, .y=0xa3, .sp=0xa4, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x046d, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x046d, .value=0x1c, .type=IO_READ},
        {.addr=0x046e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0361) {
    const struct CPU_State initial_cpu = {.pc=0xb2ca, .a=0xac, .x=0x64, .y=0xa6, .sp=0x50, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xb2ca, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xb2cb, .a=0x58, .x=0x64, .y=0xa6, .sp=0x50, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xb2ca, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xb2ca, .value=0x1c, .type=IO_READ},
        {.addr=0xb2cb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0362) {
    const struct CPU_State initial_cpu = {.pc=0xe14a, .a=0xaf, .x=0x4c, .y=0x9a, .sp=0xe8, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xe14a, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xe14b, .a=0x5e, .x=0x4c, .y=0x9a, .sp=0xe8, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xe14a, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xe14a, .value=0x1c, .type=IO_READ},
        {.addr=0xe14b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0363) {
    const struct CPU_State initial_cpu = {.pc=0x1ee3, .a=0x4b, .x=0x8a, .y=0x5f, .sp=0x24, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x1ee3, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x1ee4, .a=0x96, .x=0x8a, .y=0x5f, .sp=0x24, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x1ee3, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x1ee3, .value=0x1c, .type=IO_READ},
        {.addr=0x1ee4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0364) {
    const struct CPU_State initial_cpu = {.pc=0x680f, .a=0x0f, .x=0x5c, .y=0xcd, .sp=0x18, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x680f, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x6810, .a=0x1e, .x=0x5c, .y=0xcd, .sp=0x18, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x680f, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x680f, .value=0x1c, .type=IO_READ},
        {.addr=0x6810, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0365) {
    const struct CPU_State initial_cpu = {.pc=0x6a17, .a=0x6c, .x=0x17, .y=0x3c, .sp=0xc6, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x6a17, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x6a18, .a=0xd8, .x=0x17, .y=0x3c, .sp=0xc6, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x6a17, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x6a17, .value=0x1c, .type=IO_READ},
        {.addr=0x6a18, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0366) {
    const struct CPU_State initial_cpu = {.pc=0xf0a8, .a=0x56, .x=0xc7, .y=0x0a, .sp=0x4a, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xf0a8, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xf0a9, .a=0xac, .x=0xc7, .y=0x0a, .sp=0x4a, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xf0a8, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xf0a8, .value=0x1c, .type=IO_READ},
        {.addr=0xf0a9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0367) {
    const struct CPU_State initial_cpu = {.pc=0x8f2d, .a=0xe6, .x=0xf0, .y=0xff, .sp=0x34, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x8f2d, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x8f2e, .a=0xcc, .x=0xf0, .y=0xff, .sp=0x34, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x8f2d, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x8f2d, .value=0x1c, .type=IO_READ},
        {.addr=0x8f2e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0368) {
    const struct CPU_State initial_cpu = {.pc=0x4e42, .a=0x00, .x=0xc3, .y=0x70, .sp=0x06, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x4e42, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x4e43, .a=0x00, .x=0xc3, .y=0x70, .sp=0x06, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x4e42, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x4e42, .value=0x1c, .type=IO_READ},
        {.addr=0x4e43, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0369) {
    const struct CPU_State initial_cpu = {.pc=0x387c, .a=0xb2, .x=0xf1, .y=0x01, .sp=0xe0, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x387c, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x387d, .a=0x64, .x=0xf1, .y=0x01, .sp=0xe0, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x387c, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x387c, .value=0x1c, .type=IO_READ},
        {.addr=0x387d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_036A) {
    const struct CPU_State initial_cpu = {.pc=0x7510, .a=0xea, .x=0x87, .y=0x3e, .sp=0x1d, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x7510, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x7511, .a=0xd4, .x=0x87, .y=0x3e, .sp=0x1d, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x7510, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x7510, .value=0x1c, .type=IO_READ},
        {.addr=0x7511, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_036B) {
    const struct CPU_State initial_cpu = {.pc=0xf10f, .a=0x53, .x=0x0d, .y=0x3e, .sp=0x69, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xf10f, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xf110, .a=0xa6, .x=0x0d, .y=0x3e, .sp=0x69, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xf10f, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xf10f, .value=0x1c, .type=IO_READ},
        {.addr=0xf110, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_036C) {
    const struct CPU_State initial_cpu = {.pc=0x6395, .a=0x20, .x=0x11, .y=0x5d, .sp=0xa9, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x6395, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x6396, .a=0x40, .x=0x11, .y=0x5d, .sp=0xa9, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x6395, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x6395, .value=0x1c, .type=IO_READ},
        {.addr=0x6396, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_036D) {
    const struct CPU_State initial_cpu = {.pc=0x6aa5, .a=0xed, .x=0x3a, .y=0x37, .sp=0x3c, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x6aa5, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x6aa6, .a=0xda, .x=0x3a, .y=0x37, .sp=0x3c, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x6aa5, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x6aa5, .value=0x1c, .type=IO_READ},
        {.addr=0x6aa6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_036E) {
    const struct CPU_State initial_cpu = {.pc=0x624d, .a=0xc6, .x=0xc2, .y=0x6e, .sp=0x3e, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x624d, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x624e, .a=0x8c, .x=0xc2, .y=0x6e, .sp=0x3e, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x624d, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x624d, .value=0x1c, .type=IO_READ},
        {.addr=0x624e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_036F) {
    const struct CPU_State initial_cpu = {.pc=0xa0f3, .a=0xb5, .x=0x0f, .y=0x00, .sp=0x9b, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xa0f3, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xa0f4, .a=0x6a, .x=0x0f, .y=0x00, .sp=0x9b, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xa0f3, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xa0f3, .value=0x1c, .type=IO_READ},
        {.addr=0xa0f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0370) {
    const struct CPU_State initial_cpu = {.pc=0x8d8e, .a=0x50, .x=0xce, .y=0x69, .sp=0x4c, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x8d8e, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x8d8f, .a=0xa0, .x=0xce, .y=0x69, .sp=0x4c, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x8d8e, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x8d8e, .value=0x1c, .type=IO_READ},
        {.addr=0x8d8f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0371) {
    const struct CPU_State initial_cpu = {.pc=0xeb00, .a=0xd8, .x=0xa5, .y=0xd3, .sp=0x51, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xeb00, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xeb01, .a=0xb0, .x=0xa5, .y=0xd3, .sp=0x51, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xeb00, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xeb00, .value=0x1c, .type=IO_READ},
        {.addr=0xeb01, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0372) {
    const struct CPU_State initial_cpu = {.pc=0x545a, .a=0xe1, .x=0xea, .y=0x3b, .sp=0xfb, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x545a, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x545b, .a=0xc2, .x=0xea, .y=0x3b, .sp=0xfb, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x545a, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x545a, .value=0x1c, .type=IO_READ},
        {.addr=0x545b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0373) {
    const struct CPU_State initial_cpu = {.pc=0x21d8, .a=0x68, .x=0xb1, .y=0x83, .sp=0x77, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x21d8, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x21d9, .a=0xd0, .x=0xb1, .y=0x83, .sp=0x77, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x21d8, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x21d8, .value=0x1c, .type=IO_READ},
        {.addr=0x21d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0374) {
    const struct CPU_State initial_cpu = {.pc=0xb216, .a=0xa6, .x=0xd0, .y=0x84, .sp=0x51, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xb216, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xb217, .a=0x4c, .x=0xd0, .y=0x84, .sp=0x51, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xb216, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xb216, .value=0x1c, .type=IO_READ},
        {.addr=0xb217, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0375) {
    const struct CPU_State initial_cpu = {.pc=0x8882, .a=0x33, .x=0xb7, .y=0x0a, .sp=0x30, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x8882, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x8883, .a=0x66, .x=0xb7, .y=0x0a, .sp=0x30, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x8882, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x8882, .value=0x1c, .type=IO_READ},
        {.addr=0x8883, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0376) {
    const struct CPU_State initial_cpu = {.pc=0xfe1b, .a=0x55, .x=0x20, .y=0x5a, .sp=0x55, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xfe1b, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xfe1c, .a=0xaa, .x=0x20, .y=0x5a, .sp=0x55, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xfe1b, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xfe1b, .value=0x1c, .type=IO_READ},
        {.addr=0xfe1c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0377) {
    const struct CPU_State initial_cpu = {.pc=0x6dac, .a=0x99, .x=0x30, .y=0xf5, .sp=0x3a, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x6dac, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x6dad, .a=0x32, .x=0x30, .y=0xf5, .sp=0x3a, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x6dac, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x6dac, .value=0x1c, .type=IO_READ},
        {.addr=0x6dad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0378) {
    const struct CPU_State initial_cpu = {.pc=0x9eae, .a=0x04, .x=0xb5, .y=0x89, .sp=0x7e, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x9eae, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x9eaf, .a=0x08, .x=0xb5, .y=0x89, .sp=0x7e, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x9eae, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x9eae, .value=0x1c, .type=IO_READ},
        {.addr=0x9eaf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0379) {
    const struct CPU_State initial_cpu = {.pc=0x696c, .a=0xf4, .x=0xa0, .y=0x27, .sp=0xf1, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x696c, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x696d, .a=0xe8, .x=0xa0, .y=0x27, .sp=0xf1, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x696c, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x696c, .value=0x1c, .type=IO_READ},
        {.addr=0x696d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_037A) {
    const struct CPU_State initial_cpu = {.pc=0xd2df, .a=0x2c, .x=0x81, .y=0xbd, .sp=0x67, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xd2df, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd2e0, .a=0x58, .x=0x81, .y=0xbd, .sp=0x67, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xd2df, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd2df, .value=0x1c, .type=IO_READ},
        {.addr=0xd2e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_037B) {
    const struct CPU_State initial_cpu = {.pc=0x9b6e, .a=0x49, .x=0x88, .y=0x13, .sp=0x5e, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x9b6e, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x9b6f, .a=0x92, .x=0x88, .y=0x13, .sp=0x5e, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x9b6e, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x9b6e, .value=0x1c, .type=IO_READ},
        {.addr=0x9b6f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_037C) {
    const struct CPU_State initial_cpu = {.pc=0x3455, .a=0x5e, .x=0xae, .y=0xdf, .sp=0x24, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x3455, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x3456, .a=0xbc, .x=0xae, .y=0xdf, .sp=0x24, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x3455, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x3455, .value=0x1c, .type=IO_READ},
        {.addr=0x3456, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_037D) {
    const struct CPU_State initial_cpu = {.pc=0xf43b, .a=0x1f, .x=0x33, .y=0x12, .sp=0xd8, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xf43b, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xf43c, .a=0x3e, .x=0x33, .y=0x12, .sp=0xd8, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xf43b, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xf43b, .value=0x1c, .type=IO_READ},
        {.addr=0xf43c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_037E) {
    const struct CPU_State initial_cpu = {.pc=0x3a07, .a=0xfd, .x=0x63, .y=0x09, .sp=0x86, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x3a07, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x3a08, .a=0xfa, .x=0x63, .y=0x09, .sp=0x86, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x3a07, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x3a07, .value=0x1c, .type=IO_READ},
        {.addr=0x3a08, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_037F) {
    const struct CPU_State initial_cpu = {.pc=0x49ba, .a=0xca, .x=0x2b, .y=0xad, .sp=0x72, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x49ba, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x49bb, .a=0x94, .x=0x2b, .y=0xad, .sp=0x72, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x49ba, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x49ba, .value=0x1c, .type=IO_READ},
        {.addr=0x49bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0380) {
    const struct CPU_State initial_cpu = {.pc=0x1e45, .a=0xd3, .x=0x22, .y=0x56, .sp=0x44, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x1e45, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x1e46, .a=0xa6, .x=0x22, .y=0x56, .sp=0x44, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x1e45, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x1e45, .value=0x1c, .type=IO_READ},
        {.addr=0x1e46, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0381) {
    const struct CPU_State initial_cpu = {.pc=0x6246, .a=0x3f, .x=0x68, .y=0x40, .sp=0x97, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x6246, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x6247, .a=0x7e, .x=0x68, .y=0x40, .sp=0x97, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x6246, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x6246, .value=0x1c, .type=IO_READ},
        {.addr=0x6247, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0382) {
    const struct CPU_State initial_cpu = {.pc=0x6826, .a=0xb4, .x=0x96, .y=0x70, .sp=0xca, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x6826, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x6827, .a=0x68, .x=0x96, .y=0x70, .sp=0xca, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x6826, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x6826, .value=0x1c, .type=IO_READ},
        {.addr=0x6827, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0383) {
    const struct CPU_State initial_cpu = {.pc=0xb2e0, .a=0x6e, .x=0x7c, .y=0x8f, .sp=0xf6, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xb2e0, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xb2e1, .a=0xdc, .x=0x7c, .y=0x8f, .sp=0xf6, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xb2e0, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xb2e0, .value=0x1c, .type=IO_READ},
        {.addr=0xb2e1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0384) {
    const struct CPU_State initial_cpu = {.pc=0x8ea4, .a=0x80, .x=0x23, .y=0x74, .sp=0x1b, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x8ea4, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x8ea5, .a=0x00, .x=0x23, .y=0x74, .sp=0x1b, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x8ea4, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x8ea4, .value=0x1c, .type=IO_READ},
        {.addr=0x8ea5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0385) {
    const struct CPU_State initial_cpu = {.pc=0x9434, .a=0xd2, .x=0xfe, .y=0xa5, .sp=0x41, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x9434, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x9435, .a=0xa4, .x=0xfe, .y=0xa5, .sp=0x41, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x9434, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x9434, .value=0x1c, .type=IO_READ},
        {.addr=0x9435, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0386) {
    const struct CPU_State initial_cpu = {.pc=0x9f80, .a=0x0c, .x=0x91, .y=0x4f, .sp=0x9d, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x9f80, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x9f81, .a=0x18, .x=0x91, .y=0x4f, .sp=0x9d, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x9f80, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x9f80, .value=0x1c, .type=IO_READ},
        {.addr=0x9f81, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0387) {
    const struct CPU_State initial_cpu = {.pc=0x9c78, .a=0xff, .x=0xc4, .y=0xbc, .sp=0x9a, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x9c78, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x9c79, .a=0xfe, .x=0xc4, .y=0xbc, .sp=0x9a, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x9c78, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x9c78, .value=0x1c, .type=IO_READ},
        {.addr=0x9c79, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0388) {
    const struct CPU_State initial_cpu = {.pc=0xe986, .a=0x63, .x=0x77, .y=0x35, .sp=0x30, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xe986, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xe987, .a=0xc6, .x=0x77, .y=0x35, .sp=0x30, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xe986, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xe986, .value=0x1c, .type=IO_READ},
        {.addr=0xe987, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0389) {
    const struct CPU_State initial_cpu = {.pc=0x8b10, .a=0x65, .x=0x98, .y=0x0e, .sp=0xc9, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x8b10, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x8b11, .a=0xca, .x=0x98, .y=0x0e, .sp=0xc9, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x8b10, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x8b10, .value=0x1c, .type=IO_READ},
        {.addr=0x8b11, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_038A) {
    const struct CPU_State initial_cpu = {.pc=0x6c8c, .a=0xfc, .x=0x55, .y=0x93, .sp=0xef, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x6c8c, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x6c8d, .a=0xf8, .x=0x55, .y=0x93, .sp=0xef, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x6c8c, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x6c8c, .value=0x1c, .type=IO_READ},
        {.addr=0x6c8d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_038B) {
    const struct CPU_State initial_cpu = {.pc=0xa331, .a=0xe2, .x=0x57, .y=0x69, .sp=0x88, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xa331, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xa332, .a=0xc4, .x=0x57, .y=0x69, .sp=0x88, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xa331, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xa331, .value=0x1c, .type=IO_READ},
        {.addr=0xa332, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_038C) {
    const struct CPU_State initial_cpu = {.pc=0x28e5, .a=0xea, .x=0x6e, .y=0x7c, .sp=0x46, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x28e5, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x28e6, .a=0xd4, .x=0x6e, .y=0x7c, .sp=0x46, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x28e5, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x28e5, .value=0x1c, .type=IO_READ},
        {.addr=0x28e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_038D) {
    const struct CPU_State initial_cpu = {.pc=0x6dcd, .a=0x3d, .x=0x26, .y=0x15, .sp=0x6a, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x6dcd, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x6dce, .a=0x7a, .x=0x26, .y=0x15, .sp=0x6a, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x6dcd, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x6dcd, .value=0x1c, .type=IO_READ},
        {.addr=0x6dce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_038E) {
    const struct CPU_State initial_cpu = {.pc=0xfd2b, .a=0xa9, .x=0x3f, .y=0x3d, .sp=0xcc, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xfd2b, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xfd2c, .a=0x52, .x=0x3f, .y=0x3d, .sp=0xcc, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xfd2b, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xfd2b, .value=0x1c, .type=IO_READ},
        {.addr=0xfd2c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_038F) {
    const struct CPU_State initial_cpu = {.pc=0x867c, .a=0x62, .x=0x79, .y=0xfc, .sp=0x64, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x867c, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x867d, .a=0xc4, .x=0x79, .y=0xfc, .sp=0x64, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x867c, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x867c, .value=0x1c, .type=IO_READ},
        {.addr=0x867d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0390) {
    const struct CPU_State initial_cpu = {.pc=0xe16f, .a=0x0b, .x=0xce, .y=0x66, .sp=0x59, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xe16f, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xe170, .a=0x16, .x=0xce, .y=0x66, .sp=0x59, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xe16f, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xe16f, .value=0x1c, .type=IO_READ},
        {.addr=0xe170, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0391) {
    const struct CPU_State initial_cpu = {.pc=0x0503, .a=0x74, .x=0x73, .y=0x67, .sp=0xa5, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x0503, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x0504, .a=0xe8, .x=0x73, .y=0x67, .sp=0xa5, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0503, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x0503, .value=0x1c, .type=IO_READ},
        {.addr=0x0504, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0392) {
    const struct CPU_State initial_cpu = {.pc=0x64f7, .a=0xc4, .x=0x0c, .y=0x6d, .sp=0xec, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x64f7, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x64f8, .a=0x88, .x=0x0c, .y=0x6d, .sp=0xec, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x64f7, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x64f7, .value=0x1c, .type=IO_READ},
        {.addr=0x64f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0393) {
    const struct CPU_State initial_cpu = {.pc=0xaf91, .a=0x0b, .x=0x64, .y=0x8a, .sp=0x81, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xaf91, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xaf92, .a=0x16, .x=0x64, .y=0x8a, .sp=0x81, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xaf91, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xaf91, .value=0x1c, .type=IO_READ},
        {.addr=0xaf92, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0394) {
    const struct CPU_State initial_cpu = {.pc=0x62be, .a=0x10, .x=0x3d, .y=0xdf, .sp=0x7d, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x62be, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x62bf, .a=0x20, .x=0x3d, .y=0xdf, .sp=0x7d, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x62be, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x62be, .value=0x1c, .type=IO_READ},
        {.addr=0x62bf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0395) {
    const struct CPU_State initial_cpu = {.pc=0xa826, .a=0x6b, .x=0x7b, .y=0x2d, .sp=0xa4, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xa826, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xa827, .a=0xd6, .x=0x7b, .y=0x2d, .sp=0xa4, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xa826, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xa826, .value=0x1c, .type=IO_READ},
        {.addr=0xa827, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0396) {
    const struct CPU_State initial_cpu = {.pc=0x89ea, .a=0x0d, .x=0x6a, .y=0x47, .sp=0x3c, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x89ea, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x89eb, .a=0x1a, .x=0x6a, .y=0x47, .sp=0x3c, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x89ea, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x89ea, .value=0x1c, .type=IO_READ},
        {.addr=0x89eb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0397) {
    const struct CPU_State initial_cpu = {.pc=0xfbb5, .a=0x12, .x=0x52, .y=0x35, .sp=0x83, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xfbb5, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xfbb6, .a=0x24, .x=0x52, .y=0x35, .sp=0x83, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xfbb5, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xfbb5, .value=0x1c, .type=IO_READ},
        {.addr=0xfbb6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0398) {
    const struct CPU_State initial_cpu = {.pc=0x73f0, .a=0x79, .x=0xfa, .y=0x26, .sp=0x90, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x73f0, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x73f1, .a=0xf2, .x=0xfa, .y=0x26, .sp=0x90, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x73f0, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x73f0, .value=0x1c, .type=IO_READ},
        {.addr=0x73f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_0399) {
    const struct CPU_State initial_cpu = {.pc=0x6ec6, .a=0xb8, .x=0xa1, .y=0x3d, .sp=0xf5, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x6ec6, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x6ec7, .a=0x70, .x=0xa1, .y=0x3d, .sp=0xf5, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x6ec6, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x6ec6, .value=0x1c, .type=IO_READ},
        {.addr=0x6ec7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_039A) {
    const struct CPU_State initial_cpu = {.pc=0x51eb, .a=0x75, .x=0x1b, .y=0x55, .sp=0x35, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x51eb, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x51ec, .a=0xea, .x=0x1b, .y=0x55, .sp=0x35, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x51eb, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x51eb, .value=0x1c, .type=IO_READ},
        {.addr=0x51ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_039B) {
    const struct CPU_State initial_cpu = {.pc=0xfe2a, .a=0xaa, .x=0x0d, .y=0x13, .sp=0xb0, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xfe2a, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xfe2b, .a=0x54, .x=0x0d, .y=0x13, .sp=0xb0, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xfe2a, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xfe2a, .value=0x1c, .type=IO_READ},
        {.addr=0xfe2b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_039C) {
    const struct CPU_State initial_cpu = {.pc=0x6eb3, .a=0xee, .x=0x13, .y=0xe8, .sp=0xa9, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x6eb3, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x6eb4, .a=0xdc, .x=0x13, .y=0xe8, .sp=0xa9, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x6eb3, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x6eb3, .value=0x1c, .type=IO_READ},
        {.addr=0x6eb4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_039D) {
    const struct CPU_State initial_cpu = {.pc=0x87be, .a=0xe5, .x=0xda, .y=0x0f, .sp=0x05, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x87be, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x87bf, .a=0xca, .x=0xda, .y=0x0f, .sp=0x05, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x87be, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x87be, .value=0x1c, .type=IO_READ},
        {.addr=0x87bf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_039E) {
    const struct CPU_State initial_cpu = {.pc=0x2123, .a=0x11, .x=0x79, .y=0x65, .sp=0x23, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x2123, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x2124, .a=0x22, .x=0x79, .y=0x65, .sp=0x23, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x2123, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x2123, .value=0x1c, .type=IO_READ},
        {.addr=0x2124, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_039F) {
    const struct CPU_State initial_cpu = {.pc=0x7e9c, .a=0xab, .x=0xc5, .y=0xb8, .sp=0x4d, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x7e9c, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x7e9d, .a=0x56, .x=0xc5, .y=0xb8, .sp=0x4d, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x7e9c, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x7e9c, .value=0x1c, .type=IO_READ},
        {.addr=0x7e9d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03A0) {
    const struct CPU_State initial_cpu = {.pc=0x2db8, .a=0x59, .x=0x8a, .y=0x90, .sp=0x3d, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x2db8, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x2db9, .a=0xb2, .x=0x8a, .y=0x90, .sp=0x3d, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x2db8, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x2db8, .value=0x1c, .type=IO_READ},
        {.addr=0x2db9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03A1) {
    const struct CPU_State initial_cpu = {.pc=0xd21f, .a=0x39, .x=0xc6, .y=0x72, .sp=0xd4, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xd21f, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd220, .a=0x72, .x=0xc6, .y=0x72, .sp=0xd4, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xd21f, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd21f, .value=0x1c, .type=IO_READ},
        {.addr=0xd220, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03A2) {
    const struct CPU_State initial_cpu = {.pc=0x99d7, .a=0xc3, .x=0xa4, .y=0xfd, .sp=0x2c, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x99d7, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x99d8, .a=0x86, .x=0xa4, .y=0xfd, .sp=0x2c, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x99d7, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x99d7, .value=0x1c, .type=IO_READ},
        {.addr=0x99d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03A3) {
    const struct CPU_State initial_cpu = {.pc=0x59aa, .a=0xa3, .x=0x06, .y=0x7d, .sp=0xcb, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x59aa, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x59ab, .a=0x46, .x=0x06, .y=0x7d, .sp=0xcb, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x59aa, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x59aa, .value=0x1c, .type=IO_READ},
        {.addr=0x59ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03A4) {
    const struct CPU_State initial_cpu = {.pc=0x8dba, .a=0xee, .x=0xe3, .y=0x1c, .sp=0xc1, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x8dba, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x8dbb, .a=0xdc, .x=0xe3, .y=0x1c, .sp=0xc1, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x8dba, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x8dba, .value=0x1c, .type=IO_READ},
        {.addr=0x8dbb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03A5) {
    const struct CPU_State initial_cpu = {.pc=0x2b51, .a=0xb5, .x=0xbd, .y=0x0b, .sp=0xcf, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x2b51, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x2b52, .a=0x6a, .x=0xbd, .y=0x0b, .sp=0xcf, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x2b51, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x2b51, .value=0x1c, .type=IO_READ},
        {.addr=0x2b52, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x54cd, .a=0x92, .x=0x31, .y=0x51, .sp=0xa3, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x54cd, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x54ce, .a=0x24, .x=0x31, .y=0x51, .sp=0xa3, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x54cd, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x54cd, .value=0x1c, .type=IO_READ},
        {.addr=0x54ce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03A7) {
    const struct CPU_State initial_cpu = {.pc=0xf516, .a=0x9e, .x=0x82, .y=0x63, .sp=0x5a, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xf516, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xf517, .a=0x3c, .x=0x82, .y=0x63, .sp=0x5a, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xf516, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xf516, .value=0x1c, .type=IO_READ},
        {.addr=0xf517, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03A8) {
    const struct CPU_State initial_cpu = {.pc=0x46e3, .a=0x19, .x=0xde, .y=0x62, .sp=0x87, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x46e3, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x46e4, .a=0x32, .x=0xde, .y=0x62, .sp=0x87, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x46e3, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x46e3, .value=0x1c, .type=IO_READ},
        {.addr=0x46e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03A9) {
    const struct CPU_State initial_cpu = {.pc=0xe694, .a=0x42, .x=0xb6, .y=0xc3, .sp=0x5a, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xe694, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xe695, .a=0x84, .x=0xb6, .y=0xc3, .sp=0x5a, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xe694, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xe694, .value=0x1c, .type=IO_READ},
        {.addr=0xe695, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03AA) {
    const struct CPU_State initial_cpu = {.pc=0x494f, .a=0x2c, .x=0x75, .y=0x71, .sp=0xfc, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x494f, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x4950, .a=0x58, .x=0x75, .y=0x71, .sp=0xfc, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x494f, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x494f, .value=0x1c, .type=IO_READ},
        {.addr=0x4950, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03AB) {
    const struct CPU_State initial_cpu = {.pc=0x6392, .a=0x88, .x=0x25, .y=0xa1, .sp=0xb6, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x6392, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x6393, .a=0x10, .x=0x25, .y=0xa1, .sp=0xb6, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x6392, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x6392, .value=0x1c, .type=IO_READ},
        {.addr=0x6393, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03AC) {
    const struct CPU_State initial_cpu = {.pc=0x0e52, .a=0xfb, .x=0xe4, .y=0xb0, .sp=0xa5, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x0e52, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x0e53, .a=0xf6, .x=0xe4, .y=0xb0, .sp=0xa5, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x0e52, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x0e52, .value=0x1c, .type=IO_READ},
        {.addr=0x0e53, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03AD) {
    const struct CPU_State initial_cpu = {.pc=0xbceb, .a=0xca, .x=0xae, .y=0xad, .sp=0x73, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xbceb, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xbcec, .a=0x94, .x=0xae, .y=0xad, .sp=0x73, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xbceb, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xbceb, .value=0x1c, .type=IO_READ},
        {.addr=0xbcec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x7e70, .a=0x4f, .x=0x6c, .y=0x27, .sp=0x22, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x7e70, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x7e71, .a=0x9e, .x=0x6c, .y=0x27, .sp=0x22, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x7e70, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x7e70, .value=0x1c, .type=IO_READ},
        {.addr=0x7e71, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03AF) {
    const struct CPU_State initial_cpu = {.pc=0x56a1, .a=0xb3, .x=0x93, .y=0xa6, .sp=0x47, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x56a1, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x56a2, .a=0x66, .x=0x93, .y=0xa6, .sp=0x47, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x56a1, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x56a1, .value=0x1c, .type=IO_READ},
        {.addr=0x56a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03B0) {
    const struct CPU_State initial_cpu = {.pc=0xddd5, .a=0x12, .x=0xab, .y=0x9e, .sp=0x80, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xddd5, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xddd6, .a=0x24, .x=0xab, .y=0x9e, .sp=0x80, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xddd5, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xddd5, .value=0x1c, .type=IO_READ},
        {.addr=0xddd6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03B1) {
    const struct CPU_State initial_cpu = {.pc=0xbfa7, .a=0xc7, .x=0xe7, .y=0xc1, .sp=0xf3, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xbfa7, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xbfa8, .a=0x8e, .x=0xe7, .y=0xc1, .sp=0xf3, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xbfa7, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xbfa7, .value=0x1c, .type=IO_READ},
        {.addr=0xbfa8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03B2) {
    const struct CPU_State initial_cpu = {.pc=0x5f41, .a=0x52, .x=0x27, .y=0x9f, .sp=0x52, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x5f41, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x5f42, .a=0xa4, .x=0x27, .y=0x9f, .sp=0x52, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x5f41, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x5f41, .value=0x1c, .type=IO_READ},
        {.addr=0x5f42, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03B3) {
    const struct CPU_State initial_cpu = {.pc=0x8e51, .a=0x0e, .x=0xac, .y=0x21, .sp=0x8e, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x8e51, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x8e52, .a=0x1c, .x=0xac, .y=0x21, .sp=0x8e, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x8e51, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x8e51, .value=0x1c, .type=IO_READ},
        {.addr=0x8e52, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x2a67, .a=0x7a, .x=0xa9, .y=0x45, .sp=0x23, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x2a67, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x2a68, .a=0xf4, .x=0xa9, .y=0x45, .sp=0x23, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x2a67, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x2a67, .value=0x1c, .type=IO_READ},
        {.addr=0x2a68, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03B5) {
    const struct CPU_State initial_cpu = {.pc=0x8d19, .a=0x43, .x=0x35, .y=0xe2, .sp=0x13, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x8d19, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x8d1a, .a=0x86, .x=0x35, .y=0xe2, .sp=0x13, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x8d19, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x8d19, .value=0x1c, .type=IO_READ},
        {.addr=0x8d1a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03B6) {
    const struct CPU_State initial_cpu = {.pc=0x8144, .a=0x9a, .x=0x02, .y=0xe7, .sp=0xd5, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x8144, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x8145, .a=0x34, .x=0x02, .y=0xe7, .sp=0xd5, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x8144, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x8144, .value=0x1c, .type=IO_READ},
        {.addr=0x8145, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03B7) {
    const struct CPU_State initial_cpu = {.pc=0x8f40, .a=0x85, .x=0x15, .y=0x92, .sp=0x43, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x8f40, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x8f41, .a=0x0a, .x=0x15, .y=0x92, .sp=0x43, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x8f40, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x8f40, .value=0x1c, .type=IO_READ},
        {.addr=0x8f41, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03B8) {
    const struct CPU_State initial_cpu = {.pc=0x19ca, .a=0x7e, .x=0x1d, .y=0xef, .sp=0xf1, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x19ca, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x19cb, .a=0xfc, .x=0x1d, .y=0xef, .sp=0xf1, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x19ca, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x19ca, .value=0x1c, .type=IO_READ},
        {.addr=0x19cb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03B9) {
    const struct CPU_State initial_cpu = {.pc=0x6441, .a=0x3d, .x=0x0d, .y=0xb0, .sp=0x04, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x6441, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x6442, .a=0x7a, .x=0x0d, .y=0xb0, .sp=0x04, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x6441, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x6441, .value=0x1c, .type=IO_READ},
        {.addr=0x6442, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03BA) {
    const struct CPU_State initial_cpu = {.pc=0x4cdd, .a=0xc6, .x=0x23, .y=0xec, .sp=0xeb, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x4cdd, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x4cde, .a=0x8c, .x=0x23, .y=0xec, .sp=0xeb, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x4cdd, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x4cdd, .value=0x1c, .type=IO_READ},
        {.addr=0x4cde, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03BB) {
    const struct CPU_State initial_cpu = {.pc=0x7f83, .a=0x7a, .x=0xa0, .y=0xbe, .sp=0xa2, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x7f83, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x7f84, .a=0xf4, .x=0xa0, .y=0xbe, .sp=0xa2, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x7f83, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x7f83, .value=0x1c, .type=IO_READ},
        {.addr=0x7f84, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03BC) {
    const struct CPU_State initial_cpu = {.pc=0xd04d, .a=0x3b, .x=0xf8, .y=0xf1, .sp=0x6c, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xd04d, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd04e, .a=0x76, .x=0xf8, .y=0xf1, .sp=0x6c, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xd04d, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd04d, .value=0x1c, .type=IO_READ},
        {.addr=0xd04e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x3d0f, .a=0x0d, .x=0xe8, .y=0x9e, .sp=0xba, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x3d0f, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x3d10, .a=0x1a, .x=0xe8, .y=0x9e, .sp=0xba, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x3d0f, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x3d0f, .value=0x1c, .type=IO_READ},
        {.addr=0x3d10, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03BE) {
    const struct CPU_State initial_cpu = {.pc=0x9e9a, .a=0xaf, .x=0x42, .y=0x1d, .sp=0xe4, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x9e9a, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x9e9b, .a=0x5e, .x=0x42, .y=0x1d, .sp=0xe4, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x9e9a, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x9e9a, .value=0x1c, .type=IO_READ},
        {.addr=0x9e9b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03BF) {
    const struct CPU_State initial_cpu = {.pc=0xea0b, .a=0x6a, .x=0xa9, .y=0xb2, .sp=0x7f, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xea0b, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xea0c, .a=0xd4, .x=0xa9, .y=0xb2, .sp=0x7f, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xea0b, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xea0b, .value=0x1c, .type=IO_READ},
        {.addr=0xea0c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03C0) {
    const struct CPU_State initial_cpu = {.pc=0xe7b7, .a=0x48, .x=0x1f, .y=0xb4, .sp=0xc9, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xe7b7, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xe7b8, .a=0x90, .x=0x1f, .y=0xb4, .sp=0xc9, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xe7b7, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xe7b7, .value=0x1c, .type=IO_READ},
        {.addr=0xe7b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03C1) {
    const struct CPU_State initial_cpu = {.pc=0x48c8, .a=0x1d, .x=0x5b, .y=0x2a, .sp=0xb2, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x48c8, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x48c9, .a=0x3a, .x=0x5b, .y=0x2a, .sp=0xb2, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x48c8, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x48c8, .value=0x1c, .type=IO_READ},
        {.addr=0x48c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03C2) {
    const struct CPU_State initial_cpu = {.pc=0x3a8e, .a=0x41, .x=0xe8, .y=0xb3, .sp=0x3e, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x3a8e, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x3a8f, .a=0x82, .x=0xe8, .y=0xb3, .sp=0x3e, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x3a8e, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x3a8e, .value=0x1c, .type=IO_READ},
        {.addr=0x3a8f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03C3) {
    const struct CPU_State initial_cpu = {.pc=0x19b0, .a=0x01, .x=0xcd, .y=0xd8, .sp=0xe2, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x19b0, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x19b1, .a=0x02, .x=0xcd, .y=0xd8, .sp=0xe2, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x19b0, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x19b0, .value=0x1c, .type=IO_READ},
        {.addr=0x19b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03C4) {
    const struct CPU_State initial_cpu = {.pc=0xf3e2, .a=0xb6, .x=0x65, .y=0x51, .sp=0x01, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xf3e2, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xf3e3, .a=0x6c, .x=0x65, .y=0x51, .sp=0x01, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xf3e2, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xf3e2, .value=0x1c, .type=IO_READ},
        {.addr=0xf3e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03C5) {
    const struct CPU_State initial_cpu = {.pc=0xb10e, .a=0x4d, .x=0x60, .y=0x5f, .sp=0x6d, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xb10e, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xb10f, .a=0x9a, .x=0x60, .y=0x5f, .sp=0x6d, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xb10e, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xb10e, .value=0x1c, .type=IO_READ},
        {.addr=0xb10f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x0c76, .a=0x2b, .x=0x5c, .y=0xa0, .sp=0x27, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0c76, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x0c77, .a=0x56, .x=0x5c, .y=0xa0, .sp=0x27, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0c76, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x0c76, .value=0x1c, .type=IO_READ},
        {.addr=0x0c77, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03C7) {
    const struct CPU_State initial_cpu = {.pc=0x9d39, .a=0x31, .x=0x13, .y=0x39, .sp=0x27, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x9d39, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x9d3a, .a=0x62, .x=0x13, .y=0x39, .sp=0x27, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x9d39, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x9d39, .value=0x1c, .type=IO_READ},
        {.addr=0x9d3a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03C8) {
    const struct CPU_State initial_cpu = {.pc=0x05b6, .a=0x0b, .x=0x6b, .y=0x81, .sp=0x68, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x05b6, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x05b7, .a=0x16, .x=0x6b, .y=0x81, .sp=0x68, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x05b6, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x05b6, .value=0x1c, .type=IO_READ},
        {.addr=0x05b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03C9) {
    const struct CPU_State initial_cpu = {.pc=0x5b6e, .a=0x8a, .x=0x9a, .y=0x92, .sp=0xd9, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x5b6e, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x5b6f, .a=0x14, .x=0x9a, .y=0x92, .sp=0xd9, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x5b6e, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x5b6e, .value=0x1c, .type=IO_READ},
        {.addr=0x5b6f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03CA) {
    const struct CPU_State initial_cpu = {.pc=0xade2, .a=0x7a, .x=0x49, .y=0xd4, .sp=0x99, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xade2, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xade3, .a=0xf4, .x=0x49, .y=0xd4, .sp=0x99, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xade2, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xade2, .value=0x1c, .type=IO_READ},
        {.addr=0xade3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03CB) {
    const struct CPU_State initial_cpu = {.pc=0xa955, .a=0x89, .x=0x87, .y=0x5a, .sp=0x59, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xa955, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xa956, .a=0x12, .x=0x87, .y=0x5a, .sp=0x59, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xa955, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xa955, .value=0x1c, .type=IO_READ},
        {.addr=0xa956, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03CC) {
    const struct CPU_State initial_cpu = {.pc=0x17c6, .a=0x62, .x=0xc0, .y=0x18, .sp=0xdb, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x17c6, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x17c7, .a=0xc4, .x=0xc0, .y=0x18, .sp=0xdb, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x17c6, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x17c6, .value=0x1c, .type=IO_READ},
        {.addr=0x17c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03CD) {
    const struct CPU_State initial_cpu = {.pc=0x45b3, .a=0x3c, .x=0xf0, .y=0x7b, .sp=0x86, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x45b3, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x45b4, .a=0x78, .x=0xf0, .y=0x7b, .sp=0x86, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x45b3, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x45b3, .value=0x1c, .type=IO_READ},
        {.addr=0x45b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x39eb, .a=0x05, .x=0xd8, .y=0x0b, .sp=0xd2, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x39eb, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x39ec, .a=0x0a, .x=0xd8, .y=0x0b, .sp=0xd2, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x39eb, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x39eb, .value=0x1c, .type=IO_READ},
        {.addr=0x39ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x47b9, .a=0xca, .x=0xde, .y=0x47, .sp=0xba, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x47b9, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x47ba, .a=0x94, .x=0xde, .y=0x47, .sp=0xba, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x47b9, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x47b9, .value=0x1c, .type=IO_READ},
        {.addr=0x47ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x9d56, .a=0x29, .x=0x76, .y=0xf5, .sp=0x84, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x9d56, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x9d57, .a=0x52, .x=0x76, .y=0xf5, .sp=0x84, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x9d56, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x9d56, .value=0x1c, .type=IO_READ},
        {.addr=0x9d57, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03D1) {
    const struct CPU_State initial_cpu = {.pc=0x382d, .a=0x55, .x=0x0a, .y=0x4c, .sp=0x9a, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x382d, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x382e, .a=0xaa, .x=0x0a, .y=0x4c, .sp=0x9a, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x382d, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x382d, .value=0x1c, .type=IO_READ},
        {.addr=0x382e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03D2) {
    const struct CPU_State initial_cpu = {.pc=0xbabc, .a=0x28, .x=0x1c, .y=0x38, .sp=0xc8, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xbabc, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xbabd, .a=0x50, .x=0x1c, .y=0x38, .sp=0xc8, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xbabc, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xbabc, .value=0x1c, .type=IO_READ},
        {.addr=0xbabd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03D3) {
    const struct CPU_State initial_cpu = {.pc=0xd577, .a=0x10, .x=0x35, .y=0xd5, .sp=0x8b, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xd577, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd578, .a=0x20, .x=0x35, .y=0xd5, .sp=0x8b, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xd577, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd577, .value=0x1c, .type=IO_READ},
        {.addr=0xd578, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03D4) {
    const struct CPU_State initial_cpu = {.pc=0x2f6a, .a=0xeb, .x=0xeb, .y=0x0a, .sp=0x50, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x2f6a, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x2f6b, .a=0xd6, .x=0xeb, .y=0x0a, .sp=0x50, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x2f6a, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x2f6a, .value=0x1c, .type=IO_READ},
        {.addr=0x2f6b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03D5) {
    const struct CPU_State initial_cpu = {.pc=0xf774, .a=0x22, .x=0x54, .y=0x3d, .sp=0x3a, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xf774, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xf775, .a=0x44, .x=0x54, .y=0x3d, .sp=0x3a, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xf774, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xf774, .value=0x1c, .type=IO_READ},
        {.addr=0xf775, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03D6) {
    const struct CPU_State initial_cpu = {.pc=0x2230, .a=0x8f, .x=0xce, .y=0x30, .sp=0xcc, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x2230, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x2231, .a=0x1e, .x=0xce, .y=0x30, .sp=0xcc, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x2230, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x2230, .value=0x1c, .type=IO_READ},
        {.addr=0x2231, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03D7) {
    const struct CPU_State initial_cpu = {.pc=0xfa54, .a=0xc8, .x=0x58, .y=0x80, .sp=0xb0, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xfa54, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xfa55, .a=0x90, .x=0x58, .y=0x80, .sp=0xb0, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xfa54, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xfa54, .value=0x1c, .type=IO_READ},
        {.addr=0xfa55, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03D8) {
    const struct CPU_State initial_cpu = {.pc=0x646f, .a=0x13, .x=0x97, .y=0xc8, .sp=0x4c, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x646f, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x6470, .a=0x26, .x=0x97, .y=0xc8, .sp=0x4c, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x646f, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x646f, .value=0x1c, .type=IO_READ},
        {.addr=0x6470, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03D9) {
    const struct CPU_State initial_cpu = {.pc=0x3585, .a=0x2e, .x=0x43, .y=0xc9, .sp=0xb3, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x3585, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x3586, .a=0x5c, .x=0x43, .y=0xc9, .sp=0xb3, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x3585, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x3585, .value=0x1c, .type=IO_READ},
        {.addr=0x3586, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03DA) {
    const struct CPU_State initial_cpu = {.pc=0xfab8, .a=0xca, .x=0xfd, .y=0x51, .sp=0x80, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xfab8, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xfab9, .a=0x94, .x=0xfd, .y=0x51, .sp=0x80, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xfab8, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xfab8, .value=0x1c, .type=IO_READ},
        {.addr=0xfab9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03DB) {
    const struct CPU_State initial_cpu = {.pc=0xdec1, .a=0xa7, .x=0x0d, .y=0x67, .sp=0xa9, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xdec1, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xdec2, .a=0x4e, .x=0x0d, .y=0x67, .sp=0xa9, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xdec1, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xdec1, .value=0x1c, .type=IO_READ},
        {.addr=0xdec2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03DC) {
    const struct CPU_State initial_cpu = {.pc=0xee91, .a=0x3a, .x=0x39, .y=0xd8, .sp=0x8d, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xee91, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xee92, .a=0x74, .x=0x39, .y=0xd8, .sp=0x8d, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xee91, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xee91, .value=0x1c, .type=IO_READ},
        {.addr=0xee92, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03DD) {
    const struct CPU_State initial_cpu = {.pc=0x523b, .a=0xb8, .x=0x4a, .y=0x27, .sp=0x9a, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x523b, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x523c, .a=0x70, .x=0x4a, .y=0x27, .sp=0x9a, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x523b, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x523b, .value=0x1c, .type=IO_READ},
        {.addr=0x523c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03DE) {
    const struct CPU_State initial_cpu = {.pc=0xe5df, .a=0x9e, .x=0x94, .y=0x59, .sp=0x56, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xe5df, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xe5e0, .a=0x3c, .x=0x94, .y=0x59, .sp=0x56, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xe5df, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xe5df, .value=0x1c, .type=IO_READ},
        {.addr=0xe5e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x24e5, .a=0x8d, .x=0xbe, .y=0x2c, .sp=0x3e, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x24e5, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x24e6, .a=0x1a, .x=0xbe, .y=0x2c, .sp=0x3e, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x24e5, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x24e5, .value=0x1c, .type=IO_READ},
        {.addr=0x24e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03E0) {
    const struct CPU_State initial_cpu = {.pc=0x90af, .a=0xc6, .x=0xcb, .y=0x5f, .sp=0xd5, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x90af, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x90b0, .a=0x8c, .x=0xcb, .y=0x5f, .sp=0xd5, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x90af, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x90af, .value=0x1c, .type=IO_READ},
        {.addr=0x90b0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03E1) {
    const struct CPU_State initial_cpu = {.pc=0x4253, .a=0x94, .x=0xb8, .y=0x02, .sp=0xdb, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x4253, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x4254, .a=0x28, .x=0xb8, .y=0x02, .sp=0xdb, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x4253, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x4253, .value=0x1c, .type=IO_READ},
        {.addr=0x4254, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03E2) {
    const struct CPU_State initial_cpu = {.pc=0xc8d6, .a=0x61, .x=0xff, .y=0xe6, .sp=0x79, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xc8d6, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xc8d7, .a=0xc2, .x=0xff, .y=0xe6, .sp=0x79, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xc8d6, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xc8d6, .value=0x1c, .type=IO_READ},
        {.addr=0xc8d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03E3) {
    const struct CPU_State initial_cpu = {.pc=0x40d7, .a=0x6b, .x=0x35, .y=0xf8, .sp=0x1f, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x40d7, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x40d8, .a=0xd6, .x=0x35, .y=0xf8, .sp=0x1f, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x40d7, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x40d7, .value=0x1c, .type=IO_READ},
        {.addr=0x40d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x9049, .a=0xaa, .x=0xb7, .y=0x33, .sp=0xb8, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x9049, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x904a, .a=0x54, .x=0xb7, .y=0x33, .sp=0xb8, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x9049, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x9049, .value=0x1c, .type=IO_READ},
        {.addr=0x904a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03E5) {
    const struct CPU_State initial_cpu = {.pc=0xd35c, .a=0x9d, .x=0xcd, .y=0x12, .sp=0x21, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xd35c, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd35d, .a=0x3a, .x=0xcd, .y=0x12, .sp=0x21, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xd35c, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd35c, .value=0x1c, .type=IO_READ},
        {.addr=0xd35d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03E6) {
    const struct CPU_State initial_cpu = {.pc=0xb28d, .a=0x8c, .x=0xbd, .y=0xb9, .sp=0xbd, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xb28d, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xb28e, .a=0x18, .x=0xbd, .y=0xb9, .sp=0xbd, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xb28d, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xb28d, .value=0x1c, .type=IO_READ},
        {.addr=0xb28e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_1C, _1C_03E7) {
    const struct CPU_State initial_cpu = {.pc=0xf918, .a=0x9c, .x=0x2a, .y=0x42, .sp=0x7a, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xf918, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xf919, .a=0x38, .x=0x2a, .y=0x42, .sp=0x7a, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xf918, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xf918, .value=0x1c, .type=IO_READ},
        {.addr=0xf919, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("1C 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
