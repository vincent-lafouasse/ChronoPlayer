#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_3E, _3E_0000) {
    const struct CPU_State initial_cpu = {.pc=0x6ac3, .a=0xc2, .x=0xb0, .y=0x86, .sp=0x56, .status=0x0a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c6, .value=0x12}, {.addr=0x6ac3, .value=0x3e}, {.addr=0x6ac4, .value=0xc6},
    };
    const struct CPU_State final_cpu = {.pc=0x6ac5, .a=0xc2, .x=0xb0, .y=0x86, .sp=0x56, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c6, .value=0x12}, {.addr=0x6ac3, .value=0x3e}, {.addr=0x6ac4, .value=0xc6},
    };
    const struct BusEvent events[] = {
        {.addr=0x6ac3, .value=0x3e, .type=IO_READ},
        {.addr=0x6ac4, .value=0xc6, .type=IO_READ},
        {.addr=0x00c6, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0001) {
    const struct CPU_State initial_cpu = {.pc=0x056c, .a=0x31, .x=0xc1, .y=0x0e, .sp=0xfe, .status=0x43};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c3, .value=0x1b}, {.addr=0x056c, .value=0x3e}, {.addr=0x056d, .value=0xc3},
    };
    const struct CPU_State final_cpu = {.pc=0x056e, .a=0x31, .x=0xc1, .y=0x0e, .sp=0xfe, .status=0xc1};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c3, .value=0x1b}, {.addr=0x056c, .value=0x3e}, {.addr=0x056d, .value=0xc3},
    };
    const struct BusEvent events[] = {
        {.addr=0x056c, .value=0x3e, .type=IO_READ},
        {.addr=0x056d, .value=0xc3, .type=IO_READ},
        {.addr=0x00c3, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0002) {
    const struct CPU_State initial_cpu = {.pc=0xf9f3, .a=0x13, .x=0x7c, .y=0xeb, .sp=0xf5, .status=0x60};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0149, .value=0x3f}, {.addr=0xf9f3, .value=0x3e}, {.addr=0xf9f4, .value=0x49},
    };
    const struct CPU_State final_cpu = {.pc=0xf9f5, .a=0x13, .x=0x7c, .y=0xeb, .sp=0xf5, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x0149, .value=0x3f}, {.addr=0xf9f3, .value=0x3e}, {.addr=0xf9f4, .value=0x49},
    };
    const struct BusEvent events[] = {
        {.addr=0xf9f3, .value=0x3e, .type=IO_READ},
        {.addr=0xf9f4, .value=0x49, .type=IO_READ},
        {.addr=0x0149, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0003) {
    const struct CPU_State initial_cpu = {.pc=0xff40, .a=0x0d, .x=0x61, .y=0x03, .sp=0xdf, .status=0x52};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0021, .value=0x8f}, {.addr=0xff40, .value=0x3e}, {.addr=0xff41, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0xff42, .a=0x0d, .x=0x61, .y=0x03, .sp=0xdf, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0021, .value=0x8f}, {.addr=0xff40, .value=0x3e}, {.addr=0xff41, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0xff40, .value=0x3e, .type=IO_READ},
        {.addr=0xff41, .value=0x21, .type=IO_READ},
        {.addr=0x0021, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0004) {
    const struct CPU_State initial_cpu = {.pc=0xee10, .a=0x85, .x=0xf3, .y=0xe2, .sp=0x7f, .status=0xe4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0100, .value=0xe3}, {.addr=0xee10, .value=0x3e}, {.addr=0xee11, .value=0x00},
    };
    const struct CPU_State final_cpu = {.pc=0xee12, .a=0x85, .x=0xf3, .y=0xe2, .sp=0x7f, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x0100, .value=0xe3}, {.addr=0xee10, .value=0x3e}, {.addr=0xee11, .value=0x00},
    };
    const struct BusEvent events[] = {
        {.addr=0xee10, .value=0x3e, .type=IO_READ},
        {.addr=0xee11, .value=0x00, .type=IO_READ},
        {.addr=0x0100, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0005) {
    const struct CPU_State initial_cpu = {.pc=0x13ee, .a=0xbd, .x=0xe4, .y=0xaa, .sp=0x35, .status=0xfe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019c, .value=0xc0}, {.addr=0x13ee, .value=0x3e}, {.addr=0x13ef, .value=0x9c},
    };
    const struct CPU_State final_cpu = {.pc=0x13f0, .a=0xbd, .x=0xe4, .y=0xaa, .sp=0x35, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x019c, .value=0xc0}, {.addr=0x13ee, .value=0x3e}, {.addr=0x13ef, .value=0x9c},
    };
    const struct BusEvent events[] = {
        {.addr=0x13ee, .value=0x3e, .type=IO_READ},
        {.addr=0x13ef, .value=0x9c, .type=IO_READ},
        {.addr=0x019c, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0006) {
    const struct CPU_State initial_cpu = {.pc=0x9a63, .a=0x96, .x=0xeb, .y=0x41, .sp=0x8f, .status=0x23};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0164, .value=0x6e}, {.addr=0x9a63, .value=0x3e}, {.addr=0x9a64, .value=0x64},
    };
    const struct CPU_State final_cpu = {.pc=0x9a65, .a=0x96, .x=0xeb, .y=0x41, .sp=0x8f, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x0164, .value=0x6e}, {.addr=0x9a63, .value=0x3e}, {.addr=0x9a64, .value=0x64},
    };
    const struct BusEvent events[] = {
        {.addr=0x9a63, .value=0x3e, .type=IO_READ},
        {.addr=0x9a64, .value=0x64, .type=IO_READ},
        {.addr=0x0164, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0007) {
    const struct CPU_State initial_cpu = {.pc=0xf157, .a=0xd8, .x=0xda, .y=0x86, .sp=0x77, .status=0x4f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a5, .value=0x7d}, {.addr=0xf157, .value=0x3e}, {.addr=0xf158, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0xf159, .a=0xd8, .x=0xda, .y=0x86, .sp=0x77, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a5, .value=0x7d}, {.addr=0xf157, .value=0x3e}, {.addr=0xf158, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0xf157, .value=0x3e, .type=IO_READ},
        {.addr=0xf158, .value=0xa5, .type=IO_READ},
        {.addr=0x00a5, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0008) {
    const struct CPU_State initial_cpu = {.pc=0xfc04, .a=0x6a, .x=0x3e, .y=0x0c, .sp=0x7e, .status=0x13};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0052, .value=0xe7}, {.addr=0xfc04, .value=0x3e}, {.addr=0xfc05, .value=0x52},
    };
    const struct CPU_State final_cpu = {.pc=0xfc06, .a=0x6a, .x=0x3e, .y=0x0c, .sp=0x7e, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x0052, .value=0xe7}, {.addr=0xfc04, .value=0x3e}, {.addr=0xfc05, .value=0x52},
    };
    const struct BusEvent events[] = {
        {.addr=0xfc04, .value=0x3e, .type=IO_READ},
        {.addr=0xfc05, .value=0x52, .type=IO_READ},
        {.addr=0x0052, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0009) {
    const struct CPU_State initial_cpu = {.pc=0xf1e6, .a=0x62, .x=0xb0, .y=0xf7, .sp=0xdb, .status=0xf5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017a, .value=0xc6}, {.addr=0xf1e6, .value=0x3e}, {.addr=0xf1e7, .value=0x7a},
    };
    const struct CPU_State final_cpu = {.pc=0xf1e8, .a=0x62, .x=0xb0, .y=0xf7, .sp=0xdb, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x017a, .value=0xc6}, {.addr=0xf1e6, .value=0x3e}, {.addr=0xf1e7, .value=0x7a},
    };
    const struct BusEvent events[] = {
        {.addr=0xf1e6, .value=0x3e, .type=IO_READ},
        {.addr=0xf1e7, .value=0x7a, .type=IO_READ},
        {.addr=0x017a, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_000A) {
    const struct CPU_State initial_cpu = {.pc=0x51ca, .a=0x84, .x=0xa8, .y=0x20, .sp=0x28, .status=0x3d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c1, .value=0xb5}, {.addr=0x51ca, .value=0x3e}, {.addr=0x51cb, .value=0xc1},
    };
    const struct CPU_State final_cpu = {.pc=0x51cc, .a=0x84, .x=0xa8, .y=0x20, .sp=0x28, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c1, .value=0xb5}, {.addr=0x51ca, .value=0x3e}, {.addr=0x51cb, .value=0xc1},
    };
    const struct BusEvent events[] = {
        {.addr=0x51ca, .value=0x3e, .type=IO_READ},
        {.addr=0x51cb, .value=0xc1, .type=IO_READ},
        {.addr=0x01c1, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_000B) {
    const struct CPU_State initial_cpu = {.pc=0xe13e, .a=0x8b, .x=0x72, .y=0x4d, .sp=0x59, .status=0xfd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b4, .value=0x70}, {.addr=0xe13e, .value=0x3e}, {.addr=0xe13f, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0xe140, .a=0x8b, .x=0x72, .y=0x4d, .sp=0x59, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b4, .value=0x70}, {.addr=0xe13e, .value=0x3e}, {.addr=0xe13f, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0xe13e, .value=0x3e, .type=IO_READ},
        {.addr=0xe13f, .value=0xb4, .type=IO_READ},
        {.addr=0x01b4, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_000C) {
    const struct CPU_State initial_cpu = {.pc=0x3f9d, .a=0x35, .x=0x98, .y=0x9c, .sp=0x4a, .status=0x26};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ba, .value=0xf9}, {.addr=0x3f9d, .value=0x3e}, {.addr=0x3f9e, .value=0xba},
    };
    const struct CPU_State final_cpu = {.pc=0x3f9f, .a=0x35, .x=0x98, .y=0x9c, .sp=0x4a, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ba, .value=0xf9}, {.addr=0x3f9d, .value=0x3e}, {.addr=0x3f9e, .value=0xba},
    };
    const struct BusEvent events[] = {
        {.addr=0x3f9d, .value=0x3e, .type=IO_READ},
        {.addr=0x3f9e, .value=0xba, .type=IO_READ},
        {.addr=0x01ba, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_000D) {
    const struct CPU_State initial_cpu = {.pc=0x5e5c, .a=0x88, .x=0x32, .y=0x9d, .sp=0xef, .status=0x2a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ab, .value=0x60}, {.addr=0x5e5c, .value=0x3e}, {.addr=0x5e5d, .value=0xab},
    };
    const struct CPU_State final_cpu = {.pc=0x5e5e, .a=0x88, .x=0x32, .y=0x9d, .sp=0xef, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ab, .value=0x60}, {.addr=0x5e5c, .value=0x3e}, {.addr=0x5e5d, .value=0xab},
    };
    const struct BusEvent events[] = {
        {.addr=0x5e5c, .value=0x3e, .type=IO_READ},
        {.addr=0x5e5d, .value=0xab, .type=IO_READ},
        {.addr=0x01ab, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_000E) {
    const struct CPU_State initial_cpu = {.pc=0x3e34, .a=0x0b, .x=0xdd, .y=0xb6, .sp=0x95, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00be, .value=0xaf}, {.addr=0x3e34, .value=0x3e}, {.addr=0x3e35, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0x3e36, .a=0x0b, .x=0xdd, .y=0xb6, .sp=0x95, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00be, .value=0xaf}, {.addr=0x3e34, .value=0x3e}, {.addr=0x3e35, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0x3e34, .value=0x3e, .type=IO_READ},
        {.addr=0x3e35, .value=0xbe, .type=IO_READ},
        {.addr=0x00be, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_000F) {
    const struct CPU_State initial_cpu = {.pc=0xd743, .a=0xbc, .x=0x69, .y=0x66, .sp=0x3d, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0131, .value=0xbd}, {.addr=0xd743, .value=0x3e}, {.addr=0xd744, .value=0x31},
    };
    const struct CPU_State final_cpu = {.pc=0xd745, .a=0xbc, .x=0x69, .y=0x66, .sp=0x3d, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0131, .value=0xbd}, {.addr=0xd743, .value=0x3e}, {.addr=0xd744, .value=0x31},
    };
    const struct BusEvent events[] = {
        {.addr=0xd743, .value=0x3e, .type=IO_READ},
        {.addr=0xd744, .value=0x31, .type=IO_READ},
        {.addr=0x0131, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0010) {
    const struct CPU_State initial_cpu = {.pc=0x44a0, .a=0xd4, .x=0x46, .y=0xe9, .sp=0xcf, .status=0x02};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b8, .value=0x6f}, {.addr=0x44a0, .value=0x3e}, {.addr=0x44a1, .value=0xb8},
    };
    const struct CPU_State final_cpu = {.pc=0x44a2, .a=0xd4, .x=0x46, .y=0xe9, .sp=0xcf, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b8, .value=0x6f}, {.addr=0x44a0, .value=0x3e}, {.addr=0x44a1, .value=0xb8},
    };
    const struct BusEvent events[] = {
        {.addr=0x44a0, .value=0x3e, .type=IO_READ},
        {.addr=0x44a1, .value=0xb8, .type=IO_READ},
        {.addr=0x00b8, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0011) {
    const struct CPU_State initial_cpu = {.pc=0xd16b, .a=0x29, .x=0x8a, .y=0x24, .sp=0x1d, .status=0xc9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0034, .value=0x57}, {.addr=0xd16b, .value=0x3e}, {.addr=0xd16c, .value=0x34},
    };
    const struct CPU_State final_cpu = {.pc=0xd16d, .a=0x29, .x=0x8a, .y=0x24, .sp=0x1d, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x0034, .value=0x57}, {.addr=0xd16b, .value=0x3e}, {.addr=0xd16c, .value=0x34},
    };
    const struct BusEvent events[] = {
        {.addr=0xd16b, .value=0x3e, .type=IO_READ},
        {.addr=0xd16c, .value=0x34, .type=IO_READ},
        {.addr=0x0034, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0012) {
    const struct CPU_State initial_cpu = {.pc=0x96c3, .a=0xcd, .x=0x49, .y=0xff, .sp=0x5e, .status=0xa7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0109, .value=0x0e}, {.addr=0x96c3, .value=0x3e}, {.addr=0x96c4, .value=0x09},
    };
    const struct CPU_State final_cpu = {.pc=0x96c5, .a=0xcd, .x=0x49, .y=0xff, .sp=0x5e, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x0109, .value=0x0e}, {.addr=0x96c3, .value=0x3e}, {.addr=0x96c4, .value=0x09},
    };
    const struct BusEvent events[] = {
        {.addr=0x96c3, .value=0x3e, .type=IO_READ},
        {.addr=0x96c4, .value=0x09, .type=IO_READ},
        {.addr=0x0109, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0013) {
    const struct CPU_State initial_cpu = {.pc=0x1715, .a=0x40, .x=0x48, .y=0xe3, .sp=0xfb, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016b, .value=0x10}, {.addr=0x1715, .value=0x3e}, {.addr=0x1716, .value=0x6b},
    };
    const struct CPU_State final_cpu = {.pc=0x1717, .a=0x40, .x=0x48, .y=0xe3, .sp=0xfb, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x016b, .value=0x10}, {.addr=0x1715, .value=0x3e}, {.addr=0x1716, .value=0x6b},
    };
    const struct BusEvent events[] = {
        {.addr=0x1715, .value=0x3e, .type=IO_READ},
        {.addr=0x1716, .value=0x6b, .type=IO_READ},
        {.addr=0x016b, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0014) {
    const struct CPU_State initial_cpu = {.pc=0xbd3e, .a=0x6d, .x=0x56, .y=0x18, .sp=0xdc, .status=0x4f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ad, .value=0x5b}, {.addr=0xbd3e, .value=0x3e}, {.addr=0xbd3f, .value=0xad},
    };
    const struct CPU_State final_cpu = {.pc=0xbd40, .a=0x6d, .x=0x56, .y=0x18, .sp=0xdc, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ad, .value=0x5b}, {.addr=0xbd3e, .value=0x3e}, {.addr=0xbd3f, .value=0xad},
    };
    const struct BusEvent events[] = {
        {.addr=0xbd3e, .value=0x3e, .type=IO_READ},
        {.addr=0xbd3f, .value=0xad, .type=IO_READ},
        {.addr=0x00ad, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0015) {
    const struct CPU_State initial_cpu = {.pc=0x14c4, .a=0x6d, .x=0xec, .y=0xae, .sp=0x0c, .status=0xb5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0169, .value=0xf8}, {.addr=0x14c4, .value=0x3e}, {.addr=0x14c5, .value=0x69},
    };
    const struct CPU_State final_cpu = {.pc=0x14c6, .a=0x6d, .x=0xec, .y=0xae, .sp=0x0c, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0169, .value=0xf8}, {.addr=0x14c4, .value=0x3e}, {.addr=0x14c5, .value=0x69},
    };
    const struct BusEvent events[] = {
        {.addr=0x14c4, .value=0x3e, .type=IO_READ},
        {.addr=0x14c5, .value=0x69, .type=IO_READ},
        {.addr=0x0169, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0016) {
    const struct CPU_State initial_cpu = {.pc=0x5784, .a=0x1d, .x=0xee, .y=0xf2, .sp=0x47, .status=0x98};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0004, .value=0x46}, {.addr=0x5784, .value=0x3e}, {.addr=0x5785, .value=0x04},
    };
    const struct CPU_State final_cpu = {.pc=0x5786, .a=0x1d, .x=0xee, .y=0xf2, .sp=0x47, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x0004, .value=0x46}, {.addr=0x5784, .value=0x3e}, {.addr=0x5785, .value=0x04},
    };
    const struct BusEvent events[] = {
        {.addr=0x5784, .value=0x3e, .type=IO_READ},
        {.addr=0x5785, .value=0x04, .type=IO_READ},
        {.addr=0x0004, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0017) {
    const struct CPU_State initial_cpu = {.pc=0xe444, .a=0xc5, .x=0xca, .y=0xae, .sp=0x71, .status=0x40};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a1, .value=0x19}, {.addr=0xe444, .value=0x3e}, {.addr=0xe445, .value=0xa1},
    };
    const struct CPU_State final_cpu = {.pc=0xe446, .a=0xc5, .x=0xca, .y=0xae, .sp=0x71, .status=0xc1};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a1, .value=0x19}, {.addr=0xe444, .value=0x3e}, {.addr=0xe445, .value=0xa1},
    };
    const struct BusEvent events[] = {
        {.addr=0xe444, .value=0x3e, .type=IO_READ},
        {.addr=0xe445, .value=0xa1, .type=IO_READ},
        {.addr=0x00a1, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0018) {
    const struct CPU_State initial_cpu = {.pc=0xb92c, .a=0xf9, .x=0x58, .y=0xc7, .sp=0x7c, .status=0xa3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bd, .value=0x80}, {.addr=0xb92c, .value=0x3e}, {.addr=0xb92d, .value=0xbd},
    };
    const struct CPU_State final_cpu = {.pc=0xb92e, .a=0xf9, .x=0x58, .y=0xc7, .sp=0x7c, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bd, .value=0x80}, {.addr=0xb92c, .value=0x3e}, {.addr=0xb92d, .value=0xbd},
    };
    const struct BusEvent events[] = {
        {.addr=0xb92c, .value=0x3e, .type=IO_READ},
        {.addr=0xb92d, .value=0xbd, .type=IO_READ},
        {.addr=0x01bd, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0019) {
    const struct CPU_State initial_cpu = {.pc=0x1f93, .a=0x7b, .x=0x57, .y=0xc8, .sp=0x5c, .status=0x84};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0034, .value=0xc6}, {.addr=0x1f93, .value=0x3e}, {.addr=0x1f94, .value=0x34},
    };
    const struct CPU_State final_cpu = {.pc=0x1f95, .a=0x7b, .x=0x57, .y=0xc8, .sp=0x5c, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x0034, .value=0xc6}, {.addr=0x1f93, .value=0x3e}, {.addr=0x1f94, .value=0x34},
    };
    const struct BusEvent events[] = {
        {.addr=0x1f93, .value=0x3e, .type=IO_READ},
        {.addr=0x1f94, .value=0x34, .type=IO_READ},
        {.addr=0x0034, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_001A) {
    const struct CPU_State initial_cpu = {.pc=0x8721, .a=0x87, .x=0xf2, .y=0x97, .sp=0xae, .status=0x27};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0128, .value=0x46}, {.addr=0x8721, .value=0x3e}, {.addr=0x8722, .value=0x28},
    };
    const struct CPU_State final_cpu = {.pc=0x8723, .a=0x87, .x=0xf2, .y=0x97, .sp=0xae, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0128, .value=0x46}, {.addr=0x8721, .value=0x3e}, {.addr=0x8722, .value=0x28},
    };
    const struct BusEvent events[] = {
        {.addr=0x8721, .value=0x3e, .type=IO_READ},
        {.addr=0x8722, .value=0x28, .type=IO_READ},
        {.addr=0x0128, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_001B) {
    const struct CPU_State initial_cpu = {.pc=0x0119, .a=0xcb, .x=0xab, .y=0x47, .sp=0x01, .status=0xb5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0119, .value=0x3e}, {.addr=0x011a, .value=0xd8}, {.addr=0x01d8, .value=0x46},
    };
    const struct CPU_State final_cpu = {.pc=0x011b, .a=0xcb, .x=0xab, .y=0x47, .sp=0x01, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x0119, .value=0x3e}, {.addr=0x011a, .value=0xd8}, {.addr=0x01d8, .value=0x46},
    };
    const struct BusEvent events[] = {
        {.addr=0x0119, .value=0x3e, .type=IO_READ},
        {.addr=0x011a, .value=0xd8, .type=IO_READ},
        {.addr=0x01d8, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_001C) {
    const struct CPU_State initial_cpu = {.pc=0xdd43, .a=0x39, .x=0xd2, .y=0xef, .sp=0x9a, .status=0xc4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b3, .value=0xe8}, {.addr=0xdd43, .value=0x3e}, {.addr=0xdd44, .value=0xb3},
    };
    const struct CPU_State final_cpu = {.pc=0xdd45, .a=0x39, .x=0xd2, .y=0xef, .sp=0x9a, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b3, .value=0xe8}, {.addr=0xdd43, .value=0x3e}, {.addr=0xdd44, .value=0xb3},
    };
    const struct BusEvent events[] = {
        {.addr=0xdd43, .value=0x3e, .type=IO_READ},
        {.addr=0xdd44, .value=0xb3, .type=IO_READ},
        {.addr=0x00b3, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_001D) {
    const struct CPU_State initial_cpu = {.pc=0xb143, .a=0xcc, .x=0x3d, .y=0x4b, .sp=0xe8, .status=0x83};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007e, .value=0xe2}, {.addr=0xb143, .value=0x3e}, {.addr=0xb144, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0xb145, .a=0xcc, .x=0x3d, .y=0x4b, .sp=0xe8, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x007e, .value=0xe2}, {.addr=0xb143, .value=0x3e}, {.addr=0xb144, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0xb143, .value=0x3e, .type=IO_READ},
        {.addr=0xb144, .value=0x7e, .type=IO_READ},
        {.addr=0x007e, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_001E) {
    const struct CPU_State initial_cpu = {.pc=0x0452, .a=0xd6, .x=0x6d, .y=0x96, .sp=0x67, .status=0x6e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0142, .value=0xf8}, {.addr=0x0452, .value=0x3e}, {.addr=0x0453, .value=0x42},
    };
    const struct CPU_State final_cpu = {.pc=0x0454, .a=0xd6, .x=0x6d, .y=0x96, .sp=0x67, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0142, .value=0xf8}, {.addr=0x0452, .value=0x3e}, {.addr=0x0453, .value=0x42},
    };
    const struct BusEvent events[] = {
        {.addr=0x0452, .value=0x3e, .type=IO_READ},
        {.addr=0x0453, .value=0x42, .type=IO_READ},
        {.addr=0x0142, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_001F) {
    const struct CPU_State initial_cpu = {.pc=0x1652, .a=0x6b, .x=0x93, .y=0x3f, .sp=0x87, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0031, .value=0x4a}, {.addr=0x1652, .value=0x3e}, {.addr=0x1653, .value=0x31},
    };
    const struct CPU_State final_cpu = {.pc=0x1654, .a=0x6b, .x=0x93, .y=0x3f, .sp=0x87, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0031, .value=0x4a}, {.addr=0x1652, .value=0x3e}, {.addr=0x1653, .value=0x31},
    };
    const struct BusEvent events[] = {
        {.addr=0x1652, .value=0x3e, .type=IO_READ},
        {.addr=0x1653, .value=0x31, .type=IO_READ},
        {.addr=0x0031, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0020) {
    const struct CPU_State initial_cpu = {.pc=0x33f6, .a=0xe7, .x=0x0f, .y=0x1f, .sp=0x23, .status=0x5a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006d, .value=0x3e}, {.addr=0x33f6, .value=0x3e}, {.addr=0x33f7, .value=0x6d},
    };
    const struct CPU_State final_cpu = {.pc=0x33f8, .a=0xe7, .x=0x0f, .y=0x1f, .sp=0x23, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x006d, .value=0x3e}, {.addr=0x33f6, .value=0x3e}, {.addr=0x33f7, .value=0x6d},
    };
    const struct BusEvent events[] = {
        {.addr=0x33f6, .value=0x3e, .type=IO_READ},
        {.addr=0x33f7, .value=0x6d, .type=IO_READ},
        {.addr=0x006d, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0021) {
    const struct CPU_State initial_cpu = {.pc=0x8c97, .a=0x14, .x=0x40, .y=0x0e, .sp=0x22, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a9, .value=0xd1}, {.addr=0x8c97, .value=0x3e}, {.addr=0x8c98, .value=0xa9},
    };
    const struct CPU_State final_cpu = {.pc=0x8c99, .a=0x14, .x=0x40, .y=0x0e, .sp=0x22, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a9, .value=0xd1}, {.addr=0x8c97, .value=0x3e}, {.addr=0x8c98, .value=0xa9},
    };
    const struct BusEvent events[] = {
        {.addr=0x8c97, .value=0x3e, .type=IO_READ},
        {.addr=0x8c98, .value=0xa9, .type=IO_READ},
        {.addr=0x01a9, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0022) {
    const struct CPU_State initial_cpu = {.pc=0x3049, .a=0xd7, .x=0x04, .y=0x38, .sp=0x8b, .status=0xe8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019f, .value=0x09}, {.addr=0x3049, .value=0x3e}, {.addr=0x304a, .value=0x9f},
    };
    const struct CPU_State final_cpu = {.pc=0x304b, .a=0xd7, .x=0x04, .y=0x38, .sp=0x8b, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x019f, .value=0x09}, {.addr=0x3049, .value=0x3e}, {.addr=0x304a, .value=0x9f},
    };
    const struct BusEvent events[] = {
        {.addr=0x3049, .value=0x3e, .type=IO_READ},
        {.addr=0x304a, .value=0x9f, .type=IO_READ},
        {.addr=0x019f, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0023) {
    const struct CPU_State initial_cpu = {.pc=0x0e47, .a=0xdf, .x=0x34, .y=0x31, .sp=0x33, .status=0x51};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ad, .value=0x0b}, {.addr=0x0e47, .value=0x3e}, {.addr=0x0e48, .value=0xad},
    };
    const struct CPU_State final_cpu = {.pc=0x0e49, .a=0xdf, .x=0x34, .y=0x31, .sp=0x33, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ad, .value=0x0b}, {.addr=0x0e47, .value=0x3e}, {.addr=0x0e48, .value=0xad},
    };
    const struct BusEvent events[] = {
        {.addr=0x0e47, .value=0x3e, .type=IO_READ},
        {.addr=0x0e48, .value=0xad, .type=IO_READ},
        {.addr=0x00ad, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0024) {
    const struct CPU_State initial_cpu = {.pc=0x6b5a, .a=0x2a, .x=0xd0, .y=0x86, .sp=0x8a, .status=0x35};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013f, .value=0x60}, {.addr=0x6b5a, .value=0x3e}, {.addr=0x6b5b, .value=0x3f},
    };
    const struct CPU_State final_cpu = {.pc=0x6b5c, .a=0x2a, .x=0xd0, .y=0x86, .sp=0x8a, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x013f, .value=0x60}, {.addr=0x6b5a, .value=0x3e}, {.addr=0x6b5b, .value=0x3f},
    };
    const struct BusEvent events[] = {
        {.addr=0x6b5a, .value=0x3e, .type=IO_READ},
        {.addr=0x6b5b, .value=0x3f, .type=IO_READ},
        {.addr=0x013f, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0025) {
    const struct CPU_State initial_cpu = {.pc=0x89e2, .a=0xbb, .x=0xef, .y=0x9e, .sp=0x79, .status=0x35};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016d, .value=0xcb}, {.addr=0x89e2, .value=0x3e}, {.addr=0x89e3, .value=0x6d},
    };
    const struct CPU_State final_cpu = {.pc=0x89e4, .a=0xbb, .x=0xef, .y=0x9e, .sp=0x79, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x016d, .value=0xcb}, {.addr=0x89e2, .value=0x3e}, {.addr=0x89e3, .value=0x6d},
    };
    const struct BusEvent events[] = {
        {.addr=0x89e2, .value=0x3e, .type=IO_READ},
        {.addr=0x89e3, .value=0x6d, .type=IO_READ},
        {.addr=0x016d, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0026) {
    const struct CPU_State initial_cpu = {.pc=0x93dc, .a=0x7f, .x=0xf6, .y=0xa6, .sp=0x64, .status=0x63};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ef, .value=0x02}, {.addr=0x93dc, .value=0x3e}, {.addr=0x93dd, .value=0xef},
    };
    const struct CPU_State final_cpu = {.pc=0x93de, .a=0x7f, .x=0xf6, .y=0xa6, .sp=0x64, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ef, .value=0x02}, {.addr=0x93dc, .value=0x3e}, {.addr=0x93dd, .value=0xef},
    };
    const struct BusEvent events[] = {
        {.addr=0x93dc, .value=0x3e, .type=IO_READ},
        {.addr=0x93dd, .value=0xef, .type=IO_READ},
        {.addr=0x01ef, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0027) {
    const struct CPU_State initial_cpu = {.pc=0x4f30, .a=0x1c, .x=0xbe, .y=0x1a, .sp=0x9f, .status=0x52};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0072, .value=0x8f}, {.addr=0x4f30, .value=0x3e}, {.addr=0x4f31, .value=0x72},
    };
    const struct CPU_State final_cpu = {.pc=0x4f32, .a=0x1c, .x=0xbe, .y=0x1a, .sp=0x9f, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x0072, .value=0x8f}, {.addr=0x4f30, .value=0x3e}, {.addr=0x4f31, .value=0x72},
    };
    const struct BusEvent events[] = {
        {.addr=0x4f30, .value=0x3e, .type=IO_READ},
        {.addr=0x4f31, .value=0x72, .type=IO_READ},
        {.addr=0x0072, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0028) {
    const struct CPU_State initial_cpu = {.pc=0x484c, .a=0xbb, .x=0x59, .y=0xb4, .sp=0x74, .status=0xec};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019f, .value=0xea}, {.addr=0x484c, .value=0x3e}, {.addr=0x484d, .value=0x9f},
    };
    const struct CPU_State final_cpu = {.pc=0x484e, .a=0xbb, .x=0x59, .y=0xb4, .sp=0x74, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x019f, .value=0xea}, {.addr=0x484c, .value=0x3e}, {.addr=0x484d, .value=0x9f},
    };
    const struct BusEvent events[] = {
        {.addr=0x484c, .value=0x3e, .type=IO_READ},
        {.addr=0x484d, .value=0x9f, .type=IO_READ},
        {.addr=0x019f, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0029) {
    const struct CPU_State initial_cpu = {.pc=0x1a8b, .a=0xdd, .x=0x54, .y=0x45, .sp=0xf7, .status=0x95};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0025, .value=0x11}, {.addr=0x1a8b, .value=0x3e}, {.addr=0x1a8c, .value=0x25},
    };
    const struct CPU_State final_cpu = {.pc=0x1a8d, .a=0xdd, .x=0x54, .y=0x45, .sp=0xf7, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x0025, .value=0x11}, {.addr=0x1a8b, .value=0x3e}, {.addr=0x1a8c, .value=0x25},
    };
    const struct BusEvent events[] = {
        {.addr=0x1a8b, .value=0x3e, .type=IO_READ},
        {.addr=0x1a8c, .value=0x25, .type=IO_READ},
        {.addr=0x0025, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_002A) {
    const struct CPU_State initial_cpu = {.pc=0xc190, .a=0xb2, .x=0xb6, .y=0x1c, .sp=0x82, .status=0x39};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0160, .value=0x32}, {.addr=0xc190, .value=0x3e}, {.addr=0xc191, .value=0x60},
    };
    const struct CPU_State final_cpu = {.pc=0xc192, .a=0xb2, .x=0xb6, .y=0x1c, .sp=0x82, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0160, .value=0x32}, {.addr=0xc190, .value=0x3e}, {.addr=0xc191, .value=0x60},
    };
    const struct BusEvent events[] = {
        {.addr=0xc190, .value=0x3e, .type=IO_READ},
        {.addr=0xc191, .value=0x60, .type=IO_READ},
        {.addr=0x0160, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_002C) {
    const struct CPU_State initial_cpu = {.pc=0x10e3, .a=0xba, .x=0x17, .y=0xda, .sp=0xe8, .status=0x72};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011f, .value=0x5c}, {.addr=0x10e3, .value=0x3e}, {.addr=0x10e4, .value=0x1f},
    };
    const struct CPU_State final_cpu = {.pc=0x10e5, .a=0xba, .x=0x17, .y=0xda, .sp=0xe8, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x011f, .value=0x5c}, {.addr=0x10e3, .value=0x3e}, {.addr=0x10e4, .value=0x1f},
    };
    const struct BusEvent events[] = {
        {.addr=0x10e3, .value=0x3e, .type=IO_READ},
        {.addr=0x10e4, .value=0x1f, .type=IO_READ},
        {.addr=0x011f, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_002D) {
    const struct CPU_State initial_cpu = {.pc=0xe00d, .a=0xed, .x=0xd4, .y=0x90, .sp=0x6a, .status=0x05};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a8, .value=0x7f}, {.addr=0xe00d, .value=0x3e}, {.addr=0xe00e, .value=0xa8},
    };
    const struct CPU_State final_cpu = {.pc=0xe00f, .a=0xed, .x=0xd4, .y=0x90, .sp=0x6a, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a8, .value=0x7f}, {.addr=0xe00d, .value=0x3e}, {.addr=0xe00e, .value=0xa8},
    };
    const struct BusEvent events[] = {
        {.addr=0xe00d, .value=0x3e, .type=IO_READ},
        {.addr=0xe00e, .value=0xa8, .type=IO_READ},
        {.addr=0x00a8, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_002E) {
    const struct CPU_State initial_cpu = {.pc=0x8142, .a=0x59, .x=0x88, .y=0x21, .sp=0x7a, .status=0x01};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005a, .value=0x7e}, {.addr=0x8142, .value=0x3e}, {.addr=0x8143, .value=0x5a},
    };
    const struct CPU_State final_cpu = {.pc=0x8144, .a=0x59, .x=0x88, .y=0x21, .sp=0x7a, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x005a, .value=0x7e}, {.addr=0x8142, .value=0x3e}, {.addr=0x8143, .value=0x5a},
    };
    const struct BusEvent events[] = {
        {.addr=0x8142, .value=0x3e, .type=IO_READ},
        {.addr=0x8143, .value=0x5a, .type=IO_READ},
        {.addr=0x005a, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_002F) {
    const struct CPU_State initial_cpu = {.pc=0x2a20, .a=0x74, .x=0x77, .y=0xf7, .sp=0x0b, .status=0x7a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bd, .value=0x43}, {.addr=0x2a20, .value=0x3e}, {.addr=0x2a21, .value=0xbd},
    };
    const struct CPU_State final_cpu = {.pc=0x2a22, .a=0x74, .x=0x77, .y=0xf7, .sp=0x0b, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bd, .value=0x43}, {.addr=0x2a20, .value=0x3e}, {.addr=0x2a21, .value=0xbd},
    };
    const struct BusEvent events[] = {
        {.addr=0x2a20, .value=0x3e, .type=IO_READ},
        {.addr=0x2a21, .value=0xbd, .type=IO_READ},
        {.addr=0x01bd, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0030) {
    const struct CPU_State initial_cpu = {.pc=0x1f83, .a=0x46, .x=0x59, .y=0xb7, .sp=0x67, .status=0x9c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00da, .value=0x97}, {.addr=0x1f83, .value=0x3e}, {.addr=0x1f84, .value=0xda},
    };
    const struct CPU_State final_cpu = {.pc=0x1f85, .a=0x46, .x=0x59, .y=0xb7, .sp=0x67, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00da, .value=0x97}, {.addr=0x1f83, .value=0x3e}, {.addr=0x1f84, .value=0xda},
    };
    const struct BusEvent events[] = {
        {.addr=0x1f83, .value=0x3e, .type=IO_READ},
        {.addr=0x1f84, .value=0xda, .type=IO_READ},
        {.addr=0x00da, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0031) {
    const struct CPU_State initial_cpu = {.pc=0xcd3e, .a=0x75, .x=0x75, .y=0x12, .sp=0xbc, .status=0x51};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005a, .value=0xea}, {.addr=0xcd3e, .value=0x3e}, {.addr=0xcd3f, .value=0x5a},
    };
    const struct CPU_State final_cpu = {.pc=0xcd40, .a=0x75, .x=0x75, .y=0x12, .sp=0xbc, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x005a, .value=0xea}, {.addr=0xcd3e, .value=0x3e}, {.addr=0xcd3f, .value=0x5a},
    };
    const struct BusEvent events[] = {
        {.addr=0xcd3e, .value=0x3e, .type=IO_READ},
        {.addr=0xcd3f, .value=0x5a, .type=IO_READ},
        {.addr=0x005a, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0032) {
    const struct CPU_State initial_cpu = {.pc=0x460c, .a=0x6b, .x=0xb2, .y=0xbf, .sp=0x00, .status=0xe0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01de, .value=0x68}, {.addr=0x460c, .value=0x3e}, {.addr=0x460d, .value=0xde},
    };
    const struct CPU_State final_cpu = {.pc=0x460e, .a=0x6b, .x=0xb2, .y=0xbf, .sp=0x00, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x01de, .value=0x68}, {.addr=0x460c, .value=0x3e}, {.addr=0x460d, .value=0xde},
    };
    const struct BusEvent events[] = {
        {.addr=0x460c, .value=0x3e, .type=IO_READ},
        {.addr=0x460d, .value=0xde, .type=IO_READ},
        {.addr=0x01de, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0033) {
    const struct CPU_State initial_cpu = {.pc=0x6e74, .a=0xc7, .x=0x52, .y=0x47, .sp=0xcd, .status=0xd4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005c, .value=0xde}, {.addr=0x6e74, .value=0x3e}, {.addr=0x6e75, .value=0x5c},
    };
    const struct CPU_State final_cpu = {.pc=0x6e76, .a=0xc7, .x=0x52, .y=0x47, .sp=0xcd, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x005c, .value=0xde}, {.addr=0x6e74, .value=0x3e}, {.addr=0x6e75, .value=0x5c},
    };
    const struct BusEvent events[] = {
        {.addr=0x6e74, .value=0x3e, .type=IO_READ},
        {.addr=0x6e75, .value=0x5c, .type=IO_READ},
        {.addr=0x005c, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0034) {
    const struct CPU_State initial_cpu = {.pc=0x134d, .a=0xaa, .x=0x11, .y=0x4c, .sp=0xa6, .status=0x5e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006a, .value=0xcb}, {.addr=0x134d, .value=0x3e}, {.addr=0x134e, .value=0x6a},
    };
    const struct CPU_State final_cpu = {.pc=0x134f, .a=0xaa, .x=0x11, .y=0x4c, .sp=0xa6, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x006a, .value=0xcb}, {.addr=0x134d, .value=0x3e}, {.addr=0x134e, .value=0x6a},
    };
    const struct BusEvent events[] = {
        {.addr=0x134d, .value=0x3e, .type=IO_READ},
        {.addr=0x134e, .value=0x6a, .type=IO_READ},
        {.addr=0x006a, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0035) {
    const struct CPU_State initial_cpu = {.pc=0x8004, .a=0x38, .x=0x26, .y=0x76, .sp=0xf0, .status=0xcd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d4, .value=0xb2}, {.addr=0x8004, .value=0x3e}, {.addr=0x8005, .value=0xd4},
    };
    const struct CPU_State final_cpu = {.pc=0x8006, .a=0x38, .x=0x26, .y=0x76, .sp=0xf0, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d4, .value=0xb2}, {.addr=0x8004, .value=0x3e}, {.addr=0x8005, .value=0xd4},
    };
    const struct BusEvent events[] = {
        {.addr=0x8004, .value=0x3e, .type=IO_READ},
        {.addr=0x8005, .value=0xd4, .type=IO_READ},
        {.addr=0x00d4, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0036) {
    const struct CPU_State initial_cpu = {.pc=0x81c1, .a=0x30, .x=0xc9, .y=0x35, .sp=0x5e, .status=0xc9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0005, .value=0xbf}, {.addr=0x81c1, .value=0x3e}, {.addr=0x81c2, .value=0x05},
    };
    const struct CPU_State final_cpu = {.pc=0x81c3, .a=0x30, .x=0xc9, .y=0x35, .sp=0x5e, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x0005, .value=0xbf}, {.addr=0x81c1, .value=0x3e}, {.addr=0x81c2, .value=0x05},
    };
    const struct BusEvent events[] = {
        {.addr=0x81c1, .value=0x3e, .type=IO_READ},
        {.addr=0x81c2, .value=0x05, .type=IO_READ},
        {.addr=0x0005, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0037) {
    const struct CPU_State initial_cpu = {.pc=0xa4ec, .a=0xd6, .x=0x40, .y=0x5e, .sp=0x9f, .status=0x14};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0094, .value=0xa1}, {.addr=0xa4ec, .value=0x3e}, {.addr=0xa4ed, .value=0x94},
    };
    const struct CPU_State final_cpu = {.pc=0xa4ee, .a=0xd6, .x=0x40, .y=0x5e, .sp=0x9f, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0094, .value=0xa1}, {.addr=0xa4ec, .value=0x3e}, {.addr=0xa4ed, .value=0x94},
    };
    const struct BusEvent events[] = {
        {.addr=0xa4ec, .value=0x3e, .type=IO_READ},
        {.addr=0xa4ed, .value=0x94, .type=IO_READ},
        {.addr=0x0094, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0038) {
    const struct CPU_State initial_cpu = {.pc=0xc793, .a=0xff, .x=0x93, .y=0xc9, .sp=0x7c, .status=0xf5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014d, .value=0xa6}, {.addr=0xc793, .value=0x3e}, {.addr=0xc794, .value=0x4d},
    };
    const struct CPU_State final_cpu = {.pc=0xc795, .a=0xff, .x=0x93, .y=0xc9, .sp=0x7c, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x014d, .value=0xa6}, {.addr=0xc793, .value=0x3e}, {.addr=0xc794, .value=0x4d},
    };
    const struct BusEvent events[] = {
        {.addr=0xc793, .value=0x3e, .type=IO_READ},
        {.addr=0xc794, .value=0x4d, .type=IO_READ},
        {.addr=0x014d, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_003A) {
    const struct CPU_State initial_cpu = {.pc=0xf778, .a=0x16, .x=0x41, .y=0x6c, .sp=0x77, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0047, .value=0xdb}, {.addr=0xf778, .value=0x3e}, {.addr=0xf779, .value=0x47},
    };
    const struct CPU_State final_cpu = {.pc=0xf77a, .a=0x16, .x=0x41, .y=0x6c, .sp=0x77, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x0047, .value=0xdb}, {.addr=0xf778, .value=0x3e}, {.addr=0xf779, .value=0x47},
    };
    const struct BusEvent events[] = {
        {.addr=0xf778, .value=0x3e, .type=IO_READ},
        {.addr=0xf779, .value=0x47, .type=IO_READ},
        {.addr=0x0047, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_003B) {
    const struct CPU_State initial_cpu = {.pc=0x1765, .a=0xe4, .x=0x7f, .y=0x3f, .sp=0x7b, .status=0xe9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0131, .value=0xbd}, {.addr=0x1765, .value=0x3e}, {.addr=0x1766, .value=0x31},
    };
    const struct CPU_State final_cpu = {.pc=0x1767, .a=0xe4, .x=0x7f, .y=0x3f, .sp=0x7b, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0131, .value=0xbd}, {.addr=0x1765, .value=0x3e}, {.addr=0x1766, .value=0x31},
    };
    const struct BusEvent events[] = {
        {.addr=0x1765, .value=0x3e, .type=IO_READ},
        {.addr=0x1766, .value=0x31, .type=IO_READ},
        {.addr=0x0131, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_003C) {
    const struct CPU_State initial_cpu = {.pc=0x0e32, .a=0x56, .x=0xa5, .y=0xd6, .sp=0x33, .status=0x7f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01aa, .value=0xb7}, {.addr=0x0e32, .value=0x3e}, {.addr=0x0e33, .value=0xaa},
    };
    const struct CPU_State final_cpu = {.pc=0x0e34, .a=0x56, .x=0xa5, .y=0xd6, .sp=0x33, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01aa, .value=0xb7}, {.addr=0x0e32, .value=0x3e}, {.addr=0x0e33, .value=0xaa},
    };
    const struct BusEvent events[] = {
        {.addr=0x0e32, .value=0x3e, .type=IO_READ},
        {.addr=0x0e33, .value=0xaa, .type=IO_READ},
        {.addr=0x01aa, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_003D) {
    const struct CPU_State initial_cpu = {.pc=0x0c3c, .a=0xaa, .x=0xdc, .y=0xbb, .sp=0x35, .status=0x93};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005f, .value=0xc3}, {.addr=0x0c3c, .value=0x3e}, {.addr=0x0c3d, .value=0x5f},
    };
    const struct CPU_State final_cpu = {.pc=0x0c3e, .a=0xaa, .x=0xdc, .y=0xbb, .sp=0x35, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x005f, .value=0xc3}, {.addr=0x0c3c, .value=0x3e}, {.addr=0x0c3d, .value=0x5f},
    };
    const struct BusEvent events[] = {
        {.addr=0x0c3c, .value=0x3e, .type=IO_READ},
        {.addr=0x0c3d, .value=0x5f, .type=IO_READ},
        {.addr=0x005f, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_003E) {
    const struct CPU_State initial_cpu = {.pc=0x1aac, .a=0x37, .x=0xb9, .y=0xb2, .sp=0xa7, .status=0xcb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0007, .value=0xde}, {.addr=0x1aac, .value=0x3e}, {.addr=0x1aad, .value=0x07},
    };
    const struct CPU_State final_cpu = {.pc=0x1aae, .a=0x37, .x=0xb9, .y=0xb2, .sp=0xa7, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0007, .value=0xde}, {.addr=0x1aac, .value=0x3e}, {.addr=0x1aad, .value=0x07},
    };
    const struct BusEvent events[] = {
        {.addr=0x1aac, .value=0x3e, .type=IO_READ},
        {.addr=0x1aad, .value=0x07, .type=IO_READ},
        {.addr=0x0007, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_003F) {
    const struct CPU_State initial_cpu = {.pc=0x75b5, .a=0xd8, .x=0x79, .y=0x2f, .sp=0x9c, .status=0x94};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a5, .value=0x2f}, {.addr=0x75b5, .value=0x3e}, {.addr=0x75b6, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0x75b7, .a=0xd8, .x=0x79, .y=0x2f, .sp=0x9c, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a5, .value=0x2f}, {.addr=0x75b5, .value=0x3e}, {.addr=0x75b6, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0x75b5, .value=0x3e, .type=IO_READ},
        {.addr=0x75b6, .value=0xa5, .type=IO_READ},
        {.addr=0x00a5, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0040) {
    const struct CPU_State initial_cpu = {.pc=0xe2b1, .a=0x09, .x=0x82, .y=0x20, .sp=0xa4, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a7, .value=0x55}, {.addr=0xe2b1, .value=0x3e}, {.addr=0xe2b2, .value=0xa7},
    };
    const struct CPU_State final_cpu = {.pc=0xe2b3, .a=0x09, .x=0x82, .y=0x20, .sp=0xa4, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a7, .value=0x55}, {.addr=0xe2b1, .value=0x3e}, {.addr=0xe2b2, .value=0xa7},
    };
    const struct BusEvent events[] = {
        {.addr=0xe2b1, .value=0x3e, .type=IO_READ},
        {.addr=0xe2b2, .value=0xa7, .type=IO_READ},
        {.addr=0x01a7, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0041) {
    const struct CPU_State initial_cpu = {.pc=0x2275, .a=0xb1, .x=0x44, .y=0x37, .sp=0x15, .status=0x46};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e1, .value=0x99}, {.addr=0x2275, .value=0x3e}, {.addr=0x2276, .value=0xe1},
    };
    const struct CPU_State final_cpu = {.pc=0x2277, .a=0xb1, .x=0x44, .y=0x37, .sp=0x15, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e1, .value=0x99}, {.addr=0x2275, .value=0x3e}, {.addr=0x2276, .value=0xe1},
    };
    const struct BusEvent events[] = {
        {.addr=0x2275, .value=0x3e, .type=IO_READ},
        {.addr=0x2276, .value=0xe1, .type=IO_READ},
        {.addr=0x00e1, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0042) {
    const struct CPU_State initial_cpu = {.pc=0xca94, .a=0x67, .x=0x94, .y=0xc0, .sp=0xc6, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0192, .value=0x36}, {.addr=0xca94, .value=0x3e}, {.addr=0xca95, .value=0x92},
    };
    const struct CPU_State final_cpu = {.pc=0xca96, .a=0x67, .x=0x94, .y=0xc0, .sp=0xc6, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0192, .value=0x36}, {.addr=0xca94, .value=0x3e}, {.addr=0xca95, .value=0x92},
    };
    const struct BusEvent events[] = {
        {.addr=0xca94, .value=0x3e, .type=IO_READ},
        {.addr=0xca95, .value=0x92, .type=IO_READ},
        {.addr=0x0192, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0043) {
    const struct CPU_State initial_cpu = {.pc=0xbada, .a=0xa5, .x=0x35, .y=0x92, .sp=0x30, .status=0xa0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016a, .value=0x4e}, {.addr=0xbada, .value=0x3e}, {.addr=0xbadb, .value=0x6a},
    };
    const struct CPU_State final_cpu = {.pc=0xbadc, .a=0xa5, .x=0x35, .y=0x92, .sp=0x30, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x016a, .value=0x4e}, {.addr=0xbada, .value=0x3e}, {.addr=0xbadb, .value=0x6a},
    };
    const struct BusEvent events[] = {
        {.addr=0xbada, .value=0x3e, .type=IO_READ},
        {.addr=0xbadb, .value=0x6a, .type=IO_READ},
        {.addr=0x016a, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0044) {
    const struct CPU_State initial_cpu = {.pc=0xeba5, .a=0x19, .x=0x1f, .y=0xf4, .sp=0xec, .status=0x0c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ce, .value=0x64}, {.addr=0xeba5, .value=0x3e}, {.addr=0xeba6, .value=0xce},
    };
    const struct CPU_State final_cpu = {.pc=0xeba7, .a=0x19, .x=0x1f, .y=0xf4, .sp=0xec, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ce, .value=0x64}, {.addr=0xeba5, .value=0x3e}, {.addr=0xeba6, .value=0xce},
    };
    const struct BusEvent events[] = {
        {.addr=0xeba5, .value=0x3e, .type=IO_READ},
        {.addr=0xeba6, .value=0xce, .type=IO_READ},
        {.addr=0x00ce, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0045) {
    const struct CPU_State initial_cpu = {.pc=0x9dc3, .a=0xe8, .x=0x0d, .y=0x90, .sp=0x32, .status=0x68};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011f, .value=0x7a}, {.addr=0x9dc3, .value=0x3e}, {.addr=0x9dc4, .value=0x1f},
    };
    const struct CPU_State final_cpu = {.pc=0x9dc5, .a=0xe8, .x=0x0d, .y=0x90, .sp=0x32, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x011f, .value=0x7a}, {.addr=0x9dc3, .value=0x3e}, {.addr=0x9dc4, .value=0x1f},
    };
    const struct BusEvent events[] = {
        {.addr=0x9dc3, .value=0x3e, .type=IO_READ},
        {.addr=0x9dc4, .value=0x1f, .type=IO_READ},
        {.addr=0x011f, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0046) {
    const struct CPU_State initial_cpu = {.pc=0x5054, .a=0x06, .x=0x54, .y=0x1c, .sp=0x61, .status=0x71};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0110, .value=0x85}, {.addr=0x5054, .value=0x3e}, {.addr=0x5055, .value=0x10},
    };
    const struct CPU_State final_cpu = {.pc=0x5056, .a=0x06, .x=0x54, .y=0x1c, .sp=0x61, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0110, .value=0x85}, {.addr=0x5054, .value=0x3e}, {.addr=0x5055, .value=0x10},
    };
    const struct BusEvent events[] = {
        {.addr=0x5054, .value=0x3e, .type=IO_READ},
        {.addr=0x5055, .value=0x10, .type=IO_READ},
        {.addr=0x0110, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0047) {
    const struct CPU_State initial_cpu = {.pc=0xc46d, .a=0xc7, .x=0xe7, .y=0x7b, .sp=0xff, .status=0x22};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0189, .value=0x7c}, {.addr=0xc46d, .value=0x3e}, {.addr=0xc46e, .value=0x89},
    };
    const struct CPU_State final_cpu = {.pc=0xc46f, .a=0xc7, .x=0xe7, .y=0x7b, .sp=0xff, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x0189, .value=0x7c}, {.addr=0xc46d, .value=0x3e}, {.addr=0xc46e, .value=0x89},
    };
    const struct BusEvent events[] = {
        {.addr=0xc46d, .value=0x3e, .type=IO_READ},
        {.addr=0xc46e, .value=0x89, .type=IO_READ},
        {.addr=0x0189, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0048) {
    const struct CPU_State initial_cpu = {.pc=0x315d, .a=0x3a, .x=0xcd, .y=0x7b, .sp=0x8a, .status=0x3a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015d, .value=0xbd}, {.addr=0x315d, .value=0x3e}, {.addr=0x315e, .value=0x5d},
    };
    const struct CPU_State final_cpu = {.pc=0x315f, .a=0x3a, .x=0xcd, .y=0x7b, .sp=0x8a, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x015d, .value=0xbd}, {.addr=0x315d, .value=0x3e}, {.addr=0x315e, .value=0x5d},
    };
    const struct BusEvent events[] = {
        {.addr=0x315d, .value=0x3e, .type=IO_READ},
        {.addr=0x315e, .value=0x5d, .type=IO_READ},
        {.addr=0x015d, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0049) {
    const struct CPU_State initial_cpu = {.pc=0x5dc1, .a=0xaa, .x=0x3b, .y=0xb0, .sp=0xaa, .status=0x63};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0114, .value=0xc6}, {.addr=0x5dc1, .value=0x3e}, {.addr=0x5dc2, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0x5dc3, .a=0xaa, .x=0x3b, .y=0xb0, .sp=0xaa, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x0114, .value=0xc6}, {.addr=0x5dc1, .value=0x3e}, {.addr=0x5dc2, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0x5dc1, .value=0x3e, .type=IO_READ},
        {.addr=0x5dc2, .value=0x14, .type=IO_READ},
        {.addr=0x0114, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_004A) {
    const struct CPU_State initial_cpu = {.pc=0x8011, .a=0xbd, .x=0x87, .y=0x8b, .sp=0x68, .status=0x33};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0130, .value=0xb9}, {.addr=0x8011, .value=0x3e}, {.addr=0x8012, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0x8013, .a=0xbd, .x=0x87, .y=0x8b, .sp=0x68, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0130, .value=0xb9}, {.addr=0x8011, .value=0x3e}, {.addr=0x8012, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0x8011, .value=0x3e, .type=IO_READ},
        {.addr=0x8012, .value=0x30, .type=IO_READ},
        {.addr=0x0130, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_004B) {
    const struct CPU_State initial_cpu = {.pc=0x9cb6, .a=0x22, .x=0x5a, .y=0xdb, .sp=0x5d, .status=0x3e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c2, .value=0x61}, {.addr=0x9cb6, .value=0x3e}, {.addr=0x9cb7, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0x9cb8, .a=0x22, .x=0x5a, .y=0xdb, .sp=0x5d, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c2, .value=0x61}, {.addr=0x9cb6, .value=0x3e}, {.addr=0x9cb7, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0x9cb6, .value=0x3e, .type=IO_READ},
        {.addr=0x9cb7, .value=0xc2, .type=IO_READ},
        {.addr=0x01c2, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_004C) {
    const struct CPU_State initial_cpu = {.pc=0x843b, .a=0xbe, .x=0x00, .y=0xc6, .sp=0xec, .status=0xe3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fd, .value=0xd4}, {.addr=0x843b, .value=0x3e}, {.addr=0x843c, .value=0xfd},
    };
    const struct CPU_State final_cpu = {.pc=0x843d, .a=0xbe, .x=0x00, .y=0xc6, .sp=0xec, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fd, .value=0xd4}, {.addr=0x843b, .value=0x3e}, {.addr=0x843c, .value=0xfd},
    };
    const struct BusEvent events[] = {
        {.addr=0x843b, .value=0x3e, .type=IO_READ},
        {.addr=0x843c, .value=0xfd, .type=IO_READ},
        {.addr=0x01fd, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_004D) {
    const struct CPU_State initial_cpu = {.pc=0x8369, .a=0x6a, .x=0x21, .y=0xc5, .sp=0x22, .status=0x97};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000b, .value=0x3e}, {.addr=0x8369, .value=0x3e}, {.addr=0x836a, .value=0x0b},
    };
    const struct CPU_State final_cpu = {.pc=0x836b, .a=0x6a, .x=0x21, .y=0xc5, .sp=0x22, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x000b, .value=0x3e}, {.addr=0x8369, .value=0x3e}, {.addr=0x836a, .value=0x0b},
    };
    const struct BusEvent events[] = {
        {.addr=0x8369, .value=0x3e, .type=IO_READ},
        {.addr=0x836a, .value=0x0b, .type=IO_READ},
        {.addr=0x000b, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_004E) {
    const struct CPU_State initial_cpu = {.pc=0xa279, .a=0xc5, .x=0xdf, .y=0xf5, .sp=0x39, .status=0x2c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01be, .value=0xcb}, {.addr=0xa279, .value=0x3e}, {.addr=0xa27a, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0xa27b, .a=0xc5, .x=0xdf, .y=0xf5, .sp=0x39, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01be, .value=0xcb}, {.addr=0xa279, .value=0x3e}, {.addr=0xa27a, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0xa279, .value=0x3e, .type=IO_READ},
        {.addr=0xa27a, .value=0xbe, .type=IO_READ},
        {.addr=0x01be, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_004F) {
    const struct CPU_State initial_cpu = {.pc=0x2df9, .a=0x29, .x=0xae, .y=0xd3, .sp=0x8c, .status=0xb4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01aa, .value=0x2f}, {.addr=0x2df9, .value=0x3e}, {.addr=0x2dfa, .value=0xaa},
    };
    const struct CPU_State final_cpu = {.pc=0x2dfb, .a=0x29, .x=0xae, .y=0xd3, .sp=0x8c, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x01aa, .value=0x2f}, {.addr=0x2df9, .value=0x3e}, {.addr=0x2dfa, .value=0xaa},
    };
    const struct BusEvent events[] = {
        {.addr=0x2df9, .value=0x3e, .type=IO_READ},
        {.addr=0x2dfa, .value=0xaa, .type=IO_READ},
        {.addr=0x01aa, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0050) {
    const struct CPU_State initial_cpu = {.pc=0x5bef, .a=0x2b, .x=0x0c, .y=0x66, .sp=0x6c, .status=0x96};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b6, .value=0x61}, {.addr=0x5bef, .value=0x3e}, {.addr=0x5bf0, .value=0xb6},
    };
    const struct CPU_State final_cpu = {.pc=0x5bf1, .a=0x2b, .x=0x0c, .y=0x66, .sp=0x6c, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b6, .value=0x61}, {.addr=0x5bef, .value=0x3e}, {.addr=0x5bf0, .value=0xb6},
    };
    const struct BusEvent events[] = {
        {.addr=0x5bef, .value=0x3e, .type=IO_READ},
        {.addr=0x5bf0, .value=0xb6, .type=IO_READ},
        {.addr=0x00b6, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0051) {
    const struct CPU_State initial_cpu = {.pc=0x13d1, .a=0x41, .x=0x42, .y=0xae, .sp=0x88, .status=0xe4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017a, .value=0x38}, {.addr=0x13d1, .value=0x3e}, {.addr=0x13d2, .value=0x7a},
    };
    const struct CPU_State final_cpu = {.pc=0x13d3, .a=0x41, .x=0x42, .y=0xae, .sp=0x88, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x017a, .value=0x38}, {.addr=0x13d1, .value=0x3e}, {.addr=0x13d2, .value=0x7a},
    };
    const struct BusEvent events[] = {
        {.addr=0x13d1, .value=0x3e, .type=IO_READ},
        {.addr=0x13d2, .value=0x7a, .type=IO_READ},
        {.addr=0x017a, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0052) {
    const struct CPU_State initial_cpu = {.pc=0x63e9, .a=0x62, .x=0x40, .y=0x15, .sp=0x86, .status=0x2e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c9, .value=0x1c}, {.addr=0x63e9, .value=0x3e}, {.addr=0x63ea, .value=0xc9},
    };
    const struct CPU_State final_cpu = {.pc=0x63eb, .a=0x62, .x=0x40, .y=0x15, .sp=0x86, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c9, .value=0x1c}, {.addr=0x63e9, .value=0x3e}, {.addr=0x63ea, .value=0xc9},
    };
    const struct BusEvent events[] = {
        {.addr=0x63e9, .value=0x3e, .type=IO_READ},
        {.addr=0x63ea, .value=0xc9, .type=IO_READ},
        {.addr=0x01c9, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0053) {
    const struct CPU_State initial_cpu = {.pc=0x59eb, .a=0xe8, .x=0x6e, .y=0x07, .sp=0x85, .status=0x50};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000c, .value=0x78}, {.addr=0x59eb, .value=0x3e}, {.addr=0x59ec, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0x59ed, .a=0xe8, .x=0x6e, .y=0x07, .sp=0x85, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x000c, .value=0x78}, {.addr=0x59eb, .value=0x3e}, {.addr=0x59ec, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0x59eb, .value=0x3e, .type=IO_READ},
        {.addr=0x59ec, .value=0x0c, .type=IO_READ},
        {.addr=0x000c, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0054) {
    const struct CPU_State initial_cpu = {.pc=0x0d58, .a=0xaf, .x=0xeb, .y=0x66, .sp=0x54, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0147, .value=0x38}, {.addr=0x0d58, .value=0x3e}, {.addr=0x0d59, .value=0x47},
    };
    const struct CPU_State final_cpu = {.pc=0x0d5a, .a=0xaf, .x=0xeb, .y=0x66, .sp=0x54, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0147, .value=0x38}, {.addr=0x0d58, .value=0x3e}, {.addr=0x0d59, .value=0x47},
    };
    const struct BusEvent events[] = {
        {.addr=0x0d58, .value=0x3e, .type=IO_READ},
        {.addr=0x0d59, .value=0x47, .type=IO_READ},
        {.addr=0x0147, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0055) {
    const struct CPU_State initial_cpu = {.pc=0x6f08, .a=0xe9, .x=0x8c, .y=0x82, .sp=0x05, .status=0xa0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0198, .value=0x02}, {.addr=0x6f08, .value=0x3e}, {.addr=0x6f09, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0x6f0a, .a=0xe9, .x=0x8c, .y=0x82, .sp=0x05, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0198, .value=0x02}, {.addr=0x6f08, .value=0x3e}, {.addr=0x6f09, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0x6f08, .value=0x3e, .type=IO_READ},
        {.addr=0x6f09, .value=0x98, .type=IO_READ},
        {.addr=0x0198, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0056) {
    const struct CPU_State initial_cpu = {.pc=0xcf8d, .a=0xdf, .x=0xa9, .y=0x1c, .sp=0xb3, .status=0x59};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0024, .value=0x38}, {.addr=0xcf8d, .value=0x3e}, {.addr=0xcf8e, .value=0x24},
    };
    const struct CPU_State final_cpu = {.pc=0xcf8f, .a=0xdf, .x=0xa9, .y=0x1c, .sp=0xb3, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x0024, .value=0x38}, {.addr=0xcf8d, .value=0x3e}, {.addr=0xcf8e, .value=0x24},
    };
    const struct BusEvent events[] = {
        {.addr=0xcf8d, .value=0x3e, .type=IO_READ},
        {.addr=0xcf8e, .value=0x24, .type=IO_READ},
        {.addr=0x0024, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0057) {
    const struct CPU_State initial_cpu = {.pc=0xf19a, .a=0x78, .x=0xe9, .y=0x19, .sp=0x1e, .status=0xf7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c8, .value=0xf2}, {.addr=0xf19a, .value=0x3e}, {.addr=0xf19b, .value=0xc8},
    };
    const struct CPU_State final_cpu = {.pc=0xf19c, .a=0x78, .x=0xe9, .y=0x19, .sp=0x1e, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c8, .value=0xf2}, {.addr=0xf19a, .value=0x3e}, {.addr=0xf19b, .value=0xc8},
    };
    const struct BusEvent events[] = {
        {.addr=0xf19a, .value=0x3e, .type=IO_READ},
        {.addr=0xf19b, .value=0xc8, .type=IO_READ},
        {.addr=0x01c8, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0058) {
    const struct CPU_State initial_cpu = {.pc=0x753e, .a=0x69, .x=0xa6, .y=0x14, .sp=0x91, .status=0xc1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008b, .value=0xf6}, {.addr=0x753e, .value=0x3e}, {.addr=0x753f, .value=0x8b},
    };
    const struct CPU_State final_cpu = {.pc=0x7540, .a=0x69, .x=0xa6, .y=0x14, .sp=0x91, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x008b, .value=0xf6}, {.addr=0x753e, .value=0x3e}, {.addr=0x753f, .value=0x8b},
    };
    const struct BusEvent events[] = {
        {.addr=0x753e, .value=0x3e, .type=IO_READ},
        {.addr=0x753f, .value=0x8b, .type=IO_READ},
        {.addr=0x008b, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0059) {
    const struct CPU_State initial_cpu = {.pc=0xff36, .a=0xc4, .x=0xb9, .y=0x6d, .sp=0x1e, .status=0x05};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a2, .value=0x80}, {.addr=0xff36, .value=0x3e}, {.addr=0xff37, .value=0xa2},
    };
    const struct CPU_State final_cpu = {.pc=0xff38, .a=0xc4, .x=0xb9, .y=0x6d, .sp=0x1e, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a2, .value=0x80}, {.addr=0xff36, .value=0x3e}, {.addr=0xff37, .value=0xa2},
    };
    const struct BusEvent events[] = {
        {.addr=0xff36, .value=0x3e, .type=IO_READ},
        {.addr=0xff37, .value=0xa2, .type=IO_READ},
        {.addr=0x00a2, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_005A) {
    const struct CPU_State initial_cpu = {.pc=0x53fd, .a=0xd1, .x=0x86, .y=0xf6, .sp=0x75, .status=0xb4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0180, .value=0x9f}, {.addr=0x53fd, .value=0x3e}, {.addr=0x53fe, .value=0x80},
    };
    const struct CPU_State final_cpu = {.pc=0x53ff, .a=0xd1, .x=0x86, .y=0xf6, .sp=0x75, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0180, .value=0x9f}, {.addr=0x53fd, .value=0x3e}, {.addr=0x53fe, .value=0x80},
    };
    const struct BusEvent events[] = {
        {.addr=0x53fd, .value=0x3e, .type=IO_READ},
        {.addr=0x53fe, .value=0x80, .type=IO_READ},
        {.addr=0x0180, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_005B) {
    const struct CPU_State initial_cpu = {.pc=0xc0f1, .a=0x8d, .x=0x75, .y=0x1e, .sp=0x71, .status=0xd2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0000, .value=0x2b}, {.addr=0xc0f1, .value=0x3e}, {.addr=0xc0f2, .value=0x00},
    };
    const struct CPU_State final_cpu = {.pc=0xc0f3, .a=0x8d, .x=0x75, .y=0x1e, .sp=0x71, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x0000, .value=0x2b}, {.addr=0xc0f1, .value=0x3e}, {.addr=0xc0f2, .value=0x00},
    };
    const struct BusEvent events[] = {
        {.addr=0xc0f1, .value=0x3e, .type=IO_READ},
        {.addr=0xc0f2, .value=0x00, .type=IO_READ},
        {.addr=0x0000, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_005C) {
    const struct CPU_State initial_cpu = {.pc=0x74d9, .a=0x7f, .x=0x41, .y=0x5c, .sp=0x8a, .status=0x38};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019d, .value=0x59}, {.addr=0x74d9, .value=0x3e}, {.addr=0x74da, .value=0x9d},
    };
    const struct CPU_State final_cpu = {.pc=0x74db, .a=0x7f, .x=0x41, .y=0x5c, .sp=0x8a, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x019d, .value=0x59}, {.addr=0x74d9, .value=0x3e}, {.addr=0x74da, .value=0x9d},
    };
    const struct BusEvent events[] = {
        {.addr=0x74d9, .value=0x3e, .type=IO_READ},
        {.addr=0x74da, .value=0x9d, .type=IO_READ},
        {.addr=0x019d, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_005D) {
    const struct CPU_State initial_cpu = {.pc=0x1e2e, .a=0xf7, .x=0xef, .y=0xbc, .sp=0xb5, .status=0xcb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d3, .value=0x24}, {.addr=0x1e2e, .value=0x3e}, {.addr=0x1e2f, .value=0xd3},
    };
    const struct CPU_State final_cpu = {.pc=0x1e30, .a=0xf7, .x=0xef, .y=0xbc, .sp=0xb5, .status=0xc9};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d3, .value=0x24}, {.addr=0x1e2e, .value=0x3e}, {.addr=0x1e2f, .value=0xd3},
    };
    const struct BusEvent events[] = {
        {.addr=0x1e2e, .value=0x3e, .type=IO_READ},
        {.addr=0x1e2f, .value=0xd3, .type=IO_READ},
        {.addr=0x00d3, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_005E) {
    const struct CPU_State initial_cpu = {.pc=0xc636, .a=0x15, .x=0x46, .y=0xad, .sp=0xbe, .status=0x74};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f4, .value=0xbc}, {.addr=0xc636, .value=0x3e}, {.addr=0xc637, .value=0xf4},
    };
    const struct CPU_State final_cpu = {.pc=0xc638, .a=0x15, .x=0x46, .y=0xad, .sp=0xbe, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f4, .value=0xbc}, {.addr=0xc636, .value=0x3e}, {.addr=0xc637, .value=0xf4},
    };
    const struct BusEvent events[] = {
        {.addr=0xc636, .value=0x3e, .type=IO_READ},
        {.addr=0xc637, .value=0xf4, .type=IO_READ},
        {.addr=0x01f4, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_005F) {
    const struct CPU_State initial_cpu = {.pc=0xd81e, .a=0x9a, .x=0x37, .y=0xfd, .sp=0x61, .status=0x14};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b3, .value=0x26}, {.addr=0xd81e, .value=0x3e}, {.addr=0xd81f, .value=0xb3},
    };
    const struct CPU_State final_cpu = {.pc=0xd820, .a=0x9a, .x=0x37, .y=0xfd, .sp=0x61, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b3, .value=0x26}, {.addr=0xd81e, .value=0x3e}, {.addr=0xd81f, .value=0xb3},
    };
    const struct BusEvent events[] = {
        {.addr=0xd81e, .value=0x3e, .type=IO_READ},
        {.addr=0xd81f, .value=0xb3, .type=IO_READ},
        {.addr=0x00b3, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0060) {
    const struct CPU_State initial_cpu = {.pc=0xc0f0, .a=0x47, .x=0xcd, .y=0x63, .sp=0xb5, .status=0x3e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01be, .value=0xa2}, {.addr=0xc0f0, .value=0x3e}, {.addr=0xc0f1, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0xc0f2, .a=0x47, .x=0xcd, .y=0x63, .sp=0xb5, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01be, .value=0xa2}, {.addr=0xc0f0, .value=0x3e}, {.addr=0xc0f1, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0xc0f0, .value=0x3e, .type=IO_READ},
        {.addr=0xc0f1, .value=0xbe, .type=IO_READ},
        {.addr=0x01be, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0061) {
    const struct CPU_State initial_cpu = {.pc=0xce63, .a=0x05, .x=0xf6, .y=0x7f, .sp=0x75, .status=0x73};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0163, .value=0xf3}, {.addr=0xce63, .value=0x3e}, {.addr=0xce64, .value=0x63},
    };
    const struct CPU_State final_cpu = {.pc=0xce65, .a=0x05, .x=0xf6, .y=0x7f, .sp=0x75, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x0163, .value=0xf3}, {.addr=0xce63, .value=0x3e}, {.addr=0xce64, .value=0x63},
    };
    const struct BusEvent events[] = {
        {.addr=0xce63, .value=0x3e, .type=IO_READ},
        {.addr=0xce64, .value=0x63, .type=IO_READ},
        {.addr=0x0163, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0062) {
    const struct CPU_State initial_cpu = {.pc=0x1f7e, .a=0x5f, .x=0xbb, .y=0x27, .sp=0x50, .status=0x5d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c0, .value=0x46}, {.addr=0x1f7e, .value=0x3e}, {.addr=0x1f7f, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0x1f80, .a=0x5f, .x=0xbb, .y=0x27, .sp=0x50, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c0, .value=0x46}, {.addr=0x1f7e, .value=0x3e}, {.addr=0x1f7f, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0x1f7e, .value=0x3e, .type=IO_READ},
        {.addr=0x1f7f, .value=0xc0, .type=IO_READ},
        {.addr=0x00c0, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0063) {
    const struct CPU_State initial_cpu = {.pc=0x7819, .a=0x88, .x=0xa7, .y=0x0f, .sp=0xe5, .status=0xec};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013f, .value=0xad}, {.addr=0x7819, .value=0x3e}, {.addr=0x781a, .value=0x3f},
    };
    const struct CPU_State final_cpu = {.pc=0x781b, .a=0x88, .x=0xa7, .y=0x0f, .sp=0xe5, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x013f, .value=0xad}, {.addr=0x7819, .value=0x3e}, {.addr=0x781a, .value=0x3f},
    };
    const struct BusEvent events[] = {
        {.addr=0x7819, .value=0x3e, .type=IO_READ},
        {.addr=0x781a, .value=0x3f, .type=IO_READ},
        {.addr=0x013f, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0064) {
    const struct CPU_State initial_cpu = {.pc=0xa58e, .a=0x08, .x=0x62, .y=0xcf, .sp=0x6c, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0113, .value=0xcb}, {.addr=0xa58e, .value=0x3e}, {.addr=0xa58f, .value=0x13},
    };
    const struct CPU_State final_cpu = {.pc=0xa590, .a=0x08, .x=0x62, .y=0xcf, .sp=0x6c, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0113, .value=0xcb}, {.addr=0xa58e, .value=0x3e}, {.addr=0xa58f, .value=0x13},
    };
    const struct BusEvent events[] = {
        {.addr=0xa58e, .value=0x3e, .type=IO_READ},
        {.addr=0xa58f, .value=0x13, .type=IO_READ},
        {.addr=0x0113, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0065) {
    const struct CPU_State initial_cpu = {.pc=0xda1d, .a=0xf1, .x=0x71, .y=0xac, .sp=0xe2, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0102, .value=0x9a}, {.addr=0xda1d, .value=0x3e}, {.addr=0xda1e, .value=0x02},
    };
    const struct CPU_State final_cpu = {.pc=0xda1f, .a=0xf1, .x=0x71, .y=0xac, .sp=0xe2, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0102, .value=0x9a}, {.addr=0xda1d, .value=0x3e}, {.addr=0xda1e, .value=0x02},
    };
    const struct BusEvent events[] = {
        {.addr=0xda1d, .value=0x3e, .type=IO_READ},
        {.addr=0xda1e, .value=0x02, .type=IO_READ},
        {.addr=0x0102, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0066) {
    const struct CPU_State initial_cpu = {.pc=0x97fd, .a=0x9d, .x=0x23, .y=0x05, .sp=0xb5, .status=0x29};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0170, .value=0xd2}, {.addr=0x97fd, .value=0x3e}, {.addr=0x97fe, .value=0x70},
    };
    const struct CPU_State final_cpu = {.pc=0x97ff, .a=0x9d, .x=0x23, .y=0x05, .sp=0xb5, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x0170, .value=0xd2}, {.addr=0x97fd, .value=0x3e}, {.addr=0x97fe, .value=0x70},
    };
    const struct BusEvent events[] = {
        {.addr=0x97fd, .value=0x3e, .type=IO_READ},
        {.addr=0x97fe, .value=0x70, .type=IO_READ},
        {.addr=0x0170, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0067) {
    const struct CPU_State initial_cpu = {.pc=0xf3b0, .a=0x0d, .x=0xc1, .y=0xda, .sp=0xca, .status=0x85};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00da, .value=0xe4}, {.addr=0xf3b0, .value=0x3e}, {.addr=0xf3b1, .value=0xda},
    };
    const struct CPU_State final_cpu = {.pc=0xf3b2, .a=0x0d, .x=0xc1, .y=0xda, .sp=0xca, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x00da, .value=0xe4}, {.addr=0xf3b0, .value=0x3e}, {.addr=0xf3b1, .value=0xda},
    };
    const struct BusEvent events[] = {
        {.addr=0xf3b0, .value=0x3e, .type=IO_READ},
        {.addr=0xf3b1, .value=0xda, .type=IO_READ},
        {.addr=0x00da, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0068) {
    const struct CPU_State initial_cpu = {.pc=0x81b8, .a=0x00, .x=0x5e, .y=0xbe, .sp=0x6c, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0183, .value=0x95}, {.addr=0x81b8, .value=0x3e}, {.addr=0x81b9, .value=0x83},
    };
    const struct CPU_State final_cpu = {.pc=0x81ba, .a=0x00, .x=0x5e, .y=0xbe, .sp=0x6c, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0183, .value=0x95}, {.addr=0x81b8, .value=0x3e}, {.addr=0x81b9, .value=0x83},
    };
    const struct BusEvent events[] = {
        {.addr=0x81b8, .value=0x3e, .type=IO_READ},
        {.addr=0x81b9, .value=0x83, .type=IO_READ},
        {.addr=0x0183, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0069) {
    const struct CPU_State initial_cpu = {.pc=0xffce, .a=0x97, .x=0xcd, .y=0xad, .sp=0x44, .status=0xcc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0001, .value=0xde}, {.addr=0xffce, .value=0x3e}, {.addr=0xffcf, .value=0x01},
    };
    const struct CPU_State final_cpu = {.pc=0xffd0, .a=0x97, .x=0xcd, .y=0xad, .sp=0x44, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0001, .value=0xde}, {.addr=0xffce, .value=0x3e}, {.addr=0xffcf, .value=0x01},
    };
    const struct BusEvent events[] = {
        {.addr=0xffce, .value=0x3e, .type=IO_READ},
        {.addr=0xffcf, .value=0x01, .type=IO_READ},
        {.addr=0x0001, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_006A) {
    const struct CPU_State initial_cpu = {.pc=0x9f5e, .a=0xac, .x=0x7c, .y=0x78, .sp=0x8d, .status=0xf2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a8, .value=0xe1}, {.addr=0x9f5e, .value=0x3e}, {.addr=0x9f5f, .value=0xa8},
    };
    const struct CPU_State final_cpu = {.pc=0x9f60, .a=0xac, .x=0x7c, .y=0x78, .sp=0x8d, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a8, .value=0xe1}, {.addr=0x9f5e, .value=0x3e}, {.addr=0x9f5f, .value=0xa8},
    };
    const struct BusEvent events[] = {
        {.addr=0x9f5e, .value=0x3e, .type=IO_READ},
        {.addr=0x9f5f, .value=0xa8, .type=IO_READ},
        {.addr=0x01a8, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_006B) {
    const struct CPU_State initial_cpu = {.pc=0x9496, .a=0xcf, .x=0xcb, .y=0xe3, .sp=0xcc, .status=0xbd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01dc, .value=0x0b}, {.addr=0x9496, .value=0x3e}, {.addr=0x9497, .value=0xdc},
    };
    const struct CPU_State final_cpu = {.pc=0x9498, .a=0xcf, .x=0xcb, .y=0xe3, .sp=0xcc, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01dc, .value=0x0b}, {.addr=0x9496, .value=0x3e}, {.addr=0x9497, .value=0xdc},
    };
    const struct BusEvent events[] = {
        {.addr=0x9496, .value=0x3e, .type=IO_READ},
        {.addr=0x9497, .value=0xdc, .type=IO_READ},
        {.addr=0x01dc, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_006C) {
    const struct CPU_State initial_cpu = {.pc=0x20e9, .a=0x13, .x=0x96, .y=0x83, .sp=0x46, .status=0x78};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c8, .value=0xdb}, {.addr=0x20e9, .value=0x3e}, {.addr=0x20ea, .value=0xc8},
    };
    const struct CPU_State final_cpu = {.pc=0x20eb, .a=0x13, .x=0x96, .y=0x83, .sp=0x46, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c8, .value=0xdb}, {.addr=0x20e9, .value=0x3e}, {.addr=0x20ea, .value=0xc8},
    };
    const struct BusEvent events[] = {
        {.addr=0x20e9, .value=0x3e, .type=IO_READ},
        {.addr=0x20ea, .value=0xc8, .type=IO_READ},
        {.addr=0x01c8, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_006D) {
    const struct CPU_State initial_cpu = {.pc=0x227a, .a=0xc4, .x=0x34, .y=0xdd, .sp=0x35, .status=0xfd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015b, .value=0xa2}, {.addr=0x227a, .value=0x3e}, {.addr=0x227b, .value=0x5b},
    };
    const struct CPU_State final_cpu = {.pc=0x227c, .a=0xc4, .x=0x34, .y=0xdd, .sp=0x35, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x015b, .value=0xa2}, {.addr=0x227a, .value=0x3e}, {.addr=0x227b, .value=0x5b},
    };
    const struct BusEvent events[] = {
        {.addr=0x227a, .value=0x3e, .type=IO_READ},
        {.addr=0x227b, .value=0x5b, .type=IO_READ},
        {.addr=0x015b, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_006E) {
    const struct CPU_State initial_cpu = {.pc=0x763b, .a=0xda, .x=0xb0, .y=0xae, .sp=0xd6, .status=0x0c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e4, .value=0xb9}, {.addr=0x763b, .value=0x3e}, {.addr=0x763c, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0x763d, .a=0xda, .x=0xb0, .y=0xae, .sp=0xd6, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e4, .value=0xb9}, {.addr=0x763b, .value=0x3e}, {.addr=0x763c, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0x763b, .value=0x3e, .type=IO_READ},
        {.addr=0x763c, .value=0xe4, .type=IO_READ},
        {.addr=0x00e4, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_006F) {
    const struct CPU_State initial_cpu = {.pc=0x839b, .a=0x6a, .x=0x1c, .y=0x6a, .sp=0x60, .status=0xcf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a3, .value=0x09}, {.addr=0x839b, .value=0x3e}, {.addr=0x839c, .value=0xa3},
    };
    const struct CPU_State final_cpu = {.pc=0x839d, .a=0x6a, .x=0x1c, .y=0x6a, .sp=0x60, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a3, .value=0x09}, {.addr=0x839b, .value=0x3e}, {.addr=0x839c, .value=0xa3},
    };
    const struct BusEvent events[] = {
        {.addr=0x839b, .value=0x3e, .type=IO_READ},
        {.addr=0x839c, .value=0xa3, .type=IO_READ},
        {.addr=0x00a3, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0070) {
    const struct CPU_State initial_cpu = {.pc=0xbbe0, .a=0x28, .x=0xc0, .y=0x4c, .sp=0x1f, .status=0x45};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0007, .value=0xe1}, {.addr=0xbbe0, .value=0x3e}, {.addr=0xbbe1, .value=0x07},
    };
    const struct CPU_State final_cpu = {.pc=0xbbe2, .a=0x28, .x=0xc0, .y=0x4c, .sp=0x1f, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0007, .value=0xe1}, {.addr=0xbbe0, .value=0x3e}, {.addr=0xbbe1, .value=0x07},
    };
    const struct BusEvent events[] = {
        {.addr=0xbbe0, .value=0x3e, .type=IO_READ},
        {.addr=0xbbe1, .value=0x07, .type=IO_READ},
        {.addr=0x0007, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0071) {
    const struct CPU_State initial_cpu = {.pc=0xe1b8, .a=0x41, .x=0x16, .y=0xe0, .sp=0xa8, .status=0x8c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b0, .value=0x48}, {.addr=0xe1b8, .value=0x3e}, {.addr=0xe1b9, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0xe1ba, .a=0x41, .x=0x16, .y=0xe0, .sp=0xa8, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b0, .value=0x48}, {.addr=0xe1b8, .value=0x3e}, {.addr=0xe1b9, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0xe1b8, .value=0x3e, .type=IO_READ},
        {.addr=0xe1b9, .value=0xb0, .type=IO_READ},
        {.addr=0x00b0, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0072) {
    const struct CPU_State initial_cpu = {.pc=0x81f3, .a=0xd0, .x=0x38, .y=0x90, .sp=0x9d, .status=0xc1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b9, .value=0x46}, {.addr=0x81f3, .value=0x3e}, {.addr=0x81f4, .value=0xb9},
    };
    const struct CPU_State final_cpu = {.pc=0x81f5, .a=0xd0, .x=0x38, .y=0x90, .sp=0x9d, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b9, .value=0x46}, {.addr=0x81f3, .value=0x3e}, {.addr=0x81f4, .value=0xb9},
    };
    const struct BusEvent events[] = {
        {.addr=0x81f3, .value=0x3e, .type=IO_READ},
        {.addr=0x81f4, .value=0xb9, .type=IO_READ},
        {.addr=0x00b9, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0073) {
    const struct CPU_State initial_cpu = {.pc=0x1d15, .a=0x11, .x=0xdb, .y=0x59, .sp=0x87, .status=0xbe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0108, .value=0xb7}, {.addr=0x1d15, .value=0x3e}, {.addr=0x1d16, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0x1d17, .a=0x11, .x=0xdb, .y=0x59, .sp=0x87, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0108, .value=0xb7}, {.addr=0x1d15, .value=0x3e}, {.addr=0x1d16, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0x1d15, .value=0x3e, .type=IO_READ},
        {.addr=0x1d16, .value=0x08, .type=IO_READ},
        {.addr=0x0108, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0074) {
    const struct CPU_State initial_cpu = {.pc=0x03ed, .a=0x04, .x=0xda, .y=0x07, .sp=0xcb, .status=0xf3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c4, .value=0xe2}, {.addr=0x03ed, .value=0x3e}, {.addr=0x03ee, .value=0xc4},
    };
    const struct CPU_State final_cpu = {.pc=0x03ef, .a=0x04, .x=0xda, .y=0x07, .sp=0xcb, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c4, .value=0xe2}, {.addr=0x03ed, .value=0x3e}, {.addr=0x03ee, .value=0xc4},
    };
    const struct BusEvent events[] = {
        {.addr=0x03ed, .value=0x3e, .type=IO_READ},
        {.addr=0x03ee, .value=0xc4, .type=IO_READ},
        {.addr=0x01c4, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0075) {
    const struct CPU_State initial_cpu = {.pc=0xa495, .a=0xf3, .x=0x2a, .y=0xe0, .sp=0x11, .status=0x6a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ee, .value=0xa3}, {.addr=0xa495, .value=0x3e}, {.addr=0xa496, .value=0xee},
    };
    const struct CPU_State final_cpu = {.pc=0xa497, .a=0xf3, .x=0x2a, .y=0xe0, .sp=0x11, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ee, .value=0xa3}, {.addr=0xa495, .value=0x3e}, {.addr=0xa496, .value=0xee},
    };
    const struct BusEvent events[] = {
        {.addr=0xa495, .value=0x3e, .type=IO_READ},
        {.addr=0xa496, .value=0xee, .type=IO_READ},
        {.addr=0x01ee, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0076) {
    const struct CPU_State initial_cpu = {.pc=0xb529, .a=0x3d, .x=0xad, .y=0xc7, .sp=0xa4, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0078, .value=0x13}, {.addr=0xb529, .value=0x3e}, {.addr=0xb52a, .value=0x78},
    };
    const struct CPU_State final_cpu = {.pc=0xb52b, .a=0x3d, .x=0xad, .y=0xc7, .sp=0xa4, .status=0xc1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0078, .value=0x13}, {.addr=0xb529, .value=0x3e}, {.addr=0xb52a, .value=0x78},
    };
    const struct BusEvent events[] = {
        {.addr=0xb529, .value=0x3e, .type=IO_READ},
        {.addr=0xb52a, .value=0x78, .type=IO_READ},
        {.addr=0x0078, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0077) {
    const struct CPU_State initial_cpu = {.pc=0x355f, .a=0x1f, .x=0x82, .y=0x88, .sp=0x78, .status=0xd0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002a, .value=0x5e}, {.addr=0x355f, .value=0x3e}, {.addr=0x3560, .value=0x2a},
    };
    const struct CPU_State final_cpu = {.pc=0x3561, .a=0x1f, .x=0x82, .y=0x88, .sp=0x78, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x002a, .value=0x5e}, {.addr=0x355f, .value=0x3e}, {.addr=0x3560, .value=0x2a},
    };
    const struct BusEvent events[] = {
        {.addr=0x355f, .value=0x3e, .type=IO_READ},
        {.addr=0x3560, .value=0x2a, .type=IO_READ},
        {.addr=0x002a, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0078) {
    const struct CPU_State initial_cpu = {.pc=0x8fdd, .a=0x6d, .x=0x3c, .y=0x6c, .sp=0x84, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010f, .value=0x2b}, {.addr=0x8fdd, .value=0x3e}, {.addr=0x8fde, .value=0x0f},
    };
    const struct CPU_State final_cpu = {.pc=0x8fdf, .a=0x6d, .x=0x3c, .y=0x6c, .sp=0x84, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x010f, .value=0x2b}, {.addr=0x8fdd, .value=0x3e}, {.addr=0x8fde, .value=0x0f},
    };
    const struct BusEvent events[] = {
        {.addr=0x8fdd, .value=0x3e, .type=IO_READ},
        {.addr=0x8fde, .value=0x0f, .type=IO_READ},
        {.addr=0x010f, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0079) {
    const struct CPU_State initial_cpu = {.pc=0xf7be, .a=0x2d, .x=0x9b, .y=0xb7, .sp=0x56, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ba, .value=0xbf}, {.addr=0xf7be, .value=0x3e}, {.addr=0xf7bf, .value=0xba},
    };
    const struct CPU_State final_cpu = {.pc=0xf7c0, .a=0x2d, .x=0x9b, .y=0xb7, .sp=0x56, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ba, .value=0xbf}, {.addr=0xf7be, .value=0x3e}, {.addr=0xf7bf, .value=0xba},
    };
    const struct BusEvent events[] = {
        {.addr=0xf7be, .value=0x3e, .type=IO_READ},
        {.addr=0xf7bf, .value=0xba, .type=IO_READ},
        {.addr=0x01ba, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_007A) {
    const struct CPU_State initial_cpu = {.pc=0x9d30, .a=0x83, .x=0x64, .y=0x02, .sp=0x34, .status=0xa5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0151, .value=0x69}, {.addr=0x9d30, .value=0x3e}, {.addr=0x9d31, .value=0x51},
    };
    const struct CPU_State final_cpu = {.pc=0x9d32, .a=0x83, .x=0x64, .y=0x02, .sp=0x34, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0151, .value=0x69}, {.addr=0x9d30, .value=0x3e}, {.addr=0x9d31, .value=0x51},
    };
    const struct BusEvent events[] = {
        {.addr=0x9d30, .value=0x3e, .type=IO_READ},
        {.addr=0x9d31, .value=0x51, .type=IO_READ},
        {.addr=0x0151, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_007C) {
    const struct CPU_State initial_cpu = {.pc=0x046a, .a=0xc9, .x=0x77, .y=0x7d, .sp=0xc5, .status=0x29};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010b, .value=0x5e}, {.addr=0x046a, .value=0x3e}, {.addr=0x046b, .value=0x0b},
    };
    const struct CPU_State final_cpu = {.pc=0x046c, .a=0xc9, .x=0x77, .y=0x7d, .sp=0xc5, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x010b, .value=0x5e}, {.addr=0x046a, .value=0x3e}, {.addr=0x046b, .value=0x0b},
    };
    const struct BusEvent events[] = {
        {.addr=0x046a, .value=0x3e, .type=IO_READ},
        {.addr=0x046b, .value=0x0b, .type=IO_READ},
        {.addr=0x010b, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_007D) {
    const struct CPU_State initial_cpu = {.pc=0x54a0, .a=0x89, .x=0x21, .y=0xc8, .sp=0x07, .status=0x0a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002a, .value=0x7d}, {.addr=0x54a0, .value=0x3e}, {.addr=0x54a1, .value=0x2a},
    };
    const struct CPU_State final_cpu = {.pc=0x54a2, .a=0x89, .x=0x21, .y=0xc8, .sp=0x07, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x002a, .value=0x7d}, {.addr=0x54a0, .value=0x3e}, {.addr=0x54a1, .value=0x2a},
    };
    const struct BusEvent events[] = {
        {.addr=0x54a0, .value=0x3e, .type=IO_READ},
        {.addr=0x54a1, .value=0x2a, .type=IO_READ},
        {.addr=0x002a, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_007E) {
    const struct CPU_State initial_cpu = {.pc=0x675d, .a=0x2f, .x=0xe1, .y=0xf4, .sp=0x58, .status=0xe9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0125, .value=0x59}, {.addr=0x675d, .value=0x3e}, {.addr=0x675e, .value=0x25},
    };
    const struct CPU_State final_cpu = {.pc=0x675f, .a=0x2f, .x=0xe1, .y=0xf4, .sp=0x58, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0125, .value=0x59}, {.addr=0x675d, .value=0x3e}, {.addr=0x675e, .value=0x25},
    };
    const struct BusEvent events[] = {
        {.addr=0x675d, .value=0x3e, .type=IO_READ},
        {.addr=0x675e, .value=0x25, .type=IO_READ},
        {.addr=0x0125, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_007F) {
    const struct CPU_State initial_cpu = {.pc=0xaff2, .a=0x13, .x=0x26, .y=0x46, .sp=0xde, .status=0xda};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a3, .value=0x9d}, {.addr=0xaff2, .value=0x3e}, {.addr=0xaff3, .value=0xa3},
    };
    const struct CPU_State final_cpu = {.pc=0xaff4, .a=0x13, .x=0x26, .y=0x46, .sp=0xde, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a3, .value=0x9d}, {.addr=0xaff2, .value=0x3e}, {.addr=0xaff3, .value=0xa3},
    };
    const struct BusEvent events[] = {
        {.addr=0xaff2, .value=0x3e, .type=IO_READ},
        {.addr=0xaff3, .value=0xa3, .type=IO_READ},
        {.addr=0x00a3, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0080) {
    const struct CPU_State initial_cpu = {.pc=0xff41, .a=0xaf, .x=0xb8, .y=0xb7, .sp=0xd6, .status=0x3a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0123, .value=0xf7}, {.addr=0xff41, .value=0x3e}, {.addr=0xff42, .value=0x23},
    };
    const struct CPU_State final_cpu = {.pc=0xff43, .a=0xaf, .x=0xb8, .y=0xb7, .sp=0xd6, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0123, .value=0xf7}, {.addr=0xff41, .value=0x3e}, {.addr=0xff42, .value=0x23},
    };
    const struct BusEvent events[] = {
        {.addr=0xff41, .value=0x3e, .type=IO_READ},
        {.addr=0xff42, .value=0x23, .type=IO_READ},
        {.addr=0x0123, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0081) {
    const struct CPU_State initial_cpu = {.pc=0xc393, .a=0x25, .x=0xa0, .y=0xca, .sp=0x2e, .status=0x40};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a9, .value=0x6a}, {.addr=0xc393, .value=0x3e}, {.addr=0xc394, .value=0xa9},
    };
    const struct CPU_State final_cpu = {.pc=0xc395, .a=0x25, .x=0xa0, .y=0xca, .sp=0x2e, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a9, .value=0x6a}, {.addr=0xc393, .value=0x3e}, {.addr=0xc394, .value=0xa9},
    };
    const struct BusEvent events[] = {
        {.addr=0xc393, .value=0x3e, .type=IO_READ},
        {.addr=0xc394, .value=0xa9, .type=IO_READ},
        {.addr=0x00a9, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0083) {
    const struct CPU_State initial_cpu = {.pc=0x3e35, .a=0xca, .x=0x67, .y=0x05, .sp=0xcf, .status=0xe8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011c, .value=0x84}, {.addr=0x3e35, .value=0x3e}, {.addr=0x3e36, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0x3e37, .a=0xca, .x=0x67, .y=0x05, .sp=0xcf, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x011c, .value=0x84}, {.addr=0x3e35, .value=0x3e}, {.addr=0x3e36, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0x3e35, .value=0x3e, .type=IO_READ},
        {.addr=0x3e36, .value=0x1c, .type=IO_READ},
        {.addr=0x011c, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0084) {
    const struct CPU_State initial_cpu = {.pc=0xf0cb, .a=0xe9, .x=0x45, .y=0x27, .sp=0xf9, .status=0xae};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013a, .value=0x4f}, {.addr=0xf0cb, .value=0x3e}, {.addr=0xf0cc, .value=0x3a},
    };
    const struct CPU_State final_cpu = {.pc=0xf0cd, .a=0xe9, .x=0x45, .y=0x27, .sp=0xf9, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x013a, .value=0x4f}, {.addr=0xf0cb, .value=0x3e}, {.addr=0xf0cc, .value=0x3a},
    };
    const struct BusEvent events[] = {
        {.addr=0xf0cb, .value=0x3e, .type=IO_READ},
        {.addr=0xf0cc, .value=0x3a, .type=IO_READ},
        {.addr=0x013a, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0085) {
    const struct CPU_State initial_cpu = {.pc=0xdba3, .a=0x21, .x=0xec, .y=0x42, .sp=0x4b, .status=0x2e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013e, .value=0xcd}, {.addr=0xdba3, .value=0x3e}, {.addr=0xdba4, .value=0x3e},
    };
    const struct CPU_State final_cpu = {.pc=0xdba5, .a=0x21, .x=0xec, .y=0x42, .sp=0x4b, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x013e, .value=0xcd}, {.addr=0xdba3, .value=0x3e}, {.addr=0xdba4, .value=0x3e},
    };
    const struct BusEvent events[] = {
        {.addr=0xdba3, .value=0x3e, .type=IO_READ},
        {.addr=0xdba4, .value=0x3e, .type=IO_READ},
        {.addr=0x013e, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0086) {
    const struct CPU_State initial_cpu = {.pc=0xa420, .a=0x68, .x=0xa7, .y=0xcc, .sp=0x3f, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013e, .value=0x82}, {.addr=0xa420, .value=0x3e}, {.addr=0xa421, .value=0x3e},
    };
    const struct CPU_State final_cpu = {.pc=0xa422, .a=0x68, .x=0xa7, .y=0xcc, .sp=0x3f, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x013e, .value=0x82}, {.addr=0xa420, .value=0x3e}, {.addr=0xa421, .value=0x3e},
    };
    const struct BusEvent events[] = {
        {.addr=0xa420, .value=0x3e, .type=IO_READ},
        {.addr=0xa421, .value=0x3e, .type=IO_READ},
        {.addr=0x013e, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0087) {
    const struct CPU_State initial_cpu = {.pc=0x948c, .a=0x9d, .x=0x4d, .y=0x2a, .sp=0x8b, .status=0xca};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0046, .value=0x1f}, {.addr=0x948c, .value=0x3e}, {.addr=0x948d, .value=0x46},
    };
    const struct CPU_State final_cpu = {.pc=0x948e, .a=0x9d, .x=0x4d, .y=0x2a, .sp=0x8b, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x0046, .value=0x1f}, {.addr=0x948c, .value=0x3e}, {.addr=0x948d, .value=0x46},
    };
    const struct BusEvent events[] = {
        {.addr=0x948c, .value=0x3e, .type=IO_READ},
        {.addr=0x948d, .value=0x46, .type=IO_READ},
        {.addr=0x0046, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0088) {
    const struct CPU_State initial_cpu = {.pc=0xaeb8, .a=0x65, .x=0x70, .y=0xe5, .sp=0x02, .status=0x36};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d4, .value=0xe7}, {.addr=0xaeb8, .value=0x3e}, {.addr=0xaeb9, .value=0xd4},
    };
    const struct CPU_State final_cpu = {.pc=0xaeba, .a=0x65, .x=0x70, .y=0xe5, .sp=0x02, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d4, .value=0xe7}, {.addr=0xaeb8, .value=0x3e}, {.addr=0xaeb9, .value=0xd4},
    };
    const struct BusEvent events[] = {
        {.addr=0xaeb8, .value=0x3e, .type=IO_READ},
        {.addr=0xaeb9, .value=0xd4, .type=IO_READ},
        {.addr=0x01d4, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0089) {
    const struct CPU_State initial_cpu = {.pc=0xe82f, .a=0x74, .x=0xde, .y=0xb0, .sp=0xb5, .status=0x80};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00aa, .value=0xac}, {.addr=0xe82f, .value=0x3e}, {.addr=0xe830, .value=0xaa},
    };
    const struct CPU_State final_cpu = {.pc=0xe831, .a=0x74, .x=0xde, .y=0xb0, .sp=0xb5, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x00aa, .value=0xac}, {.addr=0xe82f, .value=0x3e}, {.addr=0xe830, .value=0xaa},
    };
    const struct BusEvent events[] = {
        {.addr=0xe82f, .value=0x3e, .type=IO_READ},
        {.addr=0xe830, .value=0xaa, .type=IO_READ},
        {.addr=0x00aa, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_008A) {
    const struct CPU_State initial_cpu = {.pc=0xe372, .a=0x52, .x=0xfb, .y=0xda, .sp=0x57, .status=0xbe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0174, .value=0xba}, {.addr=0xe372, .value=0x3e}, {.addr=0xe373, .value=0x74},
    };
    const struct CPU_State final_cpu = {.pc=0xe374, .a=0x52, .x=0xfb, .y=0xda, .sp=0x57, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0174, .value=0xba}, {.addr=0xe372, .value=0x3e}, {.addr=0xe373, .value=0x74},
    };
    const struct BusEvent events[] = {
        {.addr=0xe372, .value=0x3e, .type=IO_READ},
        {.addr=0xe373, .value=0x74, .type=IO_READ},
        {.addr=0x0174, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_008B) {
    const struct CPU_State initial_cpu = {.pc=0x1080, .a=0xb5, .x=0x3d, .y=0x47, .sp=0x7c, .status=0x65};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ad, .value=0x5a}, {.addr=0x1080, .value=0x3e}, {.addr=0x1081, .value=0xad},
    };
    const struct CPU_State final_cpu = {.pc=0x1082, .a=0xb5, .x=0x3d, .y=0x47, .sp=0x7c, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ad, .value=0x5a}, {.addr=0x1080, .value=0x3e}, {.addr=0x1081, .value=0xad},
    };
    const struct BusEvent events[] = {
        {.addr=0x1080, .value=0x3e, .type=IO_READ},
        {.addr=0x1081, .value=0xad, .type=IO_READ},
        {.addr=0x01ad, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_008C) {
    const struct CPU_State initial_cpu = {.pc=0x1f45, .a=0x13, .x=0x55, .y=0xbd, .sp=0xb0, .status=0x0d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0085, .value=0x4c}, {.addr=0x1f45, .value=0x3e}, {.addr=0x1f46, .value=0x85},
    };
    const struct CPU_State final_cpu = {.pc=0x1f47, .a=0x13, .x=0x55, .y=0xbd, .sp=0xb0, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0085, .value=0x4c}, {.addr=0x1f45, .value=0x3e}, {.addr=0x1f46, .value=0x85},
    };
    const struct BusEvent events[] = {
        {.addr=0x1f45, .value=0x3e, .type=IO_READ},
        {.addr=0x1f46, .value=0x85, .type=IO_READ},
        {.addr=0x0085, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_008D) {
    const struct CPU_State initial_cpu = {.pc=0x98ac, .a=0x14, .x=0x3d, .y=0xe2, .sp=0xd9, .status=0x2f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f9, .value=0x02}, {.addr=0x98ac, .value=0x3e}, {.addr=0x98ad, .value=0xf9},
    };
    const struct CPU_State final_cpu = {.pc=0x98ae, .a=0x14, .x=0x3d, .y=0xe2, .sp=0xd9, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f9, .value=0x02}, {.addr=0x98ac, .value=0x3e}, {.addr=0x98ad, .value=0xf9},
    };
    const struct BusEvent events[] = {
        {.addr=0x98ac, .value=0x3e, .type=IO_READ},
        {.addr=0x98ad, .value=0xf9, .type=IO_READ},
        {.addr=0x01f9, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_008E) {
    const struct CPU_State initial_cpu = {.pc=0xf971, .a=0xea, .x=0x7a, .y=0xc6, .sp=0x79, .status=0x66};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0117, .value=0xb2}, {.addr=0xf971, .value=0x3e}, {.addr=0xf972, .value=0x17},
    };
    const struct CPU_State final_cpu = {.pc=0xf973, .a=0xea, .x=0x7a, .y=0xc6, .sp=0x79, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0117, .value=0xb2}, {.addr=0xf971, .value=0x3e}, {.addr=0xf972, .value=0x17},
    };
    const struct BusEvent events[] = {
        {.addr=0xf971, .value=0x3e, .type=IO_READ},
        {.addr=0xf972, .value=0x17, .type=IO_READ},
        {.addr=0x0117, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_008F) {
    const struct CPU_State initial_cpu = {.pc=0x4473, .a=0xcf, .x=0x84, .y=0x36, .sp=0x78, .status=0x0d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0061, .value=0x31}, {.addr=0x4473, .value=0x3e}, {.addr=0x4474, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0x4475, .a=0xcf, .x=0x84, .y=0x36, .sp=0x78, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0061, .value=0x31}, {.addr=0x4473, .value=0x3e}, {.addr=0x4474, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0x4473, .value=0x3e, .type=IO_READ},
        {.addr=0x4474, .value=0x61, .type=IO_READ},
        {.addr=0x0061, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0090) {
    const struct CPU_State initial_cpu = {.pc=0xef5a, .a=0xe4, .x=0x36, .y=0x71, .sp=0x9d, .status=0xb7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0124, .value=0x82}, {.addr=0xef5a, .value=0x3e}, {.addr=0xef5b, .value=0x24},
    };
    const struct CPU_State final_cpu = {.pc=0xef5c, .a=0xe4, .x=0x36, .y=0x71, .sp=0x9d, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0124, .value=0x82}, {.addr=0xef5a, .value=0x3e}, {.addr=0xef5b, .value=0x24},
    };
    const struct BusEvent events[] = {
        {.addr=0xef5a, .value=0x3e, .type=IO_READ},
        {.addr=0xef5b, .value=0x24, .type=IO_READ},
        {.addr=0x0124, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0091) {
    const struct CPU_State initial_cpu = {.pc=0x563a, .a=0xa5, .x=0xe9, .y=0xaa, .sp=0xc7, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0164, .value=0x60}, {.addr=0x563a, .value=0x3e}, {.addr=0x563b, .value=0x64},
    };
    const struct CPU_State final_cpu = {.pc=0x563c, .a=0xa5, .x=0xe9, .y=0xaa, .sp=0xc7, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0164, .value=0x60}, {.addr=0x563a, .value=0x3e}, {.addr=0x563b, .value=0x64},
    };
    const struct BusEvent events[] = {
        {.addr=0x563a, .value=0x3e, .type=IO_READ},
        {.addr=0x563b, .value=0x64, .type=IO_READ},
        {.addr=0x0164, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0092) {
    const struct CPU_State initial_cpu = {.pc=0xd271, .a=0xff, .x=0x80, .y=0x34, .sp=0x72, .status=0xd4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0006, .value=0x64}, {.addr=0xd271, .value=0x3e}, {.addr=0xd272, .value=0x06},
    };
    const struct CPU_State final_cpu = {.pc=0xd273, .a=0xff, .x=0x80, .y=0x34, .sp=0x72, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x0006, .value=0x64}, {.addr=0xd271, .value=0x3e}, {.addr=0xd272, .value=0x06},
    };
    const struct BusEvent events[] = {
        {.addr=0xd271, .value=0x3e, .type=IO_READ},
        {.addr=0xd272, .value=0x06, .type=IO_READ},
        {.addr=0x0006, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0093) {
    const struct CPU_State initial_cpu = {.pc=0xdb01, .a=0x2e, .x=0x0b, .y=0x8d, .sp=0x58, .status=0x73};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0149, .value=0x1a}, {.addr=0xdb01, .value=0x3e}, {.addr=0xdb02, .value=0x49},
    };
    const struct CPU_State final_cpu = {.pc=0xdb03, .a=0x2e, .x=0x0b, .y=0x8d, .sp=0x58, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0149, .value=0x1a}, {.addr=0xdb01, .value=0x3e}, {.addr=0xdb02, .value=0x49},
    };
    const struct BusEvent events[] = {
        {.addr=0xdb01, .value=0x3e, .type=IO_READ},
        {.addr=0xdb02, .value=0x49, .type=IO_READ},
        {.addr=0x0149, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0094) {
    const struct CPU_State initial_cpu = {.pc=0x1c84, .a=0xce, .x=0x2d, .y=0x81, .sp=0x9d, .status=0xda};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0081, .value=0x23}, {.addr=0x1c84, .value=0x3e}, {.addr=0x1c85, .value=0x81},
    };
    const struct CPU_State final_cpu = {.pc=0x1c86, .a=0xce, .x=0x2d, .y=0x81, .sp=0x9d, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x0081, .value=0x23}, {.addr=0x1c84, .value=0x3e}, {.addr=0x1c85, .value=0x81},
    };
    const struct BusEvent events[] = {
        {.addr=0x1c84, .value=0x3e, .type=IO_READ},
        {.addr=0x1c85, .value=0x81, .type=IO_READ},
        {.addr=0x0081, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0095) {
    const struct CPU_State initial_cpu = {.pc=0x74f9, .a=0xd3, .x=0x4a, .y=0x20, .sp=0x13, .status=0xfe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c0, .value=0xaa}, {.addr=0x74f9, .value=0x3e}, {.addr=0x74fa, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0x74fb, .a=0xd3, .x=0x4a, .y=0x20, .sp=0x13, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c0, .value=0xaa}, {.addr=0x74f9, .value=0x3e}, {.addr=0x74fa, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0x74f9, .value=0x3e, .type=IO_READ},
        {.addr=0x74fa, .value=0xc0, .type=IO_READ},
        {.addr=0x01c0, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0096) {
    const struct CPU_State initial_cpu = {.pc=0x1c94, .a=0xc5, .x=0x51, .y=0x81, .sp=0x33, .status=0xc1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00dd, .value=0x55}, {.addr=0x1c94, .value=0x3e}, {.addr=0x1c95, .value=0xdd},
    };
    const struct CPU_State final_cpu = {.pc=0x1c96, .a=0xc5, .x=0x51, .y=0x81, .sp=0x33, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00dd, .value=0x55}, {.addr=0x1c94, .value=0x3e}, {.addr=0x1c95, .value=0xdd},
    };
    const struct BusEvent events[] = {
        {.addr=0x1c94, .value=0x3e, .type=IO_READ},
        {.addr=0x1c95, .value=0xdd, .type=IO_READ},
        {.addr=0x00dd, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0098) {
    const struct CPU_State initial_cpu = {.pc=0xea71, .a=0x8c, .x=0x9b, .y=0x81, .sp=0x05, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013e, .value=0xdf}, {.addr=0xea71, .value=0x3e}, {.addr=0xea72, .value=0x3e},
    };
    const struct CPU_State final_cpu = {.pc=0xea73, .a=0x8c, .x=0x9b, .y=0x81, .sp=0x05, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x013e, .value=0xdf}, {.addr=0xea71, .value=0x3e}, {.addr=0xea72, .value=0x3e},
    };
    const struct BusEvent events[] = {
        {.addr=0xea71, .value=0x3e, .type=IO_READ},
        {.addr=0xea72, .value=0x3e, .type=IO_READ},
        {.addr=0x013e, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0099) {
    const struct CPU_State initial_cpu = {.pc=0x1885, .a=0xab, .x=0xe1, .y=0x09, .sp=0x66, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e8, .value=0xd5}, {.addr=0x1885, .value=0x3e}, {.addr=0x1886, .value=0xe8},
    };
    const struct CPU_State final_cpu = {.pc=0x1887, .a=0xab, .x=0xe1, .y=0x09, .sp=0x66, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e8, .value=0xd5}, {.addr=0x1885, .value=0x3e}, {.addr=0x1886, .value=0xe8},
    };
    const struct BusEvent events[] = {
        {.addr=0x1885, .value=0x3e, .type=IO_READ},
        {.addr=0x1886, .value=0xe8, .type=IO_READ},
        {.addr=0x01e8, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_009A) {
    const struct CPU_State initial_cpu = {.pc=0x3ebc, .a=0xdc, .x=0xf7, .y=0x3f, .sp=0xda, .status=0x4f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001e, .value=0x19}, {.addr=0x3ebc, .value=0x3e}, {.addr=0x3ebd, .value=0x1e},
    };
    const struct CPU_State final_cpu = {.pc=0x3ebe, .a=0xdc, .x=0xf7, .y=0x3f, .sp=0xda, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x001e, .value=0x19}, {.addr=0x3ebc, .value=0x3e}, {.addr=0x3ebd, .value=0x1e},
    };
    const struct BusEvent events[] = {
        {.addr=0x3ebc, .value=0x3e, .type=IO_READ},
        {.addr=0x3ebd, .value=0x1e, .type=IO_READ},
        {.addr=0x001e, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_009B) {
    const struct CPU_State initial_cpu = {.pc=0xc11b, .a=0xfd, .x=0xd9, .y=0x15, .sp=0xff, .status=0xb7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e5, .value=0xff}, {.addr=0xc11b, .value=0x3e}, {.addr=0xc11c, .value=0xe5},
    };
    const struct CPU_State final_cpu = {.pc=0xc11d, .a=0xfd, .x=0xd9, .y=0x15, .sp=0xff, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e5, .value=0xff}, {.addr=0xc11b, .value=0x3e}, {.addr=0xc11c, .value=0xe5},
    };
    const struct BusEvent events[] = {
        {.addr=0xc11b, .value=0x3e, .type=IO_READ},
        {.addr=0xc11c, .value=0xe5, .type=IO_READ},
        {.addr=0x01e5, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_009D) {
    const struct CPU_State initial_cpu = {.pc=0x6593, .a=0x93, .x=0xaa, .y=0xfa, .sp=0x4b, .status=0x58};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c0, .value=0xf3}, {.addr=0x6593, .value=0x3e}, {.addr=0x6594, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0x6595, .a=0x93, .x=0xaa, .y=0xfa, .sp=0x4b, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c0, .value=0xf3}, {.addr=0x6593, .value=0x3e}, {.addr=0x6594, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0x6593, .value=0x3e, .type=IO_READ},
        {.addr=0x6594, .value=0xc0, .type=IO_READ},
        {.addr=0x00c0, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_009E) {
    const struct CPU_State initial_cpu = {.pc=0x044f, .a=0x17, .x=0x1b, .y=0x01, .sp=0xba, .status=0xc2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004e, .value=0x46}, {.addr=0x044f, .value=0x3e}, {.addr=0x0450, .value=0x4e},
    };
    const struct CPU_State final_cpu = {.pc=0x0451, .a=0x17, .x=0x1b, .y=0x01, .sp=0xba, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x004e, .value=0x46}, {.addr=0x044f, .value=0x3e}, {.addr=0x0450, .value=0x4e},
    };
    const struct BusEvent events[] = {
        {.addr=0x044f, .value=0x3e, .type=IO_READ},
        {.addr=0x0450, .value=0x4e, .type=IO_READ},
        {.addr=0x004e, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_009F) {
    const struct CPU_State initial_cpu = {.pc=0x5bc1, .a=0x36, .x=0x75, .y=0x5e, .sp=0x0a, .status=0xf1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bd, .value=0xeb}, {.addr=0x5bc1, .value=0x3e}, {.addr=0x5bc2, .value=0xbd},
    };
    const struct CPU_State final_cpu = {.pc=0x5bc3, .a=0x36, .x=0x75, .y=0x5e, .sp=0x0a, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bd, .value=0xeb}, {.addr=0x5bc1, .value=0x3e}, {.addr=0x5bc2, .value=0xbd},
    };
    const struct BusEvent events[] = {
        {.addr=0x5bc1, .value=0x3e, .type=IO_READ},
        {.addr=0x5bc2, .value=0xbd, .type=IO_READ},
        {.addr=0x01bd, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00A0) {
    const struct CPU_State initial_cpu = {.pc=0xd251, .a=0x8b, .x=0x04, .y=0x41, .sp=0x4a, .status=0x8c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ba, .value=0x40}, {.addr=0xd251, .value=0x3e}, {.addr=0xd252, .value=0xba},
    };
    const struct CPU_State final_cpu = {.pc=0xd253, .a=0x8b, .x=0x04, .y=0x41, .sp=0x4a, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ba, .value=0x40}, {.addr=0xd251, .value=0x3e}, {.addr=0xd252, .value=0xba},
    };
    const struct BusEvent events[] = {
        {.addr=0xd251, .value=0x3e, .type=IO_READ},
        {.addr=0xd252, .value=0xba, .type=IO_READ},
        {.addr=0x00ba, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00A1) {
    const struct CPU_State initial_cpu = {.pc=0xf713, .a=0x84, .x=0xc3, .y=0xbe, .sp=0x79, .status=0xc7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0029, .value=0xa5}, {.addr=0xf713, .value=0x3e}, {.addr=0xf714, .value=0x29},
    };
    const struct CPU_State final_cpu = {.pc=0xf715, .a=0x84, .x=0xc3, .y=0xbe, .sp=0x79, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x0029, .value=0xa5}, {.addr=0xf713, .value=0x3e}, {.addr=0xf714, .value=0x29},
    };
    const struct BusEvent events[] = {
        {.addr=0xf713, .value=0x3e, .type=IO_READ},
        {.addr=0xf714, .value=0x29, .type=IO_READ},
        {.addr=0x0029, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00A2) {
    const struct CPU_State initial_cpu = {.pc=0x3dbf, .a=0xf5, .x=0xd7, .y=0x30, .sp=0xf4, .status=0xde};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007c, .value=0x46}, {.addr=0x3dbf, .value=0x3e}, {.addr=0x3dc0, .value=0x7c},
    };
    const struct CPU_State final_cpu = {.pc=0x3dc1, .a=0xf5, .x=0xd7, .y=0x30, .sp=0xf4, .status=0xdd};
    const struct RamEntry final_ram[] = {
        {.addr=0x007c, .value=0x46}, {.addr=0x3dbf, .value=0x3e}, {.addr=0x3dc0, .value=0x7c},
    };
    const struct BusEvent events[] = {
        {.addr=0x3dbf, .value=0x3e, .type=IO_READ},
        {.addr=0x3dc0, .value=0x7c, .type=IO_READ},
        {.addr=0x007c, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00A3) {
    const struct CPU_State initial_cpu = {.pc=0x9acc, .a=0x54, .x=0xc9, .y=0xa1, .sp=0x5a, .status=0xb7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01da, .value=0x80}, {.addr=0x9acc, .value=0x3e}, {.addr=0x9acd, .value=0xda},
    };
    const struct CPU_State final_cpu = {.pc=0x9ace, .a=0x54, .x=0xc9, .y=0xa1, .sp=0x5a, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x01da, .value=0x80}, {.addr=0x9acc, .value=0x3e}, {.addr=0x9acd, .value=0xda},
    };
    const struct BusEvent events[] = {
        {.addr=0x9acc, .value=0x3e, .type=IO_READ},
        {.addr=0x9acd, .value=0xda, .type=IO_READ},
        {.addr=0x01da, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00A4) {
    const struct CPU_State initial_cpu = {.pc=0xac3b, .a=0x2e, .x=0x9a, .y=0x1f, .sp=0xa5, .status=0xcb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bf, .value=0x1c}, {.addr=0xac3b, .value=0x3e}, {.addr=0xac3c, .value=0xbf},
    };
    const struct CPU_State final_cpu = {.pc=0xac3d, .a=0x2e, .x=0x9a, .y=0x1f, .sp=0xa5, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bf, .value=0x1c}, {.addr=0xac3b, .value=0x3e}, {.addr=0xac3c, .value=0xbf},
    };
    const struct BusEvent events[] = {
        {.addr=0xac3b, .value=0x3e, .type=IO_READ},
        {.addr=0xac3c, .value=0xbf, .type=IO_READ},
        {.addr=0x00bf, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x91e2, .a=0x40, .x=0x06, .y=0xac, .sp=0xc1, .status=0x3d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fe, .value=0x46}, {.addr=0x91e2, .value=0x3e}, {.addr=0x91e3, .value=0xfe},
    };
    const struct CPU_State final_cpu = {.pc=0x91e4, .a=0x40, .x=0x06, .y=0xac, .sp=0xc1, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fe, .value=0x46}, {.addr=0x91e2, .value=0x3e}, {.addr=0x91e3, .value=0xfe},
    };
    const struct BusEvent events[] = {
        {.addr=0x91e2, .value=0x3e, .type=IO_READ},
        {.addr=0x91e3, .value=0xfe, .type=IO_READ},
        {.addr=0x01fe, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00A6) {
    const struct CPU_State initial_cpu = {.pc=0xfeb4, .a=0x6e, .x=0xe5, .y=0xa2, .sp=0xff, .status=0xe6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ac, .value=0x90}, {.addr=0xfeb4, .value=0x3e}, {.addr=0xfeb5, .value=0xac},
    };
    const struct CPU_State final_cpu = {.pc=0xfeb6, .a=0x6e, .x=0xe5, .y=0xa2, .sp=0xff, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ac, .value=0x90}, {.addr=0xfeb4, .value=0x3e}, {.addr=0xfeb5, .value=0xac},
    };
    const struct BusEvent events[] = {
        {.addr=0xfeb4, .value=0x3e, .type=IO_READ},
        {.addr=0xfeb5, .value=0xac, .type=IO_READ},
        {.addr=0x01ac, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x611c, .a=0x82, .x=0x7b, .y=0x36, .sp=0xcb, .status=0xa3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014b, .value=0xae}, {.addr=0x611c, .value=0x3e}, {.addr=0x611d, .value=0x4b},
    };
    const struct CPU_State final_cpu = {.pc=0x611e, .a=0x82, .x=0x7b, .y=0x36, .sp=0xcb, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x014b, .value=0xae}, {.addr=0x611c, .value=0x3e}, {.addr=0x611d, .value=0x4b},
    };
    const struct BusEvent events[] = {
        {.addr=0x611c, .value=0x3e, .type=IO_READ},
        {.addr=0x611d, .value=0x4b, .type=IO_READ},
        {.addr=0x014b, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x7105, .a=0x89, .x=0xad, .y=0x90, .sp=0x8d, .status=0xea};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ed, .value=0x95}, {.addr=0x7105, .value=0x3e}, {.addr=0x7106, .value=0xed},
    };
    const struct CPU_State final_cpu = {.pc=0x7107, .a=0x89, .x=0xad, .y=0x90, .sp=0x8d, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ed, .value=0x95}, {.addr=0x7105, .value=0x3e}, {.addr=0x7106, .value=0xed},
    };
    const struct BusEvent events[] = {
        {.addr=0x7105, .value=0x3e, .type=IO_READ},
        {.addr=0x7106, .value=0xed, .type=IO_READ},
        {.addr=0x01ed, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x1c16, .a=0x84, .x=0x21, .y=0x17, .sp=0x9a, .status=0xeb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d3, .value=0x3e}, {.addr=0x1c16, .value=0x3e}, {.addr=0x1c17, .value=0xd3},
    };
    const struct CPU_State final_cpu = {.pc=0x1c18, .a=0x84, .x=0x21, .y=0x17, .sp=0x9a, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d3, .value=0x3e}, {.addr=0x1c16, .value=0x3e}, {.addr=0x1c17, .value=0xd3},
    };
    const struct BusEvent events[] = {
        {.addr=0x1c16, .value=0x3e, .type=IO_READ},
        {.addr=0x1c17, .value=0xd3, .type=IO_READ},
        {.addr=0x01d3, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x54b5, .a=0xf6, .x=0x36, .y=0x85, .sp=0xd1, .status=0x4b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e3, .value=0x57}, {.addr=0x54b5, .value=0x3e}, {.addr=0x54b6, .value=0xe3},
    };
    const struct CPU_State final_cpu = {.pc=0x54b7, .a=0xf6, .x=0x36, .y=0x85, .sp=0xd1, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e3, .value=0x57}, {.addr=0x54b5, .value=0x3e}, {.addr=0x54b6, .value=0xe3},
    };
    const struct BusEvent events[] = {
        {.addr=0x54b5, .value=0x3e, .type=IO_READ},
        {.addr=0x54b6, .value=0xe3, .type=IO_READ},
        {.addr=0x00e3, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00AC) {
    const struct CPU_State initial_cpu = {.pc=0xbd2a, .a=0x5e, .x=0xb9, .y=0x25, .sp=0xc9, .status=0x7c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016b, .value=0x9d}, {.addr=0xbd2a, .value=0x3e}, {.addr=0xbd2b, .value=0x6b},
    };
    const struct CPU_State final_cpu = {.pc=0xbd2c, .a=0x5e, .x=0xb9, .y=0x25, .sp=0xc9, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x016b, .value=0x9d}, {.addr=0xbd2a, .value=0x3e}, {.addr=0xbd2b, .value=0x6b},
    };
    const struct BusEvent events[] = {
        {.addr=0xbd2a, .value=0x3e, .type=IO_READ},
        {.addr=0xbd2b, .value=0x6b, .type=IO_READ},
        {.addr=0x016b, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00AD) {
    const struct CPU_State initial_cpu = {.pc=0xbe46, .a=0xac, .x=0x1d, .y=0xed, .sp=0xfb, .status=0x48};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0005, .value=0xe3}, {.addr=0xbe46, .value=0x3e}, {.addr=0xbe47, .value=0x05},
    };
    const struct CPU_State final_cpu = {.pc=0xbe48, .a=0xac, .x=0x1d, .y=0xed, .sp=0xfb, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x0005, .value=0xe3}, {.addr=0xbe46, .value=0x3e}, {.addr=0xbe47, .value=0x05},
    };
    const struct BusEvent events[] = {
        {.addr=0xbe46, .value=0x3e, .type=IO_READ},
        {.addr=0xbe47, .value=0x05, .type=IO_READ},
        {.addr=0x0005, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00AE) {
    const struct CPU_State initial_cpu = {.pc=0x3a84, .a=0xe3, .x=0xfd, .y=0x65, .sp=0x15, .status=0xc9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0048, .value=0xe6}, {.addr=0x3a84, .value=0x3e}, {.addr=0x3a85, .value=0x48},
    };
    const struct CPU_State final_cpu = {.pc=0x3a86, .a=0xe3, .x=0xfd, .y=0x65, .sp=0x15, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x0048, .value=0xe6}, {.addr=0x3a84, .value=0x3e}, {.addr=0x3a85, .value=0x48},
    };
    const struct BusEvent events[] = {
        {.addr=0x3a84, .value=0x3e, .type=IO_READ},
        {.addr=0x3a85, .value=0x48, .type=IO_READ},
        {.addr=0x0048, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00AF) {
    const struct CPU_State initial_cpu = {.pc=0xc735, .a=0x3e, .x=0xee, .y=0x34, .sp=0x83, .status=0x2a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0139, .value=0xbd}, {.addr=0xc735, .value=0x3e}, {.addr=0xc736, .value=0x39},
    };
    const struct CPU_State final_cpu = {.pc=0xc737, .a=0x3e, .x=0xee, .y=0x34, .sp=0x83, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x0139, .value=0xbd}, {.addr=0xc735, .value=0x3e}, {.addr=0xc736, .value=0x39},
    };
    const struct BusEvent events[] = {
        {.addr=0xc735, .value=0x3e, .type=IO_READ},
        {.addr=0xc736, .value=0x39, .type=IO_READ},
        {.addr=0x0139, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00B0) {
    const struct CPU_State initial_cpu = {.pc=0x8a6e, .a=0x02, .x=0x27, .y=0xa1, .sp=0x3f, .status=0xb0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0146, .value=0x0c}, {.addr=0x8a6e, .value=0x3e}, {.addr=0x8a6f, .value=0x46},
    };
    const struct CPU_State final_cpu = {.pc=0x8a70, .a=0x02, .x=0x27, .y=0xa1, .sp=0x3f, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0146, .value=0x0c}, {.addr=0x8a6e, .value=0x3e}, {.addr=0x8a6f, .value=0x46},
    };
    const struct BusEvent events[] = {
        {.addr=0x8a6e, .value=0x3e, .type=IO_READ},
        {.addr=0x8a6f, .value=0x46, .type=IO_READ},
        {.addr=0x0146, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00B1) {
    const struct CPU_State initial_cpu = {.pc=0xe375, .a=0xf9, .x=0xc6, .y=0x55, .sp=0xba, .status=0xf5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f1, .value=0xe9}, {.addr=0xe375, .value=0x3e}, {.addr=0xe376, .value=0xf1},
    };
    const struct CPU_State final_cpu = {.pc=0xe377, .a=0xf9, .x=0xc6, .y=0x55, .sp=0xba, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f1, .value=0xe9}, {.addr=0xe375, .value=0x3e}, {.addr=0xe376, .value=0xf1},
    };
    const struct BusEvent events[] = {
        {.addr=0xe375, .value=0x3e, .type=IO_READ},
        {.addr=0xe376, .value=0xf1, .type=IO_READ},
        {.addr=0x01f1, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00B2) {
    const struct CPU_State initial_cpu = {.pc=0xf25c, .a=0x83, .x=0x71, .y=0x73, .sp=0x4a, .status=0xda};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003c, .value=0xa3}, {.addr=0xf25c, .value=0x3e}, {.addr=0xf25d, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0xf25e, .a=0x83, .x=0x71, .y=0x73, .sp=0x4a, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x003c, .value=0xa3}, {.addr=0xf25c, .value=0x3e}, {.addr=0xf25d, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0xf25c, .value=0x3e, .type=IO_READ},
        {.addr=0xf25d, .value=0x3c, .type=IO_READ},
        {.addr=0x003c, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00B3) {
    const struct CPU_State initial_cpu = {.pc=0x8cf8, .a=0xe1, .x=0xde, .y=0x3c, .sp=0x62, .status=0x3d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bc, .value=0x65}, {.addr=0x8cf8, .value=0x3e}, {.addr=0x8cf9, .value=0xbc},
    };
    const struct CPU_State final_cpu = {.pc=0x8cfa, .a=0xe1, .x=0xde, .y=0x3c, .sp=0x62, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bc, .value=0x65}, {.addr=0x8cf8, .value=0x3e}, {.addr=0x8cf9, .value=0xbc},
    };
    const struct BusEvent events[] = {
        {.addr=0x8cf8, .value=0x3e, .type=IO_READ},
        {.addr=0x8cf9, .value=0xbc, .type=IO_READ},
        {.addr=0x01bc, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00B4) {
    const struct CPU_State initial_cpu = {.pc=0xa687, .a=0x79, .x=0xb5, .y=0x3b, .sp=0xa0, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0123, .value=0xd2}, {.addr=0xa687, .value=0x3e}, {.addr=0xa688, .value=0x23},
    };
    const struct CPU_State final_cpu = {.pc=0xa689, .a=0x79, .x=0xb5, .y=0x3b, .sp=0xa0, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0123, .value=0xd2}, {.addr=0xa687, .value=0x3e}, {.addr=0xa688, .value=0x23},
    };
    const struct BusEvent events[] = {
        {.addr=0xa687, .value=0x3e, .type=IO_READ},
        {.addr=0xa688, .value=0x23, .type=IO_READ},
        {.addr=0x0123, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00B5) {
    const struct CPU_State initial_cpu = {.pc=0x2cac, .a=0xf7, .x=0xd5, .y=0x39, .sp=0x96, .status=0xde};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0082, .value=0xb7}, {.addr=0x2cac, .value=0x3e}, {.addr=0x2cad, .value=0x82},
    };
    const struct CPU_State final_cpu = {.pc=0x2cae, .a=0xf7, .x=0xd5, .y=0x39, .sp=0x96, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0082, .value=0xb7}, {.addr=0x2cac, .value=0x3e}, {.addr=0x2cad, .value=0x82},
    };
    const struct BusEvent events[] = {
        {.addr=0x2cac, .value=0x3e, .type=IO_READ},
        {.addr=0x2cad, .value=0x82, .type=IO_READ},
        {.addr=0x0082, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00B6) {
    const struct CPU_State initial_cpu = {.pc=0xf87b, .a=0x95, .x=0x2f, .y=0xcd, .sp=0xb9, .status=0xc3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0054, .value=0x45}, {.addr=0xf87b, .value=0x3e}, {.addr=0xf87c, .value=0x54},
    };
    const struct CPU_State final_cpu = {.pc=0xf87d, .a=0x95, .x=0x2f, .y=0xcd, .sp=0xb9, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0054, .value=0x45}, {.addr=0xf87b, .value=0x3e}, {.addr=0xf87c, .value=0x54},
    };
    const struct BusEvent events[] = {
        {.addr=0xf87b, .value=0x3e, .type=IO_READ},
        {.addr=0xf87c, .value=0x54, .type=IO_READ},
        {.addr=0x0054, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x72e8, .a=0x30, .x=0x2b, .y=0x26, .sp=0x85, .status=0x9e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0072, .value=0x8a}, {.addr=0x72e8, .value=0x3e}, {.addr=0x72e9, .value=0x72},
    };
    const struct CPU_State final_cpu = {.pc=0x72ea, .a=0x30, .x=0x2b, .y=0x26, .sp=0x85, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0072, .value=0x8a}, {.addr=0x72e8, .value=0x3e}, {.addr=0x72e9, .value=0x72},
    };
    const struct BusEvent events[] = {
        {.addr=0x72e8, .value=0x3e, .type=IO_READ},
        {.addr=0x72e9, .value=0x72, .type=IO_READ},
        {.addr=0x0072, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00B8) {
    const struct CPU_State initial_cpu = {.pc=0x1a00, .a=0x48, .x=0xb6, .y=0x88, .sp=0x67, .status=0xfe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c4, .value=0x28}, {.addr=0x1a00, .value=0x3e}, {.addr=0x1a01, .value=0xc4},
    };
    const struct CPU_State final_cpu = {.pc=0x1a02, .a=0x48, .x=0xb6, .y=0x88, .sp=0x67, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c4, .value=0x28}, {.addr=0x1a00, .value=0x3e}, {.addr=0x1a01, .value=0xc4},
    };
    const struct BusEvent events[] = {
        {.addr=0x1a00, .value=0x3e, .type=IO_READ},
        {.addr=0x1a01, .value=0xc4, .type=IO_READ},
        {.addr=0x01c4, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00B9) {
    const struct CPU_State initial_cpu = {.pc=0xc3ab, .a=0x75, .x=0x9b, .y=0xc2, .sp=0xfe, .status=0x05};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002f, .value=0x13}, {.addr=0xc3ab, .value=0x3e}, {.addr=0xc3ac, .value=0x2f},
    };
    const struct CPU_State final_cpu = {.pc=0xc3ad, .a=0x75, .x=0x9b, .y=0xc2, .sp=0xfe, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x002f, .value=0x13}, {.addr=0xc3ab, .value=0x3e}, {.addr=0xc3ac, .value=0x2f},
    };
    const struct BusEvent events[] = {
        {.addr=0xc3ab, .value=0x3e, .type=IO_READ},
        {.addr=0xc3ac, .value=0x2f, .type=IO_READ},
        {.addr=0x002f, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00BA) {
    const struct CPU_State initial_cpu = {.pc=0x3a36, .a=0xd3, .x=0xb5, .y=0x8c, .sp=0x5f, .status=0x57};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0028, .value=0xdb}, {.addr=0x3a36, .value=0x3e}, {.addr=0x3a37, .value=0x28},
    };
    const struct CPU_State final_cpu = {.pc=0x3a38, .a=0xd3, .x=0xb5, .y=0x8c, .sp=0x5f, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0028, .value=0xdb}, {.addr=0x3a36, .value=0x3e}, {.addr=0x3a37, .value=0x28},
    };
    const struct BusEvent events[] = {
        {.addr=0x3a36, .value=0x3e, .type=IO_READ},
        {.addr=0x3a37, .value=0x28, .type=IO_READ},
        {.addr=0x0028, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00BB) {
    const struct CPU_State initial_cpu = {.pc=0x6eaa, .a=0x1a, .x=0x10, .y=0x97, .sp=0xde, .status=0xf1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0193, .value=0xf9}, {.addr=0x6eaa, .value=0x3e}, {.addr=0x6eab, .value=0x93},
    };
    const struct CPU_State final_cpu = {.pc=0x6eac, .a=0x1a, .x=0x10, .y=0x97, .sp=0xde, .status=0x70};
    const struct RamEntry final_ram[] = {
        {.addr=0x0193, .value=0xf9}, {.addr=0x6eaa, .value=0x3e}, {.addr=0x6eab, .value=0x93},
    };
    const struct BusEvent events[] = {
        {.addr=0x6eaa, .value=0x3e, .type=IO_READ},
        {.addr=0x6eab, .value=0x93, .type=IO_READ},
        {.addr=0x0193, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x0c08, .a=0x48, .x=0x9c, .y=0xca, .sp=0x86, .status=0x77};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0151, .value=0xcf}, {.addr=0x0c08, .value=0x3e}, {.addr=0x0c09, .value=0x51},
    };
    const struct CPU_State final_cpu = {.pc=0x0c0a, .a=0x48, .x=0x9c, .y=0xca, .sp=0x86, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0151, .value=0xcf}, {.addr=0x0c08, .value=0x3e}, {.addr=0x0c09, .value=0x51},
    };
    const struct BusEvent events[] = {
        {.addr=0x0c08, .value=0x3e, .type=IO_READ},
        {.addr=0x0c09, .value=0x51, .type=IO_READ},
        {.addr=0x0151, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00BD) {
    const struct CPU_State initial_cpu = {.pc=0x739c, .a=0x87, .x=0xcc, .y=0x22, .sp=0xc5, .status=0xb5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f0, .value=0xee}, {.addr=0x739c, .value=0x3e}, {.addr=0x739d, .value=0xf0},
    };
    const struct CPU_State final_cpu = {.pc=0x739e, .a=0x87, .x=0xcc, .y=0x22, .sp=0xc5, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f0, .value=0xee}, {.addr=0x739c, .value=0x3e}, {.addr=0x739d, .value=0xf0},
    };
    const struct BusEvent events[] = {
        {.addr=0x739c, .value=0x3e, .type=IO_READ},
        {.addr=0x739d, .value=0xf0, .type=IO_READ},
        {.addr=0x01f0, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00BE) {
    const struct CPU_State initial_cpu = {.pc=0xeee1, .a=0x9f, .x=0x71, .y=0x05, .sp=0xa1, .status=0x45};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00be, .value=0x36}, {.addr=0xeee1, .value=0x3e}, {.addr=0xeee2, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0xeee3, .a=0x9f, .x=0x71, .y=0x05, .sp=0xa1, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x00be, .value=0x36}, {.addr=0xeee1, .value=0x3e}, {.addr=0xeee2, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0xeee1, .value=0x3e, .type=IO_READ},
        {.addr=0xeee2, .value=0xbe, .type=IO_READ},
        {.addr=0x00be, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00BF) {
    const struct CPU_State initial_cpu = {.pc=0xdf17, .a=0x47, .x=0xfc, .y=0xae, .sp=0x71, .status=0xc6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0014, .value=0x71}, {.addr=0xdf17, .value=0x3e}, {.addr=0xdf18, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0xdf19, .a=0x47, .x=0xfc, .y=0xae, .sp=0x71, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0014, .value=0x71}, {.addr=0xdf17, .value=0x3e}, {.addr=0xdf18, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0xdf17, .value=0x3e, .type=IO_READ},
        {.addr=0xdf18, .value=0x14, .type=IO_READ},
        {.addr=0x0014, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00C0) {
    const struct CPU_State initial_cpu = {.pc=0xeb1f, .a=0xf9, .x=0x62, .y=0xdf, .sp=0xd8, .status=0x9d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008b, .value=0x47}, {.addr=0xeb1f, .value=0x3e}, {.addr=0xeb20, .value=0x8b},
    };
    const struct CPU_State final_cpu = {.pc=0xeb21, .a=0xf9, .x=0x62, .y=0xdf, .sp=0xd8, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x008b, .value=0x47}, {.addr=0xeb1f, .value=0x3e}, {.addr=0xeb20, .value=0x8b},
    };
    const struct BusEvent events[] = {
        {.addr=0xeb1f, .value=0x3e, .type=IO_READ},
        {.addr=0xeb20, .value=0x8b, .type=IO_READ},
        {.addr=0x008b, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00C1) {
    const struct CPU_State initial_cpu = {.pc=0x5453, .a=0xd7, .x=0x9a, .y=0x13, .sp=0xc5, .status=0x2a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0127, .value=0xa2}, {.addr=0x5453, .value=0x3e}, {.addr=0x5454, .value=0x27},
    };
    const struct CPU_State final_cpu = {.pc=0x5455, .a=0xd7, .x=0x9a, .y=0x13, .sp=0xc5, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0127, .value=0xa2}, {.addr=0x5453, .value=0x3e}, {.addr=0x5454, .value=0x27},
    };
    const struct BusEvent events[] = {
        {.addr=0x5453, .value=0x3e, .type=IO_READ},
        {.addr=0x5454, .value=0x27, .type=IO_READ},
        {.addr=0x0127, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00C2) {
    const struct CPU_State initial_cpu = {.pc=0xbaaa, .a=0x72, .x=0x43, .y=0x68, .sp=0xd4, .status=0x2d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bd, .value=0xbb}, {.addr=0xbaaa, .value=0x3e}, {.addr=0xbaab, .value=0xbd},
    };
    const struct CPU_State final_cpu = {.pc=0xbaac, .a=0x72, .x=0x43, .y=0x68, .sp=0xd4, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bd, .value=0xbb}, {.addr=0xbaaa, .value=0x3e}, {.addr=0xbaab, .value=0xbd},
    };
    const struct BusEvent events[] = {
        {.addr=0xbaaa, .value=0x3e, .type=IO_READ},
        {.addr=0xbaab, .value=0xbd, .type=IO_READ},
        {.addr=0x01bd, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00C4) {
    const struct CPU_State initial_cpu = {.pc=0xb5a3, .a=0x88, .x=0xdd, .y=0xb1, .sp=0x0b, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c3, .value=0x6e}, {.addr=0xb5a3, .value=0x3e}, {.addr=0xb5a4, .value=0xc3},
    };
    const struct CPU_State final_cpu = {.pc=0xb5a5, .a=0x88, .x=0xdd, .y=0xb1, .sp=0x0b, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c3, .value=0x6e}, {.addr=0xb5a3, .value=0x3e}, {.addr=0xb5a4, .value=0xc3},
    };
    const struct BusEvent events[] = {
        {.addr=0xb5a3, .value=0x3e, .type=IO_READ},
        {.addr=0xb5a4, .value=0xc3, .type=IO_READ},
        {.addr=0x00c3, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00C5) {
    const struct CPU_State initial_cpu = {.pc=0xa105, .a=0x04, .x=0xe8, .y=0x12, .sp=0x0b, .status=0x2f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014a, .value=0x66}, {.addr=0xa105, .value=0x3e}, {.addr=0xa106, .value=0x4a},
    };
    const struct CPU_State final_cpu = {.pc=0xa107, .a=0x04, .x=0xe8, .y=0x12, .sp=0x0b, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x014a, .value=0x66}, {.addr=0xa105, .value=0x3e}, {.addr=0xa106, .value=0x4a},
    };
    const struct BusEvent events[] = {
        {.addr=0xa105, .value=0x3e, .type=IO_READ},
        {.addr=0xa106, .value=0x4a, .type=IO_READ},
        {.addr=0x014a, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00C6) {
    const struct CPU_State initial_cpu = {.pc=0x90d5, .a=0x09, .x=0x17, .y=0xea, .sp=0x45, .status=0x93};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d7, .value=0xb1}, {.addr=0x90d5, .value=0x3e}, {.addr=0x90d6, .value=0xd7},
    };
    const struct CPU_State final_cpu = {.pc=0x90d7, .a=0x09, .x=0x17, .y=0xea, .sp=0x45, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d7, .value=0xb1}, {.addr=0x90d5, .value=0x3e}, {.addr=0x90d6, .value=0xd7},
    };
    const struct BusEvent events[] = {
        {.addr=0x90d5, .value=0x3e, .type=IO_READ},
        {.addr=0x90d6, .value=0xd7, .type=IO_READ},
        {.addr=0x00d7, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00C7) {
    const struct CPU_State initial_cpu = {.pc=0x37a1, .a=0x5e, .x=0xad, .y=0xdb, .sp=0x79, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004e, .value=0xb3}, {.addr=0x37a1, .value=0x3e}, {.addr=0x37a2, .value=0x4e},
    };
    const struct CPU_State final_cpu = {.pc=0x37a3, .a=0x5e, .x=0xad, .y=0xdb, .sp=0x79, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x004e, .value=0xb3}, {.addr=0x37a1, .value=0x3e}, {.addr=0x37a2, .value=0x4e},
    };
    const struct BusEvent events[] = {
        {.addr=0x37a1, .value=0x3e, .type=IO_READ},
        {.addr=0x37a2, .value=0x4e, .type=IO_READ},
        {.addr=0x004e, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00C8) {
    const struct CPU_State initial_cpu = {.pc=0x3f7e, .a=0x20, .x=0x06, .y=0xf7, .sp=0x35, .status=0x79};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e8, .value=0xd9}, {.addr=0x3f7e, .value=0x3e}, {.addr=0x3f7f, .value=0xe8},
    };
    const struct CPU_State final_cpu = {.pc=0x3f80, .a=0x20, .x=0x06, .y=0xf7, .sp=0x35, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e8, .value=0xd9}, {.addr=0x3f7e, .value=0x3e}, {.addr=0x3f7f, .value=0xe8},
    };
    const struct BusEvent events[] = {
        {.addr=0x3f7e, .value=0x3e, .type=IO_READ},
        {.addr=0x3f7f, .value=0xe8, .type=IO_READ},
        {.addr=0x01e8, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00C9) {
    const struct CPU_State initial_cpu = {.pc=0x2b31, .a=0x4f, .x=0x56, .y=0x05, .sp=0xb8, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ef, .value=0x12}, {.addr=0x2b31, .value=0x3e}, {.addr=0x2b32, .value=0xef},
    };
    const struct CPU_State final_cpu = {.pc=0x2b33, .a=0x4f, .x=0x56, .y=0x05, .sp=0xb8, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ef, .value=0x12}, {.addr=0x2b31, .value=0x3e}, {.addr=0x2b32, .value=0xef},
    };
    const struct BusEvent events[] = {
        {.addr=0x2b31, .value=0x3e, .type=IO_READ},
        {.addr=0x2b32, .value=0xef, .type=IO_READ},
        {.addr=0x01ef, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00CA) {
    const struct CPU_State initial_cpu = {.pc=0x1e60, .a=0x8c, .x=0xa9, .y=0x2f, .sp=0xb5, .status=0x47};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006d, .value=0x96}, {.addr=0x1e60, .value=0x3e}, {.addr=0x1e61, .value=0x6d},
    };
    const struct CPU_State final_cpu = {.pc=0x1e62, .a=0x8c, .x=0xa9, .y=0x2f, .sp=0xb5, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x006d, .value=0x96}, {.addr=0x1e60, .value=0x3e}, {.addr=0x1e61, .value=0x6d},
    };
    const struct BusEvent events[] = {
        {.addr=0x1e60, .value=0x3e, .type=IO_READ},
        {.addr=0x1e61, .value=0x6d, .type=IO_READ},
        {.addr=0x006d, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x27b1, .a=0x20, .x=0xc9, .y=0xbf, .sp=0x07, .status=0x26};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0146, .value=0xab}, {.addr=0x27b1, .value=0x3e}, {.addr=0x27b2, .value=0x46},
    };
    const struct CPU_State final_cpu = {.pc=0x27b3, .a=0x20, .x=0xc9, .y=0xbf, .sp=0x07, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x0146, .value=0xab}, {.addr=0x27b1, .value=0x3e}, {.addr=0x27b2, .value=0x46},
    };
    const struct BusEvent events[] = {
        {.addr=0x27b1, .value=0x3e, .type=IO_READ},
        {.addr=0x27b2, .value=0x46, .type=IO_READ},
        {.addr=0x0146, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00CC) {
    const struct CPU_State initial_cpu = {.pc=0xa2eb, .a=0x01, .x=0x02, .y=0x33, .sp=0xfc, .status=0xca};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001d, .value=0xde}, {.addr=0xa2eb, .value=0x3e}, {.addr=0xa2ec, .value=0x1d},
    };
    const struct CPU_State final_cpu = {.pc=0xa2ed, .a=0x01, .x=0x02, .y=0x33, .sp=0xfc, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x001d, .value=0xde}, {.addr=0xa2eb, .value=0x3e}, {.addr=0xa2ec, .value=0x1d},
    };
    const struct BusEvent events[] = {
        {.addr=0xa2eb, .value=0x3e, .type=IO_READ},
        {.addr=0xa2ec, .value=0x1d, .type=IO_READ},
        {.addr=0x001d, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00CD) {
    const struct CPU_State initial_cpu = {.pc=0xb869, .a=0x5a, .x=0x84, .y=0xf0, .sp=0x4f, .status=0xc7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0000, .value=0xef}, {.addr=0xb869, .value=0x3e}, {.addr=0xb86a, .value=0x00},
    };
    const struct CPU_State final_cpu = {.pc=0xb86b, .a=0x5a, .x=0x84, .y=0xf0, .sp=0x4f, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0000, .value=0xef}, {.addr=0xb869, .value=0x3e}, {.addr=0xb86a, .value=0x00},
    };
    const struct BusEvent events[] = {
        {.addr=0xb869, .value=0x3e, .type=IO_READ},
        {.addr=0xb86a, .value=0x00, .type=IO_READ},
        {.addr=0x0000, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x0fbf, .a=0x76, .x=0x8c, .y=0x12, .sp=0x59, .status=0x94};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0016, .value=0x43}, {.addr=0x0fbf, .value=0x3e}, {.addr=0x0fc0, .value=0x16},
    };
    const struct CPU_State final_cpu = {.pc=0x0fc1, .a=0x76, .x=0x8c, .y=0x12, .sp=0x59, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x0016, .value=0x43}, {.addr=0x0fbf, .value=0x3e}, {.addr=0x0fc0, .value=0x16},
    };
    const struct BusEvent events[] = {
        {.addr=0x0fbf, .value=0x3e, .type=IO_READ},
        {.addr=0x0fc0, .value=0x16, .type=IO_READ},
        {.addr=0x0016, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00CF) {
    const struct CPU_State initial_cpu = {.pc=0xf280, .a=0x9c, .x=0xb1, .y=0x4b, .sp=0xa5, .status=0xda};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0009, .value=0xa6}, {.addr=0xf280, .value=0x3e}, {.addr=0xf281, .value=0x09},
    };
    const struct CPU_State final_cpu = {.pc=0xf282, .a=0x9c, .x=0xb1, .y=0x4b, .sp=0xa5, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x0009, .value=0xa6}, {.addr=0xf280, .value=0x3e}, {.addr=0xf281, .value=0x09},
    };
    const struct BusEvent events[] = {
        {.addr=0xf280, .value=0x3e, .type=IO_READ},
        {.addr=0xf281, .value=0x09, .type=IO_READ},
        {.addr=0x0009, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00D0) {
    const struct CPU_State initial_cpu = {.pc=0xc341, .a=0x6f, .x=0xa9, .y=0x31, .sp=0x15, .status=0xf0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017b, .value=0x66}, {.addr=0xc341, .value=0x3e}, {.addr=0xc342, .value=0x7b},
    };
    const struct CPU_State final_cpu = {.pc=0xc343, .a=0x6f, .x=0xa9, .y=0x31, .sp=0x15, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x017b, .value=0x66}, {.addr=0xc341, .value=0x3e}, {.addr=0xc342, .value=0x7b},
    };
    const struct BusEvent events[] = {
        {.addr=0xc341, .value=0x3e, .type=IO_READ},
        {.addr=0xc342, .value=0x7b, .type=IO_READ},
        {.addr=0x017b, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00D1) {
    const struct CPU_State initial_cpu = {.pc=0xb3b9, .a=0x7a, .x=0xad, .y=0x92, .sp=0xc2, .status=0x14};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0063, .value=0xe7}, {.addr=0xb3b9, .value=0x3e}, {.addr=0xb3ba, .value=0x63},
    };
    const struct CPU_State final_cpu = {.pc=0xb3bb, .a=0x7a, .x=0xad, .y=0x92, .sp=0xc2, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0063, .value=0xe7}, {.addr=0xb3b9, .value=0x3e}, {.addr=0xb3ba, .value=0x63},
    };
    const struct BusEvent events[] = {
        {.addr=0xb3b9, .value=0x3e, .type=IO_READ},
        {.addr=0xb3ba, .value=0x63, .type=IO_READ},
        {.addr=0x0063, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00D3) {
    const struct CPU_State initial_cpu = {.pc=0x4556, .a=0x42, .x=0x70, .y=0x0f, .sp=0x59, .status=0xdb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e3, .value=0x73}, {.addr=0x4556, .value=0x3e}, {.addr=0x4557, .value=0xe3},
    };
    const struct CPU_State final_cpu = {.pc=0x4558, .a=0x42, .x=0x70, .y=0x0f, .sp=0x59, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e3, .value=0x73}, {.addr=0x4556, .value=0x3e}, {.addr=0x4557, .value=0xe3},
    };
    const struct BusEvent events[] = {
        {.addr=0x4556, .value=0x3e, .type=IO_READ},
        {.addr=0x4557, .value=0xe3, .type=IO_READ},
        {.addr=0x00e3, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00D4) {
    const struct CPU_State initial_cpu = {.pc=0x9074, .a=0x09, .x=0xb6, .y=0xc2, .sp=0x3e, .status=0x57};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0054, .value=0x07}, {.addr=0x9074, .value=0x3e}, {.addr=0x9075, .value=0x54},
    };
    const struct CPU_State final_cpu = {.pc=0x9076, .a=0x09, .x=0xb6, .y=0xc2, .sp=0x3e, .status=0xd5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0054, .value=0x07}, {.addr=0x9074, .value=0x3e}, {.addr=0x9075, .value=0x54},
    };
    const struct BusEvent events[] = {
        {.addr=0x9074, .value=0x3e, .type=IO_READ},
        {.addr=0x9075, .value=0x54, .type=IO_READ},
        {.addr=0x0054, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00D5) {
    const struct CPU_State initial_cpu = {.pc=0x8d1b, .a=0xb6, .x=0x93, .y=0x20, .sp=0x52, .status=0x71};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b8, .value=0xc4}, {.addr=0x8d1b, .value=0x3e}, {.addr=0x8d1c, .value=0xb8},
    };
    const struct CPU_State final_cpu = {.pc=0x8d1d, .a=0xb6, .x=0x93, .y=0x20, .sp=0x52, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b8, .value=0xc4}, {.addr=0x8d1b, .value=0x3e}, {.addr=0x8d1c, .value=0xb8},
    };
    const struct BusEvent events[] = {
        {.addr=0x8d1b, .value=0x3e, .type=IO_READ},
        {.addr=0x8d1c, .value=0xb8, .type=IO_READ},
        {.addr=0x01b8, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00D6) {
    const struct CPU_State initial_cpu = {.pc=0xd41a, .a=0xb0, .x=0x85, .y=0x70, .sp=0x29, .status=0x6c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ac, .value=0xea}, {.addr=0xd41a, .value=0x3e}, {.addr=0xd41b, .value=0xac},
    };
    const struct CPU_State final_cpu = {.pc=0xd41c, .a=0xb0, .x=0x85, .y=0x70, .sp=0x29, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ac, .value=0xea}, {.addr=0xd41a, .value=0x3e}, {.addr=0xd41b, .value=0xac},
    };
    const struct BusEvent events[] = {
        {.addr=0xd41a, .value=0x3e, .type=IO_READ},
        {.addr=0xd41b, .value=0xac, .type=IO_READ},
        {.addr=0x01ac, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00D7) {
    const struct CPU_State initial_cpu = {.pc=0x9f16, .a=0xcd, .x=0x42, .y=0xe5, .sp=0x2b, .status=0x60};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0141, .value=0x58}, {.addr=0x9f16, .value=0x3e}, {.addr=0x9f17, .value=0x41},
    };
    const struct CPU_State final_cpu = {.pc=0x9f18, .a=0xcd, .x=0x42, .y=0xe5, .sp=0x2b, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0141, .value=0x58}, {.addr=0x9f16, .value=0x3e}, {.addr=0x9f17, .value=0x41},
    };
    const struct BusEvent events[] = {
        {.addr=0x9f16, .value=0x3e, .type=IO_READ},
        {.addr=0x9f17, .value=0x41, .type=IO_READ},
        {.addr=0x0141, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00D8) {
    const struct CPU_State initial_cpu = {.pc=0xea36, .a=0x13, .x=0x89, .y=0xf4, .sp=0x5f, .status=0xbb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0155, .value=0x98}, {.addr=0xea36, .value=0x3e}, {.addr=0xea37, .value=0x55},
    };
    const struct CPU_State final_cpu = {.pc=0xea38, .a=0x13, .x=0x89, .y=0xf4, .sp=0x5f, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0155, .value=0x98}, {.addr=0xea36, .value=0x3e}, {.addr=0xea37, .value=0x55},
    };
    const struct BusEvent events[] = {
        {.addr=0xea36, .value=0x3e, .type=IO_READ},
        {.addr=0xea37, .value=0x55, .type=IO_READ},
        {.addr=0x0155, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00D9) {
    const struct CPU_State initial_cpu = {.pc=0x6ddc, .a=0xe7, .x=0x13, .y=0x24, .sp=0x83, .status=0x39};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f8, .value=0x57}, {.addr=0x6ddc, .value=0x3e}, {.addr=0x6ddd, .value=0xf8},
    };
    const struct CPU_State final_cpu = {.pc=0x6dde, .a=0xe7, .x=0x13, .y=0x24, .sp=0x83, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f8, .value=0x57}, {.addr=0x6ddc, .value=0x3e}, {.addr=0x6ddd, .value=0xf8},
    };
    const struct BusEvent events[] = {
        {.addr=0x6ddc, .value=0x3e, .type=IO_READ},
        {.addr=0x6ddd, .value=0xf8, .type=IO_READ},
        {.addr=0x01f8, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00DA) {
    const struct CPU_State initial_cpu = {.pc=0x9b2f, .a=0x8e, .x=0x76, .y=0x84, .sp=0x05, .status=0xfd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015e, .value=0xe5}, {.addr=0x9b2f, .value=0x3e}, {.addr=0x9b30, .value=0x5e},
    };
    const struct CPU_State final_cpu = {.pc=0x9b31, .a=0x8e, .x=0x76, .y=0x84, .sp=0x05, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x015e, .value=0xe5}, {.addr=0x9b2f, .value=0x3e}, {.addr=0x9b30, .value=0x5e},
    };
    const struct BusEvent events[] = {
        {.addr=0x9b2f, .value=0x3e, .type=IO_READ},
        {.addr=0x9b30, .value=0x5e, .type=IO_READ},
        {.addr=0x015e, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x4b2a, .a=0x8b, .x=0xdd, .y=0x79, .sp=0xa2, .status=0x0a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0014, .value=0x52}, {.addr=0x4b2a, .value=0x3e}, {.addr=0x4b2b, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0x4b2c, .a=0x8b, .x=0xdd, .y=0x79, .sp=0xa2, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x0014, .value=0x52}, {.addr=0x4b2a, .value=0x3e}, {.addr=0x4b2b, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0x4b2a, .value=0x3e, .type=IO_READ},
        {.addr=0x4b2b, .value=0x14, .type=IO_READ},
        {.addr=0x0014, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00DC) {
    const struct CPU_State initial_cpu = {.pc=0x218d, .a=0xed, .x=0x33, .y=0x90, .sp=0xef, .status=0xd5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00af, .value=0x61}, {.addr=0x218d, .value=0x3e}, {.addr=0x218e, .value=0xaf},
    };
    const struct CPU_State final_cpu = {.pc=0x218f, .a=0xed, .x=0x33, .y=0x90, .sp=0xef, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00af, .value=0x61}, {.addr=0x218d, .value=0x3e}, {.addr=0x218e, .value=0xaf},
    };
    const struct BusEvent events[] = {
        {.addr=0x218d, .value=0x3e, .type=IO_READ},
        {.addr=0x218e, .value=0xaf, .type=IO_READ},
        {.addr=0x00af, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x1d34, .a=0xfb, .x=0x18, .y=0x64, .sp=0x1a, .status=0x0d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0022, .value=0x44}, {.addr=0x1d34, .value=0x3e}, {.addr=0x1d35, .value=0x22},
    };
    const struct CPU_State final_cpu = {.pc=0x1d36, .a=0xfb, .x=0x18, .y=0x64, .sp=0x1a, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0022, .value=0x44}, {.addr=0x1d34, .value=0x3e}, {.addr=0x1d35, .value=0x22},
    };
    const struct BusEvent events[] = {
        {.addr=0x1d34, .value=0x3e, .type=IO_READ},
        {.addr=0x1d35, .value=0x22, .type=IO_READ},
        {.addr=0x0022, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00DE) {
    const struct CPU_State initial_cpu = {.pc=0xd557, .a=0x00, .x=0xd3, .y=0x56, .sp=0xd6, .status=0xfe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c2, .value=0x59}, {.addr=0xd557, .value=0x3e}, {.addr=0xd558, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0xd559, .a=0x00, .x=0xd3, .y=0x56, .sp=0xd6, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c2, .value=0x59}, {.addr=0xd557, .value=0x3e}, {.addr=0xd558, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0xd557, .value=0x3e, .type=IO_READ},
        {.addr=0xd558, .value=0xc2, .type=IO_READ},
        {.addr=0x01c2, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00DF) {
    const struct CPU_State initial_cpu = {.pc=0xd947, .a=0xe3, .x=0x1f, .y=0x2e, .sp=0x2a, .status=0xbe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011a, .value=0x64}, {.addr=0xd947, .value=0x3e}, {.addr=0xd948, .value=0x1a},
    };
    const struct CPU_State final_cpu = {.pc=0xd949, .a=0xe3, .x=0x1f, .y=0x2e, .sp=0x2a, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x011a, .value=0x64}, {.addr=0xd947, .value=0x3e}, {.addr=0xd948, .value=0x1a},
    };
    const struct BusEvent events[] = {
        {.addr=0xd947, .value=0x3e, .type=IO_READ},
        {.addr=0xd948, .value=0x1a, .type=IO_READ},
        {.addr=0x011a, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x7c57, .a=0x77, .x=0x55, .y=0x7b, .sp=0xe4, .status=0x63};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c1, .value=0xe9}, {.addr=0x7c57, .value=0x3e}, {.addr=0x7c58, .value=0xc1},
    };
    const struct CPU_State final_cpu = {.pc=0x7c59, .a=0x77, .x=0x55, .y=0x7b, .sp=0xe4, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c1, .value=0xe9}, {.addr=0x7c57, .value=0x3e}, {.addr=0x7c58, .value=0xc1},
    };
    const struct BusEvent events[] = {
        {.addr=0x7c57, .value=0x3e, .type=IO_READ},
        {.addr=0x7c58, .value=0xc1, .type=IO_READ},
        {.addr=0x01c1, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00E1) {
    const struct CPU_State initial_cpu = {.pc=0x88f4, .a=0x93, .x=0x74, .y=0x51, .sp=0xc1, .status=0x55};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0073, .value=0xf4}, {.addr=0x88f4, .value=0x3e}, {.addr=0x88f5, .value=0x73},
    };
    const struct CPU_State final_cpu = {.pc=0x88f6, .a=0x93, .x=0x74, .y=0x51, .sp=0xc1, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0073, .value=0xf4}, {.addr=0x88f4, .value=0x3e}, {.addr=0x88f5, .value=0x73},
    };
    const struct BusEvent events[] = {
        {.addr=0x88f4, .value=0x3e, .type=IO_READ},
        {.addr=0x88f5, .value=0x73, .type=IO_READ},
        {.addr=0x0073, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x1d1d, .a=0x37, .x=0x2f, .y=0xb8, .sp=0x2a, .status=0xba};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015b, .value=0x93}, {.addr=0x1d1d, .value=0x3e}, {.addr=0x1d1e, .value=0x5b},
    };
    const struct CPU_State final_cpu = {.pc=0x1d1f, .a=0x37, .x=0x2f, .y=0xb8, .sp=0x2a, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x015b, .value=0x93}, {.addr=0x1d1d, .value=0x3e}, {.addr=0x1d1e, .value=0x5b},
    };
    const struct BusEvent events[] = {
        {.addr=0x1d1d, .value=0x3e, .type=IO_READ},
        {.addr=0x1d1e, .value=0x5b, .type=IO_READ},
        {.addr=0x015b, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00E3) {
    const struct CPU_State initial_cpu = {.pc=0x3731, .a=0x67, .x=0x1f, .y=0x8f, .sp=0xd3, .status=0x51};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0068, .value=0xfc}, {.addr=0x3731, .value=0x3e}, {.addr=0x3732, .value=0x68},
    };
    const struct CPU_State final_cpu = {.pc=0x3733, .a=0x67, .x=0x1f, .y=0x8f, .sp=0xd3, .status=0x50};
    const struct RamEntry final_ram[] = {
        {.addr=0x0068, .value=0xfc}, {.addr=0x3731, .value=0x3e}, {.addr=0x3732, .value=0x68},
    };
    const struct BusEvent events[] = {
        {.addr=0x3731, .value=0x3e, .type=IO_READ},
        {.addr=0x3732, .value=0x68, .type=IO_READ},
        {.addr=0x0068, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x1eaa, .a=0xb1, .x=0x73, .y=0x47, .sp=0x76, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019d, .value=0xd8}, {.addr=0x1eaa, .value=0x3e}, {.addr=0x1eab, .value=0x9d},
    };
    const struct CPU_State final_cpu = {.pc=0x1eac, .a=0xb1, .x=0x73, .y=0x47, .sp=0x76, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x019d, .value=0xd8}, {.addr=0x1eaa, .value=0x3e}, {.addr=0x1eab, .value=0x9d},
    };
    const struct BusEvent events[] = {
        {.addr=0x1eaa, .value=0x3e, .type=IO_READ},
        {.addr=0x1eab, .value=0x9d, .type=IO_READ},
        {.addr=0x019d, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00E5) {
    const struct CPU_State initial_cpu = {.pc=0x3453, .a=0xa0, .x=0x90, .y=0xe1, .sp=0x0c, .status=0x7a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0114, .value=0x3f}, {.addr=0x3453, .value=0x3e}, {.addr=0x3454, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0x3455, .a=0xa0, .x=0x90, .y=0xe1, .sp=0x0c, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x0114, .value=0x3f}, {.addr=0x3453, .value=0x3e}, {.addr=0x3454, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0x3453, .value=0x3e, .type=IO_READ},
        {.addr=0x3454, .value=0x14, .type=IO_READ},
        {.addr=0x0114, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00E6) {
    const struct CPU_State initial_cpu = {.pc=0xefea, .a=0x83, .x=0xfe, .y=0x01, .sp=0x22, .status=0x6a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0193, .value=0x71}, {.addr=0xefea, .value=0x3e}, {.addr=0xefeb, .value=0x93},
    };
    const struct CPU_State final_cpu = {.pc=0xefec, .a=0x83, .x=0xfe, .y=0x01, .sp=0x22, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0193, .value=0x71}, {.addr=0xefea, .value=0x3e}, {.addr=0xefeb, .value=0x93},
    };
    const struct BusEvent events[] = {
        {.addr=0xefea, .value=0x3e, .type=IO_READ},
        {.addr=0xefeb, .value=0x93, .type=IO_READ},
        {.addr=0x0193, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00E7) {
    const struct CPU_State initial_cpu = {.pc=0x4c41, .a=0xec, .x=0x1f, .y=0x1d, .sp=0xec, .status=0xe8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014a, .value=0xbd}, {.addr=0x4c41, .value=0x3e}, {.addr=0x4c42, .value=0x4a},
    };
    const struct CPU_State final_cpu = {.pc=0x4c43, .a=0xec, .x=0x1f, .y=0x1d, .sp=0xec, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x014a, .value=0xbd}, {.addr=0x4c41, .value=0x3e}, {.addr=0x4c42, .value=0x4a},
    };
    const struct BusEvent events[] = {
        {.addr=0x4c41, .value=0x3e, .type=IO_READ},
        {.addr=0x4c42, .value=0x4a, .type=IO_READ},
        {.addr=0x014a, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00E8) {
    const struct CPU_State initial_cpu = {.pc=0xc549, .a=0x48, .x=0xd4, .y=0x52, .sp=0x0b, .status=0x02};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001e, .value=0x7b}, {.addr=0xc549, .value=0x3e}, {.addr=0xc54a, .value=0x1e},
    };
    const struct CPU_State final_cpu = {.pc=0xc54b, .a=0x48, .x=0xd4, .y=0x52, .sp=0x0b, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x001e, .value=0x7b}, {.addr=0xc549, .value=0x3e}, {.addr=0xc54a, .value=0x1e},
    };
    const struct BusEvent events[] = {
        {.addr=0xc549, .value=0x3e, .type=IO_READ},
        {.addr=0xc54a, .value=0x1e, .type=IO_READ},
        {.addr=0x001e, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00E9) {
    const struct CPU_State initial_cpu = {.pc=0xeaae, .a=0x06, .x=0x27, .y=0xcc, .sp=0x89, .status=0x62};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01aa, .value=0x34}, {.addr=0xeaae, .value=0x3e}, {.addr=0xeaaf, .value=0xaa},
    };
    const struct CPU_State final_cpu = {.pc=0xeab0, .a=0x06, .x=0x27, .y=0xcc, .sp=0x89, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01aa, .value=0x34}, {.addr=0xeaae, .value=0x3e}, {.addr=0xeaaf, .value=0xaa},
    };
    const struct BusEvent events[] = {
        {.addr=0xeaae, .value=0x3e, .type=IO_READ},
        {.addr=0xeaaf, .value=0xaa, .type=IO_READ},
        {.addr=0x01aa, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00EA) {
    const struct CPU_State initial_cpu = {.pc=0xdcf0, .a=0xd1, .x=0x9a, .y=0xd9, .sp=0x47, .status=0x74};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0182, .value=0x77}, {.addr=0xdcf0, .value=0x3e}, {.addr=0xdcf1, .value=0x82},
    };
    const struct CPU_State final_cpu = {.pc=0xdcf2, .a=0xd1, .x=0x9a, .y=0xd9, .sp=0x47, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x0182, .value=0x77}, {.addr=0xdcf0, .value=0x3e}, {.addr=0xdcf1, .value=0x82},
    };
    const struct BusEvent events[] = {
        {.addr=0xdcf0, .value=0x3e, .type=IO_READ},
        {.addr=0xdcf1, .value=0x82, .type=IO_READ},
        {.addr=0x0182, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00EB) {
    const struct CPU_State initial_cpu = {.pc=0xde38, .a=0x3f, .x=0x90, .y=0xbc, .sp=0x5d, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b6, .value=0xfa}, {.addr=0xde38, .value=0x3e}, {.addr=0xde39, .value=0xb6},
    };
    const struct CPU_State final_cpu = {.pc=0xde3a, .a=0x3f, .x=0x90, .y=0xbc, .sp=0x5d, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b6, .value=0xfa}, {.addr=0xde38, .value=0x3e}, {.addr=0xde39, .value=0xb6},
    };
    const struct BusEvent events[] = {
        {.addr=0xde38, .value=0x3e, .type=IO_READ},
        {.addr=0xde39, .value=0xb6, .type=IO_READ},
        {.addr=0x00b6, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00EC) {
    const struct CPU_State initial_cpu = {.pc=0x0a03, .a=0xb2, .x=0x1a, .y=0xeb, .sp=0x69, .status=0x11};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001f, .value=0x38}, {.addr=0x0a03, .value=0x3e}, {.addr=0x0a04, .value=0x1f},
    };
    const struct CPU_State final_cpu = {.pc=0x0a05, .a=0xb2, .x=0x1a, .y=0xeb, .sp=0x69, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x001f, .value=0x38}, {.addr=0x0a03, .value=0x3e}, {.addr=0x0a04, .value=0x1f},
    };
    const struct BusEvent events[] = {
        {.addr=0x0a03, .value=0x3e, .type=IO_READ},
        {.addr=0x0a04, .value=0x1f, .type=IO_READ},
        {.addr=0x001f, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00ED) {
    const struct CPU_State initial_cpu = {.pc=0x82a3, .a=0xdb, .x=0xb1, .y=0xc3, .sp=0x02, .status=0x3a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e5, .value=0x46}, {.addr=0x82a3, .value=0x3e}, {.addr=0x82a4, .value=0xe5},
    };
    const struct CPU_State final_cpu = {.pc=0x82a5, .a=0xdb, .x=0xb1, .y=0xc3, .sp=0x02, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e5, .value=0x46}, {.addr=0x82a3, .value=0x3e}, {.addr=0x82a4, .value=0xe5},
    };
    const struct BusEvent events[] = {
        {.addr=0x82a3, .value=0x3e, .type=IO_READ},
        {.addr=0x82a4, .value=0xe5, .type=IO_READ},
        {.addr=0x01e5, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00EE) {
    const struct CPU_State initial_cpu = {.pc=0x9ceb, .a=0x62, .x=0xd7, .y=0xec, .sp=0x1e, .status=0x98};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b4, .value=0x43}, {.addr=0x9ceb, .value=0x3e}, {.addr=0x9cec, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0x9ced, .a=0x62, .x=0xd7, .y=0xec, .sp=0x1e, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b4, .value=0x43}, {.addr=0x9ceb, .value=0x3e}, {.addr=0x9cec, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0x9ceb, .value=0x3e, .type=IO_READ},
        {.addr=0x9cec, .value=0xb4, .type=IO_READ},
        {.addr=0x00b4, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00EF) {
    const struct CPU_State initial_cpu = {.pc=0xb8da, .a=0xa8, .x=0xcd, .y=0xac, .sp=0xc3, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0047, .value=0x83}, {.addr=0xb8da, .value=0x3e}, {.addr=0xb8db, .value=0x47},
    };
    const struct CPU_State final_cpu = {.pc=0xb8dc, .a=0xa8, .x=0xcd, .y=0xac, .sp=0xc3, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0047, .value=0x83}, {.addr=0xb8da, .value=0x3e}, {.addr=0xb8db, .value=0x47},
    };
    const struct BusEvent events[] = {
        {.addr=0xb8da, .value=0x3e, .type=IO_READ},
        {.addr=0xb8db, .value=0x47, .type=IO_READ},
        {.addr=0x0047, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x2a36, .a=0x6a, .x=0x48, .y=0xbc, .sp=0x02, .status=0x97};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00df, .value=0x62}, {.addr=0x2a36, .value=0x3e}, {.addr=0x2a37, .value=0xdf},
    };
    const struct CPU_State final_cpu = {.pc=0x2a38, .a=0x6a, .x=0x48, .y=0xbc, .sp=0x02, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x00df, .value=0x62}, {.addr=0x2a36, .value=0x3e}, {.addr=0x2a37, .value=0xdf},
    };
    const struct BusEvent events[] = {
        {.addr=0x2a36, .value=0x3e, .type=IO_READ},
        {.addr=0x2a37, .value=0xdf, .type=IO_READ},
        {.addr=0x00df, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00F1) {
    const struct CPU_State initial_cpu = {.pc=0x4b61, .a=0x3d, .x=0xae, .y=0x69, .sp=0x79, .status=0x2c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010d, .value=0x7a}, {.addr=0x4b61, .value=0x3e}, {.addr=0x4b62, .value=0x0d},
    };
    const struct CPU_State final_cpu = {.pc=0x4b63, .a=0x3d, .x=0xae, .y=0x69, .sp=0x79, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x010d, .value=0x7a}, {.addr=0x4b61, .value=0x3e}, {.addr=0x4b62, .value=0x0d},
    };
    const struct BusEvent events[] = {
        {.addr=0x4b61, .value=0x3e, .type=IO_READ},
        {.addr=0x4b62, .value=0x0d, .type=IO_READ},
        {.addr=0x010d, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00F2) {
    const struct CPU_State initial_cpu = {.pc=0x413b, .a=0x8c, .x=0x1e, .y=0x9c, .sp=0x15, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0199, .value=0xc0}, {.addr=0x413b, .value=0x3e}, {.addr=0x413c, .value=0x99},
    };
    const struct CPU_State final_cpu = {.pc=0x413d, .a=0x8c, .x=0x1e, .y=0x9c, .sp=0x15, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x0199, .value=0xc0}, {.addr=0x413b, .value=0x3e}, {.addr=0x413c, .value=0x99},
    };
    const struct BusEvent events[] = {
        {.addr=0x413b, .value=0x3e, .type=IO_READ},
        {.addr=0x413c, .value=0x99, .type=IO_READ},
        {.addr=0x0199, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00F3) {
    const struct CPU_State initial_cpu = {.pc=0xf2ca, .a=0x70, .x=0x41, .y=0xf2, .sp=0xb4, .status=0x9f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ed, .value=0xa4}, {.addr=0xf2ca, .value=0x3e}, {.addr=0xf2cb, .value=0xed},
    };
    const struct CPU_State final_cpu = {.pc=0xf2cc, .a=0x70, .x=0x41, .y=0xf2, .sp=0xb4, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ed, .value=0xa4}, {.addr=0xf2ca, .value=0x3e}, {.addr=0xf2cb, .value=0xed},
    };
    const struct BusEvent events[] = {
        {.addr=0xf2ca, .value=0x3e, .type=IO_READ},
        {.addr=0xf2cb, .value=0xed, .type=IO_READ},
        {.addr=0x00ed, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00F4) {
    const struct CPU_State initial_cpu = {.pc=0xde12, .a=0x43, .x=0xec, .y=0xf3, .sp=0xc8, .status=0x37};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0106, .value=0xb5}, {.addr=0xde12, .value=0x3e}, {.addr=0xde13, .value=0x06},
    };
    const struct CPU_State final_cpu = {.pc=0xde14, .a=0x43, .x=0xec, .y=0xf3, .sp=0xc8, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x0106, .value=0xb5}, {.addr=0xde12, .value=0x3e}, {.addr=0xde13, .value=0x06},
    };
    const struct BusEvent events[] = {
        {.addr=0xde12, .value=0x3e, .type=IO_READ},
        {.addr=0xde13, .value=0x06, .type=IO_READ},
        {.addr=0x0106, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00F5) {
    const struct CPU_State initial_cpu = {.pc=0x538c, .a=0x85, .x=0x5b, .y=0x0e, .sp=0x8c, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014d, .value=0x3c}, {.addr=0x538c, .value=0x3e}, {.addr=0x538d, .value=0x4d},
    };
    const struct CPU_State final_cpu = {.pc=0x538e, .a=0x85, .x=0x5b, .y=0x0e, .sp=0x8c, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x014d, .value=0x3c}, {.addr=0x538c, .value=0x3e}, {.addr=0x538d, .value=0x4d},
    };
    const struct BusEvent events[] = {
        {.addr=0x538c, .value=0x3e, .type=IO_READ},
        {.addr=0x538d, .value=0x4d, .type=IO_READ},
        {.addr=0x014d, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00F6) {
    const struct CPU_State initial_cpu = {.pc=0x0170, .a=0xba, .x=0x69, .y=0x81, .sp=0x9d, .status=0xed};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013c, .value=0x09}, {.addr=0x0170, .value=0x3e}, {.addr=0x0171, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0x0172, .a=0xba, .x=0x69, .y=0x81, .sp=0x9d, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x013c, .value=0x09}, {.addr=0x0170, .value=0x3e}, {.addr=0x0171, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0x0170, .value=0x3e, .type=IO_READ},
        {.addr=0x0171, .value=0x3c, .type=IO_READ},
        {.addr=0x013c, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00F7) {
    const struct CPU_State initial_cpu = {.pc=0xead8, .a=0xae, .x=0x1e, .y=0x6d, .sp=0xe4, .status=0x8c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0038, .value=0x37}, {.addr=0xead8, .value=0x3e}, {.addr=0xead9, .value=0x38},
    };
    const struct CPU_State final_cpu = {.pc=0xeada, .a=0xae, .x=0x1e, .y=0x6d, .sp=0xe4, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0038, .value=0x37}, {.addr=0xead8, .value=0x3e}, {.addr=0xead9, .value=0x38},
    };
    const struct BusEvent events[] = {
        {.addr=0xead8, .value=0x3e, .type=IO_READ},
        {.addr=0xead9, .value=0x38, .type=IO_READ},
        {.addr=0x0038, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00F8) {
    const struct CPU_State initial_cpu = {.pc=0xdbd1, .a=0x2b, .x=0x7b, .y=0x40, .sp=0x4c, .status=0x22};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0113, .value=0xc4}, {.addr=0xdbd1, .value=0x3e}, {.addr=0xdbd2, .value=0x13},
    };
    const struct CPU_State final_cpu = {.pc=0xdbd3, .a=0x2b, .x=0x7b, .y=0x40, .sp=0x4c, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0113, .value=0xc4}, {.addr=0xdbd1, .value=0x3e}, {.addr=0xdbd2, .value=0x13},
    };
    const struct BusEvent events[] = {
        {.addr=0xdbd1, .value=0x3e, .type=IO_READ},
        {.addr=0xdbd2, .value=0x13, .type=IO_READ},
        {.addr=0x0113, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00F9) {
    const struct CPU_State initial_cpu = {.pc=0x41a3, .a=0x7d, .x=0x9d, .y=0x39, .sp=0xff, .status=0x99};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0067, .value=0x72}, {.addr=0x41a3, .value=0x3e}, {.addr=0x41a4, .value=0x67},
    };
    const struct CPU_State final_cpu = {.pc=0x41a5, .a=0x7d, .x=0x9d, .y=0x39, .sp=0xff, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x0067, .value=0x72}, {.addr=0x41a3, .value=0x3e}, {.addr=0x41a4, .value=0x67},
    };
    const struct BusEvent events[] = {
        {.addr=0x41a3, .value=0x3e, .type=IO_READ},
        {.addr=0x41a4, .value=0x67, .type=IO_READ},
        {.addr=0x0067, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00FA) {
    const struct CPU_State initial_cpu = {.pc=0xa6e8, .a=0x2a, .x=0xb5, .y=0x60, .sp=0xc7, .status=0xba};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f6, .value=0xbd}, {.addr=0xa6e8, .value=0x3e}, {.addr=0xa6e9, .value=0xf6},
    };
    const struct CPU_State final_cpu = {.pc=0xa6ea, .a=0x2a, .x=0xb5, .y=0x60, .sp=0xc7, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f6, .value=0xbd}, {.addr=0xa6e8, .value=0x3e}, {.addr=0xa6e9, .value=0xf6},
    };
    const struct BusEvent events[] = {
        {.addr=0xa6e8, .value=0x3e, .type=IO_READ},
        {.addr=0xa6e9, .value=0xf6, .type=IO_READ},
        {.addr=0x01f6, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00FB) {
    const struct CPU_State initial_cpu = {.pc=0xff8b, .a=0x44, .x=0xb2, .y=0xe9, .sp=0x6a, .status=0xc9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004e, .value=0xf6}, {.addr=0xff8b, .value=0x3e}, {.addr=0xff8c, .value=0x4e},
    };
    const struct CPU_State final_cpu = {.pc=0xff8d, .a=0x44, .x=0xb2, .y=0xe9, .sp=0x6a, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x004e, .value=0xf6}, {.addr=0xff8b, .value=0x3e}, {.addr=0xff8c, .value=0x4e},
    };
    const struct BusEvent events[] = {
        {.addr=0xff8b, .value=0x3e, .type=IO_READ},
        {.addr=0xff8c, .value=0x4e, .type=IO_READ},
        {.addr=0x004e, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00FC) {
    const struct CPU_State initial_cpu = {.pc=0x28fc, .a=0xe5, .x=0xfd, .y=0x08, .sp=0x1c, .status=0x18};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0072, .value=0x75}, {.addr=0x28fc, .value=0x3e}, {.addr=0x28fd, .value=0x72},
    };
    const struct CPU_State final_cpu = {.pc=0x28fe, .a=0xe5, .x=0xfd, .y=0x08, .sp=0x1c, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x0072, .value=0x75}, {.addr=0x28fc, .value=0x3e}, {.addr=0x28fd, .value=0x72},
    };
    const struct BusEvent events[] = {
        {.addr=0x28fc, .value=0x3e, .type=IO_READ},
        {.addr=0x28fd, .value=0x72, .type=IO_READ},
        {.addr=0x0072, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x5d1c, .a=0xc9, .x=0x32, .y=0x35, .sp=0xb1, .status=0x47};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001e, .value=0x6c}, {.addr=0x5d1c, .value=0x3e}, {.addr=0x5d1d, .value=0x1e},
    };
    const struct CPU_State final_cpu = {.pc=0x5d1e, .a=0xc9, .x=0x32, .y=0x35, .sp=0xb1, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x001e, .value=0x6c}, {.addr=0x5d1c, .value=0x3e}, {.addr=0x5d1d, .value=0x1e},
    };
    const struct BusEvent events[] = {
        {.addr=0x5d1c, .value=0x3e, .type=IO_READ},
        {.addr=0x5d1d, .value=0x1e, .type=IO_READ},
        {.addr=0x001e, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_00FF) {
    const struct CPU_State initial_cpu = {.pc=0xb122, .a=0xc7, .x=0x88, .y=0xf5, .sp=0x80, .status=0xea};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d3, .value=0x8e}, {.addr=0xb122, .value=0x3e}, {.addr=0xb123, .value=0xd3},
    };
    const struct CPU_State final_cpu = {.pc=0xb124, .a=0xc7, .x=0x88, .y=0xf5, .sp=0x80, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d3, .value=0x8e}, {.addr=0xb122, .value=0x3e}, {.addr=0xb123, .value=0xd3},
    };
    const struct BusEvent events[] = {
        {.addr=0xb122, .value=0x3e, .type=IO_READ},
        {.addr=0xb123, .value=0xd3, .type=IO_READ},
        {.addr=0x01d3, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0100) {
    const struct CPU_State initial_cpu = {.pc=0xe789, .a=0xce, .x=0xb7, .y=0xd3, .sp=0x03, .status=0x13};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bb, .value=0x72}, {.addr=0xe789, .value=0x3e}, {.addr=0xe78a, .value=0xbb},
    };
    const struct CPU_State final_cpu = {.pc=0xe78b, .a=0xce, .x=0xb7, .y=0xd3, .sp=0x03, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bb, .value=0x72}, {.addr=0xe789, .value=0x3e}, {.addr=0xe78a, .value=0xbb},
    };
    const struct BusEvent events[] = {
        {.addr=0xe789, .value=0x3e, .type=IO_READ},
        {.addr=0xe78a, .value=0xbb, .type=IO_READ},
        {.addr=0x00bb, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0101) {
    const struct CPU_State initial_cpu = {.pc=0xa7e2, .a=0x8c, .x=0x2b, .y=0x22, .sp=0xce, .status=0xea};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d8, .value=0x94}, {.addr=0xa7e2, .value=0x3e}, {.addr=0xa7e3, .value=0xd8},
    };
    const struct CPU_State final_cpu = {.pc=0xa7e4, .a=0x8c, .x=0x2b, .y=0x22, .sp=0xce, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d8, .value=0x94}, {.addr=0xa7e2, .value=0x3e}, {.addr=0xa7e3, .value=0xd8},
    };
    const struct BusEvent events[] = {
        {.addr=0xa7e2, .value=0x3e, .type=IO_READ},
        {.addr=0xa7e3, .value=0xd8, .type=IO_READ},
        {.addr=0x01d8, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0102) {
    const struct CPU_State initial_cpu = {.pc=0x38e5, .a=0x40, .x=0xf7, .y=0x93, .sp=0x08, .status=0x42};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e0, .value=0x52}, {.addr=0x38e5, .value=0x3e}, {.addr=0x38e6, .value=0xe0},
    };
    const struct CPU_State final_cpu = {.pc=0x38e7, .a=0x40, .x=0xf7, .y=0x93, .sp=0x08, .status=0xc1};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e0, .value=0x52}, {.addr=0x38e5, .value=0x3e}, {.addr=0x38e6, .value=0xe0},
    };
    const struct BusEvent events[] = {
        {.addr=0x38e5, .value=0x3e, .type=IO_READ},
        {.addr=0x38e6, .value=0xe0, .type=IO_READ},
        {.addr=0x00e0, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0103) {
    const struct CPU_State initial_cpu = {.pc=0x008f, .a=0xd3, .x=0x41, .y=0x18, .sp=0xc8, .status=0x95};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008f, .value=0x3e}, {.addr=0x0090, .value=0xee}, {.addr=0x00ee, .value=0x48},
    };
    const struct CPU_State final_cpu = {.pc=0x0091, .a=0xd3, .x=0x41, .y=0x18, .sp=0xc8, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x008f, .value=0x3e}, {.addr=0x0090, .value=0xee}, {.addr=0x00ee, .value=0x48},
    };
    const struct BusEvent events[] = {
        {.addr=0x008f, .value=0x3e, .type=IO_READ},
        {.addr=0x0090, .value=0xee, .type=IO_READ},
        {.addr=0x00ee, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0104) {
    const struct CPU_State initial_cpu = {.pc=0x6111, .a=0x15, .x=0x65, .y=0xf6, .sp=0xba, .status=0x1b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000d, .value=0xc8}, {.addr=0x6111, .value=0x3e}, {.addr=0x6112, .value=0x0d},
    };
    const struct CPU_State final_cpu = {.pc=0x6113, .a=0x15, .x=0x65, .y=0xf6, .sp=0xba, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x000d, .value=0xc8}, {.addr=0x6111, .value=0x3e}, {.addr=0x6112, .value=0x0d},
    };
    const struct BusEvent events[] = {
        {.addr=0x6111, .value=0x3e, .type=IO_READ},
        {.addr=0x6112, .value=0x0d, .type=IO_READ},
        {.addr=0x000d, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0105) {
    const struct CPU_State initial_cpu = {.pc=0x0820, .a=0xf7, .x=0xe7, .y=0xc5, .sp=0x27, .status=0x86};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0031, .value=0x1c}, {.addr=0x0820, .value=0x3e}, {.addr=0x0821, .value=0x31},
    };
    const struct CPU_State final_cpu = {.pc=0x0822, .a=0xf7, .x=0xe7, .y=0xc5, .sp=0x27, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x0031, .value=0x1c}, {.addr=0x0820, .value=0x3e}, {.addr=0x0821, .value=0x31},
    };
    const struct BusEvent events[] = {
        {.addr=0x0820, .value=0x3e, .type=IO_READ},
        {.addr=0x0821, .value=0x31, .type=IO_READ},
        {.addr=0x0031, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0106) {
    const struct CPU_State initial_cpu = {.pc=0x7350, .a=0x9f, .x=0x9c, .y=0x98, .sp=0xfc, .status=0xdb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0089, .value=0x72}, {.addr=0x7350, .value=0x3e}, {.addr=0x7351, .value=0x89},
    };
    const struct CPU_State final_cpu = {.pc=0x7352, .a=0x9f, .x=0x9c, .y=0x98, .sp=0xfc, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x0089, .value=0x72}, {.addr=0x7350, .value=0x3e}, {.addr=0x7351, .value=0x89},
    };
    const struct BusEvent events[] = {
        {.addr=0x7350, .value=0x3e, .type=IO_READ},
        {.addr=0x7351, .value=0x89, .type=IO_READ},
        {.addr=0x0089, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0107) {
    const struct CPU_State initial_cpu = {.pc=0x562b, .a=0x2a, .x=0x12, .y=0x12, .sp=0xce, .status=0x54};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b5, .value=0x1b}, {.addr=0x562b, .value=0x3e}, {.addr=0x562c, .value=0xb5},
    };
    const struct CPU_State final_cpu = {.pc=0x562d, .a=0x2a, .x=0x12, .y=0x12, .sp=0xce, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b5, .value=0x1b}, {.addr=0x562b, .value=0x3e}, {.addr=0x562c, .value=0xb5},
    };
    const struct BusEvent events[] = {
        {.addr=0x562b, .value=0x3e, .type=IO_READ},
        {.addr=0x562c, .value=0xb5, .type=IO_READ},
        {.addr=0x00b5, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0108) {
    const struct CPU_State initial_cpu = {.pc=0x8ab2, .a=0x49, .x=0x8f, .y=0x52, .sp=0x14, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0199, .value=0xe5}, {.addr=0x8ab2, .value=0x3e}, {.addr=0x8ab3, .value=0x99},
    };
    const struct CPU_State final_cpu = {.pc=0x8ab4, .a=0x49, .x=0x8f, .y=0x52, .sp=0x14, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0199, .value=0xe5}, {.addr=0x8ab2, .value=0x3e}, {.addr=0x8ab3, .value=0x99},
    };
    const struct BusEvent events[] = {
        {.addr=0x8ab2, .value=0x3e, .type=IO_READ},
        {.addr=0x8ab3, .value=0x99, .type=IO_READ},
        {.addr=0x0199, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0109) {
    const struct CPU_State initial_cpu = {.pc=0x9abd, .a=0x77, .x=0x2b, .y=0xe6, .sp=0xe0, .status=0x16};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0066, .value=0x86}, {.addr=0x9abd, .value=0x3e}, {.addr=0x9abe, .value=0x66},
    };
    const struct CPU_State final_cpu = {.pc=0x9abf, .a=0x77, .x=0x2b, .y=0xe6, .sp=0xe0, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0066, .value=0x86}, {.addr=0x9abd, .value=0x3e}, {.addr=0x9abe, .value=0x66},
    };
    const struct BusEvent events[] = {
        {.addr=0x9abd, .value=0x3e, .type=IO_READ},
        {.addr=0x9abe, .value=0x66, .type=IO_READ},
        {.addr=0x0066, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_010A) {
    const struct CPU_State initial_cpu = {.pc=0x980b, .a=0xf0, .x=0xe2, .y=0x66, .sp=0xd6, .status=0xf0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011e, .value=0xae}, {.addr=0x980b, .value=0x3e}, {.addr=0x980c, .value=0x1e},
    };
    const struct CPU_State final_cpu = {.pc=0x980d, .a=0xf0, .x=0xe2, .y=0x66, .sp=0xd6, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x011e, .value=0xae}, {.addr=0x980b, .value=0x3e}, {.addr=0x980c, .value=0x1e},
    };
    const struct BusEvent events[] = {
        {.addr=0x980b, .value=0x3e, .type=IO_READ},
        {.addr=0x980c, .value=0x1e, .type=IO_READ},
        {.addr=0x011e, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_010B) {
    const struct CPU_State initial_cpu = {.pc=0xf34b, .a=0xdb, .x=0x2b, .y=0x7f, .sp=0x9d, .status=0xa9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a3, .value=0x05}, {.addr=0xf34b, .value=0x3e}, {.addr=0xf34c, .value=0xa3},
    };
    const struct CPU_State final_cpu = {.pc=0xf34d, .a=0xdb, .x=0x2b, .y=0x7f, .sp=0x9d, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a3, .value=0x05}, {.addr=0xf34b, .value=0x3e}, {.addr=0xf34c, .value=0xa3},
    };
    const struct BusEvent events[] = {
        {.addr=0xf34b, .value=0x3e, .type=IO_READ},
        {.addr=0xf34c, .value=0xa3, .type=IO_READ},
        {.addr=0x01a3, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_010C) {
    const struct CPU_State initial_cpu = {.pc=0x33a7, .a=0x1a, .x=0xd4, .y=0xc1, .sp=0x02, .status=0xf5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0115, .value=0x28}, {.addr=0x33a7, .value=0x3e}, {.addr=0x33a8, .value=0x15},
    };
    const struct CPU_State final_cpu = {.pc=0x33a9, .a=0x1a, .x=0xd4, .y=0xc1, .sp=0x02, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0115, .value=0x28}, {.addr=0x33a7, .value=0x3e}, {.addr=0x33a8, .value=0x15},
    };
    const struct BusEvent events[] = {
        {.addr=0x33a7, .value=0x3e, .type=IO_READ},
        {.addr=0x33a8, .value=0x15, .type=IO_READ},
        {.addr=0x0115, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_010E) {
    const struct CPU_State initial_cpu = {.pc=0x2c5b, .a=0xd8, .x=0x83, .y=0xdf, .sp=0xbe, .status=0x96};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ef, .value=0x39}, {.addr=0x2c5b, .value=0x3e}, {.addr=0x2c5c, .value=0xef},
    };
    const struct CPU_State final_cpu = {.pc=0x2c5d, .a=0xd8, .x=0x83, .y=0xdf, .sp=0xbe, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ef, .value=0x39}, {.addr=0x2c5b, .value=0x3e}, {.addr=0x2c5c, .value=0xef},
    };
    const struct BusEvent events[] = {
        {.addr=0x2c5b, .value=0x3e, .type=IO_READ},
        {.addr=0x2c5c, .value=0xef, .type=IO_READ},
        {.addr=0x00ef, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_010F) {
    const struct CPU_State initial_cpu = {.pc=0x5997, .a=0xa5, .x=0x3c, .y=0x01, .sp=0xb5, .status=0x74};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d1, .value=0x24}, {.addr=0x5997, .value=0x3e}, {.addr=0x5998, .value=0xd1},
    };
    const struct CPU_State final_cpu = {.pc=0x5999, .a=0xa5, .x=0x3c, .y=0x01, .sp=0xb5, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d1, .value=0x24}, {.addr=0x5997, .value=0x3e}, {.addr=0x5998, .value=0xd1},
    };
    const struct BusEvent events[] = {
        {.addr=0x5997, .value=0x3e, .type=IO_READ},
        {.addr=0x5998, .value=0xd1, .type=IO_READ},
        {.addr=0x01d1, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0110) {
    const struct CPU_State initial_cpu = {.pc=0x0d77, .a=0xc8, .x=0x9d, .y=0xdd, .sp=0x68, .status=0x3a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fc, .value=0x71}, {.addr=0x0d77, .value=0x3e}, {.addr=0x0d78, .value=0xfc},
    };
    const struct CPU_State final_cpu = {.pc=0x0d79, .a=0xc8, .x=0x9d, .y=0xdd, .sp=0x68, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fc, .value=0x71}, {.addr=0x0d77, .value=0x3e}, {.addr=0x0d78, .value=0xfc},
    };
    const struct BusEvent events[] = {
        {.addr=0x0d77, .value=0x3e, .type=IO_READ},
        {.addr=0x0d78, .value=0xfc, .type=IO_READ},
        {.addr=0x01fc, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0111) {
    const struct CPU_State initial_cpu = {.pc=0x2dac, .a=0xf9, .x=0xc0, .y=0xab, .sp=0x20, .status=0xf8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0136, .value=0x4d}, {.addr=0x2dac, .value=0x3e}, {.addr=0x2dad, .value=0x36},
    };
    const struct CPU_State final_cpu = {.pc=0x2dae, .a=0xf9, .x=0xc0, .y=0xab, .sp=0x20, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x0136, .value=0x4d}, {.addr=0x2dac, .value=0x3e}, {.addr=0x2dad, .value=0x36},
    };
    const struct BusEvent events[] = {
        {.addr=0x2dac, .value=0x3e, .type=IO_READ},
        {.addr=0x2dad, .value=0x36, .type=IO_READ},
        {.addr=0x0136, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0112) {
    const struct CPU_State initial_cpu = {.pc=0x4c7f, .a=0x6f, .x=0x5a, .y=0xc6, .sp=0x02, .status=0x65};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016c, .value=0x81}, {.addr=0x4c7f, .value=0x3e}, {.addr=0x4c80, .value=0x6c},
    };
    const struct CPU_State final_cpu = {.pc=0x4c81, .a=0x6f, .x=0x5a, .y=0xc6, .sp=0x02, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x016c, .value=0x81}, {.addr=0x4c7f, .value=0x3e}, {.addr=0x4c80, .value=0x6c},
    };
    const struct BusEvent events[] = {
        {.addr=0x4c7f, .value=0x3e, .type=IO_READ},
        {.addr=0x4c80, .value=0x6c, .type=IO_READ},
        {.addr=0x016c, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0113) {
    const struct CPU_State initial_cpu = {.pc=0xdb49, .a=0x7a, .x=0xc8, .y=0x0d, .sp=0xf6, .status=0xb4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016d, .value=0xfc}, {.addr=0xdb49, .value=0x3e}, {.addr=0xdb4a, .value=0x6d},
    };
    const struct CPU_State final_cpu = {.pc=0xdb4b, .a=0x7a, .x=0xc8, .y=0x0d, .sp=0xf6, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x016d, .value=0xfc}, {.addr=0xdb49, .value=0x3e}, {.addr=0xdb4a, .value=0x6d},
    };
    const struct BusEvent events[] = {
        {.addr=0xdb49, .value=0x3e, .type=IO_READ},
        {.addr=0xdb4a, .value=0x6d, .type=IO_READ},
        {.addr=0x016d, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0114) {
    const struct CPU_State initial_cpu = {.pc=0xd6d4, .a=0x17, .x=0x1c, .y=0x75, .sp=0xe1, .status=0xd1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007c, .value=0x17}, {.addr=0xd6d4, .value=0x3e}, {.addr=0xd6d5, .value=0x7c},
    };
    const struct CPU_State final_cpu = {.pc=0xd6d6, .a=0x17, .x=0x1c, .y=0x75, .sp=0xe1, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x007c, .value=0x17}, {.addr=0xd6d4, .value=0x3e}, {.addr=0xd6d5, .value=0x7c},
    };
    const struct BusEvent events[] = {
        {.addr=0xd6d4, .value=0x3e, .type=IO_READ},
        {.addr=0xd6d5, .value=0x7c, .type=IO_READ},
        {.addr=0x007c, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0115) {
    const struct CPU_State initial_cpu = {.pc=0x51e5, .a=0x49, .x=0x07, .y=0xfe, .sp=0x8b, .status=0x42};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c8, .value=0x08}, {.addr=0x51e5, .value=0x3e}, {.addr=0x51e6, .value=0xc8},
    };
    const struct CPU_State final_cpu = {.pc=0x51e7, .a=0x49, .x=0x07, .y=0xfe, .sp=0x8b, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c8, .value=0x08}, {.addr=0x51e5, .value=0x3e}, {.addr=0x51e6, .value=0xc8},
    };
    const struct BusEvent events[] = {
        {.addr=0x51e5, .value=0x3e, .type=IO_READ},
        {.addr=0x51e6, .value=0xc8, .type=IO_READ},
        {.addr=0x00c8, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0116) {
    const struct CPU_State initial_cpu = {.pc=0xde88, .a=0xc3, .x=0x2c, .y=0x6d, .sp=0x70, .status=0x66};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0108, .value=0xe6}, {.addr=0xde88, .value=0x3e}, {.addr=0xde89, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0xde8a, .a=0xc3, .x=0x2c, .y=0x6d, .sp=0x70, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x0108, .value=0xe6}, {.addr=0xde88, .value=0x3e}, {.addr=0xde89, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0xde88, .value=0x3e, .type=IO_READ},
        {.addr=0xde89, .value=0x08, .type=IO_READ},
        {.addr=0x0108, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0117) {
    const struct CPU_State initial_cpu = {.pc=0xc795, .a=0xa9, .x=0xf5, .y=0xcd, .sp=0x83, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0108, .value=0x0c}, {.addr=0xc795, .value=0x3e}, {.addr=0xc796, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0xc797, .a=0xa9, .x=0xf5, .y=0xcd, .sp=0x83, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0108, .value=0x0c}, {.addr=0xc795, .value=0x3e}, {.addr=0xc796, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0xc795, .value=0x3e, .type=IO_READ},
        {.addr=0xc796, .value=0x08, .type=IO_READ},
        {.addr=0x0108, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0118) {
    const struct CPU_State initial_cpu = {.pc=0xe901, .a=0x10, .x=0xad, .y=0xc0, .sp=0x0a, .status=0x0d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006e, .value=0x9f}, {.addr=0xe901, .value=0x3e}, {.addr=0xe902, .value=0x6e},
    };
    const struct CPU_State final_cpu = {.pc=0xe903, .a=0x10, .x=0xad, .y=0xc0, .sp=0x0a, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x006e, .value=0x9f}, {.addr=0xe901, .value=0x3e}, {.addr=0xe902, .value=0x6e},
    };
    const struct BusEvent events[] = {
        {.addr=0xe901, .value=0x3e, .type=IO_READ},
        {.addr=0xe902, .value=0x6e, .type=IO_READ},
        {.addr=0x006e, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0119) {
    const struct CPU_State initial_cpu = {.pc=0x0190, .a=0xc2, .x=0x86, .y=0x08, .sp=0xb9, .status=0x70};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0146, .value=0x0d}, {.addr=0x0190, .value=0x3e}, {.addr=0x0191, .value=0x46},
    };
    const struct CPU_State final_cpu = {.pc=0x0192, .a=0xc2, .x=0x86, .y=0x08, .sp=0xb9, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x0146, .value=0x0d}, {.addr=0x0190, .value=0x3e}, {.addr=0x0191, .value=0x46},
    };
    const struct BusEvent events[] = {
        {.addr=0x0190, .value=0x3e, .type=IO_READ},
        {.addr=0x0191, .value=0x46, .type=IO_READ},
        {.addr=0x0146, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_011A) {
    const struct CPU_State initial_cpu = {.pc=0x622f, .a=0x23, .x=0x24, .y=0x25, .sp=0x44, .status=0x18};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0066, .value=0x0b}, {.addr=0x622f, .value=0x3e}, {.addr=0x6230, .value=0x66},
    };
    const struct CPU_State final_cpu = {.pc=0x6231, .a=0x23, .x=0x24, .y=0x25, .sp=0x44, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x0066, .value=0x0b}, {.addr=0x622f, .value=0x3e}, {.addr=0x6230, .value=0x66},
    };
    const struct BusEvent events[] = {
        {.addr=0x622f, .value=0x3e, .type=IO_READ},
        {.addr=0x6230, .value=0x66, .type=IO_READ},
        {.addr=0x0066, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_011B) {
    const struct CPU_State initial_cpu = {.pc=0xe3e8, .a=0x93, .x=0xcc, .y=0x36, .sp=0x41, .status=0xa7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fd, .value=0xb5}, {.addr=0xe3e8, .value=0x3e}, {.addr=0xe3e9, .value=0xfd},
    };
    const struct CPU_State final_cpu = {.pc=0xe3ea, .a=0x93, .x=0xcc, .y=0x36, .sp=0x41, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fd, .value=0xb5}, {.addr=0xe3e8, .value=0x3e}, {.addr=0xe3e9, .value=0xfd},
    };
    const struct BusEvent events[] = {
        {.addr=0xe3e8, .value=0x3e, .type=IO_READ},
        {.addr=0xe3e9, .value=0xfd, .type=IO_READ},
        {.addr=0x01fd, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_011C) {
    const struct CPU_State initial_cpu = {.pc=0x1b97, .a=0xa8, .x=0x55, .y=0xdd, .sp=0x76, .status=0x6d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017e, .value=0xc8}, {.addr=0x1b97, .value=0x3e}, {.addr=0x1b98, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0x1b99, .a=0xa8, .x=0x55, .y=0xdd, .sp=0x76, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x017e, .value=0xc8}, {.addr=0x1b97, .value=0x3e}, {.addr=0x1b98, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0x1b97, .value=0x3e, .type=IO_READ},
        {.addr=0x1b98, .value=0x7e, .type=IO_READ},
        {.addr=0x017e, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_011D) {
    const struct CPU_State initial_cpu = {.pc=0x49e1, .a=0x46, .x=0x7a, .y=0x51, .sp=0x09, .status=0x4f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c5, .value=0x05}, {.addr=0x49e1, .value=0x3e}, {.addr=0x49e2, .value=0xc5},
    };
    const struct CPU_State final_cpu = {.pc=0x49e3, .a=0x46, .x=0x7a, .y=0x51, .sp=0x09, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c5, .value=0x05}, {.addr=0x49e1, .value=0x3e}, {.addr=0x49e2, .value=0xc5},
    };
    const struct BusEvent events[] = {
        {.addr=0x49e1, .value=0x3e, .type=IO_READ},
        {.addr=0x49e2, .value=0xc5, .type=IO_READ},
        {.addr=0x00c5, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_011E) {
    const struct CPU_State initial_cpu = {.pc=0x2b5c, .a=0xae, .x=0x49, .y=0x05, .sp=0x32, .status=0x83};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0074, .value=0xf7}, {.addr=0x2b5c, .value=0x3e}, {.addr=0x2b5d, .value=0x74},
    };
    const struct CPU_State final_cpu = {.pc=0x2b5e, .a=0xae, .x=0x49, .y=0x05, .sp=0x32, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x0074, .value=0xf7}, {.addr=0x2b5c, .value=0x3e}, {.addr=0x2b5d, .value=0x74},
    };
    const struct BusEvent events[] = {
        {.addr=0x2b5c, .value=0x3e, .type=IO_READ},
        {.addr=0x2b5d, .value=0x74, .type=IO_READ},
        {.addr=0x0074, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_011F) {
    const struct CPU_State initial_cpu = {.pc=0x0d4a, .a=0x3f, .x=0xb5, .y=0x77, .sp=0x25, .status=0xb0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0186, .value=0xfc}, {.addr=0x0d4a, .value=0x3e}, {.addr=0x0d4b, .value=0x86},
    };
    const struct CPU_State final_cpu = {.pc=0x0d4c, .a=0x3f, .x=0xb5, .y=0x77, .sp=0x25, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0186, .value=0xfc}, {.addr=0x0d4a, .value=0x3e}, {.addr=0x0d4b, .value=0x86},
    };
    const struct BusEvent events[] = {
        {.addr=0x0d4a, .value=0x3e, .type=IO_READ},
        {.addr=0x0d4b, .value=0x86, .type=IO_READ},
        {.addr=0x0186, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0120) {
    const struct CPU_State initial_cpu = {.pc=0x62f0, .a=0x14, .x=0x3a, .y=0xcf, .sp=0xe7, .status=0x97};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0060, .value=0x9c}, {.addr=0x62f0, .value=0x3e}, {.addr=0x62f1, .value=0x60},
    };
    const struct CPU_State final_cpu = {.pc=0x62f2, .a=0x14, .x=0x3a, .y=0xcf, .sp=0xe7, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0060, .value=0x9c}, {.addr=0x62f0, .value=0x3e}, {.addr=0x62f1, .value=0x60},
    };
    const struct BusEvent events[] = {
        {.addr=0x62f0, .value=0x3e, .type=IO_READ},
        {.addr=0x62f1, .value=0x60, .type=IO_READ},
        {.addr=0x0060, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0121) {
    const struct CPU_State initial_cpu = {.pc=0xe111, .a=0x27, .x=0xbf, .y=0x61, .sp=0xd4, .status=0x20};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b1, .value=0x41}, {.addr=0xe111, .value=0x3e}, {.addr=0xe112, .value=0xb1},
    };
    const struct CPU_State final_cpu = {.pc=0xe113, .a=0x27, .x=0xbf, .y=0x61, .sp=0xd4, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b1, .value=0x41}, {.addr=0xe111, .value=0x3e}, {.addr=0xe112, .value=0xb1},
    };
    const struct BusEvent events[] = {
        {.addr=0xe111, .value=0x3e, .type=IO_READ},
        {.addr=0xe112, .value=0xb1, .type=IO_READ},
        {.addr=0x01b1, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0122) {
    const struct CPU_State initial_cpu = {.pc=0xab06, .a=0x44, .x=0x63, .y=0x38, .sp=0x24, .status=0x5d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0001, .value=0x24}, {.addr=0xab06, .value=0x3e}, {.addr=0xab07, .value=0x01},
    };
    const struct CPU_State final_cpu = {.pc=0xab08, .a=0x44, .x=0x63, .y=0x38, .sp=0x24, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0001, .value=0x24}, {.addr=0xab06, .value=0x3e}, {.addr=0xab07, .value=0x01},
    };
    const struct BusEvent events[] = {
        {.addr=0xab06, .value=0x3e, .type=IO_READ},
        {.addr=0xab07, .value=0x01, .type=IO_READ},
        {.addr=0x0001, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0123) {
    const struct CPU_State initial_cpu = {.pc=0x2a88, .a=0x81, .x=0x17, .y=0xda, .sp=0xed, .status=0x6e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0115, .value=0x78}, {.addr=0x2a88, .value=0x3e}, {.addr=0x2a89, .value=0x15},
    };
    const struct CPU_State final_cpu = {.pc=0x2a8a, .a=0x81, .x=0x17, .y=0xda, .sp=0xed, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x0115, .value=0x78}, {.addr=0x2a88, .value=0x3e}, {.addr=0x2a89, .value=0x15},
    };
    const struct BusEvent events[] = {
        {.addr=0x2a88, .value=0x3e, .type=IO_READ},
        {.addr=0x2a89, .value=0x15, .type=IO_READ},
        {.addr=0x0115, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0124) {
    const struct CPU_State initial_cpu = {.pc=0xfd50, .a=0xd7, .x=0xec, .y=0xf2, .sp=0x73, .status=0x0c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0046, .value=0x06}, {.addr=0xfd50, .value=0x3e}, {.addr=0xfd51, .value=0x46},
    };
    const struct CPU_State final_cpu = {.pc=0xfd52, .a=0xd7, .x=0xec, .y=0xf2, .sp=0x73, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0046, .value=0x06}, {.addr=0xfd50, .value=0x3e}, {.addr=0xfd51, .value=0x46},
    };
    const struct BusEvent events[] = {
        {.addr=0xfd50, .value=0x3e, .type=IO_READ},
        {.addr=0xfd51, .value=0x46, .type=IO_READ},
        {.addr=0x0046, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0125) {
    const struct CPU_State initial_cpu = {.pc=0xa820, .a=0x75, .x=0x64, .y=0x65, .sp=0xad, .status=0xc2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ea, .value=0x37}, {.addr=0xa820, .value=0x3e}, {.addr=0xa821, .value=0xea},
    };
    const struct CPU_State final_cpu = {.pc=0xa822, .a=0x75, .x=0x64, .y=0x65, .sp=0xad, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ea, .value=0x37}, {.addr=0xa820, .value=0x3e}, {.addr=0xa821, .value=0xea},
    };
    const struct BusEvent events[] = {
        {.addr=0xa820, .value=0x3e, .type=IO_READ},
        {.addr=0xa821, .value=0xea, .type=IO_READ},
        {.addr=0x00ea, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0126) {
    const struct CPU_State initial_cpu = {.pc=0x10e0, .a=0x31, .x=0x48, .y=0x22, .sp=0x67, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0057, .value=0xd9}, {.addr=0x10e0, .value=0x3e}, {.addr=0x10e1, .value=0x57},
    };
    const struct CPU_State final_cpu = {.pc=0x10e2, .a=0x31, .x=0x48, .y=0x22, .sp=0x67, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0057, .value=0xd9}, {.addr=0x10e0, .value=0x3e}, {.addr=0x10e1, .value=0x57},
    };
    const struct BusEvent events[] = {
        {.addr=0x10e0, .value=0x3e, .type=IO_READ},
        {.addr=0x10e1, .value=0x57, .type=IO_READ},
        {.addr=0x0057, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0127) {
    const struct CPU_State initial_cpu = {.pc=0xc11a, .a=0xcc, .x=0xa8, .y=0xe8, .sp=0x10, .status=0xcc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00da, .value=0x94}, {.addr=0xc11a, .value=0x3e}, {.addr=0xc11b, .value=0xda},
    };
    const struct CPU_State final_cpu = {.pc=0xc11c, .a=0xcc, .x=0xa8, .y=0xe8, .sp=0x10, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00da, .value=0x94}, {.addr=0xc11a, .value=0x3e}, {.addr=0xc11b, .value=0xda},
    };
    const struct BusEvent events[] = {
        {.addr=0xc11a, .value=0x3e, .type=IO_READ},
        {.addr=0xc11b, .value=0xda, .type=IO_READ},
        {.addr=0x00da, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0128) {
    const struct CPU_State initial_cpu = {.pc=0x49e3, .a=0xcf, .x=0xf5, .y=0xc9, .sp=0x00, .status=0x82};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0073, .value=0x20}, {.addr=0x49e3, .value=0x3e}, {.addr=0x49e4, .value=0x73},
    };
    const struct CPU_State final_cpu = {.pc=0x49e5, .a=0xcf, .x=0xf5, .y=0xc9, .sp=0x00, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x0073, .value=0x20}, {.addr=0x49e3, .value=0x3e}, {.addr=0x49e4, .value=0x73},
    };
    const struct BusEvent events[] = {
        {.addr=0x49e3, .value=0x3e, .type=IO_READ},
        {.addr=0x49e4, .value=0x73, .type=IO_READ},
        {.addr=0x0073, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0129) {
    const struct CPU_State initial_cpu = {.pc=0x6683, .a=0xe5, .x=0xd2, .y=0x3a, .sp=0x40, .status=0xfe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fb, .value=0xcd}, {.addr=0x6683, .value=0x3e}, {.addr=0x6684, .value=0xfb},
    };
    const struct CPU_State final_cpu = {.pc=0x6685, .a=0xe5, .x=0xd2, .y=0x3a, .sp=0x40, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fb, .value=0xcd}, {.addr=0x6683, .value=0x3e}, {.addr=0x6684, .value=0xfb},
    };
    const struct BusEvent events[] = {
        {.addr=0x6683, .value=0x3e, .type=IO_READ},
        {.addr=0x6684, .value=0xfb, .type=IO_READ},
        {.addr=0x01fb, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_012A) {
    const struct CPU_State initial_cpu = {.pc=0x1bbf, .a=0xc3, .x=0x11, .y=0x0d, .sp=0xea, .status=0xa4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0149, .value=0xe3}, {.addr=0x1bbf, .value=0x3e}, {.addr=0x1bc0, .value=0x49},
    };
    const struct CPU_State final_cpu = {.pc=0x1bc1, .a=0xc3, .x=0x11, .y=0x0d, .sp=0xea, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x0149, .value=0xe3}, {.addr=0x1bbf, .value=0x3e}, {.addr=0x1bc0, .value=0x49},
    };
    const struct BusEvent events[] = {
        {.addr=0x1bbf, .value=0x3e, .type=IO_READ},
        {.addr=0x1bc0, .value=0x49, .type=IO_READ},
        {.addr=0x0149, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_012B) {
    const struct CPU_State initial_cpu = {.pc=0x1140, .a=0xc4, .x=0x65, .y=0xbb, .sp=0x52, .status=0x0d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ed, .value=0x36}, {.addr=0x1140, .value=0x3e}, {.addr=0x1141, .value=0xed},
    };
    const struct CPU_State final_cpu = {.pc=0x1142, .a=0xc4, .x=0x65, .y=0xbb, .sp=0x52, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ed, .value=0x36}, {.addr=0x1140, .value=0x3e}, {.addr=0x1141, .value=0xed},
    };
    const struct BusEvent events[] = {
        {.addr=0x1140, .value=0x3e, .type=IO_READ},
        {.addr=0x1141, .value=0xed, .type=IO_READ},
        {.addr=0x00ed, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_012C) {
    const struct CPU_State initial_cpu = {.pc=0x21ae, .a=0x6b, .x=0x05, .y=0xa3, .sp=0x18, .status=0x42};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0031, .value=0x96}, {.addr=0x21ae, .value=0x3e}, {.addr=0x21af, .value=0x31},
    };
    const struct CPU_State final_cpu = {.pc=0x21b0, .a=0x6b, .x=0x05, .y=0xa3, .sp=0x18, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x0031, .value=0x96}, {.addr=0x21ae, .value=0x3e}, {.addr=0x21af, .value=0x31},
    };
    const struct BusEvent events[] = {
        {.addr=0x21ae, .value=0x3e, .type=IO_READ},
        {.addr=0x21af, .value=0x31, .type=IO_READ},
        {.addr=0x0031, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_012D) {
    const struct CPU_State initial_cpu = {.pc=0x96bb, .a=0x14, .x=0x7a, .y=0x96, .sp=0xea, .status=0x24};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f6, .value=0xb3}, {.addr=0x96bb, .value=0x3e}, {.addr=0x96bc, .value=0xf6},
    };
    const struct CPU_State final_cpu = {.pc=0x96bd, .a=0x14, .x=0x7a, .y=0x96, .sp=0xea, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f6, .value=0xb3}, {.addr=0x96bb, .value=0x3e}, {.addr=0x96bc, .value=0xf6},
    };
    const struct BusEvent events[] = {
        {.addr=0x96bb, .value=0x3e, .type=IO_READ},
        {.addr=0x96bc, .value=0xf6, .type=IO_READ},
        {.addr=0x01f6, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_012E) {
    const struct CPU_State initial_cpu = {.pc=0x6b48, .a=0x53, .x=0x91, .y=0x0a, .sp=0xee, .status=0x64};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010c, .value=0x61}, {.addr=0x6b48, .value=0x3e}, {.addr=0x6b49, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0x6b4a, .a=0x53, .x=0x91, .y=0x0a, .sp=0xee, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x010c, .value=0x61}, {.addr=0x6b48, .value=0x3e}, {.addr=0x6b49, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0x6b48, .value=0x3e, .type=IO_READ},
        {.addr=0x6b49, .value=0x0c, .type=IO_READ},
        {.addr=0x010c, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_012F) {
    const struct CPU_State initial_cpu = {.pc=0x2f81, .a=0x8a, .x=0x88, .y=0x87, .sp=0xf7, .status=0x3e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0106, .value=0xd7}, {.addr=0x2f81, .value=0x3e}, {.addr=0x2f82, .value=0x06},
    };
    const struct CPU_State final_cpu = {.pc=0x2f83, .a=0x8a, .x=0x88, .y=0x87, .sp=0xf7, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0106, .value=0xd7}, {.addr=0x2f81, .value=0x3e}, {.addr=0x2f82, .value=0x06},
    };
    const struct BusEvent events[] = {
        {.addr=0x2f81, .value=0x3e, .type=IO_READ},
        {.addr=0x2f82, .value=0x06, .type=IO_READ},
        {.addr=0x0106, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0130) {
    const struct CPU_State initial_cpu = {.pc=0xe4a1, .a=0x46, .x=0x2d, .y=0xa6, .sp=0xf9, .status=0xee};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0184, .value=0xfa}, {.addr=0xe4a1, .value=0x3e}, {.addr=0xe4a2, .value=0x84},
    };
    const struct CPU_State final_cpu = {.pc=0xe4a3, .a=0x46, .x=0x2d, .y=0xa6, .sp=0xf9, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0184, .value=0xfa}, {.addr=0xe4a1, .value=0x3e}, {.addr=0xe4a2, .value=0x84},
    };
    const struct BusEvent events[] = {
        {.addr=0xe4a1, .value=0x3e, .type=IO_READ},
        {.addr=0xe4a2, .value=0x84, .type=IO_READ},
        {.addr=0x0184, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0131) {
    const struct CPU_State initial_cpu = {.pc=0x2f7e, .a=0x4c, .x=0xcc, .y=0x9f, .sp=0x61, .status=0xde};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0061, .value=0xd8}, {.addr=0x2f7e, .value=0x3e}, {.addr=0x2f7f, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0x2f80, .a=0x4c, .x=0xcc, .y=0x9f, .sp=0x61, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0061, .value=0xd8}, {.addr=0x2f7e, .value=0x3e}, {.addr=0x2f7f, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0x2f7e, .value=0x3e, .type=IO_READ},
        {.addr=0x2f7f, .value=0x61, .type=IO_READ},
        {.addr=0x0061, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0132) {
    const struct CPU_State initial_cpu = {.pc=0x485d, .a=0xd1, .x=0x42, .y=0x8a, .sp=0xe9, .status=0x92};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0039, .value=0xb3}, {.addr=0x485d, .value=0x3e}, {.addr=0x485e, .value=0x39},
    };
    const struct CPU_State final_cpu = {.pc=0x485f, .a=0xd1, .x=0x42, .y=0x8a, .sp=0xe9, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x0039, .value=0xb3}, {.addr=0x485d, .value=0x3e}, {.addr=0x485e, .value=0x39},
    };
    const struct BusEvent events[] = {
        {.addr=0x485d, .value=0x3e, .type=IO_READ},
        {.addr=0x485e, .value=0x39, .type=IO_READ},
        {.addr=0x0039, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0133) {
    const struct CPU_State initial_cpu = {.pc=0x1258, .a=0xcc, .x=0x40, .y=0x88, .sp=0x56, .status=0xe1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01be, .value=0xef}, {.addr=0x1258, .value=0x3e}, {.addr=0x1259, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0x125a, .a=0xcc, .x=0x40, .y=0x88, .sp=0x56, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x01be, .value=0xef}, {.addr=0x1258, .value=0x3e}, {.addr=0x1259, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0x1258, .value=0x3e, .type=IO_READ},
        {.addr=0x1259, .value=0xbe, .type=IO_READ},
        {.addr=0x01be, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0134) {
    const struct CPU_State initial_cpu = {.pc=0xdce0, .a=0xf7, .x=0x5a, .y=0x0e, .sp=0xc4, .status=0xdd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b3, .value=0x82}, {.addr=0xdce0, .value=0x3e}, {.addr=0xdce1, .value=0xb3},
    };
    const struct CPU_State final_cpu = {.pc=0xdce2, .a=0xf7, .x=0x5a, .y=0x0e, .sp=0xc4, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b3, .value=0x82}, {.addr=0xdce0, .value=0x3e}, {.addr=0xdce1, .value=0xb3},
    };
    const struct BusEvent events[] = {
        {.addr=0xdce0, .value=0x3e, .type=IO_READ},
        {.addr=0xdce1, .value=0xb3, .type=IO_READ},
        {.addr=0x00b3, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0135) {
    const struct CPU_State initial_cpu = {.pc=0xc097, .a=0x67, .x=0xbb, .y=0xe0, .sp=0x54, .status=0x34};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0136, .value=0x20}, {.addr=0xc097, .value=0x3e}, {.addr=0xc098, .value=0x36},
    };
    const struct CPU_State final_cpu = {.pc=0xc099, .a=0x67, .x=0xbb, .y=0xe0, .sp=0x54, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0136, .value=0x20}, {.addr=0xc097, .value=0x3e}, {.addr=0xc098, .value=0x36},
    };
    const struct BusEvent events[] = {
        {.addr=0xc097, .value=0x3e, .type=IO_READ},
        {.addr=0xc098, .value=0x36, .type=IO_READ},
        {.addr=0x0136, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0136) {
    const struct CPU_State initial_cpu = {.pc=0x6328, .a=0x61, .x=0x36, .y=0x51, .sp=0x4f, .status=0x3b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0110, .value=0x10}, {.addr=0x6328, .value=0x3e}, {.addr=0x6329, .value=0x10},
    };
    const struct CPU_State final_cpu = {.pc=0x632a, .a=0x61, .x=0x36, .y=0x51, .sp=0x4f, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x0110, .value=0x10}, {.addr=0x6328, .value=0x3e}, {.addr=0x6329, .value=0x10},
    };
    const struct BusEvent events[] = {
        {.addr=0x6328, .value=0x3e, .type=IO_READ},
        {.addr=0x6329, .value=0x10, .type=IO_READ},
        {.addr=0x0110, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0137) {
    const struct CPU_State initial_cpu = {.pc=0xdbdc, .a=0x76, .x=0x07, .y=0x6c, .sp=0xd1, .status=0xf9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0106, .value=0xcd}, {.addr=0xdbdc, .value=0x3e}, {.addr=0xdbdd, .value=0x06},
    };
    const struct CPU_State final_cpu = {.pc=0xdbde, .a=0x76, .x=0x07, .y=0x6c, .sp=0xd1, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x0106, .value=0xcd}, {.addr=0xdbdc, .value=0x3e}, {.addr=0xdbdd, .value=0x06},
    };
    const struct BusEvent events[] = {
        {.addr=0xdbdc, .value=0x3e, .type=IO_READ},
        {.addr=0xdbdd, .value=0x06, .type=IO_READ},
        {.addr=0x0106, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0139) {
    const struct CPU_State initial_cpu = {.pc=0xf7ac, .a=0xd5, .x=0xcf, .y=0x97, .sp=0x72, .status=0x2e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e2, .value=0xe5}, {.addr=0xf7ac, .value=0x3e}, {.addr=0xf7ad, .value=0xe2},
    };
    const struct CPU_State final_cpu = {.pc=0xf7ae, .a=0xd5, .x=0xcf, .y=0x97, .sp=0x72, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e2, .value=0xe5}, {.addr=0xf7ac, .value=0x3e}, {.addr=0xf7ad, .value=0xe2},
    };
    const struct BusEvent events[] = {
        {.addr=0xf7ac, .value=0x3e, .type=IO_READ},
        {.addr=0xf7ad, .value=0xe2, .type=IO_READ},
        {.addr=0x01e2, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_013A) {
    const struct CPU_State initial_cpu = {.pc=0x1656, .a=0x2b, .x=0xe2, .y=0x7a, .sp=0x1f, .status=0x70};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0190, .value=0x73}, {.addr=0x1656, .value=0x3e}, {.addr=0x1657, .value=0x90},
    };
    const struct CPU_State final_cpu = {.pc=0x1658, .a=0x2b, .x=0xe2, .y=0x7a, .sp=0x1f, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x0190, .value=0x73}, {.addr=0x1656, .value=0x3e}, {.addr=0x1657, .value=0x90},
    };
    const struct BusEvent events[] = {
        {.addr=0x1656, .value=0x3e, .type=IO_READ},
        {.addr=0x1657, .value=0x90, .type=IO_READ},
        {.addr=0x0190, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_013B) {
    const struct CPU_State initial_cpu = {.pc=0xe5d5, .a=0x57, .x=0xa3, .y=0xf2, .sp=0xc9, .status=0x91};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b7, .value=0x61}, {.addr=0xe5d5, .value=0x3e}, {.addr=0xe5d6, .value=0xb7},
    };
    const struct CPU_State final_cpu = {.pc=0xe5d7, .a=0x57, .x=0xa3, .y=0xf2, .sp=0xc9, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b7, .value=0x61}, {.addr=0xe5d5, .value=0x3e}, {.addr=0xe5d6, .value=0xb7},
    };
    const struct BusEvent events[] = {
        {.addr=0xe5d5, .value=0x3e, .type=IO_READ},
        {.addr=0xe5d6, .value=0xb7, .type=IO_READ},
        {.addr=0x00b7, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_013C) {
    const struct CPU_State initial_cpu = {.pc=0x2b73, .a=0xda, .x=0x6d, .y=0xb9, .sp=0xe1, .status=0x9f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0049, .value=0xab}, {.addr=0x2b73, .value=0x3e}, {.addr=0x2b74, .value=0x49},
    };
    const struct CPU_State final_cpu = {.pc=0x2b75, .a=0xda, .x=0x6d, .y=0xb9, .sp=0xe1, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0049, .value=0xab}, {.addr=0x2b73, .value=0x3e}, {.addr=0x2b74, .value=0x49},
    };
    const struct BusEvent events[] = {
        {.addr=0x2b73, .value=0x3e, .type=IO_READ},
        {.addr=0x2b74, .value=0x49, .type=IO_READ},
        {.addr=0x0049, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_013D) {
    const struct CPU_State initial_cpu = {.pc=0xc2b6, .a=0x37, .x=0xc2, .y=0x9b, .sp=0x3f, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004c, .value=0xec}, {.addr=0xc2b6, .value=0x3e}, {.addr=0xc2b7, .value=0x4c},
    };
    const struct CPU_State final_cpu = {.pc=0xc2b8, .a=0x37, .x=0xc2, .y=0x9b, .sp=0x3f, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x004c, .value=0xec}, {.addr=0xc2b6, .value=0x3e}, {.addr=0xc2b7, .value=0x4c},
    };
    const struct BusEvent events[] = {
        {.addr=0xc2b6, .value=0x3e, .type=IO_READ},
        {.addr=0xc2b7, .value=0x4c, .type=IO_READ},
        {.addr=0x004c, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_013E) {
    const struct CPU_State initial_cpu = {.pc=0x8505, .a=0x56, .x=0xa6, .y=0x71, .sp=0xf3, .status=0x6c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017e, .value=0xe3}, {.addr=0x8505, .value=0x3e}, {.addr=0x8506, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0x8507, .a=0x56, .x=0xa6, .y=0x71, .sp=0xf3, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x017e, .value=0xe3}, {.addr=0x8505, .value=0x3e}, {.addr=0x8506, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0x8505, .value=0x3e, .type=IO_READ},
        {.addr=0x8506, .value=0x7e, .type=IO_READ},
        {.addr=0x017e, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_013F) {
    const struct CPU_State initial_cpu = {.pc=0x3d4d, .a=0x46, .x=0x36, .y=0x4e, .sp=0x91, .status=0x39};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0182, .value=0xa2}, {.addr=0x3d4d, .value=0x3e}, {.addr=0x3d4e, .value=0x82},
    };
    const struct CPU_State final_cpu = {.pc=0x3d4f, .a=0x46, .x=0x36, .y=0x4e, .sp=0x91, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0182, .value=0xa2}, {.addr=0x3d4d, .value=0x3e}, {.addr=0x3d4e, .value=0x82},
    };
    const struct BusEvent events[] = {
        {.addr=0x3d4d, .value=0x3e, .type=IO_READ},
        {.addr=0x3d4e, .value=0x82, .type=IO_READ},
        {.addr=0x0182, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0140) {
    const struct CPU_State initial_cpu = {.pc=0x9f1d, .a=0x52, .x=0x92, .y=0xca, .sp=0x9c, .status=0x57};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0032, .value=0x6f}, {.addr=0x9f1d, .value=0x3e}, {.addr=0x9f1e, .value=0x32},
    };
    const struct CPU_State final_cpu = {.pc=0x9f1f, .a=0x52, .x=0x92, .y=0xca, .sp=0x9c, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x0032, .value=0x6f}, {.addr=0x9f1d, .value=0x3e}, {.addr=0x9f1e, .value=0x32},
    };
    const struct BusEvent events[] = {
        {.addr=0x9f1d, .value=0x3e, .type=IO_READ},
        {.addr=0x9f1e, .value=0x32, .type=IO_READ},
        {.addr=0x0032, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0141) {
    const struct CPU_State initial_cpu = {.pc=0x9b67, .a=0x93, .x=0xcb, .y=0xef, .sp=0xb4, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cd, .value=0x4e}, {.addr=0x9b67, .value=0x3e}, {.addr=0x9b68, .value=0xcd},
    };
    const struct CPU_State final_cpu = {.pc=0x9b69, .a=0x93, .x=0xcb, .y=0xef, .sp=0xb4, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cd, .value=0x4e}, {.addr=0x9b67, .value=0x3e}, {.addr=0x9b68, .value=0xcd},
    };
    const struct BusEvent events[] = {
        {.addr=0x9b67, .value=0x3e, .type=IO_READ},
        {.addr=0x9b68, .value=0xcd, .type=IO_READ},
        {.addr=0x01cd, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0142) {
    const struct CPU_State initial_cpu = {.pc=0xbbe6, .a=0x7d, .x=0xab, .y=0x0d, .sp=0x73, .status=0x0c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bf, .value=0xd1}, {.addr=0xbbe6, .value=0x3e}, {.addr=0xbbe7, .value=0xbf},
    };
    const struct CPU_State final_cpu = {.pc=0xbbe8, .a=0x7d, .x=0xab, .y=0x0d, .sp=0x73, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bf, .value=0xd1}, {.addr=0xbbe6, .value=0x3e}, {.addr=0xbbe7, .value=0xbf},
    };
    const struct BusEvent events[] = {
        {.addr=0xbbe6, .value=0x3e, .type=IO_READ},
        {.addr=0xbbe7, .value=0xbf, .type=IO_READ},
        {.addr=0x00bf, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0143) {
    const struct CPU_State initial_cpu = {.pc=0x7903, .a=0xbd, .x=0x62, .y=0xe8, .sp=0xa8, .status=0xf0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012d, .value=0xa3}, {.addr=0x7903, .value=0x3e}, {.addr=0x7904, .value=0x2d},
    };
    const struct CPU_State final_cpu = {.pc=0x7905, .a=0xbd, .x=0x62, .y=0xe8, .sp=0xa8, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x012d, .value=0xa3}, {.addr=0x7903, .value=0x3e}, {.addr=0x7904, .value=0x2d},
    };
    const struct BusEvent events[] = {
        {.addr=0x7903, .value=0x3e, .type=IO_READ},
        {.addr=0x7904, .value=0x2d, .type=IO_READ},
        {.addr=0x012d, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0144) {
    const struct CPU_State initial_cpu = {.pc=0x7580, .a=0x02, .x=0x1c, .y=0x8c, .sp=0x00, .status=0xf0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e0, .value=0x62}, {.addr=0x7580, .value=0x3e}, {.addr=0x7581, .value=0xe0},
    };
    const struct CPU_State final_cpu = {.pc=0x7582, .a=0x02, .x=0x1c, .y=0x8c, .sp=0x00, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e0, .value=0x62}, {.addr=0x7580, .value=0x3e}, {.addr=0x7581, .value=0xe0},
    };
    const struct BusEvent events[] = {
        {.addr=0x7580, .value=0x3e, .type=IO_READ},
        {.addr=0x7581, .value=0xe0, .type=IO_READ},
        {.addr=0x01e0, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0145) {
    const struct CPU_State initial_cpu = {.pc=0x4f87, .a=0x01, .x=0x26, .y=0xb1, .sp=0xab, .status=0xd4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003d, .value=0xe7}, {.addr=0x4f87, .value=0x3e}, {.addr=0x4f88, .value=0x3d},
    };
    const struct CPU_State final_cpu = {.pc=0x4f89, .a=0x01, .x=0x26, .y=0xb1, .sp=0xab, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x003d, .value=0xe7}, {.addr=0x4f87, .value=0x3e}, {.addr=0x4f88, .value=0x3d},
    };
    const struct BusEvent events[] = {
        {.addr=0x4f87, .value=0x3e, .type=IO_READ},
        {.addr=0x4f88, .value=0x3d, .type=IO_READ},
        {.addr=0x003d, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0146) {
    const struct CPU_State initial_cpu = {.pc=0x8eab, .a=0xb6, .x=0x4a, .y=0x78, .sp=0x64, .status=0x3d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bd, .value=0x99}, {.addr=0x8eab, .value=0x3e}, {.addr=0x8eac, .value=0xbd},
    };
    const struct CPU_State final_cpu = {.pc=0x8ead, .a=0xb6, .x=0x4a, .y=0x78, .sp=0x64, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bd, .value=0x99}, {.addr=0x8eab, .value=0x3e}, {.addr=0x8eac, .value=0xbd},
    };
    const struct BusEvent events[] = {
        {.addr=0x8eab, .value=0x3e, .type=IO_READ},
        {.addr=0x8eac, .value=0xbd, .type=IO_READ},
        {.addr=0x01bd, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0147) {
    const struct CPU_State initial_cpu = {.pc=0x9472, .a=0x3f, .x=0xdd, .y=0xce, .sp=0x75, .status=0x7d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b0, .value=0xed}, {.addr=0x9472, .value=0x3e}, {.addr=0x9473, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0x9474, .a=0x3f, .x=0xdd, .y=0xce, .sp=0x75, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b0, .value=0xed}, {.addr=0x9472, .value=0x3e}, {.addr=0x9473, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0x9472, .value=0x3e, .type=IO_READ},
        {.addr=0x9473, .value=0xb0, .type=IO_READ},
        {.addr=0x01b0, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0149) {
    const struct CPU_State initial_cpu = {.pc=0xb4f1, .a=0x10, .x=0x00, .y=0x4c, .sp=0x68, .status=0x70};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0139, .value=0x4a}, {.addr=0xb4f1, .value=0x3e}, {.addr=0xb4f2, .value=0x39},
    };
    const struct CPU_State final_cpu = {.pc=0xb4f3, .a=0x10, .x=0x00, .y=0x4c, .sp=0x68, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0139, .value=0x4a}, {.addr=0xb4f1, .value=0x3e}, {.addr=0xb4f2, .value=0x39},
    };
    const struct BusEvent events[] = {
        {.addr=0xb4f1, .value=0x3e, .type=IO_READ},
        {.addr=0xb4f2, .value=0x39, .type=IO_READ},
        {.addr=0x0139, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_014A) {
    const struct CPU_State initial_cpu = {.pc=0xc0c1, .a=0x63, .x=0x0f, .y=0x23, .sp=0x3e, .status=0x1e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004b, .value=0x9f}, {.addr=0xc0c1, .value=0x3e}, {.addr=0xc0c2, .value=0x4b},
    };
    const struct CPU_State final_cpu = {.pc=0xc0c3, .a=0x63, .x=0x0f, .y=0x23, .sp=0x3e, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x004b, .value=0x9f}, {.addr=0xc0c1, .value=0x3e}, {.addr=0xc0c2, .value=0x4b},
    };
    const struct BusEvent events[] = {
        {.addr=0xc0c1, .value=0x3e, .type=IO_READ},
        {.addr=0xc0c2, .value=0x4b, .type=IO_READ},
        {.addr=0x004b, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_014B) {
    const struct CPU_State initial_cpu = {.pc=0xf1f8, .a=0x65, .x=0xd7, .y=0xdf, .sp=0x5f, .status=0x73};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014d, .value=0xcc}, {.addr=0xf1f8, .value=0x3e}, {.addr=0xf1f9, .value=0x4d},
    };
    const struct CPU_State final_cpu = {.pc=0xf1fa, .a=0x65, .x=0xd7, .y=0xdf, .sp=0x5f, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x014d, .value=0xcc}, {.addr=0xf1f8, .value=0x3e}, {.addr=0xf1f9, .value=0x4d},
    };
    const struct BusEvent events[] = {
        {.addr=0xf1f8, .value=0x3e, .type=IO_READ},
        {.addr=0xf1f9, .value=0x4d, .type=IO_READ},
        {.addr=0x014d, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_014D) {
    const struct CPU_State initial_cpu = {.pc=0xd8cf, .a=0xe0, .x=0x37, .y=0x19, .sp=0xdc, .status=0x4a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005a, .value=0x54}, {.addr=0xd8cf, .value=0x3e}, {.addr=0xd8d0, .value=0x5a},
    };
    const struct CPU_State final_cpu = {.pc=0xd8d1, .a=0xe0, .x=0x37, .y=0x19, .sp=0xdc, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x005a, .value=0x54}, {.addr=0xd8cf, .value=0x3e}, {.addr=0xd8d0, .value=0x5a},
    };
    const struct BusEvent events[] = {
        {.addr=0xd8cf, .value=0x3e, .type=IO_READ},
        {.addr=0xd8d0, .value=0x5a, .type=IO_READ},
        {.addr=0x005a, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_014E) {
    const struct CPU_State initial_cpu = {.pc=0x44d4, .a=0x39, .x=0x5b, .y=0x41, .sp=0x2f, .status=0x4a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002d, .value=0xc1}, {.addr=0x44d4, .value=0x3e}, {.addr=0x44d5, .value=0x2d},
    };
    const struct CPU_State final_cpu = {.pc=0x44d6, .a=0x39, .x=0x5b, .y=0x41, .sp=0x2f, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x002d, .value=0xc1}, {.addr=0x44d4, .value=0x3e}, {.addr=0x44d5, .value=0x2d},
    };
    const struct BusEvent events[] = {
        {.addr=0x44d4, .value=0x3e, .type=IO_READ},
        {.addr=0x44d5, .value=0x2d, .type=IO_READ},
        {.addr=0x002d, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_014F) {
    const struct CPU_State initial_cpu = {.pc=0xca07, .a=0x8c, .x=0xc0, .y=0xe5, .sp=0x90, .status=0x82};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009e, .value=0x00}, {.addr=0xca07, .value=0x3e}, {.addr=0xca08, .value=0x9e},
    };
    const struct CPU_State final_cpu = {.pc=0xca09, .a=0x8c, .x=0xc0, .y=0xe5, .sp=0x90, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x009e, .value=0x00}, {.addr=0xca07, .value=0x3e}, {.addr=0xca08, .value=0x9e},
    };
    const struct BusEvent events[] = {
        {.addr=0xca07, .value=0x3e, .type=IO_READ},
        {.addr=0xca08, .value=0x9e, .type=IO_READ},
        {.addr=0x009e, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0150) {
    const struct CPU_State initial_cpu = {.pc=0xae21, .a=0xba, .x=0x90, .y=0xd1, .sp=0x70, .status=0x76};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018e, .value=0x4c}, {.addr=0xae21, .value=0x3e}, {.addr=0xae22, .value=0x8e},
    };
    const struct CPU_State final_cpu = {.pc=0xae23, .a=0xba, .x=0x90, .y=0xd1, .sp=0x70, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x018e, .value=0x4c}, {.addr=0xae21, .value=0x3e}, {.addr=0xae22, .value=0x8e},
    };
    const struct BusEvent events[] = {
        {.addr=0xae21, .value=0x3e, .type=IO_READ},
        {.addr=0xae22, .value=0x8e, .type=IO_READ},
        {.addr=0x018e, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0151) {
    const struct CPU_State initial_cpu = {.pc=0x8a66, .a=0x0f, .x=0xd3, .y=0x02, .sp=0x07, .status=0x97};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0082, .value=0x2e}, {.addr=0x8a66, .value=0x3e}, {.addr=0x8a67, .value=0x82},
    };
    const struct CPU_State final_cpu = {.pc=0x8a68, .a=0x0f, .x=0xd3, .y=0x02, .sp=0x07, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x0082, .value=0x2e}, {.addr=0x8a66, .value=0x3e}, {.addr=0x8a67, .value=0x82},
    };
    const struct BusEvent events[] = {
        {.addr=0x8a66, .value=0x3e, .type=IO_READ},
        {.addr=0x8a67, .value=0x82, .type=IO_READ},
        {.addr=0x0082, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0152) {
    const struct CPU_State initial_cpu = {.pc=0xb68f, .a=0xd7, .x=0x7a, .y=0x29, .sp=0x82, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010b, .value=0x47}, {.addr=0xb68f, .value=0x3e}, {.addr=0xb690, .value=0x0b},
    };
    const struct CPU_State final_cpu = {.pc=0xb691, .a=0xd7, .x=0x7a, .y=0x29, .sp=0x82, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x010b, .value=0x47}, {.addr=0xb68f, .value=0x3e}, {.addr=0xb690, .value=0x0b},
    };
    const struct BusEvent events[] = {
        {.addr=0xb68f, .value=0x3e, .type=IO_READ},
        {.addr=0xb690, .value=0x0b, .type=IO_READ},
        {.addr=0x010b, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0153) {
    const struct CPU_State initial_cpu = {.pc=0x2af0, .a=0xa7, .x=0x39, .y=0x83, .sp=0x72, .status=0xcf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000b, .value=0xc2}, {.addr=0x2af0, .value=0x3e}, {.addr=0x2af1, .value=0x0b},
    };
    const struct CPU_State final_cpu = {.pc=0x2af2, .a=0xa7, .x=0x39, .y=0x83, .sp=0x72, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x000b, .value=0xc2}, {.addr=0x2af0, .value=0x3e}, {.addr=0x2af1, .value=0x0b},
    };
    const struct BusEvent events[] = {
        {.addr=0x2af0, .value=0x3e, .type=IO_READ},
        {.addr=0x2af1, .value=0x0b, .type=IO_READ},
        {.addr=0x000b, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0154) {
    const struct CPU_State initial_cpu = {.pc=0x1a65, .a=0x75, .x=0x34, .y=0x20, .sp=0x6e, .status=0xb4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011c, .value=0x5d}, {.addr=0x1a65, .value=0x3e}, {.addr=0x1a66, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0x1a67, .a=0x75, .x=0x34, .y=0x20, .sp=0x6e, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x011c, .value=0x5d}, {.addr=0x1a65, .value=0x3e}, {.addr=0x1a66, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0x1a65, .value=0x3e, .type=IO_READ},
        {.addr=0x1a66, .value=0x1c, .type=IO_READ},
        {.addr=0x011c, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0156) {
    const struct CPU_State initial_cpu = {.pc=0x726c, .a=0x9f, .x=0x4e, .y=0xaa, .sp=0xbc, .status=0x43};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001a, .value=0x88}, {.addr=0x726c, .value=0x3e}, {.addr=0x726d, .value=0x1a},
    };
    const struct CPU_State final_cpu = {.pc=0x726e, .a=0x9f, .x=0x4e, .y=0xaa, .sp=0xbc, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x001a, .value=0x88}, {.addr=0x726c, .value=0x3e}, {.addr=0x726d, .value=0x1a},
    };
    const struct BusEvent events[] = {
        {.addr=0x726c, .value=0x3e, .type=IO_READ},
        {.addr=0x726d, .value=0x1a, .type=IO_READ},
        {.addr=0x001a, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0157) {
    const struct CPU_State initial_cpu = {.pc=0x96c0, .a=0xe2, .x=0x8f, .y=0x12, .sp=0xbf, .status=0x8b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0053, .value=0xc8}, {.addr=0x96c0, .value=0x3e}, {.addr=0x96c1, .value=0x53},
    };
    const struct CPU_State final_cpu = {.pc=0x96c2, .a=0xe2, .x=0x8f, .y=0x12, .sp=0xbf, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x0053, .value=0xc8}, {.addr=0x96c0, .value=0x3e}, {.addr=0x96c1, .value=0x53},
    };
    const struct BusEvent events[] = {
        {.addr=0x96c0, .value=0x3e, .type=IO_READ},
        {.addr=0x96c1, .value=0x53, .type=IO_READ},
        {.addr=0x0053, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0158) {
    const struct CPU_State initial_cpu = {.pc=0x12b1, .a=0x5a, .x=0xcb, .y=0x40, .sp=0x1a, .status=0xdd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0078, .value=0xff}, {.addr=0x12b1, .value=0x3e}, {.addr=0x12b2, .value=0x78},
    };
    const struct CPU_State final_cpu = {.pc=0x12b3, .a=0x5a, .x=0xcb, .y=0x40, .sp=0x1a, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0078, .value=0xff}, {.addr=0x12b1, .value=0x3e}, {.addr=0x12b2, .value=0x78},
    };
    const struct BusEvent events[] = {
        {.addr=0x12b1, .value=0x3e, .type=IO_READ},
        {.addr=0x12b2, .value=0x78, .type=IO_READ},
        {.addr=0x0078, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0159) {
    const struct CPU_State initial_cpu = {.pc=0xc74f, .a=0x4f, .x=0x3f, .y=0xec, .sp=0x1b, .status=0x01};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cf, .value=0x67}, {.addr=0xc74f, .value=0x3e}, {.addr=0xc750, .value=0xcf},
    };
    const struct CPU_State final_cpu = {.pc=0xc751, .a=0x4f, .x=0x3f, .y=0xec, .sp=0x1b, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cf, .value=0x67}, {.addr=0xc74f, .value=0x3e}, {.addr=0xc750, .value=0xcf},
    };
    const struct BusEvent events[] = {
        {.addr=0xc74f, .value=0x3e, .type=IO_READ},
        {.addr=0xc750, .value=0xcf, .type=IO_READ},
        {.addr=0x00cf, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_015A) {
    const struct CPU_State initial_cpu = {.pc=0x1898, .a=0x2c, .x=0xad, .y=0xe8, .sp=0x79, .status=0xce};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0013, .value=0x2a}, {.addr=0x1898, .value=0x3e}, {.addr=0x1899, .value=0x13},
    };
    const struct CPU_State final_cpu = {.pc=0x189a, .a=0x2c, .x=0xad, .y=0xe8, .sp=0x79, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0013, .value=0x2a}, {.addr=0x1898, .value=0x3e}, {.addr=0x1899, .value=0x13},
    };
    const struct BusEvent events[] = {
        {.addr=0x1898, .value=0x3e, .type=IO_READ},
        {.addr=0x1899, .value=0x13, .type=IO_READ},
        {.addr=0x0013, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_015B) {
    const struct CPU_State initial_cpu = {.pc=0x271e, .a=0xc3, .x=0x46, .y=0xfb, .sp=0xa7, .status=0xb5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f5, .value=0x97}, {.addr=0x271e, .value=0x3e}, {.addr=0x271f, .value=0xf5},
    };
    const struct CPU_State final_cpu = {.pc=0x2720, .a=0xc3, .x=0x46, .y=0xfb, .sp=0xa7, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f5, .value=0x97}, {.addr=0x271e, .value=0x3e}, {.addr=0x271f, .value=0xf5},
    };
    const struct BusEvent events[] = {
        {.addr=0x271e, .value=0x3e, .type=IO_READ},
        {.addr=0x271f, .value=0xf5, .type=IO_READ},
        {.addr=0x01f5, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_015C) {
    const struct CPU_State initial_cpu = {.pc=0x3d35, .a=0x54, .x=0x50, .y=0x47, .sp=0x41, .status=0xba};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d2, .value=0x6a}, {.addr=0x3d35, .value=0x3e}, {.addr=0x3d36, .value=0xd2},
    };
    const struct CPU_State final_cpu = {.pc=0x3d37, .a=0x54, .x=0x50, .y=0x47, .sp=0x41, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d2, .value=0x6a}, {.addr=0x3d35, .value=0x3e}, {.addr=0x3d36, .value=0xd2},
    };
    const struct BusEvent events[] = {
        {.addr=0x3d35, .value=0x3e, .type=IO_READ},
        {.addr=0x3d36, .value=0xd2, .type=IO_READ},
        {.addr=0x01d2, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_015D) {
    const struct CPU_State initial_cpu = {.pc=0x1b4e, .a=0x7f, .x=0xeb, .y=0x80, .sp=0xfb, .status=0x50};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bf, .value=0x85}, {.addr=0x1b4e, .value=0x3e}, {.addr=0x1b4f, .value=0xbf},
    };
    const struct CPU_State final_cpu = {.pc=0x1b50, .a=0x7f, .x=0xeb, .y=0x80, .sp=0xfb, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bf, .value=0x85}, {.addr=0x1b4e, .value=0x3e}, {.addr=0x1b4f, .value=0xbf},
    };
    const struct BusEvent events[] = {
        {.addr=0x1b4e, .value=0x3e, .type=IO_READ},
        {.addr=0x1b4f, .value=0xbf, .type=IO_READ},
        {.addr=0x00bf, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_015E) {
    const struct CPU_State initial_cpu = {.pc=0x964e, .a=0xa2, .x=0x06, .y=0x6f, .sp=0x2c, .status=0x72};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0110, .value=0x9e}, {.addr=0x964e, .value=0x3e}, {.addr=0x964f, .value=0x10},
    };
    const struct CPU_State final_cpu = {.pc=0x9650, .a=0xa2, .x=0x06, .y=0x6f, .sp=0x2c, .status=0x70};
    const struct RamEntry final_ram[] = {
        {.addr=0x0110, .value=0x9e}, {.addr=0x964e, .value=0x3e}, {.addr=0x964f, .value=0x10},
    };
    const struct BusEvent events[] = {
        {.addr=0x964e, .value=0x3e, .type=IO_READ},
        {.addr=0x964f, .value=0x10, .type=IO_READ},
        {.addr=0x0110, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_015F) {
    const struct CPU_State initial_cpu = {.pc=0x188b, .a=0x47, .x=0x02, .y=0x7c, .sp=0xeb, .status=0x9b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0036, .value=0x93}, {.addr=0x188b, .value=0x3e}, {.addr=0x188c, .value=0x36},
    };
    const struct CPU_State final_cpu = {.pc=0x188d, .a=0x47, .x=0x02, .y=0x7c, .sp=0xeb, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x0036, .value=0x93}, {.addr=0x188b, .value=0x3e}, {.addr=0x188c, .value=0x36},
    };
    const struct BusEvent events[] = {
        {.addr=0x188b, .value=0x3e, .type=IO_READ},
        {.addr=0x188c, .value=0x36, .type=IO_READ},
        {.addr=0x0036, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0160) {
    const struct CPU_State initial_cpu = {.pc=0x0d92, .a=0x9b, .x=0x9f, .y=0x72, .sp=0x49, .status=0xd2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c7, .value=0x1f}, {.addr=0x0d92, .value=0x3e}, {.addr=0x0d93, .value=0xc7},
    };
    const struct CPU_State final_cpu = {.pc=0x0d94, .a=0x9b, .x=0x9f, .y=0x72, .sp=0x49, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c7, .value=0x1f}, {.addr=0x0d92, .value=0x3e}, {.addr=0x0d93, .value=0xc7},
    };
    const struct BusEvent events[] = {
        {.addr=0x0d92, .value=0x3e, .type=IO_READ},
        {.addr=0x0d93, .value=0xc7, .type=IO_READ},
        {.addr=0x00c7, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0162) {
    const struct CPU_State initial_cpu = {.pc=0xd770, .a=0xc1, .x=0x43, .y=0x15, .sp=0x06, .status=0xa6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0115, .value=0xa7}, {.addr=0xd770, .value=0x3e}, {.addr=0xd771, .value=0x15},
    };
    const struct CPU_State final_cpu = {.pc=0xd772, .a=0xc1, .x=0x43, .y=0x15, .sp=0x06, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0115, .value=0xa7}, {.addr=0xd770, .value=0x3e}, {.addr=0xd771, .value=0x15},
    };
    const struct BusEvent events[] = {
        {.addr=0xd770, .value=0x3e, .type=IO_READ},
        {.addr=0xd771, .value=0x15, .type=IO_READ},
        {.addr=0x0115, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0163) {
    const struct CPU_State initial_cpu = {.pc=0x580a, .a=0x9d, .x=0x26, .y=0x50, .sp=0x02, .status=0xea};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0118, .value=0xec}, {.addr=0x580a, .value=0x3e}, {.addr=0x580b, .value=0x18},
    };
    const struct CPU_State final_cpu = {.pc=0x580c, .a=0x9d, .x=0x26, .y=0x50, .sp=0x02, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x0118, .value=0xec}, {.addr=0x580a, .value=0x3e}, {.addr=0x580b, .value=0x18},
    };
    const struct BusEvent events[] = {
        {.addr=0x580a, .value=0x3e, .type=IO_READ},
        {.addr=0x580b, .value=0x18, .type=IO_READ},
        {.addr=0x0118, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0164) {
    const struct CPU_State initial_cpu = {.pc=0x062d, .a=0xd6, .x=0xe9, .y=0xff, .sp=0x73, .status=0xd9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005b, .value=0x27}, {.addr=0x062d, .value=0x3e}, {.addr=0x062e, .value=0x5b},
    };
    const struct CPU_State final_cpu = {.pc=0x062f, .a=0xd6, .x=0xe9, .y=0xff, .sp=0x73, .status=0xd9};
    const struct RamEntry final_ram[] = {
        {.addr=0x005b, .value=0x27}, {.addr=0x062d, .value=0x3e}, {.addr=0x062e, .value=0x5b},
    };
    const struct BusEvent events[] = {
        {.addr=0x062d, .value=0x3e, .type=IO_READ},
        {.addr=0x062e, .value=0x5b, .type=IO_READ},
        {.addr=0x005b, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0165) {
    const struct CPU_State initial_cpu = {.pc=0x7f2d, .a=0xc6, .x=0xd5, .y=0x00, .sp=0xce, .status=0x83};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0032, .value=0xf7}, {.addr=0x7f2d, .value=0x3e}, {.addr=0x7f2e, .value=0x32},
    };
    const struct CPU_State final_cpu = {.pc=0x7f2f, .a=0xc6, .x=0xd5, .y=0x00, .sp=0xce, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x0032, .value=0xf7}, {.addr=0x7f2d, .value=0x3e}, {.addr=0x7f2e, .value=0x32},
    };
    const struct BusEvent events[] = {
        {.addr=0x7f2d, .value=0x3e, .type=IO_READ},
        {.addr=0x7f2e, .value=0x32, .type=IO_READ},
        {.addr=0x0032, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0166) {
    const struct CPU_State initial_cpu = {.pc=0x67bd, .a=0x95, .x=0xc9, .y=0xd8, .sp=0x9a, .status=0xe9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f3, .value=0x10}, {.addr=0x67bd, .value=0x3e}, {.addr=0x67be, .value=0xf3},
    };
    const struct CPU_State final_cpu = {.pc=0x67bf, .a=0x95, .x=0xc9, .y=0xd8, .sp=0x9a, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f3, .value=0x10}, {.addr=0x67bd, .value=0x3e}, {.addr=0x67be, .value=0xf3},
    };
    const struct BusEvent events[] = {
        {.addr=0x67bd, .value=0x3e, .type=IO_READ},
        {.addr=0x67be, .value=0xf3, .type=IO_READ},
        {.addr=0x01f3, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0167) {
    const struct CPU_State initial_cpu = {.pc=0xcc46, .a=0xef, .x=0x5f, .y=0x04, .sp=0x9a, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0174, .value=0xfb}, {.addr=0xcc46, .value=0x3e}, {.addr=0xcc47, .value=0x74},
    };
    const struct CPU_State final_cpu = {.pc=0xcc48, .a=0xef, .x=0x5f, .y=0x04, .sp=0x9a, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x0174, .value=0xfb}, {.addr=0xcc46, .value=0x3e}, {.addr=0xcc47, .value=0x74},
    };
    const struct BusEvent events[] = {
        {.addr=0xcc46, .value=0x3e, .type=IO_READ},
        {.addr=0xcc47, .value=0x74, .type=IO_READ},
        {.addr=0x0174, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0168) {
    const struct CPU_State initial_cpu = {.pc=0xfa2a, .a=0x2e, .x=0x8e, .y=0x25, .sp=0x9b, .status=0x7b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0126, .value=0x27}, {.addr=0xfa2a, .value=0x3e}, {.addr=0xfa2b, .value=0x26},
    };
    const struct CPU_State final_cpu = {.pc=0xfa2c, .a=0x2e, .x=0x8e, .y=0x25, .sp=0x9b, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x0126, .value=0x27}, {.addr=0xfa2a, .value=0x3e}, {.addr=0xfa2b, .value=0x26},
    };
    const struct BusEvent events[] = {
        {.addr=0xfa2a, .value=0x3e, .type=IO_READ},
        {.addr=0xfa2b, .value=0x26, .type=IO_READ},
        {.addr=0x0126, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0169) {
    const struct CPU_State initial_cpu = {.pc=0xcdfd, .a=0xaa, .x=0x32, .y=0x99, .sp=0xd8, .status=0x5f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0033, .value=0x80}, {.addr=0xcdfd, .value=0x3e}, {.addr=0xcdfe, .value=0x33},
    };
    const struct CPU_State final_cpu = {.pc=0xcdff, .a=0xaa, .x=0x32, .y=0x99, .sp=0xd8, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0033, .value=0x80}, {.addr=0xcdfd, .value=0x3e}, {.addr=0xcdfe, .value=0x33},
    };
    const struct BusEvent events[] = {
        {.addr=0xcdfd, .value=0x3e, .type=IO_READ},
        {.addr=0xcdfe, .value=0x33, .type=IO_READ},
        {.addr=0x0033, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_016A) {
    const struct CPU_State initial_cpu = {.pc=0x95d0, .a=0xc6, .x=0x59, .y=0xfd, .sp=0x39, .status=0x16};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0054, .value=0xa7}, {.addr=0x95d0, .value=0x3e}, {.addr=0x95d1, .value=0x54},
    };
    const struct CPU_State final_cpu = {.pc=0x95d2, .a=0xc6, .x=0x59, .y=0xfd, .sp=0x39, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0054, .value=0xa7}, {.addr=0x95d0, .value=0x3e}, {.addr=0x95d1, .value=0x54},
    };
    const struct BusEvent events[] = {
        {.addr=0x95d0, .value=0x3e, .type=IO_READ},
        {.addr=0x95d1, .value=0x54, .type=IO_READ},
        {.addr=0x0054, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_016B) {
    const struct CPU_State initial_cpu = {.pc=0xaed1, .a=0x8a, .x=0xf0, .y=0x39, .sp=0xcb, .status=0xf4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bb, .value=0x92}, {.addr=0xaed1, .value=0x3e}, {.addr=0xaed2, .value=0xbb},
    };
    const struct CPU_State final_cpu = {.pc=0xaed3, .a=0x8a, .x=0xf0, .y=0x39, .sp=0xcb, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bb, .value=0x92}, {.addr=0xaed1, .value=0x3e}, {.addr=0xaed2, .value=0xbb},
    };
    const struct BusEvent events[] = {
        {.addr=0xaed1, .value=0x3e, .type=IO_READ},
        {.addr=0xaed2, .value=0xbb, .type=IO_READ},
        {.addr=0x01bb, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_016C) {
    const struct CPU_State initial_cpu = {.pc=0xd312, .a=0x01, .x=0xf9, .y=0x2b, .sp=0x80, .status=0xad};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0137, .value=0x60}, {.addr=0xd312, .value=0x3e}, {.addr=0xd313, .value=0x37},
    };
    const struct CPU_State final_cpu = {.pc=0xd314, .a=0x01, .x=0xf9, .y=0x2b, .sp=0x80, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x0137, .value=0x60}, {.addr=0xd312, .value=0x3e}, {.addr=0xd313, .value=0x37},
    };
    const struct BusEvent events[] = {
        {.addr=0xd312, .value=0x3e, .type=IO_READ},
        {.addr=0xd313, .value=0x37, .type=IO_READ},
        {.addr=0x0137, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_016D) {
    const struct CPU_State initial_cpu = {.pc=0x4b52, .a=0xec, .x=0x43, .y=0xe0, .sp=0x78, .status=0x03};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0054, .value=0xd7}, {.addr=0x4b52, .value=0x3e}, {.addr=0x4b53, .value=0x54},
    };
    const struct CPU_State final_cpu = {.pc=0x4b54, .a=0xec, .x=0x43, .y=0xe0, .sp=0x78, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x0054, .value=0xd7}, {.addr=0x4b52, .value=0x3e}, {.addr=0x4b53, .value=0x54},
    };
    const struct BusEvent events[] = {
        {.addr=0x4b52, .value=0x3e, .type=IO_READ},
        {.addr=0x4b53, .value=0x54, .type=IO_READ},
        {.addr=0x0054, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_016E) {
    const struct CPU_State initial_cpu = {.pc=0x6d0b, .a=0xe6, .x=0x82, .y=0xc3, .sp=0xe5, .status=0x1f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0046, .value=0xa9}, {.addr=0x6d0b, .value=0x3e}, {.addr=0x6d0c, .value=0x46},
    };
    const struct CPU_State final_cpu = {.pc=0x6d0d, .a=0xe6, .x=0x82, .y=0xc3, .sp=0xe5, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0046, .value=0xa9}, {.addr=0x6d0b, .value=0x3e}, {.addr=0x6d0c, .value=0x46},
    };
    const struct BusEvent events[] = {
        {.addr=0x6d0b, .value=0x3e, .type=IO_READ},
        {.addr=0x6d0c, .value=0x46, .type=IO_READ},
        {.addr=0x0046, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_016F) {
    const struct CPU_State initial_cpu = {.pc=0x4e05, .a=0x97, .x=0x00, .y=0x88, .sp=0x7c, .status=0x3b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017e, .value=0xd4}, {.addr=0x4e05, .value=0x3e}, {.addr=0x4e06, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0x4e07, .a=0x97, .x=0x00, .y=0x88, .sp=0x7c, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x017e, .value=0xd4}, {.addr=0x4e05, .value=0x3e}, {.addr=0x4e06, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0x4e05, .value=0x3e, .type=IO_READ},
        {.addr=0x4e06, .value=0x7e, .type=IO_READ},
        {.addr=0x017e, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0170) {
    const struct CPU_State initial_cpu = {.pc=0x804b, .a=0xe6, .x=0x6d, .y=0xab, .sp=0xe1, .status=0x36};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018c, .value=0x7b}, {.addr=0x804b, .value=0x3e}, {.addr=0x804c, .value=0x8c},
    };
    const struct CPU_State final_cpu = {.pc=0x804d, .a=0xe6, .x=0x6d, .y=0xab, .sp=0xe1, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x018c, .value=0x7b}, {.addr=0x804b, .value=0x3e}, {.addr=0x804c, .value=0x8c},
    };
    const struct BusEvent events[] = {
        {.addr=0x804b, .value=0x3e, .type=IO_READ},
        {.addr=0x804c, .value=0x8c, .type=IO_READ},
        {.addr=0x018c, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0171) {
    const struct CPU_State initial_cpu = {.pc=0xf146, .a=0x4f, .x=0x0b, .y=0xbf, .sp=0xf2, .status=0x12};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00dc, .value=0x69}, {.addr=0xf146, .value=0x3e}, {.addr=0xf147, .value=0xdc},
    };
    const struct CPU_State final_cpu = {.pc=0xf148, .a=0x4f, .x=0x0b, .y=0xbf, .sp=0xf2, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x00dc, .value=0x69}, {.addr=0xf146, .value=0x3e}, {.addr=0xf147, .value=0xdc},
    };
    const struct BusEvent events[] = {
        {.addr=0xf146, .value=0x3e, .type=IO_READ},
        {.addr=0xf147, .value=0xdc, .type=IO_READ},
        {.addr=0x00dc, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0172) {
    const struct CPU_State initial_cpu = {.pc=0xcafc, .a=0x47, .x=0xf0, .y=0xe9, .sp=0x89, .status=0x88};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0089, .value=0x57}, {.addr=0xcafc, .value=0x3e}, {.addr=0xcafd, .value=0x89},
    };
    const struct CPU_State final_cpu = {.pc=0xcafe, .a=0x47, .x=0xf0, .y=0xe9, .sp=0x89, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x0089, .value=0x57}, {.addr=0xcafc, .value=0x3e}, {.addr=0xcafd, .value=0x89},
    };
    const struct BusEvent events[] = {
        {.addr=0xcafc, .value=0x3e, .type=IO_READ},
        {.addr=0xcafd, .value=0x89, .type=IO_READ},
        {.addr=0x0089, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0173) {
    const struct CPU_State initial_cpu = {.pc=0x12cc, .a=0x32, .x=0x06, .y=0x72, .sp=0x68, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013c, .value=0xfa}, {.addr=0x12cc, .value=0x3e}, {.addr=0x12cd, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0x12ce, .a=0x32, .x=0x06, .y=0x72, .sp=0x68, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x013c, .value=0xfa}, {.addr=0x12cc, .value=0x3e}, {.addr=0x12cd, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0x12cc, .value=0x3e, .type=IO_READ},
        {.addr=0x12cd, .value=0x3c, .type=IO_READ},
        {.addr=0x013c, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0174) {
    const struct CPU_State initial_cpu = {.pc=0xf0e4, .a=0x67, .x=0x21, .y=0x79, .sp=0xb8, .status=0xd5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e0, .value=0xe2}, {.addr=0xf0e4, .value=0x3e}, {.addr=0xf0e5, .value=0xe0},
    };
    const struct CPU_State final_cpu = {.pc=0xf0e6, .a=0x67, .x=0x21, .y=0x79, .sp=0xb8, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e0, .value=0xe2}, {.addr=0xf0e4, .value=0x3e}, {.addr=0xf0e5, .value=0xe0},
    };
    const struct BusEvent events[] = {
        {.addr=0xf0e4, .value=0x3e, .type=IO_READ},
        {.addr=0xf0e5, .value=0xe0, .type=IO_READ},
        {.addr=0x00e0, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0175) {
    const struct CPU_State initial_cpu = {.pc=0x8318, .a=0x2b, .x=0xb3, .y=0x6f, .sp=0xfa, .status=0x93};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d9, .value=0xd6}, {.addr=0x8318, .value=0x3e}, {.addr=0x8319, .value=0xd9},
    };
    const struct CPU_State final_cpu = {.pc=0x831a, .a=0x2b, .x=0xb3, .y=0x6f, .sp=0xfa, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d9, .value=0xd6}, {.addr=0x8318, .value=0x3e}, {.addr=0x8319, .value=0xd9},
    };
    const struct BusEvent events[] = {
        {.addr=0x8318, .value=0x3e, .type=IO_READ},
        {.addr=0x8319, .value=0xd9, .type=IO_READ},
        {.addr=0x00d9, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0176) {
    const struct CPU_State initial_cpu = {.pc=0x7b23, .a=0xc3, .x=0x1b, .y=0xb3, .sp=0x5e, .status=0x80};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0098, .value=0xc3}, {.addr=0x7b23, .value=0x3e}, {.addr=0x7b24, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0x7b25, .a=0xc3, .x=0x1b, .y=0xb3, .sp=0x5e, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x0098, .value=0xc3}, {.addr=0x7b23, .value=0x3e}, {.addr=0x7b24, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0x7b23, .value=0x3e, .type=IO_READ},
        {.addr=0x7b24, .value=0x98, .type=IO_READ},
        {.addr=0x0098, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0177) {
    const struct CPU_State initial_cpu = {.pc=0xacda, .a=0xaa, .x=0xbc, .y=0x20, .sp=0x4a, .status=0x1d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0071, .value=0xfe}, {.addr=0xacda, .value=0x3e}, {.addr=0xacdb, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0xacdc, .a=0xaa, .x=0xbc, .y=0x20, .sp=0x4a, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0071, .value=0xfe}, {.addr=0xacda, .value=0x3e}, {.addr=0xacdb, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0xacda, .value=0x3e, .type=IO_READ},
        {.addr=0xacdb, .value=0x71, .type=IO_READ},
        {.addr=0x0071, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0178) {
    const struct CPU_State initial_cpu = {.pc=0x475c, .a=0x2e, .x=0xc2, .y=0x41, .sp=0xd8, .status=0x73};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f7, .value=0xf3}, {.addr=0x475c, .value=0x3e}, {.addr=0x475d, .value=0xf7},
    };
    const struct CPU_State final_cpu = {.pc=0x475e, .a=0x2e, .x=0xc2, .y=0x41, .sp=0xd8, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f7, .value=0xf3}, {.addr=0x475c, .value=0x3e}, {.addr=0x475d, .value=0xf7},
    };
    const struct BusEvent events[] = {
        {.addr=0x475c, .value=0x3e, .type=IO_READ},
        {.addr=0x475d, .value=0xf7, .type=IO_READ},
        {.addr=0x01f7, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0179) {
    const struct CPU_State initial_cpu = {.pc=0xd693, .a=0x37, .x=0xf9, .y=0x7f, .sp=0x38, .status=0x4d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bc, .value=0x51}, {.addr=0xd693, .value=0x3e}, {.addr=0xd694, .value=0xbc},
    };
    const struct CPU_State final_cpu = {.pc=0xd695, .a=0x37, .x=0xf9, .y=0x7f, .sp=0x38, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bc, .value=0x51}, {.addr=0xd693, .value=0x3e}, {.addr=0xd694, .value=0xbc},
    };
    const struct BusEvent events[] = {
        {.addr=0xd693, .value=0x3e, .type=IO_READ},
        {.addr=0xd694, .value=0xbc, .type=IO_READ},
        {.addr=0x00bc, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_017A) {
    const struct CPU_State initial_cpu = {.pc=0xd66e, .a=0xb1, .x=0x34, .y=0xd5, .sp=0xa8, .status=0x02};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bd, .value=0x4a}, {.addr=0xd66e, .value=0x3e}, {.addr=0xd66f, .value=0xbd},
    };
    const struct CPU_State final_cpu = {.pc=0xd670, .a=0xb1, .x=0x34, .y=0xd5, .sp=0xa8, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bd, .value=0x4a}, {.addr=0xd66e, .value=0x3e}, {.addr=0xd66f, .value=0xbd},
    };
    const struct BusEvent events[] = {
        {.addr=0xd66e, .value=0x3e, .type=IO_READ},
        {.addr=0xd66f, .value=0xbd, .type=IO_READ},
        {.addr=0x00bd, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_017B) {
    const struct CPU_State initial_cpu = {.pc=0x02b6, .a=0xd5, .x=0x11, .y=0xd8, .sp=0x48, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0161, .value=0xad}, {.addr=0x02b6, .value=0x3e}, {.addr=0x02b7, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0x02b8, .a=0xd5, .x=0x11, .y=0xd8, .sp=0x48, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x0161, .value=0xad}, {.addr=0x02b6, .value=0x3e}, {.addr=0x02b7, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0x02b6, .value=0x3e, .type=IO_READ},
        {.addr=0x02b7, .value=0x61, .type=IO_READ},
        {.addr=0x0161, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_017C) {
    const struct CPU_State initial_cpu = {.pc=0x8ac1, .a=0x2f, .x=0xfe, .y=0x4b, .sp=0xf6, .status=0x33};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0189, .value=0xed}, {.addr=0x8ac1, .value=0x3e}, {.addr=0x8ac2, .value=0x89},
    };
    const struct CPU_State final_cpu = {.pc=0x8ac3, .a=0x2f, .x=0xfe, .y=0x4b, .sp=0xf6, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0189, .value=0xed}, {.addr=0x8ac1, .value=0x3e}, {.addr=0x8ac2, .value=0x89},
    };
    const struct BusEvent events[] = {
        {.addr=0x8ac1, .value=0x3e, .type=IO_READ},
        {.addr=0x8ac2, .value=0x89, .type=IO_READ},
        {.addr=0x0189, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_017D) {
    const struct CPU_State initial_cpu = {.pc=0x852e, .a=0x62, .x=0x81, .y=0xe0, .sp=0x32, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0141, .value=0x02}, {.addr=0x852e, .value=0x3e}, {.addr=0x852f, .value=0x41},
    };
    const struct CPU_State final_cpu = {.pc=0x8530, .a=0x62, .x=0x81, .y=0xe0, .sp=0x32, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0141, .value=0x02}, {.addr=0x852e, .value=0x3e}, {.addr=0x852f, .value=0x41},
    };
    const struct BusEvent events[] = {
        {.addr=0x852e, .value=0x3e, .type=IO_READ},
        {.addr=0x852f, .value=0x41, .type=IO_READ},
        {.addr=0x0141, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_017E) {
    const struct CPU_State initial_cpu = {.pc=0xb5d8, .a=0x04, .x=0xed, .y=0x17, .sp=0xaf, .status=0x51};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0047, .value=0xf0}, {.addr=0xb5d8, .value=0x3e}, {.addr=0xb5d9, .value=0x47},
    };
    const struct CPU_State final_cpu = {.pc=0xb5da, .a=0x04, .x=0xed, .y=0x17, .sp=0xaf, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0047, .value=0xf0}, {.addr=0xb5d8, .value=0x3e}, {.addr=0xb5d9, .value=0x47},
    };
    const struct BusEvent events[] = {
        {.addr=0xb5d8, .value=0x3e, .type=IO_READ},
        {.addr=0xb5d9, .value=0x47, .type=IO_READ},
        {.addr=0x0047, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_017F) {
    const struct CPU_State initial_cpu = {.pc=0xa263, .a=0x84, .x=0xc9, .y=0x6b, .sp=0x3e, .status=0xa9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0150, .value=0x7c}, {.addr=0xa263, .value=0x3e}, {.addr=0xa264, .value=0x50},
    };
    const struct CPU_State final_cpu = {.pc=0xa265, .a=0x84, .x=0xc9, .y=0x6b, .sp=0x3e, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x0150, .value=0x7c}, {.addr=0xa263, .value=0x3e}, {.addr=0xa264, .value=0x50},
    };
    const struct BusEvent events[] = {
        {.addr=0xa263, .value=0x3e, .type=IO_READ},
        {.addr=0xa264, .value=0x50, .type=IO_READ},
        {.addr=0x0150, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0180) {
    const struct CPU_State initial_cpu = {.pc=0x2183, .a=0x13, .x=0xfd, .y=0x5c, .sp=0x32, .status=0x1b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0014, .value=0xfa}, {.addr=0x2183, .value=0x3e}, {.addr=0x2184, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0x2185, .a=0x13, .x=0xfd, .y=0x5c, .sp=0x32, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x0014, .value=0xfa}, {.addr=0x2183, .value=0x3e}, {.addr=0x2184, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0x2183, .value=0x3e, .type=IO_READ},
        {.addr=0x2184, .value=0x14, .type=IO_READ},
        {.addr=0x0014, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0181) {
    const struct CPU_State initial_cpu = {.pc=0x9497, .a=0xfe, .x=0x07, .y=0x0b, .sp=0xe5, .status=0x14};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006a, .value=0xc7}, {.addr=0x9497, .value=0x3e}, {.addr=0x9498, .value=0x6a},
    };
    const struct CPU_State final_cpu = {.pc=0x9499, .a=0xfe, .x=0x07, .y=0x0b, .sp=0xe5, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x006a, .value=0xc7}, {.addr=0x9497, .value=0x3e}, {.addr=0x9498, .value=0x6a},
    };
    const struct BusEvent events[] = {
        {.addr=0x9497, .value=0x3e, .type=IO_READ},
        {.addr=0x9498, .value=0x6a, .type=IO_READ},
        {.addr=0x006a, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0182) {
    const struct CPU_State initial_cpu = {.pc=0x004a, .a=0xf7, .x=0x9a, .y=0xc7, .sp=0xb2, .status=0x18};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002d, .value=0x20}, {.addr=0x004a, .value=0x3e}, {.addr=0x004b, .value=0x2d},
    };
    const struct CPU_State final_cpu = {.pc=0x004c, .a=0xf7, .x=0x9a, .y=0xc7, .sp=0xb2, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x002d, .value=0x20}, {.addr=0x004a, .value=0x3e}, {.addr=0x004b, .value=0x2d},
    };
    const struct BusEvent events[] = {
        {.addr=0x004a, .value=0x3e, .type=IO_READ},
        {.addr=0x004b, .value=0x2d, .type=IO_READ},
        {.addr=0x002d, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0183) {
    const struct CPU_State initial_cpu = {.pc=0xbafe, .a=0x2b, .x=0x3c, .y=0x53, .sp=0x54, .status=0xee};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016f, .value=0x9b}, {.addr=0xbafe, .value=0x3e}, {.addr=0xbaff, .value=0x6f},
    };
    const struct CPU_State final_cpu = {.pc=0xbb00, .a=0x2b, .x=0x3c, .y=0x53, .sp=0x54, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x016f, .value=0x9b}, {.addr=0xbafe, .value=0x3e}, {.addr=0xbaff, .value=0x6f},
    };
    const struct BusEvent events[] = {
        {.addr=0xbafe, .value=0x3e, .type=IO_READ},
        {.addr=0xbaff, .value=0x6f, .type=IO_READ},
        {.addr=0x016f, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0184) {
    const struct CPU_State initial_cpu = {.pc=0x5c19, .a=0xb9, .x=0x0b, .y=0xbd, .sp=0x1f, .status=0xbb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0182, .value=0xfd}, {.addr=0x5c19, .value=0x3e}, {.addr=0x5c1a, .value=0x82},
    };
    const struct CPU_State final_cpu = {.pc=0x5c1b, .a=0xb9, .x=0x0b, .y=0xbd, .sp=0x1f, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x0182, .value=0xfd}, {.addr=0x5c19, .value=0x3e}, {.addr=0x5c1a, .value=0x82},
    };
    const struct BusEvent events[] = {
        {.addr=0x5c19, .value=0x3e, .type=IO_READ},
        {.addr=0x5c1a, .value=0x82, .type=IO_READ},
        {.addr=0x0182, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0186) {
    const struct CPU_State initial_cpu = {.pc=0xfd06, .a=0x92, .x=0x1b, .y=0xd6, .sp=0x87, .status=0x63};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0135, .value=0xf0}, {.addr=0xfd06, .value=0x3e}, {.addr=0xfd07, .value=0x35},
    };
    const struct CPU_State final_cpu = {.pc=0xfd08, .a=0x92, .x=0x1b, .y=0xd6, .sp=0x87, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x0135, .value=0xf0}, {.addr=0xfd06, .value=0x3e}, {.addr=0xfd07, .value=0x35},
    };
    const struct BusEvent events[] = {
        {.addr=0xfd06, .value=0x3e, .type=IO_READ},
        {.addr=0xfd07, .value=0x35, .type=IO_READ},
        {.addr=0x0135, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0187) {
    const struct CPU_State initial_cpu = {.pc=0x8d78, .a=0x7e, .x=0x04, .y=0xda, .sp=0x7e, .status=0x1d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0079, .value=0x3c}, {.addr=0x8d78, .value=0x3e}, {.addr=0x8d79, .value=0x79},
    };
    const struct CPU_State final_cpu = {.pc=0x8d7a, .a=0x7e, .x=0x04, .y=0xda, .sp=0x7e, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0079, .value=0x3c}, {.addr=0x8d78, .value=0x3e}, {.addr=0x8d79, .value=0x79},
    };
    const struct BusEvent events[] = {
        {.addr=0x8d78, .value=0x3e, .type=IO_READ},
        {.addr=0x8d79, .value=0x79, .type=IO_READ},
        {.addr=0x0079, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0188) {
    const struct CPU_State initial_cpu = {.pc=0x9b76, .a=0x7a, .x=0x76, .y=0x0a, .sp=0x47, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0020, .value=0x33}, {.addr=0x9b76, .value=0x3e}, {.addr=0x9b77, .value=0x20},
    };
    const struct CPU_State final_cpu = {.pc=0x9b78, .a=0x7a, .x=0x76, .y=0x0a, .sp=0x47, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x0020, .value=0x33}, {.addr=0x9b76, .value=0x3e}, {.addr=0x9b77, .value=0x20},
    };
    const struct BusEvent events[] = {
        {.addr=0x9b76, .value=0x3e, .type=IO_READ},
        {.addr=0x9b77, .value=0x20, .type=IO_READ},
        {.addr=0x0020, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0189) {
    const struct CPU_State initial_cpu = {.pc=0xa0f5, .a=0xc5, .x=0x80, .y=0x17, .sp=0x6f, .status=0xf3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0130, .value=0xc9}, {.addr=0xa0f5, .value=0x3e}, {.addr=0xa0f6, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0xa0f7, .a=0xc5, .x=0x80, .y=0x17, .sp=0x6f, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0130, .value=0xc9}, {.addr=0xa0f5, .value=0x3e}, {.addr=0xa0f6, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0xa0f5, .value=0x3e, .type=IO_READ},
        {.addr=0xa0f6, .value=0x30, .type=IO_READ},
        {.addr=0x0130, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_018A) {
    const struct CPU_State initial_cpu = {.pc=0x6cf4, .a=0xf0, .x=0xe6, .y=0xf3, .sp=0x4c, .status=0x7c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ad, .value=0x7d}, {.addr=0x6cf4, .value=0x3e}, {.addr=0x6cf5, .value=0xad},
    };
    const struct CPU_State final_cpu = {.pc=0x6cf6, .a=0xf0, .x=0xe6, .y=0xf3, .sp=0x4c, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ad, .value=0x7d}, {.addr=0x6cf4, .value=0x3e}, {.addr=0x6cf5, .value=0xad},
    };
    const struct BusEvent events[] = {
        {.addr=0x6cf4, .value=0x3e, .type=IO_READ},
        {.addr=0x6cf5, .value=0xad, .type=IO_READ},
        {.addr=0x01ad, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_018B) {
    const struct CPU_State initial_cpu = {.pc=0xa5a5, .a=0x0c, .x=0x8d, .y=0xed, .sp=0x0d, .status=0x45};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ee, .value=0xc8}, {.addr=0xa5a5, .value=0x3e}, {.addr=0xa5a6, .value=0xee},
    };
    const struct CPU_State final_cpu = {.pc=0xa5a7, .a=0x0c, .x=0x8d, .y=0xed, .sp=0x0d, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ee, .value=0xc8}, {.addr=0xa5a5, .value=0x3e}, {.addr=0xa5a6, .value=0xee},
    };
    const struct BusEvent events[] = {
        {.addr=0xa5a5, .value=0x3e, .type=IO_READ},
        {.addr=0xa5a6, .value=0xee, .type=IO_READ},
        {.addr=0x00ee, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_018C) {
    const struct CPU_State initial_cpu = {.pc=0xf2bc, .a=0x20, .x=0x87, .y=0x37, .sp=0x53, .status=0x58};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0010, .value=0xa0}, {.addr=0xf2bc, .value=0x3e}, {.addr=0xf2bd, .value=0x10},
    };
    const struct CPU_State final_cpu = {.pc=0xf2be, .a=0x20, .x=0x87, .y=0x37, .sp=0x53, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0010, .value=0xa0}, {.addr=0xf2bc, .value=0x3e}, {.addr=0xf2bd, .value=0x10},
    };
    const struct BusEvent events[] = {
        {.addr=0xf2bc, .value=0x3e, .type=IO_READ},
        {.addr=0xf2bd, .value=0x10, .type=IO_READ},
        {.addr=0x0010, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_018D) {
    const struct CPU_State initial_cpu = {.pc=0x26ac, .a=0xde, .x=0xc4, .y=0xa2, .sp=0x94, .status=0xbd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0198, .value=0x82}, {.addr=0x26ac, .value=0x3e}, {.addr=0x26ad, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0x26ae, .a=0xde, .x=0xc4, .y=0xa2, .sp=0x94, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0198, .value=0x82}, {.addr=0x26ac, .value=0x3e}, {.addr=0x26ad, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0x26ac, .value=0x3e, .type=IO_READ},
        {.addr=0x26ad, .value=0x98, .type=IO_READ},
        {.addr=0x0198, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_018E) {
    const struct CPU_State initial_cpu = {.pc=0x2a02, .a=0x16, .x=0xd7, .y=0x7a, .sp=0x1b, .status=0x5d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ce, .value=0xc2}, {.addr=0x2a02, .value=0x3e}, {.addr=0x2a03, .value=0xce},
    };
    const struct CPU_State final_cpu = {.pc=0x2a04, .a=0x16, .x=0xd7, .y=0x7a, .sp=0x1b, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ce, .value=0xc2}, {.addr=0x2a02, .value=0x3e}, {.addr=0x2a03, .value=0xce},
    };
    const struct BusEvent events[] = {
        {.addr=0x2a02, .value=0x3e, .type=IO_READ},
        {.addr=0x2a03, .value=0xce, .type=IO_READ},
        {.addr=0x00ce, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_018F) {
    const struct CPU_State initial_cpu = {.pc=0x5e0f, .a=0xe4, .x=0xb3, .y=0x3b, .sp=0xfc, .status=0x69};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0140, .value=0x57}, {.addr=0x5e0f, .value=0x3e}, {.addr=0x5e10, .value=0x40},
    };
    const struct CPU_State final_cpu = {.pc=0x5e11, .a=0xe4, .x=0xb3, .y=0x3b, .sp=0xfc, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x0140, .value=0x57}, {.addr=0x5e0f, .value=0x3e}, {.addr=0x5e10, .value=0x40},
    };
    const struct BusEvent events[] = {
        {.addr=0x5e0f, .value=0x3e, .type=IO_READ},
        {.addr=0x5e10, .value=0x40, .type=IO_READ},
        {.addr=0x0140, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0190) {
    const struct CPU_State initial_cpu = {.pc=0xb593, .a=0xa2, .x=0x98, .y=0x7d, .sp=0x9f, .status=0x63};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e3, .value=0x03}, {.addr=0xb593, .value=0x3e}, {.addr=0xb594, .value=0xe3},
    };
    const struct CPU_State final_cpu = {.pc=0xb595, .a=0xa2, .x=0x98, .y=0x7d, .sp=0x9f, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e3, .value=0x03}, {.addr=0xb593, .value=0x3e}, {.addr=0xb594, .value=0xe3},
    };
    const struct BusEvent events[] = {
        {.addr=0xb593, .value=0x3e, .type=IO_READ},
        {.addr=0xb594, .value=0xe3, .type=IO_READ},
        {.addr=0x01e3, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0191) {
    const struct CPU_State initial_cpu = {.pc=0xb500, .a=0xbe, .x=0x83, .y=0xee, .sp=0x7a, .status=0xfd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0181, .value=0x47}, {.addr=0xb500, .value=0x3e}, {.addr=0xb501, .value=0x81},
    };
    const struct CPU_State final_cpu = {.pc=0xb502, .a=0xbe, .x=0x83, .y=0xee, .sp=0x7a, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0181, .value=0x47}, {.addr=0xb500, .value=0x3e}, {.addr=0xb501, .value=0x81},
    };
    const struct BusEvent events[] = {
        {.addr=0xb500, .value=0x3e, .type=IO_READ},
        {.addr=0xb501, .value=0x81, .type=IO_READ},
        {.addr=0x0181, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0192) {
    const struct CPU_State initial_cpu = {.pc=0xe52b, .a=0x6e, .x=0x6f, .y=0xde, .sp=0xb6, .status=0x9e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00af, .value=0x0b}, {.addr=0xe52b, .value=0x3e}, {.addr=0xe52c, .value=0xaf},
    };
    const struct CPU_State final_cpu = {.pc=0xe52d, .a=0x6e, .x=0x6f, .y=0xde, .sp=0xb6, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00af, .value=0x0b}, {.addr=0xe52b, .value=0x3e}, {.addr=0xe52c, .value=0xaf},
    };
    const struct BusEvent events[] = {
        {.addr=0xe52b, .value=0x3e, .type=IO_READ},
        {.addr=0xe52c, .value=0xaf, .type=IO_READ},
        {.addr=0x00af, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0193) {
    const struct CPU_State initial_cpu = {.pc=0xf77d, .a=0xb7, .x=0x34, .y=0x39, .sp=0xf8, .status=0x1d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007e, .value=0xd1}, {.addr=0xf77d, .value=0x3e}, {.addr=0xf77e, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0xf77f, .a=0xb7, .x=0x34, .y=0x39, .sp=0xf8, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x007e, .value=0xd1}, {.addr=0xf77d, .value=0x3e}, {.addr=0xf77e, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0xf77d, .value=0x3e, .type=IO_READ},
        {.addr=0xf77e, .value=0x7e, .type=IO_READ},
        {.addr=0x007e, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0194) {
    const struct CPU_State initial_cpu = {.pc=0x4c8b, .a=0xc1, .x=0xc9, .y=0x6d, .sp=0x0c, .status=0xc5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009d, .value=0x78}, {.addr=0x4c8b, .value=0x3e}, {.addr=0x4c8c, .value=0x9d},
    };
    const struct CPU_State final_cpu = {.pc=0x4c8d, .a=0xc1, .x=0xc9, .y=0x6d, .sp=0x0c, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x009d, .value=0x78}, {.addr=0x4c8b, .value=0x3e}, {.addr=0x4c8c, .value=0x9d},
    };
    const struct BusEvent events[] = {
        {.addr=0x4c8b, .value=0x3e, .type=IO_READ},
        {.addr=0x4c8c, .value=0x9d, .type=IO_READ},
        {.addr=0x009d, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0195) {
    const struct CPU_State initial_cpu = {.pc=0xc7d5, .a=0xfc, .x=0x6e, .y=0xa1, .sp=0xb4, .status=0x0b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0037, .value=0x15}, {.addr=0xc7d5, .value=0x3e}, {.addr=0xc7d6, .value=0x37},
    };
    const struct CPU_State final_cpu = {.pc=0xc7d7, .a=0xfc, .x=0x6e, .y=0xa1, .sp=0xb4, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x0037, .value=0x15}, {.addr=0xc7d5, .value=0x3e}, {.addr=0xc7d6, .value=0x37},
    };
    const struct BusEvent events[] = {
        {.addr=0xc7d5, .value=0x3e, .type=IO_READ},
        {.addr=0xc7d6, .value=0x37, .type=IO_READ},
        {.addr=0x0037, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0197) {
    const struct CPU_State initial_cpu = {.pc=0x6580, .a=0x9b, .x=0xf1, .y=0xf0, .sp=0x44, .status=0x8f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001d, .value=0x66}, {.addr=0x6580, .value=0x3e}, {.addr=0x6581, .value=0x1d},
    };
    const struct CPU_State final_cpu = {.pc=0x6582, .a=0x9b, .x=0xf1, .y=0xf0, .sp=0x44, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x001d, .value=0x66}, {.addr=0x6580, .value=0x3e}, {.addr=0x6581, .value=0x1d},
    };
    const struct BusEvent events[] = {
        {.addr=0x6580, .value=0x3e, .type=IO_READ},
        {.addr=0x6581, .value=0x1d, .type=IO_READ},
        {.addr=0x001d, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0198) {
    const struct CPU_State initial_cpu = {.pc=0x1e2d, .a=0x96, .x=0xf4, .y=0x31, .sp=0x57, .status=0xf0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b7, .value=0xba}, {.addr=0x1e2d, .value=0x3e}, {.addr=0x1e2e, .value=0xb7},
    };
    const struct CPU_State final_cpu = {.pc=0x1e2f, .a=0x96, .x=0xf4, .y=0x31, .sp=0x57, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b7, .value=0xba}, {.addr=0x1e2d, .value=0x3e}, {.addr=0x1e2e, .value=0xb7},
    };
    const struct BusEvent events[] = {
        {.addr=0x1e2d, .value=0x3e, .type=IO_READ},
        {.addr=0x1e2e, .value=0xb7, .type=IO_READ},
        {.addr=0x01b7, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0199) {
    const struct CPU_State initial_cpu = {.pc=0xb5f7, .a=0x3b, .x=0x72, .y=0x6a, .sp=0x6d, .status=0x15};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b3, .value=0x31}, {.addr=0xb5f7, .value=0x3e}, {.addr=0xb5f8, .value=0xb3},
    };
    const struct CPU_State final_cpu = {.pc=0xb5f9, .a=0x3b, .x=0x72, .y=0x6a, .sp=0x6d, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b3, .value=0x31}, {.addr=0xb5f7, .value=0x3e}, {.addr=0xb5f8, .value=0xb3},
    };
    const struct BusEvent events[] = {
        {.addr=0xb5f7, .value=0x3e, .type=IO_READ},
        {.addr=0xb5f8, .value=0xb3, .type=IO_READ},
        {.addr=0x00b3, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_019A) {
    const struct CPU_State initial_cpu = {.pc=0x1b65, .a=0xab, .x=0x2b, .y=0xdc, .sp=0x51, .status=0x9a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009e, .value=0x56}, {.addr=0x1b65, .value=0x3e}, {.addr=0x1b66, .value=0x9e},
    };
    const struct CPU_State final_cpu = {.pc=0x1b67, .a=0xab, .x=0x2b, .y=0xdc, .sp=0x51, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x009e, .value=0x56}, {.addr=0x1b65, .value=0x3e}, {.addr=0x1b66, .value=0x9e},
    };
    const struct BusEvent events[] = {
        {.addr=0x1b65, .value=0x3e, .type=IO_READ},
        {.addr=0x1b66, .value=0x9e, .type=IO_READ},
        {.addr=0x009e, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_019B) {
    const struct CPU_State initial_cpu = {.pc=0xd1dd, .a=0x1c, .x=0x83, .y=0xb8, .sp=0x05, .status=0xb8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c4, .value=0x63}, {.addr=0xd1dd, .value=0x3e}, {.addr=0xd1de, .value=0xc4},
    };
    const struct CPU_State final_cpu = {.pc=0xd1df, .a=0x1c, .x=0x83, .y=0xb8, .sp=0x05, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c4, .value=0x63}, {.addr=0xd1dd, .value=0x3e}, {.addr=0xd1de, .value=0xc4},
    };
    const struct BusEvent events[] = {
        {.addr=0xd1dd, .value=0x3e, .type=IO_READ},
        {.addr=0xd1de, .value=0xc4, .type=IO_READ},
        {.addr=0x01c4, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_019C) {
    const struct CPU_State initial_cpu = {.pc=0x43a8, .a=0x98, .x=0x16, .y=0x30, .sp=0x92, .status=0x94};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0068, .value=0x9d}, {.addr=0x43a8, .value=0x3e}, {.addr=0x43a9, .value=0x68},
    };
    const struct CPU_State final_cpu = {.pc=0x43aa, .a=0x98, .x=0x16, .y=0x30, .sp=0x92, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x0068, .value=0x9d}, {.addr=0x43a8, .value=0x3e}, {.addr=0x43a9, .value=0x68},
    };
    const struct BusEvent events[] = {
        {.addr=0x43a8, .value=0x3e, .type=IO_READ},
        {.addr=0x43a9, .value=0x68, .type=IO_READ},
        {.addr=0x0068, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_019D) {
    const struct CPU_State initial_cpu = {.pc=0xdf72, .a=0x07, .x=0xa9, .y=0x77, .sp=0xe9, .status=0x4c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002b, .value=0x8e}, {.addr=0xdf72, .value=0x3e}, {.addr=0xdf73, .value=0x2b},
    };
    const struct CPU_State final_cpu = {.pc=0xdf74, .a=0x07, .x=0xa9, .y=0x77, .sp=0xe9, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x002b, .value=0x8e}, {.addr=0xdf72, .value=0x3e}, {.addr=0xdf73, .value=0x2b},
    };
    const struct BusEvent events[] = {
        {.addr=0xdf72, .value=0x3e, .type=IO_READ},
        {.addr=0xdf73, .value=0x2b, .type=IO_READ},
        {.addr=0x002b, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_019E) {
    const struct CPU_State initial_cpu = {.pc=0xcb76, .a=0x23, .x=0xad, .y=0x15, .sp=0xa0, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0012, .value=0x54}, {.addr=0xcb76, .value=0x3e}, {.addr=0xcb77, .value=0x12},
    };
    const struct CPU_State final_cpu = {.pc=0xcb78, .a=0x23, .x=0xad, .y=0x15, .sp=0xa0, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x0012, .value=0x54}, {.addr=0xcb76, .value=0x3e}, {.addr=0xcb77, .value=0x12},
    };
    const struct BusEvent events[] = {
        {.addr=0xcb76, .value=0x3e, .type=IO_READ},
        {.addr=0xcb77, .value=0x12, .type=IO_READ},
        {.addr=0x0012, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_019F) {
    const struct CPU_State initial_cpu = {.pc=0x03ad, .a=0x99, .x=0xdc, .y=0x76, .sp=0x66, .status=0x5d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e7, .value=0x11}, {.addr=0x03ad, .value=0x3e}, {.addr=0x03ae, .value=0xe7},
    };
    const struct CPU_State final_cpu = {.pc=0x03af, .a=0x99, .x=0xdc, .y=0x76, .sp=0x66, .status=0xdd};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e7, .value=0x11}, {.addr=0x03ad, .value=0x3e}, {.addr=0x03ae, .value=0xe7},
    };
    const struct BusEvent events[] = {
        {.addr=0x03ad, .value=0x3e, .type=IO_READ},
        {.addr=0x03ae, .value=0xe7, .type=IO_READ},
        {.addr=0x00e7, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x2edf, .a=0xd0, .x=0xae, .y=0x71, .sp=0x02, .status=0x01};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0045, .value=0xeb}, {.addr=0x2edf, .value=0x3e}, {.addr=0x2ee0, .value=0x45},
    };
    const struct CPU_State final_cpu = {.pc=0x2ee1, .a=0xd0, .x=0xae, .y=0x71, .sp=0x02, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x0045, .value=0xeb}, {.addr=0x2edf, .value=0x3e}, {.addr=0x2ee0, .value=0x45},
    };
    const struct BusEvent events[] = {
        {.addr=0x2edf, .value=0x3e, .type=IO_READ},
        {.addr=0x2ee0, .value=0x45, .type=IO_READ},
        {.addr=0x0045, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01A1) {
    const struct CPU_State initial_cpu = {.pc=0xa3e9, .a=0xfb, .x=0x27, .y=0x92, .sp=0xee, .status=0xa3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018c, .value=0xd3}, {.addr=0xa3e9, .value=0x3e}, {.addr=0xa3ea, .value=0x8c},
    };
    const struct CPU_State final_cpu = {.pc=0xa3eb, .a=0xfb, .x=0x27, .y=0x92, .sp=0xee, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x018c, .value=0xd3}, {.addr=0xa3e9, .value=0x3e}, {.addr=0xa3ea, .value=0x8c},
    };
    const struct BusEvent events[] = {
        {.addr=0xa3e9, .value=0x3e, .type=IO_READ},
        {.addr=0xa3ea, .value=0x8c, .type=IO_READ},
        {.addr=0x018c, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01A2) {
    const struct CPU_State initial_cpu = {.pc=0xfe03, .a=0xa0, .x=0xf2, .y=0x49, .sp=0xd0, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001e, .value=0x8a}, {.addr=0xfe03, .value=0x3e}, {.addr=0xfe04, .value=0x1e},
    };
    const struct CPU_State final_cpu = {.pc=0xfe05, .a=0xa0, .x=0xf2, .y=0x49, .sp=0xd0, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x001e, .value=0x8a}, {.addr=0xfe03, .value=0x3e}, {.addr=0xfe04, .value=0x1e},
    };
    const struct BusEvent events[] = {
        {.addr=0xfe03, .value=0x3e, .type=IO_READ},
        {.addr=0xfe04, .value=0x1e, .type=IO_READ},
        {.addr=0x001e, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01A3) {
    const struct CPU_State initial_cpu = {.pc=0x1785, .a=0x18, .x=0xed, .y=0x5c, .sp=0xc8, .status=0x38};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012b, .value=0x2a}, {.addr=0x1785, .value=0x3e}, {.addr=0x1786, .value=0x2b},
    };
    const struct CPU_State final_cpu = {.pc=0x1787, .a=0x18, .x=0xed, .y=0x5c, .sp=0xc8, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x012b, .value=0x2a}, {.addr=0x1785, .value=0x3e}, {.addr=0x1786, .value=0x2b},
    };
    const struct BusEvent events[] = {
        {.addr=0x1785, .value=0x3e, .type=IO_READ},
        {.addr=0x1786, .value=0x2b, .type=IO_READ},
        {.addr=0x012b, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01A4) {
    const struct CPU_State initial_cpu = {.pc=0x41d1, .a=0xdc, .x=0xe9, .y=0x84, .sp=0x89, .status=0x09};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001f, .value=0x05}, {.addr=0x41d1, .value=0x3e}, {.addr=0x41d2, .value=0x1f},
    };
    const struct CPU_State final_cpu = {.pc=0x41d3, .a=0xdc, .x=0xe9, .y=0x84, .sp=0x89, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x001f, .value=0x05}, {.addr=0x41d1, .value=0x3e}, {.addr=0x41d2, .value=0x1f},
    };
    const struct BusEvent events[] = {
        {.addr=0x41d1, .value=0x3e, .type=IO_READ},
        {.addr=0x41d2, .value=0x1f, .type=IO_READ},
        {.addr=0x001f, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01A5) {
    const struct CPU_State initial_cpu = {.pc=0xa250, .a=0xc6, .x=0xf4, .y=0xcb, .sp=0x05, .status=0x43};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0088, .value=0x16}, {.addr=0xa250, .value=0x3e}, {.addr=0xa251, .value=0x88},
    };
    const struct CPU_State final_cpu = {.pc=0xa252, .a=0xc6, .x=0xf4, .y=0xcb, .sp=0x05, .status=0xc1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0088, .value=0x16}, {.addr=0xa250, .value=0x3e}, {.addr=0xa251, .value=0x88},
    };
    const struct BusEvent events[] = {
        {.addr=0xa250, .value=0x3e, .type=IO_READ},
        {.addr=0xa251, .value=0x88, .type=IO_READ},
        {.addr=0x0088, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01A6) {
    const struct CPU_State initial_cpu = {.pc=0x56d9, .a=0xb3, .x=0x5f, .y=0xe1, .sp=0xf9, .status=0x65};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018d, .value=0xeb}, {.addr=0x56d9, .value=0x3e}, {.addr=0x56da, .value=0x8d},
    };
    const struct CPU_State final_cpu = {.pc=0x56db, .a=0xb3, .x=0x5f, .y=0xe1, .sp=0xf9, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x018d, .value=0xeb}, {.addr=0x56d9, .value=0x3e}, {.addr=0x56da, .value=0x8d},
    };
    const struct BusEvent events[] = {
        {.addr=0x56d9, .value=0x3e, .type=IO_READ},
        {.addr=0x56da, .value=0x8d, .type=IO_READ},
        {.addr=0x018d, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01A7) {
    const struct CPU_State initial_cpu = {.pc=0x32cf, .a=0xf1, .x=0x48, .y=0x5d, .sp=0x80, .status=0xb8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0122, .value=0x01}, {.addr=0x32cf, .value=0x3e}, {.addr=0x32d0, .value=0x22},
    };
    const struct CPU_State final_cpu = {.pc=0x32d1, .a=0xf1, .x=0x48, .y=0x5d, .sp=0x80, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x0122, .value=0x01}, {.addr=0x32cf, .value=0x3e}, {.addr=0x32d0, .value=0x22},
    };
    const struct BusEvent events[] = {
        {.addr=0x32cf, .value=0x3e, .type=IO_READ},
        {.addr=0x32d0, .value=0x22, .type=IO_READ},
        {.addr=0x0122, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01A8) {
    const struct CPU_State initial_cpu = {.pc=0xda24, .a=0x3d, .x=0xdb, .y=0x2b, .sp=0x85, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0032, .value=0x67}, {.addr=0xda24, .value=0x3e}, {.addr=0xda25, .value=0x32},
    };
    const struct CPU_State final_cpu = {.pc=0xda26, .a=0x3d, .x=0xdb, .y=0x2b, .sp=0x85, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0032, .value=0x67}, {.addr=0xda24, .value=0x3e}, {.addr=0xda25, .value=0x32},
    };
    const struct BusEvent events[] = {
        {.addr=0xda24, .value=0x3e, .type=IO_READ},
        {.addr=0xda25, .value=0x32, .type=IO_READ},
        {.addr=0x0032, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01A9) {
    const struct CPU_State initial_cpu = {.pc=0xd3f7, .a=0x95, .x=0x1f, .y=0xa1, .sp=0x66, .status=0x97};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002e, .value=0x9d}, {.addr=0xd3f7, .value=0x3e}, {.addr=0xd3f8, .value=0x2e},
    };
    const struct CPU_State final_cpu = {.pc=0xd3f9, .a=0x95, .x=0x1f, .y=0xa1, .sp=0x66, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x002e, .value=0x9d}, {.addr=0xd3f7, .value=0x3e}, {.addr=0xd3f8, .value=0x2e},
    };
    const struct BusEvent events[] = {
        {.addr=0xd3f7, .value=0x3e, .type=IO_READ},
        {.addr=0xd3f8, .value=0x2e, .type=IO_READ},
        {.addr=0x002e, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01AA) {
    const struct CPU_State initial_cpu = {.pc=0xba00, .a=0x58, .x=0xeb, .y=0x8a, .sp=0x63, .status=0x52};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009f, .value=0x12}, {.addr=0xba00, .value=0x3e}, {.addr=0xba01, .value=0x9f},
    };
    const struct CPU_State final_cpu = {.pc=0xba02, .a=0x58, .x=0xeb, .y=0x8a, .sp=0x63, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x009f, .value=0x12}, {.addr=0xba00, .value=0x3e}, {.addr=0xba01, .value=0x9f},
    };
    const struct BusEvent events[] = {
        {.addr=0xba00, .value=0x3e, .type=IO_READ},
        {.addr=0xba01, .value=0x9f, .type=IO_READ},
        {.addr=0x009f, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x0b27, .a=0x3f, .x=0xa1, .y=0x4b, .sp=0x53, .status=0xc2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e1, .value=0x13}, {.addr=0x0b27, .value=0x3e}, {.addr=0x0b28, .value=0xe1},
    };
    const struct CPU_State final_cpu = {.pc=0x0b29, .a=0x3f, .x=0xa1, .y=0x4b, .sp=0x53, .status=0xc1};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e1, .value=0x13}, {.addr=0x0b27, .value=0x3e}, {.addr=0x0b28, .value=0xe1},
    };
    const struct BusEvent events[] = {
        {.addr=0x0b27, .value=0x3e, .type=IO_READ},
        {.addr=0x0b28, .value=0xe1, .type=IO_READ},
        {.addr=0x00e1, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01AC) {
    const struct CPU_State initial_cpu = {.pc=0x8ace, .a=0xc9, .x=0xd2, .y=0x2b, .sp=0x4b, .status=0xbd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0117, .value=0xfe}, {.addr=0x8ace, .value=0x3e}, {.addr=0x8acf, .value=0x17},
    };
    const struct CPU_State final_cpu = {.pc=0x8ad0, .a=0xc9, .x=0xd2, .y=0x2b, .sp=0x4b, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0117, .value=0xfe}, {.addr=0x8ace, .value=0x3e}, {.addr=0x8acf, .value=0x17},
    };
    const struct BusEvent events[] = {
        {.addr=0x8ace, .value=0x3e, .type=IO_READ},
        {.addr=0x8acf, .value=0x17, .type=IO_READ},
        {.addr=0x0117, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01AD) {
    const struct CPU_State initial_cpu = {.pc=0x29ff, .a=0xfc, .x=0x90, .y=0x34, .sp=0x7d, .status=0x48};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a9, .value=0x8e}, {.addr=0x29ff, .value=0x3e}, {.addr=0x2a00, .value=0xa9},
    };
    const struct CPU_State final_cpu = {.pc=0x2a01, .a=0xfc, .x=0x90, .y=0x34, .sp=0x7d, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a9, .value=0x8e}, {.addr=0x29ff, .value=0x3e}, {.addr=0x2a00, .value=0xa9},
    };
    const struct BusEvent events[] = {
        {.addr=0x29ff, .value=0x3e, .type=IO_READ},
        {.addr=0x2a00, .value=0xa9, .type=IO_READ},
        {.addr=0x00a9, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01AE) {
    const struct CPU_State initial_cpu = {.pc=0xb0ed, .a=0x93, .x=0xa0, .y=0x34, .sp=0x8c, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014c, .value=0x60}, {.addr=0xb0ed, .value=0x3e}, {.addr=0xb0ee, .value=0x4c},
    };
    const struct CPU_State final_cpu = {.pc=0xb0ef, .a=0x93, .x=0xa0, .y=0x34, .sp=0x8c, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x014c, .value=0x60}, {.addr=0xb0ed, .value=0x3e}, {.addr=0xb0ee, .value=0x4c},
    };
    const struct BusEvent events[] = {
        {.addr=0xb0ed, .value=0x3e, .type=IO_READ},
        {.addr=0xb0ee, .value=0x4c, .type=IO_READ},
        {.addr=0x014c, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01AF) {
    const struct CPU_State initial_cpu = {.pc=0xf0b3, .a=0x03, .x=0xad, .y=0x9c, .sp=0xb0, .status=0x0e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000b, .value=0x33}, {.addr=0xf0b3, .value=0x3e}, {.addr=0xf0b4, .value=0x0b},
    };
    const struct CPU_State final_cpu = {.pc=0xf0b5, .a=0x03, .x=0xad, .y=0x9c, .sp=0xb0, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x000b, .value=0x33}, {.addr=0xf0b3, .value=0x3e}, {.addr=0xf0b4, .value=0x0b},
    };
    const struct BusEvent events[] = {
        {.addr=0xf0b3, .value=0x3e, .type=IO_READ},
        {.addr=0xf0b4, .value=0x0b, .type=IO_READ},
        {.addr=0x000b, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01B0) {
    const struct CPU_State initial_cpu = {.pc=0xf2c0, .a=0x48, .x=0x9a, .y=0xfd, .sp=0x67, .status=0x91};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a5, .value=0x97}, {.addr=0xf2c0, .value=0x3e}, {.addr=0xf2c1, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0xf2c2, .a=0x48, .x=0x9a, .y=0xfd, .sp=0x67, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a5, .value=0x97}, {.addr=0xf2c0, .value=0x3e}, {.addr=0xf2c1, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0xf2c0, .value=0x3e, .type=IO_READ},
        {.addr=0xf2c1, .value=0xa5, .type=IO_READ},
        {.addr=0x00a5, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01B1) {
    const struct CPU_State initial_cpu = {.pc=0xf575, .a=0x62, .x=0xd3, .y=0xd1, .sp=0xa6, .status=0x09};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005a, .value=0x45}, {.addr=0xf575, .value=0x3e}, {.addr=0xf576, .value=0x5a},
    };
    const struct CPU_State final_cpu = {.pc=0xf577, .a=0x62, .x=0xd3, .y=0xd1, .sp=0xa6, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x005a, .value=0x45}, {.addr=0xf575, .value=0x3e}, {.addr=0xf576, .value=0x5a},
    };
    const struct BusEvent events[] = {
        {.addr=0xf575, .value=0x3e, .type=IO_READ},
        {.addr=0xf576, .value=0x5a, .type=IO_READ},
        {.addr=0x005a, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01B2) {
    const struct CPU_State initial_cpu = {.pc=0xe26d, .a=0xbb, .x=0x03, .y=0xdf, .sp=0xe3, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0198, .value=0x48}, {.addr=0xe26d, .value=0x3e}, {.addr=0xe26e, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0xe26f, .a=0xbb, .x=0x03, .y=0xdf, .sp=0xe3, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0198, .value=0x48}, {.addr=0xe26d, .value=0x3e}, {.addr=0xe26e, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0xe26d, .value=0x3e, .type=IO_READ},
        {.addr=0xe26e, .value=0x98, .type=IO_READ},
        {.addr=0x0198, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01B3) {
    const struct CPU_State initial_cpu = {.pc=0x7802, .a=0x82, .x=0xd0, .y=0x44, .sp=0x33, .status=0xb3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e5, .value=0xcd}, {.addr=0x7802, .value=0x3e}, {.addr=0x7803, .value=0xe5},
    };
    const struct CPU_State final_cpu = {.pc=0x7804, .a=0x82, .x=0xd0, .y=0x44, .sp=0x33, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e5, .value=0xcd}, {.addr=0x7802, .value=0x3e}, {.addr=0x7803, .value=0xe5},
    };
    const struct BusEvent events[] = {
        {.addr=0x7802, .value=0x3e, .type=IO_READ},
        {.addr=0x7803, .value=0xe5, .type=IO_READ},
        {.addr=0x01e5, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01B4) {
    const struct CPU_State initial_cpu = {.pc=0xbf88, .a=0x85, .x=0x49, .y=0xde, .sp=0x04, .status=0xd8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e0, .value=0xb4}, {.addr=0xbf88, .value=0x3e}, {.addr=0xbf89, .value=0xe0},
    };
    const struct CPU_State final_cpu = {.pc=0xbf8a, .a=0x85, .x=0x49, .y=0xde, .sp=0x04, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e0, .value=0xb4}, {.addr=0xbf88, .value=0x3e}, {.addr=0xbf89, .value=0xe0},
    };
    const struct BusEvent events[] = {
        {.addr=0xbf88, .value=0x3e, .type=IO_READ},
        {.addr=0xbf89, .value=0xe0, .type=IO_READ},
        {.addr=0x00e0, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01B5) {
    const struct CPU_State initial_cpu = {.pc=0x187e, .a=0x16, .x=0xf3, .y=0x9a, .sp=0xb9, .status=0x8b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c2, .value=0xed}, {.addr=0x187e, .value=0x3e}, {.addr=0x187f, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0x1880, .a=0x16, .x=0xf3, .y=0x9a, .sp=0xb9, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c2, .value=0xed}, {.addr=0x187e, .value=0x3e}, {.addr=0x187f, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0x187e, .value=0x3e, .type=IO_READ},
        {.addr=0x187f, .value=0xc2, .type=IO_READ},
        {.addr=0x00c2, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01B6) {
    const struct CPU_State initial_cpu = {.pc=0x27aa, .a=0xac, .x=0x00, .y=0xc8, .sp=0x53, .status=0xf3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b4, .value=0x96}, {.addr=0x27aa, .value=0x3e}, {.addr=0x27ab, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0x27ac, .a=0xac, .x=0x00, .y=0xc8, .sp=0x53, .status=0x70};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b4, .value=0x96}, {.addr=0x27aa, .value=0x3e}, {.addr=0x27ab, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0x27aa, .value=0x3e, .type=IO_READ},
        {.addr=0x27ab, .value=0xb4, .type=IO_READ},
        {.addr=0x01b4, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01B7) {
    const struct CPU_State initial_cpu = {.pc=0x28c2, .a=0x29, .x=0x33, .y=0x28, .sp=0x98, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002d, .value=0x8f}, {.addr=0x28c2, .value=0x3e}, {.addr=0x28c3, .value=0x2d},
    };
    const struct CPU_State final_cpu = {.pc=0x28c4, .a=0x29, .x=0x33, .y=0x28, .sp=0x98, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x002d, .value=0x8f}, {.addr=0x28c2, .value=0x3e}, {.addr=0x28c3, .value=0x2d},
    };
    const struct BusEvent events[] = {
        {.addr=0x28c2, .value=0x3e, .type=IO_READ},
        {.addr=0x28c3, .value=0x2d, .type=IO_READ},
        {.addr=0x002d, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01B8) {
    const struct CPU_State initial_cpu = {.pc=0x6a26, .a=0x13, .x=0x1c, .y=0x5f, .sp=0xb9, .status=0x63};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016c, .value=0x86}, {.addr=0x6a26, .value=0x3e}, {.addr=0x6a27, .value=0x6c},
    };
    const struct CPU_State final_cpu = {.pc=0x6a28, .a=0x13, .x=0x1c, .y=0x5f, .sp=0xb9, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x016c, .value=0x86}, {.addr=0x6a26, .value=0x3e}, {.addr=0x6a27, .value=0x6c},
    };
    const struct BusEvent events[] = {
        {.addr=0x6a26, .value=0x3e, .type=IO_READ},
        {.addr=0x6a27, .value=0x6c, .type=IO_READ},
        {.addr=0x016c, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x2d81, .a=0xce, .x=0xef, .y=0xaa, .sp=0x6e, .status=0x5e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0060, .value=0xf7}, {.addr=0x2d81, .value=0x3e}, {.addr=0x2d82, .value=0x60},
    };
    const struct CPU_State final_cpu = {.pc=0x2d83, .a=0xce, .x=0xef, .y=0xaa, .sp=0x6e, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0060, .value=0xf7}, {.addr=0x2d81, .value=0x3e}, {.addr=0x2d82, .value=0x60},
    };
    const struct BusEvent events[] = {
        {.addr=0x2d81, .value=0x3e, .type=IO_READ},
        {.addr=0x2d82, .value=0x60, .type=IO_READ},
        {.addr=0x0060, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01BB) {
    const struct CPU_State initial_cpu = {.pc=0xeb6b, .a=0xe4, .x=0x38, .y=0x4f, .sp=0x7c, .status=0xea};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0156, .value=0x01}, {.addr=0xeb6b, .value=0x3e}, {.addr=0xeb6c, .value=0x56},
    };
    const struct CPU_State final_cpu = {.pc=0xeb6d, .a=0xe4, .x=0x38, .y=0x4f, .sp=0x7c, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x0156, .value=0x01}, {.addr=0xeb6b, .value=0x3e}, {.addr=0xeb6c, .value=0x56},
    };
    const struct BusEvent events[] = {
        {.addr=0xeb6b, .value=0x3e, .type=IO_READ},
        {.addr=0xeb6c, .value=0x56, .type=IO_READ},
        {.addr=0x0156, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01BC) {
    const struct CPU_State initial_cpu = {.pc=0x9b8a, .a=0x16, .x=0xfb, .y=0xf5, .sp=0x3c, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c8, .value=0xde}, {.addr=0x9b8a, .value=0x3e}, {.addr=0x9b8b, .value=0xc8},
    };
    const struct CPU_State final_cpu = {.pc=0x9b8c, .a=0x16, .x=0xfb, .y=0xf5, .sp=0x3c, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c8, .value=0xde}, {.addr=0x9b8a, .value=0x3e}, {.addr=0x9b8b, .value=0xc8},
    };
    const struct BusEvent events[] = {
        {.addr=0x9b8a, .value=0x3e, .type=IO_READ},
        {.addr=0x9b8b, .value=0xc8, .type=IO_READ},
        {.addr=0x01c8, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01BD) {
    const struct CPU_State initial_cpu = {.pc=0x2c61, .a=0xc1, .x=0x9b, .y=0xd0, .sp=0x66, .status=0x44};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001c, .value=0x68}, {.addr=0x2c61, .value=0x3e}, {.addr=0x2c62, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0x2c63, .a=0xc1, .x=0x9b, .y=0xd0, .sp=0x66, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x001c, .value=0x68}, {.addr=0x2c61, .value=0x3e}, {.addr=0x2c62, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0x2c61, .value=0x3e, .type=IO_READ},
        {.addr=0x2c62, .value=0x1c, .type=IO_READ},
        {.addr=0x001c, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01BE) {
    const struct CPU_State initial_cpu = {.pc=0x34de, .a=0x8d, .x=0x48, .y=0xd7, .sp=0x93, .status=0xf4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011b, .value=0xa0}, {.addr=0x34de, .value=0x3e}, {.addr=0x34df, .value=0x1b},
    };
    const struct CPU_State final_cpu = {.pc=0x34e0, .a=0x8d, .x=0x48, .y=0xd7, .sp=0x93, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x011b, .value=0xa0}, {.addr=0x34de, .value=0x3e}, {.addr=0x34df, .value=0x1b},
    };
    const struct BusEvent events[] = {
        {.addr=0x34de, .value=0x3e, .type=IO_READ},
        {.addr=0x34df, .value=0x1b, .type=IO_READ},
        {.addr=0x011b, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01BF) {
    const struct CPU_State initial_cpu = {.pc=0xcd26, .a=0x08, .x=0x85, .y=0xf1, .sp=0x2b, .status=0x17};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0036, .value=0x88}, {.addr=0xcd26, .value=0x3e}, {.addr=0xcd27, .value=0x36},
    };
    const struct CPU_State final_cpu = {.pc=0xcd28, .a=0x08, .x=0x85, .y=0xf1, .sp=0x2b, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0036, .value=0x88}, {.addr=0xcd26, .value=0x3e}, {.addr=0xcd27, .value=0x36},
    };
    const struct BusEvent events[] = {
        {.addr=0xcd26, .value=0x3e, .type=IO_READ},
        {.addr=0xcd27, .value=0x36, .type=IO_READ},
        {.addr=0x0036, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01C0) {
    const struct CPU_State initial_cpu = {.pc=0xe07f, .a=0x27, .x=0xc9, .y=0xaf, .sp=0x22, .status=0xbb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0180, .value=0x0c}, {.addr=0xe07f, .value=0x3e}, {.addr=0xe080, .value=0x80},
    };
    const struct CPU_State final_cpu = {.pc=0xe081, .a=0x27, .x=0xc9, .y=0xaf, .sp=0x22, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0180, .value=0x0c}, {.addr=0xe07f, .value=0x3e}, {.addr=0xe080, .value=0x80},
    };
    const struct BusEvent events[] = {
        {.addr=0xe07f, .value=0x3e, .type=IO_READ},
        {.addr=0xe080, .value=0x80, .type=IO_READ},
        {.addr=0x0180, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x75be, .a=0xc5, .x=0x7f, .y=0xb1, .sp=0xd6, .status=0xd2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0058, .value=0x2e}, {.addr=0x75be, .value=0x3e}, {.addr=0x75bf, .value=0x58},
    };
    const struct CPU_State final_cpu = {.pc=0x75c0, .a=0xc5, .x=0x7f, .y=0xb1, .sp=0xd6, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x0058, .value=0x2e}, {.addr=0x75be, .value=0x3e}, {.addr=0x75bf, .value=0x58},
    };
    const struct BusEvent events[] = {
        {.addr=0x75be, .value=0x3e, .type=IO_READ},
        {.addr=0x75bf, .value=0x58, .type=IO_READ},
        {.addr=0x0058, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01C2) {
    const struct CPU_State initial_cpu = {.pc=0x0f36, .a=0x39, .x=0x1c, .y=0x17, .sp=0x58, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e7, .value=0x0e}, {.addr=0x0f36, .value=0x3e}, {.addr=0x0f37, .value=0xe7},
    };
    const struct CPU_State final_cpu = {.pc=0x0f38, .a=0x39, .x=0x1c, .y=0x17, .sp=0x58, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e7, .value=0x0e}, {.addr=0x0f36, .value=0x3e}, {.addr=0x0f37, .value=0xe7},
    };
    const struct BusEvent events[] = {
        {.addr=0x0f36, .value=0x3e, .type=IO_READ},
        {.addr=0x0f37, .value=0xe7, .type=IO_READ},
        {.addr=0x01e7, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01C3) {
    const struct CPU_State initial_cpu = {.pc=0xafa7, .a=0xad, .x=0x7a, .y=0x13, .sp=0x42, .status=0x95};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d3, .value=0x23}, {.addr=0xafa7, .value=0x3e}, {.addr=0xafa8, .value=0xd3},
    };
    const struct CPU_State final_cpu = {.pc=0xafa9, .a=0xad, .x=0x7a, .y=0x13, .sp=0x42, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d3, .value=0x23}, {.addr=0xafa7, .value=0x3e}, {.addr=0xafa8, .value=0xd3},
    };
    const struct BusEvent events[] = {
        {.addr=0xafa7, .value=0x3e, .type=IO_READ},
        {.addr=0xafa8, .value=0xd3, .type=IO_READ},
        {.addr=0x00d3, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x9f4b, .a=0x58, .x=0x52, .y=0x56, .sp=0xd4, .status=0x42};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0093, .value=0x96}, {.addr=0x9f4b, .value=0x3e}, {.addr=0x9f4c, .value=0x93},
    };
    const struct CPU_State final_cpu = {.pc=0x9f4d, .a=0x58, .x=0x52, .y=0x56, .sp=0xd4, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0093, .value=0x96}, {.addr=0x9f4b, .value=0x3e}, {.addr=0x9f4c, .value=0x93},
    };
    const struct BusEvent events[] = {
        {.addr=0x9f4b, .value=0x3e, .type=IO_READ},
        {.addr=0x9f4c, .value=0x93, .type=IO_READ},
        {.addr=0x0093, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x6ba5, .a=0x54, .x=0x15, .y=0xf8, .sp=0xbf, .status=0xd7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0068, .value=0xe1}, {.addr=0x6ba5, .value=0x3e}, {.addr=0x6ba6, .value=0x68},
    };
    const struct CPU_State final_cpu = {.pc=0x6ba7, .a=0x54, .x=0x15, .y=0xf8, .sp=0xbf, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x0068, .value=0xe1}, {.addr=0x6ba5, .value=0x3e}, {.addr=0x6ba6, .value=0x68},
    };
    const struct BusEvent events[] = {
        {.addr=0x6ba5, .value=0x3e, .type=IO_READ},
        {.addr=0x6ba6, .value=0x68, .type=IO_READ},
        {.addr=0x0068, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01C6) {
    const struct CPU_State initial_cpu = {.pc=0xe8b0, .a=0x5b, .x=0x32, .y=0x57, .sp=0x1b, .status=0xc9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0042, .value=0x59}, {.addr=0xe8b0, .value=0x3e}, {.addr=0xe8b1, .value=0x42},
    };
    const struct CPU_State final_cpu = {.pc=0xe8b2, .a=0x5b, .x=0x32, .y=0x57, .sp=0x1b, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0042, .value=0x59}, {.addr=0xe8b0, .value=0x3e}, {.addr=0xe8b1, .value=0x42},
    };
    const struct BusEvent events[] = {
        {.addr=0xe8b0, .value=0x3e, .type=IO_READ},
        {.addr=0xe8b1, .value=0x42, .type=IO_READ},
        {.addr=0x0042, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01C7) {
    const struct CPU_State initial_cpu = {.pc=0xecbf, .a=0x0d, .x=0x9e, .y=0x08, .sp=0xe4, .status=0x6d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ea, .value=0x1f}, {.addr=0xecbf, .value=0x3e}, {.addr=0xecc0, .value=0xea},
    };
    const struct CPU_State final_cpu = {.pc=0xecc1, .a=0x0d, .x=0x9e, .y=0x08, .sp=0xe4, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ea, .value=0x1f}, {.addr=0xecbf, .value=0x3e}, {.addr=0xecc0, .value=0xea},
    };
    const struct BusEvent events[] = {
        {.addr=0xecbf, .value=0x3e, .type=IO_READ},
        {.addr=0xecc0, .value=0xea, .type=IO_READ},
        {.addr=0x01ea, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01C8) {
    const struct CPU_State initial_cpu = {.pc=0xe797, .a=0xce, .x=0xe7, .y=0x5f, .sp=0x45, .status=0xb5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0127, .value=0x6d}, {.addr=0xe797, .value=0x3e}, {.addr=0xe798, .value=0x27},
    };
    const struct CPU_State final_cpu = {.pc=0xe799, .a=0xce, .x=0xe7, .y=0x5f, .sp=0x45, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x0127, .value=0x6d}, {.addr=0xe797, .value=0x3e}, {.addr=0xe798, .value=0x27},
    };
    const struct BusEvent events[] = {
        {.addr=0xe797, .value=0x3e, .type=IO_READ},
        {.addr=0xe798, .value=0x27, .type=IO_READ},
        {.addr=0x0127, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01C9) {
    const struct CPU_State initial_cpu = {.pc=0xb3e1, .a=0xe2, .x=0x43, .y=0x0f, .sp=0x36, .status=0xe3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ec, .value=0x9f}, {.addr=0xb3e1, .value=0x3e}, {.addr=0xb3e2, .value=0xec},
    };
    const struct CPU_State final_cpu = {.pc=0xb3e3, .a=0xe2, .x=0x43, .y=0x0f, .sp=0x36, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ec, .value=0x9f}, {.addr=0xb3e1, .value=0x3e}, {.addr=0xb3e2, .value=0xec},
    };
    const struct BusEvent events[] = {
        {.addr=0xb3e1, .value=0x3e, .type=IO_READ},
        {.addr=0xb3e2, .value=0xec, .type=IO_READ},
        {.addr=0x01ec, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01CA) {
    const struct CPU_State initial_cpu = {.pc=0x2b9f, .a=0x4f, .x=0x3f, .y=0x82, .sp=0x77, .status=0x34};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f3, .value=0x20}, {.addr=0x2b9f, .value=0x3e}, {.addr=0x2ba0, .value=0xf3},
    };
    const struct CPU_State final_cpu = {.pc=0x2ba1, .a=0x4f, .x=0x3f, .y=0x82, .sp=0x77, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f3, .value=0x20}, {.addr=0x2b9f, .value=0x3e}, {.addr=0x2ba0, .value=0xf3},
    };
    const struct BusEvent events[] = {
        {.addr=0x2b9f, .value=0x3e, .type=IO_READ},
        {.addr=0x2ba0, .value=0xf3, .type=IO_READ},
        {.addr=0x01f3, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01CB) {
    const struct CPU_State initial_cpu = {.pc=0x3736, .a=0x92, .x=0xec, .y=0x31, .sp=0x0c, .status=0x3b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d6, .value=0xc5}, {.addr=0x3736, .value=0x3e}, {.addr=0x3737, .value=0xd6},
    };
    const struct CPU_State final_cpu = {.pc=0x3738, .a=0x92, .x=0xec, .y=0x31, .sp=0x0c, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d6, .value=0xc5}, {.addr=0x3736, .value=0x3e}, {.addr=0x3737, .value=0xd6},
    };
    const struct BusEvent events[] = {
        {.addr=0x3736, .value=0x3e, .type=IO_READ},
        {.addr=0x3737, .value=0xd6, .type=IO_READ},
        {.addr=0x01d6, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01CC) {
    const struct CPU_State initial_cpu = {.pc=0x664f, .a=0x60, .x=0xad, .y=0x9c, .sp=0x2d, .status=0xdf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007a, .value=0x98}, {.addr=0x664f, .value=0x3e}, {.addr=0x6650, .value=0x7a},
    };
    const struct CPU_State final_cpu = {.pc=0x6651, .a=0x60, .x=0xad, .y=0x9c, .sp=0x2d, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x007a, .value=0x98}, {.addr=0x664f, .value=0x3e}, {.addr=0x6650, .value=0x7a},
    };
    const struct BusEvent events[] = {
        {.addr=0x664f, .value=0x3e, .type=IO_READ},
        {.addr=0x6650, .value=0x7a, .type=IO_READ},
        {.addr=0x007a, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01CD) {
    const struct CPU_State initial_cpu = {.pc=0xd190, .a=0x67, .x=0xb2, .y=0x04, .sp=0x62, .status=0xca};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0009, .value=0xf0}, {.addr=0xd190, .value=0x3e}, {.addr=0xd191, .value=0x09},
    };
    const struct CPU_State final_cpu = {.pc=0xd192, .a=0x67, .x=0xb2, .y=0x04, .sp=0x62, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0009, .value=0xf0}, {.addr=0xd190, .value=0x3e}, {.addr=0xd191, .value=0x09},
    };
    const struct BusEvent events[] = {
        {.addr=0xd190, .value=0x3e, .type=IO_READ},
        {.addr=0xd191, .value=0x09, .type=IO_READ},
        {.addr=0x0009, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01CE) {
    const struct CPU_State initial_cpu = {.pc=0x7742, .a=0x4e, .x=0xeb, .y=0xf7, .sp=0x1f, .status=0x6e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ca, .value=0xd7}, {.addr=0x7742, .value=0x3e}, {.addr=0x7743, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0x7744, .a=0x4e, .x=0xeb, .y=0xf7, .sp=0x1f, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ca, .value=0xd7}, {.addr=0x7742, .value=0x3e}, {.addr=0x7743, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0x7742, .value=0x3e, .type=IO_READ},
        {.addr=0x7743, .value=0xca, .type=IO_READ},
        {.addr=0x01ca, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x670d, .a=0x7b, .x=0xe2, .y=0xa0, .sp=0x85, .status=0x7d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f3, .value=0x1a}, {.addr=0x670d, .value=0x3e}, {.addr=0x670e, .value=0xf3},
    };
    const struct CPU_State final_cpu = {.pc=0x670f, .a=0x7b, .x=0xe2, .y=0xa0, .sp=0x85, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f3, .value=0x1a}, {.addr=0x670d, .value=0x3e}, {.addr=0x670e, .value=0xf3},
    };
    const struct BusEvent events[] = {
        {.addr=0x670d, .value=0x3e, .type=IO_READ},
        {.addr=0x670e, .value=0xf3, .type=IO_READ},
        {.addr=0x01f3, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01D0) {
    const struct CPU_State initial_cpu = {.pc=0x3012, .a=0x66, .x=0xab, .y=0x27, .sp=0xaa, .status=0x0c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0055, .value=0xe5}, {.addr=0x3012, .value=0x3e}, {.addr=0x3013, .value=0x55},
    };
    const struct CPU_State final_cpu = {.pc=0x3014, .a=0x66, .x=0xab, .y=0x27, .sp=0xaa, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0055, .value=0xe5}, {.addr=0x3012, .value=0x3e}, {.addr=0x3013, .value=0x55},
    };
    const struct BusEvent events[] = {
        {.addr=0x3012, .value=0x3e, .type=IO_READ},
        {.addr=0x3013, .value=0x55, .type=IO_READ},
        {.addr=0x0055, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01D1) {
    const struct CPU_State initial_cpu = {.pc=0x4c54, .a=0x84, .x=0x04, .y=0x1f, .sp=0x81, .status=0x1b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0074, .value=0xbd}, {.addr=0x4c54, .value=0x3e}, {.addr=0x4c55, .value=0x74},
    };
    const struct CPU_State final_cpu = {.pc=0x4c56, .a=0x84, .x=0x04, .y=0x1f, .sp=0x81, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x0074, .value=0xbd}, {.addr=0x4c54, .value=0x3e}, {.addr=0x4c55, .value=0x74},
    };
    const struct BusEvent events[] = {
        {.addr=0x4c54, .value=0x3e, .type=IO_READ},
        {.addr=0x4c55, .value=0x74, .type=IO_READ},
        {.addr=0x0074, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x6d9f, .a=0x41, .x=0x5e, .y=0x2d, .sp=0x87, .status=0x51};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006f, .value=0xbd}, {.addr=0x6d9f, .value=0x3e}, {.addr=0x6da0, .value=0x6f},
    };
    const struct CPU_State final_cpu = {.pc=0x6da1, .a=0x41, .x=0x5e, .y=0x2d, .sp=0x87, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x006f, .value=0xbd}, {.addr=0x6d9f, .value=0x3e}, {.addr=0x6da0, .value=0x6f},
    };
    const struct BusEvent events[] = {
        {.addr=0x6d9f, .value=0x3e, .type=IO_READ},
        {.addr=0x6da0, .value=0x6f, .type=IO_READ},
        {.addr=0x006f, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01D3) {
    const struct CPU_State initial_cpu = {.pc=0xac3d, .a=0x3b, .x=0x16, .y=0x3f, .sp=0xd8, .status=0x6b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0103, .value=0x81}, {.addr=0xac3d, .value=0x3e}, {.addr=0xac3e, .value=0x03},
    };
    const struct CPU_State final_cpu = {.pc=0xac3f, .a=0x3b, .x=0x16, .y=0x3f, .sp=0xd8, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0103, .value=0x81}, {.addr=0xac3d, .value=0x3e}, {.addr=0xac3e, .value=0x03},
    };
    const struct BusEvent events[] = {
        {.addr=0xac3d, .value=0x3e, .type=IO_READ},
        {.addr=0xac3e, .value=0x03, .type=IO_READ},
        {.addr=0x0103, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x495f, .a=0xa9, .x=0x53, .y=0x10, .sp=0x40, .status=0x67};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e7, .value=0x89}, {.addr=0x495f, .value=0x3e}, {.addr=0x4960, .value=0xe7},
    };
    const struct CPU_State final_cpu = {.pc=0x4961, .a=0xa9, .x=0x53, .y=0x10, .sp=0x40, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e7, .value=0x89}, {.addr=0x495f, .value=0x3e}, {.addr=0x4960, .value=0xe7},
    };
    const struct BusEvent events[] = {
        {.addr=0x495f, .value=0x3e, .type=IO_READ},
        {.addr=0x4960, .value=0xe7, .type=IO_READ},
        {.addr=0x01e7, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01D5) {
    const struct CPU_State initial_cpu = {.pc=0xa07c, .a=0x05, .x=0x3f, .y=0xa3, .sp=0x56, .status=0x48};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0055, .value=0x58}, {.addr=0xa07c, .value=0x3e}, {.addr=0xa07d, .value=0x55},
    };
    const struct CPU_State final_cpu = {.pc=0xa07e, .a=0x05, .x=0x3f, .y=0xa3, .sp=0x56, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0055, .value=0x58}, {.addr=0xa07c, .value=0x3e}, {.addr=0xa07d, .value=0x55},
    };
    const struct BusEvent events[] = {
        {.addr=0xa07c, .value=0x3e, .type=IO_READ},
        {.addr=0xa07d, .value=0x55, .type=IO_READ},
        {.addr=0x0055, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01D6) {
    const struct CPU_State initial_cpu = {.pc=0x200f, .a=0xe5, .x=0x7c, .y=0x40, .sp=0x1b, .status=0x06};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0083, .value=0xda}, {.addr=0x200f, .value=0x3e}, {.addr=0x2010, .value=0x83},
    };
    const struct CPU_State final_cpu = {.pc=0x2011, .a=0xe5, .x=0x7c, .y=0x40, .sp=0x1b, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x0083, .value=0xda}, {.addr=0x200f, .value=0x3e}, {.addr=0x2010, .value=0x83},
    };
    const struct BusEvent events[] = {
        {.addr=0x200f, .value=0x3e, .type=IO_READ},
        {.addr=0x2010, .value=0x83, .type=IO_READ},
        {.addr=0x0083, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01D7) {
    const struct CPU_State initial_cpu = {.pc=0x51ef, .a=0x11, .x=0xec, .y=0x4a, .sp=0x9b, .status=0x47};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0024, .value=0x55}, {.addr=0x51ef, .value=0x3e}, {.addr=0x51f0, .value=0x24},
    };
    const struct CPU_State final_cpu = {.pc=0x51f1, .a=0x11, .x=0xec, .y=0x4a, .sp=0x9b, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0024, .value=0x55}, {.addr=0x51ef, .value=0x3e}, {.addr=0x51f0, .value=0x24},
    };
    const struct BusEvent events[] = {
        {.addr=0x51ef, .value=0x3e, .type=IO_READ},
        {.addr=0x51f0, .value=0x24, .type=IO_READ},
        {.addr=0x0024, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01D8) {
    const struct CPU_State initial_cpu = {.pc=0xc678, .a=0x54, .x=0x14, .y=0x7e, .sp=0x86, .status=0xb8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c7, .value=0x50}, {.addr=0xc678, .value=0x3e}, {.addr=0xc679, .value=0xc7},
    };
    const struct CPU_State final_cpu = {.pc=0xc67a, .a=0x54, .x=0x14, .y=0x7e, .sp=0x86, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c7, .value=0x50}, {.addr=0xc678, .value=0x3e}, {.addr=0xc679, .value=0xc7},
    };
    const struct BusEvent events[] = {
        {.addr=0xc678, .value=0x3e, .type=IO_READ},
        {.addr=0xc679, .value=0xc7, .type=IO_READ},
        {.addr=0x01c7, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01D9) {
    const struct CPU_State initial_cpu = {.pc=0xc519, .a=0xfa, .x=0xff, .y=0xbe, .sp=0xfc, .status=0x23};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0156, .value=0x91}, {.addr=0xc519, .value=0x3e}, {.addr=0xc51a, .value=0x56},
    };
    const struct CPU_State final_cpu = {.pc=0xc51b, .a=0xfa, .x=0xff, .y=0xbe, .sp=0xfc, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x0156, .value=0x91}, {.addr=0xc519, .value=0x3e}, {.addr=0xc51a, .value=0x56},
    };
    const struct BusEvent events[] = {
        {.addr=0xc519, .value=0x3e, .type=IO_READ},
        {.addr=0xc51a, .value=0x56, .type=IO_READ},
        {.addr=0x0156, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01DA) {
    const struct CPU_State initial_cpu = {.pc=0x94bd, .a=0xff, .x=0x34, .y=0x1a, .sp=0xff, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0192, .value=0x67}, {.addr=0x94bd, .value=0x3e}, {.addr=0x94be, .value=0x92},
    };
    const struct CPU_State final_cpu = {.pc=0x94bf, .a=0xff, .x=0x34, .y=0x1a, .sp=0xff, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0192, .value=0x67}, {.addr=0x94bd, .value=0x3e}, {.addr=0x94be, .value=0x92},
    };
    const struct BusEvent events[] = {
        {.addr=0x94bd, .value=0x3e, .type=IO_READ},
        {.addr=0x94be, .value=0x92, .type=IO_READ},
        {.addr=0x0192, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x5068, .a=0x0c, .x=0x53, .y=0x43, .sp=0x7c, .status=0x74};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01da, .value=0x07}, {.addr=0x5068, .value=0x3e}, {.addr=0x5069, .value=0xda},
    };
    const struct CPU_State final_cpu = {.pc=0x506a, .a=0x0c, .x=0x53, .y=0x43, .sp=0x7c, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x01da, .value=0x07}, {.addr=0x5068, .value=0x3e}, {.addr=0x5069, .value=0xda},
    };
    const struct BusEvent events[] = {
        {.addr=0x5068, .value=0x3e, .type=IO_READ},
        {.addr=0x5069, .value=0xda, .type=IO_READ},
        {.addr=0x01da, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x0475, .a=0xd4, .x=0xe4, .y=0xf3, .sp=0xba, .status=0x45};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bc, .value=0xd1}, {.addr=0x0475, .value=0x3e}, {.addr=0x0476, .value=0xbc},
    };
    const struct CPU_State final_cpu = {.pc=0x0477, .a=0xd4, .x=0xe4, .y=0xf3, .sp=0xba, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bc, .value=0xd1}, {.addr=0x0475, .value=0x3e}, {.addr=0x0476, .value=0xbc},
    };
    const struct BusEvent events[] = {
        {.addr=0x0475, .value=0x3e, .type=IO_READ},
        {.addr=0x0476, .value=0xbc, .type=IO_READ},
        {.addr=0x00bc, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x8016, .a=0x90, .x=0x43, .y=0x0c, .sp=0x42, .status=0x3b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0164, .value=0xb1}, {.addr=0x8016, .value=0x3e}, {.addr=0x8017, .value=0x64},
    };
    const struct CPU_State final_cpu = {.pc=0x8018, .a=0x90, .x=0x43, .y=0x0c, .sp=0x42, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0164, .value=0xb1}, {.addr=0x8016, .value=0x3e}, {.addr=0x8017, .value=0x64},
    };
    const struct BusEvent events[] = {
        {.addr=0x8016, .value=0x3e, .type=IO_READ},
        {.addr=0x8017, .value=0x64, .type=IO_READ},
        {.addr=0x0164, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01DE) {
    const struct CPU_State initial_cpu = {.pc=0xd864, .a=0x38, .x=0x49, .y=0x99, .sp=0xae, .status=0x8d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0087, .value=0xfd}, {.addr=0xd864, .value=0x3e}, {.addr=0xd865, .value=0x87},
    };
    const struct CPU_State final_cpu = {.pc=0xd866, .a=0x38, .x=0x49, .y=0x99, .sp=0xae, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0087, .value=0xfd}, {.addr=0xd864, .value=0x3e}, {.addr=0xd865, .value=0x87},
    };
    const struct BusEvent events[] = {
        {.addr=0xd864, .value=0x3e, .type=IO_READ},
        {.addr=0xd865, .value=0x87, .type=IO_READ},
        {.addr=0x0087, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01DF) {
    const struct CPU_State initial_cpu = {.pc=0xc8ec, .a=0x5c, .x=0x9f, .y=0x28, .sp=0x7a, .status=0xe9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0172, .value=0x29}, {.addr=0xc8ec, .value=0x3e}, {.addr=0xc8ed, .value=0x72},
    };
    const struct CPU_State final_cpu = {.pc=0xc8ee, .a=0x5c, .x=0x9f, .y=0x28, .sp=0x7a, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x0172, .value=0x29}, {.addr=0xc8ec, .value=0x3e}, {.addr=0xc8ed, .value=0x72},
    };
    const struct BusEvent events[] = {
        {.addr=0xc8ec, .value=0x3e, .type=IO_READ},
        {.addr=0xc8ed, .value=0x72, .type=IO_READ},
        {.addr=0x0172, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01E0) {
    const struct CPU_State initial_cpu = {.pc=0x186f, .a=0x29, .x=0xf6, .y=0x5a, .sp=0xe3, .status=0x52};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0051, .value=0xf1}, {.addr=0x186f, .value=0x3e}, {.addr=0x1870, .value=0x51},
    };
    const struct CPU_State final_cpu = {.pc=0x1871, .a=0x29, .x=0xf6, .y=0x5a, .sp=0xe3, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x0051, .value=0xf1}, {.addr=0x186f, .value=0x3e}, {.addr=0x1870, .value=0x51},
    };
    const struct BusEvent events[] = {
        {.addr=0x186f, .value=0x3e, .type=IO_READ},
        {.addr=0x1870, .value=0x51, .type=IO_READ},
        {.addr=0x0051, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x317e, .a=0x27, .x=0x1b, .y=0x8c, .sp=0x47, .status=0x35};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0189, .value=0x64}, {.addr=0x317e, .value=0x3e}, {.addr=0x317f, .value=0x89},
    };
    const struct CPU_State final_cpu = {.pc=0x3180, .a=0x27, .x=0x1b, .y=0x8c, .sp=0x47, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0189, .value=0x64}, {.addr=0x317e, .value=0x3e}, {.addr=0x317f, .value=0x89},
    };
    const struct BusEvent events[] = {
        {.addr=0x317e, .value=0x3e, .type=IO_READ},
        {.addr=0x317f, .value=0x89, .type=IO_READ},
        {.addr=0x0189, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01E2) {
    const struct CPU_State initial_cpu = {.pc=0x91d3, .a=0xc0, .x=0x41, .y=0xb8, .sp=0xc7, .status=0x69};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015b, .value=0x31}, {.addr=0x91d3, .value=0x3e}, {.addr=0x91d4, .value=0x5b},
    };
    const struct CPU_State final_cpu = {.pc=0x91d5, .a=0xc0, .x=0x41, .y=0xb8, .sp=0xc7, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x015b, .value=0x31}, {.addr=0x91d3, .value=0x3e}, {.addr=0x91d4, .value=0x5b},
    };
    const struct BusEvent events[] = {
        {.addr=0x91d3, .value=0x3e, .type=IO_READ},
        {.addr=0x91d4, .value=0x5b, .type=IO_READ},
        {.addr=0x015b, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01E3) {
    const struct CPU_State initial_cpu = {.pc=0x5e31, .a=0x4f, .x=0x2e, .y=0xfa, .sp=0xa3, .status=0x65};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0185, .value=0xb6}, {.addr=0x5e31, .value=0x3e}, {.addr=0x5e32, .value=0x85},
    };
    const struct CPU_State final_cpu = {.pc=0x5e33, .a=0x4f, .x=0x2e, .y=0xfa, .sp=0xa3, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x0185, .value=0xb6}, {.addr=0x5e31, .value=0x3e}, {.addr=0x5e32, .value=0x85},
    };
    const struct BusEvent events[] = {
        {.addr=0x5e31, .value=0x3e, .type=IO_READ},
        {.addr=0x5e32, .value=0x85, .type=IO_READ},
        {.addr=0x0185, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01E4) {
    const struct CPU_State initial_cpu = {.pc=0x055e, .a=0xfd, .x=0xcd, .y=0x88, .sp=0x08, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0048, .value=0x5c}, {.addr=0x055e, .value=0x3e}, {.addr=0x055f, .value=0x48},
    };
    const struct CPU_State final_cpu = {.pc=0x0560, .a=0xfd, .x=0xcd, .y=0x88, .sp=0x08, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0048, .value=0x5c}, {.addr=0x055e, .value=0x3e}, {.addr=0x055f, .value=0x48},
    };
    const struct BusEvent events[] = {
        {.addr=0x055e, .value=0x3e, .type=IO_READ},
        {.addr=0x055f, .value=0x48, .type=IO_READ},
        {.addr=0x0048, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01E5) {
    const struct CPU_State initial_cpu = {.pc=0x5e81, .a=0x2f, .x=0x72, .y=0xce, .sp=0x32, .status=0x46};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b2, .value=0x9f}, {.addr=0x5e81, .value=0x3e}, {.addr=0x5e82, .value=0xb2},
    };
    const struct CPU_State final_cpu = {.pc=0x5e83, .a=0x2f, .x=0x72, .y=0xce, .sp=0x32, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b2, .value=0x9f}, {.addr=0x5e81, .value=0x3e}, {.addr=0x5e82, .value=0xb2},
    };
    const struct BusEvent events[] = {
        {.addr=0x5e81, .value=0x3e, .type=IO_READ},
        {.addr=0x5e82, .value=0xb2, .type=IO_READ},
        {.addr=0x00b2, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01E6) {
    const struct CPU_State initial_cpu = {.pc=0x02a5, .a=0x56, .x=0xd9, .y=0x57, .sp=0x14, .status=0x6e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0121, .value=0x1f}, {.addr=0x02a5, .value=0x3e}, {.addr=0x02a6, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0x02a7, .a=0x56, .x=0xd9, .y=0x57, .sp=0x14, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x0121, .value=0x1f}, {.addr=0x02a5, .value=0x3e}, {.addr=0x02a6, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0x02a5, .value=0x3e, .type=IO_READ},
        {.addr=0x02a6, .value=0x21, .type=IO_READ},
        {.addr=0x0121, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01E7) {
    const struct CPU_State initial_cpu = {.pc=0xd8c6, .a=0xd7, .x=0x76, .y=0x13, .sp=0xdd, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011c, .value=0xc0}, {.addr=0xd8c6, .value=0x3e}, {.addr=0xd8c7, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0xd8c8, .a=0xd7, .x=0x76, .y=0x13, .sp=0xdd, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x011c, .value=0xc0}, {.addr=0xd8c6, .value=0x3e}, {.addr=0xd8c7, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0xd8c6, .value=0x3e, .type=IO_READ},
        {.addr=0xd8c7, .value=0x1c, .type=IO_READ},
        {.addr=0x011c, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01E8) {
    const struct CPU_State initial_cpu = {.pc=0xdd99, .a=0xeb, .x=0x78, .y=0xc4, .sp=0xc3, .status=0xe1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0164, .value=0xbc}, {.addr=0xdd99, .value=0x3e}, {.addr=0xdd9a, .value=0x64},
    };
    const struct CPU_State final_cpu = {.pc=0xdd9b, .a=0xeb, .x=0x78, .y=0xc4, .sp=0xc3, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0164, .value=0xbc}, {.addr=0xdd99, .value=0x3e}, {.addr=0xdd9a, .value=0x64},
    };
    const struct BusEvent events[] = {
        {.addr=0xdd99, .value=0x3e, .type=IO_READ},
        {.addr=0xdd9a, .value=0x64, .type=IO_READ},
        {.addr=0x0164, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01E9) {
    const struct CPU_State initial_cpu = {.pc=0x781d, .a=0x64, .x=0xe2, .y=0x9c, .sp=0xd1, .status=0x5a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0013, .value=0x61}, {.addr=0x781d, .value=0x3e}, {.addr=0x781e, .value=0x13},
    };
    const struct CPU_State final_cpu = {.pc=0x781f, .a=0x64, .x=0xe2, .y=0x9c, .sp=0xd1, .status=0xd9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0013, .value=0x61}, {.addr=0x781d, .value=0x3e}, {.addr=0x781e, .value=0x13},
    };
    const struct BusEvent events[] = {
        {.addr=0x781d, .value=0x3e, .type=IO_READ},
        {.addr=0x781e, .value=0x13, .type=IO_READ},
        {.addr=0x0013, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01EA) {
    const struct CPU_State initial_cpu = {.pc=0x693e, .a=0x22, .x=0x8b, .y=0x5b, .sp=0xa6, .status=0xac};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0109, .value=0x71}, {.addr=0x693e, .value=0x3e}, {.addr=0x693f, .value=0x09},
    };
    const struct CPU_State final_cpu = {.pc=0x6940, .a=0x22, .x=0x8b, .y=0x5b, .sp=0xa6, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0109, .value=0x71}, {.addr=0x693e, .value=0x3e}, {.addr=0x693f, .value=0x09},
    };
    const struct BusEvent events[] = {
        {.addr=0x693e, .value=0x3e, .type=IO_READ},
        {.addr=0x693f, .value=0x09, .type=IO_READ},
        {.addr=0x0109, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01EB) {
    const struct CPU_State initial_cpu = {.pc=0x1edc, .a=0xc0, .x=0x4a, .y=0x92, .sp=0x60, .status=0x90};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0094, .value=0x41}, {.addr=0x1edc, .value=0x3e}, {.addr=0x1edd, .value=0x94},
    };
    const struct CPU_State final_cpu = {.pc=0x1ede, .a=0xc0, .x=0x4a, .y=0x92, .sp=0x60, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x0094, .value=0x41}, {.addr=0x1edc, .value=0x3e}, {.addr=0x1edd, .value=0x94},
    };
    const struct BusEvent events[] = {
        {.addr=0x1edc, .value=0x3e, .type=IO_READ},
        {.addr=0x1edd, .value=0x94, .type=IO_READ},
        {.addr=0x0094, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01EC) {
    const struct CPU_State initial_cpu = {.pc=0xc001, .a=0x3b, .x=0xfc, .y=0x2c, .sp=0xf2, .status=0x61};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f8, .value=0xf4}, {.addr=0xc001, .value=0x3e}, {.addr=0xc002, .value=0xf8},
    };
    const struct CPU_State final_cpu = {.pc=0xc003, .a=0x3b, .x=0xfc, .y=0x2c, .sp=0xf2, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f8, .value=0xf4}, {.addr=0xc001, .value=0x3e}, {.addr=0xc002, .value=0xf8},
    };
    const struct BusEvent events[] = {
        {.addr=0xc001, .value=0x3e, .type=IO_READ},
        {.addr=0xc002, .value=0xf8, .type=IO_READ},
        {.addr=0x01f8, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01ED) {
    const struct CPU_State initial_cpu = {.pc=0xee96, .a=0x21, .x=0xf1, .y=0xc9, .sp=0x51, .status=0xd7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009e, .value=0x94}, {.addr=0xee96, .value=0x3e}, {.addr=0xee97, .value=0x9e},
    };
    const struct CPU_State final_cpu = {.pc=0xee98, .a=0x21, .x=0xf1, .y=0xc9, .sp=0x51, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x009e, .value=0x94}, {.addr=0xee96, .value=0x3e}, {.addr=0xee97, .value=0x9e},
    };
    const struct BusEvent events[] = {
        {.addr=0xee96, .value=0x3e, .type=IO_READ},
        {.addr=0xee97, .value=0x9e, .type=IO_READ},
        {.addr=0x009e, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01EE) {
    const struct CPU_State initial_cpu = {.pc=0xff83, .a=0xe9, .x=0x5a, .y=0xe6, .sp=0x1e, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0176, .value=0x26}, {.addr=0xff83, .value=0x3e}, {.addr=0xff84, .value=0x76},
    };
    const struct CPU_State final_cpu = {.pc=0xff85, .a=0xe9, .x=0x5a, .y=0xe6, .sp=0x1e, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x0176, .value=0x26}, {.addr=0xff83, .value=0x3e}, {.addr=0xff84, .value=0x76},
    };
    const struct BusEvent events[] = {
        {.addr=0xff83, .value=0x3e, .type=IO_READ},
        {.addr=0xff84, .value=0x76, .type=IO_READ},
        {.addr=0x0176, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01EF) {
    const struct CPU_State initial_cpu = {.pc=0x8707, .a=0x38, .x=0xc2, .y=0x4f, .sp=0x2d, .status=0x97};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003a, .value=0x52}, {.addr=0x8707, .value=0x3e}, {.addr=0x8708, .value=0x3a},
    };
    const struct CPU_State final_cpu = {.pc=0x8709, .a=0x38, .x=0xc2, .y=0x4f, .sp=0x2d, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x003a, .value=0x52}, {.addr=0x8707, .value=0x3e}, {.addr=0x8708, .value=0x3a},
    };
    const struct BusEvent events[] = {
        {.addr=0x8707, .value=0x3e, .type=IO_READ},
        {.addr=0x8708, .value=0x3a, .type=IO_READ},
        {.addr=0x003a, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01F0) {
    const struct CPU_State initial_cpu = {.pc=0x0214, .a=0x55, .x=0x6f, .y=0x2a, .sp=0x94, .status=0x59};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e3, .value=0x64}, {.addr=0x0214, .value=0x3e}, {.addr=0x0215, .value=0xe3},
    };
    const struct CPU_State final_cpu = {.pc=0x0216, .a=0x55, .x=0x6f, .y=0x2a, .sp=0x94, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e3, .value=0x64}, {.addr=0x0214, .value=0x3e}, {.addr=0x0215, .value=0xe3},
    };
    const struct BusEvent events[] = {
        {.addr=0x0214, .value=0x3e, .type=IO_READ},
        {.addr=0x0215, .value=0xe3, .type=IO_READ},
        {.addr=0x00e3, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01F1) {
    const struct CPU_State initial_cpu = {.pc=0x2ccc, .a=0xce, .x=0x8c, .y=0xb5, .sp=0x36, .status=0xe4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ba, .value=0x0a}, {.addr=0x2ccc, .value=0x3e}, {.addr=0x2ccd, .value=0xba},
    };
    const struct CPU_State final_cpu = {.pc=0x2cce, .a=0xce, .x=0x8c, .y=0xb5, .sp=0x36, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ba, .value=0x0a}, {.addr=0x2ccc, .value=0x3e}, {.addr=0x2ccd, .value=0xba},
    };
    const struct BusEvent events[] = {
        {.addr=0x2ccc, .value=0x3e, .type=IO_READ},
        {.addr=0x2ccd, .value=0xba, .type=IO_READ},
        {.addr=0x01ba, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01F2) {
    const struct CPU_State initial_cpu = {.pc=0x9320, .a=0x8e, .x=0x7c, .y=0x47, .sp=0x2b, .status=0xf4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015a, .value=0xc9}, {.addr=0x9320, .value=0x3e}, {.addr=0x9321, .value=0x5a},
    };
    const struct CPU_State final_cpu = {.pc=0x9322, .a=0x8e, .x=0x7c, .y=0x47, .sp=0x2b, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x015a, .value=0xc9}, {.addr=0x9320, .value=0x3e}, {.addr=0x9321, .value=0x5a},
    };
    const struct BusEvent events[] = {
        {.addr=0x9320, .value=0x3e, .type=IO_READ},
        {.addr=0x9321, .value=0x5a, .type=IO_READ},
        {.addr=0x015a, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01F3) {
    const struct CPU_State initial_cpu = {.pc=0x1b78, .a=0xdf, .x=0x56, .y=0x60, .sp=0x62, .status=0xcd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000d, .value=0x16}, {.addr=0x1b78, .value=0x3e}, {.addr=0x1b79, .value=0x0d},
    };
    const struct CPU_State final_cpu = {.pc=0x1b7a, .a=0xdf, .x=0x56, .y=0x60, .sp=0x62, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x000d, .value=0x16}, {.addr=0x1b78, .value=0x3e}, {.addr=0x1b79, .value=0x0d},
    };
    const struct BusEvent events[] = {
        {.addr=0x1b78, .value=0x3e, .type=IO_READ},
        {.addr=0x1b79, .value=0x0d, .type=IO_READ},
        {.addr=0x000d, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01F4) {
    const struct CPU_State initial_cpu = {.pc=0xcf86, .a=0x32, .x=0xd7, .y=0xb4, .sp=0x33, .status=0x6a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0108, .value=0x0b}, {.addr=0xcf86, .value=0x3e}, {.addr=0xcf87, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0xcf88, .a=0x32, .x=0xd7, .y=0xb4, .sp=0x33, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0108, .value=0x0b}, {.addr=0xcf86, .value=0x3e}, {.addr=0xcf87, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0xcf86, .value=0x3e, .type=IO_READ},
        {.addr=0xcf87, .value=0x08, .type=IO_READ},
        {.addr=0x0108, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01F5) {
    const struct CPU_State initial_cpu = {.pc=0x31fa, .a=0x10, .x=0x07, .y=0x76, .sp=0xac, .status=0xab};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e2, .value=0x10}, {.addr=0x31fa, .value=0x3e}, {.addr=0x31fb, .value=0xe2},
    };
    const struct CPU_State final_cpu = {.pc=0x31fc, .a=0x10, .x=0x07, .y=0x76, .sp=0xac, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e2, .value=0x10}, {.addr=0x31fa, .value=0x3e}, {.addr=0x31fb, .value=0xe2},
    };
    const struct BusEvent events[] = {
        {.addr=0x31fa, .value=0x3e, .type=IO_READ},
        {.addr=0x31fb, .value=0xe2, .type=IO_READ},
        {.addr=0x01e2, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01F6) {
    const struct CPU_State initial_cpu = {.pc=0xcd36, .a=0xbf, .x=0x77, .y=0xcc, .sp=0xc8, .status=0x8e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0053, .value=0x6d}, {.addr=0xcd36, .value=0x3e}, {.addr=0xcd37, .value=0x53},
    };
    const struct CPU_State final_cpu = {.pc=0xcd38, .a=0xbf, .x=0x77, .y=0xcc, .sp=0xc8, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0053, .value=0x6d}, {.addr=0xcd36, .value=0x3e}, {.addr=0xcd37, .value=0x53},
    };
    const struct BusEvent events[] = {
        {.addr=0xcd36, .value=0x3e, .type=IO_READ},
        {.addr=0xcd37, .value=0x53, .type=IO_READ},
        {.addr=0x0053, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01F7) {
    const struct CPU_State initial_cpu = {.pc=0xb388, .a=0x63, .x=0x2f, .y=0xed, .sp=0x0d, .status=0xff};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017b, .value=0xba}, {.addr=0xb388, .value=0x3e}, {.addr=0xb389, .value=0x7b},
    };
    const struct CPU_State final_cpu = {.pc=0xb38a, .a=0x63, .x=0x2f, .y=0xed, .sp=0x0d, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x017b, .value=0xba}, {.addr=0xb388, .value=0x3e}, {.addr=0xb389, .value=0x7b},
    };
    const struct BusEvent events[] = {
        {.addr=0xb388, .value=0x3e, .type=IO_READ},
        {.addr=0xb389, .value=0x7b, .type=IO_READ},
        {.addr=0x017b, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01F8) {
    const struct CPU_State initial_cpu = {.pc=0xba89, .a=0xec, .x=0xfc, .y=0xa0, .sp=0x00, .status=0x3a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011c, .value=0x8a}, {.addr=0xba89, .value=0x3e}, {.addr=0xba8a, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0xba8b, .a=0xec, .x=0xfc, .y=0xa0, .sp=0x00, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x011c, .value=0x8a}, {.addr=0xba89, .value=0x3e}, {.addr=0xba8a, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0xba89, .value=0x3e, .type=IO_READ},
        {.addr=0xba8a, .value=0x1c, .type=IO_READ},
        {.addr=0x011c, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x6ad3, .a=0xb2, .x=0x82, .y=0x28, .sp=0x96, .status=0x8d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0029, .value=0x61}, {.addr=0x6ad3, .value=0x3e}, {.addr=0x6ad4, .value=0x29},
    };
    const struct CPU_State final_cpu = {.pc=0x6ad5, .a=0xb2, .x=0x82, .y=0x28, .sp=0x96, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0029, .value=0x61}, {.addr=0x6ad3, .value=0x3e}, {.addr=0x6ad4, .value=0x29},
    };
    const struct BusEvent events[] = {
        {.addr=0x6ad3, .value=0x3e, .type=IO_READ},
        {.addr=0x6ad4, .value=0x29, .type=IO_READ},
        {.addr=0x0029, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01FA) {
    const struct CPU_State initial_cpu = {.pc=0x2fa9, .a=0x38, .x=0x41, .y=0xce, .sp=0x10, .status=0x83};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0098, .value=0x5a}, {.addr=0x2fa9, .value=0x3e}, {.addr=0x2faa, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0x2fab, .a=0x38, .x=0x41, .y=0xce, .sp=0x10, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x0098, .value=0x5a}, {.addr=0x2fa9, .value=0x3e}, {.addr=0x2faa, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0x2fa9, .value=0x3e, .type=IO_READ},
        {.addr=0x2faa, .value=0x98, .type=IO_READ},
        {.addr=0x0098, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01FB) {
    const struct CPU_State initial_cpu = {.pc=0xbffe, .a=0x84, .x=0xa9, .y=0xf4, .sp=0x69, .status=0xf4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ec, .value=0x37}, {.addr=0xbffe, .value=0x3e}, {.addr=0xbfff, .value=0xec},
    };
    const struct CPU_State final_cpu = {.pc=0xc000, .a=0x84, .x=0xa9, .y=0xf4, .sp=0x69, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ec, .value=0x37}, {.addr=0xbffe, .value=0x3e}, {.addr=0xbfff, .value=0xec},
    };
    const struct BusEvent events[] = {
        {.addr=0xbffe, .value=0x3e, .type=IO_READ},
        {.addr=0xbfff, .value=0xec, .type=IO_READ},
        {.addr=0x01ec, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01FC) {
    const struct CPU_State initial_cpu = {.pc=0xce24, .a=0x74, .x=0xa3, .y=0x94, .sp=0x4c, .status=0x38};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010b, .value=0x31}, {.addr=0xce24, .value=0x3e}, {.addr=0xce25, .value=0x0b},
    };
    const struct CPU_State final_cpu = {.pc=0xce26, .a=0x74, .x=0xa3, .y=0x94, .sp=0x4c, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x010b, .value=0x31}, {.addr=0xce24, .value=0x3e}, {.addr=0xce25, .value=0x0b},
    };
    const struct BusEvent events[] = {
        {.addr=0xce24, .value=0x3e, .type=IO_READ},
        {.addr=0xce25, .value=0x0b, .type=IO_READ},
        {.addr=0x010b, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01FD) {
    const struct CPU_State initial_cpu = {.pc=0xdbdb, .a=0xa6, .x=0xde, .y=0x75, .sp=0xca, .status=0x01};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bf, .value=0x18}, {.addr=0xdbdb, .value=0x3e}, {.addr=0xdbdc, .value=0xbf},
    };
    const struct CPU_State final_cpu = {.pc=0xdbdd, .a=0xa6, .x=0xde, .y=0x75, .sp=0xca, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bf, .value=0x18}, {.addr=0xdbdb, .value=0x3e}, {.addr=0xdbdc, .value=0xbf},
    };
    const struct BusEvent events[] = {
        {.addr=0xdbdb, .value=0x3e, .type=IO_READ},
        {.addr=0xdbdc, .value=0xbf, .type=IO_READ},
        {.addr=0x00bf, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01FE) {
    const struct CPU_State initial_cpu = {.pc=0xe92a, .a=0xe4, .x=0xae, .y=0x44, .sp=0xdf, .status=0x8a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c6, .value=0x2a}, {.addr=0xe92a, .value=0x3e}, {.addr=0xe92b, .value=0xc6},
    };
    const struct CPU_State final_cpu = {.pc=0xe92c, .a=0xe4, .x=0xae, .y=0x44, .sp=0xdf, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c6, .value=0x2a}, {.addr=0xe92a, .value=0x3e}, {.addr=0xe92b, .value=0xc6},
    };
    const struct BusEvent events[] = {
        {.addr=0xe92a, .value=0x3e, .type=IO_READ},
        {.addr=0xe92b, .value=0xc6, .type=IO_READ},
        {.addr=0x00c6, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x4bf3, .a=0x2c, .x=0x96, .y=0x5c, .sp=0x5f, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cc, .value=0xb0}, {.addr=0x4bf3, .value=0x3e}, {.addr=0x4bf4, .value=0xcc},
    };
    const struct CPU_State final_cpu = {.pc=0x4bf5, .a=0x2c, .x=0x96, .y=0x5c, .sp=0x5f, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cc, .value=0xb0}, {.addr=0x4bf3, .value=0x3e}, {.addr=0x4bf4, .value=0xcc},
    };
    const struct BusEvent events[] = {
        {.addr=0x4bf3, .value=0x3e, .type=IO_READ},
        {.addr=0x4bf4, .value=0xcc, .type=IO_READ},
        {.addr=0x00cc, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0200) {
    const struct CPU_State initial_cpu = {.pc=0x25fc, .a=0xb8, .x=0x4c, .y=0x4a, .sp=0x98, .status=0x21};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0158, .value=0x0e}, {.addr=0x25fc, .value=0x3e}, {.addr=0x25fd, .value=0x58},
    };
    const struct CPU_State final_cpu = {.pc=0x25fe, .a=0xb8, .x=0x4c, .y=0x4a, .sp=0x98, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x0158, .value=0x0e}, {.addr=0x25fc, .value=0x3e}, {.addr=0x25fd, .value=0x58},
    };
    const struct BusEvent events[] = {
        {.addr=0x25fc, .value=0x3e, .type=IO_READ},
        {.addr=0x25fd, .value=0x58, .type=IO_READ},
        {.addr=0x0158, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0201) {
    const struct CPU_State initial_cpu = {.pc=0xccaf, .a=0x0a, .x=0xba, .y=0xff, .sp=0xad, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c1, .value=0x45}, {.addr=0xccaf, .value=0x3e}, {.addr=0xccb0, .value=0xc1},
    };
    const struct CPU_State final_cpu = {.pc=0xccb1, .a=0x0a, .x=0xba, .y=0xff, .sp=0xad, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c1, .value=0x45}, {.addr=0xccaf, .value=0x3e}, {.addr=0xccb0, .value=0xc1},
    };
    const struct BusEvent events[] = {
        {.addr=0xccaf, .value=0x3e, .type=IO_READ},
        {.addr=0xccb0, .value=0xc1, .type=IO_READ},
        {.addr=0x01c1, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0202) {
    const struct CPU_State initial_cpu = {.pc=0x0344, .a=0x22, .x=0x9d, .y=0x84, .sp=0x17, .status=0xcd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00af, .value=0x6f}, {.addr=0x0344, .value=0x3e}, {.addr=0x0345, .value=0xaf},
    };
    const struct CPU_State final_cpu = {.pc=0x0346, .a=0x22, .x=0x9d, .y=0x84, .sp=0x17, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00af, .value=0x6f}, {.addr=0x0344, .value=0x3e}, {.addr=0x0345, .value=0xaf},
    };
    const struct BusEvent events[] = {
        {.addr=0x0344, .value=0x3e, .type=IO_READ},
        {.addr=0x0345, .value=0xaf, .type=IO_READ},
        {.addr=0x00af, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0203) {
    const struct CPU_State initial_cpu = {.pc=0x92d7, .a=0x43, .x=0xad, .y=0xc0, .sp=0xf6, .status=0x62};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f9, .value=0x7e}, {.addr=0x92d7, .value=0x3e}, {.addr=0x92d8, .value=0xf9},
    };
    const struct CPU_State final_cpu = {.pc=0x92d9, .a=0x43, .x=0xad, .y=0xc0, .sp=0xf6, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f9, .value=0x7e}, {.addr=0x92d7, .value=0x3e}, {.addr=0x92d8, .value=0xf9},
    };
    const struct BusEvent events[] = {
        {.addr=0x92d7, .value=0x3e, .type=IO_READ},
        {.addr=0x92d8, .value=0xf9, .type=IO_READ},
        {.addr=0x01f9, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0204) {
    const struct CPU_State initial_cpu = {.pc=0xe506, .a=0xeb, .x=0x38, .y=0x00, .sp=0xf3, .status=0x5e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0053, .value=0x23}, {.addr=0xe506, .value=0x3e}, {.addr=0xe507, .value=0x53},
    };
    const struct CPU_State final_cpu = {.pc=0xe508, .a=0xeb, .x=0x38, .y=0x00, .sp=0xf3, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0053, .value=0x23}, {.addr=0xe506, .value=0x3e}, {.addr=0xe507, .value=0x53},
    };
    const struct BusEvent events[] = {
        {.addr=0xe506, .value=0x3e, .type=IO_READ},
        {.addr=0xe507, .value=0x53, .type=IO_READ},
        {.addr=0x0053, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0205) {
    const struct CPU_State initial_cpu = {.pc=0xe659, .a=0x77, .x=0x10, .y=0x27, .sp=0xfd, .status=0x44};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d2, .value=0xe0}, {.addr=0xe659, .value=0x3e}, {.addr=0xe65a, .value=0xd2},
    };
    const struct CPU_State final_cpu = {.pc=0xe65b, .a=0x77, .x=0x10, .y=0x27, .sp=0xfd, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d2, .value=0xe0}, {.addr=0xe659, .value=0x3e}, {.addr=0xe65a, .value=0xd2},
    };
    const struct BusEvent events[] = {
        {.addr=0xe659, .value=0x3e, .type=IO_READ},
        {.addr=0xe65a, .value=0xd2, .type=IO_READ},
        {.addr=0x00d2, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0207) {
    const struct CPU_State initial_cpu = {.pc=0x1ec5, .a=0x4f, .x=0x16, .y=0xb8, .sp=0xec, .status=0x6d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0100, .value=0x9b}, {.addr=0x1ec5, .value=0x3e}, {.addr=0x1ec6, .value=0x00},
    };
    const struct CPU_State final_cpu = {.pc=0x1ec7, .a=0x4f, .x=0x16, .y=0xb8, .sp=0xec, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0100, .value=0x9b}, {.addr=0x1ec5, .value=0x3e}, {.addr=0x1ec6, .value=0x00},
    };
    const struct BusEvent events[] = {
        {.addr=0x1ec5, .value=0x3e, .type=IO_READ},
        {.addr=0x1ec6, .value=0x00, .type=IO_READ},
        {.addr=0x0100, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0208) {
    const struct CPU_State initial_cpu = {.pc=0x4051, .a=0xfc, .x=0x82, .y=0x00, .sp=0xa8, .status=0xe3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0128, .value=0x5b}, {.addr=0x4051, .value=0x3e}, {.addr=0x4052, .value=0x28},
    };
    const struct CPU_State final_cpu = {.pc=0x4053, .a=0xfc, .x=0x82, .y=0x00, .sp=0xa8, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x0128, .value=0x5b}, {.addr=0x4051, .value=0x3e}, {.addr=0x4052, .value=0x28},
    };
    const struct BusEvent events[] = {
        {.addr=0x4051, .value=0x3e, .type=IO_READ},
        {.addr=0x4052, .value=0x28, .type=IO_READ},
        {.addr=0x0128, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0209) {
    const struct CPU_State initial_cpu = {.pc=0xad06, .a=0x16, .x=0x12, .y=0x12, .sp=0x4f, .status=0x59};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0014, .value=0x14}, {.addr=0xad06, .value=0x3e}, {.addr=0xad07, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0xad08, .a=0x16, .x=0x12, .y=0x12, .sp=0x4f, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0014, .value=0x14}, {.addr=0xad06, .value=0x3e}, {.addr=0xad07, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0xad06, .value=0x3e, .type=IO_READ},
        {.addr=0xad07, .value=0x14, .type=IO_READ},
        {.addr=0x0014, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_020A) {
    const struct CPU_State initial_cpu = {.pc=0xe06b, .a=0x7e, .x=0x0b, .y=0x16, .sp=0xc8, .status=0x58};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0026, .value=0x03}, {.addr=0xe06b, .value=0x3e}, {.addr=0xe06c, .value=0x26},
    };
    const struct CPU_State final_cpu = {.pc=0xe06d, .a=0x7e, .x=0x0b, .y=0x16, .sp=0xc8, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x0026, .value=0x03}, {.addr=0xe06b, .value=0x3e}, {.addr=0xe06c, .value=0x26},
    };
    const struct BusEvent events[] = {
        {.addr=0xe06b, .value=0x3e, .type=IO_READ},
        {.addr=0xe06c, .value=0x26, .type=IO_READ},
        {.addr=0x0026, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_020B) {
    const struct CPU_State initial_cpu = {.pc=0x21ef, .a=0xef, .x=0x9f, .y=0x6a, .sp=0x68, .status=0xea};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013f, .value=0x67}, {.addr=0x21ef, .value=0x3e}, {.addr=0x21f0, .value=0x3f},
    };
    const struct CPU_State final_cpu = {.pc=0x21f1, .a=0xef, .x=0x9f, .y=0x6a, .sp=0x68, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x013f, .value=0x67}, {.addr=0x21ef, .value=0x3e}, {.addr=0x21f0, .value=0x3f},
    };
    const struct BusEvent events[] = {
        {.addr=0x21ef, .value=0x3e, .type=IO_READ},
        {.addr=0x21f0, .value=0x3f, .type=IO_READ},
        {.addr=0x013f, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_020C) {
    const struct CPU_State initial_cpu = {.pc=0x8867, .a=0x49, .x=0x40, .y=0xb2, .sp=0xcd, .status=0x55};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ee, .value=0x59}, {.addr=0x8867, .value=0x3e}, {.addr=0x8868, .value=0xee},
    };
    const struct CPU_State final_cpu = {.pc=0x8869, .a=0x49, .x=0x40, .y=0xb2, .sp=0xcd, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ee, .value=0x59}, {.addr=0x8867, .value=0x3e}, {.addr=0x8868, .value=0xee},
    };
    const struct BusEvent events[] = {
        {.addr=0x8867, .value=0x3e, .type=IO_READ},
        {.addr=0x8868, .value=0xee, .type=IO_READ},
        {.addr=0x00ee, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_020D) {
    const struct CPU_State initial_cpu = {.pc=0xcc91, .a=0x71, .x=0xaa, .y=0x04, .sp=0xd6, .status=0xa8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0131, .value=0x76}, {.addr=0xcc91, .value=0x3e}, {.addr=0xcc92, .value=0x31},
    };
    const struct CPU_State final_cpu = {.pc=0xcc93, .a=0x71, .x=0xaa, .y=0x04, .sp=0xd6, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x0131, .value=0x76}, {.addr=0xcc91, .value=0x3e}, {.addr=0xcc92, .value=0x31},
    };
    const struct BusEvent events[] = {
        {.addr=0xcc91, .value=0x3e, .type=IO_READ},
        {.addr=0xcc92, .value=0x31, .type=IO_READ},
        {.addr=0x0131, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_020E) {
    const struct CPU_State initial_cpu = {.pc=0x4341, .a=0x5f, .x=0x27, .y=0x7c, .sp=0xa1, .status=0x6b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ec, .value=0x23}, {.addr=0x4341, .value=0x3e}, {.addr=0x4342, .value=0xec},
    };
    const struct CPU_State final_cpu = {.pc=0x4343, .a=0x5f, .x=0x27, .y=0x7c, .sp=0xa1, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ec, .value=0x23}, {.addr=0x4341, .value=0x3e}, {.addr=0x4342, .value=0xec},
    };
    const struct BusEvent events[] = {
        {.addr=0x4341, .value=0x3e, .type=IO_READ},
        {.addr=0x4342, .value=0xec, .type=IO_READ},
        {.addr=0x01ec, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_020F) {
    const struct CPU_State initial_cpu = {.pc=0x3694, .a=0x9f, .x=0x41, .y=0x81, .sp=0xc2, .status=0x9e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0017, .value=0xb7}, {.addr=0x3694, .value=0x3e}, {.addr=0x3695, .value=0x17},
    };
    const struct CPU_State final_cpu = {.pc=0x3696, .a=0x9f, .x=0x41, .y=0x81, .sp=0xc2, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0017, .value=0xb7}, {.addr=0x3694, .value=0x3e}, {.addr=0x3695, .value=0x17},
    };
    const struct BusEvent events[] = {
        {.addr=0x3694, .value=0x3e, .type=IO_READ},
        {.addr=0x3695, .value=0x17, .type=IO_READ},
        {.addr=0x0017, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0211) {
    const struct CPU_State initial_cpu = {.pc=0x27ff, .a=0xdd, .x=0x3d, .y=0x48, .sp=0xc4, .status=0x3c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b8, .value=0x54}, {.addr=0x27ff, .value=0x3e}, {.addr=0x2800, .value=0xb8},
    };
    const struct CPU_State final_cpu = {.pc=0x2801, .a=0xdd, .x=0x3d, .y=0x48, .sp=0xc4, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b8, .value=0x54}, {.addr=0x27ff, .value=0x3e}, {.addr=0x2800, .value=0xb8},
    };
    const struct BusEvent events[] = {
        {.addr=0x27ff, .value=0x3e, .type=IO_READ},
        {.addr=0x2800, .value=0xb8, .type=IO_READ},
        {.addr=0x01b8, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0212) {
    const struct CPU_State initial_cpu = {.pc=0x2693, .a=0x94, .x=0xa2, .y=0x94, .sp=0x0c, .status=0xd6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0006, .value=0x27}, {.addr=0x2693, .value=0x3e}, {.addr=0x2694, .value=0x06},
    };
    const struct CPU_State final_cpu = {.pc=0x2695, .a=0x94, .x=0xa2, .y=0x94, .sp=0x0c, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x0006, .value=0x27}, {.addr=0x2693, .value=0x3e}, {.addr=0x2694, .value=0x06},
    };
    const struct BusEvent events[] = {
        {.addr=0x2693, .value=0x3e, .type=IO_READ},
        {.addr=0x2694, .value=0x06, .type=IO_READ},
        {.addr=0x0006, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0213) {
    const struct CPU_State initial_cpu = {.pc=0xf902, .a=0x03, .x=0x62, .y=0xcd, .sp=0xb9, .status=0xa4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0197, .value=0x69}, {.addr=0xf902, .value=0x3e}, {.addr=0xf903, .value=0x97},
    };
    const struct CPU_State final_cpu = {.pc=0xf904, .a=0x03, .x=0x62, .y=0xcd, .sp=0xb9, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0197, .value=0x69}, {.addr=0xf902, .value=0x3e}, {.addr=0xf903, .value=0x97},
    };
    const struct BusEvent events[] = {
        {.addr=0xf902, .value=0x3e, .type=IO_READ},
        {.addr=0xf903, .value=0x97, .type=IO_READ},
        {.addr=0x0197, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0214) {
    const struct CPU_State initial_cpu = {.pc=0x7855, .a=0xa0, .x=0xe6, .y=0xb7, .sp=0x86, .status=0x8e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d2, .value=0x87}, {.addr=0x7855, .value=0x3e}, {.addr=0x7856, .value=0xd2},
    };
    const struct CPU_State final_cpu = {.pc=0x7857, .a=0xa0, .x=0xe6, .y=0xb7, .sp=0x86, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d2, .value=0x87}, {.addr=0x7855, .value=0x3e}, {.addr=0x7856, .value=0xd2},
    };
    const struct BusEvent events[] = {
        {.addr=0x7855, .value=0x3e, .type=IO_READ},
        {.addr=0x7856, .value=0xd2, .type=IO_READ},
        {.addr=0x00d2, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0215) {
    const struct CPU_State initial_cpu = {.pc=0xbdf8, .a=0xfd, .x=0xcb, .y=0x84, .sp=0xfb, .status=0x36};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ea, .value=0x73}, {.addr=0xbdf8, .value=0x3e}, {.addr=0xbdf9, .value=0xea},
    };
    const struct CPU_State final_cpu = {.pc=0xbdfa, .a=0xfd, .x=0xcb, .y=0x84, .sp=0xfb, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ea, .value=0x73}, {.addr=0xbdf8, .value=0x3e}, {.addr=0xbdf9, .value=0xea},
    };
    const struct BusEvent events[] = {
        {.addr=0xbdf8, .value=0x3e, .type=IO_READ},
        {.addr=0xbdf9, .value=0xea, .type=IO_READ},
        {.addr=0x01ea, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0216) {
    const struct CPU_State initial_cpu = {.pc=0xac5a, .a=0xc9, .x=0xfe, .y=0x8b, .sp=0x05, .status=0xcf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e3, .value=0xe4}, {.addr=0xac5a, .value=0x3e}, {.addr=0xac5b, .value=0xe3},
    };
    const struct CPU_State final_cpu = {.pc=0xac5c, .a=0xc9, .x=0xfe, .y=0x8b, .sp=0x05, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e3, .value=0xe4}, {.addr=0xac5a, .value=0x3e}, {.addr=0xac5b, .value=0xe3},
    };
    const struct BusEvent events[] = {
        {.addr=0xac5a, .value=0x3e, .type=IO_READ},
        {.addr=0xac5b, .value=0xe3, .type=IO_READ},
        {.addr=0x00e3, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0217) {
    const struct CPU_State initial_cpu = {.pc=0x29cc, .a=0x34, .x=0x38, .y=0x25, .sp=0x5e, .status=0x82};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0085, .value=0x9d}, {.addr=0x29cc, .value=0x3e}, {.addr=0x29cd, .value=0x85},
    };
    const struct CPU_State final_cpu = {.pc=0x29ce, .a=0x34, .x=0x38, .y=0x25, .sp=0x5e, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x0085, .value=0x9d}, {.addr=0x29cc, .value=0x3e}, {.addr=0x29cd, .value=0x85},
    };
    const struct BusEvent events[] = {
        {.addr=0x29cc, .value=0x3e, .type=IO_READ},
        {.addr=0x29cd, .value=0x85, .type=IO_READ},
        {.addr=0x0085, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0218) {
    const struct CPU_State initial_cpu = {.pc=0x581b, .a=0x7b, .x=0x3a, .y=0x6e, .sp=0x69, .status=0x05};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003c, .value=0x5e}, {.addr=0x581b, .value=0x3e}, {.addr=0x581c, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0x581d, .a=0x7b, .x=0x3a, .y=0x6e, .sp=0x69, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x003c, .value=0x5e}, {.addr=0x581b, .value=0x3e}, {.addr=0x581c, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0x581b, .value=0x3e, .type=IO_READ},
        {.addr=0x581c, .value=0x3c, .type=IO_READ},
        {.addr=0x003c, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0219) {
    const struct CPU_State initial_cpu = {.pc=0x635b, .a=0x2c, .x=0x82, .y=0x4c, .sp=0xe3, .status=0x18};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0073, .value=0x68}, {.addr=0x635b, .value=0x3e}, {.addr=0x635c, .value=0x73},
    };
    const struct CPU_State final_cpu = {.pc=0x635d, .a=0x2c, .x=0x82, .y=0x4c, .sp=0xe3, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x0073, .value=0x68}, {.addr=0x635b, .value=0x3e}, {.addr=0x635c, .value=0x73},
    };
    const struct BusEvent events[] = {
        {.addr=0x635b, .value=0x3e, .type=IO_READ},
        {.addr=0x635c, .value=0x73, .type=IO_READ},
        {.addr=0x0073, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_021A) {
    const struct CPU_State initial_cpu = {.pc=0xc201, .a=0x1d, .x=0xbd, .y=0x3c, .sp=0xf8, .status=0x0b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0057, .value=0x3e}, {.addr=0xc201, .value=0x3e}, {.addr=0xc202, .value=0x57},
    };
    const struct CPU_State final_cpu = {.pc=0xc203, .a=0x1d, .x=0xbd, .y=0x3c, .sp=0xf8, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x0057, .value=0x3e}, {.addr=0xc201, .value=0x3e}, {.addr=0xc202, .value=0x57},
    };
    const struct BusEvent events[] = {
        {.addr=0xc201, .value=0x3e, .type=IO_READ},
        {.addr=0xc202, .value=0x57, .type=IO_READ},
        {.addr=0x0057, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_021B) {
    const struct CPU_State initial_cpu = {.pc=0xaba6, .a=0xbd, .x=0x6a, .y=0x9c, .sp=0xf8, .status=0x85};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d1, .value=0x19}, {.addr=0xaba6, .value=0x3e}, {.addr=0xaba7, .value=0xd1},
    };
    const struct CPU_State final_cpu = {.pc=0xaba8, .a=0xbd, .x=0x6a, .y=0x9c, .sp=0xf8, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d1, .value=0x19}, {.addr=0xaba6, .value=0x3e}, {.addr=0xaba7, .value=0xd1},
    };
    const struct BusEvent events[] = {
        {.addr=0xaba6, .value=0x3e, .type=IO_READ},
        {.addr=0xaba7, .value=0xd1, .type=IO_READ},
        {.addr=0x00d1, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_021C) {
    const struct CPU_State initial_cpu = {.pc=0x9e96, .a=0x8e, .x=0x03, .y=0xeb, .sp=0xa0, .status=0x8e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005e, .value=0x5b}, {.addr=0x9e96, .value=0x3e}, {.addr=0x9e97, .value=0x5e},
    };
    const struct CPU_State final_cpu = {.pc=0x9e98, .a=0x8e, .x=0x03, .y=0xeb, .sp=0xa0, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x005e, .value=0x5b}, {.addr=0x9e96, .value=0x3e}, {.addr=0x9e97, .value=0x5e},
    };
    const struct BusEvent events[] = {
        {.addr=0x9e96, .value=0x3e, .type=IO_READ},
        {.addr=0x9e97, .value=0x5e, .type=IO_READ},
        {.addr=0x005e, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_021D) {
    const struct CPU_State initial_cpu = {.pc=0xf550, .a=0xbb, .x=0xc7, .y=0xb0, .sp=0x15, .status=0xd8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005b, .value=0x9c}, {.addr=0xf550, .value=0x3e}, {.addr=0xf551, .value=0x5b},
    };
    const struct CPU_State final_cpu = {.pc=0xf552, .a=0xbb, .x=0xc7, .y=0xb0, .sp=0x15, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x005b, .value=0x9c}, {.addr=0xf550, .value=0x3e}, {.addr=0xf551, .value=0x5b},
    };
    const struct BusEvent events[] = {
        {.addr=0xf550, .value=0x3e, .type=IO_READ},
        {.addr=0xf551, .value=0x5b, .type=IO_READ},
        {.addr=0x005b, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_021E) {
    const struct CPU_State initial_cpu = {.pc=0x8428, .a=0x12, .x=0xe1, .y=0xe9, .sp=0xac, .status=0x1f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d5, .value=0xd9}, {.addr=0x8428, .value=0x3e}, {.addr=0x8429, .value=0xd5},
    };
    const struct CPU_State final_cpu = {.pc=0x842a, .a=0x12, .x=0xe1, .y=0xe9, .sp=0xac, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d5, .value=0xd9}, {.addr=0x8428, .value=0x3e}, {.addr=0x8429, .value=0xd5},
    };
    const struct BusEvent events[] = {
        {.addr=0x8428, .value=0x3e, .type=IO_READ},
        {.addr=0x8429, .value=0xd5, .type=IO_READ},
        {.addr=0x00d5, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_021F) {
    const struct CPU_State initial_cpu = {.pc=0xf3c8, .a=0x91, .x=0xe8, .y=0x64, .sp=0xaf, .status=0x27};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e2, .value=0x70}, {.addr=0xf3c8, .value=0x3e}, {.addr=0xf3c9, .value=0xe2},
    };
    const struct CPU_State final_cpu = {.pc=0xf3ca, .a=0x91, .x=0xe8, .y=0x64, .sp=0xaf, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e2, .value=0x70}, {.addr=0xf3c8, .value=0x3e}, {.addr=0xf3c9, .value=0xe2},
    };
    const struct BusEvent events[] = {
        {.addr=0xf3c8, .value=0x3e, .type=IO_READ},
        {.addr=0xf3c9, .value=0xe2, .type=IO_READ},
        {.addr=0x01e2, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0220) {
    const struct CPU_State initial_cpu = {.pc=0xc1e4, .a=0x1b, .x=0xd6, .y=0xaa, .sp=0x3c, .status=0x63};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ca, .value=0x5f}, {.addr=0xc1e4, .value=0x3e}, {.addr=0xc1e5, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0xc1e6, .a=0x1b, .x=0xd6, .y=0xaa, .sp=0x3c, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ca, .value=0x5f}, {.addr=0xc1e4, .value=0x3e}, {.addr=0xc1e5, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0xc1e4, .value=0x3e, .type=IO_READ},
        {.addr=0xc1e5, .value=0xca, .type=IO_READ},
        {.addr=0x01ca, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0221) {
    const struct CPU_State initial_cpu = {.pc=0x4d73, .a=0x6a, .x=0x79, .y=0xbb, .sp=0x77, .status=0xd4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0089, .value=0xef}, {.addr=0x4d73, .value=0x3e}, {.addr=0x4d74, .value=0x89},
    };
    const struct CPU_State final_cpu = {.pc=0x4d75, .a=0x6a, .x=0x79, .y=0xbb, .sp=0x77, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0089, .value=0xef}, {.addr=0x4d73, .value=0x3e}, {.addr=0x4d74, .value=0x89},
    };
    const struct BusEvent events[] = {
        {.addr=0x4d73, .value=0x3e, .type=IO_READ},
        {.addr=0x4d74, .value=0x89, .type=IO_READ},
        {.addr=0x0089, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0222) {
    const struct CPU_State initial_cpu = {.pc=0xf041, .a=0x19, .x=0xa9, .y=0xb2, .sp=0x9d, .status=0x73};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0152, .value=0x98}, {.addr=0xf041, .value=0x3e}, {.addr=0xf042, .value=0x52},
    };
    const struct CPU_State final_cpu = {.pc=0xf043, .a=0x19, .x=0xa9, .y=0xb2, .sp=0x9d, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x0152, .value=0x98}, {.addr=0xf041, .value=0x3e}, {.addr=0xf042, .value=0x52},
    };
    const struct BusEvent events[] = {
        {.addr=0xf041, .value=0x3e, .type=IO_READ},
        {.addr=0xf042, .value=0x52, .type=IO_READ},
        {.addr=0x0152, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0223) {
    const struct CPU_State initial_cpu = {.pc=0x6933, .a=0x16, .x=0x7b, .y=0x72, .sp=0xe4, .status=0xcb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009a, .value=0x38}, {.addr=0x6933, .value=0x3e}, {.addr=0x6934, .value=0x9a},
    };
    const struct CPU_State final_cpu = {.pc=0x6935, .a=0x16, .x=0x7b, .y=0x72, .sp=0xe4, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x009a, .value=0x38}, {.addr=0x6933, .value=0x3e}, {.addr=0x6934, .value=0x9a},
    };
    const struct BusEvent events[] = {
        {.addr=0x6933, .value=0x3e, .type=IO_READ},
        {.addr=0x6934, .value=0x9a, .type=IO_READ},
        {.addr=0x009a, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0224) {
    const struct CPU_State initial_cpu = {.pc=0xdee5, .a=0x3a, .x=0xf6, .y=0x7f, .sp=0x31, .status=0xcb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bc, .value=0x5b}, {.addr=0xdee5, .value=0x3e}, {.addr=0xdee6, .value=0xbc},
    };
    const struct CPU_State final_cpu = {.pc=0xdee7, .a=0x3a, .x=0xf6, .y=0x7f, .sp=0x31, .status=0xc9};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bc, .value=0x5b}, {.addr=0xdee5, .value=0x3e}, {.addr=0xdee6, .value=0xbc},
    };
    const struct BusEvent events[] = {
        {.addr=0xdee5, .value=0x3e, .type=IO_READ},
        {.addr=0xdee6, .value=0xbc, .type=IO_READ},
        {.addr=0x00bc, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0225) {
    const struct CPU_State initial_cpu = {.pc=0xa009, .a=0x6e, .x=0xe7, .y=0x61, .sp=0xf5, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d9, .value=0x91}, {.addr=0xa009, .value=0x3e}, {.addr=0xa00a, .value=0xd9},
    };
    const struct CPU_State final_cpu = {.pc=0xa00b, .a=0x6e, .x=0xe7, .y=0x61, .sp=0xf5, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d9, .value=0x91}, {.addr=0xa009, .value=0x3e}, {.addr=0xa00a, .value=0xd9},
    };
    const struct BusEvent events[] = {
        {.addr=0xa009, .value=0x3e, .type=IO_READ},
        {.addr=0xa00a, .value=0xd9, .type=IO_READ},
        {.addr=0x00d9, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0226) {
    const struct CPU_State initial_cpu = {.pc=0x6015, .a=0x48, .x=0x79, .y=0x9e, .sp=0x79, .status=0xbb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0113, .value=0xba}, {.addr=0x6015, .value=0x3e}, {.addr=0x6016, .value=0x13},
    };
    const struct CPU_State final_cpu = {.pc=0x6017, .a=0x48, .x=0x79, .y=0x9e, .sp=0x79, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0113, .value=0xba}, {.addr=0x6015, .value=0x3e}, {.addr=0x6016, .value=0x13},
    };
    const struct BusEvent events[] = {
        {.addr=0x6015, .value=0x3e, .type=IO_READ},
        {.addr=0x6016, .value=0x13, .type=IO_READ},
        {.addr=0x0113, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0227) {
    const struct CPU_State initial_cpu = {.pc=0xe028, .a=0xd9, .x=0xf0, .y=0x64, .sp=0x5c, .status=0xff};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e9, .value=0xd7}, {.addr=0xe028, .value=0x3e}, {.addr=0xe029, .value=0xe9},
    };
    const struct CPU_State final_cpu = {.pc=0xe02a, .a=0xd9, .x=0xf0, .y=0x64, .sp=0x5c, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e9, .value=0xd7}, {.addr=0xe028, .value=0x3e}, {.addr=0xe029, .value=0xe9},
    };
    const struct BusEvent events[] = {
        {.addr=0xe028, .value=0x3e, .type=IO_READ},
        {.addr=0xe029, .value=0xe9, .type=IO_READ},
        {.addr=0x01e9, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0228) {
    const struct CPU_State initial_cpu = {.pc=0x49dd, .a=0x14, .x=0xe3, .y=0x39, .sp=0x6f, .status=0xe3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0196, .value=0x4f}, {.addr=0x49dd, .value=0x3e}, {.addr=0x49de, .value=0x96},
    };
    const struct CPU_State final_cpu = {.pc=0x49df, .a=0x14, .x=0xe3, .y=0x39, .sp=0x6f, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0196, .value=0x4f}, {.addr=0x49dd, .value=0x3e}, {.addr=0x49de, .value=0x96},
    };
    const struct BusEvent events[] = {
        {.addr=0x49dd, .value=0x3e, .type=IO_READ},
        {.addr=0x49de, .value=0x96, .type=IO_READ},
        {.addr=0x0196, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0229) {
    const struct CPU_State initial_cpu = {.pc=0x791c, .a=0x1f, .x=0xb6, .y=0x19, .sp=0x11, .status=0xd9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0015, .value=0x50}, {.addr=0x791c, .value=0x3e}, {.addr=0x791d, .value=0x15},
    };
    const struct CPU_State final_cpu = {.pc=0x791e, .a=0x1f, .x=0xb6, .y=0x19, .sp=0x11, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x0015, .value=0x50}, {.addr=0x791c, .value=0x3e}, {.addr=0x791d, .value=0x15},
    };
    const struct BusEvent events[] = {
        {.addr=0x791c, .value=0x3e, .type=IO_READ},
        {.addr=0x791d, .value=0x15, .type=IO_READ},
        {.addr=0x0015, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_022A) {
    const struct CPU_State initial_cpu = {.pc=0x90f5, .a=0x01, .x=0x5b, .y=0x72, .sp=0xb2, .status=0xb7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0151, .value=0xb6}, {.addr=0x90f5, .value=0x3e}, {.addr=0x90f6, .value=0x51},
    };
    const struct CPU_State final_cpu = {.pc=0x90f7, .a=0x01, .x=0x5b, .y=0x72, .sp=0xb2, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0151, .value=0xb6}, {.addr=0x90f5, .value=0x3e}, {.addr=0x90f6, .value=0x51},
    };
    const struct BusEvent events[] = {
        {.addr=0x90f5, .value=0x3e, .type=IO_READ},
        {.addr=0x90f6, .value=0x51, .type=IO_READ},
        {.addr=0x0151, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_022B) {
    const struct CPU_State initial_cpu = {.pc=0x7ede, .a=0x20, .x=0x4c, .y=0x43, .sp=0xad, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010d, .value=0x54}, {.addr=0x7ede, .value=0x3e}, {.addr=0x7edf, .value=0x0d},
    };
    const struct CPU_State final_cpu = {.pc=0x7ee0, .a=0x20, .x=0x4c, .y=0x43, .sp=0xad, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x010d, .value=0x54}, {.addr=0x7ede, .value=0x3e}, {.addr=0x7edf, .value=0x0d},
    };
    const struct BusEvent events[] = {
        {.addr=0x7ede, .value=0x3e, .type=IO_READ},
        {.addr=0x7edf, .value=0x0d, .type=IO_READ},
        {.addr=0x010d, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_022C) {
    const struct CPU_State initial_cpu = {.pc=0xf396, .a=0x01, .x=0xe5, .y=0x3a, .sp=0x00, .status=0xfd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d6, .value=0x4e}, {.addr=0xf396, .value=0x3e}, {.addr=0xf397, .value=0xd6},
    };
    const struct CPU_State final_cpu = {.pc=0xf398, .a=0x01, .x=0xe5, .y=0x3a, .sp=0x00, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d6, .value=0x4e}, {.addr=0xf396, .value=0x3e}, {.addr=0xf397, .value=0xd6},
    };
    const struct BusEvent events[] = {
        {.addr=0xf396, .value=0x3e, .type=IO_READ},
        {.addr=0xf397, .value=0xd6, .type=IO_READ},
        {.addr=0x01d6, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_022D) {
    const struct CPU_State initial_cpu = {.pc=0x96d9, .a=0x18, .x=0xad, .y=0xf1, .sp=0xee, .status=0x99};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c3, .value=0x70}, {.addr=0x96d9, .value=0x3e}, {.addr=0x96da, .value=0xc3},
    };
    const struct CPU_State final_cpu = {.pc=0x96db, .a=0x18, .x=0xad, .y=0xf1, .sp=0xee, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c3, .value=0x70}, {.addr=0x96d9, .value=0x3e}, {.addr=0x96da, .value=0xc3},
    };
    const struct BusEvent events[] = {
        {.addr=0x96d9, .value=0x3e, .type=IO_READ},
        {.addr=0x96da, .value=0xc3, .type=IO_READ},
        {.addr=0x00c3, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_022E) {
    const struct CPU_State initial_cpu = {.pc=0xdd78, .a=0xb2, .x=0xd3, .y=0x0e, .sp=0xa7, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d5, .value=0xe9}, {.addr=0xdd78, .value=0x3e}, {.addr=0xdd79, .value=0xd5},
    };
    const struct CPU_State final_cpu = {.pc=0xdd7a, .a=0xb2, .x=0xd3, .y=0x0e, .sp=0xa7, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d5, .value=0xe9}, {.addr=0xdd78, .value=0x3e}, {.addr=0xdd79, .value=0xd5},
    };
    const struct BusEvent events[] = {
        {.addr=0xdd78, .value=0x3e, .type=IO_READ},
        {.addr=0xdd79, .value=0xd5, .type=IO_READ},
        {.addr=0x01d5, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_022F) {
    const struct CPU_State initial_cpu = {.pc=0x5e0a, .a=0xc4, .x=0xdd, .y=0x0a, .sp=0x54, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013d, .value=0x54}, {.addr=0x5e0a, .value=0x3e}, {.addr=0x5e0b, .value=0x3d},
    };
    const struct CPU_State final_cpu = {.pc=0x5e0c, .a=0xc4, .x=0xdd, .y=0x0a, .sp=0x54, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x013d, .value=0x54}, {.addr=0x5e0a, .value=0x3e}, {.addr=0x5e0b, .value=0x3d},
    };
    const struct BusEvent events[] = {
        {.addr=0x5e0a, .value=0x3e, .type=IO_READ},
        {.addr=0x5e0b, .value=0x3d, .type=IO_READ},
        {.addr=0x013d, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0230) {
    const struct CPU_State initial_cpu = {.pc=0x2829, .a=0x5e, .x=0x47, .y=0x00, .sp=0xca, .status=0x17};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0049, .value=0xae}, {.addr=0x2829, .value=0x3e}, {.addr=0x282a, .value=0x49},
    };
    const struct CPU_State final_cpu = {.pc=0x282b, .a=0x5e, .x=0x47, .y=0x00, .sp=0xca, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0049, .value=0xae}, {.addr=0x2829, .value=0x3e}, {.addr=0x282a, .value=0x49},
    };
    const struct BusEvent events[] = {
        {.addr=0x2829, .value=0x3e, .type=IO_READ},
        {.addr=0x282a, .value=0x49, .type=IO_READ},
        {.addr=0x0049, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0231) {
    const struct CPU_State initial_cpu = {.pc=0x9141, .a=0x34, .x=0xf2, .y=0xdf, .sp=0x6a, .status=0xd3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e2, .value=0x92}, {.addr=0x9141, .value=0x3e}, {.addr=0x9142, .value=0xe2},
    };
    const struct CPU_State final_cpu = {.pc=0x9143, .a=0x34, .x=0xf2, .y=0xdf, .sp=0x6a, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e2, .value=0x92}, {.addr=0x9141, .value=0x3e}, {.addr=0x9142, .value=0xe2},
    };
    const struct BusEvent events[] = {
        {.addr=0x9141, .value=0x3e, .type=IO_READ},
        {.addr=0x9142, .value=0xe2, .type=IO_READ},
        {.addr=0x00e2, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0232) {
    const struct CPU_State initial_cpu = {.pc=0xafe9, .a=0x2d, .x=0xa7, .y=0x33, .sp=0xbc, .status=0x3b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0116, .value=0x5a}, {.addr=0xafe9, .value=0x3e}, {.addr=0xafea, .value=0x16},
    };
    const struct CPU_State final_cpu = {.pc=0xafeb, .a=0x2d, .x=0xa7, .y=0x33, .sp=0xbc, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x0116, .value=0x5a}, {.addr=0xafe9, .value=0x3e}, {.addr=0xafea, .value=0x16},
    };
    const struct BusEvent events[] = {
        {.addr=0xafe9, .value=0x3e, .type=IO_READ},
        {.addr=0xafea, .value=0x16, .type=IO_READ},
        {.addr=0x0116, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0233) {
    const struct CPU_State initial_cpu = {.pc=0x32a1, .a=0xc3, .x=0x40, .y=0x35, .sp=0xae, .status=0x33};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0125, .value=0x6a}, {.addr=0x32a1, .value=0x3e}, {.addr=0x32a2, .value=0x25},
    };
    const struct CPU_State final_cpu = {.pc=0x32a3, .a=0xc3, .x=0x40, .y=0x35, .sp=0xae, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0125, .value=0x6a}, {.addr=0x32a1, .value=0x3e}, {.addr=0x32a2, .value=0x25},
    };
    const struct BusEvent events[] = {
        {.addr=0x32a1, .value=0x3e, .type=IO_READ},
        {.addr=0x32a2, .value=0x25, .type=IO_READ},
        {.addr=0x0125, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0234) {
    const struct CPU_State initial_cpu = {.pc=0x86cc, .a=0x39, .x=0xbb, .y=0x38, .sp=0x2e, .status=0x30};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0139, .value=0xde}, {.addr=0x86cc, .value=0x3e}, {.addr=0x86cd, .value=0x39},
    };
    const struct CPU_State final_cpu = {.pc=0x86ce, .a=0x39, .x=0xbb, .y=0x38, .sp=0x2e, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0139, .value=0xde}, {.addr=0x86cc, .value=0x3e}, {.addr=0x86cd, .value=0x39},
    };
    const struct BusEvent events[] = {
        {.addr=0x86cc, .value=0x3e, .type=IO_READ},
        {.addr=0x86cd, .value=0x39, .type=IO_READ},
        {.addr=0x0139, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0235) {
    const struct CPU_State initial_cpu = {.pc=0xd84f, .a=0xe0, .x=0x0a, .y=0x53, .sp=0x0f, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bc, .value=0xd1}, {.addr=0xd84f, .value=0x3e}, {.addr=0xd850, .value=0xbc},
    };
    const struct CPU_State final_cpu = {.pc=0xd851, .a=0xe0, .x=0x0a, .y=0x53, .sp=0x0f, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bc, .value=0xd1}, {.addr=0xd84f, .value=0x3e}, {.addr=0xd850, .value=0xbc},
    };
    const struct BusEvent events[] = {
        {.addr=0xd84f, .value=0x3e, .type=IO_READ},
        {.addr=0xd850, .value=0xbc, .type=IO_READ},
        {.addr=0x00bc, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0236) {
    const struct CPU_State initial_cpu = {.pc=0xc685, .a=0x02, .x=0xe5, .y=0xfb, .sp=0x8d, .status=0xab};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cd, .value=0xc8}, {.addr=0xc685, .value=0x3e}, {.addr=0xc686, .value=0xcd},
    };
    const struct CPU_State final_cpu = {.pc=0xc687, .a=0x02, .x=0xe5, .y=0xfb, .sp=0x8d, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cd, .value=0xc8}, {.addr=0xc685, .value=0x3e}, {.addr=0xc686, .value=0xcd},
    };
    const struct BusEvent events[] = {
        {.addr=0xc685, .value=0x3e, .type=IO_READ},
        {.addr=0xc686, .value=0xcd, .type=IO_READ},
        {.addr=0x01cd, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0237) {
    const struct CPU_State initial_cpu = {.pc=0xde51, .a=0xf1, .x=0x65, .y=0x26, .sp=0x0c, .status=0xfe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ab, .value=0x4e}, {.addr=0xde51, .value=0x3e}, {.addr=0xde52, .value=0xab},
    };
    const struct CPU_State final_cpu = {.pc=0xde53, .a=0xf1, .x=0x65, .y=0x26, .sp=0x0c, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ab, .value=0x4e}, {.addr=0xde51, .value=0x3e}, {.addr=0xde52, .value=0xab},
    };
    const struct BusEvent events[] = {
        {.addr=0xde51, .value=0x3e, .type=IO_READ},
        {.addr=0xde52, .value=0xab, .type=IO_READ},
        {.addr=0x01ab, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0238) {
    const struct CPU_State initial_cpu = {.pc=0x5322, .a=0x68, .x=0xbe, .y=0xd1, .sp=0x23, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017c, .value=0xf4}, {.addr=0x5322, .value=0x3e}, {.addr=0x5323, .value=0x7c},
    };
    const struct CPU_State final_cpu = {.pc=0x5324, .a=0x68, .x=0xbe, .y=0xd1, .sp=0x23, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x017c, .value=0xf4}, {.addr=0x5322, .value=0x3e}, {.addr=0x5323, .value=0x7c},
    };
    const struct BusEvent events[] = {
        {.addr=0x5322, .value=0x3e, .type=IO_READ},
        {.addr=0x5323, .value=0x7c, .type=IO_READ},
        {.addr=0x017c, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0239) {
    const struct CPU_State initial_cpu = {.pc=0xa423, .a=0xc3, .x=0xcd, .y=0x3d, .sp=0xa0, .status=0xdc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0047, .value=0xf4}, {.addr=0xa423, .value=0x3e}, {.addr=0xa424, .value=0x47},
    };
    const struct CPU_State final_cpu = {.pc=0xa425, .a=0xc3, .x=0xcd, .y=0x3d, .sp=0xa0, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0047, .value=0xf4}, {.addr=0xa423, .value=0x3e}, {.addr=0xa424, .value=0x47},
    };
    const struct BusEvent events[] = {
        {.addr=0xa423, .value=0x3e, .type=IO_READ},
        {.addr=0xa424, .value=0x47, .type=IO_READ},
        {.addr=0x0047, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_023C) {
    const struct CPU_State initial_cpu = {.pc=0x5a75, .a=0x57, .x=0x2d, .y=0xad, .sp=0x60, .status=0xd3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0071, .value=0x17}, {.addr=0x5a75, .value=0x3e}, {.addr=0x5a76, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0x5a77, .a=0x57, .x=0x2d, .y=0xad, .sp=0x60, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x0071, .value=0x17}, {.addr=0x5a75, .value=0x3e}, {.addr=0x5a76, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0x5a75, .value=0x3e, .type=IO_READ},
        {.addr=0x5a76, .value=0x71, .type=IO_READ},
        {.addr=0x0071, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_023D) {
    const struct CPU_State initial_cpu = {.pc=0xba12, .a=0x63, .x=0xbb, .y=0x54, .sp=0xa1, .status=0x9a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0020, .value=0x53}, {.addr=0xba12, .value=0x3e}, {.addr=0xba13, .value=0x20},
    };
    const struct CPU_State final_cpu = {.pc=0xba14, .a=0x63, .x=0xbb, .y=0x54, .sp=0xa1, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x0020, .value=0x53}, {.addr=0xba12, .value=0x3e}, {.addr=0xba13, .value=0x20},
    };
    const struct BusEvent events[] = {
        {.addr=0xba12, .value=0x3e, .type=IO_READ},
        {.addr=0xba13, .value=0x20, .type=IO_READ},
        {.addr=0x0020, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_023E) {
    const struct CPU_State initial_cpu = {.pc=0xcef4, .a=0xa0, .x=0xe8, .y=0x81, .sp=0x1a, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b2, .value=0xd3}, {.addr=0xcef4, .value=0x3e}, {.addr=0xcef5, .value=0xb2},
    };
    const struct CPU_State final_cpu = {.pc=0xcef6, .a=0xa0, .x=0xe8, .y=0x81, .sp=0x1a, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b2, .value=0xd3}, {.addr=0xcef4, .value=0x3e}, {.addr=0xcef5, .value=0xb2},
    };
    const struct BusEvent events[] = {
        {.addr=0xcef4, .value=0x3e, .type=IO_READ},
        {.addr=0xcef5, .value=0xb2, .type=IO_READ},
        {.addr=0x01b2, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_023F) {
    const struct CPU_State initial_cpu = {.pc=0xaa37, .a=0xe6, .x=0xf1, .y=0x04, .sp=0xd5, .status=0x67};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b0, .value=0xb0}, {.addr=0xaa37, .value=0x3e}, {.addr=0xaa38, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0xaa39, .a=0xe6, .x=0xf1, .y=0x04, .sp=0xd5, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b0, .value=0xb0}, {.addr=0xaa37, .value=0x3e}, {.addr=0xaa38, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0xaa37, .value=0x3e, .type=IO_READ},
        {.addr=0xaa38, .value=0xb0, .type=IO_READ},
        {.addr=0x01b0, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0240) {
    const struct CPU_State initial_cpu = {.pc=0xdf78, .a=0x31, .x=0xcd, .y=0x4f, .sp=0xd1, .status=0x40};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0027, .value=0x5e}, {.addr=0xdf78, .value=0x3e}, {.addr=0xdf79, .value=0x27},
    };
    const struct CPU_State final_cpu = {.pc=0xdf7a, .a=0x31, .x=0xcd, .y=0x4f, .sp=0xd1, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x0027, .value=0x5e}, {.addr=0xdf78, .value=0x3e}, {.addr=0xdf79, .value=0x27},
    };
    const struct BusEvent events[] = {
        {.addr=0xdf78, .value=0x3e, .type=IO_READ},
        {.addr=0xdf79, .value=0x27, .type=IO_READ},
        {.addr=0x0027, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0241) {
    const struct CPU_State initial_cpu = {.pc=0x5c7a, .a=0x10, .x=0x39, .y=0x42, .sp=0x9b, .status=0x02};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0024, .value=0xb5}, {.addr=0x5c7a, .value=0x3e}, {.addr=0x5c7b, .value=0x24},
    };
    const struct CPU_State final_cpu = {.pc=0x5c7c, .a=0x10, .x=0x39, .y=0x42, .sp=0x9b, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x0024, .value=0xb5}, {.addr=0x5c7a, .value=0x3e}, {.addr=0x5c7b, .value=0x24},
    };
    const struct BusEvent events[] = {
        {.addr=0x5c7a, .value=0x3e, .type=IO_READ},
        {.addr=0x5c7b, .value=0x24, .type=IO_READ},
        {.addr=0x0024, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0242) {
    const struct CPU_State initial_cpu = {.pc=0xae8a, .a=0xed, .x=0x05, .y=0x67, .sp=0x1f, .status=0x48};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c4, .value=0x9f}, {.addr=0xae8a, .value=0x3e}, {.addr=0xae8b, .value=0xc4},
    };
    const struct CPU_State final_cpu = {.pc=0xae8c, .a=0xed, .x=0x05, .y=0x67, .sp=0x1f, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c4, .value=0x9f}, {.addr=0xae8a, .value=0x3e}, {.addr=0xae8b, .value=0xc4},
    };
    const struct BusEvent events[] = {
        {.addr=0xae8a, .value=0x3e, .type=IO_READ},
        {.addr=0xae8b, .value=0xc4, .type=IO_READ},
        {.addr=0x00c4, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0243) {
    const struct CPU_State initial_cpu = {.pc=0x4e30, .a=0x3c, .x=0x5c, .y=0xf0, .sp=0xe3, .status=0x73};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013a, .value=0x94}, {.addr=0x4e30, .value=0x3e}, {.addr=0x4e31, .value=0x3a},
    };
    const struct CPU_State final_cpu = {.pc=0x4e32, .a=0x3c, .x=0x5c, .y=0xf0, .sp=0xe3, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x013a, .value=0x94}, {.addr=0x4e30, .value=0x3e}, {.addr=0x4e31, .value=0x3a},
    };
    const struct BusEvent events[] = {
        {.addr=0x4e30, .value=0x3e, .type=IO_READ},
        {.addr=0x4e31, .value=0x3a, .type=IO_READ},
        {.addr=0x013a, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0244) {
    const struct CPU_State initial_cpu = {.pc=0xfefc, .a=0xc9, .x=0xa2, .y=0x4c, .sp=0xe0, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0184, .value=0x35}, {.addr=0xfefc, .value=0x3e}, {.addr=0xfefd, .value=0x84},
    };
    const struct CPU_State final_cpu = {.pc=0xfefe, .a=0xc9, .x=0xa2, .y=0x4c, .sp=0xe0, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0184, .value=0x35}, {.addr=0xfefc, .value=0x3e}, {.addr=0xfefd, .value=0x84},
    };
    const struct BusEvent events[] = {
        {.addr=0xfefc, .value=0x3e, .type=IO_READ},
        {.addr=0xfefd, .value=0x84, .type=IO_READ},
        {.addr=0x0184, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0245) {
    const struct CPU_State initial_cpu = {.pc=0x4d27, .a=0x41, .x=0x33, .y=0x0a, .sp=0xa3, .status=0xe4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c8, .value=0xf8}, {.addr=0x4d27, .value=0x3e}, {.addr=0x4d28, .value=0xc8},
    };
    const struct CPU_State final_cpu = {.pc=0x4d29, .a=0x41, .x=0x33, .y=0x0a, .sp=0xa3, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c8, .value=0xf8}, {.addr=0x4d27, .value=0x3e}, {.addr=0x4d28, .value=0xc8},
    };
    const struct BusEvent events[] = {
        {.addr=0x4d27, .value=0x3e, .type=IO_READ},
        {.addr=0x4d28, .value=0xc8, .type=IO_READ},
        {.addr=0x01c8, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0246) {
    const struct CPU_State initial_cpu = {.pc=0x5761, .a=0xb4, .x=0xc6, .y=0x87, .sp=0xde, .status=0x18};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0001, .value=0xe5}, {.addr=0x5761, .value=0x3e}, {.addr=0x5762, .value=0x01},
    };
    const struct CPU_State final_cpu = {.pc=0x5763, .a=0xb4, .x=0xc6, .y=0x87, .sp=0xde, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x0001, .value=0xe5}, {.addr=0x5761, .value=0x3e}, {.addr=0x5762, .value=0x01},
    };
    const struct BusEvent events[] = {
        {.addr=0x5761, .value=0x3e, .type=IO_READ},
        {.addr=0x5762, .value=0x01, .type=IO_READ},
        {.addr=0x0001, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0247) {
    const struct CPU_State initial_cpu = {.pc=0x14e4, .a=0x8d, .x=0xd8, .y=0x70, .sp=0x2f, .status=0x20};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cc, .value=0xd5}, {.addr=0x14e4, .value=0x3e}, {.addr=0x14e5, .value=0xcc},
    };
    const struct CPU_State final_cpu = {.pc=0x14e6, .a=0x8d, .x=0xd8, .y=0x70, .sp=0x2f, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cc, .value=0xd5}, {.addr=0x14e4, .value=0x3e}, {.addr=0x14e5, .value=0xcc},
    };
    const struct BusEvent events[] = {
        {.addr=0x14e4, .value=0x3e, .type=IO_READ},
        {.addr=0x14e5, .value=0xcc, .type=IO_READ},
        {.addr=0x01cc, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0248) {
    const struct CPU_State initial_cpu = {.pc=0xfb71, .a=0x9c, .x=0x85, .y=0x4f, .sp=0xa2, .status=0x13};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005d, .value=0x76}, {.addr=0xfb71, .value=0x3e}, {.addr=0xfb72, .value=0x5d},
    };
    const struct CPU_State final_cpu = {.pc=0xfb73, .a=0x9c, .x=0x85, .y=0x4f, .sp=0xa2, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x005d, .value=0x76}, {.addr=0xfb71, .value=0x3e}, {.addr=0xfb72, .value=0x5d},
    };
    const struct BusEvent events[] = {
        {.addr=0xfb71, .value=0x3e, .type=IO_READ},
        {.addr=0xfb72, .value=0x5d, .type=IO_READ},
        {.addr=0x005d, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0249) {
    const struct CPU_State initial_cpu = {.pc=0x0608, .a=0x2d, .x=0x6a, .y=0xaf, .sp=0xfc, .status=0x05};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d4, .value=0xb9}, {.addr=0x0608, .value=0x3e}, {.addr=0x0609, .value=0xd4},
    };
    const struct CPU_State final_cpu = {.pc=0x060a, .a=0x2d, .x=0x6a, .y=0xaf, .sp=0xfc, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d4, .value=0xb9}, {.addr=0x0608, .value=0x3e}, {.addr=0x0609, .value=0xd4},
    };
    const struct BusEvent events[] = {
        {.addr=0x0608, .value=0x3e, .type=IO_READ},
        {.addr=0x0609, .value=0xd4, .type=IO_READ},
        {.addr=0x00d4, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_024A) {
    const struct CPU_State initial_cpu = {.pc=0x73c8, .a=0xe0, .x=0x09, .y=0x48, .sp=0x12, .status=0x5a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c8, .value=0x3b}, {.addr=0x73c8, .value=0x3e}, {.addr=0x73c9, .value=0xc8},
    };
    const struct CPU_State final_cpu = {.pc=0x73ca, .a=0xe0, .x=0x09, .y=0x48, .sp=0x12, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c8, .value=0x3b}, {.addr=0x73c8, .value=0x3e}, {.addr=0x73c9, .value=0xc8},
    };
    const struct BusEvent events[] = {
        {.addr=0x73c8, .value=0x3e, .type=IO_READ},
        {.addr=0x73c9, .value=0xc8, .type=IO_READ},
        {.addr=0x00c8, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_024B) {
    const struct CPU_State initial_cpu = {.pc=0x4810, .a=0xb0, .x=0x70, .y=0xd2, .sp=0xc3, .status=0xc7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0081, .value=0x8c}, {.addr=0x4810, .value=0x3e}, {.addr=0x4811, .value=0x81},
    };
    const struct CPU_State final_cpu = {.pc=0x4812, .a=0xb0, .x=0x70, .y=0xd2, .sp=0xc3, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0081, .value=0x8c}, {.addr=0x4810, .value=0x3e}, {.addr=0x4811, .value=0x81},
    };
    const struct BusEvent events[] = {
        {.addr=0x4810, .value=0x3e, .type=IO_READ},
        {.addr=0x4811, .value=0x81, .type=IO_READ},
        {.addr=0x0081, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_024C) {
    const struct CPU_State initial_cpu = {.pc=0x8ba9, .a=0xc1, .x=0xfb, .y=0xf1, .sp=0xcd, .status=0x51};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d4, .value=0x25}, {.addr=0x8ba9, .value=0x3e}, {.addr=0x8baa, .value=0xd4},
    };
    const struct CPU_State final_cpu = {.pc=0x8bab, .a=0xc1, .x=0xfb, .y=0xf1, .sp=0xcd, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d4, .value=0x25}, {.addr=0x8ba9, .value=0x3e}, {.addr=0x8baa, .value=0xd4},
    };
    const struct BusEvent events[] = {
        {.addr=0x8ba9, .value=0x3e, .type=IO_READ},
        {.addr=0x8baa, .value=0xd4, .type=IO_READ},
        {.addr=0x00d4, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_024D) {
    const struct CPU_State initial_cpu = {.pc=0x2e06, .a=0x8e, .x=0x3a, .y=0xe4, .sp=0x65, .status=0xb7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010b, .value=0xb6}, {.addr=0x2e06, .value=0x3e}, {.addr=0x2e07, .value=0x0b},
    };
    const struct CPU_State final_cpu = {.pc=0x2e08, .a=0x8e, .x=0x3a, .y=0xe4, .sp=0x65, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x010b, .value=0xb6}, {.addr=0x2e06, .value=0x3e}, {.addr=0x2e07, .value=0x0b},
    };
    const struct BusEvent events[] = {
        {.addr=0x2e06, .value=0x3e, .type=IO_READ},
        {.addr=0x2e07, .value=0x0b, .type=IO_READ},
        {.addr=0x010b, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_024E) {
    const struct CPU_State initial_cpu = {.pc=0x6ee5, .a=0x14, .x=0x58, .y=0x95, .sp=0x4c, .status=0x0b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0079, .value=0x4c}, {.addr=0x6ee5, .value=0x3e}, {.addr=0x6ee6, .value=0x79},
    };
    const struct CPU_State final_cpu = {.pc=0x6ee7, .a=0x14, .x=0x58, .y=0x95, .sp=0x4c, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x0079, .value=0x4c}, {.addr=0x6ee5, .value=0x3e}, {.addr=0x6ee6, .value=0x79},
    };
    const struct BusEvent events[] = {
        {.addr=0x6ee5, .value=0x3e, .type=IO_READ},
        {.addr=0x6ee6, .value=0x79, .type=IO_READ},
        {.addr=0x0079, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_024F) {
    const struct CPU_State initial_cpu = {.pc=0xd27e, .a=0x47, .x=0x6b, .y=0x70, .sp=0x6a, .status=0x2e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01be, .value=0xbe}, {.addr=0xd27e, .value=0x3e}, {.addr=0xd27f, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0xd280, .a=0x47, .x=0x6b, .y=0x70, .sp=0x6a, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x01be, .value=0xbe}, {.addr=0xd27e, .value=0x3e}, {.addr=0xd27f, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0xd27e, .value=0x3e, .type=IO_READ},
        {.addr=0xd27f, .value=0xbe, .type=IO_READ},
        {.addr=0x01be, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0250) {
    const struct CPU_State initial_cpu = {.pc=0x00d7, .a=0xd3, .x=0xa3, .y=0xf7, .sp=0x62, .status=0xd3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a4, .value=0xce}, {.addr=0x00d7, .value=0x3e}, {.addr=0x00d8, .value=0xa4},
    };
    const struct CPU_State final_cpu = {.pc=0x00d9, .a=0xd3, .x=0xa3, .y=0xf7, .sp=0x62, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a4, .value=0xce}, {.addr=0x00d7, .value=0x3e}, {.addr=0x00d8, .value=0xa4},
    };
    const struct BusEvent events[] = {
        {.addr=0x00d7, .value=0x3e, .type=IO_READ},
        {.addr=0x00d8, .value=0xa4, .type=IO_READ},
        {.addr=0x00a4, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0251) {
    const struct CPU_State initial_cpu = {.pc=0x24e0, .a=0x19, .x=0x62, .y=0x72, .sp=0x43, .status=0x84};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c7, .value=0xd1}, {.addr=0x24e0, .value=0x3e}, {.addr=0x24e1, .value=0xc7},
    };
    const struct CPU_State final_cpu = {.pc=0x24e2, .a=0x19, .x=0x62, .y=0x72, .sp=0x43, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c7, .value=0xd1}, {.addr=0x24e0, .value=0x3e}, {.addr=0x24e1, .value=0xc7},
    };
    const struct BusEvent events[] = {
        {.addr=0x24e0, .value=0x3e, .type=IO_READ},
        {.addr=0x24e1, .value=0xc7, .type=IO_READ},
        {.addr=0x00c7, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0252) {
    const struct CPU_State initial_cpu = {.pc=0xfae3, .a=0xdf, .x=0x5e, .y=0x8a, .sp=0xe2, .status=0x0e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0011, .value=0xd4}, {.addr=0xfae3, .value=0x3e}, {.addr=0xfae4, .value=0x11},
    };
    const struct CPU_State final_cpu = {.pc=0xfae5, .a=0xdf, .x=0x5e, .y=0x8a, .sp=0xe2, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0011, .value=0xd4}, {.addr=0xfae3, .value=0x3e}, {.addr=0xfae4, .value=0x11},
    };
    const struct BusEvent events[] = {
        {.addr=0xfae3, .value=0x3e, .type=IO_READ},
        {.addr=0xfae4, .value=0x11, .type=IO_READ},
        {.addr=0x0011, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0253) {
    const struct CPU_State initial_cpu = {.pc=0xca60, .a=0xb7, .x=0x2f, .y=0x56, .sp=0x1a, .status=0x7d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013e, .value=0xe2}, {.addr=0xca60, .value=0x3e}, {.addr=0xca61, .value=0x3e},
    };
    const struct CPU_State final_cpu = {.pc=0xca62, .a=0xb7, .x=0x2f, .y=0x56, .sp=0x1a, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x013e, .value=0xe2}, {.addr=0xca60, .value=0x3e}, {.addr=0xca61, .value=0x3e},
    };
    const struct BusEvent events[] = {
        {.addr=0xca60, .value=0x3e, .type=IO_READ},
        {.addr=0xca61, .value=0x3e, .type=IO_READ},
        {.addr=0x013e, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0254) {
    const struct CPU_State initial_cpu = {.pc=0xc564, .a=0xf7, .x=0x6c, .y=0x2f, .sp=0xbe, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0076, .value=0x28}, {.addr=0xc564, .value=0x3e}, {.addr=0xc565, .value=0x76},
    };
    const struct CPU_State final_cpu = {.pc=0xc566, .a=0xf7, .x=0x6c, .y=0x2f, .sp=0xbe, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x0076, .value=0x28}, {.addr=0xc564, .value=0x3e}, {.addr=0xc565, .value=0x76},
    };
    const struct BusEvent events[] = {
        {.addr=0xc564, .value=0x3e, .type=IO_READ},
        {.addr=0xc565, .value=0x76, .type=IO_READ},
        {.addr=0x0076, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0255) {
    const struct CPU_State initial_cpu = {.pc=0x188e, .a=0xbb, .x=0xfb, .y=0xdd, .sp=0x54, .status=0x45};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004c, .value=0xee}, {.addr=0x188e, .value=0x3e}, {.addr=0x188f, .value=0x4c},
    };
    const struct CPU_State final_cpu = {.pc=0x1890, .a=0xbb, .x=0xfb, .y=0xdd, .sp=0x54, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x004c, .value=0xee}, {.addr=0x188e, .value=0x3e}, {.addr=0x188f, .value=0x4c},
    };
    const struct BusEvent events[] = {
        {.addr=0x188e, .value=0x3e, .type=IO_READ},
        {.addr=0x188f, .value=0x4c, .type=IO_READ},
        {.addr=0x004c, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0256) {
    const struct CPU_State initial_cpu = {.pc=0x424a, .a=0x0f, .x=0xed, .y=0x73, .sp=0x49, .status=0x59};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0003, .value=0xa6}, {.addr=0x424a, .value=0x3e}, {.addr=0x424b, .value=0x03},
    };
    const struct CPU_State final_cpu = {.pc=0x424c, .a=0x0f, .x=0xed, .y=0x73, .sp=0x49, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x0003, .value=0xa6}, {.addr=0x424a, .value=0x3e}, {.addr=0x424b, .value=0x03},
    };
    const struct BusEvent events[] = {
        {.addr=0x424a, .value=0x3e, .type=IO_READ},
        {.addr=0x424b, .value=0x03, .type=IO_READ},
        {.addr=0x0003, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0257) {
    const struct CPU_State initial_cpu = {.pc=0x55a5, .a=0x52, .x=0x5a, .y=0xbb, .sp=0x88, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005e, .value=0xef}, {.addr=0x55a5, .value=0x3e}, {.addr=0x55a6, .value=0x5e},
    };
    const struct CPU_State final_cpu = {.pc=0x55a7, .a=0x52, .x=0x5a, .y=0xbb, .sp=0x88, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x005e, .value=0xef}, {.addr=0x55a5, .value=0x3e}, {.addr=0x55a6, .value=0x5e},
    };
    const struct BusEvent events[] = {
        {.addr=0x55a5, .value=0x3e, .type=IO_READ},
        {.addr=0x55a6, .value=0x5e, .type=IO_READ},
        {.addr=0x005e, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0258) {
    const struct CPU_State initial_cpu = {.pc=0x446f, .a=0x8c, .x=0xce, .y=0xaa, .sp=0x05, .status=0x3b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0139, .value=0xde}, {.addr=0x446f, .value=0x3e}, {.addr=0x4470, .value=0x39},
    };
    const struct CPU_State final_cpu = {.pc=0x4471, .a=0x8c, .x=0xce, .y=0xaa, .sp=0x05, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0139, .value=0xde}, {.addr=0x446f, .value=0x3e}, {.addr=0x4470, .value=0x39},
    };
    const struct BusEvent events[] = {
        {.addr=0x446f, .value=0x3e, .type=IO_READ},
        {.addr=0x4470, .value=0x39, .type=IO_READ},
        {.addr=0x0139, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0259) {
    const struct CPU_State initial_cpu = {.pc=0x9f35, .a=0x5d, .x=0x31, .y=0x6d, .sp=0x5d, .status=0xe6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d5, .value=0x25}, {.addr=0x9f35, .value=0x3e}, {.addr=0x9f36, .value=0xd5},
    };
    const struct CPU_State final_cpu = {.pc=0x9f37, .a=0x5d, .x=0x31, .y=0x6d, .sp=0x5d, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d5, .value=0x25}, {.addr=0x9f35, .value=0x3e}, {.addr=0x9f36, .value=0xd5},
    };
    const struct BusEvent events[] = {
        {.addr=0x9f35, .value=0x3e, .type=IO_READ},
        {.addr=0x9f36, .value=0xd5, .type=IO_READ},
        {.addr=0x01d5, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_025A) {
    const struct CPU_State initial_cpu = {.pc=0x01ef, .a=0xf6, .x=0xc0, .y=0x8e, .sp=0xda, .status=0x27};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b5, .value=0xae}, {.addr=0x01ef, .value=0x3e}, {.addr=0x01f0, .value=0xb5},
    };
    const struct CPU_State final_cpu = {.pc=0x01f1, .a=0xf6, .x=0xc0, .y=0x8e, .sp=0xda, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b5, .value=0xae}, {.addr=0x01ef, .value=0x3e}, {.addr=0x01f0, .value=0xb5},
    };
    const struct BusEvent events[] = {
        {.addr=0x01ef, .value=0x3e, .type=IO_READ},
        {.addr=0x01f0, .value=0xb5, .type=IO_READ},
        {.addr=0x01b5, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_025C) {
    const struct CPU_State initial_cpu = {.pc=0xd263, .a=0xe3, .x=0xae, .y=0x9b, .sp=0xa0, .status=0xa8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0113, .value=0x3f}, {.addr=0xd263, .value=0x3e}, {.addr=0xd264, .value=0x13},
    };
    const struct CPU_State final_cpu = {.pc=0xd265, .a=0xe3, .x=0xae, .y=0x9b, .sp=0xa0, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x0113, .value=0x3f}, {.addr=0xd263, .value=0x3e}, {.addr=0xd264, .value=0x13},
    };
    const struct BusEvent events[] = {
        {.addr=0xd263, .value=0x3e, .type=IO_READ},
        {.addr=0xd264, .value=0x13, .type=IO_READ},
        {.addr=0x0113, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_025D) {
    const struct CPU_State initial_cpu = {.pc=0x362c, .a=0x5b, .x=0x73, .y=0x1d, .sp=0x88, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005b, .value=0x3b}, {.addr=0x362c, .value=0x3e}, {.addr=0x362d, .value=0x5b},
    };
    const struct CPU_State final_cpu = {.pc=0x362e, .a=0x5b, .x=0x73, .y=0x1d, .sp=0x88, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x005b, .value=0x3b}, {.addr=0x362c, .value=0x3e}, {.addr=0x362d, .value=0x5b},
    };
    const struct BusEvent events[] = {
        {.addr=0x362c, .value=0x3e, .type=IO_READ},
        {.addr=0x362d, .value=0x5b, .type=IO_READ},
        {.addr=0x005b, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_025E) {
    const struct CPU_State initial_cpu = {.pc=0x1c5d, .a=0xaf, .x=0x59, .y=0xce, .sp=0x6c, .status=0x56};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e1, .value=0x08}, {.addr=0x1c5d, .value=0x3e}, {.addr=0x1c5e, .value=0xe1},
    };
    const struct CPU_State final_cpu = {.pc=0x1c5f, .a=0xaf, .x=0x59, .y=0xce, .sp=0x6c, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e1, .value=0x08}, {.addr=0x1c5d, .value=0x3e}, {.addr=0x1c5e, .value=0xe1},
    };
    const struct BusEvent events[] = {
        {.addr=0x1c5d, .value=0x3e, .type=IO_READ},
        {.addr=0x1c5e, .value=0xe1, .type=IO_READ},
        {.addr=0x00e1, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_025F) {
    const struct CPU_State initial_cpu = {.pc=0xec3c, .a=0x92, .x=0xd8, .y=0x64, .sp=0xcf, .status=0x74};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f3, .value=0xea}, {.addr=0xec3c, .value=0x3e}, {.addr=0xec3d, .value=0xf3},
    };
    const struct CPU_State final_cpu = {.pc=0xec3e, .a=0x92, .x=0xd8, .y=0x64, .sp=0xcf, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f3, .value=0xea}, {.addr=0xec3c, .value=0x3e}, {.addr=0xec3d, .value=0xf3},
    };
    const struct BusEvent events[] = {
        {.addr=0xec3c, .value=0x3e, .type=IO_READ},
        {.addr=0xec3d, .value=0xf3, .type=IO_READ},
        {.addr=0x01f3, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0260) {
    const struct CPU_State initial_cpu = {.pc=0x2807, .a=0x7a, .x=0x4e, .y=0x39, .sp=0xfa, .status=0x27};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c5, .value=0xa3}, {.addr=0x2807, .value=0x3e}, {.addr=0x2808, .value=0xc5},
    };
    const struct CPU_State final_cpu = {.pc=0x2809, .a=0x7a, .x=0x4e, .y=0x39, .sp=0xfa, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c5, .value=0xa3}, {.addr=0x2807, .value=0x3e}, {.addr=0x2808, .value=0xc5},
    };
    const struct BusEvent events[] = {
        {.addr=0x2807, .value=0x3e, .type=IO_READ},
        {.addr=0x2808, .value=0xc5, .type=IO_READ},
        {.addr=0x01c5, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0261) {
    const struct CPU_State initial_cpu = {.pc=0x9c76, .a=0x54, .x=0x65, .y=0x89, .sp=0xbb, .status=0x24};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ce, .value=0xe0}, {.addr=0x9c76, .value=0x3e}, {.addr=0x9c77, .value=0xce},
    };
    const struct CPU_State final_cpu = {.pc=0x9c78, .a=0x54, .x=0x65, .y=0x89, .sp=0xbb, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ce, .value=0xe0}, {.addr=0x9c76, .value=0x3e}, {.addr=0x9c77, .value=0xce},
    };
    const struct BusEvent events[] = {
        {.addr=0x9c76, .value=0x3e, .type=IO_READ},
        {.addr=0x9c77, .value=0xce, .type=IO_READ},
        {.addr=0x01ce, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0262) {
    const struct CPU_State initial_cpu = {.pc=0x008e, .a=0x9b, .x=0xd6, .y=0xe8, .sp=0x3e, .status=0xdb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005c, .value=0xb7}, {.addr=0x008e, .value=0x3e}, {.addr=0x008f, .value=0x5c},
    };
    const struct CPU_State final_cpu = {.pc=0x0090, .a=0x9b, .x=0xd6, .y=0xe8, .sp=0x3e, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x005c, .value=0xb7}, {.addr=0x008e, .value=0x3e}, {.addr=0x008f, .value=0x5c},
    };
    const struct BusEvent events[] = {
        {.addr=0x008e, .value=0x3e, .type=IO_READ},
        {.addr=0x008f, .value=0x5c, .type=IO_READ},
        {.addr=0x005c, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0263) {
    const struct CPU_State initial_cpu = {.pc=0xb307, .a=0xb9, .x=0xbe, .y=0x23, .sp=0x62, .status=0x23};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0135, .value=0x63}, {.addr=0xb307, .value=0x3e}, {.addr=0xb308, .value=0x35},
    };
    const struct CPU_State final_cpu = {.pc=0xb309, .a=0xb9, .x=0xbe, .y=0x23, .sp=0x62, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x0135, .value=0x63}, {.addr=0xb307, .value=0x3e}, {.addr=0xb308, .value=0x35},
    };
    const struct BusEvent events[] = {
        {.addr=0xb307, .value=0x3e, .type=IO_READ},
        {.addr=0xb308, .value=0x35, .type=IO_READ},
        {.addr=0x0135, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0264) {
    const struct CPU_State initial_cpu = {.pc=0x7a35, .a=0x9b, .x=0x2d, .y=0x84, .sp=0x12, .status=0x8e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e8, .value=0xb7}, {.addr=0x7a35, .value=0x3e}, {.addr=0x7a36, .value=0xe8},
    };
    const struct CPU_State final_cpu = {.pc=0x7a37, .a=0x9b, .x=0x2d, .y=0x84, .sp=0x12, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e8, .value=0xb7}, {.addr=0x7a35, .value=0x3e}, {.addr=0x7a36, .value=0xe8},
    };
    const struct BusEvent events[] = {
        {.addr=0x7a35, .value=0x3e, .type=IO_READ},
        {.addr=0x7a36, .value=0xe8, .type=IO_READ},
        {.addr=0x00e8, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0265) {
    const struct CPU_State initial_cpu = {.pc=0xe864, .a=0x84, .x=0x7b, .y=0xdb, .sp=0xcb, .status=0x6c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0151, .value=0x0c}, {.addr=0xe864, .value=0x3e}, {.addr=0xe865, .value=0x51},
    };
    const struct CPU_State final_cpu = {.pc=0xe866, .a=0x84, .x=0x7b, .y=0xdb, .sp=0xcb, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0151, .value=0x0c}, {.addr=0xe864, .value=0x3e}, {.addr=0xe865, .value=0x51},
    };
    const struct BusEvent events[] = {
        {.addr=0xe864, .value=0x3e, .type=IO_READ},
        {.addr=0xe865, .value=0x51, .type=IO_READ},
        {.addr=0x0151, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0266) {
    const struct CPU_State initial_cpu = {.pc=0x29cb, .a=0x99, .x=0x6c, .y=0x3f, .sp=0x91, .status=0x05};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b2, .value=0x7f}, {.addr=0x29cb, .value=0x3e}, {.addr=0x29cc, .value=0xb2},
    };
    const struct CPU_State final_cpu = {.pc=0x29cd, .a=0x99, .x=0x6c, .y=0x3f, .sp=0x91, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b2, .value=0x7f}, {.addr=0x29cb, .value=0x3e}, {.addr=0x29cc, .value=0xb2},
    };
    const struct BusEvent events[] = {
        {.addr=0x29cb, .value=0x3e, .type=IO_READ},
        {.addr=0x29cc, .value=0xb2, .type=IO_READ},
        {.addr=0x00b2, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0267) {
    const struct CPU_State initial_cpu = {.pc=0x70d9, .a=0x5f, .x=0x27, .y=0x8b, .sp=0x12, .status=0x06};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d4, .value=0xd0}, {.addr=0x70d9, .value=0x3e}, {.addr=0x70da, .value=0xd4},
    };
    const struct CPU_State final_cpu = {.pc=0x70db, .a=0x5f, .x=0x27, .y=0x8b, .sp=0x12, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d4, .value=0xd0}, {.addr=0x70d9, .value=0x3e}, {.addr=0x70da, .value=0xd4},
    };
    const struct BusEvent events[] = {
        {.addr=0x70d9, .value=0x3e, .type=IO_READ},
        {.addr=0x70da, .value=0xd4, .type=IO_READ},
        {.addr=0x00d4, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0268) {
    const struct CPU_State initial_cpu = {.pc=0x9290, .a=0x3e, .x=0x04, .y=0x8f, .sp=0x70, .status=0x47};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003b, .value=0x21}, {.addr=0x9290, .value=0x3e}, {.addr=0x9291, .value=0x3b},
    };
    const struct CPU_State final_cpu = {.pc=0x9292, .a=0x3e, .x=0x04, .y=0x8f, .sp=0x70, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x003b, .value=0x21}, {.addr=0x9290, .value=0x3e}, {.addr=0x9291, .value=0x3b},
    };
    const struct BusEvent events[] = {
        {.addr=0x9290, .value=0x3e, .type=IO_READ},
        {.addr=0x9291, .value=0x3b, .type=IO_READ},
        {.addr=0x003b, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0269) {
    const struct CPU_State initial_cpu = {.pc=0x1cc4, .a=0xe7, .x=0xbd, .y=0x9c, .sp=0x8e, .status=0xf1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0183, .value=0x26}, {.addr=0x1cc4, .value=0x3e}, {.addr=0x1cc5, .value=0x83},
    };
    const struct CPU_State final_cpu = {.pc=0x1cc6, .a=0xe7, .x=0xbd, .y=0x9c, .sp=0x8e, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0183, .value=0x26}, {.addr=0x1cc4, .value=0x3e}, {.addr=0x1cc5, .value=0x83},
    };
    const struct BusEvent events[] = {
        {.addr=0x1cc4, .value=0x3e, .type=IO_READ},
        {.addr=0x1cc5, .value=0x83, .type=IO_READ},
        {.addr=0x0183, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_026A) {
    const struct CPU_State initial_cpu = {.pc=0x9e41, .a=0x5d, .x=0x9c, .y=0x3b, .sp=0x84, .status=0x1e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0061, .value=0x8a}, {.addr=0x9e41, .value=0x3e}, {.addr=0x9e42, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0x9e43, .a=0x5d, .x=0x9c, .y=0x3b, .sp=0x84, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0061, .value=0x8a}, {.addr=0x9e41, .value=0x3e}, {.addr=0x9e42, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0x9e41, .value=0x3e, .type=IO_READ},
        {.addr=0x9e42, .value=0x61, .type=IO_READ},
        {.addr=0x0061, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_026B) {
    const struct CPU_State initial_cpu = {.pc=0x696f, .a=0x3f, .x=0xfd, .y=0xc4, .sp=0x03, .status=0x84};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008b, .value=0xb0}, {.addr=0x696f, .value=0x3e}, {.addr=0x6970, .value=0x8b},
    };
    const struct CPU_State final_cpu = {.pc=0x6971, .a=0x3f, .x=0xfd, .y=0xc4, .sp=0x03, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x008b, .value=0xb0}, {.addr=0x696f, .value=0x3e}, {.addr=0x6970, .value=0x8b},
    };
    const struct BusEvent events[] = {
        {.addr=0x696f, .value=0x3e, .type=IO_READ},
        {.addr=0x6970, .value=0x8b, .type=IO_READ},
        {.addr=0x008b, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_026C) {
    const struct CPU_State initial_cpu = {.pc=0x3ed7, .a=0xcb, .x=0x63, .y=0xf1, .sp=0x62, .status=0x37};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0113, .value=0x43}, {.addr=0x3ed7, .value=0x3e}, {.addr=0x3ed8, .value=0x13},
    };
    const struct CPU_State final_cpu = {.pc=0x3ed9, .a=0xcb, .x=0x63, .y=0xf1, .sp=0x62, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x0113, .value=0x43}, {.addr=0x3ed7, .value=0x3e}, {.addr=0x3ed8, .value=0x13},
    };
    const struct BusEvent events[] = {
        {.addr=0x3ed7, .value=0x3e, .type=IO_READ},
        {.addr=0x3ed8, .value=0x13, .type=IO_READ},
        {.addr=0x0113, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_026D) {
    const struct CPU_State initial_cpu = {.pc=0x31d8, .a=0x06, .x=0x29, .y=0x07, .sp=0x29, .status=0xc1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0081, .value=0xc5}, {.addr=0x31d8, .value=0x3e}, {.addr=0x31d9, .value=0x81},
    };
    const struct CPU_State final_cpu = {.pc=0x31da, .a=0x06, .x=0x29, .y=0x07, .sp=0x29, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x0081, .value=0xc5}, {.addr=0x31d8, .value=0x3e}, {.addr=0x31d9, .value=0x81},
    };
    const struct BusEvent events[] = {
        {.addr=0x31d8, .value=0x3e, .type=IO_READ},
        {.addr=0x31d9, .value=0x81, .type=IO_READ},
        {.addr=0x0081, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_026E) {
    const struct CPU_State initial_cpu = {.pc=0x18f9, .a=0x4b, .x=0x5a, .y=0x47, .sp=0x6e, .status=0x04};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e4, .value=0xb0}, {.addr=0x18f9, .value=0x3e}, {.addr=0x18fa, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0x18fb, .a=0x4b, .x=0x5a, .y=0x47, .sp=0x6e, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e4, .value=0xb0}, {.addr=0x18f9, .value=0x3e}, {.addr=0x18fa, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0x18f9, .value=0x3e, .type=IO_READ},
        {.addr=0x18fa, .value=0xe4, .type=IO_READ},
        {.addr=0x00e4, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_026F) {
    const struct CPU_State initial_cpu = {.pc=0xff5a, .a=0x91, .x=0x21, .y=0xa7, .sp=0x27, .status=0xab};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a7, .value=0xcc}, {.addr=0xff5a, .value=0x3e}, {.addr=0xff5b, .value=0xa7},
    };
    const struct CPU_State final_cpu = {.pc=0xff5c, .a=0x91, .x=0x21, .y=0xa7, .sp=0x27, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a7, .value=0xcc}, {.addr=0xff5a, .value=0x3e}, {.addr=0xff5b, .value=0xa7},
    };
    const struct BusEvent events[] = {
        {.addr=0xff5a, .value=0x3e, .type=IO_READ},
        {.addr=0xff5b, .value=0xa7, .type=IO_READ},
        {.addr=0x01a7, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0270) {
    const struct CPU_State initial_cpu = {.pc=0x68ec, .a=0x5c, .x=0x06, .y=0x67, .sp=0x3b, .status=0x74};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019e, .value=0x0f}, {.addr=0x68ec, .value=0x3e}, {.addr=0x68ed, .value=0x9e},
    };
    const struct CPU_State final_cpu = {.pc=0x68ee, .a=0x5c, .x=0x06, .y=0x67, .sp=0x3b, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x019e, .value=0x0f}, {.addr=0x68ec, .value=0x3e}, {.addr=0x68ed, .value=0x9e},
    };
    const struct BusEvent events[] = {
        {.addr=0x68ec, .value=0x3e, .type=IO_READ},
        {.addr=0x68ed, .value=0x9e, .type=IO_READ},
        {.addr=0x019e, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0271) {
    const struct CPU_State initial_cpu = {.pc=0x0f48, .a=0x60, .x=0x3c, .y=0xf7, .sp=0x45, .status=0x52};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0062, .value=0x33}, {.addr=0x0f48, .value=0x3e}, {.addr=0x0f49, .value=0x62},
    };
    const struct CPU_State final_cpu = {.pc=0x0f4a, .a=0x60, .x=0x3c, .y=0xf7, .sp=0x45, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x0062, .value=0x33}, {.addr=0x0f48, .value=0x3e}, {.addr=0x0f49, .value=0x62},
    };
    const struct BusEvent events[] = {
        {.addr=0x0f48, .value=0x3e, .type=IO_READ},
        {.addr=0x0f49, .value=0x62, .type=IO_READ},
        {.addr=0x0062, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0272) {
    const struct CPU_State initial_cpu = {.pc=0xeb0a, .a=0xed, .x=0x97, .y=0xfc, .sp=0xd7, .status=0x4f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0060, .value=0x49}, {.addr=0xeb0a, .value=0x3e}, {.addr=0xeb0b, .value=0x60},
    };
    const struct CPU_State final_cpu = {.pc=0xeb0c, .a=0xed, .x=0x97, .y=0xfc, .sp=0xd7, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0060, .value=0x49}, {.addr=0xeb0a, .value=0x3e}, {.addr=0xeb0b, .value=0x60},
    };
    const struct BusEvent events[] = {
        {.addr=0xeb0a, .value=0x3e, .type=IO_READ},
        {.addr=0xeb0b, .value=0x60, .type=IO_READ},
        {.addr=0x0060, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0274) {
    const struct CPU_State initial_cpu = {.pc=0x15c7, .a=0x63, .x=0x6e, .y=0x8c, .sp=0xd3, .status=0xa4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0161, .value=0xe8}, {.addr=0x15c7, .value=0x3e}, {.addr=0x15c8, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0x15c9, .a=0x63, .x=0x6e, .y=0x8c, .sp=0xd3, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0161, .value=0xe8}, {.addr=0x15c7, .value=0x3e}, {.addr=0x15c8, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0x15c7, .value=0x3e, .type=IO_READ},
        {.addr=0x15c8, .value=0x61, .type=IO_READ},
        {.addr=0x0161, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0275) {
    const struct CPU_State initial_cpu = {.pc=0x43b2, .a=0x70, .x=0x4a, .y=0x9b, .sp=0x9d, .status=0xbd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a7, .value=0x4a}, {.addr=0x43b2, .value=0x3e}, {.addr=0x43b3, .value=0xa7},
    };
    const struct CPU_State final_cpu = {.pc=0x43b4, .a=0x70, .x=0x4a, .y=0x9b, .sp=0x9d, .status=0x3f};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a7, .value=0x4a}, {.addr=0x43b2, .value=0x3e}, {.addr=0x43b3, .value=0xa7},
    };
    const struct BusEvent events[] = {
        {.addr=0x43b2, .value=0x3e, .type=IO_READ},
        {.addr=0x43b3, .value=0xa7, .type=IO_READ},
        {.addr=0x01a7, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0276) {
    const struct CPU_State initial_cpu = {.pc=0x8433, .a=0xcd, .x=0x06, .y=0xf2, .sp=0xd5, .status=0x11};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d0, .value=0xbc}, {.addr=0x8433, .value=0x3e}, {.addr=0x8434, .value=0xd0},
    };
    const struct CPU_State final_cpu = {.pc=0x8435, .a=0xcd, .x=0x06, .y=0xf2, .sp=0xd5, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d0, .value=0xbc}, {.addr=0x8433, .value=0x3e}, {.addr=0x8434, .value=0xd0},
    };
    const struct BusEvent events[] = {
        {.addr=0x8433, .value=0x3e, .type=IO_READ},
        {.addr=0x8434, .value=0xd0, .type=IO_READ},
        {.addr=0x00d0, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0277) {
    const struct CPU_State initial_cpu = {.pc=0x9b9d, .a=0x48, .x=0x34, .y=0x7e, .sp=0x49, .status=0x98};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0024, .value=0xae}, {.addr=0x9b9d, .value=0x3e}, {.addr=0x9b9e, .value=0x24},
    };
    const struct CPU_State final_cpu = {.pc=0x9b9f, .a=0x48, .x=0x34, .y=0x7e, .sp=0x49, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x0024, .value=0xae}, {.addr=0x9b9d, .value=0x3e}, {.addr=0x9b9e, .value=0x24},
    };
    const struct BusEvent events[] = {
        {.addr=0x9b9d, .value=0x3e, .type=IO_READ},
        {.addr=0x9b9e, .value=0x24, .type=IO_READ},
        {.addr=0x0024, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0278) {
    const struct CPU_State initial_cpu = {.pc=0x36eb, .a=0x93, .x=0x9b, .y=0x29, .sp=0x18, .status=0xda};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003f, .value=0x3d}, {.addr=0x36eb, .value=0x3e}, {.addr=0x36ec, .value=0x3f},
    };
    const struct CPU_State final_cpu = {.pc=0x36ed, .a=0x93, .x=0x9b, .y=0x29, .sp=0x18, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x003f, .value=0x3d}, {.addr=0x36eb, .value=0x3e}, {.addr=0x36ec, .value=0x3f},
    };
    const struct BusEvent events[] = {
        {.addr=0x36eb, .value=0x3e, .type=IO_READ},
        {.addr=0x36ec, .value=0x3f, .type=IO_READ},
        {.addr=0x003f, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0279) {
    const struct CPU_State initial_cpu = {.pc=0xf1ee, .a=0x49, .x=0x00, .y=0xdf, .sp=0x0b, .status=0x4a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a3, .value=0x6b}, {.addr=0xf1ee, .value=0x3e}, {.addr=0xf1ef, .value=0xa3},
    };
    const struct CPU_State final_cpu = {.pc=0xf1f0, .a=0x49, .x=0x00, .y=0xdf, .sp=0x0b, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a3, .value=0x6b}, {.addr=0xf1ee, .value=0x3e}, {.addr=0xf1ef, .value=0xa3},
    };
    const struct BusEvent events[] = {
        {.addr=0xf1ee, .value=0x3e, .type=IO_READ},
        {.addr=0xf1ef, .value=0xa3, .type=IO_READ},
        {.addr=0x00a3, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_027A) {
    const struct CPU_State initial_cpu = {.pc=0x937b, .a=0xb6, .x=0x8a, .y=0xd8, .sp=0x21, .status=0x46};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0086, .value=0x94}, {.addr=0x937b, .value=0x3e}, {.addr=0x937c, .value=0x86},
    };
    const struct CPU_State final_cpu = {.pc=0x937d, .a=0xb6, .x=0x8a, .y=0xd8, .sp=0x21, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0086, .value=0x94}, {.addr=0x937b, .value=0x3e}, {.addr=0x937c, .value=0x86},
    };
    const struct BusEvent events[] = {
        {.addr=0x937b, .value=0x3e, .type=IO_READ},
        {.addr=0x937c, .value=0x86, .type=IO_READ},
        {.addr=0x0086, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_027B) {
    const struct CPU_State initial_cpu = {.pc=0x44f9, .a=0xbb, .x=0x24, .y=0x20, .sp=0xc2, .status=0x8d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d1, .value=0x5c}, {.addr=0x44f9, .value=0x3e}, {.addr=0x44fa, .value=0xd1},
    };
    const struct CPU_State final_cpu = {.pc=0x44fb, .a=0xbb, .x=0x24, .y=0x20, .sp=0xc2, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d1, .value=0x5c}, {.addr=0x44f9, .value=0x3e}, {.addr=0x44fa, .value=0xd1},
    };
    const struct BusEvent events[] = {
        {.addr=0x44f9, .value=0x3e, .type=IO_READ},
        {.addr=0x44fa, .value=0xd1, .type=IO_READ},
        {.addr=0x00d1, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_027C) {
    const struct CPU_State initial_cpu = {.pc=0x9539, .a=0xed, .x=0xab, .y=0x2f, .sp=0xdc, .status=0x00};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ed, .value=0x99}, {.addr=0x9539, .value=0x3e}, {.addr=0x953a, .value=0xed},
    };
    const struct CPU_State final_cpu = {.pc=0x953b, .a=0xed, .x=0xab, .y=0x2f, .sp=0xdc, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ed, .value=0x99}, {.addr=0x9539, .value=0x3e}, {.addr=0x953a, .value=0xed},
    };
    const struct BusEvent events[] = {
        {.addr=0x9539, .value=0x3e, .type=IO_READ},
        {.addr=0x953a, .value=0xed, .type=IO_READ},
        {.addr=0x00ed, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_027D) {
    const struct CPU_State initial_cpu = {.pc=0xba1d, .a=0x24, .x=0x9c, .y=0xe0, .sp=0xa2, .status=0x9f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ed, .value=0xab}, {.addr=0xba1d, .value=0x3e}, {.addr=0xba1e, .value=0xed},
    };
    const struct CPU_State final_cpu = {.pc=0xba1f, .a=0x24, .x=0x9c, .y=0xe0, .sp=0xa2, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ed, .value=0xab}, {.addr=0xba1d, .value=0x3e}, {.addr=0xba1e, .value=0xed},
    };
    const struct BusEvent events[] = {
        {.addr=0xba1d, .value=0x3e, .type=IO_READ},
        {.addr=0xba1e, .value=0xed, .type=IO_READ},
        {.addr=0x00ed, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_027F) {
    const struct CPU_State initial_cpu = {.pc=0x07ef, .a=0x2f, .x=0xd1, .y=0x39, .sp=0xda, .status=0x43};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0070, .value=0xcd}, {.addr=0x07ef, .value=0x3e}, {.addr=0x07f0, .value=0x70},
    };
    const struct CPU_State final_cpu = {.pc=0x07f1, .a=0x2f, .x=0xd1, .y=0x39, .sp=0xda, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x0070, .value=0xcd}, {.addr=0x07ef, .value=0x3e}, {.addr=0x07f0, .value=0x70},
    };
    const struct BusEvent events[] = {
        {.addr=0x07ef, .value=0x3e, .type=IO_READ},
        {.addr=0x07f0, .value=0x70, .type=IO_READ},
        {.addr=0x0070, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0280) {
    const struct CPU_State initial_cpu = {.pc=0xafa5, .a=0xd6, .x=0xf9, .y=0xc7, .sp=0x14, .status=0xb8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a1, .value=0x16}, {.addr=0xafa5, .value=0x3e}, {.addr=0xafa6, .value=0xa1},
    };
    const struct CPU_State final_cpu = {.pc=0xafa7, .a=0xd6, .x=0xf9, .y=0xc7, .sp=0x14, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a1, .value=0x16}, {.addr=0xafa5, .value=0x3e}, {.addr=0xafa6, .value=0xa1},
    };
    const struct BusEvent events[] = {
        {.addr=0xafa5, .value=0x3e, .type=IO_READ},
        {.addr=0xafa6, .value=0xa1, .type=IO_READ},
        {.addr=0x01a1, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0281) {
    const struct CPU_State initial_cpu = {.pc=0xbd7c, .a=0xf2, .x=0xf8, .y=0x7b, .sp=0x52, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0141, .value=0x3b}, {.addr=0xbd7c, .value=0x3e}, {.addr=0xbd7d, .value=0x41},
    };
    const struct CPU_State final_cpu = {.pc=0xbd7e, .a=0xf2, .x=0xf8, .y=0x7b, .sp=0x52, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0141, .value=0x3b}, {.addr=0xbd7c, .value=0x3e}, {.addr=0xbd7d, .value=0x41},
    };
    const struct BusEvent events[] = {
        {.addr=0xbd7c, .value=0x3e, .type=IO_READ},
        {.addr=0xbd7d, .value=0x41, .type=IO_READ},
        {.addr=0x0141, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0282) {
    const struct CPU_State initial_cpu = {.pc=0xd8a6, .a=0x80, .x=0xb2, .y=0xaf, .sp=0xd6, .status=0x64};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016b, .value=0x16}, {.addr=0xd8a6, .value=0x3e}, {.addr=0xd8a7, .value=0x6b},
    };
    const struct CPU_State final_cpu = {.pc=0xd8a8, .a=0x80, .x=0xb2, .y=0xaf, .sp=0xd6, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x016b, .value=0x16}, {.addr=0xd8a6, .value=0x3e}, {.addr=0xd8a7, .value=0x6b},
    };
    const struct BusEvent events[] = {
        {.addr=0xd8a6, .value=0x3e, .type=IO_READ},
        {.addr=0xd8a7, .value=0x6b, .type=IO_READ},
        {.addr=0x016b, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0283) {
    const struct CPU_State initial_cpu = {.pc=0xa2f7, .a=0x66, .x=0xb8, .y=0x3c, .sp=0xf9, .status=0x06};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0011, .value=0xba}, {.addr=0xa2f7, .value=0x3e}, {.addr=0xa2f8, .value=0x11},
    };
    const struct CPU_State final_cpu = {.pc=0xa2f9, .a=0x66, .x=0xb8, .y=0x3c, .sp=0xf9, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x0011, .value=0xba}, {.addr=0xa2f7, .value=0x3e}, {.addr=0xa2f8, .value=0x11},
    };
    const struct BusEvent events[] = {
        {.addr=0xa2f7, .value=0x3e, .type=IO_READ},
        {.addr=0xa2f8, .value=0x11, .type=IO_READ},
        {.addr=0x0011, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0284) {
    const struct CPU_State initial_cpu = {.pc=0xa164, .a=0xdd, .x=0x28, .y=0x3d, .sp=0xc3, .status=0x44};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0066, .value=0xdf}, {.addr=0xa164, .value=0x3e}, {.addr=0xa165, .value=0x66},
    };
    const struct CPU_State final_cpu = {.pc=0xa166, .a=0xdd, .x=0x28, .y=0x3d, .sp=0xc3, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x0066, .value=0xdf}, {.addr=0xa164, .value=0x3e}, {.addr=0xa165, .value=0x66},
    };
    const struct BusEvent events[] = {
        {.addr=0xa164, .value=0x3e, .type=IO_READ},
        {.addr=0xa165, .value=0x66, .type=IO_READ},
        {.addr=0x0066, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0285) {
    const struct CPU_State initial_cpu = {.pc=0x32b7, .a=0xd8, .x=0x78, .y=0x14, .sp=0xae, .status=0x2c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fc, .value=0x65}, {.addr=0x32b7, .value=0x3e}, {.addr=0x32b8, .value=0xfc},
    };
    const struct CPU_State final_cpu = {.pc=0x32b9, .a=0xd8, .x=0x78, .y=0x14, .sp=0xae, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fc, .value=0x65}, {.addr=0x32b7, .value=0x3e}, {.addr=0x32b8, .value=0xfc},
    };
    const struct BusEvent events[] = {
        {.addr=0x32b7, .value=0x3e, .type=IO_READ},
        {.addr=0x32b8, .value=0xfc, .type=IO_READ},
        {.addr=0x01fc, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0286) {
    const struct CPU_State initial_cpu = {.pc=0x8942, .a=0xfc, .x=0x4b, .y=0x5d, .sp=0x78, .status=0x5a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0047, .value=0xec}, {.addr=0x8942, .value=0x3e}, {.addr=0x8943, .value=0x47},
    };
    const struct CPU_State final_cpu = {.pc=0x8944, .a=0xfc, .x=0x4b, .y=0x5d, .sp=0x78, .status=0x58};
    const struct RamEntry final_ram[] = {
        {.addr=0x0047, .value=0xec}, {.addr=0x8942, .value=0x3e}, {.addr=0x8943, .value=0x47},
    };
    const struct BusEvent events[] = {
        {.addr=0x8942, .value=0x3e, .type=IO_READ},
        {.addr=0x8943, .value=0x47, .type=IO_READ},
        {.addr=0x0047, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0287) {
    const struct CPU_State initial_cpu = {.pc=0x0541, .a=0x03, .x=0x0a, .y=0xf6, .sp=0xe4, .status=0x42};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0071, .value=0x9c}, {.addr=0x0541, .value=0x3e}, {.addr=0x0542, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0x0543, .a=0x03, .x=0x0a, .y=0xf6, .sp=0xe4, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x0071, .value=0x9c}, {.addr=0x0541, .value=0x3e}, {.addr=0x0542, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0x0541, .value=0x3e, .type=IO_READ},
        {.addr=0x0542, .value=0x71, .type=IO_READ},
        {.addr=0x0071, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0288) {
    const struct CPU_State initial_cpu = {.pc=0xb06e, .a=0x25, .x=0xb2, .y=0x82, .sp=0x47, .status=0x97};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b4, .value=0x2f}, {.addr=0xb06e, .value=0x3e}, {.addr=0xb06f, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0xb070, .a=0x25, .x=0xb2, .y=0x82, .sp=0x47, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b4, .value=0x2f}, {.addr=0xb06e, .value=0x3e}, {.addr=0xb06f, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0xb06e, .value=0x3e, .type=IO_READ},
        {.addr=0xb06f, .value=0xb4, .type=IO_READ},
        {.addr=0x00b4, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0289) {
    const struct CPU_State initial_cpu = {.pc=0xf79c, .a=0xdb, .x=0xe0, .y=0x97, .sp=0xc3, .status=0xc2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0079, .value=0xe8}, {.addr=0xf79c, .value=0x3e}, {.addr=0xf79d, .value=0x79},
    };
    const struct CPU_State final_cpu = {.pc=0xf79e, .a=0xdb, .x=0xe0, .y=0x97, .sp=0xc3, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0079, .value=0xe8}, {.addr=0xf79c, .value=0x3e}, {.addr=0xf79d, .value=0x79},
    };
    const struct BusEvent events[] = {
        {.addr=0xf79c, .value=0x3e, .type=IO_READ},
        {.addr=0xf79d, .value=0x79, .type=IO_READ},
        {.addr=0x0079, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_028A) {
    const struct CPU_State initial_cpu = {.pc=0xb884, .a=0xde, .x=0xcd, .y=0x2e, .sp=0x78, .status=0x5d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009a, .value=0x35}, {.addr=0xb884, .value=0x3e}, {.addr=0xb885, .value=0x9a},
    };
    const struct CPU_State final_cpu = {.pc=0xb886, .a=0xde, .x=0xcd, .y=0x2e, .sp=0x78, .status=0xdd};
    const struct RamEntry final_ram[] = {
        {.addr=0x009a, .value=0x35}, {.addr=0xb884, .value=0x3e}, {.addr=0xb885, .value=0x9a},
    };
    const struct BusEvent events[] = {
        {.addr=0xb884, .value=0x3e, .type=IO_READ},
        {.addr=0xb885, .value=0x9a, .type=IO_READ},
        {.addr=0x009a, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_028B) {
    const struct CPU_State initial_cpu = {.pc=0x42f7, .a=0x75, .x=0x28, .y=0x37, .sp=0xfe, .status=0x7a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0101, .value=0x4e}, {.addr=0x42f7, .value=0x3e}, {.addr=0x42f8, .value=0x01},
    };
    const struct CPU_State final_cpu = {.pc=0x42f9, .a=0x75, .x=0x28, .y=0x37, .sp=0xfe, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0101, .value=0x4e}, {.addr=0x42f7, .value=0x3e}, {.addr=0x42f8, .value=0x01},
    };
    const struct BusEvent events[] = {
        {.addr=0x42f7, .value=0x3e, .type=IO_READ},
        {.addr=0x42f8, .value=0x01, .type=IO_READ},
        {.addr=0x0101, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_028C) {
    const struct CPU_State initial_cpu = {.pc=0xee0c, .a=0x1e, .x=0x9e, .y=0xba, .sp=0x9e, .status=0xb5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0114, .value=0x22}, {.addr=0xee0c, .value=0x3e}, {.addr=0xee0d, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0xee0e, .a=0x1e, .x=0x9e, .y=0xba, .sp=0x9e, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x0114, .value=0x22}, {.addr=0xee0c, .value=0x3e}, {.addr=0xee0d, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0xee0c, .value=0x3e, .type=IO_READ},
        {.addr=0xee0d, .value=0x14, .type=IO_READ},
        {.addr=0x0114, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_028D) {
    const struct CPU_State initial_cpu = {.pc=0xfa76, .a=0x9c, .x=0x74, .y=0x41, .sp=0x8f, .status=0x3e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014a, .value=0x15}, {.addr=0xfa76, .value=0x3e}, {.addr=0xfa77, .value=0x4a},
    };
    const struct CPU_State final_cpu = {.pc=0xfa78, .a=0x9c, .x=0x74, .y=0x41, .sp=0x8f, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x014a, .value=0x15}, {.addr=0xfa76, .value=0x3e}, {.addr=0xfa77, .value=0x4a},
    };
    const struct BusEvent events[] = {
        {.addr=0xfa76, .value=0x3e, .type=IO_READ},
        {.addr=0xfa77, .value=0x4a, .type=IO_READ},
        {.addr=0x014a, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_028E) {
    const struct CPU_State initial_cpu = {.pc=0xfe17, .a=0xa2, .x=0xc4, .y=0xa3, .sp=0x6a, .status=0x75};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012c, .value=0x93}, {.addr=0xfe17, .value=0x3e}, {.addr=0xfe18, .value=0x2c},
    };
    const struct CPU_State final_cpu = {.pc=0xfe19, .a=0xa2, .x=0xc4, .y=0xa3, .sp=0x6a, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x012c, .value=0x93}, {.addr=0xfe17, .value=0x3e}, {.addr=0xfe18, .value=0x2c},
    };
    const struct BusEvent events[] = {
        {.addr=0xfe17, .value=0x3e, .type=IO_READ},
        {.addr=0xfe18, .value=0x2c, .type=IO_READ},
        {.addr=0x012c, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_028F) {
    const struct CPU_State initial_cpu = {.pc=0xa308, .a=0x9f, .x=0x96, .y=0xff, .sp=0xc2, .status=0xbe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0176, .value=0x12}, {.addr=0xa308, .value=0x3e}, {.addr=0xa309, .value=0x76},
    };
    const struct CPU_State final_cpu = {.pc=0xa30a, .a=0x9f, .x=0x96, .y=0xff, .sp=0xc2, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0176, .value=0x12}, {.addr=0xa308, .value=0x3e}, {.addr=0xa309, .value=0x76},
    };
    const struct BusEvent events[] = {
        {.addr=0xa308, .value=0x3e, .type=IO_READ},
        {.addr=0xa309, .value=0x76, .type=IO_READ},
        {.addr=0x0176, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0290) {
    const struct CPU_State initial_cpu = {.pc=0xdfbe, .a=0x7c, .x=0x18, .y=0x2b, .sp=0x13, .status=0x5f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003a, .value=0xb2}, {.addr=0xdfbe, .value=0x3e}, {.addr=0xdfbf, .value=0x3a},
    };
    const struct CPU_State final_cpu = {.pc=0xdfc0, .a=0x7c, .x=0x18, .y=0x2b, .sp=0x13, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x003a, .value=0xb2}, {.addr=0xdfbe, .value=0x3e}, {.addr=0xdfbf, .value=0x3a},
    };
    const struct BusEvent events[] = {
        {.addr=0xdfbe, .value=0x3e, .type=IO_READ},
        {.addr=0xdfbf, .value=0x3a, .type=IO_READ},
        {.addr=0x003a, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0291) {
    const struct CPU_State initial_cpu = {.pc=0x9c3f, .a=0xa5, .x=0x01, .y=0xbb, .sp=0x0d, .status=0xfd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a0, .value=0x4d}, {.addr=0x9c3f, .value=0x3e}, {.addr=0x9c40, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0x9c41, .a=0xa5, .x=0x01, .y=0xbb, .sp=0x0d, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a0, .value=0x4d}, {.addr=0x9c3f, .value=0x3e}, {.addr=0x9c40, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0x9c3f, .value=0x3e, .type=IO_READ},
        {.addr=0x9c40, .value=0xa0, .type=IO_READ},
        {.addr=0x01a0, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0292) {
    const struct CPU_State initial_cpu = {.pc=0xdcba, .a=0xd4, .x=0x4e, .y=0x5b, .sp=0x11, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0185, .value=0xe8}, {.addr=0xdcba, .value=0x3e}, {.addr=0xdcbb, .value=0x85},
    };
    const struct CPU_State final_cpu = {.pc=0xdcbc, .a=0xd4, .x=0x4e, .y=0x5b, .sp=0x11, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x0185, .value=0xe8}, {.addr=0xdcba, .value=0x3e}, {.addr=0xdcbb, .value=0x85},
    };
    const struct BusEvent events[] = {
        {.addr=0xdcba, .value=0x3e, .type=IO_READ},
        {.addr=0xdcbb, .value=0x85, .type=IO_READ},
        {.addr=0x0185, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0293) {
    const struct CPU_State initial_cpu = {.pc=0xd1a6, .a=0x38, .x=0x98, .y=0xf3, .sp=0x07, .status=0x3f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012d, .value=0x10}, {.addr=0xd1a6, .value=0x3e}, {.addr=0xd1a7, .value=0x2d},
    };
    const struct CPU_State final_cpu = {.pc=0xd1a8, .a=0x38, .x=0x98, .y=0xf3, .sp=0x07, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x012d, .value=0x10}, {.addr=0xd1a6, .value=0x3e}, {.addr=0xd1a7, .value=0x2d},
    };
    const struct BusEvent events[] = {
        {.addr=0xd1a6, .value=0x3e, .type=IO_READ},
        {.addr=0xd1a7, .value=0x2d, .type=IO_READ},
        {.addr=0x012d, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0294) {
    const struct CPU_State initial_cpu = {.pc=0x3822, .a=0x28, .x=0xbe, .y=0x0c, .sp=0x40, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0184, .value=0x89}, {.addr=0x3822, .value=0x3e}, {.addr=0x3823, .value=0x84},
    };
    const struct CPU_State final_cpu = {.pc=0x3824, .a=0x28, .x=0xbe, .y=0x0c, .sp=0x40, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0184, .value=0x89}, {.addr=0x3822, .value=0x3e}, {.addr=0x3823, .value=0x84},
    };
    const struct BusEvent events[] = {
        {.addr=0x3822, .value=0x3e, .type=IO_READ},
        {.addr=0x3823, .value=0x84, .type=IO_READ},
        {.addr=0x0184, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0295) {
    const struct CPU_State initial_cpu = {.pc=0x9407, .a=0xca, .x=0xa3, .y=0x8c, .sp=0xb5, .status=0x98};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0094, .value=0x37}, {.addr=0x9407, .value=0x3e}, {.addr=0x9408, .value=0x94},
    };
    const struct CPU_State final_cpu = {.pc=0x9409, .a=0xca, .x=0xa3, .y=0x8c, .sp=0xb5, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x0094, .value=0x37}, {.addr=0x9407, .value=0x3e}, {.addr=0x9408, .value=0x94},
    };
    const struct BusEvent events[] = {
        {.addr=0x9407, .value=0x3e, .type=IO_READ},
        {.addr=0x9408, .value=0x94, .type=IO_READ},
        {.addr=0x0094, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0296) {
    const struct CPU_State initial_cpu = {.pc=0x1fe0, .a=0x19, .x=0x70, .y=0xc6, .sp=0x83, .status=0x1b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0001, .value=0x72}, {.addr=0x1fe0, .value=0x3e}, {.addr=0x1fe1, .value=0x01},
    };
    const struct CPU_State final_cpu = {.pc=0x1fe2, .a=0x19, .x=0x70, .y=0xc6, .sp=0x83, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x0001, .value=0x72}, {.addr=0x1fe0, .value=0x3e}, {.addr=0x1fe1, .value=0x01},
    };
    const struct BusEvent events[] = {
        {.addr=0x1fe0, .value=0x3e, .type=IO_READ},
        {.addr=0x1fe1, .value=0x01, .type=IO_READ},
        {.addr=0x0001, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0297) {
    const struct CPU_State initial_cpu = {.pc=0x9eaf, .a=0x90, .x=0xad, .y=0x16, .sp=0x85, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0159, .value=0xe9}, {.addr=0x9eaf, .value=0x3e}, {.addr=0x9eb0, .value=0x59},
    };
    const struct CPU_State final_cpu = {.pc=0x9eb1, .a=0x90, .x=0xad, .y=0x16, .sp=0x85, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0159, .value=0xe9}, {.addr=0x9eaf, .value=0x3e}, {.addr=0x9eb0, .value=0x59},
    };
    const struct BusEvent events[] = {
        {.addr=0x9eaf, .value=0x3e, .type=IO_READ},
        {.addr=0x9eb0, .value=0x59, .type=IO_READ},
        {.addr=0x0159, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0298) {
    const struct CPU_State initial_cpu = {.pc=0x4a24, .a=0x96, .x=0xb6, .y=0x19, .sp=0x02, .status=0x6e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0170, .value=0x3b}, {.addr=0x4a24, .value=0x3e}, {.addr=0x4a25, .value=0x70},
    };
    const struct CPU_State final_cpu = {.pc=0x4a26, .a=0x96, .x=0xb6, .y=0x19, .sp=0x02, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0170, .value=0x3b}, {.addr=0x4a24, .value=0x3e}, {.addr=0x4a25, .value=0x70},
    };
    const struct BusEvent events[] = {
        {.addr=0x4a24, .value=0x3e, .type=IO_READ},
        {.addr=0x4a25, .value=0x70, .type=IO_READ},
        {.addr=0x0170, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0299) {
    const struct CPU_State initial_cpu = {.pc=0x887e, .a=0x86, .x=0x82, .y=0xae, .sp=0x01, .status=0x5a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001c, .value=0xc6}, {.addr=0x887e, .value=0x3e}, {.addr=0x887f, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0x8880, .a=0x86, .x=0x82, .y=0xae, .sp=0x01, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x001c, .value=0xc6}, {.addr=0x887e, .value=0x3e}, {.addr=0x887f, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0x887e, .value=0x3e, .type=IO_READ},
        {.addr=0x887f, .value=0x1c, .type=IO_READ},
        {.addr=0x001c, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_029A) {
    const struct CPU_State initial_cpu = {.pc=0x2512, .a=0x55, .x=0xbd, .y=0xb9, .sp=0x73, .status=0xe8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0133, .value=0x36}, {.addr=0x2512, .value=0x3e}, {.addr=0x2513, .value=0x33},
    };
    const struct CPU_State final_cpu = {.pc=0x2514, .a=0x55, .x=0xbd, .y=0xb9, .sp=0x73, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0133, .value=0x36}, {.addr=0x2512, .value=0x3e}, {.addr=0x2513, .value=0x33},
    };
    const struct BusEvent events[] = {
        {.addr=0x2512, .value=0x3e, .type=IO_READ},
        {.addr=0x2513, .value=0x33, .type=IO_READ},
        {.addr=0x0133, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_029B) {
    const struct CPU_State initial_cpu = {.pc=0xa02f, .a=0x46, .x=0x45, .y=0x4f, .sp=0x7e, .status=0xcc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b2, .value=0x9b}, {.addr=0xa02f, .value=0x3e}, {.addr=0xa030, .value=0xb2},
    };
    const struct CPU_State final_cpu = {.pc=0xa031, .a=0x46, .x=0x45, .y=0x4f, .sp=0x7e, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b2, .value=0x9b}, {.addr=0xa02f, .value=0x3e}, {.addr=0xa030, .value=0xb2},
    };
    const struct BusEvent events[] = {
        {.addr=0xa02f, .value=0x3e, .type=IO_READ},
        {.addr=0xa030, .value=0xb2, .type=IO_READ},
        {.addr=0x00b2, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_029C) {
    const struct CPU_State initial_cpu = {.pc=0x45f8, .a=0x82, .x=0xe5, .y=0xae, .sp=0x8f, .status=0x99};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005b, .value=0x45}, {.addr=0x45f8, .value=0x3e}, {.addr=0x45f9, .value=0x5b},
    };
    const struct CPU_State final_cpu = {.pc=0x45fa, .a=0x82, .x=0xe5, .y=0xae, .sp=0x8f, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x005b, .value=0x45}, {.addr=0x45f8, .value=0x3e}, {.addr=0x45f9, .value=0x5b},
    };
    const struct BusEvent events[] = {
        {.addr=0x45f8, .value=0x3e, .type=IO_READ},
        {.addr=0x45f9, .value=0x5b, .type=IO_READ},
        {.addr=0x005b, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_029D) {
    const struct CPU_State initial_cpu = {.pc=0x3b89, .a=0x25, .x=0x23, .y=0xea, .sp=0x3f, .status=0x62};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0186, .value=0xef}, {.addr=0x3b89, .value=0x3e}, {.addr=0x3b8a, .value=0x86},
    };
    const struct CPU_State final_cpu = {.pc=0x3b8b, .a=0x25, .x=0x23, .y=0xea, .sp=0x3f, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x0186, .value=0xef}, {.addr=0x3b89, .value=0x3e}, {.addr=0x3b8a, .value=0x86},
    };
    const struct BusEvent events[] = {
        {.addr=0x3b89, .value=0x3e, .type=IO_READ},
        {.addr=0x3b8a, .value=0x86, .type=IO_READ},
        {.addr=0x0186, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_029E) {
    const struct CPU_State initial_cpu = {.pc=0xdc14, .a=0x06, .x=0xb0, .y=0xe3, .sp=0xa5, .status=0x45};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0067, .value=0x90}, {.addr=0xdc14, .value=0x3e}, {.addr=0xdc15, .value=0x67},
    };
    const struct CPU_State final_cpu = {.pc=0xdc16, .a=0x06, .x=0xb0, .y=0xe3, .sp=0xa5, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x0067, .value=0x90}, {.addr=0xdc14, .value=0x3e}, {.addr=0xdc15, .value=0x67},
    };
    const struct BusEvent events[] = {
        {.addr=0xdc14, .value=0x3e, .type=IO_READ},
        {.addr=0xdc15, .value=0x67, .type=IO_READ},
        {.addr=0x0067, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_029F) {
    const struct CPU_State initial_cpu = {.pc=0x844a, .a=0x41, .x=0x66, .y=0xeb, .sp=0x36, .status=0xdf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d0, .value=0xf0}, {.addr=0x844a, .value=0x3e}, {.addr=0x844b, .value=0xd0},
    };
    const struct CPU_State final_cpu = {.pc=0x844c, .a=0x41, .x=0x66, .y=0xeb, .sp=0x36, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d0, .value=0xf0}, {.addr=0x844a, .value=0x3e}, {.addr=0x844b, .value=0xd0},
    };
    const struct BusEvent events[] = {
        {.addr=0x844a, .value=0x3e, .type=IO_READ},
        {.addr=0x844b, .value=0xd0, .type=IO_READ},
        {.addr=0x00d0, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02A0) {
    const struct CPU_State initial_cpu = {.pc=0x9f9d, .a=0x86, .x=0xfa, .y=0xcd, .sp=0x6c, .status=0x25};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010c, .value=0x99}, {.addr=0x9f9d, .value=0x3e}, {.addr=0x9f9e, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0x9f9f, .a=0x86, .x=0xfa, .y=0xcd, .sp=0x6c, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x010c, .value=0x99}, {.addr=0x9f9d, .value=0x3e}, {.addr=0x9f9e, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0x9f9d, .value=0x3e, .type=IO_READ},
        {.addr=0x9f9e, .value=0x0c, .type=IO_READ},
        {.addr=0x010c, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02A1) {
    const struct CPU_State initial_cpu = {.pc=0xfc09, .a=0x8d, .x=0xce, .y=0x4b, .sp=0x70, .status=0x45};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002d, .value=0x18}, {.addr=0xfc09, .value=0x3e}, {.addr=0xfc0a, .value=0x2d},
    };
    const struct CPU_State final_cpu = {.pc=0xfc0b, .a=0x8d, .x=0xce, .y=0x4b, .sp=0x70, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x002d, .value=0x18}, {.addr=0xfc09, .value=0x3e}, {.addr=0xfc0a, .value=0x2d},
    };
    const struct BusEvent events[] = {
        {.addr=0xfc09, .value=0x3e, .type=IO_READ},
        {.addr=0xfc0a, .value=0x2d, .type=IO_READ},
        {.addr=0x002d, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02A2) {
    const struct CPU_State initial_cpu = {.pc=0x3857, .a=0x56, .x=0x87, .y=0x60, .sp=0x26, .status=0x9b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006b, .value=0x12}, {.addr=0x3857, .value=0x3e}, {.addr=0x3858, .value=0x6b},
    };
    const struct CPU_State final_cpu = {.pc=0x3859, .a=0x56, .x=0x87, .y=0x60, .sp=0x26, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x006b, .value=0x12}, {.addr=0x3857, .value=0x3e}, {.addr=0x3858, .value=0x6b},
    };
    const struct BusEvent events[] = {
        {.addr=0x3857, .value=0x3e, .type=IO_READ},
        {.addr=0x3858, .value=0x6b, .type=IO_READ},
        {.addr=0x006b, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02A3) {
    const struct CPU_State initial_cpu = {.pc=0xd28f, .a=0x82, .x=0xb1, .y=0x07, .sp=0x9a, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0108, .value=0xd5}, {.addr=0xd28f, .value=0x3e}, {.addr=0xd290, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0xd291, .a=0x82, .x=0xb1, .y=0x07, .sp=0x9a, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0108, .value=0xd5}, {.addr=0xd28f, .value=0x3e}, {.addr=0xd290, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0xd28f, .value=0x3e, .type=IO_READ},
        {.addr=0xd290, .value=0x08, .type=IO_READ},
        {.addr=0x0108, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02A4) {
    const struct CPU_State initial_cpu = {.pc=0x22d3, .a=0x00, .x=0x68, .y=0x77, .sp=0xb1, .status=0xba};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016a, .value=0x26}, {.addr=0x22d3, .value=0x3e}, {.addr=0x22d4, .value=0x6a},
    };
    const struct CPU_State final_cpu = {.pc=0x22d5, .a=0x00, .x=0x68, .y=0x77, .sp=0xb1, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x016a, .value=0x26}, {.addr=0x22d3, .value=0x3e}, {.addr=0x22d4, .value=0x6a},
    };
    const struct BusEvent events[] = {
        {.addr=0x22d3, .value=0x3e, .type=IO_READ},
        {.addr=0x22d4, .value=0x6a, .type=IO_READ},
        {.addr=0x016a, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x6f31, .a=0xd7, .x=0x36, .y=0xdb, .sp=0x0f, .status=0x99};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0060, .value=0x59}, {.addr=0x6f31, .value=0x3e}, {.addr=0x6f32, .value=0x60},
    };
    const struct CPU_State final_cpu = {.pc=0x6f33, .a=0xd7, .x=0x36, .y=0xdb, .sp=0x0f, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x0060, .value=0x59}, {.addr=0x6f31, .value=0x3e}, {.addr=0x6f32, .value=0x60},
    };
    const struct BusEvent events[] = {
        {.addr=0x6f31, .value=0x3e, .type=IO_READ},
        {.addr=0x6f32, .value=0x60, .type=IO_READ},
        {.addr=0x0060, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02A6) {
    const struct CPU_State initial_cpu = {.pc=0xcb38, .a=0x30, .x=0xe4, .y=0x4f, .sp=0xfe, .status=0x90};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000a, .value=0x86}, {.addr=0xcb38, .value=0x3e}, {.addr=0xcb39, .value=0x0a},
    };
    const struct CPU_State final_cpu = {.pc=0xcb3a, .a=0x30, .x=0xe4, .y=0x4f, .sp=0xfe, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x000a, .value=0x86}, {.addr=0xcb38, .value=0x3e}, {.addr=0xcb39, .value=0x0a},
    };
    const struct BusEvent events[] = {
        {.addr=0xcb38, .value=0x3e, .type=IO_READ},
        {.addr=0xcb39, .value=0x0a, .type=IO_READ},
        {.addr=0x000a, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02A7) {
    const struct CPU_State initial_cpu = {.pc=0x1b8b, .a=0xf1, .x=0x0c, .y=0xcb, .sp=0x33, .status=0x45};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005c, .value=0x82}, {.addr=0x1b8b, .value=0x3e}, {.addr=0x1b8c, .value=0x5c},
    };
    const struct CPU_State final_cpu = {.pc=0x1b8d, .a=0xf1, .x=0x0c, .y=0xcb, .sp=0x33, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x005c, .value=0x82}, {.addr=0x1b8b, .value=0x3e}, {.addr=0x1b8c, .value=0x5c},
    };
    const struct BusEvent events[] = {
        {.addr=0x1b8b, .value=0x3e, .type=IO_READ},
        {.addr=0x1b8c, .value=0x5c, .type=IO_READ},
        {.addr=0x005c, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02A8) {
    const struct CPU_State initial_cpu = {.pc=0xdff3, .a=0x8c, .x=0x46, .y=0x2d, .sp=0x5e, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015a, .value=0x35}, {.addr=0xdff3, .value=0x3e}, {.addr=0xdff4, .value=0x5a},
    };
    const struct CPU_State final_cpu = {.pc=0xdff5, .a=0x8c, .x=0x46, .y=0x2d, .sp=0x5e, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x015a, .value=0x35}, {.addr=0xdff3, .value=0x3e}, {.addr=0xdff4, .value=0x5a},
    };
    const struct BusEvent events[] = {
        {.addr=0xdff3, .value=0x3e, .type=IO_READ},
        {.addr=0xdff4, .value=0x5a, .type=IO_READ},
        {.addr=0x015a, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02A9) {
    const struct CPU_State initial_cpu = {.pc=0xc4e4, .a=0xcf, .x=0x76, .y=0x28, .sp=0x49, .status=0x88};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000e, .value=0xed}, {.addr=0xc4e4, .value=0x3e}, {.addr=0xc4e5, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0xc4e6, .a=0xcf, .x=0x76, .y=0x28, .sp=0x49, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x000e, .value=0xed}, {.addr=0xc4e4, .value=0x3e}, {.addr=0xc4e5, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0xc4e4, .value=0x3e, .type=IO_READ},
        {.addr=0xc4e5, .value=0x0e, .type=IO_READ},
        {.addr=0x000e, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02AA) {
    const struct CPU_State initial_cpu = {.pc=0xab9a, .a=0x31, .x=0x30, .y=0xf9, .sp=0x58, .status=0xc3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00be, .value=0x20}, {.addr=0xab9a, .value=0x3e}, {.addr=0xab9b, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0xab9c, .a=0x31, .x=0x30, .y=0xf9, .sp=0x58, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x00be, .value=0x20}, {.addr=0xab9a, .value=0x3e}, {.addr=0xab9b, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0xab9a, .value=0x3e, .type=IO_READ},
        {.addr=0xab9b, .value=0xbe, .type=IO_READ},
        {.addr=0x00be, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02AB) {
    const struct CPU_State initial_cpu = {.pc=0x1e05, .a=0x3b, .x=0x9f, .y=0xe2, .sp=0x99, .status=0x7a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0142, .value=0x5b}, {.addr=0x1e05, .value=0x3e}, {.addr=0x1e06, .value=0x42},
    };
    const struct CPU_State final_cpu = {.pc=0x1e07, .a=0x3b, .x=0x9f, .y=0xe2, .sp=0x99, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x0142, .value=0x5b}, {.addr=0x1e05, .value=0x3e}, {.addr=0x1e06, .value=0x42},
    };
    const struct BusEvent events[] = {
        {.addr=0x1e05, .value=0x3e, .type=IO_READ},
        {.addr=0x1e06, .value=0x42, .type=IO_READ},
        {.addr=0x0142, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x9e5f, .a=0x1c, .x=0xc0, .y=0xee, .sp=0xec, .status=0x66};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0165, .value=0x3d}, {.addr=0x9e5f, .value=0x3e}, {.addr=0x9e60, .value=0x65},
    };
    const struct CPU_State final_cpu = {.pc=0x9e61, .a=0x1c, .x=0xc0, .y=0xee, .sp=0xec, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0165, .value=0x3d}, {.addr=0x9e5f, .value=0x3e}, {.addr=0x9e60, .value=0x65},
    };
    const struct BusEvent events[] = {
        {.addr=0x9e5f, .value=0x3e, .type=IO_READ},
        {.addr=0x9e60, .value=0x65, .type=IO_READ},
        {.addr=0x0165, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02AD) {
    const struct CPU_State initial_cpu = {.pc=0x622d, .a=0xfa, .x=0xa2, .y=0x24, .sp=0xa3, .status=0xaf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0144, .value=0xd9}, {.addr=0x622d, .value=0x3e}, {.addr=0x622e, .value=0x44},
    };
    const struct CPU_State final_cpu = {.pc=0x622f, .a=0xfa, .x=0xa2, .y=0x24, .sp=0xa3, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0144, .value=0xd9}, {.addr=0x622d, .value=0x3e}, {.addr=0x622e, .value=0x44},
    };
    const struct BusEvent events[] = {
        {.addr=0x622d, .value=0x3e, .type=IO_READ},
        {.addr=0x622e, .value=0x44, .type=IO_READ},
        {.addr=0x0144, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02AE) {
    const struct CPU_State initial_cpu = {.pc=0x0985, .a=0x66, .x=0xf2, .y=0xe3, .sp=0x9c, .status=0xb8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bf, .value=0x48}, {.addr=0x0985, .value=0x3e}, {.addr=0x0986, .value=0xbf},
    };
    const struct CPU_State final_cpu = {.pc=0x0987, .a=0x66, .x=0xf2, .y=0xe3, .sp=0x9c, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bf, .value=0x48}, {.addr=0x0985, .value=0x3e}, {.addr=0x0986, .value=0xbf},
    };
    const struct BusEvent events[] = {
        {.addr=0x0985, .value=0x3e, .type=IO_READ},
        {.addr=0x0986, .value=0xbf, .type=IO_READ},
        {.addr=0x01bf, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x0a46, .a=0x6f, .x=0x08, .y=0x07, .sp=0xd8, .status=0x85};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002b, .value=0x54}, {.addr=0x0a46, .value=0x3e}, {.addr=0x0a47, .value=0x2b},
    };
    const struct CPU_State final_cpu = {.pc=0x0a48, .a=0x6f, .x=0x08, .y=0x07, .sp=0xd8, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x002b, .value=0x54}, {.addr=0x0a46, .value=0x3e}, {.addr=0x0a47, .value=0x2b},
    };
    const struct BusEvent events[] = {
        {.addr=0x0a46, .value=0x3e, .type=IO_READ},
        {.addr=0x0a47, .value=0x2b, .type=IO_READ},
        {.addr=0x002b, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02B0) {
    const struct CPU_State initial_cpu = {.pc=0xe216, .a=0x93, .x=0x96, .y=0x11, .sp=0xa4, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015e, .value=0x46}, {.addr=0xe216, .value=0x3e}, {.addr=0xe217, .value=0x5e},
    };
    const struct CPU_State final_cpu = {.pc=0xe218, .a=0x93, .x=0x96, .y=0x11, .sp=0xa4, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x015e, .value=0x46}, {.addr=0xe216, .value=0x3e}, {.addr=0xe217, .value=0x5e},
    };
    const struct BusEvent events[] = {
        {.addr=0xe216, .value=0x3e, .type=IO_READ},
        {.addr=0xe217, .value=0x5e, .type=IO_READ},
        {.addr=0x015e, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02B1) {
    const struct CPU_State initial_cpu = {.pc=0xa8ad, .a=0xfd, .x=0x87, .y=0x63, .sp=0x4f, .status=0x9b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000f, .value=0xc5}, {.addr=0xa8ad, .value=0x3e}, {.addr=0xa8ae, .value=0x0f},
    };
    const struct CPU_State final_cpu = {.pc=0xa8af, .a=0xfd, .x=0x87, .y=0x63, .sp=0x4f, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x000f, .value=0xc5}, {.addr=0xa8ad, .value=0x3e}, {.addr=0xa8ae, .value=0x0f},
    };
    const struct BusEvent events[] = {
        {.addr=0xa8ad, .value=0x3e, .type=IO_READ},
        {.addr=0xa8ae, .value=0x0f, .type=IO_READ},
        {.addr=0x000f, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02B2) {
    const struct CPU_State initial_cpu = {.pc=0x4c9e, .a=0xb4, .x=0x0c, .y=0xfd, .sp=0xd1, .status=0xa0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0105, .value=0xe9}, {.addr=0x4c9e, .value=0x3e}, {.addr=0x4c9f, .value=0x05},
    };
    const struct CPU_State final_cpu = {.pc=0x4ca0, .a=0xb4, .x=0x0c, .y=0xfd, .sp=0xd1, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x0105, .value=0xe9}, {.addr=0x4c9e, .value=0x3e}, {.addr=0x4c9f, .value=0x05},
    };
    const struct BusEvent events[] = {
        {.addr=0x4c9e, .value=0x3e, .type=IO_READ},
        {.addr=0x4c9f, .value=0x05, .type=IO_READ},
        {.addr=0x0105, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02B3) {
    const struct CPU_State initial_cpu = {.pc=0xeefc, .a=0x16, .x=0xf4, .y=0xfe, .sp=0x11, .status=0x60};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e3, .value=0x4f}, {.addr=0xeefc, .value=0x3e}, {.addr=0xeefd, .value=0xe3},
    };
    const struct CPU_State final_cpu = {.pc=0xeefe, .a=0x16, .x=0xf4, .y=0xfe, .sp=0x11, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e3, .value=0x4f}, {.addr=0xeefc, .value=0x3e}, {.addr=0xeefd, .value=0xe3},
    };
    const struct BusEvent events[] = {
        {.addr=0xeefc, .value=0x3e, .type=IO_READ},
        {.addr=0xeefd, .value=0xe3, .type=IO_READ},
        {.addr=0x01e3, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02B4) {
    const struct CPU_State initial_cpu = {.pc=0x7dd1, .a=0x40, .x=0xc1, .y=0x73, .sp=0x27, .status=0xa6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ce, .value=0xed}, {.addr=0x7dd1, .value=0x3e}, {.addr=0x7dd2, .value=0xce},
    };
    const struct CPU_State final_cpu = {.pc=0x7dd3, .a=0x40, .x=0xc1, .y=0x73, .sp=0x27, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ce, .value=0xed}, {.addr=0x7dd1, .value=0x3e}, {.addr=0x7dd2, .value=0xce},
    };
    const struct BusEvent events[] = {
        {.addr=0x7dd1, .value=0x3e, .type=IO_READ},
        {.addr=0x7dd2, .value=0xce, .type=IO_READ},
        {.addr=0x01ce, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02B5) {
    const struct CPU_State initial_cpu = {.pc=0xafdd, .a=0x13, .x=0x88, .y=0x50, .sp=0x0d, .status=0x41};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c5, .value=0x98}, {.addr=0xafdd, .value=0x3e}, {.addr=0xafde, .value=0xc5},
    };
    const struct CPU_State final_cpu = {.pc=0xafdf, .a=0x13, .x=0x88, .y=0x50, .sp=0x0d, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c5, .value=0x98}, {.addr=0xafdd, .value=0x3e}, {.addr=0xafde, .value=0xc5},
    };
    const struct BusEvent events[] = {
        {.addr=0xafdd, .value=0x3e, .type=IO_READ},
        {.addr=0xafde, .value=0xc5, .type=IO_READ},
        {.addr=0x00c5, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02B6) {
    const struct CPU_State initial_cpu = {.pc=0x9655, .a=0x36, .x=0x66, .y=0x23, .sp=0xf0, .status=0xb6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0192, .value=0x16}, {.addr=0x9655, .value=0x3e}, {.addr=0x9656, .value=0x92},
    };
    const struct CPU_State final_cpu = {.pc=0x9657, .a=0x36, .x=0x66, .y=0x23, .sp=0xf0, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x0192, .value=0x16}, {.addr=0x9655, .value=0x3e}, {.addr=0x9656, .value=0x92},
    };
    const struct BusEvent events[] = {
        {.addr=0x9655, .value=0x3e, .type=IO_READ},
        {.addr=0x9656, .value=0x92, .type=IO_READ},
        {.addr=0x0192, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02B7) {
    const struct CPU_State initial_cpu = {.pc=0xdc88, .a=0xb2, .x=0x31, .y=0x32, .sp=0xd1, .status=0xfd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ef, .value=0x01}, {.addr=0xdc88, .value=0x3e}, {.addr=0xdc89, .value=0xef},
    };
    const struct CPU_State final_cpu = {.pc=0xdc8a, .a=0xb2, .x=0x31, .y=0x32, .sp=0xd1, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ef, .value=0x01}, {.addr=0xdc88, .value=0x3e}, {.addr=0xdc89, .value=0xef},
    };
    const struct BusEvent events[] = {
        {.addr=0xdc88, .value=0x3e, .type=IO_READ},
        {.addr=0xdc89, .value=0xef, .type=IO_READ},
        {.addr=0x01ef, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02B8) {
    const struct CPU_State initial_cpu = {.pc=0x37c8, .a=0x11, .x=0xda, .y=0x7b, .sp=0x93, .status=0x96};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0014, .value=0xa9}, {.addr=0x37c8, .value=0x3e}, {.addr=0x37c9, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0x37ca, .a=0x11, .x=0xda, .y=0x7b, .sp=0x93, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x0014, .value=0xa9}, {.addr=0x37c8, .value=0x3e}, {.addr=0x37c9, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0x37c8, .value=0x3e, .type=IO_READ},
        {.addr=0x37c9, .value=0x14, .type=IO_READ},
        {.addr=0x0014, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02B9) {
    const struct CPU_State initial_cpu = {.pc=0x2242, .a=0xa5, .x=0xf4, .y=0xa6, .sp=0x43, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004f, .value=0xe8}, {.addr=0x2242, .value=0x3e}, {.addr=0x2243, .value=0x4f},
    };
    const struct CPU_State final_cpu = {.pc=0x2244, .a=0xa5, .x=0xf4, .y=0xa6, .sp=0x43, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x004f, .value=0xe8}, {.addr=0x2242, .value=0x3e}, {.addr=0x2243, .value=0x4f},
    };
    const struct BusEvent events[] = {
        {.addr=0x2242, .value=0x3e, .type=IO_READ},
        {.addr=0x2243, .value=0x4f, .type=IO_READ},
        {.addr=0x004f, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02BA) {
    const struct CPU_State initial_cpu = {.pc=0xc820, .a=0xbf, .x=0x32, .y=0x17, .sp=0x60, .status=0xb8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0128, .value=0x55}, {.addr=0xc820, .value=0x3e}, {.addr=0xc821, .value=0x28},
    };
    const struct CPU_State final_cpu = {.pc=0xc822, .a=0xbf, .x=0x32, .y=0x17, .sp=0x60, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0128, .value=0x55}, {.addr=0xc820, .value=0x3e}, {.addr=0xc821, .value=0x28},
    };
    const struct BusEvent events[] = {
        {.addr=0xc820, .value=0x3e, .type=IO_READ},
        {.addr=0xc821, .value=0x28, .type=IO_READ},
        {.addr=0x0128, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02BB) {
    const struct CPU_State initial_cpu = {.pc=0x28d9, .a=0xb8, .x=0xa8, .y=0xfa, .sp=0x47, .status=0x82};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000e, .value=0x69}, {.addr=0x28d9, .value=0x3e}, {.addr=0x28da, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0x28db, .a=0xb8, .x=0xa8, .y=0xfa, .sp=0x47, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x000e, .value=0x69}, {.addr=0x28d9, .value=0x3e}, {.addr=0x28da, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0x28d9, .value=0x3e, .type=IO_READ},
        {.addr=0x28da, .value=0x0e, .type=IO_READ},
        {.addr=0x000e, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02BC) {
    const struct CPU_State initial_cpu = {.pc=0x0863, .a=0xde, .x=0x79, .y=0xf9, .sp=0x30, .status=0x21};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0154, .value=0x6b}, {.addr=0x0863, .value=0x3e}, {.addr=0x0864, .value=0x54},
    };
    const struct CPU_State final_cpu = {.pc=0x0865, .a=0xde, .x=0x79, .y=0xf9, .sp=0x30, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x0154, .value=0x6b}, {.addr=0x0863, .value=0x3e}, {.addr=0x0864, .value=0x54},
    };
    const struct BusEvent events[] = {
        {.addr=0x0863, .value=0x3e, .type=IO_READ},
        {.addr=0x0864, .value=0x54, .type=IO_READ},
        {.addr=0x0154, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02BD) {
    const struct CPU_State initial_cpu = {.pc=0x1d94, .a=0x4f, .x=0xc5, .y=0xde, .sp=0x25, .status=0x79};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013b, .value=0xc4}, {.addr=0x1d94, .value=0x3e}, {.addr=0x1d95, .value=0x3b},
    };
    const struct CPU_State final_cpu = {.pc=0x1d96, .a=0x4f, .x=0xc5, .y=0xde, .sp=0x25, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x013b, .value=0xc4}, {.addr=0x1d94, .value=0x3e}, {.addr=0x1d95, .value=0x3b},
    };
    const struct BusEvent events[] = {
        {.addr=0x1d94, .value=0x3e, .type=IO_READ},
        {.addr=0x1d95, .value=0x3b, .type=IO_READ},
        {.addr=0x013b, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02BE) {
    const struct CPU_State initial_cpu = {.pc=0x10d9, .a=0x74, .x=0xe8, .y=0xc9, .sp=0x13, .status=0x8c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c2, .value=0x15}, {.addr=0x10d9, .value=0x3e}, {.addr=0x10da, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0x10db, .a=0x74, .x=0xe8, .y=0xc9, .sp=0x13, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c2, .value=0x15}, {.addr=0x10d9, .value=0x3e}, {.addr=0x10da, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0x10d9, .value=0x3e, .type=IO_READ},
        {.addr=0x10da, .value=0xc2, .type=IO_READ},
        {.addr=0x00c2, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x1e45, .a=0xb8, .x=0x13, .y=0xbf, .sp=0x36, .status=0x94};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0004, .value=0xde}, {.addr=0x1e45, .value=0x3e}, {.addr=0x1e46, .value=0x04},
    };
    const struct CPU_State final_cpu = {.pc=0x1e47, .a=0xb8, .x=0x13, .y=0xbf, .sp=0x36, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x0004, .value=0xde}, {.addr=0x1e45, .value=0x3e}, {.addr=0x1e46, .value=0x04},
    };
    const struct BusEvent events[] = {
        {.addr=0x1e45, .value=0x3e, .type=IO_READ},
        {.addr=0x1e46, .value=0x04, .type=IO_READ},
        {.addr=0x0004, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02C0) {
    const struct CPU_State initial_cpu = {.pc=0xe507, .a=0xb4, .x=0x84, .y=0xd1, .sp=0xec, .status=0x43};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007d, .value=0x0b}, {.addr=0xe507, .value=0x3e}, {.addr=0xe508, .value=0x7d},
    };
    const struct CPU_State final_cpu = {.pc=0xe509, .a=0xb4, .x=0x84, .y=0xd1, .sp=0xec, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x007d, .value=0x0b}, {.addr=0xe507, .value=0x3e}, {.addr=0xe508, .value=0x7d},
    };
    const struct BusEvent events[] = {
        {.addr=0xe507, .value=0x3e, .type=IO_READ},
        {.addr=0xe508, .value=0x7d, .type=IO_READ},
        {.addr=0x007d, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x5430, .a=0xe8, .x=0x4e, .y=0x29, .sp=0xe9, .status=0xb5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015d, .value=0xb7}, {.addr=0x5430, .value=0x3e}, {.addr=0x5431, .value=0x5d},
    };
    const struct CPU_State final_cpu = {.pc=0x5432, .a=0xe8, .x=0x4e, .y=0x29, .sp=0xe9, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x015d, .value=0xb7}, {.addr=0x5430, .value=0x3e}, {.addr=0x5431, .value=0x5d},
    };
    const struct BusEvent events[] = {
        {.addr=0x5430, .value=0x3e, .type=IO_READ},
        {.addr=0x5431, .value=0x5d, .type=IO_READ},
        {.addr=0x015d, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02C2) {
    const struct CPU_State initial_cpu = {.pc=0x012f, .a=0xfe, .x=0xa7, .y=0x9c, .sp=0x09, .status=0x8d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009b, .value=0x51}, {.addr=0x012f, .value=0x3e}, {.addr=0x0130, .value=0x9b},
    };
    const struct CPU_State final_cpu = {.pc=0x0131, .a=0xfe, .x=0xa7, .y=0x9c, .sp=0x09, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x009b, .value=0x51}, {.addr=0x012f, .value=0x3e}, {.addr=0x0130, .value=0x9b},
    };
    const struct BusEvent events[] = {
        {.addr=0x012f, .value=0x3e, .type=IO_READ},
        {.addr=0x0130, .value=0x9b, .type=IO_READ},
        {.addr=0x009b, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02C3) {
    const struct CPU_State initial_cpu = {.pc=0x9bd1, .a=0xca, .x=0xd9, .y=0x87, .sp=0xa2, .status=0x18};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003a, .value=0x4b}, {.addr=0x9bd1, .value=0x3e}, {.addr=0x9bd2, .value=0x3a},
    };
    const struct CPU_State final_cpu = {.pc=0x9bd3, .a=0xca, .x=0xd9, .y=0x87, .sp=0xa2, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x003a, .value=0x4b}, {.addr=0x9bd1, .value=0x3e}, {.addr=0x9bd2, .value=0x3a},
    };
    const struct BusEvent events[] = {
        {.addr=0x9bd1, .value=0x3e, .type=IO_READ},
        {.addr=0x9bd2, .value=0x3a, .type=IO_READ},
        {.addr=0x003a, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02C4) {
    const struct CPU_State initial_cpu = {.pc=0x076d, .a=0x3e, .x=0xbb, .y=0xf2, .sp=0x27, .status=0x29};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0122, .value=0x7d}, {.addr=0x076d, .value=0x3e}, {.addr=0x076e, .value=0x22},
    };
    const struct CPU_State final_cpu = {.pc=0x076f, .a=0x3e, .x=0xbb, .y=0xf2, .sp=0x27, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x0122, .value=0x7d}, {.addr=0x076d, .value=0x3e}, {.addr=0x076e, .value=0x22},
    };
    const struct BusEvent events[] = {
        {.addr=0x076d, .value=0x3e, .type=IO_READ},
        {.addr=0x076e, .value=0x22, .type=IO_READ},
        {.addr=0x0122, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x9c10, .a=0x9b, .x=0x73, .y=0x30, .sp=0x2c, .status=0x33};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0121, .value=0x21}, {.addr=0x9c10, .value=0x3e}, {.addr=0x9c11, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0x9c12, .a=0x9b, .x=0x73, .y=0x30, .sp=0x2c, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0121, .value=0x21}, {.addr=0x9c10, .value=0x3e}, {.addr=0x9c11, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0x9c10, .value=0x3e, .type=IO_READ},
        {.addr=0x9c11, .value=0x21, .type=IO_READ},
        {.addr=0x0121, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02C6) {
    const struct CPU_State initial_cpu = {.pc=0x910a, .a=0xb1, .x=0x88, .y=0x96, .sp=0x13, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0173, .value=0xfa}, {.addr=0x910a, .value=0x3e}, {.addr=0x910b, .value=0x73},
    };
    const struct CPU_State final_cpu = {.pc=0x910c, .a=0xb1, .x=0x88, .y=0x96, .sp=0x13, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0173, .value=0xfa}, {.addr=0x910a, .value=0x3e}, {.addr=0x910b, .value=0x73},
    };
    const struct BusEvent events[] = {
        {.addr=0x910a, .value=0x3e, .type=IO_READ},
        {.addr=0x910b, .value=0x73, .type=IO_READ},
        {.addr=0x0173, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02C7) {
    const struct CPU_State initial_cpu = {.pc=0x2916, .a=0x1c, .x=0xdb, .y=0x05, .sp=0x6d, .status=0x30};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e8, .value=0x18}, {.addr=0x2916, .value=0x3e}, {.addr=0x2917, .value=0xe8},
    };
    const struct CPU_State final_cpu = {.pc=0x2918, .a=0x1c, .x=0xdb, .y=0x05, .sp=0x6d, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e8, .value=0x18}, {.addr=0x2916, .value=0x3e}, {.addr=0x2917, .value=0xe8},
    };
    const struct BusEvent events[] = {
        {.addr=0x2916, .value=0x3e, .type=IO_READ},
        {.addr=0x2917, .value=0xe8, .type=IO_READ},
        {.addr=0x01e8, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02C8) {
    const struct CPU_State initial_cpu = {.pc=0x2a1b, .a=0x36, .x=0xfa, .y=0x0c, .sp=0xc0, .status=0x71};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0154, .value=0x54}, {.addr=0x2a1b, .value=0x3e}, {.addr=0x2a1c, .value=0x54},
    };
    const struct CPU_State final_cpu = {.pc=0x2a1d, .a=0x36, .x=0xfa, .y=0x0c, .sp=0xc0, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0154, .value=0x54}, {.addr=0x2a1b, .value=0x3e}, {.addr=0x2a1c, .value=0x54},
    };
    const struct BusEvent events[] = {
        {.addr=0x2a1b, .value=0x3e, .type=IO_READ},
        {.addr=0x2a1c, .value=0x54, .type=IO_READ},
        {.addr=0x0154, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02C9) {
    const struct CPU_State initial_cpu = {.pc=0x94ca, .a=0xb5, .x=0x7f, .y=0x69, .sp=0xa6, .status=0xdc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002f, .value=0xdd}, {.addr=0x94ca, .value=0x3e}, {.addr=0x94cb, .value=0x2f},
    };
    const struct CPU_State final_cpu = {.pc=0x94cc, .a=0xb5, .x=0x7f, .y=0x69, .sp=0xa6, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x002f, .value=0xdd}, {.addr=0x94ca, .value=0x3e}, {.addr=0x94cb, .value=0x2f},
    };
    const struct BusEvent events[] = {
        {.addr=0x94ca, .value=0x3e, .type=IO_READ},
        {.addr=0x94cb, .value=0x2f, .type=IO_READ},
        {.addr=0x002f, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02CA) {
    const struct CPU_State initial_cpu = {.pc=0xda51, .a=0xf7, .x=0xa3, .y=0xb4, .sp=0xc6, .status=0x5e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d4, .value=0x20}, {.addr=0xda51, .value=0x3e}, {.addr=0xda52, .value=0xd4},
    };
    const struct CPU_State final_cpu = {.pc=0xda53, .a=0xf7, .x=0xa3, .y=0xb4, .sp=0xc6, .status=0xdd};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d4, .value=0x20}, {.addr=0xda51, .value=0x3e}, {.addr=0xda52, .value=0xd4},
    };
    const struct BusEvent events[] = {
        {.addr=0xda51, .value=0x3e, .type=IO_READ},
        {.addr=0xda52, .value=0xd4, .type=IO_READ},
        {.addr=0x00d4, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02CB) {
    const struct CPU_State initial_cpu = {.pc=0x4f3e, .a=0x3c, .x=0xc4, .y=0xe2, .sp=0x00, .status=0x4a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0062, .value=0x2a}, {.addr=0x4f3e, .value=0x3e}, {.addr=0x4f3f, .value=0x62},
    };
    const struct CPU_State final_cpu = {.pc=0x4f40, .a=0x3c, .x=0xc4, .y=0xe2, .sp=0x00, .status=0xc9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0062, .value=0x2a}, {.addr=0x4f3e, .value=0x3e}, {.addr=0x4f3f, .value=0x62},
    };
    const struct BusEvent events[] = {
        {.addr=0x4f3e, .value=0x3e, .type=IO_READ},
        {.addr=0x4f3f, .value=0x62, .type=IO_READ},
        {.addr=0x0062, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02CC) {
    const struct CPU_State initial_cpu = {.pc=0xb71b, .a=0xaa, .x=0x1d, .y=0xb0, .sp=0xdb, .status=0xef};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0189, .value=0x97}, {.addr=0xb71b, .value=0x3e}, {.addr=0xb71c, .value=0x89},
    };
    const struct CPU_State final_cpu = {.pc=0xb71d, .a=0xaa, .x=0x1d, .y=0xb0, .sp=0xdb, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x0189, .value=0x97}, {.addr=0xb71b, .value=0x3e}, {.addr=0xb71c, .value=0x89},
    };
    const struct BusEvent events[] = {
        {.addr=0xb71b, .value=0x3e, .type=IO_READ},
        {.addr=0xb71c, .value=0x89, .type=IO_READ},
        {.addr=0x0189, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x7365, .a=0x7b, .x=0x62, .y=0xa3, .sp=0x80, .status=0x09};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0025, .value=0x82}, {.addr=0x7365, .value=0x3e}, {.addr=0x7366, .value=0x25},
    };
    const struct CPU_State final_cpu = {.pc=0x7367, .a=0x7b, .x=0x62, .y=0xa3, .sp=0x80, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x0025, .value=0x82}, {.addr=0x7365, .value=0x3e}, {.addr=0x7366, .value=0x25},
    };
    const struct BusEvent events[] = {
        {.addr=0x7365, .value=0x3e, .type=IO_READ},
        {.addr=0x7366, .value=0x25, .type=IO_READ},
        {.addr=0x0025, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02CE) {
    const struct CPU_State initial_cpu = {.pc=0xaa34, .a=0xf9, .x=0xef, .y=0xbf, .sp=0xcf, .status=0x51};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008f, .value=0xbd}, {.addr=0xaa34, .value=0x3e}, {.addr=0xaa35, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0xaa36, .a=0xf9, .x=0xef, .y=0xbf, .sp=0xcf, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x008f, .value=0xbd}, {.addr=0xaa34, .value=0x3e}, {.addr=0xaa35, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0xaa34, .value=0x3e, .type=IO_READ},
        {.addr=0xaa35, .value=0x8f, .type=IO_READ},
        {.addr=0x008f, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02CF) {
    const struct CPU_State initial_cpu = {.pc=0x9b1e, .a=0xf2, .x=0x1c, .y=0x98, .sp=0xad, .status=0xfd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0183, .value=0xc1}, {.addr=0x9b1e, .value=0x3e}, {.addr=0x9b1f, .value=0x83},
    };
    const struct CPU_State final_cpu = {.pc=0x9b20, .a=0xf2, .x=0x1c, .y=0x98, .sp=0xad, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0183, .value=0xc1}, {.addr=0x9b1e, .value=0x3e}, {.addr=0x9b1f, .value=0x83},
    };
    const struct BusEvent events[] = {
        {.addr=0x9b1e, .value=0x3e, .type=IO_READ},
        {.addr=0x9b1f, .value=0x83, .type=IO_READ},
        {.addr=0x0183, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02D0) {
    const struct CPU_State initial_cpu = {.pc=0x139d, .a=0xb8, .x=0xaf, .y=0xe6, .sp=0x28, .status=0x1d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a0, .value=0x64}, {.addr=0x139d, .value=0x3e}, {.addr=0x139e, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0x139f, .a=0xb8, .x=0xaf, .y=0xe6, .sp=0x28, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a0, .value=0x64}, {.addr=0x139d, .value=0x3e}, {.addr=0x139e, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0x139d, .value=0x3e, .type=IO_READ},
        {.addr=0x139e, .value=0xa0, .type=IO_READ},
        {.addr=0x00a0, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02D1) {
    const struct CPU_State initial_cpu = {.pc=0xc9ab, .a=0x2f, .x=0xe4, .y=0x61, .sp=0x77, .status=0x7a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013f, .value=0x24}, {.addr=0xc9ab, .value=0x3e}, {.addr=0xc9ac, .value=0x3f},
    };
    const struct CPU_State final_cpu = {.pc=0xc9ad, .a=0x2f, .x=0xe4, .y=0x61, .sp=0x77, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x013f, .value=0x24}, {.addr=0xc9ab, .value=0x3e}, {.addr=0xc9ac, .value=0x3f},
    };
    const struct BusEvent events[] = {
        {.addr=0xc9ab, .value=0x3e, .type=IO_READ},
        {.addr=0xc9ac, .value=0x3f, .type=IO_READ},
        {.addr=0x013f, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02D2) {
    const struct CPU_State initial_cpu = {.pc=0xa6b0, .a=0x73, .x=0x9a, .y=0xe2, .sp=0xd2, .status=0x3a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0173, .value=0x10}, {.addr=0xa6b0, .value=0x3e}, {.addr=0xa6b1, .value=0x73},
    };
    const struct CPU_State final_cpu = {.pc=0xa6b2, .a=0x73, .x=0x9a, .y=0xe2, .sp=0xd2, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0173, .value=0x10}, {.addr=0xa6b0, .value=0x3e}, {.addr=0xa6b1, .value=0x73},
    };
    const struct BusEvent events[] = {
        {.addr=0xa6b0, .value=0x3e, .type=IO_READ},
        {.addr=0xa6b1, .value=0x73, .type=IO_READ},
        {.addr=0x0173, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x4a28, .a=0x97, .x=0x16, .y=0x5d, .sp=0x73, .status=0xf7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ed, .value=0x65}, {.addr=0x4a28, .value=0x3e}, {.addr=0x4a29, .value=0xed},
    };
    const struct CPU_State final_cpu = {.pc=0x4a2a, .a=0x97, .x=0x16, .y=0x5d, .sp=0x73, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ed, .value=0x65}, {.addr=0x4a28, .value=0x3e}, {.addr=0x4a29, .value=0xed},
    };
    const struct BusEvent events[] = {
        {.addr=0x4a28, .value=0x3e, .type=IO_READ},
        {.addr=0x4a29, .value=0xed, .type=IO_READ},
        {.addr=0x01ed, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x5e60, .a=0x0a, .x=0x4f, .y=0xb4, .sp=0xbe, .status=0x0b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0059, .value=0x01}, {.addr=0x5e60, .value=0x3e}, {.addr=0x5e61, .value=0x59},
    };
    const struct CPU_State final_cpu = {.pc=0x5e62, .a=0x0a, .x=0x4f, .y=0xb4, .sp=0xbe, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x0059, .value=0x01}, {.addr=0x5e60, .value=0x3e}, {.addr=0x5e61, .value=0x59},
    };
    const struct BusEvent events[] = {
        {.addr=0x5e60, .value=0x3e, .type=IO_READ},
        {.addr=0x5e61, .value=0x59, .type=IO_READ},
        {.addr=0x0059, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x7c2a, .a=0xcc, .x=0x38, .y=0x63, .sp=0xd3, .status=0x6f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ba, .value=0x54}, {.addr=0x7c2a, .value=0x3e}, {.addr=0x7c2b, .value=0xba},
    };
    const struct CPU_State final_cpu = {.pc=0x7c2c, .a=0xcc, .x=0x38, .y=0x63, .sp=0xd3, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ba, .value=0x54}, {.addr=0x7c2a, .value=0x3e}, {.addr=0x7c2b, .value=0xba},
    };
    const struct BusEvent events[] = {
        {.addr=0x7c2a, .value=0x3e, .type=IO_READ},
        {.addr=0x7c2b, .value=0xba, .type=IO_READ},
        {.addr=0x01ba, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02D6) {
    const struct CPU_State initial_cpu = {.pc=0xbc14, .a=0xe4, .x=0xf7, .y=0x14, .sp=0xe0, .status=0x88};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002a, .value=0x27}, {.addr=0xbc14, .value=0x3e}, {.addr=0xbc15, .value=0x2a},
    };
    const struct CPU_State final_cpu = {.pc=0xbc16, .a=0xe4, .x=0xf7, .y=0x14, .sp=0xe0, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x002a, .value=0x27}, {.addr=0xbc14, .value=0x3e}, {.addr=0xbc15, .value=0x2a},
    };
    const struct BusEvent events[] = {
        {.addr=0xbc14, .value=0x3e, .type=IO_READ},
        {.addr=0xbc15, .value=0x2a, .type=IO_READ},
        {.addr=0x002a, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x961b, .a=0x9c, .x=0x69, .y=0x87, .sp=0x6a, .status=0xf3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b0, .value=0x8c}, {.addr=0x961b, .value=0x3e}, {.addr=0x961c, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0x961d, .a=0x9c, .x=0x69, .y=0x87, .sp=0x6a, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b0, .value=0x8c}, {.addr=0x961b, .value=0x3e}, {.addr=0x961c, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0x961b, .value=0x3e, .type=IO_READ},
        {.addr=0x961c, .value=0xb0, .type=IO_READ},
        {.addr=0x01b0, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02D8) {
    const struct CPU_State initial_cpu = {.pc=0xffe2, .a=0xa9, .x=0xc7, .y=0xb1, .sp=0xfd, .status=0x0f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000a, .value=0x11}, {.addr=0xffe2, .value=0x3e}, {.addr=0xffe3, .value=0x0a},
    };
    const struct CPU_State final_cpu = {.pc=0xffe4, .a=0xa9, .x=0xc7, .y=0xb1, .sp=0xfd, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x000a, .value=0x11}, {.addr=0xffe2, .value=0x3e}, {.addr=0xffe3, .value=0x0a},
    };
    const struct BusEvent events[] = {
        {.addr=0xffe2, .value=0x3e, .type=IO_READ},
        {.addr=0xffe3, .value=0x0a, .type=IO_READ},
        {.addr=0x000a, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02D9) {
    const struct CPU_State initial_cpu = {.pc=0xf2a6, .a=0xde, .x=0x58, .y=0xf2, .sp=0x21, .status=0x13};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004f, .value=0x23}, {.addr=0xf2a6, .value=0x3e}, {.addr=0xf2a7, .value=0x4f},
    };
    const struct CPU_State final_cpu = {.pc=0xf2a8, .a=0xde, .x=0x58, .y=0xf2, .sp=0x21, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x004f, .value=0x23}, {.addr=0xf2a6, .value=0x3e}, {.addr=0xf2a7, .value=0x4f},
    };
    const struct BusEvent events[] = {
        {.addr=0xf2a6, .value=0x3e, .type=IO_READ},
        {.addr=0xf2a7, .value=0x4f, .type=IO_READ},
        {.addr=0x004f, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02DA) {
    const struct CPU_State initial_cpu = {.pc=0x9461, .a=0x9d, .x=0x6e, .y=0xeb, .sp=0xa5, .status=0x68};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01dd, .value=0x69}, {.addr=0x9461, .value=0x3e}, {.addr=0x9462, .value=0xdd},
    };
    const struct CPU_State final_cpu = {.pc=0x9463, .a=0x9d, .x=0x6e, .y=0xeb, .sp=0xa5, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x01dd, .value=0x69}, {.addr=0x9461, .value=0x3e}, {.addr=0x9462, .value=0xdd},
    };
    const struct BusEvent events[] = {
        {.addr=0x9461, .value=0x3e, .type=IO_READ},
        {.addr=0x9462, .value=0xdd, .type=IO_READ},
        {.addr=0x01dd, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02DB) {
    const struct CPU_State initial_cpu = {.pc=0x6294, .a=0x4b, .x=0x99, .y=0xb5, .sp=0x40, .status=0x22};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c6, .value=0x9b}, {.addr=0x6294, .value=0x3e}, {.addr=0x6295, .value=0xc6},
    };
    const struct CPU_State final_cpu = {.pc=0x6296, .a=0x4b, .x=0x99, .y=0xb5, .sp=0x40, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c6, .value=0x9b}, {.addr=0x6294, .value=0x3e}, {.addr=0x6295, .value=0xc6},
    };
    const struct BusEvent events[] = {
        {.addr=0x6294, .value=0x3e, .type=IO_READ},
        {.addr=0x6295, .value=0xc6, .type=IO_READ},
        {.addr=0x01c6, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x9bc3, .a=0x53, .x=0xff, .y=0x6a, .sp=0x69, .status=0x64};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f7, .value=0xfb}, {.addr=0x9bc3, .value=0x3e}, {.addr=0x9bc4, .value=0xf7},
    };
    const struct CPU_State final_cpu = {.pc=0x9bc5, .a=0x53, .x=0xff, .y=0x6a, .sp=0x69, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f7, .value=0xfb}, {.addr=0x9bc3, .value=0x3e}, {.addr=0x9bc4, .value=0xf7},
    };
    const struct BusEvent events[] = {
        {.addr=0x9bc3, .value=0x3e, .type=IO_READ},
        {.addr=0x9bc4, .value=0xf7, .type=IO_READ},
        {.addr=0x01f7, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02DD) {
    const struct CPU_State initial_cpu = {.pc=0xebf2, .a=0x53, .x=0x66, .y=0x04, .sp=0x9e, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016a, .value=0xdc}, {.addr=0xebf2, .value=0x3e}, {.addr=0xebf3, .value=0x6a},
    };
    const struct CPU_State final_cpu = {.pc=0xebf4, .a=0x53, .x=0x66, .y=0x04, .sp=0x9e, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x016a, .value=0xdc}, {.addr=0xebf2, .value=0x3e}, {.addr=0xebf3, .value=0x6a},
    };
    const struct BusEvent events[] = {
        {.addr=0xebf2, .value=0x3e, .type=IO_READ},
        {.addr=0xebf3, .value=0x6a, .type=IO_READ},
        {.addr=0x016a, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02DE) {
    const struct CPU_State initial_cpu = {.pc=0x585f, .a=0x6d, .x=0xa4, .y=0x9b, .sp=0xec, .status=0x6c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0172, .value=0x10}, {.addr=0x585f, .value=0x3e}, {.addr=0x5860, .value=0x72},
    };
    const struct CPU_State final_cpu = {.pc=0x5861, .a=0x6d, .x=0xa4, .y=0x9b, .sp=0xec, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x0172, .value=0x10}, {.addr=0x585f, .value=0x3e}, {.addr=0x5860, .value=0x72},
    };
    const struct BusEvent events[] = {
        {.addr=0x585f, .value=0x3e, .type=IO_READ},
        {.addr=0x5860, .value=0x72, .type=IO_READ},
        {.addr=0x0172, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02DF) {
    const struct CPU_State initial_cpu = {.pc=0x9345, .a=0x00, .x=0x6d, .y=0x32, .sp=0xdf, .status=0x90};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002f, .value=0x7b}, {.addr=0x9345, .value=0x3e}, {.addr=0x9346, .value=0x2f},
    };
    const struct CPU_State final_cpu = {.pc=0x9347, .a=0x00, .x=0x6d, .y=0x32, .sp=0xdf, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x002f, .value=0x7b}, {.addr=0x9345, .value=0x3e}, {.addr=0x9346, .value=0x2f},
    };
    const struct BusEvent events[] = {
        {.addr=0x9345, .value=0x3e, .type=IO_READ},
        {.addr=0x9346, .value=0x2f, .type=IO_READ},
        {.addr=0x002f, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02E0) {
    const struct CPU_State initial_cpu = {.pc=0x0fe3, .a=0xeb, .x=0xc9, .y=0x16, .sp=0x6b, .status=0x91};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0026, .value=0x6f}, {.addr=0x0fe3, .value=0x3e}, {.addr=0x0fe4, .value=0x26},
    };
    const struct CPU_State final_cpu = {.pc=0x0fe5, .a=0xeb, .x=0xc9, .y=0x16, .sp=0x6b, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x0026, .value=0x6f}, {.addr=0x0fe3, .value=0x3e}, {.addr=0x0fe4, .value=0x26},
    };
    const struct BusEvent events[] = {
        {.addr=0x0fe3, .value=0x3e, .type=IO_READ},
        {.addr=0x0fe4, .value=0x26, .type=IO_READ},
        {.addr=0x0026, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02E1) {
    const struct CPU_State initial_cpu = {.pc=0x9640, .a=0x4d, .x=0x8b, .y=0x11, .sp=0x49, .status=0x7f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ed, .value=0x38}, {.addr=0x9640, .value=0x3e}, {.addr=0x9641, .value=0xed},
    };
    const struct CPU_State final_cpu = {.pc=0x9642, .a=0x4d, .x=0x8b, .y=0x11, .sp=0x49, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ed, .value=0x38}, {.addr=0x9640, .value=0x3e}, {.addr=0x9641, .value=0xed},
    };
    const struct BusEvent events[] = {
        {.addr=0x9640, .value=0x3e, .type=IO_READ},
        {.addr=0x9641, .value=0xed, .type=IO_READ},
        {.addr=0x01ed, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02E2) {
    const struct CPU_State initial_cpu = {.pc=0xfe87, .a=0xbb, .x=0xa8, .y=0x6f, .sp=0xe1, .status=0xf3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e4, .value=0xb8}, {.addr=0xfe87, .value=0x3e}, {.addr=0xfe88, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0xfe89, .a=0xbb, .x=0xa8, .y=0x6f, .sp=0xe1, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e4, .value=0xb8}, {.addr=0xfe87, .value=0x3e}, {.addr=0xfe88, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0xfe87, .value=0x3e, .type=IO_READ},
        {.addr=0xfe88, .value=0xe4, .type=IO_READ},
        {.addr=0x01e4, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02E3) {
    const struct CPU_State initial_cpu = {.pc=0x3112, .a=0x18, .x=0x68, .y=0x98, .sp=0xcf, .status=0x5a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0059, .value=0x09}, {.addr=0x3112, .value=0x3e}, {.addr=0x3113, .value=0x59},
    };
    const struct CPU_State final_cpu = {.pc=0x3114, .a=0x18, .x=0x68, .y=0x98, .sp=0xcf, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x0059, .value=0x09}, {.addr=0x3112, .value=0x3e}, {.addr=0x3113, .value=0x59},
    };
    const struct BusEvent events[] = {
        {.addr=0x3112, .value=0x3e, .type=IO_READ},
        {.addr=0x3113, .value=0x59, .type=IO_READ},
        {.addr=0x0059, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02E4) {
    const struct CPU_State initial_cpu = {.pc=0x43b4, .a=0x9b, .x=0x20, .y=0x64, .sp=0xa0, .status=0x87};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008c, .value=0xa8}, {.addr=0x43b4, .value=0x3e}, {.addr=0x43b5, .value=0x8c},
    };
    const struct CPU_State final_cpu = {.pc=0x43b6, .a=0x9b, .x=0x20, .y=0x64, .sp=0xa0, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x008c, .value=0xa8}, {.addr=0x43b4, .value=0x3e}, {.addr=0x43b5, .value=0x8c},
    };
    const struct BusEvent events[] = {
        {.addr=0x43b4, .value=0x3e, .type=IO_READ},
        {.addr=0x43b5, .value=0x8c, .type=IO_READ},
        {.addr=0x008c, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02E5) {
    const struct CPU_State initial_cpu = {.pc=0x4491, .a=0xca, .x=0x45, .y=0x6f, .sp=0xe2, .status=0xd6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ae, .value=0x14}, {.addr=0x4491, .value=0x3e}, {.addr=0x4492, .value=0xae},
    };
    const struct CPU_State final_cpu = {.pc=0x4493, .a=0xca, .x=0x45, .y=0x6f, .sp=0xe2, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ae, .value=0x14}, {.addr=0x4491, .value=0x3e}, {.addr=0x4492, .value=0xae},
    };
    const struct BusEvent events[] = {
        {.addr=0x4491, .value=0x3e, .type=IO_READ},
        {.addr=0x4492, .value=0xae, .type=IO_READ},
        {.addr=0x00ae, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02E6) {
    const struct CPU_State initial_cpu = {.pc=0xb00d, .a=0x40, .x=0x12, .y=0x94, .sp=0x20, .status=0xa4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ab, .value=0xb9}, {.addr=0xb00d, .value=0x3e}, {.addr=0xb00e, .value=0xab},
    };
    const struct CPU_State final_cpu = {.pc=0xb00f, .a=0x40, .x=0x12, .y=0x94, .sp=0x20, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ab, .value=0xb9}, {.addr=0xb00d, .value=0x3e}, {.addr=0xb00e, .value=0xab},
    };
    const struct BusEvent events[] = {
        {.addr=0xb00d, .value=0x3e, .type=IO_READ},
        {.addr=0xb00e, .value=0xab, .type=IO_READ},
        {.addr=0x01ab, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02E7) {
    const struct CPU_State initial_cpu = {.pc=0xbc50, .a=0x74, .x=0xa3, .y=0xac, .sp=0x6d, .status=0x7d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c9, .value=0x12}, {.addr=0xbc50, .value=0x3e}, {.addr=0xbc51, .value=0xc9},
    };
    const struct CPU_State final_cpu = {.pc=0xbc52, .a=0x74, .x=0xa3, .y=0xac, .sp=0x6d, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c9, .value=0x12}, {.addr=0xbc50, .value=0x3e}, {.addr=0xbc51, .value=0xc9},
    };
    const struct BusEvent events[] = {
        {.addr=0xbc50, .value=0x3e, .type=IO_READ},
        {.addr=0xbc51, .value=0xc9, .type=IO_READ},
        {.addr=0x01c9, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02E8) {
    const struct CPU_State initial_cpu = {.pc=0x8999, .a=0x74, .x=0xc5, .y=0x94, .sp=0xbe, .status=0x0b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d6, .value=0xbc}, {.addr=0x8999, .value=0x3e}, {.addr=0x899a, .value=0xd6},
    };
    const struct CPU_State final_cpu = {.pc=0x899b, .a=0x74, .x=0xc5, .y=0x94, .sp=0xbe, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d6, .value=0xbc}, {.addr=0x8999, .value=0x3e}, {.addr=0x899a, .value=0xd6},
    };
    const struct BusEvent events[] = {
        {.addr=0x8999, .value=0x3e, .type=IO_READ},
        {.addr=0x899a, .value=0xd6, .type=IO_READ},
        {.addr=0x00d6, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x529c, .a=0xad, .x=0xae, .y=0x7d, .sp=0x9c, .status=0xb0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d4, .value=0x8d}, {.addr=0x529c, .value=0x3e}, {.addr=0x529d, .value=0xd4},
    };
    const struct CPU_State final_cpu = {.pc=0x529e, .a=0xad, .x=0xae, .y=0x7d, .sp=0x9c, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d4, .value=0x8d}, {.addr=0x529c, .value=0x3e}, {.addr=0x529d, .value=0xd4},
    };
    const struct BusEvent events[] = {
        {.addr=0x529c, .value=0x3e, .type=IO_READ},
        {.addr=0x529d, .value=0xd4, .type=IO_READ},
        {.addr=0x01d4, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02EA) {
    const struct CPU_State initial_cpu = {.pc=0xd075, .a=0x6d, .x=0x89, .y=0x25, .sp=0x13, .status=0xd1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005d, .value=0x6d}, {.addr=0xd075, .value=0x3e}, {.addr=0xd076, .value=0x5d},
    };
    const struct CPU_State final_cpu = {.pc=0xd077, .a=0x6d, .x=0x89, .y=0x25, .sp=0x13, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x005d, .value=0x6d}, {.addr=0xd075, .value=0x3e}, {.addr=0xd076, .value=0x5d},
    };
    const struct BusEvent events[] = {
        {.addr=0xd075, .value=0x3e, .type=IO_READ},
        {.addr=0xd076, .value=0x5d, .type=IO_READ},
        {.addr=0x005d, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x5671, .a=0x40, .x=0x79, .y=0xd6, .sp=0x1f, .status=0x3c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0163, .value=0x81}, {.addr=0x5671, .value=0x3e}, {.addr=0x5672, .value=0x63},
    };
    const struct CPU_State final_cpu = {.pc=0x5673, .a=0x40, .x=0x79, .y=0xd6, .sp=0x1f, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0163, .value=0x81}, {.addr=0x5671, .value=0x3e}, {.addr=0x5672, .value=0x63},
    };
    const struct BusEvent events[] = {
        {.addr=0x5671, .value=0x3e, .type=IO_READ},
        {.addr=0x5672, .value=0x63, .type=IO_READ},
        {.addr=0x0163, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02EC) {
    const struct CPU_State initial_cpu = {.pc=0xd093, .a=0x48, .x=0xb7, .y=0x9b, .sp=0x4e, .status=0x3c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0135, .value=0xa5}, {.addr=0xd093, .value=0x3e}, {.addr=0xd094, .value=0x35},
    };
    const struct CPU_State final_cpu = {.pc=0xd095, .a=0x48, .x=0xb7, .y=0x9b, .sp=0x4e, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0135, .value=0xa5}, {.addr=0xd093, .value=0x3e}, {.addr=0xd094, .value=0x35},
    };
    const struct BusEvent events[] = {
        {.addr=0xd093, .value=0x3e, .type=IO_READ},
        {.addr=0xd094, .value=0x35, .type=IO_READ},
        {.addr=0x0135, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x88d7, .a=0x23, .x=0xe0, .y=0x46, .sp=0xce, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d8, .value=0xce}, {.addr=0x88d7, .value=0x3e}, {.addr=0x88d8, .value=0xd8},
    };
    const struct CPU_State final_cpu = {.pc=0x88d9, .a=0x23, .x=0xe0, .y=0x46, .sp=0xce, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d8, .value=0xce}, {.addr=0x88d7, .value=0x3e}, {.addr=0x88d8, .value=0xd8},
    };
    const struct BusEvent events[] = {
        {.addr=0x88d7, .value=0x3e, .type=IO_READ},
        {.addr=0x88d8, .value=0xd8, .type=IO_READ},
        {.addr=0x01d8, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02EE) {
    const struct CPU_State initial_cpu = {.pc=0x599a, .a=0x14, .x=0x70, .y=0x98, .sp=0xac, .status=0x76};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011d, .value=0x16}, {.addr=0x599a, .value=0x3e}, {.addr=0x599b, .value=0x1d},
    };
    const struct CPU_State final_cpu = {.pc=0x599c, .a=0x14, .x=0x70, .y=0x98, .sp=0xac, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x011d, .value=0x16}, {.addr=0x599a, .value=0x3e}, {.addr=0x599b, .value=0x1d},
    };
    const struct BusEvent events[] = {
        {.addr=0x599a, .value=0x3e, .type=IO_READ},
        {.addr=0x599b, .value=0x1d, .type=IO_READ},
        {.addr=0x011d, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02EF) {
    const struct CPU_State initial_cpu = {.pc=0xc47f, .a=0xaa, .x=0x84, .y=0x2e, .sp=0xa2, .status=0xa9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0176, .value=0xdd}, {.addr=0xc47f, .value=0x3e}, {.addr=0xc480, .value=0x76},
    };
    const struct CPU_State final_cpu = {.pc=0xc481, .a=0xaa, .x=0x84, .y=0x2e, .sp=0xa2, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0176, .value=0xdd}, {.addr=0xc47f, .value=0x3e}, {.addr=0xc480, .value=0x76},
    };
    const struct BusEvent events[] = {
        {.addr=0xc47f, .value=0x3e, .type=IO_READ},
        {.addr=0xc480, .value=0x76, .type=IO_READ},
        {.addr=0x0176, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02F0) {
    const struct CPU_State initial_cpu = {.pc=0x76a3, .a=0xf0, .x=0xfe, .y=0xf6, .sp=0x10, .status=0xb4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d0, .value=0x0e}, {.addr=0x76a3, .value=0x3e}, {.addr=0x76a4, .value=0xd0},
    };
    const struct CPU_State final_cpu = {.pc=0x76a5, .a=0xf0, .x=0xfe, .y=0xf6, .sp=0x10, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d0, .value=0x0e}, {.addr=0x76a3, .value=0x3e}, {.addr=0x76a4, .value=0xd0},
    };
    const struct BusEvent events[] = {
        {.addr=0x76a3, .value=0x3e, .type=IO_READ},
        {.addr=0x76a4, .value=0xd0, .type=IO_READ},
        {.addr=0x01d0, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x17bf, .a=0xc4, .x=0xa0, .y=0x1a, .sp=0xcd, .status=0x76};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01aa, .value=0x39}, {.addr=0x17bf, .value=0x3e}, {.addr=0x17c0, .value=0xaa},
    };
    const struct CPU_State final_cpu = {.pc=0x17c1, .a=0xc4, .x=0xa0, .y=0x1a, .sp=0xcd, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x01aa, .value=0x39}, {.addr=0x17bf, .value=0x3e}, {.addr=0x17c0, .value=0xaa},
    };
    const struct BusEvent events[] = {
        {.addr=0x17bf, .value=0x3e, .type=IO_READ},
        {.addr=0x17c0, .value=0xaa, .type=IO_READ},
        {.addr=0x01aa, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02F2) {
    const struct CPU_State initial_cpu = {.pc=0xea87, .a=0x12, .x=0x31, .y=0xe2, .sp=0xd2, .status=0x34};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0112, .value=0x5c}, {.addr=0xea87, .value=0x3e}, {.addr=0xea88, .value=0x12},
    };
    const struct CPU_State final_cpu = {.pc=0xea89, .a=0x12, .x=0x31, .y=0xe2, .sp=0xd2, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0112, .value=0x5c}, {.addr=0xea87, .value=0x3e}, {.addr=0xea88, .value=0x12},
    };
    const struct BusEvent events[] = {
        {.addr=0xea87, .value=0x3e, .type=IO_READ},
        {.addr=0xea88, .value=0x12, .type=IO_READ},
        {.addr=0x0112, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02F3) {
    const struct CPU_State initial_cpu = {.pc=0x68a4, .a=0xe7, .x=0xdd, .y=0x0e, .sp=0xdb, .status=0x20};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018a, .value=0x79}, {.addr=0x68a4, .value=0x3e}, {.addr=0x68a5, .value=0x8a},
    };
    const struct CPU_State final_cpu = {.pc=0x68a6, .a=0xe7, .x=0xdd, .y=0x0e, .sp=0xdb, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x018a, .value=0x79}, {.addr=0x68a4, .value=0x3e}, {.addr=0x68a5, .value=0x8a},
    };
    const struct BusEvent events[] = {
        {.addr=0x68a4, .value=0x3e, .type=IO_READ},
        {.addr=0x68a5, .value=0x8a, .type=IO_READ},
        {.addr=0x018a, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02F4) {
    const struct CPU_State initial_cpu = {.pc=0x9aa7, .a=0xba, .x=0x6c, .y=0xfe, .sp=0xdc, .status=0x13};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0071, .value=0x49}, {.addr=0x9aa7, .value=0x3e}, {.addr=0x9aa8, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0x9aa9, .a=0xba, .x=0x6c, .y=0xfe, .sp=0xdc, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x0071, .value=0x49}, {.addr=0x9aa7, .value=0x3e}, {.addr=0x9aa8, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0x9aa7, .value=0x3e, .type=IO_READ},
        {.addr=0x9aa8, .value=0x71, .type=IO_READ},
        {.addr=0x0071, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x9bd4, .a=0xd3, .x=0x38, .y=0xca, .sp=0x8d, .status=0xc5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bc, .value=0x37}, {.addr=0x9bd4, .value=0x3e}, {.addr=0x9bd5, .value=0xbc},
    };
    const struct CPU_State final_cpu = {.pc=0x9bd6, .a=0xd3, .x=0x38, .y=0xca, .sp=0x8d, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bc, .value=0x37}, {.addr=0x9bd4, .value=0x3e}, {.addr=0x9bd5, .value=0xbc},
    };
    const struct BusEvent events[] = {
        {.addr=0x9bd4, .value=0x3e, .type=IO_READ},
        {.addr=0x9bd5, .value=0xbc, .type=IO_READ},
        {.addr=0x00bc, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x4758, .a=0x30, .x=0x63, .y=0x96, .sp=0xc8, .status=0x84};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0013, .value=0xa8}, {.addr=0x4758, .value=0x3e}, {.addr=0x4759, .value=0x13},
    };
    const struct CPU_State final_cpu = {.pc=0x475a, .a=0x30, .x=0x63, .y=0x96, .sp=0xc8, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x0013, .value=0xa8}, {.addr=0x4758, .value=0x3e}, {.addr=0x4759, .value=0x13},
    };
    const struct BusEvent events[] = {
        {.addr=0x4758, .value=0x3e, .type=IO_READ},
        {.addr=0x4759, .value=0x13, .type=IO_READ},
        {.addr=0x0013, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x6a4c, .a=0xca, .x=0xa3, .y=0x38, .sp=0x67, .status=0x5f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007f, .value=0x9c}, {.addr=0x6a4c, .value=0x3e}, {.addr=0x6a4d, .value=0x7f},
    };
    const struct CPU_State final_cpu = {.pc=0x6a4e, .a=0xca, .x=0xa3, .y=0x38, .sp=0x67, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x007f, .value=0x9c}, {.addr=0x6a4c, .value=0x3e}, {.addr=0x6a4d, .value=0x7f},
    };
    const struct BusEvent events[] = {
        {.addr=0x6a4c, .value=0x3e, .type=IO_READ},
        {.addr=0x6a4d, .value=0x7f, .type=IO_READ},
        {.addr=0x007f, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02F8) {
    const struct CPU_State initial_cpu = {.pc=0xb52d, .a=0xe6, .x=0x00, .y=0x02, .sp=0x4c, .status=0x99};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b1, .value=0x1d}, {.addr=0xb52d, .value=0x3e}, {.addr=0xb52e, .value=0xb1},
    };
    const struct CPU_State final_cpu = {.pc=0xb52f, .a=0xe6, .x=0x00, .y=0x02, .sp=0x4c, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b1, .value=0x1d}, {.addr=0xb52d, .value=0x3e}, {.addr=0xb52e, .value=0xb1},
    };
    const struct BusEvent events[] = {
        {.addr=0xb52d, .value=0x3e, .type=IO_READ},
        {.addr=0xb52e, .value=0xb1, .type=IO_READ},
        {.addr=0x00b1, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02F9) {
    const struct CPU_State initial_cpu = {.pc=0xc53d, .a=0x96, .x=0xc3, .y=0x62, .sp=0xe1, .status=0xd6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009b, .value=0x47}, {.addr=0xc53d, .value=0x3e}, {.addr=0xc53e, .value=0x9b},
    };
    const struct CPU_State final_cpu = {.pc=0xc53f, .a=0x96, .x=0xc3, .y=0x62, .sp=0xe1, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x009b, .value=0x47}, {.addr=0xc53d, .value=0x3e}, {.addr=0xc53e, .value=0x9b},
    };
    const struct BusEvent events[] = {
        {.addr=0xc53d, .value=0x3e, .type=IO_READ},
        {.addr=0xc53e, .value=0x9b, .type=IO_READ},
        {.addr=0x009b, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02FA) {
    const struct CPU_State initial_cpu = {.pc=0x53cf, .a=0xdd, .x=0x38, .y=0x6d, .sp=0xf6, .status=0x0a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ef, .value=0xeb}, {.addr=0x53cf, .value=0x3e}, {.addr=0x53d0, .value=0xef},
    };
    const struct CPU_State final_cpu = {.pc=0x53d1, .a=0xdd, .x=0x38, .y=0x6d, .sp=0xf6, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ef, .value=0xeb}, {.addr=0x53cf, .value=0x3e}, {.addr=0x53d0, .value=0xef},
    };
    const struct BusEvent events[] = {
        {.addr=0x53cf, .value=0x3e, .type=IO_READ},
        {.addr=0x53d0, .value=0xef, .type=IO_READ},
        {.addr=0x00ef, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02FB) {
    const struct CPU_State initial_cpu = {.pc=0x3712, .a=0xac, .x=0x41, .y=0xe3, .sp=0x77, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014c, .value=0x94}, {.addr=0x3712, .value=0x3e}, {.addr=0x3713, .value=0x4c},
    };
    const struct CPU_State final_cpu = {.pc=0x3714, .a=0xac, .x=0x41, .y=0xe3, .sp=0x77, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x014c, .value=0x94}, {.addr=0x3712, .value=0x3e}, {.addr=0x3713, .value=0x4c},
    };
    const struct BusEvent events[] = {
        {.addr=0x3712, .value=0x3e, .type=IO_READ},
        {.addr=0x3713, .value=0x4c, .type=IO_READ},
        {.addr=0x014c, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02FC) {
    const struct CPU_State initial_cpu = {.pc=0xc877, .a=0x29, .x=0xa9, .y=0x21, .sp=0x62, .status=0xba};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019d, .value=0xd4}, {.addr=0xc877, .value=0x3e}, {.addr=0xc878, .value=0x9d},
    };
    const struct CPU_State final_cpu = {.pc=0xc879, .a=0x29, .x=0xa9, .y=0x21, .sp=0x62, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x019d, .value=0xd4}, {.addr=0xc877, .value=0x3e}, {.addr=0xc878, .value=0x9d},
    };
    const struct BusEvent events[] = {
        {.addr=0xc877, .value=0x3e, .type=IO_READ},
        {.addr=0xc878, .value=0x9d, .type=IO_READ},
        {.addr=0x019d, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02FE) {
    const struct CPU_State initial_cpu = {.pc=0xdbf7, .a=0xf9, .x=0x3e, .y=0xce, .sp=0x08, .status=0x97};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0071, .value=0x48}, {.addr=0xdbf7, .value=0x3e}, {.addr=0xdbf8, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0xdbf9, .a=0xf9, .x=0x3e, .y=0xce, .sp=0x08, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0071, .value=0x48}, {.addr=0xdbf7, .value=0x3e}, {.addr=0xdbf8, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0xdbf7, .value=0x3e, .type=IO_READ},
        {.addr=0xdbf8, .value=0x71, .type=IO_READ},
        {.addr=0x0071, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x8ad0, .a=0x66, .x=0xac, .y=0x1a, .sp=0x07, .status=0x17};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cf, .value=0x4c}, {.addr=0x8ad0, .value=0x3e}, {.addr=0x8ad1, .value=0xcf},
    };
    const struct CPU_State final_cpu = {.pc=0x8ad2, .a=0x66, .x=0xac, .y=0x1a, .sp=0x07, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cf, .value=0x4c}, {.addr=0x8ad0, .value=0x3e}, {.addr=0x8ad1, .value=0xcf},
    };
    const struct BusEvent events[] = {
        {.addr=0x8ad0, .value=0x3e, .type=IO_READ},
        {.addr=0x8ad1, .value=0xcf, .type=IO_READ},
        {.addr=0x00cf, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0300) {
    const struct CPU_State initial_cpu = {.pc=0x745d, .a=0x61, .x=0x08, .y=0x94, .sp=0x9a, .status=0x2d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f8, .value=0xca}, {.addr=0x745d, .value=0x3e}, {.addr=0x745e, .value=0xf8},
    };
    const struct CPU_State final_cpu = {.pc=0x745f, .a=0x61, .x=0x08, .y=0x94, .sp=0x9a, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f8, .value=0xca}, {.addr=0x745d, .value=0x3e}, {.addr=0x745e, .value=0xf8},
    };
    const struct BusEvent events[] = {
        {.addr=0x745d, .value=0x3e, .type=IO_READ},
        {.addr=0x745e, .value=0xf8, .type=IO_READ},
        {.addr=0x01f8, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0301) {
    const struct CPU_State initial_cpu = {.pc=0xc55b, .a=0x57, .x=0xfa, .y=0xd7, .sp=0xbd, .status=0xd1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0064, .value=0x67}, {.addr=0xc55b, .value=0x3e}, {.addr=0xc55c, .value=0x64},
    };
    const struct CPU_State final_cpu = {.pc=0xc55d, .a=0x57, .x=0xfa, .y=0xd7, .sp=0xbd, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0064, .value=0x67}, {.addr=0xc55b, .value=0x3e}, {.addr=0xc55c, .value=0x64},
    };
    const struct BusEvent events[] = {
        {.addr=0xc55b, .value=0x3e, .type=IO_READ},
        {.addr=0xc55c, .value=0x64, .type=IO_READ},
        {.addr=0x0064, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0302) {
    const struct CPU_State initial_cpu = {.pc=0x2655, .a=0x8d, .x=0x3c, .y=0xeb, .sp=0x13, .status=0xae};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0187, .value=0x29}, {.addr=0x2655, .value=0x3e}, {.addr=0x2656, .value=0x87},
    };
    const struct CPU_State final_cpu = {.pc=0x2657, .a=0x8d, .x=0x3c, .y=0xeb, .sp=0x13, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0187, .value=0x29}, {.addr=0x2655, .value=0x3e}, {.addr=0x2656, .value=0x87},
    };
    const struct BusEvent events[] = {
        {.addr=0x2655, .value=0x3e, .type=IO_READ},
        {.addr=0x2656, .value=0x87, .type=IO_READ},
        {.addr=0x0187, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0303) {
    const struct CPU_State initial_cpu = {.pc=0x561a, .a=0x93, .x=0x97, .y=0x05, .sp=0x7d, .status=0x79};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0186, .value=0x0b}, {.addr=0x561a, .value=0x3e}, {.addr=0x561b, .value=0x86},
    };
    const struct CPU_State final_cpu = {.pc=0x561c, .a=0x93, .x=0x97, .y=0x05, .sp=0x7d, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0186, .value=0x0b}, {.addr=0x561a, .value=0x3e}, {.addr=0x561b, .value=0x86},
    };
    const struct BusEvent events[] = {
        {.addr=0x561a, .value=0x3e, .type=IO_READ},
        {.addr=0x561b, .value=0x86, .type=IO_READ},
        {.addr=0x0186, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0304) {
    const struct CPU_State initial_cpu = {.pc=0x9ef2, .a=0x26, .x=0x37, .y=0x03, .sp=0xdd, .status=0xd7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ba, .value=0x61}, {.addr=0x9ef2, .value=0x3e}, {.addr=0x9ef3, .value=0xba},
    };
    const struct CPU_State final_cpu = {.pc=0x9ef4, .a=0x26, .x=0x37, .y=0x03, .sp=0xdd, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ba, .value=0x61}, {.addr=0x9ef2, .value=0x3e}, {.addr=0x9ef3, .value=0xba},
    };
    const struct BusEvent events[] = {
        {.addr=0x9ef2, .value=0x3e, .type=IO_READ},
        {.addr=0x9ef3, .value=0xba, .type=IO_READ},
        {.addr=0x00ba, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0305) {
    const struct CPU_State initial_cpu = {.pc=0x3c38, .a=0xc1, .x=0x02, .y=0xfc, .sp=0x8e, .status=0xf8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b0, .value=0xc9}, {.addr=0x3c38, .value=0x3e}, {.addr=0x3c39, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0x3c3a, .a=0xc1, .x=0x02, .y=0xfc, .sp=0x8e, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b0, .value=0xc9}, {.addr=0x3c38, .value=0x3e}, {.addr=0x3c39, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0x3c38, .value=0x3e, .type=IO_READ},
        {.addr=0x3c39, .value=0xb0, .type=IO_READ},
        {.addr=0x01b0, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0306) {
    const struct CPU_State initial_cpu = {.pc=0xb7a1, .a=0x79, .x=0x17, .y=0xc3, .sp=0xc3, .status=0x11};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b2, .value=0x80}, {.addr=0xb7a1, .value=0x3e}, {.addr=0xb7a2, .value=0xb2},
    };
    const struct CPU_State final_cpu = {.pc=0xb7a3, .a=0x79, .x=0x17, .y=0xc3, .sp=0xc3, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b2, .value=0x80}, {.addr=0xb7a1, .value=0x3e}, {.addr=0xb7a2, .value=0xb2},
    };
    const struct BusEvent events[] = {
        {.addr=0xb7a1, .value=0x3e, .type=IO_READ},
        {.addr=0xb7a2, .value=0xb2, .type=IO_READ},
        {.addr=0x00b2, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0307) {
    const struct CPU_State initial_cpu = {.pc=0x515e, .a=0x88, .x=0x7a, .y=0x46, .sp=0x9b, .status=0xea};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0111, .value=0xa4}, {.addr=0x515e, .value=0x3e}, {.addr=0x515f, .value=0x11},
    };
    const struct CPU_State final_cpu = {.pc=0x5160, .a=0x88, .x=0x7a, .y=0x46, .sp=0x9b, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0111, .value=0xa4}, {.addr=0x515e, .value=0x3e}, {.addr=0x515f, .value=0x11},
    };
    const struct BusEvent events[] = {
        {.addr=0x515e, .value=0x3e, .type=IO_READ},
        {.addr=0x515f, .value=0x11, .type=IO_READ},
        {.addr=0x0111, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0308) {
    const struct CPU_State initial_cpu = {.pc=0x7ae6, .a=0xdc, .x=0xb2, .y=0x68, .sp=0xc5, .status=0x4a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c3, .value=0x10}, {.addr=0x7ae6, .value=0x3e}, {.addr=0x7ae7, .value=0xc3},
    };
    const struct CPU_State final_cpu = {.pc=0x7ae8, .a=0xdc, .x=0xb2, .y=0x68, .sp=0xc5, .status=0xc9};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c3, .value=0x10}, {.addr=0x7ae6, .value=0x3e}, {.addr=0x7ae7, .value=0xc3},
    };
    const struct BusEvent events[] = {
        {.addr=0x7ae6, .value=0x3e, .type=IO_READ},
        {.addr=0x7ae7, .value=0xc3, .type=IO_READ},
        {.addr=0x00c3, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0309) {
    const struct CPU_State initial_cpu = {.pc=0x21ff, .a=0x3d, .x=0x0b, .y=0xaa, .sp=0x2c, .status=0x54};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005d, .value=0xd1}, {.addr=0x21ff, .value=0x3e}, {.addr=0x2200, .value=0x5d},
    };
    const struct CPU_State final_cpu = {.pc=0x2201, .a=0x3d, .x=0x0b, .y=0xaa, .sp=0x2c, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x005d, .value=0xd1}, {.addr=0x21ff, .value=0x3e}, {.addr=0x2200, .value=0x5d},
    };
    const struct BusEvent events[] = {
        {.addr=0x21ff, .value=0x3e, .type=IO_READ},
        {.addr=0x2200, .value=0x5d, .type=IO_READ},
        {.addr=0x005d, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_030A) {
    const struct CPU_State initial_cpu = {.pc=0x76f9, .a=0xa6, .x=0xc1, .y=0x5a, .sp=0xa6, .status=0x28};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011b, .value=0xfc}, {.addr=0x76f9, .value=0x3e}, {.addr=0x76fa, .value=0x1b},
    };
    const struct CPU_State final_cpu = {.pc=0x76fb, .a=0xa6, .x=0xc1, .y=0x5a, .sp=0xa6, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x011b, .value=0xfc}, {.addr=0x76f9, .value=0x3e}, {.addr=0x76fa, .value=0x1b},
    };
    const struct BusEvent events[] = {
        {.addr=0x76f9, .value=0x3e, .type=IO_READ},
        {.addr=0x76fa, .value=0x1b, .type=IO_READ},
        {.addr=0x011b, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_030B) {
    const struct CPU_State initial_cpu = {.pc=0xa073, .a=0x83, .x=0xad, .y=0x7d, .sp=0x5f, .status=0x62};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014b, .value=0xc3}, {.addr=0xa073, .value=0x3e}, {.addr=0xa074, .value=0x4b},
    };
    const struct CPU_State final_cpu = {.pc=0xa075, .a=0x83, .x=0xad, .y=0x7d, .sp=0x5f, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x014b, .value=0xc3}, {.addr=0xa073, .value=0x3e}, {.addr=0xa074, .value=0x4b},
    };
    const struct BusEvent events[] = {
        {.addr=0xa073, .value=0x3e, .type=IO_READ},
        {.addr=0xa074, .value=0x4b, .type=IO_READ},
        {.addr=0x014b, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_030C) {
    const struct CPU_State initial_cpu = {.pc=0xd140, .a=0x8a, .x=0xb9, .y=0x81, .sp=0x3d, .status=0x43};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d8, .value=0x90}, {.addr=0xd140, .value=0x3e}, {.addr=0xd141, .value=0xd8},
    };
    const struct CPU_State final_cpu = {.pc=0xd142, .a=0x8a, .x=0xb9, .y=0x81, .sp=0x3d, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d8, .value=0x90}, {.addr=0xd140, .value=0x3e}, {.addr=0xd141, .value=0xd8},
    };
    const struct BusEvent events[] = {
        {.addr=0xd140, .value=0x3e, .type=IO_READ},
        {.addr=0xd141, .value=0xd8, .type=IO_READ},
        {.addr=0x00d8, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_030D) {
    const struct CPU_State initial_cpu = {.pc=0x94a4, .a=0x6f, .x=0x34, .y=0xb2, .sp=0x2b, .status=0x2f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0138, .value=0x5f}, {.addr=0x94a4, .value=0x3e}, {.addr=0x94a5, .value=0x38},
    };
    const struct CPU_State final_cpu = {.pc=0x94a6, .a=0x6f, .x=0x34, .y=0xb2, .sp=0x2b, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0138, .value=0x5f}, {.addr=0x94a4, .value=0x3e}, {.addr=0x94a5, .value=0x38},
    };
    const struct BusEvent events[] = {
        {.addr=0x94a4, .value=0x3e, .type=IO_READ},
        {.addr=0x94a5, .value=0x38, .type=IO_READ},
        {.addr=0x0138, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_030E) {
    const struct CPU_State initial_cpu = {.pc=0x7ac3, .a=0x6a, .x=0x27, .y=0xe4, .sp=0x7e, .status=0x9e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0026, .value=0x58}, {.addr=0x7ac3, .value=0x3e}, {.addr=0x7ac4, .value=0x26},
    };
    const struct CPU_State final_cpu = {.pc=0x7ac5, .a=0x6a, .x=0x27, .y=0xe4, .sp=0x7e, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0026, .value=0x58}, {.addr=0x7ac3, .value=0x3e}, {.addr=0x7ac4, .value=0x26},
    };
    const struct BusEvent events[] = {
        {.addr=0x7ac3, .value=0x3e, .type=IO_READ},
        {.addr=0x7ac4, .value=0x26, .type=IO_READ},
        {.addr=0x0026, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_030F) {
    const struct CPU_State initial_cpu = {.pc=0xd644, .a=0xd6, .x=0x1e, .y=0xde, .sp=0x08, .status=0x46};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ec, .value=0xdb}, {.addr=0xd644, .value=0x3e}, {.addr=0xd645, .value=0xec},
    };
    const struct CPU_State final_cpu = {.pc=0xd646, .a=0xd6, .x=0x1e, .y=0xde, .sp=0x08, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ec, .value=0xdb}, {.addr=0xd644, .value=0x3e}, {.addr=0xd645, .value=0xec},
    };
    const struct BusEvent events[] = {
        {.addr=0xd644, .value=0x3e, .type=IO_READ},
        {.addr=0xd645, .value=0xec, .type=IO_READ},
        {.addr=0x00ec, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0310) {
    const struct CPU_State initial_cpu = {.pc=0xb674, .a=0x96, .x=0x10, .y=0x0d, .sp=0x5f, .status=0x7a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0165, .value=0x2c}, {.addr=0xb674, .value=0x3e}, {.addr=0xb675, .value=0x65},
    };
    const struct CPU_State final_cpu = {.pc=0xb676, .a=0x96, .x=0x10, .y=0x0d, .sp=0x5f, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0165, .value=0x2c}, {.addr=0xb674, .value=0x3e}, {.addr=0xb675, .value=0x65},
    };
    const struct BusEvent events[] = {
        {.addr=0xb674, .value=0x3e, .type=IO_READ},
        {.addr=0xb675, .value=0x65, .type=IO_READ},
        {.addr=0x0165, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0311) {
    const struct CPU_State initial_cpu = {.pc=0x0762, .a=0xa9, .x=0x39, .y=0x96, .sp=0x5a, .status=0x20};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011c, .value=0xd1}, {.addr=0x0762, .value=0x3e}, {.addr=0x0763, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0x0764, .a=0xa9, .x=0x39, .y=0x96, .sp=0x5a, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x011c, .value=0xd1}, {.addr=0x0762, .value=0x3e}, {.addr=0x0763, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0x0762, .value=0x3e, .type=IO_READ},
        {.addr=0x0763, .value=0x1c, .type=IO_READ},
        {.addr=0x011c, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0312) {
    const struct CPU_State initial_cpu = {.pc=0xdfda, .a=0xba, .x=0x81, .y=0x7d, .sp=0xd1, .status=0x20};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0105, .value=0xf8}, {.addr=0xdfda, .value=0x3e}, {.addr=0xdfdb, .value=0x05},
    };
    const struct CPU_State final_cpu = {.pc=0xdfdc, .a=0xba, .x=0x81, .y=0x7d, .sp=0xd1, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0105, .value=0xf8}, {.addr=0xdfda, .value=0x3e}, {.addr=0xdfdb, .value=0x05},
    };
    const struct BusEvent events[] = {
        {.addr=0xdfda, .value=0x3e, .type=IO_READ},
        {.addr=0xdfdb, .value=0x05, .type=IO_READ},
        {.addr=0x0105, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0313) {
    const struct CPU_State initial_cpu = {.pc=0x420b, .a=0x34, .x=0x46, .y=0xd3, .sp=0xb6, .status=0x59};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0050, .value=0xff}, {.addr=0x420b, .value=0x3e}, {.addr=0x420c, .value=0x50},
    };
    const struct CPU_State final_cpu = {.pc=0x420d, .a=0x34, .x=0x46, .y=0xd3, .sp=0xb6, .status=0x58};
    const struct RamEntry final_ram[] = {
        {.addr=0x0050, .value=0xff}, {.addr=0x420b, .value=0x3e}, {.addr=0x420c, .value=0x50},
    };
    const struct BusEvent events[] = {
        {.addr=0x420b, .value=0x3e, .type=IO_READ},
        {.addr=0x420c, .value=0x50, .type=IO_READ},
        {.addr=0x0050, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0314) {
    const struct CPU_State initial_cpu = {.pc=0xc4d9, .a=0x14, .x=0x7d, .y=0x1c, .sp=0x52, .status=0x2e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f5, .value=0xe8}, {.addr=0xc4d9, .value=0x3e}, {.addr=0xc4da, .value=0xf5},
    };
    const struct CPU_State final_cpu = {.pc=0xc4db, .a=0x14, .x=0x7d, .y=0x1c, .sp=0x52, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f5, .value=0xe8}, {.addr=0xc4d9, .value=0x3e}, {.addr=0xc4da, .value=0xf5},
    };
    const struct BusEvent events[] = {
        {.addr=0xc4d9, .value=0x3e, .type=IO_READ},
        {.addr=0xc4da, .value=0xf5, .type=IO_READ},
        {.addr=0x01f5, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0315) {
    const struct CPU_State initial_cpu = {.pc=0x235b, .a=0xc1, .x=0xc8, .y=0x1b, .sp=0xcb, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0198, .value=0xfb}, {.addr=0x235b, .value=0x3e}, {.addr=0x235c, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0x235d, .a=0xc1, .x=0xc8, .y=0x1b, .sp=0xcb, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0198, .value=0xfb}, {.addr=0x235b, .value=0x3e}, {.addr=0x235c, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0x235b, .value=0x3e, .type=IO_READ},
        {.addr=0x235c, .value=0x98, .type=IO_READ},
        {.addr=0x0198, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0316) {
    const struct CPU_State initial_cpu = {.pc=0x697d, .a=0xc1, .x=0xf7, .y=0x0e, .sp=0x62, .status=0x23};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b1, .value=0x51}, {.addr=0x697d, .value=0x3e}, {.addr=0x697e, .value=0xb1},
    };
    const struct CPU_State final_cpu = {.pc=0x697f, .a=0xc1, .x=0xf7, .y=0x0e, .sp=0x62, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b1, .value=0x51}, {.addr=0x697d, .value=0x3e}, {.addr=0x697e, .value=0xb1},
    };
    const struct BusEvent events[] = {
        {.addr=0x697d, .value=0x3e, .type=IO_READ},
        {.addr=0x697e, .value=0xb1, .type=IO_READ},
        {.addr=0x01b1, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0317) {
    const struct CPU_State initial_cpu = {.pc=0x59b7, .a=0x28, .x=0x92, .y=0xfa, .sp=0xfa, .status=0x60};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011f, .value=0x5f}, {.addr=0x59b7, .value=0x3e}, {.addr=0x59b8, .value=0x1f},
    };
    const struct CPU_State final_cpu = {.pc=0x59b9, .a=0x28, .x=0x92, .y=0xfa, .sp=0xfa, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x011f, .value=0x5f}, {.addr=0x59b7, .value=0x3e}, {.addr=0x59b8, .value=0x1f},
    };
    const struct BusEvent events[] = {
        {.addr=0x59b7, .value=0x3e, .type=IO_READ},
        {.addr=0x59b8, .value=0x1f, .type=IO_READ},
        {.addr=0x011f, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0318) {
    const struct CPU_State initial_cpu = {.pc=0x5ce9, .a=0x6c, .x=0xed, .y=0xd8, .sp=0x40, .status=0x4b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d1, .value=0xb4}, {.addr=0x5ce9, .value=0x3e}, {.addr=0x5cea, .value=0xd1},
    };
    const struct CPU_State final_cpu = {.pc=0x5ceb, .a=0x6c, .x=0xed, .y=0xd8, .sp=0x40, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d1, .value=0xb4}, {.addr=0x5ce9, .value=0x3e}, {.addr=0x5cea, .value=0xd1},
    };
    const struct BusEvent events[] = {
        {.addr=0x5ce9, .value=0x3e, .type=IO_READ},
        {.addr=0x5cea, .value=0xd1, .type=IO_READ},
        {.addr=0x00d1, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0319) {
    const struct CPU_State initial_cpu = {.pc=0x78d7, .a=0x04, .x=0xa9, .y=0xb2, .sp=0x07, .status=0x42};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0021, .value=0x70}, {.addr=0x78d7, .value=0x3e}, {.addr=0x78d8, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0x78d9, .a=0x04, .x=0xa9, .y=0xb2, .sp=0x07, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x0021, .value=0x70}, {.addr=0x78d7, .value=0x3e}, {.addr=0x78d8, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0x78d7, .value=0x3e, .type=IO_READ},
        {.addr=0x78d8, .value=0x21, .type=IO_READ},
        {.addr=0x0021, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_031A) {
    const struct CPU_State initial_cpu = {.pc=0xb47c, .a=0x9e, .x=0x33, .y=0xda, .sp=0x68, .status=0x47};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008b, .value=0xaf}, {.addr=0xb47c, .value=0x3e}, {.addr=0xb47d, .value=0x8b},
    };
    const struct CPU_State final_cpu = {.pc=0xb47e, .a=0x9e, .x=0x33, .y=0xda, .sp=0x68, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x008b, .value=0xaf}, {.addr=0xb47c, .value=0x3e}, {.addr=0xb47d, .value=0x8b},
    };
    const struct BusEvent events[] = {
        {.addr=0xb47c, .value=0x3e, .type=IO_READ},
        {.addr=0xb47d, .value=0x8b, .type=IO_READ},
        {.addr=0x008b, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_031B) {
    const struct CPU_State initial_cpu = {.pc=0x333b, .a=0x7d, .x=0x7c, .y=0x5d, .sp=0xea, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0052, .value=0xd8}, {.addr=0x333b, .value=0x3e}, {.addr=0x333c, .value=0x52},
    };
    const struct CPU_State final_cpu = {.pc=0x333d, .a=0x7d, .x=0x7c, .y=0x5d, .sp=0xea, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0052, .value=0xd8}, {.addr=0x333b, .value=0x3e}, {.addr=0x333c, .value=0x52},
    };
    const struct BusEvent events[] = {
        {.addr=0x333b, .value=0x3e, .type=IO_READ},
        {.addr=0x333c, .value=0x52, .type=IO_READ},
        {.addr=0x0052, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_031C) {
    const struct CPU_State initial_cpu = {.pc=0x8376, .a=0x3c, .x=0x15, .y=0x98, .sp=0xfc, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0032, .value=0xc2}, {.addr=0x8376, .value=0x3e}, {.addr=0x8377, .value=0x32},
    };
    const struct CPU_State final_cpu = {.pc=0x8378, .a=0x3c, .x=0x15, .y=0x98, .sp=0xfc, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x0032, .value=0xc2}, {.addr=0x8376, .value=0x3e}, {.addr=0x8377, .value=0x32},
    };
    const struct BusEvent events[] = {
        {.addr=0x8376, .value=0x3e, .type=IO_READ},
        {.addr=0x8377, .value=0x32, .type=IO_READ},
        {.addr=0x0032, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_031D) {
    const struct CPU_State initial_cpu = {.pc=0xfc29, .a=0xa1, .x=0xd7, .y=0x0a, .sp=0xe7, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0096, .value=0x8c}, {.addr=0xfc29, .value=0x3e}, {.addr=0xfc2a, .value=0x96},
    };
    const struct CPU_State final_cpu = {.pc=0xfc2b, .a=0xa1, .x=0xd7, .y=0x0a, .sp=0xe7, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0096, .value=0x8c}, {.addr=0xfc29, .value=0x3e}, {.addr=0xfc2a, .value=0x96},
    };
    const struct BusEvent events[] = {
        {.addr=0xfc29, .value=0x3e, .type=IO_READ},
        {.addr=0xfc2a, .value=0x96, .type=IO_READ},
        {.addr=0x0096, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_031E) {
    const struct CPU_State initial_cpu = {.pc=0x54d1, .a=0xfd, .x=0x5d, .y=0xd0, .sp=0x6f, .status=0xc7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0023, .value=0xda}, {.addr=0x54d1, .value=0x3e}, {.addr=0x54d2, .value=0x23},
    };
    const struct CPU_State final_cpu = {.pc=0x54d3, .a=0xfd, .x=0x5d, .y=0xd0, .sp=0x6f, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0023, .value=0xda}, {.addr=0x54d1, .value=0x3e}, {.addr=0x54d2, .value=0x23},
    };
    const struct BusEvent events[] = {
        {.addr=0x54d1, .value=0x3e, .type=IO_READ},
        {.addr=0x54d2, .value=0x23, .type=IO_READ},
        {.addr=0x0023, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_031F) {
    const struct CPU_State initial_cpu = {.pc=0x8212, .a=0x33, .x=0x5d, .y=0x1b, .sp=0x53, .status=0x1a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e9, .value=0x51}, {.addr=0x8212, .value=0x3e}, {.addr=0x8213, .value=0xe9},
    };
    const struct CPU_State final_cpu = {.pc=0x8214, .a=0x33, .x=0x5d, .y=0x1b, .sp=0x53, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e9, .value=0x51}, {.addr=0x8212, .value=0x3e}, {.addr=0x8213, .value=0xe9},
    };
    const struct BusEvent events[] = {
        {.addr=0x8212, .value=0x3e, .type=IO_READ},
        {.addr=0x8213, .value=0xe9, .type=IO_READ},
        {.addr=0x00e9, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0320) {
    const struct CPU_State initial_cpu = {.pc=0x6d5b, .a=0x3c, .x=0xa7, .y=0x6e, .sp=0xe2, .status=0x69};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c0, .value=0x93}, {.addr=0x6d5b, .value=0x3e}, {.addr=0x6d5c, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0x6d5d, .a=0x3c, .x=0xa7, .y=0x6e, .sp=0xe2, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c0, .value=0x93}, {.addr=0x6d5b, .value=0x3e}, {.addr=0x6d5c, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0x6d5b, .value=0x3e, .type=IO_READ},
        {.addr=0x6d5c, .value=0xc0, .type=IO_READ},
        {.addr=0x01c0, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0321) {
    const struct CPU_State initial_cpu = {.pc=0xeff0, .a=0x55, .x=0xdd, .y=0x07, .sp=0x07, .status=0xa9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ff, .value=0x64}, {.addr=0xeff0, .value=0x3e}, {.addr=0xeff1, .value=0xff},
    };
    const struct CPU_State final_cpu = {.pc=0xeff2, .a=0x55, .x=0xdd, .y=0x07, .sp=0x07, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ff, .value=0x64}, {.addr=0xeff0, .value=0x3e}, {.addr=0xeff1, .value=0xff},
    };
    const struct BusEvent events[] = {
        {.addr=0xeff0, .value=0x3e, .type=IO_READ},
        {.addr=0xeff1, .value=0xff, .type=IO_READ},
        {.addr=0x01ff, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0322) {
    const struct CPU_State initial_cpu = {.pc=0xa660, .a=0xe9, .x=0x1e, .y=0xf8, .sp=0xfc, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0170, .value=0xa1}, {.addr=0xa660, .value=0x3e}, {.addr=0xa661, .value=0x70},
    };
    const struct CPU_State final_cpu = {.pc=0xa662, .a=0xe9, .x=0x1e, .y=0xf8, .sp=0xfc, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x0170, .value=0xa1}, {.addr=0xa660, .value=0x3e}, {.addr=0xa661, .value=0x70},
    };
    const struct BusEvent events[] = {
        {.addr=0xa660, .value=0x3e, .type=IO_READ},
        {.addr=0xa661, .value=0x70, .type=IO_READ},
        {.addr=0x0170, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0323) {
    const struct CPU_State initial_cpu = {.pc=0x9684, .a=0x34, .x=0x84, .y=0xf9, .sp=0x49, .status=0x30};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d3, .value=0x08}, {.addr=0x9684, .value=0x3e}, {.addr=0x9685, .value=0xd3},
    };
    const struct CPU_State final_cpu = {.pc=0x9686, .a=0x34, .x=0x84, .y=0xf9, .sp=0x49, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d3, .value=0x08}, {.addr=0x9684, .value=0x3e}, {.addr=0x9685, .value=0xd3},
    };
    const struct BusEvent events[] = {
        {.addr=0x9684, .value=0x3e, .type=IO_READ},
        {.addr=0x9685, .value=0xd3, .type=IO_READ},
        {.addr=0x01d3, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0324) {
    const struct CPU_State initial_cpu = {.pc=0x361d, .a=0xc0, .x=0x15, .y=0x8c, .sp=0x85, .status=0x5a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0056, .value=0x4b}, {.addr=0x361d, .value=0x3e}, {.addr=0x361e, .value=0x56},
    };
    const struct CPU_State final_cpu = {.pc=0x361f, .a=0xc0, .x=0x15, .y=0x8c, .sp=0x85, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0056, .value=0x4b}, {.addr=0x361d, .value=0x3e}, {.addr=0x361e, .value=0x56},
    };
    const struct BusEvent events[] = {
        {.addr=0x361d, .value=0x3e, .type=IO_READ},
        {.addr=0x361e, .value=0x56, .type=IO_READ},
        {.addr=0x0056, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0325) {
    const struct CPU_State initial_cpu = {.pc=0xe335, .a=0xd3, .x=0xdc, .y=0xe3, .sp=0xe8, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0125, .value=0x34}, {.addr=0xe335, .value=0x3e}, {.addr=0xe336, .value=0x25},
    };
    const struct CPU_State final_cpu = {.pc=0xe337, .a=0xd3, .x=0xdc, .y=0xe3, .sp=0xe8, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0125, .value=0x34}, {.addr=0xe335, .value=0x3e}, {.addr=0xe336, .value=0x25},
    };
    const struct BusEvent events[] = {
        {.addr=0xe335, .value=0x3e, .type=IO_READ},
        {.addr=0xe336, .value=0x25, .type=IO_READ},
        {.addr=0x0125, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0326) {
    const struct CPU_State initial_cpu = {.pc=0x799b, .a=0x7f, .x=0x15, .y=0xcf, .sp=0xc4, .status=0xef};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0126, .value=0x97}, {.addr=0x799b, .value=0x3e}, {.addr=0x799c, .value=0x26},
    };
    const struct CPU_State final_cpu = {.pc=0x799d, .a=0x7f, .x=0x15, .y=0xcf, .sp=0xc4, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0126, .value=0x97}, {.addr=0x799b, .value=0x3e}, {.addr=0x799c, .value=0x26},
    };
    const struct BusEvent events[] = {
        {.addr=0x799b, .value=0x3e, .type=IO_READ},
        {.addr=0x799c, .value=0x26, .type=IO_READ},
        {.addr=0x0126, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0327) {
    const struct CPU_State initial_cpu = {.pc=0x7118, .a=0xc1, .x=0xa8, .y=0x08, .sp=0x6c, .status=0x6d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0109, .value=0xac}, {.addr=0x7118, .value=0x3e}, {.addr=0x7119, .value=0x09},
    };
    const struct CPU_State final_cpu = {.pc=0x711a, .a=0xc1, .x=0xa8, .y=0x08, .sp=0x6c, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x0109, .value=0xac}, {.addr=0x7118, .value=0x3e}, {.addr=0x7119, .value=0x09},
    };
    const struct BusEvent events[] = {
        {.addr=0x7118, .value=0x3e, .type=IO_READ},
        {.addr=0x7119, .value=0x09, .type=IO_READ},
        {.addr=0x0109, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0328) {
    const struct CPU_State initial_cpu = {.pc=0xc047, .a=0x09, .x=0x63, .y=0x58, .sp=0xfb, .status=0x69};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b5, .value=0x20}, {.addr=0xc047, .value=0x3e}, {.addr=0xc048, .value=0xb5},
    };
    const struct CPU_State final_cpu = {.pc=0xc049, .a=0x09, .x=0x63, .y=0x58, .sp=0xfb, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b5, .value=0x20}, {.addr=0xc047, .value=0x3e}, {.addr=0xc048, .value=0xb5},
    };
    const struct BusEvent events[] = {
        {.addr=0xc047, .value=0x3e, .type=IO_READ},
        {.addr=0xc048, .value=0xb5, .type=IO_READ},
        {.addr=0x01b5, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0329) {
    const struct CPU_State initial_cpu = {.pc=0x75cf, .a=0x1e, .x=0xc4, .y=0xf5, .sp=0x9c, .status=0x77};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e4, .value=0x12}, {.addr=0x75cf, .value=0x3e}, {.addr=0x75d0, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0x75d1, .a=0x1e, .x=0xc4, .y=0xf5, .sp=0x9c, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e4, .value=0x12}, {.addr=0x75cf, .value=0x3e}, {.addr=0x75d0, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0x75cf, .value=0x3e, .type=IO_READ},
        {.addr=0x75d0, .value=0xe4, .type=IO_READ},
        {.addr=0x01e4, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_032A) {
    const struct CPU_State initial_cpu = {.pc=0x2778, .a=0xdc, .x=0x9d, .y=0x55, .sp=0xb1, .status=0x26};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0148, .value=0x21}, {.addr=0x2778, .value=0x3e}, {.addr=0x2779, .value=0x48},
    };
    const struct CPU_State final_cpu = {.pc=0x277a, .a=0xdc, .x=0x9d, .y=0x55, .sp=0xb1, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x0148, .value=0x21}, {.addr=0x2778, .value=0x3e}, {.addr=0x2779, .value=0x48},
    };
    const struct BusEvent events[] = {
        {.addr=0x2778, .value=0x3e, .type=IO_READ},
        {.addr=0x2779, .value=0x48, .type=IO_READ},
        {.addr=0x0148, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_032B) {
    const struct CPU_State initial_cpu = {.pc=0x5120, .a=0x03, .x=0xad, .y=0x6e, .sp=0x2a, .status=0xf6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0141, .value=0xf8}, {.addr=0x5120, .value=0x3e}, {.addr=0x5121, .value=0x41},
    };
    const struct CPU_State final_cpu = {.pc=0x5122, .a=0x03, .x=0xad, .y=0x6e, .sp=0x2a, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0141, .value=0xf8}, {.addr=0x5120, .value=0x3e}, {.addr=0x5121, .value=0x41},
    };
    const struct BusEvent events[] = {
        {.addr=0x5120, .value=0x3e, .type=IO_READ},
        {.addr=0x5121, .value=0x41, .type=IO_READ},
        {.addr=0x0141, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_032C) {
    const struct CPU_State initial_cpu = {.pc=0x27db, .a=0x54, .x=0xd1, .y=0xc3, .sp=0x2a, .status=0xd3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0093, .value=0xd9}, {.addr=0x27db, .value=0x3e}, {.addr=0x27dc, .value=0x93},
    };
    const struct CPU_State final_cpu = {.pc=0x27dd, .a=0x54, .x=0xd1, .y=0xc3, .sp=0x2a, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0093, .value=0xd9}, {.addr=0x27db, .value=0x3e}, {.addr=0x27dc, .value=0x93},
    };
    const struct BusEvent events[] = {
        {.addr=0x27db, .value=0x3e, .type=IO_READ},
        {.addr=0x27dc, .value=0x93, .type=IO_READ},
        {.addr=0x0093, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_032D) {
    const struct CPU_State initial_cpu = {.pc=0xf609, .a=0x31, .x=0xcb, .y=0x47, .sp=0xfe, .status=0xa5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014d, .value=0x63}, {.addr=0xf609, .value=0x3e}, {.addr=0xf60a, .value=0x4d},
    };
    const struct CPU_State final_cpu = {.pc=0xf60b, .a=0x31, .x=0xcb, .y=0x47, .sp=0xfe, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x014d, .value=0x63}, {.addr=0xf609, .value=0x3e}, {.addr=0xf60a, .value=0x4d},
    };
    const struct BusEvent events[] = {
        {.addr=0xf609, .value=0x3e, .type=IO_READ},
        {.addr=0xf60a, .value=0x4d, .type=IO_READ},
        {.addr=0x014d, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_032E) {
    const struct CPU_State initial_cpu = {.pc=0x21d6, .a=0x26, .x=0x08, .y=0x72, .sp=0xa6, .status=0xe5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0182, .value=0x97}, {.addr=0x21d6, .value=0x3e}, {.addr=0x21d7, .value=0x82},
    };
    const struct CPU_State final_cpu = {.pc=0x21d8, .a=0x26, .x=0x08, .y=0x72, .sp=0xa6, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x0182, .value=0x97}, {.addr=0x21d6, .value=0x3e}, {.addr=0x21d7, .value=0x82},
    };
    const struct BusEvent events[] = {
        {.addr=0x21d6, .value=0x3e, .type=IO_READ},
        {.addr=0x21d7, .value=0x82, .type=IO_READ},
        {.addr=0x0182, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_032F) {
    const struct CPU_State initial_cpu = {.pc=0x365b, .a=0x74, .x=0x63, .y=0x15, .sp=0x0d, .status=0x04};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0055, .value=0xc2}, {.addr=0x365b, .value=0x3e}, {.addr=0x365c, .value=0x55},
    };
    const struct CPU_State final_cpu = {.pc=0x365d, .a=0x74, .x=0x63, .y=0x15, .sp=0x0d, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x0055, .value=0xc2}, {.addr=0x365b, .value=0x3e}, {.addr=0x365c, .value=0x55},
    };
    const struct BusEvent events[] = {
        {.addr=0x365b, .value=0x3e, .type=IO_READ},
        {.addr=0x365c, .value=0x55, .type=IO_READ},
        {.addr=0x0055, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0330) {
    const struct CPU_State initial_cpu = {.pc=0xcc93, .a=0x22, .x=0x5f, .y=0x73, .sp=0x8c, .status=0xbd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0148, .value=0xa8}, {.addr=0xcc93, .value=0x3e}, {.addr=0xcc94, .value=0x48},
    };
    const struct CPU_State final_cpu = {.pc=0xcc95, .a=0x22, .x=0x5f, .y=0x73, .sp=0x8c, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0148, .value=0xa8}, {.addr=0xcc93, .value=0x3e}, {.addr=0xcc94, .value=0x48},
    };
    const struct BusEvent events[] = {
        {.addr=0xcc93, .value=0x3e, .type=IO_READ},
        {.addr=0xcc94, .value=0x48, .type=IO_READ},
        {.addr=0x0148, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0331) {
    const struct CPU_State initial_cpu = {.pc=0x98d0, .a=0x13, .x=0x0d, .y=0xfe, .sp=0x80, .status=0xb0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0186, .value=0x37}, {.addr=0x98d0, .value=0x3e}, {.addr=0x98d1, .value=0x86},
    };
    const struct CPU_State final_cpu = {.pc=0x98d2, .a=0x13, .x=0x0d, .y=0xfe, .sp=0x80, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0186, .value=0x37}, {.addr=0x98d0, .value=0x3e}, {.addr=0x98d1, .value=0x86},
    };
    const struct BusEvent events[] = {
        {.addr=0x98d0, .value=0x3e, .type=IO_READ},
        {.addr=0x98d1, .value=0x86, .type=IO_READ},
        {.addr=0x0186, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0332) {
    const struct CPU_State initial_cpu = {.pc=0x937d, .a=0x82, .x=0x5a, .y=0x46, .sp=0x7c, .status=0xcc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cf, .value=0xe2}, {.addr=0x937d, .value=0x3e}, {.addr=0x937e, .value=0xcf},
    };
    const struct CPU_State final_cpu = {.pc=0x937f, .a=0x82, .x=0x5a, .y=0x46, .sp=0x7c, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cf, .value=0xe2}, {.addr=0x937d, .value=0x3e}, {.addr=0x937e, .value=0xcf},
    };
    const struct BusEvent events[] = {
        {.addr=0x937d, .value=0x3e, .type=IO_READ},
        {.addr=0x937e, .value=0xcf, .type=IO_READ},
        {.addr=0x00cf, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0333) {
    const struct CPU_State initial_cpu = {.pc=0x8e48, .a=0x3e, .x=0x9e, .y=0xb3, .sp=0xa3, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0127, .value=0x01}, {.addr=0x8e48, .value=0x3e}, {.addr=0x8e49, .value=0x27},
    };
    const struct CPU_State final_cpu = {.pc=0x8e4a, .a=0x3e, .x=0x9e, .y=0xb3, .sp=0xa3, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0127, .value=0x01}, {.addr=0x8e48, .value=0x3e}, {.addr=0x8e49, .value=0x27},
    };
    const struct BusEvent events[] = {
        {.addr=0x8e48, .value=0x3e, .type=IO_READ},
        {.addr=0x8e49, .value=0x27, .type=IO_READ},
        {.addr=0x0127, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0334) {
    const struct CPU_State initial_cpu = {.pc=0xf8a7, .a=0xe0, .x=0xed, .y=0xdb, .sp=0x03, .status=0x52};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c5, .value=0x04}, {.addr=0xf8a7, .value=0x3e}, {.addr=0xf8a8, .value=0xc5},
    };
    const struct CPU_State final_cpu = {.pc=0xf8a9, .a=0xe0, .x=0xed, .y=0xdb, .sp=0x03, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c5, .value=0x04}, {.addr=0xf8a7, .value=0x3e}, {.addr=0xf8a8, .value=0xc5},
    };
    const struct BusEvent events[] = {
        {.addr=0xf8a7, .value=0x3e, .type=IO_READ},
        {.addr=0xf8a8, .value=0xc5, .type=IO_READ},
        {.addr=0x00c5, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0335) {
    const struct CPU_State initial_cpu = {.pc=0x5e83, .a=0x98, .x=0xb7, .y=0xa5, .sp=0xf0, .status=0x25};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cf, .value=0x8a}, {.addr=0x5e83, .value=0x3e}, {.addr=0x5e84, .value=0xcf},
    };
    const struct CPU_State final_cpu = {.pc=0x5e85, .a=0x98, .x=0xb7, .y=0xa5, .sp=0xf0, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cf, .value=0x8a}, {.addr=0x5e83, .value=0x3e}, {.addr=0x5e84, .value=0xcf},
    };
    const struct BusEvent events[] = {
        {.addr=0x5e83, .value=0x3e, .type=IO_READ},
        {.addr=0x5e84, .value=0xcf, .type=IO_READ},
        {.addr=0x01cf, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0336) {
    const struct CPU_State initial_cpu = {.pc=0xd62e, .a=0x53, .x=0x8d, .y=0x74, .sp=0xc7, .status=0x9e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00eb, .value=0x87}, {.addr=0xd62e, .value=0x3e}, {.addr=0xd62f, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0xd630, .a=0x53, .x=0x8d, .y=0x74, .sp=0xc7, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00eb, .value=0x87}, {.addr=0xd62e, .value=0x3e}, {.addr=0xd62f, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0xd62e, .value=0x3e, .type=IO_READ},
        {.addr=0xd62f, .value=0xeb, .type=IO_READ},
        {.addr=0x00eb, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0337) {
    const struct CPU_State initial_cpu = {.pc=0x8f82, .a=0xbe, .x=0x3d, .y=0x38, .sp=0xd5, .status=0x48};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0060, .value=0x07}, {.addr=0x8f82, .value=0x3e}, {.addr=0x8f83, .value=0x60},
    };
    const struct CPU_State final_cpu = {.pc=0x8f84, .a=0xbe, .x=0x3d, .y=0x38, .sp=0xd5, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x0060, .value=0x07}, {.addr=0x8f82, .value=0x3e}, {.addr=0x8f83, .value=0x60},
    };
    const struct BusEvent events[] = {
        {.addr=0x8f82, .value=0x3e, .type=IO_READ},
        {.addr=0x8f83, .value=0x60, .type=IO_READ},
        {.addr=0x0060, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0338) {
    const struct CPU_State initial_cpu = {.pc=0xca71, .a=0x5a, .x=0x31, .y=0xb4, .sp=0x0d, .status=0xcc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009e, .value=0x43}, {.addr=0xca71, .value=0x3e}, {.addr=0xca72, .value=0x9e},
    };
    const struct CPU_State final_cpu = {.pc=0xca73, .a=0x5a, .x=0x31, .y=0xb4, .sp=0x0d, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x009e, .value=0x43}, {.addr=0xca71, .value=0x3e}, {.addr=0xca72, .value=0x9e},
    };
    const struct BusEvent events[] = {
        {.addr=0xca71, .value=0x3e, .type=IO_READ},
        {.addr=0xca72, .value=0x9e, .type=IO_READ},
        {.addr=0x009e, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0339) {
    const struct CPU_State initial_cpu = {.pc=0x7089, .a=0xd0, .x=0x73, .y=0x3a, .sp=0x1c, .status=0xc5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b4, .value=0x62}, {.addr=0x7089, .value=0x3e}, {.addr=0x708a, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0x708b, .a=0xd0, .x=0x73, .y=0x3a, .sp=0x1c, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b4, .value=0x62}, {.addr=0x7089, .value=0x3e}, {.addr=0x708a, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0x7089, .value=0x3e, .type=IO_READ},
        {.addr=0x708a, .value=0xb4, .type=IO_READ},
        {.addr=0x00b4, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_033A) {
    const struct CPU_State initial_cpu = {.pc=0xed93, .a=0x60, .x=0x6e, .y=0xa4, .sp=0x7d, .status=0x7e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b2, .value=0xb6}, {.addr=0xed93, .value=0x3e}, {.addr=0xed94, .value=0xb2},
    };
    const struct CPU_State final_cpu = {.pc=0xed95, .a=0x60, .x=0x6e, .y=0xa4, .sp=0x7d, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b2, .value=0xb6}, {.addr=0xed93, .value=0x3e}, {.addr=0xed94, .value=0xb2},
    };
    const struct BusEvent events[] = {
        {.addr=0xed93, .value=0x3e, .type=IO_READ},
        {.addr=0xed94, .value=0xb2, .type=IO_READ},
        {.addr=0x01b2, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_033B) {
    const struct CPU_State initial_cpu = {.pc=0xf487, .a=0x23, .x=0xda, .y=0x24, .sp=0x5a, .status=0x2e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0188, .value=0xb2}, {.addr=0xf487, .value=0x3e}, {.addr=0xf488, .value=0x88},
    };
    const struct CPU_State final_cpu = {.pc=0xf489, .a=0x23, .x=0xda, .y=0x24, .sp=0x5a, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0188, .value=0xb2}, {.addr=0xf487, .value=0x3e}, {.addr=0xf488, .value=0x88},
    };
    const struct BusEvent events[] = {
        {.addr=0xf487, .value=0x3e, .type=IO_READ},
        {.addr=0xf488, .value=0x88, .type=IO_READ},
        {.addr=0x0188, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_033C) {
    const struct CPU_State initial_cpu = {.pc=0xa4e8, .a=0x6e, .x=0x1f, .y=0x41, .sp=0xd5, .status=0xcb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004a, .value=0x95}, {.addr=0xa4e8, .value=0x3e}, {.addr=0xa4e9, .value=0x4a},
    };
    const struct CPU_State final_cpu = {.pc=0xa4ea, .a=0x6e, .x=0x1f, .y=0x41, .sp=0xd5, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x004a, .value=0x95}, {.addr=0xa4e8, .value=0x3e}, {.addr=0xa4e9, .value=0x4a},
    };
    const struct BusEvent events[] = {
        {.addr=0xa4e8, .value=0x3e, .type=IO_READ},
        {.addr=0xa4e9, .value=0x4a, .type=IO_READ},
        {.addr=0x004a, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_033D) {
    const struct CPU_State initial_cpu = {.pc=0xe8fd, .a=0xbf, .x=0x4b, .y=0x80, .sp=0x0b, .status=0x55};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0084, .value=0x31}, {.addr=0xe8fd, .value=0x3e}, {.addr=0xe8fe, .value=0x84},
    };
    const struct CPU_State final_cpu = {.pc=0xe8ff, .a=0xbf, .x=0x4b, .y=0x80, .sp=0x0b, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x0084, .value=0x31}, {.addr=0xe8fd, .value=0x3e}, {.addr=0xe8fe, .value=0x84},
    };
    const struct BusEvent events[] = {
        {.addr=0xe8fd, .value=0x3e, .type=IO_READ},
        {.addr=0xe8fe, .value=0x84, .type=IO_READ},
        {.addr=0x0084, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_033E) {
    const struct CPU_State initial_cpu = {.pc=0x9629, .a=0x09, .x=0x57, .y=0x6e, .sp=0x0a, .status=0x84};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0092, .value=0xeb}, {.addr=0x9629, .value=0x3e}, {.addr=0x962a, .value=0x92},
    };
    const struct CPU_State final_cpu = {.pc=0x962b, .a=0x09, .x=0x57, .y=0x6e, .sp=0x0a, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x0092, .value=0xeb}, {.addr=0x9629, .value=0x3e}, {.addr=0x962a, .value=0x92},
    };
    const struct BusEvent events[] = {
        {.addr=0x9629, .value=0x3e, .type=IO_READ},
        {.addr=0x962a, .value=0x92, .type=IO_READ},
        {.addr=0x0092, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_033F) {
    const struct CPU_State initial_cpu = {.pc=0x8d17, .a=0x0a, .x=0xe4, .y=0xb5, .sp=0x3e, .status=0xde};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004d, .value=0x87}, {.addr=0x8d17, .value=0x3e}, {.addr=0x8d18, .value=0x4d},
    };
    const struct CPU_State final_cpu = {.pc=0x8d19, .a=0x0a, .x=0xe4, .y=0xb5, .sp=0x3e, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x004d, .value=0x87}, {.addr=0x8d17, .value=0x3e}, {.addr=0x8d18, .value=0x4d},
    };
    const struct BusEvent events[] = {
        {.addr=0x8d17, .value=0x3e, .type=IO_READ},
        {.addr=0x8d18, .value=0x4d, .type=IO_READ},
        {.addr=0x004d, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0340) {
    const struct CPU_State initial_cpu = {.pc=0xe92f, .a=0x7a, .x=0x9b, .y=0xaa, .sp=0x6b, .status=0x3c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01be, .value=0x66}, {.addr=0xe92f, .value=0x3e}, {.addr=0xe930, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0xe931, .a=0x7a, .x=0x9b, .y=0xaa, .sp=0x6b, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01be, .value=0x66}, {.addr=0xe92f, .value=0x3e}, {.addr=0xe930, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0xe92f, .value=0x3e, .type=IO_READ},
        {.addr=0xe930, .value=0xbe, .type=IO_READ},
        {.addr=0x01be, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0341) {
    const struct CPU_State initial_cpu = {.pc=0xc65c, .a=0x7a, .x=0xa6, .y=0x91, .sp=0x95, .status=0xf9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010f, .value=0x83}, {.addr=0xc65c, .value=0x3e}, {.addr=0xc65d, .value=0x0f},
    };
    const struct CPU_State final_cpu = {.pc=0xc65e, .a=0x7a, .x=0xa6, .y=0x91, .sp=0x95, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x010f, .value=0x83}, {.addr=0xc65c, .value=0x3e}, {.addr=0xc65d, .value=0x0f},
    };
    const struct BusEvent events[] = {
        {.addr=0xc65c, .value=0x3e, .type=IO_READ},
        {.addr=0xc65d, .value=0x0f, .type=IO_READ},
        {.addr=0x010f, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0342) {
    const struct CPU_State initial_cpu = {.pc=0xd10a, .a=0x89, .x=0xdb, .y=0xef, .sp=0x6c, .status=0x7d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018e, .value=0x7b}, {.addr=0xd10a, .value=0x3e}, {.addr=0xd10b, .value=0x8e},
    };
    const struct CPU_State final_cpu = {.pc=0xd10c, .a=0x89, .x=0xdb, .y=0xef, .sp=0x6c, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x018e, .value=0x7b}, {.addr=0xd10a, .value=0x3e}, {.addr=0xd10b, .value=0x8e},
    };
    const struct BusEvent events[] = {
        {.addr=0xd10a, .value=0x3e, .type=IO_READ},
        {.addr=0xd10b, .value=0x8e, .type=IO_READ},
        {.addr=0x018e, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0343) {
    const struct CPU_State initial_cpu = {.pc=0x3f41, .a=0x28, .x=0x67, .y=0x5a, .sp=0xef, .status=0x8e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0061, .value=0xd6}, {.addr=0x3f41, .value=0x3e}, {.addr=0x3f42, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0x3f43, .a=0x28, .x=0x67, .y=0x5a, .sp=0xef, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0061, .value=0xd6}, {.addr=0x3f41, .value=0x3e}, {.addr=0x3f42, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0x3f41, .value=0x3e, .type=IO_READ},
        {.addr=0x3f42, .value=0x61, .type=IO_READ},
        {.addr=0x0061, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0344) {
    const struct CPU_State initial_cpu = {.pc=0xea6b, .a=0xe6, .x=0x75, .y=0xf4, .sp=0x33, .status=0x06};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d6, .value=0x96}, {.addr=0xea6b, .value=0x3e}, {.addr=0xea6c, .value=0xd6},
    };
    const struct CPU_State final_cpu = {.pc=0xea6d, .a=0xe6, .x=0x75, .y=0xf4, .sp=0x33, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d6, .value=0x96}, {.addr=0xea6b, .value=0x3e}, {.addr=0xea6c, .value=0xd6},
    };
    const struct BusEvent events[] = {
        {.addr=0xea6b, .value=0x3e, .type=IO_READ},
        {.addr=0xea6c, .value=0xd6, .type=IO_READ},
        {.addr=0x00d6, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0345) {
    const struct CPU_State initial_cpu = {.pc=0x4ff6, .a=0x72, .x=0xab, .y=0xf2, .sp=0xa1, .status=0x44};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e1, .value=0x0a}, {.addr=0x4ff6, .value=0x3e}, {.addr=0x4ff7, .value=0xe1},
    };
    const struct CPU_State final_cpu = {.pc=0x4ff8, .a=0x72, .x=0xab, .y=0xf2, .sp=0xa1, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e1, .value=0x0a}, {.addr=0x4ff6, .value=0x3e}, {.addr=0x4ff7, .value=0xe1},
    };
    const struct BusEvent events[] = {
        {.addr=0x4ff6, .value=0x3e, .type=IO_READ},
        {.addr=0x4ff7, .value=0xe1, .type=IO_READ},
        {.addr=0x00e1, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0346) {
    const struct CPU_State initial_cpu = {.pc=0x7ab5, .a=0x1d, .x=0xf5, .y=0x71, .sp=0xfc, .status=0x64};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0181, .value=0xe4}, {.addr=0x7ab5, .value=0x3e}, {.addr=0x7ab6, .value=0x81},
    };
    const struct CPU_State final_cpu = {.pc=0x7ab7, .a=0x1d, .x=0xf5, .y=0x71, .sp=0xfc, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x0181, .value=0xe4}, {.addr=0x7ab5, .value=0x3e}, {.addr=0x7ab6, .value=0x81},
    };
    const struct BusEvent events[] = {
        {.addr=0x7ab5, .value=0x3e, .type=IO_READ},
        {.addr=0x7ab6, .value=0x81, .type=IO_READ},
        {.addr=0x0181, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0347) {
    const struct CPU_State initial_cpu = {.pc=0xbd21, .a=0x58, .x=0x08, .y=0x60, .sp=0x72, .status=0xbf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cb, .value=0xad}, {.addr=0xbd21, .value=0x3e}, {.addr=0xbd22, .value=0xcb},
    };
    const struct CPU_State final_cpu = {.pc=0xbd23, .a=0x58, .x=0x08, .y=0x60, .sp=0x72, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cb, .value=0xad}, {.addr=0xbd21, .value=0x3e}, {.addr=0xbd22, .value=0xcb},
    };
    const struct BusEvent events[] = {
        {.addr=0xbd21, .value=0x3e, .type=IO_READ},
        {.addr=0xbd22, .value=0xcb, .type=IO_READ},
        {.addr=0x01cb, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0348) {
    const struct CPU_State initial_cpu = {.pc=0x0efe, .a=0xcb, .x=0x5c, .y=0x14, .sp=0xd3, .status=0xd3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001e, .value=0xd8}, {.addr=0x0efe, .value=0x3e}, {.addr=0x0eff, .value=0x1e},
    };
    const struct CPU_State final_cpu = {.pc=0x0f00, .a=0xcb, .x=0x5c, .y=0x14, .sp=0xd3, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x001e, .value=0xd8}, {.addr=0x0efe, .value=0x3e}, {.addr=0x0eff, .value=0x1e},
    };
    const struct BusEvent events[] = {
        {.addr=0x0efe, .value=0x3e, .type=IO_READ},
        {.addr=0x0eff, .value=0x1e, .type=IO_READ},
        {.addr=0x001e, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0349) {
    const struct CPU_State initial_cpu = {.pc=0x4da3, .a=0xf8, .x=0x62, .y=0xf9, .sp=0x8b, .status=0x5f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003c, .value=0xff}, {.addr=0x4da3, .value=0x3e}, {.addr=0x4da4, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0x4da5, .a=0xf8, .x=0x62, .y=0xf9, .sp=0x8b, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x003c, .value=0xff}, {.addr=0x4da3, .value=0x3e}, {.addr=0x4da4, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0x4da3, .value=0x3e, .type=IO_READ},
        {.addr=0x4da4, .value=0x3c, .type=IO_READ},
        {.addr=0x003c, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_034A) {
    const struct CPU_State initial_cpu = {.pc=0x4685, .a=0x96, .x=0xb1, .y=0xad, .sp=0xca, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b3, .value=0xfc}, {.addr=0x4685, .value=0x3e}, {.addr=0x4686, .value=0xb3},
    };
    const struct CPU_State final_cpu = {.pc=0x4687, .a=0x96, .x=0xb1, .y=0xad, .sp=0xca, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b3, .value=0xfc}, {.addr=0x4685, .value=0x3e}, {.addr=0x4686, .value=0xb3},
    };
    const struct BusEvent events[] = {
        {.addr=0x4685, .value=0x3e, .type=IO_READ},
        {.addr=0x4686, .value=0xb3, .type=IO_READ},
        {.addr=0x01b3, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_034B) {
    const struct CPU_State initial_cpu = {.pc=0x3365, .a=0xbb, .x=0x11, .y=0xe6, .sp=0x63, .status=0xda};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009f, .value=0xa5}, {.addr=0x3365, .value=0x3e}, {.addr=0x3366, .value=0x9f},
    };
    const struct CPU_State final_cpu = {.pc=0x3367, .a=0xbb, .x=0x11, .y=0xe6, .sp=0x63, .status=0x58};
    const struct RamEntry final_ram[] = {
        {.addr=0x009f, .value=0xa5}, {.addr=0x3365, .value=0x3e}, {.addr=0x3366, .value=0x9f},
    };
    const struct BusEvent events[] = {
        {.addr=0x3365, .value=0x3e, .type=IO_READ},
        {.addr=0x3366, .value=0x9f, .type=IO_READ},
        {.addr=0x009f, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_034C) {
    const struct CPU_State initial_cpu = {.pc=0x5b13, .a=0x14, .x=0x45, .y=0xbf, .sp=0x64, .status=0xa3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f6, .value=0x9a}, {.addr=0x5b13, .value=0x3e}, {.addr=0x5b14, .value=0xf6},
    };
    const struct CPU_State final_cpu = {.pc=0x5b15, .a=0x14, .x=0x45, .y=0xbf, .sp=0x64, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f6, .value=0x9a}, {.addr=0x5b13, .value=0x3e}, {.addr=0x5b14, .value=0xf6},
    };
    const struct BusEvent events[] = {
        {.addr=0x5b13, .value=0x3e, .type=IO_READ},
        {.addr=0x5b14, .value=0xf6, .type=IO_READ},
        {.addr=0x01f6, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_034D) {
    const struct CPU_State initial_cpu = {.pc=0x36d4, .a=0x36, .x=0xec, .y=0xfd, .sp=0x62, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a6, .value=0x76}, {.addr=0x36d4, .value=0x3e}, {.addr=0x36d5, .value=0xa6},
    };
    const struct CPU_State final_cpu = {.pc=0x36d6, .a=0x36, .x=0xec, .y=0xfd, .sp=0x62, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a6, .value=0x76}, {.addr=0x36d4, .value=0x3e}, {.addr=0x36d5, .value=0xa6},
    };
    const struct BusEvent events[] = {
        {.addr=0x36d4, .value=0x3e, .type=IO_READ},
        {.addr=0x36d5, .value=0xa6, .type=IO_READ},
        {.addr=0x01a6, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_034E) {
    const struct CPU_State initial_cpu = {.pc=0xc066, .a=0x5a, .x=0x34, .y=0x66, .sp=0x2c, .status=0xde};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cb, .value=0x64}, {.addr=0xc066, .value=0x3e}, {.addr=0xc067, .value=0xcb},
    };
    const struct CPU_State final_cpu = {.pc=0xc068, .a=0x5a, .x=0x34, .y=0x66, .sp=0x2c, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cb, .value=0x64}, {.addr=0xc066, .value=0x3e}, {.addr=0xc067, .value=0xcb},
    };
    const struct BusEvent events[] = {
        {.addr=0xc066, .value=0x3e, .type=IO_READ},
        {.addr=0xc067, .value=0xcb, .type=IO_READ},
        {.addr=0x00cb, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_034F) {
    const struct CPU_State initial_cpu = {.pc=0x8f23, .a=0xa9, .x=0x23, .y=0x17, .sp=0xb0, .status=0x69};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0165, .value=0xb8}, {.addr=0x8f23, .value=0x3e}, {.addr=0x8f24, .value=0x65},
    };
    const struct CPU_State final_cpu = {.pc=0x8f25, .a=0xa9, .x=0x23, .y=0x17, .sp=0xb0, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x0165, .value=0xb8}, {.addr=0x8f23, .value=0x3e}, {.addr=0x8f24, .value=0x65},
    };
    const struct BusEvent events[] = {
        {.addr=0x8f23, .value=0x3e, .type=IO_READ},
        {.addr=0x8f24, .value=0x65, .type=IO_READ},
        {.addr=0x0165, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0350) {
    const struct CPU_State initial_cpu = {.pc=0xdd26, .a=0x9a, .x=0x02, .y=0xe5, .sp=0x1a, .status=0x93};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004e, .value=0x12}, {.addr=0xdd26, .value=0x3e}, {.addr=0xdd27, .value=0x4e},
    };
    const struct CPU_State final_cpu = {.pc=0xdd28, .a=0x9a, .x=0x02, .y=0xe5, .sp=0x1a, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x004e, .value=0x12}, {.addr=0xdd26, .value=0x3e}, {.addr=0xdd27, .value=0x4e},
    };
    const struct BusEvent events[] = {
        {.addr=0xdd26, .value=0x3e, .type=IO_READ},
        {.addr=0xdd27, .value=0x4e, .type=IO_READ},
        {.addr=0x004e, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0351) {
    const struct CPU_State initial_cpu = {.pc=0x9faa, .a=0x52, .x=0xa4, .y=0xec, .sp=0x32, .status=0x86};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0080, .value=0xd1}, {.addr=0x9faa, .value=0x3e}, {.addr=0x9fab, .value=0x80},
    };
    const struct CPU_State final_cpu = {.pc=0x9fac, .a=0x52, .x=0xa4, .y=0xec, .sp=0x32, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x0080, .value=0xd1}, {.addr=0x9faa, .value=0x3e}, {.addr=0x9fab, .value=0x80},
    };
    const struct BusEvent events[] = {
        {.addr=0x9faa, .value=0x3e, .type=IO_READ},
        {.addr=0x9fab, .value=0x80, .type=IO_READ},
        {.addr=0x0080, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0352) {
    const struct CPU_State initial_cpu = {.pc=0x9786, .a=0xf3, .x=0x4d, .y=0x09, .sp=0x26, .status=0xcb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0090, .value=0xce}, {.addr=0x9786, .value=0x3e}, {.addr=0x9787, .value=0x90},
    };
    const struct CPU_State final_cpu = {.pc=0x9788, .a=0xf3, .x=0x4d, .y=0x09, .sp=0x26, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x0090, .value=0xce}, {.addr=0x9786, .value=0x3e}, {.addr=0x9787, .value=0x90},
    };
    const struct BusEvent events[] = {
        {.addr=0x9786, .value=0x3e, .type=IO_READ},
        {.addr=0x9787, .value=0x90, .type=IO_READ},
        {.addr=0x0090, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0353) {
    const struct CPU_State initial_cpu = {.pc=0x7a4f, .a=0x27, .x=0xf2, .y=0x27, .sp=0xa6, .status=0xdd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0086, .value=0x70}, {.addr=0x7a4f, .value=0x3e}, {.addr=0x7a50, .value=0x86},
    };
    const struct CPU_State final_cpu = {.pc=0x7a51, .a=0x27, .x=0xf2, .y=0x27, .sp=0xa6, .status=0xdd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0086, .value=0x70}, {.addr=0x7a4f, .value=0x3e}, {.addr=0x7a50, .value=0x86},
    };
    const struct BusEvent events[] = {
        {.addr=0x7a4f, .value=0x3e, .type=IO_READ},
        {.addr=0x7a50, .value=0x86, .type=IO_READ},
        {.addr=0x0086, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0354) {
    const struct CPU_State initial_cpu = {.pc=0xe07d, .a=0x9e, .x=0xa0, .y=0xae, .sp=0x45, .status=0x1b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009f, .value=0xfe}, {.addr=0xe07d, .value=0x3e}, {.addr=0xe07e, .value=0x9f},
    };
    const struct CPU_State final_cpu = {.pc=0xe07f, .a=0x9e, .x=0xa0, .y=0xae, .sp=0x45, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x009f, .value=0xfe}, {.addr=0xe07d, .value=0x3e}, {.addr=0xe07e, .value=0x9f},
    };
    const struct BusEvent events[] = {
        {.addr=0xe07d, .value=0x3e, .type=IO_READ},
        {.addr=0xe07e, .value=0x9f, .type=IO_READ},
        {.addr=0x009f, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0355) {
    const struct CPU_State initial_cpu = {.pc=0xd01b, .a=0x51, .x=0xb9, .y=0x7c, .sp=0x07, .status=0x37};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0130, .value=0xdc}, {.addr=0xd01b, .value=0x3e}, {.addr=0xd01c, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0xd01d, .a=0x51, .x=0xb9, .y=0x7c, .sp=0x07, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0130, .value=0xdc}, {.addr=0xd01b, .value=0x3e}, {.addr=0xd01c, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0xd01b, .value=0x3e, .type=IO_READ},
        {.addr=0xd01c, .value=0x30, .type=IO_READ},
        {.addr=0x0130, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0356) {
    const struct CPU_State initial_cpu = {.pc=0x6301, .a=0x75, .x=0x02, .y=0x2f, .sp=0xa4, .status=0x73};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014c, .value=0x59}, {.addr=0x6301, .value=0x3e}, {.addr=0x6302, .value=0x4c},
    };
    const struct CPU_State final_cpu = {.pc=0x6303, .a=0x75, .x=0x02, .y=0x2f, .sp=0xa4, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x014c, .value=0x59}, {.addr=0x6301, .value=0x3e}, {.addr=0x6302, .value=0x4c},
    };
    const struct BusEvent events[] = {
        {.addr=0x6301, .value=0x3e, .type=IO_READ},
        {.addr=0x6302, .value=0x4c, .type=IO_READ},
        {.addr=0x014c, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0357) {
    const struct CPU_State initial_cpu = {.pc=0xab31, .a=0x81, .x=0x0d, .y=0x4e, .sp=0xf5, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0088, .value=0x63}, {.addr=0xab31, .value=0x3e}, {.addr=0xab32, .value=0x88},
    };
    const struct CPU_State final_cpu = {.pc=0xab33, .a=0x81, .x=0x0d, .y=0x4e, .sp=0xf5, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x0088, .value=0x63}, {.addr=0xab31, .value=0x3e}, {.addr=0xab32, .value=0x88},
    };
    const struct BusEvent events[] = {
        {.addr=0xab31, .value=0x3e, .type=IO_READ},
        {.addr=0xab32, .value=0x88, .type=IO_READ},
        {.addr=0x0088, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0358) {
    const struct CPU_State initial_cpu = {.pc=0x2a1d, .a=0x62, .x=0x79, .y=0xd9, .sp=0x1d, .status=0x0c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0044, .value=0x70}, {.addr=0x2a1d, .value=0x3e}, {.addr=0x2a1e, .value=0x44},
    };
    const struct CPU_State final_cpu = {.pc=0x2a1f, .a=0x62, .x=0x79, .y=0xd9, .sp=0x1d, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0044, .value=0x70}, {.addr=0x2a1d, .value=0x3e}, {.addr=0x2a1e, .value=0x44},
    };
    const struct BusEvent events[] = {
        {.addr=0x2a1d, .value=0x3e, .type=IO_READ},
        {.addr=0x2a1e, .value=0x44, .type=IO_READ},
        {.addr=0x0044, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0359) {
    const struct CPU_State initial_cpu = {.pc=0x74e0, .a=0x12, .x=0xee, .y=0xf2, .sp=0xd0, .status=0x2d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d1, .value=0xdc}, {.addr=0x74e0, .value=0x3e}, {.addr=0x74e1, .value=0xd1},
    };
    const struct CPU_State final_cpu = {.pc=0x74e2, .a=0x12, .x=0xee, .y=0xf2, .sp=0xd0, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d1, .value=0xdc}, {.addr=0x74e0, .value=0x3e}, {.addr=0x74e1, .value=0xd1},
    };
    const struct BusEvent events[] = {
        {.addr=0x74e0, .value=0x3e, .type=IO_READ},
        {.addr=0x74e1, .value=0xd1, .type=IO_READ},
        {.addr=0x01d1, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_035A) {
    const struct CPU_State initial_cpu = {.pc=0x47a5, .a=0x44, .x=0x51, .y=0x18, .sp=0x92, .status=0x6e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d8, .value=0x9d}, {.addr=0x47a5, .value=0x3e}, {.addr=0x47a6, .value=0xd8},
    };
    const struct CPU_State final_cpu = {.pc=0x47a7, .a=0x44, .x=0x51, .y=0x18, .sp=0x92, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d8, .value=0x9d}, {.addr=0x47a5, .value=0x3e}, {.addr=0x47a6, .value=0xd8},
    };
    const struct BusEvent events[] = {
        {.addr=0x47a5, .value=0x3e, .type=IO_READ},
        {.addr=0x47a6, .value=0xd8, .type=IO_READ},
        {.addr=0x01d8, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_035B) {
    const struct CPU_State initial_cpu = {.pc=0xcdf3, .a=0x40, .x=0x52, .y=0x67, .sp=0xcd, .status=0x2d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f4, .value=0xd4}, {.addr=0xcdf3, .value=0x3e}, {.addr=0xcdf4, .value=0xf4},
    };
    const struct CPU_State final_cpu = {.pc=0xcdf5, .a=0x40, .x=0x52, .y=0x67, .sp=0xcd, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f4, .value=0xd4}, {.addr=0xcdf3, .value=0x3e}, {.addr=0xcdf4, .value=0xf4},
    };
    const struct BusEvent events[] = {
        {.addr=0xcdf3, .value=0x3e, .type=IO_READ},
        {.addr=0xcdf4, .value=0xf4, .type=IO_READ},
        {.addr=0x01f4, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_035C) {
    const struct CPU_State initial_cpu = {.pc=0xee83, .a=0x2d, .x=0xc3, .y=0x9f, .sp=0x49, .status=0xff};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e9, .value=0x78}, {.addr=0xee83, .value=0x3e}, {.addr=0xee84, .value=0xe9},
    };
    const struct CPU_State final_cpu = {.pc=0xee85, .a=0x2d, .x=0xc3, .y=0x9f, .sp=0x49, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e9, .value=0x78}, {.addr=0xee83, .value=0x3e}, {.addr=0xee84, .value=0xe9},
    };
    const struct BusEvent events[] = {
        {.addr=0xee83, .value=0x3e, .type=IO_READ},
        {.addr=0xee84, .value=0xe9, .type=IO_READ},
        {.addr=0x01e9, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_035D) {
    const struct CPU_State initial_cpu = {.pc=0x822c, .a=0x4d, .x=0xe3, .y=0x78, .sp=0x49, .status=0xaf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014b, .value=0xe9}, {.addr=0x822c, .value=0x3e}, {.addr=0x822d, .value=0x4b},
    };
    const struct CPU_State final_cpu = {.pc=0x822e, .a=0x4d, .x=0xe3, .y=0x78, .sp=0x49, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x014b, .value=0xe9}, {.addr=0x822c, .value=0x3e}, {.addr=0x822d, .value=0x4b},
    };
    const struct BusEvent events[] = {
        {.addr=0x822c, .value=0x3e, .type=IO_READ},
        {.addr=0x822d, .value=0x4b, .type=IO_READ},
        {.addr=0x014b, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_035E) {
    const struct CPU_State initial_cpu = {.pc=0x11dd, .a=0x75, .x=0xdf, .y=0xe9, .sp=0xf4, .status=0x7b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0164, .value=0x8c}, {.addr=0x11dd, .value=0x3e}, {.addr=0x11de, .value=0x64},
    };
    const struct CPU_State final_cpu = {.pc=0x11df, .a=0x75, .x=0xdf, .y=0xe9, .sp=0xf4, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x0164, .value=0x8c}, {.addr=0x11dd, .value=0x3e}, {.addr=0x11de, .value=0x64},
    };
    const struct BusEvent events[] = {
        {.addr=0x11dd, .value=0x3e, .type=IO_READ},
        {.addr=0x11de, .value=0x64, .type=IO_READ},
        {.addr=0x0164, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_035F) {
    const struct CPU_State initial_cpu = {.pc=0xf4cf, .a=0x04, .x=0xb4, .y=0x20, .sp=0x98, .status=0x2c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fb, .value=0xec}, {.addr=0xf4cf, .value=0x3e}, {.addr=0xf4d0, .value=0xfb},
    };
    const struct CPU_State final_cpu = {.pc=0xf4d1, .a=0x04, .x=0xb4, .y=0x20, .sp=0x98, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fb, .value=0xec}, {.addr=0xf4cf, .value=0x3e}, {.addr=0xf4d0, .value=0xfb},
    };
    const struct BusEvent events[] = {
        {.addr=0xf4cf, .value=0x3e, .type=IO_READ},
        {.addr=0xf4d0, .value=0xfb, .type=IO_READ},
        {.addr=0x01fb, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0360) {
    const struct CPU_State initial_cpu = {.pc=0x0c74, .a=0x22, .x=0x4f, .y=0x1d, .sp=0xab, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0127, .value=0x48}, {.addr=0x0c74, .value=0x3e}, {.addr=0x0c75, .value=0x27},
    };
    const struct CPU_State final_cpu = {.pc=0x0c76, .a=0x22, .x=0x4f, .y=0x1d, .sp=0xab, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x0127, .value=0x48}, {.addr=0x0c74, .value=0x3e}, {.addr=0x0c75, .value=0x27},
    };
    const struct BusEvent events[] = {
        {.addr=0x0c74, .value=0x3e, .type=IO_READ},
        {.addr=0x0c75, .value=0x27, .type=IO_READ},
        {.addr=0x0127, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0361) {
    const struct CPU_State initial_cpu = {.pc=0x3905, .a=0x7e, .x=0x3b, .y=0x41, .sp=0x71, .status=0x67};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0130, .value=0xb4}, {.addr=0x3905, .value=0x3e}, {.addr=0x3906, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0x3907, .a=0x7e, .x=0x3b, .y=0x41, .sp=0x71, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0130, .value=0xb4}, {.addr=0x3905, .value=0x3e}, {.addr=0x3906, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0x3905, .value=0x3e, .type=IO_READ},
        {.addr=0x3906, .value=0x30, .type=IO_READ},
        {.addr=0x0130, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0362) {
    const struct CPU_State initial_cpu = {.pc=0x080c, .a=0x62, .x=0xf6, .y=0x14, .sp=0x9e, .status=0x4d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b0, .value=0xa3}, {.addr=0x080c, .value=0x3e}, {.addr=0x080d, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0x080e, .a=0x62, .x=0xf6, .y=0x14, .sp=0x9e, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b0, .value=0xa3}, {.addr=0x080c, .value=0x3e}, {.addr=0x080d, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0x080c, .value=0x3e, .type=IO_READ},
        {.addr=0x080d, .value=0xb0, .type=IO_READ},
        {.addr=0x00b0, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0363) {
    const struct CPU_State initial_cpu = {.pc=0x5238, .a=0x97, .x=0x07, .y=0xb8, .sp=0x87, .status=0xba};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0135, .value=0x30}, {.addr=0x5238, .value=0x3e}, {.addr=0x5239, .value=0x35},
    };
    const struct CPU_State final_cpu = {.pc=0x523a, .a=0x97, .x=0x07, .y=0xb8, .sp=0x87, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0135, .value=0x30}, {.addr=0x5238, .value=0x3e}, {.addr=0x5239, .value=0x35},
    };
    const struct BusEvent events[] = {
        {.addr=0x5238, .value=0x3e, .type=IO_READ},
        {.addr=0x5239, .value=0x35, .type=IO_READ},
        {.addr=0x0135, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0364) {
    const struct CPU_State initial_cpu = {.pc=0x9f1b, .a=0xde, .x=0xe2, .y=0x6a, .sp=0x8e, .status=0xf7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0196, .value=0x2d}, {.addr=0x9f1b, .value=0x3e}, {.addr=0x9f1c, .value=0x96},
    };
    const struct CPU_State final_cpu = {.pc=0x9f1d, .a=0xde, .x=0xe2, .y=0x6a, .sp=0x8e, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0196, .value=0x2d}, {.addr=0x9f1b, .value=0x3e}, {.addr=0x9f1c, .value=0x96},
    };
    const struct BusEvent events[] = {
        {.addr=0x9f1b, .value=0x3e, .type=IO_READ},
        {.addr=0x9f1c, .value=0x96, .type=IO_READ},
        {.addr=0x0196, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0365) {
    const struct CPU_State initial_cpu = {.pc=0xc2fe, .a=0x57, .x=0x26, .y=0xaf, .sp=0x52, .status=0x73};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0164, .value=0x87}, {.addr=0xc2fe, .value=0x3e}, {.addr=0xc2ff, .value=0x64},
    };
    const struct CPU_State final_cpu = {.pc=0xc300, .a=0x57, .x=0x26, .y=0xaf, .sp=0x52, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0164, .value=0x87}, {.addr=0xc2fe, .value=0x3e}, {.addr=0xc2ff, .value=0x64},
    };
    const struct BusEvent events[] = {
        {.addr=0xc2fe, .value=0x3e, .type=IO_READ},
        {.addr=0xc2ff, .value=0x64, .type=IO_READ},
        {.addr=0x0164, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0366) {
    const struct CPU_State initial_cpu = {.pc=0x1614, .a=0x57, .x=0xf1, .y=0xcc, .sp=0x73, .status=0xa6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01be, .value=0x05}, {.addr=0x1614, .value=0x3e}, {.addr=0x1615, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0x1616, .a=0x57, .x=0xf1, .y=0xcc, .sp=0x73, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01be, .value=0x05}, {.addr=0x1614, .value=0x3e}, {.addr=0x1615, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0x1614, .value=0x3e, .type=IO_READ},
        {.addr=0x1615, .value=0xbe, .type=IO_READ},
        {.addr=0x01be, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0367) {
    const struct CPU_State initial_cpu = {.pc=0x36f1, .a=0x9d, .x=0x57, .y=0x0c, .sp=0x45, .status=0x00};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0044, .value=0x12}, {.addr=0x36f1, .value=0x3e}, {.addr=0x36f2, .value=0x44},
    };
    const struct CPU_State final_cpu = {.pc=0x36f3, .a=0x9d, .x=0x57, .y=0x0c, .sp=0x45, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x0044, .value=0x12}, {.addr=0x36f1, .value=0x3e}, {.addr=0x36f2, .value=0x44},
    };
    const struct BusEvent events[] = {
        {.addr=0x36f1, .value=0x3e, .type=IO_READ},
        {.addr=0x36f2, .value=0x44, .type=IO_READ},
        {.addr=0x0044, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0368) {
    const struct CPU_State initial_cpu = {.pc=0x99d6, .a=0x63, .x=0x6e, .y=0x92, .sp=0xf5, .status=0xd7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001f, .value=0xa2}, {.addr=0x99d6, .value=0x3e}, {.addr=0x99d7, .value=0x1f},
    };
    const struct CPU_State final_cpu = {.pc=0x99d8, .a=0x63, .x=0x6e, .y=0x92, .sp=0xf5, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x001f, .value=0xa2}, {.addr=0x99d6, .value=0x3e}, {.addr=0x99d7, .value=0x1f},
    };
    const struct BusEvent events[] = {
        {.addr=0x99d6, .value=0x3e, .type=IO_READ},
        {.addr=0x99d7, .value=0x1f, .type=IO_READ},
        {.addr=0x001f, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0369) {
    const struct CPU_State initial_cpu = {.pc=0xfc67, .a=0x1c, .x=0xe6, .y=0xbc, .sp=0xe8, .status=0xf3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a4, .value=0x29}, {.addr=0xfc67, .value=0x3e}, {.addr=0xfc68, .value=0xa4},
    };
    const struct CPU_State final_cpu = {.pc=0xfc69, .a=0x1c, .x=0xe6, .y=0xbc, .sp=0xe8, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a4, .value=0x29}, {.addr=0xfc67, .value=0x3e}, {.addr=0xfc68, .value=0xa4},
    };
    const struct BusEvent events[] = {
        {.addr=0xfc67, .value=0x3e, .type=IO_READ},
        {.addr=0xfc68, .value=0xa4, .type=IO_READ},
        {.addr=0x01a4, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_036A) {
    const struct CPU_State initial_cpu = {.pc=0xf263, .a=0xc8, .x=0x66, .y=0x49, .sp=0xb3, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0154, .value=0xd7}, {.addr=0xf263, .value=0x3e}, {.addr=0xf264, .value=0x54},
    };
    const struct CPU_State final_cpu = {.pc=0xf265, .a=0xc8, .x=0x66, .y=0x49, .sp=0xb3, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0154, .value=0xd7}, {.addr=0xf263, .value=0x3e}, {.addr=0xf264, .value=0x54},
    };
    const struct BusEvent events[] = {
        {.addr=0xf263, .value=0x3e, .type=IO_READ},
        {.addr=0xf264, .value=0x54, .type=IO_READ},
        {.addr=0x0154, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_036B) {
    const struct CPU_State initial_cpu = {.pc=0x2936, .a=0xa4, .x=0xe5, .y=0x11, .sp=0xee, .status=0x19};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005c, .value=0xe8}, {.addr=0x2936, .value=0x3e}, {.addr=0x2937, .value=0x5c},
    };
    const struct CPU_State final_cpu = {.pc=0x2938, .a=0xa4, .x=0xe5, .y=0x11, .sp=0xee, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x005c, .value=0xe8}, {.addr=0x2936, .value=0x3e}, {.addr=0x2937, .value=0x5c},
    };
    const struct BusEvent events[] = {
        {.addr=0x2936, .value=0x3e, .type=IO_READ},
        {.addr=0x2937, .value=0x5c, .type=IO_READ},
        {.addr=0x005c, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_036C) {
    const struct CPU_State initial_cpu = {.pc=0xf002, .a=0x36, .x=0x8b, .y=0xc8, .sp=0xf2, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0188, .value=0x48}, {.addr=0xf002, .value=0x3e}, {.addr=0xf003, .value=0x88},
    };
    const struct CPU_State final_cpu = {.pc=0xf004, .a=0x36, .x=0x8b, .y=0xc8, .sp=0xf2, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x0188, .value=0x48}, {.addr=0xf002, .value=0x3e}, {.addr=0xf003, .value=0x88},
    };
    const struct BusEvent events[] = {
        {.addr=0xf002, .value=0x3e, .type=IO_READ},
        {.addr=0xf003, .value=0x88, .type=IO_READ},
        {.addr=0x0188, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_036D) {
    const struct CPU_State initial_cpu = {.pc=0x3983, .a=0x59, .x=0x71, .y=0xaa, .sp=0xdf, .status=0x3e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010d, .value=0xe3}, {.addr=0x3983, .value=0x3e}, {.addr=0x3984, .value=0x0d},
    };
    const struct CPU_State final_cpu = {.pc=0x3985, .a=0x59, .x=0x71, .y=0xaa, .sp=0xdf, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x010d, .value=0xe3}, {.addr=0x3983, .value=0x3e}, {.addr=0x3984, .value=0x0d},
    };
    const struct BusEvent events[] = {
        {.addr=0x3983, .value=0x3e, .type=IO_READ},
        {.addr=0x3984, .value=0x0d, .type=IO_READ},
        {.addr=0x010d, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_036E) {
    const struct CPU_State initial_cpu = {.pc=0xb2e4, .a=0x6a, .x=0xe8, .y=0x3a, .sp=0x04, .status=0x50};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0089, .value=0x18}, {.addr=0xb2e4, .value=0x3e}, {.addr=0xb2e5, .value=0x89},
    };
    const struct CPU_State final_cpu = {.pc=0xb2e6, .a=0x6a, .x=0xe8, .y=0x3a, .sp=0x04, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0089, .value=0x18}, {.addr=0xb2e4, .value=0x3e}, {.addr=0xb2e5, .value=0x89},
    };
    const struct BusEvent events[] = {
        {.addr=0xb2e4, .value=0x3e, .type=IO_READ},
        {.addr=0xb2e5, .value=0x89, .type=IO_READ},
        {.addr=0x0089, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_036F) {
    const struct CPU_State initial_cpu = {.pc=0xb2cc, .a=0xe9, .x=0xf1, .y=0x4c, .sp=0x83, .status=0x0a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0020, .value=0x61}, {.addr=0xb2cc, .value=0x3e}, {.addr=0xb2cd, .value=0x20},
    };
    const struct CPU_State final_cpu = {.pc=0xb2ce, .a=0xe9, .x=0xf1, .y=0x4c, .sp=0x83, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x0020, .value=0x61}, {.addr=0xb2cc, .value=0x3e}, {.addr=0xb2cd, .value=0x20},
    };
    const struct BusEvent events[] = {
        {.addr=0xb2cc, .value=0x3e, .type=IO_READ},
        {.addr=0xb2cd, .value=0x20, .type=IO_READ},
        {.addr=0x0020, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0370) {
    const struct CPU_State initial_cpu = {.pc=0xf0c4, .a=0x67, .x=0x41, .y=0x4d, .sp=0x46, .status=0xdb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e6, .value=0x0e}, {.addr=0xf0c4, .value=0x3e}, {.addr=0xf0c5, .value=0xe6},
    };
    const struct CPU_State final_cpu = {.pc=0xf0c6, .a=0x67, .x=0x41, .y=0x4d, .sp=0x46, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e6, .value=0x0e}, {.addr=0xf0c4, .value=0x3e}, {.addr=0xf0c5, .value=0xe6},
    };
    const struct BusEvent events[] = {
        {.addr=0xf0c4, .value=0x3e, .type=IO_READ},
        {.addr=0xf0c5, .value=0xe6, .type=IO_READ},
        {.addr=0x00e6, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0371) {
    const struct CPU_State initial_cpu = {.pc=0x35a8, .a=0x89, .x=0x37, .y=0xbc, .sp=0x0e, .status=0x50};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0054, .value=0x8f}, {.addr=0x35a8, .value=0x3e}, {.addr=0x35a9, .value=0x54},
    };
    const struct CPU_State final_cpu = {.pc=0x35aa, .a=0x89, .x=0x37, .y=0xbc, .sp=0x0e, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0054, .value=0x8f}, {.addr=0x35a8, .value=0x3e}, {.addr=0x35a9, .value=0x54},
    };
    const struct BusEvent events[] = {
        {.addr=0x35a8, .value=0x3e, .type=IO_READ},
        {.addr=0x35a9, .value=0x54, .type=IO_READ},
        {.addr=0x0054, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0372) {
    const struct CPU_State initial_cpu = {.pc=0x07c3, .a=0xbe, .x=0xa5, .y=0x91, .sp=0xd1, .status=0xf3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01da, .value=0xb6}, {.addr=0x07c3, .value=0x3e}, {.addr=0x07c4, .value=0xda},
    };
    const struct CPU_State final_cpu = {.pc=0x07c5, .a=0xbe, .x=0xa5, .y=0x91, .sp=0xd1, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01da, .value=0xb6}, {.addr=0x07c3, .value=0x3e}, {.addr=0x07c4, .value=0xda},
    };
    const struct BusEvent events[] = {
        {.addr=0x07c3, .value=0x3e, .type=IO_READ},
        {.addr=0x07c4, .value=0xda, .type=IO_READ},
        {.addr=0x01da, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0373) {
    const struct CPU_State initial_cpu = {.pc=0xbb28, .a=0xce, .x=0x4c, .y=0xc4, .sp=0x2f, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011b, .value=0xe4}, {.addr=0xbb28, .value=0x3e}, {.addr=0xbb29, .value=0x1b},
    };
    const struct CPU_State final_cpu = {.pc=0xbb2a, .a=0xce, .x=0x4c, .y=0xc4, .sp=0x2f, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x011b, .value=0xe4}, {.addr=0xbb28, .value=0x3e}, {.addr=0xbb29, .value=0x1b},
    };
    const struct BusEvent events[] = {
        {.addr=0xbb28, .value=0x3e, .type=IO_READ},
        {.addr=0xbb29, .value=0x1b, .type=IO_READ},
        {.addr=0x011b, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0374) {
    const struct CPU_State initial_cpu = {.pc=0xacc9, .a=0xa0, .x=0x3c, .y=0x43, .sp=0x3f, .status=0xe0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0186, .value=0xd7}, {.addr=0xacc9, .value=0x3e}, {.addr=0xacca, .value=0x86},
    };
    const struct CPU_State final_cpu = {.pc=0xaccb, .a=0xa0, .x=0x3c, .y=0x43, .sp=0x3f, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x0186, .value=0xd7}, {.addr=0xacc9, .value=0x3e}, {.addr=0xacca, .value=0x86},
    };
    const struct BusEvent events[] = {
        {.addr=0xacc9, .value=0x3e, .type=IO_READ},
        {.addr=0xacca, .value=0x86, .type=IO_READ},
        {.addr=0x0186, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0375) {
    const struct CPU_State initial_cpu = {.pc=0xcce6, .a=0xe7, .x=0x2b, .y=0x7b, .sp=0x7d, .status=0x77};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015f, .value=0xe4}, {.addr=0xcce6, .value=0x3e}, {.addr=0xcce7, .value=0x5f},
    };
    const struct CPU_State final_cpu = {.pc=0xcce8, .a=0xe7, .x=0x2b, .y=0x7b, .sp=0x7d, .status=0x74};
    const struct RamEntry final_ram[] = {
        {.addr=0x015f, .value=0xe4}, {.addr=0xcce6, .value=0x3e}, {.addr=0xcce7, .value=0x5f},
    };
    const struct BusEvent events[] = {
        {.addr=0xcce6, .value=0x3e, .type=IO_READ},
        {.addr=0xcce7, .value=0x5f, .type=IO_READ},
        {.addr=0x015f, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0376) {
    const struct CPU_State initial_cpu = {.pc=0x82e6, .a=0xfd, .x=0x41, .y=0x32, .sp=0x74, .status=0x00};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0014, .value=0x41}, {.addr=0x82e6, .value=0x3e}, {.addr=0x82e7, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0x82e8, .a=0xfd, .x=0x41, .y=0x32, .sp=0x74, .status=0x03};
    const struct RamEntry final_ram[] = {
        {.addr=0x0014, .value=0x41}, {.addr=0x82e6, .value=0x3e}, {.addr=0x82e7, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0x82e6, .value=0x3e, .type=IO_READ},
        {.addr=0x82e7, .value=0x14, .type=IO_READ},
        {.addr=0x0014, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0377) {
    const struct CPU_State initial_cpu = {.pc=0xbb4f, .a=0xce, .x=0xb1, .y=0x22, .sp=0xd5, .status=0xcd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00df, .value=0x73}, {.addr=0xbb4f, .value=0x3e}, {.addr=0xbb50, .value=0xdf},
    };
    const struct CPU_State final_cpu = {.pc=0xbb51, .a=0xce, .x=0xb1, .y=0x22, .sp=0xd5, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00df, .value=0x73}, {.addr=0xbb4f, .value=0x3e}, {.addr=0xbb50, .value=0xdf},
    };
    const struct BusEvent events[] = {
        {.addr=0xbb4f, .value=0x3e, .type=IO_READ},
        {.addr=0xbb50, .value=0xdf, .type=IO_READ},
        {.addr=0x00df, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0378) {
    const struct CPU_State initial_cpu = {.pc=0x4f0d, .a=0x8b, .x=0xec, .y=0x3a, .sp=0x0c, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0150, .value=0x4f}, {.addr=0x4f0d, .value=0x3e}, {.addr=0x4f0e, .value=0x50},
    };
    const struct CPU_State final_cpu = {.pc=0x4f0f, .a=0x8b, .x=0xec, .y=0x3a, .sp=0x0c, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0150, .value=0x4f}, {.addr=0x4f0d, .value=0x3e}, {.addr=0x4f0e, .value=0x50},
    };
    const struct BusEvent events[] = {
        {.addr=0x4f0d, .value=0x3e, .type=IO_READ},
        {.addr=0x4f0e, .value=0x50, .type=IO_READ},
        {.addr=0x0150, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0379) {
    const struct CPU_State initial_cpu = {.pc=0x09f7, .a=0x2a, .x=0x99, .y=0xf2, .sp=0x30, .status=0x80};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001a, .value=0x78}, {.addr=0x09f7, .value=0x3e}, {.addr=0x09f8, .value=0x1a},
    };
    const struct CPU_State final_cpu = {.pc=0x09f9, .a=0x2a, .x=0x99, .y=0xf2, .sp=0x30, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x001a, .value=0x78}, {.addr=0x09f7, .value=0x3e}, {.addr=0x09f8, .value=0x1a},
    };
    const struct BusEvent events[] = {
        {.addr=0x09f7, .value=0x3e, .type=IO_READ},
        {.addr=0x09f8, .value=0x1a, .type=IO_READ},
        {.addr=0x001a, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_037A) {
    const struct CPU_State initial_cpu = {.pc=0x435d, .a=0xc0, .x=0x6d, .y=0xa6, .sp=0x08, .status=0x2c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0108, .value=0xc8}, {.addr=0x435d, .value=0x3e}, {.addr=0x435e, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0x435f, .a=0xc0, .x=0x6d, .y=0xa6, .sp=0x08, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0108, .value=0xc8}, {.addr=0x435d, .value=0x3e}, {.addr=0x435e, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0x435d, .value=0x3e, .type=IO_READ},
        {.addr=0x435e, .value=0x08, .type=IO_READ},
        {.addr=0x0108, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_037B) {
    const struct CPU_State initial_cpu = {.pc=0xc560, .a=0x06, .x=0xb4, .y=0xd6, .sp=0xff, .status=0xd6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000a, .value=0xc6}, {.addr=0xc560, .value=0x3e}, {.addr=0xc561, .value=0x0a},
    };
    const struct CPU_State final_cpu = {.pc=0xc562, .a=0x06, .x=0xb4, .y=0xd6, .sp=0xff, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x000a, .value=0xc6}, {.addr=0xc560, .value=0x3e}, {.addr=0xc561, .value=0x0a},
    };
    const struct BusEvent events[] = {
        {.addr=0xc560, .value=0x3e, .type=IO_READ},
        {.addr=0xc561, .value=0x0a, .type=IO_READ},
        {.addr=0x000a, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_037C) {
    const struct CPU_State initial_cpu = {.pc=0x9b7e, .a=0xbc, .x=0x56, .y=0x75, .sp=0x89, .status=0x64};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b1, .value=0x6f}, {.addr=0x9b7e, .value=0x3e}, {.addr=0x9b7f, .value=0xb1},
    };
    const struct CPU_State final_cpu = {.pc=0x9b80, .a=0xbc, .x=0x56, .y=0x75, .sp=0x89, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b1, .value=0x6f}, {.addr=0x9b7e, .value=0x3e}, {.addr=0x9b7f, .value=0xb1},
    };
    const struct BusEvent events[] = {
        {.addr=0x9b7e, .value=0x3e, .type=IO_READ},
        {.addr=0x9b7f, .value=0xb1, .type=IO_READ},
        {.addr=0x01b1, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_037D) {
    const struct CPU_State initial_cpu = {.pc=0xaecb, .a=0xf0, .x=0xde, .y=0x69, .sp=0xef, .status=0x76};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0154, .value=0xe6}, {.addr=0xaecb, .value=0x3e}, {.addr=0xaecc, .value=0x54},
    };
    const struct CPU_State final_cpu = {.pc=0xaecd, .a=0xf0, .x=0xde, .y=0x69, .sp=0xef, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0154, .value=0xe6}, {.addr=0xaecb, .value=0x3e}, {.addr=0xaecc, .value=0x54},
    };
    const struct BusEvent events[] = {
        {.addr=0xaecb, .value=0x3e, .type=IO_READ},
        {.addr=0xaecc, .value=0x54, .type=IO_READ},
        {.addr=0x0154, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_037E) {
    const struct CPU_State initial_cpu = {.pc=0x4328, .a=0x61, .x=0x1e, .y=0xde, .sp=0x4d, .status=0x44};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004c, .value=0x40}, {.addr=0x4328, .value=0x3e}, {.addr=0x4329, .value=0x4c},
    };
    const struct CPU_State final_cpu = {.pc=0x432a, .a=0x61, .x=0x1e, .y=0xde, .sp=0x4d, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x004c, .value=0x40}, {.addr=0x4328, .value=0x3e}, {.addr=0x4329, .value=0x4c},
    };
    const struct BusEvent events[] = {
        {.addr=0x4328, .value=0x3e, .type=IO_READ},
        {.addr=0x4329, .value=0x4c, .type=IO_READ},
        {.addr=0x004c, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_037F) {
    const struct CPU_State initial_cpu = {.pc=0x5198, .a=0x14, .x=0x49, .y=0xd8, .sp=0x83, .status=0xac};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01dc, .value=0x7a}, {.addr=0x5198, .value=0x3e}, {.addr=0x5199, .value=0xdc},
    };
    const struct CPU_State final_cpu = {.pc=0x519a, .a=0x14, .x=0x49, .y=0xd8, .sp=0x83, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x01dc, .value=0x7a}, {.addr=0x5198, .value=0x3e}, {.addr=0x5199, .value=0xdc},
    };
    const struct BusEvent events[] = {
        {.addr=0x5198, .value=0x3e, .type=IO_READ},
        {.addr=0x5199, .value=0xdc, .type=IO_READ},
        {.addr=0x01dc, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0380) {
    const struct CPU_State initial_cpu = {.pc=0x5808, .a=0x3b, .x=0x3e, .y=0x0a, .sp=0x7e, .status=0x03};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001b, .value=0x48}, {.addr=0x5808, .value=0x3e}, {.addr=0x5809, .value=0x1b},
    };
    const struct CPU_State final_cpu = {.pc=0x580a, .a=0x3b, .x=0x3e, .y=0x0a, .sp=0x7e, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x001b, .value=0x48}, {.addr=0x5808, .value=0x3e}, {.addr=0x5809, .value=0x1b},
    };
    const struct BusEvent events[] = {
        {.addr=0x5808, .value=0x3e, .type=IO_READ},
        {.addr=0x5809, .value=0x1b, .type=IO_READ},
        {.addr=0x001b, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0381) {
    const struct CPU_State initial_cpu = {.pc=0x05ec, .a=0x72, .x=0xb2, .y=0x87, .sp=0xdc, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012c, .value=0xf1}, {.addr=0x05ec, .value=0x3e}, {.addr=0x05ed, .value=0x2c},
    };
    const struct CPU_State final_cpu = {.pc=0x05ee, .a=0x72, .x=0xb2, .y=0x87, .sp=0xdc, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x012c, .value=0xf1}, {.addr=0x05ec, .value=0x3e}, {.addr=0x05ed, .value=0x2c},
    };
    const struct BusEvent events[] = {
        {.addr=0x05ec, .value=0x3e, .type=IO_READ},
        {.addr=0x05ed, .value=0x2c, .type=IO_READ},
        {.addr=0x012c, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0382) {
    const struct CPU_State initial_cpu = {.pc=0x0c10, .a=0x1b, .x=0xf6, .y=0x11, .sp=0x63, .status=0x35};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f5, .value=0x71}, {.addr=0x0c10, .value=0x3e}, {.addr=0x0c11, .value=0xf5},
    };
    const struct CPU_State final_cpu = {.pc=0x0c12, .a=0x1b, .x=0xf6, .y=0x11, .sp=0x63, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f5, .value=0x71}, {.addr=0x0c10, .value=0x3e}, {.addr=0x0c11, .value=0xf5},
    };
    const struct BusEvent events[] = {
        {.addr=0x0c10, .value=0x3e, .type=IO_READ},
        {.addr=0x0c11, .value=0xf5, .type=IO_READ},
        {.addr=0x01f5, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0383) {
    const struct CPU_State initial_cpu = {.pc=0xb0df, .a=0xe6, .x=0x0e, .y=0x06, .sp=0x27, .status=0x13};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0043, .value=0xb9}, {.addr=0xb0df, .value=0x3e}, {.addr=0xb0e0, .value=0x43},
    };
    const struct CPU_State final_cpu = {.pc=0xb0e1, .a=0xe6, .x=0x0e, .y=0x06, .sp=0x27, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x0043, .value=0xb9}, {.addr=0xb0df, .value=0x3e}, {.addr=0xb0e0, .value=0x43},
    };
    const struct BusEvent events[] = {
        {.addr=0xb0df, .value=0x3e, .type=IO_READ},
        {.addr=0xb0e0, .value=0x43, .type=IO_READ},
        {.addr=0x0043, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0384) {
    const struct CPU_State initial_cpu = {.pc=0x23c2, .a=0x0d, .x=0x95, .y=0x52, .sp=0x03, .status=0x16};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0082, .value=0x6c}, {.addr=0x23c2, .value=0x3e}, {.addr=0x23c3, .value=0x82},
    };
    const struct CPU_State final_cpu = {.pc=0x23c4, .a=0x0d, .x=0x95, .y=0x52, .sp=0x03, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x0082, .value=0x6c}, {.addr=0x23c2, .value=0x3e}, {.addr=0x23c3, .value=0x82},
    };
    const struct BusEvent events[] = {
        {.addr=0x23c2, .value=0x3e, .type=IO_READ},
        {.addr=0x23c3, .value=0x82, .type=IO_READ},
        {.addr=0x0082, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0385) {
    const struct CPU_State initial_cpu = {.pc=0x1691, .a=0x9a, .x=0x5a, .y=0x6b, .sp=0xcb, .status=0x4d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cd, .value=0x31}, {.addr=0x1691, .value=0x3e}, {.addr=0x1692, .value=0xcd},
    };
    const struct CPU_State final_cpu = {.pc=0x1693, .a=0x9a, .x=0x5a, .y=0x6b, .sp=0xcb, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cd, .value=0x31}, {.addr=0x1691, .value=0x3e}, {.addr=0x1692, .value=0xcd},
    };
    const struct BusEvent events[] = {
        {.addr=0x1691, .value=0x3e, .type=IO_READ},
        {.addr=0x1692, .value=0xcd, .type=IO_READ},
        {.addr=0x00cd, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0386) {
    const struct CPU_State initial_cpu = {.pc=0x1551, .a=0xf0, .x=0x37, .y=0x8c, .sp=0x05, .status=0x40};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ba, .value=0xe2}, {.addr=0x1551, .value=0x3e}, {.addr=0x1552, .value=0xba},
    };
    const struct CPU_State final_cpu = {.pc=0x1553, .a=0xf0, .x=0x37, .y=0x8c, .sp=0x05, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ba, .value=0xe2}, {.addr=0x1551, .value=0x3e}, {.addr=0x1552, .value=0xba},
    };
    const struct BusEvent events[] = {
        {.addr=0x1551, .value=0x3e, .type=IO_READ},
        {.addr=0x1552, .value=0xba, .type=IO_READ},
        {.addr=0x00ba, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0387) {
    const struct CPU_State initial_cpu = {.pc=0x6206, .a=0xaf, .x=0x62, .y=0xe1, .sp=0xda, .status=0xbf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019e, .value=0x5a}, {.addr=0x6206, .value=0x3e}, {.addr=0x6207, .value=0x9e},
    };
    const struct CPU_State final_cpu = {.pc=0x6208, .a=0xaf, .x=0x62, .y=0xe1, .sp=0xda, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x019e, .value=0x5a}, {.addr=0x6206, .value=0x3e}, {.addr=0x6207, .value=0x9e},
    };
    const struct BusEvent events[] = {
        {.addr=0x6206, .value=0x3e, .type=IO_READ},
        {.addr=0x6207, .value=0x9e, .type=IO_READ},
        {.addr=0x019e, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0388) {
    const struct CPU_State initial_cpu = {.pc=0x533a, .a=0x08, .x=0xdf, .y=0xcb, .sp=0x32, .status=0x7b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019c, .value=0xf9}, {.addr=0x533a, .value=0x3e}, {.addr=0x533b, .value=0x9c},
    };
    const struct CPU_State final_cpu = {.pc=0x533c, .a=0x08, .x=0xdf, .y=0xcb, .sp=0x32, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x019c, .value=0xf9}, {.addr=0x533a, .value=0x3e}, {.addr=0x533b, .value=0x9c},
    };
    const struct BusEvent events[] = {
        {.addr=0x533a, .value=0x3e, .type=IO_READ},
        {.addr=0x533b, .value=0x9c, .type=IO_READ},
        {.addr=0x019c, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0389) {
    const struct CPU_State initial_cpu = {.pc=0x4241, .a=0x32, .x=0x5f, .y=0x25, .sp=0x80, .status=0xa8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0166, .value=0x53}, {.addr=0x4241, .value=0x3e}, {.addr=0x4242, .value=0x66},
    };
    const struct CPU_State final_cpu = {.pc=0x4243, .a=0x32, .x=0x5f, .y=0x25, .sp=0x80, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x0166, .value=0x53}, {.addr=0x4241, .value=0x3e}, {.addr=0x4242, .value=0x66},
    };
    const struct BusEvent events[] = {
        {.addr=0x4241, .value=0x3e, .type=IO_READ},
        {.addr=0x4242, .value=0x66, .type=IO_READ},
        {.addr=0x0166, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_038A) {
    const struct CPU_State initial_cpu = {.pc=0x848c, .a=0x70, .x=0x6c, .y=0xf9, .sp=0xa7, .status=0xbc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012d, .value=0xd6}, {.addr=0x848c, .value=0x3e}, {.addr=0x848d, .value=0x2d},
    };
    const struct CPU_State final_cpu = {.pc=0x848e, .a=0x70, .x=0x6c, .y=0xf9, .sp=0xa7, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x012d, .value=0xd6}, {.addr=0x848c, .value=0x3e}, {.addr=0x848d, .value=0x2d},
    };
    const struct BusEvent events[] = {
        {.addr=0x848c, .value=0x3e, .type=IO_READ},
        {.addr=0x848d, .value=0x2d, .type=IO_READ},
        {.addr=0x012d, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_038B) {
    const struct CPU_State initial_cpu = {.pc=0xf926, .a=0xa1, .x=0x50, .y=0x6b, .sp=0x88, .status=0x36};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c1, .value=0xc5}, {.addr=0xf926, .value=0x3e}, {.addr=0xf927, .value=0xc1},
    };
    const struct CPU_State final_cpu = {.pc=0xf928, .a=0xa1, .x=0x50, .y=0x6b, .sp=0x88, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c1, .value=0xc5}, {.addr=0xf926, .value=0x3e}, {.addr=0xf927, .value=0xc1},
    };
    const struct BusEvent events[] = {
        {.addr=0xf926, .value=0x3e, .type=IO_READ},
        {.addr=0xf927, .value=0xc1, .type=IO_READ},
        {.addr=0x01c1, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_038C) {
    const struct CPU_State initial_cpu = {.pc=0xc0cd, .a=0x51, .x=0x93, .y=0xff, .sp=0x85, .status=0x61};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0170, .value=0x42}, {.addr=0xc0cd, .value=0x3e}, {.addr=0xc0ce, .value=0x70},
    };
    const struct CPU_State final_cpu = {.pc=0xc0cf, .a=0x51, .x=0x93, .y=0xff, .sp=0x85, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x0170, .value=0x42}, {.addr=0xc0cd, .value=0x3e}, {.addr=0xc0ce, .value=0x70},
    };
    const struct BusEvent events[] = {
        {.addr=0xc0cd, .value=0x3e, .type=IO_READ},
        {.addr=0xc0ce, .value=0x70, .type=IO_READ},
        {.addr=0x0170, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_038D) {
    const struct CPU_State initial_cpu = {.pc=0xb9d7, .a=0xb5, .x=0x90, .y=0x6b, .sp=0xb1, .status=0x18};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0041, .value=0xc4}, {.addr=0xb9d7, .value=0x3e}, {.addr=0xb9d8, .value=0x41},
    };
    const struct CPU_State final_cpu = {.pc=0xb9d9, .a=0xb5, .x=0x90, .y=0x6b, .sp=0xb1, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x0041, .value=0xc4}, {.addr=0xb9d7, .value=0x3e}, {.addr=0xb9d8, .value=0x41},
    };
    const struct BusEvent events[] = {
        {.addr=0xb9d7, .value=0x3e, .type=IO_READ},
        {.addr=0xb9d8, .value=0x41, .type=IO_READ},
        {.addr=0x0041, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_038E) {
    const struct CPU_State initial_cpu = {.pc=0x7ee4, .a=0xb3, .x=0xa9, .y=0xc6, .sp=0x2a, .status=0xc2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0001, .value=0x40}, {.addr=0x7ee4, .value=0x3e}, {.addr=0x7ee5, .value=0x01},
    };
    const struct CPU_State final_cpu = {.pc=0x7ee6, .a=0xb3, .x=0xa9, .y=0xc6, .sp=0x2a, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x0001, .value=0x40}, {.addr=0x7ee4, .value=0x3e}, {.addr=0x7ee5, .value=0x01},
    };
    const struct BusEvent events[] = {
        {.addr=0x7ee4, .value=0x3e, .type=IO_READ},
        {.addr=0x7ee5, .value=0x01, .type=IO_READ},
        {.addr=0x0001, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_038F) {
    const struct CPU_State initial_cpu = {.pc=0x93e4, .a=0x67, .x=0x36, .y=0x48, .sp=0xdd, .status=0x73};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0106, .value=0x69}, {.addr=0x93e4, .value=0x3e}, {.addr=0x93e5, .value=0x06},
    };
    const struct CPU_State final_cpu = {.pc=0x93e6, .a=0x67, .x=0x36, .y=0x48, .sp=0xdd, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0106, .value=0x69}, {.addr=0x93e4, .value=0x3e}, {.addr=0x93e5, .value=0x06},
    };
    const struct BusEvent events[] = {
        {.addr=0x93e4, .value=0x3e, .type=IO_READ},
        {.addr=0x93e5, .value=0x06, .type=IO_READ},
        {.addr=0x0106, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0390) {
    const struct CPU_State initial_cpu = {.pc=0x1582, .a=0xc1, .x=0x70, .y=0x9e, .sp=0x30, .status=0xbf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0159, .value=0xa2}, {.addr=0x1582, .value=0x3e}, {.addr=0x1583, .value=0x59},
    };
    const struct CPU_State final_cpu = {.pc=0x1584, .a=0xc1, .x=0x70, .y=0x9e, .sp=0x30, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0159, .value=0xa2}, {.addr=0x1582, .value=0x3e}, {.addr=0x1583, .value=0x59},
    };
    const struct BusEvent events[] = {
        {.addr=0x1582, .value=0x3e, .type=IO_READ},
        {.addr=0x1583, .value=0x59, .type=IO_READ},
        {.addr=0x0159, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0391) {
    const struct CPU_State initial_cpu = {.pc=0x0fb7, .a=0x69, .x=0xbd, .y=0x37, .sp=0x2c, .status=0x69};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0104, .value=0xc6}, {.addr=0x0fb7, .value=0x3e}, {.addr=0x0fb8, .value=0x04},
    };
    const struct CPU_State final_cpu = {.pc=0x0fb9, .a=0x69, .x=0xbd, .y=0x37, .sp=0x2c, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0104, .value=0xc6}, {.addr=0x0fb7, .value=0x3e}, {.addr=0x0fb8, .value=0x04},
    };
    const struct BusEvent events[] = {
        {.addr=0x0fb7, .value=0x3e, .type=IO_READ},
        {.addr=0x0fb8, .value=0x04, .type=IO_READ},
        {.addr=0x0104, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0392) {
    const struct CPU_State initial_cpu = {.pc=0x5a30, .a=0xd2, .x=0xf0, .y=0x7e, .sp=0x39, .status=0x84};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003c, .value=0x93}, {.addr=0x5a30, .value=0x3e}, {.addr=0x5a31, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0x5a32, .a=0xd2, .x=0xf0, .y=0x7e, .sp=0x39, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x003c, .value=0x93}, {.addr=0x5a30, .value=0x3e}, {.addr=0x5a31, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0x5a30, .value=0x3e, .type=IO_READ},
        {.addr=0x5a31, .value=0x3c, .type=IO_READ},
        {.addr=0x003c, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0393) {
    const struct CPU_State initial_cpu = {.pc=0x264f, .a=0x46, .x=0xa5, .y=0xe1, .sp=0xe1, .status=0x7f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018d, .value=0xd6}, {.addr=0x264f, .value=0x3e}, {.addr=0x2650, .value=0x8d},
    };
    const struct CPU_State final_cpu = {.pc=0x2651, .a=0x46, .x=0xa5, .y=0xe1, .sp=0xe1, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x018d, .value=0xd6}, {.addr=0x264f, .value=0x3e}, {.addr=0x2650, .value=0x8d},
    };
    const struct BusEvent events[] = {
        {.addr=0x264f, .value=0x3e, .type=IO_READ},
        {.addr=0x2650, .value=0x8d, .type=IO_READ},
        {.addr=0x018d, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0394) {
    const struct CPU_State initial_cpu = {.pc=0xb520, .a=0xb1, .x=0x5f, .y=0xb9, .sp=0x87, .status=0x91};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0045, .value=0x5d}, {.addr=0xb520, .value=0x3e}, {.addr=0xb521, .value=0x45},
    };
    const struct CPU_State final_cpu = {.pc=0xb522, .a=0xb1, .x=0x5f, .y=0xb9, .sp=0x87, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x0045, .value=0x5d}, {.addr=0xb520, .value=0x3e}, {.addr=0xb521, .value=0x45},
    };
    const struct BusEvent events[] = {
        {.addr=0xb520, .value=0x3e, .type=IO_READ},
        {.addr=0xb521, .value=0x45, .type=IO_READ},
        {.addr=0x0045, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0396) {
    const struct CPU_State initial_cpu = {.pc=0xbc12, .a=0xc6, .x=0xd6, .y=0x21, .sp=0x39, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d3, .value=0x61}, {.addr=0xbc12, .value=0x3e}, {.addr=0xbc13, .value=0xd3},
    };
    const struct CPU_State final_cpu = {.pc=0xbc14, .a=0xc6, .x=0xd6, .y=0x21, .sp=0x39, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d3, .value=0x61}, {.addr=0xbc12, .value=0x3e}, {.addr=0xbc13, .value=0xd3},
    };
    const struct BusEvent events[] = {
        {.addr=0xbc12, .value=0x3e, .type=IO_READ},
        {.addr=0xbc13, .value=0xd3, .type=IO_READ},
        {.addr=0x01d3, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0397) {
    const struct CPU_State initial_cpu = {.pc=0x3d81, .a=0xbd, .x=0x96, .y=0x80, .sp=0x6f, .status=0x5d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a9, .value=0xf4}, {.addr=0x3d81, .value=0x3e}, {.addr=0x3d82, .value=0xa9},
    };
    const struct CPU_State final_cpu = {.pc=0x3d83, .a=0xbd, .x=0x96, .y=0x80, .sp=0x6f, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a9, .value=0xf4}, {.addr=0x3d81, .value=0x3e}, {.addr=0x3d82, .value=0xa9},
    };
    const struct BusEvent events[] = {
        {.addr=0x3d81, .value=0x3e, .type=IO_READ},
        {.addr=0x3d82, .value=0xa9, .type=IO_READ},
        {.addr=0x00a9, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0398) {
    const struct CPU_State initial_cpu = {.pc=0x5e60, .a=0xc3, .x=0xff, .y=0x49, .sp=0x61, .status=0xb5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011c, .value=0x22}, {.addr=0x5e60, .value=0x3e}, {.addr=0x5e61, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0x5e62, .a=0xc3, .x=0xff, .y=0x49, .sp=0x61, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x011c, .value=0x22}, {.addr=0x5e60, .value=0x3e}, {.addr=0x5e61, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0x5e60, .value=0x3e, .type=IO_READ},
        {.addr=0x5e61, .value=0x1c, .type=IO_READ},
        {.addr=0x011c, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_0399) {
    const struct CPU_State initial_cpu = {.pc=0x69f7, .a=0xaf, .x=0x7e, .y=0xa3, .sp=0x8c, .status=0x82};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006f, .value=0xea}, {.addr=0x69f7, .value=0x3e}, {.addr=0x69f8, .value=0x6f},
    };
    const struct CPU_State final_cpu = {.pc=0x69f9, .a=0xaf, .x=0x7e, .y=0xa3, .sp=0x8c, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x006f, .value=0xea}, {.addr=0x69f7, .value=0x3e}, {.addr=0x69f8, .value=0x6f},
    };
    const struct BusEvent events[] = {
        {.addr=0x69f7, .value=0x3e, .type=IO_READ},
        {.addr=0x69f8, .value=0x6f, .type=IO_READ},
        {.addr=0x006f, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_039A) {
    const struct CPU_State initial_cpu = {.pc=0xd242, .a=0x15, .x=0x8d, .y=0xf4, .sp=0xbd, .status=0xeb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d4, .value=0x3e}, {.addr=0xd242, .value=0x3e}, {.addr=0xd243, .value=0xd4},
    };
    const struct CPU_State final_cpu = {.pc=0xd244, .a=0x15, .x=0x8d, .y=0xf4, .sp=0xbd, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d4, .value=0x3e}, {.addr=0xd242, .value=0x3e}, {.addr=0xd243, .value=0xd4},
    };
    const struct BusEvent events[] = {
        {.addr=0xd242, .value=0x3e, .type=IO_READ},
        {.addr=0xd243, .value=0xd4, .type=IO_READ},
        {.addr=0x01d4, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_039B) {
    const struct CPU_State initial_cpu = {.pc=0x7b22, .a=0x3d, .x=0x81, .y=0xc0, .sp=0xa7, .status=0xb4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cd, .value=0x3f}, {.addr=0x7b22, .value=0x3e}, {.addr=0x7b23, .value=0xcd},
    };
    const struct CPU_State final_cpu = {.pc=0x7b24, .a=0x3d, .x=0x81, .y=0xc0, .sp=0xa7, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cd, .value=0x3f}, {.addr=0x7b22, .value=0x3e}, {.addr=0x7b23, .value=0xcd},
    };
    const struct BusEvent events[] = {
        {.addr=0x7b22, .value=0x3e, .type=IO_READ},
        {.addr=0x7b23, .value=0xcd, .type=IO_READ},
        {.addr=0x01cd, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_039C) {
    const struct CPU_State initial_cpu = {.pc=0xd9d4, .a=0x5c, .x=0xe2, .y=0x33, .sp=0x5e, .status=0xe3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01dd, .value=0xb6}, {.addr=0xd9d4, .value=0x3e}, {.addr=0xd9d5, .value=0xdd},
    };
    const struct CPU_State final_cpu = {.pc=0xd9d6, .a=0x5c, .x=0xe2, .y=0x33, .sp=0x5e, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x01dd, .value=0xb6}, {.addr=0xd9d4, .value=0x3e}, {.addr=0xd9d5, .value=0xdd},
    };
    const struct BusEvent events[] = {
        {.addr=0xd9d4, .value=0x3e, .type=IO_READ},
        {.addr=0xd9d5, .value=0xdd, .type=IO_READ},
        {.addr=0x01dd, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_039D) {
    const struct CPU_State initial_cpu = {.pc=0xcc2c, .a=0x2f, .x=0x25, .y=0xf2, .sp=0x10, .status=0x56};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0021, .value=0xed}, {.addr=0xcc2c, .value=0x3e}, {.addr=0xcc2d, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0xcc2e, .a=0x2f, .x=0x25, .y=0xf2, .sp=0x10, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x0021, .value=0xed}, {.addr=0xcc2c, .value=0x3e}, {.addr=0xcc2d, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0xcc2c, .value=0x3e, .type=IO_READ},
        {.addr=0xcc2d, .value=0x21, .type=IO_READ},
        {.addr=0x0021, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_039E) {
    const struct CPU_State initial_cpu = {.pc=0x2807, .a=0xb1, .x=0xa1, .y=0x6d, .sp=0xc5, .status=0x9c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0010, .value=0xfe}, {.addr=0x2807, .value=0x3e}, {.addr=0x2808, .value=0x10},
    };
    const struct CPU_State final_cpu = {.pc=0x2809, .a=0xb1, .x=0xa1, .y=0x6d, .sp=0xc5, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0010, .value=0xfe}, {.addr=0x2807, .value=0x3e}, {.addr=0x2808, .value=0x10},
    };
    const struct BusEvent events[] = {
        {.addr=0x2807, .value=0x3e, .type=IO_READ},
        {.addr=0x2808, .value=0x10, .type=IO_READ},
        {.addr=0x0010, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_039F) {
    const struct CPU_State initial_cpu = {.pc=0x597e, .a=0x95, .x=0x56, .y=0xe4, .sp=0x64, .status=0x5e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0013, .value=0x96}, {.addr=0x597e, .value=0x3e}, {.addr=0x597f, .value=0x13},
    };
    const struct CPU_State final_cpu = {.pc=0x5980, .a=0x95, .x=0x56, .y=0xe4, .sp=0x64, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0013, .value=0x96}, {.addr=0x597e, .value=0x3e}, {.addr=0x597f, .value=0x13},
    };
    const struct BusEvent events[] = {
        {.addr=0x597e, .value=0x3e, .type=IO_READ},
        {.addr=0x597f, .value=0x13, .type=IO_READ},
        {.addr=0x0013, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03A0) {
    const struct CPU_State initial_cpu = {.pc=0x5ed3, .a=0x42, .x=0x91, .y=0x9c, .sp=0x00, .status=0xa6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d9, .value=0x3e}, {.addr=0x5ed3, .value=0x3e}, {.addr=0x5ed4, .value=0xd9},
    };
    const struct CPU_State final_cpu = {.pc=0x5ed5, .a=0x42, .x=0x91, .y=0x9c, .sp=0x00, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d9, .value=0x3e}, {.addr=0x5ed3, .value=0x3e}, {.addr=0x5ed4, .value=0xd9},
    };
    const struct BusEvent events[] = {
        {.addr=0x5ed3, .value=0x3e, .type=IO_READ},
        {.addr=0x5ed4, .value=0xd9, .type=IO_READ},
        {.addr=0x01d9, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03A1) {
    const struct CPU_State initial_cpu = {.pc=0xc018, .a=0x34, .x=0xfa, .y=0x40, .sp=0xb6, .status=0x00};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000f, .value=0x5b}, {.addr=0xc018, .value=0x3e}, {.addr=0xc019, .value=0x0f},
    };
    const struct CPU_State final_cpu = {.pc=0xc01a, .a=0x34, .x=0xfa, .y=0x40, .sp=0xb6, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x000f, .value=0x5b}, {.addr=0xc018, .value=0x3e}, {.addr=0xc019, .value=0x0f},
    };
    const struct BusEvent events[] = {
        {.addr=0xc018, .value=0x3e, .type=IO_READ},
        {.addr=0xc019, .value=0x0f, .type=IO_READ},
        {.addr=0x000f, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03A2) {
    const struct CPU_State initial_cpu = {.pc=0xc38f, .a=0x70, .x=0x99, .y=0xfc, .sp=0xa0, .status=0x00};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0097, .value=0x7b}, {.addr=0xc38f, .value=0x3e}, {.addr=0xc390, .value=0x97},
    };
    const struct CPU_State final_cpu = {.pc=0xc391, .a=0x70, .x=0x99, .y=0xfc, .sp=0xa0, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x0097, .value=0x7b}, {.addr=0xc38f, .value=0x3e}, {.addr=0xc390, .value=0x97},
    };
    const struct BusEvent events[] = {
        {.addr=0xc38f, .value=0x3e, .type=IO_READ},
        {.addr=0xc390, .value=0x97, .type=IO_READ},
        {.addr=0x0097, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03A3) {
    const struct CPU_State initial_cpu = {.pc=0x7a16, .a=0xc6, .x=0xe9, .y=0x00, .sp=0x42, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0010, .value=0x3c}, {.addr=0x7a16, .value=0x3e}, {.addr=0x7a17, .value=0x10},
    };
    const struct CPU_State final_cpu = {.pc=0x7a18, .a=0xc6, .x=0xe9, .y=0x00, .sp=0x42, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x0010, .value=0x3c}, {.addr=0x7a16, .value=0x3e}, {.addr=0x7a17, .value=0x10},
    };
    const struct BusEvent events[] = {
        {.addr=0x7a16, .value=0x3e, .type=IO_READ},
        {.addr=0x7a17, .value=0x10, .type=IO_READ},
        {.addr=0x0010, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03A4) {
    const struct CPU_State initial_cpu = {.pc=0x6094, .a=0x6f, .x=0x2f, .y=0x15, .sp=0x20, .status=0xda};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bd, .value=0xa9}, {.addr=0x6094, .value=0x3e}, {.addr=0x6095, .value=0xbd},
    };
    const struct CPU_State final_cpu = {.pc=0x6096, .a=0x6f, .x=0x2f, .y=0x15, .sp=0x20, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bd, .value=0xa9}, {.addr=0x6094, .value=0x3e}, {.addr=0x6095, .value=0xbd},
    };
    const struct BusEvent events[] = {
        {.addr=0x6094, .value=0x3e, .type=IO_READ},
        {.addr=0x6095, .value=0xbd, .type=IO_READ},
        {.addr=0x00bd, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03A5) {
    const struct CPU_State initial_cpu = {.pc=0xab0d, .a=0xf9, .x=0x3c, .y=0x77, .sp=0x0e, .status=0xe3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d3, .value=0x3f}, {.addr=0xab0d, .value=0x3e}, {.addr=0xab0e, .value=0xd3},
    };
    const struct CPU_State final_cpu = {.pc=0xab0f, .a=0xf9, .x=0x3c, .y=0x77, .sp=0x0e, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d3, .value=0x3f}, {.addr=0xab0d, .value=0x3e}, {.addr=0xab0e, .value=0xd3},
    };
    const struct BusEvent events[] = {
        {.addr=0xab0d, .value=0x3e, .type=IO_READ},
        {.addr=0xab0e, .value=0xd3, .type=IO_READ},
        {.addr=0x01d3, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03A6) {
    const struct CPU_State initial_cpu = {.pc=0xcc11, .a=0xd6, .x=0x44, .y=0x78, .sp=0x7c, .status=0x71};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010e, .value=0xd7}, {.addr=0xcc11, .value=0x3e}, {.addr=0xcc12, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0xcc13, .a=0xd6, .x=0x44, .y=0x78, .sp=0x7c, .status=0x70};
    const struct RamEntry final_ram[] = {
        {.addr=0x010e, .value=0xd7}, {.addr=0xcc11, .value=0x3e}, {.addr=0xcc12, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0xcc11, .value=0x3e, .type=IO_READ},
        {.addr=0xcc12, .value=0x0e, .type=IO_READ},
        {.addr=0x010e, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03A7) {
    const struct CPU_State initial_cpu = {.pc=0xedd8, .a=0x2c, .x=0x86, .y=0xab, .sp=0x51, .status=0xd6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008c, .value=0x4d}, {.addr=0xedd8, .value=0x3e}, {.addr=0xedd9, .value=0x8c},
    };
    const struct CPU_State final_cpu = {.pc=0xedda, .a=0x2c, .x=0x86, .y=0xab, .sp=0x51, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x008c, .value=0x4d}, {.addr=0xedd8, .value=0x3e}, {.addr=0xedd9, .value=0x8c},
    };
    const struct BusEvent events[] = {
        {.addr=0xedd8, .value=0x3e, .type=IO_READ},
        {.addr=0xedd9, .value=0x8c, .type=IO_READ},
        {.addr=0x008c, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03A8) {
    const struct CPU_State initial_cpu = {.pc=0x4021, .a=0x01, .x=0x54, .y=0x21, .sp=0x58, .status=0x96};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c1, .value=0x20}, {.addr=0x4021, .value=0x3e}, {.addr=0x4022, .value=0xc1},
    };
    const struct CPU_State final_cpu = {.pc=0x4023, .a=0x01, .x=0x54, .y=0x21, .sp=0x58, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c1, .value=0x20}, {.addr=0x4021, .value=0x3e}, {.addr=0x4022, .value=0xc1},
    };
    const struct BusEvent events[] = {
        {.addr=0x4021, .value=0x3e, .type=IO_READ},
        {.addr=0x4022, .value=0xc1, .type=IO_READ},
        {.addr=0x00c1, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03A9) {
    const struct CPU_State initial_cpu = {.pc=0x1923, .a=0x79, .x=0x31, .y=0xdd, .sp=0xf4, .status=0x0c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0056, .value=0x36}, {.addr=0x1923, .value=0x3e}, {.addr=0x1924, .value=0x56},
    };
    const struct CPU_State final_cpu = {.pc=0x1925, .a=0x79, .x=0x31, .y=0xdd, .sp=0xf4, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0056, .value=0x36}, {.addr=0x1923, .value=0x3e}, {.addr=0x1924, .value=0x56},
    };
    const struct BusEvent events[] = {
        {.addr=0x1923, .value=0x3e, .type=IO_READ},
        {.addr=0x1924, .value=0x56, .type=IO_READ},
        {.addr=0x0056, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03AA) {
    const struct CPU_State initial_cpu = {.pc=0x0e47, .a=0xa0, .x=0x88, .y=0x2b, .sp=0xdb, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a9, .value=0x02}, {.addr=0x0e47, .value=0x3e}, {.addr=0x0e48, .value=0xa9},
    };
    const struct CPU_State final_cpu = {.pc=0x0e49, .a=0xa0, .x=0x88, .y=0x2b, .sp=0xdb, .status=0xdd};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a9, .value=0x02}, {.addr=0x0e47, .value=0x3e}, {.addr=0x0e48, .value=0xa9},
    };
    const struct BusEvent events[] = {
        {.addr=0x0e47, .value=0x3e, .type=IO_READ},
        {.addr=0x0e48, .value=0xa9, .type=IO_READ},
        {.addr=0x00a9, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03AB) {
    const struct CPU_State initial_cpu = {.pc=0x43f0, .a=0xa9, .x=0x25, .y=0x01, .sp=0x68, .status=0x34};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c2, .value=0x5b}, {.addr=0x43f0, .value=0x3e}, {.addr=0x43f1, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0x43f2, .a=0xa9, .x=0x25, .y=0x01, .sp=0x68, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c2, .value=0x5b}, {.addr=0x43f0, .value=0x3e}, {.addr=0x43f1, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0x43f0, .value=0x3e, .type=IO_READ},
        {.addr=0x43f1, .value=0xc2, .type=IO_READ},
        {.addr=0x01c2, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03AC) {
    const struct CPU_State initial_cpu = {.pc=0x7111, .a=0x2f, .x=0x12, .y=0xa7, .sp=0x1c, .status=0x25};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b3, .value=0xd5}, {.addr=0x7111, .value=0x3e}, {.addr=0x7112, .value=0xb3},
    };
    const struct CPU_State final_cpu = {.pc=0x7113, .a=0x2f, .x=0x12, .y=0xa7, .sp=0x1c, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b3, .value=0xd5}, {.addr=0x7111, .value=0x3e}, {.addr=0x7112, .value=0xb3},
    };
    const struct BusEvent events[] = {
        {.addr=0x7111, .value=0x3e, .type=IO_READ},
        {.addr=0x7112, .value=0xb3, .type=IO_READ},
        {.addr=0x01b3, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03AD) {
    const struct CPU_State initial_cpu = {.pc=0xa7e6, .a=0x2a, .x=0xaa, .y=0x3e, .sp=0x24, .status=0xac};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0187, .value=0xe5}, {.addr=0xa7e6, .value=0x3e}, {.addr=0xa7e7, .value=0x87},
    };
    const struct CPU_State final_cpu = {.pc=0xa7e8, .a=0x2a, .x=0xaa, .y=0x3e, .sp=0x24, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0187, .value=0xe5}, {.addr=0xa7e6, .value=0x3e}, {.addr=0xa7e7, .value=0x87},
    };
    const struct BusEvent events[] = {
        {.addr=0xa7e6, .value=0x3e, .type=IO_READ},
        {.addr=0xa7e7, .value=0x87, .type=IO_READ},
        {.addr=0x0187, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03AE) {
    const struct CPU_State initial_cpu = {.pc=0xe406, .a=0x7a, .x=0xec, .y=0x45, .sp=0x8f, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0082, .value=0xfa}, {.addr=0xe406, .value=0x3e}, {.addr=0xe407, .value=0x82},
    };
    const struct CPU_State final_cpu = {.pc=0xe408, .a=0x7a, .x=0xec, .y=0x45, .sp=0x8f, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0082, .value=0xfa}, {.addr=0xe406, .value=0x3e}, {.addr=0xe407, .value=0x82},
    };
    const struct BusEvent events[] = {
        {.addr=0xe406, .value=0x3e, .type=IO_READ},
        {.addr=0xe407, .value=0x82, .type=IO_READ},
        {.addr=0x0082, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03AF) {
    const struct CPU_State initial_cpu = {.pc=0xa291, .a=0x42, .x=0xb0, .y=0x8a, .sp=0xb6, .status=0xbe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ca, .value=0xb3}, {.addr=0xa291, .value=0x3e}, {.addr=0xa292, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0xa293, .a=0x42, .x=0xb0, .y=0x8a, .sp=0xb6, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ca, .value=0xb3}, {.addr=0xa291, .value=0x3e}, {.addr=0xa292, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0xa291, .value=0x3e, .type=IO_READ},
        {.addr=0xa292, .value=0xca, .type=IO_READ},
        {.addr=0x01ca, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03B0) {
    const struct CPU_State initial_cpu = {.pc=0xf572, .a=0xf4, .x=0xe2, .y=0x52, .sp=0x5b, .status=0x50};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002f, .value=0xb7}, {.addr=0xf572, .value=0x3e}, {.addr=0xf573, .value=0x2f},
    };
    const struct CPU_State final_cpu = {.pc=0xf574, .a=0xf4, .x=0xe2, .y=0x52, .sp=0x5b, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x002f, .value=0xb7}, {.addr=0xf572, .value=0x3e}, {.addr=0xf573, .value=0x2f},
    };
    const struct BusEvent events[] = {
        {.addr=0xf572, .value=0x3e, .type=IO_READ},
        {.addr=0xf573, .value=0x2f, .type=IO_READ},
        {.addr=0x002f, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03B1) {
    const struct CPU_State initial_cpu = {.pc=0xae61, .a=0x11, .x=0x88, .y=0xc3, .sp=0x6b, .status=0xf1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a1, .value=0x88}, {.addr=0xae61, .value=0x3e}, {.addr=0xae62, .value=0xa1},
    };
    const struct CPU_State final_cpu = {.pc=0xae63, .a=0x11, .x=0x88, .y=0xc3, .sp=0x6b, .status=0x73};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a1, .value=0x88}, {.addr=0xae61, .value=0x3e}, {.addr=0xae62, .value=0xa1},
    };
    const struct BusEvent events[] = {
        {.addr=0xae61, .value=0x3e, .type=IO_READ},
        {.addr=0xae62, .value=0xa1, .type=IO_READ},
        {.addr=0x01a1, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03B2) {
    const struct CPU_State initial_cpu = {.pc=0xdefe, .a=0xec, .x=0x53, .y=0x83, .sp=0x34, .status=0xae};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0118, .value=0x86}, {.addr=0xdefe, .value=0x3e}, {.addr=0xdeff, .value=0x18},
    };
    const struct CPU_State final_cpu = {.pc=0xdf00, .a=0xec, .x=0x53, .y=0x83, .sp=0x34, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0118, .value=0x86}, {.addr=0xdefe, .value=0x3e}, {.addr=0xdeff, .value=0x18},
    };
    const struct BusEvent events[] = {
        {.addr=0xdefe, .value=0x3e, .type=IO_READ},
        {.addr=0xdeff, .value=0x18, .type=IO_READ},
        {.addr=0x0118, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03B3) {
    const struct CPU_State initial_cpu = {.pc=0xd539, .a=0x4e, .x=0x1d, .y=0x2a, .sp=0x33, .status=0xa1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e8, .value=0x09}, {.addr=0xd539, .value=0x3e}, {.addr=0xd53a, .value=0xe8},
    };
    const struct CPU_State final_cpu = {.pc=0xd53b, .a=0x4e, .x=0x1d, .y=0x2a, .sp=0x33, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e8, .value=0x09}, {.addr=0xd539, .value=0x3e}, {.addr=0xd53a, .value=0xe8},
    };
    const struct BusEvent events[] = {
        {.addr=0xd539, .value=0x3e, .type=IO_READ},
        {.addr=0xd53a, .value=0xe8, .type=IO_READ},
        {.addr=0x01e8, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x5ba5, .a=0x9a, .x=0x25, .y=0x69, .sp=0x2f, .status=0x7a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0165, .value=0xb9}, {.addr=0x5ba5, .value=0x3e}, {.addr=0x5ba6, .value=0x65},
    };
    const struct CPU_State final_cpu = {.pc=0x5ba7, .a=0x9a, .x=0x25, .y=0x69, .sp=0x2f, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x0165, .value=0xb9}, {.addr=0x5ba5, .value=0x3e}, {.addr=0x5ba6, .value=0x65},
    };
    const struct BusEvent events[] = {
        {.addr=0x5ba5, .value=0x3e, .type=IO_READ},
        {.addr=0x5ba6, .value=0x65, .type=IO_READ},
        {.addr=0x0165, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03B5) {
    const struct CPU_State initial_cpu = {.pc=0x8f62, .a=0xbe, .x=0x48, .y=0xf6, .sp=0x7e, .status=0xf5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fa, .value=0x9f}, {.addr=0x8f62, .value=0x3e}, {.addr=0x8f63, .value=0xfa},
    };
    const struct CPU_State final_cpu = {.pc=0x8f64, .a=0xbe, .x=0x48, .y=0xf6, .sp=0x7e, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fa, .value=0x9f}, {.addr=0x8f62, .value=0x3e}, {.addr=0x8f63, .value=0xfa},
    };
    const struct BusEvent events[] = {
        {.addr=0x8f62, .value=0x3e, .type=IO_READ},
        {.addr=0x8f63, .value=0xfa, .type=IO_READ},
        {.addr=0x01fa, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03B6) {
    const struct CPU_State initial_cpu = {.pc=0xb823, .a=0x65, .x=0xcc, .y=0xda, .sp=0xd4, .status=0xb0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0138, .value=0x57}, {.addr=0xb823, .value=0x3e}, {.addr=0xb824, .value=0x38},
    };
    const struct CPU_State final_cpu = {.pc=0xb825, .a=0x65, .x=0xcc, .y=0xda, .sp=0xd4, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0138, .value=0x57}, {.addr=0xb823, .value=0x3e}, {.addr=0xb824, .value=0x38},
    };
    const struct BusEvent events[] = {
        {.addr=0xb823, .value=0x3e, .type=IO_READ},
        {.addr=0xb824, .value=0x38, .type=IO_READ},
        {.addr=0x0138, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03B7) {
    const struct CPU_State initial_cpu = {.pc=0x8b37, .a=0x62, .x=0x97, .y=0xa7, .sp=0xd9, .status=0xa5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d7, .value=0xc6}, {.addr=0x8b37, .value=0x3e}, {.addr=0x8b38, .value=0xd7},
    };
    const struct CPU_State final_cpu = {.pc=0x8b39, .a=0x62, .x=0x97, .y=0xa7, .sp=0xd9, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d7, .value=0xc6}, {.addr=0x8b37, .value=0x3e}, {.addr=0x8b38, .value=0xd7},
    };
    const struct BusEvent events[] = {
        {.addr=0x8b37, .value=0x3e, .type=IO_READ},
        {.addr=0x8b38, .value=0xd7, .type=IO_READ},
        {.addr=0x01d7, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03B8) {
    const struct CPU_State initial_cpu = {.pc=0xcaf0, .a=0x31, .x=0xad, .y=0xf7, .sp=0xb1, .status=0x52};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0013, .value=0xab}, {.addr=0xcaf0, .value=0x3e}, {.addr=0xcaf1, .value=0x13},
    };
    const struct CPU_State final_cpu = {.pc=0xcaf2, .a=0x31, .x=0xad, .y=0xf7, .sp=0xb1, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x0013, .value=0xab}, {.addr=0xcaf0, .value=0x3e}, {.addr=0xcaf1, .value=0x13},
    };
    const struct BusEvent events[] = {
        {.addr=0xcaf0, .value=0x3e, .type=IO_READ},
        {.addr=0xcaf1, .value=0x13, .type=IO_READ},
        {.addr=0x0013, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03B9) {
    const struct CPU_State initial_cpu = {.pc=0xb014, .a=0x53, .x=0xf7, .y=0x5a, .sp=0xc3, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f4, .value=0x76}, {.addr=0xb014, .value=0x3e}, {.addr=0xb015, .value=0xf4},
    };
    const struct CPU_State final_cpu = {.pc=0xb016, .a=0x53, .x=0xf7, .y=0x5a, .sp=0xc3, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f4, .value=0x76}, {.addr=0xb014, .value=0x3e}, {.addr=0xb015, .value=0xf4},
    };
    const struct BusEvent events[] = {
        {.addr=0xb014, .value=0x3e, .type=IO_READ},
        {.addr=0xb015, .value=0xf4, .type=IO_READ},
        {.addr=0x01f4, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03BA) {
    const struct CPU_State initial_cpu = {.pc=0xea40, .a=0xdc, .x=0xa1, .y=0xbf, .sp=0x46, .status=0x3a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0153, .value=0x56}, {.addr=0xea40, .value=0x3e}, {.addr=0xea41, .value=0x53},
    };
    const struct CPU_State final_cpu = {.pc=0xea42, .a=0xdc, .x=0xa1, .y=0xbf, .sp=0x46, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x0153, .value=0x56}, {.addr=0xea40, .value=0x3e}, {.addr=0xea41, .value=0x53},
    };
    const struct BusEvent events[] = {
        {.addr=0xea40, .value=0x3e, .type=IO_READ},
        {.addr=0xea41, .value=0x53, .type=IO_READ},
        {.addr=0x0153, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03BB) {
    const struct CPU_State initial_cpu = {.pc=0x3f31, .a=0x85, .x=0x6d, .y=0x33, .sp=0x81, .status=0x40};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c5, .value=0xc7}, {.addr=0x3f31, .value=0x3e}, {.addr=0x3f32, .value=0xc5},
    };
    const struct CPU_State final_cpu = {.pc=0x3f33, .a=0x85, .x=0x6d, .y=0x33, .sp=0x81, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c5, .value=0xc7}, {.addr=0x3f31, .value=0x3e}, {.addr=0x3f32, .value=0xc5},
    };
    const struct BusEvent events[] = {
        {.addr=0x3f31, .value=0x3e, .type=IO_READ},
        {.addr=0x3f32, .value=0xc5, .type=IO_READ},
        {.addr=0x00c5, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03BC) {
    const struct CPU_State initial_cpu = {.pc=0x31b7, .a=0x68, .x=0x41, .y=0xe6, .sp=0x79, .status=0x6e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011d, .value=0x6f}, {.addr=0x31b7, .value=0x3e}, {.addr=0x31b8, .value=0x1d},
    };
    const struct CPU_State final_cpu = {.pc=0x31b9, .a=0x68, .x=0x41, .y=0xe6, .sp=0x79, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x011d, .value=0x6f}, {.addr=0x31b7, .value=0x3e}, {.addr=0x31b8, .value=0x1d},
    };
    const struct BusEvent events[] = {
        {.addr=0x31b7, .value=0x3e, .type=IO_READ},
        {.addr=0x31b8, .value=0x1d, .type=IO_READ},
        {.addr=0x011d, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x67ec, .a=0x53, .x=0x03, .y=0xf4, .sp=0x78, .status=0x4b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0019, .value=0xc2}, {.addr=0x67ec, .value=0x3e}, {.addr=0x67ed, .value=0x19},
    };
    const struct CPU_State final_cpu = {.pc=0x67ee, .a=0x53, .x=0x03, .y=0xf4, .sp=0x78, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x0019, .value=0xc2}, {.addr=0x67ec, .value=0x3e}, {.addr=0x67ed, .value=0x19},
    };
    const struct BusEvent events[] = {
        {.addr=0x67ec, .value=0x3e, .type=IO_READ},
        {.addr=0x67ed, .value=0x19, .type=IO_READ},
        {.addr=0x0019, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03BE) {
    const struct CPU_State initial_cpu = {.pc=0xe7a2, .a=0x42, .x=0x9b, .y=0x7b, .sp=0x8f, .status=0x29};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b3, .value=0x16}, {.addr=0xe7a2, .value=0x3e}, {.addr=0xe7a3, .value=0xb3},
    };
    const struct CPU_State final_cpu = {.pc=0xe7a4, .a=0x42, .x=0x9b, .y=0x7b, .sp=0x8f, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b3, .value=0x16}, {.addr=0xe7a2, .value=0x3e}, {.addr=0xe7a3, .value=0xb3},
    };
    const struct BusEvent events[] = {
        {.addr=0xe7a2, .value=0x3e, .type=IO_READ},
        {.addr=0xe7a3, .value=0xb3, .type=IO_READ},
        {.addr=0x01b3, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03BF) {
    const struct CPU_State initial_cpu = {.pc=0x5bc5, .a=0xa4, .x=0x1c, .y=0xce, .sp=0x5e, .status=0x48};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0088, .value=0xd4}, {.addr=0x5bc5, .value=0x3e}, {.addr=0x5bc6, .value=0x88},
    };
    const struct CPU_State final_cpu = {.pc=0x5bc7, .a=0xa4, .x=0x1c, .y=0xce, .sp=0x5e, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x0088, .value=0xd4}, {.addr=0x5bc5, .value=0x3e}, {.addr=0x5bc6, .value=0x88},
    };
    const struct BusEvent events[] = {
        {.addr=0x5bc5, .value=0x3e, .type=IO_READ},
        {.addr=0x5bc6, .value=0x88, .type=IO_READ},
        {.addr=0x0088, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03C0) {
    const struct CPU_State initial_cpu = {.pc=0xc4a9, .a=0xdc, .x=0x29, .y=0x5f, .sp=0x8c, .status=0x02};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0041, .value=0x15}, {.addr=0xc4a9, .value=0x3e}, {.addr=0xc4aa, .value=0x41},
    };
    const struct CPU_State final_cpu = {.pc=0xc4ab, .a=0xdc, .x=0x29, .y=0x5f, .sp=0x8c, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x0041, .value=0x15}, {.addr=0xc4a9, .value=0x3e}, {.addr=0xc4aa, .value=0x41},
    };
    const struct BusEvent events[] = {
        {.addr=0xc4a9, .value=0x3e, .type=IO_READ},
        {.addr=0xc4aa, .value=0x41, .type=IO_READ},
        {.addr=0x0041, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03C1) {
    const struct CPU_State initial_cpu = {.pc=0x8d7f, .a=0xdd, .x=0xe7, .y=0xd7, .sp=0x05, .status=0x62};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0170, .value=0x65}, {.addr=0x8d7f, .value=0x3e}, {.addr=0x8d80, .value=0x70},
    };
    const struct CPU_State final_cpu = {.pc=0x8d81, .a=0xdd, .x=0xe7, .y=0xd7, .sp=0x05, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0170, .value=0x65}, {.addr=0x8d7f, .value=0x3e}, {.addr=0x8d80, .value=0x70},
    };
    const struct BusEvent events[] = {
        {.addr=0x8d7f, .value=0x3e, .type=IO_READ},
        {.addr=0x8d80, .value=0x70, .type=IO_READ},
        {.addr=0x0170, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03C2) {
    const struct CPU_State initial_cpu = {.pc=0x61ee, .a=0xc1, .x=0xbd, .y=0x5b, .sp=0xf9, .status=0x88};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0010, .value=0x91}, {.addr=0x61ee, .value=0x3e}, {.addr=0x61ef, .value=0x10},
    };
    const struct CPU_State final_cpu = {.pc=0x61f0, .a=0xc1, .x=0xbd, .y=0x5b, .sp=0xf9, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x0010, .value=0x91}, {.addr=0x61ee, .value=0x3e}, {.addr=0x61ef, .value=0x10},
    };
    const struct BusEvent events[] = {
        {.addr=0x61ee, .value=0x3e, .type=IO_READ},
        {.addr=0x61ef, .value=0x10, .type=IO_READ},
        {.addr=0x0010, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03C3) {
    const struct CPU_State initial_cpu = {.pc=0xbe4f, .a=0x21, .x=0xb6, .y=0xef, .sp=0x80, .status=0x52};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000f, .value=0x93}, {.addr=0xbe4f, .value=0x3e}, {.addr=0xbe50, .value=0x0f},
    };
    const struct CPU_State final_cpu = {.pc=0xbe51, .a=0x21, .x=0xb6, .y=0xef, .sp=0x80, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x000f, .value=0x93}, {.addr=0xbe4f, .value=0x3e}, {.addr=0xbe50, .value=0x0f},
    };
    const struct BusEvent events[] = {
        {.addr=0xbe4f, .value=0x3e, .type=IO_READ},
        {.addr=0xbe50, .value=0x0f, .type=IO_READ},
        {.addr=0x000f, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03C4) {
    const struct CPU_State initial_cpu = {.pc=0x0390, .a=0xeb, .x=0x1c, .y=0xf4, .sp=0xf3, .status=0x8e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005b, .value=0x5c}, {.addr=0x0390, .value=0x3e}, {.addr=0x0391, .value=0x5b},
    };
    const struct CPU_State final_cpu = {.pc=0x0392, .a=0xeb, .x=0x1c, .y=0xf4, .sp=0xf3, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x005b, .value=0x5c}, {.addr=0x0390, .value=0x3e}, {.addr=0x0391, .value=0x5b},
    };
    const struct BusEvent events[] = {
        {.addr=0x0390, .value=0x3e, .type=IO_READ},
        {.addr=0x0391, .value=0x5b, .type=IO_READ},
        {.addr=0x005b, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03C5) {
    const struct CPU_State initial_cpu = {.pc=0x2097, .a=0x39, .x=0x95, .y=0xe9, .sp=0xc1, .status=0xfe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011b, .value=0xa3}, {.addr=0x2097, .value=0x3e}, {.addr=0x2098, .value=0x1b},
    };
    const struct CPU_State final_cpu = {.pc=0x2099, .a=0x39, .x=0x95, .y=0xe9, .sp=0xc1, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x011b, .value=0xa3}, {.addr=0x2097, .value=0x3e}, {.addr=0x2098, .value=0x1b},
    };
    const struct BusEvent events[] = {
        {.addr=0x2097, .value=0x3e, .type=IO_READ},
        {.addr=0x2098, .value=0x1b, .type=IO_READ},
        {.addr=0x011b, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x8960, .a=0xd9, .x=0x04, .y=0x47, .sp=0x6e, .status=0xb7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016c, .value=0x63}, {.addr=0x8960, .value=0x3e}, {.addr=0x8961, .value=0x6c},
    };
    const struct CPU_State final_cpu = {.pc=0x8962, .a=0xd9, .x=0x04, .y=0x47, .sp=0x6e, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x016c, .value=0x63}, {.addr=0x8960, .value=0x3e}, {.addr=0x8961, .value=0x6c},
    };
    const struct BusEvent events[] = {
        {.addr=0x8960, .value=0x3e, .type=IO_READ},
        {.addr=0x8961, .value=0x6c, .type=IO_READ},
        {.addr=0x016c, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03C8) {
    const struct CPU_State initial_cpu = {.pc=0xa999, .a=0xf5, .x=0x44, .y=0x43, .sp=0x7a, .status=0x96};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000e, .value=0x3c}, {.addr=0xa999, .value=0x3e}, {.addr=0xa99a, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0xa99b, .a=0xf5, .x=0x44, .y=0x43, .sp=0x7a, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x000e, .value=0x3c}, {.addr=0xa999, .value=0x3e}, {.addr=0xa99a, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0xa999, .value=0x3e, .type=IO_READ},
        {.addr=0xa99a, .value=0x0e, .type=IO_READ},
        {.addr=0x000e, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03C9) {
    const struct CPU_State initial_cpu = {.pc=0x485f, .a=0x01, .x=0xdf, .y=0x58, .sp=0xdb, .status=0x2d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b9, .value=0xe8}, {.addr=0x485f, .value=0x3e}, {.addr=0x4860, .value=0xb9},
    };
    const struct CPU_State final_cpu = {.pc=0x4861, .a=0x01, .x=0xdf, .y=0x58, .sp=0xdb, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b9, .value=0xe8}, {.addr=0x485f, .value=0x3e}, {.addr=0x4860, .value=0xb9},
    };
    const struct BusEvent events[] = {
        {.addr=0x485f, .value=0x3e, .type=IO_READ},
        {.addr=0x4860, .value=0xb9, .type=IO_READ},
        {.addr=0x01b9, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x7c02, .a=0x70, .x=0x0f, .y=0x40, .sp=0x4c, .status=0x33};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010b, .value=0x2f}, {.addr=0x7c02, .value=0x3e}, {.addr=0x7c03, .value=0x0b},
    };
    const struct CPU_State final_cpu = {.pc=0x7c04, .a=0x70, .x=0x0f, .y=0x40, .sp=0x4c, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x010b, .value=0x2f}, {.addr=0x7c02, .value=0x3e}, {.addr=0x7c03, .value=0x0b},
    };
    const struct BusEvent events[] = {
        {.addr=0x7c02, .value=0x3e, .type=IO_READ},
        {.addr=0x7c03, .value=0x0b, .type=IO_READ},
        {.addr=0x010b, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03CB) {
    const struct CPU_State initial_cpu = {.pc=0xfb46, .a=0x3f, .x=0x03, .y=0xb7, .sp=0x80, .status=0xa8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0171, .value=0x37}, {.addr=0xfb46, .value=0x3e}, {.addr=0xfb47, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0xfb48, .a=0x3f, .x=0x03, .y=0xb7, .sp=0x80, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0171, .value=0x37}, {.addr=0xfb46, .value=0x3e}, {.addr=0xfb47, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0xfb46, .value=0x3e, .type=IO_READ},
        {.addr=0xfb47, .value=0x71, .type=IO_READ},
        {.addr=0x0171, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03CC) {
    const struct CPU_State initial_cpu = {.pc=0xd4ef, .a=0x22, .x=0xc9, .y=0x55, .sp=0x22, .status=0xeb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fa, .value=0x77}, {.addr=0xd4ef, .value=0x3e}, {.addr=0xd4f0, .value=0xfa},
    };
    const struct CPU_State final_cpu = {.pc=0xd4f1, .a=0x22, .x=0xc9, .y=0x55, .sp=0x22, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fa, .value=0x77}, {.addr=0xd4ef, .value=0x3e}, {.addr=0xd4f0, .value=0xfa},
    };
    const struct BusEvent events[] = {
        {.addr=0xd4ef, .value=0x3e, .type=IO_READ},
        {.addr=0xd4f0, .value=0xfa, .type=IO_READ},
        {.addr=0x01fa, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03CD) {
    const struct CPU_State initial_cpu = {.pc=0xdf69, .a=0x80, .x=0x9b, .y=0xbc, .sp=0x4d, .status=0xa9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016d, .value=0x3c}, {.addr=0xdf69, .value=0x3e}, {.addr=0xdf6a, .value=0x6d},
    };
    const struct CPU_State final_cpu = {.pc=0xdf6b, .a=0x80, .x=0x9b, .y=0xbc, .sp=0x4d, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x016d, .value=0x3c}, {.addr=0xdf69, .value=0x3e}, {.addr=0xdf6a, .value=0x6d},
    };
    const struct BusEvent events[] = {
        {.addr=0xdf69, .value=0x3e, .type=IO_READ},
        {.addr=0xdf6a, .value=0x6d, .type=IO_READ},
        {.addr=0x016d, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x8ce7, .a=0xd1, .x=0xad, .y=0xa7, .sp=0xbb, .status=0x73};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014b, .value=0xde}, {.addr=0x8ce7, .value=0x3e}, {.addr=0x8ce8, .value=0x4b},
    };
    const struct CPU_State final_cpu = {.pc=0x8ce9, .a=0xd1, .x=0xad, .y=0xa7, .sp=0xbb, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x014b, .value=0xde}, {.addr=0x8ce7, .value=0x3e}, {.addr=0x8ce8, .value=0x4b},
    };
    const struct BusEvent events[] = {
        {.addr=0x8ce7, .value=0x3e, .type=IO_READ},
        {.addr=0x8ce8, .value=0x4b, .type=IO_READ},
        {.addr=0x014b, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03CF) {
    const struct CPU_State initial_cpu = {.pc=0xe750, .a=0xcd, .x=0xdc, .y=0xfb, .sp=0x2c, .status=0xf4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e2, .value=0x66}, {.addr=0xe750, .value=0x3e}, {.addr=0xe751, .value=0xe2},
    };
    const struct CPU_State final_cpu = {.pc=0xe752, .a=0xcd, .x=0xdc, .y=0xfb, .sp=0x2c, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e2, .value=0x66}, {.addr=0xe750, .value=0x3e}, {.addr=0xe751, .value=0xe2},
    };
    const struct BusEvent events[] = {
        {.addr=0xe750, .value=0x3e, .type=IO_READ},
        {.addr=0xe751, .value=0xe2, .type=IO_READ},
        {.addr=0x01e2, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03D0) {
    const struct CPU_State initial_cpu = {.pc=0xc761, .a=0x25, .x=0xed, .y=0xcc, .sp=0x63, .status=0xb7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0177, .value=0x7d}, {.addr=0xc761, .value=0x3e}, {.addr=0xc762, .value=0x77},
    };
    const struct CPU_State final_cpu = {.pc=0xc763, .a=0x25, .x=0xed, .y=0xcc, .sp=0x63, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x0177, .value=0x7d}, {.addr=0xc761, .value=0x3e}, {.addr=0xc762, .value=0x77},
    };
    const struct BusEvent events[] = {
        {.addr=0xc761, .value=0x3e, .type=IO_READ},
        {.addr=0xc762, .value=0x77, .type=IO_READ},
        {.addr=0x0177, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03D1) {
    const struct CPU_State initial_cpu = {.pc=0x9634, .a=0xca, .x=0x80, .y=0x00, .sp=0x9a, .status=0xda};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a9, .value=0x27}, {.addr=0x9634, .value=0x3e}, {.addr=0x9635, .value=0xa9},
    };
    const struct CPU_State final_cpu = {.pc=0x9636, .a=0xca, .x=0x80, .y=0x00, .sp=0x9a, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a9, .value=0x27}, {.addr=0x9634, .value=0x3e}, {.addr=0x9635, .value=0xa9},
    };
    const struct BusEvent events[] = {
        {.addr=0x9634, .value=0x3e, .type=IO_READ},
        {.addr=0x9635, .value=0xa9, .type=IO_READ},
        {.addr=0x00a9, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03D2) {
    const struct CPU_State initial_cpu = {.pc=0xf797, .a=0x20, .x=0x00, .y=0x7b, .sp=0xf9, .status=0x29};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d9, .value=0xbf}, {.addr=0xf797, .value=0x3e}, {.addr=0xf798, .value=0xd9},
    };
    const struct CPU_State final_cpu = {.pc=0xf799, .a=0x20, .x=0x00, .y=0x7b, .sp=0xf9, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d9, .value=0xbf}, {.addr=0xf797, .value=0x3e}, {.addr=0xf798, .value=0xd9},
    };
    const struct BusEvent events[] = {
        {.addr=0xf797, .value=0x3e, .type=IO_READ},
        {.addr=0xf798, .value=0xd9, .type=IO_READ},
        {.addr=0x01d9, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03D3) {
    const struct CPU_State initial_cpu = {.pc=0xacd5, .a=0x20, .x=0x74, .y=0xfb, .sp=0x4c, .status=0xab};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014c, .value=0x39}, {.addr=0xacd5, .value=0x3e}, {.addr=0xacd6, .value=0x4c},
    };
    const struct CPU_State final_cpu = {.pc=0xacd7, .a=0x20, .x=0x74, .y=0xfb, .sp=0x4c, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x014c, .value=0x39}, {.addr=0xacd5, .value=0x3e}, {.addr=0xacd6, .value=0x4c},
    };
    const struct BusEvent events[] = {
        {.addr=0xacd5, .value=0x3e, .type=IO_READ},
        {.addr=0xacd6, .value=0x4c, .type=IO_READ},
        {.addr=0x014c, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03D4) {
    const struct CPU_State initial_cpu = {.pc=0x81da, .a=0xa8, .x=0x94, .y=0xdc, .sp=0x0c, .status=0x1f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0069, .value=0xd2}, {.addr=0x81da, .value=0x3e}, {.addr=0x81db, .value=0x69},
    };
    const struct CPU_State final_cpu = {.pc=0x81dc, .a=0xa8, .x=0x94, .y=0xdc, .sp=0x0c, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0069, .value=0xd2}, {.addr=0x81da, .value=0x3e}, {.addr=0x81db, .value=0x69},
    };
    const struct BusEvent events[] = {
        {.addr=0x81da, .value=0x3e, .type=IO_READ},
        {.addr=0x81db, .value=0x69, .type=IO_READ},
        {.addr=0x0069, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03D5) {
    const struct CPU_State initial_cpu = {.pc=0xc578, .a=0xa2, .x=0x3f, .y=0x5a, .sp=0x79, .status=0xe1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0101, .value=0x30}, {.addr=0xc578, .value=0x3e}, {.addr=0xc579, .value=0x01},
    };
    const struct CPU_State final_cpu = {.pc=0xc57a, .a=0xa2, .x=0x3f, .y=0x5a, .sp=0x79, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x0101, .value=0x30}, {.addr=0xc578, .value=0x3e}, {.addr=0xc579, .value=0x01},
    };
    const struct BusEvent events[] = {
        {.addr=0xc578, .value=0x3e, .type=IO_READ},
        {.addr=0xc579, .value=0x01, .type=IO_READ},
        {.addr=0x0101, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03D6) {
    const struct CPU_State initial_cpu = {.pc=0xf663, .a=0x24, .x=0x1e, .y=0x7e, .sp=0xe0, .status=0xd7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0055, .value=0xd1}, {.addr=0xf663, .value=0x3e}, {.addr=0xf664, .value=0x55},
    };
    const struct CPU_State final_cpu = {.pc=0xf665, .a=0x24, .x=0x1e, .y=0x7e, .sp=0xe0, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x0055, .value=0xd1}, {.addr=0xf663, .value=0x3e}, {.addr=0xf664, .value=0x55},
    };
    const struct BusEvent events[] = {
        {.addr=0xf663, .value=0x3e, .type=IO_READ},
        {.addr=0xf664, .value=0x55, .type=IO_READ},
        {.addr=0x0055, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03D7) {
    const struct CPU_State initial_cpu = {.pc=0xfdc5, .a=0xf5, .x=0x48, .y=0xeb, .sp=0xed, .status=0x63};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010a, .value=0x97}, {.addr=0xfdc5, .value=0x3e}, {.addr=0xfdc6, .value=0x0a},
    };
    const struct CPU_State final_cpu = {.pc=0xfdc7, .a=0xf5, .x=0x48, .y=0xeb, .sp=0xed, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x010a, .value=0x97}, {.addr=0xfdc5, .value=0x3e}, {.addr=0xfdc6, .value=0x0a},
    };
    const struct BusEvent events[] = {
        {.addr=0xfdc5, .value=0x3e, .type=IO_READ},
        {.addr=0xfdc6, .value=0x0a, .type=IO_READ},
        {.addr=0x010a, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03D8) {
    const struct CPU_State initial_cpu = {.pc=0x02fc, .a=0xf2, .x=0x2f, .y=0xc7, .sp=0x50, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0087, .value=0x3b}, {.addr=0x02fc, .value=0x3e}, {.addr=0x02fd, .value=0x87},
    };
    const struct CPU_State final_cpu = {.pc=0x02fe, .a=0xf2, .x=0x2f, .y=0xc7, .sp=0x50, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0087, .value=0x3b}, {.addr=0x02fc, .value=0x3e}, {.addr=0x02fd, .value=0x87},
    };
    const struct BusEvent events[] = {
        {.addr=0x02fc, .value=0x3e, .type=IO_READ},
        {.addr=0x02fd, .value=0x87, .type=IO_READ},
        {.addr=0x0087, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03D9) {
    const struct CPU_State initial_cpu = {.pc=0xc7bf, .a=0x66, .x=0xdb, .y=0x86, .sp=0xc6, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000a, .value=0x49}, {.addr=0xc7bf, .value=0x3e}, {.addr=0xc7c0, .value=0x0a},
    };
    const struct CPU_State final_cpu = {.pc=0xc7c1, .a=0x66, .x=0xdb, .y=0x86, .sp=0xc6, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x000a, .value=0x49}, {.addr=0xc7bf, .value=0x3e}, {.addr=0xc7c0, .value=0x0a},
    };
    const struct BusEvent events[] = {
        {.addr=0xc7bf, .value=0x3e, .type=IO_READ},
        {.addr=0xc7c0, .value=0x0a, .type=IO_READ},
        {.addr=0x000a, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03DA) {
    const struct CPU_State initial_cpu = {.pc=0x4168, .a=0x48, .x=0xb2, .y=0x14, .sp=0x09, .status=0x91};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0044, .value=0xd7}, {.addr=0x4168, .value=0x3e}, {.addr=0x4169, .value=0x44},
    };
    const struct CPU_State final_cpu = {.pc=0x416a, .a=0x48, .x=0xb2, .y=0x14, .sp=0x09, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x0044, .value=0xd7}, {.addr=0x4168, .value=0x3e}, {.addr=0x4169, .value=0x44},
    };
    const struct BusEvent events[] = {
        {.addr=0x4168, .value=0x3e, .type=IO_READ},
        {.addr=0x4169, .value=0x44, .type=IO_READ},
        {.addr=0x0044, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03DB) {
    const struct CPU_State initial_cpu = {.pc=0x25b7, .a=0x7f, .x=0x27, .y=0xcb, .sp=0x4c, .status=0x7a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019d, .value=0x65}, {.addr=0x25b7, .value=0x3e}, {.addr=0x25b8, .value=0x9d},
    };
    const struct CPU_State final_cpu = {.pc=0x25b9, .a=0x7f, .x=0x27, .y=0xcb, .sp=0x4c, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x019d, .value=0x65}, {.addr=0x25b7, .value=0x3e}, {.addr=0x25b8, .value=0x9d},
    };
    const struct BusEvent events[] = {
        {.addr=0x25b7, .value=0x3e, .type=IO_READ},
        {.addr=0x25b8, .value=0x9d, .type=IO_READ},
        {.addr=0x019d, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03DC) {
    const struct CPU_State initial_cpu = {.pc=0x4478, .a=0xc4, .x=0x09, .y=0x3c, .sp=0x45, .status=0xe5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f4, .value=0x35}, {.addr=0x4478, .value=0x3e}, {.addr=0x4479, .value=0xf4},
    };
    const struct CPU_State final_cpu = {.pc=0x447a, .a=0xc4, .x=0x09, .y=0x3c, .sp=0x45, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f4, .value=0x35}, {.addr=0x4478, .value=0x3e}, {.addr=0x4479, .value=0xf4},
    };
    const struct BusEvent events[] = {
        {.addr=0x4478, .value=0x3e, .type=IO_READ},
        {.addr=0x4479, .value=0xf4, .type=IO_READ},
        {.addr=0x01f4, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03DD) {
    const struct CPU_State initial_cpu = {.pc=0x1c5c, .a=0xe9, .x=0x5c, .y=0x41, .sp=0x82, .status=0xa9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e1, .value=0x64}, {.addr=0x1c5c, .value=0x3e}, {.addr=0x1c5d, .value=0xe1},
    };
    const struct CPU_State final_cpu = {.pc=0x1c5e, .a=0xe9, .x=0x5c, .y=0x41, .sp=0x82, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e1, .value=0x64}, {.addr=0x1c5c, .value=0x3e}, {.addr=0x1c5d, .value=0xe1},
    };
    const struct BusEvent events[] = {
        {.addr=0x1c5c, .value=0x3e, .type=IO_READ},
        {.addr=0x1c5d, .value=0xe1, .type=IO_READ},
        {.addr=0x01e1, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03DE) {
    const struct CPU_State initial_cpu = {.pc=0xb9ea, .a=0x82, .x=0x0d, .y=0x59, .sp=0x93, .status=0x5b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ca, .value=0xe7}, {.addr=0xb9ea, .value=0x3e}, {.addr=0xb9eb, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0xb9ec, .a=0x82, .x=0x0d, .y=0x59, .sp=0x93, .status=0x58};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ca, .value=0xe7}, {.addr=0xb9ea, .value=0x3e}, {.addr=0xb9eb, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0xb9ea, .value=0x3e, .type=IO_READ},
        {.addr=0xb9eb, .value=0xca, .type=IO_READ},
        {.addr=0x00ca, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x6f09, .a=0x94, .x=0xda, .y=0x11, .sp=0x62, .status=0xe5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012e, .value=0x81}, {.addr=0x6f09, .value=0x3e}, {.addr=0x6f0a, .value=0x2e},
    };
    const struct CPU_State final_cpu = {.pc=0x6f0b, .a=0x94, .x=0xda, .y=0x11, .sp=0x62, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x012e, .value=0x81}, {.addr=0x6f09, .value=0x3e}, {.addr=0x6f0a, .value=0x2e},
    };
    const struct BusEvent events[] = {
        {.addr=0x6f09, .value=0x3e, .type=IO_READ},
        {.addr=0x6f0a, .value=0x2e, .type=IO_READ},
        {.addr=0x012e, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03E0) {
    const struct CPU_State initial_cpu = {.pc=0xb077, .a=0x8b, .x=0x5d, .y=0x3d, .sp=0xf8, .status=0x8e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004e, .value=0x6c}, {.addr=0xb077, .value=0x3e}, {.addr=0xb078, .value=0x4e},
    };
    const struct CPU_State final_cpu = {.pc=0xb079, .a=0x8b, .x=0x5d, .y=0x3d, .sp=0xf8, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x004e, .value=0x6c}, {.addr=0xb077, .value=0x3e}, {.addr=0xb078, .value=0x4e},
    };
    const struct BusEvent events[] = {
        {.addr=0xb077, .value=0x3e, .type=IO_READ},
        {.addr=0xb078, .value=0x4e, .type=IO_READ},
        {.addr=0x004e, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03E1) {
    const struct CPU_State initial_cpu = {.pc=0x74a8, .a=0x16, .x=0x3d, .y=0xc7, .sp=0x86, .status=0x14};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d3, .value=0xf1}, {.addr=0x74a8, .value=0x3e}, {.addr=0x74a9, .value=0xd3},
    };
    const struct CPU_State final_cpu = {.pc=0x74aa, .a=0x16, .x=0x3d, .y=0xc7, .sp=0x86, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d3, .value=0xf1}, {.addr=0x74a8, .value=0x3e}, {.addr=0x74a9, .value=0xd3},
    };
    const struct BusEvent events[] = {
        {.addr=0x74a8, .value=0x3e, .type=IO_READ},
        {.addr=0x74a9, .value=0xd3, .type=IO_READ},
        {.addr=0x00d3, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03E2) {
    const struct CPU_State initial_cpu = {.pc=0xfba1, .a=0xd3, .x=0x83, .y=0x35, .sp=0x1f, .status=0x3b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0137, .value=0xad}, {.addr=0xfba1, .value=0x3e}, {.addr=0xfba2, .value=0x37},
    };
    const struct CPU_State final_cpu = {.pc=0xfba3, .a=0xd3, .x=0x83, .y=0x35, .sp=0x1f, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0137, .value=0xad}, {.addr=0xfba1, .value=0x3e}, {.addr=0xfba2, .value=0x37},
    };
    const struct BusEvent events[] = {
        {.addr=0xfba1, .value=0x3e, .type=IO_READ},
        {.addr=0xfba2, .value=0x37, .type=IO_READ},
        {.addr=0x0137, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03E3) {
    const struct CPU_State initial_cpu = {.pc=0x7195, .a=0x2f, .x=0x18, .y=0x4a, .sp=0xb2, .status=0xef};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ab, .value=0x16}, {.addr=0x7195, .value=0x3e}, {.addr=0x7196, .value=0xab},
    };
    const struct CPU_State final_cpu = {.pc=0x7197, .a=0x2f, .x=0x18, .y=0x4a, .sp=0xb2, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ab, .value=0x16}, {.addr=0x7195, .value=0x3e}, {.addr=0x7196, .value=0xab},
    };
    const struct BusEvent events[] = {
        {.addr=0x7195, .value=0x3e, .type=IO_READ},
        {.addr=0x7196, .value=0xab, .type=IO_READ},
        {.addr=0x01ab, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x1f4d, .a=0xa7, .x=0x7d, .y=0xa4, .sp=0x4c, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0142, .value=0x32}, {.addr=0x1f4d, .value=0x3e}, {.addr=0x1f4e, .value=0x42},
    };
    const struct CPU_State final_cpu = {.pc=0x1f4f, .a=0xa7, .x=0x7d, .y=0xa4, .sp=0x4c, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x0142, .value=0x32}, {.addr=0x1f4d, .value=0x3e}, {.addr=0x1f4e, .value=0x42},
    };
    const struct BusEvent events[] = {
        {.addr=0x1f4d, .value=0x3e, .type=IO_READ},
        {.addr=0x1f4e, .value=0x42, .type=IO_READ},
        {.addr=0x0142, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03E5) {
    const struct CPU_State initial_cpu = {.pc=0xd525, .a=0xcf, .x=0xc7, .y=0xcf, .sp=0xc5, .status=0xe5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0191, .value=0x06}, {.addr=0xd525, .value=0x3e}, {.addr=0xd526, .value=0x91},
    };
    const struct CPU_State final_cpu = {.pc=0xd527, .a=0xcf, .x=0xc7, .y=0xcf, .sp=0xc5, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0191, .value=0x06}, {.addr=0xd525, .value=0x3e}, {.addr=0xd526, .value=0x91},
    };
    const struct BusEvent events[] = {
        {.addr=0xd525, .value=0x3e, .type=IO_READ},
        {.addr=0xd526, .value=0x91, .type=IO_READ},
        {.addr=0x0191, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03E6) {
    const struct CPU_State initial_cpu = {.pc=0xea5a, .a=0x9e, .x=0xdd, .y=0x28, .sp=0x72, .status=0xdb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a5, .value=0xba}, {.addr=0xea5a, .value=0x3e}, {.addr=0xea5b, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0xea5c, .a=0x9e, .x=0xdd, .y=0x28, .sp=0x72, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a5, .value=0xba}, {.addr=0xea5a, .value=0x3e}, {.addr=0xea5b, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0xea5a, .value=0x3e, .type=IO_READ},
        {.addr=0xea5b, .value=0xa5, .type=IO_READ},
        {.addr=0x00a5, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_3E, _3E_03E7) {
    const struct CPU_State initial_cpu = {.pc=0xa8d1, .a=0x70, .x=0x28, .y=0x23, .sp=0x00, .status=0x65};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012f, .value=0x24}, {.addr=0xa8d1, .value=0x3e}, {.addr=0xa8d2, .value=0x2f},
    };
    const struct CPU_State final_cpu = {.pc=0xa8d3, .a=0x70, .x=0x28, .y=0x23, .sp=0x00, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x012f, .value=0x24}, {.addr=0xa8d1, .value=0x3e}, {.addr=0xa8d2, .value=0x2f},
    };
    const struct BusEvent events[] = {
        {.addr=0xa8d1, .value=0x3e, .type=IO_READ},
        {.addr=0xa8d2, .value=0x2f, .type=IO_READ},
        {.addr=0x012f, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("3E 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
