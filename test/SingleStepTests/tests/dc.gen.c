#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_DC, _DC_0000) {
    const struct CPU_State initial_cpu = {.pc=0x7f6a, .a=0xa6, .x=0x64, .y=0x1d, .sp=0xfe, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x7f6a, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x7f6b, .a=0xa6, .x=0x64, .y=0x1c, .sp=0xfe, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x7f6a, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x7f6a, .value=0xdc, .type=IO_READ},
        {.addr=0x7f6b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0001) {
    const struct CPU_State initial_cpu = {.pc=0x7758, .a=0xae, .x=0xa2, .y=0x29, .sp=0x74, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x7758, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x7759, .a=0xae, .x=0xa2, .y=0x28, .sp=0x74, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x7758, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x7758, .value=0xdc, .type=IO_READ},
        {.addr=0x7759, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0002) {
    const struct CPU_State initial_cpu = {.pc=0x4144, .a=0x32, .x=0x7e, .y=0x24, .sp=0xf3, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x4144, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x4145, .a=0x32, .x=0x7e, .y=0x23, .sp=0xf3, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x4144, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x4144, .value=0xdc, .type=IO_READ},
        {.addr=0x4145, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0003) {
    const struct CPU_State initial_cpu = {.pc=0xaf67, .a=0xbb, .x=0x4b, .y=0x9d, .sp=0xb0, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xaf67, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xaf68, .a=0xbb, .x=0x4b, .y=0x9c, .sp=0xb0, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xaf67, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xaf67, .value=0xdc, .type=IO_READ},
        {.addr=0xaf68, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0004) {
    const struct CPU_State initial_cpu = {.pc=0x263a, .a=0x39, .x=0xe0, .y=0x7e, .sp=0xb2, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x263a, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x263b, .a=0x39, .x=0xe0, .y=0x7d, .sp=0xb2, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x263a, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x263a, .value=0xdc, .type=IO_READ},
        {.addr=0x263b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0005) {
    const struct CPU_State initial_cpu = {.pc=0xe996, .a=0xb5, .x=0x0c, .y=0x50, .sp=0xb6, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xe996, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xe997, .a=0xb5, .x=0x0c, .y=0x4f, .sp=0xb6, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xe996, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xe996, .value=0xdc, .type=IO_READ},
        {.addr=0xe997, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0006) {
    const struct CPU_State initial_cpu = {.pc=0xbbf3, .a=0xd3, .x=0x4b, .y=0x08, .sp=0x19, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xbbf3, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xbbf4, .a=0xd3, .x=0x4b, .y=0x07, .sp=0x19, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xbbf3, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xbbf3, .value=0xdc, .type=IO_READ},
        {.addr=0xbbf4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0007) {
    const struct CPU_State initial_cpu = {.pc=0x22b8, .a=0x68, .x=0xe6, .y=0x2e, .sp=0x1e, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x22b8, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x22b9, .a=0x68, .x=0xe6, .y=0x2d, .sp=0x1e, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x22b8, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x22b8, .value=0xdc, .type=IO_READ},
        {.addr=0x22b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0008) {
    const struct CPU_State initial_cpu = {.pc=0x591f, .a=0x37, .x=0xa2, .y=0xaf, .sp=0x7c, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x591f, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x5920, .a=0x37, .x=0xa2, .y=0xae, .sp=0x7c, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x591f, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x591f, .value=0xdc, .type=IO_READ},
        {.addr=0x5920, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0009) {
    const struct CPU_State initial_cpu = {.pc=0x837a, .a=0xee, .x=0x98, .y=0xe9, .sp=0x34, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x837a, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x837b, .a=0xee, .x=0x98, .y=0xe8, .sp=0x34, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x837a, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x837a, .value=0xdc, .type=IO_READ},
        {.addr=0x837b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_000A) {
    const struct CPU_State initial_cpu = {.pc=0x4aea, .a=0x65, .x=0xd8, .y=0x17, .sp=0x0e, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x4aea, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x4aeb, .a=0x65, .x=0xd8, .y=0x16, .sp=0x0e, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x4aea, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x4aea, .value=0xdc, .type=IO_READ},
        {.addr=0x4aeb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_000B) {
    const struct CPU_State initial_cpu = {.pc=0x0951, .a=0x18, .x=0x15, .y=0xf7, .sp=0xef, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x0951, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x0952, .a=0x18, .x=0x15, .y=0xf6, .sp=0xef, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0951, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x0951, .value=0xdc, .type=IO_READ},
        {.addr=0x0952, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_000C) {
    const struct CPU_State initial_cpu = {.pc=0xde7c, .a=0xb4, .x=0x1f, .y=0x30, .sp=0x86, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xde7c, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xde7d, .a=0xb4, .x=0x1f, .y=0x2f, .sp=0x86, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xde7c, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xde7c, .value=0xdc, .type=IO_READ},
        {.addr=0xde7d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_000D) {
    const struct CPU_State initial_cpu = {.pc=0xee6a, .a=0xa7, .x=0xa6, .y=0x4e, .sp=0x53, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xee6a, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xee6b, .a=0xa7, .x=0xa6, .y=0x4d, .sp=0x53, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xee6a, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xee6a, .value=0xdc, .type=IO_READ},
        {.addr=0xee6b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_000E) {
    const struct CPU_State initial_cpu = {.pc=0x71e5, .a=0x69, .x=0xb4, .y=0xba, .sp=0xd2, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x71e5, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x71e6, .a=0x69, .x=0xb4, .y=0xb9, .sp=0xd2, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x71e5, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x71e5, .value=0xdc, .type=IO_READ},
        {.addr=0x71e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_000F) {
    const struct CPU_State initial_cpu = {.pc=0x3ffb, .a=0x08, .x=0x3d, .y=0x09, .sp=0x33, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x3ffb, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x3ffc, .a=0x08, .x=0x3d, .y=0x08, .sp=0x33, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x3ffb, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x3ffb, .value=0xdc, .type=IO_READ},
        {.addr=0x3ffc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0010) {
    const struct CPU_State initial_cpu = {.pc=0x1289, .a=0x97, .x=0xc0, .y=0xec, .sp=0xdd, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x1289, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x128a, .a=0x97, .x=0xc0, .y=0xeb, .sp=0xdd, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x1289, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1289, .value=0xdc, .type=IO_READ},
        {.addr=0x128a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0011) {
    const struct CPU_State initial_cpu = {.pc=0xf970, .a=0xa4, .x=0xf4, .y=0xb7, .sp=0xe9, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xf970, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xf971, .a=0xa4, .x=0xf4, .y=0xb6, .sp=0xe9, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xf970, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xf970, .value=0xdc, .type=IO_READ},
        {.addr=0xf971, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0012) {
    const struct CPU_State initial_cpu = {.pc=0x7dda, .a=0xa1, .x=0x33, .y=0x53, .sp=0x2f, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x7dda, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x7ddb, .a=0xa1, .x=0x33, .y=0x52, .sp=0x2f, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x7dda, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x7dda, .value=0xdc, .type=IO_READ},
        {.addr=0x7ddb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0013) {
    const struct CPU_State initial_cpu = {.pc=0xdd11, .a=0xf2, .x=0x31, .y=0x54, .sp=0xa0, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xdd11, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xdd12, .a=0xf2, .x=0x31, .y=0x53, .sp=0xa0, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xdd11, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xdd11, .value=0xdc, .type=IO_READ},
        {.addr=0xdd12, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0014) {
    const struct CPU_State initial_cpu = {.pc=0x733a, .a=0xfe, .x=0x81, .y=0x58, .sp=0x86, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x733a, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x733b, .a=0xfe, .x=0x81, .y=0x57, .sp=0x86, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x733a, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x733a, .value=0xdc, .type=IO_READ},
        {.addr=0x733b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0015) {
    const struct CPU_State initial_cpu = {.pc=0x0f9c, .a=0xc3, .x=0x44, .y=0x3f, .sp=0xff, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x0f9c, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x0f9d, .a=0xc3, .x=0x44, .y=0x3e, .sp=0xff, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0f9c, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x0f9c, .value=0xdc, .type=IO_READ},
        {.addr=0x0f9d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0016) {
    const struct CPU_State initial_cpu = {.pc=0xcfdb, .a=0xd2, .x=0xb3, .y=0xf7, .sp=0xa9, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xcfdb, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xcfdc, .a=0xd2, .x=0xb3, .y=0xf6, .sp=0xa9, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xcfdb, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xcfdb, .value=0xdc, .type=IO_READ},
        {.addr=0xcfdc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0017) {
    const struct CPU_State initial_cpu = {.pc=0x1a5e, .a=0x04, .x=0xf9, .y=0xb7, .sp=0xa2, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x1a5e, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x1a5f, .a=0x04, .x=0xf9, .y=0xb6, .sp=0xa2, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x1a5e, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1a5e, .value=0xdc, .type=IO_READ},
        {.addr=0x1a5f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0018) {
    const struct CPU_State initial_cpu = {.pc=0x8ac3, .a=0xc5, .x=0xcc, .y=0x26, .sp=0x2e, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x8ac3, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8ac4, .a=0xc5, .x=0xcc, .y=0x25, .sp=0x2e, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x8ac3, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x8ac3, .value=0xdc, .type=IO_READ},
        {.addr=0x8ac4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0019) {
    const struct CPU_State initial_cpu = {.pc=0x6ea7, .a=0xb0, .x=0xe1, .y=0xd5, .sp=0x8e, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x6ea7, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x6ea8, .a=0xb0, .x=0xe1, .y=0xd4, .sp=0x8e, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x6ea7, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x6ea7, .value=0xdc, .type=IO_READ},
        {.addr=0x6ea8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_001A) {
    const struct CPU_State initial_cpu = {.pc=0xf2c4, .a=0xac, .x=0x8e, .y=0x1e, .sp=0xe5, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xf2c4, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xf2c5, .a=0xac, .x=0x8e, .y=0x1d, .sp=0xe5, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xf2c4, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xf2c4, .value=0xdc, .type=IO_READ},
        {.addr=0xf2c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_001B) {
    const struct CPU_State initial_cpu = {.pc=0xf39e, .a=0x7e, .x=0xc9, .y=0xad, .sp=0xe4, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xf39e, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xf39f, .a=0x7e, .x=0xc9, .y=0xac, .sp=0xe4, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xf39e, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xf39e, .value=0xdc, .type=IO_READ},
        {.addr=0xf39f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_001C) {
    const struct CPU_State initial_cpu = {.pc=0xc6ff, .a=0x93, .x=0x62, .y=0xba, .sp=0x11, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xc6ff, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xc700, .a=0x93, .x=0x62, .y=0xb9, .sp=0x11, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xc6ff, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xc6ff, .value=0xdc, .type=IO_READ},
        {.addr=0xc700, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_001D) {
    const struct CPU_State initial_cpu = {.pc=0xe663, .a=0x05, .x=0x26, .y=0xc9, .sp=0x4b, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xe663, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xe664, .a=0x05, .x=0x26, .y=0xc8, .sp=0x4b, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xe663, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xe663, .value=0xdc, .type=IO_READ},
        {.addr=0xe664, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_001E) {
    const struct CPU_State initial_cpu = {.pc=0xdf40, .a=0x7c, .x=0x8b, .y=0x61, .sp=0xd1, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xdf40, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xdf41, .a=0x7c, .x=0x8b, .y=0x60, .sp=0xd1, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xdf40, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xdf40, .value=0xdc, .type=IO_READ},
        {.addr=0xdf41, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_001F) {
    const struct CPU_State initial_cpu = {.pc=0xcf5f, .a=0x2a, .x=0x1b, .y=0xb4, .sp=0x0a, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xcf5f, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xcf60, .a=0x2a, .x=0x1b, .y=0xb3, .sp=0x0a, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xcf5f, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xcf5f, .value=0xdc, .type=IO_READ},
        {.addr=0xcf60, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0020) {
    const struct CPU_State initial_cpu = {.pc=0x9cae, .a=0xfb, .x=0x09, .y=0x76, .sp=0xcb, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x9cae, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x9caf, .a=0xfb, .x=0x09, .y=0x75, .sp=0xcb, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x9cae, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x9cae, .value=0xdc, .type=IO_READ},
        {.addr=0x9caf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0021) {
    const struct CPU_State initial_cpu = {.pc=0x4970, .a=0xb5, .x=0xf4, .y=0x6d, .sp=0x71, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x4970, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x4971, .a=0xb5, .x=0xf4, .y=0x6c, .sp=0x71, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x4970, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x4970, .value=0xdc, .type=IO_READ},
        {.addr=0x4971, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0022) {
    const struct CPU_State initial_cpu = {.pc=0x9e9e, .a=0x02, .x=0x5d, .y=0xcc, .sp=0x7a, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x9e9e, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x9e9f, .a=0x02, .x=0x5d, .y=0xcb, .sp=0x7a, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x9e9e, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x9e9e, .value=0xdc, .type=IO_READ},
        {.addr=0x9e9f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0023) {
    const struct CPU_State initial_cpu = {.pc=0x3a53, .a=0xab, .x=0x74, .y=0x9b, .sp=0x7a, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x3a53, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x3a54, .a=0xab, .x=0x74, .y=0x9a, .sp=0x7a, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x3a53, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x3a53, .value=0xdc, .type=IO_READ},
        {.addr=0x3a54, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0024) {
    const struct CPU_State initial_cpu = {.pc=0xadb5, .a=0xa3, .x=0x42, .y=0x72, .sp=0xa0, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xadb5, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xadb6, .a=0xa3, .x=0x42, .y=0x71, .sp=0xa0, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xadb5, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xadb5, .value=0xdc, .type=IO_READ},
        {.addr=0xadb6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0025) {
    const struct CPU_State initial_cpu = {.pc=0xfc30, .a=0xd5, .x=0x4b, .y=0x93, .sp=0x50, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xfc30, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xfc31, .a=0xd5, .x=0x4b, .y=0x92, .sp=0x50, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xfc30, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xfc30, .value=0xdc, .type=IO_READ},
        {.addr=0xfc31, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0026) {
    const struct CPU_State initial_cpu = {.pc=0xe030, .a=0x2c, .x=0xae, .y=0xe3, .sp=0x9d, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xe030, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xe031, .a=0x2c, .x=0xae, .y=0xe2, .sp=0x9d, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xe030, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xe030, .value=0xdc, .type=IO_READ},
        {.addr=0xe031, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0027) {
    const struct CPU_State initial_cpu = {.pc=0xe56e, .a=0x51, .x=0x8b, .y=0x48, .sp=0x32, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xe56e, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xe56f, .a=0x51, .x=0x8b, .y=0x47, .sp=0x32, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xe56e, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xe56e, .value=0xdc, .type=IO_READ},
        {.addr=0xe56f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0028) {
    const struct CPU_State initial_cpu = {.pc=0xe8f1, .a=0xa4, .x=0xd3, .y=0x0e, .sp=0xbb, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xe8f1, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xe8f2, .a=0xa4, .x=0xd3, .y=0x0d, .sp=0xbb, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xe8f1, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xe8f1, .value=0xdc, .type=IO_READ},
        {.addr=0xe8f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0029) {
    const struct CPU_State initial_cpu = {.pc=0x63b1, .a=0x93, .x=0x4d, .y=0xc6, .sp=0x27, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x63b1, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x63b2, .a=0x93, .x=0x4d, .y=0xc5, .sp=0x27, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x63b1, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x63b1, .value=0xdc, .type=IO_READ},
        {.addr=0x63b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_002A) {
    const struct CPU_State initial_cpu = {.pc=0xabfe, .a=0xd4, .x=0x4e, .y=0x11, .sp=0x7c, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xabfe, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xabff, .a=0xd4, .x=0x4e, .y=0x10, .sp=0x7c, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xabfe, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xabfe, .value=0xdc, .type=IO_READ},
        {.addr=0xabff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_002B) {
    const struct CPU_State initial_cpu = {.pc=0xd819, .a=0x98, .x=0x9b, .y=0x77, .sp=0x7c, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xd819, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xd81a, .a=0x98, .x=0x9b, .y=0x76, .sp=0x7c, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xd819, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xd819, .value=0xdc, .type=IO_READ},
        {.addr=0xd81a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_002C) {
    const struct CPU_State initial_cpu = {.pc=0x66ec, .a=0x61, .x=0x2d, .y=0x65, .sp=0x0e, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x66ec, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x66ed, .a=0x61, .x=0x2d, .y=0x64, .sp=0x0e, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x66ec, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x66ec, .value=0xdc, .type=IO_READ},
        {.addr=0x66ed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_002D) {
    const struct CPU_State initial_cpu = {.pc=0xe1c3, .a=0x23, .x=0xe3, .y=0x78, .sp=0x44, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xe1c3, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xe1c4, .a=0x23, .x=0xe3, .y=0x77, .sp=0x44, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xe1c3, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xe1c3, .value=0xdc, .type=IO_READ},
        {.addr=0xe1c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_002E) {
    const struct CPU_State initial_cpu = {.pc=0xf4ad, .a=0xa3, .x=0xbe, .y=0xbc, .sp=0xa5, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xf4ad, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xf4ae, .a=0xa3, .x=0xbe, .y=0xbb, .sp=0xa5, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xf4ad, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xf4ad, .value=0xdc, .type=IO_READ},
        {.addr=0xf4ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_002F) {
    const struct CPU_State initial_cpu = {.pc=0x28d6, .a=0x3d, .x=0x6b, .y=0xf8, .sp=0x37, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x28d6, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x28d7, .a=0x3d, .x=0x6b, .y=0xf7, .sp=0x37, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x28d6, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x28d6, .value=0xdc, .type=IO_READ},
        {.addr=0x28d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0030) {
    const struct CPU_State initial_cpu = {.pc=0x8d2c, .a=0xf2, .x=0x97, .y=0xb2, .sp=0xce, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x8d2c, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8d2d, .a=0xf2, .x=0x97, .y=0xb1, .sp=0xce, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x8d2c, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x8d2c, .value=0xdc, .type=IO_READ},
        {.addr=0x8d2d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0031) {
    const struct CPU_State initial_cpu = {.pc=0x4801, .a=0xd5, .x=0xae, .y=0x4d, .sp=0xdd, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x4801, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x4802, .a=0xd5, .x=0xae, .y=0x4c, .sp=0xdd, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x4801, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x4801, .value=0xdc, .type=IO_READ},
        {.addr=0x4802, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0032) {
    const struct CPU_State initial_cpu = {.pc=0xe5ee, .a=0xb6, .x=0x20, .y=0x18, .sp=0xd9, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xe5ee, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xe5ef, .a=0xb6, .x=0x20, .y=0x17, .sp=0xd9, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xe5ee, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xe5ee, .value=0xdc, .type=IO_READ},
        {.addr=0xe5ef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0033) {
    const struct CPU_State initial_cpu = {.pc=0x8983, .a=0x03, .x=0xc2, .y=0xaf, .sp=0xd4, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x8983, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8984, .a=0x03, .x=0xc2, .y=0xae, .sp=0xd4, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x8983, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x8983, .value=0xdc, .type=IO_READ},
        {.addr=0x8984, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0034) {
    const struct CPU_State initial_cpu = {.pc=0xb671, .a=0x67, .x=0x4b, .y=0x7d, .sp=0xcb, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xb671, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xb672, .a=0x67, .x=0x4b, .y=0x7c, .sp=0xcb, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xb671, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xb671, .value=0xdc, .type=IO_READ},
        {.addr=0xb672, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0035) {
    const struct CPU_State initial_cpu = {.pc=0xde30, .a=0x20, .x=0x93, .y=0xf4, .sp=0xaf, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xde30, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xde31, .a=0x20, .x=0x93, .y=0xf3, .sp=0xaf, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xde30, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xde30, .value=0xdc, .type=IO_READ},
        {.addr=0xde31, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0036) {
    const struct CPU_State initial_cpu = {.pc=0xa8d3, .a=0xa9, .x=0xa6, .y=0x64, .sp=0xd0, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xa8d3, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xa8d4, .a=0xa9, .x=0xa6, .y=0x63, .sp=0xd0, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xa8d3, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xa8d3, .value=0xdc, .type=IO_READ},
        {.addr=0xa8d4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0037) {
    const struct CPU_State initial_cpu = {.pc=0x78eb, .a=0x8b, .x=0x07, .y=0xfe, .sp=0x85, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x78eb, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x78ec, .a=0x8b, .x=0x07, .y=0xfd, .sp=0x85, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x78eb, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x78eb, .value=0xdc, .type=IO_READ},
        {.addr=0x78ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0038) {
    const struct CPU_State initial_cpu = {.pc=0xf94b, .a=0x06, .x=0x2e, .y=0xb9, .sp=0x4b, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xf94b, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xf94c, .a=0x06, .x=0x2e, .y=0xb8, .sp=0x4b, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xf94b, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xf94b, .value=0xdc, .type=IO_READ},
        {.addr=0xf94c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0039) {
    const struct CPU_State initial_cpu = {.pc=0x8055, .a=0xbb, .x=0x1c, .y=0x58, .sp=0xaa, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x8055, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8056, .a=0xbb, .x=0x1c, .y=0x57, .sp=0xaa, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x8055, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x8055, .value=0xdc, .type=IO_READ},
        {.addr=0x8056, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_003A) {
    const struct CPU_State initial_cpu = {.pc=0x8dc6, .a=0xb8, .x=0x49, .y=0xf8, .sp=0xa7, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x8dc6, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8dc7, .a=0xb8, .x=0x49, .y=0xf7, .sp=0xa7, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x8dc6, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x8dc6, .value=0xdc, .type=IO_READ},
        {.addr=0x8dc7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_003B) {
    const struct CPU_State initial_cpu = {.pc=0x7d56, .a=0x97, .x=0xe0, .y=0x9e, .sp=0xbb, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x7d56, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x7d57, .a=0x97, .x=0xe0, .y=0x9d, .sp=0xbb, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x7d56, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x7d56, .value=0xdc, .type=IO_READ},
        {.addr=0x7d57, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_003C) {
    const struct CPU_State initial_cpu = {.pc=0x6576, .a=0x2a, .x=0x5a, .y=0xa3, .sp=0xc7, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x6576, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x6577, .a=0x2a, .x=0x5a, .y=0xa2, .sp=0xc7, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x6576, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x6576, .value=0xdc, .type=IO_READ},
        {.addr=0x6577, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_003D) {
    const struct CPU_State initial_cpu = {.pc=0x08de, .a=0xdf, .x=0x00, .y=0x9d, .sp=0x60, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x08de, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x08df, .a=0xdf, .x=0x00, .y=0x9c, .sp=0x60, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x08de, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x08de, .value=0xdc, .type=IO_READ},
        {.addr=0x08df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_003E) {
    const struct CPU_State initial_cpu = {.pc=0x952b, .a=0xd1, .x=0x53, .y=0xa2, .sp=0xb2, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x952b, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x952c, .a=0xd1, .x=0x53, .y=0xa1, .sp=0xb2, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x952b, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x952b, .value=0xdc, .type=IO_READ},
        {.addr=0x952c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_003F) {
    const struct CPU_State initial_cpu = {.pc=0xc4c6, .a=0x31, .x=0x4d, .y=0xf9, .sp=0xb7, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xc4c6, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xc4c7, .a=0x31, .x=0x4d, .y=0xf8, .sp=0xb7, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xc4c6, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xc4c6, .value=0xdc, .type=IO_READ},
        {.addr=0xc4c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0040) {
    const struct CPU_State initial_cpu = {.pc=0xa1a9, .a=0x9e, .x=0x38, .y=0x2b, .sp=0xbb, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xa1a9, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xa1aa, .a=0x9e, .x=0x38, .y=0x2a, .sp=0xbb, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xa1a9, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xa1a9, .value=0xdc, .type=IO_READ},
        {.addr=0xa1aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0041) {
    const struct CPU_State initial_cpu = {.pc=0x3934, .a=0xcb, .x=0x98, .y=0xa3, .sp=0xe3, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x3934, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x3935, .a=0xcb, .x=0x98, .y=0xa2, .sp=0xe3, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x3934, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x3934, .value=0xdc, .type=IO_READ},
        {.addr=0x3935, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0042) {
    const struct CPU_State initial_cpu = {.pc=0x2637, .a=0x63, .x=0x64, .y=0x4d, .sp=0x4f, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x2637, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x2638, .a=0x63, .x=0x64, .y=0x4c, .sp=0x4f, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x2637, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x2637, .value=0xdc, .type=IO_READ},
        {.addr=0x2638, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0043) {
    const struct CPU_State initial_cpu = {.pc=0x8c1c, .a=0x81, .x=0xb6, .y=0x9a, .sp=0xa0, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x8c1c, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8c1d, .a=0x81, .x=0xb6, .y=0x99, .sp=0xa0, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x8c1c, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x8c1c, .value=0xdc, .type=IO_READ},
        {.addr=0x8c1d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0044) {
    const struct CPU_State initial_cpu = {.pc=0xa149, .a=0x30, .x=0x79, .y=0x96, .sp=0x42, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xa149, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xa14a, .a=0x30, .x=0x79, .y=0x95, .sp=0x42, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xa149, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xa149, .value=0xdc, .type=IO_READ},
        {.addr=0xa14a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0045) {
    const struct CPU_State initial_cpu = {.pc=0xd522, .a=0x9a, .x=0xf0, .y=0x9d, .sp=0xe9, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xd522, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xd523, .a=0x9a, .x=0xf0, .y=0x9c, .sp=0xe9, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xd522, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xd522, .value=0xdc, .type=IO_READ},
        {.addr=0xd523, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0046) {
    const struct CPU_State initial_cpu = {.pc=0x35e1, .a=0x5d, .x=0x7f, .y=0xae, .sp=0x05, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x35e1, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x35e2, .a=0x5d, .x=0x7f, .y=0xad, .sp=0x05, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x35e1, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x35e1, .value=0xdc, .type=IO_READ},
        {.addr=0x35e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0047) {
    const struct CPU_State initial_cpu = {.pc=0x3704, .a=0x15, .x=0x78, .y=0x5c, .sp=0xd3, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x3704, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x3705, .a=0x15, .x=0x78, .y=0x5b, .sp=0xd3, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x3704, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x3704, .value=0xdc, .type=IO_READ},
        {.addr=0x3705, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0048) {
    const struct CPU_State initial_cpu = {.pc=0x7377, .a=0x9a, .x=0xc4, .y=0x17, .sp=0xc8, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x7377, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x7378, .a=0x9a, .x=0xc4, .y=0x16, .sp=0xc8, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x7377, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x7377, .value=0xdc, .type=IO_READ},
        {.addr=0x7378, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0049) {
    const struct CPU_State initial_cpu = {.pc=0x52f3, .a=0xe4, .x=0x2f, .y=0xd9, .sp=0x93, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x52f3, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x52f4, .a=0xe4, .x=0x2f, .y=0xd8, .sp=0x93, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x52f3, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x52f3, .value=0xdc, .type=IO_READ},
        {.addr=0x52f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_004A) {
    const struct CPU_State initial_cpu = {.pc=0x99e2, .a=0xd4, .x=0x86, .y=0xa5, .sp=0x6f, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x99e2, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x99e3, .a=0xd4, .x=0x86, .y=0xa4, .sp=0x6f, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x99e2, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x99e2, .value=0xdc, .type=IO_READ},
        {.addr=0x99e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_004B) {
    const struct CPU_State initial_cpu = {.pc=0xa68b, .a=0x48, .x=0xab, .y=0x88, .sp=0xf8, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xa68b, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xa68c, .a=0x48, .x=0xab, .y=0x87, .sp=0xf8, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xa68b, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xa68b, .value=0xdc, .type=IO_READ},
        {.addr=0xa68c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_004C) {
    const struct CPU_State initial_cpu = {.pc=0x7658, .a=0xd5, .x=0x57, .y=0x56, .sp=0x4f, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x7658, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x7659, .a=0xd5, .x=0x57, .y=0x55, .sp=0x4f, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x7658, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x7658, .value=0xdc, .type=IO_READ},
        {.addr=0x7659, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_004D) {
    const struct CPU_State initial_cpu = {.pc=0x4811, .a=0x4c, .x=0x0c, .y=0x09, .sp=0xe5, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x4811, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x4812, .a=0x4c, .x=0x0c, .y=0x08, .sp=0xe5, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x4811, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x4811, .value=0xdc, .type=IO_READ},
        {.addr=0x4812, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_004E) {
    const struct CPU_State initial_cpu = {.pc=0x0960, .a=0x5b, .x=0xe7, .y=0xed, .sp=0x4a, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x0960, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x0961, .a=0x5b, .x=0xe7, .y=0xec, .sp=0x4a, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0960, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x0960, .value=0xdc, .type=IO_READ},
        {.addr=0x0961, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_004F) {
    const struct CPU_State initial_cpu = {.pc=0x4a9e, .a=0xd5, .x=0x60, .y=0x86, .sp=0x99, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x4a9e, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x4a9f, .a=0xd5, .x=0x60, .y=0x85, .sp=0x99, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x4a9e, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x4a9e, .value=0xdc, .type=IO_READ},
        {.addr=0x4a9f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0050) {
    const struct CPU_State initial_cpu = {.pc=0x681d, .a=0x6e, .x=0xe5, .y=0x87, .sp=0x1c, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x681d, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x681e, .a=0x6e, .x=0xe5, .y=0x86, .sp=0x1c, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x681d, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x681d, .value=0xdc, .type=IO_READ},
        {.addr=0x681e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0051) {
    const struct CPU_State initial_cpu = {.pc=0x78ed, .a=0x49, .x=0x2e, .y=0xfa, .sp=0xc4, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x78ed, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x78ee, .a=0x49, .x=0x2e, .y=0xf9, .sp=0xc4, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x78ed, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x78ed, .value=0xdc, .type=IO_READ},
        {.addr=0x78ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0052) {
    const struct CPU_State initial_cpu = {.pc=0x433f, .a=0xf5, .x=0x24, .y=0x09, .sp=0x38, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x433f, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x4340, .a=0xf5, .x=0x24, .y=0x08, .sp=0x38, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x433f, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x433f, .value=0xdc, .type=IO_READ},
        {.addr=0x4340, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0053) {
    const struct CPU_State initial_cpu = {.pc=0xb2d9, .a=0xb7, .x=0xff, .y=0x31, .sp=0x27, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xb2d9, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xb2da, .a=0xb7, .x=0xff, .y=0x30, .sp=0x27, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xb2d9, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xb2d9, .value=0xdc, .type=IO_READ},
        {.addr=0xb2da, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0054) {
    const struct CPU_State initial_cpu = {.pc=0x236e, .a=0x1b, .x=0x2d, .y=0xd9, .sp=0x3e, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x236e, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x236f, .a=0x1b, .x=0x2d, .y=0xd8, .sp=0x3e, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x236e, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x236e, .value=0xdc, .type=IO_READ},
        {.addr=0x236f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0055) {
    const struct CPU_State initial_cpu = {.pc=0xee73, .a=0x84, .x=0x6c, .y=0xba, .sp=0x3f, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xee73, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xee74, .a=0x84, .x=0x6c, .y=0xb9, .sp=0x3f, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xee73, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xee73, .value=0xdc, .type=IO_READ},
        {.addr=0xee74, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0056) {
    const struct CPU_State initial_cpu = {.pc=0x1d57, .a=0xc4, .x=0xc0, .y=0xfa, .sp=0xc4, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x1d57, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x1d58, .a=0xc4, .x=0xc0, .y=0xf9, .sp=0xc4, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x1d57, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1d57, .value=0xdc, .type=IO_READ},
        {.addr=0x1d58, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0057) {
    const struct CPU_State initial_cpu = {.pc=0xa9e1, .a=0x80, .x=0x09, .y=0x91, .sp=0xd0, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xa9e1, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xa9e2, .a=0x80, .x=0x09, .y=0x90, .sp=0xd0, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xa9e1, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xa9e1, .value=0xdc, .type=IO_READ},
        {.addr=0xa9e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0058) {
    const struct CPU_State initial_cpu = {.pc=0x30ef, .a=0xe3, .x=0xb0, .y=0x6d, .sp=0xb1, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x30ef, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x30f0, .a=0xe3, .x=0xb0, .y=0x6c, .sp=0xb1, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x30ef, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x30ef, .value=0xdc, .type=IO_READ},
        {.addr=0x30f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0059) {
    const struct CPU_State initial_cpu = {.pc=0xd7e2, .a=0xab, .x=0x97, .y=0x9d, .sp=0x54, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xd7e2, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xd7e3, .a=0xab, .x=0x97, .y=0x9c, .sp=0x54, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xd7e2, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xd7e2, .value=0xdc, .type=IO_READ},
        {.addr=0xd7e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_005A) {
    const struct CPU_State initial_cpu = {.pc=0xdfce, .a=0x25, .x=0x95, .y=0x38, .sp=0x60, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xdfce, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xdfcf, .a=0x25, .x=0x95, .y=0x37, .sp=0x60, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xdfce, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xdfce, .value=0xdc, .type=IO_READ},
        {.addr=0xdfcf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_005B) {
    const struct CPU_State initial_cpu = {.pc=0x9518, .a=0xda, .x=0x5d, .y=0x0f, .sp=0xed, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x9518, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x9519, .a=0xda, .x=0x5d, .y=0x0e, .sp=0xed, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x9518, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x9518, .value=0xdc, .type=IO_READ},
        {.addr=0x9519, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_005C) {
    const struct CPU_State initial_cpu = {.pc=0xf63f, .a=0xd5, .x=0x29, .y=0x1e, .sp=0xe5, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xf63f, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xf640, .a=0xd5, .x=0x29, .y=0x1d, .sp=0xe5, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xf63f, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xf63f, .value=0xdc, .type=IO_READ},
        {.addr=0xf640, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_005D) {
    const struct CPU_State initial_cpu = {.pc=0x8a30, .a=0x1e, .x=0xf1, .y=0xd0, .sp=0x5e, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x8a30, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8a31, .a=0x1e, .x=0xf1, .y=0xcf, .sp=0x5e, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x8a30, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x8a30, .value=0xdc, .type=IO_READ},
        {.addr=0x8a31, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_005E) {
    const struct CPU_State initial_cpu = {.pc=0x2d6e, .a=0xb0, .x=0x90, .y=0x93, .sp=0xc3, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x2d6e, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x2d6f, .a=0xb0, .x=0x90, .y=0x92, .sp=0xc3, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x2d6e, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x2d6e, .value=0xdc, .type=IO_READ},
        {.addr=0x2d6f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_005F) {
    const struct CPU_State initial_cpu = {.pc=0x11e4, .a=0x0f, .x=0x80, .y=0xd9, .sp=0x6b, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x11e4, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x11e5, .a=0x0f, .x=0x80, .y=0xd8, .sp=0x6b, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x11e4, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x11e4, .value=0xdc, .type=IO_READ},
        {.addr=0x11e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0060) {
    const struct CPU_State initial_cpu = {.pc=0x39ff, .a=0x58, .x=0xa8, .y=0xcd, .sp=0x74, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x39ff, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x3a00, .a=0x58, .x=0xa8, .y=0xcc, .sp=0x74, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x39ff, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x39ff, .value=0xdc, .type=IO_READ},
        {.addr=0x3a00, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0061) {
    const struct CPU_State initial_cpu = {.pc=0x6d0e, .a=0x9e, .x=0x2c, .y=0x7b, .sp=0xc9, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x6d0e, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x6d0f, .a=0x9e, .x=0x2c, .y=0x7a, .sp=0xc9, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x6d0e, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x6d0e, .value=0xdc, .type=IO_READ},
        {.addr=0x6d0f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0062) {
    const struct CPU_State initial_cpu = {.pc=0x8717, .a=0xc8, .x=0xcf, .y=0xae, .sp=0x77, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x8717, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8718, .a=0xc8, .x=0xcf, .y=0xad, .sp=0x77, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x8717, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x8717, .value=0xdc, .type=IO_READ},
        {.addr=0x8718, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0063) {
    const struct CPU_State initial_cpu = {.pc=0xa8fa, .a=0xb7, .x=0x2e, .y=0x36, .sp=0x99, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xa8fa, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xa8fb, .a=0xb7, .x=0x2e, .y=0x35, .sp=0x99, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xa8fa, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xa8fa, .value=0xdc, .type=IO_READ},
        {.addr=0xa8fb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0064) {
    const struct CPU_State initial_cpu = {.pc=0x4bfc, .a=0x2d, .x=0xaa, .y=0x67, .sp=0xca, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x4bfc, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x4bfd, .a=0x2d, .x=0xaa, .y=0x66, .sp=0xca, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x4bfc, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x4bfc, .value=0xdc, .type=IO_READ},
        {.addr=0x4bfd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0065) {
    const struct CPU_State initial_cpu = {.pc=0xfc90, .a=0x1e, .x=0x34, .y=0x86, .sp=0x44, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xfc90, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xfc91, .a=0x1e, .x=0x34, .y=0x85, .sp=0x44, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xfc90, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xfc90, .value=0xdc, .type=IO_READ},
        {.addr=0xfc91, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0066) {
    const struct CPU_State initial_cpu = {.pc=0x4027, .a=0xa6, .x=0xc8, .y=0xaf, .sp=0x07, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x4027, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x4028, .a=0xa6, .x=0xc8, .y=0xae, .sp=0x07, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x4027, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x4027, .value=0xdc, .type=IO_READ},
        {.addr=0x4028, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0067) {
    const struct CPU_State initial_cpu = {.pc=0x90e7, .a=0x2d, .x=0x6b, .y=0xcd, .sp=0x3c, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x90e7, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x90e8, .a=0x2d, .x=0x6b, .y=0xcc, .sp=0x3c, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x90e7, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x90e7, .value=0xdc, .type=IO_READ},
        {.addr=0x90e8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0068) {
    const struct CPU_State initial_cpu = {.pc=0xd9c9, .a=0xec, .x=0xc4, .y=0x63, .sp=0x0b, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xd9c9, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xd9ca, .a=0xec, .x=0xc4, .y=0x62, .sp=0x0b, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xd9c9, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xd9c9, .value=0xdc, .type=IO_READ},
        {.addr=0xd9ca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0069) {
    const struct CPU_State initial_cpu = {.pc=0xd63c, .a=0x65, .x=0xe1, .y=0x50, .sp=0xaf, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xd63c, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xd63d, .a=0x65, .x=0xe1, .y=0x4f, .sp=0xaf, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xd63c, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xd63c, .value=0xdc, .type=IO_READ},
        {.addr=0xd63d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_006A) {
    const struct CPU_State initial_cpu = {.pc=0x0e90, .a=0xc2, .x=0xad, .y=0xa3, .sp=0x79, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x0e90, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x0e91, .a=0xc2, .x=0xad, .y=0xa2, .sp=0x79, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0e90, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x0e90, .value=0xdc, .type=IO_READ},
        {.addr=0x0e91, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_006B) {
    const struct CPU_State initial_cpu = {.pc=0xacac, .a=0xde, .x=0x04, .y=0x5c, .sp=0xde, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xacac, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xacad, .a=0xde, .x=0x04, .y=0x5b, .sp=0xde, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xacac, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xacac, .value=0xdc, .type=IO_READ},
        {.addr=0xacad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_006C) {
    const struct CPU_State initial_cpu = {.pc=0x027f, .a=0x5a, .x=0x2e, .y=0x77, .sp=0x99, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x027f, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x0280, .a=0x5a, .x=0x2e, .y=0x76, .sp=0x99, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x027f, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x027f, .value=0xdc, .type=IO_READ},
        {.addr=0x0280, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_006D) {
    const struct CPU_State initial_cpu = {.pc=0x92f8, .a=0x07, .x=0x3c, .y=0xeb, .sp=0xbc, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x92f8, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x92f9, .a=0x07, .x=0x3c, .y=0xea, .sp=0xbc, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x92f8, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x92f8, .value=0xdc, .type=IO_READ},
        {.addr=0x92f9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_006E) {
    const struct CPU_State initial_cpu = {.pc=0x01dc, .a=0xbe, .x=0x10, .y=0xc3, .sp=0x1a, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x01dc, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x01dd, .a=0xbe, .x=0x10, .y=0xc2, .sp=0x1a, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x01dc, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x01dc, .value=0xdc, .type=IO_READ},
        {.addr=0x01dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_006F) {
    const struct CPU_State initial_cpu = {.pc=0x5cdf, .a=0x23, .x=0x0a, .y=0xc9, .sp=0xb4, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x5cdf, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x5ce0, .a=0x23, .x=0x0a, .y=0xc8, .sp=0xb4, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x5cdf, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x5cdf, .value=0xdc, .type=IO_READ},
        {.addr=0x5ce0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0070) {
    const struct CPU_State initial_cpu = {.pc=0xb6bf, .a=0x14, .x=0x7a, .y=0x6a, .sp=0x9f, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xb6bf, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xb6c0, .a=0x14, .x=0x7a, .y=0x69, .sp=0x9f, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xb6bf, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xb6bf, .value=0xdc, .type=IO_READ},
        {.addr=0xb6c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0071) {
    const struct CPU_State initial_cpu = {.pc=0x824c, .a=0xc3, .x=0x07, .y=0x9d, .sp=0xd7, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x824c, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x824d, .a=0xc3, .x=0x07, .y=0x9c, .sp=0xd7, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x824c, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x824c, .value=0xdc, .type=IO_READ},
        {.addr=0x824d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0072) {
    const struct CPU_State initial_cpu = {.pc=0x4631, .a=0xd8, .x=0x89, .y=0x1f, .sp=0x1a, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x4631, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x4632, .a=0xd8, .x=0x89, .y=0x1e, .sp=0x1a, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x4631, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x4631, .value=0xdc, .type=IO_READ},
        {.addr=0x4632, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0073) {
    const struct CPU_State initial_cpu = {.pc=0x2fef, .a=0xb6, .x=0x62, .y=0x7e, .sp=0xc9, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x2fef, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x2ff0, .a=0xb6, .x=0x62, .y=0x7d, .sp=0xc9, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x2fef, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x2fef, .value=0xdc, .type=IO_READ},
        {.addr=0x2ff0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0074) {
    const struct CPU_State initial_cpu = {.pc=0x9923, .a=0xb4, .x=0x79, .y=0x68, .sp=0x77, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x9923, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x9924, .a=0xb4, .x=0x79, .y=0x67, .sp=0x77, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x9923, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x9923, .value=0xdc, .type=IO_READ},
        {.addr=0x9924, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0075) {
    const struct CPU_State initial_cpu = {.pc=0xf6df, .a=0xed, .x=0x4a, .y=0x42, .sp=0x91, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xf6df, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xf6e0, .a=0xed, .x=0x4a, .y=0x41, .sp=0x91, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xf6df, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xf6df, .value=0xdc, .type=IO_READ},
        {.addr=0xf6e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0076) {
    const struct CPU_State initial_cpu = {.pc=0xee91, .a=0x8e, .x=0x47, .y=0xf5, .sp=0xb5, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xee91, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xee92, .a=0x8e, .x=0x47, .y=0xf4, .sp=0xb5, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xee91, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xee91, .value=0xdc, .type=IO_READ},
        {.addr=0xee92, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0077) {
    const struct CPU_State initial_cpu = {.pc=0x8eb2, .a=0x39, .x=0x69, .y=0x6b, .sp=0x0b, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x8eb2, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8eb3, .a=0x39, .x=0x69, .y=0x6a, .sp=0x0b, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x8eb2, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x8eb2, .value=0xdc, .type=IO_READ},
        {.addr=0x8eb3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0078) {
    const struct CPU_State initial_cpu = {.pc=0xe5c4, .a=0xad, .x=0xa0, .y=0x89, .sp=0x71, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xe5c4, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xe5c5, .a=0xad, .x=0xa0, .y=0x88, .sp=0x71, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xe5c4, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xe5c4, .value=0xdc, .type=IO_READ},
        {.addr=0xe5c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0079) {
    const struct CPU_State initial_cpu = {.pc=0x3034, .a=0xad, .x=0x4e, .y=0x68, .sp=0xc6, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x3034, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x3035, .a=0xad, .x=0x4e, .y=0x67, .sp=0xc6, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x3034, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x3034, .value=0xdc, .type=IO_READ},
        {.addr=0x3035, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_007A) {
    const struct CPU_State initial_cpu = {.pc=0x5d6a, .a=0x02, .x=0x8c, .y=0xec, .sp=0x21, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x5d6a, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x5d6b, .a=0x02, .x=0x8c, .y=0xeb, .sp=0x21, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x5d6a, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x5d6a, .value=0xdc, .type=IO_READ},
        {.addr=0x5d6b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_007B) {
    const struct CPU_State initial_cpu = {.pc=0x7324, .a=0xe9, .x=0x3d, .y=0xd2, .sp=0xdd, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x7324, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x7325, .a=0xe9, .x=0x3d, .y=0xd1, .sp=0xdd, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x7324, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x7324, .value=0xdc, .type=IO_READ},
        {.addr=0x7325, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_007C) {
    const struct CPU_State initial_cpu = {.pc=0x4e40, .a=0x3f, .x=0xfe, .y=0x20, .sp=0xf6, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x4e40, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x4e41, .a=0x3f, .x=0xfe, .y=0x1f, .sp=0xf6, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x4e40, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x4e40, .value=0xdc, .type=IO_READ},
        {.addr=0x4e41, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_007D) {
    const struct CPU_State initial_cpu = {.pc=0x12a5, .a=0x23, .x=0x3b, .y=0x19, .sp=0x62, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x12a5, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x12a6, .a=0x23, .x=0x3b, .y=0x18, .sp=0x62, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x12a5, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x12a5, .value=0xdc, .type=IO_READ},
        {.addr=0x12a6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_007E) {
    const struct CPU_State initial_cpu = {.pc=0xfd7c, .a=0xd9, .x=0x14, .y=0xf7, .sp=0x2a, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xfd7c, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xfd7d, .a=0xd9, .x=0x14, .y=0xf6, .sp=0x2a, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xfd7c, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xfd7c, .value=0xdc, .type=IO_READ},
        {.addr=0xfd7d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_007F) {
    const struct CPU_State initial_cpu = {.pc=0x1751, .a=0x8d, .x=0x0e, .y=0x38, .sp=0xe3, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x1751, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x1752, .a=0x8d, .x=0x0e, .y=0x37, .sp=0xe3, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x1751, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1751, .value=0xdc, .type=IO_READ},
        {.addr=0x1752, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0080) {
    const struct CPU_State initial_cpu = {.pc=0x41bd, .a=0x92, .x=0xa1, .y=0xf6, .sp=0x31, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x41bd, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x41be, .a=0x92, .x=0xa1, .y=0xf5, .sp=0x31, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x41bd, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x41bd, .value=0xdc, .type=IO_READ},
        {.addr=0x41be, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0081) {
    const struct CPU_State initial_cpu = {.pc=0x6a9b, .a=0xe5, .x=0xd3, .y=0xca, .sp=0x93, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x6a9b, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x6a9c, .a=0xe5, .x=0xd3, .y=0xc9, .sp=0x93, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x6a9b, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x6a9b, .value=0xdc, .type=IO_READ},
        {.addr=0x6a9c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0082) {
    const struct CPU_State initial_cpu = {.pc=0x94f9, .a=0x56, .x=0x3e, .y=0xa9, .sp=0x06, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x94f9, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x94fa, .a=0x56, .x=0x3e, .y=0xa8, .sp=0x06, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x94f9, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x94f9, .value=0xdc, .type=IO_READ},
        {.addr=0x94fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0083) {
    const struct CPU_State initial_cpu = {.pc=0x116a, .a=0x99, .x=0x78, .y=0xed, .sp=0x23, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x116a, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x116b, .a=0x99, .x=0x78, .y=0xec, .sp=0x23, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x116a, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x116a, .value=0xdc, .type=IO_READ},
        {.addr=0x116b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0084) {
    const struct CPU_State initial_cpu = {.pc=0x4567, .a=0x03, .x=0x61, .y=0x09, .sp=0xa5, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x4567, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x4568, .a=0x03, .x=0x61, .y=0x08, .sp=0xa5, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x4567, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x4567, .value=0xdc, .type=IO_READ},
        {.addr=0x4568, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0085) {
    const struct CPU_State initial_cpu = {.pc=0x1934, .a=0x70, .x=0xf0, .y=0xae, .sp=0x39, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x1934, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x1935, .a=0x70, .x=0xf0, .y=0xad, .sp=0x39, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x1934, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1934, .value=0xdc, .type=IO_READ},
        {.addr=0x1935, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0086) {
    const struct CPU_State initial_cpu = {.pc=0x60eb, .a=0x7e, .x=0x32, .y=0x2d, .sp=0xfe, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x60eb, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x60ec, .a=0x7e, .x=0x32, .y=0x2c, .sp=0xfe, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x60eb, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x60eb, .value=0xdc, .type=IO_READ},
        {.addr=0x60ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0087) {
    const struct CPU_State initial_cpu = {.pc=0xc39a, .a=0xad, .x=0x0c, .y=0x68, .sp=0x40, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xc39a, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xc39b, .a=0xad, .x=0x0c, .y=0x67, .sp=0x40, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xc39a, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xc39a, .value=0xdc, .type=IO_READ},
        {.addr=0xc39b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0088) {
    const struct CPU_State initial_cpu = {.pc=0x6c51, .a=0x15, .x=0x8e, .y=0xaf, .sp=0x8d, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x6c51, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x6c52, .a=0x15, .x=0x8e, .y=0xae, .sp=0x8d, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x6c51, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x6c51, .value=0xdc, .type=IO_READ},
        {.addr=0x6c52, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0089) {
    const struct CPU_State initial_cpu = {.pc=0xc1aa, .a=0xc9, .x=0xc6, .y=0x90, .sp=0x32, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xc1aa, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xc1ab, .a=0xc9, .x=0xc6, .y=0x8f, .sp=0x32, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xc1aa, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xc1aa, .value=0xdc, .type=IO_READ},
        {.addr=0xc1ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_008A) {
    const struct CPU_State initial_cpu = {.pc=0x3377, .a=0x2d, .x=0x6d, .y=0xb5, .sp=0xd9, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x3377, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x3378, .a=0x2d, .x=0x6d, .y=0xb4, .sp=0xd9, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x3377, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x3377, .value=0xdc, .type=IO_READ},
        {.addr=0x3378, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_008B) {
    const struct CPU_State initial_cpu = {.pc=0x7f08, .a=0xf7, .x=0xe6, .y=0x53, .sp=0xca, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x7f08, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x7f09, .a=0xf7, .x=0xe6, .y=0x52, .sp=0xca, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x7f08, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x7f08, .value=0xdc, .type=IO_READ},
        {.addr=0x7f09, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_008C) {
    const struct CPU_State initial_cpu = {.pc=0x44c3, .a=0x09, .x=0x59, .y=0xd8, .sp=0x87, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x44c3, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x44c4, .a=0x09, .x=0x59, .y=0xd7, .sp=0x87, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x44c3, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x44c3, .value=0xdc, .type=IO_READ},
        {.addr=0x44c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_008D) {
    const struct CPU_State initial_cpu = {.pc=0x940d, .a=0x84, .x=0x84, .y=0x96, .sp=0x9a, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x940d, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x940e, .a=0x84, .x=0x84, .y=0x95, .sp=0x9a, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x940d, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x940d, .value=0xdc, .type=IO_READ},
        {.addr=0x940e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_008E) {
    const struct CPU_State initial_cpu = {.pc=0x1a63, .a=0xf3, .x=0xc8, .y=0x6d, .sp=0x53, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x1a63, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x1a64, .a=0xf3, .x=0xc8, .y=0x6c, .sp=0x53, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x1a63, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1a63, .value=0xdc, .type=IO_READ},
        {.addr=0x1a64, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_008F) {
    const struct CPU_State initial_cpu = {.pc=0xa5b8, .a=0x9b, .x=0xde, .y=0xf3, .sp=0xd7, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xa5b8, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xa5b9, .a=0x9b, .x=0xde, .y=0xf2, .sp=0xd7, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xa5b8, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xa5b8, .value=0xdc, .type=IO_READ},
        {.addr=0xa5b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0090) {
    const struct CPU_State initial_cpu = {.pc=0xbdd9, .a=0x71, .x=0xd5, .y=0x88, .sp=0xa3, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xbdd9, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xbdda, .a=0x71, .x=0xd5, .y=0x87, .sp=0xa3, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xbdd9, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xbdd9, .value=0xdc, .type=IO_READ},
        {.addr=0xbdda, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0091) {
    const struct CPU_State initial_cpu = {.pc=0x1e36, .a=0x49, .x=0x53, .y=0x52, .sp=0xbb, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x1e36, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x1e37, .a=0x49, .x=0x53, .y=0x51, .sp=0xbb, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x1e36, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1e36, .value=0xdc, .type=IO_READ},
        {.addr=0x1e37, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0092) {
    const struct CPU_State initial_cpu = {.pc=0x3dc6, .a=0xbb, .x=0xda, .y=0x52, .sp=0xe7, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x3dc6, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x3dc7, .a=0xbb, .x=0xda, .y=0x51, .sp=0xe7, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x3dc6, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x3dc6, .value=0xdc, .type=IO_READ},
        {.addr=0x3dc7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0093) {
    const struct CPU_State initial_cpu = {.pc=0x5757, .a=0x96, .x=0xe9, .y=0xa6, .sp=0xfd, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x5757, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x5758, .a=0x96, .x=0xe9, .y=0xa5, .sp=0xfd, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x5757, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x5757, .value=0xdc, .type=IO_READ},
        {.addr=0x5758, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0094) {
    const struct CPU_State initial_cpu = {.pc=0x5330, .a=0x7f, .x=0x44, .y=0x8a, .sp=0x60, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x5330, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x5331, .a=0x7f, .x=0x44, .y=0x89, .sp=0x60, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x5330, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x5330, .value=0xdc, .type=IO_READ},
        {.addr=0x5331, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0095) {
    const struct CPU_State initial_cpu = {.pc=0x8646, .a=0x69, .x=0x37, .y=0x40, .sp=0x01, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x8646, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8647, .a=0x69, .x=0x37, .y=0x3f, .sp=0x01, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x8646, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x8646, .value=0xdc, .type=IO_READ},
        {.addr=0x8647, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0096) {
    const struct CPU_State initial_cpu = {.pc=0x3a56, .a=0x14, .x=0x54, .y=0x44, .sp=0x4f, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x3a56, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x3a57, .a=0x14, .x=0x54, .y=0x43, .sp=0x4f, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x3a56, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x3a56, .value=0xdc, .type=IO_READ},
        {.addr=0x3a57, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0097) {
    const struct CPU_State initial_cpu = {.pc=0x08de, .a=0x55, .x=0x15, .y=0x65, .sp=0x5b, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x08de, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x08df, .a=0x55, .x=0x15, .y=0x64, .sp=0x5b, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x08de, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x08de, .value=0xdc, .type=IO_READ},
        {.addr=0x08df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0098) {
    const struct CPU_State initial_cpu = {.pc=0x366b, .a=0x3f, .x=0xec, .y=0x84, .sp=0xaf, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x366b, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x366c, .a=0x3f, .x=0xec, .y=0x83, .sp=0xaf, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x366b, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x366b, .value=0xdc, .type=IO_READ},
        {.addr=0x366c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0099) {
    const struct CPU_State initial_cpu = {.pc=0x16c2, .a=0xa9, .x=0x3b, .y=0x46, .sp=0x06, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x16c2, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x16c3, .a=0xa9, .x=0x3b, .y=0x45, .sp=0x06, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x16c2, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x16c2, .value=0xdc, .type=IO_READ},
        {.addr=0x16c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_009A) {
    const struct CPU_State initial_cpu = {.pc=0xa6b9, .a=0xec, .x=0x75, .y=0x95, .sp=0xf1, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xa6b9, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xa6ba, .a=0xec, .x=0x75, .y=0x94, .sp=0xf1, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xa6b9, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xa6b9, .value=0xdc, .type=IO_READ},
        {.addr=0xa6ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_009B) {
    const struct CPU_State initial_cpu = {.pc=0x3eb0, .a=0xee, .x=0xee, .y=0x93, .sp=0x88, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x3eb0, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x3eb1, .a=0xee, .x=0xee, .y=0x92, .sp=0x88, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x3eb0, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x3eb0, .value=0xdc, .type=IO_READ},
        {.addr=0x3eb1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_009C) {
    const struct CPU_State initial_cpu = {.pc=0x980f, .a=0xc5, .x=0x3f, .y=0x03, .sp=0x7d, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x980f, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x9810, .a=0xc5, .x=0x3f, .y=0x02, .sp=0x7d, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x980f, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x980f, .value=0xdc, .type=IO_READ},
        {.addr=0x9810, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_009D) {
    const struct CPU_State initial_cpu = {.pc=0xb84a, .a=0xe0, .x=0x76, .y=0x5a, .sp=0x7f, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xb84a, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xb84b, .a=0xe0, .x=0x76, .y=0x59, .sp=0x7f, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xb84a, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xb84a, .value=0xdc, .type=IO_READ},
        {.addr=0xb84b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_009E) {
    const struct CPU_State initial_cpu = {.pc=0x2def, .a=0x5c, .x=0x70, .y=0xfa, .sp=0xe5, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x2def, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x2df0, .a=0x5c, .x=0x70, .y=0xf9, .sp=0xe5, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x2def, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x2def, .value=0xdc, .type=IO_READ},
        {.addr=0x2df0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_009F) {
    const struct CPU_State initial_cpu = {.pc=0xe9c6, .a=0xdb, .x=0x38, .y=0xd7, .sp=0x6a, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xe9c6, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xe9c7, .a=0xdb, .x=0x38, .y=0xd6, .sp=0x6a, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xe9c6, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xe9c6, .value=0xdc, .type=IO_READ},
        {.addr=0xe9c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00A0) {
    const struct CPU_State initial_cpu = {.pc=0xd8b8, .a=0xab, .x=0x00, .y=0xcf, .sp=0x6c, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xd8b8, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xd8b9, .a=0xab, .x=0x00, .y=0xce, .sp=0x6c, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xd8b8, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xd8b8, .value=0xdc, .type=IO_READ},
        {.addr=0xd8b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x7f91, .a=0x4f, .x=0x1c, .y=0x01, .sp=0x2a, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x7f91, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x7f92, .a=0x4f, .x=0x1c, .y=0x00, .sp=0x2a, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x7f91, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x7f91, .value=0xdc, .type=IO_READ},
        {.addr=0x7f92, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00A2) {
    const struct CPU_State initial_cpu = {.pc=0xbf08, .a=0x95, .x=0x19, .y=0xa3, .sp=0xa6, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xbf08, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xbf09, .a=0x95, .x=0x19, .y=0xa2, .sp=0xa6, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xbf08, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xbf08, .value=0xdc, .type=IO_READ},
        {.addr=0xbf09, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00A3) {
    const struct CPU_State initial_cpu = {.pc=0xe301, .a=0xb6, .x=0xab, .y=0x62, .sp=0x94, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xe301, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xe302, .a=0xb6, .x=0xab, .y=0x61, .sp=0x94, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xe301, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xe301, .value=0xdc, .type=IO_READ},
        {.addr=0xe302, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00A4) {
    const struct CPU_State initial_cpu = {.pc=0x8e41, .a=0x38, .x=0x48, .y=0xa2, .sp=0x54, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x8e41, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8e42, .a=0x38, .x=0x48, .y=0xa1, .sp=0x54, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x8e41, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x8e41, .value=0xdc, .type=IO_READ},
        {.addr=0x8e42, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x8884, .a=0xda, .x=0xfc, .y=0xbe, .sp=0x75, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x8884, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8885, .a=0xda, .x=0xfc, .y=0xbd, .sp=0x75, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x8884, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x8884, .value=0xdc, .type=IO_READ},
        {.addr=0x8885, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00A6) {
    const struct CPU_State initial_cpu = {.pc=0xda3e, .a=0x1d, .x=0x78, .y=0x0f, .sp=0x80, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xda3e, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xda3f, .a=0x1d, .x=0x78, .y=0x0e, .sp=0x80, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xda3e, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xda3e, .value=0xdc, .type=IO_READ},
        {.addr=0xda3f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00A7) {
    const struct CPU_State initial_cpu = {.pc=0xf934, .a=0x58, .x=0xac, .y=0x5a, .sp=0xbe, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xf934, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xf935, .a=0x58, .x=0xac, .y=0x59, .sp=0xbe, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xf934, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xf934, .value=0xdc, .type=IO_READ},
        {.addr=0xf935, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x2838, .a=0xe9, .x=0xc7, .y=0x33, .sp=0xa3, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x2838, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x2839, .a=0xe9, .x=0xc7, .y=0x32, .sp=0xa3, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x2838, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x2838, .value=0xdc, .type=IO_READ},
        {.addr=0x2839, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x2b88, .a=0xf8, .x=0x66, .y=0x08, .sp=0xab, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x2b88, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x2b89, .a=0xf8, .x=0x66, .y=0x07, .sp=0xab, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x2b88, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x2b88, .value=0xdc, .type=IO_READ},
        {.addr=0x2b89, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x6238, .a=0xda, .x=0x5e, .y=0x94, .sp=0x73, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x6238, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x6239, .a=0xda, .x=0x5e, .y=0x93, .sp=0x73, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x6238, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x6238, .value=0xdc, .type=IO_READ},
        {.addr=0x6239, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x9b85, .a=0xeb, .x=0x48, .y=0xb6, .sp=0x91, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x9b85, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x9b86, .a=0xeb, .x=0x48, .y=0xb5, .sp=0x91, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x9b85, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x9b85, .value=0xdc, .type=IO_READ},
        {.addr=0x9b86, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00AC) {
    const struct CPU_State initial_cpu = {.pc=0xced5, .a=0x8a, .x=0x0f, .y=0xfe, .sp=0xd3, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xced5, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xced6, .a=0x8a, .x=0x0f, .y=0xfd, .sp=0xd3, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xced5, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xced5, .value=0xdc, .type=IO_READ},
        {.addr=0xced6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x1303, .a=0x02, .x=0xd0, .y=0x1d, .sp=0x82, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x1303, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x1304, .a=0x02, .x=0xd0, .y=0x1c, .sp=0x82, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x1303, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1303, .value=0xdc, .type=IO_READ},
        {.addr=0x1304, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00AE) {
    const struct CPU_State initial_cpu = {.pc=0x60c7, .a=0x34, .x=0x11, .y=0xef, .sp=0x34, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x60c7, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x60c8, .a=0x34, .x=0x11, .y=0xee, .sp=0x34, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x60c7, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x60c7, .value=0xdc, .type=IO_READ},
        {.addr=0x60c8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00AF) {
    const struct CPU_State initial_cpu = {.pc=0x14be, .a=0xae, .x=0xc4, .y=0xe1, .sp=0x9b, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x14be, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x14bf, .a=0xae, .x=0xc4, .y=0xe0, .sp=0x9b, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x14be, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x14be, .value=0xdc, .type=IO_READ},
        {.addr=0x14bf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00B0) {
    const struct CPU_State initial_cpu = {.pc=0x2225, .a=0x06, .x=0x64, .y=0xc8, .sp=0xdc, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x2225, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x2226, .a=0x06, .x=0x64, .y=0xc7, .sp=0xdc, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x2225, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x2225, .value=0xdc, .type=IO_READ},
        {.addr=0x2226, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00B1) {
    const struct CPU_State initial_cpu = {.pc=0xe9d0, .a=0x19, .x=0xac, .y=0x1a, .sp=0x85, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xe9d0, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xe9d1, .a=0x19, .x=0xac, .y=0x19, .sp=0x85, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xe9d0, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xe9d0, .value=0xdc, .type=IO_READ},
        {.addr=0xe9d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00B2) {
    const struct CPU_State initial_cpu = {.pc=0x3fdf, .a=0xc0, .x=0xab, .y=0xfe, .sp=0x1c, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x3fdf, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x3fe0, .a=0xc0, .x=0xab, .y=0xfd, .sp=0x1c, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x3fdf, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x3fdf, .value=0xdc, .type=IO_READ},
        {.addr=0x3fe0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00B3) {
    const struct CPU_State initial_cpu = {.pc=0x3aef, .a=0xcd, .x=0x67, .y=0xac, .sp=0x4a, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x3aef, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x3af0, .a=0xcd, .x=0x67, .y=0xab, .sp=0x4a, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x3aef, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x3aef, .value=0xdc, .type=IO_READ},
        {.addr=0x3af0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00B4) {
    const struct CPU_State initial_cpu = {.pc=0xc0fe, .a=0x9f, .x=0x23, .y=0x55, .sp=0xe2, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xc0fe, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xc0ff, .a=0x9f, .x=0x23, .y=0x54, .sp=0xe2, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xc0fe, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xc0fe, .value=0xdc, .type=IO_READ},
        {.addr=0xc0ff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00B5) {
    const struct CPU_State initial_cpu = {.pc=0xa088, .a=0xb2, .x=0x8b, .y=0x92, .sp=0xd9, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xa088, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xa089, .a=0xb2, .x=0x8b, .y=0x91, .sp=0xd9, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xa088, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xa088, .value=0xdc, .type=IO_READ},
        {.addr=0xa089, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00B6) {
    const struct CPU_State initial_cpu = {.pc=0x75ef, .a=0x24, .x=0x9b, .y=0xee, .sp=0xee, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x75ef, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x75f0, .a=0x24, .x=0x9b, .y=0xed, .sp=0xee, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x75ef, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x75ef, .value=0xdc, .type=IO_READ},
        {.addr=0x75f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x49d9, .a=0x8e, .x=0x6f, .y=0x43, .sp=0xba, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x49d9, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x49da, .a=0x8e, .x=0x6f, .y=0x42, .sp=0xba, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x49d9, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x49d9, .value=0xdc, .type=IO_READ},
        {.addr=0x49da, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00B8) {
    const struct CPU_State initial_cpu = {.pc=0xae74, .a=0x4b, .x=0x40, .y=0x4c, .sp=0xfe, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xae74, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xae75, .a=0x4b, .x=0x40, .y=0x4b, .sp=0xfe, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xae74, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xae74, .value=0xdc, .type=IO_READ},
        {.addr=0xae75, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00B9) {
    const struct CPU_State initial_cpu = {.pc=0x0f26, .a=0x29, .x=0x55, .y=0x00, .sp=0x39, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x0f26, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x0f27, .a=0x29, .x=0x55, .y=0xff, .sp=0x39, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0f26, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x0f26, .value=0xdc, .type=IO_READ},
        {.addr=0x0f27, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00BA) {
    const struct CPU_State initial_cpu = {.pc=0x8690, .a=0x7f, .x=0xfc, .y=0x88, .sp=0x7a, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x8690, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8691, .a=0x7f, .x=0xfc, .y=0x87, .sp=0x7a, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x8690, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x8690, .value=0xdc, .type=IO_READ},
        {.addr=0x8691, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00BB) {
    const struct CPU_State initial_cpu = {.pc=0x683b, .a=0x2b, .x=0x67, .y=0x48, .sp=0x46, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x683b, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x683c, .a=0x2b, .x=0x67, .y=0x47, .sp=0x46, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x683b, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x683b, .value=0xdc, .type=IO_READ},
        {.addr=0x683c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x868d, .a=0xe8, .x=0x66, .y=0x70, .sp=0x40, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x868d, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x868e, .a=0xe8, .x=0x66, .y=0x6f, .sp=0x40, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x868d, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x868d, .value=0xdc, .type=IO_READ},
        {.addr=0x868e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00BD) {
    const struct CPU_State initial_cpu = {.pc=0xf772, .a=0xa4, .x=0x42, .y=0x9e, .sp=0xfd, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xf772, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xf773, .a=0xa4, .x=0x42, .y=0x9d, .sp=0xfd, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xf772, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xf772, .value=0xdc, .type=IO_READ},
        {.addr=0xf773, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00BE) {
    const struct CPU_State initial_cpu = {.pc=0xefb5, .a=0x77, .x=0xd1, .y=0xfa, .sp=0xf9, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xefb5, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xefb6, .a=0x77, .x=0xd1, .y=0xf9, .sp=0xf9, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xefb5, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xefb5, .value=0xdc, .type=IO_READ},
        {.addr=0xefb6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00BF) {
    const struct CPU_State initial_cpu = {.pc=0xf7e1, .a=0xae, .x=0x16, .y=0x5d, .sp=0x3c, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xf7e1, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xf7e2, .a=0xae, .x=0x16, .y=0x5c, .sp=0x3c, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xf7e1, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xf7e1, .value=0xdc, .type=IO_READ},
        {.addr=0xf7e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00C0) {
    const struct CPU_State initial_cpu = {.pc=0x27de, .a=0x8b, .x=0x9d, .y=0xfd, .sp=0x80, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x27de, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x27df, .a=0x8b, .x=0x9d, .y=0xfc, .sp=0x80, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x27de, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x27de, .value=0xdc, .type=IO_READ},
        {.addr=0x27df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00C1) {
    const struct CPU_State initial_cpu = {.pc=0x1293, .a=0xbe, .x=0x32, .y=0xb5, .sp=0x4b, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x1293, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x1294, .a=0xbe, .x=0x32, .y=0xb4, .sp=0x4b, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x1293, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1293, .value=0xdc, .type=IO_READ},
        {.addr=0x1294, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00C2) {
    const struct CPU_State initial_cpu = {.pc=0x1471, .a=0x0d, .x=0x9d, .y=0x38, .sp=0x91, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x1471, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x1472, .a=0x0d, .x=0x9d, .y=0x37, .sp=0x91, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x1471, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1471, .value=0xdc, .type=IO_READ},
        {.addr=0x1472, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00C3) {
    const struct CPU_State initial_cpu = {.pc=0x07cc, .a=0x51, .x=0x31, .y=0x00, .sp=0xe5, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x07cc, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x07cd, .a=0x51, .x=0x31, .y=0xff, .sp=0xe5, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x07cc, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x07cc, .value=0xdc, .type=IO_READ},
        {.addr=0x07cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00C4) {
    const struct CPU_State initial_cpu = {.pc=0x32d2, .a=0xce, .x=0x29, .y=0x99, .sp=0xcd, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x32d2, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x32d3, .a=0xce, .x=0x29, .y=0x98, .sp=0xcd, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x32d2, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x32d2, .value=0xdc, .type=IO_READ},
        {.addr=0x32d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x9ec2, .a=0x2d, .x=0xde, .y=0x4b, .sp=0xf2, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x9ec2, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x9ec3, .a=0x2d, .x=0xde, .y=0x4a, .sp=0xf2, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x9ec2, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x9ec2, .value=0xdc, .type=IO_READ},
        {.addr=0x9ec3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00C6) {
    const struct CPU_State initial_cpu = {.pc=0xd68c, .a=0xb4, .x=0xb0, .y=0xab, .sp=0x45, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xd68c, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xd68d, .a=0xb4, .x=0xb0, .y=0xaa, .sp=0x45, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xd68c, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xd68c, .value=0xdc, .type=IO_READ},
        {.addr=0xd68d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00C7) {
    const struct CPU_State initial_cpu = {.pc=0xc8ef, .a=0x86, .x=0xe3, .y=0x3a, .sp=0xba, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xc8ef, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xc8f0, .a=0x86, .x=0xe3, .y=0x39, .sp=0xba, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xc8ef, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xc8ef, .value=0xdc, .type=IO_READ},
        {.addr=0xc8f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00C8) {
    const struct CPU_State initial_cpu = {.pc=0x9ea6, .a=0xb3, .x=0xb2, .y=0x69, .sp=0x6f, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x9ea6, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x9ea7, .a=0xb3, .x=0xb2, .y=0x68, .sp=0x6f, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x9ea6, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x9ea6, .value=0xdc, .type=IO_READ},
        {.addr=0x9ea7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00C9) {
    const struct CPU_State initial_cpu = {.pc=0x1c68, .a=0x6c, .x=0x85, .y=0x3e, .sp=0x7f, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x1c68, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x1c69, .a=0x6c, .x=0x85, .y=0x3d, .sp=0x7f, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x1c68, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1c68, .value=0xdc, .type=IO_READ},
        {.addr=0x1c69, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00CA) {
    const struct CPU_State initial_cpu = {.pc=0xccd2, .a=0xe2, .x=0x97, .y=0xa0, .sp=0x7e, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xccd2, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xccd3, .a=0xe2, .x=0x97, .y=0x9f, .sp=0x7e, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xccd2, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xccd2, .value=0xdc, .type=IO_READ},
        {.addr=0xccd3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x973f, .a=0xb2, .x=0x41, .y=0x57, .sp=0x34, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x973f, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x9740, .a=0xb2, .x=0x41, .y=0x56, .sp=0x34, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x973f, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x973f, .value=0xdc, .type=IO_READ},
        {.addr=0x9740, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x5642, .a=0xf3, .x=0x6c, .y=0x56, .sp=0xb8, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x5642, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x5643, .a=0xf3, .x=0x6c, .y=0x55, .sp=0xb8, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x5642, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x5642, .value=0xdc, .type=IO_READ},
        {.addr=0x5643, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00CD) {
    const struct CPU_State initial_cpu = {.pc=0xe208, .a=0xb1, .x=0x71, .y=0x9a, .sp=0x41, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xe208, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xe209, .a=0xb1, .x=0x71, .y=0x99, .sp=0x41, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xe208, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xe208, .value=0xdc, .type=IO_READ},
        {.addr=0xe209, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00CE) {
    const struct CPU_State initial_cpu = {.pc=0xd9da, .a=0x90, .x=0x7c, .y=0xee, .sp=0x00, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xd9da, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xd9db, .a=0x90, .x=0x7c, .y=0xed, .sp=0x00, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xd9da, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xd9da, .value=0xdc, .type=IO_READ},
        {.addr=0xd9db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00CF) {
    const struct CPU_State initial_cpu = {.pc=0x27d2, .a=0xa3, .x=0xcc, .y=0xcc, .sp=0xc8, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x27d2, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x27d3, .a=0xa3, .x=0xcc, .y=0xcb, .sp=0xc8, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x27d2, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x27d2, .value=0xdc, .type=IO_READ},
        {.addr=0x27d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00D0) {
    const struct CPU_State initial_cpu = {.pc=0x9ee2, .a=0x44, .x=0x52, .y=0x3c, .sp=0x95, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x9ee2, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x9ee3, .a=0x44, .x=0x52, .y=0x3b, .sp=0x95, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x9ee2, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x9ee2, .value=0xdc, .type=IO_READ},
        {.addr=0x9ee3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x4491, .a=0xe0, .x=0xc7, .y=0x34, .sp=0xa6, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x4491, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x4492, .a=0xe0, .x=0xc7, .y=0x33, .sp=0xa6, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x4491, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x4491, .value=0xdc, .type=IO_READ},
        {.addr=0x4492, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00D2) {
    const struct CPU_State initial_cpu = {.pc=0x0eb1, .a=0xec, .x=0x63, .y=0xaa, .sp=0x45, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x0eb1, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x0eb2, .a=0xec, .x=0x63, .y=0xa9, .sp=0x45, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x0eb1, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x0eb1, .value=0xdc, .type=IO_READ},
        {.addr=0x0eb2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00D3) {
    const struct CPU_State initial_cpu = {.pc=0x780c, .a=0xec, .x=0x13, .y=0x80, .sp=0x06, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x780c, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x780d, .a=0xec, .x=0x13, .y=0x7f, .sp=0x06, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x780c, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x780c, .value=0xdc, .type=IO_READ},
        {.addr=0x780d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00D4) {
    const struct CPU_State initial_cpu = {.pc=0x798d, .a=0x3f, .x=0x29, .y=0x26, .sp=0xd9, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x798d, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x798e, .a=0x3f, .x=0x29, .y=0x25, .sp=0xd9, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x798d, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x798d, .value=0xdc, .type=IO_READ},
        {.addr=0x798e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00D5) {
    const struct CPU_State initial_cpu = {.pc=0x77de, .a=0x6e, .x=0xad, .y=0xbd, .sp=0xf2, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x77de, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x77df, .a=0x6e, .x=0xad, .y=0xbc, .sp=0xf2, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x77de, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x77de, .value=0xdc, .type=IO_READ},
        {.addr=0x77df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00D6) {
    const struct CPU_State initial_cpu = {.pc=0x39fe, .a=0x65, .x=0x0d, .y=0xe8, .sp=0xb7, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x39fe, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x39ff, .a=0x65, .x=0x0d, .y=0xe7, .sp=0xb7, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x39fe, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x39fe, .value=0xdc, .type=IO_READ},
        {.addr=0x39ff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00D7) {
    const struct CPU_State initial_cpu = {.pc=0x40d5, .a=0x8b, .x=0xe3, .y=0xd4, .sp=0x72, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x40d5, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x40d6, .a=0x8b, .x=0xe3, .y=0xd3, .sp=0x72, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x40d5, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x40d5, .value=0xdc, .type=IO_READ},
        {.addr=0x40d6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00D8) {
    const struct CPU_State initial_cpu = {.pc=0x82ae, .a=0x87, .x=0xb0, .y=0xc5, .sp=0x07, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x82ae, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x82af, .a=0x87, .x=0xb0, .y=0xc4, .sp=0x07, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x82ae, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x82ae, .value=0xdc, .type=IO_READ},
        {.addr=0x82af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00D9) {
    const struct CPU_State initial_cpu = {.pc=0x1a6c, .a=0xb5, .x=0xe0, .y=0x53, .sp=0x33, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x1a6c, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x1a6d, .a=0xb5, .x=0xe0, .y=0x52, .sp=0x33, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x1a6c, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1a6c, .value=0xdc, .type=IO_READ},
        {.addr=0x1a6d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00DA) {
    const struct CPU_State initial_cpu = {.pc=0xed7e, .a=0x05, .x=0x54, .y=0xa7, .sp=0x4f, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xed7e, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xed7f, .a=0x05, .x=0x54, .y=0xa6, .sp=0x4f, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xed7e, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xed7e, .value=0xdc, .type=IO_READ},
        {.addr=0xed7f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x052b, .a=0x97, .x=0x8c, .y=0x7f, .sp=0x8a, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x052b, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x052c, .a=0x97, .x=0x8c, .y=0x7e, .sp=0x8a, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x052b, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x052b, .value=0xdc, .type=IO_READ},
        {.addr=0x052c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00DC) {
    const struct CPU_State initial_cpu = {.pc=0xbf25, .a=0xe9, .x=0x57, .y=0xf8, .sp=0xf7, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xbf25, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xbf26, .a=0xe9, .x=0x57, .y=0xf7, .sp=0xf7, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xbf25, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xbf25, .value=0xdc, .type=IO_READ},
        {.addr=0xbf26, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00DD) {
    const struct CPU_State initial_cpu = {.pc=0xcaa9, .a=0x96, .x=0xad, .y=0xf1, .sp=0x6f, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xcaa9, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xcaaa, .a=0x96, .x=0xad, .y=0xf0, .sp=0x6f, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xcaa9, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xcaa9, .value=0xdc, .type=IO_READ},
        {.addr=0xcaaa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00DE) {
    const struct CPU_State initial_cpu = {.pc=0xead2, .a=0x0b, .x=0x8a, .y=0x12, .sp=0x9a, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xead2, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xead3, .a=0x0b, .x=0x8a, .y=0x11, .sp=0x9a, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xead2, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xead2, .value=0xdc, .type=IO_READ},
        {.addr=0xead3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00DF) {
    const struct CPU_State initial_cpu = {.pc=0x28cd, .a=0x1c, .x=0x53, .y=0x5f, .sp=0xa9, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x28cd, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x28ce, .a=0x1c, .x=0x53, .y=0x5e, .sp=0xa9, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x28cd, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x28cd, .value=0xdc, .type=IO_READ},
        {.addr=0x28ce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x149a, .a=0x26, .x=0xee, .y=0x81, .sp=0x82, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x149a, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x149b, .a=0x26, .x=0xee, .y=0x80, .sp=0x82, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x149a, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x149a, .value=0xdc, .type=IO_READ},
        {.addr=0x149b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00E1) {
    const struct CPU_State initial_cpu = {.pc=0x0708, .a=0xc4, .x=0x05, .y=0xbd, .sp=0xcb, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x0708, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x0709, .a=0xc4, .x=0x05, .y=0xbc, .sp=0xcb, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0708, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x0708, .value=0xdc, .type=IO_READ},
        {.addr=0x0709, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x29ef, .a=0x7b, .x=0x76, .y=0x13, .sp=0xf4, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x29ef, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x29f0, .a=0x7b, .x=0x76, .y=0x12, .sp=0xf4, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x29ef, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x29ef, .value=0xdc, .type=IO_READ},
        {.addr=0x29f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00E3) {
    const struct CPU_State initial_cpu = {.pc=0xb9c8, .a=0xd2, .x=0x9e, .y=0xde, .sp=0x89, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xb9c8, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xb9c9, .a=0xd2, .x=0x9e, .y=0xdd, .sp=0x89, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xb9c8, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xb9c8, .value=0xdc, .type=IO_READ},
        {.addr=0xb9c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00E4) {
    const struct CPU_State initial_cpu = {.pc=0xacf7, .a=0x85, .x=0x30, .y=0x0b, .sp=0x8d, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xacf7, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xacf8, .a=0x85, .x=0x30, .y=0x0a, .sp=0x8d, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xacf7, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xacf7, .value=0xdc, .type=IO_READ},
        {.addr=0xacf8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00E5) {
    const struct CPU_State initial_cpu = {.pc=0x85b1, .a=0x2d, .x=0x66, .y=0x13, .sp=0x45, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x85b1, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x85b2, .a=0x2d, .x=0x66, .y=0x12, .sp=0x45, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x85b1, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x85b1, .value=0xdc, .type=IO_READ},
        {.addr=0x85b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00E6) {
    const struct CPU_State initial_cpu = {.pc=0x06d0, .a=0x22, .x=0x1b, .y=0x62, .sp=0xd6, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x06d0, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x06d1, .a=0x22, .x=0x1b, .y=0x61, .sp=0xd6, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x06d0, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x06d0, .value=0xdc, .type=IO_READ},
        {.addr=0x06d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00E7) {
    const struct CPU_State initial_cpu = {.pc=0x8093, .a=0x1f, .x=0x14, .y=0xde, .sp=0x4d, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x8093, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8094, .a=0x1f, .x=0x14, .y=0xdd, .sp=0x4d, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x8093, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x8093, .value=0xdc, .type=IO_READ},
        {.addr=0x8094, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00E8) {
    const struct CPU_State initial_cpu = {.pc=0xcb24, .a=0xfd, .x=0xee, .y=0xd8, .sp=0xea, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xcb24, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xcb25, .a=0xfd, .x=0xee, .y=0xd7, .sp=0xea, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xcb24, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xcb24, .value=0xdc, .type=IO_READ},
        {.addr=0xcb25, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00E9) {
    const struct CPU_State initial_cpu = {.pc=0xaf2b, .a=0x62, .x=0x45, .y=0x17, .sp=0x94, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xaf2b, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xaf2c, .a=0x62, .x=0x45, .y=0x16, .sp=0x94, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xaf2b, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xaf2b, .value=0xdc, .type=IO_READ},
        {.addr=0xaf2c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00EA) {
    const struct CPU_State initial_cpu = {.pc=0xb3bd, .a=0x6a, .x=0x8a, .y=0x89, .sp=0x8b, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xb3bd, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xb3be, .a=0x6a, .x=0x8a, .y=0x88, .sp=0x8b, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xb3bd, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xb3bd, .value=0xdc, .type=IO_READ},
        {.addr=0xb3be, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00EB) {
    const struct CPU_State initial_cpu = {.pc=0x022c, .a=0x71, .x=0x99, .y=0xd0, .sp=0xc6, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x022c, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x022d, .a=0x71, .x=0x99, .y=0xcf, .sp=0xc6, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x022c, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x022c, .value=0xdc, .type=IO_READ},
        {.addr=0x022d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00EC) {
    const struct CPU_State initial_cpu = {.pc=0x63e3, .a=0x94, .x=0xbd, .y=0x31, .sp=0xf1, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x63e3, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x63e4, .a=0x94, .x=0xbd, .y=0x30, .sp=0xf1, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x63e3, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x63e3, .value=0xdc, .type=IO_READ},
        {.addr=0x63e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00ED) {
    const struct CPU_State initial_cpu = {.pc=0xd093, .a=0xe1, .x=0xac, .y=0xe4, .sp=0x98, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xd093, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xd094, .a=0xe1, .x=0xac, .y=0xe3, .sp=0x98, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xd093, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xd093, .value=0xdc, .type=IO_READ},
        {.addr=0xd094, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00EE) {
    const struct CPU_State initial_cpu = {.pc=0x6b8f, .a=0xa5, .x=0x7a, .y=0xfc, .sp=0x7e, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x6b8f, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x6b90, .a=0xa5, .x=0x7a, .y=0xfb, .sp=0x7e, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x6b8f, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x6b8f, .value=0xdc, .type=IO_READ},
        {.addr=0x6b90, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00EF) {
    const struct CPU_State initial_cpu = {.pc=0x4c78, .a=0x34, .x=0x02, .y=0xd0, .sp=0xb8, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x4c78, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x4c79, .a=0x34, .x=0x02, .y=0xcf, .sp=0xb8, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x4c78, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x4c78, .value=0xdc, .type=IO_READ},
        {.addr=0x4c79, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x71db, .a=0x88, .x=0x70, .y=0xfd, .sp=0xd7, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x71db, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x71dc, .a=0x88, .x=0x70, .y=0xfc, .sp=0xd7, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x71db, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x71db, .value=0xdc, .type=IO_READ},
        {.addr=0x71dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00F1) {
    const struct CPU_State initial_cpu = {.pc=0xa2bc, .a=0x62, .x=0xcc, .y=0xee, .sp=0xf2, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xa2bc, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xa2bd, .a=0x62, .x=0xcc, .y=0xed, .sp=0xf2, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xa2bc, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xa2bc, .value=0xdc, .type=IO_READ},
        {.addr=0xa2bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00F2) {
    const struct CPU_State initial_cpu = {.pc=0x8ec2, .a=0x8c, .x=0x49, .y=0x62, .sp=0x2b, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x8ec2, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8ec3, .a=0x8c, .x=0x49, .y=0x61, .sp=0x2b, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x8ec2, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x8ec2, .value=0xdc, .type=IO_READ},
        {.addr=0x8ec3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00F3) {
    const struct CPU_State initial_cpu = {.pc=0x8691, .a=0x6f, .x=0xbd, .y=0x51, .sp=0x45, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x8691, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8692, .a=0x6f, .x=0xbd, .y=0x50, .sp=0x45, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x8691, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x8691, .value=0xdc, .type=IO_READ},
        {.addr=0x8692, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00F4) {
    const struct CPU_State initial_cpu = {.pc=0xc78c, .a=0x46, .x=0xb1, .y=0x93, .sp=0x3a, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xc78c, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xc78d, .a=0x46, .x=0xb1, .y=0x92, .sp=0x3a, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xc78c, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xc78c, .value=0xdc, .type=IO_READ},
        {.addr=0xc78d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00F5) {
    const struct CPU_State initial_cpu = {.pc=0x3117, .a=0xe1, .x=0x26, .y=0xd0, .sp=0xdb, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x3117, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x3118, .a=0xe1, .x=0x26, .y=0xcf, .sp=0xdb, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x3117, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x3117, .value=0xdc, .type=IO_READ},
        {.addr=0x3118, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00F6) {
    const struct CPU_State initial_cpu = {.pc=0xb434, .a=0x9f, .x=0x84, .y=0xe9, .sp=0xfc, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xb434, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xb435, .a=0x9f, .x=0x84, .y=0xe8, .sp=0xfc, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xb434, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xb434, .value=0xdc, .type=IO_READ},
        {.addr=0xb435, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00F7) {
    const struct CPU_State initial_cpu = {.pc=0x7650, .a=0x85, .x=0x23, .y=0x60, .sp=0x82, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x7650, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x7651, .a=0x85, .x=0x23, .y=0x5f, .sp=0x82, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x7650, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x7650, .value=0xdc, .type=IO_READ},
        {.addr=0x7651, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00F8) {
    const struct CPU_State initial_cpu = {.pc=0xbbf7, .a=0x19, .x=0x2b, .y=0xb7, .sp=0x93, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xbbf7, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xbbf8, .a=0x19, .x=0x2b, .y=0xb6, .sp=0x93, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xbbf7, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xbbf7, .value=0xdc, .type=IO_READ},
        {.addr=0xbbf8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00F9) {
    const struct CPU_State initial_cpu = {.pc=0x866f, .a=0x95, .x=0x7c, .y=0xe5, .sp=0x4d, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x866f, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8670, .a=0x95, .x=0x7c, .y=0xe4, .sp=0x4d, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x866f, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x866f, .value=0xdc, .type=IO_READ},
        {.addr=0x8670, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00FA) {
    const struct CPU_State initial_cpu = {.pc=0x4ade, .a=0x17, .x=0xe9, .y=0xb3, .sp=0xf3, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x4ade, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x4adf, .a=0x17, .x=0xe9, .y=0xb2, .sp=0xf3, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x4ade, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x4ade, .value=0xdc, .type=IO_READ},
        {.addr=0x4adf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00FB) {
    const struct CPU_State initial_cpu = {.pc=0x9222, .a=0xba, .x=0x2a, .y=0x2c, .sp=0x14, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x9222, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x9223, .a=0xba, .x=0x2a, .y=0x2b, .sp=0x14, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x9222, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x9222, .value=0xdc, .type=IO_READ},
        {.addr=0x9223, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00FC) {
    const struct CPU_State initial_cpu = {.pc=0xa062, .a=0x76, .x=0x42, .y=0x0e, .sp=0xeb, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xa062, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xa063, .a=0x76, .x=0x42, .y=0x0d, .sp=0xeb, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xa062, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xa062, .value=0xdc, .type=IO_READ},
        {.addr=0xa063, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x7f00, .a=0x5c, .x=0xe8, .y=0xe2, .sp=0x83, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x7f00, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x7f01, .a=0x5c, .x=0xe8, .y=0xe1, .sp=0x83, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x7f00, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x7f00, .value=0xdc, .type=IO_READ},
        {.addr=0x7f01, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00FE) {
    const struct CPU_State initial_cpu = {.pc=0xd2a9, .a=0x3a, .x=0xa8, .y=0x53, .sp=0xda, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xd2a9, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xd2aa, .a=0x3a, .x=0xa8, .y=0x52, .sp=0xda, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xd2a9, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xd2a9, .value=0xdc, .type=IO_READ},
        {.addr=0xd2aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_00FF) {
    const struct CPU_State initial_cpu = {.pc=0x8a58, .a=0xbf, .x=0x7e, .y=0x9b, .sp=0x08, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x8a58, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8a59, .a=0xbf, .x=0x7e, .y=0x9a, .sp=0x08, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x8a58, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x8a58, .value=0xdc, .type=IO_READ},
        {.addr=0x8a59, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0100) {
    const struct CPU_State initial_cpu = {.pc=0xca5f, .a=0x84, .x=0x92, .y=0x3d, .sp=0x05, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xca5f, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xca60, .a=0x84, .x=0x92, .y=0x3c, .sp=0x05, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xca5f, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xca5f, .value=0xdc, .type=IO_READ},
        {.addr=0xca60, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0101) {
    const struct CPU_State initial_cpu = {.pc=0xf1c7, .a=0xce, .x=0xdb, .y=0xa6, .sp=0x18, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xf1c7, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xf1c8, .a=0xce, .x=0xdb, .y=0xa5, .sp=0x18, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xf1c7, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xf1c7, .value=0xdc, .type=IO_READ},
        {.addr=0xf1c8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0102) {
    const struct CPU_State initial_cpu = {.pc=0x0900, .a=0xf4, .x=0x99, .y=0x66, .sp=0x91, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x0900, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x0901, .a=0xf4, .x=0x99, .y=0x65, .sp=0x91, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0900, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x0900, .value=0xdc, .type=IO_READ},
        {.addr=0x0901, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0103) {
    const struct CPU_State initial_cpu = {.pc=0x0933, .a=0x8c, .x=0xce, .y=0x05, .sp=0x08, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x0933, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x0934, .a=0x8c, .x=0xce, .y=0x04, .sp=0x08, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0933, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x0933, .value=0xdc, .type=IO_READ},
        {.addr=0x0934, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0104) {
    const struct CPU_State initial_cpu = {.pc=0x858f, .a=0x3e, .x=0x24, .y=0xa6, .sp=0x1d, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x858f, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8590, .a=0x3e, .x=0x24, .y=0xa5, .sp=0x1d, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x858f, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x858f, .value=0xdc, .type=IO_READ},
        {.addr=0x8590, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0105) {
    const struct CPU_State initial_cpu = {.pc=0x58ef, .a=0xfa, .x=0x6b, .y=0xca, .sp=0xbb, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x58ef, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x58f0, .a=0xfa, .x=0x6b, .y=0xc9, .sp=0xbb, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x58ef, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x58ef, .value=0xdc, .type=IO_READ},
        {.addr=0x58f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0106) {
    const struct CPU_State initial_cpu = {.pc=0x4ad3, .a=0x70, .x=0xe0, .y=0xc1, .sp=0x47, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x4ad3, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x4ad4, .a=0x70, .x=0xe0, .y=0xc0, .sp=0x47, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x4ad3, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x4ad3, .value=0xdc, .type=IO_READ},
        {.addr=0x4ad4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0107) {
    const struct CPU_State initial_cpu = {.pc=0xef4e, .a=0x93, .x=0x30, .y=0x43, .sp=0x96, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xef4e, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xef4f, .a=0x93, .x=0x30, .y=0x42, .sp=0x96, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xef4e, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xef4e, .value=0xdc, .type=IO_READ},
        {.addr=0xef4f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0108) {
    const struct CPU_State initial_cpu = {.pc=0x78a7, .a=0x2e, .x=0xa1, .y=0x09, .sp=0x99, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x78a7, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x78a8, .a=0x2e, .x=0xa1, .y=0x08, .sp=0x99, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x78a7, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x78a7, .value=0xdc, .type=IO_READ},
        {.addr=0x78a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0109) {
    const struct CPU_State initial_cpu = {.pc=0x3bae, .a=0xe0, .x=0x5a, .y=0x29, .sp=0xde, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x3bae, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x3baf, .a=0xe0, .x=0x5a, .y=0x28, .sp=0xde, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x3bae, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x3bae, .value=0xdc, .type=IO_READ},
        {.addr=0x3baf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_010A) {
    const struct CPU_State initial_cpu = {.pc=0xb285, .a=0x49, .x=0xc0, .y=0xc5, .sp=0x56, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xb285, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xb286, .a=0x49, .x=0xc0, .y=0xc4, .sp=0x56, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xb285, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xb285, .value=0xdc, .type=IO_READ},
        {.addr=0xb286, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_010B) {
    const struct CPU_State initial_cpu = {.pc=0xc571, .a=0xb5, .x=0x25, .y=0x9d, .sp=0x4e, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xc571, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xc572, .a=0xb5, .x=0x25, .y=0x9c, .sp=0x4e, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xc571, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xc571, .value=0xdc, .type=IO_READ},
        {.addr=0xc572, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_010C) {
    const struct CPU_State initial_cpu = {.pc=0xb219, .a=0x80, .x=0x8e, .y=0x77, .sp=0x3f, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xb219, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xb21a, .a=0x80, .x=0x8e, .y=0x76, .sp=0x3f, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xb219, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xb219, .value=0xdc, .type=IO_READ},
        {.addr=0xb21a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_010D) {
    const struct CPU_State initial_cpu = {.pc=0xf2e2, .a=0xc5, .x=0xe9, .y=0x3a, .sp=0xf5, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xf2e2, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xf2e3, .a=0xc5, .x=0xe9, .y=0x39, .sp=0xf5, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xf2e2, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xf2e2, .value=0xdc, .type=IO_READ},
        {.addr=0xf2e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_010E) {
    const struct CPU_State initial_cpu = {.pc=0x616f, .a=0x36, .x=0xca, .y=0x8a, .sp=0x0a, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x616f, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x6170, .a=0x36, .x=0xca, .y=0x89, .sp=0x0a, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x616f, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x616f, .value=0xdc, .type=IO_READ},
        {.addr=0x6170, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_010F) {
    const struct CPU_State initial_cpu = {.pc=0x2367, .a=0x49, .x=0x22, .y=0x45, .sp=0xaf, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x2367, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x2368, .a=0x49, .x=0x22, .y=0x44, .sp=0xaf, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x2367, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x2367, .value=0xdc, .type=IO_READ},
        {.addr=0x2368, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0110) {
    const struct CPU_State initial_cpu = {.pc=0xda15, .a=0xd1, .x=0x73, .y=0xee, .sp=0xa5, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xda15, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xda16, .a=0xd1, .x=0x73, .y=0xed, .sp=0xa5, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xda15, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xda15, .value=0xdc, .type=IO_READ},
        {.addr=0xda16, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0111) {
    const struct CPU_State initial_cpu = {.pc=0x5f33, .a=0x2b, .x=0x79, .y=0x38, .sp=0x93, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x5f33, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x5f34, .a=0x2b, .x=0x79, .y=0x37, .sp=0x93, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x5f33, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x5f33, .value=0xdc, .type=IO_READ},
        {.addr=0x5f34, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0112) {
    const struct CPU_State initial_cpu = {.pc=0xb5e3, .a=0xa4, .x=0xfc, .y=0xd8, .sp=0x87, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xb5e3, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xb5e4, .a=0xa4, .x=0xfc, .y=0xd7, .sp=0x87, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xb5e3, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xb5e3, .value=0xdc, .type=IO_READ},
        {.addr=0xb5e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0113) {
    const struct CPU_State initial_cpu = {.pc=0x1d1b, .a=0xb4, .x=0xdc, .y=0x9a, .sp=0x7d, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x1d1b, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x1d1c, .a=0xb4, .x=0xdc, .y=0x99, .sp=0x7d, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x1d1b, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1d1b, .value=0xdc, .type=IO_READ},
        {.addr=0x1d1c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0114) {
    const struct CPU_State initial_cpu = {.pc=0x491e, .a=0x8c, .x=0x2a, .y=0x66, .sp=0xd6, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x491e, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x491f, .a=0x8c, .x=0x2a, .y=0x65, .sp=0xd6, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x491e, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x491e, .value=0xdc, .type=IO_READ},
        {.addr=0x491f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0115) {
    const struct CPU_State initial_cpu = {.pc=0x5bb2, .a=0x58, .x=0x4e, .y=0xef, .sp=0xc6, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x5bb2, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x5bb3, .a=0x58, .x=0x4e, .y=0xee, .sp=0xc6, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x5bb2, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x5bb2, .value=0xdc, .type=IO_READ},
        {.addr=0x5bb3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0116) {
    const struct CPU_State initial_cpu = {.pc=0x2f54, .a=0x9f, .x=0x5f, .y=0xcb, .sp=0x53, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x2f54, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x2f55, .a=0x9f, .x=0x5f, .y=0xca, .sp=0x53, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x2f54, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x2f54, .value=0xdc, .type=IO_READ},
        {.addr=0x2f55, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0117) {
    const struct CPU_State initial_cpu = {.pc=0xa437, .a=0x3b, .x=0xcb, .y=0xf1, .sp=0x89, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xa437, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xa438, .a=0x3b, .x=0xcb, .y=0xf0, .sp=0x89, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xa437, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xa437, .value=0xdc, .type=IO_READ},
        {.addr=0xa438, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0118) {
    const struct CPU_State initial_cpu = {.pc=0xeb75, .a=0xc9, .x=0xb7, .y=0x9c, .sp=0x12, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xeb75, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xeb76, .a=0xc9, .x=0xb7, .y=0x9b, .sp=0x12, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xeb75, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xeb75, .value=0xdc, .type=IO_READ},
        {.addr=0xeb76, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0119) {
    const struct CPU_State initial_cpu = {.pc=0xd2b1, .a=0x62, .x=0x1b, .y=0xfe, .sp=0xbd, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xd2b1, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xd2b2, .a=0x62, .x=0x1b, .y=0xfd, .sp=0xbd, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xd2b1, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xd2b1, .value=0xdc, .type=IO_READ},
        {.addr=0xd2b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_011A) {
    const struct CPU_State initial_cpu = {.pc=0x1331, .a=0xff, .x=0xaf, .y=0x41, .sp=0x24, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x1331, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x1332, .a=0xff, .x=0xaf, .y=0x40, .sp=0x24, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x1331, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1331, .value=0xdc, .type=IO_READ},
        {.addr=0x1332, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_011B) {
    const struct CPU_State initial_cpu = {.pc=0x9440, .a=0x77, .x=0xa2, .y=0xb7, .sp=0xdf, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x9440, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x9441, .a=0x77, .x=0xa2, .y=0xb6, .sp=0xdf, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x9440, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x9440, .value=0xdc, .type=IO_READ},
        {.addr=0x9441, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_011C) {
    const struct CPU_State initial_cpu = {.pc=0xef97, .a=0x34, .x=0x49, .y=0xa6, .sp=0xaf, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xef97, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xef98, .a=0x34, .x=0x49, .y=0xa5, .sp=0xaf, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xef97, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xef97, .value=0xdc, .type=IO_READ},
        {.addr=0xef98, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_011D) {
    const struct CPU_State initial_cpu = {.pc=0xb4ef, .a=0xf1, .x=0x5e, .y=0x94, .sp=0x85, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xb4ef, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xb4f0, .a=0xf1, .x=0x5e, .y=0x93, .sp=0x85, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xb4ef, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xb4ef, .value=0xdc, .type=IO_READ},
        {.addr=0xb4f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_011E) {
    const struct CPU_State initial_cpu = {.pc=0x22ac, .a=0xfe, .x=0xdc, .y=0xab, .sp=0x40, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x22ac, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x22ad, .a=0xfe, .x=0xdc, .y=0xaa, .sp=0x40, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x22ac, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x22ac, .value=0xdc, .type=IO_READ},
        {.addr=0x22ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_011F) {
    const struct CPU_State initial_cpu = {.pc=0xf8e2, .a=0x4f, .x=0xa4, .y=0x36, .sp=0x06, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xf8e2, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xf8e3, .a=0x4f, .x=0xa4, .y=0x35, .sp=0x06, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xf8e2, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xf8e2, .value=0xdc, .type=IO_READ},
        {.addr=0xf8e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0120) {
    const struct CPU_State initial_cpu = {.pc=0x63b0, .a=0x37, .x=0x0d, .y=0x00, .sp=0xdd, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x63b0, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x63b1, .a=0x37, .x=0x0d, .y=0xff, .sp=0xdd, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x63b0, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x63b0, .value=0xdc, .type=IO_READ},
        {.addr=0x63b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0121) {
    const struct CPU_State initial_cpu = {.pc=0xe4c5, .a=0x11, .x=0xf7, .y=0xc9, .sp=0x25, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xe4c5, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xe4c6, .a=0x11, .x=0xf7, .y=0xc8, .sp=0x25, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xe4c5, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xe4c5, .value=0xdc, .type=IO_READ},
        {.addr=0xe4c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0122) {
    const struct CPU_State initial_cpu = {.pc=0x0da4, .a=0x7d, .x=0xd4, .y=0xfc, .sp=0xeb, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x0da4, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x0da5, .a=0x7d, .x=0xd4, .y=0xfb, .sp=0xeb, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x0da4, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x0da4, .value=0xdc, .type=IO_READ},
        {.addr=0x0da5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0123) {
    const struct CPU_State initial_cpu = {.pc=0xdd8b, .a=0xc5, .x=0xd9, .y=0x78, .sp=0x6b, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xdd8b, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xdd8c, .a=0xc5, .x=0xd9, .y=0x77, .sp=0x6b, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xdd8b, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xdd8b, .value=0xdc, .type=IO_READ},
        {.addr=0xdd8c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0124) {
    const struct CPU_State initial_cpu = {.pc=0xebf2, .a=0xe6, .x=0xbf, .y=0x5f, .sp=0xd7, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xebf2, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xebf3, .a=0xe6, .x=0xbf, .y=0x5e, .sp=0xd7, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xebf2, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xebf2, .value=0xdc, .type=IO_READ},
        {.addr=0xebf3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0125) {
    const struct CPU_State initial_cpu = {.pc=0x6a8b, .a=0x34, .x=0xb6, .y=0x65, .sp=0x1b, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x6a8b, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x6a8c, .a=0x34, .x=0xb6, .y=0x64, .sp=0x1b, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x6a8b, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x6a8b, .value=0xdc, .type=IO_READ},
        {.addr=0x6a8c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0126) {
    const struct CPU_State initial_cpu = {.pc=0x5ae5, .a=0x8b, .x=0xfa, .y=0xfc, .sp=0x46, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x5ae5, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x5ae6, .a=0x8b, .x=0xfa, .y=0xfb, .sp=0x46, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x5ae5, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x5ae5, .value=0xdc, .type=IO_READ},
        {.addr=0x5ae6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0127) {
    const struct CPU_State initial_cpu = {.pc=0x0492, .a=0x31, .x=0xe0, .y=0x9b, .sp=0x99, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x0492, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x0493, .a=0x31, .x=0xe0, .y=0x9a, .sp=0x99, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0492, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x0492, .value=0xdc, .type=IO_READ},
        {.addr=0x0493, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0128) {
    const struct CPU_State initial_cpu = {.pc=0xce2c, .a=0xde, .x=0xa3, .y=0x1f, .sp=0x51, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xce2c, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xce2d, .a=0xde, .x=0xa3, .y=0x1e, .sp=0x51, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xce2c, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xce2c, .value=0xdc, .type=IO_READ},
        {.addr=0xce2d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0129) {
    const struct CPU_State initial_cpu = {.pc=0xdda0, .a=0x7e, .x=0x11, .y=0x5c, .sp=0x90, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xdda0, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xdda1, .a=0x7e, .x=0x11, .y=0x5b, .sp=0x90, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xdda0, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xdda0, .value=0xdc, .type=IO_READ},
        {.addr=0xdda1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_012A) {
    const struct CPU_State initial_cpu = {.pc=0x8aea, .a=0x04, .x=0x58, .y=0x76, .sp=0x27, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x8aea, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8aeb, .a=0x04, .x=0x58, .y=0x75, .sp=0x27, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x8aea, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x8aea, .value=0xdc, .type=IO_READ},
        {.addr=0x8aeb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_012B) {
    const struct CPU_State initial_cpu = {.pc=0x4c36, .a=0xbe, .x=0xc5, .y=0x0b, .sp=0x5d, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x4c36, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x4c37, .a=0xbe, .x=0xc5, .y=0x0a, .sp=0x5d, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x4c36, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x4c36, .value=0xdc, .type=IO_READ},
        {.addr=0x4c37, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_012C) {
    const struct CPU_State initial_cpu = {.pc=0x30af, .a=0x46, .x=0x60, .y=0xea, .sp=0xba, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x30af, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x30b0, .a=0x46, .x=0x60, .y=0xe9, .sp=0xba, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x30af, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x30af, .value=0xdc, .type=IO_READ},
        {.addr=0x30b0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_012D) {
    const struct CPU_State initial_cpu = {.pc=0xfc54, .a=0x89, .x=0x32, .y=0x23, .sp=0x09, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xfc54, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xfc55, .a=0x89, .x=0x32, .y=0x22, .sp=0x09, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xfc54, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xfc54, .value=0xdc, .type=IO_READ},
        {.addr=0xfc55, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_012E) {
    const struct CPU_State initial_cpu = {.pc=0x2a48, .a=0xef, .x=0xc7, .y=0x49, .sp=0x90, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x2a48, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x2a49, .a=0xef, .x=0xc7, .y=0x48, .sp=0x90, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x2a48, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x2a48, .value=0xdc, .type=IO_READ},
        {.addr=0x2a49, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_012F) {
    const struct CPU_State initial_cpu = {.pc=0x7438, .a=0x6a, .x=0xcf, .y=0xfe, .sp=0x77, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x7438, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x7439, .a=0x6a, .x=0xcf, .y=0xfd, .sp=0x77, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x7438, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x7438, .value=0xdc, .type=IO_READ},
        {.addr=0x7439, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0130) {
    const struct CPU_State initial_cpu = {.pc=0xa9b2, .a=0x07, .x=0x90, .y=0xc3, .sp=0x1f, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xa9b2, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xa9b3, .a=0x07, .x=0x90, .y=0xc2, .sp=0x1f, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xa9b2, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xa9b2, .value=0xdc, .type=IO_READ},
        {.addr=0xa9b3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0131) {
    const struct CPU_State initial_cpu = {.pc=0x289f, .a=0x7c, .x=0xdd, .y=0xbc, .sp=0x1b, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x289f, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x28a0, .a=0x7c, .x=0xdd, .y=0xbb, .sp=0x1b, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x289f, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x289f, .value=0xdc, .type=IO_READ},
        {.addr=0x28a0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0132) {
    const struct CPU_State initial_cpu = {.pc=0xd41c, .a=0x9c, .x=0xaa, .y=0x72, .sp=0x0d, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xd41c, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xd41d, .a=0x9c, .x=0xaa, .y=0x71, .sp=0x0d, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xd41c, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xd41c, .value=0xdc, .type=IO_READ},
        {.addr=0xd41d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0133) {
    const struct CPU_State initial_cpu = {.pc=0x2870, .a=0x59, .x=0x16, .y=0x81, .sp=0x63, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x2870, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x2871, .a=0x59, .x=0x16, .y=0x80, .sp=0x63, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x2870, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x2870, .value=0xdc, .type=IO_READ},
        {.addr=0x2871, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0134) {
    const struct CPU_State initial_cpu = {.pc=0xb9fa, .a=0x84, .x=0x2a, .y=0x61, .sp=0x6d, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xb9fa, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xb9fb, .a=0x84, .x=0x2a, .y=0x60, .sp=0x6d, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xb9fa, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xb9fa, .value=0xdc, .type=IO_READ},
        {.addr=0xb9fb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0135) {
    const struct CPU_State initial_cpu = {.pc=0xec3d, .a=0x88, .x=0x18, .y=0x42, .sp=0xda, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xec3d, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xec3e, .a=0x88, .x=0x18, .y=0x41, .sp=0xda, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xec3d, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xec3d, .value=0xdc, .type=IO_READ},
        {.addr=0xec3e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0136) {
    const struct CPU_State initial_cpu = {.pc=0x5550, .a=0x95, .x=0xef, .y=0x75, .sp=0xf5, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x5550, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x5551, .a=0x95, .x=0xef, .y=0x74, .sp=0xf5, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x5550, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x5550, .value=0xdc, .type=IO_READ},
        {.addr=0x5551, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0137) {
    const struct CPU_State initial_cpu = {.pc=0x54ed, .a=0xc6, .x=0xd9, .y=0x78, .sp=0xb1, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x54ed, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x54ee, .a=0xc6, .x=0xd9, .y=0x77, .sp=0xb1, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x54ed, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x54ed, .value=0xdc, .type=IO_READ},
        {.addr=0x54ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0138) {
    const struct CPU_State initial_cpu = {.pc=0x9861, .a=0xc7, .x=0xb7, .y=0x09, .sp=0x0e, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x9861, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x9862, .a=0xc7, .x=0xb7, .y=0x08, .sp=0x0e, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x9861, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x9861, .value=0xdc, .type=IO_READ},
        {.addr=0x9862, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0139) {
    const struct CPU_State initial_cpu = {.pc=0x6b18, .a=0x7b, .x=0x2e, .y=0x1e, .sp=0x89, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x6b18, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x6b19, .a=0x7b, .x=0x2e, .y=0x1d, .sp=0x89, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x6b18, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x6b18, .value=0xdc, .type=IO_READ},
        {.addr=0x6b19, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_013A) {
    const struct CPU_State initial_cpu = {.pc=0x4efe, .a=0x36, .x=0x80, .y=0x7e, .sp=0x7e, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x4efe, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x4eff, .a=0x36, .x=0x80, .y=0x7d, .sp=0x7e, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x4efe, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x4efe, .value=0xdc, .type=IO_READ},
        {.addr=0x4eff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_013B) {
    const struct CPU_State initial_cpu = {.pc=0x3152, .a=0xbc, .x=0x5a, .y=0xe5, .sp=0xf9, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x3152, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x3153, .a=0xbc, .x=0x5a, .y=0xe4, .sp=0xf9, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x3152, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x3152, .value=0xdc, .type=IO_READ},
        {.addr=0x3153, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_013C) {
    const struct CPU_State initial_cpu = {.pc=0x4f2e, .a=0xc4, .x=0x9d, .y=0x95, .sp=0x6d, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x4f2e, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x4f2f, .a=0xc4, .x=0x9d, .y=0x94, .sp=0x6d, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x4f2e, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x4f2e, .value=0xdc, .type=IO_READ},
        {.addr=0x4f2f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_013D) {
    const struct CPU_State initial_cpu = {.pc=0x5aaf, .a=0xe5, .x=0x23, .y=0x30, .sp=0x97, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x5aaf, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x5ab0, .a=0xe5, .x=0x23, .y=0x2f, .sp=0x97, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x5aaf, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x5aaf, .value=0xdc, .type=IO_READ},
        {.addr=0x5ab0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_013E) {
    const struct CPU_State initial_cpu = {.pc=0x6e63, .a=0xb6, .x=0x75, .y=0x9c, .sp=0xad, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x6e63, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x6e64, .a=0xb6, .x=0x75, .y=0x9b, .sp=0xad, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x6e63, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x6e63, .value=0xdc, .type=IO_READ},
        {.addr=0x6e64, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_013F) {
    const struct CPU_State initial_cpu = {.pc=0x0564, .a=0x99, .x=0x3a, .y=0xf0, .sp=0x98, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x0564, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x0565, .a=0x99, .x=0x3a, .y=0xef, .sp=0x98, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0564, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x0564, .value=0xdc, .type=IO_READ},
        {.addr=0x0565, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0140) {
    const struct CPU_State initial_cpu = {.pc=0x10be, .a=0x0d, .x=0x26, .y=0xa5, .sp=0xfa, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x10be, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x10bf, .a=0x0d, .x=0x26, .y=0xa4, .sp=0xfa, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x10be, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x10be, .value=0xdc, .type=IO_READ},
        {.addr=0x10bf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0141) {
    const struct CPU_State initial_cpu = {.pc=0x1ded, .a=0xdd, .x=0xda, .y=0x1d, .sp=0x54, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x1ded, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x1dee, .a=0xdd, .x=0xda, .y=0x1c, .sp=0x54, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x1ded, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1ded, .value=0xdc, .type=IO_READ},
        {.addr=0x1dee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0142) {
    const struct CPU_State initial_cpu = {.pc=0xbda7, .a=0x49, .x=0xfd, .y=0x29, .sp=0x3a, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xbda7, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xbda8, .a=0x49, .x=0xfd, .y=0x28, .sp=0x3a, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xbda7, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xbda7, .value=0xdc, .type=IO_READ},
        {.addr=0xbda8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0143) {
    const struct CPU_State initial_cpu = {.pc=0x516f, .a=0x20, .x=0xe6, .y=0x99, .sp=0x54, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x516f, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x5170, .a=0x20, .x=0xe6, .y=0x98, .sp=0x54, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x516f, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x516f, .value=0xdc, .type=IO_READ},
        {.addr=0x5170, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0144) {
    const struct CPU_State initial_cpu = {.pc=0x628f, .a=0xa6, .x=0xf6, .y=0xed, .sp=0xaf, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x628f, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x6290, .a=0xa6, .x=0xf6, .y=0xec, .sp=0xaf, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x628f, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x628f, .value=0xdc, .type=IO_READ},
        {.addr=0x6290, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0145) {
    const struct CPU_State initial_cpu = {.pc=0xe4fe, .a=0xef, .x=0xea, .y=0x09, .sp=0x0c, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xe4fe, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xe4ff, .a=0xef, .x=0xea, .y=0x08, .sp=0x0c, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xe4fe, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xe4fe, .value=0xdc, .type=IO_READ},
        {.addr=0xe4ff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0146) {
    const struct CPU_State initial_cpu = {.pc=0x844a, .a=0x4f, .x=0x98, .y=0x36, .sp=0xcd, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x844a, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x844b, .a=0x4f, .x=0x98, .y=0x35, .sp=0xcd, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x844a, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x844a, .value=0xdc, .type=IO_READ},
        {.addr=0x844b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0147) {
    const struct CPU_State initial_cpu = {.pc=0x61fc, .a=0x17, .x=0xf0, .y=0xbe, .sp=0x70, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x61fc, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x61fd, .a=0x17, .x=0xf0, .y=0xbd, .sp=0x70, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x61fc, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x61fc, .value=0xdc, .type=IO_READ},
        {.addr=0x61fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0148) {
    const struct CPU_State initial_cpu = {.pc=0xf89d, .a=0x1c, .x=0xc5, .y=0x97, .sp=0xdf, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xf89d, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xf89e, .a=0x1c, .x=0xc5, .y=0x96, .sp=0xdf, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xf89d, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xf89d, .value=0xdc, .type=IO_READ},
        {.addr=0xf89e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0149) {
    const struct CPU_State initial_cpu = {.pc=0x3e90, .a=0x3d, .x=0xd9, .y=0xd3, .sp=0x2b, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x3e90, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x3e91, .a=0x3d, .x=0xd9, .y=0xd2, .sp=0x2b, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x3e90, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x3e90, .value=0xdc, .type=IO_READ},
        {.addr=0x3e91, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_014A) {
    const struct CPU_State initial_cpu = {.pc=0x5bad, .a=0xb0, .x=0x9e, .y=0xdc, .sp=0x68, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x5bad, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x5bae, .a=0xb0, .x=0x9e, .y=0xdb, .sp=0x68, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x5bad, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x5bad, .value=0xdc, .type=IO_READ},
        {.addr=0x5bae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_014B) {
    const struct CPU_State initial_cpu = {.pc=0x986b, .a=0x52, .x=0x12, .y=0x0e, .sp=0xcd, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x986b, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x986c, .a=0x52, .x=0x12, .y=0x0d, .sp=0xcd, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x986b, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x986b, .value=0xdc, .type=IO_READ},
        {.addr=0x986c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_014C) {
    const struct CPU_State initial_cpu = {.pc=0xfa3b, .a=0xf3, .x=0x03, .y=0x9c, .sp=0x93, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xfa3b, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xfa3c, .a=0xf3, .x=0x03, .y=0x9b, .sp=0x93, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xfa3b, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xfa3b, .value=0xdc, .type=IO_READ},
        {.addr=0xfa3c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_014D) {
    const struct CPU_State initial_cpu = {.pc=0x819c, .a=0x8b, .x=0x74, .y=0x58, .sp=0xc6, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x819c, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x819d, .a=0x8b, .x=0x74, .y=0x57, .sp=0xc6, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x819c, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x819c, .value=0xdc, .type=IO_READ},
        {.addr=0x819d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_014E) {
    const struct CPU_State initial_cpu = {.pc=0x3886, .a=0xd7, .x=0x5a, .y=0xa9, .sp=0x9a, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x3886, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x3887, .a=0xd7, .x=0x5a, .y=0xa8, .sp=0x9a, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x3886, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x3886, .value=0xdc, .type=IO_READ},
        {.addr=0x3887, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_014F) {
    const struct CPU_State initial_cpu = {.pc=0xcacb, .a=0xbd, .x=0x6d, .y=0xe1, .sp=0x3a, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xcacb, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xcacc, .a=0xbd, .x=0x6d, .y=0xe0, .sp=0x3a, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xcacb, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xcacb, .value=0xdc, .type=IO_READ},
        {.addr=0xcacc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0150) {
    const struct CPU_State initial_cpu = {.pc=0x4209, .a=0xeb, .x=0x48, .y=0x8f, .sp=0xab, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x4209, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x420a, .a=0xeb, .x=0x48, .y=0x8e, .sp=0xab, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x4209, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x4209, .value=0xdc, .type=IO_READ},
        {.addr=0x420a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0151) {
    const struct CPU_State initial_cpu = {.pc=0x5d6a, .a=0xe2, .x=0x8c, .y=0x9a, .sp=0x2b, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x5d6a, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x5d6b, .a=0xe2, .x=0x8c, .y=0x99, .sp=0x2b, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x5d6a, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x5d6a, .value=0xdc, .type=IO_READ},
        {.addr=0x5d6b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0152) {
    const struct CPU_State initial_cpu = {.pc=0xfb6d, .a=0xff, .x=0xb1, .y=0xf1, .sp=0x4f, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xfb6d, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xfb6e, .a=0xff, .x=0xb1, .y=0xf0, .sp=0x4f, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xfb6d, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xfb6d, .value=0xdc, .type=IO_READ},
        {.addr=0xfb6e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0153) {
    const struct CPU_State initial_cpu = {.pc=0x8e64, .a=0x8e, .x=0x7e, .y=0x08, .sp=0xcf, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x8e64, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8e65, .a=0x8e, .x=0x7e, .y=0x07, .sp=0xcf, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x8e64, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x8e64, .value=0xdc, .type=IO_READ},
        {.addr=0x8e65, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0154) {
    const struct CPU_State initial_cpu = {.pc=0x4443, .a=0xe1, .x=0xe3, .y=0x51, .sp=0x50, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x4443, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x4444, .a=0xe1, .x=0xe3, .y=0x50, .sp=0x50, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x4443, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x4443, .value=0xdc, .type=IO_READ},
        {.addr=0x4444, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0155) {
    const struct CPU_State initial_cpu = {.pc=0xef79, .a=0x6e, .x=0x22, .y=0xbb, .sp=0x4a, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xef79, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xef7a, .a=0x6e, .x=0x22, .y=0xba, .sp=0x4a, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xef79, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xef79, .value=0xdc, .type=IO_READ},
        {.addr=0xef7a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0156) {
    const struct CPU_State initial_cpu = {.pc=0x9246, .a=0xbd, .x=0x21, .y=0xf2, .sp=0xeb, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x9246, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x9247, .a=0xbd, .x=0x21, .y=0xf1, .sp=0xeb, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x9246, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x9246, .value=0xdc, .type=IO_READ},
        {.addr=0x9247, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0157) {
    const struct CPU_State initial_cpu = {.pc=0x6999, .a=0x85, .x=0xff, .y=0xa1, .sp=0xd9, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x6999, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x699a, .a=0x85, .x=0xff, .y=0xa0, .sp=0xd9, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x6999, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x6999, .value=0xdc, .type=IO_READ},
        {.addr=0x699a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0158) {
    const struct CPU_State initial_cpu = {.pc=0xe5e4, .a=0xc0, .x=0xdc, .y=0x4c, .sp=0xba, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xe5e4, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xe5e5, .a=0xc0, .x=0xdc, .y=0x4b, .sp=0xba, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xe5e4, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xe5e4, .value=0xdc, .type=IO_READ},
        {.addr=0xe5e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0159) {
    const struct CPU_State initial_cpu = {.pc=0xd459, .a=0xa8, .x=0x08, .y=0x74, .sp=0x5b, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xd459, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xd45a, .a=0xa8, .x=0x08, .y=0x73, .sp=0x5b, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xd459, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xd459, .value=0xdc, .type=IO_READ},
        {.addr=0xd45a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_015A) {
    const struct CPU_State initial_cpu = {.pc=0x0513, .a=0x46, .x=0x3a, .y=0xf8, .sp=0x71, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x0513, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x0514, .a=0x46, .x=0x3a, .y=0xf7, .sp=0x71, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x0513, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x0513, .value=0xdc, .type=IO_READ},
        {.addr=0x0514, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_015B) {
    const struct CPU_State initial_cpu = {.pc=0xe8ba, .a=0x0c, .x=0x31, .y=0x80, .sp=0xd2, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xe8ba, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xe8bb, .a=0x0c, .x=0x31, .y=0x7f, .sp=0xd2, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xe8ba, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xe8ba, .value=0xdc, .type=IO_READ},
        {.addr=0xe8bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_015C) {
    const struct CPU_State initial_cpu = {.pc=0x46f0, .a=0xd5, .x=0xeb, .y=0x05, .sp=0x8d, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x46f0, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x46f1, .a=0xd5, .x=0xeb, .y=0x04, .sp=0x8d, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x46f0, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x46f0, .value=0xdc, .type=IO_READ},
        {.addr=0x46f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_015D) {
    const struct CPU_State initial_cpu = {.pc=0xa545, .a=0x99, .x=0x91, .y=0x7c, .sp=0x28, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xa545, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xa546, .a=0x99, .x=0x91, .y=0x7b, .sp=0x28, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xa545, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xa545, .value=0xdc, .type=IO_READ},
        {.addr=0xa546, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_015E) {
    const struct CPU_State initial_cpu = {.pc=0x32cf, .a=0x29, .x=0xbf, .y=0xc9, .sp=0x9a, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x32cf, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x32d0, .a=0x29, .x=0xbf, .y=0xc8, .sp=0x9a, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x32cf, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x32cf, .value=0xdc, .type=IO_READ},
        {.addr=0x32d0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_015F) {
    const struct CPU_State initial_cpu = {.pc=0x1cf6, .a=0x63, .x=0x2e, .y=0x58, .sp=0x03, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x1cf6, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x1cf7, .a=0x63, .x=0x2e, .y=0x57, .sp=0x03, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x1cf6, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1cf6, .value=0xdc, .type=IO_READ},
        {.addr=0x1cf7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0160) {
    const struct CPU_State initial_cpu = {.pc=0xd64e, .a=0x48, .x=0xc1, .y=0x19, .sp=0x0a, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xd64e, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xd64f, .a=0x48, .x=0xc1, .y=0x18, .sp=0x0a, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xd64e, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xd64e, .value=0xdc, .type=IO_READ},
        {.addr=0xd64f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0161) {
    const struct CPU_State initial_cpu = {.pc=0xadf1, .a=0x74, .x=0x3f, .y=0x69, .sp=0x88, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xadf1, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xadf2, .a=0x74, .x=0x3f, .y=0x68, .sp=0x88, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xadf1, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xadf1, .value=0xdc, .type=IO_READ},
        {.addr=0xadf2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0162) {
    const struct CPU_State initial_cpu = {.pc=0x6ac2, .a=0x09, .x=0x2a, .y=0x40, .sp=0x3b, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x6ac2, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x6ac3, .a=0x09, .x=0x2a, .y=0x3f, .sp=0x3b, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x6ac2, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x6ac2, .value=0xdc, .type=IO_READ},
        {.addr=0x6ac3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0163) {
    const struct CPU_State initial_cpu = {.pc=0x8f79, .a=0x46, .x=0xd7, .y=0xd6, .sp=0xbf, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x8f79, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8f7a, .a=0x46, .x=0xd7, .y=0xd5, .sp=0xbf, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x8f79, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x8f79, .value=0xdc, .type=IO_READ},
        {.addr=0x8f7a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0164) {
    const struct CPU_State initial_cpu = {.pc=0xe53f, .a=0x7c, .x=0x5e, .y=0x4c, .sp=0x98, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xe53f, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xe540, .a=0x7c, .x=0x5e, .y=0x4b, .sp=0x98, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xe53f, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xe53f, .value=0xdc, .type=IO_READ},
        {.addr=0xe540, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0165) {
    const struct CPU_State initial_cpu = {.pc=0xd709, .a=0xeb, .x=0x47, .y=0x08, .sp=0xee, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xd709, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xd70a, .a=0xeb, .x=0x47, .y=0x07, .sp=0xee, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xd709, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xd709, .value=0xdc, .type=IO_READ},
        {.addr=0xd70a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0166) {
    const struct CPU_State initial_cpu = {.pc=0x47a3, .a=0x50, .x=0xdb, .y=0xcd, .sp=0x9f, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x47a3, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x47a4, .a=0x50, .x=0xdb, .y=0xcc, .sp=0x9f, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x47a3, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x47a3, .value=0xdc, .type=IO_READ},
        {.addr=0x47a4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0167) {
    const struct CPU_State initial_cpu = {.pc=0xc96c, .a=0x0a, .x=0x2e, .y=0x30, .sp=0xa7, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xc96c, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xc96d, .a=0x0a, .x=0x2e, .y=0x2f, .sp=0xa7, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xc96c, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xc96c, .value=0xdc, .type=IO_READ},
        {.addr=0xc96d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0168) {
    const struct CPU_State initial_cpu = {.pc=0x673d, .a=0xa8, .x=0xda, .y=0x3e, .sp=0x98, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x673d, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x673e, .a=0xa8, .x=0xda, .y=0x3d, .sp=0x98, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x673d, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x673d, .value=0xdc, .type=IO_READ},
        {.addr=0x673e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0169) {
    const struct CPU_State initial_cpu = {.pc=0x76eb, .a=0x4c, .x=0x78, .y=0xf0, .sp=0xf1, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x76eb, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x76ec, .a=0x4c, .x=0x78, .y=0xef, .sp=0xf1, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x76eb, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x76eb, .value=0xdc, .type=IO_READ},
        {.addr=0x76ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_016A) {
    const struct CPU_State initial_cpu = {.pc=0x52e2, .a=0xb2, .x=0x5d, .y=0x77, .sp=0xfb, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x52e2, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x52e3, .a=0xb2, .x=0x5d, .y=0x76, .sp=0xfb, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x52e2, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x52e2, .value=0xdc, .type=IO_READ},
        {.addr=0x52e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_016B) {
    const struct CPU_State initial_cpu = {.pc=0x2646, .a=0x6f, .x=0x18, .y=0x6a, .sp=0x8c, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x2646, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x2647, .a=0x6f, .x=0x18, .y=0x69, .sp=0x8c, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x2646, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x2646, .value=0xdc, .type=IO_READ},
        {.addr=0x2647, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_016C) {
    const struct CPU_State initial_cpu = {.pc=0x1fd9, .a=0x4f, .x=0x62, .y=0x61, .sp=0x9d, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x1fd9, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x1fda, .a=0x4f, .x=0x62, .y=0x60, .sp=0x9d, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x1fd9, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1fd9, .value=0xdc, .type=IO_READ},
        {.addr=0x1fda, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_016D) {
    const struct CPU_State initial_cpu = {.pc=0xf12a, .a=0xdb, .x=0xf3, .y=0xf2, .sp=0xc4, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xf12a, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xf12b, .a=0xdb, .x=0xf3, .y=0xf1, .sp=0xc4, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xf12a, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xf12a, .value=0xdc, .type=IO_READ},
        {.addr=0xf12b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_016E) {
    const struct CPU_State initial_cpu = {.pc=0x313e, .a=0xe7, .x=0xa6, .y=0x86, .sp=0xbf, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x313e, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x313f, .a=0xe7, .x=0xa6, .y=0x85, .sp=0xbf, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x313e, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x313e, .value=0xdc, .type=IO_READ},
        {.addr=0x313f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_016F) {
    const struct CPU_State initial_cpu = {.pc=0xc117, .a=0x2b, .x=0x24, .y=0x60, .sp=0xab, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xc117, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xc118, .a=0x2b, .x=0x24, .y=0x5f, .sp=0xab, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xc117, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xc117, .value=0xdc, .type=IO_READ},
        {.addr=0xc118, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0170) {
    const struct CPU_State initial_cpu = {.pc=0x36a8, .a=0x42, .x=0x3b, .y=0x46, .sp=0xc5, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x36a8, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x36a9, .a=0x42, .x=0x3b, .y=0x45, .sp=0xc5, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x36a8, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x36a8, .value=0xdc, .type=IO_READ},
        {.addr=0x36a9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0171) {
    const struct CPU_State initial_cpu = {.pc=0x9e4f, .a=0xcc, .x=0x97, .y=0x15, .sp=0x6c, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x9e4f, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x9e50, .a=0xcc, .x=0x97, .y=0x14, .sp=0x6c, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x9e4f, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x9e4f, .value=0xdc, .type=IO_READ},
        {.addr=0x9e50, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0172) {
    const struct CPU_State initial_cpu = {.pc=0x23d1, .a=0xb3, .x=0xf3, .y=0x58, .sp=0x5a, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x23d1, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x23d2, .a=0xb3, .x=0xf3, .y=0x57, .sp=0x5a, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x23d1, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x23d1, .value=0xdc, .type=IO_READ},
        {.addr=0x23d2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0173) {
    const struct CPU_State initial_cpu = {.pc=0x2f32, .a=0x0d, .x=0xfc, .y=0x11, .sp=0x42, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x2f32, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x2f33, .a=0x0d, .x=0xfc, .y=0x10, .sp=0x42, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x2f32, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x2f32, .value=0xdc, .type=IO_READ},
        {.addr=0x2f33, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0174) {
    const struct CPU_State initial_cpu = {.pc=0x08ac, .a=0x97, .x=0x07, .y=0x54, .sp=0x37, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x08ac, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x08ad, .a=0x97, .x=0x07, .y=0x53, .sp=0x37, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x08ac, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x08ac, .value=0xdc, .type=IO_READ},
        {.addr=0x08ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0175) {
    const struct CPU_State initial_cpu = {.pc=0x166e, .a=0xa6, .x=0x82, .y=0xf6, .sp=0x90, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x166e, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x166f, .a=0xa6, .x=0x82, .y=0xf5, .sp=0x90, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x166e, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x166e, .value=0xdc, .type=IO_READ},
        {.addr=0x166f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0176) {
    const struct CPU_State initial_cpu = {.pc=0xbda1, .a=0x3d, .x=0xbf, .y=0xfe, .sp=0xa2, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xbda1, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xbda2, .a=0x3d, .x=0xbf, .y=0xfd, .sp=0xa2, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xbda1, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xbda1, .value=0xdc, .type=IO_READ},
        {.addr=0xbda2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0177) {
    const struct CPU_State initial_cpu = {.pc=0x100c, .a=0x24, .x=0x9c, .y=0xa3, .sp=0xaf, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x100c, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x100d, .a=0x24, .x=0x9c, .y=0xa2, .sp=0xaf, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x100c, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x100c, .value=0xdc, .type=IO_READ},
        {.addr=0x100d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0178) {
    const struct CPU_State initial_cpu = {.pc=0x6c50, .a=0xe7, .x=0x75, .y=0x65, .sp=0x9a, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x6c50, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x6c51, .a=0xe7, .x=0x75, .y=0x64, .sp=0x9a, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x6c50, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x6c50, .value=0xdc, .type=IO_READ},
        {.addr=0x6c51, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0179) {
    const struct CPU_State initial_cpu = {.pc=0x6232, .a=0xfe, .x=0xc7, .y=0x9a, .sp=0x26, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x6232, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x6233, .a=0xfe, .x=0xc7, .y=0x99, .sp=0x26, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x6232, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x6232, .value=0xdc, .type=IO_READ},
        {.addr=0x6233, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_017A) {
    const struct CPU_State initial_cpu = {.pc=0xf5df, .a=0x79, .x=0x9e, .y=0xd5, .sp=0xd3, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xf5df, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xf5e0, .a=0x79, .x=0x9e, .y=0xd4, .sp=0xd3, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xf5df, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xf5df, .value=0xdc, .type=IO_READ},
        {.addr=0xf5e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_017B) {
    const struct CPU_State initial_cpu = {.pc=0x8326, .a=0xba, .x=0x01, .y=0xc1, .sp=0x6f, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x8326, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8327, .a=0xba, .x=0x01, .y=0xc0, .sp=0x6f, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x8326, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x8326, .value=0xdc, .type=IO_READ},
        {.addr=0x8327, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_017C) {
    const struct CPU_State initial_cpu = {.pc=0xf703, .a=0x56, .x=0x28, .y=0xd8, .sp=0xd0, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xf703, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xf704, .a=0x56, .x=0x28, .y=0xd7, .sp=0xd0, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xf703, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xf703, .value=0xdc, .type=IO_READ},
        {.addr=0xf704, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_017D) {
    const struct CPU_State initial_cpu = {.pc=0xe1d4, .a=0xf4, .x=0xdd, .y=0x26, .sp=0xcb, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xe1d4, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xe1d5, .a=0xf4, .x=0xdd, .y=0x25, .sp=0xcb, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xe1d4, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xe1d4, .value=0xdc, .type=IO_READ},
        {.addr=0xe1d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_017E) {
    const struct CPU_State initial_cpu = {.pc=0x1d7a, .a=0x7f, .x=0x0f, .y=0x5c, .sp=0xe1, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x1d7a, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x1d7b, .a=0x7f, .x=0x0f, .y=0x5b, .sp=0xe1, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x1d7a, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1d7a, .value=0xdc, .type=IO_READ},
        {.addr=0x1d7b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_017F) {
    const struct CPU_State initial_cpu = {.pc=0xb4f0, .a=0x7f, .x=0x99, .y=0x9a, .sp=0x0f, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xb4f0, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xb4f1, .a=0x7f, .x=0x99, .y=0x99, .sp=0x0f, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xb4f0, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xb4f0, .value=0xdc, .type=IO_READ},
        {.addr=0xb4f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0180) {
    const struct CPU_State initial_cpu = {.pc=0x908e, .a=0x71, .x=0x22, .y=0x4a, .sp=0x4f, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x908e, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x908f, .a=0x71, .x=0x22, .y=0x49, .sp=0x4f, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x908e, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x908e, .value=0xdc, .type=IO_READ},
        {.addr=0x908f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0181) {
    const struct CPU_State initial_cpu = {.pc=0xc0a9, .a=0x54, .x=0xfb, .y=0x5c, .sp=0x05, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xc0a9, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xc0aa, .a=0x54, .x=0xfb, .y=0x5b, .sp=0x05, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xc0a9, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xc0a9, .value=0xdc, .type=IO_READ},
        {.addr=0xc0aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0182) {
    const struct CPU_State initial_cpu = {.pc=0xe110, .a=0xb3, .x=0x8d, .y=0x5e, .sp=0x40, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xe110, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xe111, .a=0xb3, .x=0x8d, .y=0x5d, .sp=0x40, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xe110, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xe110, .value=0xdc, .type=IO_READ},
        {.addr=0xe111, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0183) {
    const struct CPU_State initial_cpu = {.pc=0x7ee4, .a=0x23, .x=0x2b, .y=0x0b, .sp=0x47, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x7ee4, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x7ee5, .a=0x23, .x=0x2b, .y=0x0a, .sp=0x47, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x7ee4, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x7ee4, .value=0xdc, .type=IO_READ},
        {.addr=0x7ee5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0184) {
    const struct CPU_State initial_cpu = {.pc=0x15b7, .a=0x72, .x=0xa7, .y=0xa3, .sp=0xc4, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x15b7, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x15b8, .a=0x72, .x=0xa7, .y=0xa2, .sp=0xc4, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x15b7, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x15b7, .value=0xdc, .type=IO_READ},
        {.addr=0x15b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0185) {
    const struct CPU_State initial_cpu = {.pc=0xd872, .a=0xef, .x=0x1c, .y=0x4f, .sp=0x65, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xd872, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xd873, .a=0xef, .x=0x1c, .y=0x4e, .sp=0x65, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xd872, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xd872, .value=0xdc, .type=IO_READ},
        {.addr=0xd873, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0186) {
    const struct CPU_State initial_cpu = {.pc=0x3988, .a=0xa2, .x=0xff, .y=0xd0, .sp=0x91, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x3988, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x3989, .a=0xa2, .x=0xff, .y=0xcf, .sp=0x91, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x3988, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x3988, .value=0xdc, .type=IO_READ},
        {.addr=0x3989, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0187) {
    const struct CPU_State initial_cpu = {.pc=0x0fc9, .a=0x08, .x=0x24, .y=0x17, .sp=0x61, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x0fc9, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x0fca, .a=0x08, .x=0x24, .y=0x16, .sp=0x61, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x0fc9, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x0fc9, .value=0xdc, .type=IO_READ},
        {.addr=0x0fca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0188) {
    const struct CPU_State initial_cpu = {.pc=0xc3d9, .a=0xbe, .x=0x3a, .y=0x80, .sp=0x85, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xc3d9, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xc3da, .a=0xbe, .x=0x3a, .y=0x7f, .sp=0x85, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xc3d9, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xc3d9, .value=0xdc, .type=IO_READ},
        {.addr=0xc3da, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0189) {
    const struct CPU_State initial_cpu = {.pc=0xdfb7, .a=0x49, .x=0x45, .y=0x6a, .sp=0xc7, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xdfb7, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xdfb8, .a=0x49, .x=0x45, .y=0x69, .sp=0xc7, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xdfb7, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xdfb7, .value=0xdc, .type=IO_READ},
        {.addr=0xdfb8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_018A) {
    const struct CPU_State initial_cpu = {.pc=0x65dc, .a=0xa5, .x=0x82, .y=0x5b, .sp=0x68, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x65dc, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x65dd, .a=0xa5, .x=0x82, .y=0x5a, .sp=0x68, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x65dc, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x65dc, .value=0xdc, .type=IO_READ},
        {.addr=0x65dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_018B) {
    const struct CPU_State initial_cpu = {.pc=0x521f, .a=0x36, .x=0xbd, .y=0x14, .sp=0xfa, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x521f, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x5220, .a=0x36, .x=0xbd, .y=0x13, .sp=0xfa, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x521f, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x521f, .value=0xdc, .type=IO_READ},
        {.addr=0x5220, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_018C) {
    const struct CPU_State initial_cpu = {.pc=0xc8e4, .a=0x97, .x=0x40, .y=0x75, .sp=0x33, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xc8e4, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xc8e5, .a=0x97, .x=0x40, .y=0x74, .sp=0x33, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xc8e4, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xc8e4, .value=0xdc, .type=IO_READ},
        {.addr=0xc8e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_018D) {
    const struct CPU_State initial_cpu = {.pc=0x8523, .a=0x26, .x=0x77, .y=0x42, .sp=0x44, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x8523, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8524, .a=0x26, .x=0x77, .y=0x41, .sp=0x44, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x8523, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x8523, .value=0xdc, .type=IO_READ},
        {.addr=0x8524, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_018E) {
    const struct CPU_State initial_cpu = {.pc=0xfaeb, .a=0x65, .x=0xda, .y=0x4e, .sp=0x4d, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xfaeb, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xfaec, .a=0x65, .x=0xda, .y=0x4d, .sp=0x4d, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xfaeb, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xfaeb, .value=0xdc, .type=IO_READ},
        {.addr=0xfaec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_018F) {
    const struct CPU_State initial_cpu = {.pc=0x2b44, .a=0xc3, .x=0xf5, .y=0xf6, .sp=0x31, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x2b44, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x2b45, .a=0xc3, .x=0xf5, .y=0xf5, .sp=0x31, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x2b44, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x2b44, .value=0xdc, .type=IO_READ},
        {.addr=0x2b45, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0190) {
    const struct CPU_State initial_cpu = {.pc=0x5106, .a=0x50, .x=0x43, .y=0xc3, .sp=0x13, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x5106, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x5107, .a=0x50, .x=0x43, .y=0xc2, .sp=0x13, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x5106, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x5106, .value=0xdc, .type=IO_READ},
        {.addr=0x5107, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0191) {
    const struct CPU_State initial_cpu = {.pc=0xe56c, .a=0x36, .x=0xa3, .y=0xba, .sp=0x06, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xe56c, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xe56d, .a=0x36, .x=0xa3, .y=0xb9, .sp=0x06, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xe56c, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xe56c, .value=0xdc, .type=IO_READ},
        {.addr=0xe56d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0192) {
    const struct CPU_State initial_cpu = {.pc=0xf300, .a=0x01, .x=0x0a, .y=0x30, .sp=0x9f, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xf300, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xf301, .a=0x01, .x=0x0a, .y=0x2f, .sp=0x9f, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xf300, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xf300, .value=0xdc, .type=IO_READ},
        {.addr=0xf301, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0193) {
    const struct CPU_State initial_cpu = {.pc=0x1d05, .a=0xf7, .x=0x76, .y=0x27, .sp=0x27, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x1d05, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x1d06, .a=0xf7, .x=0x76, .y=0x26, .sp=0x27, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x1d05, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1d05, .value=0xdc, .type=IO_READ},
        {.addr=0x1d06, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0194) {
    const struct CPU_State initial_cpu = {.pc=0x9534, .a=0x3d, .x=0x64, .y=0x79, .sp=0xbf, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x9534, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x9535, .a=0x3d, .x=0x64, .y=0x78, .sp=0xbf, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x9534, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x9534, .value=0xdc, .type=IO_READ},
        {.addr=0x9535, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0195) {
    const struct CPU_State initial_cpu = {.pc=0xc732, .a=0x2f, .x=0xbf, .y=0xce, .sp=0xf0, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xc732, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xc733, .a=0x2f, .x=0xbf, .y=0xcd, .sp=0xf0, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xc732, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xc732, .value=0xdc, .type=IO_READ},
        {.addr=0xc733, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0196) {
    const struct CPU_State initial_cpu = {.pc=0x0a06, .a=0x81, .x=0x35, .y=0x9b, .sp=0xfb, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x0a06, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x0a07, .a=0x81, .x=0x35, .y=0x9a, .sp=0xfb, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x0a06, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x0a06, .value=0xdc, .type=IO_READ},
        {.addr=0x0a07, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0197) {
    const struct CPU_State initial_cpu = {.pc=0x8f79, .a=0xe2, .x=0xb5, .y=0xa5, .sp=0x9a, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x8f79, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8f7a, .a=0xe2, .x=0xb5, .y=0xa4, .sp=0x9a, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x8f79, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x8f79, .value=0xdc, .type=IO_READ},
        {.addr=0x8f7a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0198) {
    const struct CPU_State initial_cpu = {.pc=0x13da, .a=0x48, .x=0x40, .y=0xc1, .sp=0xa3, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x13da, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x13db, .a=0x48, .x=0x40, .y=0xc0, .sp=0xa3, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x13da, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x13da, .value=0xdc, .type=IO_READ},
        {.addr=0x13db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0199) {
    const struct CPU_State initial_cpu = {.pc=0xa5af, .a=0x90, .x=0xe1, .y=0x92, .sp=0x06, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xa5af, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xa5b0, .a=0x90, .x=0xe1, .y=0x91, .sp=0x06, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xa5af, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xa5af, .value=0xdc, .type=IO_READ},
        {.addr=0xa5b0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_019A) {
    const struct CPU_State initial_cpu = {.pc=0xcd85, .a=0xcb, .x=0x5d, .y=0x2d, .sp=0xc2, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xcd85, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xcd86, .a=0xcb, .x=0x5d, .y=0x2c, .sp=0xc2, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xcd85, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xcd85, .value=0xdc, .type=IO_READ},
        {.addr=0xcd86, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_019B) {
    const struct CPU_State initial_cpu = {.pc=0x765a, .a=0xd0, .x=0x39, .y=0xc9, .sp=0x10, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x765a, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x765b, .a=0xd0, .x=0x39, .y=0xc8, .sp=0x10, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x765a, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x765a, .value=0xdc, .type=IO_READ},
        {.addr=0x765b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_019C) {
    const struct CPU_State initial_cpu = {.pc=0x8364, .a=0xf3, .x=0x69, .y=0x10, .sp=0x62, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x8364, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8365, .a=0xf3, .x=0x69, .y=0x0f, .sp=0x62, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x8364, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x8364, .value=0xdc, .type=IO_READ},
        {.addr=0x8365, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_019D) {
    const struct CPU_State initial_cpu = {.pc=0xe5ad, .a=0xb8, .x=0x15, .y=0xad, .sp=0xde, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xe5ad, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xe5ae, .a=0xb8, .x=0x15, .y=0xac, .sp=0xde, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xe5ad, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xe5ad, .value=0xdc, .type=IO_READ},
        {.addr=0xe5ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_019E) {
    const struct CPU_State initial_cpu = {.pc=0x9edb, .a=0xb3, .x=0x8d, .y=0x4f, .sp=0x1e, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x9edb, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x9edc, .a=0xb3, .x=0x8d, .y=0x4e, .sp=0x1e, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x9edb, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x9edb, .value=0xdc, .type=IO_READ},
        {.addr=0x9edc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_019F) {
    const struct CPU_State initial_cpu = {.pc=0x7669, .a=0xec, .x=0xe1, .y=0x9d, .sp=0x26, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x7669, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x766a, .a=0xec, .x=0xe1, .y=0x9c, .sp=0x26, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x7669, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x7669, .value=0xdc, .type=IO_READ},
        {.addr=0x766a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x5f5c, .a=0xdf, .x=0xff, .y=0x50, .sp=0x66, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x5f5c, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x5f5d, .a=0xdf, .x=0xff, .y=0x4f, .sp=0x66, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x5f5c, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x5f5c, .value=0xdc, .type=IO_READ},
        {.addr=0x5f5d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01A1) {
    const struct CPU_State initial_cpu = {.pc=0x9c88, .a=0x5d, .x=0xd9, .y=0x34, .sp=0x09, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x9c88, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x9c89, .a=0x5d, .x=0xd9, .y=0x33, .sp=0x09, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x9c88, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x9c88, .value=0xdc, .type=IO_READ},
        {.addr=0x9c89, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01A2) {
    const struct CPU_State initial_cpu = {.pc=0x2bfb, .a=0x28, .x=0x57, .y=0x4b, .sp=0x6d, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x2bfb, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x2bfc, .a=0x28, .x=0x57, .y=0x4a, .sp=0x6d, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x2bfb, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x2bfb, .value=0xdc, .type=IO_READ},
        {.addr=0x2bfc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01A3) {
    const struct CPU_State initial_cpu = {.pc=0x0d1a, .a=0xb3, .x=0x60, .y=0xf3, .sp=0xb4, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x0d1a, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x0d1b, .a=0xb3, .x=0x60, .y=0xf2, .sp=0xb4, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0d1a, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x0d1a, .value=0xdc, .type=IO_READ},
        {.addr=0x0d1b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01A4) {
    const struct CPU_State initial_cpu = {.pc=0x7489, .a=0x2f, .x=0x1f, .y=0xdb, .sp=0xeb, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x7489, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x748a, .a=0x2f, .x=0x1f, .y=0xda, .sp=0xeb, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x7489, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x7489, .value=0xdc, .type=IO_READ},
        {.addr=0x748a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01A5) {
    const struct CPU_State initial_cpu = {.pc=0xebb7, .a=0xde, .x=0xd3, .y=0x0a, .sp=0xf3, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xebb7, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xebb8, .a=0xde, .x=0xd3, .y=0x09, .sp=0xf3, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xebb7, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xebb7, .value=0xdc, .type=IO_READ},
        {.addr=0xebb8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01A6) {
    const struct CPU_State initial_cpu = {.pc=0x52d1, .a=0x16, .x=0x96, .y=0xee, .sp=0xf0, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x52d1, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x52d2, .a=0x16, .x=0x96, .y=0xed, .sp=0xf0, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x52d1, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x52d1, .value=0xdc, .type=IO_READ},
        {.addr=0x52d2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01A7) {
    const struct CPU_State initial_cpu = {.pc=0x15a0, .a=0x8f, .x=0xcc, .y=0x5a, .sp=0x59, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x15a0, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x15a1, .a=0x8f, .x=0xcc, .y=0x59, .sp=0x59, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x15a0, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x15a0, .value=0xdc, .type=IO_READ},
        {.addr=0x15a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01A8) {
    const struct CPU_State initial_cpu = {.pc=0x6be5, .a=0xe2, .x=0x57, .y=0x31, .sp=0x33, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x6be5, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x6be6, .a=0xe2, .x=0x57, .y=0x30, .sp=0x33, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x6be5, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x6be5, .value=0xdc, .type=IO_READ},
        {.addr=0x6be6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01A9) {
    const struct CPU_State initial_cpu = {.pc=0x5637, .a=0x19, .x=0x98, .y=0xb2, .sp=0xe5, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x5637, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x5638, .a=0x19, .x=0x98, .y=0xb1, .sp=0xe5, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x5637, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x5637, .value=0xdc, .type=IO_READ},
        {.addr=0x5638, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01AA) {
    const struct CPU_State initial_cpu = {.pc=0xadfb, .a=0xd6, .x=0xa0, .y=0x4c, .sp=0x25, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xadfb, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xadfc, .a=0xd6, .x=0xa0, .y=0x4b, .sp=0x25, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xadfb, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xadfb, .value=0xdc, .type=IO_READ},
        {.addr=0xadfc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x8815, .a=0xe5, .x=0x15, .y=0x15, .sp=0x10, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x8815, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8816, .a=0xe5, .x=0x15, .y=0x14, .sp=0x10, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x8815, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x8815, .value=0xdc, .type=IO_READ},
        {.addr=0x8816, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01AC) {
    const struct CPU_State initial_cpu = {.pc=0xb790, .a=0x74, .x=0x92, .y=0x2a, .sp=0xff, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xb790, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xb791, .a=0x74, .x=0x92, .y=0x29, .sp=0xff, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xb790, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xb790, .value=0xdc, .type=IO_READ},
        {.addr=0xb791, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01AD) {
    const struct CPU_State initial_cpu = {.pc=0xdc9b, .a=0x3a, .x=0x93, .y=0x96, .sp=0x86, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xdc9b, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xdc9c, .a=0x3a, .x=0x93, .y=0x95, .sp=0x86, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xdc9b, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xdc9b, .value=0xdc, .type=IO_READ},
        {.addr=0xdc9c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01AE) {
    const struct CPU_State initial_cpu = {.pc=0x9eb4, .a=0xbf, .x=0xc2, .y=0x54, .sp=0x6a, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x9eb4, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x9eb5, .a=0xbf, .x=0xc2, .y=0x53, .sp=0x6a, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x9eb4, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x9eb4, .value=0xdc, .type=IO_READ},
        {.addr=0x9eb5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01AF) {
    const struct CPU_State initial_cpu = {.pc=0xb112, .a=0x46, .x=0x82, .y=0x5f, .sp=0x32, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xb112, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xb113, .a=0x46, .x=0x82, .y=0x5e, .sp=0x32, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xb112, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xb112, .value=0xdc, .type=IO_READ},
        {.addr=0xb113, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x4190, .a=0x27, .x=0x5a, .y=0x77, .sp=0x5f, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x4190, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x4191, .a=0x27, .x=0x5a, .y=0x76, .sp=0x5f, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x4190, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x4190, .value=0xdc, .type=IO_READ},
        {.addr=0x4191, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01B1) {
    const struct CPU_State initial_cpu = {.pc=0x9ba2, .a=0x9d, .x=0x1c, .y=0xd9, .sp=0x62, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x9ba2, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x9ba3, .a=0x9d, .x=0x1c, .y=0xd8, .sp=0x62, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x9ba2, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x9ba2, .value=0xdc, .type=IO_READ},
        {.addr=0x9ba3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01B2) {
    const struct CPU_State initial_cpu = {.pc=0xed00, .a=0x7d, .x=0xb3, .y=0x2a, .sp=0x64, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xed00, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xed01, .a=0x7d, .x=0xb3, .y=0x29, .sp=0x64, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xed00, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xed00, .value=0xdc, .type=IO_READ},
        {.addr=0xed01, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01B3) {
    const struct CPU_State initial_cpu = {.pc=0x40f9, .a=0x41, .x=0x3c, .y=0x0c, .sp=0x0f, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x40f9, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x40fa, .a=0x41, .x=0x3c, .y=0x0b, .sp=0x0f, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x40f9, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x40f9, .value=0xdc, .type=IO_READ},
        {.addr=0x40fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01B4) {
    const struct CPU_State initial_cpu = {.pc=0x5b57, .a=0xbd, .x=0x29, .y=0xb6, .sp=0xbe, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x5b57, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x5b58, .a=0xbd, .x=0x29, .y=0xb5, .sp=0xbe, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x5b57, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x5b57, .value=0xdc, .type=IO_READ},
        {.addr=0x5b58, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01B5) {
    const struct CPU_State initial_cpu = {.pc=0xb29d, .a=0x57, .x=0x89, .y=0xee, .sp=0xd8, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xb29d, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xb29e, .a=0x57, .x=0x89, .y=0xed, .sp=0xd8, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xb29d, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xb29d, .value=0xdc, .type=IO_READ},
        {.addr=0xb29e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01B6) {
    const struct CPU_State initial_cpu = {.pc=0xa4e3, .a=0xe5, .x=0xa9, .y=0x53, .sp=0xbe, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xa4e3, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xa4e4, .a=0xe5, .x=0xa9, .y=0x52, .sp=0xbe, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xa4e3, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xa4e3, .value=0xdc, .type=IO_READ},
        {.addr=0xa4e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01B7) {
    const struct CPU_State initial_cpu = {.pc=0x809d, .a=0xf8, .x=0x2d, .y=0x49, .sp=0x08, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x809d, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x809e, .a=0xf8, .x=0x2d, .y=0x48, .sp=0x08, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x809d, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x809d, .value=0xdc, .type=IO_READ},
        {.addr=0x809e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01B8) {
    const struct CPU_State initial_cpu = {.pc=0xa582, .a=0x1a, .x=0x4a, .y=0x8c, .sp=0xe3, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0xa582, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xa583, .a=0x1a, .x=0x4a, .y=0x8b, .sp=0xe3, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xa582, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xa582, .value=0xdc, .type=IO_READ},
        {.addr=0xa583, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x35ed, .a=0xdc, .x=0x14, .y=0xb3, .sp=0xac, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x35ed, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x35ee, .a=0xdc, .x=0x14, .y=0xb2, .sp=0xac, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x35ed, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x35ed, .value=0xdc, .type=IO_READ},
        {.addr=0x35ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01BA) {
    const struct CPU_State initial_cpu = {.pc=0x2c9a, .a=0xc0, .x=0x69, .y=0x82, .sp=0x61, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x2c9a, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x2c9b, .a=0xc0, .x=0x69, .y=0x81, .sp=0x61, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x2c9a, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x2c9a, .value=0xdc, .type=IO_READ},
        {.addr=0x2c9b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01BB) {
    const struct CPU_State initial_cpu = {.pc=0x1573, .a=0x61, .x=0x5e, .y=0xe3, .sp=0x16, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x1573, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x1574, .a=0x61, .x=0x5e, .y=0xe2, .sp=0x16, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x1573, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1573, .value=0xdc, .type=IO_READ},
        {.addr=0x1574, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01BC) {
    const struct CPU_State initial_cpu = {.pc=0x63b6, .a=0xb5, .x=0xcc, .y=0x00, .sp=0xa8, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x63b6, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x63b7, .a=0xb5, .x=0xcc, .y=0xff, .sp=0xa8, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x63b6, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x63b6, .value=0xdc, .type=IO_READ},
        {.addr=0x63b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01BD) {
    const struct CPU_State initial_cpu = {.pc=0x4678, .a=0x37, .x=0xbf, .y=0xa2, .sp=0xda, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x4678, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x4679, .a=0x37, .x=0xbf, .y=0xa1, .sp=0xda, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x4678, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x4678, .value=0xdc, .type=IO_READ},
        {.addr=0x4679, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01BE) {
    const struct CPU_State initial_cpu = {.pc=0xc9fd, .a=0x71, .x=0xb3, .y=0x0c, .sp=0xd7, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xc9fd, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xc9fe, .a=0x71, .x=0xb3, .y=0x0b, .sp=0xd7, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xc9fd, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xc9fd, .value=0xdc, .type=IO_READ},
        {.addr=0xc9fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01BF) {
    const struct CPU_State initial_cpu = {.pc=0x06fc, .a=0x33, .x=0xac, .y=0x77, .sp=0x56, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x06fc, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x06fd, .a=0x33, .x=0xac, .y=0x76, .sp=0x56, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x06fc, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x06fc, .value=0xdc, .type=IO_READ},
        {.addr=0x06fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01C0) {
    const struct CPU_State initial_cpu = {.pc=0xca5f, .a=0x5d, .x=0xfe, .y=0x81, .sp=0x28, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xca5f, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xca60, .a=0x5d, .x=0xfe, .y=0x80, .sp=0x28, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xca5f, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xca5f, .value=0xdc, .type=IO_READ},
        {.addr=0xca60, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x7296, .a=0x41, .x=0x08, .y=0x2d, .sp=0x63, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x7296, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x7297, .a=0x41, .x=0x08, .y=0x2c, .sp=0x63, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x7296, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x7296, .value=0xdc, .type=IO_READ},
        {.addr=0x7297, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01C2) {
    const struct CPU_State initial_cpu = {.pc=0xbe75, .a=0xe5, .x=0x1b, .y=0x8c, .sp=0xda, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xbe75, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xbe76, .a=0xe5, .x=0x1b, .y=0x8b, .sp=0xda, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xbe75, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xbe75, .value=0xdc, .type=IO_READ},
        {.addr=0xbe76, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01C3) {
    const struct CPU_State initial_cpu = {.pc=0xf98f, .a=0xa6, .x=0x03, .y=0xee, .sp=0xc9, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xf98f, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xf990, .a=0xa6, .x=0x03, .y=0xed, .sp=0xc9, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xf98f, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xf98f, .value=0xdc, .type=IO_READ},
        {.addr=0xf990, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x7973, .a=0x7e, .x=0x20, .y=0x2a, .sp=0x12, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x7973, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x7974, .a=0x7e, .x=0x20, .y=0x29, .sp=0x12, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x7973, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x7973, .value=0xdc, .type=IO_READ},
        {.addr=0x7974, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01C5) {
    const struct CPU_State initial_cpu = {.pc=0xf400, .a=0x5a, .x=0xf4, .y=0x14, .sp=0x44, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xf400, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xf401, .a=0x5a, .x=0xf4, .y=0x13, .sp=0x44, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xf400, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xf400, .value=0xdc, .type=IO_READ},
        {.addr=0xf401, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01C6) {
    const struct CPU_State initial_cpu = {.pc=0xebd7, .a=0xec, .x=0x73, .y=0xd8, .sp=0xc8, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xebd7, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xebd8, .a=0xec, .x=0x73, .y=0xd7, .sp=0xc8, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xebd7, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xebd7, .value=0xdc, .type=IO_READ},
        {.addr=0xebd8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01C7) {
    const struct CPU_State initial_cpu = {.pc=0x1322, .a=0xcf, .x=0xbb, .y=0xf5, .sp=0x1e, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x1322, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x1323, .a=0xcf, .x=0xbb, .y=0xf4, .sp=0x1e, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x1322, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1322, .value=0xdc, .type=IO_READ},
        {.addr=0x1323, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01C8) {
    const struct CPU_State initial_cpu = {.pc=0xc405, .a=0x9e, .x=0x1d, .y=0xcd, .sp=0x9c, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xc405, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xc406, .a=0x9e, .x=0x1d, .y=0xcc, .sp=0x9c, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xc405, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xc405, .value=0xdc, .type=IO_READ},
        {.addr=0xc406, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01C9) {
    const struct CPU_State initial_cpu = {.pc=0x823d, .a=0x92, .x=0xa3, .y=0xbd, .sp=0x5b, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x823d, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x823e, .a=0x92, .x=0xa3, .y=0xbc, .sp=0x5b, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x823d, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x823d, .value=0xdc, .type=IO_READ},
        {.addr=0x823e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01CA) {
    const struct CPU_State initial_cpu = {.pc=0xf0fe, .a=0x69, .x=0x68, .y=0x84, .sp=0x08, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xf0fe, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xf0ff, .a=0x69, .x=0x68, .y=0x83, .sp=0x08, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xf0fe, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xf0fe, .value=0xdc, .type=IO_READ},
        {.addr=0xf0ff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01CB) {
    const struct CPU_State initial_cpu = {.pc=0x54db, .a=0x6e, .x=0xb2, .y=0x79, .sp=0xea, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x54db, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x54dc, .a=0x6e, .x=0xb2, .y=0x78, .sp=0xea, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x54db, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x54db, .value=0xdc, .type=IO_READ},
        {.addr=0x54dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01CC) {
    const struct CPU_State initial_cpu = {.pc=0x5438, .a=0xee, .x=0xa2, .y=0x29, .sp=0xda, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x5438, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x5439, .a=0xee, .x=0xa2, .y=0x28, .sp=0xda, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x5438, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x5438, .value=0xdc, .type=IO_READ},
        {.addr=0x5439, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01CD) {
    const struct CPU_State initial_cpu = {.pc=0xd4b0, .a=0x1b, .x=0x7e, .y=0x90, .sp=0x27, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xd4b0, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xd4b1, .a=0x1b, .x=0x7e, .y=0x8f, .sp=0x27, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xd4b0, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xd4b0, .value=0xdc, .type=IO_READ},
        {.addr=0xd4b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01CE) {
    const struct CPU_State initial_cpu = {.pc=0x6ea8, .a=0x4e, .x=0xb4, .y=0x55, .sp=0xaa, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x6ea8, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x6ea9, .a=0x4e, .x=0xb4, .y=0x54, .sp=0xaa, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x6ea8, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x6ea8, .value=0xdc, .type=IO_READ},
        {.addr=0x6ea9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01CF) {
    const struct CPU_State initial_cpu = {.pc=0xce3b, .a=0xc4, .x=0x03, .y=0x7d, .sp=0x11, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xce3b, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xce3c, .a=0xc4, .x=0x03, .y=0x7c, .sp=0x11, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xce3b, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xce3b, .value=0xdc, .type=IO_READ},
        {.addr=0xce3c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01D0) {
    const struct CPU_State initial_cpu = {.pc=0xf3e4, .a=0x71, .x=0xb5, .y=0x84, .sp=0xe6, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xf3e4, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xf3e5, .a=0x71, .x=0xb5, .y=0x83, .sp=0xe6, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xf3e4, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xf3e4, .value=0xdc, .type=IO_READ},
        {.addr=0xf3e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01D1) {
    const struct CPU_State initial_cpu = {.pc=0x0da3, .a=0x8a, .x=0xe8, .y=0x17, .sp=0xc1, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x0da3, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x0da4, .a=0x8a, .x=0xe8, .y=0x16, .sp=0xc1, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x0da3, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x0da3, .value=0xdc, .type=IO_READ},
        {.addr=0x0da4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x84ad, .a=0x39, .x=0x91, .y=0x7f, .sp=0x17, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x84ad, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x84ae, .a=0x39, .x=0x91, .y=0x7e, .sp=0x17, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x84ad, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x84ad, .value=0xdc, .type=IO_READ},
        {.addr=0x84ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01D3) {
    const struct CPU_State initial_cpu = {.pc=0x2e1a, .a=0x1f, .x=0x30, .y=0xea, .sp=0x18, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x2e1a, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x2e1b, .a=0x1f, .x=0x30, .y=0xe9, .sp=0x18, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x2e1a, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x2e1a, .value=0xdc, .type=IO_READ},
        {.addr=0x2e1b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x9d43, .a=0x15, .x=0xb1, .y=0xba, .sp=0xf8, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x9d43, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x9d44, .a=0x15, .x=0xb1, .y=0xb9, .sp=0xf8, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x9d43, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x9d43, .value=0xdc, .type=IO_READ},
        {.addr=0x9d44, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01D5) {
    const struct CPU_State initial_cpu = {.pc=0xc973, .a=0x70, .x=0x78, .y=0xb8, .sp=0x9e, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xc973, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xc974, .a=0x70, .x=0x78, .y=0xb7, .sp=0x9e, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xc973, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xc973, .value=0xdc, .type=IO_READ},
        {.addr=0xc974, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01D6) {
    const struct CPU_State initial_cpu = {.pc=0xbb7b, .a=0xa9, .x=0x49, .y=0xc9, .sp=0x2d, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xbb7b, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xbb7c, .a=0xa9, .x=0x49, .y=0xc8, .sp=0x2d, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xbb7b, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xbb7b, .value=0xdc, .type=IO_READ},
        {.addr=0xbb7c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01D7) {
    const struct CPU_State initial_cpu = {.pc=0x9d6d, .a=0xa8, .x=0xc8, .y=0xac, .sp=0x8d, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x9d6d, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x9d6e, .a=0xa8, .x=0xc8, .y=0xab, .sp=0x8d, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x9d6d, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x9d6d, .value=0xdc, .type=IO_READ},
        {.addr=0x9d6e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01D8) {
    const struct CPU_State initial_cpu = {.pc=0xfd3f, .a=0x8c, .x=0x56, .y=0x30, .sp=0x2f, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xfd3f, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xfd40, .a=0x8c, .x=0x56, .y=0x2f, .sp=0x2f, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xfd3f, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xfd3f, .value=0xdc, .type=IO_READ},
        {.addr=0xfd40, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01D9) {
    const struct CPU_State initial_cpu = {.pc=0x021c, .a=0xac, .x=0xed, .y=0xcd, .sp=0xa1, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x021c, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x021d, .a=0xac, .x=0xed, .y=0xcc, .sp=0xa1, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x021c, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x021c, .value=0xdc, .type=IO_READ},
        {.addr=0x021d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01DA) {
    const struct CPU_State initial_cpu = {.pc=0x2e06, .a=0x3e, .x=0x01, .y=0x27, .sp=0x47, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x2e06, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x2e07, .a=0x3e, .x=0x01, .y=0x26, .sp=0x47, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x2e06, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x2e06, .value=0xdc, .type=IO_READ},
        {.addr=0x2e07, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01DB) {
    const struct CPU_State initial_cpu = {.pc=0xec32, .a=0x73, .x=0xc8, .y=0x82, .sp=0xa9, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xec32, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xec33, .a=0x73, .x=0xc8, .y=0x81, .sp=0xa9, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xec32, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xec32, .value=0xdc, .type=IO_READ},
        {.addr=0xec33, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x3943, .a=0x92, .x=0x7d, .y=0x36, .sp=0x3b, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x3943, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x3944, .a=0x92, .x=0x7d, .y=0x35, .sp=0x3b, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x3943, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x3943, .value=0xdc, .type=IO_READ},
        {.addr=0x3944, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x2597, .a=0x0d, .x=0x62, .y=0xb2, .sp=0x06, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x2597, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x2598, .a=0x0d, .x=0x62, .y=0xb1, .sp=0x06, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x2597, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x2597, .value=0xdc, .type=IO_READ},
        {.addr=0x2598, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x8f25, .a=0x76, .x=0xea, .y=0x29, .sp=0x1a, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x8f25, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8f26, .a=0x76, .x=0xea, .y=0x28, .sp=0x1a, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x8f25, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x8f25, .value=0xdc, .type=IO_READ},
        {.addr=0x8f26, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01DF) {
    const struct CPU_State initial_cpu = {.pc=0x821b, .a=0xe3, .x=0x74, .y=0x22, .sp=0x6a, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x821b, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x821c, .a=0xe3, .x=0x74, .y=0x21, .sp=0x6a, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x821b, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x821b, .value=0xdc, .type=IO_READ},
        {.addr=0x821c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01E0) {
    const struct CPU_State initial_cpu = {.pc=0xe788, .a=0x3b, .x=0x1c, .y=0xaf, .sp=0xf5, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xe788, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xe789, .a=0x3b, .x=0x1c, .y=0xae, .sp=0xf5, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xe788, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xe788, .value=0xdc, .type=IO_READ},
        {.addr=0xe789, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x71f9, .a=0x16, .x=0x86, .y=0x15, .sp=0x4f, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x71f9, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x71fa, .a=0x16, .x=0x86, .y=0x14, .sp=0x4f, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x71f9, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x71f9, .value=0xdc, .type=IO_READ},
        {.addr=0x71fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01E2) {
    const struct CPU_State initial_cpu = {.pc=0xc273, .a=0x66, .x=0xab, .y=0xcd, .sp=0x31, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xc273, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xc274, .a=0x66, .x=0xab, .y=0xcc, .sp=0x31, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xc273, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xc273, .value=0xdc, .type=IO_READ},
        {.addr=0xc274, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01E3) {
    const struct CPU_State initial_cpu = {.pc=0x04d7, .a=0xa6, .x=0xaf, .y=0xcb, .sp=0x1c, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x04d7, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x04d8, .a=0xa6, .x=0xaf, .y=0xca, .sp=0x1c, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x04d7, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x04d7, .value=0xdc, .type=IO_READ},
        {.addr=0x04d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01E4) {
    const struct CPU_State initial_cpu = {.pc=0xeb11, .a=0xc1, .x=0x6b, .y=0x5c, .sp=0x17, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xeb11, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xeb12, .a=0xc1, .x=0x6b, .y=0x5b, .sp=0x17, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xeb11, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xeb11, .value=0xdc, .type=IO_READ},
        {.addr=0xeb12, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01E5) {
    const struct CPU_State initial_cpu = {.pc=0x162f, .a=0x9b, .x=0xbd, .y=0xe9, .sp=0x8f, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x162f, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x1630, .a=0x9b, .x=0xbd, .y=0xe8, .sp=0x8f, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x162f, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x162f, .value=0xdc, .type=IO_READ},
        {.addr=0x1630, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01E6) {
    const struct CPU_State initial_cpu = {.pc=0xd359, .a=0xb7, .x=0xdf, .y=0x58, .sp=0xd8, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xd359, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xd35a, .a=0xb7, .x=0xdf, .y=0x57, .sp=0xd8, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xd359, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xd359, .value=0xdc, .type=IO_READ},
        {.addr=0xd35a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01E7) {
    const struct CPU_State initial_cpu = {.pc=0xde14, .a=0x09, .x=0xc3, .y=0xd7, .sp=0xd3, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xde14, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xde15, .a=0x09, .x=0xc3, .y=0xd6, .sp=0xd3, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xde14, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xde14, .value=0xdc, .type=IO_READ},
        {.addr=0xde15, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01E8) {
    const struct CPU_State initial_cpu = {.pc=0x1153, .a=0xd6, .x=0xf5, .y=0x84, .sp=0xa2, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x1153, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x1154, .a=0xd6, .x=0xf5, .y=0x83, .sp=0xa2, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x1153, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1153, .value=0xdc, .type=IO_READ},
        {.addr=0x1154, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01E9) {
    const struct CPU_State initial_cpu = {.pc=0x3da1, .a=0x7c, .x=0xf3, .y=0xa1, .sp=0x55, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x3da1, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x3da2, .a=0x7c, .x=0xf3, .y=0xa0, .sp=0x55, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x3da1, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x3da1, .value=0xdc, .type=IO_READ},
        {.addr=0x3da2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01EA) {
    const struct CPU_State initial_cpu = {.pc=0xd898, .a=0x6f, .x=0x3a, .y=0xac, .sp=0xc9, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xd898, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xd899, .a=0x6f, .x=0x3a, .y=0xab, .sp=0xc9, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xd898, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xd898, .value=0xdc, .type=IO_READ},
        {.addr=0xd899, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01EB) {
    const struct CPU_State initial_cpu = {.pc=0x2c39, .a=0x3c, .x=0x50, .y=0x9d, .sp=0x66, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x2c39, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x2c3a, .a=0x3c, .x=0x50, .y=0x9c, .sp=0x66, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x2c39, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x2c39, .value=0xdc, .type=IO_READ},
        {.addr=0x2c3a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01EC) {
    const struct CPU_State initial_cpu = {.pc=0x6d69, .a=0xb7, .x=0xf1, .y=0xe6, .sp=0xa8, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x6d69, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x6d6a, .a=0xb7, .x=0xf1, .y=0xe5, .sp=0xa8, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x6d69, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x6d69, .value=0xdc, .type=IO_READ},
        {.addr=0x6d6a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01ED) {
    const struct CPU_State initial_cpu = {.pc=0x167e, .a=0xc3, .x=0xda, .y=0xd1, .sp=0x99, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x167e, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x167f, .a=0xc3, .x=0xda, .y=0xd0, .sp=0x99, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x167e, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x167e, .value=0xdc, .type=IO_READ},
        {.addr=0x167f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01EE) {
    const struct CPU_State initial_cpu = {.pc=0x3158, .a=0x58, .x=0x47, .y=0xfd, .sp=0xaa, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x3158, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x3159, .a=0x58, .x=0x47, .y=0xfc, .sp=0xaa, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x3158, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x3158, .value=0xdc, .type=IO_READ},
        {.addr=0x3159, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01EF) {
    const struct CPU_State initial_cpu = {.pc=0x71d4, .a=0xde, .x=0xac, .y=0xa6, .sp=0x2d, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x71d4, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x71d5, .a=0xde, .x=0xac, .y=0xa5, .sp=0x2d, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x71d4, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x71d4, .value=0xdc, .type=IO_READ},
        {.addr=0x71d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01F0) {
    const struct CPU_State initial_cpu = {.pc=0xe8fe, .a=0x6e, .x=0x40, .y=0x18, .sp=0xf8, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xe8fe, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xe8ff, .a=0x6e, .x=0x40, .y=0x17, .sp=0xf8, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xe8fe, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xe8fe, .value=0xdc, .type=IO_READ},
        {.addr=0xe8ff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01F1) {
    const struct CPU_State initial_cpu = {.pc=0x8753, .a=0xae, .x=0xb2, .y=0xd3, .sp=0x7b, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x8753, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8754, .a=0xae, .x=0xb2, .y=0xd2, .sp=0x7b, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x8753, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x8753, .value=0xdc, .type=IO_READ},
        {.addr=0x8754, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01F2) {
    const struct CPU_State initial_cpu = {.pc=0x9360, .a=0x6a, .x=0xdf, .y=0x8b, .sp=0x64, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x9360, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x9361, .a=0x6a, .x=0xdf, .y=0x8a, .sp=0x64, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x9360, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x9360, .value=0xdc, .type=IO_READ},
        {.addr=0x9361, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01F3) {
    const struct CPU_State initial_cpu = {.pc=0xd382, .a=0x0c, .x=0x0c, .y=0x85, .sp=0xad, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xd382, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xd383, .a=0x0c, .x=0x0c, .y=0x84, .sp=0xad, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xd382, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xd382, .value=0xdc, .type=IO_READ},
        {.addr=0xd383, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01F4) {
    const struct CPU_State initial_cpu = {.pc=0x4655, .a=0x78, .x=0xc0, .y=0xe4, .sp=0xdf, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x4655, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x4656, .a=0x78, .x=0xc0, .y=0xe3, .sp=0xdf, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x4655, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x4655, .value=0xdc, .type=IO_READ},
        {.addr=0x4656, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01F5) {
    const struct CPU_State initial_cpu = {.pc=0x52b2, .a=0x0c, .x=0xdb, .y=0xe2, .sp=0x13, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x52b2, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x52b3, .a=0x0c, .x=0xdb, .y=0xe1, .sp=0x13, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x52b2, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x52b2, .value=0xdc, .type=IO_READ},
        {.addr=0x52b3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01F6) {
    const struct CPU_State initial_cpu = {.pc=0x62a0, .a=0x43, .x=0xf8, .y=0x54, .sp=0xf8, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x62a0, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x62a1, .a=0x43, .x=0xf8, .y=0x53, .sp=0xf8, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x62a0, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x62a0, .value=0xdc, .type=IO_READ},
        {.addr=0x62a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01F7) {
    const struct CPU_State initial_cpu = {.pc=0xa3c7, .a=0x9f, .x=0xf6, .y=0xd8, .sp=0x50, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xa3c7, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xa3c8, .a=0x9f, .x=0xf6, .y=0xd7, .sp=0x50, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xa3c7, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xa3c7, .value=0xdc, .type=IO_READ},
        {.addr=0xa3c8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01F8) {
    const struct CPU_State initial_cpu = {.pc=0x1059, .a=0xdd, .x=0x1e, .y=0x03, .sp=0x1a, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x1059, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x105a, .a=0xdd, .x=0x1e, .y=0x02, .sp=0x1a, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x1059, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1059, .value=0xdc, .type=IO_READ},
        {.addr=0x105a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x4d31, .a=0x47, .x=0x8a, .y=0xf2, .sp=0x54, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x4d31, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x4d32, .a=0x47, .x=0x8a, .y=0xf1, .sp=0x54, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x4d31, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x4d31, .value=0xdc, .type=IO_READ},
        {.addr=0x4d32, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01FA) {
    const struct CPU_State initial_cpu = {.pc=0x4cd2, .a=0x14, .x=0x45, .y=0x33, .sp=0x28, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x4cd2, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x4cd3, .a=0x14, .x=0x45, .y=0x32, .sp=0x28, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x4cd2, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x4cd2, .value=0xdc, .type=IO_READ},
        {.addr=0x4cd3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01FB) {
    const struct CPU_State initial_cpu = {.pc=0x3ad5, .a=0xcb, .x=0xac, .y=0xd5, .sp=0x17, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x3ad5, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x3ad6, .a=0xcb, .x=0xac, .y=0xd4, .sp=0x17, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x3ad5, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x3ad5, .value=0xdc, .type=IO_READ},
        {.addr=0x3ad6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01FC) {
    const struct CPU_State initial_cpu = {.pc=0x4728, .a=0xed, .x=0xd6, .y=0x2e, .sp=0x96, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x4728, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x4729, .a=0xed, .x=0xd6, .y=0x2d, .sp=0x96, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x4728, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x4728, .value=0xdc, .type=IO_READ},
        {.addr=0x4729, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01FD) {
    const struct CPU_State initial_cpu = {.pc=0xd6b5, .a=0xdf, .x=0x22, .y=0x86, .sp=0xa4, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xd6b5, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xd6b6, .a=0xdf, .x=0x22, .y=0x85, .sp=0xa4, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xd6b5, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xd6b5, .value=0xdc, .type=IO_READ},
        {.addr=0xd6b6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01FE) {
    const struct CPU_State initial_cpu = {.pc=0x0939, .a=0x42, .x=0xf4, .y=0x8f, .sp=0x38, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x0939, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x093a, .a=0x42, .x=0xf4, .y=0x8e, .sp=0x38, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x0939, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x0939, .value=0xdc, .type=IO_READ},
        {.addr=0x093a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x4ab1, .a=0xa0, .x=0xa4, .y=0x79, .sp=0x3f, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x4ab1, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x4ab2, .a=0xa0, .x=0xa4, .y=0x78, .sp=0x3f, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x4ab1, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x4ab1, .value=0xdc, .type=IO_READ},
        {.addr=0x4ab2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0200) {
    const struct CPU_State initial_cpu = {.pc=0xff0e, .a=0x77, .x=0xe9, .y=0x96, .sp=0x7d, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xff0e, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xff0f, .a=0x77, .x=0xe9, .y=0x95, .sp=0x7d, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xff0e, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xff0e, .value=0xdc, .type=IO_READ},
        {.addr=0xff0f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0201) {
    const struct CPU_State initial_cpu = {.pc=0x6b9d, .a=0x36, .x=0x80, .y=0x0c, .sp=0x2c, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x6b9d, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x6b9e, .a=0x36, .x=0x80, .y=0x0b, .sp=0x2c, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x6b9d, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x6b9d, .value=0xdc, .type=IO_READ},
        {.addr=0x6b9e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0202) {
    const struct CPU_State initial_cpu = {.pc=0x9b53, .a=0x17, .x=0x3a, .y=0x51, .sp=0x9a, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x9b53, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x9b54, .a=0x17, .x=0x3a, .y=0x50, .sp=0x9a, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x9b53, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x9b53, .value=0xdc, .type=IO_READ},
        {.addr=0x9b54, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0203) {
    const struct CPU_State initial_cpu = {.pc=0x932f, .a=0xa7, .x=0xee, .y=0x99, .sp=0x76, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x932f, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x9330, .a=0xa7, .x=0xee, .y=0x98, .sp=0x76, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x932f, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x932f, .value=0xdc, .type=IO_READ},
        {.addr=0x9330, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0204) {
    const struct CPU_State initial_cpu = {.pc=0x49ef, .a=0x20, .x=0xd7, .y=0x2c, .sp=0x96, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x49ef, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x49f0, .a=0x20, .x=0xd7, .y=0x2b, .sp=0x96, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x49ef, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x49ef, .value=0xdc, .type=IO_READ},
        {.addr=0x49f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0205) {
    const struct CPU_State initial_cpu = {.pc=0xf2f1, .a=0x1a, .x=0x1a, .y=0x64, .sp=0x69, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xf2f1, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xf2f2, .a=0x1a, .x=0x1a, .y=0x63, .sp=0x69, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xf2f1, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xf2f1, .value=0xdc, .type=IO_READ},
        {.addr=0xf2f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0206) {
    const struct CPU_State initial_cpu = {.pc=0x9563, .a=0x38, .x=0xc0, .y=0xe3, .sp=0x16, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x9563, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x9564, .a=0x38, .x=0xc0, .y=0xe2, .sp=0x16, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x9563, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x9563, .value=0xdc, .type=IO_READ},
        {.addr=0x9564, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0207) {
    const struct CPU_State initial_cpu = {.pc=0xd874, .a=0xb5, .x=0xd6, .y=0x4a, .sp=0xdb, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xd874, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xd875, .a=0xb5, .x=0xd6, .y=0x49, .sp=0xdb, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xd874, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xd874, .value=0xdc, .type=IO_READ},
        {.addr=0xd875, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0208) {
    const struct CPU_State initial_cpu = {.pc=0x0c64, .a=0xcf, .x=0x2e, .y=0xd6, .sp=0x28, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x0c64, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x0c65, .a=0xcf, .x=0x2e, .y=0xd5, .sp=0x28, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0c64, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x0c64, .value=0xdc, .type=IO_READ},
        {.addr=0x0c65, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0209) {
    const struct CPU_State initial_cpu = {.pc=0x71e4, .a=0x00, .x=0x43, .y=0x3e, .sp=0x4f, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x71e4, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x71e5, .a=0x00, .x=0x43, .y=0x3d, .sp=0x4f, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x71e4, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x71e4, .value=0xdc, .type=IO_READ},
        {.addr=0x71e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_020A) {
    const struct CPU_State initial_cpu = {.pc=0x8641, .a=0xde, .x=0x13, .y=0x1d, .sp=0x99, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x8641, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8642, .a=0xde, .x=0x13, .y=0x1c, .sp=0x99, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x8641, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x8641, .value=0xdc, .type=IO_READ},
        {.addr=0x8642, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_020B) {
    const struct CPU_State initial_cpu = {.pc=0xdb09, .a=0xd7, .x=0xa9, .y=0x51, .sp=0x01, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xdb09, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xdb0a, .a=0xd7, .x=0xa9, .y=0x50, .sp=0x01, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xdb09, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xdb09, .value=0xdc, .type=IO_READ},
        {.addr=0xdb0a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_020C) {
    const struct CPU_State initial_cpu = {.pc=0xf2bf, .a=0x52, .x=0xf5, .y=0x28, .sp=0x00, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xf2bf, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xf2c0, .a=0x52, .x=0xf5, .y=0x27, .sp=0x00, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xf2bf, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xf2bf, .value=0xdc, .type=IO_READ},
        {.addr=0xf2c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_020D) {
    const struct CPU_State initial_cpu = {.pc=0xcd32, .a=0xe0, .x=0x1f, .y=0xe1, .sp=0x6b, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xcd32, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xcd33, .a=0xe0, .x=0x1f, .y=0xe0, .sp=0x6b, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xcd32, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xcd32, .value=0xdc, .type=IO_READ},
        {.addr=0xcd33, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_020E) {
    const struct CPU_State initial_cpu = {.pc=0xf719, .a=0x00, .x=0xf1, .y=0x85, .sp=0xdc, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xf719, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xf71a, .a=0x00, .x=0xf1, .y=0x84, .sp=0xdc, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xf719, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xf719, .value=0xdc, .type=IO_READ},
        {.addr=0xf71a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_020F) {
    const struct CPU_State initial_cpu = {.pc=0xefca, .a=0x9f, .x=0x5f, .y=0x42, .sp=0xed, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xefca, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xefcb, .a=0x9f, .x=0x5f, .y=0x41, .sp=0xed, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xefca, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xefca, .value=0xdc, .type=IO_READ},
        {.addr=0xefcb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0210) {
    const struct CPU_State initial_cpu = {.pc=0x69e0, .a=0x46, .x=0x8f, .y=0x74, .sp=0x03, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x69e0, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x69e1, .a=0x46, .x=0x8f, .y=0x73, .sp=0x03, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x69e0, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x69e0, .value=0xdc, .type=IO_READ},
        {.addr=0x69e1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0211) {
    const struct CPU_State initial_cpu = {.pc=0x0cd3, .a=0x9d, .x=0xfa, .y=0x8e, .sp=0xcb, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x0cd3, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x0cd4, .a=0x9d, .x=0xfa, .y=0x8d, .sp=0xcb, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0cd3, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x0cd3, .value=0xdc, .type=IO_READ},
        {.addr=0x0cd4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0212) {
    const struct CPU_State initial_cpu = {.pc=0x1291, .a=0x75, .x=0xb9, .y=0x52, .sp=0xfd, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x1291, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x1292, .a=0x75, .x=0xb9, .y=0x51, .sp=0xfd, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x1291, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1291, .value=0xdc, .type=IO_READ},
        {.addr=0x1292, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0213) {
    const struct CPU_State initial_cpu = {.pc=0xf119, .a=0xaf, .x=0x1e, .y=0x55, .sp=0x84, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xf119, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xf11a, .a=0xaf, .x=0x1e, .y=0x54, .sp=0x84, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xf119, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xf119, .value=0xdc, .type=IO_READ},
        {.addr=0xf11a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0214) {
    const struct CPU_State initial_cpu = {.pc=0xd9bc, .a=0x0a, .x=0xaa, .y=0x11, .sp=0x68, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xd9bc, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xd9bd, .a=0x0a, .x=0xaa, .y=0x10, .sp=0x68, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xd9bc, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xd9bc, .value=0xdc, .type=IO_READ},
        {.addr=0xd9bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0215) {
    const struct CPU_State initial_cpu = {.pc=0xa456, .a=0x29, .x=0x23, .y=0x32, .sp=0x5f, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xa456, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xa457, .a=0x29, .x=0x23, .y=0x31, .sp=0x5f, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xa456, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xa456, .value=0xdc, .type=IO_READ},
        {.addr=0xa457, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0216) {
    const struct CPU_State initial_cpu = {.pc=0xb7b2, .a=0x53, .x=0x87, .y=0xa3, .sp=0xbf, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xb7b2, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xb7b3, .a=0x53, .x=0x87, .y=0xa2, .sp=0xbf, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xb7b2, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xb7b2, .value=0xdc, .type=IO_READ},
        {.addr=0xb7b3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0217) {
    const struct CPU_State initial_cpu = {.pc=0xa3f7, .a=0x59, .x=0xe3, .y=0x9c, .sp=0x5b, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xa3f7, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xa3f8, .a=0x59, .x=0xe3, .y=0x9b, .sp=0x5b, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xa3f7, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xa3f7, .value=0xdc, .type=IO_READ},
        {.addr=0xa3f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0218) {
    const struct CPU_State initial_cpu = {.pc=0x5071, .a=0xe2, .x=0xf0, .y=0xda, .sp=0xa6, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x5071, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x5072, .a=0xe2, .x=0xf0, .y=0xd9, .sp=0xa6, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x5071, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x5071, .value=0xdc, .type=IO_READ},
        {.addr=0x5072, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0219) {
    const struct CPU_State initial_cpu = {.pc=0x5899, .a=0x2f, .x=0x5b, .y=0xe0, .sp=0xc5, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x5899, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x589a, .a=0x2f, .x=0x5b, .y=0xdf, .sp=0xc5, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x5899, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x5899, .value=0xdc, .type=IO_READ},
        {.addr=0x589a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_021A) {
    const struct CPU_State initial_cpu = {.pc=0x2b4a, .a=0x08, .x=0x4e, .y=0x10, .sp=0xe5, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x2b4a, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x2b4b, .a=0x08, .x=0x4e, .y=0x0f, .sp=0xe5, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x2b4a, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x2b4a, .value=0xdc, .type=IO_READ},
        {.addr=0x2b4b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_021B) {
    const struct CPU_State initial_cpu = {.pc=0xd9ae, .a=0x7a, .x=0x69, .y=0xec, .sp=0x6f, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xd9ae, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xd9af, .a=0x7a, .x=0x69, .y=0xeb, .sp=0x6f, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xd9ae, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xd9ae, .value=0xdc, .type=IO_READ},
        {.addr=0xd9af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_021C) {
    const struct CPU_State initial_cpu = {.pc=0x56f6, .a=0xa0, .x=0x30, .y=0xf0, .sp=0x24, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x56f6, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x56f7, .a=0xa0, .x=0x30, .y=0xef, .sp=0x24, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x56f6, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x56f6, .value=0xdc, .type=IO_READ},
        {.addr=0x56f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_021D) {
    const struct CPU_State initial_cpu = {.pc=0x1103, .a=0x75, .x=0x7e, .y=0x89, .sp=0xef, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x1103, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x1104, .a=0x75, .x=0x7e, .y=0x88, .sp=0xef, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x1103, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1103, .value=0xdc, .type=IO_READ},
        {.addr=0x1104, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_021E) {
    const struct CPU_State initial_cpu = {.pc=0x72ea, .a=0xf1, .x=0xb4, .y=0x9a, .sp=0xc5, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x72ea, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x72eb, .a=0xf1, .x=0xb4, .y=0x99, .sp=0xc5, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x72ea, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x72ea, .value=0xdc, .type=IO_READ},
        {.addr=0x72eb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_021F) {
    const struct CPU_State initial_cpu = {.pc=0xea87, .a=0xa7, .x=0x64, .y=0x0d, .sp=0x60, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xea87, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xea88, .a=0xa7, .x=0x64, .y=0x0c, .sp=0x60, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xea87, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xea87, .value=0xdc, .type=IO_READ},
        {.addr=0xea88, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0220) {
    const struct CPU_State initial_cpu = {.pc=0x4262, .a=0x00, .x=0xb3, .y=0x42, .sp=0x5e, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x4262, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x4263, .a=0x00, .x=0xb3, .y=0x41, .sp=0x5e, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x4262, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x4262, .value=0xdc, .type=IO_READ},
        {.addr=0x4263, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0221) {
    const struct CPU_State initial_cpu = {.pc=0x73bf, .a=0xc1, .x=0x19, .y=0x01, .sp=0x85, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x73bf, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x73c0, .a=0xc1, .x=0x19, .y=0x00, .sp=0x85, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x73bf, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x73bf, .value=0xdc, .type=IO_READ},
        {.addr=0x73c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0222) {
    const struct CPU_State initial_cpu = {.pc=0x56c1, .a=0xec, .x=0xd2, .y=0xfc, .sp=0xa1, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x56c1, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x56c2, .a=0xec, .x=0xd2, .y=0xfb, .sp=0xa1, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x56c1, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x56c1, .value=0xdc, .type=IO_READ},
        {.addr=0x56c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0223) {
    const struct CPU_State initial_cpu = {.pc=0x2993, .a=0x63, .x=0xb8, .y=0x4a, .sp=0x5e, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x2993, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x2994, .a=0x63, .x=0xb8, .y=0x49, .sp=0x5e, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x2993, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x2993, .value=0xdc, .type=IO_READ},
        {.addr=0x2994, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0224) {
    const struct CPU_State initial_cpu = {.pc=0xa3c9, .a=0xf7, .x=0xb9, .y=0x90, .sp=0x5b, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xa3c9, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xa3ca, .a=0xf7, .x=0xb9, .y=0x8f, .sp=0x5b, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xa3c9, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xa3c9, .value=0xdc, .type=IO_READ},
        {.addr=0xa3ca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0225) {
    const struct CPU_State initial_cpu = {.pc=0x3122, .a=0x6d, .x=0x2b, .y=0x18, .sp=0xe8, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x3122, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x3123, .a=0x6d, .x=0x2b, .y=0x17, .sp=0xe8, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x3122, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x3122, .value=0xdc, .type=IO_READ},
        {.addr=0x3123, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0226) {
    const struct CPU_State initial_cpu = {.pc=0x8c8b, .a=0x3f, .x=0x62, .y=0xc4, .sp=0xa2, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x8c8b, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8c8c, .a=0x3f, .x=0x62, .y=0xc3, .sp=0xa2, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x8c8b, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x8c8b, .value=0xdc, .type=IO_READ},
        {.addr=0x8c8c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0227) {
    const struct CPU_State initial_cpu = {.pc=0x540c, .a=0x9b, .x=0x39, .y=0x7f, .sp=0xa9, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x540c, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x540d, .a=0x9b, .x=0x39, .y=0x7e, .sp=0xa9, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x540c, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x540c, .value=0xdc, .type=IO_READ},
        {.addr=0x540d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0228) {
    const struct CPU_State initial_cpu = {.pc=0x0509, .a=0xde, .x=0xc9, .y=0x54, .sp=0x83, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x0509, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x050a, .a=0xde, .x=0xc9, .y=0x53, .sp=0x83, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0509, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x0509, .value=0xdc, .type=IO_READ},
        {.addr=0x050a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0229) {
    const struct CPU_State initial_cpu = {.pc=0x31e3, .a=0xff, .x=0xed, .y=0x13, .sp=0xd9, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x31e3, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x31e4, .a=0xff, .x=0xed, .y=0x12, .sp=0xd9, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x31e3, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x31e3, .value=0xdc, .type=IO_READ},
        {.addr=0x31e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_022A) {
    const struct CPU_State initial_cpu = {.pc=0x310f, .a=0xf9, .x=0x74, .y=0xfe, .sp=0x6e, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x310f, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x3110, .a=0xf9, .x=0x74, .y=0xfd, .sp=0x6e, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x310f, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x310f, .value=0xdc, .type=IO_READ},
        {.addr=0x3110, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_022B) {
    const struct CPU_State initial_cpu = {.pc=0x46d7, .a=0x37, .x=0x59, .y=0x51, .sp=0x9e, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x46d7, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x46d8, .a=0x37, .x=0x59, .y=0x50, .sp=0x9e, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x46d7, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x46d7, .value=0xdc, .type=IO_READ},
        {.addr=0x46d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_022C) {
    const struct CPU_State initial_cpu = {.pc=0x4244, .a=0x10, .x=0xf8, .y=0x2e, .sp=0x27, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x4244, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x4245, .a=0x10, .x=0xf8, .y=0x2d, .sp=0x27, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x4244, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x4244, .value=0xdc, .type=IO_READ},
        {.addr=0x4245, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_022D) {
    const struct CPU_State initial_cpu = {.pc=0xe57d, .a=0xfc, .x=0x4d, .y=0x56, .sp=0x70, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xe57d, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xe57e, .a=0xfc, .x=0x4d, .y=0x55, .sp=0x70, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xe57d, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xe57d, .value=0xdc, .type=IO_READ},
        {.addr=0xe57e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_022E) {
    const struct CPU_State initial_cpu = {.pc=0x959e, .a=0x4f, .x=0x52, .y=0x50, .sp=0xf7, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x959e, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x959f, .a=0x4f, .x=0x52, .y=0x4f, .sp=0xf7, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x959e, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x959e, .value=0xdc, .type=IO_READ},
        {.addr=0x959f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_022F) {
    const struct CPU_State initial_cpu = {.pc=0x0bf3, .a=0x8f, .x=0x85, .y=0x8a, .sp=0x6d, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x0bf3, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x0bf4, .a=0x8f, .x=0x85, .y=0x89, .sp=0x6d, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x0bf3, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x0bf3, .value=0xdc, .type=IO_READ},
        {.addr=0x0bf4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0230) {
    const struct CPU_State initial_cpu = {.pc=0xa079, .a=0xda, .x=0xf4, .y=0xea, .sp=0x69, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xa079, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xa07a, .a=0xda, .x=0xf4, .y=0xe9, .sp=0x69, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xa079, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xa079, .value=0xdc, .type=IO_READ},
        {.addr=0xa07a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0231) {
    const struct CPU_State initial_cpu = {.pc=0x49ac, .a=0xd9, .x=0x91, .y=0xc3, .sp=0x71, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x49ac, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x49ad, .a=0xd9, .x=0x91, .y=0xc2, .sp=0x71, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x49ac, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x49ac, .value=0xdc, .type=IO_READ},
        {.addr=0x49ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0232) {
    const struct CPU_State initial_cpu = {.pc=0xc0dd, .a=0x8b, .x=0x86, .y=0xe4, .sp=0x07, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xc0dd, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xc0de, .a=0x8b, .x=0x86, .y=0xe3, .sp=0x07, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xc0dd, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xc0dd, .value=0xdc, .type=IO_READ},
        {.addr=0xc0de, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0233) {
    const struct CPU_State initial_cpu = {.pc=0xa0b9, .a=0x41, .x=0xff, .y=0xd6, .sp=0x10, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xa0b9, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xa0ba, .a=0x41, .x=0xff, .y=0xd5, .sp=0x10, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xa0b9, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xa0b9, .value=0xdc, .type=IO_READ},
        {.addr=0xa0ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0234) {
    const struct CPU_State initial_cpu = {.pc=0xa7fb, .a=0x1f, .x=0x55, .y=0x2a, .sp=0xc0, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xa7fb, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xa7fc, .a=0x1f, .x=0x55, .y=0x29, .sp=0xc0, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xa7fb, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xa7fb, .value=0xdc, .type=IO_READ},
        {.addr=0xa7fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0235) {
    const struct CPU_State initial_cpu = {.pc=0x5041, .a=0x0d, .x=0x79, .y=0xce, .sp=0x9a, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x5041, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x5042, .a=0x0d, .x=0x79, .y=0xcd, .sp=0x9a, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x5041, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x5041, .value=0xdc, .type=IO_READ},
        {.addr=0x5042, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0236) {
    const struct CPU_State initial_cpu = {.pc=0xba5d, .a=0x46, .x=0xa5, .y=0xd1, .sp=0xf7, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xba5d, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xba5e, .a=0x46, .x=0xa5, .y=0xd0, .sp=0xf7, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xba5d, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xba5d, .value=0xdc, .type=IO_READ},
        {.addr=0xba5e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0237) {
    const struct CPU_State initial_cpu = {.pc=0x3d55, .a=0x84, .x=0xe2, .y=0x6d, .sp=0xdb, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x3d55, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x3d56, .a=0x84, .x=0xe2, .y=0x6c, .sp=0xdb, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x3d55, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x3d55, .value=0xdc, .type=IO_READ},
        {.addr=0x3d56, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0238) {
    const struct CPU_State initial_cpu = {.pc=0x1b8f, .a=0x47, .x=0x5c, .y=0x60, .sp=0x75, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x1b8f, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x1b90, .a=0x47, .x=0x5c, .y=0x5f, .sp=0x75, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x1b8f, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1b8f, .value=0xdc, .type=IO_READ},
        {.addr=0x1b90, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0239) {
    const struct CPU_State initial_cpu = {.pc=0x20b0, .a=0x2f, .x=0xde, .y=0x6c, .sp=0x80, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x20b0, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x20b1, .a=0x2f, .x=0xde, .y=0x6b, .sp=0x80, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x20b0, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x20b0, .value=0xdc, .type=IO_READ},
        {.addr=0x20b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_023A) {
    const struct CPU_State initial_cpu = {.pc=0xfeb9, .a=0xbe, .x=0xf5, .y=0xb2, .sp=0x3e, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xfeb9, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xfeba, .a=0xbe, .x=0xf5, .y=0xb1, .sp=0x3e, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xfeb9, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xfeb9, .value=0xdc, .type=IO_READ},
        {.addr=0xfeba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_023B) {
    const struct CPU_State initial_cpu = {.pc=0xb1f3, .a=0x84, .x=0x18, .y=0x49, .sp=0x67, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xb1f3, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xb1f4, .a=0x84, .x=0x18, .y=0x48, .sp=0x67, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xb1f3, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xb1f3, .value=0xdc, .type=IO_READ},
        {.addr=0xb1f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_023C) {
    const struct CPU_State initial_cpu = {.pc=0x30aa, .a=0xc1, .x=0xa0, .y=0x64, .sp=0xbb, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x30aa, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x30ab, .a=0xc1, .x=0xa0, .y=0x63, .sp=0xbb, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x30aa, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x30aa, .value=0xdc, .type=IO_READ},
        {.addr=0x30ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_023D) {
    const struct CPU_State initial_cpu = {.pc=0xf053, .a=0xdd, .x=0x6d, .y=0xcd, .sp=0xd6, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xf053, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xf054, .a=0xdd, .x=0x6d, .y=0xcc, .sp=0xd6, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xf053, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xf053, .value=0xdc, .type=IO_READ},
        {.addr=0xf054, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_023E) {
    const struct CPU_State initial_cpu = {.pc=0x4591, .a=0xab, .x=0x0a, .y=0xb9, .sp=0x76, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x4591, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x4592, .a=0xab, .x=0x0a, .y=0xb8, .sp=0x76, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x4591, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x4591, .value=0xdc, .type=IO_READ},
        {.addr=0x4592, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_023F) {
    const struct CPU_State initial_cpu = {.pc=0x6321, .a=0xf7, .x=0xa9, .y=0x44, .sp=0xf8, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x6321, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x6322, .a=0xf7, .x=0xa9, .y=0x43, .sp=0xf8, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x6321, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x6321, .value=0xdc, .type=IO_READ},
        {.addr=0x6322, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0240) {
    const struct CPU_State initial_cpu = {.pc=0xdd87, .a=0x7b, .x=0x4b, .y=0x0d, .sp=0x54, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xdd87, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xdd88, .a=0x7b, .x=0x4b, .y=0x0c, .sp=0x54, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xdd87, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xdd87, .value=0xdc, .type=IO_READ},
        {.addr=0xdd88, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0241) {
    const struct CPU_State initial_cpu = {.pc=0x91f5, .a=0x45, .x=0xc9, .y=0x11, .sp=0x20, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x91f5, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x91f6, .a=0x45, .x=0xc9, .y=0x10, .sp=0x20, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x91f5, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x91f5, .value=0xdc, .type=IO_READ},
        {.addr=0x91f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0242) {
    const struct CPU_State initial_cpu = {.pc=0x8ec6, .a=0x02, .x=0xdd, .y=0xd3, .sp=0x4d, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x8ec6, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8ec7, .a=0x02, .x=0xdd, .y=0xd2, .sp=0x4d, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x8ec6, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x8ec6, .value=0xdc, .type=IO_READ},
        {.addr=0x8ec7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0243) {
    const struct CPU_State initial_cpu = {.pc=0xb0f4, .a=0x81, .x=0x09, .y=0x92, .sp=0x19, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xb0f4, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xb0f5, .a=0x81, .x=0x09, .y=0x91, .sp=0x19, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xb0f4, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xb0f4, .value=0xdc, .type=IO_READ},
        {.addr=0xb0f5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0244) {
    const struct CPU_State initial_cpu = {.pc=0xdbf9, .a=0x60, .x=0x89, .y=0xc6, .sp=0x12, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xdbf9, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xdbfa, .a=0x60, .x=0x89, .y=0xc5, .sp=0x12, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xdbf9, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xdbf9, .value=0xdc, .type=IO_READ},
        {.addr=0xdbfa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0245) {
    const struct CPU_State initial_cpu = {.pc=0xd88b, .a=0xb6, .x=0x88, .y=0xad, .sp=0x18, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xd88b, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xd88c, .a=0xb6, .x=0x88, .y=0xac, .sp=0x18, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xd88b, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xd88b, .value=0xdc, .type=IO_READ},
        {.addr=0xd88c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0246) {
    const struct CPU_State initial_cpu = {.pc=0x8c67, .a=0x7e, .x=0x25, .y=0xd0, .sp=0xec, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x8c67, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8c68, .a=0x7e, .x=0x25, .y=0xcf, .sp=0xec, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x8c67, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x8c67, .value=0xdc, .type=IO_READ},
        {.addr=0x8c68, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0247) {
    const struct CPU_State initial_cpu = {.pc=0x5734, .a=0x8d, .x=0xa1, .y=0xce, .sp=0x8f, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x5734, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x5735, .a=0x8d, .x=0xa1, .y=0xcd, .sp=0x8f, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x5734, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x5734, .value=0xdc, .type=IO_READ},
        {.addr=0x5735, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0248) {
    const struct CPU_State initial_cpu = {.pc=0x50a1, .a=0xaa, .x=0x08, .y=0x68, .sp=0x80, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x50a1, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x50a2, .a=0xaa, .x=0x08, .y=0x67, .sp=0x80, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x50a1, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x50a1, .value=0xdc, .type=IO_READ},
        {.addr=0x50a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0249) {
    const struct CPU_State initial_cpu = {.pc=0xdaef, .a=0x7a, .x=0x7c, .y=0x5c, .sp=0x00, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xdaef, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xdaf0, .a=0x7a, .x=0x7c, .y=0x5b, .sp=0x00, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xdaef, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xdaef, .value=0xdc, .type=IO_READ},
        {.addr=0xdaf0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_024A) {
    const struct CPU_State initial_cpu = {.pc=0xc1ea, .a=0x77, .x=0x19, .y=0x9e, .sp=0x9c, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xc1ea, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xc1eb, .a=0x77, .x=0x19, .y=0x9d, .sp=0x9c, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xc1ea, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xc1ea, .value=0xdc, .type=IO_READ},
        {.addr=0xc1eb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_024B) {
    const struct CPU_State initial_cpu = {.pc=0x6774, .a=0x7d, .x=0xb0, .y=0xe6, .sp=0xab, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x6774, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x6775, .a=0x7d, .x=0xb0, .y=0xe5, .sp=0xab, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x6774, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x6774, .value=0xdc, .type=IO_READ},
        {.addr=0x6775, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_024C) {
    const struct CPU_State initial_cpu = {.pc=0x2587, .a=0x10, .x=0x92, .y=0xe3, .sp=0xe1, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x2587, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x2588, .a=0x10, .x=0x92, .y=0xe2, .sp=0xe1, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x2587, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x2587, .value=0xdc, .type=IO_READ},
        {.addr=0x2588, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_024D) {
    const struct CPU_State initial_cpu = {.pc=0x03e5, .a=0x8d, .x=0xdd, .y=0xc4, .sp=0xc1, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x03e5, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x03e6, .a=0x8d, .x=0xdd, .y=0xc3, .sp=0xc1, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x03e5, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x03e5, .value=0xdc, .type=IO_READ},
        {.addr=0x03e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_024E) {
    const struct CPU_State initial_cpu = {.pc=0x4c55, .a=0x24, .x=0xb9, .y=0x9c, .sp=0x18, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x4c55, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x4c56, .a=0x24, .x=0xb9, .y=0x9b, .sp=0x18, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x4c55, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x4c55, .value=0xdc, .type=IO_READ},
        {.addr=0x4c56, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_024F) {
    const struct CPU_State initial_cpu = {.pc=0x0feb, .a=0xb2, .x=0x50, .y=0xe1, .sp=0x27, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x0feb, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x0fec, .a=0xb2, .x=0x50, .y=0xe0, .sp=0x27, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0feb, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x0feb, .value=0xdc, .type=IO_READ},
        {.addr=0x0fec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0250) {
    const struct CPU_State initial_cpu = {.pc=0x4bdd, .a=0x1e, .x=0xd5, .y=0x07, .sp=0x5f, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x4bdd, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x4bde, .a=0x1e, .x=0xd5, .y=0x06, .sp=0x5f, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x4bdd, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x4bdd, .value=0xdc, .type=IO_READ},
        {.addr=0x4bde, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0251) {
    const struct CPU_State initial_cpu = {.pc=0xf68c, .a=0x4c, .x=0x09, .y=0x9e, .sp=0xfc, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xf68c, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xf68d, .a=0x4c, .x=0x09, .y=0x9d, .sp=0xfc, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xf68c, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xf68c, .value=0xdc, .type=IO_READ},
        {.addr=0xf68d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0252) {
    const struct CPU_State initial_cpu = {.pc=0xcadb, .a=0x05, .x=0x54, .y=0xbf, .sp=0x20, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xcadb, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xcadc, .a=0x05, .x=0x54, .y=0xbe, .sp=0x20, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xcadb, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xcadb, .value=0xdc, .type=IO_READ},
        {.addr=0xcadc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0253) {
    const struct CPU_State initial_cpu = {.pc=0x6e77, .a=0x76, .x=0x52, .y=0xf5, .sp=0x4c, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x6e77, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x6e78, .a=0x76, .x=0x52, .y=0xf4, .sp=0x4c, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x6e77, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x6e77, .value=0xdc, .type=IO_READ},
        {.addr=0x6e78, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0254) {
    const struct CPU_State initial_cpu = {.pc=0x411f, .a=0xbe, .x=0x04, .y=0xf1, .sp=0xdc, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x411f, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x4120, .a=0xbe, .x=0x04, .y=0xf0, .sp=0xdc, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x411f, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x411f, .value=0xdc, .type=IO_READ},
        {.addr=0x4120, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0255) {
    const struct CPU_State initial_cpu = {.pc=0xd9bb, .a=0x1e, .x=0x99, .y=0x0c, .sp=0xe2, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xd9bb, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xd9bc, .a=0x1e, .x=0x99, .y=0x0b, .sp=0xe2, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xd9bb, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xd9bb, .value=0xdc, .type=IO_READ},
        {.addr=0xd9bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0256) {
    const struct CPU_State initial_cpu = {.pc=0xa207, .a=0x2d, .x=0xb5, .y=0x77, .sp=0xad, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xa207, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xa208, .a=0x2d, .x=0xb5, .y=0x76, .sp=0xad, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xa207, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xa207, .value=0xdc, .type=IO_READ},
        {.addr=0xa208, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0257) {
    const struct CPU_State initial_cpu = {.pc=0x0f94, .a=0x94, .x=0x1e, .y=0xb6, .sp=0x34, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x0f94, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x0f95, .a=0x94, .x=0x1e, .y=0xb5, .sp=0x34, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x0f94, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x0f94, .value=0xdc, .type=IO_READ},
        {.addr=0x0f95, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0258) {
    const struct CPU_State initial_cpu = {.pc=0x9759, .a=0xcd, .x=0xfa, .y=0x58, .sp=0x2a, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x9759, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x975a, .a=0xcd, .x=0xfa, .y=0x57, .sp=0x2a, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x9759, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x9759, .value=0xdc, .type=IO_READ},
        {.addr=0x975a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0259) {
    const struct CPU_State initial_cpu = {.pc=0x554a, .a=0xb7, .x=0xe1, .y=0x72, .sp=0xea, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x554a, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x554b, .a=0xb7, .x=0xe1, .y=0x71, .sp=0xea, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x554a, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x554a, .value=0xdc, .type=IO_READ},
        {.addr=0x554b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_025A) {
    const struct CPU_State initial_cpu = {.pc=0x7dd0, .a=0xec, .x=0x36, .y=0x0a, .sp=0x6d, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x7dd0, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x7dd1, .a=0xec, .x=0x36, .y=0x09, .sp=0x6d, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x7dd0, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x7dd0, .value=0xdc, .type=IO_READ},
        {.addr=0x7dd1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_025B) {
    const struct CPU_State initial_cpu = {.pc=0x3a00, .a=0x5b, .x=0xe4, .y=0xb6, .sp=0x3e, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x3a00, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x3a01, .a=0x5b, .x=0xe4, .y=0xb5, .sp=0x3e, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x3a00, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x3a00, .value=0xdc, .type=IO_READ},
        {.addr=0x3a01, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_025C) {
    const struct CPU_State initial_cpu = {.pc=0x0e0b, .a=0x01, .x=0x40, .y=0xca, .sp=0x6f, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x0e0b, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x0e0c, .a=0x01, .x=0x40, .y=0xc9, .sp=0x6f, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0e0b, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x0e0b, .value=0xdc, .type=IO_READ},
        {.addr=0x0e0c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_025D) {
    const struct CPU_State initial_cpu = {.pc=0x1651, .a=0x43, .x=0x97, .y=0x29, .sp=0x81, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x1651, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x1652, .a=0x43, .x=0x97, .y=0x28, .sp=0x81, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x1651, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1651, .value=0xdc, .type=IO_READ},
        {.addr=0x1652, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_025E) {
    const struct CPU_State initial_cpu = {.pc=0xc375, .a=0x13, .x=0xdd, .y=0x20, .sp=0x21, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xc375, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xc376, .a=0x13, .x=0xdd, .y=0x1f, .sp=0x21, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xc375, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xc375, .value=0xdc, .type=IO_READ},
        {.addr=0xc376, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_025F) {
    const struct CPU_State initial_cpu = {.pc=0x28da, .a=0xb8, .x=0xa1, .y=0x23, .sp=0x64, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x28da, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x28db, .a=0xb8, .x=0xa1, .y=0x22, .sp=0x64, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x28da, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x28da, .value=0xdc, .type=IO_READ},
        {.addr=0x28db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0260) {
    const struct CPU_State initial_cpu = {.pc=0xc754, .a=0xbd, .x=0x9d, .y=0x46, .sp=0x85, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xc754, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xc755, .a=0xbd, .x=0x9d, .y=0x45, .sp=0x85, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xc754, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xc754, .value=0xdc, .type=IO_READ},
        {.addr=0xc755, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0261) {
    const struct CPU_State initial_cpu = {.pc=0xbe00, .a=0x4a, .x=0x00, .y=0xda, .sp=0x1d, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xbe00, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xbe01, .a=0x4a, .x=0x00, .y=0xd9, .sp=0x1d, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xbe00, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xbe00, .value=0xdc, .type=IO_READ},
        {.addr=0xbe01, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0262) {
    const struct CPU_State initial_cpu = {.pc=0x8d04, .a=0xc8, .x=0x35, .y=0x0d, .sp=0x7f, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x8d04, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8d05, .a=0xc8, .x=0x35, .y=0x0c, .sp=0x7f, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x8d04, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x8d04, .value=0xdc, .type=IO_READ},
        {.addr=0x8d05, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0263) {
    const struct CPU_State initial_cpu = {.pc=0x5f8b, .a=0x2f, .x=0x51, .y=0x3b, .sp=0x4b, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x5f8b, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x5f8c, .a=0x2f, .x=0x51, .y=0x3a, .sp=0x4b, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x5f8b, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x5f8b, .value=0xdc, .type=IO_READ},
        {.addr=0x5f8c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0264) {
    const struct CPU_State initial_cpu = {.pc=0x6f37, .a=0x0a, .x=0x61, .y=0x82, .sp=0xb9, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x6f37, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x6f38, .a=0x0a, .x=0x61, .y=0x81, .sp=0xb9, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x6f37, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x6f37, .value=0xdc, .type=IO_READ},
        {.addr=0x6f38, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0265) {
    const struct CPU_State initial_cpu = {.pc=0x13b7, .a=0x11, .x=0x5d, .y=0x19, .sp=0xed, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x13b7, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x13b8, .a=0x11, .x=0x5d, .y=0x18, .sp=0xed, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x13b7, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x13b7, .value=0xdc, .type=IO_READ},
        {.addr=0x13b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0266) {
    const struct CPU_State initial_cpu = {.pc=0x9039, .a=0xcb, .x=0x36, .y=0x1d, .sp=0xcd, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x9039, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x903a, .a=0xcb, .x=0x36, .y=0x1c, .sp=0xcd, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x9039, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x9039, .value=0xdc, .type=IO_READ},
        {.addr=0x903a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0267) {
    const struct CPU_State initial_cpu = {.pc=0x2bec, .a=0x21, .x=0xbc, .y=0x34, .sp=0xe8, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x2bec, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x2bed, .a=0x21, .x=0xbc, .y=0x33, .sp=0xe8, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x2bec, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x2bec, .value=0xdc, .type=IO_READ},
        {.addr=0x2bed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0268) {
    const struct CPU_State initial_cpu = {.pc=0xdcb2, .a=0xb9, .x=0x59, .y=0xbf, .sp=0x99, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xdcb2, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xdcb3, .a=0xb9, .x=0x59, .y=0xbe, .sp=0x99, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xdcb2, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xdcb2, .value=0xdc, .type=IO_READ},
        {.addr=0xdcb3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0269) {
    const struct CPU_State initial_cpu = {.pc=0x7b13, .a=0x94, .x=0x73, .y=0x89, .sp=0x5c, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x7b13, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x7b14, .a=0x94, .x=0x73, .y=0x88, .sp=0x5c, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x7b13, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x7b13, .value=0xdc, .type=IO_READ},
        {.addr=0x7b14, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_026A) {
    const struct CPU_State initial_cpu = {.pc=0xf677, .a=0x77, .x=0xf3, .y=0xba, .sp=0x64, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xf677, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xf678, .a=0x77, .x=0xf3, .y=0xb9, .sp=0x64, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xf677, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xf677, .value=0xdc, .type=IO_READ},
        {.addr=0xf678, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_026B) {
    const struct CPU_State initial_cpu = {.pc=0xd9d2, .a=0xae, .x=0x1e, .y=0x93, .sp=0x01, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xd9d2, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xd9d3, .a=0xae, .x=0x1e, .y=0x92, .sp=0x01, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xd9d2, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xd9d2, .value=0xdc, .type=IO_READ},
        {.addr=0xd9d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_026C) {
    const struct CPU_State initial_cpu = {.pc=0x4ef7, .a=0x17, .x=0x5f, .y=0xbb, .sp=0x98, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x4ef7, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x4ef8, .a=0x17, .x=0x5f, .y=0xba, .sp=0x98, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x4ef7, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x4ef7, .value=0xdc, .type=IO_READ},
        {.addr=0x4ef8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_026D) {
    const struct CPU_State initial_cpu = {.pc=0x4cdb, .a=0x6c, .x=0x48, .y=0x7a, .sp=0x50, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x4cdb, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x4cdc, .a=0x6c, .x=0x48, .y=0x79, .sp=0x50, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x4cdb, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x4cdb, .value=0xdc, .type=IO_READ},
        {.addr=0x4cdc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_026E) {
    const struct CPU_State initial_cpu = {.pc=0x9c4b, .a=0x1b, .x=0x06, .y=0xe1, .sp=0x38, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x9c4b, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x9c4c, .a=0x1b, .x=0x06, .y=0xe0, .sp=0x38, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x9c4b, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x9c4b, .value=0xdc, .type=IO_READ},
        {.addr=0x9c4c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_026F) {
    const struct CPU_State initial_cpu = {.pc=0xbddd, .a=0x40, .x=0x7d, .y=0x0f, .sp=0xfd, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xbddd, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xbdde, .a=0x40, .x=0x7d, .y=0x0e, .sp=0xfd, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xbddd, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xbddd, .value=0xdc, .type=IO_READ},
        {.addr=0xbdde, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0270) {
    const struct CPU_State initial_cpu = {.pc=0x1205, .a=0xa0, .x=0xf3, .y=0xed, .sp=0xb3, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x1205, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x1206, .a=0xa0, .x=0xf3, .y=0xec, .sp=0xb3, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x1205, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1205, .value=0xdc, .type=IO_READ},
        {.addr=0x1206, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0271) {
    const struct CPU_State initial_cpu = {.pc=0x5221, .a=0x87, .x=0xc8, .y=0xc4, .sp=0x67, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x5221, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x5222, .a=0x87, .x=0xc8, .y=0xc3, .sp=0x67, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x5221, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x5221, .value=0xdc, .type=IO_READ},
        {.addr=0x5222, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0272) {
    const struct CPU_State initial_cpu = {.pc=0x96ee, .a=0xf3, .x=0x7e, .y=0xeb, .sp=0x52, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x96ee, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x96ef, .a=0xf3, .x=0x7e, .y=0xea, .sp=0x52, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x96ee, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x96ee, .value=0xdc, .type=IO_READ},
        {.addr=0x96ef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0273) {
    const struct CPU_State initial_cpu = {.pc=0x965f, .a=0x5d, .x=0xbc, .y=0xfa, .sp=0x3e, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x965f, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x9660, .a=0x5d, .x=0xbc, .y=0xf9, .sp=0x3e, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x965f, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x965f, .value=0xdc, .type=IO_READ},
        {.addr=0x9660, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0274) {
    const struct CPU_State initial_cpu = {.pc=0xcd0a, .a=0x5f, .x=0x01, .y=0xda, .sp=0xec, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xcd0a, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xcd0b, .a=0x5f, .x=0x01, .y=0xd9, .sp=0xec, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xcd0a, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xcd0a, .value=0xdc, .type=IO_READ},
        {.addr=0xcd0b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0275) {
    const struct CPU_State initial_cpu = {.pc=0xaa1d, .a=0xe3, .x=0x94, .y=0x61, .sp=0x6a, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xaa1d, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xaa1e, .a=0xe3, .x=0x94, .y=0x60, .sp=0x6a, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xaa1d, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xaa1d, .value=0xdc, .type=IO_READ},
        {.addr=0xaa1e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0276) {
    const struct CPU_State initial_cpu = {.pc=0x47b4, .a=0x69, .x=0x6b, .y=0x57, .sp=0xc1, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x47b4, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x47b5, .a=0x69, .x=0x6b, .y=0x56, .sp=0xc1, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x47b4, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x47b4, .value=0xdc, .type=IO_READ},
        {.addr=0x47b5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0277) {
    const struct CPU_State initial_cpu = {.pc=0x79dc, .a=0x8e, .x=0x7e, .y=0x5f, .sp=0xcb, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x79dc, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x79dd, .a=0x8e, .x=0x7e, .y=0x5e, .sp=0xcb, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x79dc, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x79dc, .value=0xdc, .type=IO_READ},
        {.addr=0x79dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0278) {
    const struct CPU_State initial_cpu = {.pc=0xbc1d, .a=0x73, .x=0x2d, .y=0xa7, .sp=0x36, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xbc1d, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xbc1e, .a=0x73, .x=0x2d, .y=0xa6, .sp=0x36, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xbc1d, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xbc1d, .value=0xdc, .type=IO_READ},
        {.addr=0xbc1e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0279) {
    const struct CPU_State initial_cpu = {.pc=0xc757, .a=0xa2, .x=0xe1, .y=0xf1, .sp=0x56, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xc757, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xc758, .a=0xa2, .x=0xe1, .y=0xf0, .sp=0x56, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xc757, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xc757, .value=0xdc, .type=IO_READ},
        {.addr=0xc758, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_027A) {
    const struct CPU_State initial_cpu = {.pc=0x3172, .a=0x66, .x=0x9f, .y=0x6a, .sp=0x5f, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x3172, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x3173, .a=0x66, .x=0x9f, .y=0x69, .sp=0x5f, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x3172, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x3172, .value=0xdc, .type=IO_READ},
        {.addr=0x3173, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_027B) {
    const struct CPU_State initial_cpu = {.pc=0x0863, .a=0xae, .x=0xee, .y=0x68, .sp=0x7e, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x0863, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x0864, .a=0xae, .x=0xee, .y=0x67, .sp=0x7e, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0863, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x0863, .value=0xdc, .type=IO_READ},
        {.addr=0x0864, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_027C) {
    const struct CPU_State initial_cpu = {.pc=0xfdb1, .a=0x9e, .x=0xb6, .y=0x31, .sp=0x73, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xfdb1, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xfdb2, .a=0x9e, .x=0xb6, .y=0x30, .sp=0x73, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xfdb1, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xfdb1, .value=0xdc, .type=IO_READ},
        {.addr=0xfdb2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_027D) {
    const struct CPU_State initial_cpu = {.pc=0xb3f0, .a=0xb3, .x=0x77, .y=0x35, .sp=0x9a, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xb3f0, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xb3f1, .a=0xb3, .x=0x77, .y=0x34, .sp=0x9a, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xb3f0, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xb3f0, .value=0xdc, .type=IO_READ},
        {.addr=0xb3f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_027E) {
    const struct CPU_State initial_cpu = {.pc=0x5f95, .a=0xba, .x=0x68, .y=0xa4, .sp=0x21, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x5f95, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x5f96, .a=0xba, .x=0x68, .y=0xa3, .sp=0x21, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x5f95, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x5f95, .value=0xdc, .type=IO_READ},
        {.addr=0x5f96, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_027F) {
    const struct CPU_State initial_cpu = {.pc=0xdae4, .a=0x57, .x=0xf2, .y=0x5b, .sp=0x96, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xdae4, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xdae5, .a=0x57, .x=0xf2, .y=0x5a, .sp=0x96, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xdae4, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xdae4, .value=0xdc, .type=IO_READ},
        {.addr=0xdae5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0280) {
    const struct CPU_State initial_cpu = {.pc=0xc8d4, .a=0xea, .x=0x53, .y=0x63, .sp=0x1c, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xc8d4, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xc8d5, .a=0xea, .x=0x53, .y=0x62, .sp=0x1c, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xc8d4, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xc8d4, .value=0xdc, .type=IO_READ},
        {.addr=0xc8d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0281) {
    const struct CPU_State initial_cpu = {.pc=0xf4b8, .a=0xa4, .x=0x7e, .y=0x81, .sp=0xd6, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xf4b8, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xf4b9, .a=0xa4, .x=0x7e, .y=0x80, .sp=0xd6, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xf4b8, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xf4b8, .value=0xdc, .type=IO_READ},
        {.addr=0xf4b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0282) {
    const struct CPU_State initial_cpu = {.pc=0x7672, .a=0x74, .x=0x95, .y=0xe5, .sp=0x81, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x7672, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x7673, .a=0x74, .x=0x95, .y=0xe4, .sp=0x81, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x7672, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x7672, .value=0xdc, .type=IO_READ},
        {.addr=0x7673, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0283) {
    const struct CPU_State initial_cpu = {.pc=0xc932, .a=0x71, .x=0x9c, .y=0x3f, .sp=0x11, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xc932, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xc933, .a=0x71, .x=0x9c, .y=0x3e, .sp=0x11, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xc932, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xc932, .value=0xdc, .type=IO_READ},
        {.addr=0xc933, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0284) {
    const struct CPU_State initial_cpu = {.pc=0x18b3, .a=0xaa, .x=0x84, .y=0xa6, .sp=0xba, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x18b3, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x18b4, .a=0xaa, .x=0x84, .y=0xa5, .sp=0xba, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x18b3, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x18b3, .value=0xdc, .type=IO_READ},
        {.addr=0x18b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0285) {
    const struct CPU_State initial_cpu = {.pc=0x2c30, .a=0x76, .x=0xd5, .y=0x25, .sp=0x30, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x2c30, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x2c31, .a=0x76, .x=0xd5, .y=0x24, .sp=0x30, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x2c30, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x2c30, .value=0xdc, .type=IO_READ},
        {.addr=0x2c31, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0286) {
    const struct CPU_State initial_cpu = {.pc=0x159a, .a=0xa9, .x=0xb2, .y=0x6b, .sp=0x44, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x159a, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x159b, .a=0xa9, .x=0xb2, .y=0x6a, .sp=0x44, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x159a, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x159a, .value=0xdc, .type=IO_READ},
        {.addr=0x159b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0287) {
    const struct CPU_State initial_cpu = {.pc=0x55d8, .a=0xff, .x=0x8b, .y=0x90, .sp=0x10, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x55d8, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x55d9, .a=0xff, .x=0x8b, .y=0x8f, .sp=0x10, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x55d8, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x55d8, .value=0xdc, .type=IO_READ},
        {.addr=0x55d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0288) {
    const struct CPU_State initial_cpu = {.pc=0x5df0, .a=0xe1, .x=0x91, .y=0x09, .sp=0x92, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x5df0, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x5df1, .a=0xe1, .x=0x91, .y=0x08, .sp=0x92, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x5df0, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x5df0, .value=0xdc, .type=IO_READ},
        {.addr=0x5df1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0289) {
    const struct CPU_State initial_cpu = {.pc=0xd641, .a=0xc9, .x=0x9a, .y=0x33, .sp=0xd7, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xd641, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xd642, .a=0xc9, .x=0x9a, .y=0x32, .sp=0xd7, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xd641, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xd641, .value=0xdc, .type=IO_READ},
        {.addr=0xd642, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_028A) {
    const struct CPU_State initial_cpu = {.pc=0xe9c3, .a=0xb1, .x=0x54, .y=0x71, .sp=0x5a, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xe9c3, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xe9c4, .a=0xb1, .x=0x54, .y=0x70, .sp=0x5a, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xe9c3, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xe9c3, .value=0xdc, .type=IO_READ},
        {.addr=0xe9c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_028B) {
    const struct CPU_State initial_cpu = {.pc=0xbd26, .a=0xbe, .x=0x98, .y=0x0f, .sp=0x6c, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xbd26, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xbd27, .a=0xbe, .x=0x98, .y=0x0e, .sp=0x6c, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xbd26, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xbd26, .value=0xdc, .type=IO_READ},
        {.addr=0xbd27, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_028C) {
    const struct CPU_State initial_cpu = {.pc=0x30de, .a=0x1a, .x=0xab, .y=0x30, .sp=0x28, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x30de, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x30df, .a=0x1a, .x=0xab, .y=0x2f, .sp=0x28, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x30de, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x30de, .value=0xdc, .type=IO_READ},
        {.addr=0x30df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_028D) {
    const struct CPU_State initial_cpu = {.pc=0xeffb, .a=0xc4, .x=0x46, .y=0x56, .sp=0xea, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xeffb, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xeffc, .a=0xc4, .x=0x46, .y=0x55, .sp=0xea, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xeffb, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xeffb, .value=0xdc, .type=IO_READ},
        {.addr=0xeffc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_028E) {
    const struct CPU_State initial_cpu = {.pc=0x3593, .a=0xde, .x=0x26, .y=0x9f, .sp=0xf5, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x3593, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x3594, .a=0xde, .x=0x26, .y=0x9e, .sp=0xf5, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x3593, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x3593, .value=0xdc, .type=IO_READ},
        {.addr=0x3594, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_028F) {
    const struct CPU_State initial_cpu = {.pc=0x8f47, .a=0xd3, .x=0xaa, .y=0xee, .sp=0x47, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x8f47, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8f48, .a=0xd3, .x=0xaa, .y=0xed, .sp=0x47, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x8f47, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x8f47, .value=0xdc, .type=IO_READ},
        {.addr=0x8f48, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0290) {
    const struct CPU_State initial_cpu = {.pc=0xb7a1, .a=0xc5, .x=0x51, .y=0x90, .sp=0x1f, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xb7a1, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xb7a2, .a=0xc5, .x=0x51, .y=0x8f, .sp=0x1f, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xb7a1, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xb7a1, .value=0xdc, .type=IO_READ},
        {.addr=0xb7a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0291) {
    const struct CPU_State initial_cpu = {.pc=0x4316, .a=0x8a, .x=0xb0, .y=0x6e, .sp=0x38, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x4316, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x4317, .a=0x8a, .x=0xb0, .y=0x6d, .sp=0x38, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x4316, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x4316, .value=0xdc, .type=IO_READ},
        {.addr=0x4317, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0292) {
    const struct CPU_State initial_cpu = {.pc=0x058b, .a=0x54, .x=0x9b, .y=0x82, .sp=0xd4, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x058b, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x058c, .a=0x54, .x=0x9b, .y=0x81, .sp=0xd4, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x058b, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x058b, .value=0xdc, .type=IO_READ},
        {.addr=0x058c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0293) {
    const struct CPU_State initial_cpu = {.pc=0x7d32, .a=0xef, .x=0xcd, .y=0x4f, .sp=0xc1, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x7d32, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x7d33, .a=0xef, .x=0xcd, .y=0x4e, .sp=0xc1, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x7d32, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x7d32, .value=0xdc, .type=IO_READ},
        {.addr=0x7d33, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0294) {
    const struct CPU_State initial_cpu = {.pc=0xf0c5, .a=0x14, .x=0x3c, .y=0xf0, .sp=0x80, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xf0c5, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xf0c6, .a=0x14, .x=0x3c, .y=0xef, .sp=0x80, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xf0c5, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xf0c5, .value=0xdc, .type=IO_READ},
        {.addr=0xf0c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0295) {
    const struct CPU_State initial_cpu = {.pc=0xd5f1, .a=0x3c, .x=0x86, .y=0xd3, .sp=0x55, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xd5f1, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xd5f2, .a=0x3c, .x=0x86, .y=0xd2, .sp=0x55, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xd5f1, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xd5f1, .value=0xdc, .type=IO_READ},
        {.addr=0xd5f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0296) {
    const struct CPU_State initial_cpu = {.pc=0xdcf1, .a=0x07, .x=0x98, .y=0x4c, .sp=0x7b, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xdcf1, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xdcf2, .a=0x07, .x=0x98, .y=0x4b, .sp=0x7b, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xdcf1, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xdcf1, .value=0xdc, .type=IO_READ},
        {.addr=0xdcf2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0297) {
    const struct CPU_State initial_cpu = {.pc=0x8c89, .a=0x4a, .x=0x6d, .y=0x7f, .sp=0xdd, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x8c89, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8c8a, .a=0x4a, .x=0x6d, .y=0x7e, .sp=0xdd, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x8c89, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x8c89, .value=0xdc, .type=IO_READ},
        {.addr=0x8c8a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0298) {
    const struct CPU_State initial_cpu = {.pc=0x31f7, .a=0xf6, .x=0x1c, .y=0xf1, .sp=0xe3, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x31f7, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x31f8, .a=0xf6, .x=0x1c, .y=0xf0, .sp=0xe3, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x31f7, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x31f7, .value=0xdc, .type=IO_READ},
        {.addr=0x31f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0299) {
    const struct CPU_State initial_cpu = {.pc=0xd05a, .a=0x32, .x=0x9e, .y=0xc1, .sp=0x46, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xd05a, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xd05b, .a=0x32, .x=0x9e, .y=0xc0, .sp=0x46, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xd05a, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xd05a, .value=0xdc, .type=IO_READ},
        {.addr=0xd05b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_029A) {
    const struct CPU_State initial_cpu = {.pc=0x56cb, .a=0xaa, .x=0x2a, .y=0xce, .sp=0x7a, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x56cb, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x56cc, .a=0xaa, .x=0x2a, .y=0xcd, .sp=0x7a, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x56cb, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x56cb, .value=0xdc, .type=IO_READ},
        {.addr=0x56cc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_029B) {
    const struct CPU_State initial_cpu = {.pc=0x4887, .a=0xf1, .x=0xff, .y=0x94, .sp=0x84, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x4887, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x4888, .a=0xf1, .x=0xff, .y=0x93, .sp=0x84, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x4887, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x4887, .value=0xdc, .type=IO_READ},
        {.addr=0x4888, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_029C) {
    const struct CPU_State initial_cpu = {.pc=0x7055, .a=0x80, .x=0x99, .y=0xd3, .sp=0xb5, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x7055, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x7056, .a=0x80, .x=0x99, .y=0xd2, .sp=0xb5, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x7055, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x7055, .value=0xdc, .type=IO_READ},
        {.addr=0x7056, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_029D) {
    const struct CPU_State initial_cpu = {.pc=0xebe9, .a=0xb0, .x=0x65, .y=0x3c, .sp=0xb8, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xebe9, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xebea, .a=0xb0, .x=0x65, .y=0x3b, .sp=0xb8, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xebe9, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xebe9, .value=0xdc, .type=IO_READ},
        {.addr=0xebea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_029E) {
    const struct CPU_State initial_cpu = {.pc=0x7936, .a=0x34, .x=0xb4, .y=0xdb, .sp=0x57, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x7936, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x7937, .a=0x34, .x=0xb4, .y=0xda, .sp=0x57, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x7936, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x7936, .value=0xdc, .type=IO_READ},
        {.addr=0x7937, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_029F) {
    const struct CPU_State initial_cpu = {.pc=0x04c2, .a=0x20, .x=0x62, .y=0x0b, .sp=0x11, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x04c2, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x04c3, .a=0x20, .x=0x62, .y=0x0a, .sp=0x11, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x04c2, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x04c2, .value=0xdc, .type=IO_READ},
        {.addr=0x04c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02A0) {
    const struct CPU_State initial_cpu = {.pc=0xab2c, .a=0xe8, .x=0xd7, .y=0xce, .sp=0x17, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xab2c, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xab2d, .a=0xe8, .x=0xd7, .y=0xcd, .sp=0x17, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xab2c, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xab2c, .value=0xdc, .type=IO_READ},
        {.addr=0xab2d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02A1) {
    const struct CPU_State initial_cpu = {.pc=0xfb7b, .a=0x8e, .x=0x06, .y=0x67, .sp=0x4d, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xfb7b, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xfb7c, .a=0x8e, .x=0x06, .y=0x66, .sp=0x4d, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xfb7b, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xfb7b, .value=0xdc, .type=IO_READ},
        {.addr=0xfb7c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02A2) {
    const struct CPU_State initial_cpu = {.pc=0x7410, .a=0x64, .x=0xba, .y=0xfc, .sp=0x7e, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x7410, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x7411, .a=0x64, .x=0xba, .y=0xfb, .sp=0x7e, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x7410, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x7410, .value=0xdc, .type=IO_READ},
        {.addr=0x7411, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02A3) {
    const struct CPU_State initial_cpu = {.pc=0xe8b0, .a=0x7c, .x=0x4f, .y=0x2a, .sp=0xac, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xe8b0, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xe8b1, .a=0x7c, .x=0x4f, .y=0x29, .sp=0xac, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xe8b0, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xe8b0, .value=0xdc, .type=IO_READ},
        {.addr=0xe8b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02A4) {
    const struct CPU_State initial_cpu = {.pc=0x9a53, .a=0x0d, .x=0xce, .y=0x15, .sp=0x14, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x9a53, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x9a54, .a=0x0d, .x=0xce, .y=0x14, .sp=0x14, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x9a53, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x9a53, .value=0xdc, .type=IO_READ},
        {.addr=0x9a54, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x10c6, .a=0xa3, .x=0xb7, .y=0xbf, .sp=0x97, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x10c6, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x10c7, .a=0xa3, .x=0xb7, .y=0xbe, .sp=0x97, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x10c6, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x10c6, .value=0xdc, .type=IO_READ},
        {.addr=0x10c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02A6) {
    const struct CPU_State initial_cpu = {.pc=0xe14f, .a=0x7c, .x=0x90, .y=0x5a, .sp=0x42, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xe14f, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xe150, .a=0x7c, .x=0x90, .y=0x59, .sp=0x42, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xe14f, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xe14f, .value=0xdc, .type=IO_READ},
        {.addr=0xe150, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02A7) {
    const struct CPU_State initial_cpu = {.pc=0x81a6, .a=0xcd, .x=0x39, .y=0x6b, .sp=0xf7, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x81a6, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x81a7, .a=0xcd, .x=0x39, .y=0x6a, .sp=0xf7, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x81a6, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x81a6, .value=0xdc, .type=IO_READ},
        {.addr=0x81a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02A8) {
    const struct CPU_State initial_cpu = {.pc=0x28d3, .a=0x02, .x=0x5c, .y=0xdd, .sp=0xd3, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x28d3, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x28d4, .a=0x02, .x=0x5c, .y=0xdc, .sp=0xd3, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x28d3, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x28d3, .value=0xdc, .type=IO_READ},
        {.addr=0x28d4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02A9) {
    const struct CPU_State initial_cpu = {.pc=0x2ad8, .a=0xd4, .x=0xb2, .y=0xd0, .sp=0xd1, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x2ad8, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x2ad9, .a=0xd4, .x=0xb2, .y=0xcf, .sp=0xd1, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x2ad8, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x2ad8, .value=0xdc, .type=IO_READ},
        {.addr=0x2ad9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02AA) {
    const struct CPU_State initial_cpu = {.pc=0xf775, .a=0x68, .x=0xed, .y=0x50, .sp=0x81, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xf775, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xf776, .a=0x68, .x=0xed, .y=0x4f, .sp=0x81, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xf775, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xf775, .value=0xdc, .type=IO_READ},
        {.addr=0xf776, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02AB) {
    const struct CPU_State initial_cpu = {.pc=0x0bb4, .a=0xe0, .x=0xd8, .y=0x85, .sp=0xaa, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x0bb4, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x0bb5, .a=0xe0, .x=0xd8, .y=0x84, .sp=0xaa, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0bb4, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x0bb4, .value=0xdc, .type=IO_READ},
        {.addr=0x0bb5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x41f1, .a=0x6c, .x=0x9b, .y=0xf1, .sp=0x63, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x41f1, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x41f2, .a=0x6c, .x=0x9b, .y=0xf0, .sp=0x63, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x41f1, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x41f1, .value=0xdc, .type=IO_READ},
        {.addr=0x41f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02AD) {
    const struct CPU_State initial_cpu = {.pc=0x8d96, .a=0x53, .x=0x7c, .y=0x5e, .sp=0x17, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x8d96, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8d97, .a=0x53, .x=0x7c, .y=0x5d, .sp=0x17, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x8d96, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x8d96, .value=0xdc, .type=IO_READ},
        {.addr=0x8d97, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02AE) {
    const struct CPU_State initial_cpu = {.pc=0xb462, .a=0xb3, .x=0x85, .y=0xde, .sp=0x02, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xb462, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xb463, .a=0xb3, .x=0x85, .y=0xdd, .sp=0x02, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xb462, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xb462, .value=0xdc, .type=IO_READ},
        {.addr=0xb463, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x35bb, .a=0x30, .x=0x60, .y=0x12, .sp=0xd5, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x35bb, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x35bc, .a=0x30, .x=0x60, .y=0x11, .sp=0xd5, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x35bb, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x35bb, .value=0xdc, .type=IO_READ},
        {.addr=0x35bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02B0) {
    const struct CPU_State initial_cpu = {.pc=0x4d8d, .a=0xa2, .x=0xba, .y=0x20, .sp=0xf2, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x4d8d, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x4d8e, .a=0xa2, .x=0xba, .y=0x1f, .sp=0xf2, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x4d8d, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x4d8d, .value=0xdc, .type=IO_READ},
        {.addr=0x4d8e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02B1) {
    const struct CPU_State initial_cpu = {.pc=0x2683, .a=0x74, .x=0xcc, .y=0x6a, .sp=0x76, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x2683, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x2684, .a=0x74, .x=0xcc, .y=0x69, .sp=0x76, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x2683, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x2683, .value=0xdc, .type=IO_READ},
        {.addr=0x2684, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02B2) {
    const struct CPU_State initial_cpu = {.pc=0x3fa3, .a=0x38, .x=0x20, .y=0x0b, .sp=0x40, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x3fa3, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x3fa4, .a=0x38, .x=0x20, .y=0x0a, .sp=0x40, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x3fa3, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x3fa3, .value=0xdc, .type=IO_READ},
        {.addr=0x3fa4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02B3) {
    const struct CPU_State initial_cpu = {.pc=0xca56, .a=0x54, .x=0x26, .y=0x16, .sp=0xab, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xca56, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xca57, .a=0x54, .x=0x26, .y=0x15, .sp=0xab, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xca56, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xca56, .value=0xdc, .type=IO_READ},
        {.addr=0xca57, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02B4) {
    const struct CPU_State initial_cpu = {.pc=0x3b73, .a=0xa3, .x=0x45, .y=0x57, .sp=0x09, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x3b73, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x3b74, .a=0xa3, .x=0x45, .y=0x56, .sp=0x09, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x3b73, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x3b73, .value=0xdc, .type=IO_READ},
        {.addr=0x3b74, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02B5) {
    const struct CPU_State initial_cpu = {.pc=0xaa9b, .a=0x52, .x=0x25, .y=0xd0, .sp=0xaf, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xaa9b, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xaa9c, .a=0x52, .x=0x25, .y=0xcf, .sp=0xaf, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xaa9b, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xaa9b, .value=0xdc, .type=IO_READ},
        {.addr=0xaa9c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02B6) {
    const struct CPU_State initial_cpu = {.pc=0x13c7, .a=0xff, .x=0x6c, .y=0x73, .sp=0x20, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x13c7, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x13c8, .a=0xff, .x=0x6c, .y=0x72, .sp=0x20, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x13c7, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x13c7, .value=0xdc, .type=IO_READ},
        {.addr=0x13c8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02B7) {
    const struct CPU_State initial_cpu = {.pc=0x2467, .a=0x5d, .x=0x41, .y=0xde, .sp=0xdc, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x2467, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x2468, .a=0x5d, .x=0x41, .y=0xdd, .sp=0xdc, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x2467, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x2467, .value=0xdc, .type=IO_READ},
        {.addr=0x2468, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02B8) {
    const struct CPU_State initial_cpu = {.pc=0x3649, .a=0xbe, .x=0x6a, .y=0x76, .sp=0x6a, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x3649, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x364a, .a=0xbe, .x=0x6a, .y=0x75, .sp=0x6a, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x3649, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x3649, .value=0xdc, .type=IO_READ},
        {.addr=0x364a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02B9) {
    const struct CPU_State initial_cpu = {.pc=0x1341, .a=0x75, .x=0xac, .y=0x2e, .sp=0x1c, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x1341, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x1342, .a=0x75, .x=0xac, .y=0x2d, .sp=0x1c, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x1341, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1341, .value=0xdc, .type=IO_READ},
        {.addr=0x1342, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02BA) {
    const struct CPU_State initial_cpu = {.pc=0xbb0a, .a=0xf6, .x=0x10, .y=0xaf, .sp=0x5e, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xbb0a, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xbb0b, .a=0xf6, .x=0x10, .y=0xae, .sp=0x5e, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xbb0a, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xbb0a, .value=0xdc, .type=IO_READ},
        {.addr=0xbb0b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02BB) {
    const struct CPU_State initial_cpu = {.pc=0xc5de, .a=0x21, .x=0x71, .y=0x03, .sp=0x9a, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xc5de, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xc5df, .a=0x21, .x=0x71, .y=0x02, .sp=0x9a, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xc5de, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xc5de, .value=0xdc, .type=IO_READ},
        {.addr=0xc5df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02BC) {
    const struct CPU_State initial_cpu = {.pc=0x6cbe, .a=0xc3, .x=0xda, .y=0x53, .sp=0x4c, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x6cbe, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x6cbf, .a=0xc3, .x=0xda, .y=0x52, .sp=0x4c, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x6cbe, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x6cbe, .value=0xdc, .type=IO_READ},
        {.addr=0x6cbf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02BD) {
    const struct CPU_State initial_cpu = {.pc=0xffb4, .a=0xe3, .x=0xc0, .y=0xea, .sp=0x75, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xffb4, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xffb5, .a=0xe3, .x=0xc0, .y=0xe9, .sp=0x75, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xffb4, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xffb4, .value=0xdc, .type=IO_READ},
        {.addr=0xffb5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02BE) {
    const struct CPU_State initial_cpu = {.pc=0x0659, .a=0x7c, .x=0x0e, .y=0x7c, .sp=0xe7, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x0659, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x065a, .a=0x7c, .x=0x0e, .y=0x7b, .sp=0xe7, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x0659, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x0659, .value=0xdc, .type=IO_READ},
        {.addr=0x065a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x8fdf, .a=0x9d, .x=0x70, .y=0x3a, .sp=0x58, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x8fdf, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8fe0, .a=0x9d, .x=0x70, .y=0x39, .sp=0x58, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x8fdf, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x8fdf, .value=0xdc, .type=IO_READ},
        {.addr=0x8fe0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02C0) {
    const struct CPU_State initial_cpu = {.pc=0xa5c3, .a=0xeb, .x=0xaa, .y=0xc1, .sp=0x0b, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xa5c3, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xa5c4, .a=0xeb, .x=0xaa, .y=0xc0, .sp=0x0b, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xa5c3, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xa5c3, .value=0xdc, .type=IO_READ},
        {.addr=0xa5c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x1226, .a=0x92, .x=0x07, .y=0x00, .sp=0x0c, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x1226, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x1227, .a=0x92, .x=0x07, .y=0xff, .sp=0x0c, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x1226, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1226, .value=0xdc, .type=IO_READ},
        {.addr=0x1227, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02C2) {
    const struct CPU_State initial_cpu = {.pc=0x3941, .a=0x7d, .x=0x9b, .y=0x29, .sp=0x90, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x3941, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x3942, .a=0x7d, .x=0x9b, .y=0x28, .sp=0x90, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x3941, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x3941, .value=0xdc, .type=IO_READ},
        {.addr=0x3942, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02C3) {
    const struct CPU_State initial_cpu = {.pc=0xd653, .a=0x11, .x=0xbe, .y=0x57, .sp=0x77, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xd653, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xd654, .a=0x11, .x=0xbe, .y=0x56, .sp=0x77, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xd653, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xd653, .value=0xdc, .type=IO_READ},
        {.addr=0xd654, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02C4) {
    const struct CPU_State initial_cpu = {.pc=0x35ab, .a=0xf3, .x=0xe8, .y=0xba, .sp=0x4f, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x35ab, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x35ac, .a=0xf3, .x=0xe8, .y=0xb9, .sp=0x4f, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x35ab, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x35ab, .value=0xdc, .type=IO_READ},
        {.addr=0x35ac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x1e56, .a=0x37, .x=0xe9, .y=0xc6, .sp=0xc9, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x1e56, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x1e57, .a=0x37, .x=0xe9, .y=0xc5, .sp=0xc9, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x1e56, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1e56, .value=0xdc, .type=IO_READ},
        {.addr=0x1e57, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02C6) {
    const struct CPU_State initial_cpu = {.pc=0x3492, .a=0x1a, .x=0x0b, .y=0x99, .sp=0xa0, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x3492, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x3493, .a=0x1a, .x=0x0b, .y=0x98, .sp=0xa0, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x3492, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x3492, .value=0xdc, .type=IO_READ},
        {.addr=0x3493, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02C7) {
    const struct CPU_State initial_cpu = {.pc=0xdec0, .a=0xce, .x=0xad, .y=0x7b, .sp=0x51, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xdec0, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xdec1, .a=0xce, .x=0xad, .y=0x7a, .sp=0x51, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xdec0, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xdec0, .value=0xdc, .type=IO_READ},
        {.addr=0xdec1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02C8) {
    const struct CPU_State initial_cpu = {.pc=0x1180, .a=0xe3, .x=0x90, .y=0x4d, .sp=0xfe, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x1180, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x1181, .a=0xe3, .x=0x90, .y=0x4c, .sp=0xfe, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x1180, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1180, .value=0xdc, .type=IO_READ},
        {.addr=0x1181, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02C9) {
    const struct CPU_State initial_cpu = {.pc=0xa64a, .a=0xbd, .x=0x1d, .y=0x10, .sp=0xed, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xa64a, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xa64b, .a=0xbd, .x=0x1d, .y=0x0f, .sp=0xed, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xa64a, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xa64a, .value=0xdc, .type=IO_READ},
        {.addr=0xa64b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02CA) {
    const struct CPU_State initial_cpu = {.pc=0xcbf6, .a=0x17, .x=0xca, .y=0x2c, .sp=0xd2, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xcbf6, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xcbf7, .a=0x17, .x=0xca, .y=0x2b, .sp=0xd2, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xcbf6, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xcbf6, .value=0xdc, .type=IO_READ},
        {.addr=0xcbf7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02CB) {
    const struct CPU_State initial_cpu = {.pc=0x46e3, .a=0x3a, .x=0x38, .y=0xee, .sp=0x93, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x46e3, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x46e4, .a=0x3a, .x=0x38, .y=0xed, .sp=0x93, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x46e3, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x46e3, .value=0xdc, .type=IO_READ},
        {.addr=0x46e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02CC) {
    const struct CPU_State initial_cpu = {.pc=0x2e31, .a=0x8b, .x=0x5f, .y=0x3c, .sp=0xd7, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x2e31, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x2e32, .a=0x8b, .x=0x5f, .y=0x3b, .sp=0xd7, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x2e31, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x2e31, .value=0xdc, .type=IO_READ},
        {.addr=0x2e32, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x1f6f, .a=0xc9, .x=0x81, .y=0x4d, .sp=0xe9, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x1f6f, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x1f70, .a=0xc9, .x=0x81, .y=0x4c, .sp=0xe9, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x1f6f, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1f6f, .value=0xdc, .type=IO_READ},
        {.addr=0x1f70, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x9ae5, .a=0xf2, .x=0x30, .y=0x40, .sp=0xa6, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x9ae5, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x9ae6, .a=0xf2, .x=0x30, .y=0x3f, .sp=0xa6, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x9ae5, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x9ae5, .value=0xdc, .type=IO_READ},
        {.addr=0x9ae6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02CF) {
    const struct CPU_State initial_cpu = {.pc=0xf354, .a=0xe7, .x=0xd5, .y=0x14, .sp=0x3a, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xf354, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xf355, .a=0xe7, .x=0xd5, .y=0x13, .sp=0x3a, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xf354, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xf354, .value=0xdc, .type=IO_READ},
        {.addr=0xf355, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02D0) {
    const struct CPU_State initial_cpu = {.pc=0xf6eb, .a=0xf2, .x=0xd5, .y=0xab, .sp=0xb0, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xf6eb, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xf6ec, .a=0xf2, .x=0xd5, .y=0xaa, .sp=0xb0, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xf6eb, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xf6eb, .value=0xdc, .type=IO_READ},
        {.addr=0xf6ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02D1) {
    const struct CPU_State initial_cpu = {.pc=0x01e8, .a=0xd6, .x=0x55, .y=0x5f, .sp=0x02, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x01e8, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x01e9, .a=0xd6, .x=0x55, .y=0x5e, .sp=0x02, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x01e8, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x01e8, .value=0xdc, .type=IO_READ},
        {.addr=0x01e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x1e1a, .a=0x2b, .x=0xab, .y=0xc4, .sp=0x80, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x1e1a, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x1e1b, .a=0x2b, .x=0xab, .y=0xc3, .sp=0x80, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x1e1a, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1e1a, .value=0xdc, .type=IO_READ},
        {.addr=0x1e1b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x92a7, .a=0x16, .x=0x0d, .y=0xbf, .sp=0xcb, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x92a7, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x92a8, .a=0x16, .x=0x0d, .y=0xbe, .sp=0xcb, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x92a7, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x92a7, .value=0xdc, .type=IO_READ},
        {.addr=0x92a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x14ac, .a=0x9a, .x=0x48, .y=0xf7, .sp=0xcb, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x14ac, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x14ad, .a=0x9a, .x=0x48, .y=0xf6, .sp=0xcb, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x14ac, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x14ac, .value=0xdc, .type=IO_READ},
        {.addr=0x14ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x3f53, .a=0x2c, .x=0xde, .y=0x33, .sp=0xed, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x3f53, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x3f54, .a=0x2c, .x=0xde, .y=0x32, .sp=0xed, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x3f53, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x3f53, .value=0xdc, .type=IO_READ},
        {.addr=0x3f54, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02D6) {
    const struct CPU_State initial_cpu = {.pc=0xb24c, .a=0xee, .x=0x91, .y=0x94, .sp=0x59, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xb24c, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xb24d, .a=0xee, .x=0x91, .y=0x93, .sp=0x59, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xb24c, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xb24c, .value=0xdc, .type=IO_READ},
        {.addr=0xb24d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02D7) {
    const struct CPU_State initial_cpu = {.pc=0xc77f, .a=0xb4, .x=0xd9, .y=0x8a, .sp=0x66, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xc77f, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xc780, .a=0xb4, .x=0xd9, .y=0x89, .sp=0x66, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xc77f, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xc77f, .value=0xdc, .type=IO_READ},
        {.addr=0xc780, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02D8) {
    const struct CPU_State initial_cpu = {.pc=0xf53d, .a=0x73, .x=0xa7, .y=0xba, .sp=0xd9, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xf53d, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xf53e, .a=0x73, .x=0xa7, .y=0xb9, .sp=0xd9, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xf53d, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xf53d, .value=0xdc, .type=IO_READ},
        {.addr=0xf53e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02D9) {
    const struct CPU_State initial_cpu = {.pc=0xeb5a, .a=0xf9, .x=0xd3, .y=0x29, .sp=0x18, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xeb5a, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xeb5b, .a=0xf9, .x=0xd3, .y=0x28, .sp=0x18, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xeb5a, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xeb5a, .value=0xdc, .type=IO_READ},
        {.addr=0xeb5b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02DA) {
    const struct CPU_State initial_cpu = {.pc=0xfc06, .a=0x40, .x=0xbb, .y=0xe9, .sp=0xcc, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xfc06, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xfc07, .a=0x40, .x=0xbb, .y=0xe8, .sp=0xcc, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xfc06, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xfc06, .value=0xdc, .type=IO_READ},
        {.addr=0xfc07, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02DB) {
    const struct CPU_State initial_cpu = {.pc=0x43f9, .a=0x91, .x=0xfd, .y=0x5b, .sp=0x30, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x43f9, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x43fa, .a=0x91, .x=0xfd, .y=0x5a, .sp=0x30, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x43f9, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x43f9, .value=0xdc, .type=IO_READ},
        {.addr=0x43fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x061c, .a=0x1e, .x=0x75, .y=0xaf, .sp=0xc9, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x061c, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x061d, .a=0x1e, .x=0x75, .y=0xae, .sp=0xc9, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x061c, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x061c, .value=0xdc, .type=IO_READ},
        {.addr=0x061d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02DD) {
    const struct CPU_State initial_cpu = {.pc=0x5883, .a=0x21, .x=0xbe, .y=0x43, .sp=0x13, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x5883, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x5884, .a=0x21, .x=0xbe, .y=0x42, .sp=0x13, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x5883, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x5883, .value=0xdc, .type=IO_READ},
        {.addr=0x5884, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02DE) {
    const struct CPU_State initial_cpu = {.pc=0x5503, .a=0xfe, .x=0x62, .y=0x98, .sp=0xa7, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x5503, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x5504, .a=0xfe, .x=0x62, .y=0x97, .sp=0xa7, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x5503, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x5503, .value=0xdc, .type=IO_READ},
        {.addr=0x5504, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02DF) {
    const struct CPU_State initial_cpu = {.pc=0x6776, .a=0xd6, .x=0x68, .y=0x1e, .sp=0x89, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x6776, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x6777, .a=0xd6, .x=0x68, .y=0x1d, .sp=0x89, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x6776, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x6776, .value=0xdc, .type=IO_READ},
        {.addr=0x6777, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02E0) {
    const struct CPU_State initial_cpu = {.pc=0xbdae, .a=0x6b, .x=0xc8, .y=0xd2, .sp=0xaf, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xbdae, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xbdaf, .a=0x6b, .x=0xc8, .y=0xd1, .sp=0xaf, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xbdae, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xbdae, .value=0xdc, .type=IO_READ},
        {.addr=0xbdaf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02E1) {
    const struct CPU_State initial_cpu = {.pc=0xe71e, .a=0x6a, .x=0xda, .y=0x8a, .sp=0xaa, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xe71e, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xe71f, .a=0x6a, .x=0xda, .y=0x89, .sp=0xaa, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xe71e, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xe71e, .value=0xdc, .type=IO_READ},
        {.addr=0xe71f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02E2) {
    const struct CPU_State initial_cpu = {.pc=0x48b0, .a=0xa9, .x=0xea, .y=0xbc, .sp=0xe0, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x48b0, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x48b1, .a=0xa9, .x=0xea, .y=0xbb, .sp=0xe0, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x48b0, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x48b0, .value=0xdc, .type=IO_READ},
        {.addr=0x48b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02E3) {
    const struct CPU_State initial_cpu = {.pc=0x1596, .a=0x49, .x=0xc7, .y=0x61, .sp=0xb4, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x1596, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x1597, .a=0x49, .x=0xc7, .y=0x60, .sp=0xb4, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x1596, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1596, .value=0xdc, .type=IO_READ},
        {.addr=0x1597, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02E4) {
    const struct CPU_State initial_cpu = {.pc=0x94ed, .a=0xf5, .x=0x4e, .y=0xd2, .sp=0x53, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x94ed, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x94ee, .a=0xf5, .x=0x4e, .y=0xd1, .sp=0x53, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x94ed, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x94ed, .value=0xdc, .type=IO_READ},
        {.addr=0x94ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02E5) {
    const struct CPU_State initial_cpu = {.pc=0x20d2, .a=0xee, .x=0x50, .y=0x11, .sp=0x55, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x20d2, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x20d3, .a=0xee, .x=0x50, .y=0x10, .sp=0x55, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x20d2, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x20d2, .value=0xdc, .type=IO_READ},
        {.addr=0x20d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02E6) {
    const struct CPU_State initial_cpu = {.pc=0xa2aa, .a=0xa5, .x=0x44, .y=0x4e, .sp=0xdd, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xa2aa, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xa2ab, .a=0xa5, .x=0x44, .y=0x4d, .sp=0xdd, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xa2aa, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xa2aa, .value=0xdc, .type=IO_READ},
        {.addr=0xa2ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02E7) {
    const struct CPU_State initial_cpu = {.pc=0x2934, .a=0x18, .x=0xaa, .y=0x5f, .sp=0x7d, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x2934, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x2935, .a=0x18, .x=0xaa, .y=0x5e, .sp=0x7d, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x2934, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x2934, .value=0xdc, .type=IO_READ},
        {.addr=0x2935, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02E8) {
    const struct CPU_State initial_cpu = {.pc=0x6a2b, .a=0xef, .x=0xb3, .y=0xeb, .sp=0x19, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x6a2b, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x6a2c, .a=0xef, .x=0xb3, .y=0xea, .sp=0x19, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x6a2b, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x6a2b, .value=0xdc, .type=IO_READ},
        {.addr=0x6a2c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02E9) {
    const struct CPU_State initial_cpu = {.pc=0xa659, .a=0x11, .x=0x22, .y=0x89, .sp=0x88, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xa659, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xa65a, .a=0x11, .x=0x22, .y=0x88, .sp=0x88, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xa659, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xa659, .value=0xdc, .type=IO_READ},
        {.addr=0xa65a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02EA) {
    const struct CPU_State initial_cpu = {.pc=0xe8b1, .a=0xd8, .x=0x5f, .y=0x6d, .sp=0xf6, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xe8b1, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xe8b2, .a=0xd8, .x=0x5f, .y=0x6c, .sp=0xf6, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xe8b1, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xe8b1, .value=0xdc, .type=IO_READ},
        {.addr=0xe8b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x4935, .a=0x2f, .x=0xd2, .y=0x4e, .sp=0x58, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x4935, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x4936, .a=0x2f, .x=0xd2, .y=0x4d, .sp=0x58, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x4935, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x4935, .value=0xdc, .type=IO_READ},
        {.addr=0x4936, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02EC) {
    const struct CPU_State initial_cpu = {.pc=0x3c59, .a=0x66, .x=0x86, .y=0x75, .sp=0x06, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x3c59, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x3c5a, .a=0x66, .x=0x86, .y=0x74, .sp=0x06, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x3c59, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x3c59, .value=0xdc, .type=IO_READ},
        {.addr=0x3c5a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x9822, .a=0xb0, .x=0x04, .y=0x3d, .sp=0x9a, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x9822, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x9823, .a=0xb0, .x=0x04, .y=0x3c, .sp=0x9a, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x9822, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x9822, .value=0xdc, .type=IO_READ},
        {.addr=0x9823, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02EE) {
    const struct CPU_State initial_cpu = {.pc=0x205d, .a=0x9a, .x=0x0a, .y=0x60, .sp=0xe7, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x205d, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x205e, .a=0x9a, .x=0x0a, .y=0x5f, .sp=0xe7, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x205d, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x205d, .value=0xdc, .type=IO_READ},
        {.addr=0x205e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02EF) {
    const struct CPU_State initial_cpu = {.pc=0xd3c2, .a=0xe2, .x=0x3a, .y=0x9f, .sp=0x7f, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xd3c2, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xd3c3, .a=0xe2, .x=0x3a, .y=0x9e, .sp=0x7f, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xd3c2, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xd3c2, .value=0xdc, .type=IO_READ},
        {.addr=0xd3c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02F0) {
    const struct CPU_State initial_cpu = {.pc=0xf1cd, .a=0xd9, .x=0xf3, .y=0xe5, .sp=0x5c, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xf1cd, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xf1ce, .a=0xd9, .x=0xf3, .y=0xe4, .sp=0x5c, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xf1cd, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xf1cd, .value=0xdc, .type=IO_READ},
        {.addr=0xf1ce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02F1) {
    const struct CPU_State initial_cpu = {.pc=0xa835, .a=0xda, .x=0x03, .y=0xfe, .sp=0x5c, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xa835, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xa836, .a=0xda, .x=0x03, .y=0xfd, .sp=0x5c, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xa835, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xa835, .value=0xdc, .type=IO_READ},
        {.addr=0xa836, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02F2) {
    const struct CPU_State initial_cpu = {.pc=0x411b, .a=0xf2, .x=0x04, .y=0x61, .sp=0xba, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x411b, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x411c, .a=0xf2, .x=0x04, .y=0x60, .sp=0xba, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x411b, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x411b, .value=0xdc, .type=IO_READ},
        {.addr=0x411c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02F3) {
    const struct CPU_State initial_cpu = {.pc=0xa22e, .a=0x00, .x=0xea, .y=0x48, .sp=0xfd, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xa22e, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xa22f, .a=0x00, .x=0xea, .y=0x47, .sp=0xfd, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xa22e, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xa22e, .value=0xdc, .type=IO_READ},
        {.addr=0xa22f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02F4) {
    const struct CPU_State initial_cpu = {.pc=0xe9c9, .a=0x5b, .x=0xd1, .y=0x59, .sp=0x61, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xe9c9, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xe9ca, .a=0x5b, .x=0xd1, .y=0x58, .sp=0x61, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xe9c9, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xe9c9, .value=0xdc, .type=IO_READ},
        {.addr=0xe9ca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x38e7, .a=0x80, .x=0x7d, .y=0x21, .sp=0xaa, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x38e7, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x38e8, .a=0x80, .x=0x7d, .y=0x20, .sp=0xaa, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x38e7, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x38e7, .value=0xdc, .type=IO_READ},
        {.addr=0x38e8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x677b, .a=0xa4, .x=0x47, .y=0x2c, .sp=0x20, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x677b, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x677c, .a=0xa4, .x=0x47, .y=0x2b, .sp=0x20, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x677b, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x677b, .value=0xdc, .type=IO_READ},
        {.addr=0x677c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02F7) {
    const struct CPU_State initial_cpu = {.pc=0xc10a, .a=0x1f, .x=0x51, .y=0xad, .sp=0xe0, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xc10a, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xc10b, .a=0x1f, .x=0x51, .y=0xac, .sp=0xe0, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xc10a, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xc10a, .value=0xdc, .type=IO_READ},
        {.addr=0xc10b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02F8) {
    const struct CPU_State initial_cpu = {.pc=0xa85e, .a=0xe4, .x=0x8c, .y=0x80, .sp=0x71, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xa85e, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xa85f, .a=0xe4, .x=0x8c, .y=0x7f, .sp=0x71, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xa85e, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xa85e, .value=0xdc, .type=IO_READ},
        {.addr=0xa85f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02F9) {
    const struct CPU_State initial_cpu = {.pc=0x9755, .a=0x5b, .x=0xad, .y=0x70, .sp=0xe0, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x9755, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x9756, .a=0x5b, .x=0xad, .y=0x6f, .sp=0xe0, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x9755, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x9755, .value=0xdc, .type=IO_READ},
        {.addr=0x9756, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02FA) {
    const struct CPU_State initial_cpu = {.pc=0x4b77, .a=0x07, .x=0x58, .y=0xc1, .sp=0xc5, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x4b77, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x4b78, .a=0x07, .x=0x58, .y=0xc0, .sp=0xc5, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x4b77, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x4b77, .value=0xdc, .type=IO_READ},
        {.addr=0x4b78, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02FB) {
    const struct CPU_State initial_cpu = {.pc=0xd0ba, .a=0xe8, .x=0xc6, .y=0x6b, .sp=0xaa, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xd0ba, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xd0bb, .a=0xe8, .x=0xc6, .y=0x6a, .sp=0xaa, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xd0ba, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xd0ba, .value=0xdc, .type=IO_READ},
        {.addr=0xd0bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02FC) {
    const struct CPU_State initial_cpu = {.pc=0xaf6c, .a=0x7c, .x=0x6e, .y=0xa2, .sp=0x39, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xaf6c, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xaf6d, .a=0x7c, .x=0x6e, .y=0xa1, .sp=0x39, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xaf6c, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xaf6c, .value=0xdc, .type=IO_READ},
        {.addr=0xaf6d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02FD) {
    const struct CPU_State initial_cpu = {.pc=0x6955, .a=0x89, .x=0x17, .y=0x22, .sp=0x14, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x6955, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x6956, .a=0x89, .x=0x17, .y=0x21, .sp=0x14, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x6955, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x6955, .value=0xdc, .type=IO_READ},
        {.addr=0x6956, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02FE) {
    const struct CPU_State initial_cpu = {.pc=0xa673, .a=0xd6, .x=0x31, .y=0x72, .sp=0xdf, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xa673, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xa674, .a=0xd6, .x=0x31, .y=0x71, .sp=0xdf, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xa673, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xa673, .value=0xdc, .type=IO_READ},
        {.addr=0xa674, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x8a9a, .a=0xf4, .x=0x4a, .y=0x56, .sp=0xee, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x8a9a, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8a9b, .a=0xf4, .x=0x4a, .y=0x55, .sp=0xee, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x8a9a, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x8a9a, .value=0xdc, .type=IO_READ},
        {.addr=0x8a9b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0300) {
    const struct CPU_State initial_cpu = {.pc=0x4ed3, .a=0xc2, .x=0x09, .y=0x2a, .sp=0x31, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x4ed3, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x4ed4, .a=0xc2, .x=0x09, .y=0x29, .sp=0x31, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x4ed3, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x4ed3, .value=0xdc, .type=IO_READ},
        {.addr=0x4ed4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0301) {
    const struct CPU_State initial_cpu = {.pc=0x9108, .a=0xc3, .x=0x81, .y=0x81, .sp=0x03, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x9108, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x9109, .a=0xc3, .x=0x81, .y=0x80, .sp=0x03, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x9108, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x9108, .value=0xdc, .type=IO_READ},
        {.addr=0x9109, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0302) {
    const struct CPU_State initial_cpu = {.pc=0x2f2e, .a=0x9f, .x=0x79, .y=0x39, .sp=0xe9, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x2f2e, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x2f2f, .a=0x9f, .x=0x79, .y=0x38, .sp=0xe9, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x2f2e, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x2f2e, .value=0xdc, .type=IO_READ},
        {.addr=0x2f2f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0303) {
    const struct CPU_State initial_cpu = {.pc=0x32b3, .a=0xb0, .x=0x1a, .y=0xe0, .sp=0x83, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x32b3, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x32b4, .a=0xb0, .x=0x1a, .y=0xdf, .sp=0x83, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x32b3, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x32b3, .value=0xdc, .type=IO_READ},
        {.addr=0x32b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0304) {
    const struct CPU_State initial_cpu = {.pc=0x3b37, .a=0x9a, .x=0xb5, .y=0xdc, .sp=0x47, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x3b37, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x3b38, .a=0x9a, .x=0xb5, .y=0xdb, .sp=0x47, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x3b37, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x3b37, .value=0xdc, .type=IO_READ},
        {.addr=0x3b38, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0305) {
    const struct CPU_State initial_cpu = {.pc=0xb169, .a=0xfa, .x=0xeb, .y=0xaf, .sp=0x1a, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xb169, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xb16a, .a=0xfa, .x=0xeb, .y=0xae, .sp=0x1a, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xb169, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xb169, .value=0xdc, .type=IO_READ},
        {.addr=0xb16a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0306) {
    const struct CPU_State initial_cpu = {.pc=0x32bd, .a=0x63, .x=0xcd, .y=0xb7, .sp=0xc0, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x32bd, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x32be, .a=0x63, .x=0xcd, .y=0xb6, .sp=0xc0, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x32bd, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x32bd, .value=0xdc, .type=IO_READ},
        {.addr=0x32be, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0307) {
    const struct CPU_State initial_cpu = {.pc=0x03d1, .a=0x91, .x=0x5a, .y=0xb1, .sp=0x9e, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x03d1, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x03d2, .a=0x91, .x=0x5a, .y=0xb0, .sp=0x9e, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x03d1, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x03d1, .value=0xdc, .type=IO_READ},
        {.addr=0x03d2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0308) {
    const struct CPU_State initial_cpu = {.pc=0xf080, .a=0x09, .x=0x42, .y=0x07, .sp=0x04, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xf080, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xf081, .a=0x09, .x=0x42, .y=0x06, .sp=0x04, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xf080, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xf080, .value=0xdc, .type=IO_READ},
        {.addr=0xf081, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0309) {
    const struct CPU_State initial_cpu = {.pc=0x7d7e, .a=0x84, .x=0xd1, .y=0xed, .sp=0x88, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x7d7e, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x7d7f, .a=0x84, .x=0xd1, .y=0xec, .sp=0x88, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x7d7e, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x7d7e, .value=0xdc, .type=IO_READ},
        {.addr=0x7d7f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_030A) {
    const struct CPU_State initial_cpu = {.pc=0x6a77, .a=0xd6, .x=0x00, .y=0xa5, .sp=0x71, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x6a77, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x6a78, .a=0xd6, .x=0x00, .y=0xa4, .sp=0x71, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x6a77, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x6a77, .value=0xdc, .type=IO_READ},
        {.addr=0x6a78, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_030B) {
    const struct CPU_State initial_cpu = {.pc=0xad0f, .a=0x80, .x=0x07, .y=0x50, .sp=0x1d, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xad0f, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xad10, .a=0x80, .x=0x07, .y=0x4f, .sp=0x1d, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xad0f, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xad0f, .value=0xdc, .type=IO_READ},
        {.addr=0xad10, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_030C) {
    const struct CPU_State initial_cpu = {.pc=0x7b48, .a=0xf6, .x=0x16, .y=0x01, .sp=0x7d, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x7b48, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x7b49, .a=0xf6, .x=0x16, .y=0x00, .sp=0x7d, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x7b48, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x7b48, .value=0xdc, .type=IO_READ},
        {.addr=0x7b49, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_030D) {
    const struct CPU_State initial_cpu = {.pc=0xb026, .a=0xa5, .x=0xa2, .y=0xf5, .sp=0xb7, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xb026, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xb027, .a=0xa5, .x=0xa2, .y=0xf4, .sp=0xb7, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xb026, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xb026, .value=0xdc, .type=IO_READ},
        {.addr=0xb027, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_030E) {
    const struct CPU_State initial_cpu = {.pc=0x1ca0, .a=0xb5, .x=0x32, .y=0xe0, .sp=0x14, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x1ca0, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x1ca1, .a=0xb5, .x=0x32, .y=0xdf, .sp=0x14, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x1ca0, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1ca0, .value=0xdc, .type=IO_READ},
        {.addr=0x1ca1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_030F) {
    const struct CPU_State initial_cpu = {.pc=0x7173, .a=0x93, .x=0x29, .y=0x32, .sp=0x0c, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x7173, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x7174, .a=0x93, .x=0x29, .y=0x31, .sp=0x0c, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x7173, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x7173, .value=0xdc, .type=IO_READ},
        {.addr=0x7174, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0310) {
    const struct CPU_State initial_cpu = {.pc=0x8e92, .a=0xbe, .x=0xf1, .y=0xf5, .sp=0x7b, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x8e92, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8e93, .a=0xbe, .x=0xf1, .y=0xf4, .sp=0x7b, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x8e92, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x8e92, .value=0xdc, .type=IO_READ},
        {.addr=0x8e93, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0311) {
    const struct CPU_State initial_cpu = {.pc=0x3cc9, .a=0x0d, .x=0x47, .y=0xb3, .sp=0x4c, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x3cc9, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x3cca, .a=0x0d, .x=0x47, .y=0xb2, .sp=0x4c, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x3cc9, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x3cc9, .value=0xdc, .type=IO_READ},
        {.addr=0x3cca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0312) {
    const struct CPU_State initial_cpu = {.pc=0xca6b, .a=0xbd, .x=0x69, .y=0x0f, .sp=0x75, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xca6b, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xca6c, .a=0xbd, .x=0x69, .y=0x0e, .sp=0x75, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xca6b, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xca6b, .value=0xdc, .type=IO_READ},
        {.addr=0xca6c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0313) {
    const struct CPU_State initial_cpu = {.pc=0x64b1, .a=0xde, .x=0x69, .y=0x80, .sp=0x60, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x64b1, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x64b2, .a=0xde, .x=0x69, .y=0x7f, .sp=0x60, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x64b1, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x64b1, .value=0xdc, .type=IO_READ},
        {.addr=0x64b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0314) {
    const struct CPU_State initial_cpu = {.pc=0xee23, .a=0xda, .x=0x45, .y=0x33, .sp=0x29, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xee23, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xee24, .a=0xda, .x=0x45, .y=0x32, .sp=0x29, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xee23, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xee23, .value=0xdc, .type=IO_READ},
        {.addr=0xee24, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0315) {
    const struct CPU_State initial_cpu = {.pc=0x1fa6, .a=0x16, .x=0x8a, .y=0x1e, .sp=0xe6, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x1fa6, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x1fa7, .a=0x16, .x=0x8a, .y=0x1d, .sp=0xe6, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x1fa6, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1fa6, .value=0xdc, .type=IO_READ},
        {.addr=0x1fa7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0316) {
    const struct CPU_State initial_cpu = {.pc=0xf18a, .a=0x2b, .x=0xa9, .y=0x78, .sp=0xb6, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xf18a, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xf18b, .a=0x2b, .x=0xa9, .y=0x77, .sp=0xb6, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xf18a, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xf18a, .value=0xdc, .type=IO_READ},
        {.addr=0xf18b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0317) {
    const struct CPU_State initial_cpu = {.pc=0x5655, .a=0x8b, .x=0x59, .y=0xb3, .sp=0x97, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x5655, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x5656, .a=0x8b, .x=0x59, .y=0xb2, .sp=0x97, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x5655, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x5655, .value=0xdc, .type=IO_READ},
        {.addr=0x5656, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0318) {
    const struct CPU_State initial_cpu = {.pc=0x151e, .a=0xae, .x=0x83, .y=0x77, .sp=0x76, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x151e, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x151f, .a=0xae, .x=0x83, .y=0x76, .sp=0x76, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x151e, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x151e, .value=0xdc, .type=IO_READ},
        {.addr=0x151f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0319) {
    const struct CPU_State initial_cpu = {.pc=0x787b, .a=0x0b, .x=0xff, .y=0xb5, .sp=0x6e, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x787b, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x787c, .a=0x0b, .x=0xff, .y=0xb4, .sp=0x6e, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x787b, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x787b, .value=0xdc, .type=IO_READ},
        {.addr=0x787c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_031A) {
    const struct CPU_State initial_cpu = {.pc=0xe7d6, .a=0x08, .x=0x7c, .y=0xb0, .sp=0x48, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xe7d6, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xe7d7, .a=0x08, .x=0x7c, .y=0xaf, .sp=0x48, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xe7d6, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xe7d6, .value=0xdc, .type=IO_READ},
        {.addr=0xe7d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_031B) {
    const struct CPU_State initial_cpu = {.pc=0xf3c3, .a=0xd4, .x=0xcd, .y=0x5c, .sp=0x95, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xf3c3, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xf3c4, .a=0xd4, .x=0xcd, .y=0x5b, .sp=0x95, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xf3c3, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xf3c3, .value=0xdc, .type=IO_READ},
        {.addr=0xf3c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_031C) {
    const struct CPU_State initial_cpu = {.pc=0xa26d, .a=0x6d, .x=0xc8, .y=0xb6, .sp=0x6e, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xa26d, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xa26e, .a=0x6d, .x=0xc8, .y=0xb5, .sp=0x6e, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xa26d, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xa26d, .value=0xdc, .type=IO_READ},
        {.addr=0xa26e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_031D) {
    const struct CPU_State initial_cpu = {.pc=0x0f57, .a=0x6b, .x=0xf5, .y=0x02, .sp=0x6a, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x0f57, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x0f58, .a=0x6b, .x=0xf5, .y=0x01, .sp=0x6a, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x0f57, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x0f57, .value=0xdc, .type=IO_READ},
        {.addr=0x0f58, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_031E) {
    const struct CPU_State initial_cpu = {.pc=0x5793, .a=0x4e, .x=0x4e, .y=0xb7, .sp=0xbc, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x5793, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x5794, .a=0x4e, .x=0x4e, .y=0xb6, .sp=0xbc, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x5793, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x5793, .value=0xdc, .type=IO_READ},
        {.addr=0x5794, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_031F) {
    const struct CPU_State initial_cpu = {.pc=0x76d0, .a=0xcb, .x=0x51, .y=0x46, .sp=0xb3, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x76d0, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x76d1, .a=0xcb, .x=0x51, .y=0x45, .sp=0xb3, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x76d0, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x76d0, .value=0xdc, .type=IO_READ},
        {.addr=0x76d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0320) {
    const struct CPU_State initial_cpu = {.pc=0x66f0, .a=0xa4, .x=0x76, .y=0x12, .sp=0xf8, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x66f0, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x66f1, .a=0xa4, .x=0x76, .y=0x11, .sp=0xf8, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x66f0, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x66f0, .value=0xdc, .type=IO_READ},
        {.addr=0x66f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0321) {
    const struct CPU_State initial_cpu = {.pc=0x7cd2, .a=0x5f, .x=0x6b, .y=0x4a, .sp=0x06, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x7cd2, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x7cd3, .a=0x5f, .x=0x6b, .y=0x49, .sp=0x06, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x7cd2, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x7cd2, .value=0xdc, .type=IO_READ},
        {.addr=0x7cd3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0322) {
    const struct CPU_State initial_cpu = {.pc=0x3fc5, .a=0x7d, .x=0xb1, .y=0xa0, .sp=0x40, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x3fc5, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x3fc6, .a=0x7d, .x=0xb1, .y=0x9f, .sp=0x40, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x3fc5, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x3fc5, .value=0xdc, .type=IO_READ},
        {.addr=0x3fc6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0323) {
    const struct CPU_State initial_cpu = {.pc=0xefb9, .a=0x9b, .x=0x3b, .y=0xb4, .sp=0x9c, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xefb9, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xefba, .a=0x9b, .x=0x3b, .y=0xb3, .sp=0x9c, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xefb9, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xefb9, .value=0xdc, .type=IO_READ},
        {.addr=0xefba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0324) {
    const struct CPU_State initial_cpu = {.pc=0xe4b3, .a=0xd5, .x=0x3f, .y=0xb0, .sp=0xf3, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xe4b3, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xe4b4, .a=0xd5, .x=0x3f, .y=0xaf, .sp=0xf3, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xe4b3, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xe4b3, .value=0xdc, .type=IO_READ},
        {.addr=0xe4b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0325) {
    const struct CPU_State initial_cpu = {.pc=0xa6ed, .a=0x8d, .x=0x06, .y=0x99, .sp=0x41, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xa6ed, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xa6ee, .a=0x8d, .x=0x06, .y=0x98, .sp=0x41, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xa6ed, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xa6ed, .value=0xdc, .type=IO_READ},
        {.addr=0xa6ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0326) {
    const struct CPU_State initial_cpu = {.pc=0xa87a, .a=0x83, .x=0xf8, .y=0x09, .sp=0x56, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xa87a, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xa87b, .a=0x83, .x=0xf8, .y=0x08, .sp=0x56, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xa87a, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xa87a, .value=0xdc, .type=IO_READ},
        {.addr=0xa87b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0327) {
    const struct CPU_State initial_cpu = {.pc=0xe172, .a=0x60, .x=0xcf, .y=0xb9, .sp=0x44, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xe172, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xe173, .a=0x60, .x=0xcf, .y=0xb8, .sp=0x44, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xe172, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xe172, .value=0xdc, .type=IO_READ},
        {.addr=0xe173, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0328) {
    const struct CPU_State initial_cpu = {.pc=0x1a52, .a=0x10, .x=0x5a, .y=0x17, .sp=0x66, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x1a52, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x1a53, .a=0x10, .x=0x5a, .y=0x16, .sp=0x66, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x1a52, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1a52, .value=0xdc, .type=IO_READ},
        {.addr=0x1a53, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0329) {
    const struct CPU_State initial_cpu = {.pc=0xda74, .a=0x1d, .x=0x76, .y=0xd4, .sp=0xc7, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xda74, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xda75, .a=0x1d, .x=0x76, .y=0xd3, .sp=0xc7, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xda74, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xda74, .value=0xdc, .type=IO_READ},
        {.addr=0xda75, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_032A) {
    const struct CPU_State initial_cpu = {.pc=0xa5b2, .a=0x62, .x=0x34, .y=0xf0, .sp=0xef, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xa5b2, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xa5b3, .a=0x62, .x=0x34, .y=0xef, .sp=0xef, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xa5b2, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xa5b2, .value=0xdc, .type=IO_READ},
        {.addr=0xa5b3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_032B) {
    const struct CPU_State initial_cpu = {.pc=0xd6da, .a=0xa5, .x=0xf5, .y=0xd1, .sp=0xed, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xd6da, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xd6db, .a=0xa5, .x=0xf5, .y=0xd0, .sp=0xed, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xd6da, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xd6da, .value=0xdc, .type=IO_READ},
        {.addr=0xd6db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_032C) {
    const struct CPU_State initial_cpu = {.pc=0x70bd, .a=0x17, .x=0x0c, .y=0xb8, .sp=0x63, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x70bd, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x70be, .a=0x17, .x=0x0c, .y=0xb7, .sp=0x63, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x70bd, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x70bd, .value=0xdc, .type=IO_READ},
        {.addr=0x70be, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_032D) {
    const struct CPU_State initial_cpu = {.pc=0x6181, .a=0x21, .x=0x06, .y=0x19, .sp=0x6f, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x6181, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x6182, .a=0x21, .x=0x06, .y=0x18, .sp=0x6f, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x6181, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x6181, .value=0xdc, .type=IO_READ},
        {.addr=0x6182, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_032E) {
    const struct CPU_State initial_cpu = {.pc=0xe0ff, .a=0x78, .x=0x86, .y=0xa7, .sp=0x65, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xe0ff, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xe100, .a=0x78, .x=0x86, .y=0xa6, .sp=0x65, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xe0ff, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xe0ff, .value=0xdc, .type=IO_READ},
        {.addr=0xe100, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_032F) {
    const struct CPU_State initial_cpu = {.pc=0x3b14, .a=0x59, .x=0x77, .y=0xaf, .sp=0xe8, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x3b14, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x3b15, .a=0x59, .x=0x77, .y=0xae, .sp=0xe8, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x3b14, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x3b14, .value=0xdc, .type=IO_READ},
        {.addr=0x3b15, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0330) {
    const struct CPU_State initial_cpu = {.pc=0xdce3, .a=0x18, .x=0x1c, .y=0x0f, .sp=0xb9, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xdce3, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xdce4, .a=0x18, .x=0x1c, .y=0x0e, .sp=0xb9, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xdce3, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xdce3, .value=0xdc, .type=IO_READ},
        {.addr=0xdce4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0331) {
    const struct CPU_State initial_cpu = {.pc=0xb830, .a=0x48, .x=0x11, .y=0xab, .sp=0x70, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xb830, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xb831, .a=0x48, .x=0x11, .y=0xaa, .sp=0x70, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xb830, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xb830, .value=0xdc, .type=IO_READ},
        {.addr=0xb831, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0332) {
    const struct CPU_State initial_cpu = {.pc=0x8a80, .a=0xd6, .x=0x7d, .y=0xb5, .sp=0x75, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x8a80, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8a81, .a=0xd6, .x=0x7d, .y=0xb4, .sp=0x75, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x8a80, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x8a80, .value=0xdc, .type=IO_READ},
        {.addr=0x8a81, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0333) {
    const struct CPU_State initial_cpu = {.pc=0xb30b, .a=0x82, .x=0x7a, .y=0xec, .sp=0x27, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xb30b, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xb30c, .a=0x82, .x=0x7a, .y=0xeb, .sp=0x27, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xb30b, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xb30b, .value=0xdc, .type=IO_READ},
        {.addr=0xb30c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0334) {
    const struct CPU_State initial_cpu = {.pc=0x23dc, .a=0x68, .x=0x7b, .y=0xda, .sp=0xef, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x23dc, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x23dd, .a=0x68, .x=0x7b, .y=0xd9, .sp=0xef, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x23dc, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x23dc, .value=0xdc, .type=IO_READ},
        {.addr=0x23dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0335) {
    const struct CPU_State initial_cpu = {.pc=0x8a82, .a=0x40, .x=0x5f, .y=0xa3, .sp=0xdc, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x8a82, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8a83, .a=0x40, .x=0x5f, .y=0xa2, .sp=0xdc, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x8a82, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x8a82, .value=0xdc, .type=IO_READ},
        {.addr=0x8a83, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0336) {
    const struct CPU_State initial_cpu = {.pc=0x1988, .a=0x6b, .x=0xe6, .y=0x7e, .sp=0xee, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x1988, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x1989, .a=0x6b, .x=0xe6, .y=0x7d, .sp=0xee, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x1988, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1988, .value=0xdc, .type=IO_READ},
        {.addr=0x1989, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0337) {
    const struct CPU_State initial_cpu = {.pc=0x2341, .a=0xb6, .x=0x87, .y=0xdd, .sp=0x1b, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x2341, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x2342, .a=0xb6, .x=0x87, .y=0xdc, .sp=0x1b, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x2341, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x2341, .value=0xdc, .type=IO_READ},
        {.addr=0x2342, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0338) {
    const struct CPU_State initial_cpu = {.pc=0x0c1a, .a=0xaf, .x=0x77, .y=0xf0, .sp=0x3a, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x0c1a, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x0c1b, .a=0xaf, .x=0x77, .y=0xef, .sp=0x3a, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x0c1a, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x0c1a, .value=0xdc, .type=IO_READ},
        {.addr=0x0c1b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0339) {
    const struct CPU_State initial_cpu = {.pc=0xce22, .a=0xd1, .x=0x06, .y=0x73, .sp=0xe8, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xce22, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xce23, .a=0xd1, .x=0x06, .y=0x72, .sp=0xe8, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xce22, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xce22, .value=0xdc, .type=IO_READ},
        {.addr=0xce23, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_033A) {
    const struct CPU_State initial_cpu = {.pc=0x8e3f, .a=0xbf, .x=0xb1, .y=0x5d, .sp=0x57, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x8e3f, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8e40, .a=0xbf, .x=0xb1, .y=0x5c, .sp=0x57, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x8e3f, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x8e3f, .value=0xdc, .type=IO_READ},
        {.addr=0x8e40, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_033B) {
    const struct CPU_State initial_cpu = {.pc=0xa86a, .a=0xaa, .x=0x51, .y=0xb4, .sp=0x0f, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xa86a, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xa86b, .a=0xaa, .x=0x51, .y=0xb3, .sp=0x0f, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xa86a, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xa86a, .value=0xdc, .type=IO_READ},
        {.addr=0xa86b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_033C) {
    const struct CPU_State initial_cpu = {.pc=0x71cd, .a=0x78, .x=0x8f, .y=0xea, .sp=0x96, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x71cd, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x71ce, .a=0x78, .x=0x8f, .y=0xe9, .sp=0x96, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x71cd, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x71cd, .value=0xdc, .type=IO_READ},
        {.addr=0x71ce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_033D) {
    const struct CPU_State initial_cpu = {.pc=0x5afb, .a=0x83, .x=0x89, .y=0x6d, .sp=0xbe, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x5afb, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x5afc, .a=0x83, .x=0x89, .y=0x6c, .sp=0xbe, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x5afb, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x5afb, .value=0xdc, .type=IO_READ},
        {.addr=0x5afc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_033E) {
    const struct CPU_State initial_cpu = {.pc=0xd211, .a=0x29, .x=0x46, .y=0xe9, .sp=0xf9, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xd211, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xd212, .a=0x29, .x=0x46, .y=0xe8, .sp=0xf9, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xd211, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xd211, .value=0xdc, .type=IO_READ},
        {.addr=0xd212, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_033F) {
    const struct CPU_State initial_cpu = {.pc=0xa2f1, .a=0xdd, .x=0x2e, .y=0xd7, .sp=0x22, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xa2f1, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xa2f2, .a=0xdd, .x=0x2e, .y=0xd6, .sp=0x22, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xa2f1, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xa2f1, .value=0xdc, .type=IO_READ},
        {.addr=0xa2f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0340) {
    const struct CPU_State initial_cpu = {.pc=0x1ffa, .a=0x37, .x=0xed, .y=0x8d, .sp=0xd9, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x1ffa, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x1ffb, .a=0x37, .x=0xed, .y=0x8c, .sp=0xd9, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x1ffa, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1ffa, .value=0xdc, .type=IO_READ},
        {.addr=0x1ffb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0341) {
    const struct CPU_State initial_cpu = {.pc=0x1538, .a=0xe4, .x=0xa4, .y=0x9e, .sp=0xf7, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x1538, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x1539, .a=0xe4, .x=0xa4, .y=0x9d, .sp=0xf7, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x1538, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1538, .value=0xdc, .type=IO_READ},
        {.addr=0x1539, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0342) {
    const struct CPU_State initial_cpu = {.pc=0xe215, .a=0xfc, .x=0x6f, .y=0x88, .sp=0xa7, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xe215, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xe216, .a=0xfc, .x=0x6f, .y=0x87, .sp=0xa7, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xe215, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xe215, .value=0xdc, .type=IO_READ},
        {.addr=0xe216, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0343) {
    const struct CPU_State initial_cpu = {.pc=0x31e1, .a=0xfe, .x=0xf6, .y=0x51, .sp=0x99, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x31e1, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x31e2, .a=0xfe, .x=0xf6, .y=0x50, .sp=0x99, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x31e1, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x31e1, .value=0xdc, .type=IO_READ},
        {.addr=0x31e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0344) {
    const struct CPU_State initial_cpu = {.pc=0xbf48, .a=0xac, .x=0x78, .y=0x66, .sp=0xd8, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xbf48, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xbf49, .a=0xac, .x=0x78, .y=0x65, .sp=0xd8, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xbf48, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xbf48, .value=0xdc, .type=IO_READ},
        {.addr=0xbf49, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0345) {
    const struct CPU_State initial_cpu = {.pc=0x62bc, .a=0x11, .x=0xf9, .y=0x94, .sp=0x04, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x62bc, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x62bd, .a=0x11, .x=0xf9, .y=0x93, .sp=0x04, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x62bc, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x62bc, .value=0xdc, .type=IO_READ},
        {.addr=0x62bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0346) {
    const struct CPU_State initial_cpu = {.pc=0xe5ef, .a=0x4b, .x=0x86, .y=0x6d, .sp=0x83, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xe5ef, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xe5f0, .a=0x4b, .x=0x86, .y=0x6c, .sp=0x83, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xe5ef, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xe5ef, .value=0xdc, .type=IO_READ},
        {.addr=0xe5f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0347) {
    const struct CPU_State initial_cpu = {.pc=0x9065, .a=0xe6, .x=0x3a, .y=0xa2, .sp=0xcb, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x9065, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x9066, .a=0xe6, .x=0x3a, .y=0xa1, .sp=0xcb, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x9065, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x9065, .value=0xdc, .type=IO_READ},
        {.addr=0x9066, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0348) {
    const struct CPU_State initial_cpu = {.pc=0x5c7b, .a=0xab, .x=0x61, .y=0xf7, .sp=0x69, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x5c7b, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x5c7c, .a=0xab, .x=0x61, .y=0xf6, .sp=0x69, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x5c7b, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x5c7b, .value=0xdc, .type=IO_READ},
        {.addr=0x5c7c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0349) {
    const struct CPU_State initial_cpu = {.pc=0x99ba, .a=0x71, .x=0xc7, .y=0x07, .sp=0x0a, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x99ba, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x99bb, .a=0x71, .x=0xc7, .y=0x06, .sp=0x0a, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x99ba, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x99ba, .value=0xdc, .type=IO_READ},
        {.addr=0x99bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_034A) {
    const struct CPU_State initial_cpu = {.pc=0x5e73, .a=0x3d, .x=0xa5, .y=0xef, .sp=0x70, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x5e73, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x5e74, .a=0x3d, .x=0xa5, .y=0xee, .sp=0x70, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x5e73, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x5e73, .value=0xdc, .type=IO_READ},
        {.addr=0x5e74, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_034B) {
    const struct CPU_State initial_cpu = {.pc=0x56f5, .a=0x1d, .x=0xf5, .y=0x60, .sp=0x51, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x56f5, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x56f6, .a=0x1d, .x=0xf5, .y=0x5f, .sp=0x51, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x56f5, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x56f5, .value=0xdc, .type=IO_READ},
        {.addr=0x56f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_034C) {
    const struct CPU_State initial_cpu = {.pc=0xda14, .a=0x15, .x=0x22, .y=0x5c, .sp=0x67, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xda14, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xda15, .a=0x15, .x=0x22, .y=0x5b, .sp=0x67, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xda14, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xda14, .value=0xdc, .type=IO_READ},
        {.addr=0xda15, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_034D) {
    const struct CPU_State initial_cpu = {.pc=0x2363, .a=0xb5, .x=0x05, .y=0xa7, .sp=0x69, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x2363, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x2364, .a=0xb5, .x=0x05, .y=0xa6, .sp=0x69, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x2363, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x2363, .value=0xdc, .type=IO_READ},
        {.addr=0x2364, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_034E) {
    const struct CPU_State initial_cpu = {.pc=0x7256, .a=0xe6, .x=0x94, .y=0xcc, .sp=0x70, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x7256, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x7257, .a=0xe6, .x=0x94, .y=0xcb, .sp=0x70, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x7256, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x7256, .value=0xdc, .type=IO_READ},
        {.addr=0x7257, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_034F) {
    const struct CPU_State initial_cpu = {.pc=0x4aa3, .a=0x59, .x=0xba, .y=0xc6, .sp=0xb0, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x4aa3, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x4aa4, .a=0x59, .x=0xba, .y=0xc5, .sp=0xb0, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x4aa3, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x4aa3, .value=0xdc, .type=IO_READ},
        {.addr=0x4aa4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0350) {
    const struct CPU_State initial_cpu = {.pc=0x2e77, .a=0xcb, .x=0xc0, .y=0x3a, .sp=0x6c, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x2e77, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x2e78, .a=0xcb, .x=0xc0, .y=0x39, .sp=0x6c, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x2e77, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x2e77, .value=0xdc, .type=IO_READ},
        {.addr=0x2e78, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0351) {
    const struct CPU_State initial_cpu = {.pc=0xc52e, .a=0x20, .x=0xf2, .y=0x01, .sp=0xdd, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xc52e, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xc52f, .a=0x20, .x=0xf2, .y=0x00, .sp=0xdd, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0xc52e, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xc52e, .value=0xdc, .type=IO_READ},
        {.addr=0xc52f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0352) {
    const struct CPU_State initial_cpu = {.pc=0x4998, .a=0x48, .x=0xad, .y=0x1a, .sp=0x98, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x4998, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x4999, .a=0x48, .x=0xad, .y=0x19, .sp=0x98, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x4998, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x4998, .value=0xdc, .type=IO_READ},
        {.addr=0x4999, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0353) {
    const struct CPU_State initial_cpu = {.pc=0x8a71, .a=0x91, .x=0x0b, .y=0xe5, .sp=0x04, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x8a71, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8a72, .a=0x91, .x=0x0b, .y=0xe4, .sp=0x04, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x8a71, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x8a71, .value=0xdc, .type=IO_READ},
        {.addr=0x8a72, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0354) {
    const struct CPU_State initial_cpu = {.pc=0xed4b, .a=0xdf, .x=0xb5, .y=0x99, .sp=0x30, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xed4b, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xed4c, .a=0xdf, .x=0xb5, .y=0x98, .sp=0x30, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xed4b, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xed4b, .value=0xdc, .type=IO_READ},
        {.addr=0xed4c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0355) {
    const struct CPU_State initial_cpu = {.pc=0x19f2, .a=0x46, .x=0x43, .y=0x86, .sp=0xc4, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x19f2, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x19f3, .a=0x46, .x=0x43, .y=0x85, .sp=0xc4, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x19f2, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x19f2, .value=0xdc, .type=IO_READ},
        {.addr=0x19f3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0356) {
    const struct CPU_State initial_cpu = {.pc=0x38b7, .a=0x08, .x=0x3f, .y=0x97, .sp=0x41, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x38b7, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x38b8, .a=0x08, .x=0x3f, .y=0x96, .sp=0x41, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x38b7, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x38b7, .value=0xdc, .type=IO_READ},
        {.addr=0x38b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0357) {
    const struct CPU_State initial_cpu = {.pc=0xe45c, .a=0xc6, .x=0x7c, .y=0x7e, .sp=0x15, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xe45c, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xe45d, .a=0xc6, .x=0x7c, .y=0x7d, .sp=0x15, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xe45c, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xe45c, .value=0xdc, .type=IO_READ},
        {.addr=0xe45d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0358) {
    const struct CPU_State initial_cpu = {.pc=0xbead, .a=0x3a, .x=0x6a, .y=0xf2, .sp=0x7a, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xbead, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xbeae, .a=0x3a, .x=0x6a, .y=0xf1, .sp=0x7a, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xbead, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xbead, .value=0xdc, .type=IO_READ},
        {.addr=0xbeae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0359) {
    const struct CPU_State initial_cpu = {.pc=0x092f, .a=0xfd, .x=0xf3, .y=0x71, .sp=0x6b, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x092f, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x0930, .a=0xfd, .x=0xf3, .y=0x70, .sp=0x6b, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x092f, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x092f, .value=0xdc, .type=IO_READ},
        {.addr=0x0930, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_035A) {
    const struct CPU_State initial_cpu = {.pc=0x3fc1, .a=0x91, .x=0x55, .y=0x7d, .sp=0x85, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x3fc1, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x3fc2, .a=0x91, .x=0x55, .y=0x7c, .sp=0x85, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x3fc1, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x3fc1, .value=0xdc, .type=IO_READ},
        {.addr=0x3fc2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_035B) {
    const struct CPU_State initial_cpu = {.pc=0x1934, .a=0xc8, .x=0xd6, .y=0x67, .sp=0xe7, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x1934, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x1935, .a=0xc8, .x=0xd6, .y=0x66, .sp=0xe7, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x1934, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1934, .value=0xdc, .type=IO_READ},
        {.addr=0x1935, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_035C) {
    const struct CPU_State initial_cpu = {.pc=0x96fd, .a=0x3a, .x=0xce, .y=0x71, .sp=0x97, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x96fd, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x96fe, .a=0x3a, .x=0xce, .y=0x70, .sp=0x97, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x96fd, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x96fd, .value=0xdc, .type=IO_READ},
        {.addr=0x96fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_035D) {
    const struct CPU_State initial_cpu = {.pc=0x0684, .a=0xaf, .x=0x1a, .y=0x60, .sp=0x08, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x0684, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x0685, .a=0xaf, .x=0x1a, .y=0x5f, .sp=0x08, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x0684, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x0684, .value=0xdc, .type=IO_READ},
        {.addr=0x0685, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_035E) {
    const struct CPU_State initial_cpu = {.pc=0xd671, .a=0x20, .x=0xb3, .y=0x20, .sp=0xf4, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xd671, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xd672, .a=0x20, .x=0xb3, .y=0x1f, .sp=0xf4, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xd671, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xd671, .value=0xdc, .type=IO_READ},
        {.addr=0xd672, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_035F) {
    const struct CPU_State initial_cpu = {.pc=0xf213, .a=0x34, .x=0xe7, .y=0x96, .sp=0x07, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xf213, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xf214, .a=0x34, .x=0xe7, .y=0x95, .sp=0x07, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xf213, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xf213, .value=0xdc, .type=IO_READ},
        {.addr=0xf214, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0360) {
    const struct CPU_State initial_cpu = {.pc=0xe734, .a=0xa7, .x=0x57, .y=0x91, .sp=0x71, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xe734, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xe735, .a=0xa7, .x=0x57, .y=0x90, .sp=0x71, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xe734, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xe734, .value=0xdc, .type=IO_READ},
        {.addr=0xe735, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0361) {
    const struct CPU_State initial_cpu = {.pc=0x8bc4, .a=0xb7, .x=0x85, .y=0xd8, .sp=0x9d, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x8bc4, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8bc5, .a=0xb7, .x=0x85, .y=0xd7, .sp=0x9d, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x8bc4, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x8bc4, .value=0xdc, .type=IO_READ},
        {.addr=0x8bc5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0362) {
    const struct CPU_State initial_cpu = {.pc=0x4b50, .a=0x6d, .x=0x16, .y=0x19, .sp=0x18, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x4b50, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x4b51, .a=0x6d, .x=0x16, .y=0x18, .sp=0x18, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x4b50, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x4b50, .value=0xdc, .type=IO_READ},
        {.addr=0x4b51, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0363) {
    const struct CPU_State initial_cpu = {.pc=0x50a7, .a=0xd6, .x=0xe5, .y=0x86, .sp=0xc7, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x50a7, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x50a8, .a=0xd6, .x=0xe5, .y=0x85, .sp=0xc7, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x50a7, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x50a7, .value=0xdc, .type=IO_READ},
        {.addr=0x50a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0364) {
    const struct CPU_State initial_cpu = {.pc=0xb470, .a=0x96, .x=0xe9, .y=0xca, .sp=0x95, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xb470, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xb471, .a=0x96, .x=0xe9, .y=0xc9, .sp=0x95, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xb470, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xb470, .value=0xdc, .type=IO_READ},
        {.addr=0xb471, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0365) {
    const struct CPU_State initial_cpu = {.pc=0xecee, .a=0x08, .x=0xab, .y=0x65, .sp=0x64, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xecee, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xecef, .a=0x08, .x=0xab, .y=0x64, .sp=0x64, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xecee, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xecee, .value=0xdc, .type=IO_READ},
        {.addr=0xecef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0366) {
    const struct CPU_State initial_cpu = {.pc=0x03f9, .a=0xa5, .x=0xad, .y=0x7c, .sp=0xcc, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x03f9, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x03fa, .a=0xa5, .x=0xad, .y=0x7b, .sp=0xcc, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x03f9, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x03f9, .value=0xdc, .type=IO_READ},
        {.addr=0x03fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0367) {
    const struct CPU_State initial_cpu = {.pc=0xe1d6, .a=0xa6, .x=0x30, .y=0x98, .sp=0xaa, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xe1d6, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xe1d7, .a=0xa6, .x=0x30, .y=0x97, .sp=0xaa, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xe1d6, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xe1d6, .value=0xdc, .type=IO_READ},
        {.addr=0xe1d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0368) {
    const struct CPU_State initial_cpu = {.pc=0x159a, .a=0xfe, .x=0xc9, .y=0x22, .sp=0x0b, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x159a, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x159b, .a=0xfe, .x=0xc9, .y=0x21, .sp=0x0b, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x159a, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x159a, .value=0xdc, .type=IO_READ},
        {.addr=0x159b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0369) {
    const struct CPU_State initial_cpu = {.pc=0xf481, .a=0x96, .x=0x7e, .y=0x75, .sp=0x8a, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xf481, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xf482, .a=0x96, .x=0x7e, .y=0x74, .sp=0x8a, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xf481, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xf481, .value=0xdc, .type=IO_READ},
        {.addr=0xf482, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_036A) {
    const struct CPU_State initial_cpu = {.pc=0xa8f3, .a=0xad, .x=0x1d, .y=0x2a, .sp=0x13, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xa8f3, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xa8f4, .a=0xad, .x=0x1d, .y=0x29, .sp=0x13, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xa8f3, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xa8f3, .value=0xdc, .type=IO_READ},
        {.addr=0xa8f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_036B) {
    const struct CPU_State initial_cpu = {.pc=0x46c2, .a=0x8f, .x=0x18, .y=0x9b, .sp=0x44, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x46c2, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x46c3, .a=0x8f, .x=0x18, .y=0x9a, .sp=0x44, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x46c2, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x46c2, .value=0xdc, .type=IO_READ},
        {.addr=0x46c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_036C) {
    const struct CPU_State initial_cpu = {.pc=0xfaf5, .a=0x63, .x=0x61, .y=0xae, .sp=0x72, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xfaf5, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xfaf6, .a=0x63, .x=0x61, .y=0xad, .sp=0x72, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xfaf5, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xfaf5, .value=0xdc, .type=IO_READ},
        {.addr=0xfaf6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_036D) {
    const struct CPU_State initial_cpu = {.pc=0x8918, .a=0x91, .x=0x2b, .y=0x1d, .sp=0x15, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x8918, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8919, .a=0x91, .x=0x2b, .y=0x1c, .sp=0x15, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x8918, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x8918, .value=0xdc, .type=IO_READ},
        {.addr=0x8919, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_036E) {
    const struct CPU_State initial_cpu = {.pc=0x9f4f, .a=0x50, .x=0x92, .y=0x01, .sp=0xda, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x9f4f, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x9f50, .a=0x50, .x=0x92, .y=0x00, .sp=0xda, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x9f4f, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x9f4f, .value=0xdc, .type=IO_READ},
        {.addr=0x9f50, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_036F) {
    const struct CPU_State initial_cpu = {.pc=0x7b53, .a=0xa5, .x=0xfe, .y=0xb5, .sp=0x57, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x7b53, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x7b54, .a=0xa5, .x=0xfe, .y=0xb4, .sp=0x57, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x7b53, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x7b53, .value=0xdc, .type=IO_READ},
        {.addr=0x7b54, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0370) {
    const struct CPU_State initial_cpu = {.pc=0x542f, .a=0xac, .x=0x7d, .y=0x37, .sp=0x82, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x542f, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x5430, .a=0xac, .x=0x7d, .y=0x36, .sp=0x82, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x542f, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x542f, .value=0xdc, .type=IO_READ},
        {.addr=0x5430, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0371) {
    const struct CPU_State initial_cpu = {.pc=0xc9bc, .a=0x7d, .x=0x70, .y=0xc8, .sp=0x2c, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xc9bc, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xc9bd, .a=0x7d, .x=0x70, .y=0xc7, .sp=0x2c, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xc9bc, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xc9bc, .value=0xdc, .type=IO_READ},
        {.addr=0xc9bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0372) {
    const struct CPU_State initial_cpu = {.pc=0x64ac, .a=0x45, .x=0x21, .y=0x40, .sp=0x6e, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x64ac, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x64ad, .a=0x45, .x=0x21, .y=0x3f, .sp=0x6e, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x64ac, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x64ac, .value=0xdc, .type=IO_READ},
        {.addr=0x64ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0373) {
    const struct CPU_State initial_cpu = {.pc=0x232e, .a=0x8b, .x=0x97, .y=0x23, .sp=0x08, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x232e, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x232f, .a=0x8b, .x=0x97, .y=0x22, .sp=0x08, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x232e, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x232e, .value=0xdc, .type=IO_READ},
        {.addr=0x232f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0374) {
    const struct CPU_State initial_cpu = {.pc=0x6cbc, .a=0xf2, .x=0x79, .y=0xb5, .sp=0xe0, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x6cbc, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x6cbd, .a=0xf2, .x=0x79, .y=0xb4, .sp=0xe0, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x6cbc, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x6cbc, .value=0xdc, .type=IO_READ},
        {.addr=0x6cbd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0375) {
    const struct CPU_State initial_cpu = {.pc=0xd78c, .a=0xe6, .x=0xdb, .y=0x78, .sp=0x3b, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xd78c, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xd78d, .a=0xe6, .x=0xdb, .y=0x77, .sp=0x3b, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xd78c, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xd78c, .value=0xdc, .type=IO_READ},
        {.addr=0xd78d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0376) {
    const struct CPU_State initial_cpu = {.pc=0xa7fe, .a=0x04, .x=0xfc, .y=0xc7, .sp=0xe4, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xa7fe, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xa7ff, .a=0x04, .x=0xfc, .y=0xc6, .sp=0xe4, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xa7fe, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xa7fe, .value=0xdc, .type=IO_READ},
        {.addr=0xa7ff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0377) {
    const struct CPU_State initial_cpu = {.pc=0xe8ad, .a=0x93, .x=0x49, .y=0xdf, .sp=0xe2, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xe8ad, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xe8ae, .a=0x93, .x=0x49, .y=0xde, .sp=0xe2, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xe8ad, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xe8ad, .value=0xdc, .type=IO_READ},
        {.addr=0xe8ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0378) {
    const struct CPU_State initial_cpu = {.pc=0xa2bf, .a=0xf0, .x=0xb5, .y=0x30, .sp=0xe2, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xa2bf, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xa2c0, .a=0xf0, .x=0xb5, .y=0x2f, .sp=0xe2, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xa2bf, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xa2bf, .value=0xdc, .type=IO_READ},
        {.addr=0xa2c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0379) {
    const struct CPU_State initial_cpu = {.pc=0x8763, .a=0x51, .x=0xba, .y=0x8c, .sp=0xd0, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x8763, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8764, .a=0x51, .x=0xba, .y=0x8b, .sp=0xd0, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x8763, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x8763, .value=0xdc, .type=IO_READ},
        {.addr=0x8764, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_037A) {
    const struct CPU_State initial_cpu = {.pc=0x9241, .a=0x6c, .x=0x7c, .y=0xa7, .sp=0x17, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x9241, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x9242, .a=0x6c, .x=0x7c, .y=0xa6, .sp=0x17, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x9241, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x9241, .value=0xdc, .type=IO_READ},
        {.addr=0x9242, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_037B) {
    const struct CPU_State initial_cpu = {.pc=0x5c0c, .a=0xce, .x=0x4f, .y=0xea, .sp=0x3e, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x5c0c, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x5c0d, .a=0xce, .x=0x4f, .y=0xe9, .sp=0x3e, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x5c0c, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x5c0c, .value=0xdc, .type=IO_READ},
        {.addr=0x5c0d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_037C) {
    const struct CPU_State initial_cpu = {.pc=0x63ca, .a=0x76, .x=0xf5, .y=0xfa, .sp=0x8a, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x63ca, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x63cb, .a=0x76, .x=0xf5, .y=0xf9, .sp=0x8a, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x63ca, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x63ca, .value=0xdc, .type=IO_READ},
        {.addr=0x63cb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_037D) {
    const struct CPU_State initial_cpu = {.pc=0xdcda, .a=0x42, .x=0xed, .y=0xce, .sp=0x9c, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xdcda, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xdcdb, .a=0x42, .x=0xed, .y=0xcd, .sp=0x9c, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xdcda, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xdcda, .value=0xdc, .type=IO_READ},
        {.addr=0xdcdb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_037E) {
    const struct CPU_State initial_cpu = {.pc=0x0c49, .a=0x18, .x=0x54, .y=0xb0, .sp=0xa8, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x0c49, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x0c4a, .a=0x18, .x=0x54, .y=0xaf, .sp=0xa8, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x0c49, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x0c49, .value=0xdc, .type=IO_READ},
        {.addr=0x0c4a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_037F) {
    const struct CPU_State initial_cpu = {.pc=0x3fb5, .a=0x1a, .x=0x16, .y=0xe2, .sp=0xc7, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x3fb5, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x3fb6, .a=0x1a, .x=0x16, .y=0xe1, .sp=0xc7, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x3fb5, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x3fb5, .value=0xdc, .type=IO_READ},
        {.addr=0x3fb6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0380) {
    const struct CPU_State initial_cpu = {.pc=0xcd2a, .a=0x2c, .x=0x71, .y=0xe0, .sp=0x1d, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xcd2a, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xcd2b, .a=0x2c, .x=0x71, .y=0xdf, .sp=0x1d, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xcd2a, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xcd2a, .value=0xdc, .type=IO_READ},
        {.addr=0xcd2b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0381) {
    const struct CPU_State initial_cpu = {.pc=0x5da4, .a=0xb2, .x=0xa7, .y=0x91, .sp=0x09, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x5da4, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x5da5, .a=0xb2, .x=0xa7, .y=0x90, .sp=0x09, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x5da4, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x5da4, .value=0xdc, .type=IO_READ},
        {.addr=0x5da5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0382) {
    const struct CPU_State initial_cpu = {.pc=0x0eda, .a=0x1d, .x=0xef, .y=0x52, .sp=0x29, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x0eda, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x0edb, .a=0x1d, .x=0xef, .y=0x51, .sp=0x29, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x0eda, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x0eda, .value=0xdc, .type=IO_READ},
        {.addr=0x0edb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0383) {
    const struct CPU_State initial_cpu = {.pc=0xdb15, .a=0x86, .x=0x16, .y=0x94, .sp=0x9a, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xdb15, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xdb16, .a=0x86, .x=0x16, .y=0x93, .sp=0x9a, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xdb15, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xdb15, .value=0xdc, .type=IO_READ},
        {.addr=0xdb16, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0384) {
    const struct CPU_State initial_cpu = {.pc=0x8619, .a=0xf2, .x=0x9b, .y=0x99, .sp=0x0c, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x8619, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x861a, .a=0xf2, .x=0x9b, .y=0x98, .sp=0x0c, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x8619, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x8619, .value=0xdc, .type=IO_READ},
        {.addr=0x861a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0385) {
    const struct CPU_State initial_cpu = {.pc=0x4959, .a=0x95, .x=0x41, .y=0xee, .sp=0xaf, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x4959, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x495a, .a=0x95, .x=0x41, .y=0xed, .sp=0xaf, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x4959, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x4959, .value=0xdc, .type=IO_READ},
        {.addr=0x495a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0386) {
    const struct CPU_State initial_cpu = {.pc=0xabf7, .a=0x45, .x=0x7d, .y=0xf2, .sp=0xe7, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xabf7, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xabf8, .a=0x45, .x=0x7d, .y=0xf1, .sp=0xe7, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xabf7, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xabf7, .value=0xdc, .type=IO_READ},
        {.addr=0xabf8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0387) {
    const struct CPU_State initial_cpu = {.pc=0x3963, .a=0xfd, .x=0xb1, .y=0xa9, .sp=0xd4, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x3963, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x3964, .a=0xfd, .x=0xb1, .y=0xa8, .sp=0xd4, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x3963, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x3963, .value=0xdc, .type=IO_READ},
        {.addr=0x3964, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0388) {
    const struct CPU_State initial_cpu = {.pc=0x8f64, .a=0xd0, .x=0x2e, .y=0xb7, .sp=0x0b, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x8f64, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8f65, .a=0xd0, .x=0x2e, .y=0xb6, .sp=0x0b, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x8f64, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x8f64, .value=0xdc, .type=IO_READ},
        {.addr=0x8f65, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0389) {
    const struct CPU_State initial_cpu = {.pc=0xa89d, .a=0xd8, .x=0x9a, .y=0x56, .sp=0xa7, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xa89d, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xa89e, .a=0xd8, .x=0x9a, .y=0x55, .sp=0xa7, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xa89d, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xa89d, .value=0xdc, .type=IO_READ},
        {.addr=0xa89e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_038A) {
    const struct CPU_State initial_cpu = {.pc=0xb27e, .a=0x59, .x=0xf1, .y=0x0b, .sp=0x4d, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xb27e, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xb27f, .a=0x59, .x=0xf1, .y=0x0a, .sp=0x4d, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xb27e, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xb27e, .value=0xdc, .type=IO_READ},
        {.addr=0xb27f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_038B) {
    const struct CPU_State initial_cpu = {.pc=0xd43c, .a=0x35, .x=0xa0, .y=0xdf, .sp=0xc2, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xd43c, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xd43d, .a=0x35, .x=0xa0, .y=0xde, .sp=0xc2, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xd43c, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xd43c, .value=0xdc, .type=IO_READ},
        {.addr=0xd43d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_038C) {
    const struct CPU_State initial_cpu = {.pc=0x489b, .a=0x63, .x=0xdc, .y=0xc6, .sp=0x03, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x489b, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x489c, .a=0x63, .x=0xdc, .y=0xc5, .sp=0x03, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x489b, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x489b, .value=0xdc, .type=IO_READ},
        {.addr=0x489c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_038D) {
    const struct CPU_State initial_cpu = {.pc=0x559c, .a=0x65, .x=0xdf, .y=0x54, .sp=0x2c, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x559c, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x559d, .a=0x65, .x=0xdf, .y=0x53, .sp=0x2c, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x559c, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x559c, .value=0xdc, .type=IO_READ},
        {.addr=0x559d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_038E) {
    const struct CPU_State initial_cpu = {.pc=0xbf21, .a=0xeb, .x=0x89, .y=0xf5, .sp=0xa5, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xbf21, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xbf22, .a=0xeb, .x=0x89, .y=0xf4, .sp=0xa5, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xbf21, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xbf21, .value=0xdc, .type=IO_READ},
        {.addr=0xbf22, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_038F) {
    const struct CPU_State initial_cpu = {.pc=0x218b, .a=0x7e, .x=0x84, .y=0x0c, .sp=0x0e, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x218b, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x218c, .a=0x7e, .x=0x84, .y=0x0b, .sp=0x0e, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x218b, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x218b, .value=0xdc, .type=IO_READ},
        {.addr=0x218c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0390) {
    const struct CPU_State initial_cpu = {.pc=0xc94a, .a=0x12, .x=0xf5, .y=0xb8, .sp=0x64, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xc94a, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xc94b, .a=0x12, .x=0xf5, .y=0xb7, .sp=0x64, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xc94a, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xc94a, .value=0xdc, .type=IO_READ},
        {.addr=0xc94b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0391) {
    const struct CPU_State initial_cpu = {.pc=0xeb49, .a=0x30, .x=0x28, .y=0xff, .sp=0xa8, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xeb49, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xeb4a, .a=0x30, .x=0x28, .y=0xfe, .sp=0xa8, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xeb49, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xeb49, .value=0xdc, .type=IO_READ},
        {.addr=0xeb4a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0392) {
    const struct CPU_State initial_cpu = {.pc=0xad6b, .a=0xd6, .x=0xa4, .y=0x48, .sp=0xef, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xad6b, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xad6c, .a=0xd6, .x=0xa4, .y=0x47, .sp=0xef, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xad6b, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xad6b, .value=0xdc, .type=IO_READ},
        {.addr=0xad6c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0393) {
    const struct CPU_State initial_cpu = {.pc=0xba9c, .a=0x5e, .x=0x64, .y=0xcf, .sp=0x40, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xba9c, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xba9d, .a=0x5e, .x=0x64, .y=0xce, .sp=0x40, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xba9c, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xba9c, .value=0xdc, .type=IO_READ},
        {.addr=0xba9d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0394) {
    const struct CPU_State initial_cpu = {.pc=0xf871, .a=0x61, .x=0xb6, .y=0x41, .sp=0x3f, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xf871, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xf872, .a=0x61, .x=0xb6, .y=0x40, .sp=0x3f, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xf871, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xf871, .value=0xdc, .type=IO_READ},
        {.addr=0xf872, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0395) {
    const struct CPU_State initial_cpu = {.pc=0x4e7d, .a=0x8d, .x=0x30, .y=0xfa, .sp=0xc3, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x4e7d, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x4e7e, .a=0x8d, .x=0x30, .y=0xf9, .sp=0xc3, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x4e7d, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x4e7d, .value=0xdc, .type=IO_READ},
        {.addr=0x4e7e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0396) {
    const struct CPU_State initial_cpu = {.pc=0xa4c5, .a=0x33, .x=0x81, .y=0x77, .sp=0xe6, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xa4c5, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xa4c6, .a=0x33, .x=0x81, .y=0x76, .sp=0xe6, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xa4c5, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xa4c5, .value=0xdc, .type=IO_READ},
        {.addr=0xa4c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0397) {
    const struct CPU_State initial_cpu = {.pc=0xa4c0, .a=0x71, .x=0x3c, .y=0xb0, .sp=0xa7, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xa4c0, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xa4c1, .a=0x71, .x=0x3c, .y=0xaf, .sp=0xa7, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xa4c0, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xa4c0, .value=0xdc, .type=IO_READ},
        {.addr=0xa4c1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0398) {
    const struct CPU_State initial_cpu = {.pc=0xb689, .a=0xdb, .x=0x37, .y=0x10, .sp=0x63, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xb689, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xb68a, .a=0xdb, .x=0x37, .y=0x0f, .sp=0x63, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xb689, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xb689, .value=0xdc, .type=IO_READ},
        {.addr=0xb68a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_0399) {
    const struct CPU_State initial_cpu = {.pc=0x1e4c, .a=0x7e, .x=0x8e, .y=0xaa, .sp=0xee, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x1e4c, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x1e4d, .a=0x7e, .x=0x8e, .y=0xa9, .sp=0xee, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x1e4c, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1e4c, .value=0xdc, .type=IO_READ},
        {.addr=0x1e4d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_039A) {
    const struct CPU_State initial_cpu = {.pc=0xa945, .a=0x08, .x=0xd3, .y=0x69, .sp=0xe3, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xa945, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xa946, .a=0x08, .x=0xd3, .y=0x68, .sp=0xe3, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xa945, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xa945, .value=0xdc, .type=IO_READ},
        {.addr=0xa946, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_039B) {
    const struct CPU_State initial_cpu = {.pc=0x806f, .a=0x67, .x=0xe4, .y=0xb8, .sp=0x1a, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x806f, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8070, .a=0x67, .x=0xe4, .y=0xb7, .sp=0x1a, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x806f, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x806f, .value=0xdc, .type=IO_READ},
        {.addr=0x8070, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_039C) {
    const struct CPU_State initial_cpu = {.pc=0xdaec, .a=0xa4, .x=0xd3, .y=0x10, .sp=0x17, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xdaec, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xdaed, .a=0xa4, .x=0xd3, .y=0x0f, .sp=0x17, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xdaec, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xdaec, .value=0xdc, .type=IO_READ},
        {.addr=0xdaed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_039D) {
    const struct CPU_State initial_cpu = {.pc=0xdae5, .a=0x63, .x=0xf2, .y=0xfa, .sp=0xac, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xdae5, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xdae6, .a=0x63, .x=0xf2, .y=0xf9, .sp=0xac, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xdae5, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xdae5, .value=0xdc, .type=IO_READ},
        {.addr=0xdae6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_039E) {
    const struct CPU_State initial_cpu = {.pc=0x50a7, .a=0x92, .x=0xf0, .y=0x70, .sp=0x7c, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x50a7, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x50a8, .a=0x92, .x=0xf0, .y=0x6f, .sp=0x7c, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x50a7, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x50a7, .value=0xdc, .type=IO_READ},
        {.addr=0x50a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_039F) {
    const struct CPU_State initial_cpu = {.pc=0x3f72, .a=0x1d, .x=0xa9, .y=0x8b, .sp=0x82, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x3f72, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x3f73, .a=0x1d, .x=0xa9, .y=0x8a, .sp=0x82, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x3f72, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x3f72, .value=0xdc, .type=IO_READ},
        {.addr=0x3f73, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03A0) {
    const struct CPU_State initial_cpu = {.pc=0x1e2e, .a=0x50, .x=0x10, .y=0x6d, .sp=0x24, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x1e2e, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x1e2f, .a=0x50, .x=0x10, .y=0x6c, .sp=0x24, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x1e2e, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1e2e, .value=0xdc, .type=IO_READ},
        {.addr=0x1e2f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03A1) {
    const struct CPU_State initial_cpu = {.pc=0xab2b, .a=0x6c, .x=0xe8, .y=0xe4, .sp=0xda, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xab2b, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xab2c, .a=0x6c, .x=0xe8, .y=0xe3, .sp=0xda, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xab2b, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xab2b, .value=0xdc, .type=IO_READ},
        {.addr=0xab2c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03A2) {
    const struct CPU_State initial_cpu = {.pc=0x37c8, .a=0xc3, .x=0xcb, .y=0x51, .sp=0x56, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x37c8, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x37c9, .a=0xc3, .x=0xcb, .y=0x50, .sp=0x56, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x37c8, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x37c8, .value=0xdc, .type=IO_READ},
        {.addr=0x37c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03A3) {
    const struct CPU_State initial_cpu = {.pc=0xd8c2, .a=0x53, .x=0x69, .y=0x8e, .sp=0x76, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xd8c2, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xd8c3, .a=0x53, .x=0x69, .y=0x8d, .sp=0x76, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xd8c2, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xd8c2, .value=0xdc, .type=IO_READ},
        {.addr=0xd8c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03A4) {
    const struct CPU_State initial_cpu = {.pc=0x1710, .a=0x9a, .x=0x73, .y=0xa0, .sp=0x1c, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x1710, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x1711, .a=0x9a, .x=0x73, .y=0x9f, .sp=0x1c, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x1710, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1710, .value=0xdc, .type=IO_READ},
        {.addr=0x1711, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03A5) {
    const struct CPU_State initial_cpu = {.pc=0x2898, .a=0xa3, .x=0xac, .y=0x0d, .sp=0x38, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x2898, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x2899, .a=0xa3, .x=0xac, .y=0x0c, .sp=0x38, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x2898, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x2898, .value=0xdc, .type=IO_READ},
        {.addr=0x2899, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x1f88, .a=0x97, .x=0x4e, .y=0x20, .sp=0xb3, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x1f88, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x1f89, .a=0x97, .x=0x4e, .y=0x1f, .sp=0xb3, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x1f88, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1f88, .value=0xdc, .type=IO_READ},
        {.addr=0x1f89, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x2568, .a=0x1b, .x=0x5d, .y=0x23, .sp=0x03, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x2568, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x2569, .a=0x1b, .x=0x5d, .y=0x22, .sp=0x03, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x2568, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x2568, .value=0xdc, .type=IO_READ},
        {.addr=0x2569, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03A8) {
    const struct CPU_State initial_cpu = {.pc=0x276f, .a=0x5f, .x=0x34, .y=0x1d, .sp=0x65, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x276f, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x2770, .a=0x5f, .x=0x34, .y=0x1c, .sp=0x65, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x276f, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x276f, .value=0xdc, .type=IO_READ},
        {.addr=0x2770, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03A9) {
    const struct CPU_State initial_cpu = {.pc=0x1db2, .a=0xe3, .x=0xb3, .y=0xed, .sp=0xa0, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x1db2, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x1db3, .a=0xe3, .x=0xb3, .y=0xec, .sp=0xa0, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x1db2, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1db2, .value=0xdc, .type=IO_READ},
        {.addr=0x1db3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03AA) {
    const struct CPU_State initial_cpu = {.pc=0x0aad, .a=0xa3, .x=0xbb, .y=0x02, .sp=0x90, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x0aad, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x0aae, .a=0xa3, .x=0xbb, .y=0x01, .sp=0x90, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0aad, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x0aad, .value=0xdc, .type=IO_READ},
        {.addr=0x0aae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03AB) {
    const struct CPU_State initial_cpu = {.pc=0xfc7f, .a=0xb3, .x=0xe4, .y=0xb8, .sp=0xcc, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xfc7f, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xfc80, .a=0xb3, .x=0xe4, .y=0xb7, .sp=0xcc, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xfc7f, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xfc7f, .value=0xdc, .type=IO_READ},
        {.addr=0xfc80, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03AC) {
    const struct CPU_State initial_cpu = {.pc=0x5c83, .a=0x80, .x=0x85, .y=0xc9, .sp=0x73, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x5c83, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x5c84, .a=0x80, .x=0x85, .y=0xc8, .sp=0x73, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x5c83, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x5c83, .value=0xdc, .type=IO_READ},
        {.addr=0x5c84, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03AD) {
    const struct CPU_State initial_cpu = {.pc=0x015e, .a=0xd0, .x=0x90, .y=0xd2, .sp=0xaf, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x015e, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x015f, .a=0xd0, .x=0x90, .y=0xd1, .sp=0xaf, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x015e, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x015e, .value=0xdc, .type=IO_READ},
        {.addr=0x015f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x3715, .a=0xca, .x=0x66, .y=0x56, .sp=0xb1, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x3715, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x3716, .a=0xca, .x=0x66, .y=0x55, .sp=0xb1, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x3715, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x3715, .value=0xdc, .type=IO_READ},
        {.addr=0x3716, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03AF) {
    const struct CPU_State initial_cpu = {.pc=0x2e60, .a=0xd1, .x=0xd2, .y=0x4e, .sp=0x73, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x2e60, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x2e61, .a=0xd1, .x=0xd2, .y=0x4d, .sp=0x73, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x2e60, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x2e60, .value=0xdc, .type=IO_READ},
        {.addr=0x2e61, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x996b, .a=0x79, .x=0x39, .y=0xda, .sp=0x5e, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x996b, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x996c, .a=0x79, .x=0x39, .y=0xd9, .sp=0x5e, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x996b, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x996b, .value=0xdc, .type=IO_READ},
        {.addr=0x996c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x997a, .a=0xdb, .x=0xd7, .y=0xc4, .sp=0xac, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x997a, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x997b, .a=0xdb, .x=0xd7, .y=0xc3, .sp=0xac, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x997a, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x997a, .value=0xdc, .type=IO_READ},
        {.addr=0x997b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03B2) {
    const struct CPU_State initial_cpu = {.pc=0xca48, .a=0x1d, .x=0x1b, .y=0x5f, .sp=0x34, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xca48, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xca49, .a=0x1d, .x=0x1b, .y=0x5e, .sp=0x34, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xca48, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xca48, .value=0xdc, .type=IO_READ},
        {.addr=0xca49, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03B3) {
    const struct CPU_State initial_cpu = {.pc=0xaca9, .a=0x5b, .x=0x05, .y=0x43, .sp=0xbc, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xaca9, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xacaa, .a=0x5b, .x=0x05, .y=0x42, .sp=0xbc, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xaca9, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xaca9, .value=0xdc, .type=IO_READ},
        {.addr=0xacaa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03B4) {
    const struct CPU_State initial_cpu = {.pc=0xc684, .a=0xb7, .x=0xe6, .y=0x00, .sp=0xe6, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xc684, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xc685, .a=0xb7, .x=0xe6, .y=0xff, .sp=0xe6, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xc684, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xc684, .value=0xdc, .type=IO_READ},
        {.addr=0xc685, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03B5) {
    const struct CPU_State initial_cpu = {.pc=0x1b5a, .a=0x82, .x=0x10, .y=0xa6, .sp=0x09, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x1b5a, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x1b5b, .a=0x82, .x=0x10, .y=0xa5, .sp=0x09, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x1b5a, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1b5a, .value=0xdc, .type=IO_READ},
        {.addr=0x1b5b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03B6) {
    const struct CPU_State initial_cpu = {.pc=0x701e, .a=0x24, .x=0x8c, .y=0x41, .sp=0x6f, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x701e, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x701f, .a=0x24, .x=0x8c, .y=0x40, .sp=0x6f, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x701e, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x701e, .value=0xdc, .type=IO_READ},
        {.addr=0x701f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03B7) {
    const struct CPU_State initial_cpu = {.pc=0xacf0, .a=0x01, .x=0xee, .y=0xf3, .sp=0xb4, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xacf0, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xacf1, .a=0x01, .x=0xee, .y=0xf2, .sp=0xb4, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xacf0, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xacf0, .value=0xdc, .type=IO_READ},
        {.addr=0xacf1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03B8) {
    const struct CPU_State initial_cpu = {.pc=0x1fe3, .a=0x5c, .x=0x1e, .y=0x56, .sp=0x68, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x1fe3, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x1fe4, .a=0x5c, .x=0x1e, .y=0x55, .sp=0x68, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x1fe3, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x1fe3, .value=0xdc, .type=IO_READ},
        {.addr=0x1fe4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03B9) {
    const struct CPU_State initial_cpu = {.pc=0xaa83, .a=0xc4, .x=0xde, .y=0xbe, .sp=0xd7, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xaa83, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xaa84, .a=0xc4, .x=0xde, .y=0xbd, .sp=0xd7, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xaa83, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xaa83, .value=0xdc, .type=IO_READ},
        {.addr=0xaa84, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03BA) {
    const struct CPU_State initial_cpu = {.pc=0xa774, .a=0x2b, .x=0xec, .y=0x27, .sp=0x36, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xa774, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xa775, .a=0x2b, .x=0xec, .y=0x26, .sp=0x36, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xa774, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xa774, .value=0xdc, .type=IO_READ},
        {.addr=0xa775, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03BB) {
    const struct CPU_State initial_cpu = {.pc=0x9f96, .a=0xb9, .x=0x97, .y=0xf5, .sp=0x86, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x9f96, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x9f97, .a=0xb9, .x=0x97, .y=0xf4, .sp=0x86, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x9f96, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x9f96, .value=0xdc, .type=IO_READ},
        {.addr=0x9f97, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03BC) {
    const struct CPU_State initial_cpu = {.pc=0xe203, .a=0xd8, .x=0xe0, .y=0xed, .sp=0x2d, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xe203, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xe204, .a=0xd8, .x=0xe0, .y=0xec, .sp=0x2d, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xe203, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xe203, .value=0xdc, .type=IO_READ},
        {.addr=0xe204, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03BD) {
    const struct CPU_State initial_cpu = {.pc=0xfba6, .a=0x29, .x=0x1b, .y=0x01, .sp=0xd0, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xfba6, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xfba7, .a=0x29, .x=0x1b, .y=0x00, .sp=0xd0, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0xfba6, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xfba6, .value=0xdc, .type=IO_READ},
        {.addr=0xfba7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03BE) {
    const struct CPU_State initial_cpu = {.pc=0x7a98, .a=0x42, .x=0x61, .y=0x17, .sp=0xfb, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x7a98, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x7a99, .a=0x42, .x=0x61, .y=0x16, .sp=0xfb, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x7a98, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x7a98, .value=0xdc, .type=IO_READ},
        {.addr=0x7a99, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03BF) {
    const struct CPU_State initial_cpu = {.pc=0xbaaa, .a=0x3c, .x=0xd7, .y=0x8e, .sp=0xdd, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xbaaa, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xbaab, .a=0x3c, .x=0xd7, .y=0x8d, .sp=0xdd, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xbaaa, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xbaaa, .value=0xdc, .type=IO_READ},
        {.addr=0xbaab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03C0) {
    const struct CPU_State initial_cpu = {.pc=0x12d3, .a=0xdd, .x=0xa3, .y=0x7b, .sp=0x69, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x12d3, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x12d4, .a=0xdd, .x=0xa3, .y=0x7a, .sp=0x69, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x12d3, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x12d3, .value=0xdc, .type=IO_READ},
        {.addr=0x12d4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03C1) {
    const struct CPU_State initial_cpu = {.pc=0xb986, .a=0x7d, .x=0x4f, .y=0xbd, .sp=0x0a, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xb986, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xb987, .a=0x7d, .x=0x4f, .y=0xbc, .sp=0x0a, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xb986, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xb986, .value=0xdc, .type=IO_READ},
        {.addr=0xb987, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03C2) {
    const struct CPU_State initial_cpu = {.pc=0x8dcb, .a=0xfe, .x=0x0a, .y=0x3b, .sp=0x9f, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x8dcb, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8dcc, .a=0xfe, .x=0x0a, .y=0x3a, .sp=0x9f, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x8dcb, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x8dcb, .value=0xdc, .type=IO_READ},
        {.addr=0x8dcc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03C3) {
    const struct CPU_State initial_cpu = {.pc=0x0f2f, .a=0xbf, .x=0x9c, .y=0x0f, .sp=0x42, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x0f2f, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x0f30, .a=0xbf, .x=0x9c, .y=0x0e, .sp=0x42, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x0f2f, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x0f2f, .value=0xdc, .type=IO_READ},
        {.addr=0x0f30, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03C4) {
    const struct CPU_State initial_cpu = {.pc=0xbd5a, .a=0xb5, .x=0x2e, .y=0xc5, .sp=0x79, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xbd5a, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xbd5b, .a=0xb5, .x=0x2e, .y=0xc4, .sp=0x79, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xbd5a, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xbd5a, .value=0xdc, .type=IO_READ},
        {.addr=0xbd5b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03C5) {
    const struct CPU_State initial_cpu = {.pc=0x817e, .a=0x4a, .x=0x4a, .y=0x6e, .sp=0xa0, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x817e, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x817f, .a=0x4a, .x=0x4a, .y=0x6d, .sp=0xa0, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x817e, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x817e, .value=0xdc, .type=IO_READ},
        {.addr=0x817f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03C6) {
    const struct CPU_State initial_cpu = {.pc=0xfe8b, .a=0x57, .x=0x49, .y=0xb3, .sp=0x6e, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xfe8b, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xfe8c, .a=0x57, .x=0x49, .y=0xb2, .sp=0x6e, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xfe8b, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xfe8b, .value=0xdc, .type=IO_READ},
        {.addr=0xfe8c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03C7) {
    const struct CPU_State initial_cpu = {.pc=0x9cd2, .a=0xb6, .x=0xd2, .y=0x83, .sp=0x61, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x9cd2, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x9cd3, .a=0xb6, .x=0xd2, .y=0x82, .sp=0x61, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x9cd2, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x9cd2, .value=0xdc, .type=IO_READ},
        {.addr=0x9cd3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03C8) {
    const struct CPU_State initial_cpu = {.pc=0x5d86, .a=0xe6, .x=0xb5, .y=0x79, .sp=0x65, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x5d86, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x5d87, .a=0xe6, .x=0xb5, .y=0x78, .sp=0x65, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x5d86, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x5d86, .value=0xdc, .type=IO_READ},
        {.addr=0x5d87, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03C9) {
    const struct CPU_State initial_cpu = {.pc=0x8a62, .a=0x2d, .x=0xce, .y=0x82, .sp=0x57, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x8a62, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8a63, .a=0x2d, .x=0xce, .y=0x81, .sp=0x57, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x8a62, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x8a62, .value=0xdc, .type=IO_READ},
        {.addr=0x8a63, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x0e9f, .a=0x05, .x=0x07, .y=0xeb, .sp=0x65, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x0e9f, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x0ea0, .a=0x05, .x=0x07, .y=0xea, .sp=0x65, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x0e9f, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x0e9f, .value=0xdc, .type=IO_READ},
        {.addr=0x0ea0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03CB) {
    const struct CPU_State initial_cpu = {.pc=0xab51, .a=0xf4, .x=0x45, .y=0x9d, .sp=0x8e, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xab51, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xab52, .a=0xf4, .x=0x45, .y=0x9c, .sp=0x8e, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xab51, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xab51, .value=0xdc, .type=IO_READ},
        {.addr=0xab52, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03CC) {
    const struct CPU_State initial_cpu = {.pc=0xe621, .a=0xae, .x=0x9c, .y=0x03, .sp=0x4b, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xe621, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xe622, .a=0xae, .x=0x9c, .y=0x02, .sp=0x4b, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xe621, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xe621, .value=0xdc, .type=IO_READ},
        {.addr=0xe622, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03CD) {
    const struct CPU_State initial_cpu = {.pc=0x4025, .a=0x1a, .x=0x46, .y=0x2b, .sp=0xb6, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x4025, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x4026, .a=0x1a, .x=0x46, .y=0x2a, .sp=0xb6, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x4025, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x4025, .value=0xdc, .type=IO_READ},
        {.addr=0x4026, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03CE) {
    const struct CPU_State initial_cpu = {.pc=0xa8b6, .a=0xc8, .x=0x82, .y=0xf5, .sp=0x9f, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xa8b6, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xa8b7, .a=0xc8, .x=0x82, .y=0xf4, .sp=0x9f, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xa8b6, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xa8b6, .value=0xdc, .type=IO_READ},
        {.addr=0xa8b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03CF) {
    const struct CPU_State initial_cpu = {.pc=0xba87, .a=0x69, .x=0xbd, .y=0x05, .sp=0x9a, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xba87, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xba88, .a=0x69, .x=0xbd, .y=0x04, .sp=0x9a, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xba87, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xba87, .value=0xdc, .type=IO_READ},
        {.addr=0xba88, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x3857, .a=0xb7, .x=0xf6, .y=0x76, .sp=0xb6, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x3857, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x3858, .a=0xb7, .x=0xf6, .y=0x75, .sp=0xb6, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x3857, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x3857, .value=0xdc, .type=IO_READ},
        {.addr=0x3858, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03D1) {
    const struct CPU_State initial_cpu = {.pc=0xf1bd, .a=0xf3, .x=0x0f, .y=0xf1, .sp=0x2d, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xf1bd, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xf1be, .a=0xf3, .x=0x0f, .y=0xf0, .sp=0x2d, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xf1bd, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xf1bd, .value=0xdc, .type=IO_READ},
        {.addr=0xf1be, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03D2) {
    const struct CPU_State initial_cpu = {.pc=0x2b7f, .a=0x5c, .x=0xfb, .y=0x6c, .sp=0xa5, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x2b7f, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x2b80, .a=0x5c, .x=0xfb, .y=0x6b, .sp=0xa5, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x2b7f, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x2b7f, .value=0xdc, .type=IO_READ},
        {.addr=0x2b80, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03D3) {
    const struct CPU_State initial_cpu = {.pc=0x3f81, .a=0x98, .x=0x71, .y=0xb0, .sp=0xf5, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x3f81, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x3f82, .a=0x98, .x=0x71, .y=0xaf, .sp=0xf5, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x3f81, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x3f81, .value=0xdc, .type=IO_READ},
        {.addr=0x3f82, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03D4) {
    const struct CPU_State initial_cpu = {.pc=0xb17e, .a=0xbe, .x=0x1d, .y=0xf1, .sp=0x81, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xb17e, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xb17f, .a=0xbe, .x=0x1d, .y=0xf0, .sp=0x81, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xb17e, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xb17e, .value=0xdc, .type=IO_READ},
        {.addr=0xb17f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03D5) {
    const struct CPU_State initial_cpu = {.pc=0x6a22, .a=0xd3, .x=0x77, .y=0x42, .sp=0x3f, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x6a22, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x6a23, .a=0xd3, .x=0x77, .y=0x41, .sp=0x3f, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x6a22, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x6a22, .value=0xdc, .type=IO_READ},
        {.addr=0x6a23, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03D6) {
    const struct CPU_State initial_cpu = {.pc=0xe648, .a=0x91, .x=0x43, .y=0xc7, .sp=0xdc, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xe648, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xe649, .a=0x91, .x=0x43, .y=0xc6, .sp=0xdc, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xe648, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xe648, .value=0xdc, .type=IO_READ},
        {.addr=0xe649, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03D7) {
    const struct CPU_State initial_cpu = {.pc=0x975f, .a=0xd3, .x=0xfc, .y=0xe2, .sp=0xc0, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x975f, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x9760, .a=0xd3, .x=0xfc, .y=0xe1, .sp=0xc0, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x975f, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x975f, .value=0xdc, .type=IO_READ},
        {.addr=0x9760, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03D8) {
    const struct CPU_State initial_cpu = {.pc=0xd0fa, .a=0x1f, .x=0x58, .y=0x16, .sp=0x8c, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xd0fa, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xd0fb, .a=0x1f, .x=0x58, .y=0x15, .sp=0x8c, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xd0fa, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xd0fa, .value=0xdc, .type=IO_READ},
        {.addr=0xd0fb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03D9) {
    const struct CPU_State initial_cpu = {.pc=0x3f6f, .a=0x44, .x=0x69, .y=0x20, .sp=0x7e, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x3f6f, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x3f70, .a=0x44, .x=0x69, .y=0x1f, .sp=0x7e, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x3f6f, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x3f6f, .value=0xdc, .type=IO_READ},
        {.addr=0x3f70, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03DA) {
    const struct CPU_State initial_cpu = {.pc=0x9546, .a=0x1b, .x=0xa6, .y=0x1d, .sp=0x52, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x9546, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x9547, .a=0x1b, .x=0xa6, .y=0x1c, .sp=0x52, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x9546, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x9546, .value=0xdc, .type=IO_READ},
        {.addr=0x9547, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03DB) {
    const struct CPU_State initial_cpu = {.pc=0x07bc, .a=0xd1, .x=0x2f, .y=0x47, .sp=0xb8, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x07bc, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x07bd, .a=0xd1, .x=0x2f, .y=0x46, .sp=0xb8, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x07bc, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x07bc, .value=0xdc, .type=IO_READ},
        {.addr=0x07bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03DC) {
    const struct CPU_State initial_cpu = {.pc=0x7d74, .a=0x56, .x=0xf6, .y=0x40, .sp=0xca, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x7d74, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x7d75, .a=0x56, .x=0xf6, .y=0x3f, .sp=0xca, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x7d74, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x7d74, .value=0xdc, .type=IO_READ},
        {.addr=0x7d75, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03DD) {
    const struct CPU_State initial_cpu = {.pc=0x23b3, .a=0x76, .x=0x43, .y=0xc2, .sp=0x66, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x23b3, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x23b4, .a=0x76, .x=0x43, .y=0xc1, .sp=0x66, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x23b3, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x23b3, .value=0xdc, .type=IO_READ},
        {.addr=0x23b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03DE) {
    const struct CPU_State initial_cpu = {.pc=0x90c0, .a=0xa5, .x=0x7a, .y=0x2d, .sp=0x98, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x90c0, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x90c1, .a=0xa5, .x=0x7a, .y=0x2c, .sp=0x98, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x90c0, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x90c0, .value=0xdc, .type=IO_READ},
        {.addr=0x90c1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03DF) {
    const struct CPU_State initial_cpu = {.pc=0xf3c1, .a=0x6a, .x=0x8f, .y=0x30, .sp=0xf6, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xf3c1, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xf3c2, .a=0x6a, .x=0x8f, .y=0x2f, .sp=0xf6, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xf3c1, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xf3c1, .value=0xdc, .type=IO_READ},
        {.addr=0xf3c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03E0) {
    const struct CPU_State initial_cpu = {.pc=0x921c, .a=0xec, .x=0x40, .y=0x02, .sp=0x58, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x921c, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x921d, .a=0xec, .x=0x40, .y=0x01, .sp=0x58, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x921c, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x921c, .value=0xdc, .type=IO_READ},
        {.addr=0x921d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03E1) {
    const struct CPU_State initial_cpu = {.pc=0x8f47, .a=0x2a, .x=0xbe, .y=0x41, .sp=0x8f, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x8f47, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x8f48, .a=0x2a, .x=0xbe, .y=0x40, .sp=0x8f, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x8f47, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x8f47, .value=0xdc, .type=IO_READ},
        {.addr=0x8f48, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03E2) {
    const struct CPU_State initial_cpu = {.pc=0xdcaa, .a=0x58, .x=0x07, .y=0x2d, .sp=0x63, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xdcaa, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xdcab, .a=0x58, .x=0x07, .y=0x2c, .sp=0x63, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xdcaa, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xdcaa, .value=0xdc, .type=IO_READ},
        {.addr=0xdcab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03E3) {
    const struct CPU_State initial_cpu = {.pc=0xd7f9, .a=0x0d, .x=0x44, .y=0x7d, .sp=0x61, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xd7f9, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xd7fa, .a=0x0d, .x=0x44, .y=0x7c, .sp=0x61, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xd7f9, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xd7f9, .value=0xdc, .type=IO_READ},
        {.addr=0xd7fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03E4) {
    const struct CPU_State initial_cpu = {.pc=0xf2b7, .a=0x69, .x=0x7c, .y=0x9c, .sp=0x32, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xf2b7, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xf2b8, .a=0x69, .x=0x7c, .y=0x9b, .sp=0x32, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xf2b7, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xf2b7, .value=0xdc, .type=IO_READ},
        {.addr=0xf2b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03E5) {
    const struct CPU_State initial_cpu = {.pc=0xd244, .a=0x90, .x=0x3e, .y=0x89, .sp=0xae, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xd244, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xd245, .a=0x90, .x=0x3e, .y=0x88, .sp=0xae, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xd244, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xd244, .value=0xdc, .type=IO_READ},
        {.addr=0xd245, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03E6) {
    const struct CPU_State initial_cpu = {.pc=0x5a26, .a=0x28, .x=0xc8, .y=0xb8, .sp=0x3b, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x5a26, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x5a27, .a=0x28, .x=0xc8, .y=0xb7, .sp=0x3b, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x5a26, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x5a26, .value=0xdc, .type=IO_READ},
        {.addr=0x5a27, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_DC, _DC_03E7) {
    const struct CPU_State initial_cpu = {.pc=0x7805, .a=0xab, .x=0x03, .y=0xe9, .sp=0xdf, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x7805, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x7806, .a=0xab, .x=0x03, .y=0xe8, .sp=0xdf, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x7805, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x7805, .value=0xdc, .type=IO_READ},
        {.addr=0x7806, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("DC 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
