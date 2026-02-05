#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_26, _26_0000) {
    const struct CPU_State initial_cpu = {.pc=0x108f, .a=0x6c, .x=0x1c, .y=0xec, .sp=0x37, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x011c, .value=0xf1}, {.addr=0x108f, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x1090, .a=0x60, .x=0x1c, .y=0xec, .sp=0x37, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x011c, .value=0xf1}, {.addr=0x108f, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x108f, .value=0x26, .type=IO_READ},
        {.addr=0x1090, .value=DUMMY, .type=IO_READ},
        {.addr=0x011c, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0001) {
    const struct CPU_State initial_cpu = {.pc=0x97ba, .a=0x95, .x=0x9e, .y=0x69, .sp=0x13, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0xe5}, {.addr=0x97ba, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x97bb, .a=0x85, .x=0x9e, .y=0x69, .sp=0x13, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0xe5}, {.addr=0x97ba, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x97ba, .value=0x26, .type=IO_READ},
        {.addr=0x97bb, .value=DUMMY, .type=IO_READ},
        {.addr=0x019e, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0002) {
    const struct CPU_State initial_cpu = {.pc=0xd66b, .a=0x7a, .x=0xd9, .y=0xef, .sp=0xe7, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0x3f}, {.addr=0xd66b, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xd66c, .a=0x3a, .x=0xd9, .y=0xef, .sp=0xe7, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0x3f}, {.addr=0xd66b, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xd66b, .value=0x26, .type=IO_READ},
        {.addr=0xd66c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d9, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0003) {
    const struct CPU_State initial_cpu = {.pc=0xab81, .a=0x90, .x=0xcb, .y=0x1e, .sp=0x57, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x01cb, .value=0x28}, {.addr=0xab81, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xab82, .a=0x00, .x=0xcb, .y=0x1e, .sp=0x57, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x01cb, .value=0x28}, {.addr=0xab81, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xab81, .value=0x26, .type=IO_READ},
        {.addr=0xab82, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cb, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0004) {
    const struct CPU_State initial_cpu = {.pc=0xc10a, .a=0xa7, .x=0x58, .y=0xc0, .sp=0x3c, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0x12}, {.addr=0xc10a, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xc10b, .a=0x02, .x=0x58, .y=0xc0, .sp=0x3c, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0x12}, {.addr=0xc10a, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xc10a, .value=0x26, .type=IO_READ},
        {.addr=0xc10b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0158, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0005) {
    const struct CPU_State initial_cpu = {.pc=0x1c0c, .a=0xbc, .x=0x50, .y=0x44, .sp=0x58, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x0050, .value=0xf2}, {.addr=0x1c0c, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x1c0d, .a=0xb0, .x=0x50, .y=0x44, .sp=0x58, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x0050, .value=0xf2}, {.addr=0x1c0c, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x1c0c, .value=0x26, .type=IO_READ},
        {.addr=0x1c0d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0050, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0006) {
    const struct CPU_State initial_cpu = {.pc=0xb430, .a=0xfd, .x=0xd9, .y=0xea, .sp=0x4d, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0x25}, {.addr=0xb430, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xb431, .a=0x25, .x=0xd9, .y=0xea, .sp=0x4d, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0x25}, {.addr=0xb430, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xb430, .value=0x26, .type=IO_READ},
        {.addr=0xb431, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d9, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0008) {
    const struct CPU_State initial_cpu = {.pc=0x5cb8, .a=0x47, .x=0xeb, .y=0x4d, .sp=0x4d, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x00eb, .value=0x0c}, {.addr=0x5cb8, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x5cb9, .a=0x04, .x=0xeb, .y=0x4d, .sp=0x4d, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x00eb, .value=0x0c}, {.addr=0x5cb8, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x5cb8, .value=0x26, .type=IO_READ},
        {.addr=0x5cb9, .value=DUMMY, .type=IO_READ},
        {.addr=0x00eb, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0009) {
    const struct CPU_State initial_cpu = {.pc=0xb68a, .a=0xe3, .x=0x7e, .y=0x35, .sp=0x9e, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x007e, .value=0xbf}, {.addr=0xb68a, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xb68b, .a=0xa3, .x=0x7e, .y=0x35, .sp=0x9e, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x007e, .value=0xbf}, {.addr=0xb68a, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xb68a, .value=0x26, .type=IO_READ},
        {.addr=0xb68b, .value=DUMMY, .type=IO_READ},
        {.addr=0x007e, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_000A) {
    const struct CPU_State initial_cpu = {.pc=0xdecb, .a=0xa9, .x=0x20, .y=0xf6, .sp=0xe5, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x0020, .value=0xd8}, {.addr=0xdecb, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xdecc, .a=0x88, .x=0x20, .y=0xf6, .sp=0xe5, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x0020, .value=0xd8}, {.addr=0xdecb, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xdecb, .value=0x26, .type=IO_READ},
        {.addr=0xdecc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0020, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_000C) {
    const struct CPU_State initial_cpu = {.pc=0xba05, .a=0x29, .x=0x46, .y=0x41, .sp=0x3d, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x0046, .value=0xfb}, {.addr=0xba05, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xba06, .a=0x29, .x=0x46, .y=0x41, .sp=0x3d, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x0046, .value=0xfb}, {.addr=0xba05, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xba05, .value=0x26, .type=IO_READ},
        {.addr=0xba06, .value=DUMMY, .type=IO_READ},
        {.addr=0x0046, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_000D) {
    const struct CPU_State initial_cpu = {.pc=0xe6c6, .a=0x24, .x=0x48, .y=0xf1, .sp=0xee, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x0048, .value=0x14}, {.addr=0xe6c6, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xe6c7, .a=0x04, .x=0x48, .y=0xf1, .sp=0xee, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0048, .value=0x14}, {.addr=0xe6c6, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xe6c6, .value=0x26, .type=IO_READ},
        {.addr=0xe6c7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0048, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_000E) {
    const struct CPU_State initial_cpu = {.pc=0x3fc6, .a=0x50, .x=0xa1, .y=0xef, .sp=0x02, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0x8e}, {.addr=0x3fc6, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x3fc7, .a=0x00, .x=0xa1, .y=0xef, .sp=0x02, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0x8e}, {.addr=0x3fc6, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x3fc6, .value=0x26, .type=IO_READ},
        {.addr=0x3fc7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a1, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_000F) {
    const struct CPU_State initial_cpu = {.pc=0x2c2a, .a=0x67, .x=0x7e, .y=0x90, .sp=0xf1, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x017e, .value=0xd0}, {.addr=0x2c2a, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x2c2b, .a=0x40, .x=0x7e, .y=0x90, .sp=0xf1, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x017e, .value=0xd0}, {.addr=0x2c2a, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x2c2a, .value=0x26, .type=IO_READ},
        {.addr=0x2c2b, .value=DUMMY, .type=IO_READ},
        {.addr=0x017e, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0010) {
    const struct CPU_State initial_cpu = {.pc=0x1adf, .a=0x40, .x=0x02, .y=0x74, .sp=0x35, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x0102, .value=0xc4}, {.addr=0x1adf, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x1ae0, .a=0x40, .x=0x02, .y=0x74, .sp=0x35, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0102, .value=0xc4}, {.addr=0x1adf, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x1adf, .value=0x26, .type=IO_READ},
        {.addr=0x1ae0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0102, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0011) {
    const struct CPU_State initial_cpu = {.pc=0x534a, .a=0x6f, .x=0xef, .y=0x85, .sp=0x87, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0x34}, {.addr=0x534a, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x534b, .a=0x24, .x=0xef, .y=0x85, .sp=0x87, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0x34}, {.addr=0x534a, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x534a, .value=0x26, .type=IO_READ},
        {.addr=0x534b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ef, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0012) {
    const struct CPU_State initial_cpu = {.pc=0x91c7, .a=0x64, .x=0x5b, .y=0x9d, .sp=0xb2, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x015b, .value=0x6c}, {.addr=0x91c7, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x91c8, .a=0x64, .x=0x5b, .y=0x9d, .sp=0xb2, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x015b, .value=0x6c}, {.addr=0x91c7, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x91c7, .value=0x26, .type=IO_READ},
        {.addr=0x91c8, .value=DUMMY, .type=IO_READ},
        {.addr=0x015b, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0013) {
    const struct CPU_State initial_cpu = {.pc=0xe97b, .a=0xcf, .x=0x3f, .y=0x0e, .sp=0xa6, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x003f, .value=0x19}, {.addr=0xe97b, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xe97c, .a=0x09, .x=0x3f, .y=0x0e, .sp=0xa6, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x003f, .value=0x19}, {.addr=0xe97b, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xe97b, .value=0x26, .type=IO_READ},
        {.addr=0xe97c, .value=DUMMY, .type=IO_READ},
        {.addr=0x003f, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0014) {
    const struct CPU_State initial_cpu = {.pc=0x1967, .a=0xa5, .x=0x71, .y=0x3c, .sp=0x3b, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x0071, .value=0xa8}, {.addr=0x1967, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x1968, .a=0xa0, .x=0x71, .y=0x3c, .sp=0x3b, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0071, .value=0xa8}, {.addr=0x1967, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x1967, .value=0x26, .type=IO_READ},
        {.addr=0x1968, .value=DUMMY, .type=IO_READ},
        {.addr=0x0071, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0015) {
    const struct CPU_State initial_cpu = {.pc=0x1a12, .a=0x1b, .x=0xbf, .y=0x92, .sp=0xea, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x00bf, .value=0x96}, {.addr=0x1a12, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x1a13, .a=0x12, .x=0xbf, .y=0x92, .sp=0xea, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x00bf, .value=0x96}, {.addr=0x1a12, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x1a12, .value=0x26, .type=IO_READ},
        {.addr=0x1a13, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bf, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0016) {
    const struct CPU_State initial_cpu = {.pc=0x99d1, .a=0x70, .x=0x7c, .y=0x83, .sp=0xfa, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0x47}, {.addr=0x99d1, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x99d2, .a=0x40, .x=0x7c, .y=0x83, .sp=0xfa, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0x47}, {.addr=0x99d1, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x99d1, .value=0x26, .type=IO_READ},
        {.addr=0x99d2, .value=DUMMY, .type=IO_READ},
        {.addr=0x017c, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0017) {
    const struct CPU_State initial_cpu = {.pc=0xa90b, .a=0x1e, .x=0x57, .y=0x2e, .sp=0x1e, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0x56}, {.addr=0xa90b, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xa90c, .a=0x16, .x=0x57, .y=0x2e, .sp=0x1e, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0x56}, {.addr=0xa90b, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xa90b, .value=0x26, .type=IO_READ},
        {.addr=0xa90c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0157, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0018) {
    const struct CPU_State initial_cpu = {.pc=0xd689, .a=0xb8, .x=0x13, .y=0x7a, .sp=0x88, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x0013, .value=0xae}, {.addr=0xd689, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xd68a, .a=0xa8, .x=0x13, .y=0x7a, .sp=0x88, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x0013, .value=0xae}, {.addr=0xd689, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xd689, .value=0x26, .type=IO_READ},
        {.addr=0xd68a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0013, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0019) {
    const struct CPU_State initial_cpu = {.pc=0x5945, .a=0xa9, .x=0xa3, .y=0x9b, .sp=0x65, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x00a3, .value=0x83}, {.addr=0x5945, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x5946, .a=0x81, .x=0xa3, .y=0x9b, .sp=0x65, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x00a3, .value=0x83}, {.addr=0x5945, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x5945, .value=0x26, .type=IO_READ},
        {.addr=0x5946, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a3, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_001A) {
    const struct CPU_State initial_cpu = {.pc=0xfbb5, .a=0xdc, .x=0x54, .y=0xa0, .sp=0x83, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x0154, .value=0xde}, {.addr=0xfbb5, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xfbb6, .a=0xdc, .x=0x54, .y=0xa0, .sp=0x83, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x0154, .value=0xde}, {.addr=0xfbb5, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xfbb5, .value=0x26, .type=IO_READ},
        {.addr=0xfbb6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0154, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_001B) {
    const struct CPU_State initial_cpu = {.pc=0x1e93, .a=0xf1, .x=0xd0, .y=0x1f, .sp=0x31, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x00d0, .value=0x45}, {.addr=0x1e93, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x1e94, .a=0x41, .x=0xd0, .y=0x1f, .sp=0x31, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x00d0, .value=0x45}, {.addr=0x1e93, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x1e93, .value=0x26, .type=IO_READ},
        {.addr=0x1e94, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d0, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_001C) {
    const struct CPU_State initial_cpu = {.pc=0x4bc9, .a=0x8a, .x=0x9b, .y=0xbd, .sp=0x27, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x009b, .value=0x36}, {.addr=0x4bc9, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x4bca, .a=0x02, .x=0x9b, .y=0xbd, .sp=0x27, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x009b, .value=0x36}, {.addr=0x4bc9, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x4bc9, .value=0x26, .type=IO_READ},
        {.addr=0x4bca, .value=DUMMY, .type=IO_READ},
        {.addr=0x009b, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_001D) {
    const struct CPU_State initial_cpu = {.pc=0x9bb7, .a=0x4e, .x=0x1b, .y=0x41, .sp=0xbd, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x001b, .value=0x19}, {.addr=0x9bb7, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x9bb8, .a=0x08, .x=0x1b, .y=0x41, .sp=0xbd, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x001b, .value=0x19}, {.addr=0x9bb7, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x9bb7, .value=0x26, .type=IO_READ},
        {.addr=0x9bb8, .value=DUMMY, .type=IO_READ},
        {.addr=0x001b, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_001E) {
    const struct CPU_State initial_cpu = {.pc=0x11aa, .a=0x48, .x=0x77, .y=0x8c, .sp=0x55, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x0077, .value=0x25}, {.addr=0x11aa, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x11ab, .a=0x00, .x=0x77, .y=0x8c, .sp=0x55, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x0077, .value=0x25}, {.addr=0x11aa, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x11aa, .value=0x26, .type=IO_READ},
        {.addr=0x11ab, .value=DUMMY, .type=IO_READ},
        {.addr=0x0077, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_001F) {
    const struct CPU_State initial_cpu = {.pc=0xd7ab, .a=0xf6, .x=0x08, .y=0x40, .sp=0x88, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0xf8}, {.addr=0xd7ab, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xd7ac, .a=0xf0, .x=0x08, .y=0x40, .sp=0x88, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0xf8}, {.addr=0xd7ab, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xd7ab, .value=0x26, .type=IO_READ},
        {.addr=0xd7ac, .value=DUMMY, .type=IO_READ},
        {.addr=0x0108, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0020) {
    const struct CPU_State initial_cpu = {.pc=0x1e03, .a=0x3f, .x=0xa7, .y=0x78, .sp=0xaf, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x00a7, .value=0xc6}, {.addr=0x1e03, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x1e04, .a=0x06, .x=0xa7, .y=0x78, .sp=0xaf, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x00a7, .value=0xc6}, {.addr=0x1e03, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x1e03, .value=0x26, .type=IO_READ},
        {.addr=0x1e04, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a7, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0021) {
    const struct CPU_State initial_cpu = {.pc=0xeba2, .a=0x8e, .x=0x25, .y=0xbb, .sp=0x56, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x0025, .value=0xfd}, {.addr=0xeba2, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xeba3, .a=0x8c, .x=0x25, .y=0xbb, .sp=0x56, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x0025, .value=0xfd}, {.addr=0xeba2, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xeba2, .value=0x26, .type=IO_READ},
        {.addr=0xeba3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0025, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0022) {
    const struct CPU_State initial_cpu = {.pc=0xfd25, .a=0x3e, .x=0x11, .y=0xeb, .sp=0xde, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x0011, .value=0xef}, {.addr=0xfd25, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xfd26, .a=0x2e, .x=0x11, .y=0xeb, .sp=0xde, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0011, .value=0xef}, {.addr=0xfd25, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xfd25, .value=0x26, .type=IO_READ},
        {.addr=0xfd26, .value=DUMMY, .type=IO_READ},
        {.addr=0x0011, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0023) {
    const struct CPU_State initial_cpu = {.pc=0xbd26, .a=0x05, .x=0x30, .y=0xf9, .sp=0x36, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x0030, .value=0x4d}, {.addr=0xbd26, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xbd27, .a=0x05, .x=0x30, .y=0xf9, .sp=0x36, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x0030, .value=0x4d}, {.addr=0xbd26, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xbd26, .value=0x26, .type=IO_READ},
        {.addr=0xbd27, .value=DUMMY, .type=IO_READ},
        {.addr=0x0030, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0024) {
    const struct CPU_State initial_cpu = {.pc=0xf6f3, .a=0x58, .x=0x92, .y=0xc1, .sp=0x29, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x0192, .value=0x6f}, {.addr=0xf6f3, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xf6f4, .a=0x48, .x=0x92, .y=0xc1, .sp=0x29, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x0192, .value=0x6f}, {.addr=0xf6f3, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xf6f3, .value=0x26, .type=IO_READ},
        {.addr=0xf6f4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0192, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0025) {
    const struct CPU_State initial_cpu = {.pc=0x8433, .a=0xc6, .x=0x7d, .y=0x33, .sp=0x75, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0x8c}, {.addr=0x8433, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x8434, .a=0x84, .x=0x7d, .y=0x33, .sp=0x75, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0x8c}, {.addr=0x8433, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x8433, .value=0x26, .type=IO_READ},
        {.addr=0x8434, .value=DUMMY, .type=IO_READ},
        {.addr=0x017d, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0026) {
    const struct CPU_State initial_cpu = {.pc=0xae3d, .a=0x97, .x=0x8e, .y=0xdd, .sp=0xf2, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x008e, .value=0x48}, {.addr=0xae3d, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xae3e, .a=0x00, .x=0x8e, .y=0xdd, .sp=0xf2, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x008e, .value=0x48}, {.addr=0xae3d, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xae3d, .value=0x26, .type=IO_READ},
        {.addr=0xae3e, .value=DUMMY, .type=IO_READ},
        {.addr=0x008e, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0027) {
    const struct CPU_State initial_cpu = {.pc=0x727b, .a=0x25, .x=0x2d, .y=0xef, .sp=0xa9, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x002d, .value=0x4e}, {.addr=0x727b, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x727c, .a=0x04, .x=0x2d, .y=0xef, .sp=0xa9, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x002d, .value=0x4e}, {.addr=0x727b, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x727b, .value=0x26, .type=IO_READ},
        {.addr=0x727c, .value=DUMMY, .type=IO_READ},
        {.addr=0x002d, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0028) {
    const struct CPU_State initial_cpu = {.pc=0x8974, .a=0xa1, .x=0x5f, .y=0xb6, .sp=0xd0, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x005f, .value=0x24}, {.addr=0x8974, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x8975, .a=0x20, .x=0x5f, .y=0xb6, .sp=0xd0, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x005f, .value=0x24}, {.addr=0x8974, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x8974, .value=0x26, .type=IO_READ},
        {.addr=0x8975, .value=DUMMY, .type=IO_READ},
        {.addr=0x005f, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0029) {
    const struct CPU_State initial_cpu = {.pc=0x2668, .a=0xff, .x=0xa7, .y=0x7f, .sp=0x50, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x00a7, .value=0xf7}, {.addr=0x2668, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x2669, .a=0xf7, .x=0xa7, .y=0x7f, .sp=0x50, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x00a7, .value=0xf7}, {.addr=0x2668, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x2668, .value=0x26, .type=IO_READ},
        {.addr=0x2669, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a7, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_002A) {
    const struct CPU_State initial_cpu = {.pc=0xbf48, .a=0x98, .x=0x86, .y=0x1f, .sp=0x11, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x0186, .value=0x04}, {.addr=0xbf48, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xbf49, .a=0x00, .x=0x86, .y=0x1f, .sp=0x11, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x0186, .value=0x04}, {.addr=0xbf48, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xbf48, .value=0x26, .type=IO_READ},
        {.addr=0xbf49, .value=DUMMY, .type=IO_READ},
        {.addr=0x0186, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_002B) {
    const struct CPU_State initial_cpu = {.pc=0x9076, .a=0x51, .x=0xa0, .y=0x7c, .sp=0xe7, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0x85}, {.addr=0x9076, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x9077, .a=0x01, .x=0xa0, .y=0x7c, .sp=0xe7, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0x85}, {.addr=0x9076, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x9076, .value=0x26, .type=IO_READ},
        {.addr=0x9077, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a0, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_002C) {
    const struct CPU_State initial_cpu = {.pc=0x0d0b, .a=0x21, .x=0xe5, .y=0x71, .sp=0x04, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x00e5, .value=0xf3}, {.addr=0x0d0b, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x0d0c, .a=0x21, .x=0xe5, .y=0x71, .sp=0x04, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x00e5, .value=0xf3}, {.addr=0x0d0b, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x0d0b, .value=0x26, .type=IO_READ},
        {.addr=0x0d0c, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e5, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_002D) {
    const struct CPU_State initial_cpu = {.pc=0x3a3b, .a=0x13, .x=0x4e, .y=0x08, .sp=0xe3, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0x08}, {.addr=0x3a3b, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x3a3c, .a=0x00, .x=0x4e, .y=0x08, .sp=0xe3, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0x08}, {.addr=0x3a3b, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x3a3b, .value=0x26, .type=IO_READ},
        {.addr=0x3a3c, .value=DUMMY, .type=IO_READ},
        {.addr=0x014e, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_002E) {
    const struct CPU_State initial_cpu = {.pc=0x0cfe, .a=0x21, .x=0x9b, .y=0xa8, .sp=0x0f, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x019b, .value=0xd6}, {.addr=0x0cfe, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x0cff, .a=0x00, .x=0x9b, .y=0xa8, .sp=0x0f, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x019b, .value=0xd6}, {.addr=0x0cfe, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x0cfe, .value=0x26, .type=IO_READ},
        {.addr=0x0cff, .value=DUMMY, .type=IO_READ},
        {.addr=0x019b, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_002F) {
    const struct CPU_State initial_cpu = {.pc=0xbe11, .a=0xf4, .x=0xc5, .y=0xb5, .sp=0x17, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0xf0}, {.addr=0xbe11, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xbe12, .a=0xf0, .x=0xc5, .y=0xb5, .sp=0x17, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0xf0}, {.addr=0xbe11, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xbe11, .value=0x26, .type=IO_READ},
        {.addr=0xbe12, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c5, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0030) {
    const struct CPU_State initial_cpu = {.pc=0x1f58, .a=0xec, .x=0x9a, .y=0x4c, .sp=0xec, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x009a, .value=0xd4}, {.addr=0x1f58, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x1f59, .a=0xc4, .x=0x9a, .y=0x4c, .sp=0xec, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x009a, .value=0xd4}, {.addr=0x1f58, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x1f58, .value=0x26, .type=IO_READ},
        {.addr=0x1f59, .value=DUMMY, .type=IO_READ},
        {.addr=0x009a, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0031) {
    const struct CPU_State initial_cpu = {.pc=0xd750, .a=0xe5, .x=0xa0, .y=0xc3, .sp=0x49, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0x67}, {.addr=0xd750, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xd751, .a=0x65, .x=0xa0, .y=0xc3, .sp=0x49, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0x67}, {.addr=0xd750, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xd750, .value=0x26, .type=IO_READ},
        {.addr=0xd751, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a0, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0032) {
    const struct CPU_State initial_cpu = {.pc=0xc08b, .a=0xcf, .x=0x5e, .y=0xc1, .sp=0x72, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x005e, .value=0x76}, {.addr=0xc08b, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xc08c, .a=0x46, .x=0x5e, .y=0xc1, .sp=0x72, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x005e, .value=0x76}, {.addr=0xc08b, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xc08b, .value=0x26, .type=IO_READ},
        {.addr=0xc08c, .value=DUMMY, .type=IO_READ},
        {.addr=0x005e, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0033) {
    const struct CPU_State initial_cpu = {.pc=0x7a95, .a=0x70, .x=0xa2, .y=0x6c, .sp=0xe5, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x00a2, .value=0xb8}, {.addr=0x7a95, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x7a96, .a=0x30, .x=0xa2, .y=0x6c, .sp=0xe5, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x00a2, .value=0xb8}, {.addr=0x7a95, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x7a95, .value=0x26, .type=IO_READ},
        {.addr=0x7a96, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a2, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0034) {
    const struct CPU_State initial_cpu = {.pc=0xcff5, .a=0xa8, .x=0x2b, .y=0xad, .sp=0x24, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0xbf}, {.addr=0xcff5, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xcff6, .a=0xa8, .x=0x2b, .y=0xad, .sp=0x24, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0xbf}, {.addr=0xcff5, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xcff5, .value=0x26, .type=IO_READ},
        {.addr=0xcff6, .value=DUMMY, .type=IO_READ},
        {.addr=0x012b, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0036) {
    const struct CPU_State initial_cpu = {.pc=0x72a1, .a=0xb0, .x=0x72, .y=0xe4, .sp=0x5e, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0xeb}, {.addr=0x72a1, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x72a2, .a=0xa0, .x=0x72, .y=0xe4, .sp=0x5e, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0xeb}, {.addr=0x72a1, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x72a1, .value=0x26, .type=IO_READ},
        {.addr=0x72a2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0172, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0038) {
    const struct CPU_State initial_cpu = {.pc=0x0171, .a=0x09, .x=0x99, .y=0x84, .sp=0xf1, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x0171, .value=0x26}, {.addr=0x0199, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x0172, .a=0x08, .x=0x99, .y=0x84, .sp=0xf1, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x0171, .value=0x26}, {.addr=0x0199, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x0171, .value=0x26, .type=IO_READ},
        {.addr=0x0172, .value=DUMMY, .type=IO_READ},
        {.addr=0x0199, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0039) {
    const struct CPU_State initial_cpu = {.pc=0x6eaa, .a=0x73, .x=0xa3, .y=0xb7, .sp=0xaa, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x00a3, .value=0x70}, {.addr=0x6eaa, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x6eab, .a=0x70, .x=0xa3, .y=0xb7, .sp=0xaa, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x00a3, .value=0x70}, {.addr=0x6eaa, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x6eaa, .value=0x26, .type=IO_READ},
        {.addr=0x6eab, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a3, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_003A) {
    const struct CPU_State initial_cpu = {.pc=0xdcc0, .a=0x78, .x=0x92, .y=0x9c, .sp=0x00, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x0192, .value=0x86}, {.addr=0xdcc0, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xdcc1, .a=0x00, .x=0x92, .y=0x9c, .sp=0x00, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x0192, .value=0x86}, {.addr=0xdcc0, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xdcc0, .value=0x26, .type=IO_READ},
        {.addr=0xdcc1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0192, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_003B) {
    const struct CPU_State initial_cpu = {.pc=0xaf40, .a=0xeb, .x=0x30, .y=0xe8, .sp=0x50, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x0030, .value=0x9b}, {.addr=0xaf40, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xaf41, .a=0x8b, .x=0x30, .y=0xe8, .sp=0x50, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x0030, .value=0x9b}, {.addr=0xaf40, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xaf40, .value=0x26, .type=IO_READ},
        {.addr=0xaf41, .value=DUMMY, .type=IO_READ},
        {.addr=0x0030, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_003C) {
    const struct CPU_State initial_cpu = {.pc=0xd875, .a=0x29, .x=0x61, .y=0x5e, .sp=0x91, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x0061, .value=0x41}, {.addr=0xd875, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xd876, .a=0x01, .x=0x61, .y=0x5e, .sp=0x91, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x0061, .value=0x41}, {.addr=0xd875, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xd875, .value=0x26, .type=IO_READ},
        {.addr=0xd876, .value=DUMMY, .type=IO_READ},
        {.addr=0x0061, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_003D) {
    const struct CPU_State initial_cpu = {.pc=0x852e, .a=0x1a, .x=0xca, .y=0xb9, .sp=0xaa, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x01ca, .value=0xa5}, {.addr=0x852e, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x852f, .a=0x00, .x=0xca, .y=0xb9, .sp=0xaa, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x01ca, .value=0xa5}, {.addr=0x852e, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x852e, .value=0x26, .type=IO_READ},
        {.addr=0x852f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ca, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_003E) {
    const struct CPU_State initial_cpu = {.pc=0x38bc, .a=0xef, .x=0x12, .y=0x13, .sp=0xfd, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0x3d}, {.addr=0x38bc, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x38bd, .a=0x2d, .x=0x12, .y=0x13, .sp=0xfd, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0x3d}, {.addr=0x38bc, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x38bc, .value=0x26, .type=IO_READ},
        {.addr=0x38bd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0112, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_003F) {
    const struct CPU_State initial_cpu = {.pc=0x108c, .a=0x6f, .x=0x52, .y=0x27, .sp=0xb0, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x0052, .value=0xd8}, {.addr=0x108c, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x108d, .a=0x48, .x=0x52, .y=0x27, .sp=0xb0, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0052, .value=0xd8}, {.addr=0x108c, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x108c, .value=0x26, .type=IO_READ},
        {.addr=0x108d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0052, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0040) {
    const struct CPU_State initial_cpu = {.pc=0x7dc6, .a=0x16, .x=0xd4, .y=0x28, .sp=0xc4, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0x3c}, {.addr=0x7dc6, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x7dc7, .a=0x14, .x=0xd4, .y=0x28, .sp=0xc4, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0x3c}, {.addr=0x7dc6, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x7dc6, .value=0x26, .type=IO_READ},
        {.addr=0x7dc7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d4, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0041) {
    const struct CPU_State initial_cpu = {.pc=0x1210, .a=0xb5, .x=0xd5, .y=0xa3, .sp=0x38, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x00d5, .value=0x91}, {.addr=0x1210, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x1211, .a=0x91, .x=0xd5, .y=0xa3, .sp=0x38, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x00d5, .value=0x91}, {.addr=0x1210, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x1210, .value=0x26, .type=IO_READ},
        {.addr=0x1211, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d5, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0042) {
    const struct CPU_State initial_cpu = {.pc=0x034c, .a=0xaa, .x=0x24, .y=0x15, .sp=0x8d, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0xc7}, {.addr=0x034c, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x034d, .a=0x82, .x=0x24, .y=0x15, .sp=0x8d, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0xc7}, {.addr=0x034c, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x034c, .value=0x26, .type=IO_READ},
        {.addr=0x034d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0124, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0043) {
    const struct CPU_State initial_cpu = {.pc=0x5752, .a=0xa2, .x=0xbb, .y=0x63, .sp=0xbe, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x00bb, .value=0xec}, {.addr=0x5752, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x5753, .a=0xa0, .x=0xbb, .y=0x63, .sp=0xbe, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x00bb, .value=0xec}, {.addr=0x5752, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x5752, .value=0x26, .type=IO_READ},
        {.addr=0x5753, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bb, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0044) {
    const struct CPU_State initial_cpu = {.pc=0x3810, .a=0x6e, .x=0x01, .y=0xbb, .sp=0xd7, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x0101, .value=0x99}, {.addr=0x3810, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x3811, .a=0x08, .x=0x01, .y=0xbb, .sp=0xd7, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x0101, .value=0x99}, {.addr=0x3810, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x3810, .value=0x26, .type=IO_READ},
        {.addr=0x3811, .value=DUMMY, .type=IO_READ},
        {.addr=0x0101, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0045) {
    const struct CPU_State initial_cpu = {.pc=0x5e9e, .a=0x66, .x=0x38, .y=0xc4, .sp=0x29, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x0138, .value=0x6c}, {.addr=0x5e9e, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x5e9f, .a=0x64, .x=0x38, .y=0xc4, .sp=0x29, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x0138, .value=0x6c}, {.addr=0x5e9e, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x5e9e, .value=0x26, .type=IO_READ},
        {.addr=0x5e9f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0138, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0046) {
    const struct CPU_State initial_cpu = {.pc=0x7a67, .a=0x5c, .x=0xc1, .y=0xbc, .sp=0x65, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x00c1, .value=0x70}, {.addr=0x7a67, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x7a68, .a=0x50, .x=0xc1, .y=0xbc, .sp=0x65, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x00c1, .value=0x70}, {.addr=0x7a67, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x7a67, .value=0x26, .type=IO_READ},
        {.addr=0x7a68, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c1, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0047) {
    const struct CPU_State initial_cpu = {.pc=0x103f, .a=0xad, .x=0x7d, .y=0x80, .sp=0xe0, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0x3c}, {.addr=0x103f, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x1040, .a=0x2c, .x=0x7d, .y=0x80, .sp=0xe0, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0x3c}, {.addr=0x103f, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x103f, .value=0x26, .type=IO_READ},
        {.addr=0x1040, .value=DUMMY, .type=IO_READ},
        {.addr=0x017d, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0048) {
    const struct CPU_State initial_cpu = {.pc=0xd192, .a=0x82, .x=0xc4, .y=0xd1, .sp=0xce, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x00c4, .value=0xf9}, {.addr=0xd192, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xd193, .a=0x80, .x=0xc4, .y=0xd1, .sp=0xce, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x00c4, .value=0xf9}, {.addr=0xd192, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xd192, .value=0x26, .type=IO_READ},
        {.addr=0xd193, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c4, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0049) {
    const struct CPU_State initial_cpu = {.pc=0x3e13, .a=0x03, .x=0x4f, .y=0xad, .sp=0x1a, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x014f, .value=0x05}, {.addr=0x3e13, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x3e14, .a=0x01, .x=0x4f, .y=0xad, .sp=0x1a, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x014f, .value=0x05}, {.addr=0x3e13, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x3e13, .value=0x26, .type=IO_READ},
        {.addr=0x3e14, .value=DUMMY, .type=IO_READ},
        {.addr=0x014f, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_004A) {
    const struct CPU_State initial_cpu = {.pc=0xd79b, .a=0x54, .x=0x37, .y=0x3c, .sp=0x50, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x0037, .value=0x21}, {.addr=0xd79b, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xd79c, .a=0x00, .x=0x37, .y=0x3c, .sp=0x50, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x0037, .value=0x21}, {.addr=0xd79b, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xd79b, .value=0x26, .type=IO_READ},
        {.addr=0xd79c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0037, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_004B) {
    const struct CPU_State initial_cpu = {.pc=0xa523, .a=0xc3, .x=0x94, .y=0x70, .sp=0xe2, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0x79}, {.addr=0xa523, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xa524, .a=0x41, .x=0x94, .y=0x70, .sp=0xe2, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0x79}, {.addr=0xa523, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xa523, .value=0x26, .type=IO_READ},
        {.addr=0xa524, .value=DUMMY, .type=IO_READ},
        {.addr=0x0194, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_004C) {
    const struct CPU_State initial_cpu = {.pc=0xea98, .a=0xf9, .x=0xa6, .y=0x01, .sp=0xa9, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x01a6, .value=0x6f}, {.addr=0xea98, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xea99, .a=0x69, .x=0xa6, .y=0x01, .sp=0xa9, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01a6, .value=0x6f}, {.addr=0xea98, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xea98, .value=0x26, .type=IO_READ},
        {.addr=0xea99, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a6, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_004D) {
    const struct CPU_State initial_cpu = {.pc=0x1b04, .a=0x41, .x=0xe6, .y=0x7c, .sp=0xeb, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0x40}, {.addr=0x1b04, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x1b05, .a=0x40, .x=0xe6, .y=0x7c, .sp=0xeb, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0x40}, {.addr=0x1b04, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x1b04, .value=0x26, .type=IO_READ},
        {.addr=0x1b05, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e6, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_004E) {
    const struct CPU_State initial_cpu = {.pc=0x8a35, .a=0x55, .x=0x6b, .y=0x77, .sp=0x1a, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x006b, .value=0x91}, {.addr=0x8a35, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x8a36, .a=0x11, .x=0x6b, .y=0x77, .sp=0x1a, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x006b, .value=0x91}, {.addr=0x8a35, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x8a35, .value=0x26, .type=IO_READ},
        {.addr=0x8a36, .value=DUMMY, .type=IO_READ},
        {.addr=0x006b, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_004F) {
    const struct CPU_State initial_cpu = {.pc=0xeea3, .a=0xd2, .x=0xce, .y=0x5d, .sp=0x37, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x00ce, .value=0x2c}, {.addr=0xeea3, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xeea4, .a=0x00, .x=0xce, .y=0x5d, .sp=0x37, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x00ce, .value=0x2c}, {.addr=0xeea3, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xeea3, .value=0x26, .type=IO_READ},
        {.addr=0xeea4, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ce, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0050) {
    const struct CPU_State initial_cpu = {.pc=0xead2, .a=0x33, .x=0x68, .y=0xe4, .sp=0x0c, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x0068, .value=0x6d}, {.addr=0xead2, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xead3, .a=0x21, .x=0x68, .y=0xe4, .sp=0x0c, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x0068, .value=0x6d}, {.addr=0xead2, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xead2, .value=0x26, .type=IO_READ},
        {.addr=0xead3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0068, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0051) {
    const struct CPU_State initial_cpu = {.pc=0xb2b7, .a=0x65, .x=0x5f, .y=0xdc, .sp=0x89, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x005f, .value=0x03}, {.addr=0xb2b7, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xb2b8, .a=0x01, .x=0x5f, .y=0xdc, .sp=0x89, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x005f, .value=0x03}, {.addr=0xb2b7, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xb2b7, .value=0x26, .type=IO_READ},
        {.addr=0xb2b8, .value=DUMMY, .type=IO_READ},
        {.addr=0x005f, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0052) {
    const struct CPU_State initial_cpu = {.pc=0x4804, .a=0xa6, .x=0xbd, .y=0x2d, .sp=0x2d, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x00bd, .value=0x62}, {.addr=0x4804, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x4805, .a=0x22, .x=0xbd, .y=0x2d, .sp=0x2d, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x00bd, .value=0x62}, {.addr=0x4804, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x4804, .value=0x26, .type=IO_READ},
        {.addr=0x4805, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bd, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0053) {
    const struct CPU_State initial_cpu = {.pc=0xd214, .a=0x9f, .x=0x7a, .y=0x88, .sp=0xbf, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x007a, .value=0x6a}, {.addr=0xd214, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xd215, .a=0x0a, .x=0x7a, .y=0x88, .sp=0xbf, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x007a, .value=0x6a}, {.addr=0xd214, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xd214, .value=0x26, .type=IO_READ},
        {.addr=0xd215, .value=DUMMY, .type=IO_READ},
        {.addr=0x007a, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0054) {
    const struct CPU_State initial_cpu = {.pc=0x656e, .a=0x2f, .x=0xe2, .y=0xcc, .sp=0x6f, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0xef}, {.addr=0x656e, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x656f, .a=0x2f, .x=0xe2, .y=0xcc, .sp=0x6f, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0xef}, {.addr=0x656e, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x656e, .value=0x26, .type=IO_READ},
        {.addr=0x656f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e2, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0055) {
    const struct CPU_State initial_cpu = {.pc=0xdd31, .a=0x4e, .x=0x61, .y=0x37, .sp=0xf0, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x0061, .value=0x05}, {.addr=0xdd31, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xdd32, .a=0x04, .x=0x61, .y=0x37, .sp=0xf0, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0061, .value=0x05}, {.addr=0xdd31, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xdd31, .value=0x26, .type=IO_READ},
        {.addr=0xdd32, .value=DUMMY, .type=IO_READ},
        {.addr=0x0061, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0056) {
    const struct CPU_State initial_cpu = {.pc=0xbc04, .a=0x87, .x=0x2e, .y=0xf1, .sp=0xf9, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x002e, .value=0xe6}, {.addr=0xbc04, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xbc05, .a=0x86, .x=0x2e, .y=0xf1, .sp=0xf9, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x002e, .value=0xe6}, {.addr=0xbc04, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xbc04, .value=0x26, .type=IO_READ},
        {.addr=0xbc05, .value=DUMMY, .type=IO_READ},
        {.addr=0x002e, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0057) {
    const struct CPU_State initial_cpu = {.pc=0x321e, .a=0x72, .x=0xf3, .y=0x90, .sp=0xff, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x01f3, .value=0xe7}, {.addr=0x321e, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x321f, .a=0x62, .x=0xf3, .y=0x90, .sp=0xff, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x01f3, .value=0xe7}, {.addr=0x321e, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x321e, .value=0x26, .type=IO_READ},
        {.addr=0x321f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f3, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0058) {
    const struct CPU_State initial_cpu = {.pc=0x93f9, .a=0x3b, .x=0x50, .y=0x53, .sp=0x62, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0xc4}, {.addr=0x93f9, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x93fa, .a=0x00, .x=0x50, .y=0x53, .sp=0x62, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0xc4}, {.addr=0x93f9, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x93f9, .value=0x26, .type=IO_READ},
        {.addr=0x93fa, .value=DUMMY, .type=IO_READ},
        {.addr=0x0150, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0059) {
    const struct CPU_State initial_cpu = {.pc=0xce5e, .a=0x08, .x=0xa2, .y=0x14, .sp=0x01, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x01a2, .value=0x1b}, {.addr=0xce5e, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xce5f, .a=0x08, .x=0xa2, .y=0x14, .sp=0x01, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x01a2, .value=0x1b}, {.addr=0xce5e, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xce5e, .value=0x26, .type=IO_READ},
        {.addr=0xce5f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a2, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_005A) {
    const struct CPU_State initial_cpu = {.pc=0x9a1c, .a=0x26, .x=0x0e, .y=0xb3, .sp=0xe0, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x010e, .value=0xdf}, {.addr=0x9a1c, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x9a1d, .a=0x06, .x=0x0e, .y=0xb3, .sp=0xe0, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x010e, .value=0xdf}, {.addr=0x9a1c, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x9a1c, .value=0x26, .type=IO_READ},
        {.addr=0x9a1d, .value=DUMMY, .type=IO_READ},
        {.addr=0x010e, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_005B) {
    const struct CPU_State initial_cpu = {.pc=0xad23, .a=0x09, .x=0x52, .y=0x96, .sp=0x84, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x0052, .value=0x49}, {.addr=0xad23, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xad24, .a=0x09, .x=0x52, .y=0x96, .sp=0x84, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0052, .value=0x49}, {.addr=0xad23, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xad23, .value=0x26, .type=IO_READ},
        {.addr=0xad24, .value=DUMMY, .type=IO_READ},
        {.addr=0x0052, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_005C) {
    const struct CPU_State initial_cpu = {.pc=0x9b37, .a=0x7a, .x=0xa1, .y=0x3a, .sp=0xb9, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0x92}, {.addr=0x9b37, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x9b38, .a=0x12, .x=0xa1, .y=0x3a, .sp=0xb9, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0x92}, {.addr=0x9b37, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x9b37, .value=0x26, .type=IO_READ},
        {.addr=0x9b38, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a1, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_005D) {
    const struct CPU_State initial_cpu = {.pc=0xeb90, .a=0x48, .x=0x01, .y=0x68, .sp=0x24, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x0001, .value=0xe3}, {.addr=0xeb90, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xeb91, .a=0x40, .x=0x01, .y=0x68, .sp=0x24, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0001, .value=0xe3}, {.addr=0xeb90, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xeb90, .value=0x26, .type=IO_READ},
        {.addr=0xeb91, .value=DUMMY, .type=IO_READ},
        {.addr=0x0001, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_005E) {
    const struct CPU_State initial_cpu = {.pc=0x3331, .a=0xde, .x=0x78, .y=0x61, .sp=0xfe, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0xd4}, {.addr=0x3331, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x3332, .a=0xd4, .x=0x78, .y=0x61, .sp=0xfe, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0xd4}, {.addr=0x3331, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x3331, .value=0x26, .type=IO_READ},
        {.addr=0x3332, .value=DUMMY, .type=IO_READ},
        {.addr=0x0178, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_005F) {
    const struct CPU_State initial_cpu = {.pc=0x4667, .a=0x40, .x=0x11, .y=0xf9, .sp=0xbf, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x0111, .value=0x9b}, {.addr=0x4667, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x4668, .a=0x00, .x=0x11, .y=0xf9, .sp=0xbf, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x0111, .value=0x9b}, {.addr=0x4667, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x4667, .value=0x26, .type=IO_READ},
        {.addr=0x4668, .value=DUMMY, .type=IO_READ},
        {.addr=0x0111, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0060) {
    const struct CPU_State initial_cpu = {.pc=0x04ee, .a=0x87, .x=0xc6, .y=0xd8, .sp=0xc1, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x00c6, .value=0x82}, {.addr=0x04ee, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x04ef, .a=0x82, .x=0xc6, .y=0xd8, .sp=0xc1, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x00c6, .value=0x82}, {.addr=0x04ee, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x04ee, .value=0x26, .type=IO_READ},
        {.addr=0x04ef, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c6, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0061) {
    const struct CPU_State initial_cpu = {.pc=0xa34a, .a=0xd4, .x=0xec, .y=0xc6, .sp=0x00, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x00ec, .value=0x0e}, {.addr=0xa34a, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xa34b, .a=0x04, .x=0xec, .y=0xc6, .sp=0x00, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x00ec, .value=0x0e}, {.addr=0xa34a, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xa34a, .value=0x26, .type=IO_READ},
        {.addr=0xa34b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ec, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0062) {
    const struct CPU_State initial_cpu = {.pc=0xe91a, .a=0xe4, .x=0x06, .y=0x01, .sp=0x3b, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x39}, {.addr=0xe91a, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xe91b, .a=0x20, .x=0x06, .y=0x01, .sp=0x3b, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0x39}, {.addr=0xe91a, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xe91a, .value=0x26, .type=IO_READ},
        {.addr=0xe91b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0106, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0063) {
    const struct CPU_State initial_cpu = {.pc=0xc613, .a=0xff, .x=0xea, .y=0x35, .sp=0x00, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x00ea, .value=0x5e}, {.addr=0xc613, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xc614, .a=0x5e, .x=0xea, .y=0x35, .sp=0x00, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x00ea, .value=0x5e}, {.addr=0xc613, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xc613, .value=0x26, .type=IO_READ},
        {.addr=0xc614, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ea, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0064) {
    const struct CPU_State initial_cpu = {.pc=0x7df0, .a=0x04, .x=0x7e, .y=0x2a, .sp=0x37, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x007e, .value=0x0b}, {.addr=0x7df0, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x7df1, .a=0x00, .x=0x7e, .y=0x2a, .sp=0x37, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x007e, .value=0x0b}, {.addr=0x7df0, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x7df0, .value=0x26, .type=IO_READ},
        {.addr=0x7df1, .value=DUMMY, .type=IO_READ},
        {.addr=0x007e, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0065) {
    const struct CPU_State initial_cpu = {.pc=0x24a9, .a=0xed, .x=0x47, .y=0x4a, .sp=0xa7, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x0047, .value=0x88}, {.addr=0x24a9, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x24aa, .a=0x88, .x=0x47, .y=0x4a, .sp=0xa7, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0047, .value=0x88}, {.addr=0x24a9, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x24a9, .value=0x26, .type=IO_READ},
        {.addr=0x24aa, .value=DUMMY, .type=IO_READ},
        {.addr=0x0047, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0066) {
    const struct CPU_State initial_cpu = {.pc=0x3b9c, .a=0xe4, .x=0x5c, .y=0x0d, .sp=0xfb, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x005c, .value=0xff}, {.addr=0x3b9c, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x3b9d, .a=0xe4, .x=0x5c, .y=0x0d, .sp=0xfb, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x005c, .value=0xff}, {.addr=0x3b9c, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x3b9c, .value=0x26, .type=IO_READ},
        {.addr=0x3b9d, .value=DUMMY, .type=IO_READ},
        {.addr=0x005c, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0067) {
    const struct CPU_State initial_cpu = {.pc=0xef85, .a=0x61, .x=0x9e, .y=0x96, .sp=0x94, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x009e, .value=0x30}, {.addr=0xef85, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xef86, .a=0x20, .x=0x9e, .y=0x96, .sp=0x94, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x009e, .value=0x30}, {.addr=0xef85, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xef85, .value=0x26, .type=IO_READ},
        {.addr=0xef86, .value=DUMMY, .type=IO_READ},
        {.addr=0x009e, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0068) {
    const struct CPU_State initial_cpu = {.pc=0x7b94, .a=0x2a, .x=0x19, .y=0x5b, .sp=0x07, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x0019, .value=0xb1}, {.addr=0x7b94, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x7b95, .a=0x20, .x=0x19, .y=0x5b, .sp=0x07, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0019, .value=0xb1}, {.addr=0x7b94, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x7b94, .value=0x26, .type=IO_READ},
        {.addr=0x7b95, .value=DUMMY, .type=IO_READ},
        {.addr=0x0019, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0069) {
    const struct CPU_State initial_cpu = {.pc=0xda24, .a=0x8c, .x=0x63, .y=0x72, .sp=0x39, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0x30}, {.addr=0xda24, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xda25, .a=0x00, .x=0x63, .y=0x72, .sp=0x39, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0x30}, {.addr=0xda24, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xda24, .value=0x26, .type=IO_READ},
        {.addr=0xda25, .value=DUMMY, .type=IO_READ},
        {.addr=0x0163, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_006A) {
    const struct CPU_State initial_cpu = {.pc=0x2d01, .a=0xad, .x=0x26, .y=0x7f, .sp=0x60, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x0126, .value=0x08}, {.addr=0x2d01, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x2d02, .a=0x08, .x=0x26, .y=0x7f, .sp=0x60, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x0126, .value=0x08}, {.addr=0x2d01, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x2d01, .value=0x26, .type=IO_READ},
        {.addr=0x2d02, .value=DUMMY, .type=IO_READ},
        {.addr=0x0126, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_006B) {
    const struct CPU_State initial_cpu = {.pc=0x8be6, .a=0x3d, .x=0x02, .y=0x9d, .sp=0x91, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x0002, .value=0x0e}, {.addr=0x8be6, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x8be7, .a=0x0c, .x=0x02, .y=0x9d, .sp=0x91, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0002, .value=0x0e}, {.addr=0x8be6, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x8be6, .value=0x26, .type=IO_READ},
        {.addr=0x8be7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0002, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_006C) {
    const struct CPU_State initial_cpu = {.pc=0xe910, .a=0x6f, .x=0x01, .y=0x99, .sp=0xce, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x0101, .value=0xdf}, {.addr=0xe910, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xe911, .a=0x4f, .x=0x01, .y=0x99, .sp=0xce, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0101, .value=0xdf}, {.addr=0xe910, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xe910, .value=0x26, .type=IO_READ},
        {.addr=0xe911, .value=DUMMY, .type=IO_READ},
        {.addr=0x0101, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_006D) {
    const struct CPU_State initial_cpu = {.pc=0x09e9, .a=0xa7, .x=0xbf, .y=0x0f, .sp=0x6b, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x01bf, .value=0x1b}, {.addr=0x09e9, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x09ea, .a=0x03, .x=0xbf, .y=0x0f, .sp=0x6b, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x01bf, .value=0x1b}, {.addr=0x09e9, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x09e9, .value=0x26, .type=IO_READ},
        {.addr=0x09ea, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bf, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_006E) {
    const struct CPU_State initial_cpu = {.pc=0x4c13, .a=0x0e, .x=0x69, .y=0xed, .sp=0xc1, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x0069, .value=0x73}, {.addr=0x4c13, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x4c14, .a=0x02, .x=0x69, .y=0xed, .sp=0xc1, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x0069, .value=0x73}, {.addr=0x4c13, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x4c13, .value=0x26, .type=IO_READ},
        {.addr=0x4c14, .value=DUMMY, .type=IO_READ},
        {.addr=0x0069, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_006F) {
    const struct CPU_State initial_cpu = {.pc=0x5bd2, .a=0x8d, .x=0x7c, .y=0x1a, .sp=0xc8, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x007c, .value=0xc7}, {.addr=0x5bd2, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x5bd3, .a=0x85, .x=0x7c, .y=0x1a, .sp=0xc8, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x007c, .value=0xc7}, {.addr=0x5bd2, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x5bd2, .value=0x26, .type=IO_READ},
        {.addr=0x5bd3, .value=DUMMY, .type=IO_READ},
        {.addr=0x007c, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0070) {
    const struct CPU_State initial_cpu = {.pc=0xd24e, .a=0xcd, .x=0x85, .y=0x82, .sp=0xc7, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x0085, .value=0xe9}, {.addr=0xd24e, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xd24f, .a=0xc9, .x=0x85, .y=0x82, .sp=0xc7, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0085, .value=0xe9}, {.addr=0xd24e, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xd24e, .value=0x26, .type=IO_READ},
        {.addr=0xd24f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0085, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0071) {
    const struct CPU_State initial_cpu = {.pc=0x8350, .a=0x06, .x=0x53, .y=0x8a, .sp=0xd3, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0x11}, {.addr=0x8350, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x8351, .a=0x00, .x=0x53, .y=0x8a, .sp=0xd3, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0x11}, {.addr=0x8350, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x8350, .value=0x26, .type=IO_READ},
        {.addr=0x8351, .value=DUMMY, .type=IO_READ},
        {.addr=0x0153, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0072) {
    const struct CPU_State initial_cpu = {.pc=0x893a, .a=0x1d, .x=0x95, .y=0xf8, .sp=0xca, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x0095, .value=0x92}, {.addr=0x893a, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x893b, .a=0x10, .x=0x95, .y=0xf8, .sp=0xca, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x0095, .value=0x92}, {.addr=0x893a, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x893a, .value=0x26, .type=IO_READ},
        {.addr=0x893b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0095, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0073) {
    const struct CPU_State initial_cpu = {.pc=0x0844, .a=0x2c, .x=0x9c, .y=0x0d, .sp=0x36, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x019c, .value=0xec}, {.addr=0x0844, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x0845, .a=0x2c, .x=0x9c, .y=0x0d, .sp=0x36, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x019c, .value=0xec}, {.addr=0x0844, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x0844, .value=0x26, .type=IO_READ},
        {.addr=0x0845, .value=DUMMY, .type=IO_READ},
        {.addr=0x019c, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0074) {
    const struct CPU_State initial_cpu = {.pc=0x9537, .a=0x84, .x=0x81, .y=0x19, .sp=0x84, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0xeb}, {.addr=0x9537, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x9538, .a=0x80, .x=0x81, .y=0x19, .sp=0x84, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0xeb}, {.addr=0x9537, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x9537, .value=0x26, .type=IO_READ},
        {.addr=0x9538, .value=DUMMY, .type=IO_READ},
        {.addr=0x0181, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0075) {
    const struct CPU_State initial_cpu = {.pc=0xb8e0, .a=0xcb, .x=0x82, .y=0xc6, .sp=0x49, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x0082, .value=0x7a}, {.addr=0xb8e0, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xb8e1, .a=0x4a, .x=0x82, .y=0xc6, .sp=0x49, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x0082, .value=0x7a}, {.addr=0xb8e0, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xb8e0, .value=0x26, .type=IO_READ},
        {.addr=0xb8e1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0082, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0076) {
    const struct CPU_State initial_cpu = {.pc=0x8067, .a=0x10, .x=0x10, .y=0xff, .sp=0x60, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x0010, .value=0xcd}, {.addr=0x8067, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x8068, .a=0x00, .x=0x10, .y=0xff, .sp=0x60, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x0010, .value=0xcd}, {.addr=0x8067, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x8067, .value=0x26, .type=IO_READ},
        {.addr=0x8068, .value=DUMMY, .type=IO_READ},
        {.addr=0x0010, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0077) {
    const struct CPU_State initial_cpu = {.pc=0xa3ba, .a=0x65, .x=0xde, .y=0xc3, .sp=0x13, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x01de, .value=0xae}, {.addr=0xa3ba, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xa3bb, .a=0x24, .x=0xde, .y=0xc3, .sp=0x13, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x01de, .value=0xae}, {.addr=0xa3ba, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xa3ba, .value=0x26, .type=IO_READ},
        {.addr=0xa3bb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01de, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0078) {
    const struct CPU_State initial_cpu = {.pc=0x66ed, .a=0x13, .x=0xb7, .y=0x14, .sp=0x79, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x01b7, .value=0xd8}, {.addr=0x66ed, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x66ee, .a=0x10, .x=0xb7, .y=0x14, .sp=0x79, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x01b7, .value=0xd8}, {.addr=0x66ed, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x66ed, .value=0x26, .type=IO_READ},
        {.addr=0x66ee, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b7, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0079) {
    const struct CPU_State initial_cpu = {.pc=0xa347, .a=0x2d, .x=0xbf, .y=0xe8, .sp=0x99, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x01bf, .value=0x8b}, {.addr=0xa347, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xa348, .a=0x09, .x=0xbf, .y=0xe8, .sp=0x99, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x01bf, .value=0x8b}, {.addr=0xa347, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xa347, .value=0x26, .type=IO_READ},
        {.addr=0xa348, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bf, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_007A) {
    const struct CPU_State initial_cpu = {.pc=0x8f1d, .a=0x23, .x=0xae, .y=0x8b, .sp=0xcc, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x00ae, .value=0x50}, {.addr=0x8f1d, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x8f1e, .a=0x00, .x=0xae, .y=0x8b, .sp=0xcc, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x00ae, .value=0x50}, {.addr=0x8f1d, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x8f1d, .value=0x26, .type=IO_READ},
        {.addr=0x8f1e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ae, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_007B) {
    const struct CPU_State initial_cpu = {.pc=0xdcfc, .a=0xa2, .x=0xa6, .y=0x97, .sp=0x63, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x01a6, .value=0x50}, {.addr=0xdcfc, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xdcfd, .a=0x00, .x=0xa6, .y=0x97, .sp=0x63, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x01a6, .value=0x50}, {.addr=0xdcfc, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xdcfc, .value=0x26, .type=IO_READ},
        {.addr=0xdcfd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a6, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_007C) {
    const struct CPU_State initial_cpu = {.pc=0x64b3, .a=0xed, .x=0x50, .y=0x47, .sp=0xc1, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0xd6}, {.addr=0x64b3, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x64b4, .a=0xc4, .x=0x50, .y=0x47, .sp=0xc1, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0xd6}, {.addr=0x64b3, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x64b3, .value=0x26, .type=IO_READ},
        {.addr=0x64b4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0150, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_007D) {
    const struct CPU_State initial_cpu = {.pc=0xcc49, .a=0x18, .x=0xc9, .y=0xfb, .sp=0xd0, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x00c9, .value=0x71}, {.addr=0xcc49, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xcc4a, .a=0x10, .x=0xc9, .y=0xfb, .sp=0xd0, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x00c9, .value=0x71}, {.addr=0xcc49, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xcc49, .value=0x26, .type=IO_READ},
        {.addr=0xcc4a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c9, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_007E) {
    const struct CPU_State initial_cpu = {.pc=0x8ebd, .a=0x3e, .x=0x8b, .y=0x8e, .sp=0xe3, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x008b, .value=0xe8}, {.addr=0x8ebd, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x8ebe, .a=0x28, .x=0x8b, .y=0x8e, .sp=0xe3, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x008b, .value=0xe8}, {.addr=0x8ebd, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x8ebd, .value=0x26, .type=IO_READ},
        {.addr=0x8ebe, .value=DUMMY, .type=IO_READ},
        {.addr=0x008b, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_007F) {
    const struct CPU_State initial_cpu = {.pc=0x0235, .a=0x3e, .x=0xed, .y=0x59, .sp=0xd3, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x00ed, .value=0x8a}, {.addr=0x0235, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x0236, .a=0x0a, .x=0xed, .y=0x59, .sp=0xd3, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x00ed, .value=0x8a}, {.addr=0x0235, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x0235, .value=0x26, .type=IO_READ},
        {.addr=0x0236, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ed, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0080) {
    const struct CPU_State initial_cpu = {.pc=0x5991, .a=0x05, .x=0x58, .y=0x4c, .sp=0x04, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x0058, .value=0x14}, {.addr=0x5991, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x5992, .a=0x04, .x=0x58, .y=0x4c, .sp=0x04, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0058, .value=0x14}, {.addr=0x5991, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x5991, .value=0x26, .type=IO_READ},
        {.addr=0x5992, .value=DUMMY, .type=IO_READ},
        {.addr=0x0058, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0081) {
    const struct CPU_State initial_cpu = {.pc=0x117b, .a=0x90, .x=0x95, .y=0x50, .sp=0x7d, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0x02}, {.addr=0x117b, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x117c, .a=0x00, .x=0x95, .y=0x50, .sp=0x7d, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0x02}, {.addr=0x117b, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x117b, .value=0x26, .type=IO_READ},
        {.addr=0x117c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0195, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0082) {
    const struct CPU_State initial_cpu = {.pc=0x7b25, .a=0x5d, .x=0xed, .y=0xed, .sp=0x74, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x00ed, .value=0x0d}, {.addr=0x7b25, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x7b26, .a=0x0d, .x=0xed, .y=0xed, .sp=0x74, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x00ed, .value=0x0d}, {.addr=0x7b25, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x7b25, .value=0x26, .type=IO_READ},
        {.addr=0x7b26, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ed, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0083) {
    const struct CPU_State initial_cpu = {.pc=0xdae8, .a=0xb5, .x=0xac, .y=0x94, .sp=0x34, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x01ac, .value=0x08}, {.addr=0xdae8, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xdae9, .a=0x00, .x=0xac, .y=0x94, .sp=0x34, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x01ac, .value=0x08}, {.addr=0xdae8, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xdae8, .value=0x26, .type=IO_READ},
        {.addr=0xdae9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ac, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0084) {
    const struct CPU_State initial_cpu = {.pc=0x8d2b, .a=0x5a, .x=0x52, .y=0x2f, .sp=0x6a, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0x12}, {.addr=0x8d2b, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x8d2c, .a=0x12, .x=0x52, .y=0x2f, .sp=0x6a, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0x12}, {.addr=0x8d2b, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x8d2b, .value=0x26, .type=IO_READ},
        {.addr=0x8d2c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0152, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0085) {
    const struct CPU_State initial_cpu = {.pc=0x181b, .a=0x86, .x=0xc9, .y=0xc0, .sp=0xa2, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0x4a}, {.addr=0x181b, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x181c, .a=0x02, .x=0xc9, .y=0xc0, .sp=0xa2, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0x4a}, {.addr=0x181b, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x181b, .value=0x26, .type=IO_READ},
        {.addr=0x181c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c9, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0086) {
    const struct CPU_State initial_cpu = {.pc=0xa63a, .a=0xca, .x=0x1f, .y=0xd3, .sp=0x00, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0xe2}, {.addr=0xa63a, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xa63b, .a=0xc2, .x=0x1f, .y=0xd3, .sp=0x00, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0xe2}, {.addr=0xa63a, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xa63a, .value=0x26, .type=IO_READ},
        {.addr=0xa63b, .value=DUMMY, .type=IO_READ},
        {.addr=0x011f, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0087) {
    const struct CPU_State initial_cpu = {.pc=0xa4fc, .a=0xee, .x=0x00, .y=0x28, .sp=0xb7, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x0000, .value=0xbe}, {.addr=0xa4fc, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xa4fd, .a=0xae, .x=0x00, .y=0x28, .sp=0xb7, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0000, .value=0xbe}, {.addr=0xa4fc, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xa4fc, .value=0x26, .type=IO_READ},
        {.addr=0xa4fd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0000, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0088) {
    const struct CPU_State initial_cpu = {.pc=0x0c85, .a=0x45, .x=0x54, .y=0x44, .sp=0x23, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x0154, .value=0x0d}, {.addr=0x0c85, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x0c86, .a=0x05, .x=0x54, .y=0x44, .sp=0x23, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0154, .value=0x0d}, {.addr=0x0c85, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x0c85, .value=0x26, .type=IO_READ},
        {.addr=0x0c86, .value=DUMMY, .type=IO_READ},
        {.addr=0x0154, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0089) {
    const struct CPU_State initial_cpu = {.pc=0x0880, .a=0x8d, .x=0x51, .y=0xda, .sp=0x07, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x0051, .value=0x38}, {.addr=0x0880, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x0881, .a=0x08, .x=0x51, .y=0xda, .sp=0x07, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x0051, .value=0x38}, {.addr=0x0880, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x0880, .value=0x26, .type=IO_READ},
        {.addr=0x0881, .value=DUMMY, .type=IO_READ},
        {.addr=0x0051, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_008A) {
    const struct CPU_State initial_cpu = {.pc=0x5bd5, .a=0x3c, .x=0xa2, .y=0x12, .sp=0xe6, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x00a2, .value=0x57}, {.addr=0x5bd5, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x5bd6, .a=0x14, .x=0xa2, .y=0x12, .sp=0xe6, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x00a2, .value=0x57}, {.addr=0x5bd5, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x5bd5, .value=0x26, .type=IO_READ},
        {.addr=0x5bd6, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a2, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_008C) {
    const struct CPU_State initial_cpu = {.pc=0x0119, .a=0x88, .x=0x62, .y=0x14, .sp=0x90, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x0062, .value=0x83}, {.addr=0x0119, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x011a, .a=0x80, .x=0x62, .y=0x14, .sp=0x90, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0062, .value=0x83}, {.addr=0x0119, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x0119, .value=0x26, .type=IO_READ},
        {.addr=0x011a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0062, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_008D) {
    const struct CPU_State initial_cpu = {.pc=0x8413, .a=0x7c, .x=0xba, .y=0xd9, .sp=0x7f, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0xc0}, {.addr=0x8413, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x8414, .a=0x40, .x=0xba, .y=0xd9, .sp=0x7f, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0xc0}, {.addr=0x8413, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x8413, .value=0x26, .type=IO_READ},
        {.addr=0x8414, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ba, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_008E) {
    const struct CPU_State initial_cpu = {.pc=0x5fb1, .a=0x4e, .x=0x79, .y=0x07, .sp=0x4c, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x0079, .value=0x69}, {.addr=0x5fb1, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x5fb2, .a=0x48, .x=0x79, .y=0x07, .sp=0x4c, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x0079, .value=0x69}, {.addr=0x5fb1, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x5fb1, .value=0x26, .type=IO_READ},
        {.addr=0x5fb2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0079, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_008F) {
    const struct CPU_State initial_cpu = {.pc=0x0b5b, .a=0x68, .x=0x35, .y=0xcb, .sp=0xbe, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x0035, .value=0xfc}, {.addr=0x0b5b, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x0b5c, .a=0x68, .x=0x35, .y=0xcb, .sp=0xbe, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x0035, .value=0xfc}, {.addr=0x0b5b, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x0b5b, .value=0x26, .type=IO_READ},
        {.addr=0x0b5c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0035, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0090) {
    const struct CPU_State initial_cpu = {.pc=0xb3c0, .a=0x49, .x=0x93, .y=0x0e, .sp=0x3a, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x0093, .value=0xf6}, {.addr=0xb3c0, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xb3c1, .a=0x40, .x=0x93, .y=0x0e, .sp=0x3a, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0093, .value=0xf6}, {.addr=0xb3c0, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xb3c0, .value=0x26, .type=IO_READ},
        {.addr=0xb3c1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0093, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0091) {
    const struct CPU_State initial_cpu = {.pc=0xd226, .a=0x69, .x=0xb0, .y=0x53, .sp=0x1e, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x00b0, .value=0xe5}, {.addr=0xd226, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xd227, .a=0x61, .x=0xb0, .y=0x53, .sp=0x1e, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x00b0, .value=0xe5}, {.addr=0xd226, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xd226, .value=0x26, .type=IO_READ},
        {.addr=0xd227, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b0, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0092) {
    const struct CPU_State initial_cpu = {.pc=0x955b, .a=0x9a, .x=0x5b, .y=0x02, .sp=0x86, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x015b, .value=0x45}, {.addr=0x955b, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x955c, .a=0x00, .x=0x5b, .y=0x02, .sp=0x86, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x015b, .value=0x45}, {.addr=0x955b, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x955b, .value=0x26, .type=IO_READ},
        {.addr=0x955c, .value=DUMMY, .type=IO_READ},
        {.addr=0x015b, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0093) {
    const struct CPU_State initial_cpu = {.pc=0x8d31, .a=0x06, .x=0x2f, .y=0x88, .sp=0x21, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x012f, .value=0x7a}, {.addr=0x8d31, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x8d32, .a=0x02, .x=0x2f, .y=0x88, .sp=0x21, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x012f, .value=0x7a}, {.addr=0x8d31, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x8d31, .value=0x26, .type=IO_READ},
        {.addr=0x8d32, .value=DUMMY, .type=IO_READ},
        {.addr=0x012f, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0094) {
    const struct CPU_State initial_cpu = {.pc=0x20ba, .a=0xe5, .x=0xee, .y=0x48, .sp=0x44, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0xdf}, {.addr=0x20ba, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x20bb, .a=0xc5, .x=0xee, .y=0x48, .sp=0x44, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0xdf}, {.addr=0x20ba, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x20ba, .value=0x26, .type=IO_READ},
        {.addr=0x20bb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ee, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0095) {
    const struct CPU_State initial_cpu = {.pc=0xc583, .a=0xbb, .x=0xfe, .y=0x90, .sp=0xf1, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x01fe, .value=0xc4}, {.addr=0xc583, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xc584, .a=0x80, .x=0xfe, .y=0x90, .sp=0xf1, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x01fe, .value=0xc4}, {.addr=0xc583, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xc583, .value=0x26, .type=IO_READ},
        {.addr=0xc584, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fe, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0096) {
    const struct CPU_State initial_cpu = {.pc=0xc5e0, .a=0xbc, .x=0xc5, .y=0x5d, .sp=0x9f, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x00c5, .value=0x2b}, {.addr=0xc5e0, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xc5e1, .a=0x28, .x=0xc5, .y=0x5d, .sp=0x9f, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x00c5, .value=0x2b}, {.addr=0xc5e0, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xc5e0, .value=0x26, .type=IO_READ},
        {.addr=0xc5e1, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c5, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0097) {
    const struct CPU_State initial_cpu = {.pc=0xe3e6, .a=0xab, .x=0xb3, .y=0xc2, .sp=0xe3, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x00b3, .value=0xbb}, {.addr=0xe3e6, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xe3e7, .a=0xab, .x=0xb3, .y=0xc2, .sp=0xe3, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x00b3, .value=0xbb}, {.addr=0xe3e6, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xe3e6, .value=0x26, .type=IO_READ},
        {.addr=0xe3e7, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b3, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0098) {
    const struct CPU_State initial_cpu = {.pc=0x24fe, .a=0x3c, .x=0x60, .y=0x4c, .sp=0x02, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x0060, .value=0xef}, {.addr=0x24fe, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x24ff, .a=0x2c, .x=0x60, .y=0x4c, .sp=0x02, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x0060, .value=0xef}, {.addr=0x24fe, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x24fe, .value=0x26, .type=IO_READ},
        {.addr=0x24ff, .value=DUMMY, .type=IO_READ},
        {.addr=0x0060, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0099) {
    const struct CPU_State initial_cpu = {.pc=0x1c6f, .a=0xcd, .x=0x3a, .y=0x6c, .sp=0xf7, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x003a, .value=0x8d}, {.addr=0x1c6f, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x1c70, .a=0x8d, .x=0x3a, .y=0x6c, .sp=0xf7, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x003a, .value=0x8d}, {.addr=0x1c6f, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x1c6f, .value=0x26, .type=IO_READ},
        {.addr=0x1c70, .value=DUMMY, .type=IO_READ},
        {.addr=0x003a, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_009A) {
    const struct CPU_State initial_cpu = {.pc=0xb213, .a=0xa3, .x=0x60, .y=0xfc, .sp=0x90, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x0060, .value=0x73}, {.addr=0xb213, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xb214, .a=0x23, .x=0x60, .y=0xfc, .sp=0x90, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0060, .value=0x73}, {.addr=0xb213, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xb213, .value=0x26, .type=IO_READ},
        {.addr=0xb214, .value=DUMMY, .type=IO_READ},
        {.addr=0x0060, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_009B) {
    const struct CPU_State initial_cpu = {.pc=0x0b92, .a=0x67, .x=0x77, .y=0xb2, .sp=0xe5, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x0077, .value=0x3b}, {.addr=0x0b92, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x0b93, .a=0x23, .x=0x77, .y=0xb2, .sp=0xe5, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x0077, .value=0x3b}, {.addr=0x0b92, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x0b92, .value=0x26, .type=IO_READ},
        {.addr=0x0b93, .value=DUMMY, .type=IO_READ},
        {.addr=0x0077, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_009C) {
    const struct CPU_State initial_cpu = {.pc=0xafdf, .a=0x7b, .x=0x53, .y=0x33, .sp=0x65, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x0053, .value=0x5d}, {.addr=0xafdf, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xafe0, .a=0x59, .x=0x53, .y=0x33, .sp=0x65, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0053, .value=0x5d}, {.addr=0xafdf, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xafdf, .value=0x26, .type=IO_READ},
        {.addr=0xafe0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0053, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_009D) {
    const struct CPU_State initial_cpu = {.pc=0x7945, .a=0x53, .x=0x1d, .y=0x01, .sp=0x86, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x8b}, {.addr=0x7945, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x7946, .a=0x03, .x=0x1d, .y=0x01, .sp=0x86, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0x8b}, {.addr=0x7945, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x7945, .value=0x26, .type=IO_READ},
        {.addr=0x7946, .value=DUMMY, .type=IO_READ},
        {.addr=0x011d, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_009E) {
    const struct CPU_State initial_cpu = {.pc=0xfeef, .a=0x94, .x=0x56, .y=0x4f, .sp=0x11, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0x11}, {.addr=0xfeef, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xfef0, .a=0x10, .x=0x56, .y=0x4f, .sp=0x11, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0x11}, {.addr=0xfeef, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xfeef, .value=0x26, .type=IO_READ},
        {.addr=0xfef0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0156, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_009F) {
    const struct CPU_State initial_cpu = {.pc=0xd053, .a=0xa3, .x=0x1c, .y=0xca, .sp=0x44, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x001c, .value=0xb2}, {.addr=0xd053, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xd054, .a=0xa2, .x=0x1c, .y=0xca, .sp=0x44, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x001c, .value=0xb2}, {.addr=0xd053, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xd053, .value=0x26, .type=IO_READ},
        {.addr=0xd054, .value=DUMMY, .type=IO_READ},
        {.addr=0x001c, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00A0) {
    const struct CPU_State initial_cpu = {.pc=0x7e90, .a=0xd4, .x=0x0c, .y=0x36, .sp=0x8f, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x000c, .value=0xbe}, {.addr=0x7e90, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x7e91, .a=0x94, .x=0x0c, .y=0x36, .sp=0x8f, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x000c, .value=0xbe}, {.addr=0x7e90, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x7e90, .value=0x26, .type=IO_READ},
        {.addr=0x7e91, .value=DUMMY, .type=IO_READ},
        {.addr=0x000c, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x9475, .a=0xb3, .x=0x8f, .y=0x9d, .sp=0x49, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x008f, .value=0x36}, {.addr=0x9475, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x9476, .a=0x32, .x=0x8f, .y=0x9d, .sp=0x49, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x008f, .value=0x36}, {.addr=0x9475, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x9475, .value=0x26, .type=IO_READ},
        {.addr=0x9476, .value=DUMMY, .type=IO_READ},
        {.addr=0x008f, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00A2) {
    const struct CPU_State initial_cpu = {.pc=0xc246, .a=0x8d, .x=0x55, .y=0xe2, .sp=0x0f, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0x67}, {.addr=0xc246, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xc247, .a=0x05, .x=0x55, .y=0xe2, .sp=0x0f, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0x67}, {.addr=0xc246, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xc246, .value=0x26, .type=IO_READ},
        {.addr=0xc247, .value=DUMMY, .type=IO_READ},
        {.addr=0x0155, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00A3) {
    const struct CPU_State initial_cpu = {.pc=0x3758, .a=0x55, .x=0xee, .y=0x0e, .sp=0x03, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x00ee, .value=0x1c}, {.addr=0x3758, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x3759, .a=0x14, .x=0xee, .y=0x0e, .sp=0x03, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x00ee, .value=0x1c}, {.addr=0x3758, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x3758, .value=0x26, .type=IO_READ},
        {.addr=0x3759, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ee, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00A4) {
    const struct CPU_State initial_cpu = {.pc=0xa08c, .a=0xd3, .x=0x83, .y=0xe7, .sp=0x81, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x0083, .value=0x0c}, {.addr=0xa08c, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xa08d, .a=0x00, .x=0x83, .y=0xe7, .sp=0x81, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x0083, .value=0x0c}, {.addr=0xa08c, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xa08c, .value=0x26, .type=IO_READ},
        {.addr=0xa08d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0083, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00A5) {
    const struct CPU_State initial_cpu = {.pc=0xa8b5, .a=0x59, .x=0xa1, .y=0x55, .sp=0xec, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x00a1, .value=0x18}, {.addr=0xa8b5, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xa8b6, .a=0x18, .x=0xa1, .y=0x55, .sp=0xec, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x00a1, .value=0x18}, {.addr=0xa8b5, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xa8b5, .value=0x26, .type=IO_READ},
        {.addr=0xa8b6, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a1, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00A6) {
    const struct CPU_State initial_cpu = {.pc=0xb739, .a=0xb8, .x=0xdc, .y=0x50, .sp=0x8b, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x00dc, .value=0x6d}, {.addr=0xb739, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xb73a, .a=0x28, .x=0xdc, .y=0x50, .sp=0x8b, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x00dc, .value=0x6d}, {.addr=0xb739, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xb739, .value=0x26, .type=IO_READ},
        {.addr=0xb73a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00dc, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x613d, .a=0x58, .x=0xb3, .y=0xd3, .sp=0x86, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0x95}, {.addr=0x613d, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x613e, .a=0x10, .x=0xb3, .y=0xd3, .sp=0x86, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0x95}, {.addr=0x613d, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x613d, .value=0x26, .type=IO_READ},
        {.addr=0x613e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b3, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00A8) {
    const struct CPU_State initial_cpu = {.pc=0xcf8f, .a=0x51, .x=0x99, .y=0xf7, .sp=0x98, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x0099, .value=0x85}, {.addr=0xcf8f, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xcf90, .a=0x01, .x=0x99, .y=0xf7, .sp=0x98, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0099, .value=0x85}, {.addr=0xcf8f, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xcf8f, .value=0x26, .type=IO_READ},
        {.addr=0xcf90, .value=DUMMY, .type=IO_READ},
        {.addr=0x0099, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x165b, .a=0x87, .x=0xb0, .y=0x39, .sp=0xf6, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0x9c}, {.addr=0x165b, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x165c, .a=0x84, .x=0xb0, .y=0x39, .sp=0xf6, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0x9c}, {.addr=0x165b, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x165b, .value=0x26, .type=IO_READ},
        {.addr=0x165c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b0, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00AA) {
    const struct CPU_State initial_cpu = {.pc=0xc33e, .a=0x39, .x=0xa6, .y=0xd6, .sp=0x7c, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x01a6, .value=0xa2}, {.addr=0xc33e, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xc33f, .a=0x20, .x=0xa6, .y=0xd6, .sp=0x7c, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01a6, .value=0xa2}, {.addr=0xc33e, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xc33e, .value=0x26, .type=IO_READ},
        {.addr=0xc33f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a6, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x785f, .a=0x09, .x=0x66, .y=0x57, .sp=0x79, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0x37}, {.addr=0x785f, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x7860, .a=0x01, .x=0x66, .y=0x57, .sp=0x79, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0x37}, {.addr=0x785f, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x785f, .value=0x26, .type=IO_READ},
        {.addr=0x7860, .value=DUMMY, .type=IO_READ},
        {.addr=0x0166, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00AC) {
    const struct CPU_State initial_cpu = {.pc=0x4eac, .a=0xcd, .x=0x69, .y=0x47, .sp=0xd6, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x0169, .value=0xc3}, {.addr=0x4eac, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x4ead, .a=0xc1, .x=0x69, .y=0x47, .sp=0xd6, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x0169, .value=0xc3}, {.addr=0x4eac, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x4eac, .value=0x26, .type=IO_READ},
        {.addr=0x4ead, .value=DUMMY, .type=IO_READ},
        {.addr=0x0169, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x11a4, .a=0x76, .x=0x1b, .y=0xba, .sp=0xbf, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0x8f}, {.addr=0x11a4, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x11a5, .a=0x06, .x=0x1b, .y=0xba, .sp=0xbf, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0x8f}, {.addr=0x11a4, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x11a4, .value=0x26, .type=IO_READ},
        {.addr=0x11a5, .value=DUMMY, .type=IO_READ},
        {.addr=0x011b, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00AE) {
    const struct CPU_State initial_cpu = {.pc=0x13af, .a=0xf0, .x=0xde, .y=0x75, .sp=0x41, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x01de, .value=0xe4}, {.addr=0x13af, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x13b0, .a=0xe0, .x=0xde, .y=0x75, .sp=0x41, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x01de, .value=0xe4}, {.addr=0x13af, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x13af, .value=0x26, .type=IO_READ},
        {.addr=0x13b0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01de, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00AF) {
    const struct CPU_State initial_cpu = {.pc=0xa778, .a=0x1f, .x=0xd7, .y=0x6d, .sp=0x59, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x00d7, .value=0x4d}, {.addr=0xa778, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xa779, .a=0x0d, .x=0xd7, .y=0x6d, .sp=0x59, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x00d7, .value=0x4d}, {.addr=0xa778, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xa778, .value=0x26, .type=IO_READ},
        {.addr=0xa779, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d7, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00B0) {
    const struct CPU_State initial_cpu = {.pc=0x285a, .a=0xeb, .x=0x73, .y=0xf5, .sp=0x5c, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0xa7}, {.addr=0x285a, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x285b, .a=0xa3, .x=0x73, .y=0xf5, .sp=0x5c, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0xa7}, {.addr=0x285a, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x285a, .value=0x26, .type=IO_READ},
        {.addr=0x285b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0173, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00B1) {
    const struct CPU_State initial_cpu = {.pc=0x68a0, .a=0x77, .x=0x9a, .y=0x84, .sp=0x31, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0x5a}, {.addr=0x68a0, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x68a1, .a=0x52, .x=0x9a, .y=0x84, .sp=0x31, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0x5a}, {.addr=0x68a0, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x68a0, .value=0x26, .type=IO_READ},
        {.addr=0x68a1, .value=DUMMY, .type=IO_READ},
        {.addr=0x019a, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00B2) {
    const struct CPU_State initial_cpu = {.pc=0x156a, .a=0x1f, .x=0xfd, .y=0x37, .sp=0xd5, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0x58}, {.addr=0x156a, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x156b, .a=0x18, .x=0xfd, .y=0x37, .sp=0xd5, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0x58}, {.addr=0x156a, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x156a, .value=0x26, .type=IO_READ},
        {.addr=0x156b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fd, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00B3) {
    const struct CPU_State initial_cpu = {.pc=0x1539, .a=0x4b, .x=0x62, .y=0x45, .sp=0xf2, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0xf9}, {.addr=0x1539, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x153a, .a=0x49, .x=0x62, .y=0x45, .sp=0xf2, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0xf9}, {.addr=0x1539, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x1539, .value=0x26, .type=IO_READ},
        {.addr=0x153a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0162, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00B4) {
    const struct CPU_State initial_cpu = {.pc=0x7da4, .a=0x76, .x=0xea, .y=0xb7, .sp=0x8d, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x00ea, .value=0x0b}, {.addr=0x7da4, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x7da5, .a=0x02, .x=0xea, .y=0xb7, .sp=0x8d, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x00ea, .value=0x0b}, {.addr=0x7da4, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x7da4, .value=0x26, .type=IO_READ},
        {.addr=0x7da5, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ea, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00B5) {
    const struct CPU_State initial_cpu = {.pc=0x4854, .a=0x8e, .x=0xdb, .y=0xe9, .sp=0xd3, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0xed}, {.addr=0x4854, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x4855, .a=0x8c, .x=0xdb, .y=0xe9, .sp=0xd3, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0xed}, {.addr=0x4854, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x4854, .value=0x26, .type=IO_READ},
        {.addr=0x4855, .value=DUMMY, .type=IO_READ},
        {.addr=0x01db, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00B6) {
    const struct CPU_State initial_cpu = {.pc=0x8732, .a=0x51, .x=0x51, .y=0x3f, .sp=0x32, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x0051, .value=0x82}, {.addr=0x8732, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x8733, .a=0x00, .x=0x51, .y=0x3f, .sp=0x32, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x0051, .value=0x82}, {.addr=0x8732, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x8732, .value=0x26, .type=IO_READ},
        {.addr=0x8733, .value=DUMMY, .type=IO_READ},
        {.addr=0x0051, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x0b93, .a=0x2d, .x=0x78, .y=0x6d, .sp=0x48, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0x5b}, {.addr=0x0b93, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x0b94, .a=0x09, .x=0x78, .y=0x6d, .sp=0x48, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0x5b}, {.addr=0x0b93, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x0b93, .value=0x26, .type=IO_READ},
        {.addr=0x0b94, .value=DUMMY, .type=IO_READ},
        {.addr=0x0178, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00B8) {
    const struct CPU_State initial_cpu = {.pc=0x6154, .a=0xfe, .x=0xcd, .y=0x71, .sp=0x42, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0xed}, {.addr=0x6154, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x6155, .a=0xec, .x=0xcd, .y=0x71, .sp=0x42, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0xed}, {.addr=0x6154, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x6154, .value=0x26, .type=IO_READ},
        {.addr=0x6155, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cd, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00B9) {
    const struct CPU_State initial_cpu = {.pc=0x8c1a, .a=0xe2, .x=0x7d, .y=0x89, .sp=0xc5, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x007d, .value=0xc2}, {.addr=0x8c1a, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x8c1b, .a=0xc2, .x=0x7d, .y=0x89, .sp=0xc5, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x007d, .value=0xc2}, {.addr=0x8c1a, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x8c1a, .value=0x26, .type=IO_READ},
        {.addr=0x8c1b, .value=DUMMY, .type=IO_READ},
        {.addr=0x007d, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00BA) {
    const struct CPU_State initial_cpu = {.pc=0xa550, .a=0xb6, .x=0x60, .y=0xd0, .sp=0x47, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x0060, .value=0xfb}, {.addr=0xa550, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xa551, .a=0xb2, .x=0x60, .y=0xd0, .sp=0x47, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0060, .value=0xfb}, {.addr=0xa550, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xa550, .value=0x26, .type=IO_READ},
        {.addr=0xa551, .value=DUMMY, .type=IO_READ},
        {.addr=0x0060, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00BB) {
    const struct CPU_State initial_cpu = {.pc=0x8a4c, .a=0x8f, .x=0x8c, .y=0xfa, .sp=0x8e, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x008c, .value=0xc8}, {.addr=0x8a4c, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x8a4d, .a=0x88, .x=0x8c, .y=0xfa, .sp=0x8e, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x008c, .value=0xc8}, {.addr=0x8a4c, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x8a4c, .value=0x26, .type=IO_READ},
        {.addr=0x8a4d, .value=DUMMY, .type=IO_READ},
        {.addr=0x008c, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00BC) {
    const struct CPU_State initial_cpu = {.pc=0xc724, .a=0x50, .x=0x57, .y=0x03, .sp=0x50, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x0057, .value=0xf2}, {.addr=0xc724, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xc725, .a=0x50, .x=0x57, .y=0x03, .sp=0x50, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x0057, .value=0xf2}, {.addr=0xc724, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xc724, .value=0x26, .type=IO_READ},
        {.addr=0xc725, .value=DUMMY, .type=IO_READ},
        {.addr=0x0057, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00BD) {
    const struct CPU_State initial_cpu = {.pc=0xf9a0, .a=0x2b, .x=0xf1, .y=0xb5, .sp=0x00, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0x05}, {.addr=0xf9a0, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xf9a1, .a=0x01, .x=0xf1, .y=0xb5, .sp=0x00, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0x05}, {.addr=0xf9a0, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xf9a0, .value=0x26, .type=IO_READ},
        {.addr=0xf9a1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f1, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00BF) {
    const struct CPU_State initial_cpu = {.pc=0x8a2d, .a=0x1a, .x=0x0b, .y=0x91, .sp=0xf1, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0x3b}, {.addr=0x8a2d, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x8a2e, .a=0x1a, .x=0x0b, .y=0x91, .sp=0xf1, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0x3b}, {.addr=0x8a2d, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x8a2d, .value=0x26, .type=IO_READ},
        {.addr=0x8a2e, .value=DUMMY, .type=IO_READ},
        {.addr=0x010b, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00C0) {
    const struct CPU_State initial_cpu = {.pc=0x62fd, .a=0x82, .x=0x3c, .y=0x83, .sp=0x04, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x20}, {.addr=0x62fd, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x62fe, .a=0x00, .x=0x3c, .y=0x83, .sp=0x04, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0x20}, {.addr=0x62fd, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x62fd, .value=0x26, .type=IO_READ},
        {.addr=0x62fe, .value=DUMMY, .type=IO_READ},
        {.addr=0x013c, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00C1) {
    const struct CPU_State initial_cpu = {.pc=0xe457, .a=0xe7, .x=0x2c, .y=0xb0, .sp=0xe2, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x012c, .value=0x24}, {.addr=0xe457, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xe458, .a=0x24, .x=0x2c, .y=0xb0, .sp=0xe2, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x012c, .value=0x24}, {.addr=0xe457, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xe457, .value=0x26, .type=IO_READ},
        {.addr=0xe458, .value=DUMMY, .type=IO_READ},
        {.addr=0x012c, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00C3) {
    const struct CPU_State initial_cpu = {.pc=0x95e3, .a=0xc4, .x=0x45, .y=0xfa, .sp=0x5b, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0xe2}, {.addr=0x95e3, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x95e4, .a=0xc0, .x=0x45, .y=0xfa, .sp=0x5b, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0xe2}, {.addr=0x95e3, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x95e3, .value=0x26, .type=IO_READ},
        {.addr=0x95e4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0145, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00C4) {
    const struct CPU_State initial_cpu = {.pc=0xe8e4, .a=0x9f, .x=0x90, .y=0x31, .sp=0x80, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x0090, .value=0x34}, {.addr=0xe8e4, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xe8e5, .a=0x14, .x=0x90, .y=0x31, .sp=0x80, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0090, .value=0x34}, {.addr=0xe8e4, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xe8e4, .value=0x26, .type=IO_READ},
        {.addr=0xe8e5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0090, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x274c, .a=0x07, .x=0xad, .y=0x3e, .sp=0x62, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x01ad, .value=0x3b}, {.addr=0x274c, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x274d, .a=0x03, .x=0xad, .y=0x3e, .sp=0x62, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x01ad, .value=0x3b}, {.addr=0x274c, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x274c, .value=0x26, .type=IO_READ},
        {.addr=0x274d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ad, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00C6) {
    const struct CPU_State initial_cpu = {.pc=0xa4da, .a=0x5b, .x=0xee, .y=0x23, .sp=0xbf, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x00ee, .value=0x62}, {.addr=0xa4da, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xa4db, .a=0x42, .x=0xee, .y=0x23, .sp=0xbf, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x00ee, .value=0x62}, {.addr=0xa4da, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xa4da, .value=0x26, .type=IO_READ},
        {.addr=0xa4db, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ee, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00C7) {
    const struct CPU_State initial_cpu = {.pc=0xb529, .a=0xb1, .x=0x82, .y=0xa7, .sp=0x67, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0xff}, {.addr=0xb529, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xb52a, .a=0xb1, .x=0x82, .y=0xa7, .sp=0x67, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0xff}, {.addr=0xb529, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xb529, .value=0x26, .type=IO_READ},
        {.addr=0xb52a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0182, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00C8) {
    const struct CPU_State initial_cpu = {.pc=0xf36c, .a=0x00, .x=0x4d, .y=0x08, .sp=0x48, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x014d, .value=0xd1}, {.addr=0xf36c, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xf36d, .a=0x00, .x=0x4d, .y=0x08, .sp=0x48, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x014d, .value=0xd1}, {.addr=0xf36c, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xf36c, .value=0x26, .type=IO_READ},
        {.addr=0xf36d, .value=DUMMY, .type=IO_READ},
        {.addr=0x014d, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00C9) {
    const struct CPU_State initial_cpu = {.pc=0x295f, .a=0xb5, .x=0x8c, .y=0x8f, .sp=0x2f, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0x43}, {.addr=0x295f, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x2960, .a=0x01, .x=0x8c, .y=0x8f, .sp=0x2f, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0x43}, {.addr=0x295f, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x295f, .value=0x26, .type=IO_READ},
        {.addr=0x2960, .value=DUMMY, .type=IO_READ},
        {.addr=0x018c, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00CA) {
    const struct CPU_State initial_cpu = {.pc=0x898b, .a=0xea, .x=0x8c, .y=0x65, .sp=0xe3, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x008c, .value=0x30}, {.addr=0x898b, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x898c, .a=0x20, .x=0x8c, .y=0x65, .sp=0xe3, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x008c, .value=0x30}, {.addr=0x898b, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x898b, .value=0x26, .type=IO_READ},
        {.addr=0x898c, .value=DUMMY, .type=IO_READ},
        {.addr=0x008c, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x2f5d, .a=0x3a, .x=0x80, .y=0xe1, .sp=0xba, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0x93}, {.addr=0x2f5d, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x2f5e, .a=0x12, .x=0x80, .y=0xe1, .sp=0xba, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0x93}, {.addr=0x2f5d, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x2f5d, .value=0x26, .type=IO_READ},
        {.addr=0x2f5e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0180, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x5350, .a=0xd6, .x=0xbb, .y=0x76, .sp=0x53, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x00bb, .value=0xff}, {.addr=0x5350, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x5351, .a=0xd6, .x=0xbb, .y=0x76, .sp=0x53, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x00bb, .value=0xff}, {.addr=0x5350, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x5350, .value=0x26, .type=IO_READ},
        {.addr=0x5351, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bb, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00CD) {
    const struct CPU_State initial_cpu = {.pc=0x299b, .a=0x95, .x=0x6c, .y=0x56, .sp=0xa9, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x006c, .value=0x34}, {.addr=0x299b, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x299c, .a=0x14, .x=0x6c, .y=0x56, .sp=0xa9, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x006c, .value=0x34}, {.addr=0x299b, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x299b, .value=0x26, .type=IO_READ},
        {.addr=0x299c, .value=DUMMY, .type=IO_READ},
        {.addr=0x006c, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00CE) {
    const struct CPU_State initial_cpu = {.pc=0xd875, .a=0x5f, .x=0x5a, .y=0xa7, .sp=0xdd, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0x3c}, {.addr=0xd875, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xd876, .a=0x1c, .x=0x5a, .y=0xa7, .sp=0xdd, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0x3c}, {.addr=0xd875, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xd875, .value=0x26, .type=IO_READ},
        {.addr=0xd876, .value=DUMMY, .type=IO_READ},
        {.addr=0x015a, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00CF) {
    const struct CPU_State initial_cpu = {.pc=0x8f89, .a=0xf5, .x=0x76, .y=0x36, .sp=0x71, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x0176, .value=0x24}, {.addr=0x8f89, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x8f8a, .a=0x24, .x=0x76, .y=0x36, .sp=0x71, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x0176, .value=0x24}, {.addr=0x8f89, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x8f89, .value=0x26, .type=IO_READ},
        {.addr=0x8f8a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0176, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00D0) {
    const struct CPU_State initial_cpu = {.pc=0x30d8, .a=0x41, .x=0xab, .y=0xaf, .sp=0xd3, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x00ab, .value=0xd6}, {.addr=0x30d8, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x30d9, .a=0x40, .x=0xab, .y=0xaf, .sp=0xd3, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x00ab, .value=0xd6}, {.addr=0x30d8, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x30d8, .value=0x26, .type=IO_READ},
        {.addr=0x30d9, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ab, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00D1) {
    const struct CPU_State initial_cpu = {.pc=0xe0e7, .a=0x6a, .x=0xa0, .y=0xf3, .sp=0x57, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0x50}, {.addr=0xe0e7, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xe0e8, .a=0x40, .x=0xa0, .y=0xf3, .sp=0x57, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0x50}, {.addr=0xe0e7, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xe0e7, .value=0x26, .type=IO_READ},
        {.addr=0xe0e8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a0, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00D2) {
    const struct CPU_State initial_cpu = {.pc=0xc017, .a=0xe9, .x=0x41, .y=0xdc, .sp=0x49, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x0041, .value=0xc0}, {.addr=0xc017, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xc018, .a=0xc0, .x=0x41, .y=0xdc, .sp=0x49, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x0041, .value=0xc0}, {.addr=0xc017, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xc017, .value=0x26, .type=IO_READ},
        {.addr=0xc018, .value=DUMMY, .type=IO_READ},
        {.addr=0x0041, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00D3) {
    const struct CPU_State initial_cpu = {.pc=0xe458, .a=0x92, .x=0x01, .y=0x20, .sp=0x5f, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0001, .value=0xf5}, {.addr=0xe458, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xe459, .a=0x90, .x=0x01, .y=0x20, .sp=0x5f, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x0001, .value=0xf5}, {.addr=0xe458, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xe458, .value=0x26, .type=IO_READ},
        {.addr=0xe459, .value=DUMMY, .type=IO_READ},
        {.addr=0x0001, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00D4) {
    const struct CPU_State initial_cpu = {.pc=0xbf91, .a=0xdc, .x=0xa8, .y=0x92, .sp=0x33, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x00a8, .value=0x91}, {.addr=0xbf91, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xbf92, .a=0x90, .x=0xa8, .y=0x92, .sp=0x33, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x00a8, .value=0x91}, {.addr=0xbf91, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xbf91, .value=0x26, .type=IO_READ},
        {.addr=0xbf92, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a8, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00D5) {
    const struct CPU_State initial_cpu = {.pc=0x9c34, .a=0x0f, .x=0xb1, .y=0xad, .sp=0xae, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x00b1, .value=0xc9}, {.addr=0x9c34, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x9c35, .a=0x09, .x=0xb1, .y=0xad, .sp=0xae, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x00b1, .value=0xc9}, {.addr=0x9c34, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x9c34, .value=0x26, .type=IO_READ},
        {.addr=0x9c35, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b1, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00D6) {
    const struct CPU_State initial_cpu = {.pc=0x62c6, .a=0xd2, .x=0x5f, .y=0x80, .sp=0xcf, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0xe1}, {.addr=0x62c6, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x62c7, .a=0xc0, .x=0x5f, .y=0x80, .sp=0xcf, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0xe1}, {.addr=0x62c6, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x62c6, .value=0x26, .type=IO_READ},
        {.addr=0x62c7, .value=DUMMY, .type=IO_READ},
        {.addr=0x015f, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00D7) {
    const struct CPU_State initial_cpu = {.pc=0x54e1, .a=0x87, .x=0x14, .y=0x35, .sp=0xde, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x0014, .value=0xee}, {.addr=0x54e1, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x54e2, .a=0x86, .x=0x14, .y=0x35, .sp=0xde, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0014, .value=0xee}, {.addr=0x54e1, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x54e1, .value=0x26, .type=IO_READ},
        {.addr=0x54e2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0014, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00D8) {
    const struct CPU_State initial_cpu = {.pc=0xb1e0, .a=0x3f, .x=0x02, .y=0xad, .sp=0x3e, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x0102, .value=0x5a}, {.addr=0xb1e0, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xb1e1, .a=0x1a, .x=0x02, .y=0xad, .sp=0x3e, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0102, .value=0x5a}, {.addr=0xb1e0, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xb1e0, .value=0x26, .type=IO_READ},
        {.addr=0xb1e1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0102, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00DA) {
    const struct CPU_State initial_cpu = {.pc=0x7889, .a=0xca, .x=0xdb, .y=0x06, .sp=0x7c, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0x2d}, {.addr=0x7889, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x788a, .a=0x08, .x=0xdb, .y=0x06, .sp=0x7c, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0x2d}, {.addr=0x7889, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x7889, .value=0x26, .type=IO_READ},
        {.addr=0x788a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01db, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x96e7, .a=0x76, .x=0x3d, .y=0xde, .sp=0x7d, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x013d, .value=0xe6}, {.addr=0x96e7, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x96e8, .a=0x66, .x=0x3d, .y=0xde, .sp=0x7d, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x013d, .value=0xe6}, {.addr=0x96e7, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x96e7, .value=0x26, .type=IO_READ},
        {.addr=0x96e8, .value=DUMMY, .type=IO_READ},
        {.addr=0x013d, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00DC) {
    const struct CPU_State initial_cpu = {.pc=0x7b9c, .a=0x90, .x=0xfb, .y=0xff, .sp=0x3b, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0xa9}, {.addr=0x7b9c, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x7b9d, .a=0x80, .x=0xfb, .y=0xff, .sp=0x3b, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0xa9}, {.addr=0x7b9c, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x7b9c, .value=0x26, .type=IO_READ},
        {.addr=0x7b9d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fb, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00DD) {
    const struct CPU_State initial_cpu = {.pc=0xe361, .a=0x7c, .x=0xa8, .y=0x45, .sp=0x78, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0x1f}, {.addr=0xe361, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xe362, .a=0x1c, .x=0xa8, .y=0x45, .sp=0x78, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0x1f}, {.addr=0xe361, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xe361, .value=0x26, .type=IO_READ},
        {.addr=0xe362, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a8, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00DE) {
    const struct CPU_State initial_cpu = {.pc=0x1dff, .a=0x2a, .x=0x83, .y=0x72, .sp=0x69, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0x53}, {.addr=0x1dff, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x1e00, .a=0x02, .x=0x83, .y=0x72, .sp=0x69, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0x53}, {.addr=0x1dff, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x1dff, .value=0x26, .type=IO_READ},
        {.addr=0x1e00, .value=DUMMY, .type=IO_READ},
        {.addr=0x0183, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00DF) {
    const struct CPU_State initial_cpu = {.pc=0x04d2, .a=0x32, .x=0x1e, .y=0xf0, .sp=0x09, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x011e, .value=0xb7}, {.addr=0x04d2, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x04d3, .a=0x32, .x=0x1e, .y=0xf0, .sp=0x09, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x011e, .value=0xb7}, {.addr=0x04d2, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x04d2, .value=0x26, .type=IO_READ},
        {.addr=0x04d3, .value=DUMMY, .type=IO_READ},
        {.addr=0x011e, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x97fd, .a=0x68, .x=0xc6, .y=0x83, .sp=0xed, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x01c6, .value=0xe0}, {.addr=0x97fd, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x97fe, .a=0x60, .x=0xc6, .y=0x83, .sp=0xed, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x01c6, .value=0xe0}, {.addr=0x97fd, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x97fd, .value=0x26, .type=IO_READ},
        {.addr=0x97fe, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c6, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00E1) {
    const struct CPU_State initial_cpu = {.pc=0xfaac, .a=0x94, .x=0xc5, .y=0xf0, .sp=0xaa, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x00c5, .value=0x86}, {.addr=0xfaac, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xfaad, .a=0x84, .x=0xc5, .y=0xf0, .sp=0xaa, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x00c5, .value=0x86}, {.addr=0xfaac, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xfaac, .value=0x26, .type=IO_READ},
        {.addr=0xfaad, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c5, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x7574, .a=0x55, .x=0xa1, .y=0xe0, .sp=0x77, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x00a1, .value=0x77}, {.addr=0x7574, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x7575, .a=0x55, .x=0xa1, .y=0xe0, .sp=0x77, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x00a1, .value=0x77}, {.addr=0x7574, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x7574, .value=0x26, .type=IO_READ},
        {.addr=0x7575, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a1, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00E3) {
    const struct CPU_State initial_cpu = {.pc=0xa1a5, .a=0xa8, .x=0x65, .y=0xb6, .sp=0x68, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x0065, .value=0xef}, {.addr=0xa1a5, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xa1a6, .a=0xa8, .x=0x65, .y=0xb6, .sp=0x68, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x0065, .value=0xef}, {.addr=0xa1a5, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xa1a5, .value=0x26, .type=IO_READ},
        {.addr=0xa1a6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0065, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00E4) {
    const struct CPU_State initial_cpu = {.pc=0xe3f7, .a=0x3c, .x=0xae, .y=0x59, .sp=0x5d, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x01ae, .value=0xd7}, {.addr=0xe3f7, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xe3f8, .a=0x14, .x=0xae, .y=0x59, .sp=0x5d, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x01ae, .value=0xd7}, {.addr=0xe3f7, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xe3f7, .value=0x26, .type=IO_READ},
        {.addr=0xe3f8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ae, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00E5) {
    const struct CPU_State initial_cpu = {.pc=0x9eb7, .a=0xb1, .x=0x4f, .y=0x74, .sp=0xfb, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x014f, .value=0x07}, {.addr=0x9eb7, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x9eb8, .a=0x01, .x=0x4f, .y=0x74, .sp=0xfb, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x014f, .value=0x07}, {.addr=0x9eb7, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x9eb7, .value=0x26, .type=IO_READ},
        {.addr=0x9eb8, .value=DUMMY, .type=IO_READ},
        {.addr=0x014f, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00E6) {
    const struct CPU_State initial_cpu = {.pc=0x3df4, .a=0x35, .x=0xd2, .y=0x2d, .sp=0x61, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x01d2, .value=0x6d}, {.addr=0x3df4, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x3df5, .a=0x25, .x=0xd2, .y=0x2d, .sp=0x61, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01d2, .value=0x6d}, {.addr=0x3df4, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x3df4, .value=0x26, .type=IO_READ},
        {.addr=0x3df5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d2, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00E7) {
    const struct CPU_State initial_cpu = {.pc=0x9c1a, .a=0x73, .x=0xd2, .y=0x5e, .sp=0x29, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x00d2, .value=0x65}, {.addr=0x9c1a, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x9c1b, .a=0x61, .x=0xd2, .y=0x5e, .sp=0x29, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x00d2, .value=0x65}, {.addr=0x9c1a, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x9c1a, .value=0x26, .type=IO_READ},
        {.addr=0x9c1b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d2, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00E8) {
    const struct CPU_State initial_cpu = {.pc=0xb551, .a=0x40, .x=0x92, .y=0x89, .sp=0x77, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x0092, .value=0xf8}, {.addr=0xb551, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xb552, .a=0x40, .x=0x92, .y=0x89, .sp=0x77, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x0092, .value=0xf8}, {.addr=0xb551, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xb551, .value=0x26, .type=IO_READ},
        {.addr=0xb552, .value=DUMMY, .type=IO_READ},
        {.addr=0x0092, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00E9) {
    const struct CPU_State initial_cpu = {.pc=0x0005, .a=0x9f, .x=0xd4, .y=0x29, .sp=0xea, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x0005, .value=0x26}, {.addr=0x01d4, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0x0006, .a=0x19, .x=0xd4, .y=0x29, .sp=0xea, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0005, .value=0x26}, {.addr=0x01d4, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0x0005, .value=0x26, .type=IO_READ},
        {.addr=0x0006, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d4, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x50c3, .a=0x2c, .x=0xe6, .y=0x4a, .sp=0x38, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x00e6, .value=0x0b}, {.addr=0x50c3, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x50c4, .a=0x08, .x=0xe6, .y=0x4a, .sp=0x38, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x00e6, .value=0x0b}, {.addr=0x50c3, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x50c3, .value=0x26, .type=IO_READ},
        {.addr=0x50c4, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e6, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00EB) {
    const struct CPU_State initial_cpu = {.pc=0x888a, .a=0x12, .x=0x21, .y=0xd3, .sp=0x0a, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0021, .value=0x94}, {.addr=0x888a, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x888b, .a=0x10, .x=0x21, .y=0xd3, .sp=0x0a, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0021, .value=0x94}, {.addr=0x888a, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x888a, .value=0x26, .type=IO_READ},
        {.addr=0x888b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0021, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00EC) {
    const struct CPU_State initial_cpu = {.pc=0xeade, .a=0xd3, .x=0x0c, .y=0x9a, .sp=0x3c, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0xc4}, {.addr=0xeade, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xeadf, .a=0xc0, .x=0x0c, .y=0x9a, .sp=0x3c, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0xc4}, {.addr=0xeade, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xeade, .value=0x26, .type=IO_READ},
        {.addr=0xeadf, .value=DUMMY, .type=IO_READ},
        {.addr=0x010c, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00ED) {
    const struct CPU_State initial_cpu = {.pc=0xf330, .a=0xc6, .x=0x7d, .y=0x72, .sp=0x14, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0x18}, {.addr=0xf330, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xf331, .a=0x00, .x=0x7d, .y=0x72, .sp=0x14, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0x18}, {.addr=0xf330, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xf330, .value=0x26, .type=IO_READ},
        {.addr=0xf331, .value=DUMMY, .type=IO_READ},
        {.addr=0x017d, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00EE) {
    const struct CPU_State initial_cpu = {.pc=0x5eaa, .a=0xe0, .x=0x04, .y=0x59, .sp=0xc6, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0004, .value=0xeb}, {.addr=0x5eaa, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x5eab, .a=0xe0, .x=0x04, .y=0x59, .sp=0xc6, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x0004, .value=0xeb}, {.addr=0x5eaa, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x5eaa, .value=0x26, .type=IO_READ},
        {.addr=0x5eab, .value=DUMMY, .type=IO_READ},
        {.addr=0x0004, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00EF) {
    const struct CPU_State initial_cpu = {.pc=0x747a, .a=0x22, .x=0x0b, .y=0x43, .sp=0x83, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0x7c}, {.addr=0x747a, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x747b, .a=0x20, .x=0x0b, .y=0x43, .sp=0x83, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0x7c}, {.addr=0x747a, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x747a, .value=0x26, .type=IO_READ},
        {.addr=0x747b, .value=DUMMY, .type=IO_READ},
        {.addr=0x010b, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x4825, .a=0xa3, .x=0xf4, .y=0x5f, .sp=0xab, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x01f4, .value=0xca}, {.addr=0x4825, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x4826, .a=0x82, .x=0xf4, .y=0x5f, .sp=0xab, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x01f4, .value=0xca}, {.addr=0x4825, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x4825, .value=0x26, .type=IO_READ},
        {.addr=0x4826, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f4, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00F2) {
    const struct CPU_State initial_cpu = {.pc=0xcfbd, .a=0x2e, .x=0x74, .y=0xd2, .sp=0x0e, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x0074, .value=0xe9}, {.addr=0xcfbd, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xcfbe, .a=0x28, .x=0x74, .y=0xd2, .sp=0x0e, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0074, .value=0xe9}, {.addr=0xcfbd, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xcfbd, .value=0x26, .type=IO_READ},
        {.addr=0xcfbe, .value=DUMMY, .type=IO_READ},
        {.addr=0x0074, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00F3) {
    const struct CPU_State initial_cpu = {.pc=0x635f, .a=0x03, .x=0xa3, .y=0xad, .sp=0x02, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x01a3, .value=0x06}, {.addr=0x635f, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x6360, .a=0x02, .x=0xa3, .y=0xad, .sp=0x02, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x01a3, .value=0x06}, {.addr=0x635f, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x635f, .value=0x26, .type=IO_READ},
        {.addr=0x6360, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a3, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00F4) {
    const struct CPU_State initial_cpu = {.pc=0x1017, .a=0x5c, .x=0xa2, .y=0x30, .sp=0x1f, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x01a2, .value=0x71}, {.addr=0x1017, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x1018, .a=0x50, .x=0xa2, .y=0x30, .sp=0x1f, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x01a2, .value=0x71}, {.addr=0x1017, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x1017, .value=0x26, .type=IO_READ},
        {.addr=0x1018, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a2, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00F5) {
    const struct CPU_State initial_cpu = {.pc=0x306e, .a=0x3b, .x=0x24, .y=0xe0, .sp=0x83, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0xd6}, {.addr=0x306e, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x306f, .a=0x12, .x=0x24, .y=0xe0, .sp=0x83, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0xd6}, {.addr=0x306e, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x306e, .value=0x26, .type=IO_READ},
        {.addr=0x306f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0124, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00F6) {
    const struct CPU_State initial_cpu = {.pc=0x0af0, .a=0x0f, .x=0xd5, .y=0x08, .sp=0x31, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x01d5, .value=0x9d}, {.addr=0x0af0, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x0af1, .a=0x0d, .x=0xd5, .y=0x08, .sp=0x31, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01d5, .value=0x9d}, {.addr=0x0af0, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x0af0, .value=0x26, .type=IO_READ},
        {.addr=0x0af1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d5, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00F7) {
    const struct CPU_State initial_cpu = {.pc=0x3ba4, .a=0x63, .x=0x43, .y=0x3e, .sp=0xe2, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0x1f}, {.addr=0x3ba4, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x3ba5, .a=0x03, .x=0x43, .y=0x3e, .sp=0xe2, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0x1f}, {.addr=0x3ba4, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x3ba4, .value=0x26, .type=IO_READ},
        {.addr=0x3ba5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0143, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x5cc0, .a=0x0f, .x=0xb0, .y=0x03, .sp=0x60, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x00b0, .value=0x08}, {.addr=0x5cc0, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x5cc1, .a=0x08, .x=0xb0, .y=0x03, .sp=0x60, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x00b0, .value=0x08}, {.addr=0x5cc0, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x5cc0, .value=0x26, .type=IO_READ},
        {.addr=0x5cc1, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b0, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00F9) {
    const struct CPU_State initial_cpu = {.pc=0xb01b, .a=0xdd, .x=0x85, .y=0x07, .sp=0x3b, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x0085, .value=0x79}, {.addr=0xb01b, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xb01c, .a=0x59, .x=0x85, .y=0x07, .sp=0x3b, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x0085, .value=0x79}, {.addr=0xb01b, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xb01b, .value=0x26, .type=IO_READ},
        {.addr=0xb01c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0085, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00FA) {
    const struct CPU_State initial_cpu = {.pc=0xfcd7, .a=0x77, .x=0x2a, .y=0xd1, .sp=0x8a, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x002a, .value=0xfb}, {.addr=0xfcd7, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xfcd8, .a=0x73, .x=0x2a, .y=0xd1, .sp=0x8a, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x002a, .value=0xfb}, {.addr=0xfcd7, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xfcd7, .value=0x26, .type=IO_READ},
        {.addr=0xfcd8, .value=DUMMY, .type=IO_READ},
        {.addr=0x002a, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00FB) {
    const struct CPU_State initial_cpu = {.pc=0xdc97, .a=0x3b, .x=0x7a, .y=0x25, .sp=0x9f, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x007a, .value=0x35}, {.addr=0xdc97, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xdc98, .a=0x31, .x=0x7a, .y=0x25, .sp=0x9f, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x007a, .value=0x35}, {.addr=0xdc97, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xdc97, .value=0x26, .type=IO_READ},
        {.addr=0xdc98, .value=DUMMY, .type=IO_READ},
        {.addr=0x007a, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00FC) {
    const struct CPU_State initial_cpu = {.pc=0x23c8, .a=0x5d, .x=0xf3, .y=0x76, .sp=0x48, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x01f3, .value=0xf6}, {.addr=0x23c8, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x23c9, .a=0x54, .x=0xf3, .y=0x76, .sp=0x48, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x01f3, .value=0xf6}, {.addr=0x23c8, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x23c8, .value=0x26, .type=IO_READ},
        {.addr=0x23c9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f3, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00FD) {
    const struct CPU_State initial_cpu = {.pc=0xb717, .a=0x72, .x=0x8f, .y=0x95, .sp=0x82, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x018f, .value=0xe9}, {.addr=0xb717, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xb718, .a=0x60, .x=0x8f, .y=0x95, .sp=0x82, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x018f, .value=0xe9}, {.addr=0xb717, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xb717, .value=0x26, .type=IO_READ},
        {.addr=0xb718, .value=DUMMY, .type=IO_READ},
        {.addr=0x018f, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00FE) {
    const struct CPU_State initial_cpu = {.pc=0x4821, .a=0xf3, .x=0x87, .y=0x99, .sp=0x52, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0x92}, {.addr=0x4821, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x4822, .a=0x92, .x=0x87, .y=0x99, .sp=0x52, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0x92}, {.addr=0x4821, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x4821, .value=0x26, .type=IO_READ},
        {.addr=0x4822, .value=DUMMY, .type=IO_READ},
        {.addr=0x0187, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_00FF) {
    const struct CPU_State initial_cpu = {.pc=0x0ecc, .a=0x55, .x=0x84, .y=0xfe, .sp=0xf2, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x0084, .value=0xf7}, {.addr=0x0ecc, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x0ecd, .a=0x55, .x=0x84, .y=0xfe, .sp=0xf2, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0084, .value=0xf7}, {.addr=0x0ecc, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x0ecc, .value=0x26, .type=IO_READ},
        {.addr=0x0ecd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0084, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0100) {
    const struct CPU_State initial_cpu = {.pc=0x2ce4, .a=0x3f, .x=0xe2, .y=0xdf, .sp=0x8a, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x00e2, .value=0x2f}, {.addr=0x2ce4, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x2ce5, .a=0x2f, .x=0xe2, .y=0xdf, .sp=0x8a, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x00e2, .value=0x2f}, {.addr=0x2ce4, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x2ce4, .value=0x26, .type=IO_READ},
        {.addr=0x2ce5, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e2, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0101) {
    const struct CPU_State initial_cpu = {.pc=0x5111, .a=0x55, .x=0xc1, .y=0x1d, .sp=0x42, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x00c1, .value=0xdc}, {.addr=0x5111, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x5112, .a=0x54, .x=0xc1, .y=0x1d, .sp=0x42, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x00c1, .value=0xdc}, {.addr=0x5111, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x5111, .value=0x26, .type=IO_READ},
        {.addr=0x5112, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c1, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0102) {
    const struct CPU_State initial_cpu = {.pc=0xedc6, .a=0x78, .x=0xb2, .y=0x46, .sp=0x0a, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x01b2, .value=0xf2}, {.addr=0xedc6, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xedc7, .a=0x70, .x=0xb2, .y=0x46, .sp=0x0a, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x01b2, .value=0xf2}, {.addr=0xedc6, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xedc6, .value=0x26, .type=IO_READ},
        {.addr=0xedc7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b2, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0103) {
    const struct CPU_State initial_cpu = {.pc=0x9243, .a=0xe4, .x=0x2f, .y=0x73, .sp=0x45, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x012f, .value=0xe1}, {.addr=0x9243, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x9244, .a=0xe0, .x=0x2f, .y=0x73, .sp=0x45, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x012f, .value=0xe1}, {.addr=0x9243, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x9243, .value=0x26, .type=IO_READ},
        {.addr=0x9244, .value=DUMMY, .type=IO_READ},
        {.addr=0x012f, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0104) {
    const struct CPU_State initial_cpu = {.pc=0x1cfb, .a=0x4f, .x=0x47, .y=0xeb, .sp=0xf5, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x0047, .value=0xa4}, {.addr=0x1cfb, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x1cfc, .a=0x04, .x=0x47, .y=0xeb, .sp=0xf5, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x0047, .value=0xa4}, {.addr=0x1cfb, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x1cfb, .value=0x26, .type=IO_READ},
        {.addr=0x1cfc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0047, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0105) {
    const struct CPU_State initial_cpu = {.pc=0x441d, .a=0xc2, .x=0x3d, .y=0xbf, .sp=0x7b, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x013d, .value=0x16}, {.addr=0x441d, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x441e, .a=0x02, .x=0x3d, .y=0xbf, .sp=0x7b, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x013d, .value=0x16}, {.addr=0x441d, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x441d, .value=0x26, .type=IO_READ},
        {.addr=0x441e, .value=DUMMY, .type=IO_READ},
        {.addr=0x013d, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0106) {
    const struct CPU_State initial_cpu = {.pc=0x6a3b, .a=0x1a, .x=0xb1, .y=0xc3, .sp=0x91, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0x0f}, {.addr=0x6a3b, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x6a3c, .a=0x0a, .x=0xb1, .y=0xc3, .sp=0x91, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0x0f}, {.addr=0x6a3b, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x6a3b, .value=0x26, .type=IO_READ},
        {.addr=0x6a3c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b1, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0107) {
    const struct CPU_State initial_cpu = {.pc=0x82dd, .a=0xcc, .x=0xa7, .y=0x08, .sp=0xc0, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x00a7, .value=0x5a}, {.addr=0x82dd, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x82de, .a=0x48, .x=0xa7, .y=0x08, .sp=0xc0, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x00a7, .value=0x5a}, {.addr=0x82dd, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x82dd, .value=0x26, .type=IO_READ},
        {.addr=0x82de, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a7, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0108) {
    const struct CPU_State initial_cpu = {.pc=0xaa86, .a=0xb4, .x=0x13, .y=0x72, .sp=0x9b, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x0013, .value=0x8e}, {.addr=0xaa86, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xaa87, .a=0x84, .x=0x13, .y=0x72, .sp=0x9b, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0013, .value=0x8e}, {.addr=0xaa86, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xaa86, .value=0x26, .type=IO_READ},
        {.addr=0xaa87, .value=DUMMY, .type=IO_READ},
        {.addr=0x0013, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0109) {
    const struct CPU_State initial_cpu = {.pc=0x4c58, .a=0x2c, .x=0xe4, .y=0xa2, .sp=0x7a, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x00e4, .value=0x90}, {.addr=0x4c58, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x4c59, .a=0x00, .x=0xe4, .y=0xa2, .sp=0x7a, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x00e4, .value=0x90}, {.addr=0x4c58, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x4c58, .value=0x26, .type=IO_READ},
        {.addr=0x4c59, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e4, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_010A) {
    const struct CPU_State initial_cpu = {.pc=0xcb65, .a=0x13, .x=0xce, .y=0x04, .sp=0xe8, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0x7e}, {.addr=0xcb65, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xcb66, .a=0x12, .x=0xce, .y=0x04, .sp=0xe8, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0x7e}, {.addr=0xcb65, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xcb65, .value=0x26, .type=IO_READ},
        {.addr=0xcb66, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ce, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_010B) {
    const struct CPU_State initial_cpu = {.pc=0x515d, .a=0x34, .x=0x99, .y=0x55, .sp=0x8f, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x0099, .value=0x00}, {.addr=0x515d, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x515e, .a=0x00, .x=0x99, .y=0x55, .sp=0x8f, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x0099, .value=0x00}, {.addr=0x515d, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x515d, .value=0x26, .type=IO_READ},
        {.addr=0x515e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0099, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_010C) {
    const struct CPU_State initial_cpu = {.pc=0x9b7e, .a=0xaa, .x=0xa9, .y=0x29, .sp=0xa9, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x01a9, .value=0x0d}, {.addr=0x9b7e, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x9b7f, .a=0x08, .x=0xa9, .y=0x29, .sp=0xa9, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x01a9, .value=0x0d}, {.addr=0x9b7e, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x9b7e, .value=0x26, .type=IO_READ},
        {.addr=0x9b7f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a9, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_010D) {
    const struct CPU_State initial_cpu = {.pc=0x7dc2, .a=0x39, .x=0xac, .y=0xdd, .sp=0xf6, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x01ac, .value=0xdc}, {.addr=0x7dc2, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x7dc3, .a=0x18, .x=0xac, .y=0xdd, .sp=0xf6, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x01ac, .value=0xdc}, {.addr=0x7dc2, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x7dc2, .value=0x26, .type=IO_READ},
        {.addr=0x7dc3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ac, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_010E) {
    const struct CPU_State initial_cpu = {.pc=0xf3c2, .a=0xa0, .x=0xb0, .y=0x75, .sp=0x70, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x00b0, .value=0x7f}, {.addr=0xf3c2, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xf3c3, .a=0x20, .x=0xb0, .y=0x75, .sp=0x70, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x00b0, .value=0x7f}, {.addr=0xf3c2, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xf3c2, .value=0x26, .type=IO_READ},
        {.addr=0xf3c3, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b0, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_010F) {
    const struct CPU_State initial_cpu = {.pc=0xac86, .a=0x29, .x=0xed, .y=0x67, .sp=0xd7, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x00ed, .value=0x11}, {.addr=0xac86, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xac87, .a=0x01, .x=0xed, .y=0x67, .sp=0xd7, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x00ed, .value=0x11}, {.addr=0xac86, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xac86, .value=0x26, .type=IO_READ},
        {.addr=0xac87, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ed, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0110) {
    const struct CPU_State initial_cpu = {.pc=0x4ffc, .a=0x4b, .x=0xde, .y=0x15, .sp=0x6b, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x01de, .value=0x71}, {.addr=0x4ffc, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x4ffd, .a=0x41, .x=0xde, .y=0x15, .sp=0x6b, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01de, .value=0x71}, {.addr=0x4ffc, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x4ffc, .value=0x26, .type=IO_READ},
        {.addr=0x4ffd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01de, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0111) {
    const struct CPU_State initial_cpu = {.pc=0x07e6, .a=0xc2, .x=0xa6, .y=0xf5, .sp=0xa3, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x00a6, .value=0xe6}, {.addr=0x07e6, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x07e7, .a=0xc2, .x=0xa6, .y=0xf5, .sp=0xa3, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x00a6, .value=0xe6}, {.addr=0x07e6, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x07e6, .value=0x26, .type=IO_READ},
        {.addr=0x07e7, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a6, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0112) {
    const struct CPU_State initial_cpu = {.pc=0xd4ab, .a=0xd8, .x=0xe9, .y=0x98, .sp=0x8d, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x00e9, .value=0x90}, {.addr=0xd4ab, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xd4ac, .a=0x90, .x=0xe9, .y=0x98, .sp=0x8d, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x00e9, .value=0x90}, {.addr=0xd4ab, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xd4ab, .value=0x26, .type=IO_READ},
        {.addr=0xd4ac, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e9, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0113) {
    const struct CPU_State initial_cpu = {.pc=0x37c3, .a=0x61, .x=0x13, .y=0xa1, .sp=0x99, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0xbc}, {.addr=0x37c3, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x37c4, .a=0x20, .x=0x13, .y=0xa1, .sp=0x99, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0xbc}, {.addr=0x37c3, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x37c3, .value=0x26, .type=IO_READ},
        {.addr=0x37c4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0113, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0114) {
    const struct CPU_State initial_cpu = {.pc=0x631a, .a=0x83, .x=0xc1, .y=0x47, .sp=0xa9, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x00c1, .value=0x03}, {.addr=0x631a, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x631b, .a=0x03, .x=0xc1, .y=0x47, .sp=0xa9, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x00c1, .value=0x03}, {.addr=0x631a, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x631a, .value=0x26, .type=IO_READ},
        {.addr=0x631b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c1, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0115) {
    const struct CPU_State initial_cpu = {.pc=0xb1bb, .a=0x88, .x=0xab, .y=0xa6, .sp=0xf3, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0x2e}, {.addr=0xb1bb, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xb1bc, .a=0x08, .x=0xab, .y=0xa6, .sp=0xf3, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0x2e}, {.addr=0xb1bb, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xb1bb, .value=0x26, .type=IO_READ},
        {.addr=0xb1bc, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ab, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0116) {
    const struct CPU_State initial_cpu = {.pc=0x7502, .a=0x6b, .x=0x26, .y=0x72, .sp=0x2c, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x0126, .value=0x31}, {.addr=0x7502, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x7503, .a=0x21, .x=0x26, .y=0x72, .sp=0x2c, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0126, .value=0x31}, {.addr=0x7502, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x7502, .value=0x26, .type=IO_READ},
        {.addr=0x7503, .value=DUMMY, .type=IO_READ},
        {.addr=0x0126, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0117) {
    const struct CPU_State initial_cpu = {.pc=0x0afa, .a=0x5e, .x=0x7a, .y=0xc1, .sp=0x25, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0xf6}, {.addr=0x0afa, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x0afb, .a=0x56, .x=0x7a, .y=0xc1, .sp=0x25, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0xf6}, {.addr=0x0afa, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x0afa, .value=0x26, .type=IO_READ},
        {.addr=0x0afb, .value=DUMMY, .type=IO_READ},
        {.addr=0x017a, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0118) {
    const struct CPU_State initial_cpu = {.pc=0x0031, .a=0xd5, .x=0xfb, .y=0xfd, .sp=0x02, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x0031, .value=0x26}, {.addr=0x01fb, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x0032, .a=0xd5, .x=0xfb, .y=0xfd, .sp=0x02, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0031, .value=0x26}, {.addr=0x01fb, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x0031, .value=0x26, .type=IO_READ},
        {.addr=0x0032, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fb, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0119) {
    const struct CPU_State initial_cpu = {.pc=0xe5fc, .a=0xa9, .x=0x76, .y=0x5e, .sp=0xbd, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x0076, .value=0x46}, {.addr=0xe5fc, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xe5fd, .a=0x00, .x=0x76, .y=0x5e, .sp=0xbd, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x0076, .value=0x46}, {.addr=0xe5fc, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xe5fc, .value=0x26, .type=IO_READ},
        {.addr=0xe5fd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0076, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_011A) {
    const struct CPU_State initial_cpu = {.pc=0x874f, .a=0x7c, .x=0xbd, .y=0xcb, .sp=0x38, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x00bd, .value=0x66}, {.addr=0x874f, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x8750, .a=0x64, .x=0xbd, .y=0xcb, .sp=0x38, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x00bd, .value=0x66}, {.addr=0x874f, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x874f, .value=0x26, .type=IO_READ},
        {.addr=0x8750, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bd, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_011B) {
    const struct CPU_State initial_cpu = {.pc=0x70c1, .a=0x79, .x=0x9f, .y=0x93, .sp=0x46, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x009f, .value=0x6e}, {.addr=0x70c1, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x70c2, .a=0x68, .x=0x9f, .y=0x93, .sp=0x46, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x009f, .value=0x6e}, {.addr=0x70c1, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x70c1, .value=0x26, .type=IO_READ},
        {.addr=0x70c2, .value=DUMMY, .type=IO_READ},
        {.addr=0x009f, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_011C) {
    const struct CPU_State initial_cpu = {.pc=0x9cdb, .a=0xf4, .x=0xf6, .y=0xa8, .sp=0xb8, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x01f6, .value=0x2a}, {.addr=0x9cdb, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x9cdc, .a=0x20, .x=0xf6, .y=0xa8, .sp=0xb8, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x01f6, .value=0x2a}, {.addr=0x9cdb, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x9cdb, .value=0x26, .type=IO_READ},
        {.addr=0x9cdc, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f6, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_011D) {
    const struct CPU_State initial_cpu = {.pc=0xd4d4, .a=0x7f, .x=0x50, .y=0x00, .sp=0x4c, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x0050, .value=0x5e}, {.addr=0xd4d4, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xd4d5, .a=0x5e, .x=0x50, .y=0x00, .sp=0x4c, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0050, .value=0x5e}, {.addr=0xd4d4, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xd4d4, .value=0x26, .type=IO_READ},
        {.addr=0xd4d5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0050, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_011E) {
    const struct CPU_State initial_cpu = {.pc=0xb26e, .a=0xae, .x=0x8e, .y=0x44, .sp=0x26, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0x90}, {.addr=0xb26e, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xb26f, .a=0x80, .x=0x8e, .y=0x44, .sp=0x26, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0x90}, {.addr=0xb26e, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xb26e, .value=0x26, .type=IO_READ},
        {.addr=0xb26f, .value=DUMMY, .type=IO_READ},
        {.addr=0x018e, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_011F) {
    const struct CPU_State initial_cpu = {.pc=0x8a13, .a=0xa8, .x=0x70, .y=0x02, .sp=0xa5, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x0070, .value=0xdf}, {.addr=0x8a13, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x8a14, .a=0x88, .x=0x70, .y=0x02, .sp=0xa5, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0070, .value=0xdf}, {.addr=0x8a13, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x8a13, .value=0x26, .type=IO_READ},
        {.addr=0x8a14, .value=DUMMY, .type=IO_READ},
        {.addr=0x0070, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0120) {
    const struct CPU_State initial_cpu = {.pc=0x77b3, .a=0x54, .x=0xe6, .y=0x39, .sp=0x09, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0x86}, {.addr=0x77b3, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x77b4, .a=0x04, .x=0xe6, .y=0x39, .sp=0x09, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0x86}, {.addr=0x77b3, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x77b3, .value=0x26, .type=IO_READ},
        {.addr=0x77b4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e6, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0121) {
    const struct CPU_State initial_cpu = {.pc=0x2d79, .a=0x0a, .x=0xe1, .y=0x2b, .sp=0xc8, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x01e1, .value=0x4b}, {.addr=0x2d79, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x2d7a, .a=0x0a, .x=0xe1, .y=0x2b, .sp=0xc8, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x01e1, .value=0x4b}, {.addr=0x2d79, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x2d79, .value=0x26, .type=IO_READ},
        {.addr=0x2d7a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e1, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0122) {
    const struct CPU_State initial_cpu = {.pc=0x34f5, .a=0x1f, .x=0x62, .y=0x5b, .sp=0x81, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x0062, .value=0x33}, {.addr=0x34f5, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x34f6, .a=0x13, .x=0x62, .y=0x5b, .sp=0x81, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0062, .value=0x33}, {.addr=0x34f5, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x34f5, .value=0x26, .type=IO_READ},
        {.addr=0x34f6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0062, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0123) {
    const struct CPU_State initial_cpu = {.pc=0xb276, .a=0x94, .x=0xe2, .y=0x58, .sp=0x5f, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x00e2, .value=0xde}, {.addr=0xb276, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xb277, .a=0x94, .x=0xe2, .y=0x58, .sp=0x5f, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x00e2, .value=0xde}, {.addr=0xb276, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xb276, .value=0x26, .type=IO_READ},
        {.addr=0xb277, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e2, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0124) {
    const struct CPU_State initial_cpu = {.pc=0x350d, .a=0x12, .x=0x6c, .y=0x14, .sp=0x64, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x016c, .value=0x4d}, {.addr=0x350d, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x350e, .a=0x00, .x=0x6c, .y=0x14, .sp=0x64, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x016c, .value=0x4d}, {.addr=0x350d, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x350d, .value=0x26, .type=IO_READ},
        {.addr=0x350e, .value=DUMMY, .type=IO_READ},
        {.addr=0x016c, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0125) {
    const struct CPU_State initial_cpu = {.pc=0xaebd, .a=0x84, .x=0x88, .y=0x7a, .sp=0xa4, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x0188, .value=0x4b}, {.addr=0xaebd, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xaebe, .a=0x00, .x=0x88, .y=0x7a, .sp=0xa4, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x0188, .value=0x4b}, {.addr=0xaebd, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xaebd, .value=0x26, .type=IO_READ},
        {.addr=0xaebe, .value=DUMMY, .type=IO_READ},
        {.addr=0x0188, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0126) {
    const struct CPU_State initial_cpu = {.pc=0x944a, .a=0x4a, .x=0xba, .y=0x44, .sp=0x07, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0xd6}, {.addr=0x944a, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x944b, .a=0x42, .x=0xba, .y=0x44, .sp=0x07, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0xd6}, {.addr=0x944a, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x944a, .value=0x26, .type=IO_READ},
        {.addr=0x944b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ba, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0127) {
    const struct CPU_State initial_cpu = {.pc=0x6111, .a=0xbb, .x=0x49, .y=0xfb, .sp=0xe8, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x0149, .value=0x4b}, {.addr=0x6111, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x6112, .a=0x0b, .x=0x49, .y=0xfb, .sp=0xe8, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x0149, .value=0x4b}, {.addr=0x6111, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x6111, .value=0x26, .type=IO_READ},
        {.addr=0x6112, .value=DUMMY, .type=IO_READ},
        {.addr=0x0149, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0128) {
    const struct CPU_State initial_cpu = {.pc=0xe3ab, .a=0x76, .x=0x2f, .y=0x23, .sp=0xfa, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x002f, .value=0xd1}, {.addr=0xe3ab, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xe3ac, .a=0x50, .x=0x2f, .y=0x23, .sp=0xfa, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x002f, .value=0xd1}, {.addr=0xe3ab, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xe3ab, .value=0x26, .type=IO_READ},
        {.addr=0xe3ac, .value=DUMMY, .type=IO_READ},
        {.addr=0x002f, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_012A) {
    const struct CPU_State initial_cpu = {.pc=0xd9d7, .a=0x58, .x=0x55, .y=0xa5, .sp=0x42, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x0055, .value=0x9c}, {.addr=0xd9d7, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xd9d8, .a=0x18, .x=0x55, .y=0xa5, .sp=0x42, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x0055, .value=0x9c}, {.addr=0xd9d7, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xd9d7, .value=0x26, .type=IO_READ},
        {.addr=0xd9d8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0055, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_012B) {
    const struct CPU_State initial_cpu = {.pc=0xe99d, .a=0xe2, .x=0x89, .y=0xb3, .sp=0x2f, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x0089, .value=0xd4}, {.addr=0xe99d, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xe99e, .a=0xc0, .x=0x89, .y=0xb3, .sp=0x2f, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0089, .value=0xd4}, {.addr=0xe99d, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xe99d, .value=0x26, .type=IO_READ},
        {.addr=0xe99e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0089, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_012C) {
    const struct CPU_State initial_cpu = {.pc=0xd404, .a=0x00, .x=0x9f, .y=0x35, .sp=0xa2, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x009f, .value=0xc6}, {.addr=0xd404, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xd405, .a=0x00, .x=0x9f, .y=0x35, .sp=0xa2, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x009f, .value=0xc6}, {.addr=0xd404, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xd404, .value=0x26, .type=IO_READ},
        {.addr=0xd405, .value=DUMMY, .type=IO_READ},
        {.addr=0x009f, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_012E) {
    const struct CPU_State initial_cpu = {.pc=0x27a3, .a=0xf0, .x=0x46, .y=0x98, .sp=0x82, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0x03}, {.addr=0x27a3, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x27a4, .a=0x00, .x=0x46, .y=0x98, .sp=0x82, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0x03}, {.addr=0x27a3, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x27a3, .value=0x26, .type=IO_READ},
        {.addr=0x27a4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0146, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_012F) {
    const struct CPU_State initial_cpu = {.pc=0xf7a7, .a=0xeb, .x=0xbc, .y=0x69, .sp=0xfd, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x00bc, .value=0x0e}, {.addr=0xf7a7, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xf7a8, .a=0x0a, .x=0xbc, .y=0x69, .sp=0xfd, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x00bc, .value=0x0e}, {.addr=0xf7a7, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xf7a7, .value=0x26, .type=IO_READ},
        {.addr=0xf7a8, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bc, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0130) {
    const struct CPU_State initial_cpu = {.pc=0x6636, .a=0xf6, .x=0x85, .y=0x62, .sp=0x1a, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x0085, .value=0xf5}, {.addr=0x6636, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x6637, .a=0xf4, .x=0x85, .y=0x62, .sp=0x1a, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0085, .value=0xf5}, {.addr=0x6636, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x6636, .value=0x26, .type=IO_READ},
        {.addr=0x6637, .value=DUMMY, .type=IO_READ},
        {.addr=0x0085, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0131) {
    const struct CPU_State initial_cpu = {.pc=0xfc9a, .a=0x5a, .x=0x58, .y=0xa1, .sp=0x08, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0x87}, {.addr=0xfc9a, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xfc9b, .a=0x02, .x=0x58, .y=0xa1, .sp=0x08, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0x87}, {.addr=0xfc9a, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xfc9a, .value=0x26, .type=IO_READ},
        {.addr=0xfc9b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0158, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0134) {
    const struct CPU_State initial_cpu = {.pc=0x5d3c, .a=0x96, .x=0xd1, .y=0x94, .sp=0x31, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x00d1, .value=0x5d}, {.addr=0x5d3c, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x5d3d, .a=0x14, .x=0xd1, .y=0x94, .sp=0x31, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x00d1, .value=0x5d}, {.addr=0x5d3c, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x5d3c, .value=0x26, .type=IO_READ},
        {.addr=0x5d3d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d1, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0136) {
    const struct CPU_State initial_cpu = {.pc=0x6f48, .a=0x54, .x=0xc0, .y=0xca, .sp=0x30, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x01c0, .value=0x0c}, {.addr=0x6f48, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x6f49, .a=0x04, .x=0xc0, .y=0xca, .sp=0x30, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x01c0, .value=0x0c}, {.addr=0x6f48, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x6f48, .value=0x26, .type=IO_READ},
        {.addr=0x6f49, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c0, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0137) {
    const struct CPU_State initial_cpu = {.pc=0x509b, .a=0xd9, .x=0x52, .y=0xe7, .sp=0xd0, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0x3a}, {.addr=0x509b, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x509c, .a=0x18, .x=0x52, .y=0xe7, .sp=0xd0, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0x3a}, {.addr=0x509b, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x509b, .value=0x26, .type=IO_READ},
        {.addr=0x509c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0152, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0138) {
    const struct CPU_State initial_cpu = {.pc=0x2047, .a=0xc6, .x=0xc9, .y=0xe2, .sp=0x60, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0x85}, {.addr=0x2047, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x2048, .a=0x84, .x=0xc9, .y=0xe2, .sp=0x60, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0x85}, {.addr=0x2047, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x2047, .value=0x26, .type=IO_READ},
        {.addr=0x2048, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c9, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0139) {
    const struct CPU_State initial_cpu = {.pc=0x31d0, .a=0x58, .x=0xa2, .y=0xd1, .sp=0x12, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x00a2, .value=0x83}, {.addr=0x31d0, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x31d1, .a=0x00, .x=0xa2, .y=0xd1, .sp=0x12, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x00a2, .value=0x83}, {.addr=0x31d0, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x31d0, .value=0x26, .type=IO_READ},
        {.addr=0x31d1, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a2, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_013A) {
    const struct CPU_State initial_cpu = {.pc=0x2529, .a=0x94, .x=0x70, .y=0xdd, .sp=0x8b, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x0170, .value=0x98}, {.addr=0x2529, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x252a, .a=0x90, .x=0x70, .y=0xdd, .sp=0x8b, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x0170, .value=0x98}, {.addr=0x2529, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x2529, .value=0x26, .type=IO_READ},
        {.addr=0x252a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0170, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_013B) {
    const struct CPU_State initial_cpu = {.pc=0xd5e0, .a=0xd5, .x=0x7b, .y=0xf8, .sp=0x17, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0xf5}, {.addr=0xd5e0, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xd5e1, .a=0xd5, .x=0x7b, .y=0xf8, .sp=0x17, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0xf5}, {.addr=0xd5e0, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xd5e0, .value=0x26, .type=IO_READ},
        {.addr=0xd5e1, .value=DUMMY, .type=IO_READ},
        {.addr=0x017b, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_013C) {
    const struct CPU_State initial_cpu = {.pc=0xb536, .a=0x32, .x=0x2e, .y=0xa2, .sp=0x77, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0xd8}, {.addr=0xb536, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xb537, .a=0x10, .x=0x2e, .y=0xa2, .sp=0x77, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0xd8}, {.addr=0xb536, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xb536, .value=0x26, .type=IO_READ},
        {.addr=0xb537, .value=DUMMY, .type=IO_READ},
        {.addr=0x012e, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_013D) {
    const struct CPU_State initial_cpu = {.pc=0x625f, .a=0xb3, .x=0xeb, .y=0xb6, .sp=0x8d, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x00eb, .value=0x11}, {.addr=0x625f, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x6260, .a=0x11, .x=0xeb, .y=0xb6, .sp=0x8d, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x00eb, .value=0x11}, {.addr=0x625f, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x625f, .value=0x26, .type=IO_READ},
        {.addr=0x6260, .value=DUMMY, .type=IO_READ},
        {.addr=0x00eb, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_013E) {
    const struct CPU_State initial_cpu = {.pc=0x81e9, .a=0x94, .x=0xf2, .y=0xdc, .sp=0xb1, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x01f2, .value=0x7b}, {.addr=0x81e9, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x81ea, .a=0x10, .x=0xf2, .y=0xdc, .sp=0xb1, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x01f2, .value=0x7b}, {.addr=0x81e9, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x81e9, .value=0x26, .type=IO_READ},
        {.addr=0x81ea, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f2, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_013F) {
    const struct CPU_State initial_cpu = {.pc=0xde63, .a=0x1b, .x=0xbd, .y=0x5e, .sp=0xe2, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0x23}, {.addr=0xde63, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xde64, .a=0x03, .x=0xbd, .y=0x5e, .sp=0xe2, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0x23}, {.addr=0xde63, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xde63, .value=0x26, .type=IO_READ},
        {.addr=0xde64, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bd, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0140) {
    const struct CPU_State initial_cpu = {.pc=0xdf95, .a=0xfe, .x=0x38, .y=0x39, .sp=0x29, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x0038, .value=0x87}, {.addr=0xdf95, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xdf96, .a=0x86, .x=0x38, .y=0x39, .sp=0x29, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x0038, .value=0x87}, {.addr=0xdf95, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xdf95, .value=0x26, .type=IO_READ},
        {.addr=0xdf96, .value=DUMMY, .type=IO_READ},
        {.addr=0x0038, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0141) {
    const struct CPU_State initial_cpu = {.pc=0x9204, .a=0xa4, .x=0x62, .y=0x94, .sp=0x2e, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0x57}, {.addr=0x9204, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x9205, .a=0x04, .x=0x62, .y=0x94, .sp=0x2e, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0x57}, {.addr=0x9204, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x9204, .value=0x26, .type=IO_READ},
        {.addr=0x9205, .value=DUMMY, .type=IO_READ},
        {.addr=0x0162, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0142) {
    const struct CPU_State initial_cpu = {.pc=0x9818, .a=0x31, .x=0xa3, .y=0x55, .sp=0x36, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x00a3, .value=0x4b}, {.addr=0x9818, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x9819, .a=0x01, .x=0xa3, .y=0x55, .sp=0x36, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x00a3, .value=0x4b}, {.addr=0x9818, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x9818, .value=0x26, .type=IO_READ},
        {.addr=0x9819, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a3, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0143) {
    const struct CPU_State initial_cpu = {.pc=0xc6e6, .a=0xb2, .x=0x68, .y=0x1a, .sp=0xfe, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x0068, .value=0xa3}, {.addr=0xc6e6, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xc6e7, .a=0xa2, .x=0x68, .y=0x1a, .sp=0xfe, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0068, .value=0xa3}, {.addr=0xc6e6, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xc6e6, .value=0x26, .type=IO_READ},
        {.addr=0xc6e7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0068, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0144) {
    const struct CPU_State initial_cpu = {.pc=0xff28, .a=0xb4, .x=0x1e, .y=0xc4, .sp=0x94, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x011e, .value=0x08}, {.addr=0xff28, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xff29, .a=0x00, .x=0x1e, .y=0xc4, .sp=0x94, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x011e, .value=0x08}, {.addr=0xff28, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xff28, .value=0x26, .type=IO_READ},
        {.addr=0xff29, .value=DUMMY, .type=IO_READ},
        {.addr=0x011e, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0145) {
    const struct CPU_State initial_cpu = {.pc=0x76ea, .a=0xc0, .x=0xa4, .y=0xfd, .sp=0x97, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x01a4, .value=0x36}, {.addr=0x76ea, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x76eb, .a=0x00, .x=0xa4, .y=0xfd, .sp=0x97, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x01a4, .value=0x36}, {.addr=0x76ea, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x76ea, .value=0x26, .type=IO_READ},
        {.addr=0x76eb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a4, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0146) {
    const struct CPU_State initial_cpu = {.pc=0xd347, .a=0x59, .x=0x7b, .y=0x97, .sp=0xa8, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0x73}, {.addr=0xd347, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xd348, .a=0x51, .x=0x7b, .y=0x97, .sp=0xa8, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0x73}, {.addr=0xd347, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xd347, .value=0x26, .type=IO_READ},
        {.addr=0xd348, .value=DUMMY, .type=IO_READ},
        {.addr=0x017b, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0147) {
    const struct CPU_State initial_cpu = {.pc=0xd660, .a=0x87, .x=0xad, .y=0x81, .sp=0x3e, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x00ad, .value=0x3d}, {.addr=0xd660, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xd661, .a=0x05, .x=0xad, .y=0x81, .sp=0x3e, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x00ad, .value=0x3d}, {.addr=0xd660, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xd660, .value=0x26, .type=IO_READ},
        {.addr=0xd661, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ad, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0148) {
    const struct CPU_State initial_cpu = {.pc=0xb957, .a=0x6e, .x=0x31, .y=0x7a, .sp=0xde, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x0131, .value=0x5d}, {.addr=0xb957, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xb958, .a=0x4c, .x=0x31, .y=0x7a, .sp=0xde, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0131, .value=0x5d}, {.addr=0xb957, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xb957, .value=0x26, .type=IO_READ},
        {.addr=0xb958, .value=DUMMY, .type=IO_READ},
        {.addr=0x0131, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0149) {
    const struct CPU_State initial_cpu = {.pc=0x4833, .a=0x89, .x=0xb2, .y=0xb2, .sp=0x79, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x00b2, .value=0x65}, {.addr=0x4833, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x4834, .a=0x01, .x=0xb2, .y=0xb2, .sp=0x79, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x00b2, .value=0x65}, {.addr=0x4833, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x4833, .value=0x26, .type=IO_READ},
        {.addr=0x4834, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b2, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_014A) {
    const struct CPU_State initial_cpu = {.pc=0xf61d, .a=0xc0, .x=0x83, .y=0x5e, .sp=0x66, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0x64}, {.addr=0xf61d, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xf61e, .a=0x40, .x=0x83, .y=0x5e, .sp=0x66, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0x64}, {.addr=0xf61d, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xf61d, .value=0x26, .type=IO_READ},
        {.addr=0xf61e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0183, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_014B) {
    const struct CPU_State initial_cpu = {.pc=0x7ae6, .a=0x5d, .x=0x64, .y=0xc5, .sp=0x4a, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0064, .value=0x7f}, {.addr=0x7ae6, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x7ae7, .a=0x5d, .x=0x64, .y=0xc5, .sp=0x4a, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0064, .value=0x7f}, {.addr=0x7ae6, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x7ae6, .value=0x26, .type=IO_READ},
        {.addr=0x7ae7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0064, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_014C) {
    const struct CPU_State initial_cpu = {.pc=0x839a, .a=0x74, .x=0xb1, .y=0x00, .sp=0xaf, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x00b1, .value=0xa7}, {.addr=0x839a, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x839b, .a=0x24, .x=0xb1, .y=0x00, .sp=0xaf, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x00b1, .value=0xa7}, {.addr=0x839a, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x839a, .value=0x26, .type=IO_READ},
        {.addr=0x839b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b1, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_014D) {
    const struct CPU_State initial_cpu = {.pc=0xf6b1, .a=0x3c, .x=0xae, .y=0x02, .sp=0x4f, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x01ae, .value=0xe3}, {.addr=0xf6b1, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xf6b2, .a=0x20, .x=0xae, .y=0x02, .sp=0x4f, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x01ae, .value=0xe3}, {.addr=0xf6b1, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xf6b1, .value=0x26, .type=IO_READ},
        {.addr=0xf6b2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ae, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_014F) {
    const struct CPU_State initial_cpu = {.pc=0x3c64, .a=0x38, .x=0x9d, .y=0xa2, .sp=0x38, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x019d, .value=0x9c}, {.addr=0x3c64, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x3c65, .a=0x18, .x=0x9d, .y=0xa2, .sp=0x38, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x019d, .value=0x9c}, {.addr=0x3c64, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x3c64, .value=0x26, .type=IO_READ},
        {.addr=0x3c65, .value=DUMMY, .type=IO_READ},
        {.addr=0x019d, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0151) {
    const struct CPU_State initial_cpu = {.pc=0x22ee, .a=0x10, .x=0x29, .y=0x13, .sp=0xe0, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x0029, .value=0xb6}, {.addr=0x22ee, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x22ef, .a=0x10, .x=0x29, .y=0x13, .sp=0xe0, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x0029, .value=0xb6}, {.addr=0x22ee, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x22ee, .value=0x26, .type=IO_READ},
        {.addr=0x22ef, .value=DUMMY, .type=IO_READ},
        {.addr=0x0029, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0152) {
    const struct CPU_State initial_cpu = {.pc=0x8fa9, .a=0xd7, .x=0x9b, .y=0x8c, .sp=0xe2, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x019b, .value=0xa6}, {.addr=0x8fa9, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x8faa, .a=0x86, .x=0x9b, .y=0x8c, .sp=0xe2, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x019b, .value=0xa6}, {.addr=0x8fa9, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x8fa9, .value=0x26, .type=IO_READ},
        {.addr=0x8faa, .value=DUMMY, .type=IO_READ},
        {.addr=0x019b, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0153) {
    const struct CPU_State initial_cpu = {.pc=0x2555, .a=0xee, .x=0x71, .y=0x1a, .sp=0xe7, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x0171, .value=0xb0}, {.addr=0x2555, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x2556, .a=0xa0, .x=0x71, .y=0x1a, .sp=0xe7, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x0171, .value=0xb0}, {.addr=0x2555, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x2555, .value=0x26, .type=IO_READ},
        {.addr=0x2556, .value=DUMMY, .type=IO_READ},
        {.addr=0x0171, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0154) {
    const struct CPU_State initial_cpu = {.pc=0x2336, .a=0xee, .x=0x22, .y=0xfc, .sp=0xc6, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x0122, .value=0x01}, {.addr=0x2336, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x2337, .a=0x00, .x=0x22, .y=0xfc, .sp=0xc6, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x0122, .value=0x01}, {.addr=0x2336, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x2336, .value=0x26, .type=IO_READ},
        {.addr=0x2337, .value=DUMMY, .type=IO_READ},
        {.addr=0x0122, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0155) {
    const struct CPU_State initial_cpu = {.pc=0xde74, .a=0x57, .x=0xc7, .y=0x9b, .sp=0xc4, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x00c7, .value=0x0f}, {.addr=0xde74, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xde75, .a=0x07, .x=0xc7, .y=0x9b, .sp=0xc4, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x00c7, .value=0x0f}, {.addr=0xde74, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xde74, .value=0x26, .type=IO_READ},
        {.addr=0xde75, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c7, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0156) {
    const struct CPU_State initial_cpu = {.pc=0x30aa, .a=0x17, .x=0xef, .y=0xe1, .sp=0x1d, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0xc2}, {.addr=0x30aa, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x30ab, .a=0x02, .x=0xef, .y=0xe1, .sp=0x1d, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0xc2}, {.addr=0x30aa, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x30aa, .value=0x26, .type=IO_READ},
        {.addr=0x30ab, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ef, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0157) {
    const struct CPU_State initial_cpu = {.pc=0x4e92, .a=0x50, .x=0x39, .y=0x16, .sp=0x33, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x0039, .value=0x4b}, {.addr=0x4e92, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x4e93, .a=0x40, .x=0x39, .y=0x16, .sp=0x33, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x0039, .value=0x4b}, {.addr=0x4e92, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x4e92, .value=0x26, .type=IO_READ},
        {.addr=0x4e93, .value=DUMMY, .type=IO_READ},
        {.addr=0x0039, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0158) {
    const struct CPU_State initial_cpu = {.pc=0x4a0e, .a=0x14, .x=0x14, .y=0x88, .sp=0x1c, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x0114, .value=0x91}, {.addr=0x4a0e, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x4a0f, .a=0x10, .x=0x14, .y=0x88, .sp=0x1c, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0114, .value=0x91}, {.addr=0x4a0e, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x4a0e, .value=0x26, .type=IO_READ},
        {.addr=0x4a0f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0114, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0159) {
    const struct CPU_State initial_cpu = {.pc=0x1cad, .a=0x61, .x=0x12, .y=0x47, .sp=0x8d, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0x45}, {.addr=0x1cad, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x1cae, .a=0x41, .x=0x12, .y=0x47, .sp=0x8d, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0x45}, {.addr=0x1cad, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x1cad, .value=0x26, .type=IO_READ},
        {.addr=0x1cae, .value=DUMMY, .type=IO_READ},
        {.addr=0x0112, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_015A) {
    const struct CPU_State initial_cpu = {.pc=0x091d, .a=0x43, .x=0xf2, .y=0x39, .sp=0xf5, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x01f2, .value=0x9e}, {.addr=0x091d, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x091e, .a=0x02, .x=0xf2, .y=0x39, .sp=0xf5, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x01f2, .value=0x9e}, {.addr=0x091d, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x091d, .value=0x26, .type=IO_READ},
        {.addr=0x091e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f2, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_015B) {
    const struct CPU_State initial_cpu = {.pc=0x7bdc, .a=0x01, .x=0x9c, .y=0xa3, .sp=0x33, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x009c, .value=0x74}, {.addr=0x7bdc, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x7bdd, .a=0x00, .x=0x9c, .y=0xa3, .sp=0x33, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x009c, .value=0x74}, {.addr=0x7bdc, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x7bdc, .value=0x26, .type=IO_READ},
        {.addr=0x7bdd, .value=DUMMY, .type=IO_READ},
        {.addr=0x009c, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_015C) {
    const struct CPU_State initial_cpu = {.pc=0xf8cf, .a=0x4e, .x=0x60, .y=0xf6, .sp=0xc3, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x0160, .value=0x04}, {.addr=0xf8cf, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xf8d0, .a=0x04, .x=0x60, .y=0xf6, .sp=0xc3, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x0160, .value=0x04}, {.addr=0xf8cf, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xf8cf, .value=0x26, .type=IO_READ},
        {.addr=0xf8d0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0160, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_015D) {
    const struct CPU_State initial_cpu = {.pc=0xe832, .a=0x63, .x=0xd9, .y=0x78, .sp=0x1c, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0xb7}, {.addr=0xe832, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xe833, .a=0x23, .x=0xd9, .y=0x78, .sp=0x1c, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0xb7}, {.addr=0xe832, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xe832, .value=0x26, .type=IO_READ},
        {.addr=0xe833, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d9, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_015E) {
    const struct CPU_State initial_cpu = {.pc=0x91d1, .a=0xaa, .x=0xe7, .y=0xdc, .sp=0x95, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x01e7, .value=0x4b}, {.addr=0x91d1, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x91d2, .a=0x0a, .x=0xe7, .y=0xdc, .sp=0x95, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x01e7, .value=0x4b}, {.addr=0x91d1, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x91d1, .value=0x26, .type=IO_READ},
        {.addr=0x91d2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e7, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_015F) {
    const struct CPU_State initial_cpu = {.pc=0x4ed5, .a=0x76, .x=0x7e, .y=0x66, .sp=0xaf, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x017e, .value=0xdf}, {.addr=0x4ed5, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x4ed6, .a=0x56, .x=0x7e, .y=0x66, .sp=0xaf, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x017e, .value=0xdf}, {.addr=0x4ed5, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x4ed5, .value=0x26, .type=IO_READ},
        {.addr=0x4ed6, .value=DUMMY, .type=IO_READ},
        {.addr=0x017e, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0160) {
    const struct CPU_State initial_cpu = {.pc=0xa06b, .a=0xfb, .x=0xa9, .y=0xba, .sp=0xba, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x00a9, .value=0xd4}, {.addr=0xa06b, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xa06c, .a=0xd0, .x=0xa9, .y=0xba, .sp=0xba, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x00a9, .value=0xd4}, {.addr=0xa06b, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xa06b, .value=0x26, .type=IO_READ},
        {.addr=0xa06c, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a9, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0161) {
    const struct CPU_State initial_cpu = {.pc=0x8112, .a=0xf1, .x=0x14, .y=0x5e, .sp=0x3e, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x0014, .value=0xc3}, {.addr=0x8112, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x8113, .a=0xc1, .x=0x14, .y=0x5e, .sp=0x3e, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0014, .value=0xc3}, {.addr=0x8112, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x8112, .value=0x26, .type=IO_READ},
        {.addr=0x8113, .value=DUMMY, .type=IO_READ},
        {.addr=0x0014, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0162) {
    const struct CPU_State initial_cpu = {.pc=0x3c0e, .a=0x11, .x=0x54, .y=0xf6, .sp=0x27, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x0054, .value=0x97}, {.addr=0x3c0e, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x3c0f, .a=0x11, .x=0x54, .y=0xf6, .sp=0x27, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0054, .value=0x97}, {.addr=0x3c0e, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x3c0e, .value=0x26, .type=IO_READ},
        {.addr=0x3c0f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0054, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0163) {
    const struct CPU_State initial_cpu = {.pc=0xcf18, .a=0xba, .x=0x12, .y=0xf1, .sp=0xd3, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0xcd}, {.addr=0xcf18, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xcf19, .a=0x88, .x=0x12, .y=0xf1, .sp=0xd3, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0xcd}, {.addr=0xcf18, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xcf18, .value=0x26, .type=IO_READ},
        {.addr=0xcf19, .value=DUMMY, .type=IO_READ},
        {.addr=0x0112, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0164) {
    const struct CPU_State initial_cpu = {.pc=0x0cf7, .a=0x3d, .x=0x6f, .y=0xdf, .sp=0x3e, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x006f, .value=0x19}, {.addr=0x0cf7, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x0cf8, .a=0x19, .x=0x6f, .y=0xdf, .sp=0x3e, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x006f, .value=0x19}, {.addr=0x0cf7, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x0cf7, .value=0x26, .type=IO_READ},
        {.addr=0x0cf8, .value=DUMMY, .type=IO_READ},
        {.addr=0x006f, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0165) {
    const struct CPU_State initial_cpu = {.pc=0x5983, .a=0x4c, .x=0x74, .y=0xd8, .sp=0xd3, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0x3c}, {.addr=0x5983, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x5984, .a=0x0c, .x=0x74, .y=0xd8, .sp=0xd3, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0x3c}, {.addr=0x5983, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x5983, .value=0x26, .type=IO_READ},
        {.addr=0x5984, .value=DUMMY, .type=IO_READ},
        {.addr=0x0174, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0166) {
    const struct CPU_State initial_cpu = {.pc=0xae4c, .a=0x2b, .x=0x04, .y=0x45, .sp=0x7f, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0x69}, {.addr=0xae4c, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xae4d, .a=0x29, .x=0x04, .y=0x45, .sp=0x7f, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0x69}, {.addr=0xae4c, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xae4c, .value=0x26, .type=IO_READ},
        {.addr=0xae4d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0104, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0167) {
    const struct CPU_State initial_cpu = {.pc=0x2db9, .a=0xd1, .x=0x2b, .y=0x78, .sp=0x75, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0x61}, {.addr=0x2db9, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x2dba, .a=0x41, .x=0x2b, .y=0x78, .sp=0x75, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0x61}, {.addr=0x2db9, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x2db9, .value=0x26, .type=IO_READ},
        {.addr=0x2dba, .value=DUMMY, .type=IO_READ},
        {.addr=0x012b, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0168) {
    const struct CPU_State initial_cpu = {.pc=0x1520, .a=0xed, .x=0x80, .y=0x4f, .sp=0x17, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0xce}, {.addr=0x1520, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x1521, .a=0xcc, .x=0x80, .y=0x4f, .sp=0x17, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0xce}, {.addr=0x1520, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x1520, .value=0x26, .type=IO_READ},
        {.addr=0x1521, .value=DUMMY, .type=IO_READ},
        {.addr=0x0180, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0169) {
    const struct CPU_State initial_cpu = {.pc=0x4080, .a=0x2d, .x=0xac, .y=0x64, .sp=0x8a, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x01ac, .value=0xf4}, {.addr=0x4080, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x4081, .a=0x24, .x=0xac, .y=0x64, .sp=0x8a, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01ac, .value=0xf4}, {.addr=0x4080, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x4080, .value=0x26, .type=IO_READ},
        {.addr=0x4081, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ac, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_016A) {
    const struct CPU_State initial_cpu = {.pc=0xa19e, .a=0xa8, .x=0x9a, .y=0xc0, .sp=0x5b, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x009a, .value=0xb5}, {.addr=0xa19e, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xa19f, .a=0xa0, .x=0x9a, .y=0xc0, .sp=0x5b, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x009a, .value=0xb5}, {.addr=0xa19e, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xa19e, .value=0x26, .type=IO_READ},
        {.addr=0xa19f, .value=DUMMY, .type=IO_READ},
        {.addr=0x009a, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_016B) {
    const struct CPU_State initial_cpu = {.pc=0xa69e, .a=0x7d, .x=0x96, .y=0xa0, .sp=0xc3, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x0096, .value=0x5a}, {.addr=0xa69e, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xa69f, .a=0x58, .x=0x96, .y=0xa0, .sp=0xc3, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x0096, .value=0x5a}, {.addr=0xa69e, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xa69e, .value=0x26, .type=IO_READ},
        {.addr=0xa69f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0096, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_016C) {
    const struct CPU_State initial_cpu = {.pc=0xb64f, .a=0xc3, .x=0xa6, .y=0x66, .sp=0xa7, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x00a6, .value=0x78}, {.addr=0xb64f, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xb650, .a=0x40, .x=0xa6, .y=0x66, .sp=0xa7, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x00a6, .value=0x78}, {.addr=0xb64f, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xb64f, .value=0x26, .type=IO_READ},
        {.addr=0xb650, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a6, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_016D) {
    const struct CPU_State initial_cpu = {.pc=0x4d72, .a=0xfa, .x=0xd8, .y=0x88, .sp=0x57, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x01d8, .value=0x8f}, {.addr=0x4d72, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x4d73, .a=0x8a, .x=0xd8, .y=0x88, .sp=0x57, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x01d8, .value=0x8f}, {.addr=0x4d72, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x4d72, .value=0x26, .type=IO_READ},
        {.addr=0x4d73, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d8, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_016E) {
    const struct CPU_State initial_cpu = {.pc=0xbc0d, .a=0x34, .x=0x99, .y=0xb6, .sp=0x43, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x0099, .value=0x17}, {.addr=0xbc0d, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xbc0e, .a=0x14, .x=0x99, .y=0xb6, .sp=0x43, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x0099, .value=0x17}, {.addr=0xbc0d, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xbc0d, .value=0x26, .type=IO_READ},
        {.addr=0xbc0e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0099, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_016F) {
    const struct CPU_State initial_cpu = {.pc=0xbd7c, .a=0xfe, .x=0x71, .y=0xd6, .sp=0x04, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x0071, .value=0x37}, {.addr=0xbd7c, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xbd7d, .a=0x36, .x=0x71, .y=0xd6, .sp=0x04, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x0071, .value=0x37}, {.addr=0xbd7c, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xbd7c, .value=0x26, .type=IO_READ},
        {.addr=0xbd7d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0071, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0170) {
    const struct CPU_State initial_cpu = {.pc=0x24c1, .a=0x21, .x=0x9f, .y=0x15, .sp=0x7a, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x009f, .value=0xe5}, {.addr=0x24c1, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x24c2, .a=0x21, .x=0x9f, .y=0x15, .sp=0x7a, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x009f, .value=0xe5}, {.addr=0x24c1, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x24c1, .value=0x26, .type=IO_READ},
        {.addr=0x24c2, .value=DUMMY, .type=IO_READ},
        {.addr=0x009f, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0171) {
    const struct CPU_State initial_cpu = {.pc=0x516c, .a=0x33, .x=0xd0, .y=0x7b, .sp=0xae, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x00d0, .value=0xf2}, {.addr=0x516c, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x516d, .a=0x32, .x=0xd0, .y=0x7b, .sp=0xae, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x00d0, .value=0xf2}, {.addr=0x516c, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x516c, .value=0x26, .type=IO_READ},
        {.addr=0x516d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d0, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0172) {
    const struct CPU_State initial_cpu = {.pc=0xa2db, .a=0x71, .x=0x2a, .y=0x5a, .sp=0x05, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x002a, .value=0x0d}, {.addr=0xa2db, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xa2dc, .a=0x01, .x=0x2a, .y=0x5a, .sp=0x05, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x002a, .value=0x0d}, {.addr=0xa2db, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xa2db, .value=0x26, .type=IO_READ},
        {.addr=0xa2dc, .value=DUMMY, .type=IO_READ},
        {.addr=0x002a, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0173) {
    const struct CPU_State initial_cpu = {.pc=0xddf3, .a=0xb8, .x=0x20, .y=0x81, .sp=0xa4, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0x6c}, {.addr=0xddf3, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xddf4, .a=0x28, .x=0x20, .y=0x81, .sp=0xa4, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0x6c}, {.addr=0xddf3, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xddf3, .value=0x26, .type=IO_READ},
        {.addr=0xddf4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0120, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0174) {
    const struct CPU_State initial_cpu = {.pc=0x1ea6, .a=0x6b, .x=0x83, .y=0x92, .sp=0x29, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x0083, .value=0xd5}, {.addr=0x1ea6, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x1ea7, .a=0x41, .x=0x83, .y=0x92, .sp=0x29, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x0083, .value=0xd5}, {.addr=0x1ea6, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x1ea6, .value=0x26, .type=IO_READ},
        {.addr=0x1ea7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0083, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0175) {
    const struct CPU_State initial_cpu = {.pc=0x3473, .a=0x90, .x=0x89, .y=0xad, .sp=0x62, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x0089, .value=0x2c}, {.addr=0x3473, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x3474, .a=0x00, .x=0x89, .y=0xad, .sp=0x62, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x0089, .value=0x2c}, {.addr=0x3473, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x3473, .value=0x26, .type=IO_READ},
        {.addr=0x3474, .value=DUMMY, .type=IO_READ},
        {.addr=0x0089, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0176) {
    const struct CPU_State initial_cpu = {.pc=0x9647, .a=0x8f, .x=0xc8, .y=0x1e, .sp=0xc9, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x00c8, .value=0x52}, {.addr=0x9647, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x9648, .a=0x02, .x=0xc8, .y=0x1e, .sp=0xc9, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x00c8, .value=0x52}, {.addr=0x9647, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x9647, .value=0x26, .type=IO_READ},
        {.addr=0x9648, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c8, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0177) {
    const struct CPU_State initial_cpu = {.pc=0x1748, .a=0x95, .x=0x52, .y=0x2c, .sp=0x9d, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0xd3}, {.addr=0x1748, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x1749, .a=0x91, .x=0x52, .y=0x2c, .sp=0x9d, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0xd3}, {.addr=0x1748, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x1748, .value=0x26, .type=IO_READ},
        {.addr=0x1749, .value=DUMMY, .type=IO_READ},
        {.addr=0x0152, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0178) {
    const struct CPU_State initial_cpu = {.pc=0xaca6, .a=0xdd, .x=0x74, .y=0x42, .sp=0xde, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x0074, .value=0xde}, {.addr=0xaca6, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xaca7, .a=0xdc, .x=0x74, .y=0x42, .sp=0xde, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x0074, .value=0xde}, {.addr=0xaca6, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xaca6, .value=0x26, .type=IO_READ},
        {.addr=0xaca7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0074, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0179) {
    const struct CPU_State initial_cpu = {.pc=0x73f7, .a=0xdd, .x=0xdd, .y=0xd4, .sp=0x04, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x01dd, .value=0x28}, {.addr=0x73f7, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x73f8, .a=0x08, .x=0xdd, .y=0xd4, .sp=0x04, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x01dd, .value=0x28}, {.addr=0x73f7, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x73f7, .value=0x26, .type=IO_READ},
        {.addr=0x73f8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dd, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_017A) {
    const struct CPU_State initial_cpu = {.pc=0xcb90, .a=0x99, .x=0x8a, .y=0x43, .sp=0xd8, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x018a, .value=0x41}, {.addr=0xcb90, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xcb91, .a=0x01, .x=0x8a, .y=0x43, .sp=0xd8, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x018a, .value=0x41}, {.addr=0xcb90, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xcb90, .value=0x26, .type=IO_READ},
        {.addr=0xcb91, .value=DUMMY, .type=IO_READ},
        {.addr=0x018a, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_017B) {
    const struct CPU_State initial_cpu = {.pc=0x143a, .a=0x55, .x=0xbc, .y=0x7b, .sp=0xe0, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x00bc, .value=0x9a}, {.addr=0x143a, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x143b, .a=0x10, .x=0xbc, .y=0x7b, .sp=0xe0, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x00bc, .value=0x9a}, {.addr=0x143a, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x143a, .value=0x26, .type=IO_READ},
        {.addr=0x143b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bc, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_017C) {
    const struct CPU_State initial_cpu = {.pc=0xffa9, .a=0x88, .x=0x4a, .y=0x0c, .sp=0x38, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x004a, .value=0x3d}, {.addr=0xffa9, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xffaa, .a=0x08, .x=0x4a, .y=0x0c, .sp=0x38, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x004a, .value=0x3d}, {.addr=0xffa9, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xffa9, .value=0x26, .type=IO_READ},
        {.addr=0xffaa, .value=DUMMY, .type=IO_READ},
        {.addr=0x004a, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_017D) {
    const struct CPU_State initial_cpu = {.pc=0xe2a8, .a=0x39, .x=0x72, .y=0x0f, .sp=0xf1, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x0072, .value=0x9b}, {.addr=0xe2a8, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xe2a9, .a=0x19, .x=0x72, .y=0x0f, .sp=0xf1, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x0072, .value=0x9b}, {.addr=0xe2a8, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xe2a8, .value=0x26, .type=IO_READ},
        {.addr=0xe2a9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0072, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_017E) {
    const struct CPU_State initial_cpu = {.pc=0x2bef, .a=0x24, .x=0x23, .y=0xeb, .sp=0xf0, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x0023, .value=0x89}, {.addr=0x2bef, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x2bf0, .a=0x00, .x=0x23, .y=0xeb, .sp=0xf0, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x0023, .value=0x89}, {.addr=0x2bef, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x2bef, .value=0x26, .type=IO_READ},
        {.addr=0x2bf0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0023, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_017F) {
    const struct CPU_State initial_cpu = {.pc=0xa334, .a=0x7f, .x=0x54, .y=0x31, .sp=0x0f, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x0154, .value=0xf2}, {.addr=0xa334, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xa335, .a=0x72, .x=0x54, .y=0x31, .sp=0x0f, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x0154, .value=0xf2}, {.addr=0xa334, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xa334, .value=0x26, .type=IO_READ},
        {.addr=0xa335, .value=DUMMY, .type=IO_READ},
        {.addr=0x0154, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0180) {
    const struct CPU_State initial_cpu = {.pc=0xb6ca, .a=0x68, .x=0xb8, .y=0x57, .sp=0x93, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x0a}, {.addr=0xb6ca, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xb6cb, .a=0x08, .x=0xb8, .y=0x57, .sp=0x93, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0x0a}, {.addr=0xb6ca, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xb6ca, .value=0x26, .type=IO_READ},
        {.addr=0xb6cb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b8, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0181) {
    const struct CPU_State initial_cpu = {.pc=0x9b76, .a=0x3f, .x=0x10, .y=0xcf, .sp=0xb0, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0x9f}, {.addr=0x9b76, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x9b77, .a=0x1f, .x=0x10, .y=0xcf, .sp=0xb0, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0x9f}, {.addr=0x9b76, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x9b76, .value=0x26, .type=IO_READ},
        {.addr=0x9b77, .value=DUMMY, .type=IO_READ},
        {.addr=0x0110, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0182) {
    const struct CPU_State initial_cpu = {.pc=0x5fcc, .a=0xd7, .x=0x90, .y=0x24, .sp=0x25, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x0090, .value=0xdf}, {.addr=0x5fcc, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x5fcd, .a=0xd7, .x=0x90, .y=0x24, .sp=0x25, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0090, .value=0xdf}, {.addr=0x5fcc, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x5fcc, .value=0x26, .type=IO_READ},
        {.addr=0x5fcd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0090, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0183) {
    const struct CPU_State initial_cpu = {.pc=0xc4fc, .a=0x90, .x=0x94, .y=0x95, .sp=0x25, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0x42}, {.addr=0xc4fc, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xc4fd, .a=0x00, .x=0x94, .y=0x95, .sp=0x25, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0x42}, {.addr=0xc4fc, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xc4fc, .value=0x26, .type=IO_READ},
        {.addr=0xc4fd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0194, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0184) {
    const struct CPU_State initial_cpu = {.pc=0xe35c, .a=0x44, .x=0x36, .y=0x47, .sp=0x5a, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x0036, .value=0xb9}, {.addr=0xe35c, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xe35d, .a=0x00, .x=0x36, .y=0x47, .sp=0x5a, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x0036, .value=0xb9}, {.addr=0xe35c, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xe35c, .value=0x26, .type=IO_READ},
        {.addr=0xe35d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0036, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0185) {
    const struct CPU_State initial_cpu = {.pc=0xc47c, .a=0x9a, .x=0x8d, .y=0xfa, .sp=0xc6, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x008d, .value=0x9f}, {.addr=0xc47c, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xc47d, .a=0x9a, .x=0x8d, .y=0xfa, .sp=0xc6, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x008d, .value=0x9f}, {.addr=0xc47c, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xc47c, .value=0x26, .type=IO_READ},
        {.addr=0xc47d, .value=DUMMY, .type=IO_READ},
        {.addr=0x008d, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0186) {
    const struct CPU_State initial_cpu = {.pc=0x3430, .a=0x60, .x=0x02, .y=0x45, .sp=0x10, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x0102, .value=0x98}, {.addr=0x3430, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x3431, .a=0x00, .x=0x02, .y=0x45, .sp=0x10, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x0102, .value=0x98}, {.addr=0x3430, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x3430, .value=0x26, .type=IO_READ},
        {.addr=0x3431, .value=DUMMY, .type=IO_READ},
        {.addr=0x0102, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0188) {
    const struct CPU_State initial_cpu = {.pc=0xba93, .a=0x2b, .x=0x3e, .y=0x41, .sp=0xfc, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x003e, .value=0xaf}, {.addr=0xba93, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xba94, .a=0x2b, .x=0x3e, .y=0x41, .sp=0xfc, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x003e, .value=0xaf}, {.addr=0xba93, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xba93, .value=0x26, .type=IO_READ},
        {.addr=0xba94, .value=DUMMY, .type=IO_READ},
        {.addr=0x003e, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0189) {
    const struct CPU_State initial_cpu = {.pc=0x5981, .a=0xf0, .x=0x46, .y=0x28, .sp=0xb6, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x0046, .value=0x6d}, {.addr=0x5981, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x5982, .a=0x60, .x=0x46, .y=0x28, .sp=0xb6, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0046, .value=0x6d}, {.addr=0x5981, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x5981, .value=0x26, .type=IO_READ},
        {.addr=0x5982, .value=DUMMY, .type=IO_READ},
        {.addr=0x0046, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_018A) {
    const struct CPU_State initial_cpu = {.pc=0xae77, .a=0x37, .x=0x64, .y=0xed, .sp=0x01, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x0064, .value=0x9b}, {.addr=0xae77, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xae78, .a=0x13, .x=0x64, .y=0xed, .sp=0x01, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x0064, .value=0x9b}, {.addr=0xae77, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xae77, .value=0x26, .type=IO_READ},
        {.addr=0xae78, .value=DUMMY, .type=IO_READ},
        {.addr=0x0064, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_018B) {
    const struct CPU_State initial_cpu = {.pc=0x1db8, .a=0xb9, .x=0x06, .y=0x1b, .sp=0x44, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x17}, {.addr=0x1db8, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x1db9, .a=0x11, .x=0x06, .y=0x1b, .sp=0x44, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0x17}, {.addr=0x1db8, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x1db8, .value=0x26, .type=IO_READ},
        {.addr=0x1db9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0106, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_018C) {
    const struct CPU_State initial_cpu = {.pc=0x6159, .a=0x5c, .x=0x4c, .y=0x55, .sp=0x2c, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x014c, .value=0x36}, {.addr=0x6159, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x615a, .a=0x14, .x=0x4c, .y=0x55, .sp=0x2c, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x014c, .value=0x36}, {.addr=0x6159, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x6159, .value=0x26, .type=IO_READ},
        {.addr=0x615a, .value=DUMMY, .type=IO_READ},
        {.addr=0x014c, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_018D) {
    const struct CPU_State initial_cpu = {.pc=0x3ace, .a=0x66, .x=0x5a, .y=0xe4, .sp=0xfa, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x005a, .value=0xf8}, {.addr=0x3ace, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x3acf, .a=0x60, .x=0x5a, .y=0xe4, .sp=0xfa, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x005a, .value=0xf8}, {.addr=0x3ace, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x3ace, .value=0x26, .type=IO_READ},
        {.addr=0x3acf, .value=DUMMY, .type=IO_READ},
        {.addr=0x005a, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_018E) {
    const struct CPU_State initial_cpu = {.pc=0x26a5, .a=0x6a, .x=0xf8, .y=0x55, .sp=0xcc, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x01f8, .value=0x55}, {.addr=0x26a5, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x26a6, .a=0x40, .x=0xf8, .y=0x55, .sp=0xcc, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x01f8, .value=0x55}, {.addr=0x26a5, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x26a5, .value=0x26, .type=IO_READ},
        {.addr=0x26a6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f8, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_018F) {
    const struct CPU_State initial_cpu = {.pc=0xa39e, .a=0x5f, .x=0x8a, .y=0x21, .sp=0x98, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x018a, .value=0xdc}, {.addr=0xa39e, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xa39f, .a=0x5c, .x=0x8a, .y=0x21, .sp=0x98, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x018a, .value=0xdc}, {.addr=0xa39e, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xa39e, .value=0x26, .type=IO_READ},
        {.addr=0xa39f, .value=DUMMY, .type=IO_READ},
        {.addr=0x018a, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0190) {
    const struct CPU_State initial_cpu = {.pc=0xdfac, .a=0xe9, .x=0x26, .y=0x15, .sp=0xeb, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x0126, .value=0xc9}, {.addr=0xdfac, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xdfad, .a=0xc9, .x=0x26, .y=0x15, .sp=0xeb, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0126, .value=0xc9}, {.addr=0xdfac, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xdfac, .value=0x26, .type=IO_READ},
        {.addr=0xdfad, .value=DUMMY, .type=IO_READ},
        {.addr=0x0126, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0191) {
    const struct CPU_State initial_cpu = {.pc=0x85b4, .a=0x89, .x=0x6e, .y=0x21, .sp=0x0d, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x016e, .value=0x70}, {.addr=0x85b4, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x85b5, .a=0x00, .x=0x6e, .y=0x21, .sp=0x0d, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x016e, .value=0x70}, {.addr=0x85b4, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x85b4, .value=0x26, .type=IO_READ},
        {.addr=0x85b5, .value=DUMMY, .type=IO_READ},
        {.addr=0x016e, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0192) {
    const struct CPU_State initial_cpu = {.pc=0xc05b, .a=0xf5, .x=0x5a, .y=0xf9, .sp=0xa1, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x005a, .value=0x7e}, {.addr=0xc05b, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xc05c, .a=0x74, .x=0x5a, .y=0xf9, .sp=0xa1, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x005a, .value=0x7e}, {.addr=0xc05b, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xc05b, .value=0x26, .type=IO_READ},
        {.addr=0xc05c, .value=DUMMY, .type=IO_READ},
        {.addr=0x005a, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0193) {
    const struct CPU_State initial_cpu = {.pc=0x746f, .a=0x3e, .x=0x4e, .y=0x53, .sp=0xdd, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0xf9}, {.addr=0x746f, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x7470, .a=0x38, .x=0x4e, .y=0x53, .sp=0xdd, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0xf9}, {.addr=0x746f, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x746f, .value=0x26, .type=IO_READ},
        {.addr=0x7470, .value=DUMMY, .type=IO_READ},
        {.addr=0x014e, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0194) {
    const struct CPU_State initial_cpu = {.pc=0x5d45, .a=0x7d, .x=0x7c, .y=0x2f, .sp=0x4c, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0xb3}, {.addr=0x5d45, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x5d46, .a=0x31, .x=0x7c, .y=0x2f, .sp=0x4c, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0xb3}, {.addr=0x5d45, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x5d45, .value=0x26, .type=IO_READ},
        {.addr=0x5d46, .value=DUMMY, .type=IO_READ},
        {.addr=0x017c, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0195) {
    const struct CPU_State initial_cpu = {.pc=0x4eb3, .a=0xea, .x=0x00, .y=0x94, .sp=0xf2, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x0000, .value=0x3f}, {.addr=0x4eb3, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x4eb4, .a=0x2a, .x=0x00, .y=0x94, .sp=0xf2, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0000, .value=0x3f}, {.addr=0x4eb3, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x4eb3, .value=0x26, .type=IO_READ},
        {.addr=0x4eb4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0000, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0196) {
    const struct CPU_State initial_cpu = {.pc=0x5e99, .a=0x85, .x=0x2f, .y=0x12, .sp=0x34, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x002f, .value=0x3a}, {.addr=0x5e99, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x5e9a, .a=0x00, .x=0x2f, .y=0x12, .sp=0x34, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x002f, .value=0x3a}, {.addr=0x5e99, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x5e99, .value=0x26, .type=IO_READ},
        {.addr=0x5e9a, .value=DUMMY, .type=IO_READ},
        {.addr=0x002f, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0197) {
    const struct CPU_State initial_cpu = {.pc=0x4cdf, .a=0x19, .x=0x06, .y=0x77, .sp=0x28, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x43}, {.addr=0x4cdf, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x4ce0, .a=0x01, .x=0x06, .y=0x77, .sp=0x28, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0x43}, {.addr=0x4cdf, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x4cdf, .value=0x26, .type=IO_READ},
        {.addr=0x4ce0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0106, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0198) {
    const struct CPU_State initial_cpu = {.pc=0x7f67, .a=0x95, .x=0x63, .y=0xcf, .sp=0x1d, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x0063, .value=0x6b}, {.addr=0x7f67, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x7f68, .a=0x01, .x=0x63, .y=0xcf, .sp=0x1d, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0063, .value=0x6b}, {.addr=0x7f67, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x7f67, .value=0x26, .type=IO_READ},
        {.addr=0x7f68, .value=DUMMY, .type=IO_READ},
        {.addr=0x0063, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0199) {
    const struct CPU_State initial_cpu = {.pc=0x551f, .a=0xc0, .x=0x1d, .y=0x8a, .sp=0xe1, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x001d, .value=0x46}, {.addr=0x551f, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x5520, .a=0x40, .x=0x1d, .y=0x8a, .sp=0xe1, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x001d, .value=0x46}, {.addr=0x551f, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x551f, .value=0x26, .type=IO_READ},
        {.addr=0x5520, .value=DUMMY, .type=IO_READ},
        {.addr=0x001d, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_019A) {
    const struct CPU_State initial_cpu = {.pc=0xa522, .a=0xc2, .x=0x87, .y=0x0b, .sp=0xad, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x0087, .value=0x0b}, {.addr=0xa522, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xa523, .a=0x02, .x=0x87, .y=0x0b, .sp=0xad, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x0087, .value=0x0b}, {.addr=0xa522, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xa522, .value=0x26, .type=IO_READ},
        {.addr=0xa523, .value=DUMMY, .type=IO_READ},
        {.addr=0x0087, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_019B) {
    const struct CPU_State initial_cpu = {.pc=0x7557, .a=0x42, .x=0x6c, .y=0x49, .sp=0xf8, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x006c, .value=0x46}, {.addr=0x7557, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x7558, .a=0x42, .x=0x6c, .y=0x49, .sp=0xf8, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x006c, .value=0x46}, {.addr=0x7557, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x7557, .value=0x26, .type=IO_READ},
        {.addr=0x7558, .value=DUMMY, .type=IO_READ},
        {.addr=0x006c, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_019C) {
    const struct CPU_State initial_cpu = {.pc=0x6dd2, .a=0xf4, .x=0xa2, .y=0x83, .sp=0xd2, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x00a2, .value=0x84}, {.addr=0x6dd2, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x6dd3, .a=0x84, .x=0xa2, .y=0x83, .sp=0xd2, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x00a2, .value=0x84}, {.addr=0x6dd2, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x6dd2, .value=0x26, .type=IO_READ},
        {.addr=0x6dd3, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a2, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_019D) {
    const struct CPU_State initial_cpu = {.pc=0xeb08, .a=0x4c, .x=0x3a, .y=0xe0, .sp=0xa6, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x003a, .value=0x16}, {.addr=0xeb08, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xeb09, .a=0x04, .x=0x3a, .y=0xe0, .sp=0xa6, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x003a, .value=0x16}, {.addr=0xeb08, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xeb08, .value=0x26, .type=IO_READ},
        {.addr=0xeb09, .value=DUMMY, .type=IO_READ},
        {.addr=0x003a, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_019E) {
    const struct CPU_State initial_cpu = {.pc=0x141e, .a=0x0f, .x=0xba, .y=0x8f, .sp=0x9b, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0xaf}, {.addr=0x141e, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x141f, .a=0x0f, .x=0xba, .y=0x8f, .sp=0x9b, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0xaf}, {.addr=0x141e, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x141e, .value=0x26, .type=IO_READ},
        {.addr=0x141f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ba, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_019F) {
    const struct CPU_State initial_cpu = {.pc=0x0cfc, .a=0xaa, .x=0x20, .y=0xfc, .sp=0x38, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x0020, .value=0xa5}, {.addr=0x0cfc, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x0cfd, .a=0xa0, .x=0x20, .y=0xfc, .sp=0x38, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0020, .value=0xa5}, {.addr=0x0cfc, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x0cfc, .value=0x26, .type=IO_READ},
        {.addr=0x0cfd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0020, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01A0) {
    const struct CPU_State initial_cpu = {.pc=0xa4dc, .a=0x84, .x=0x40, .y=0x30, .sp=0xda, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x0040, .value=0x72}, {.addr=0xa4dc, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xa4dd, .a=0x00, .x=0x40, .y=0x30, .sp=0xda, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x0040, .value=0x72}, {.addr=0xa4dc, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xa4dc, .value=0x26, .type=IO_READ},
        {.addr=0xa4dd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0040, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01A1) {
    const struct CPU_State initial_cpu = {.pc=0xaaa1, .a=0x87, .x=0xba, .y=0x28, .sp=0x89, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x00ba, .value=0x39}, {.addr=0xaaa1, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xaaa2, .a=0x01, .x=0xba, .y=0x28, .sp=0x89, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x00ba, .value=0x39}, {.addr=0xaaa1, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xaaa1, .value=0x26, .type=IO_READ},
        {.addr=0xaaa2, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ba, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01A2) {
    const struct CPU_State initial_cpu = {.pc=0x5717, .a=0x67, .x=0xb8, .y=0x2e, .sp=0x94, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0xbe}, {.addr=0x5717, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x5718, .a=0x26, .x=0xb8, .y=0x2e, .sp=0x94, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0xbe}, {.addr=0x5717, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x5717, .value=0x26, .type=IO_READ},
        {.addr=0x5718, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b8, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01A3) {
    const struct CPU_State initial_cpu = {.pc=0xbf39, .a=0x2d, .x=0xf1, .y=0x8b, .sp=0x0c, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0xb3}, {.addr=0xbf39, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xbf3a, .a=0x21, .x=0xf1, .y=0x8b, .sp=0x0c, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0xb3}, {.addr=0xbf39, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xbf39, .value=0x26, .type=IO_READ},
        {.addr=0xbf3a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f1, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01A4) {
    const struct CPU_State initial_cpu = {.pc=0x446e, .a=0x72, .x=0xb4, .y=0xad, .sp=0xe5, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x00b4, .value=0x77}, {.addr=0x446e, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x446f, .a=0x72, .x=0xb4, .y=0xad, .sp=0xe5, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x00b4, .value=0x77}, {.addr=0x446e, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x446e, .value=0x26, .type=IO_READ},
        {.addr=0x446f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b4, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01A5) {
    const struct CPU_State initial_cpu = {.pc=0xbfd3, .a=0xbd, .x=0xad, .y=0x34, .sp=0x1c, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x01ad, .value=0x0b}, {.addr=0xbfd3, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xbfd4, .a=0x09, .x=0xad, .y=0x34, .sp=0x1c, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x01ad, .value=0x0b}, {.addr=0xbfd3, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xbfd3, .value=0x26, .type=IO_READ},
        {.addr=0xbfd4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ad, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01A6) {
    const struct CPU_State initial_cpu = {.pc=0x2c50, .a=0xca, .x=0x3b, .y=0x83, .sp=0x7c, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0x50}, {.addr=0x2c50, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x2c51, .a=0x40, .x=0x3b, .y=0x83, .sp=0x7c, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0x50}, {.addr=0x2c50, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x2c50, .value=0x26, .type=IO_READ},
        {.addr=0x2c51, .value=DUMMY, .type=IO_READ},
        {.addr=0x013b, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01A7) {
    const struct CPU_State initial_cpu = {.pc=0x3842, .a=0xa4, .x=0x95, .y=0xaf, .sp=0xed, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x0095, .value=0x04}, {.addr=0x3842, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x3843, .a=0x04, .x=0x95, .y=0xaf, .sp=0xed, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0095, .value=0x04}, {.addr=0x3842, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x3842, .value=0x26, .type=IO_READ},
        {.addr=0x3843, .value=DUMMY, .type=IO_READ},
        {.addr=0x0095, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01A8) {
    const struct CPU_State initial_cpu = {.pc=0xe99c, .a=0xb8, .x=0x76, .y=0x49, .sp=0x52, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x0176, .value=0x05}, {.addr=0xe99c, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xe99d, .a=0x00, .x=0x76, .y=0x49, .sp=0x52, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x0176, .value=0x05}, {.addr=0xe99c, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xe99c, .value=0x26, .type=IO_READ},
        {.addr=0xe99d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0176, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01A9) {
    const struct CPU_State initial_cpu = {.pc=0x2791, .a=0xfb, .x=0x90, .y=0x75, .sp=0x8b, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x0090, .value=0x79}, {.addr=0x2791, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x2792, .a=0x79, .x=0x90, .y=0x75, .sp=0x8b, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x0090, .value=0x79}, {.addr=0x2791, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x2791, .value=0x26, .type=IO_READ},
        {.addr=0x2792, .value=DUMMY, .type=IO_READ},
        {.addr=0x0090, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01AA) {
    const struct CPU_State initial_cpu = {.pc=0xaa87, .a=0x79, .x=0xa4, .y=0x56, .sp=0x2c, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x01a4, .value=0xa8}, {.addr=0xaa87, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xaa88, .a=0x28, .x=0xa4, .y=0x56, .sp=0x2c, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01a4, .value=0xa8}, {.addr=0xaa87, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xaa87, .value=0x26, .type=IO_READ},
        {.addr=0xaa88, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a4, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01AB) {
    const struct CPU_State initial_cpu = {.pc=0xe59d, .a=0x17, .x=0xd0, .y=0xdd, .sp=0xd9, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x00d0, .value=0xa4}, {.addr=0xe59d, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xe59e, .a=0x04, .x=0xd0, .y=0xdd, .sp=0xd9, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x00d0, .value=0xa4}, {.addr=0xe59d, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xe59d, .value=0x26, .type=IO_READ},
        {.addr=0xe59e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d0, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01AC) {
    const struct CPU_State initial_cpu = {.pc=0x307c, .a=0xa8, .x=0xb3, .y=0x57, .sp=0x72, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0x33}, {.addr=0x307c, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x307d, .a=0x20, .x=0xb3, .y=0x57, .sp=0x72, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0x33}, {.addr=0x307c, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x307c, .value=0x26, .type=IO_READ},
        {.addr=0x307d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b3, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01AD) {
    const struct CPU_State initial_cpu = {.pc=0x770a, .a=0x89, .x=0xad, .y=0xa9, .sp=0x27, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x00ad, .value=0x2d}, {.addr=0x770a, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x770b, .a=0x09, .x=0xad, .y=0xa9, .sp=0x27, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x00ad, .value=0x2d}, {.addr=0x770a, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x770a, .value=0x26, .type=IO_READ},
        {.addr=0x770b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ad, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01AE) {
    const struct CPU_State initial_cpu = {.pc=0x6d5b, .a=0xfc, .x=0x34, .y=0x4e, .sp=0x84, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x0034, .value=0xbe}, {.addr=0x6d5b, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x6d5c, .a=0xbc, .x=0x34, .y=0x4e, .sp=0x84, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0034, .value=0xbe}, {.addr=0x6d5b, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x6d5b, .value=0x26, .type=IO_READ},
        {.addr=0x6d5c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0034, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01AF) {
    const struct CPU_State initial_cpu = {.pc=0x36e7, .a=0xa5, .x=0x01, .y=0x77, .sp=0x54, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x0101, .value=0x2d}, {.addr=0x36e7, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x36e8, .a=0x25, .x=0x01, .y=0x77, .sp=0x54, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x0101, .value=0x2d}, {.addr=0x36e7, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x36e7, .value=0x26, .type=IO_READ},
        {.addr=0x36e8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0101, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01B0) {
    const struct CPU_State initial_cpu = {.pc=0xfc79, .a=0x42, .x=0x78, .y=0xd4, .sp=0x14, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0x8a}, {.addr=0xfc79, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xfc7a, .a=0x02, .x=0x78, .y=0xd4, .sp=0x14, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0x8a}, {.addr=0xfc79, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xfc79, .value=0x26, .type=IO_READ},
        {.addr=0xfc7a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0178, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01B1) {
    const struct CPU_State initial_cpu = {.pc=0x9324, .a=0x0d, .x=0xd0, .y=0x28, .sp=0x03, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x00d0, .value=0xf7}, {.addr=0x9324, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x9325, .a=0x05, .x=0xd0, .y=0x28, .sp=0x03, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x00d0, .value=0xf7}, {.addr=0x9324, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x9324, .value=0x26, .type=IO_READ},
        {.addr=0x9325, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d0, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x8ca2, .a=0xcc, .x=0xa9, .y=0x20, .sp=0x80, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x01a9, .value=0xe9}, {.addr=0x8ca2, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x8ca3, .a=0xc8, .x=0xa9, .y=0x20, .sp=0x80, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x01a9, .value=0xe9}, {.addr=0x8ca2, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x8ca2, .value=0x26, .type=IO_READ},
        {.addr=0x8ca3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a9, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01B3) {
    const struct CPU_State initial_cpu = {.pc=0x8bfa, .a=0x2a, .x=0x5b, .y=0x4f, .sp=0xe0, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x015b, .value=0xed}, {.addr=0x8bfa, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x8bfb, .a=0x28, .x=0x5b, .y=0x4f, .sp=0xe0, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x015b, .value=0xed}, {.addr=0x8bfa, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x8bfa, .value=0x26, .type=IO_READ},
        {.addr=0x8bfb, .value=DUMMY, .type=IO_READ},
        {.addr=0x015b, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01B4) {
    const struct CPU_State initial_cpu = {.pc=0x5910, .a=0x1d, .x=0xf6, .y=0x8b, .sp=0x43, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x01f6, .value=0x0a}, {.addr=0x5910, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x5911, .a=0x08, .x=0xf6, .y=0x8b, .sp=0x43, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x01f6, .value=0x0a}, {.addr=0x5910, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x5910, .value=0x26, .type=IO_READ},
        {.addr=0x5911, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f6, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01B5) {
    const struct CPU_State initial_cpu = {.pc=0xe917, .a=0xad, .x=0xb0, .y=0x88, .sp=0x7a, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x00b0, .value=0xe1}, {.addr=0xe917, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xe918, .a=0xa1, .x=0xb0, .y=0x88, .sp=0x7a, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x00b0, .value=0xe1}, {.addr=0xe917, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xe917, .value=0x26, .type=IO_READ},
        {.addr=0xe918, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b0, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01B6) {
    const struct CPU_State initial_cpu = {.pc=0xd8af, .a=0xc2, .x=0xc6, .y=0xf3, .sp=0x31, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x01c6, .value=0x63}, {.addr=0xd8af, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xd8b0, .a=0x42, .x=0xc6, .y=0xf3, .sp=0x31, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01c6, .value=0x63}, {.addr=0xd8af, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xd8af, .value=0x26, .type=IO_READ},
        {.addr=0xd8b0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c6, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01B7) {
    const struct CPU_State initial_cpu = {.pc=0xf58b, .a=0xc0, .x=0x65, .y=0x89, .sp=0x8e, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x0165, .value=0xa7}, {.addr=0xf58b, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xf58c, .a=0x80, .x=0x65, .y=0x89, .sp=0x8e, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x0165, .value=0xa7}, {.addr=0xf58b, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xf58b, .value=0x26, .type=IO_READ},
        {.addr=0xf58c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0165, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01B8) {
    const struct CPU_State initial_cpu = {.pc=0x3b6a, .a=0x9d, .x=0x58, .y=0xf8, .sp=0xed, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0x33}, {.addr=0x3b6a, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x3b6b, .a=0x11, .x=0x58, .y=0xf8, .sp=0xed, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0x33}, {.addr=0x3b6a, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x3b6a, .value=0x26, .type=IO_READ},
        {.addr=0x3b6b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0158, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01B9) {
    const struct CPU_State initial_cpu = {.pc=0xc953, .a=0x56, .x=0x45, .y=0x06, .sp=0x6b, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x0045, .value=0xa6}, {.addr=0xc953, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xc954, .a=0x06, .x=0x45, .y=0x06, .sp=0x6b, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0045, .value=0xa6}, {.addr=0xc953, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xc953, .value=0x26, .type=IO_READ},
        {.addr=0xc954, .value=DUMMY, .type=IO_READ},
        {.addr=0x0045, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01BA) {
    const struct CPU_State initial_cpu = {.pc=0x76f7, .a=0x84, .x=0x51, .y=0xb5, .sp=0xb5, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x0051, .value=0xfb}, {.addr=0x76f7, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x76f8, .a=0x80, .x=0x51, .y=0xb5, .sp=0xb5, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0051, .value=0xfb}, {.addr=0x76f7, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x76f7, .value=0x26, .type=IO_READ},
        {.addr=0x76f8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0051, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01BB) {
    const struct CPU_State initial_cpu = {.pc=0x72b5, .a=0x63, .x=0x06, .y=0x5c, .sp=0x0c, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x0006, .value=0x33}, {.addr=0x72b5, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x72b6, .a=0x23, .x=0x06, .y=0x5c, .sp=0x0c, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0006, .value=0x33}, {.addr=0x72b5, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x72b5, .value=0x26, .type=IO_READ},
        {.addr=0x72b6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0006, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01BC) {
    const struct CPU_State initial_cpu = {.pc=0x9d69, .a=0xa8, .x=0x0c, .y=0x3e, .sp=0x17, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x000c, .value=0xbe}, {.addr=0x9d69, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x9d6a, .a=0xa8, .x=0x0c, .y=0x3e, .sp=0x17, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x000c, .value=0xbe}, {.addr=0x9d69, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x9d69, .value=0x26, .type=IO_READ},
        {.addr=0x9d6a, .value=DUMMY, .type=IO_READ},
        {.addr=0x000c, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01BD) {
    const struct CPU_State initial_cpu = {.pc=0xe1dc, .a=0xe7, .x=0xba, .y=0x50, .sp=0xc4, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x00ba, .value=0xd4}, {.addr=0xe1dc, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xe1dd, .a=0xc4, .x=0xba, .y=0x50, .sp=0xc4, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x00ba, .value=0xd4}, {.addr=0xe1dc, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xe1dc, .value=0x26, .type=IO_READ},
        {.addr=0xe1dd, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ba, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01BE) {
    const struct CPU_State initial_cpu = {.pc=0x50f7, .a=0xb6, .x=0x81, .y=0x29, .sp=0x2e, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0xd4}, {.addr=0x50f7, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x50f8, .a=0x94, .x=0x81, .y=0x29, .sp=0x2e, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0xd4}, {.addr=0x50f7, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x50f7, .value=0x26, .type=IO_READ},
        {.addr=0x50f8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0181, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01BF) {
    const struct CPU_State initial_cpu = {.pc=0x8e54, .a=0x28, .x=0x61, .y=0x74, .sp=0xe5, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0xfb}, {.addr=0x8e54, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x8e55, .a=0x28, .x=0x61, .y=0x74, .sp=0xe5, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0xfb}, {.addr=0x8e54, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x8e54, .value=0x26, .type=IO_READ},
        {.addr=0x8e55, .value=DUMMY, .type=IO_READ},
        {.addr=0x0161, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01C0) {
    const struct CPU_State initial_cpu = {.pc=0x6e29, .a=0xdc, .x=0x71, .y=0x9a, .sp=0x68, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0171, .value=0xe6}, {.addr=0x6e29, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x6e2a, .a=0xc4, .x=0x71, .y=0x9a, .sp=0x68, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0171, .value=0xe6}, {.addr=0x6e29, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x6e29, .value=0x26, .type=IO_READ},
        {.addr=0x6e2a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0171, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x3c82, .a=0x1a, .x=0x36, .y=0x19, .sp=0xd1, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x0036, .value=0x88}, {.addr=0x3c82, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x3c83, .a=0x08, .x=0x36, .y=0x19, .sp=0xd1, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x0036, .value=0x88}, {.addr=0x3c82, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x3c82, .value=0x26, .type=IO_READ},
        {.addr=0x3c83, .value=DUMMY, .type=IO_READ},
        {.addr=0x0036, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01C2) {
    const struct CPU_State initial_cpu = {.pc=0x4e0e, .a=0x2d, .x=0xec, .y=0xf5, .sp=0x11, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x01ec, .value=0x20}, {.addr=0x4e0e, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x4e0f, .a=0x20, .x=0xec, .y=0xf5, .sp=0x11, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x01ec, .value=0x20}, {.addr=0x4e0e, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x4e0e, .value=0x26, .type=IO_READ},
        {.addr=0x4e0f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ec, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01C3) {
    const struct CPU_State initial_cpu = {.pc=0x6857, .a=0x39, .x=0x5f, .y=0x40, .sp=0x73, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0x75}, {.addr=0x6857, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x6858, .a=0x31, .x=0x5f, .y=0x40, .sp=0x73, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0x75}, {.addr=0x6857, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x6857, .value=0x26, .type=IO_READ},
        {.addr=0x6858, .value=DUMMY, .type=IO_READ},
        {.addr=0x015f, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01C4) {
    const struct CPU_State initial_cpu = {.pc=0xf616, .a=0x5f, .x=0x29, .y=0xd2, .sp=0x93, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x0129, .value=0xaf}, {.addr=0xf616, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xf617, .a=0x0f, .x=0x29, .y=0xd2, .sp=0x93, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x0129, .value=0xaf}, {.addr=0xf616, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xf616, .value=0x26, .type=IO_READ},
        {.addr=0xf617, .value=DUMMY, .type=IO_READ},
        {.addr=0x0129, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x0fd8, .a=0x01, .x=0xae, .y=0x35, .sp=0xd9, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x01ae, .value=0x07}, {.addr=0x0fd8, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x0fd9, .a=0x01, .x=0xae, .y=0x35, .sp=0xd9, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01ae, .value=0x07}, {.addr=0x0fd8, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x0fd8, .value=0x26, .type=IO_READ},
        {.addr=0x0fd9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ae, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01C6) {
    const struct CPU_State initial_cpu = {.pc=0x10ce, .a=0xf7, .x=0x8d, .y=0xaa, .sp=0x95, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x018d, .value=0xe5}, {.addr=0x10ce, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x10cf, .a=0xe5, .x=0x8d, .y=0xaa, .sp=0x95, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x018d, .value=0xe5}, {.addr=0x10ce, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x10ce, .value=0x26, .type=IO_READ},
        {.addr=0x10cf, .value=DUMMY, .type=IO_READ},
        {.addr=0x018d, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01C7) {
    const struct CPU_State initial_cpu = {.pc=0x213b, .a=0xc8, .x=0x6b, .y=0x7a, .sp=0xa6, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0xca}, {.addr=0x213b, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x213c, .a=0xc8, .x=0x6b, .y=0x7a, .sp=0xa6, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0xca}, {.addr=0x213b, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x213b, .value=0x26, .type=IO_READ},
        {.addr=0x213c, .value=DUMMY, .type=IO_READ},
        {.addr=0x016b, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01C8) {
    const struct CPU_State initial_cpu = {.pc=0xbac7, .a=0x1b, .x=0x91, .y=0x3f, .sp=0x34, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x0091, .value=0xa4}, {.addr=0xbac7, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xbac8, .a=0x00, .x=0x91, .y=0x3f, .sp=0x34, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x0091, .value=0xa4}, {.addr=0xbac7, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xbac7, .value=0x26, .type=IO_READ},
        {.addr=0xbac8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0091, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01C9) {
    const struct CPU_State initial_cpu = {.pc=0x58c0, .a=0x81, .x=0xf6, .y=0xe1, .sp=0xf0, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x01f6, .value=0x56}, {.addr=0x58c0, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x58c1, .a=0x00, .x=0xf6, .y=0xe1, .sp=0xf0, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x01f6, .value=0x56}, {.addr=0x58c0, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x58c0, .value=0x26, .type=IO_READ},
        {.addr=0x58c1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f6, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01CA) {
    const struct CPU_State initial_cpu = {.pc=0xa497, .a=0x01, .x=0x30, .y=0xa3, .sp=0xe2, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x0030, .value=0x5c}, {.addr=0xa497, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xa498, .a=0x00, .x=0x30, .y=0xa3, .sp=0xe2, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x0030, .value=0x5c}, {.addr=0xa497, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xa497, .value=0x26, .type=IO_READ},
        {.addr=0xa498, .value=DUMMY, .type=IO_READ},
        {.addr=0x0030, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01CB) {
    const struct CPU_State initial_cpu = {.pc=0x23e8, .a=0x03, .x=0xa0, .y=0x32, .sp=0x73, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x00a0, .value=0x1c}, {.addr=0x23e8, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x23e9, .a=0x00, .x=0xa0, .y=0x32, .sp=0x73, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x00a0, .value=0x1c}, {.addr=0x23e8, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x23e8, .value=0x26, .type=IO_READ},
        {.addr=0x23e9, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a0, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01CC) {
    const struct CPU_State initial_cpu = {.pc=0x2744, .a=0x97, .x=0x3c, .y=0xce, .sp=0x98, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x08}, {.addr=0x2744, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x2745, .a=0x00, .x=0x3c, .y=0xce, .sp=0x98, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0x08}, {.addr=0x2744, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x2744, .value=0x26, .type=IO_READ},
        {.addr=0x2745, .value=DUMMY, .type=IO_READ},
        {.addr=0x013c, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01CD) {
    const struct CPU_State initial_cpu = {.pc=0xe829, .a=0x3f, .x=0x7f, .y=0xf1, .sp=0x9b, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x007f, .value=0x44}, {.addr=0xe829, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xe82a, .a=0x04, .x=0x7f, .y=0xf1, .sp=0x9b, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x007f, .value=0x44}, {.addr=0xe829, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xe829, .value=0x26, .type=IO_READ},
        {.addr=0xe82a, .value=DUMMY, .type=IO_READ},
        {.addr=0x007f, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01CE) {
    const struct CPU_State initial_cpu = {.pc=0x3e34, .a=0x4c, .x=0x0e, .y=0xff, .sp=0xc8, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x000e, .value=0x5f}, {.addr=0x3e34, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x3e35, .a=0x4c, .x=0x0e, .y=0xff, .sp=0xc8, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x000e, .value=0x5f}, {.addr=0x3e34, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x3e34, .value=0x26, .type=IO_READ},
        {.addr=0x3e35, .value=DUMMY, .type=IO_READ},
        {.addr=0x000e, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x161d, .a=0xfc, .x=0xd8, .y=0x90, .sp=0x86, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x00d8, .value=0x6f}, {.addr=0x161d, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x161e, .a=0x6c, .x=0xd8, .y=0x90, .sp=0x86, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x00d8, .value=0x6f}, {.addr=0x161d, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x161d, .value=0x26, .type=IO_READ},
        {.addr=0x161e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d8, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01D0) {
    const struct CPU_State initial_cpu = {.pc=0x6f9b, .a=0xd6, .x=0x53, .y=0xfe, .sp=0xa5, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0x2f}, {.addr=0x6f9b, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x6f9c, .a=0x06, .x=0x53, .y=0xfe, .sp=0xa5, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0x2f}, {.addr=0x6f9b, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x6f9b, .value=0x26, .type=IO_READ},
        {.addr=0x6f9c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0153, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01D1) {
    const struct CPU_State initial_cpu = {.pc=0xfba9, .a=0x7d, .x=0xd2, .y=0xaa, .sp=0x5f, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x01d2, .value=0xb0}, {.addr=0xfba9, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xfbaa, .a=0x30, .x=0xd2, .y=0xaa, .sp=0x5f, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01d2, .value=0xb0}, {.addr=0xfba9, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xfba9, .value=0x26, .type=IO_READ},
        {.addr=0xfbaa, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d2, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x3547, .a=0xe3, .x=0x4d, .y=0xbe, .sp=0xa0, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x004d, .value=0xb5}, {.addr=0x3547, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x3548, .a=0xa1, .x=0x4d, .y=0xbe, .sp=0xa0, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x004d, .value=0xb5}, {.addr=0x3547, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x3547, .value=0x26, .type=IO_READ},
        {.addr=0x3548, .value=DUMMY, .type=IO_READ},
        {.addr=0x004d, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01D3) {
    const struct CPU_State initial_cpu = {.pc=0x2f36, .a=0x61, .x=0x5f, .y=0xdb, .sp=0x6d, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x005f, .value=0x6e}, {.addr=0x2f36, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x2f37, .a=0x60, .x=0x5f, .y=0xdb, .sp=0x6d, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x005f, .value=0x6e}, {.addr=0x2f36, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x2f36, .value=0x26, .type=IO_READ},
        {.addr=0x2f37, .value=DUMMY, .type=IO_READ},
        {.addr=0x005f, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01D4) {
    const struct CPU_State initial_cpu = {.pc=0xd037, .a=0xa8, .x=0x2b, .y=0x35, .sp=0xa6, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x002b, .value=0xfe}, {.addr=0xd037, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xd038, .a=0xa8, .x=0x2b, .y=0x35, .sp=0xa6, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x002b, .value=0xfe}, {.addr=0xd037, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xd037, .value=0x26, .type=IO_READ},
        {.addr=0xd038, .value=DUMMY, .type=IO_READ},
        {.addr=0x002b, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01D5) {
    const struct CPU_State initial_cpu = {.pc=0xb3be, .a=0x92, .x=0x95, .y=0xaa, .sp=0xcf, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0x46}, {.addr=0xb3be, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xb3bf, .a=0x02, .x=0x95, .y=0xaa, .sp=0xcf, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0x46}, {.addr=0xb3be, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xb3be, .value=0x26, .type=IO_READ},
        {.addr=0xb3bf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0195, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01D7) {
    const struct CPU_State initial_cpu = {.pc=0x50e6, .a=0x0d, .x=0xa3, .y=0x66, .sp=0xbc, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x01a3, .value=0xbe}, {.addr=0x50e6, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x50e7, .a=0x0c, .x=0xa3, .y=0x66, .sp=0xbc, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x01a3, .value=0xbe}, {.addr=0x50e6, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x50e6, .value=0x26, .type=IO_READ},
        {.addr=0x50e7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a3, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01D8) {
    const struct CPU_State initial_cpu = {.pc=0xfa8b, .a=0x69, .x=0xaf, .y=0x49, .sp=0x6b, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x00af, .value=0x0c}, {.addr=0xfa8b, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xfa8c, .a=0x08, .x=0xaf, .y=0x49, .sp=0x6b, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x00af, .value=0x0c}, {.addr=0xfa8b, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xfa8b, .value=0x26, .type=IO_READ},
        {.addr=0xfa8c, .value=DUMMY, .type=IO_READ},
        {.addr=0x00af, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01D9) {
    const struct CPU_State initial_cpu = {.pc=0x48bd, .a=0x42, .x=0xd6, .y=0x7f, .sp=0x64, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x00d6, .value=0x5c}, {.addr=0x48bd, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x48be, .a=0x40, .x=0xd6, .y=0x7f, .sp=0x64, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x00d6, .value=0x5c}, {.addr=0x48bd, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x48bd, .value=0x26, .type=IO_READ},
        {.addr=0x48be, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d6, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01DA) {
    const struct CPU_State initial_cpu = {.pc=0x9eea, .a=0x9e, .x=0xb3, .y=0x56, .sp=0xb6, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x00b3, .value=0x38}, {.addr=0x9eea, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x9eeb, .a=0x18, .x=0xb3, .y=0x56, .sp=0xb6, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x00b3, .value=0x38}, {.addr=0x9eea, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x9eea, .value=0x26, .type=IO_READ},
        {.addr=0x9eeb, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b3, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x8484, .a=0x3b, .x=0xb8, .y=0x47, .sp=0x2f, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x00b8, .value=0x37}, {.addr=0x8484, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x8485, .a=0x33, .x=0xb8, .y=0x47, .sp=0x2f, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x00b8, .value=0x37}, {.addr=0x8484, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x8484, .value=0x26, .type=IO_READ},
        {.addr=0x8485, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b8, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x9b56, .a=0x36, .x=0xc2, .y=0x88, .sp=0x43, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x00c2, .value=0xa8}, {.addr=0x9b56, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x9b57, .a=0x20, .x=0xc2, .y=0x88, .sp=0x43, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x00c2, .value=0xa8}, {.addr=0x9b56, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x9b56, .value=0x26, .type=IO_READ},
        {.addr=0x9b57, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c2, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x3a94, .a=0x89, .x=0x98, .y=0x7a, .sp=0x90, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x0198, .value=0x3e}, {.addr=0x3a94, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x3a95, .a=0x08, .x=0x98, .y=0x7a, .sp=0x90, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x0198, .value=0x3e}, {.addr=0x3a94, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x3a94, .value=0x26, .type=IO_READ},
        {.addr=0x3a95, .value=DUMMY, .type=IO_READ},
        {.addr=0x0198, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x96b0, .a=0x5a, .x=0x3a, .y=0x8c, .sp=0x17, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x003a, .value=0xd8}, {.addr=0x96b0, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x96b1, .a=0x58, .x=0x3a, .y=0x8c, .sp=0x17, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x003a, .value=0xd8}, {.addr=0x96b0, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x96b0, .value=0x26, .type=IO_READ},
        {.addr=0x96b1, .value=DUMMY, .type=IO_READ},
        {.addr=0x003a, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01DF) {
    const struct CPU_State initial_cpu = {.pc=0x9f33, .a=0x40, .x=0xaa, .y=0x2c, .sp=0xad, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x00aa, .value=0x4d}, {.addr=0x9f33, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x9f34, .a=0x40, .x=0xaa, .y=0x2c, .sp=0xad, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x00aa, .value=0x4d}, {.addr=0x9f33, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x9f33, .value=0x26, .type=IO_READ},
        {.addr=0x9f34, .value=DUMMY, .type=IO_READ},
        {.addr=0x00aa, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01E0) {
    const struct CPU_State initial_cpu = {.pc=0x5376, .a=0x61, .x=0xa8, .y=0xc9, .sp=0x76, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0xa9}, {.addr=0x5376, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x5377, .a=0x21, .x=0xa8, .y=0xc9, .sp=0x76, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0xa9}, {.addr=0x5376, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x5376, .value=0x26, .type=IO_READ},
        {.addr=0x5377, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a8, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x4583, .a=0x36, .x=0x57, .y=0x30, .sp=0x08, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x0057, .value=0x5b}, {.addr=0x4583, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x4584, .a=0x12, .x=0x57, .y=0x30, .sp=0x08, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0057, .value=0x5b}, {.addr=0x4583, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x4583, .value=0x26, .type=IO_READ},
        {.addr=0x4584, .value=DUMMY, .type=IO_READ},
        {.addr=0x0057, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01E2) {
    const struct CPU_State initial_cpu = {.pc=0x82d9, .a=0xb5, .x=0xe3, .y=0x34, .sp=0x23, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x00e3, .value=0xea}, {.addr=0x82d9, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x82da, .a=0xa0, .x=0xe3, .y=0x34, .sp=0x23, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x00e3, .value=0xea}, {.addr=0x82d9, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x82d9, .value=0x26, .type=IO_READ},
        {.addr=0x82da, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e3, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01E3) {
    const struct CPU_State initial_cpu = {.pc=0x7499, .a=0xea, .x=0x09, .y=0x19, .sp=0xc0, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x0009, .value=0xe8}, {.addr=0x7499, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x749a, .a=0xe8, .x=0x09, .y=0x19, .sp=0xc0, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x0009, .value=0xe8}, {.addr=0x7499, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x7499, .value=0x26, .type=IO_READ},
        {.addr=0x749a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0009, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01E4) {
    const struct CPU_State initial_cpu = {.pc=0x1164, .a=0x99, .x=0xff, .y=0x74, .sp=0xf0, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x01ff, .value=0x23}, {.addr=0x1164, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x1165, .a=0x01, .x=0xff, .y=0x74, .sp=0xf0, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x01ff, .value=0x23}, {.addr=0x1164, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x1164, .value=0x26, .type=IO_READ},
        {.addr=0x1165, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ff, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01E5) {
    const struct CPU_State initial_cpu = {.pc=0xdd93, .a=0x6e, .x=0xc7, .y=0x50, .sp=0x01, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x00c7, .value=0x83}, {.addr=0xdd93, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xdd94, .a=0x02, .x=0xc7, .y=0x50, .sp=0x01, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x00c7, .value=0x83}, {.addr=0xdd93, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xdd93, .value=0x26, .type=IO_READ},
        {.addr=0xdd94, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c7, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01E6) {
    const struct CPU_State initial_cpu = {.pc=0x4212, .a=0xd0, .x=0x1f, .y=0xdd, .sp=0x3a, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x001f, .value=0x4a}, {.addr=0x4212, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x4213, .a=0x40, .x=0x1f, .y=0xdd, .sp=0x3a, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x001f, .value=0x4a}, {.addr=0x4212, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x4212, .value=0x26, .type=IO_READ},
        {.addr=0x4213, .value=DUMMY, .type=IO_READ},
        {.addr=0x001f, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x04ba, .a=0x44, .x=0x9f, .y=0xae, .sp=0x30, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x019f, .value=0x55}, {.addr=0x04ba, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x04bb, .a=0x44, .x=0x9f, .y=0xae, .sp=0x30, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x019f, .value=0x55}, {.addr=0x04ba, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x04ba, .value=0x26, .type=IO_READ},
        {.addr=0x04bb, .value=DUMMY, .type=IO_READ},
        {.addr=0x019f, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01E9) {
    const struct CPU_State initial_cpu = {.pc=0xed05, .a=0xeb, .x=0x06, .y=0x70, .sp=0xc7, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x0006, .value=0x6d}, {.addr=0xed05, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xed06, .a=0x69, .x=0x06, .y=0x70, .sp=0xc7, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0006, .value=0x6d}, {.addr=0xed05, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xed05, .value=0x26, .type=IO_READ},
        {.addr=0xed06, .value=DUMMY, .type=IO_READ},
        {.addr=0x0006, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01EA) {
    const struct CPU_State initial_cpu = {.pc=0x063a, .a=0x1c, .x=0xad, .y=0xd2, .sp=0x6c, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x00ad, .value=0xd3}, {.addr=0x063a, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x063b, .a=0x10, .x=0xad, .y=0xd2, .sp=0x6c, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x00ad, .value=0xd3}, {.addr=0x063a, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x063a, .value=0x26, .type=IO_READ},
        {.addr=0x063b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ad, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01EB) {
    const struct CPU_State initial_cpu = {.pc=0x0283, .a=0xf4, .x=0xa9, .y=0x21, .sp=0x81, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x00a9, .value=0xbc}, {.addr=0x0283, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x0284, .a=0xb4, .x=0xa9, .y=0x21, .sp=0x81, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x00a9, .value=0xbc}, {.addr=0x0283, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x0283, .value=0x26, .type=IO_READ},
        {.addr=0x0284, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a9, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01EC) {
    const struct CPU_State initial_cpu = {.pc=0x8179, .a=0x0b, .x=0x4e, .y=0x68, .sp=0x16, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0x06}, {.addr=0x8179, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x817a, .a=0x02, .x=0x4e, .y=0x68, .sp=0x16, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0x06}, {.addr=0x8179, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x8179, .value=0x26, .type=IO_READ},
        {.addr=0x817a, .value=DUMMY, .type=IO_READ},
        {.addr=0x014e, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01EE) {
    const struct CPU_State initial_cpu = {.pc=0x91fe, .a=0x36, .x=0x1d, .y=0x42, .sp=0x1c, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x17}, {.addr=0x91fe, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x91ff, .a=0x16, .x=0x1d, .y=0x42, .sp=0x1c, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0x17}, {.addr=0x91fe, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x91fe, .value=0x26, .type=IO_READ},
        {.addr=0x91ff, .value=DUMMY, .type=IO_READ},
        {.addr=0x011d, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01EF) {
    const struct CPU_State initial_cpu = {.pc=0xb331, .a=0x13, .x=0xd1, .y=0xca, .sp=0x44, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0x27}, {.addr=0xb331, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xb332, .a=0x03, .x=0xd1, .y=0xca, .sp=0x44, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0x27}, {.addr=0xb331, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xb331, .value=0x26, .type=IO_READ},
        {.addr=0xb332, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d1, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01F0) {
    const struct CPU_State initial_cpu = {.pc=0x9a87, .a=0x4b, .x=0xf5, .y=0x2f, .sp=0x05, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x01f5, .value=0x34}, {.addr=0x9a87, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x9a88, .a=0x00, .x=0xf5, .y=0x2f, .sp=0x05, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x01f5, .value=0x34}, {.addr=0x9a87, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x9a87, .value=0x26, .type=IO_READ},
        {.addr=0x9a88, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f5, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01F1) {
    const struct CPU_State initial_cpu = {.pc=0x2e31, .a=0x44, .x=0x0e, .y=0xb5, .sp=0x27, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x000e, .value=0x4c}, {.addr=0x2e31, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x2e32, .a=0x44, .x=0x0e, .y=0xb5, .sp=0x27, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x000e, .value=0x4c}, {.addr=0x2e31, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x2e31, .value=0x26, .type=IO_READ},
        {.addr=0x2e32, .value=DUMMY, .type=IO_READ},
        {.addr=0x000e, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01F2) {
    const struct CPU_State initial_cpu = {.pc=0xe126, .a=0x58, .x=0x95, .y=0x50, .sp=0x10, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x0095, .value=0x5f}, {.addr=0xe126, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xe127, .a=0x58, .x=0x95, .y=0x50, .sp=0x10, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0095, .value=0x5f}, {.addr=0xe126, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xe126, .value=0x26, .type=IO_READ},
        {.addr=0xe127, .value=DUMMY, .type=IO_READ},
        {.addr=0x0095, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01F3) {
    const struct CPU_State initial_cpu = {.pc=0x91ec, .a=0x07, .x=0x02, .y=0x63, .sp=0xda, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x0002, .value=0xfb}, {.addr=0x91ec, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x91ed, .a=0x03, .x=0x02, .y=0x63, .sp=0xda, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0002, .value=0xfb}, {.addr=0x91ec, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x91ec, .value=0x26, .type=IO_READ},
        {.addr=0x91ed, .value=DUMMY, .type=IO_READ},
        {.addr=0x0002, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01F4) {
    const struct CPU_State initial_cpu = {.pc=0x83c2, .a=0xd9, .x=0xd5, .y=0xac, .sp=0x4f, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x01d5, .value=0x7f}, {.addr=0x83c2, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x83c3, .a=0x59, .x=0xd5, .y=0xac, .sp=0x4f, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x01d5, .value=0x7f}, {.addr=0x83c2, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x83c2, .value=0x26, .type=IO_READ},
        {.addr=0x83c3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d5, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01F5) {
    const struct CPU_State initial_cpu = {.pc=0x711e, .a=0xd1, .x=0x30, .y=0x26, .sp=0x87, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x0130, .value=0x82}, {.addr=0x711e, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x711f, .a=0x80, .x=0x30, .y=0x26, .sp=0x87, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0130, .value=0x82}, {.addr=0x711e, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x711e, .value=0x26, .type=IO_READ},
        {.addr=0x711f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0130, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01F6) {
    const struct CPU_State initial_cpu = {.pc=0x9eef, .a=0x5d, .x=0x95, .y=0x0d, .sp=0xe0, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0x1a}, {.addr=0x9eef, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x9ef0, .a=0x18, .x=0x95, .y=0x0d, .sp=0xe0, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0x1a}, {.addr=0x9eef, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x9eef, .value=0x26, .type=IO_READ},
        {.addr=0x9ef0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0195, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01F7) {
    const struct CPU_State initial_cpu = {.pc=0x32dc, .a=0x92, .x=0xde, .y=0x1f, .sp=0xeb, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x00de, .value=0x03}, {.addr=0x32dc, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x32dd, .a=0x02, .x=0xde, .y=0x1f, .sp=0xeb, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x00de, .value=0x03}, {.addr=0x32dc, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x32dc, .value=0x26, .type=IO_READ},
        {.addr=0x32dd, .value=DUMMY, .type=IO_READ},
        {.addr=0x00de, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01F8) {
    const struct CPU_State initial_cpu = {.pc=0xa255, .a=0x62, .x=0xd1, .y=0x33, .sp=0x27, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0xb4}, {.addr=0xa255, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xa256, .a=0x20, .x=0xd1, .y=0x33, .sp=0x27, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0xb4}, {.addr=0xa255, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xa255, .value=0x26, .type=IO_READ},
        {.addr=0xa256, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d1, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x1be5, .a=0x21, .x=0x32, .y=0xee, .sp=0xda, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x0032, .value=0x33}, {.addr=0x1be5, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x1be6, .a=0x21, .x=0x32, .y=0xee, .sp=0xda, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0032, .value=0x33}, {.addr=0x1be5, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x1be5, .value=0x26, .type=IO_READ},
        {.addr=0x1be6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0032, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01FA) {
    const struct CPU_State initial_cpu = {.pc=0x142b, .a=0x1a, .x=0x04, .y=0xf2, .sp=0x8f, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0x5f}, {.addr=0x142b, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x142c, .a=0x1a, .x=0x04, .y=0xf2, .sp=0x8f, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0x5f}, {.addr=0x142b, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x142b, .value=0x26, .type=IO_READ},
        {.addr=0x142c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0104, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01FB) {
    const struct CPU_State initial_cpu = {.pc=0xaff7, .a=0x78, .x=0x7f, .y=0x62, .sp=0x67, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x007f, .value=0x97}, {.addr=0xaff7, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xaff8, .a=0x10, .x=0x7f, .y=0x62, .sp=0x67, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x007f, .value=0x97}, {.addr=0xaff7, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xaff7, .value=0x26, .type=IO_READ},
        {.addr=0xaff8, .value=DUMMY, .type=IO_READ},
        {.addr=0x007f, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01FC) {
    const struct CPU_State initial_cpu = {.pc=0xef2f, .a=0x6d, .x=0xb6, .y=0xff, .sp=0x9f, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x00b6, .value=0x0b}, {.addr=0xef2f, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xef30, .a=0x09, .x=0xb6, .y=0xff, .sp=0x9f, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x00b6, .value=0x0b}, {.addr=0xef2f, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xef2f, .value=0x26, .type=IO_READ},
        {.addr=0xef30, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b6, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01FD) {
    const struct CPU_State initial_cpu = {.pc=0x02de, .a=0x23, .x=0x33, .y=0x94, .sp=0x9c, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0x1d}, {.addr=0x02de, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x02df, .a=0x01, .x=0x33, .y=0x94, .sp=0x9c, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0x1d}, {.addr=0x02de, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x02de, .value=0x26, .type=IO_READ},
        {.addr=0x02df, .value=DUMMY, .type=IO_READ},
        {.addr=0x0133, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01FE) {
    const struct CPU_State initial_cpu = {.pc=0x18cd, .a=0xc6, .x=0x4a, .y=0x48, .sp=0x64, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0x1c}, {.addr=0x18cd, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x18ce, .a=0x04, .x=0x4a, .y=0x48, .sp=0x64, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0x1c}, {.addr=0x18cd, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x18cd, .value=0x26, .type=IO_READ},
        {.addr=0x18ce, .value=DUMMY, .type=IO_READ},
        {.addr=0x014a, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_01FF) {
    const struct CPU_State initial_cpu = {.pc=0xe413, .a=0xd9, .x=0x4e, .y=0x75, .sp=0xdb, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0x64}, {.addr=0xe413, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xe414, .a=0x40, .x=0x4e, .y=0x75, .sp=0xdb, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0x64}, {.addr=0xe413, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xe413, .value=0x26, .type=IO_READ},
        {.addr=0xe414, .value=DUMMY, .type=IO_READ},
        {.addr=0x014e, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0200) {
    const struct CPU_State initial_cpu = {.pc=0xa8bf, .a=0x11, .x=0xb4, .y=0x13, .sp=0x60, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0x9a}, {.addr=0xa8bf, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xa8c0, .a=0x10, .x=0xb4, .y=0x13, .sp=0x60, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0x9a}, {.addr=0xa8bf, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xa8bf, .value=0x26, .type=IO_READ},
        {.addr=0xa8c0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b4, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0201) {
    const struct CPU_State initial_cpu = {.pc=0xf19d, .a=0xdc, .x=0x33, .y=0xfb, .sp=0x05, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x0033, .value=0x76}, {.addr=0xf19d, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xf19e, .a=0x54, .x=0x33, .y=0xfb, .sp=0x05, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0033, .value=0x76}, {.addr=0xf19d, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xf19d, .value=0x26, .type=IO_READ},
        {.addr=0xf19e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0033, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0202) {
    const struct CPU_State initial_cpu = {.pc=0x3b7d, .a=0x76, .x=0x52, .y=0x52, .sp=0x1b, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0xb7}, {.addr=0x3b7d, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x3b7e, .a=0x36, .x=0x52, .y=0x52, .sp=0x1b, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0xb7}, {.addr=0x3b7d, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x3b7d, .value=0x26, .type=IO_READ},
        {.addr=0x3b7e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0152, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0203) {
    const struct CPU_State initial_cpu = {.pc=0xa1ae, .a=0x41, .x=0x11, .y=0x85, .sp=0xca, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x0011, .value=0x04}, {.addr=0xa1ae, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xa1af, .a=0x00, .x=0x11, .y=0x85, .sp=0xca, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x0011, .value=0x04}, {.addr=0xa1ae, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xa1ae, .value=0x26, .type=IO_READ},
        {.addr=0xa1af, .value=DUMMY, .type=IO_READ},
        {.addr=0x0011, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0204) {
    const struct CPU_State initial_cpu = {.pc=0xa7d7, .a=0x6e, .x=0x05, .y=0xcc, .sp=0x7c, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x0105, .value=0xf5}, {.addr=0xa7d7, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xa7d8, .a=0x64, .x=0x05, .y=0xcc, .sp=0x7c, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0105, .value=0xf5}, {.addr=0xa7d7, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xa7d7, .value=0x26, .type=IO_READ},
        {.addr=0xa7d8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0105, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0205) {
    const struct CPU_State initial_cpu = {.pc=0x5e61, .a=0xc5, .x=0x74, .y=0x1e, .sp=0xb8, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x0074, .value=0x2a}, {.addr=0x5e61, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x5e62, .a=0x00, .x=0x74, .y=0x1e, .sp=0xb8, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x0074, .value=0x2a}, {.addr=0x5e61, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x5e61, .value=0x26, .type=IO_READ},
        {.addr=0x5e62, .value=DUMMY, .type=IO_READ},
        {.addr=0x0074, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0206) {
    const struct CPU_State initial_cpu = {.pc=0x6cd2, .a=0xaa, .x=0xc4, .y=0xe6, .sp=0x09, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0x08}, {.addr=0x6cd2, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x6cd3, .a=0x08, .x=0xc4, .y=0xe6, .sp=0x09, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0x08}, {.addr=0x6cd2, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x6cd2, .value=0x26, .type=IO_READ},
        {.addr=0x6cd3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c4, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0207) {
    const struct CPU_State initial_cpu = {.pc=0xbf26, .a=0x26, .x=0x11, .y=0xcd, .sp=0x42, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x0011, .value=0xde}, {.addr=0xbf26, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xbf27, .a=0x06, .x=0x11, .y=0xcd, .sp=0x42, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0011, .value=0xde}, {.addr=0xbf26, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xbf26, .value=0x26, .type=IO_READ},
        {.addr=0xbf27, .value=DUMMY, .type=IO_READ},
        {.addr=0x0011, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0208) {
    const struct CPU_State initial_cpu = {.pc=0x6ebc, .a=0xdc, .x=0x6f, .y=0x7c, .sp=0x87, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x016f, .value=0xeb}, {.addr=0x6ebc, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x6ebd, .a=0xc8, .x=0x6f, .y=0x7c, .sp=0x87, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x016f, .value=0xeb}, {.addr=0x6ebc, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x6ebc, .value=0x26, .type=IO_READ},
        {.addr=0x6ebd, .value=DUMMY, .type=IO_READ},
        {.addr=0x016f, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0209) {
    const struct CPU_State initial_cpu = {.pc=0x4519, .a=0x38, .x=0x36, .y=0xe3, .sp=0x5b, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x0136, .value=0x72}, {.addr=0x4519, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x451a, .a=0x30, .x=0x36, .y=0xe3, .sp=0x5b, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0136, .value=0x72}, {.addr=0x4519, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x4519, .value=0x26, .type=IO_READ},
        {.addr=0x451a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0136, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_020A) {
    const struct CPU_State initial_cpu = {.pc=0x7a7e, .a=0x86, .x=0x50, .y=0x57, .sp=0x27, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0x87}, {.addr=0x7a7e, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x7a7f, .a=0x86, .x=0x50, .y=0x57, .sp=0x27, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0x87}, {.addr=0x7a7e, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x7a7e, .value=0x26, .type=IO_READ},
        {.addr=0x7a7f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0150, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_020B) {
    const struct CPU_State initial_cpu = {.pc=0xea49, .a=0x4a, .x=0xef, .y=0xb5, .sp=0x64, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0x62}, {.addr=0xea49, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xea4a, .a=0x42, .x=0xef, .y=0xb5, .sp=0x64, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0x62}, {.addr=0xea49, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xea49, .value=0x26, .type=IO_READ},
        {.addr=0xea4a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ef, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_020C) {
    const struct CPU_State initial_cpu = {.pc=0x743e, .a=0x02, .x=0x11, .y=0xb7, .sp=0x7c, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x0011, .value=0x22}, {.addr=0x743e, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x743f, .a=0x02, .x=0x11, .y=0xb7, .sp=0x7c, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x0011, .value=0x22}, {.addr=0x743e, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x743e, .value=0x26, .type=IO_READ},
        {.addr=0x743f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0011, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_020D) {
    const struct CPU_State initial_cpu = {.pc=0x4306, .a=0x1c, .x=0xcc, .y=0xf5, .sp=0xe4, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0x1b}, {.addr=0x4306, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x4307, .a=0x18, .x=0xcc, .y=0xf5, .sp=0xe4, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0x1b}, {.addr=0x4306, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x4306, .value=0x26, .type=IO_READ},
        {.addr=0x4307, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cc, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_020E) {
    const struct CPU_State initial_cpu = {.pc=0xe3b9, .a=0x74, .x=0xbd, .y=0x91, .sp=0x65, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x00bd, .value=0xf4}, {.addr=0xe3b9, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xe3ba, .a=0x74, .x=0xbd, .y=0x91, .sp=0x65, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x00bd, .value=0xf4}, {.addr=0xe3b9, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xe3b9, .value=0x26, .type=IO_READ},
        {.addr=0xe3ba, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bd, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_020F) {
    const struct CPU_State initial_cpu = {.pc=0x143c, .a=0x2d, .x=0x70, .y=0x52, .sp=0x48, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x0170, .value=0x6e}, {.addr=0x143c, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x143d, .a=0x2c, .x=0x70, .y=0x52, .sp=0x48, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x0170, .value=0x6e}, {.addr=0x143c, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x143c, .value=0x26, .type=IO_READ},
        {.addr=0x143d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0170, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0210) {
    const struct CPU_State initial_cpu = {.pc=0x858e, .a=0xa2, .x=0x5c, .y=0x07, .sp=0x7e, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x005c, .value=0x0f}, {.addr=0x858e, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x858f, .a=0x02, .x=0x5c, .y=0x07, .sp=0x7e, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x005c, .value=0x0f}, {.addr=0x858e, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x858e, .value=0x26, .type=IO_READ},
        {.addr=0x858f, .value=DUMMY, .type=IO_READ},
        {.addr=0x005c, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0211) {
    const struct CPU_State initial_cpu = {.pc=0x8d54, .a=0xf9, .x=0x8a, .y=0xd9, .sp=0xdc, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x018a, .value=0x08}, {.addr=0x8d54, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x8d55, .a=0x08, .x=0x8a, .y=0xd9, .sp=0xdc, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x018a, .value=0x08}, {.addr=0x8d54, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x8d54, .value=0x26, .type=IO_READ},
        {.addr=0x8d55, .value=DUMMY, .type=IO_READ},
        {.addr=0x018a, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0212) {
    const struct CPU_State initial_cpu = {.pc=0xccd9, .a=0x16, .x=0xdc, .y=0x1f, .sp=0x88, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x00dc, .value=0x02}, {.addr=0xccd9, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xccda, .a=0x02, .x=0xdc, .y=0x1f, .sp=0x88, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x00dc, .value=0x02}, {.addr=0xccd9, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xccd9, .value=0x26, .type=IO_READ},
        {.addr=0xccda, .value=DUMMY, .type=IO_READ},
        {.addr=0x00dc, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0213) {
    const struct CPU_State initial_cpu = {.pc=0x79a0, .a=0xcd, .x=0x4e, .y=0x71, .sp=0xf1, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x004e, .value=0xd9}, {.addr=0x79a0, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x79a1, .a=0xc9, .x=0x4e, .y=0x71, .sp=0xf1, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x004e, .value=0xd9}, {.addr=0x79a0, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x79a0, .value=0x26, .type=IO_READ},
        {.addr=0x79a1, .value=DUMMY, .type=IO_READ},
        {.addr=0x004e, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0214) {
    const struct CPU_State initial_cpu = {.pc=0x924e, .a=0x3d, .x=0xc2, .y=0x9f, .sp=0xb4, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0xcb}, {.addr=0x924e, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x924f, .a=0x09, .x=0xc2, .y=0x9f, .sp=0xb4, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0xcb}, {.addr=0x924e, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x924e, .value=0x26, .type=IO_READ},
        {.addr=0x924f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c2, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0215) {
    const struct CPU_State initial_cpu = {.pc=0x48e0, .a=0x59, .x=0x76, .y=0xaf, .sp=0xe0, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x0176, .value=0xfc}, {.addr=0x48e0, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x48e1, .a=0x58, .x=0x76, .y=0xaf, .sp=0xe0, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0176, .value=0xfc}, {.addr=0x48e0, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x48e0, .value=0x26, .type=IO_READ},
        {.addr=0x48e1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0176, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0217) {
    const struct CPU_State initial_cpu = {.pc=0x25df, .a=0x0f, .x=0x31, .y=0x68, .sp=0xe8, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x0131, .value=0x0f}, {.addr=0x25df, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x25e0, .a=0x0f, .x=0x31, .y=0x68, .sp=0xe8, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0131, .value=0x0f}, {.addr=0x25df, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x25df, .value=0x26, .type=IO_READ},
        {.addr=0x25e0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0131, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0218) {
    const struct CPU_State initial_cpu = {.pc=0xcb16, .a=0x81, .x=0x2b, .y=0x72, .sp=0x42, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0x0b}, {.addr=0xcb16, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xcb17, .a=0x01, .x=0x2b, .y=0x72, .sp=0x42, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0x0b}, {.addr=0xcb16, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xcb16, .value=0x26, .type=IO_READ},
        {.addr=0xcb17, .value=DUMMY, .type=IO_READ},
        {.addr=0x012b, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0219) {
    const struct CPU_State initial_cpu = {.pc=0xdcaa, .a=0x3d, .x=0x2e, .y=0x49, .sp=0xbe, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x002e, .value=0xff}, {.addr=0xdcaa, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xdcab, .a=0x3d, .x=0x2e, .y=0x49, .sp=0xbe, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x002e, .value=0xff}, {.addr=0xdcaa, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xdcaa, .value=0x26, .type=IO_READ},
        {.addr=0xdcab, .value=DUMMY, .type=IO_READ},
        {.addr=0x002e, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_021A) {
    const struct CPU_State initial_cpu = {.pc=0x8435, .a=0x86, .x=0xb7, .y=0x74, .sp=0x0f, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x00b7, .value=0xa8}, {.addr=0x8435, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x8436, .a=0x80, .x=0xb7, .y=0x74, .sp=0x0f, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x00b7, .value=0xa8}, {.addr=0x8435, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x8435, .value=0x26, .type=IO_READ},
        {.addr=0x8436, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b7, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_021B) {
    const struct CPU_State initial_cpu = {.pc=0xaefd, .a=0xc8, .x=0x9b, .y=0xa5, .sp=0x22, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x019b, .value=0xc5}, {.addr=0xaefd, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xaefe, .a=0xc0, .x=0x9b, .y=0xa5, .sp=0x22, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x019b, .value=0xc5}, {.addr=0xaefd, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xaefd, .value=0x26, .type=IO_READ},
        {.addr=0xaefe, .value=DUMMY, .type=IO_READ},
        {.addr=0x019b, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_021C) {
    const struct CPU_State initial_cpu = {.pc=0x2429, .a=0x16, .x=0xb9, .y=0x23, .sp=0xf4, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x00b9, .value=0xdb}, {.addr=0x2429, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x242a, .a=0x12, .x=0xb9, .y=0x23, .sp=0xf4, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x00b9, .value=0xdb}, {.addr=0x2429, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x2429, .value=0x26, .type=IO_READ},
        {.addr=0x242a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b9, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_021D) {
    const struct CPU_State initial_cpu = {.pc=0xaa70, .a=0x00, .x=0xad, .y=0x98, .sp=0x18, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x00ad, .value=0x50}, {.addr=0xaa70, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xaa71, .a=0x00, .x=0xad, .y=0x98, .sp=0x18, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x00ad, .value=0x50}, {.addr=0xaa70, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xaa70, .value=0x26, .type=IO_READ},
        {.addr=0xaa71, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ad, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_021E) {
    const struct CPU_State initial_cpu = {.pc=0xbdb0, .a=0x94, .x=0x4b, .y=0x0a, .sp=0x7e, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x014b, .value=0xb8}, {.addr=0xbdb0, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xbdb1, .a=0x90, .x=0x4b, .y=0x0a, .sp=0x7e, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x014b, .value=0xb8}, {.addr=0xbdb0, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xbdb0, .value=0x26, .type=IO_READ},
        {.addr=0xbdb1, .value=DUMMY, .type=IO_READ},
        {.addr=0x014b, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_021F) {
    const struct CPU_State initial_cpu = {.pc=0x8fcb, .a=0xe3, .x=0x16, .y=0x26, .sp=0x25, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x0016, .value=0x6f}, {.addr=0x8fcb, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x8fcc, .a=0x63, .x=0x16, .y=0x26, .sp=0x25, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0016, .value=0x6f}, {.addr=0x8fcb, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x8fcb, .value=0x26, .type=IO_READ},
        {.addr=0x8fcc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0016, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0220) {
    const struct CPU_State initial_cpu = {.pc=0x4029, .a=0xa7, .x=0x60, .y=0x7c, .sp=0x52, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x0060, .value=0x7a}, {.addr=0x4029, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x402a, .a=0x22, .x=0x60, .y=0x7c, .sp=0x52, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0060, .value=0x7a}, {.addr=0x4029, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x4029, .value=0x26, .type=IO_READ},
        {.addr=0x402a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0060, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0221) {
    const struct CPU_State initial_cpu = {.pc=0xa9bb, .a=0x5e, .x=0xc6, .y=0xee, .sp=0x2a, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x00c6, .value=0x38}, {.addr=0xa9bb, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xa9bc, .a=0x18, .x=0xc6, .y=0xee, .sp=0x2a, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x00c6, .value=0x38}, {.addr=0xa9bb, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xa9bb, .value=0x26, .type=IO_READ},
        {.addr=0xa9bc, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c6, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0225) {
    const struct CPU_State initial_cpu = {.pc=0x8f05, .a=0x59, .x=0xa2, .y=0x7e, .sp=0xf3, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x01a2, .value=0xcd}, {.addr=0x8f05, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x8f06, .a=0x49, .x=0xa2, .y=0x7e, .sp=0xf3, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x01a2, .value=0xcd}, {.addr=0x8f05, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x8f05, .value=0x26, .type=IO_READ},
        {.addr=0x8f06, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a2, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0226) {
    const struct CPU_State initial_cpu = {.pc=0xf170, .a=0x06, .x=0xfb, .y=0x86, .sp=0x9a, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0x88}, {.addr=0xf170, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xf171, .a=0x00, .x=0xfb, .y=0x86, .sp=0x9a, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0x88}, {.addr=0xf170, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xf170, .value=0x26, .type=IO_READ},
        {.addr=0xf171, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fb, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0227) {
    const struct CPU_State initial_cpu = {.pc=0xef6b, .a=0x05, .x=0xf0, .y=0x4f, .sp=0x9b, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x01f0, .value=0xf2}, {.addr=0xef6b, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xef6c, .a=0x00, .x=0xf0, .y=0x4f, .sp=0x9b, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x01f0, .value=0xf2}, {.addr=0xef6b, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xef6b, .value=0x26, .type=IO_READ},
        {.addr=0xef6c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f0, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0228) {
    const struct CPU_State initial_cpu = {.pc=0x0464, .a=0x32, .x=0x9a, .y=0xf6, .sp=0xeb, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0x01}, {.addr=0x0464, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x0465, .a=0x00, .x=0x9a, .y=0xf6, .sp=0xeb, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0x01}, {.addr=0x0464, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x0464, .value=0x26, .type=IO_READ},
        {.addr=0x0465, .value=DUMMY, .type=IO_READ},
        {.addr=0x019a, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0229) {
    const struct CPU_State initial_cpu = {.pc=0xf214, .a=0x9b, .x=0x73, .y=0xdf, .sp=0x16, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x0073, .value=0x39}, {.addr=0xf214, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xf215, .a=0x19, .x=0x73, .y=0xdf, .sp=0x16, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x0073, .value=0x39}, {.addr=0xf214, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xf214, .value=0x26, .type=IO_READ},
        {.addr=0xf215, .value=DUMMY, .type=IO_READ},
        {.addr=0x0073, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_022A) {
    const struct CPU_State initial_cpu = {.pc=0x6903, .a=0x42, .x=0x60, .y=0xdd, .sp=0x07, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x0160, .value=0x35}, {.addr=0x6903, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x6904, .a=0x00, .x=0x60, .y=0xdd, .sp=0x07, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x0160, .value=0x35}, {.addr=0x6903, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x6903, .value=0x26, .type=IO_READ},
        {.addr=0x6904, .value=DUMMY, .type=IO_READ},
        {.addr=0x0160, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_022B) {
    const struct CPU_State initial_cpu = {.pc=0x4a6f, .a=0x80, .x=0xc9, .y=0x2e, .sp=0xb8, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0x91}, {.addr=0x4a6f, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x4a70, .a=0x80, .x=0xc9, .y=0x2e, .sp=0xb8, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0x91}, {.addr=0x4a6f, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x4a6f, .value=0x26, .type=IO_READ},
        {.addr=0x4a70, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c9, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_022C) {
    const struct CPU_State initial_cpu = {.pc=0x7666, .a=0xf4, .x=0xd6, .y=0xe8, .sp=0xb0, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x00d6, .value=0xc9}, {.addr=0x7666, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x7667, .a=0xc0, .x=0xd6, .y=0xe8, .sp=0xb0, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x00d6, .value=0xc9}, {.addr=0x7666, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x7666, .value=0x26, .type=IO_READ},
        {.addr=0x7667, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d6, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_022D) {
    const struct CPU_State initial_cpu = {.pc=0x48c4, .a=0x9d, .x=0x53, .y=0x13, .sp=0x72, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0x0f}, {.addr=0x48c4, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x48c5, .a=0x0d, .x=0x53, .y=0x13, .sp=0x72, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0x0f}, {.addr=0x48c4, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x48c4, .value=0x26, .type=IO_READ},
        {.addr=0x48c5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0153, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_022E) {
    const struct CPU_State initial_cpu = {.pc=0xa806, .a=0xe8, .x=0xc6, .y=0x59, .sp=0xcd, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x01c6, .value=0x76}, {.addr=0xa806, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xa807, .a=0x60, .x=0xc6, .y=0x59, .sp=0xcd, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01c6, .value=0x76}, {.addr=0xa806, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xa806, .value=0x26, .type=IO_READ},
        {.addr=0xa807, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c6, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_022F) {
    const struct CPU_State initial_cpu = {.pc=0xc7fe, .a=0x25, .x=0x6b, .y=0xca, .sp=0x5a, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0x3e}, {.addr=0xc7fe, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xc7ff, .a=0x24, .x=0x6b, .y=0xca, .sp=0x5a, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0x3e}, {.addr=0xc7fe, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xc7fe, .value=0x26, .type=IO_READ},
        {.addr=0xc7ff, .value=DUMMY, .type=IO_READ},
        {.addr=0x016b, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0230) {
    const struct CPU_State initial_cpu = {.pc=0x9523, .a=0x60, .x=0xe3, .y=0x7d, .sp=0x1e, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0xc9}, {.addr=0x9523, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x9524, .a=0x40, .x=0xe3, .y=0x7d, .sp=0x1e, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0xc9}, {.addr=0x9523, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x9523, .value=0x26, .type=IO_READ},
        {.addr=0x9524, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e3, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0231) {
    const struct CPU_State initial_cpu = {.pc=0x5cea, .a=0x69, .x=0xb6, .y=0x33, .sp=0x02, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x00b6, .value=0x4e}, {.addr=0x5cea, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x5ceb, .a=0x48, .x=0xb6, .y=0x33, .sp=0x02, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x00b6, .value=0x4e}, {.addr=0x5cea, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x5cea, .value=0x26, .type=IO_READ},
        {.addr=0x5ceb, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b6, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0232) {
    const struct CPU_State initial_cpu = {.pc=0x23aa, .a=0x4b, .x=0xc2, .y=0xf5, .sp=0x15, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x00c2, .value=0x09}, {.addr=0x23aa, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x23ab, .a=0x09, .x=0xc2, .y=0xf5, .sp=0x15, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x00c2, .value=0x09}, {.addr=0x23aa, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x23aa, .value=0x26, .type=IO_READ},
        {.addr=0x23ab, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c2, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0233) {
    const struct CPU_State initial_cpu = {.pc=0x6639, .a=0xae, .x=0xf0, .y=0x39, .sp=0x9d, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x01f0, .value=0xf9}, {.addr=0x6639, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x663a, .a=0xa8, .x=0xf0, .y=0x39, .sp=0x9d, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x01f0, .value=0xf9}, {.addr=0x6639, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x6639, .value=0x26, .type=IO_READ},
        {.addr=0x663a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f0, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0234) {
    const struct CPU_State initial_cpu = {.pc=0xb747, .a=0x99, .x=0x17, .y=0xfc, .sp=0xbc, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x0117, .value=0x84}, {.addr=0xb747, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xb748, .a=0x80, .x=0x17, .y=0xfc, .sp=0xbc, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x0117, .value=0x84}, {.addr=0xb747, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xb747, .value=0x26, .type=IO_READ},
        {.addr=0xb748, .value=DUMMY, .type=IO_READ},
        {.addr=0x0117, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0235) {
    const struct CPU_State initial_cpu = {.pc=0xe7d1, .a=0x6d, .x=0xf1, .y=0xeb, .sp=0x44, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0x19}, {.addr=0xe7d1, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xe7d2, .a=0x09, .x=0xf1, .y=0xeb, .sp=0x44, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0x19}, {.addr=0xe7d1, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xe7d1, .value=0x26, .type=IO_READ},
        {.addr=0xe7d2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f1, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0236) {
    const struct CPU_State initial_cpu = {.pc=0x2810, .a=0x05, .x=0x15, .y=0x75, .sp=0x15, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x0115, .value=0x96}, {.addr=0x2810, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x2811, .a=0x04, .x=0x15, .y=0x75, .sp=0x15, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x0115, .value=0x96}, {.addr=0x2810, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x2810, .value=0x26, .type=IO_READ},
        {.addr=0x2811, .value=DUMMY, .type=IO_READ},
        {.addr=0x0115, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0237) {
    const struct CPU_State initial_cpu = {.pc=0x394a, .a=0xe6, .x=0x74, .y=0xd5, .sp=0x5f, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x0074, .value=0x51}, {.addr=0x394a, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x394b, .a=0x40, .x=0x74, .y=0xd5, .sp=0x5f, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0074, .value=0x51}, {.addr=0x394a, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x394a, .value=0x26, .type=IO_READ},
        {.addr=0x394b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0074, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0238) {
    const struct CPU_State initial_cpu = {.pc=0x5a86, .a=0x62, .x=0x3b, .y=0x50, .sp=0x97, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x003b, .value=0x3f}, {.addr=0x5a86, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x5a87, .a=0x22, .x=0x3b, .y=0x50, .sp=0x97, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x003b, .value=0x3f}, {.addr=0x5a86, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x5a86, .value=0x26, .type=IO_READ},
        {.addr=0x5a87, .value=DUMMY, .type=IO_READ},
        {.addr=0x003b, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0239) {
    const struct CPU_State initial_cpu = {.pc=0xd23a, .a=0x51, .x=0xc1, .y=0x77, .sp=0x56, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0x71}, {.addr=0xd23a, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xd23b, .a=0x51, .x=0xc1, .y=0x77, .sp=0x56, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0x71}, {.addr=0xd23a, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xd23a, .value=0x26, .type=IO_READ},
        {.addr=0xd23b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c1, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_023A) {
    const struct CPU_State initial_cpu = {.pc=0x923e, .a=0x27, .x=0x18, .y=0x29, .sp=0xfd, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x0018, .value=0x6e}, {.addr=0x923e, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x923f, .a=0x26, .x=0x18, .y=0x29, .sp=0xfd, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x0018, .value=0x6e}, {.addr=0x923e, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x923e, .value=0x26, .type=IO_READ},
        {.addr=0x923f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0018, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_023B) {
    const struct CPU_State initial_cpu = {.pc=0x3113, .a=0x94, .x=0x17, .y=0xa3, .sp=0x43, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x0017, .value=0xfb}, {.addr=0x3113, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x3114, .a=0x90, .x=0x17, .y=0xa3, .sp=0x43, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0017, .value=0xfb}, {.addr=0x3113, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x3113, .value=0x26, .type=IO_READ},
        {.addr=0x3114, .value=DUMMY, .type=IO_READ},
        {.addr=0x0017, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_023C) {
    const struct CPU_State initial_cpu = {.pc=0xe1d3, .a=0x87, .x=0x10, .y=0x03, .sp=0x9f, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x0010, .value=0x32}, {.addr=0xe1d3, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xe1d4, .a=0x02, .x=0x10, .y=0x03, .sp=0x9f, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0010, .value=0x32}, {.addr=0xe1d3, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xe1d3, .value=0x26, .type=IO_READ},
        {.addr=0xe1d4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0010, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_023D) {
    const struct CPU_State initial_cpu = {.pc=0xc6bf, .a=0x86, .x=0x01, .y=0xa4, .sp=0xc1, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x0001, .value=0x05}, {.addr=0xc6bf, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xc6c0, .a=0x04, .x=0x01, .y=0xa4, .sp=0xc1, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0001, .value=0x05}, {.addr=0xc6bf, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xc6bf, .value=0x26, .type=IO_READ},
        {.addr=0xc6c0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0001, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_023E) {
    const struct CPU_State initial_cpu = {.pc=0xa15e, .a=0x4d, .x=0xcc, .y=0xc2, .sp=0x75, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x00cc, .value=0x18}, {.addr=0xa15e, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xa15f, .a=0x08, .x=0xcc, .y=0xc2, .sp=0x75, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x00cc, .value=0x18}, {.addr=0xa15e, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xa15e, .value=0x26, .type=IO_READ},
        {.addr=0xa15f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cc, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_023F) {
    const struct CPU_State initial_cpu = {.pc=0xed3b, .a=0xc5, .x=0xba, .y=0xf7, .sp=0x4d, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0x65}, {.addr=0xed3b, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xed3c, .a=0x45, .x=0xba, .y=0xf7, .sp=0x4d, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0x65}, {.addr=0xed3b, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xed3b, .value=0x26, .type=IO_READ},
        {.addr=0xed3c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ba, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0240) {
    const struct CPU_State initial_cpu = {.pc=0xfd5d, .a=0x57, .x=0x42, .y=0x7b, .sp=0x54, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x0042, .value=0xaf}, {.addr=0xfd5d, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xfd5e, .a=0x07, .x=0x42, .y=0x7b, .sp=0x54, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x0042, .value=0xaf}, {.addr=0xfd5d, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xfd5d, .value=0x26, .type=IO_READ},
        {.addr=0xfd5e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0042, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0241) {
    const struct CPU_State initial_cpu = {.pc=0xf9ae, .a=0xe7, .x=0x32, .y=0x7d, .sp=0xe1, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x0032, .value=0x33}, {.addr=0xf9ae, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xf9af, .a=0x23, .x=0x32, .y=0x7d, .sp=0xe1, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0032, .value=0x33}, {.addr=0xf9ae, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xf9ae, .value=0x26, .type=IO_READ},
        {.addr=0xf9af, .value=DUMMY, .type=IO_READ},
        {.addr=0x0032, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0242) {
    const struct CPU_State initial_cpu = {.pc=0x973c, .a=0x6c, .x=0xc6, .y=0x51, .sp=0x4a, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x00c6, .value=0x89}, {.addr=0x973c, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x973d, .a=0x08, .x=0xc6, .y=0x51, .sp=0x4a, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x00c6, .value=0x89}, {.addr=0x973c, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x973c, .value=0x26, .type=IO_READ},
        {.addr=0x973d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c6, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0243) {
    const struct CPU_State initial_cpu = {.pc=0x620c, .a=0x93, .x=0x52, .y=0x33, .sp=0x5a, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x0052, .value=0x4d}, {.addr=0x620c, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x620d, .a=0x01, .x=0x52, .y=0x33, .sp=0x5a, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0052, .value=0x4d}, {.addr=0x620c, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x620c, .value=0x26, .type=IO_READ},
        {.addr=0x620d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0052, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0244) {
    const struct CPU_State initial_cpu = {.pc=0x66e7, .a=0x77, .x=0x7d, .y=0x04, .sp=0xa1, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x007d, .value=0x3c}, {.addr=0x66e7, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x66e8, .a=0x34, .x=0x7d, .y=0x04, .sp=0xa1, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x007d, .value=0x3c}, {.addr=0x66e7, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x66e7, .value=0x26, .type=IO_READ},
        {.addr=0x66e8, .value=DUMMY, .type=IO_READ},
        {.addr=0x007d, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0245) {
    const struct CPU_State initial_cpu = {.pc=0x8b46, .a=0x6e, .x=0x90, .y=0x0c, .sp=0x61, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x0090, .value=0x20}, {.addr=0x8b46, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x8b47, .a=0x20, .x=0x90, .y=0x0c, .sp=0x61, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0090, .value=0x20}, {.addr=0x8b46, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x8b46, .value=0x26, .type=IO_READ},
        {.addr=0x8b47, .value=DUMMY, .type=IO_READ},
        {.addr=0x0090, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0246) {
    const struct CPU_State initial_cpu = {.pc=0x9688, .a=0x08, .x=0x66, .y=0x27, .sp=0xa2, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x0066, .value=0x10}, {.addr=0x9688, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x9689, .a=0x00, .x=0x66, .y=0x27, .sp=0xa2, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x0066, .value=0x10}, {.addr=0x9688, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x9688, .value=0x26, .type=IO_READ},
        {.addr=0x9689, .value=DUMMY, .type=IO_READ},
        {.addr=0x0066, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0247) {
    const struct CPU_State initial_cpu = {.pc=0xc8c0, .a=0x5d, .x=0xce, .y=0x23, .sp=0xd3, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0xd9}, {.addr=0xc8c0, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xc8c1, .a=0x59, .x=0xce, .y=0x23, .sp=0xd3, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0xd9}, {.addr=0xc8c0, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xc8c0, .value=0x26, .type=IO_READ},
        {.addr=0xc8c1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ce, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0248) {
    const struct CPU_State initial_cpu = {.pc=0x94be, .a=0xae, .x=0xec, .y=0x38, .sp=0x0e, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x00ec, .value=0x56}, {.addr=0x94be, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x94bf, .a=0x06, .x=0xec, .y=0x38, .sp=0x0e, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x00ec, .value=0x56}, {.addr=0x94be, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x94be, .value=0x26, .type=IO_READ},
        {.addr=0x94bf, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ec, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0249) {
    const struct CPU_State initial_cpu = {.pc=0x69bf, .a=0xf3, .x=0x5b, .y=0x0f, .sp=0x4e, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x005b, .value=0x8e}, {.addr=0x69bf, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x69c0, .a=0x82, .x=0x5b, .y=0x0f, .sp=0x4e, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x005b, .value=0x8e}, {.addr=0x69bf, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x69bf, .value=0x26, .type=IO_READ},
        {.addr=0x69c0, .value=DUMMY, .type=IO_READ},
        {.addr=0x005b, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_024A) {
    const struct CPU_State initial_cpu = {.pc=0x914d, .a=0xc0, .x=0x75, .y=0x5b, .sp=0x2d, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x0075, .value=0x06}, {.addr=0x914d, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x914e, .a=0x00, .x=0x75, .y=0x5b, .sp=0x2d, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x0075, .value=0x06}, {.addr=0x914d, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x914d, .value=0x26, .type=IO_READ},
        {.addr=0x914e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0075, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_024C) {
    const struct CPU_State initial_cpu = {.pc=0x4e0e, .a=0x23, .x=0x0c, .y=0xde, .sp=0xfe, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0xb7}, {.addr=0x4e0e, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x4e0f, .a=0x23, .x=0x0c, .y=0xde, .sp=0xfe, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0xb7}, {.addr=0x4e0e, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x4e0e, .value=0x26, .type=IO_READ},
        {.addr=0x4e0f, .value=DUMMY, .type=IO_READ},
        {.addr=0x010c, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_024D) {
    const struct CPU_State initial_cpu = {.pc=0xcc7b, .a=0x04, .x=0x23, .y=0x54, .sp=0xa0, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x0023, .value=0x8d}, {.addr=0xcc7b, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xcc7c, .a=0x04, .x=0x23, .y=0x54, .sp=0xa0, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0023, .value=0x8d}, {.addr=0xcc7b, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xcc7b, .value=0x26, .type=IO_READ},
        {.addr=0xcc7c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0023, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_024F) {
    const struct CPU_State initial_cpu = {.pc=0xb215, .a=0x35, .x=0x30, .y=0x15, .sp=0x70, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x0130, .value=0x60}, {.addr=0xb215, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xb216, .a=0x20, .x=0x30, .y=0x15, .sp=0x70, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0130, .value=0x60}, {.addr=0xb215, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xb215, .value=0x26, .type=IO_READ},
        {.addr=0xb216, .value=DUMMY, .type=IO_READ},
        {.addr=0x0130, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0250) {
    const struct CPU_State initial_cpu = {.pc=0xb319, .a=0x8d, .x=0xee, .y=0x7a, .sp=0x51, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0x7b}, {.addr=0xb319, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xb31a, .a=0x09, .x=0xee, .y=0x7a, .sp=0x51, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0x7b}, {.addr=0xb319, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xb319, .value=0x26, .type=IO_READ},
        {.addr=0xb31a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ee, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0251) {
    const struct CPU_State initial_cpu = {.pc=0x568c, .a=0x30, .x=0x69, .y=0x30, .sp=0xda, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x0169, .value=0x8b}, {.addr=0x568c, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x568d, .a=0x00, .x=0x69, .y=0x30, .sp=0xda, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x0169, .value=0x8b}, {.addr=0x568c, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x568c, .value=0x26, .type=IO_READ},
        {.addr=0x568d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0169, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0252) {
    const struct CPU_State initial_cpu = {.pc=0xaa3f, .a=0x11, .x=0x3c, .y=0x67, .sp=0xa5, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x003c, .value=0x99}, {.addr=0xaa3f, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xaa40, .a=0x11, .x=0x3c, .y=0x67, .sp=0xa5, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x003c, .value=0x99}, {.addr=0xaa3f, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xaa3f, .value=0x26, .type=IO_READ},
        {.addr=0xaa40, .value=DUMMY, .type=IO_READ},
        {.addr=0x003c, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0253) {
    const struct CPU_State initial_cpu = {.pc=0x5c01, .a=0x7f, .x=0x8e, .y=0x17, .sp=0x2c, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0xeb}, {.addr=0x5c01, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x5c02, .a=0x6b, .x=0x8e, .y=0x17, .sp=0x2c, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0xeb}, {.addr=0x5c01, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x5c01, .value=0x26, .type=IO_READ},
        {.addr=0x5c02, .value=DUMMY, .type=IO_READ},
        {.addr=0x018e, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0254) {
    const struct CPU_State initial_cpu = {.pc=0xd48d, .a=0x32, .x=0xc1, .y=0x0e, .sp=0xb2, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x00c1, .value=0xb5}, {.addr=0xd48d, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xd48e, .a=0x30, .x=0xc1, .y=0x0e, .sp=0xb2, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x00c1, .value=0xb5}, {.addr=0xd48d, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xd48d, .value=0x26, .type=IO_READ},
        {.addr=0xd48e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c1, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0255) {
    const struct CPU_State initial_cpu = {.pc=0x4dac, .a=0x93, .x=0x75, .y=0x16, .sp=0x19, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x0175, .value=0xfa}, {.addr=0x4dac, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x4dad, .a=0x92, .x=0x75, .y=0x16, .sp=0x19, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x0175, .value=0xfa}, {.addr=0x4dac, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x4dac, .value=0x26, .type=IO_READ},
        {.addr=0x4dad, .value=DUMMY, .type=IO_READ},
        {.addr=0x0175, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0256) {
    const struct CPU_State initial_cpu = {.pc=0x90ca, .a=0xb2, .x=0x73, .y=0xd7, .sp=0x92, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x0073, .value=0xef}, {.addr=0x90ca, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x90cb, .a=0xa2, .x=0x73, .y=0xd7, .sp=0x92, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x0073, .value=0xef}, {.addr=0x90ca, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x90ca, .value=0x26, .type=IO_READ},
        {.addr=0x90cb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0073, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0257) {
    const struct CPU_State initial_cpu = {.pc=0xff15, .a=0x87, .x=0x11, .y=0x6d, .sp=0x6c, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x0011, .value=0x32}, {.addr=0xff15, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xff16, .a=0x02, .x=0x11, .y=0x6d, .sp=0x6c, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0011, .value=0x32}, {.addr=0xff15, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xff15, .value=0x26, .type=IO_READ},
        {.addr=0xff16, .value=DUMMY, .type=IO_READ},
        {.addr=0x0011, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0258) {
    const struct CPU_State initial_cpu = {.pc=0xd183, .a=0x15, .x=0x73, .y=0x31, .sp=0x6f, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0xdc}, {.addr=0xd183, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xd184, .a=0x14, .x=0x73, .y=0x31, .sp=0x6f, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0xdc}, {.addr=0xd183, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xd183, .value=0x26, .type=IO_READ},
        {.addr=0xd184, .value=DUMMY, .type=IO_READ},
        {.addr=0x0173, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0259) {
    const struct CPU_State initial_cpu = {.pc=0x0bbf, .a=0xd1, .x=0x0a, .y=0xe7, .sp=0x5a, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0xfc}, {.addr=0x0bbf, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x0bc0, .a=0xd0, .x=0x0a, .y=0xe7, .sp=0x5a, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0xfc}, {.addr=0x0bbf, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x0bbf, .value=0x26, .type=IO_READ},
        {.addr=0x0bc0, .value=DUMMY, .type=IO_READ},
        {.addr=0x010a, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_025A) {
    const struct CPU_State initial_cpu = {.pc=0x8df5, .a=0x0c, .x=0x98, .y=0x92, .sp=0x1f, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x0098, .value=0xf8}, {.addr=0x8df5, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x8df6, .a=0x08, .x=0x98, .y=0x92, .sp=0x1f, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x0098, .value=0xf8}, {.addr=0x8df5, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x8df5, .value=0x26, .type=IO_READ},
        {.addr=0x8df6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0098, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_025B) {
    const struct CPU_State initial_cpu = {.pc=0xf2b4, .a=0xac, .x=0x43, .y=0x70, .sp=0xb0, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x0043, .value=0x4e}, {.addr=0xf2b4, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xf2b5, .a=0x0c, .x=0x43, .y=0x70, .sp=0xb0, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0043, .value=0x4e}, {.addr=0xf2b4, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xf2b4, .value=0x26, .type=IO_READ},
        {.addr=0xf2b5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0043, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_025C) {
    const struct CPU_State initial_cpu = {.pc=0xfcfd, .a=0xb0, .x=0x1b, .y=0x41, .sp=0x8c, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x001b, .value=0xc3}, {.addr=0xfcfd, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xfcfe, .a=0x80, .x=0x1b, .y=0x41, .sp=0x8c, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x001b, .value=0xc3}, {.addr=0xfcfd, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xfcfd, .value=0x26, .type=IO_READ},
        {.addr=0xfcfe, .value=DUMMY, .type=IO_READ},
        {.addr=0x001b, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_025D) {
    const struct CPU_State initial_cpu = {.pc=0xa8e0, .a=0xd3, .x=0xd1, .y=0x81, .sp=0x40, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x00d1, .value=0x2f}, {.addr=0xa8e0, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xa8e1, .a=0x03, .x=0xd1, .y=0x81, .sp=0x40, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x00d1, .value=0x2f}, {.addr=0xa8e0, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xa8e0, .value=0x26, .type=IO_READ},
        {.addr=0xa8e1, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d1, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_025E) {
    const struct CPU_State initial_cpu = {.pc=0x065b, .a=0x0f, .x=0x7b, .y=0xdf, .sp=0x0b, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0xa1}, {.addr=0x065b, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x065c, .a=0x01, .x=0x7b, .y=0xdf, .sp=0x0b, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0xa1}, {.addr=0x065b, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x065b, .value=0x26, .type=IO_READ},
        {.addr=0x065c, .value=DUMMY, .type=IO_READ},
        {.addr=0x017b, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_025F) {
    const struct CPU_State initial_cpu = {.pc=0x6cfa, .a=0xa1, .x=0x3c, .y=0xb1, .sp=0x3f, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x003c, .value=0xc4}, {.addr=0x6cfa, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x6cfb, .a=0x80, .x=0x3c, .y=0xb1, .sp=0x3f, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x003c, .value=0xc4}, {.addr=0x6cfa, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x6cfa, .value=0x26, .type=IO_READ},
        {.addr=0x6cfb, .value=DUMMY, .type=IO_READ},
        {.addr=0x003c, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0260) {
    const struct CPU_State initial_cpu = {.pc=0x8435, .a=0xdf, .x=0x8f, .y=0xe6, .sp=0x0e, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x008f, .value=0x40}, {.addr=0x8435, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x8436, .a=0x40, .x=0x8f, .y=0xe6, .sp=0x0e, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x008f, .value=0x40}, {.addr=0x8435, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x8435, .value=0x26, .type=IO_READ},
        {.addr=0x8436, .value=DUMMY, .type=IO_READ},
        {.addr=0x008f, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0261) {
    const struct CPU_State initial_cpu = {.pc=0x581e, .a=0x8c, .x=0x0b, .y=0xc8, .sp=0x10, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0x15}, {.addr=0x581e, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x581f, .a=0x04, .x=0x0b, .y=0xc8, .sp=0x10, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0x15}, {.addr=0x581e, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x581e, .value=0x26, .type=IO_READ},
        {.addr=0x581f, .value=DUMMY, .type=IO_READ},
        {.addr=0x010b, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0262) {
    const struct CPU_State initial_cpu = {.pc=0x9f66, .a=0x15, .x=0xd6, .y=0xb1, .sp=0xbc, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x01d6, .value=0x29}, {.addr=0x9f66, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x9f67, .a=0x01, .x=0xd6, .y=0xb1, .sp=0xbc, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01d6, .value=0x29}, {.addr=0x9f66, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x9f66, .value=0x26, .type=IO_READ},
        {.addr=0x9f67, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d6, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0263) {
    const struct CPU_State initial_cpu = {.pc=0x4369, .a=0xb1, .x=0x7c, .y=0x49, .sp=0x72, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x007c, .value=0x9e}, {.addr=0x4369, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x436a, .a=0x90, .x=0x7c, .y=0x49, .sp=0x72, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x007c, .value=0x9e}, {.addr=0x4369, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x4369, .value=0x26, .type=IO_READ},
        {.addr=0x436a, .value=DUMMY, .type=IO_READ},
        {.addr=0x007c, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0264) {
    const struct CPU_State initial_cpu = {.pc=0xb6d8, .a=0xa6, .x=0x34, .y=0x01, .sp=0xa9, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x0034, .value=0xed}, {.addr=0xb6d8, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xb6d9, .a=0xa4, .x=0x34, .y=0x01, .sp=0xa9, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x0034, .value=0xed}, {.addr=0xb6d8, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xb6d8, .value=0x26, .type=IO_READ},
        {.addr=0xb6d9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0034, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0265) {
    const struct CPU_State initial_cpu = {.pc=0x5b5f, .a=0x40, .x=0x00, .y=0x41, .sp=0xc1, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x0000, .value=0x5d}, {.addr=0x5b5f, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x5b60, .a=0x40, .x=0x00, .y=0x41, .sp=0xc1, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0000, .value=0x5d}, {.addr=0x5b5f, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x5b5f, .value=0x26, .type=IO_READ},
        {.addr=0x5b60, .value=DUMMY, .type=IO_READ},
        {.addr=0x0000, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0266) {
    const struct CPU_State initial_cpu = {.pc=0x67bc, .a=0x06, .x=0x41, .y=0xaf, .sp=0xae, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x0041, .value=0x31}, {.addr=0x67bc, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x67bd, .a=0x00, .x=0x41, .y=0xaf, .sp=0xae, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x0041, .value=0x31}, {.addr=0x67bc, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x67bc, .value=0x26, .type=IO_READ},
        {.addr=0x67bd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0041, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0267) {
    const struct CPU_State initial_cpu = {.pc=0xfe3e, .a=0xae, .x=0x2f, .y=0xc0, .sp=0x06, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x012f, .value=0x23}, {.addr=0xfe3e, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xfe3f, .a=0x22, .x=0x2f, .y=0xc0, .sp=0x06, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x012f, .value=0x23}, {.addr=0xfe3e, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xfe3e, .value=0x26, .type=IO_READ},
        {.addr=0xfe3f, .value=DUMMY, .type=IO_READ},
        {.addr=0x012f, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0268) {
    const struct CPU_State initial_cpu = {.pc=0xd7e8, .a=0xef, .x=0xf9, .y=0x8a, .sp=0xd8, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x01f9, .value=0x04}, {.addr=0xd7e8, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xd7e9, .a=0x04, .x=0xf9, .y=0x8a, .sp=0xd8, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x01f9, .value=0x04}, {.addr=0xd7e8, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xd7e8, .value=0x26, .type=IO_READ},
        {.addr=0xd7e9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f9, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0269) {
    const struct CPU_State initial_cpu = {.pc=0x4682, .a=0x62, .x=0x45, .y=0xe1, .sp=0xf7, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0xda}, {.addr=0x4682, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x4683, .a=0x42, .x=0x45, .y=0xe1, .sp=0xf7, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0xda}, {.addr=0x4682, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x4682, .value=0x26, .type=IO_READ},
        {.addr=0x4683, .value=DUMMY, .type=IO_READ},
        {.addr=0x0145, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_026A) {
    const struct CPU_State initial_cpu = {.pc=0xbef5, .a=0xc9, .x=0x97, .y=0xdc, .sp=0x36, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x0197, .value=0x1a}, {.addr=0xbef5, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xbef6, .a=0x08, .x=0x97, .y=0xdc, .sp=0x36, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0197, .value=0x1a}, {.addr=0xbef5, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xbef5, .value=0x26, .type=IO_READ},
        {.addr=0xbef6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0197, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_026B) {
    const struct CPU_State initial_cpu = {.pc=0xbd23, .a=0xa1, .x=0xc0, .y=0xb6, .sp=0xf4, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x00c0, .value=0x59}, {.addr=0xbd23, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xbd24, .a=0x01, .x=0xc0, .y=0xb6, .sp=0xf4, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x00c0, .value=0x59}, {.addr=0xbd23, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xbd23, .value=0x26, .type=IO_READ},
        {.addr=0xbd24, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c0, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_026C) {
    const struct CPU_State initial_cpu = {.pc=0xd43b, .a=0x33, .x=0xbc, .y=0xf4, .sp=0xf3, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x01bc, .value=0x5b}, {.addr=0xd43b, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xd43c, .a=0x13, .x=0xbc, .y=0xf4, .sp=0xf3, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x01bc, .value=0x5b}, {.addr=0xd43b, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xd43b, .value=0x26, .type=IO_READ},
        {.addr=0xd43c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bc, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_026D) {
    const struct CPU_State initial_cpu = {.pc=0x865d, .a=0xc1, .x=0xdb, .y=0x86, .sp=0x32, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x00db, .value=0x6b}, {.addr=0x865d, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x865e, .a=0x41, .x=0xdb, .y=0x86, .sp=0x32, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x00db, .value=0x6b}, {.addr=0x865d, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x865d, .value=0x26, .type=IO_READ},
        {.addr=0x865e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00db, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_026E) {
    const struct CPU_State initial_cpu = {.pc=0x5cab, .a=0x4f, .x=0x54, .y=0x3c, .sp=0xec, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x0154, .value=0x0d}, {.addr=0x5cab, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x5cac, .a=0x0d, .x=0x54, .y=0x3c, .sp=0xec, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x0154, .value=0x0d}, {.addr=0x5cab, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x5cab, .value=0x26, .type=IO_READ},
        {.addr=0x5cac, .value=DUMMY, .type=IO_READ},
        {.addr=0x0154, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_026F) {
    const struct CPU_State initial_cpu = {.pc=0xd08b, .a=0x07, .x=0xc3, .y=0x26, .sp=0x4a, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0x65}, {.addr=0xd08b, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xd08c, .a=0x05, .x=0xc3, .y=0x26, .sp=0x4a, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0x65}, {.addr=0xd08b, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xd08b, .value=0x26, .type=IO_READ},
        {.addr=0xd08c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c3, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0270) {
    const struct CPU_State initial_cpu = {.pc=0xac57, .a=0x26, .x=0xd1, .y=0xde, .sp=0xe9, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0x1c}, {.addr=0xac57, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xac58, .a=0x04, .x=0xd1, .y=0xde, .sp=0xe9, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0x1c}, {.addr=0xac57, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xac57, .value=0x26, .type=IO_READ},
        {.addr=0xac58, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d1, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0271) {
    const struct CPU_State initial_cpu = {.pc=0x5cbe, .a=0x33, .x=0x20, .y=0xdc, .sp=0x7d, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x0020, .value=0x27}, {.addr=0x5cbe, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x5cbf, .a=0x23, .x=0x20, .y=0xdc, .sp=0x7d, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x0020, .value=0x27}, {.addr=0x5cbe, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x5cbe, .value=0x26, .type=IO_READ},
        {.addr=0x5cbf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0020, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0272) {
    const struct CPU_State initial_cpu = {.pc=0x238c, .a=0x48, .x=0x94, .y=0xc2, .sp=0xc0, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0x47}, {.addr=0x238c, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x238d, .a=0x40, .x=0x94, .y=0xc2, .sp=0xc0, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0x47}, {.addr=0x238c, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x238c, .value=0x26, .type=IO_READ},
        {.addr=0x238d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0194, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0273) {
    const struct CPU_State initial_cpu = {.pc=0xf3e5, .a=0x00, .x=0x82, .y=0x21, .sp=0x1f, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x0082, .value=0xc5}, {.addr=0xf3e5, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xf3e6, .a=0x00, .x=0x82, .y=0x21, .sp=0x1f, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x0082, .value=0xc5}, {.addr=0xf3e5, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xf3e5, .value=0x26, .type=IO_READ},
        {.addr=0xf3e6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0082, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0274) {
    const struct CPU_State initial_cpu = {.pc=0x674d, .a=0xf6, .x=0x03, .y=0x51, .sp=0x73, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x0003, .value=0x09}, {.addr=0x674d, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x674e, .a=0x00, .x=0x03, .y=0x51, .sp=0x73, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x0003, .value=0x09}, {.addr=0x674d, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x674d, .value=0x26, .type=IO_READ},
        {.addr=0x674e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0003, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0275) {
    const struct CPU_State initial_cpu = {.pc=0x9c76, .a=0x77, .x=0x04, .y=0x2a, .sp=0xb0, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0x23}, {.addr=0x9c76, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x9c77, .a=0x23, .x=0x04, .y=0x2a, .sp=0xb0, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0x23}, {.addr=0x9c76, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x9c76, .value=0x26, .type=IO_READ},
        {.addr=0x9c77, .value=DUMMY, .type=IO_READ},
        {.addr=0x0104, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0276) {
    const struct CPU_State initial_cpu = {.pc=0x65a9, .a=0xce, .x=0xa4, .y=0xdb, .sp=0x10, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x01a4, .value=0x5a}, {.addr=0x65a9, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x65aa, .a=0x4a, .x=0xa4, .y=0xdb, .sp=0x10, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01a4, .value=0x5a}, {.addr=0x65a9, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x65a9, .value=0x26, .type=IO_READ},
        {.addr=0x65aa, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a4, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0277) {
    const struct CPU_State initial_cpu = {.pc=0xa0a1, .a=0x07, .x=0x5c, .y=0x1f, .sp=0x9f, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0x8c}, {.addr=0xa0a1, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xa0a2, .a=0x04, .x=0x5c, .y=0x1f, .sp=0x9f, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0x8c}, {.addr=0xa0a1, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xa0a1, .value=0x26, .type=IO_READ},
        {.addr=0xa0a2, .value=DUMMY, .type=IO_READ},
        {.addr=0x015c, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0278) {
    const struct CPU_State initial_cpu = {.pc=0x3ff9, .a=0x1b, .x=0x40, .y=0xb2, .sp=0x37, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x0140, .value=0x2c}, {.addr=0x3ff9, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x3ffa, .a=0x08, .x=0x40, .y=0xb2, .sp=0x37, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0140, .value=0x2c}, {.addr=0x3ff9, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x3ff9, .value=0x26, .type=IO_READ},
        {.addr=0x3ffa, .value=DUMMY, .type=IO_READ},
        {.addr=0x0140, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0279) {
    const struct CPU_State initial_cpu = {.pc=0xf4f0, .a=0x28, .x=0x6f, .y=0xe7, .sp=0x20, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x006f, .value=0x67}, {.addr=0xf4f0, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xf4f1, .a=0x20, .x=0x6f, .y=0xe7, .sp=0x20, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x006f, .value=0x67}, {.addr=0xf4f0, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xf4f0, .value=0x26, .type=IO_READ},
        {.addr=0xf4f1, .value=DUMMY, .type=IO_READ},
        {.addr=0x006f, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_027A) {
    const struct CPU_State initial_cpu = {.pc=0x6a6d, .a=0x7d, .x=0xdd, .y=0x4b, .sp=0xa8, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x00dd, .value=0x5a}, {.addr=0x6a6d, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x6a6e, .a=0x58, .x=0xdd, .y=0x4b, .sp=0xa8, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x00dd, .value=0x5a}, {.addr=0x6a6d, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x6a6d, .value=0x26, .type=IO_READ},
        {.addr=0x6a6e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00dd, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_027B) {
    const struct CPU_State initial_cpu = {.pc=0x60bd, .a=0xa8, .x=0xe1, .y=0xd4, .sp=0x00, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x00e1, .value=0x6c}, {.addr=0x60bd, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x60be, .a=0x28, .x=0xe1, .y=0xd4, .sp=0x00, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x00e1, .value=0x6c}, {.addr=0x60bd, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x60bd, .value=0x26, .type=IO_READ},
        {.addr=0x60be, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e1, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_027C) {
    const struct CPU_State initial_cpu = {.pc=0xc4a3, .a=0x04, .x=0x14, .y=0xbd, .sp=0x25, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x0014, .value=0x6d}, {.addr=0xc4a3, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xc4a4, .a=0x04, .x=0x14, .y=0xbd, .sp=0x25, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x0014, .value=0x6d}, {.addr=0xc4a3, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xc4a3, .value=0x26, .type=IO_READ},
        {.addr=0xc4a4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0014, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_027D) {
    const struct CPU_State initial_cpu = {.pc=0xc3d7, .a=0x70, .x=0x9b, .y=0xb4, .sp=0x0b, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x019b, .value=0xdb}, {.addr=0xc3d7, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xc3d8, .a=0x50, .x=0x9b, .y=0xb4, .sp=0x0b, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x019b, .value=0xdb}, {.addr=0xc3d7, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xc3d7, .value=0x26, .type=IO_READ},
        {.addr=0xc3d8, .value=DUMMY, .type=IO_READ},
        {.addr=0x019b, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_027E) {
    const struct CPU_State initial_cpu = {.pc=0xe9c7, .a=0xdd, .x=0xa2, .y=0x2f, .sp=0x1f, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x00a2, .value=0x0d}, {.addr=0xe9c7, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xe9c8, .a=0x0d, .x=0xa2, .y=0x2f, .sp=0x1f, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x00a2, .value=0x0d}, {.addr=0xe9c7, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xe9c7, .value=0x26, .type=IO_READ},
        {.addr=0xe9c8, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a2, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0280) {
    const struct CPU_State initial_cpu = {.pc=0x3888, .a=0x7f, .x=0x88, .y=0xc0, .sp=0xe3, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x0088, .value=0xa3}, {.addr=0x3888, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x3889, .a=0x23, .x=0x88, .y=0xc0, .sp=0xe3, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0088, .value=0xa3}, {.addr=0x3888, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x3888, .value=0x26, .type=IO_READ},
        {.addr=0x3889, .value=DUMMY, .type=IO_READ},
        {.addr=0x0088, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0281) {
    const struct CPU_State initial_cpu = {.pc=0xe18c, .a=0xd3, .x=0xeb, .y=0x01, .sp=0xf0, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x00eb, .value=0xaa}, {.addr=0xe18c, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xe18d, .a=0x82, .x=0xeb, .y=0x01, .sp=0xf0, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x00eb, .value=0xaa}, {.addr=0xe18c, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xe18c, .value=0x26, .type=IO_READ},
        {.addr=0xe18d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00eb, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0282) {
    const struct CPU_State initial_cpu = {.pc=0x56b7, .a=0xea, .x=0xd8, .y=0xd1, .sp=0xdb, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x01d8, .value=0x0a}, {.addr=0x56b7, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x56b8, .a=0x0a, .x=0xd8, .y=0xd1, .sp=0xdb, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x01d8, .value=0x0a}, {.addr=0x56b7, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x56b7, .value=0x26, .type=IO_READ},
        {.addr=0x56b8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d8, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0283) {
    const struct CPU_State initial_cpu = {.pc=0x1dfb, .a=0xae, .x=0xec, .y=0xa1, .sp=0xf0, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x01ec, .value=0x4f}, {.addr=0x1dfb, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x1dfc, .a=0x0e, .x=0xec, .y=0xa1, .sp=0xf0, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x01ec, .value=0x4f}, {.addr=0x1dfb, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x1dfb, .value=0x26, .type=IO_READ},
        {.addr=0x1dfc, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ec, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0284) {
    const struct CPU_State initial_cpu = {.pc=0xb7e7, .a=0x29, .x=0xc0, .y=0x35, .sp=0x3a, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x00c0, .value=0x61}, {.addr=0xb7e7, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xb7e8, .a=0x21, .x=0xc0, .y=0x35, .sp=0x3a, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x00c0, .value=0x61}, {.addr=0xb7e7, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xb7e7, .value=0x26, .type=IO_READ},
        {.addr=0xb7e8, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c0, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0285) {
    const struct CPU_State initial_cpu = {.pc=0x9f57, .a=0xfc, .x=0x81, .y=0x72, .sp=0xfa, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x0081, .value=0x7c}, {.addr=0x9f57, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x9f58, .a=0x7c, .x=0x81, .y=0x72, .sp=0xfa, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0081, .value=0x7c}, {.addr=0x9f57, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x9f57, .value=0x26, .type=IO_READ},
        {.addr=0x9f58, .value=DUMMY, .type=IO_READ},
        {.addr=0x0081, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0286) {
    const struct CPU_State initial_cpu = {.pc=0xb4b8, .a=0xad, .x=0x4e, .y=0x49, .sp=0x2e, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x004e, .value=0x4d}, {.addr=0xb4b8, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xb4b9, .a=0x0d, .x=0x4e, .y=0x49, .sp=0x2e, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x004e, .value=0x4d}, {.addr=0xb4b8, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xb4b8, .value=0x26, .type=IO_READ},
        {.addr=0xb4b9, .value=DUMMY, .type=IO_READ},
        {.addr=0x004e, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0287) {
    const struct CPU_State initial_cpu = {.pc=0xf4d5, .a=0x63, .x=0xb1, .y=0x4b, .sp=0x04, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0x32}, {.addr=0xf4d5, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xf4d6, .a=0x22, .x=0xb1, .y=0x4b, .sp=0x04, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0x32}, {.addr=0xf4d5, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xf4d5, .value=0x26, .type=IO_READ},
        {.addr=0xf4d6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b1, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0288) {
    const struct CPU_State initial_cpu = {.pc=0x995e, .a=0x38, .x=0xa4, .y=0xf5, .sp=0x08, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x00a4, .value=0x2e}, {.addr=0x995e, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x995f, .a=0x28, .x=0xa4, .y=0xf5, .sp=0x08, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x00a4, .value=0x2e}, {.addr=0x995e, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x995e, .value=0x26, .type=IO_READ},
        {.addr=0x995f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a4, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0289) {
    const struct CPU_State initial_cpu = {.pc=0x4eec, .a=0xd4, .x=0x7a, .y=0x4c, .sp=0xc7, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0xd2}, {.addr=0x4eec, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x4eed, .a=0xd0, .x=0x7a, .y=0x4c, .sp=0xc7, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0xd2}, {.addr=0x4eec, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x4eec, .value=0x26, .type=IO_READ},
        {.addr=0x4eed, .value=DUMMY, .type=IO_READ},
        {.addr=0x017a, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_028A) {
    const struct CPU_State initial_cpu = {.pc=0xe412, .a=0x52, .x=0xe6, .y=0x8a, .sp=0xe6, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0x98}, {.addr=0xe412, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xe413, .a=0x10, .x=0xe6, .y=0x8a, .sp=0xe6, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0x98}, {.addr=0xe412, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xe412, .value=0x26, .type=IO_READ},
        {.addr=0xe413, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e6, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_028C) {
    const struct CPU_State initial_cpu = {.pc=0x4a03, .a=0x90, .x=0x10, .y=0x30, .sp=0x11, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0xf3}, {.addr=0x4a03, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x4a04, .a=0x90, .x=0x10, .y=0x30, .sp=0x11, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0xf3}, {.addr=0x4a03, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x4a03, .value=0x26, .type=IO_READ},
        {.addr=0x4a04, .value=DUMMY, .type=IO_READ},
        {.addr=0x0110, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_028D) {
    const struct CPU_State initial_cpu = {.pc=0x9efe, .a=0x61, .x=0x30, .y=0x05, .sp=0x55, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x0130, .value=0x68}, {.addr=0x9efe, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x9eff, .a=0x60, .x=0x30, .y=0x05, .sp=0x55, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0130, .value=0x68}, {.addr=0x9efe, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x9efe, .value=0x26, .type=IO_READ},
        {.addr=0x9eff, .value=DUMMY, .type=IO_READ},
        {.addr=0x0130, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_028E) {
    const struct CPU_State initial_cpu = {.pc=0xda6f, .a=0x27, .x=0x5f, .y=0xd9, .sp=0x5a, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0x79}, {.addr=0xda6f, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xda70, .a=0x21, .x=0x5f, .y=0xd9, .sp=0x5a, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0x79}, {.addr=0xda6f, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xda6f, .value=0x26, .type=IO_READ},
        {.addr=0xda70, .value=DUMMY, .type=IO_READ},
        {.addr=0x015f, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_028F) {
    const struct CPU_State initial_cpu = {.pc=0x7404, .a=0x02, .x=0xd3, .y=0x83, .sp=0xd4, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x01d3, .value=0xd2}, {.addr=0x7404, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x7405, .a=0x02, .x=0xd3, .y=0x83, .sp=0xd4, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01d3, .value=0xd2}, {.addr=0x7404, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x7404, .value=0x26, .type=IO_READ},
        {.addr=0x7405, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d3, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0290) {
    const struct CPU_State initial_cpu = {.pc=0x3808, .a=0x13, .x=0xb1, .y=0xbe, .sp=0x01, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0x90}, {.addr=0x3808, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x3809, .a=0x10, .x=0xb1, .y=0xbe, .sp=0x01, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0x90}, {.addr=0x3808, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x3808, .value=0x26, .type=IO_READ},
        {.addr=0x3809, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b1, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0291) {
    const struct CPU_State initial_cpu = {.pc=0x56a3, .a=0x58, .x=0x31, .y=0xaa, .sp=0x0f, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x0031, .value=0xb9}, {.addr=0x56a3, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x56a4, .a=0x18, .x=0x31, .y=0xaa, .sp=0x0f, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x0031, .value=0xb9}, {.addr=0x56a3, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x56a3, .value=0x26, .type=IO_READ},
        {.addr=0x56a4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0031, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0292) {
    const struct CPU_State initial_cpu = {.pc=0xf0fc, .a=0x12, .x=0x10, .y=0x95, .sp=0x2d, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0xd3}, {.addr=0xf0fc, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xf0fd, .a=0x12, .x=0x10, .y=0x95, .sp=0x2d, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0xd3}, {.addr=0xf0fc, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xf0fc, .value=0x26, .type=IO_READ},
        {.addr=0xf0fd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0110, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0293) {
    const struct CPU_State initial_cpu = {.pc=0x28df, .a=0xef, .x=0xb8, .y=0x4d, .sp=0xfd, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x00b8, .value=0x19}, {.addr=0x28df, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x28e0, .a=0x09, .x=0xb8, .y=0x4d, .sp=0xfd, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x00b8, .value=0x19}, {.addr=0x28df, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x28df, .value=0x26, .type=IO_READ},
        {.addr=0x28e0, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b8, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0295) {
    const struct CPU_State initial_cpu = {.pc=0xd0d5, .a=0x95, .x=0xcb, .y=0x1a, .sp=0xc9, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x01cb, .value=0x22}, {.addr=0xd0d5, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xd0d6, .a=0x00, .x=0xcb, .y=0x1a, .sp=0xc9, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x01cb, .value=0x22}, {.addr=0xd0d5, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xd0d5, .value=0x26, .type=IO_READ},
        {.addr=0xd0d6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cb, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0296) {
    const struct CPU_State initial_cpu = {.pc=0x87f1, .a=0xca, .x=0x3f, .y=0xce, .sp=0xfc, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x003f, .value=0x81}, {.addr=0x87f1, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x87f2, .a=0x80, .x=0x3f, .y=0xce, .sp=0xfc, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x003f, .value=0x81}, {.addr=0x87f1, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x87f1, .value=0x26, .type=IO_READ},
        {.addr=0x87f2, .value=DUMMY, .type=IO_READ},
        {.addr=0x003f, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0297) {
    const struct CPU_State initial_cpu = {.pc=0x3b70, .a=0xc9, .x=0x94, .y=0xac, .sp=0x72, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0xf4}, {.addr=0x3b70, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x3b71, .a=0xc0, .x=0x94, .y=0xac, .sp=0x72, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0xf4}, {.addr=0x3b70, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x3b70, .value=0x26, .type=IO_READ},
        {.addr=0x3b71, .value=DUMMY, .type=IO_READ},
        {.addr=0x0194, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0298) {
    const struct CPU_State initial_cpu = {.pc=0x1936, .a=0xb7, .x=0xdb, .y=0x7f, .sp=0x62, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x00db, .value=0xbf}, {.addr=0x1936, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x1937, .a=0xb7, .x=0xdb, .y=0x7f, .sp=0x62, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x00db, .value=0xbf}, {.addr=0x1936, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x1936, .value=0x26, .type=IO_READ},
        {.addr=0x1937, .value=DUMMY, .type=IO_READ},
        {.addr=0x00db, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0299) {
    const struct CPU_State initial_cpu = {.pc=0x3d49, .a=0x08, .x=0x22, .y=0x0f, .sp=0x7e, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x0122, .value=0xc3}, {.addr=0x3d49, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x3d4a, .a=0x00, .x=0x22, .y=0x0f, .sp=0x7e, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x0122, .value=0xc3}, {.addr=0x3d49, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x3d49, .value=0x26, .type=IO_READ},
        {.addr=0x3d4a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0122, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_029A) {
    const struct CPU_State initial_cpu = {.pc=0x02da, .a=0x29, .x=0x7f, .y=0x09, .sp=0x45, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x007f, .value=0x30}, {.addr=0x02da, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x02db, .a=0x20, .x=0x7f, .y=0x09, .sp=0x45, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x007f, .value=0x30}, {.addr=0x02da, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x02da, .value=0x26, .type=IO_READ},
        {.addr=0x02db, .value=DUMMY, .type=IO_READ},
        {.addr=0x007f, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_029B) {
    const struct CPU_State initial_cpu = {.pc=0x47dc, .a=0xd8, .x=0x49, .y=0x1f, .sp=0x5f, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x0049, .value=0x32}, {.addr=0x47dc, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x47dd, .a=0x10, .x=0x49, .y=0x1f, .sp=0x5f, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0049, .value=0x32}, {.addr=0x47dc, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x47dc, .value=0x26, .type=IO_READ},
        {.addr=0x47dd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0049, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_029C) {
    const struct CPU_State initial_cpu = {.pc=0x877f, .a=0x79, .x=0xd1, .y=0x6b, .sp=0xb5, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x00d1, .value=0x4f}, {.addr=0x877f, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x8780, .a=0x49, .x=0xd1, .y=0x6b, .sp=0xb5, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x00d1, .value=0x4f}, {.addr=0x877f, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x877f, .value=0x26, .type=IO_READ},
        {.addr=0x8780, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d1, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_029D) {
    const struct CPU_State initial_cpu = {.pc=0x2453, .a=0xcf, .x=0x8b, .y=0xc6, .sp=0x86, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x018b, .value=0xb7}, {.addr=0x2453, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x2454, .a=0x87, .x=0x8b, .y=0xc6, .sp=0x86, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x018b, .value=0xb7}, {.addr=0x2453, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x2453, .value=0x26, .type=IO_READ},
        {.addr=0x2454, .value=DUMMY, .type=IO_READ},
        {.addr=0x018b, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_029E) {
    const struct CPU_State initial_cpu = {.pc=0x433a, .a=0xfa, .x=0xa2, .y=0xf9, .sp=0x67, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x01a2, .value=0xcc}, {.addr=0x433a, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x433b, .a=0xc8, .x=0xa2, .y=0xf9, .sp=0x67, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x01a2, .value=0xcc}, {.addr=0x433a, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x433a, .value=0x26, .type=IO_READ},
        {.addr=0x433b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a2, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_029F) {
    const struct CPU_State initial_cpu = {.pc=0x3d38, .a=0xc7, .x=0x1c, .y=0xfd, .sp=0x24, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x001c, .value=0x4d}, {.addr=0x3d38, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x3d39, .a=0x45, .x=0x1c, .y=0xfd, .sp=0x24, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x001c, .value=0x4d}, {.addr=0x3d38, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x3d38, .value=0x26, .type=IO_READ},
        {.addr=0x3d39, .value=DUMMY, .type=IO_READ},
        {.addr=0x001c, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02A0) {
    const struct CPU_State initial_cpu = {.pc=0x390e, .a=0x92, .x=0xaf, .y=0xe0, .sp=0xdd, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x00af, .value=0x59}, {.addr=0x390e, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x390f, .a=0x10, .x=0xaf, .y=0xe0, .sp=0xdd, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x00af, .value=0x59}, {.addr=0x390e, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x390e, .value=0x26, .type=IO_READ},
        {.addr=0x390f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00af, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02A1) {
    const struct CPU_State initial_cpu = {.pc=0x2371, .a=0xf3, .x=0x4a, .y=0x1d, .sp=0x50, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0x3d}, {.addr=0x2371, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x2372, .a=0x31, .x=0x4a, .y=0x1d, .sp=0x50, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0x3d}, {.addr=0x2371, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x2371, .value=0x26, .type=IO_READ},
        {.addr=0x2372, .value=DUMMY, .type=IO_READ},
        {.addr=0x014a, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02A2) {
    const struct CPU_State initial_cpu = {.pc=0x5144, .a=0xc9, .x=0xc4, .y=0x0e, .sp=0x33, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x00c4, .value=0x66}, {.addr=0x5144, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x5145, .a=0x40, .x=0xc4, .y=0x0e, .sp=0x33, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x00c4, .value=0x66}, {.addr=0x5144, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x5144, .value=0x26, .type=IO_READ},
        {.addr=0x5145, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c4, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02A3) {
    const struct CPU_State initial_cpu = {.pc=0xde19, .a=0xb6, .x=0x34, .y=0x47, .sp=0xa6, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x0034, .value=0x1c}, {.addr=0xde19, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xde1a, .a=0x14, .x=0x34, .y=0x47, .sp=0xa6, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x0034, .value=0x1c}, {.addr=0xde19, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xde19, .value=0x26, .type=IO_READ},
        {.addr=0xde1a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0034, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02A4) {
    const struct CPU_State initial_cpu = {.pc=0x9d2f, .a=0x84, .x=0xa3, .y=0x1c, .sp=0x30, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x00a3, .value=0x16}, {.addr=0x9d2f, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x9d30, .a=0x04, .x=0xa3, .y=0x1c, .sp=0x30, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x00a3, .value=0x16}, {.addr=0x9d2f, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x9d2f, .value=0x26, .type=IO_READ},
        {.addr=0x9d30, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a3, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x94bf, .a=0x3b, .x=0x96, .y=0x0a, .sp=0xb0, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x0096, .value=0xe6}, {.addr=0x94bf, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x94c0, .a=0x22, .x=0x96, .y=0x0a, .sp=0xb0, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x0096, .value=0xe6}, {.addr=0x94bf, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x94bf, .value=0x26, .type=IO_READ},
        {.addr=0x94c0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0096, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02A6) {
    const struct CPU_State initial_cpu = {.pc=0x4a7a, .a=0x14, .x=0x48, .y=0x41, .sp=0xe5, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x0048, .value=0xa5}, {.addr=0x4a7a, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x4a7b, .a=0x04, .x=0x48, .y=0x41, .sp=0xe5, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x0048, .value=0xa5}, {.addr=0x4a7a, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x4a7a, .value=0x26, .type=IO_READ},
        {.addr=0x4a7b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0048, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02A8) {
    const struct CPU_State initial_cpu = {.pc=0xc72b, .a=0x27, .x=0x88, .y=0x4a, .sp=0x8b, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x0088, .value=0xd9}, {.addr=0xc72b, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xc72c, .a=0x01, .x=0x88, .y=0x4a, .sp=0x8b, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0088, .value=0xd9}, {.addr=0xc72b, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xc72b, .value=0x26, .type=IO_READ},
        {.addr=0xc72c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0088, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02A9) {
    const struct CPU_State initial_cpu = {.pc=0x8449, .a=0xe2, .x=0x47, .y=0x5f, .sp=0x85, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x0047, .value=0x86}, {.addr=0x8449, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x844a, .a=0x82, .x=0x47, .y=0x5f, .sp=0x85, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0047, .value=0x86}, {.addr=0x8449, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x8449, .value=0x26, .type=IO_READ},
        {.addr=0x844a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0047, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02AA) {
    const struct CPU_State initial_cpu = {.pc=0xb90b, .a=0x25, .x=0x73, .y=0xf4, .sp=0xce, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x0073, .value=0xe0}, {.addr=0xb90b, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xb90c, .a=0x20, .x=0x73, .y=0xf4, .sp=0xce, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0073, .value=0xe0}, {.addr=0xb90b, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xb90b, .value=0x26, .type=IO_READ},
        {.addr=0xb90c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0073, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02AB) {
    const struct CPU_State initial_cpu = {.pc=0xb04d, .a=0x9a, .x=0xe5, .y=0x4c, .sp=0x88, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x00e5, .value=0x5c}, {.addr=0xb04d, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xb04e, .a=0x18, .x=0xe5, .y=0x4c, .sp=0x88, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x00e5, .value=0x5c}, {.addr=0xb04d, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xb04d, .value=0x26, .type=IO_READ},
        {.addr=0xb04e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e5, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x1bab, .a=0x41, .x=0x1f, .y=0x9d, .sp=0xc7, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0x8e}, {.addr=0x1bab, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x1bac, .a=0x00, .x=0x1f, .y=0x9d, .sp=0xc7, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0x8e}, {.addr=0x1bab, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x1bab, .value=0x26, .type=IO_READ},
        {.addr=0x1bac, .value=DUMMY, .type=IO_READ},
        {.addr=0x011f, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02AD) {
    const struct CPU_State initial_cpu = {.pc=0xf077, .a=0x87, .x=0x93, .y=0xdf, .sp=0x32, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x0093, .value=0xf8}, {.addr=0xf077, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xf078, .a=0x80, .x=0x93, .y=0xdf, .sp=0x32, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x0093, .value=0xf8}, {.addr=0xf077, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xf077, .value=0x26, .type=IO_READ},
        {.addr=0xf078, .value=DUMMY, .type=IO_READ},
        {.addr=0x0093, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02AE) {
    const struct CPU_State initial_cpu = {.pc=0x3bbc, .a=0x16, .x=0x25, .y=0x6f, .sp=0x88, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x0025, .value=0x2e}, {.addr=0x3bbc, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x3bbd, .a=0x06, .x=0x25, .y=0x6f, .sp=0x88, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0025, .value=0x2e}, {.addr=0x3bbc, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x3bbc, .value=0x26, .type=IO_READ},
        {.addr=0x3bbd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0025, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x4786, .a=0xff, .x=0x1b, .y=0x14, .sp=0xed, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0x01}, {.addr=0x4786, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x4787, .a=0x01, .x=0x1b, .y=0x14, .sp=0xed, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0x01}, {.addr=0x4786, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x4786, .value=0x26, .type=IO_READ},
        {.addr=0x4787, .value=DUMMY, .type=IO_READ},
        {.addr=0x011b, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02B0) {
    const struct CPU_State initial_cpu = {.pc=0x2761, .a=0x8b, .x=0xb5, .y=0x01, .sp=0xd4, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x01b5, .value=0x5f}, {.addr=0x2761, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x2762, .a=0x0b, .x=0xb5, .y=0x01, .sp=0xd4, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01b5, .value=0x5f}, {.addr=0x2761, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x2761, .value=0x26, .type=IO_READ},
        {.addr=0x2762, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b5, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02B1) {
    const struct CPU_State initial_cpu = {.pc=0x11bd, .a=0x08, .x=0x14, .y=0x8b, .sp=0xe8, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x0014, .value=0xeb}, {.addr=0x11bd, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x11be, .a=0x08, .x=0x14, .y=0x8b, .sp=0xe8, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x0014, .value=0xeb}, {.addr=0x11bd, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x11bd, .value=0x26, .type=IO_READ},
        {.addr=0x11be, .value=DUMMY, .type=IO_READ},
        {.addr=0x0014, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02B2) {
    const struct CPU_State initial_cpu = {.pc=0x3dd5, .a=0xab, .x=0x28, .y=0x1c, .sp=0xc3, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x0028, .value=0x69}, {.addr=0x3dd5, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x3dd6, .a=0x29, .x=0x28, .y=0x1c, .sp=0xc3, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0028, .value=0x69}, {.addr=0x3dd5, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x3dd5, .value=0x26, .type=IO_READ},
        {.addr=0x3dd6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0028, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02B3) {
    const struct CPU_State initial_cpu = {.pc=0x277a, .a=0x46, .x=0x5e, .y=0x7e, .sp=0xa4, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x015e, .value=0xbc}, {.addr=0x277a, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x277b, .a=0x04, .x=0x5e, .y=0x7e, .sp=0xa4, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x015e, .value=0xbc}, {.addr=0x277a, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x277a, .value=0x26, .type=IO_READ},
        {.addr=0x277b, .value=DUMMY, .type=IO_READ},
        {.addr=0x015e, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02B4) {
    const struct CPU_State initial_cpu = {.pc=0xdd77, .a=0xdb, .x=0x30, .y=0x64, .sp=0x69, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0030, .value=0xd8}, {.addr=0xdd77, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xdd78, .a=0xd8, .x=0x30, .y=0x64, .sp=0x69, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x0030, .value=0xd8}, {.addr=0xdd77, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xdd77, .value=0x26, .type=IO_READ},
        {.addr=0xdd78, .value=DUMMY, .type=IO_READ},
        {.addr=0x0030, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02B5) {
    const struct CPU_State initial_cpu = {.pc=0xda7d, .a=0x70, .x=0x64, .y=0xe3, .sp=0xe4, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0xf1}, {.addr=0xda7d, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xda7e, .a=0x70, .x=0x64, .y=0xe3, .sp=0xe4, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0xf1}, {.addr=0xda7d, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xda7d, .value=0x26, .type=IO_READ},
        {.addr=0xda7e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0164, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02B6) {
    const struct CPU_State initial_cpu = {.pc=0x3265, .a=0x60, .x=0x79, .y=0x22, .sp=0xaa, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x0079, .value=0xcd}, {.addr=0x3265, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x3266, .a=0x40, .x=0x79, .y=0x22, .sp=0xaa, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x0079, .value=0xcd}, {.addr=0x3265, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x3265, .value=0x26, .type=IO_READ},
        {.addr=0x3266, .value=DUMMY, .type=IO_READ},
        {.addr=0x0079, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02B8) {
    const struct CPU_State initial_cpu = {.pc=0x7d63, .a=0x2e, .x=0x41, .y=0x71, .sp=0xd7, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x0141, .value=0x4d}, {.addr=0x7d63, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x7d64, .a=0x0c, .x=0x41, .y=0x71, .sp=0xd7, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x0141, .value=0x4d}, {.addr=0x7d63, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x7d63, .value=0x26, .type=IO_READ},
        {.addr=0x7d64, .value=DUMMY, .type=IO_READ},
        {.addr=0x0141, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02B9) {
    const struct CPU_State initial_cpu = {.pc=0xdf23, .a=0xf4, .x=0xc7, .y=0x4f, .sp=0x24, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x01c7, .value=0x20}, {.addr=0xdf23, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xdf24, .a=0x20, .x=0xc7, .y=0x4f, .sp=0x24, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x01c7, .value=0x20}, {.addr=0xdf23, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xdf23, .value=0x26, .type=IO_READ},
        {.addr=0xdf24, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c7, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02BA) {
    const struct CPU_State initial_cpu = {.pc=0x97f5, .a=0x1a, .x=0x7b, .y=0xce, .sp=0xde, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0xbf}, {.addr=0x97f5, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x97f6, .a=0x1a, .x=0x7b, .y=0xce, .sp=0xde, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0xbf}, {.addr=0x97f5, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x97f5, .value=0x26, .type=IO_READ},
        {.addr=0x97f6, .value=DUMMY, .type=IO_READ},
        {.addr=0x017b, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02BB) {
    const struct CPU_State initial_cpu = {.pc=0xd135, .a=0xd6, .x=0x76, .y=0xb5, .sp=0x1d, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x0176, .value=0xdc}, {.addr=0xd135, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xd136, .a=0xd4, .x=0x76, .y=0xb5, .sp=0x1d, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x0176, .value=0xdc}, {.addr=0xd135, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xd135, .value=0x26, .type=IO_READ},
        {.addr=0xd136, .value=DUMMY, .type=IO_READ},
        {.addr=0x0176, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02BC) {
    const struct CPU_State initial_cpu = {.pc=0xf95e, .a=0xd7, .x=0x8e, .y=0x22, .sp=0xe4, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0xd1}, {.addr=0xf95e, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xf95f, .a=0xd1, .x=0x8e, .y=0x22, .sp=0xe4, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0xd1}, {.addr=0xf95e, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xf95e, .value=0x26, .type=IO_READ},
        {.addr=0xf95f, .value=DUMMY, .type=IO_READ},
        {.addr=0x018e, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02BD) {
    const struct CPU_State initial_cpu = {.pc=0xaf7f, .a=0x17, .x=0xbb, .y=0x62, .sp=0x45, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x00bb, .value=0xef}, {.addr=0xaf7f, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xaf80, .a=0x07, .x=0xbb, .y=0x62, .sp=0x45, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x00bb, .value=0xef}, {.addr=0xaf7f, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xaf7f, .value=0x26, .type=IO_READ},
        {.addr=0xaf80, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bb, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02BE) {
    const struct CPU_State initial_cpu = {.pc=0x7f4c, .a=0xcc, .x=0x78, .y=0x61, .sp=0x78, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x0078, .value=0x08}, {.addr=0x7f4c, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x7f4d, .a=0x08, .x=0x78, .y=0x61, .sp=0x78, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x0078, .value=0x08}, {.addr=0x7f4c, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x7f4c, .value=0x26, .type=IO_READ},
        {.addr=0x7f4d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0078, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02BF) {
    const struct CPU_State initial_cpu = {.pc=0xa4af, .a=0x6c, .x=0x48, .y=0xe8, .sp=0x2d, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x0048, .value=0x51}, {.addr=0xa4af, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xa4b0, .a=0x40, .x=0x48, .y=0xe8, .sp=0x2d, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0048, .value=0x51}, {.addr=0xa4af, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xa4af, .value=0x26, .type=IO_READ},
        {.addr=0xa4b0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0048, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02C0) {
    const struct CPU_State initial_cpu = {.pc=0xde89, .a=0xd1, .x=0xcf, .y=0x3e, .sp=0x3c, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0xff}, {.addr=0xde89, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xde8a, .a=0xd1, .x=0xcf, .y=0x3e, .sp=0x3c, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0xff}, {.addr=0xde89, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xde89, .value=0x26, .type=IO_READ},
        {.addr=0xde8a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cf, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02C2) {
    const struct CPU_State initial_cpu = {.pc=0xc42e, .a=0x7a, .x=0x3d, .y=0x65, .sp=0x0c, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x003d, .value=0xc1}, {.addr=0xc42e, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xc42f, .a=0x40, .x=0x3d, .y=0x65, .sp=0x0c, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x003d, .value=0xc1}, {.addr=0xc42e, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xc42e, .value=0x26, .type=IO_READ},
        {.addr=0xc42f, .value=DUMMY, .type=IO_READ},
        {.addr=0x003d, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02C3) {
    const struct CPU_State initial_cpu = {.pc=0x9e0e, .a=0x6a, .x=0xe3, .y=0x83, .sp=0x51, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0x5e}, {.addr=0x9e0e, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x9e0f, .a=0x4a, .x=0xe3, .y=0x83, .sp=0x51, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0x5e}, {.addr=0x9e0e, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x9e0e, .value=0x26, .type=IO_READ},
        {.addr=0x9e0f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e3, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02C4) {
    const struct CPU_State initial_cpu = {.pc=0x46d0, .a=0x6a, .x=0x20, .y=0x67, .sp=0x13, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0xfe}, {.addr=0x46d0, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x46d1, .a=0x6a, .x=0x20, .y=0x67, .sp=0x13, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0xfe}, {.addr=0x46d0, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x46d0, .value=0x26, .type=IO_READ},
        {.addr=0x46d1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0120, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x5556, .a=0x73, .x=0x58, .y=0x34, .sp=0xfb, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x0058, .value=0xb7}, {.addr=0x5556, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x5557, .a=0x33, .x=0x58, .y=0x34, .sp=0xfb, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0058, .value=0xb7}, {.addr=0x5556, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x5556, .value=0x26, .type=IO_READ},
        {.addr=0x5557, .value=DUMMY, .type=IO_READ},
        {.addr=0x0058, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02C6) {
    const struct CPU_State initial_cpu = {.pc=0xdc1d, .a=0x40, .x=0x6a, .y=0x41, .sp=0x26, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0x46}, {.addr=0xdc1d, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xdc1e, .a=0x40, .x=0x6a, .y=0x41, .sp=0x26, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0x46}, {.addr=0xdc1d, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xdc1d, .value=0x26, .type=IO_READ},
        {.addr=0xdc1e, .value=DUMMY, .type=IO_READ},
        {.addr=0x016a, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02C7) {
    const struct CPU_State initial_cpu = {.pc=0xe721, .a=0xfb, .x=0xfa, .y=0x66, .sp=0x25, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x01fa, .value=0x32}, {.addr=0xe721, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xe722, .a=0x32, .x=0xfa, .y=0x66, .sp=0x25, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x01fa, .value=0x32}, {.addr=0xe721, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xe721, .value=0x26, .type=IO_READ},
        {.addr=0xe722, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fa, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02C8) {
    const struct CPU_State initial_cpu = {.pc=0x3de3, .a=0xb3, .x=0x75, .y=0xd8, .sp=0xcf, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x0075, .value=0xd9}, {.addr=0x3de3, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x3de4, .a=0x91, .x=0x75, .y=0xd8, .sp=0xcf, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0075, .value=0xd9}, {.addr=0x3de3, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x3de3, .value=0x26, .type=IO_READ},
        {.addr=0x3de4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0075, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02C9) {
    const struct CPU_State initial_cpu = {.pc=0xeebd, .a=0x3b, .x=0x9f, .y=0x1a, .sp=0x7e, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x019f, .value=0xde}, {.addr=0xeebd, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xeebe, .a=0x1a, .x=0x9f, .y=0x1a, .sp=0x7e, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x019f, .value=0xde}, {.addr=0xeebd, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xeebd, .value=0x26, .type=IO_READ},
        {.addr=0xeebe, .value=DUMMY, .type=IO_READ},
        {.addr=0x019f, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02CA) {
    const struct CPU_State initial_cpu = {.pc=0x7529, .a=0x85, .x=0xe3, .y=0x34, .sp=0xa8, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0xcd}, {.addr=0x7529, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x752a, .a=0x85, .x=0xe3, .y=0x34, .sp=0xa8, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0xcd}, {.addr=0x7529, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x7529, .value=0x26, .type=IO_READ},
        {.addr=0x752a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e3, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02CB) {
    const struct CPU_State initial_cpu = {.pc=0xbded, .a=0x1c, .x=0xb2, .y=0xfa, .sp=0x2b, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x00b2, .value=0x36}, {.addr=0xbded, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xbdee, .a=0x14, .x=0xb2, .y=0xfa, .sp=0x2b, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x00b2, .value=0x36}, {.addr=0xbded, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xbded, .value=0x26, .type=IO_READ},
        {.addr=0xbdee, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b2, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02CC) {
    const struct CPU_State initial_cpu = {.pc=0xb66e, .a=0x63, .x=0x1d, .y=0xfc, .sp=0x25, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x81}, {.addr=0xb66e, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xb66f, .a=0x01, .x=0x1d, .y=0xfc, .sp=0x25, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0x81}, {.addr=0xb66e, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xb66e, .value=0x26, .type=IO_READ},
        {.addr=0xb66f, .value=DUMMY, .type=IO_READ},
        {.addr=0x011d, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x6ded, .a=0x9a, .x=0x5e, .y=0x81, .sp=0x10, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x005e, .value=0x17}, {.addr=0x6ded, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x6dee, .a=0x12, .x=0x5e, .y=0x81, .sp=0x10, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x005e, .value=0x17}, {.addr=0x6ded, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x6ded, .value=0x26, .type=IO_READ},
        {.addr=0x6dee, .value=DUMMY, .type=IO_READ},
        {.addr=0x005e, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x8e4c, .a=0xd0, .x=0xff, .y=0xd8, .sp=0x5c, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x01ff, .value=0xa8}, {.addr=0x8e4c, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x8e4d, .a=0x80, .x=0xff, .y=0xd8, .sp=0x5c, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x01ff, .value=0xa8}, {.addr=0x8e4c, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x8e4c, .value=0x26, .type=IO_READ},
        {.addr=0x8e4d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ff, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02CF) {
    const struct CPU_State initial_cpu = {.pc=0x43d7, .a=0x0a, .x=0x76, .y=0xe2, .sp=0x1d, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x0076, .value=0xa9}, {.addr=0x43d7, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x43d8, .a=0x08, .x=0x76, .y=0xe2, .sp=0x1d, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0076, .value=0xa9}, {.addr=0x43d7, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x43d7, .value=0x26, .type=IO_READ},
        {.addr=0x43d8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0076, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02D1) {
    const struct CPU_State initial_cpu = {.pc=0x37b9, .a=0x85, .x=0xae, .y=0xe7, .sp=0x42, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x00ae, .value=0x19}, {.addr=0x37b9, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x37ba, .a=0x01, .x=0xae, .y=0xe7, .sp=0x42, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x00ae, .value=0x19}, {.addr=0x37b9, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x37b9, .value=0x26, .type=IO_READ},
        {.addr=0x37ba, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ae, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x239c, .a=0xf4, .x=0x0c, .y=0xf6, .sp=0x97, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0x64}, {.addr=0x239c, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x239d, .a=0x64, .x=0x0c, .y=0xf6, .sp=0x97, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0x64}, {.addr=0x239c, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x239c, .value=0x26, .type=IO_READ},
        {.addr=0x239d, .value=DUMMY, .type=IO_READ},
        {.addr=0x010c, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x7d08, .a=0xf0, .x=0x4f, .y=0xf2, .sp=0x8e, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x004f, .value=0x97}, {.addr=0x7d08, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x7d09, .a=0x90, .x=0x4f, .y=0xf2, .sp=0x8e, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x004f, .value=0x97}, {.addr=0x7d08, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x7d08, .value=0x26, .type=IO_READ},
        {.addr=0x7d09, .value=DUMMY, .type=IO_READ},
        {.addr=0x004f, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x5745, .a=0x8a, .x=0x61, .y=0xeb, .sp=0xc9, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0x8e}, {.addr=0x5745, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x5746, .a=0x8a, .x=0x61, .y=0xeb, .sp=0xc9, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0x8e}, {.addr=0x5745, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x5745, .value=0x26, .type=IO_READ},
        {.addr=0x5746, .value=DUMMY, .type=IO_READ},
        {.addr=0x0161, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x886f, .a=0xdf, .x=0xf1, .y=0xe0, .sp=0x13, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0x2b}, {.addr=0x886f, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x8870, .a=0x0b, .x=0xf1, .y=0xe0, .sp=0x13, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0x2b}, {.addr=0x886f, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x886f, .value=0x26, .type=IO_READ},
        {.addr=0x8870, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f1, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02D6) {
    const struct CPU_State initial_cpu = {.pc=0x4030, .a=0x36, .x=0x87, .y=0x38, .sp=0x43, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x0087, .value=0xde}, {.addr=0x4030, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x4031, .a=0x16, .x=0x87, .y=0x38, .sp=0x43, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x0087, .value=0xde}, {.addr=0x4030, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x4030, .value=0x26, .type=IO_READ},
        {.addr=0x4031, .value=DUMMY, .type=IO_READ},
        {.addr=0x0087, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x5273, .a=0xb8, .x=0x41, .y=0xc3, .sp=0x24, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x0141, .value=0xd6}, {.addr=0x5273, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x5274, .a=0x90, .x=0x41, .y=0xc3, .sp=0x24, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x0141, .value=0xd6}, {.addr=0x5273, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x5273, .value=0x26, .type=IO_READ},
        {.addr=0x5274, .value=DUMMY, .type=IO_READ},
        {.addr=0x0141, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x5847, .a=0x0a, .x=0x7f, .y=0x81, .sp=0x0f, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x007f, .value=0xf5}, {.addr=0x5847, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x5848, .a=0x00, .x=0x7f, .y=0x81, .sp=0x0f, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x007f, .value=0xf5}, {.addr=0x5847, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x5847, .value=0x26, .type=IO_READ},
        {.addr=0x5848, .value=DUMMY, .type=IO_READ},
        {.addr=0x007f, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02D9) {
    const struct CPU_State initial_cpu = {.pc=0x6479, .a=0x21, .x=0x72, .y=0x17, .sp=0xdf, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x0072, .value=0x10}, {.addr=0x6479, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x647a, .a=0x00, .x=0x72, .y=0x17, .sp=0xdf, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x0072, .value=0x10}, {.addr=0x6479, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x6479, .value=0x26, .type=IO_READ},
        {.addr=0x647a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0072, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02DA) {
    const struct CPU_State initial_cpu = {.pc=0xda50, .a=0xe8, .x=0x1a, .y=0x91, .sp=0x35, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x001a, .value=0x53}, {.addr=0xda50, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xda51, .a=0x40, .x=0x1a, .y=0x91, .sp=0x35, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x001a, .value=0x53}, {.addr=0xda50, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xda50, .value=0x26, .type=IO_READ},
        {.addr=0xda51, .value=DUMMY, .type=IO_READ},
        {.addr=0x001a, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02DB) {
    const struct CPU_State initial_cpu = {.pc=0xe74f, .a=0xec, .x=0xeb, .y=0x62, .sp=0x33, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0x54}, {.addr=0xe74f, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xe750, .a=0x44, .x=0xeb, .y=0x62, .sp=0x33, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0x54}, {.addr=0xe74f, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xe74f, .value=0x26, .type=IO_READ},
        {.addr=0xe750, .value=DUMMY, .type=IO_READ},
        {.addr=0x01eb, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02DC) {
    const struct CPU_State initial_cpu = {.pc=0xe185, .a=0x00, .x=0x3f, .y=0x76, .sp=0xcf, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x013f, .value=0x89}, {.addr=0xe185, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xe186, .a=0x00, .x=0x3f, .y=0x76, .sp=0xcf, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x013f, .value=0x89}, {.addr=0xe185, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xe185, .value=0x26, .type=IO_READ},
        {.addr=0xe186, .value=DUMMY, .type=IO_READ},
        {.addr=0x013f, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02DD) {
    const struct CPU_State initial_cpu = {.pc=0xbd23, .a=0x6b, .x=0x7d, .y=0xac, .sp=0x70, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0xb6}, {.addr=0xbd23, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xbd24, .a=0x22, .x=0x7d, .y=0xac, .sp=0x70, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0xb6}, {.addr=0xbd23, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xbd23, .value=0x26, .type=IO_READ},
        {.addr=0xbd24, .value=DUMMY, .type=IO_READ},
        {.addr=0x017d, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02DE) {
    const struct CPU_State initial_cpu = {.pc=0x80e3, .a=0xee, .x=0xe8, .y=0xc2, .sp=0xf0, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x01e8, .value=0x45}, {.addr=0x80e3, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x80e4, .a=0x44, .x=0xe8, .y=0xc2, .sp=0xf0, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x01e8, .value=0x45}, {.addr=0x80e3, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x80e3, .value=0x26, .type=IO_READ},
        {.addr=0x80e4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e8, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02DF) {
    const struct CPU_State initial_cpu = {.pc=0x5f97, .a=0x49, .x=0x99, .y=0x97, .sp=0x98, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x0099, .value=0xe8}, {.addr=0x5f97, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x5f98, .a=0x48, .x=0x99, .y=0x97, .sp=0x98, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0099, .value=0xe8}, {.addr=0x5f97, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x5f97, .value=0x26, .type=IO_READ},
        {.addr=0x5f98, .value=DUMMY, .type=IO_READ},
        {.addr=0x0099, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02E0) {
    const struct CPU_State initial_cpu = {.pc=0xde3a, .a=0x94, .x=0xbd, .y=0x39, .sp=0xe2, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x00bd, .value=0xec}, {.addr=0xde3a, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xde3b, .a=0x84, .x=0xbd, .y=0x39, .sp=0xe2, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x00bd, .value=0xec}, {.addr=0xde3a, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xde3a, .value=0x26, .type=IO_READ},
        {.addr=0xde3b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bd, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02E1) {
    const struct CPU_State initial_cpu = {.pc=0x29a1, .a=0x6b, .x=0x5a, .y=0xff, .sp=0x92, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x005a, .value=0x10}, {.addr=0x29a1, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x29a2, .a=0x00, .x=0x5a, .y=0xff, .sp=0x92, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x005a, .value=0x10}, {.addr=0x29a1, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x29a1, .value=0x26, .type=IO_READ},
        {.addr=0x29a2, .value=DUMMY, .type=IO_READ},
        {.addr=0x005a, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02E2) {
    const struct CPU_State initial_cpu = {.pc=0x1453, .a=0xd4, .x=0x31, .y=0x5a, .sp=0xf5, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x0031, .value=0x62}, {.addr=0x1453, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x1454, .a=0x40, .x=0x31, .y=0x5a, .sp=0xf5, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0031, .value=0x62}, {.addr=0x1453, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x1453, .value=0x26, .type=IO_READ},
        {.addr=0x1454, .value=DUMMY, .type=IO_READ},
        {.addr=0x0031, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02E3) {
    const struct CPU_State initial_cpu = {.pc=0x7f89, .a=0x42, .x=0x8d, .y=0xbf, .sp=0x10, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x008d, .value=0x7b}, {.addr=0x7f89, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x7f8a, .a=0x42, .x=0x8d, .y=0xbf, .sp=0x10, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x008d, .value=0x7b}, {.addr=0x7f89, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x7f89, .value=0x26, .type=IO_READ},
        {.addr=0x7f8a, .value=DUMMY, .type=IO_READ},
        {.addr=0x008d, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02E4) {
    const struct CPU_State initial_cpu = {.pc=0x0f7b, .a=0xe5, .x=0xd3, .y=0x0f, .sp=0x8d, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x01d3, .value=0x02}, {.addr=0x0f7b, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x0f7c, .a=0x00, .x=0xd3, .y=0x0f, .sp=0x8d, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x01d3, .value=0x02}, {.addr=0x0f7b, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x0f7b, .value=0x26, .type=IO_READ},
        {.addr=0x0f7c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d3, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02E5) {
    const struct CPU_State initial_cpu = {.pc=0xd658, .a=0x70, .x=0x49, .y=0xd9, .sp=0x00, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x0049, .value=0xb2}, {.addr=0xd658, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xd659, .a=0x30, .x=0x49, .y=0xd9, .sp=0x00, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x0049, .value=0xb2}, {.addr=0xd658, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xd658, .value=0x26, .type=IO_READ},
        {.addr=0xd659, .value=DUMMY, .type=IO_READ},
        {.addr=0x0049, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02E6) {
    const struct CPU_State initial_cpu = {.pc=0x322a, .a=0xf6, .x=0x01, .y=0x86, .sp=0x4e, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x0001, .value=0xeb}, {.addr=0x322a, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x322b, .a=0xe2, .x=0x01, .y=0x86, .sp=0x4e, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0001, .value=0xeb}, {.addr=0x322a, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x322a, .value=0x26, .type=IO_READ},
        {.addr=0x322b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0001, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02E7) {
    const struct CPU_State initial_cpu = {.pc=0xb645, .a=0xdb, .x=0xc8, .y=0x6a, .sp=0x08, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x01c8, .value=0xcb}, {.addr=0xb645, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xb646, .a=0xcb, .x=0xc8, .y=0x6a, .sp=0x08, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x01c8, .value=0xcb}, {.addr=0xb645, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xb645, .value=0x26, .type=IO_READ},
        {.addr=0xb646, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c8, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02E8) {
    const struct CPU_State initial_cpu = {.pc=0x02d9, .a=0x69, .x=0x18, .y=0xc8, .sp=0xa3, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x0018, .value=0x1d}, {.addr=0x02d9, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x02da, .a=0x09, .x=0x18, .y=0xc8, .sp=0xa3, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0018, .value=0x1d}, {.addr=0x02d9, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x02d9, .value=0x26, .type=IO_READ},
        {.addr=0x02da, .value=DUMMY, .type=IO_READ},
        {.addr=0x0018, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02E9) {
    const struct CPU_State initial_cpu = {.pc=0xfa47, .a=0x29, .x=0x73, .y=0xd5, .sp=0x6b, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0xc2}, {.addr=0xfa47, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xfa48, .a=0x00, .x=0x73, .y=0xd5, .sp=0x6b, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0xc2}, {.addr=0xfa47, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xfa47, .value=0x26, .type=IO_READ},
        {.addr=0xfa48, .value=DUMMY, .type=IO_READ},
        {.addr=0x0173, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x4eb1, .a=0x56, .x=0xe2, .y=0x0f, .sp=0xc3, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x00e2, .value=0x13}, {.addr=0x4eb1, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x4eb2, .a=0x12, .x=0xe2, .y=0x0f, .sp=0xc3, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x00e2, .value=0x13}, {.addr=0x4eb1, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x4eb1, .value=0x26, .type=IO_READ},
        {.addr=0x4eb2, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e2, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x89db, .a=0x75, .x=0x69, .y=0x7c, .sp=0xfa, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x0069, .value=0xc4}, {.addr=0x89db, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x89dc, .a=0x44, .x=0x69, .y=0x7c, .sp=0xfa, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x0069, .value=0xc4}, {.addr=0x89db, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x89db, .value=0x26, .type=IO_READ},
        {.addr=0x89dc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0069, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02EC) {
    const struct CPU_State initial_cpu = {.pc=0x328f, .a=0x56, .x=0x24, .y=0x9f, .sp=0x16, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0x19}, {.addr=0x328f, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x3290, .a=0x10, .x=0x24, .y=0x9f, .sp=0x16, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0x19}, {.addr=0x328f, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x328f, .value=0x26, .type=IO_READ},
        {.addr=0x3290, .value=DUMMY, .type=IO_READ},
        {.addr=0x0124, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x7b9f, .a=0x57, .x=0x7f, .y=0xaf, .sp=0x44, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x017f, .value=0x3f}, {.addr=0x7b9f, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x7ba0, .a=0x17, .x=0x7f, .y=0xaf, .sp=0x44, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x017f, .value=0x3f}, {.addr=0x7b9f, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x7b9f, .value=0x26, .type=IO_READ},
        {.addr=0x7ba0, .value=DUMMY, .type=IO_READ},
        {.addr=0x017f, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02EE) {
    const struct CPU_State initial_cpu = {.pc=0x9db0, .a=0xbe, .x=0x62, .y=0xfa, .sp=0xa8, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0x02}, {.addr=0x9db0, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x9db1, .a=0x02, .x=0x62, .y=0xfa, .sp=0xa8, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0x02}, {.addr=0x9db0, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x9db0, .value=0x26, .type=IO_READ},
        {.addr=0x9db1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0162, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02EF) {
    const struct CPU_State initial_cpu = {.pc=0x62e0, .a=0xd4, .x=0x7a, .y=0xe5, .sp=0x96, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0x8c}, {.addr=0x62e0, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x62e1, .a=0x84, .x=0x7a, .y=0xe5, .sp=0x96, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0x8c}, {.addr=0x62e0, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x62e0, .value=0x26, .type=IO_READ},
        {.addr=0x62e1, .value=DUMMY, .type=IO_READ},
        {.addr=0x017a, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02F0) {
    const struct CPU_State initial_cpu = {.pc=0xabc5, .a=0xe8, .x=0xbf, .y=0x75, .sp=0x9d, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x01bf, .value=0xcc}, {.addr=0xabc5, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xabc6, .a=0xc8, .x=0xbf, .y=0x75, .sp=0x9d, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x01bf, .value=0xcc}, {.addr=0xabc5, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xabc5, .value=0x26, .type=IO_READ},
        {.addr=0xabc6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bf, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x9cd7, .a=0x77, .x=0x0e, .y=0xad, .sp=0xea, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x010e, .value=0xd0}, {.addr=0x9cd7, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x9cd8, .a=0x50, .x=0x0e, .y=0xad, .sp=0xea, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x010e, .value=0xd0}, {.addr=0x9cd7, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x9cd7, .value=0x26, .type=IO_READ},
        {.addr=0x9cd8, .value=DUMMY, .type=IO_READ},
        {.addr=0x010e, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02F2) {
    const struct CPU_State initial_cpu = {.pc=0x4644, .a=0x43, .x=0x3e, .y=0x93, .sp=0xd8, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x003e, .value=0x21}, {.addr=0x4644, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x4645, .a=0x01, .x=0x3e, .y=0x93, .sp=0xd8, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x003e, .value=0x21}, {.addr=0x4644, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x4644, .value=0x26, .type=IO_READ},
        {.addr=0x4645, .value=DUMMY, .type=IO_READ},
        {.addr=0x003e, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02F3) {
    const struct CPU_State initial_cpu = {.pc=0x9277, .a=0x7f, .x=0x1e, .y=0x0d, .sp=0xbb, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x001e, .value=0x48}, {.addr=0x9277, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x9278, .a=0x48, .x=0x1e, .y=0x0d, .sp=0xbb, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x001e, .value=0x48}, {.addr=0x9277, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x9277, .value=0x26, .type=IO_READ},
        {.addr=0x9278, .value=DUMMY, .type=IO_READ},
        {.addr=0x001e, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02F4) {
    const struct CPU_State initial_cpu = {.pc=0x3afa, .a=0x44, .x=0x44, .y=0xe6, .sp=0xb7, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x0144, .value=0x09}, {.addr=0x3afa, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x3afb, .a=0x00, .x=0x44, .y=0xe6, .sp=0xb7, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x0144, .value=0x09}, {.addr=0x3afa, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x3afa, .value=0x26, .type=IO_READ},
        {.addr=0x3afb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0144, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x0045, .a=0x24, .x=0xba, .y=0xc8, .sp=0x81, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x0045, .value=0x26}, {.addr=0x01ba, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x0046, .a=0x20, .x=0xba, .y=0xc8, .sp=0x81, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0045, .value=0x26}, {.addr=0x01ba, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x0045, .value=0x26, .type=IO_READ},
        {.addr=0x0046, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ba, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x2fa8, .a=0xef, .x=0x66, .y=0x91, .sp=0xba, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0xb5}, {.addr=0x2fa8, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x2fa9, .a=0xa5, .x=0x66, .y=0x91, .sp=0xba, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0xb5}, {.addr=0x2fa8, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x2fa8, .value=0x26, .type=IO_READ},
        {.addr=0x2fa9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0166, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x28a7, .a=0x33, .x=0xab, .y=0xc2, .sp=0x63, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0x58}, {.addr=0x28a7, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x28a8, .a=0x10, .x=0xab, .y=0xc2, .sp=0x63, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0x58}, {.addr=0x28a7, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x28a7, .value=0x26, .type=IO_READ},
        {.addr=0x28a8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ab, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02F8) {
    const struct CPU_State initial_cpu = {.pc=0x3c7b, .a=0x45, .x=0x7e, .y=0xc2, .sp=0x71, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x017e, .value=0x69}, {.addr=0x3c7b, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x3c7c, .a=0x41, .x=0x7e, .y=0xc2, .sp=0x71, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x017e, .value=0x69}, {.addr=0x3c7b, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x3c7b, .value=0x26, .type=IO_READ},
        {.addr=0x3c7c, .value=DUMMY, .type=IO_READ},
        {.addr=0x017e, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02F9) {
    const struct CPU_State initial_cpu = {.pc=0xa4ef, .a=0xfe, .x=0xd8, .y=0x8c, .sp=0x26, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x01d8, .value=0x88}, {.addr=0xa4ef, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xa4f0, .a=0x88, .x=0xd8, .y=0x8c, .sp=0x26, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x01d8, .value=0x88}, {.addr=0xa4ef, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xa4ef, .value=0x26, .type=IO_READ},
        {.addr=0xa4f0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d8, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02FA) {
    const struct CPU_State initial_cpu = {.pc=0x2b04, .a=0x5b, .x=0x52, .y=0x4b, .sp=0x00, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0xb1}, {.addr=0x2b04, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x2b05, .a=0x11, .x=0x52, .y=0x4b, .sp=0x00, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0xb1}, {.addr=0x2b04, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x2b04, .value=0x26, .type=IO_READ},
        {.addr=0x2b05, .value=DUMMY, .type=IO_READ},
        {.addr=0x0152, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02FB) {
    const struct CPU_State initial_cpu = {.pc=0x3273, .a=0x98, .x=0x6d, .y=0xc3, .sp=0x95, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x016d, .value=0xf8}, {.addr=0x3273, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x3274, .a=0x98, .x=0x6d, .y=0xc3, .sp=0x95, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x016d, .value=0xf8}, {.addr=0x3273, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x3273, .value=0x26, .type=IO_READ},
        {.addr=0x3274, .value=DUMMY, .type=IO_READ},
        {.addr=0x016d, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02FC) {
    const struct CPU_State initial_cpu = {.pc=0x46b5, .a=0x59, .x=0x5c, .y=0x30, .sp=0x77, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0x29}, {.addr=0x46b5, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x46b6, .a=0x09, .x=0x5c, .y=0x30, .sp=0x77, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0x29}, {.addr=0x46b5, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x46b5, .value=0x26, .type=IO_READ},
        {.addr=0x46b6, .value=DUMMY, .type=IO_READ},
        {.addr=0x015c, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02FD) {
    const struct CPU_State initial_cpu = {.pc=0x5675, .a=0xc7, .x=0x7c, .y=0x92, .sp=0xed, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0x3f}, {.addr=0x5675, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x5676, .a=0x07, .x=0x7c, .y=0x92, .sp=0xed, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0x3f}, {.addr=0x5675, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x5675, .value=0x26, .type=IO_READ},
        {.addr=0x5676, .value=DUMMY, .type=IO_READ},
        {.addr=0x017c, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x2fbd, .a=0x62, .x=0x90, .y=0x1e, .sp=0x63, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x0090, .value=0x64}, {.addr=0x2fbd, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x2fbe, .a=0x60, .x=0x90, .y=0x1e, .sp=0x63, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0090, .value=0x64}, {.addr=0x2fbd, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x2fbd, .value=0x26, .type=IO_READ},
        {.addr=0x2fbe, .value=DUMMY, .type=IO_READ},
        {.addr=0x0090, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0300) {
    const struct CPU_State initial_cpu = {.pc=0x89d5, .a=0xcb, .x=0xc4, .y=0x99, .sp=0x72, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0x07}, {.addr=0x89d5, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x89d6, .a=0x03, .x=0xc4, .y=0x99, .sp=0x72, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0x07}, {.addr=0x89d5, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x89d5, .value=0x26, .type=IO_READ},
        {.addr=0x89d6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c4, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0301) {
    const struct CPU_State initial_cpu = {.pc=0xd6d2, .a=0x2d, .x=0xdd, .y=0x53, .sp=0x13, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x00dd, .value=0x05}, {.addr=0xd6d2, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xd6d3, .a=0x05, .x=0xdd, .y=0x53, .sp=0x13, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x00dd, .value=0x05}, {.addr=0xd6d2, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xd6d2, .value=0x26, .type=IO_READ},
        {.addr=0xd6d3, .value=DUMMY, .type=IO_READ},
        {.addr=0x00dd, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0302) {
    const struct CPU_State initial_cpu = {.pc=0x157a, .a=0xe8, .x=0x69, .y=0xf7, .sp=0xb4, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x0069, .value=0x96}, {.addr=0x157a, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x157b, .a=0x80, .x=0x69, .y=0xf7, .sp=0xb4, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x0069, .value=0x96}, {.addr=0x157a, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x157a, .value=0x26, .type=IO_READ},
        {.addr=0x157b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0069, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0303) {
    const struct CPU_State initial_cpu = {.pc=0xb748, .a=0x9f, .x=0xe7, .y=0x41, .sp=0xfd, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x00e7, .value=0x3c}, {.addr=0xb748, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xb749, .a=0x1c, .x=0xe7, .y=0x41, .sp=0xfd, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x00e7, .value=0x3c}, {.addr=0xb748, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xb748, .value=0x26, .type=IO_READ},
        {.addr=0xb749, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e7, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0304) {
    const struct CPU_State initial_cpu = {.pc=0x6b0e, .a=0xfb, .x=0x71, .y=0xb1, .sp=0x42, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x0171, .value=0xea}, {.addr=0x6b0e, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x6b0f, .a=0xea, .x=0x71, .y=0xb1, .sp=0x42, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x0171, .value=0xea}, {.addr=0x6b0e, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x6b0e, .value=0x26, .type=IO_READ},
        {.addr=0x6b0f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0171, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0305) {
    const struct CPU_State initial_cpu = {.pc=0x1933, .a=0x83, .x=0xfa, .y=0xd4, .sp=0x5f, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x01fa, .value=0x7b}, {.addr=0x1933, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x1934, .a=0x03, .x=0xfa, .y=0xd4, .sp=0x5f, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01fa, .value=0x7b}, {.addr=0x1933, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x1933, .value=0x26, .type=IO_READ},
        {.addr=0x1934, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fa, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0306) {
    const struct CPU_State initial_cpu = {.pc=0xb82b, .a=0x59, .x=0xf7, .y=0xe1, .sp=0xf8, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0xf9}, {.addr=0xb82b, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xb82c, .a=0x59, .x=0xf7, .y=0xe1, .sp=0xf8, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0xf9}, {.addr=0xb82b, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xb82b, .value=0x26, .type=IO_READ},
        {.addr=0xb82c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f7, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0307) {
    const struct CPU_State initial_cpu = {.pc=0x9525, .a=0x25, .x=0x06, .y=0x10, .sp=0xcc, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0xe6}, {.addr=0x9525, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x9526, .a=0x24, .x=0x06, .y=0x10, .sp=0xcc, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0xe6}, {.addr=0x9525, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x9525, .value=0x26, .type=IO_READ},
        {.addr=0x9526, .value=DUMMY, .type=IO_READ},
        {.addr=0x0106, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0308) {
    const struct CPU_State initial_cpu = {.pc=0x3505, .a=0xf7, .x=0x65, .y=0x29, .sp=0x52, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x0165, .value=0x65}, {.addr=0x3505, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x3506, .a=0x65, .x=0x65, .y=0x29, .sp=0x52, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x0165, .value=0x65}, {.addr=0x3505, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x3505, .value=0x26, .type=IO_READ},
        {.addr=0x3506, .value=DUMMY, .type=IO_READ},
        {.addr=0x0165, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0309) {
    const struct CPU_State initial_cpu = {.pc=0x0603, .a=0x19, .x=0xf0, .y=0x6d, .sp=0x03, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x01f0, .value=0x76}, {.addr=0x0603, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x0604, .a=0x10, .x=0xf0, .y=0x6d, .sp=0x03, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x01f0, .value=0x76}, {.addr=0x0603, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x0603, .value=0x26, .type=IO_READ},
        {.addr=0x0604, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f0, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_030A) {
    const struct CPU_State initial_cpu = {.pc=0x9016, .a=0x4e, .x=0xeb, .y=0x2f, .sp=0xc5, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x00eb, .value=0x63}, {.addr=0x9016, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x9017, .a=0x42, .x=0xeb, .y=0x2f, .sp=0xc5, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x00eb, .value=0x63}, {.addr=0x9016, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x9016, .value=0x26, .type=IO_READ},
        {.addr=0x9017, .value=DUMMY, .type=IO_READ},
        {.addr=0x00eb, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_030B) {
    const struct CPU_State initial_cpu = {.pc=0x1636, .a=0x21, .x=0xe8, .y=0xe4, .sp=0xa0, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x01e8, .value=0xc4}, {.addr=0x1636, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x1637, .a=0x00, .x=0xe8, .y=0xe4, .sp=0xa0, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x01e8, .value=0xc4}, {.addr=0x1636, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x1636, .value=0x26, .type=IO_READ},
        {.addr=0x1637, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e8, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_030C) {
    const struct CPU_State initial_cpu = {.pc=0x06d1, .a=0xac, .x=0x82, .y=0x1e, .sp=0x9c, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0xe5}, {.addr=0x06d1, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x06d2, .a=0xa4, .x=0x82, .y=0x1e, .sp=0x9c, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0xe5}, {.addr=0x06d1, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x06d1, .value=0x26, .type=IO_READ},
        {.addr=0x06d2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0182, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_030D) {
    const struct CPU_State initial_cpu = {.pc=0x5289, .a=0x1a, .x=0xba, .y=0xe8, .sp=0x6a, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0x0c}, {.addr=0x5289, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x528a, .a=0x08, .x=0xba, .y=0xe8, .sp=0x6a, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0x0c}, {.addr=0x5289, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x5289, .value=0x26, .type=IO_READ},
        {.addr=0x528a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ba, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_030E) {
    const struct CPU_State initial_cpu = {.pc=0xa5d5, .a=0x7d, .x=0xf2, .y=0xc0, .sp=0x15, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x01f2, .value=0x58}, {.addr=0xa5d5, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xa5d6, .a=0x58, .x=0xf2, .y=0xc0, .sp=0x15, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x01f2, .value=0x58}, {.addr=0xa5d5, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xa5d5, .value=0x26, .type=IO_READ},
        {.addr=0xa5d6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f2, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_030F) {
    const struct CPU_State initial_cpu = {.pc=0x81e9, .a=0xd7, .x=0x17, .y=0xe5, .sp=0x1f, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x0117, .value=0xde}, {.addr=0x81e9, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x81ea, .a=0xd6, .x=0x17, .y=0xe5, .sp=0x1f, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0117, .value=0xde}, {.addr=0x81e9, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x81e9, .value=0x26, .type=IO_READ},
        {.addr=0x81ea, .value=DUMMY, .type=IO_READ},
        {.addr=0x0117, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0311) {
    const struct CPU_State initial_cpu = {.pc=0x8b38, .a=0x47, .x=0xbc, .y=0x3b, .sp=0x4c, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x01bc, .value=0x06}, {.addr=0x8b38, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x8b39, .a=0x06, .x=0xbc, .y=0x3b, .sp=0x4c, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x01bc, .value=0x06}, {.addr=0x8b38, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x8b38, .value=0x26, .type=IO_READ},
        {.addr=0x8b39, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bc, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0312) {
    const struct CPU_State initial_cpu = {.pc=0x6a13, .a=0xe7, .x=0x9f, .y=0x25, .sp=0xbc, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x019f, .value=0x65}, {.addr=0x6a13, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x6a14, .a=0x65, .x=0x9f, .y=0x25, .sp=0xbc, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x019f, .value=0x65}, {.addr=0x6a13, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x6a13, .value=0x26, .type=IO_READ},
        {.addr=0x6a14, .value=DUMMY, .type=IO_READ},
        {.addr=0x019f, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0313) {
    const struct CPU_State initial_cpu = {.pc=0xcb52, .a=0x77, .x=0x2f, .y=0x4d, .sp=0x50, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x002f, .value=0x53}, {.addr=0xcb52, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xcb53, .a=0x53, .x=0x2f, .y=0x4d, .sp=0x50, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x002f, .value=0x53}, {.addr=0xcb52, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xcb52, .value=0x26, .type=IO_READ},
        {.addr=0xcb53, .value=DUMMY, .type=IO_READ},
        {.addr=0x002f, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0314) {
    const struct CPU_State initial_cpu = {.pc=0xacec, .a=0x20, .x=0x9e, .y=0x07, .sp=0x72, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0x80}, {.addr=0xacec, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xaced, .a=0x00, .x=0x9e, .y=0x07, .sp=0x72, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0x80}, {.addr=0xacec, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xacec, .value=0x26, .type=IO_READ},
        {.addr=0xaced, .value=DUMMY, .type=IO_READ},
        {.addr=0x019e, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0315) {
    const struct CPU_State initial_cpu = {.pc=0x53c2, .a=0xb6, .x=0x85, .y=0x25, .sp=0xcb, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x0085, .value=0x82}, {.addr=0x53c2, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x53c3, .a=0x82, .x=0x85, .y=0x25, .sp=0xcb, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0085, .value=0x82}, {.addr=0x53c2, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x53c2, .value=0x26, .type=IO_READ},
        {.addr=0x53c3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0085, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0316) {
    const struct CPU_State initial_cpu = {.pc=0x5269, .a=0x2f, .x=0xbf, .y=0xff, .sp=0x23, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x00bf, .value=0x7c}, {.addr=0x5269, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x526a, .a=0x2c, .x=0xbf, .y=0xff, .sp=0x23, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x00bf, .value=0x7c}, {.addr=0x5269, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x5269, .value=0x26, .type=IO_READ},
        {.addr=0x526a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bf, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0317) {
    const struct CPU_State initial_cpu = {.pc=0x6a8c, .a=0x8d, .x=0xd3, .y=0xa3, .sp=0x83, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x01d3, .value=0x4d}, {.addr=0x6a8c, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x6a8d, .a=0x0d, .x=0xd3, .y=0xa3, .sp=0x83, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x01d3, .value=0x4d}, {.addr=0x6a8c, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x6a8c, .value=0x26, .type=IO_READ},
        {.addr=0x6a8d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d3, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0318) {
    const struct CPU_State initial_cpu = {.pc=0xd98c, .a=0x7a, .x=0xbc, .y=0x2a, .sp=0x99, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x01bc, .value=0x80}, {.addr=0xd98c, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xd98d, .a=0x00, .x=0xbc, .y=0x2a, .sp=0x99, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x01bc, .value=0x80}, {.addr=0xd98c, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xd98c, .value=0x26, .type=IO_READ},
        {.addr=0xd98d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bc, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0319) {
    const struct CPU_State initial_cpu = {.pc=0x8c6b, .a=0x39, .x=0x82, .y=0x6a, .sp=0x52, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x0082, .value=0xc4}, {.addr=0x8c6b, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x8c6c, .a=0x00, .x=0x82, .y=0x6a, .sp=0x52, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x0082, .value=0xc4}, {.addr=0x8c6b, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x8c6b, .value=0x26, .type=IO_READ},
        {.addr=0x8c6c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0082, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_031A) {
    const struct CPU_State initial_cpu = {.pc=0xa34c, .a=0xcf, .x=0x20, .y=0x2a, .sp=0x8f, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x0020, .value=0x56}, {.addr=0xa34c, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xa34d, .a=0x46, .x=0x20, .y=0x2a, .sp=0x8f, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x0020, .value=0x56}, {.addr=0xa34c, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xa34c, .value=0x26, .type=IO_READ},
        {.addr=0xa34d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0020, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_031B) {
    const struct CPU_State initial_cpu = {.pc=0x6e8f, .a=0x5e, .x=0xf2, .y=0x75, .sp=0xf7, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x01f2, .value=0xcb}, {.addr=0x6e8f, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x6e90, .a=0x4a, .x=0xf2, .y=0x75, .sp=0xf7, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01f2, .value=0xcb}, {.addr=0x6e8f, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x6e8f, .value=0x26, .type=IO_READ},
        {.addr=0x6e90, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f2, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_031C) {
    const struct CPU_State initial_cpu = {.pc=0x6996, .a=0x7c, .x=0x06, .y=0xe9, .sp=0x7d, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x3f}, {.addr=0x6996, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x6997, .a=0x3c, .x=0x06, .y=0xe9, .sp=0x7d, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0x3f}, {.addr=0x6996, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x6996, .value=0x26, .type=IO_READ},
        {.addr=0x6997, .value=DUMMY, .type=IO_READ},
        {.addr=0x0106, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_031D) {
    const struct CPU_State initial_cpu = {.pc=0xa2be, .a=0x3c, .x=0x43, .y=0x20, .sp=0xf5, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x0043, .value=0xb5}, {.addr=0xa2be, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xa2bf, .a=0x34, .x=0x43, .y=0x20, .sp=0xf5, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0043, .value=0xb5}, {.addr=0xa2be, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xa2be, .value=0x26, .type=IO_READ},
        {.addr=0xa2bf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0043, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_031E) {
    const struct CPU_State initial_cpu = {.pc=0xdc02, .a=0x57, .x=0x83, .y=0x88, .sp=0x40, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x0083, .value=0x65}, {.addr=0xdc02, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xdc03, .a=0x45, .x=0x83, .y=0x88, .sp=0x40, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0083, .value=0x65}, {.addr=0xdc02, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xdc02, .value=0x26, .type=IO_READ},
        {.addr=0xdc03, .value=DUMMY, .type=IO_READ},
        {.addr=0x0083, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_031F) {
    const struct CPU_State initial_cpu = {.pc=0x04be, .a=0xf7, .x=0xb9, .y=0x8f, .sp=0xe7, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x00b9, .value=0xad}, {.addr=0x04be, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x04bf, .a=0xa5, .x=0xb9, .y=0x8f, .sp=0xe7, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x00b9, .value=0xad}, {.addr=0x04be, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x04be, .value=0x26, .type=IO_READ},
        {.addr=0x04bf, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b9, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0321) {
    const struct CPU_State initial_cpu = {.pc=0xd365, .a=0xdf, .x=0x02, .y=0xe0, .sp=0x5a, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x0102, .value=0x72}, {.addr=0xd365, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xd366, .a=0x52, .x=0x02, .y=0xe0, .sp=0x5a, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x0102, .value=0x72}, {.addr=0xd365, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xd365, .value=0x26, .type=IO_READ},
        {.addr=0xd366, .value=DUMMY, .type=IO_READ},
        {.addr=0x0102, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0322) {
    const struct CPU_State initial_cpu = {.pc=0xe707, .a=0xee, .x=0xa9, .y=0x61, .sp=0xb0, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x01a9, .value=0x04}, {.addr=0xe707, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xe708, .a=0x04, .x=0xa9, .y=0x61, .sp=0xb0, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x01a9, .value=0x04}, {.addr=0xe707, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xe707, .value=0x26, .type=IO_READ},
        {.addr=0xe708, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a9, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0323) {
    const struct CPU_State initial_cpu = {.pc=0x5f73, .a=0xde, .x=0x3c, .y=0xe7, .sp=0x0e, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0xc7}, {.addr=0x5f73, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x5f74, .a=0xc6, .x=0x3c, .y=0xe7, .sp=0x0e, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0xc7}, {.addr=0x5f73, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x5f73, .value=0x26, .type=IO_READ},
        {.addr=0x5f74, .value=DUMMY, .type=IO_READ},
        {.addr=0x013c, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0324) {
    const struct CPU_State initial_cpu = {.pc=0x403a, .a=0xa8, .x=0x1f, .y=0x76, .sp=0x8e, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0xab}, {.addr=0x403a, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x403b, .a=0xa8, .x=0x1f, .y=0x76, .sp=0x8e, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0xab}, {.addr=0x403a, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x403a, .value=0x26, .type=IO_READ},
        {.addr=0x403b, .value=DUMMY, .type=IO_READ},
        {.addr=0x011f, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0325) {
    const struct CPU_State initial_cpu = {.pc=0x2bed, .a=0x3c, .x=0xef, .y=0xfe, .sp=0x8a, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0x74}, {.addr=0x2bed, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x2bee, .a=0x34, .x=0xef, .y=0xfe, .sp=0x8a, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0x74}, {.addr=0x2bed, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x2bed, .value=0x26, .type=IO_READ},
        {.addr=0x2bee, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ef, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0326) {
    const struct CPU_State initial_cpu = {.pc=0x58df, .a=0xe7, .x=0x97, .y=0x08, .sp=0x7e, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x0097, .value=0x34}, {.addr=0x58df, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x58e0, .a=0x24, .x=0x97, .y=0x08, .sp=0x7e, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0097, .value=0x34}, {.addr=0x58df, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x58df, .value=0x26, .type=IO_READ},
        {.addr=0x58e0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0097, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0328) {
    const struct CPU_State initial_cpu = {.pc=0x8ea8, .a=0xa7, .x=0x8b, .y=0xc6, .sp=0x06, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x018b, .value=0xc6}, {.addr=0x8ea8, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x8ea9, .a=0x86, .x=0x8b, .y=0xc6, .sp=0x06, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x018b, .value=0xc6}, {.addr=0x8ea8, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x8ea8, .value=0x26, .type=IO_READ},
        {.addr=0x8ea9, .value=DUMMY, .type=IO_READ},
        {.addr=0x018b, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0329) {
    const struct CPU_State initial_cpu = {.pc=0x5963, .a=0xc4, .x=0x94, .y=0xd3, .sp=0x38, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x0094, .value=0x25}, {.addr=0x5963, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x5964, .a=0x04, .x=0x94, .y=0xd3, .sp=0x38, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x0094, .value=0x25}, {.addr=0x5963, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x5963, .value=0x26, .type=IO_READ},
        {.addr=0x5964, .value=DUMMY, .type=IO_READ},
        {.addr=0x0094, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_032A) {
    const struct CPU_State initial_cpu = {.pc=0xf615, .a=0x51, .x=0x0d, .y=0x1d, .sp=0x64, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x010d, .value=0xdb}, {.addr=0xf615, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xf616, .a=0x51, .x=0x0d, .y=0x1d, .sp=0x64, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x010d, .value=0xdb}, {.addr=0xf615, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xf615, .value=0x26, .type=IO_READ},
        {.addr=0xf616, .value=DUMMY, .type=IO_READ},
        {.addr=0x010d, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_032B) {
    const struct CPU_State initial_cpu = {.pc=0x88a0, .a=0xd2, .x=0x3f, .y=0xc7, .sp=0xf8, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x013f, .value=0xd6}, {.addr=0x88a0, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x88a1, .a=0xd2, .x=0x3f, .y=0xc7, .sp=0xf8, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x013f, .value=0xd6}, {.addr=0x88a0, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x88a0, .value=0x26, .type=IO_READ},
        {.addr=0x88a1, .value=DUMMY, .type=IO_READ},
        {.addr=0x013f, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_032C) {
    const struct CPU_State initial_cpu = {.pc=0x55c7, .a=0xfd, .x=0xc3, .y=0x04, .sp=0xd7, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x00c3, .value=0x04}, {.addr=0x55c7, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x55c8, .a=0x04, .x=0xc3, .y=0x04, .sp=0xd7, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x00c3, .value=0x04}, {.addr=0x55c7, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x55c7, .value=0x26, .type=IO_READ},
        {.addr=0x55c8, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c3, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_032D) {
    const struct CPU_State initial_cpu = {.pc=0x39d5, .a=0x01, .x=0xab, .y=0x19, .sp=0x0a, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0x2c}, {.addr=0x39d5, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x39d6, .a=0x00, .x=0xab, .y=0x19, .sp=0x0a, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0x2c}, {.addr=0x39d5, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x39d5, .value=0x26, .type=IO_READ},
        {.addr=0x39d6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ab, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_032E) {
    const struct CPU_State initial_cpu = {.pc=0x85f5, .a=0xfc, .x=0xe1, .y=0x31, .sp=0xe8, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x01e1, .value=0x31}, {.addr=0x85f5, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x85f6, .a=0x30, .x=0xe1, .y=0x31, .sp=0xe8, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x01e1, .value=0x31}, {.addr=0x85f5, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x85f5, .value=0x26, .type=IO_READ},
        {.addr=0x85f6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e1, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_032F) {
    const struct CPU_State initial_cpu = {.pc=0x0d83, .a=0xc9, .x=0x62, .y=0xd1, .sp=0x0b, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x0062, .value=0x2d}, {.addr=0x0d83, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x0d84, .a=0x09, .x=0x62, .y=0xd1, .sp=0x0b, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x0062, .value=0x2d}, {.addr=0x0d83, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x0d83, .value=0x26, .type=IO_READ},
        {.addr=0x0d84, .value=DUMMY, .type=IO_READ},
        {.addr=0x0062, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0330) {
    const struct CPU_State initial_cpu = {.pc=0xbfa5, .a=0x6d, .x=0x90, .y=0xe4, .sp=0xc7, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x0190, .value=0x82}, {.addr=0xbfa5, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xbfa6, .a=0x00, .x=0x90, .y=0xe4, .sp=0xc7, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x0190, .value=0x82}, {.addr=0xbfa5, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xbfa5, .value=0x26, .type=IO_READ},
        {.addr=0xbfa6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0190, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0331) {
    const struct CPU_State initial_cpu = {.pc=0x9c51, .a=0x4f, .x=0x1e, .y=0x00, .sp=0x77, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x011e, .value=0x8b}, {.addr=0x9c51, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x9c52, .a=0x0b, .x=0x1e, .y=0x00, .sp=0x77, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x011e, .value=0x8b}, {.addr=0x9c51, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x9c51, .value=0x26, .type=IO_READ},
        {.addr=0x9c52, .value=DUMMY, .type=IO_READ},
        {.addr=0x011e, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0332) {
    const struct CPU_State initial_cpu = {.pc=0x7436, .a=0x82, .x=0x47, .y=0x46, .sp=0x82, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x0047, .value=0x6a}, {.addr=0x7436, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x7437, .a=0x02, .x=0x47, .y=0x46, .sp=0x82, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x0047, .value=0x6a}, {.addr=0x7436, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x7436, .value=0x26, .type=IO_READ},
        {.addr=0x7437, .value=DUMMY, .type=IO_READ},
        {.addr=0x0047, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0333) {
    const struct CPU_State initial_cpu = {.pc=0x0999, .a=0x69, .x=0x97, .y=0xa7, .sp=0x35, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x0197, .value=0x61}, {.addr=0x0999, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x099a, .a=0x61, .x=0x97, .y=0xa7, .sp=0x35, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0197, .value=0x61}, {.addr=0x0999, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x0999, .value=0x26, .type=IO_READ},
        {.addr=0x099a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0197, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0334) {
    const struct CPU_State initial_cpu = {.pc=0xa84e, .a=0x19, .x=0xdf, .y=0xa8, .sp=0xdb, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x00df, .value=0x53}, {.addr=0xa84e, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xa84f, .a=0x11, .x=0xdf, .y=0xa8, .sp=0xdb, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x00df, .value=0x53}, {.addr=0xa84e, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xa84e, .value=0x26, .type=IO_READ},
        {.addr=0xa84f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00df, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0335) {
    const struct CPU_State initial_cpu = {.pc=0xb2ba, .a=0xb1, .x=0x5e, .y=0x53, .sp=0xde, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x005e, .value=0x56}, {.addr=0xb2ba, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xb2bb, .a=0x10, .x=0x5e, .y=0x53, .sp=0xde, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x005e, .value=0x56}, {.addr=0xb2ba, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xb2ba, .value=0x26, .type=IO_READ},
        {.addr=0xb2bb, .value=DUMMY, .type=IO_READ},
        {.addr=0x005e, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0336) {
    const struct CPU_State initial_cpu = {.pc=0x9efa, .a=0x5b, .x=0x69, .y=0x8a, .sp=0x01, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x0069, .value=0xbd}, {.addr=0x9efa, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x9efb, .a=0x19, .x=0x69, .y=0x8a, .sp=0x01, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x0069, .value=0xbd}, {.addr=0x9efa, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x9efa, .value=0x26, .type=IO_READ},
        {.addr=0x9efb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0069, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0337) {
    const struct CPU_State initial_cpu = {.pc=0xe327, .a=0x96, .x=0xb1, .y=0x5e, .sp=0x14, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x00b1, .value=0x1d}, {.addr=0xe327, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xe328, .a=0x14, .x=0xb1, .y=0x5e, .sp=0x14, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x00b1, .value=0x1d}, {.addr=0xe327, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xe327, .value=0x26, .type=IO_READ},
        {.addr=0xe328, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b1, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0338) {
    const struct CPU_State initial_cpu = {.pc=0x5761, .a=0x9c, .x=0x7a, .y=0x1e, .sp=0x04, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x007a, .value=0xd7}, {.addr=0x5761, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x5762, .a=0x94, .x=0x7a, .y=0x1e, .sp=0x04, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x007a, .value=0xd7}, {.addr=0x5761, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x5761, .value=0x26, .type=IO_READ},
        {.addr=0x5762, .value=DUMMY, .type=IO_READ},
        {.addr=0x007a, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0339) {
    const struct CPU_State initial_cpu = {.pc=0xb90e, .a=0x24, .x=0xaa, .y=0xc0, .sp=0x12, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x01aa, .value=0x3d}, {.addr=0xb90e, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xb90f, .a=0x24, .x=0xaa, .y=0xc0, .sp=0x12, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x01aa, .value=0x3d}, {.addr=0xb90e, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xb90e, .value=0x26, .type=IO_READ},
        {.addr=0xb90f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01aa, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_033A) {
    const struct CPU_State initial_cpu = {.pc=0x4c0c, .a=0x1f, .x=0xe2, .y=0x5a, .sp=0x65, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0x5a}, {.addr=0x4c0c, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x4c0d, .a=0x1a, .x=0xe2, .y=0x5a, .sp=0x65, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0x5a}, {.addr=0x4c0c, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x4c0c, .value=0x26, .type=IO_READ},
        {.addr=0x4c0d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e2, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_033B) {
    const struct CPU_State initial_cpu = {.pc=0xbf49, .a=0xbb, .x=0x6a, .y=0xb3, .sp=0xd5, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0xac}, {.addr=0xbf49, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xbf4a, .a=0xa8, .x=0x6a, .y=0xb3, .sp=0xd5, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0xac}, {.addr=0xbf49, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xbf49, .value=0x26, .type=IO_READ},
        {.addr=0xbf4a, .value=DUMMY, .type=IO_READ},
        {.addr=0x016a, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_033C) {
    const struct CPU_State initial_cpu = {.pc=0x9194, .a=0x59, .x=0xc3, .y=0x73, .sp=0x68, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0x9d}, {.addr=0x9194, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x9195, .a=0x19, .x=0xc3, .y=0x73, .sp=0x68, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0x9d}, {.addr=0x9194, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x9194, .value=0x26, .type=IO_READ},
        {.addr=0x9195, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c3, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_033D) {
    const struct CPU_State initial_cpu = {.pc=0x6c87, .a=0xcb, .x=0xba, .y=0x09, .sp=0xcb, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x00ba, .value=0x28}, {.addr=0x6c87, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x6c88, .a=0x08, .x=0xba, .y=0x09, .sp=0xcb, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x00ba, .value=0x28}, {.addr=0x6c87, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x6c87, .value=0x26, .type=IO_READ},
        {.addr=0x6c88, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ba, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_033E) {
    const struct CPU_State initial_cpu = {.pc=0xbe4e, .a=0x45, .x=0x8f, .y=0xaa, .sp=0x0d, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x008f, .value=0xcf}, {.addr=0xbe4e, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xbe4f, .a=0x45, .x=0x8f, .y=0xaa, .sp=0x0d, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x008f, .value=0xcf}, {.addr=0xbe4e, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xbe4e, .value=0x26, .type=IO_READ},
        {.addr=0xbe4f, .value=DUMMY, .type=IO_READ},
        {.addr=0x008f, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_033F) {
    const struct CPU_State initial_cpu = {.pc=0xfc05, .a=0x6f, .x=0xd5, .y=0x4d, .sp=0x37, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x00d5, .value=0xdb}, {.addr=0xfc05, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xfc06, .a=0x4b, .x=0xd5, .y=0x4d, .sp=0x37, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x00d5, .value=0xdb}, {.addr=0xfc05, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xfc05, .value=0x26, .type=IO_READ},
        {.addr=0xfc06, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d5, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0340) {
    const struct CPU_State initial_cpu = {.pc=0xa3c4, .a=0x03, .x=0x50, .y=0xd0, .sp=0x60, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0xf4}, {.addr=0xa3c4, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xa3c5, .a=0x00, .x=0x50, .y=0xd0, .sp=0x60, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0xf4}, {.addr=0xa3c4, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xa3c4, .value=0x26, .type=IO_READ},
        {.addr=0xa3c5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0150, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0341) {
    const struct CPU_State initial_cpu = {.pc=0xafff, .a=0x94, .x=0xb8, .y=0x92, .sp=0x01, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x00b8, .value=0x8c}, {.addr=0xafff, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xb000, .a=0x84, .x=0xb8, .y=0x92, .sp=0x01, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x00b8, .value=0x8c}, {.addr=0xafff, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xafff, .value=0x26, .type=IO_READ},
        {.addr=0xb000, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b8, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0342) {
    const struct CPU_State initial_cpu = {.pc=0xb5d8, .a=0xa4, .x=0xd3, .y=0xa6, .sp=0xf6, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x00d3, .value=0x94}, {.addr=0xb5d8, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xb5d9, .a=0x84, .x=0xd3, .y=0xa6, .sp=0xf6, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x00d3, .value=0x94}, {.addr=0xb5d8, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xb5d8, .value=0x26, .type=IO_READ},
        {.addr=0xb5d9, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d3, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0343) {
    const struct CPU_State initial_cpu = {.pc=0x94d4, .a=0x2d, .x=0x08, .y=0x01, .sp=0x5c, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x0008, .value=0x69}, {.addr=0x94d4, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x94d5, .a=0x29, .x=0x08, .y=0x01, .sp=0x5c, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0008, .value=0x69}, {.addr=0x94d4, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x94d4, .value=0x26, .type=IO_READ},
        {.addr=0x94d5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0008, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0344) {
    const struct CPU_State initial_cpu = {.pc=0x432a, .a=0x43, .x=0x0b, .y=0x38, .sp=0x15, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0x96}, {.addr=0x432a, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x432b, .a=0x02, .x=0x0b, .y=0x38, .sp=0x15, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0x96}, {.addr=0x432a, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x432a, .value=0x26, .type=IO_READ},
        {.addr=0x432b, .value=DUMMY, .type=IO_READ},
        {.addr=0x010b, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0345) {
    const struct CPU_State initial_cpu = {.pc=0x19f2, .a=0x6f, .x=0xda, .y=0xe9, .sp=0xf2, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x01da, .value=0xe7}, {.addr=0x19f2, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x19f3, .a=0x67, .x=0xda, .y=0xe9, .sp=0xf2, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x01da, .value=0xe7}, {.addr=0x19f2, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x19f2, .value=0x26, .type=IO_READ},
        {.addr=0x19f3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01da, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0346) {
    const struct CPU_State initial_cpu = {.pc=0x6a29, .a=0x91, .x=0xb8, .y=0xd3, .sp=0x88, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x00b8, .value=0x5d}, {.addr=0x6a29, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x6a2a, .a=0x11, .x=0xb8, .y=0xd3, .sp=0x88, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x00b8, .value=0x5d}, {.addr=0x6a29, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x6a29, .value=0x26, .type=IO_READ},
        {.addr=0x6a2a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b8, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0347) {
    const struct CPU_State initial_cpu = {.pc=0xc8f5, .a=0x51, .x=0x95, .y=0x4a, .sp=0xf6, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0x3b}, {.addr=0xc8f5, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xc8f6, .a=0x11, .x=0x95, .y=0x4a, .sp=0xf6, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0x3b}, {.addr=0xc8f5, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xc8f5, .value=0x26, .type=IO_READ},
        {.addr=0xc8f6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0195, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0348) {
    const struct CPU_State initial_cpu = {.pc=0x2872, .a=0xc2, .x=0xce, .y=0x5b, .sp=0xf7, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0xd7}, {.addr=0x2872, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x2873, .a=0xc2, .x=0xce, .y=0x5b, .sp=0xf7, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0xd7}, {.addr=0x2872, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x2872, .value=0x26, .type=IO_READ},
        {.addr=0x2873, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ce, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0349) {
    const struct CPU_State initial_cpu = {.pc=0xae10, .a=0x76, .x=0x33, .y=0xfe, .sp=0x01, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x0033, .value=0x82}, {.addr=0xae10, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xae11, .a=0x02, .x=0x33, .y=0xfe, .sp=0x01, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x0033, .value=0x82}, {.addr=0xae10, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xae10, .value=0x26, .type=IO_READ},
        {.addr=0xae11, .value=DUMMY, .type=IO_READ},
        {.addr=0x0033, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_034A) {
    const struct CPU_State initial_cpu = {.pc=0x06d2, .a=0x11, .x=0x94, .y=0xe1, .sp=0x09, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0xd3}, {.addr=0x06d2, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x06d3, .a=0x11, .x=0x94, .y=0xe1, .sp=0x09, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0xd3}, {.addr=0x06d2, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x06d2, .value=0x26, .type=IO_READ},
        {.addr=0x06d3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0194, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_034C) {
    const struct CPU_State initial_cpu = {.pc=0x93db, .a=0xe3, .x=0x0c, .y=0x49, .sp=0x69, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x000c, .value=0x75}, {.addr=0x93db, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x93dc, .a=0x61, .x=0x0c, .y=0x49, .sp=0x69, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x000c, .value=0x75}, {.addr=0x93db, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x93db, .value=0x26, .type=IO_READ},
        {.addr=0x93dc, .value=DUMMY, .type=IO_READ},
        {.addr=0x000c, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_034D) {
    const struct CPU_State initial_cpu = {.pc=0x2efa, .a=0x2f, .x=0xa6, .y=0x7d, .sp=0x25, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x01a6, .value=0xd2}, {.addr=0x2efa, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x2efb, .a=0x02, .x=0xa6, .y=0x7d, .sp=0x25, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x01a6, .value=0xd2}, {.addr=0x2efa, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x2efa, .value=0x26, .type=IO_READ},
        {.addr=0x2efb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a6, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_034E) {
    const struct CPU_State initial_cpu = {.pc=0xe45a, .a=0x46, .x=0x90, .y=0x8e, .sp=0x18, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x0090, .value=0xc6}, {.addr=0xe45a, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xe45b, .a=0x46, .x=0x90, .y=0x8e, .sp=0x18, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0090, .value=0xc6}, {.addr=0xe45a, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xe45a, .value=0x26, .type=IO_READ},
        {.addr=0xe45b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0090, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_034F) {
    const struct CPU_State initial_cpu = {.pc=0x0438, .a=0x39, .x=0x6e, .y=0x2a, .sp=0xab, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x016e, .value=0xf2}, {.addr=0x0438, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x0439, .a=0x30, .x=0x6e, .y=0x2a, .sp=0xab, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x016e, .value=0xf2}, {.addr=0x0438, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x0438, .value=0x26, .type=IO_READ},
        {.addr=0x0439, .value=DUMMY, .type=IO_READ},
        {.addr=0x016e, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0350) {
    const struct CPU_State initial_cpu = {.pc=0xa486, .a=0x22, .x=0x14, .y=0xe5, .sp=0x22, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x0114, .value=0x58}, {.addr=0xa486, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xa487, .a=0x00, .x=0x14, .y=0xe5, .sp=0x22, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x0114, .value=0x58}, {.addr=0xa486, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xa486, .value=0x26, .type=IO_READ},
        {.addr=0xa487, .value=DUMMY, .type=IO_READ},
        {.addr=0x0114, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0351) {
    const struct CPU_State initial_cpu = {.pc=0x37ba, .a=0x1d, .x=0x6b, .y=0xa6, .sp=0xdb, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x006b, .value=0x19}, {.addr=0x37ba, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x37bb, .a=0x19, .x=0x6b, .y=0xa6, .sp=0xdb, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x006b, .value=0x19}, {.addr=0x37ba, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x37ba, .value=0x26, .type=IO_READ},
        {.addr=0x37bb, .value=DUMMY, .type=IO_READ},
        {.addr=0x006b, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0352) {
    const struct CPU_State initial_cpu = {.pc=0xcb7c, .a=0x86, .x=0x49, .y=0x62, .sp=0x35, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x0049, .value=0xda}, {.addr=0xcb7c, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xcb7d, .a=0x82, .x=0x49, .y=0x62, .sp=0x35, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x0049, .value=0xda}, {.addr=0xcb7c, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xcb7c, .value=0x26, .type=IO_READ},
        {.addr=0xcb7d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0049, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0353) {
    const struct CPU_State initial_cpu = {.pc=0x722f, .a=0xef, .x=0x9a, .y=0xda, .sp=0x6c, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x009a, .value=0x11}, {.addr=0x722f, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x7230, .a=0x01, .x=0x9a, .y=0xda, .sp=0x6c, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x009a, .value=0x11}, {.addr=0x722f, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x722f, .value=0x26, .type=IO_READ},
        {.addr=0x7230, .value=DUMMY, .type=IO_READ},
        {.addr=0x009a, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0354) {
    const struct CPU_State initial_cpu = {.pc=0x845d, .a=0xb2, .x=0x94, .y=0x1a, .sp=0xcb, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0x45}, {.addr=0x845d, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x845e, .a=0x00, .x=0x94, .y=0x1a, .sp=0xcb, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0x45}, {.addr=0x845d, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x845d, .value=0x26, .type=IO_READ},
        {.addr=0x845e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0194, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0355) {
    const struct CPU_State initial_cpu = {.pc=0x4a94, .a=0x48, .x=0x76, .y=0x85, .sp=0x90, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x0176, .value=0x95}, {.addr=0x4a94, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x4a95, .a=0x00, .x=0x76, .y=0x85, .sp=0x90, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x0176, .value=0x95}, {.addr=0x4a94, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x4a94, .value=0x26, .type=IO_READ},
        {.addr=0x4a95, .value=DUMMY, .type=IO_READ},
        {.addr=0x0176, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0356) {
    const struct CPU_State initial_cpu = {.pc=0x8438, .a=0x9a, .x=0xbe, .y=0x00, .sp=0x8c, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x01be, .value=0x2f}, {.addr=0x8438, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x8439, .a=0x0a, .x=0xbe, .y=0x00, .sp=0x8c, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x01be, .value=0x2f}, {.addr=0x8438, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x8438, .value=0x26, .type=IO_READ},
        {.addr=0x8439, .value=DUMMY, .type=IO_READ},
        {.addr=0x01be, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0357) {
    const struct CPU_State initial_cpu = {.pc=0xe304, .a=0x22, .x=0x57, .y=0x2c, .sp=0xd3, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x0057, .value=0x90}, {.addr=0xe304, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xe305, .a=0x00, .x=0x57, .y=0x2c, .sp=0xd3, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x0057, .value=0x90}, {.addr=0xe304, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xe304, .value=0x26, .type=IO_READ},
        {.addr=0xe305, .value=DUMMY, .type=IO_READ},
        {.addr=0x0057, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0358) {
    const struct CPU_State initial_cpu = {.pc=0x4779, .a=0xc6, .x=0x0b, .y=0x14, .sp=0x04, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x000b, .value=0x59}, {.addr=0x4779, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x477a, .a=0x40, .x=0x0b, .y=0x14, .sp=0x04, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x000b, .value=0x59}, {.addr=0x4779, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x4779, .value=0x26, .type=IO_READ},
        {.addr=0x477a, .value=DUMMY, .type=IO_READ},
        {.addr=0x000b, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0359) {
    const struct CPU_State initial_cpu = {.pc=0x0029, .a=0xcb, .x=0xe7, .y=0x13, .sp=0xa5, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x0029, .value=0x26}, {.addr=0x00e7, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0x002a, .a=0x01, .x=0xe7, .y=0x13, .sp=0xa5, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x0029, .value=0x26}, {.addr=0x00e7, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0x0029, .value=0x26, .type=IO_READ},
        {.addr=0x002a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e7, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_035A) {
    const struct CPU_State initial_cpu = {.pc=0x32d8, .a=0x05, .x=0x39, .y=0xf3, .sp=0xff, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0039, .value=0x31}, {.addr=0x32d8, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x32d9, .a=0x01, .x=0x39, .y=0xf3, .sp=0xff, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0039, .value=0x31}, {.addr=0x32d8, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x32d8, .value=0x26, .type=IO_READ},
        {.addr=0x32d9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0039, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_035B) {
    const struct CPU_State initial_cpu = {.pc=0xca48, .a=0x88, .x=0x4a, .y=0xf8, .sp=0x97, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0xe2}, {.addr=0xca48, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xca49, .a=0x80, .x=0x4a, .y=0xf8, .sp=0x97, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0xe2}, {.addr=0xca48, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xca48, .value=0x26, .type=IO_READ},
        {.addr=0xca49, .value=DUMMY, .type=IO_READ},
        {.addr=0x014a, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_035C) {
    const struct CPU_State initial_cpu = {.pc=0x612d, .a=0xf6, .x=0x4d, .y=0x59, .sp=0x40, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x004d, .value=0xc0}, {.addr=0x612d, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x612e, .a=0xc0, .x=0x4d, .y=0x59, .sp=0x40, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x004d, .value=0xc0}, {.addr=0x612d, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x612d, .value=0x26, .type=IO_READ},
        {.addr=0x612e, .value=DUMMY, .type=IO_READ},
        {.addr=0x004d, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_035D) {
    const struct CPU_State initial_cpu = {.pc=0x3720, .a=0xbe, .x=0xaa, .y=0xda, .sp=0x59, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x01aa, .value=0xdc}, {.addr=0x3720, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x3721, .a=0x9c, .x=0xaa, .y=0xda, .sp=0x59, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x01aa, .value=0xdc}, {.addr=0x3720, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x3720, .value=0x26, .type=IO_READ},
        {.addr=0x3721, .value=DUMMY, .type=IO_READ},
        {.addr=0x01aa, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_035E) {
    const struct CPU_State initial_cpu = {.pc=0xa933, .a=0xe4, .x=0x80, .y=0x51, .sp=0x71, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0x7d}, {.addr=0xa933, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xa934, .a=0x64, .x=0x80, .y=0x51, .sp=0x71, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0x7d}, {.addr=0xa933, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xa933, .value=0x26, .type=IO_READ},
        {.addr=0xa934, .value=DUMMY, .type=IO_READ},
        {.addr=0x0180, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_035F) {
    const struct CPU_State initial_cpu = {.pc=0xcbb8, .a=0x66, .x=0x5b, .y=0x3a, .sp=0x6a, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x005b, .value=0x0c}, {.addr=0xcbb8, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xcbb9, .a=0x04, .x=0x5b, .y=0x3a, .sp=0x6a, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x005b, .value=0x0c}, {.addr=0xcbb8, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xcbb8, .value=0x26, .type=IO_READ},
        {.addr=0xcbb9, .value=DUMMY, .type=IO_READ},
        {.addr=0x005b, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0360) {
    const struct CPU_State initial_cpu = {.pc=0x3ba9, .a=0x9b, .x=0x23, .y=0x94, .sp=0x13, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x0023, .value=0x2c}, {.addr=0x3ba9, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x3baa, .a=0x08, .x=0x23, .y=0x94, .sp=0x13, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x0023, .value=0x2c}, {.addr=0x3ba9, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x3ba9, .value=0x26, .type=IO_READ},
        {.addr=0x3baa, .value=DUMMY, .type=IO_READ},
        {.addr=0x0023, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0361) {
    const struct CPU_State initial_cpu = {.pc=0x719c, .a=0xb7, .x=0x53, .y=0x5d, .sp=0x2d, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x0053, .value=0x0c}, {.addr=0x719c, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x719d, .a=0x04, .x=0x53, .y=0x5d, .sp=0x2d, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0053, .value=0x0c}, {.addr=0x719c, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x719c, .value=0x26, .type=IO_READ},
        {.addr=0x719d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0053, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0362) {
    const struct CPU_State initial_cpu = {.pc=0x3de9, .a=0x13, .x=0xee, .y=0x8c, .sp=0x16, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0x13}, {.addr=0x3de9, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x3dea, .a=0x13, .x=0xee, .y=0x8c, .sp=0x16, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0x13}, {.addr=0x3de9, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x3de9, .value=0x26, .type=IO_READ},
        {.addr=0x3dea, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ee, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0363) {
    const struct CPU_State initial_cpu = {.pc=0x919d, .a=0x05, .x=0x6f, .y=0x50, .sp=0x58, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x006f, .value=0x76}, {.addr=0x919d, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x919e, .a=0x04, .x=0x6f, .y=0x50, .sp=0x58, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x006f, .value=0x76}, {.addr=0x919d, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x919d, .value=0x26, .type=IO_READ},
        {.addr=0x919e, .value=DUMMY, .type=IO_READ},
        {.addr=0x006f, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0365) {
    const struct CPU_State initial_cpu = {.pc=0x0167, .a=0x65, .x=0xd9, .y=0xed, .sp=0xb3, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x00d9, .value=0xb4}, {.addr=0x0167, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x0168, .a=0x24, .x=0xd9, .y=0xed, .sp=0xb3, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x00d9, .value=0xb4}, {.addr=0x0167, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x0167, .value=0x26, .type=IO_READ},
        {.addr=0x0168, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d9, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0366) {
    const struct CPU_State initial_cpu = {.pc=0x4afe, .a=0x31, .x=0xfe, .y=0xfd, .sp=0x65, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x01fe, .value=0x1b}, {.addr=0x4afe, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x4aff, .a=0x11, .x=0xfe, .y=0xfd, .sp=0x65, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x01fe, .value=0x1b}, {.addr=0x4afe, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x4afe, .value=0x26, .type=IO_READ},
        {.addr=0x4aff, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fe, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0367) {
    const struct CPU_State initial_cpu = {.pc=0xb120, .a=0x40, .x=0xba, .y=0x4b, .sp=0x22, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x00ba, .value=0xa3}, {.addr=0xb120, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xb121, .a=0x00, .x=0xba, .y=0x4b, .sp=0x22, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x00ba, .value=0xa3}, {.addr=0xb120, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xb120, .value=0x26, .type=IO_READ},
        {.addr=0xb121, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ba, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0368) {
    const struct CPU_State initial_cpu = {.pc=0x8f35, .a=0x28, .x=0x7f, .y=0x90, .sp=0xc9, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x007f, .value=0x8d}, {.addr=0x8f35, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x8f36, .a=0x08, .x=0x7f, .y=0x90, .sp=0xc9, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x007f, .value=0x8d}, {.addr=0x8f35, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x8f35, .value=0x26, .type=IO_READ},
        {.addr=0x8f36, .value=DUMMY, .type=IO_READ},
        {.addr=0x007f, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0369) {
    const struct CPU_State initial_cpu = {.pc=0xe17a, .a=0x3a, .x=0x86, .y=0x4a, .sp=0xea, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x0086, .value=0xda}, {.addr=0xe17a, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xe17b, .a=0x1a, .x=0x86, .y=0x4a, .sp=0xea, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x0086, .value=0xda}, {.addr=0xe17a, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xe17a, .value=0x26, .type=IO_READ},
        {.addr=0xe17b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0086, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_036A) {
    const struct CPU_State initial_cpu = {.pc=0xbc95, .a=0x5e, .x=0x1f, .y=0x8a, .sp=0x1b, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0x7e}, {.addr=0xbc95, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xbc96, .a=0x5e, .x=0x1f, .y=0x8a, .sp=0x1b, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0x7e}, {.addr=0xbc95, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xbc95, .value=0x26, .type=IO_READ},
        {.addr=0xbc96, .value=DUMMY, .type=IO_READ},
        {.addr=0x011f, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_036B) {
    const struct CPU_State initial_cpu = {.pc=0x2675, .a=0xf1, .x=0x5f, .y=0x46, .sp=0x21, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0x77}, {.addr=0x2675, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x2676, .a=0x71, .x=0x5f, .y=0x46, .sp=0x21, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0x77}, {.addr=0x2675, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x2675, .value=0x26, .type=IO_READ},
        {.addr=0x2676, .value=DUMMY, .type=IO_READ},
        {.addr=0x015f, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_036C) {
    const struct CPU_State initial_cpu = {.pc=0x91d4, .a=0xd4, .x=0xcc, .y=0x92, .sp=0x52, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x00cc, .value=0x05}, {.addr=0x91d4, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x91d5, .a=0x04, .x=0xcc, .y=0x92, .sp=0x52, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x00cc, .value=0x05}, {.addr=0x91d4, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x91d4, .value=0x26, .type=IO_READ},
        {.addr=0x91d5, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cc, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_036D) {
    const struct CPU_State initial_cpu = {.pc=0x2bc7, .a=0xce, .x=0x50, .y=0x9c, .sp=0xf2, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x0050, .value=0x34}, {.addr=0x2bc7, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x2bc8, .a=0x04, .x=0x50, .y=0x9c, .sp=0xf2, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0050, .value=0x34}, {.addr=0x2bc7, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x2bc7, .value=0x26, .type=IO_READ},
        {.addr=0x2bc8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0050, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_036E) {
    const struct CPU_State initial_cpu = {.pc=0x7120, .a=0x9a, .x=0x07, .y=0xb7, .sp=0xd2, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x0007, .value=0x87}, {.addr=0x7120, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x7121, .a=0x82, .x=0x07, .y=0xb7, .sp=0xd2, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0007, .value=0x87}, {.addr=0x7120, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x7120, .value=0x26, .type=IO_READ},
        {.addr=0x7121, .value=DUMMY, .type=IO_READ},
        {.addr=0x0007, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_036F) {
    const struct CPU_State initial_cpu = {.pc=0x8d8c, .a=0x0f, .x=0xf8, .y=0x99, .sp=0x13, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x01f8, .value=0x6a}, {.addr=0x8d8c, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x8d8d, .a=0x0a, .x=0xf8, .y=0x99, .sp=0x13, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x01f8, .value=0x6a}, {.addr=0x8d8c, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x8d8c, .value=0x26, .type=IO_READ},
        {.addr=0x8d8d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f8, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0370) {
    const struct CPU_State initial_cpu = {.pc=0x24aa, .a=0xb7, .x=0x73, .y=0x5b, .sp=0x17, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0x63}, {.addr=0x24aa, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x24ab, .a=0x23, .x=0x73, .y=0x5b, .sp=0x17, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0x63}, {.addr=0x24aa, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x24aa, .value=0x26, .type=IO_READ},
        {.addr=0x24ab, .value=DUMMY, .type=IO_READ},
        {.addr=0x0173, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0372) {
    const struct CPU_State initial_cpu = {.pc=0xaa89, .a=0x00, .x=0x24, .y=0x83, .sp=0xa8, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0xed}, {.addr=0xaa89, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xaa8a, .a=0x00, .x=0x24, .y=0x83, .sp=0xa8, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0xed}, {.addr=0xaa89, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xaa89, .value=0x26, .type=IO_READ},
        {.addr=0xaa8a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0124, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0373) {
    const struct CPU_State initial_cpu = {.pc=0x546e, .a=0x9d, .x=0x09, .y=0xde, .sp=0xab, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x0009, .value=0xa4}, {.addr=0x546e, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x546f, .a=0x84, .x=0x09, .y=0xde, .sp=0xab, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x0009, .value=0xa4}, {.addr=0x546e, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x546e, .value=0x26, .type=IO_READ},
        {.addr=0x546f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0009, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0374) {
    const struct CPU_State initial_cpu = {.pc=0xe4d9, .a=0x26, .x=0x8a, .y=0x8b, .sp=0x38, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x008a, .value=0x70}, {.addr=0xe4d9, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xe4da, .a=0x20, .x=0x8a, .y=0x8b, .sp=0x38, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x008a, .value=0x70}, {.addr=0xe4d9, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xe4d9, .value=0x26, .type=IO_READ},
        {.addr=0xe4da, .value=DUMMY, .type=IO_READ},
        {.addr=0x008a, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0375) {
    const struct CPU_State initial_cpu = {.pc=0xd903, .a=0xf7, .x=0x72, .y=0x2f, .sp=0x7d, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x0072, .value=0x6e}, {.addr=0xd903, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xd904, .a=0x66, .x=0x72, .y=0x2f, .sp=0x7d, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0072, .value=0x6e}, {.addr=0xd903, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xd903, .value=0x26, .type=IO_READ},
        {.addr=0xd904, .value=DUMMY, .type=IO_READ},
        {.addr=0x0072, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0376) {
    const struct CPU_State initial_cpu = {.pc=0x2f16, .a=0xf4, .x=0x5f, .y=0x2b, .sp=0x62, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0x75}, {.addr=0x2f16, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x2f17, .a=0x74, .x=0x5f, .y=0x2b, .sp=0x62, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0x75}, {.addr=0x2f16, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x2f16, .value=0x26, .type=IO_READ},
        {.addr=0x2f17, .value=DUMMY, .type=IO_READ},
        {.addr=0x015f, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0377) {
    const struct CPU_State initial_cpu = {.pc=0xe102, .a=0xd7, .x=0x09, .y=0xc9, .sp=0x4e, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x0109, .value=0x82}, {.addr=0xe102, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xe103, .a=0x82, .x=0x09, .y=0xc9, .sp=0x4e, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x0109, .value=0x82}, {.addr=0xe102, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xe102, .value=0x26, .type=IO_READ},
        {.addr=0xe103, .value=DUMMY, .type=IO_READ},
        {.addr=0x0109, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0378) {
    const struct CPU_State initial_cpu = {.pc=0x192d, .a=0xda, .x=0x74, .y=0xce, .sp=0x36, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x0074, .value=0x36}, {.addr=0x192d, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x192e, .a=0x12, .x=0x74, .y=0xce, .sp=0x36, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0074, .value=0x36}, {.addr=0x192d, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x192d, .value=0x26, .type=IO_READ},
        {.addr=0x192e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0074, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_037A) {
    const struct CPU_State initial_cpu = {.pc=0x85a6, .a=0x8c, .x=0xd7, .y=0x0a, .sp=0x12, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0x54}, {.addr=0x85a6, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x85a7, .a=0x04, .x=0xd7, .y=0x0a, .sp=0x12, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0x54}, {.addr=0x85a6, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x85a6, .value=0x26, .type=IO_READ},
        {.addr=0x85a7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d7, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_037B) {
    const struct CPU_State initial_cpu = {.pc=0xa496, .a=0x33, .x=0x3a, .y=0xbb, .sp=0x17, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x003a, .value=0x8d}, {.addr=0xa496, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xa497, .a=0x01, .x=0x3a, .y=0xbb, .sp=0x17, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x003a, .value=0x8d}, {.addr=0xa496, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xa496, .value=0x26, .type=IO_READ},
        {.addr=0xa497, .value=DUMMY, .type=IO_READ},
        {.addr=0x003a, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_037C) {
    const struct CPU_State initial_cpu = {.pc=0x4dc8, .a=0x37, .x=0x0a, .y=0x1e, .sp=0xe0, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x000a, .value=0x94}, {.addr=0x4dc8, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x4dc9, .a=0x14, .x=0x0a, .y=0x1e, .sp=0xe0, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x000a, .value=0x94}, {.addr=0x4dc8, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x4dc8, .value=0x26, .type=IO_READ},
        {.addr=0x4dc9, .value=DUMMY, .type=IO_READ},
        {.addr=0x000a, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_037D) {
    const struct CPU_State initial_cpu = {.pc=0x7bb0, .a=0x31, .x=0x4b, .y=0xb4, .sp=0x87, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x014b, .value=0x30}, {.addr=0x7bb0, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x7bb1, .a=0x30, .x=0x4b, .y=0xb4, .sp=0x87, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x014b, .value=0x30}, {.addr=0x7bb0, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x7bb0, .value=0x26, .type=IO_READ},
        {.addr=0x7bb1, .value=DUMMY, .type=IO_READ},
        {.addr=0x014b, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_037E) {
    const struct CPU_State initial_cpu = {.pc=0x4983, .a=0xef, .x=0xd5, .y=0x3c, .sp=0xc1, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x00d5, .value=0xc5}, {.addr=0x4983, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x4984, .a=0xc5, .x=0xd5, .y=0x3c, .sp=0xc1, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x00d5, .value=0xc5}, {.addr=0x4983, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x4983, .value=0x26, .type=IO_READ},
        {.addr=0x4984, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d5, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_037F) {
    const struct CPU_State initial_cpu = {.pc=0x03dd, .a=0x14, .x=0x01, .y=0x7c, .sp=0xbd, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x0001, .value=0xd8}, {.addr=0x03dd, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x03de, .a=0x10, .x=0x01, .y=0x7c, .sp=0xbd, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x0001, .value=0xd8}, {.addr=0x03dd, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x03dd, .value=0x26, .type=IO_READ},
        {.addr=0x03de, .value=DUMMY, .type=IO_READ},
        {.addr=0x0001, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0380) {
    const struct CPU_State initial_cpu = {.pc=0x3de2, .a=0xc1, .x=0x4c, .y=0x03, .sp=0xe1, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x014c, .value=0x17}, {.addr=0x3de2, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x3de3, .a=0x01, .x=0x4c, .y=0x03, .sp=0xe1, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x014c, .value=0x17}, {.addr=0x3de2, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x3de2, .value=0x26, .type=IO_READ},
        {.addr=0x3de3, .value=DUMMY, .type=IO_READ},
        {.addr=0x014c, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0381) {
    const struct CPU_State initial_cpu = {.pc=0x76fa, .a=0x33, .x=0xd1, .y=0xcf, .sp=0x02, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x00d1, .value=0x7b}, {.addr=0x76fa, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x76fb, .a=0x33, .x=0xd1, .y=0xcf, .sp=0x02, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x00d1, .value=0x7b}, {.addr=0x76fa, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x76fa, .value=0x26, .type=IO_READ},
        {.addr=0x76fb, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d1, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0382) {
    const struct CPU_State initial_cpu = {.pc=0x6a9d, .a=0xdc, .x=0x3b, .y=0x1b, .sp=0x56, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0x7e}, {.addr=0x6a9d, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x6a9e, .a=0x5c, .x=0x3b, .y=0x1b, .sp=0x56, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0x7e}, {.addr=0x6a9d, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x6a9d, .value=0x26, .type=IO_READ},
        {.addr=0x6a9e, .value=DUMMY, .type=IO_READ},
        {.addr=0x013b, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0383) {
    const struct CPU_State initial_cpu = {.pc=0xfc74, .a=0x53, .x=0xda, .y=0xc8, .sp=0x9c, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x00da, .value=0xcd}, {.addr=0xfc74, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xfc75, .a=0x41, .x=0xda, .y=0xc8, .sp=0x9c, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x00da, .value=0xcd}, {.addr=0xfc74, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xfc74, .value=0x26, .type=IO_READ},
        {.addr=0xfc75, .value=DUMMY, .type=IO_READ},
        {.addr=0x00da, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0384) {
    const struct CPU_State initial_cpu = {.pc=0x1315, .a=0x75, .x=0x6b, .y=0x83, .sp=0x6a, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x006b, .value=0xca}, {.addr=0x1315, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x1316, .a=0x40, .x=0x6b, .y=0x83, .sp=0x6a, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x006b, .value=0xca}, {.addr=0x1315, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x1315, .value=0x26, .type=IO_READ},
        {.addr=0x1316, .value=DUMMY, .type=IO_READ},
        {.addr=0x006b, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0385) {
    const struct CPU_State initial_cpu = {.pc=0x2458, .a=0x59, .x=0x20, .y=0x47, .sp=0x39, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0x30}, {.addr=0x2458, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x2459, .a=0x10, .x=0x20, .y=0x47, .sp=0x39, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0x30}, {.addr=0x2458, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x2458, .value=0x26, .type=IO_READ},
        {.addr=0x2459, .value=DUMMY, .type=IO_READ},
        {.addr=0x0120, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0386) {
    const struct CPU_State initial_cpu = {.pc=0x052f, .a=0xae, .x=0x3f, .y=0xee, .sp=0xf4, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x013f, .value=0x34}, {.addr=0x052f, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x0530, .a=0x24, .x=0x3f, .y=0xee, .sp=0xf4, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x013f, .value=0x34}, {.addr=0x052f, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x052f, .value=0x26, .type=IO_READ},
        {.addr=0x0530, .value=DUMMY, .type=IO_READ},
        {.addr=0x013f, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0387) {
    const struct CPU_State initial_cpu = {.pc=0x05fa, .a=0x0a, .x=0x97, .y=0xa8, .sp=0x5d, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x0197, .value=0x9a}, {.addr=0x05fa, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x05fb, .a=0x0a, .x=0x97, .y=0xa8, .sp=0x5d, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0197, .value=0x9a}, {.addr=0x05fa, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x05fa, .value=0x26, .type=IO_READ},
        {.addr=0x05fb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0197, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0388) {
    const struct CPU_State initial_cpu = {.pc=0xa00c, .a=0x40, .x=0xd0, .y=0x73, .sp=0xf6, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x00d0, .value=0xa9}, {.addr=0xa00c, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xa00d, .a=0x00, .x=0xd0, .y=0x73, .sp=0xf6, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x00d0, .value=0xa9}, {.addr=0xa00c, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xa00c, .value=0x26, .type=IO_READ},
        {.addr=0xa00d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d0, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0389) {
    const struct CPU_State initial_cpu = {.pc=0x14ed, .a=0x8f, .x=0x5b, .y=0xa7, .sp=0x6e, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x005b, .value=0xf1}, {.addr=0x14ed, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x14ee, .a=0x81, .x=0x5b, .y=0xa7, .sp=0x6e, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x005b, .value=0xf1}, {.addr=0x14ed, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x14ed, .value=0x26, .type=IO_READ},
        {.addr=0x14ee, .value=DUMMY, .type=IO_READ},
        {.addr=0x005b, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_038A) {
    const struct CPU_State initial_cpu = {.pc=0xb10b, .a=0x28, .x=0x9c, .y=0xf1, .sp=0x75, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x019c, .value=0x49}, {.addr=0xb10b, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xb10c, .a=0x08, .x=0x9c, .y=0xf1, .sp=0x75, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x019c, .value=0x49}, {.addr=0xb10b, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xb10b, .value=0x26, .type=IO_READ},
        {.addr=0xb10c, .value=DUMMY, .type=IO_READ},
        {.addr=0x019c, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_038B) {
    const struct CPU_State initial_cpu = {.pc=0xef59, .a=0x98, .x=0x5c, .y=0xcd, .sp=0x75, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0x4d}, {.addr=0xef59, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xef5a, .a=0x08, .x=0x5c, .y=0xcd, .sp=0x75, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0x4d}, {.addr=0xef59, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xef59, .value=0x26, .type=IO_READ},
        {.addr=0xef5a, .value=DUMMY, .type=IO_READ},
        {.addr=0x015c, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_038C) {
    const struct CPU_State initial_cpu = {.pc=0xdb52, .a=0xe5, .x=0x65, .y=0x20, .sp=0x7f, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x0165, .value=0x7e}, {.addr=0xdb52, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xdb53, .a=0x64, .x=0x65, .y=0x20, .sp=0x7f, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0165, .value=0x7e}, {.addr=0xdb52, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xdb52, .value=0x26, .type=IO_READ},
        {.addr=0xdb53, .value=DUMMY, .type=IO_READ},
        {.addr=0x0165, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_038D) {
    const struct CPU_State initial_cpu = {.pc=0x9fa0, .a=0xe7, .x=0xcd, .y=0xde, .sp=0xda, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x00cd, .value=0xdb}, {.addr=0x9fa0, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x9fa1, .a=0xc3, .x=0xcd, .y=0xde, .sp=0xda, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x00cd, .value=0xdb}, {.addr=0x9fa0, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x9fa0, .value=0x26, .type=IO_READ},
        {.addr=0x9fa1, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cd, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_038E) {
    const struct CPU_State initial_cpu = {.pc=0x6730, .a=0x08, .x=0x47, .y=0xea, .sp=0x55, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x0047, .value=0xd0}, {.addr=0x6730, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x6731, .a=0x00, .x=0x47, .y=0xea, .sp=0x55, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x0047, .value=0xd0}, {.addr=0x6730, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x6730, .value=0x26, .type=IO_READ},
        {.addr=0x6731, .value=DUMMY, .type=IO_READ},
        {.addr=0x0047, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0390) {
    const struct CPU_State initial_cpu = {.pc=0x83fa, .a=0xcc, .x=0xfc, .y=0x39, .sp=0x9b, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x4a}, {.addr=0x83fa, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x83fb, .a=0x48, .x=0xfc, .y=0x39, .sp=0x9b, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x4a}, {.addr=0x83fa, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x83fa, .value=0x26, .type=IO_READ},
        {.addr=0x83fb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fc, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0391) {
    const struct CPU_State initial_cpu = {.pc=0x4540, .a=0x9f, .x=0x0a, .y=0x6e, .sp=0x9e, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0xd2}, {.addr=0x4540, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x4541, .a=0x92, .x=0x0a, .y=0x6e, .sp=0x9e, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0xd2}, {.addr=0x4540, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x4540, .value=0x26, .type=IO_READ},
        {.addr=0x4541, .value=DUMMY, .type=IO_READ},
        {.addr=0x010a, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0392) {
    const struct CPU_State initial_cpu = {.pc=0x03fa, .a=0x11, .x=0x97, .y=0xcd, .sp=0xa2, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x0097, .value=0xe6}, {.addr=0x03fa, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x03fb, .a=0x00, .x=0x97, .y=0xcd, .sp=0xa2, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x0097, .value=0xe6}, {.addr=0x03fa, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x03fa, .value=0x26, .type=IO_READ},
        {.addr=0x03fb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0097, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0393) {
    const struct CPU_State initial_cpu = {.pc=0x9466, .a=0x83, .x=0xcb, .y=0x62, .sp=0x64, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x00cb, .value=0xba}, {.addr=0x9466, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x9467, .a=0x82, .x=0xcb, .y=0x62, .sp=0x64, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x00cb, .value=0xba}, {.addr=0x9466, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x9466, .value=0x26, .type=IO_READ},
        {.addr=0x9467, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cb, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0394) {
    const struct CPU_State initial_cpu = {.pc=0x4ee3, .a=0x7d, .x=0x47, .y=0x65, .sp=0xcc, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x0047, .value=0x53}, {.addr=0x4ee3, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x4ee4, .a=0x51, .x=0x47, .y=0x65, .sp=0xcc, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x0047, .value=0x53}, {.addr=0x4ee3, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x4ee3, .value=0x26, .type=IO_READ},
        {.addr=0x4ee4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0047, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0395) {
    const struct CPU_State initial_cpu = {.pc=0x949d, .a=0x29, .x=0x77, .y=0xda, .sp=0x5d, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x0177, .value=0x47}, {.addr=0x949d, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x949e, .a=0x01, .x=0x77, .y=0xda, .sp=0x5d, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0177, .value=0x47}, {.addr=0x949d, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x949d, .value=0x26, .type=IO_READ},
        {.addr=0x949e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0177, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0396) {
    const struct CPU_State initial_cpu = {.pc=0x0328, .a=0xd0, .x=0x79, .y=0x25, .sp=0x9a, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0079, .value=0x32}, {.addr=0x0328, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x0329, .a=0x10, .x=0x79, .y=0x25, .sp=0x9a, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0079, .value=0x32}, {.addr=0x0328, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x0328, .value=0x26, .type=IO_READ},
        {.addr=0x0329, .value=DUMMY, .type=IO_READ},
        {.addr=0x0079, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0397) {
    const struct CPU_State initial_cpu = {.pc=0x5b45, .a=0xa2, .x=0x06, .y=0xd6, .sp=0xe8, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0xb4}, {.addr=0x5b45, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x5b46, .a=0xa0, .x=0x06, .y=0xd6, .sp=0xe8, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0xb4}, {.addr=0x5b45, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x5b45, .value=0x26, .type=IO_READ},
        {.addr=0x5b46, .value=DUMMY, .type=IO_READ},
        {.addr=0x0106, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0398) {
    const struct CPU_State initial_cpu = {.pc=0x089a, .a=0x7c, .x=0x1f, .y=0xe7, .sp=0x71, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x001f, .value=0x27}, {.addr=0x089a, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x089b, .a=0x24, .x=0x1f, .y=0xe7, .sp=0x71, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x001f, .value=0x27}, {.addr=0x089a, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x089a, .value=0x26, .type=IO_READ},
        {.addr=0x089b, .value=DUMMY, .type=IO_READ},
        {.addr=0x001f, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_0399) {
    const struct CPU_State initial_cpu = {.pc=0x5d9e, .a=0x32, .x=0x72, .y=0xa4, .sp=0xc3, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x0072, .value=0x2b}, {.addr=0x5d9e, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x5d9f, .a=0x22, .x=0x72, .y=0xa4, .sp=0xc3, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0072, .value=0x2b}, {.addr=0x5d9e, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x5d9e, .value=0x26, .type=IO_READ},
        {.addr=0x5d9f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0072, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_039A) {
    const struct CPU_State initial_cpu = {.pc=0x4528, .a=0x80, .x=0x98, .y=0x32, .sp=0xcb, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x0198, .value=0xd3}, {.addr=0x4528, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x4529, .a=0x80, .x=0x98, .y=0x32, .sp=0xcb, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0198, .value=0xd3}, {.addr=0x4528, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x4528, .value=0x26, .type=IO_READ},
        {.addr=0x4529, .value=DUMMY, .type=IO_READ},
        {.addr=0x0198, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_039B) {
    const struct CPU_State initial_cpu = {.pc=0x46fa, .a=0x94, .x=0x34, .y=0x20, .sp=0x9c, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0xb9}, {.addr=0x46fa, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x46fb, .a=0x90, .x=0x34, .y=0x20, .sp=0x9c, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0xb9}, {.addr=0x46fa, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x46fa, .value=0x26, .type=IO_READ},
        {.addr=0x46fb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0134, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_039C) {
    const struct CPU_State initial_cpu = {.pc=0xdd05, .a=0xbb, .x=0x8d, .y=0x12, .sp=0xdf, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x018d, .value=0xa1}, {.addr=0xdd05, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xdd06, .a=0xa1, .x=0x8d, .y=0x12, .sp=0xdf, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x018d, .value=0xa1}, {.addr=0xdd05, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xdd05, .value=0x26, .type=IO_READ},
        {.addr=0xdd06, .value=DUMMY, .type=IO_READ},
        {.addr=0x018d, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_039D) {
    const struct CPU_State initial_cpu = {.pc=0xf641, .a=0x36, .x=0x1d, .y=0xe3, .sp=0x3d, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0xc2}, {.addr=0xf641, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xf642, .a=0x02, .x=0x1d, .y=0xe3, .sp=0x3d, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0xc2}, {.addr=0xf641, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xf641, .value=0x26, .type=IO_READ},
        {.addr=0xf642, .value=DUMMY, .type=IO_READ},
        {.addr=0x011d, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_039E) {
    const struct CPU_State initial_cpu = {.pc=0x18bb, .a=0xbd, .x=0xc9, .y=0xcd, .sp=0xa6, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x00c9, .value=0x79}, {.addr=0x18bb, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x18bc, .a=0x39, .x=0xc9, .y=0xcd, .sp=0xa6, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x00c9, .value=0x79}, {.addr=0x18bb, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x18bb, .value=0x26, .type=IO_READ},
        {.addr=0x18bc, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c9, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_039F) {
    const struct CPU_State initial_cpu = {.pc=0xba98, .a=0xf0, .x=0x1a, .y=0x03, .sp=0x2b, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x011a, .value=0x18}, {.addr=0xba98, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xba99, .a=0x10, .x=0x1a, .y=0x03, .sp=0x2b, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x011a, .value=0x18}, {.addr=0xba98, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xba98, .value=0x26, .type=IO_READ},
        {.addr=0xba99, .value=DUMMY, .type=IO_READ},
        {.addr=0x011a, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03A0) {
    const struct CPU_State initial_cpu = {.pc=0xad5d, .a=0xc6, .x=0x04, .y=0xf8, .sp=0x1c, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0xb2}, {.addr=0xad5d, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xad5e, .a=0x82, .x=0x04, .y=0xf8, .sp=0x1c, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0xb2}, {.addr=0xad5d, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xad5d, .value=0x26, .type=IO_READ},
        {.addr=0xad5e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0104, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03A1) {
    const struct CPU_State initial_cpu = {.pc=0xd97c, .a=0x74, .x=0xea, .y=0x05, .sp=0x8c, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0xde}, {.addr=0xd97c, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xd97d, .a=0x54, .x=0xea, .y=0x05, .sp=0x8c, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0xde}, {.addr=0xd97c, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xd97c, .value=0x26, .type=IO_READ},
        {.addr=0xd97d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ea, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03A2) {
    const struct CPU_State initial_cpu = {.pc=0x755e, .a=0xe8, .x=0xbb, .y=0x7a, .sp=0x30, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x01bb, .value=0x10}, {.addr=0x755e, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x755f, .a=0x00, .x=0xbb, .y=0x7a, .sp=0x30, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x01bb, .value=0x10}, {.addr=0x755e, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x755e, .value=0x26, .type=IO_READ},
        {.addr=0x755f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bb, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03A3) {
    const struct CPU_State initial_cpu = {.pc=0xe686, .a=0x74, .x=0xac, .y=0x27, .sp=0x3b, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x01ac, .value=0xc3}, {.addr=0xe686, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xe687, .a=0x40, .x=0xac, .y=0x27, .sp=0x3b, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01ac, .value=0xc3}, {.addr=0xe686, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xe686, .value=0x26, .type=IO_READ},
        {.addr=0xe687, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ac, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03A4) {
    const struct CPU_State initial_cpu = {.pc=0xff04, .a=0x30, .x=0xae, .y=0x75, .sp=0xd1, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x01ae, .value=0x52}, {.addr=0xff04, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xff05, .a=0x10, .x=0xae, .y=0x75, .sp=0xd1, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01ae, .value=0x52}, {.addr=0xff04, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xff04, .value=0x26, .type=IO_READ},
        {.addr=0xff05, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ae, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03A5) {
    const struct CPU_State initial_cpu = {.pc=0xeb15, .a=0xa2, .x=0x47, .y=0x27, .sp=0x20, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x0147, .value=0xa9}, {.addr=0xeb15, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xeb16, .a=0xa0, .x=0x47, .y=0x27, .sp=0x20, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x0147, .value=0xa9}, {.addr=0xeb15, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xeb15, .value=0x26, .type=IO_READ},
        {.addr=0xeb16, .value=DUMMY, .type=IO_READ},
        {.addr=0x0147, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x8315, .a=0xd7, .x=0xc2, .y=0xc1, .sp=0xb1, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x00c2, .value=0x7f}, {.addr=0x8315, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x8316, .a=0x57, .x=0xc2, .y=0xc1, .sp=0xb1, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x00c2, .value=0x7f}, {.addr=0x8315, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x8315, .value=0x26, .type=IO_READ},
        {.addr=0x8316, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c2, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x990b, .a=0x35, .x=0xcc, .y=0x3f, .sp=0xbc, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0xae}, {.addr=0x990b, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x990c, .a=0x24, .x=0xcc, .y=0x3f, .sp=0xbc, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0xae}, {.addr=0x990b, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x990b, .value=0x26, .type=IO_READ},
        {.addr=0x990c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cc, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03A8) {
    const struct CPU_State initial_cpu = {.pc=0xfb62, .a=0xe6, .x=0x79, .y=0xfc, .sp=0xdd, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x0079, .value=0x4b}, {.addr=0xfb62, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xfb63, .a=0x42, .x=0x79, .y=0xfc, .sp=0xdd, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0079, .value=0x4b}, {.addr=0xfb62, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xfb62, .value=0x26, .type=IO_READ},
        {.addr=0xfb63, .value=DUMMY, .type=IO_READ},
        {.addr=0x0079, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03A9) {
    const struct CPU_State initial_cpu = {.pc=0xd411, .a=0x29, .x=0x63, .y=0xb4, .sp=0x3d, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0xbc}, {.addr=0xd411, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xd412, .a=0x28, .x=0x63, .y=0xb4, .sp=0x3d, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0xbc}, {.addr=0xd411, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xd411, .value=0x26, .type=IO_READ},
        {.addr=0xd412, .value=DUMMY, .type=IO_READ},
        {.addr=0x0163, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03AA) {
    const struct CPU_State initial_cpu = {.pc=0xaca5, .a=0xe2, .x=0x36, .y=0x3c, .sp=0x46, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x0036, .value=0xa1}, {.addr=0xaca5, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xaca6, .a=0xa0, .x=0x36, .y=0x3c, .sp=0x46, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0036, .value=0xa1}, {.addr=0xaca5, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xaca5, .value=0x26, .type=IO_READ},
        {.addr=0xaca6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0036, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03AB) {
    const struct CPU_State initial_cpu = {.pc=0xd046, .a=0xbb, .x=0xd4, .y=0xa5, .sp=0x96, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x00d4, .value=0x92}, {.addr=0xd046, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xd047, .a=0x92, .x=0xd4, .y=0xa5, .sp=0x96, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x00d4, .value=0x92}, {.addr=0xd046, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xd046, .value=0x26, .type=IO_READ},
        {.addr=0xd047, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d4, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03AC) {
    const struct CPU_State initial_cpu = {.pc=0x9436, .a=0xeb, .x=0xe5, .y=0x8e, .sp=0xeb, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x00e5, .value=0xaa}, {.addr=0x9436, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x9437, .a=0xaa, .x=0xe5, .y=0x8e, .sp=0xeb, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x00e5, .value=0xaa}, {.addr=0x9436, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x9436, .value=0x26, .type=IO_READ},
        {.addr=0x9437, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e5, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x4a64, .a=0x44, .x=0x6a, .y=0x58, .sp=0xd4, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0xda}, {.addr=0x4a64, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x4a65, .a=0x40, .x=0x6a, .y=0x58, .sp=0xd4, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0xda}, {.addr=0x4a64, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x4a64, .value=0x26, .type=IO_READ},
        {.addr=0x4a65, .value=DUMMY, .type=IO_READ},
        {.addr=0x016a, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03AF) {
    const struct CPU_State initial_cpu = {.pc=0xd071, .a=0x6c, .x=0x7d, .y=0xe5, .sp=0xa5, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0xb6}, {.addr=0xd071, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xd072, .a=0x24, .x=0x7d, .y=0xe5, .sp=0xa5, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0xb6}, {.addr=0xd071, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xd071, .value=0x26, .type=IO_READ},
        {.addr=0xd072, .value=DUMMY, .type=IO_READ},
        {.addr=0x017d, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x0221, .a=0x61, .x=0xc9, .y=0xe8, .sp=0x22, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0x40}, {.addr=0x0221, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x0222, .a=0x40, .x=0xc9, .y=0xe8, .sp=0x22, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0x40}, {.addr=0x0221, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x0221, .value=0x26, .type=IO_READ},
        {.addr=0x0222, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c9, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03B1) {
    const struct CPU_State initial_cpu = {.pc=0xf918, .a=0xbb, .x=0xb5, .y=0x6c, .sp=0x91, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x00b5, .value=0xd1}, {.addr=0xf918, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xf919, .a=0x91, .x=0xb5, .y=0x6c, .sp=0x91, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x00b5, .value=0xd1}, {.addr=0xf918, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xf918, .value=0x26, .type=IO_READ},
        {.addr=0xf919, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b5, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03B2) {
    const struct CPU_State initial_cpu = {.pc=0xd13a, .a=0x5f, .x=0xaa, .y=0x2e, .sp=0x4e, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x01aa, .value=0x3a}, {.addr=0xd13a, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xd13b, .a=0x1a, .x=0xaa, .y=0x2e, .sp=0x4e, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x01aa, .value=0x3a}, {.addr=0xd13a, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xd13a, .value=0x26, .type=IO_READ},
        {.addr=0xd13b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01aa, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03B4) {
    const struct CPU_State initial_cpu = {.pc=0xadcc, .a=0x72, .x=0xc4, .y=0x18, .sp=0x44, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x00c4, .value=0x38}, {.addr=0xadcc, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xadcd, .a=0x30, .x=0xc4, .y=0x18, .sp=0x44, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x00c4, .value=0x38}, {.addr=0xadcc, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xadcc, .value=0x26, .type=IO_READ},
        {.addr=0xadcd, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c4, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03B5) {
    const struct CPU_State initial_cpu = {.pc=0x53b4, .a=0x8b, .x=0x27, .y=0x45, .sp=0xd7, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x0127, .value=0x52}, {.addr=0x53b4, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x53b5, .a=0x02, .x=0x27, .y=0x45, .sp=0xd7, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0127, .value=0x52}, {.addr=0x53b4, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x53b4, .value=0x26, .type=IO_READ},
        {.addr=0x53b5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0127, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03B6) {
    const struct CPU_State initial_cpu = {.pc=0x3a4e, .a=0xd0, .x=0x14, .y=0x99, .sp=0xd7, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0014, .value=0x1a}, {.addr=0x3a4e, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x3a4f, .a=0x10, .x=0x14, .y=0x99, .sp=0xd7, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0014, .value=0x1a}, {.addr=0x3a4e, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x3a4e, .value=0x26, .type=IO_READ},
        {.addr=0x3a4f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0014, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03B7) {
    const struct CPU_State initial_cpu = {.pc=0xe90b, .a=0x67, .x=0x00, .y=0x3b, .sp=0x74, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x0000, .value=0x9d}, {.addr=0xe90b, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xe90c, .a=0x05, .x=0x00, .y=0x3b, .sp=0x74, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0000, .value=0x9d}, {.addr=0xe90b, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xe90b, .value=0x26, .type=IO_READ},
        {.addr=0xe90c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0000, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03B8) {
    const struct CPU_State initial_cpu = {.pc=0x54a3, .a=0x82, .x=0x07, .y=0x23, .sp=0x2d, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0xee}, {.addr=0x54a3, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x54a4, .a=0x82, .x=0x07, .y=0x23, .sp=0x2d, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0xee}, {.addr=0x54a3, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x54a3, .value=0x26, .type=IO_READ},
        {.addr=0x54a4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0107, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03B9) {
    const struct CPU_State initial_cpu = {.pc=0xccaa, .a=0xf7, .x=0x15, .y=0x8c, .sp=0x02, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x0115, .value=0x00}, {.addr=0xccaa, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xccab, .a=0x00, .x=0x15, .y=0x8c, .sp=0x02, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x0115, .value=0x00}, {.addr=0xccaa, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xccaa, .value=0x26, .type=IO_READ},
        {.addr=0xccab, .value=DUMMY, .type=IO_READ},
        {.addr=0x0115, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03BA) {
    const struct CPU_State initial_cpu = {.pc=0xcd3b, .a=0xc8, .x=0x72, .y=0x1d, .sp=0xd5, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0x91}, {.addr=0xcd3b, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xcd3c, .a=0x80, .x=0x72, .y=0x1d, .sp=0xd5, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0x91}, {.addr=0xcd3b, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xcd3b, .value=0x26, .type=IO_READ},
        {.addr=0xcd3c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0172, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03BB) {
    const struct CPU_State initial_cpu = {.pc=0x9353, .a=0xbe, .x=0x13, .y=0xd0, .sp=0x41, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0x86}, {.addr=0x9353, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x9354, .a=0x86, .x=0x13, .y=0xd0, .sp=0x41, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0x86}, {.addr=0x9353, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x9353, .value=0x26, .type=IO_READ},
        {.addr=0x9354, .value=DUMMY, .type=IO_READ},
        {.addr=0x0113, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03BC) {
    const struct CPU_State initial_cpu = {.pc=0x6de8, .a=0xa5, .x=0xd6, .y=0x78, .sp=0x80, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x00d6, .value=0x65}, {.addr=0x6de8, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x6de9, .a=0x25, .x=0xd6, .y=0x78, .sp=0x80, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x00d6, .value=0x65}, {.addr=0x6de8, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x6de8, .value=0x26, .type=IO_READ},
        {.addr=0x6de9, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d6, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03BE) {
    const struct CPU_State initial_cpu = {.pc=0x3ca1, .a=0x87, .x=0x0b, .y=0x09, .sp=0xe1, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x000b, .value=0x73}, {.addr=0x3ca1, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x3ca2, .a=0x03, .x=0x0b, .y=0x09, .sp=0xe1, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x000b, .value=0x73}, {.addr=0x3ca1, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x3ca1, .value=0x26, .type=IO_READ},
        {.addr=0x3ca2, .value=DUMMY, .type=IO_READ},
        {.addr=0x000b, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03BF) {
    const struct CPU_State initial_cpu = {.pc=0x9a6c, .a=0x12, .x=0x52, .y=0xfd, .sp=0x4d, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0052, .value=0x74}, {.addr=0x9a6c, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x9a6d, .a=0x10, .x=0x52, .y=0xfd, .sp=0x4d, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0052, .value=0x74}, {.addr=0x9a6c, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x9a6c, .value=0x26, .type=IO_READ},
        {.addr=0x9a6d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0052, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03C0) {
    const struct CPU_State initial_cpu = {.pc=0x77b8, .a=0x47, .x=0x5f, .y=0x83, .sp=0x34, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x005f, .value=0x63}, {.addr=0x77b8, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x77b9, .a=0x43, .x=0x5f, .y=0x83, .sp=0x34, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x005f, .value=0x63}, {.addr=0x77b8, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x77b8, .value=0x26, .type=IO_READ},
        {.addr=0x77b9, .value=DUMMY, .type=IO_READ},
        {.addr=0x005f, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03C1) {
    const struct CPU_State initial_cpu = {.pc=0x5295, .a=0x06, .x=0x88, .y=0x08, .sp=0x22, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x0088, .value=0x22}, {.addr=0x5295, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x5296, .a=0x02, .x=0x88, .y=0x08, .sp=0x22, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0088, .value=0x22}, {.addr=0x5295, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x5295, .value=0x26, .type=IO_READ},
        {.addr=0x5296, .value=DUMMY, .type=IO_READ},
        {.addr=0x0088, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03C2) {
    const struct CPU_State initial_cpu = {.pc=0xde27, .a=0x7b, .x=0xd8, .y=0xaa, .sp=0x88, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x00d8, .value=0x87}, {.addr=0xde27, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xde28, .a=0x03, .x=0xd8, .y=0xaa, .sp=0x88, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x00d8, .value=0x87}, {.addr=0xde27, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xde27, .value=0x26, .type=IO_READ},
        {.addr=0xde28, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d8, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03C3) {
    const struct CPU_State initial_cpu = {.pc=0x3c14, .a=0xcb, .x=0x98, .y=0x03, .sp=0xd1, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x0198, .value=0x8b}, {.addr=0x3c14, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x3c15, .a=0x8b, .x=0x98, .y=0x03, .sp=0xd1, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x0198, .value=0x8b}, {.addr=0x3c14, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x3c14, .value=0x26, .type=IO_READ},
        {.addr=0x3c15, .value=DUMMY, .type=IO_READ},
        {.addr=0x0198, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03C4) {
    const struct CPU_State initial_cpu = {.pc=0xe37b, .a=0x2d, .x=0x4f, .y=0xd9, .sp=0xf0, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x014f, .value=0x2e}, {.addr=0xe37b, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xe37c, .a=0x2c, .x=0x4f, .y=0xd9, .sp=0xf0, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x014f, .value=0x2e}, {.addr=0xe37b, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xe37b, .value=0x26, .type=IO_READ},
        {.addr=0xe37c, .value=DUMMY, .type=IO_READ},
        {.addr=0x014f, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03C5) {
    const struct CPU_State initial_cpu = {.pc=0x5d79, .a=0xc2, .x=0xb9, .y=0xde, .sp=0x0f, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0xbc}, {.addr=0x5d79, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x5d7a, .a=0x80, .x=0xb9, .y=0xde, .sp=0x0f, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0xbc}, {.addr=0x5d79, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x5d79, .value=0x26, .type=IO_READ},
        {.addr=0x5d7a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b9, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x5146, .a=0xd8, .x=0xab, .y=0xca, .sp=0xae, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x00ab, .value=0x31}, {.addr=0x5146, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x5147, .a=0x10, .x=0xab, .y=0xca, .sp=0xae, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x00ab, .value=0x31}, {.addr=0x5146, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x5146, .value=0x26, .type=IO_READ},
        {.addr=0x5147, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ab, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03C8) {
    const struct CPU_State initial_cpu = {.pc=0x2fec, .a=0x7f, .x=0xa6, .y=0x41, .sp=0xc8, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x01a6, .value=0x70}, {.addr=0x2fec, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x2fed, .a=0x70, .x=0xa6, .y=0x41, .sp=0xc8, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x01a6, .value=0x70}, {.addr=0x2fec, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x2fec, .value=0x26, .type=IO_READ},
        {.addr=0x2fed, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a6, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x75f6, .a=0x10, .x=0xfe, .y=0xcd, .sp=0x0d, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x01fe, .value=0xba}, {.addr=0x75f6, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x75f7, .a=0x10, .x=0xfe, .y=0xcd, .sp=0x0d, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x01fe, .value=0xba}, {.addr=0x75f6, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x75f6, .value=0x26, .type=IO_READ},
        {.addr=0x75f7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fe, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03CB) {
    const struct CPU_State initial_cpu = {.pc=0x3c6e, .a=0x42, .x=0x68, .y=0xad, .sp=0x89, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x0168, .value=0x27}, {.addr=0x3c6e, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x3c6f, .a=0x02, .x=0x68, .y=0xad, .sp=0x89, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x0168, .value=0x27}, {.addr=0x3c6e, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x3c6e, .value=0x26, .type=IO_READ},
        {.addr=0x3c6f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0168, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03CC) {
    const struct CPU_State initial_cpu = {.pc=0xd78d, .a=0x13, .x=0xea, .y=0xf6, .sp=0xf7, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x00ea, .value=0x5d}, {.addr=0xd78d, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xd78e, .a=0x11, .x=0xea, .y=0xf6, .sp=0xf7, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x00ea, .value=0x5d}, {.addr=0xd78d, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xd78d, .value=0x26, .type=IO_READ},
        {.addr=0xd78e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ea, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03CD) {
    const struct CPU_State initial_cpu = {.pc=0xeef9, .a=0x80, .x=0xdb, .y=0x07, .sp=0xed, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x00db, .value=0x2a}, {.addr=0xeef9, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xeefa, .a=0x00, .x=0xdb, .y=0x07, .sp=0xed, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x00db, .value=0x2a}, {.addr=0xeef9, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xeef9, .value=0x26, .type=IO_READ},
        {.addr=0xeefa, .value=DUMMY, .type=IO_READ},
        {.addr=0x00db, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x4d31, .a=0xe5, .x=0xce, .y=0x06, .sp=0x8e, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x00ce, .value=0x2d}, {.addr=0x4d31, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x4d32, .a=0x25, .x=0xce, .y=0x06, .sp=0x8e, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x00ce, .value=0x2d}, {.addr=0x4d31, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x4d31, .value=0x26, .type=IO_READ},
        {.addr=0x4d32, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ce, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x880c, .a=0xb5, .x=0x67, .y=0xb3, .sp=0x55, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0x94}, {.addr=0x880c, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x880d, .a=0x94, .x=0x67, .y=0xb3, .sp=0x55, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0x94}, {.addr=0x880c, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x880c, .value=0x26, .type=IO_READ},
        {.addr=0x880d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0167, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x36e7, .a=0x75, .x=0x84, .y=0x95, .sp=0xbd, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0xad}, {.addr=0x36e7, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x36e8, .a=0x25, .x=0x84, .y=0x95, .sp=0xbd, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0xad}, {.addr=0x36e7, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x36e7, .value=0x26, .type=IO_READ},
        {.addr=0x36e8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0184, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03D1) {
    const struct CPU_State initial_cpu = {.pc=0x785d, .a=0xa1, .x=0x19, .y=0x11, .sp=0x96, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x0119, .value=0x59}, {.addr=0x785d, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x785e, .a=0x01, .x=0x19, .y=0x11, .sp=0x96, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x0119, .value=0x59}, {.addr=0x785d, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x785d, .value=0x26, .type=IO_READ},
        {.addr=0x785e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0119, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03D2) {
    const struct CPU_State initial_cpu = {.pc=0xa845, .a=0xdf, .x=0x39, .y=0xd1, .sp=0xf7, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x0039, .value=0xde}, {.addr=0xa845, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xa846, .a=0xde, .x=0x39, .y=0xd1, .sp=0xf7, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0039, .value=0xde}, {.addr=0xa845, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xa845, .value=0x26, .type=IO_READ},
        {.addr=0xa846, .value=DUMMY, .type=IO_READ},
        {.addr=0x0039, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03D3) {
    const struct CPU_State initial_cpu = {.pc=0xe39d, .a=0x1f, .x=0x03, .y=0xde, .sp=0x6b, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x0003, .value=0xa6}, {.addr=0xe39d, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xe39e, .a=0x06, .x=0x03, .y=0xde, .sp=0x6b, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x0003, .value=0xa6}, {.addr=0xe39d, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xe39d, .value=0x26, .type=IO_READ},
        {.addr=0xe39e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0003, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03D4) {
    const struct CPU_State initial_cpu = {.pc=0x25e8, .a=0xa7, .x=0xdf, .y=0x64, .sp=0x18, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0xdf}, {.addr=0x25e8, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x25e9, .a=0x87, .x=0xdf, .y=0x64, .sp=0x18, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0xdf}, {.addr=0x25e8, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x25e8, .value=0x26, .type=IO_READ},
        {.addr=0x25e9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01df, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03D5) {
    const struct CPU_State initial_cpu = {.pc=0x8a09, .a=0xce, .x=0xa2, .y=0x95, .sp=0x32, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x00a2, .value=0x0c}, {.addr=0x8a09, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x8a0a, .a=0x0c, .x=0xa2, .y=0x95, .sp=0x32, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x00a2, .value=0x0c}, {.addr=0x8a09, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x8a09, .value=0x26, .type=IO_READ},
        {.addr=0x8a0a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a2, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03D6) {
    const struct CPU_State initial_cpu = {.pc=0x8b8c, .a=0xd7, .x=0x0b, .y=0x95, .sp=0x41, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0x6f}, {.addr=0x8b8c, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x8b8d, .a=0x47, .x=0x0b, .y=0x95, .sp=0x41, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0x6f}, {.addr=0x8b8c, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x8b8c, .value=0x26, .type=IO_READ},
        {.addr=0x8b8d, .value=DUMMY, .type=IO_READ},
        {.addr=0x010b, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03D7) {
    const struct CPU_State initial_cpu = {.pc=0x8897, .a=0xf2, .x=0xb5, .y=0x48, .sp=0x81, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x01b5, .value=0x0e}, {.addr=0x8897, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x8898, .a=0x02, .x=0xb5, .y=0x48, .sp=0x81, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x01b5, .value=0x0e}, {.addr=0x8897, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x8897, .value=0x26, .type=IO_READ},
        {.addr=0x8898, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b5, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03D8) {
    const struct CPU_State initial_cpu = {.pc=0x14e1, .a=0x1c, .x=0x8f, .y=0x0c, .sp=0xe6, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x008f, .value=0xb4}, {.addr=0x14e1, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x14e2, .a=0x14, .x=0x8f, .y=0x0c, .sp=0xe6, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x008f, .value=0xb4}, {.addr=0x14e1, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x14e1, .value=0x26, .type=IO_READ},
        {.addr=0x14e2, .value=DUMMY, .type=IO_READ},
        {.addr=0x008f, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03D9) {
    const struct CPU_State initial_cpu = {.pc=0xd841, .a=0xe1, .x=0xf9, .y=0x8b, .sp=0xee, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x01f9, .value=0x8b}, {.addr=0xd841, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xd842, .a=0x81, .x=0xf9, .y=0x8b, .sp=0xee, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x01f9, .value=0x8b}, {.addr=0xd841, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xd841, .value=0x26, .type=IO_READ},
        {.addr=0xd842, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f9, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03DA) {
    const struct CPU_State initial_cpu = {.pc=0xcb26, .a=0x04, .x=0x0c, .y=0x50, .sp=0x75, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0x7c}, {.addr=0xcb26, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xcb27, .a=0x04, .x=0x0c, .y=0x50, .sp=0x75, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0x7c}, {.addr=0xcb26, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xcb26, .value=0x26, .type=IO_READ},
        {.addr=0xcb27, .value=DUMMY, .type=IO_READ},
        {.addr=0x010c, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03DB) {
    const struct CPU_State initial_cpu = {.pc=0xcc61, .a=0x5f, .x=0xb7, .y=0xe9, .sp=0xe3, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x00b7, .value=0x1a}, {.addr=0xcc61, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xcc62, .a=0x1a, .x=0xb7, .y=0xe9, .sp=0xe3, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x00b7, .value=0x1a}, {.addr=0xcc61, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xcc61, .value=0x26, .type=IO_READ},
        {.addr=0xcc62, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b7, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03DC) {
    const struct CPU_State initial_cpu = {.pc=0xef19, .a=0xa4, .x=0x67, .y=0x3b, .sp=0x52, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x0067, .value=0x26}, {.addr=0xef19, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xef1a, .a=0x24, .x=0x67, .y=0x3b, .sp=0x52, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0067, .value=0x26}, {.addr=0xef19, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xef19, .value=0x26, .type=IO_READ},
        {.addr=0xef1a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0067, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03DD) {
    const struct CPU_State initial_cpu = {.pc=0xe5b2, .a=0xe4, .x=0x47, .y=0x7f, .sp=0xa2, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x0147, .value=0x42}, {.addr=0xe5b2, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xe5b3, .a=0x40, .x=0x47, .y=0x7f, .sp=0xa2, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x0147, .value=0x42}, {.addr=0xe5b2, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xe5b2, .value=0x26, .type=IO_READ},
        {.addr=0xe5b3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0147, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03DE) {
    const struct CPU_State initial_cpu = {.pc=0x9aa6, .a=0xf6, .x=0x8f, .y=0xdd, .sp=0x2b, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x008f, .value=0x98}, {.addr=0x9aa6, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x9aa7, .a=0x90, .x=0x8f, .y=0xdd, .sp=0x2b, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x008f, .value=0x98}, {.addr=0x9aa6, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x9aa6, .value=0x26, .type=IO_READ},
        {.addr=0x9aa7, .value=DUMMY, .type=IO_READ},
        {.addr=0x008f, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03DF) {
    const struct CPU_State initial_cpu = {.pc=0xc6a7, .a=0x70, .x=0xca, .y=0x9a, .sp=0x8f, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x01ca, .value=0x99}, {.addr=0xc6a7, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xc6a8, .a=0x10, .x=0xca, .y=0x9a, .sp=0x8f, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x01ca, .value=0x99}, {.addr=0xc6a7, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xc6a7, .value=0x26, .type=IO_READ},
        {.addr=0xc6a8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ca, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03E0) {
    const struct CPU_State initial_cpu = {.pc=0x2626, .a=0xfd, .x=0xaa, .y=0x64, .sp=0x66, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x01aa, .value=0x6b}, {.addr=0x2626, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x2627, .a=0x69, .x=0xaa, .y=0x64, .sp=0x66, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x01aa, .value=0x6b}, {.addr=0x2626, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x2626, .value=0x26, .type=IO_READ},
        {.addr=0x2627, .value=DUMMY, .type=IO_READ},
        {.addr=0x01aa, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03E1) {
    const struct CPU_State initial_cpu = {.pc=0x3872, .a=0x2e, .x=0xa3, .y=0x7c, .sp=0x7a, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x01a3, .value=0x71}, {.addr=0x3872, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x3873, .a=0x20, .x=0xa3, .y=0x7c, .sp=0x7a, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x01a3, .value=0x71}, {.addr=0x3872, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x3872, .value=0x26, .type=IO_READ},
        {.addr=0x3873, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a3, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03E2) {
    const struct CPU_State initial_cpu = {.pc=0xdf87, .a=0x55, .x=0x8b, .y=0x86, .sp=0x0e, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x008b, .value=0xd7}, {.addr=0xdf87, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xdf88, .a=0x55, .x=0x8b, .y=0x86, .sp=0x0e, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x008b, .value=0xd7}, {.addr=0xdf87, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xdf87, .value=0x26, .type=IO_READ},
        {.addr=0xdf88, .value=DUMMY, .type=IO_READ},
        {.addr=0x008b, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03E3) {
    const struct CPU_State initial_cpu = {.pc=0xa100, .a=0x30, .x=0x44, .y=0x2f, .sp=0xb3, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x0044, .value=0x8e}, {.addr=0xa100, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xa101, .a=0x00, .x=0x44, .y=0x2f, .sp=0xb3, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x0044, .value=0x8e}, {.addr=0xa100, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xa100, .value=0x26, .type=IO_READ},
        {.addr=0xa101, .value=DUMMY, .type=IO_READ},
        {.addr=0x0044, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x39da, .a=0x51, .x=0xa1, .y=0x12, .sp=0xa8, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x00a1, .value=0x04}, {.addr=0x39da, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x39db, .a=0x00, .x=0xa1, .y=0x12, .sp=0xa8, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x00a1, .value=0x04}, {.addr=0x39da, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x39da, .value=0x26, .type=IO_READ},
        {.addr=0x39db, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a1, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03E5) {
    const struct CPU_State initial_cpu = {.pc=0x854d, .a=0x34, .x=0x53, .y=0xde, .sp=0x9a, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x0053, .value=0x3a}, {.addr=0x854d, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x854e, .a=0x30, .x=0x53, .y=0xde, .sp=0x9a, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x0053, .value=0x3a}, {.addr=0x854d, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x854d, .value=0x26, .type=IO_READ},
        {.addr=0x854e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0053, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03E6) {
    const struct CPU_State initial_cpu = {.pc=0xac6b, .a=0x47, .x=0x71, .y=0x56, .sp=0xed, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x0171, .value=0x13}, {.addr=0xac6b, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xac6c, .a=0x03, .x=0x71, .y=0x56, .sp=0xed, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x0171, .value=0x13}, {.addr=0xac6b, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xac6b, .value=0x26, .type=IO_READ},
        {.addr=0xac6c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0171, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_26, _26_03E7) {
    const struct CPU_State initial_cpu = {.pc=0x0589, .a=0x3b, .x=0x26, .y=0x06, .sp=0xad, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x0126, .value=0x2e}, {.addr=0x0589, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x058a, .a=0x2a, .x=0x26, .y=0x06, .sp=0xad, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x0126, .value=0x2e}, {.addr=0x0589, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x0589, .value=0x26, .type=IO_READ},
        {.addr=0x058a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0126, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("26 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
