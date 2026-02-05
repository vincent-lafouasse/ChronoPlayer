#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_84, _84_0000) {
    const struct CPU_State initial_cpu = {.pc=0xd532, .a=0xf6, .x=0x57, .y=0x5c, .sp=0x99, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ce, .value=0x7d}, {.addr=0xd532, .value=0x84}, {.addr=0xd533, .value=0xce},
    };
    const struct CPU_State final_cpu = {.pc=0xd534, .a=0x73, .x=0x57, .y=0x5c, .sp=0x99, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ce, .value=0x7d}, {.addr=0xd532, .value=0x84}, {.addr=0xd533, .value=0xce},
    };
    const struct BusEvent events[] = {
        {.addr=0xd532, .value=0x84, .type=IO_READ},
        {.addr=0xd533, .value=0xce, .type=IO_READ},
        {.addr=0x01ce, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0001) {
    const struct CPU_State initial_cpu = {.pc=0x64bf, .a=0x9f, .x=0x67, .y=0xb1, .sp=0xd4, .status=0xbe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0192, .value=0xa6}, {.addr=0x64bf, .value=0x84}, {.addr=0x64c0, .value=0x92},
    };
    const struct CPU_State final_cpu = {.pc=0x64c1, .a=0x45, .x=0x67, .y=0xb1, .sp=0xd4, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0192, .value=0xa6}, {.addr=0x64bf, .value=0x84}, {.addr=0x64c0, .value=0x92},
    };
    const struct BusEvent events[] = {
        {.addr=0x64bf, .value=0x84, .type=IO_READ},
        {.addr=0x64c0, .value=0x92, .type=IO_READ},
        {.addr=0x0192, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0002) {
    const struct CPU_State initial_cpu = {.pc=0xd1fe, .a=0xed, .x=0x70, .y=0x89, .sp=0xb2, .status=0xd6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0028, .value=0xfa}, {.addr=0xd1fe, .value=0x84}, {.addr=0xd1ff, .value=0x28},
    };
    const struct CPU_State final_cpu = {.pc=0xd200, .a=0xe7, .x=0x70, .y=0x89, .sp=0xb2, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0028, .value=0xfa}, {.addr=0xd1fe, .value=0x84}, {.addr=0xd1ff, .value=0x28},
    };
    const struct BusEvent events[] = {
        {.addr=0xd1fe, .value=0x84, .type=IO_READ},
        {.addr=0xd1ff, .value=0x28, .type=IO_READ},
        {.addr=0x0028, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0003) {
    const struct CPU_State initial_cpu = {.pc=0x0601, .a=0x71, .x=0x84, .y=0xd6, .sp=0xbc, .status=0x2c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e7, .value=0xc7}, {.addr=0x0601, .value=0x84}, {.addr=0x0602, .value=0xe7},
    };
    const struct CPU_State final_cpu = {.pc=0x0603, .a=0x38, .x=0x84, .y=0xd6, .sp=0xbc, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e7, .value=0xc7}, {.addr=0x0601, .value=0x84}, {.addr=0x0602, .value=0xe7},
    };
    const struct BusEvent events[] = {
        {.addr=0x0601, .value=0x84, .type=IO_READ},
        {.addr=0x0602, .value=0xe7, .type=IO_READ},
        {.addr=0x01e7, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0004) {
    const struct CPU_State initial_cpu = {.pc=0x779c, .a=0x5b, .x=0x66, .y=0xbb, .sp=0x8e, .status=0x95};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0086, .value=0xd3}, {.addr=0x779c, .value=0x84}, {.addr=0x779d, .value=0x86},
    };
    const struct CPU_State final_cpu = {.pc=0x779e, .a=0x2f, .x=0x66, .y=0xbb, .sp=0x8e, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x0086, .value=0xd3}, {.addr=0x779c, .value=0x84}, {.addr=0x779d, .value=0x86},
    };
    const struct BusEvent events[] = {
        {.addr=0x779c, .value=0x84, .type=IO_READ},
        {.addr=0x779d, .value=0x86, .type=IO_READ},
        {.addr=0x0086, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0005) {
    const struct CPU_State initial_cpu = {.pc=0x335b, .a=0xac, .x=0xad, .y=0x11, .sp=0xe1, .status=0xa8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0149, .value=0xaa}, {.addr=0x335b, .value=0x84}, {.addr=0x335c, .value=0x49},
    };
    const struct CPU_State final_cpu = {.pc=0x335d, .a=0x56, .x=0xad, .y=0x11, .sp=0xe1, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x0149, .value=0xaa}, {.addr=0x335b, .value=0x84}, {.addr=0x335c, .value=0x49},
    };
    const struct BusEvent events[] = {
        {.addr=0x335b, .value=0x84, .type=IO_READ},
        {.addr=0x335c, .value=0x49, .type=IO_READ},
        {.addr=0x0149, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0006) {
    const struct CPU_State initial_cpu = {.pc=0xd9ad, .a=0x7d, .x=0xdd, .y=0xae, .sp=0xea, .status=0x59};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002a, .value=0xce}, {.addr=0xd9ad, .value=0x84}, {.addr=0xd9ae, .value=0x2a},
    };
    const struct CPU_State final_cpu = {.pc=0xd9af, .a=0x4c, .x=0xdd, .y=0xae, .sp=0xea, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x002a, .value=0xce}, {.addr=0xd9ad, .value=0x84}, {.addr=0xd9ae, .value=0x2a},
    };
    const struct BusEvent events[] = {
        {.addr=0xd9ad, .value=0x84, .type=IO_READ},
        {.addr=0xd9ae, .value=0x2a, .type=IO_READ},
        {.addr=0x002a, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0007) {
    const struct CPU_State initial_cpu = {.pc=0x12db, .a=0x8b, .x=0xe3, .y=0x17, .sp=0x36, .status=0x64};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01eb, .value=0xe3}, {.addr=0x12db, .value=0x84}, {.addr=0x12dc, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0x12dd, .a=0x6e, .x=0xe3, .y=0x17, .sp=0x36, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x01eb, .value=0xe3}, {.addr=0x12db, .value=0x84}, {.addr=0x12dc, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0x12db, .value=0x84, .type=IO_READ},
        {.addr=0x12dc, .value=0xeb, .type=IO_READ},
        {.addr=0x01eb, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0008) {
    const struct CPU_State initial_cpu = {.pc=0x78d2, .a=0x89, .x=0xe3, .y=0x55, .sp=0xa8, .status=0xbf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01da, .value=0x21}, {.addr=0x78d2, .value=0x84}, {.addr=0x78d3, .value=0xda},
    };
    const struct CPU_State final_cpu = {.pc=0x78d4, .a=0xab, .x=0xe3, .y=0x55, .sp=0xa8, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01da, .value=0x21}, {.addr=0x78d2, .value=0x84}, {.addr=0x78d3, .value=0xda},
    };
    const struct BusEvent events[] = {
        {.addr=0x78d2, .value=0x84, .type=IO_READ},
        {.addr=0x78d3, .value=0xda, .type=IO_READ},
        {.addr=0x01da, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0009) {
    const struct CPU_State initial_cpu = {.pc=0x06c1, .a=0x4e, .x=0x36, .y=0x28, .sp=0xcd, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0130, .value=0xe6}, {.addr=0x06c1, .value=0x84}, {.addr=0x06c2, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0x06c3, .a=0x35, .x=0x36, .y=0x28, .sp=0xcd, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x0130, .value=0xe6}, {.addr=0x06c1, .value=0x84}, {.addr=0x06c2, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0x06c1, .value=0x84, .type=IO_READ},
        {.addr=0x06c2, .value=0x30, .type=IO_READ},
        {.addr=0x0130, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_000A) {
    const struct CPU_State initial_cpu = {.pc=0x238f, .a=0x0b, .x=0x11, .y=0x95, .sp=0x56, .status=0xfd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d1, .value=0x2f}, {.addr=0x238f, .value=0x84}, {.addr=0x2390, .value=0xd1},
    };
    const struct CPU_State final_cpu = {.pc=0x2391, .a=0x3b, .x=0x11, .y=0x95, .sp=0x56, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d1, .value=0x2f}, {.addr=0x238f, .value=0x84}, {.addr=0x2390, .value=0xd1},
    };
    const struct BusEvent events[] = {
        {.addr=0x238f, .value=0x84, .type=IO_READ},
        {.addr=0x2390, .value=0xd1, .type=IO_READ},
        {.addr=0x01d1, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_000C) {
    const struct CPU_State initial_cpu = {.pc=0x8218, .a=0xd5, .x=0x78, .y=0x72, .sp=0x53, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0063, .value=0xa1}, {.addr=0x8218, .value=0x84}, {.addr=0x8219, .value=0x63},
    };
    const struct CPU_State final_cpu = {.pc=0x821a, .a=0x76, .x=0x78, .y=0x72, .sp=0x53, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x0063, .value=0xa1}, {.addr=0x8218, .value=0x84}, {.addr=0x8219, .value=0x63},
    };
    const struct BusEvent events[] = {
        {.addr=0x8218, .value=0x84, .type=IO_READ},
        {.addr=0x8219, .value=0x63, .type=IO_READ},
        {.addr=0x0063, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_000D) {
    const struct CPU_State initial_cpu = {.pc=0x53de, .a=0x68, .x=0x5b, .y=0x9e, .sp=0x76, .status=0x62};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015b, .value=0x95}, {.addr=0x53de, .value=0x84}, {.addr=0x53df, .value=0x5b},
    };
    const struct CPU_State final_cpu = {.pc=0x53e0, .a=0xfd, .x=0x5b, .y=0x9e, .sp=0x76, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x015b, .value=0x95}, {.addr=0x53de, .value=0x84}, {.addr=0x53df, .value=0x5b},
    };
    const struct BusEvent events[] = {
        {.addr=0x53de, .value=0x84, .type=IO_READ},
        {.addr=0x53df, .value=0x5b, .type=IO_READ},
        {.addr=0x015b, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_000E) {
    const struct CPU_State initial_cpu = {.pc=0xefd0, .a=0x76, .x=0x22, .y=0x8c, .sp=0xbb, .status=0x54};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0016, .value=0x8b}, {.addr=0xefd0, .value=0x84}, {.addr=0xefd1, .value=0x16},
    };
    const struct CPU_State final_cpu = {.pc=0xefd2, .a=0x01, .x=0x22, .y=0x8c, .sp=0xbb, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0016, .value=0x8b}, {.addr=0xefd0, .value=0x84}, {.addr=0xefd1, .value=0x16},
    };
    const struct BusEvent events[] = {
        {.addr=0xefd0, .value=0x84, .type=IO_READ},
        {.addr=0xefd1, .value=0x16, .type=IO_READ},
        {.addr=0x0016, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_000F) {
    const struct CPU_State initial_cpu = {.pc=0x976e, .a=0x71, .x=0x41, .y=0xe9, .sp=0x2a, .status=0xff};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0157, .value=0xe2}, {.addr=0x976e, .value=0x84}, {.addr=0x976f, .value=0x57},
    };
    const struct CPU_State final_cpu = {.pc=0x9770, .a=0x54, .x=0x41, .y=0xe9, .sp=0x2a, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x0157, .value=0xe2}, {.addr=0x976e, .value=0x84}, {.addr=0x976f, .value=0x57},
    };
    const struct BusEvent events[] = {
        {.addr=0x976e, .value=0x84, .type=IO_READ},
        {.addr=0x976f, .value=0x57, .type=IO_READ},
        {.addr=0x0157, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0010) {
    const struct CPU_State initial_cpu = {.pc=0x5fc1, .a=0xe8, .x=0xa0, .y=0xf2, .sp=0xf6, .status=0xc3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001a, .value=0xf4}, {.addr=0x5fc1, .value=0x84}, {.addr=0x5fc2, .value=0x1a},
    };
    const struct CPU_State final_cpu = {.pc=0x5fc3, .a=0xdd, .x=0xa0, .y=0xf2, .sp=0xf6, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x001a, .value=0xf4}, {.addr=0x5fc1, .value=0x84}, {.addr=0x5fc2, .value=0x1a},
    };
    const struct BusEvent events[] = {
        {.addr=0x5fc1, .value=0x84, .type=IO_READ},
        {.addr=0x5fc2, .value=0x1a, .type=IO_READ},
        {.addr=0x001a, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0011) {
    const struct CPU_State initial_cpu = {.pc=0xd2bf, .a=0x59, .x=0xc4, .y=0x4f, .sp=0x2a, .status=0x7c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f5, .value=0x56}, {.addr=0xd2bf, .value=0x84}, {.addr=0xd2c0, .value=0xf5},
    };
    const struct CPU_State final_cpu = {.pc=0xd2c1, .a=0xaf, .x=0xc4, .y=0x4f, .sp=0x2a, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f5, .value=0x56}, {.addr=0xd2bf, .value=0x84}, {.addr=0xd2c0, .value=0xf5},
    };
    const struct BusEvent events[] = {
        {.addr=0xd2bf, .value=0x84, .type=IO_READ},
        {.addr=0xd2c0, .value=0xf5, .type=IO_READ},
        {.addr=0x01f5, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0012) {
    const struct CPU_State initial_cpu = {.pc=0x680b, .a=0xf9, .x=0x98, .y=0x40, .sp=0x3c, .status=0x33};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01dd, .value=0xcf}, {.addr=0x680b, .value=0x84}, {.addr=0x680c, .value=0xdd},
    };
    const struct CPU_State final_cpu = {.pc=0x680d, .a=0xc9, .x=0x98, .y=0x40, .sp=0x3c, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01dd, .value=0xcf}, {.addr=0x680b, .value=0x84}, {.addr=0x680c, .value=0xdd},
    };
    const struct BusEvent events[] = {
        {.addr=0x680b, .value=0x84, .type=IO_READ},
        {.addr=0x680c, .value=0xdd, .type=IO_READ},
        {.addr=0x01dd, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0013) {
    const struct CPU_State initial_cpu = {.pc=0xe2d7, .a=0x7c, .x=0xab, .y=0xe8, .sp=0x87, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0136, .value=0x27}, {.addr=0xe2d7, .value=0x84}, {.addr=0xe2d8, .value=0x36},
    };
    const struct CPU_State final_cpu = {.pc=0xe2d9, .a=0xa3, .x=0xab, .y=0xe8, .sp=0x87, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0136, .value=0x27}, {.addr=0xe2d7, .value=0x84}, {.addr=0xe2d8, .value=0x36},
    };
    const struct BusEvent events[] = {
        {.addr=0xe2d7, .value=0x84, .type=IO_READ},
        {.addr=0xe2d8, .value=0x36, .type=IO_READ},
        {.addr=0x0136, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0014) {
    const struct CPU_State initial_cpu = {.pc=0x1b97, .a=0x0d, .x=0x8c, .y=0x88, .sp=0xda, .status=0x95};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0050, .value=0x1c}, {.addr=0x1b97, .value=0x84}, {.addr=0x1b98, .value=0x50},
    };
    const struct CPU_State final_cpu = {.pc=0x1b99, .a=0x2a, .x=0x8c, .y=0x88, .sp=0xda, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0050, .value=0x1c}, {.addr=0x1b97, .value=0x84}, {.addr=0x1b98, .value=0x50},
    };
    const struct BusEvent events[] = {
        {.addr=0x1b97, .value=0x84, .type=IO_READ},
        {.addr=0x1b98, .value=0x50, .type=IO_READ},
        {.addr=0x0050, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0016) {
    const struct CPU_State initial_cpu = {.pc=0x1a9f, .a=0xe1, .x=0xc1, .y=0xd0, .sp=0xbf, .status=0x2d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014a, .value=0x84}, {.addr=0x1a9f, .value=0x84}, {.addr=0x1aa0, .value=0x4a},
    };
    const struct CPU_State final_cpu = {.pc=0x1aa1, .a=0x66, .x=0xc1, .y=0xd0, .sp=0xbf, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x014a, .value=0x84}, {.addr=0x1a9f, .value=0x84}, {.addr=0x1aa0, .value=0x4a},
    };
    const struct BusEvent events[] = {
        {.addr=0x1a9f, .value=0x84, .type=IO_READ},
        {.addr=0x1aa0, .value=0x4a, .type=IO_READ},
        {.addr=0x014a, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0017) {
    const struct CPU_State initial_cpu = {.pc=0xa534, .a=0x3c, .x=0x42, .y=0x27, .sp=0xaa, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0049, .value=0x78}, {.addr=0xa534, .value=0x84}, {.addr=0xa535, .value=0x49},
    };
    const struct CPU_State final_cpu = {.pc=0xa536, .a=0xb4, .x=0x42, .y=0x27, .sp=0xaa, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0049, .value=0x78}, {.addr=0xa534, .value=0x84}, {.addr=0xa535, .value=0x49},
    };
    const struct BusEvent events[] = {
        {.addr=0xa534, .value=0x84, .type=IO_READ},
        {.addr=0xa535, .value=0x49, .type=IO_READ},
        {.addr=0x0049, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0018) {
    const struct CPU_State initial_cpu = {.pc=0xe37d, .a=0x97, .x=0xe5, .y=0x7e, .sp=0x2d, .status=0xa8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d5, .value=0x6a}, {.addr=0xe37d, .value=0x84}, {.addr=0xe37e, .value=0xd5},
    };
    const struct CPU_State final_cpu = {.pc=0xe37f, .a=0x01, .x=0xe5, .y=0x7e, .sp=0x2d, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d5, .value=0x6a}, {.addr=0xe37d, .value=0x84}, {.addr=0xe37e, .value=0xd5},
    };
    const struct BusEvent events[] = {
        {.addr=0xe37d, .value=0x84, .type=IO_READ},
        {.addr=0xe37e, .value=0xd5, .type=IO_READ},
        {.addr=0x01d5, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0019) {
    const struct CPU_State initial_cpu = {.pc=0x400d, .a=0xf6, .x=0xaa, .y=0x62, .sp=0x3b, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e5, .value=0x68}, {.addr=0x400d, .value=0x84}, {.addr=0x400e, .value=0xe5},
    };
    const struct CPU_State final_cpu = {.pc=0x400f, .a=0x5e, .x=0xaa, .y=0x62, .sp=0x3b, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e5, .value=0x68}, {.addr=0x400d, .value=0x84}, {.addr=0x400e, .value=0xe5},
    };
    const struct BusEvent events[] = {
        {.addr=0x400d, .value=0x84, .type=IO_READ},
        {.addr=0x400e, .value=0xe5, .type=IO_READ},
        {.addr=0x01e5, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_001A) {
    const struct CPU_State initial_cpu = {.pc=0x1d2c, .a=0xd3, .x=0x83, .y=0x70, .sp=0x9e, .status=0xd6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0005, .value=0x9a}, {.addr=0x1d2c, .value=0x84}, {.addr=0x1d2d, .value=0x05},
    };
    const struct CPU_State final_cpu = {.pc=0x1d2e, .a=0x6d, .x=0x83, .y=0x70, .sp=0x9e, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x0005, .value=0x9a}, {.addr=0x1d2c, .value=0x84}, {.addr=0x1d2d, .value=0x05},
    };
    const struct BusEvent events[] = {
        {.addr=0x1d2c, .value=0x84, .type=IO_READ},
        {.addr=0x1d2d, .value=0x05, .type=IO_READ},
        {.addr=0x0005, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_001B) {
    const struct CPU_State initial_cpu = {.pc=0x3012, .a=0x3a, .x=0x35, .y=0x0f, .sp=0x84, .status=0x9c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ba, .value=0xfe}, {.addr=0x3012, .value=0x84}, {.addr=0x3013, .value=0xba},
    };
    const struct CPU_State final_cpu = {.pc=0x3014, .a=0x38, .x=0x35, .y=0x0f, .sp=0x84, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ba, .value=0xfe}, {.addr=0x3012, .value=0x84}, {.addr=0x3013, .value=0xba},
    };
    const struct BusEvent events[] = {
        {.addr=0x3012, .value=0x84, .type=IO_READ},
        {.addr=0x3013, .value=0xba, .type=IO_READ},
        {.addr=0x00ba, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_001C) {
    const struct CPU_State initial_cpu = {.pc=0x413f, .a=0x86, .x=0xed, .y=0x5f, .sp=0xf6, .status=0x19};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0071, .value=0x78}, {.addr=0x413f, .value=0x84}, {.addr=0x4140, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0x4141, .a=0xff, .x=0xed, .y=0x5f, .sp=0xf6, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x0071, .value=0x78}, {.addr=0x413f, .value=0x84}, {.addr=0x4140, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0x413f, .value=0x84, .type=IO_READ},
        {.addr=0x4140, .value=0x71, .type=IO_READ},
        {.addr=0x0071, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_001D) {
    const struct CPU_State initial_cpu = {.pc=0xcd8e, .a=0xe7, .x=0x91, .y=0x92, .sp=0x3a, .status=0x51};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c4, .value=0x05}, {.addr=0xcd8e, .value=0x84}, {.addr=0xcd8f, .value=0xc4},
    };
    const struct CPU_State final_cpu = {.pc=0xcd90, .a=0xed, .x=0x91, .y=0x92, .sp=0x3a, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c4, .value=0x05}, {.addr=0xcd8e, .value=0x84}, {.addr=0xcd8f, .value=0xc4},
    };
    const struct BusEvent events[] = {
        {.addr=0xcd8e, .value=0x84, .type=IO_READ},
        {.addr=0xcd8f, .value=0xc4, .type=IO_READ},
        {.addr=0x00c4, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_001E) {
    const struct CPU_State initial_cpu = {.pc=0x613d, .a=0xc6, .x=0x13, .y=0xb6, .sp=0xc1, .status=0xc4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0000, .value=0x6c}, {.addr=0x613d, .value=0x84}, {.addr=0x613e, .value=0x00},
    };
    const struct CPU_State final_cpu = {.pc=0x613f, .a=0x32, .x=0x13, .y=0xb6, .sp=0xc1, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0000, .value=0x6c}, {.addr=0x613d, .value=0x84}, {.addr=0x613e, .value=0x00},
    };
    const struct BusEvent events[] = {
        {.addr=0x613d, .value=0x84, .type=IO_READ},
        {.addr=0x613e, .value=0x00, .type=IO_READ},
        {.addr=0x0000, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_001F) {
    const struct CPU_State initial_cpu = {.pc=0x8920, .a=0x4d, .x=0xf2, .y=0x63, .sp=0x5f, .status=0x53};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0006, .value=0x7b}, {.addr=0x8920, .value=0x84}, {.addr=0x8921, .value=0x06},
    };
    const struct CPU_State final_cpu = {.pc=0x8922, .a=0xc9, .x=0xf2, .y=0x63, .sp=0x5f, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0006, .value=0x7b}, {.addr=0x8920, .value=0x84}, {.addr=0x8921, .value=0x06},
    };
    const struct BusEvent events[] = {
        {.addr=0x8920, .value=0x84, .type=IO_READ},
        {.addr=0x8921, .value=0x06, .type=IO_READ},
        {.addr=0x0006, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0020) {
    const struct CPU_State initial_cpu = {.pc=0x5eee, .a=0xdc, .x=0x2b, .y=0x30, .sp=0xb1, .status=0xee};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0183, .value=0x95}, {.addr=0x5eee, .value=0x84}, {.addr=0x5eef, .value=0x83},
    };
    const struct CPU_State final_cpu = {.pc=0x5ef0, .a=0x71, .x=0x2b, .y=0x30, .sp=0xb1, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0183, .value=0x95}, {.addr=0x5eee, .value=0x84}, {.addr=0x5eef, .value=0x83},
    };
    const struct BusEvent events[] = {
        {.addr=0x5eee, .value=0x84, .type=IO_READ},
        {.addr=0x5eef, .value=0x83, .type=IO_READ},
        {.addr=0x0183, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0021) {
    const struct CPU_State initial_cpu = {.pc=0x14a9, .a=0x9e, .x=0xb7, .y=0x42, .sp=0x03, .status=0xc4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007d, .value=0xa4}, {.addr=0x14a9, .value=0x84}, {.addr=0x14aa, .value=0x7d},
    };
    const struct CPU_State final_cpu = {.pc=0x14ab, .a=0x42, .x=0xb7, .y=0x42, .sp=0x03, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x007d, .value=0xa4}, {.addr=0x14a9, .value=0x84}, {.addr=0x14aa, .value=0x7d},
    };
    const struct BusEvent events[] = {
        {.addr=0x14a9, .value=0x84, .type=IO_READ},
        {.addr=0x14aa, .value=0x7d, .type=IO_READ},
        {.addr=0x007d, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0022) {
    const struct CPU_State initial_cpu = {.pc=0xf510, .a=0xb8, .x=0x6e, .y=0x53, .sp=0xb9, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a9, .value=0xd3}, {.addr=0xf510, .value=0x84}, {.addr=0xf511, .value=0xa9},
    };
    const struct CPU_State final_cpu = {.pc=0xf512, .a=0x8b, .x=0x6e, .y=0x53, .sp=0xb9, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a9, .value=0xd3}, {.addr=0xf510, .value=0x84}, {.addr=0xf511, .value=0xa9},
    };
    const struct BusEvent events[] = {
        {.addr=0xf510, .value=0x84, .type=IO_READ},
        {.addr=0xf511, .value=0xa9, .type=IO_READ},
        {.addr=0x00a9, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0023) {
    const struct CPU_State initial_cpu = {.pc=0xeb15, .a=0xef, .x=0x29, .y=0xee, .sp=0x9b, .status=0x10};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003b, .value=0x93}, {.addr=0xeb15, .value=0x84}, {.addr=0xeb16, .value=0x3b},
    };
    const struct CPU_State final_cpu = {.pc=0xeb17, .a=0x82, .x=0x29, .y=0xee, .sp=0x9b, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x003b, .value=0x93}, {.addr=0xeb15, .value=0x84}, {.addr=0xeb16, .value=0x3b},
    };
    const struct BusEvent events[] = {
        {.addr=0xeb15, .value=0x84, .type=IO_READ},
        {.addr=0xeb16, .value=0x3b, .type=IO_READ},
        {.addr=0x003b, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0024) {
    const struct CPU_State initial_cpu = {.pc=0x6dce, .a=0x0b, .x=0x86, .y=0x10, .sp=0x8b, .status=0x7d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0196, .value=0x87}, {.addr=0x6dce, .value=0x84}, {.addr=0x6dcf, .value=0x96},
    };
    const struct CPU_State final_cpu = {.pc=0x6dd0, .a=0x93, .x=0x86, .y=0x10, .sp=0x8b, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0196, .value=0x87}, {.addr=0x6dce, .value=0x84}, {.addr=0x6dcf, .value=0x96},
    };
    const struct BusEvent events[] = {
        {.addr=0x6dce, .value=0x84, .type=IO_READ},
        {.addr=0x6dcf, .value=0x96, .type=IO_READ},
        {.addr=0x0196, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0025) {
    const struct CPU_State initial_cpu = {.pc=0x3e80, .a=0x99, .x=0x7e, .y=0x6a, .sp=0xe8, .status=0x58};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0095, .value=0x25}, {.addr=0x3e80, .value=0x84}, {.addr=0x3e81, .value=0x95},
    };
    const struct CPU_State final_cpu = {.pc=0x3e82, .a=0xbe, .x=0x7e, .y=0x6a, .sp=0xe8, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x0095, .value=0x25}, {.addr=0x3e80, .value=0x84}, {.addr=0x3e81, .value=0x95},
    };
    const struct BusEvent events[] = {
        {.addr=0x3e80, .value=0x84, .type=IO_READ},
        {.addr=0x3e81, .value=0x95, .type=IO_READ},
        {.addr=0x0095, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0026) {
    const struct CPU_State initial_cpu = {.pc=0x113d, .a=0x51, .x=0x83, .y=0xe4, .sp=0xa1, .status=0x39};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a4, .value=0xac}, {.addr=0x113d, .value=0x84}, {.addr=0x113e, .value=0xa4},
    };
    const struct CPU_State final_cpu = {.pc=0x113f, .a=0xfe, .x=0x83, .y=0xe4, .sp=0xa1, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a4, .value=0xac}, {.addr=0x113d, .value=0x84}, {.addr=0x113e, .value=0xa4},
    };
    const struct BusEvent events[] = {
        {.addr=0x113d, .value=0x84, .type=IO_READ},
        {.addr=0x113e, .value=0xa4, .type=IO_READ},
        {.addr=0x01a4, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0027) {
    const struct CPU_State initial_cpu = {.pc=0x79cc, .a=0xcf, .x=0x6d, .y=0xb2, .sp=0xd6, .status=0x30};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018e, .value=0xe6}, {.addr=0x79cc, .value=0x84}, {.addr=0x79cd, .value=0x8e},
    };
    const struct CPU_State final_cpu = {.pc=0x79ce, .a=0xb5, .x=0x6d, .y=0xb2, .sp=0xd6, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x018e, .value=0xe6}, {.addr=0x79cc, .value=0x84}, {.addr=0x79cd, .value=0x8e},
    };
    const struct BusEvent events[] = {
        {.addr=0x79cc, .value=0x84, .type=IO_READ},
        {.addr=0x79cd, .value=0x8e, .type=IO_READ},
        {.addr=0x018e, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0028) {
    const struct CPU_State initial_cpu = {.pc=0x3c94, .a=0x4e, .x=0xe3, .y=0x8b, .sp=0x5b, .status=0x9d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0070, .value=0xc1}, {.addr=0x3c94, .value=0x84}, {.addr=0x3c95, .value=0x70},
    };
    const struct CPU_State final_cpu = {.pc=0x3c96, .a=0x10, .x=0xe3, .y=0x8b, .sp=0x5b, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0070, .value=0xc1}, {.addr=0x3c94, .value=0x84}, {.addr=0x3c95, .value=0x70},
    };
    const struct BusEvent events[] = {
        {.addr=0x3c94, .value=0x84, .type=IO_READ},
        {.addr=0x3c95, .value=0x70, .type=IO_READ},
        {.addr=0x0070, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0029) {
    const struct CPU_State initial_cpu = {.pc=0x6379, .a=0x93, .x=0x84, .y=0x01, .sp=0xa4, .status=0xe1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b1, .value=0x29}, {.addr=0x6379, .value=0x84}, {.addr=0x637a, .value=0xb1},
    };
    const struct CPU_State final_cpu = {.pc=0x637b, .a=0xbd, .x=0x84, .y=0x01, .sp=0xa4, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b1, .value=0x29}, {.addr=0x6379, .value=0x84}, {.addr=0x637a, .value=0xb1},
    };
    const struct BusEvent events[] = {
        {.addr=0x6379, .value=0x84, .type=IO_READ},
        {.addr=0x637a, .value=0xb1, .type=IO_READ},
        {.addr=0x01b1, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_002A) {
    const struct CPU_State initial_cpu = {.pc=0x5dfe, .a=0xba, .x=0xb0, .y=0x2e, .sp=0x80, .status=0x02};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000c, .value=0x0a}, {.addr=0x5dfe, .value=0x84}, {.addr=0x5dff, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0x5e00, .a=0xc4, .x=0xb0, .y=0x2e, .sp=0x80, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x000c, .value=0x0a}, {.addr=0x5dfe, .value=0x84}, {.addr=0x5dff, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0x5dfe, .value=0x84, .type=IO_READ},
        {.addr=0x5dff, .value=0x0c, .type=IO_READ},
        {.addr=0x000c, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_002B) {
    const struct CPU_State initial_cpu = {.pc=0x3165, .a=0xd5, .x=0x63, .y=0x3e, .sp=0xab, .status=0x6d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0135, .value=0x37}, {.addr=0x3165, .value=0x84}, {.addr=0x3166, .value=0x35},
    };
    const struct CPU_State final_cpu = {.pc=0x3167, .a=0x0d, .x=0x63, .y=0x3e, .sp=0xab, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x0135, .value=0x37}, {.addr=0x3165, .value=0x84}, {.addr=0x3166, .value=0x35},
    };
    const struct BusEvent events[] = {
        {.addr=0x3165, .value=0x84, .type=IO_READ},
        {.addr=0x3166, .value=0x35, .type=IO_READ},
        {.addr=0x0135, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_002C) {
    const struct CPU_State initial_cpu = {.pc=0x9f86, .a=0x3c, .x=0x77, .y=0x47, .sp=0xcc, .status=0x25};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013b, .value=0xfd}, {.addr=0x9f86, .value=0x84}, {.addr=0x9f87, .value=0x3b},
    };
    const struct CPU_State final_cpu = {.pc=0x9f88, .a=0x3a, .x=0x77, .y=0x47, .sp=0xcc, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x013b, .value=0xfd}, {.addr=0x9f86, .value=0x84}, {.addr=0x9f87, .value=0x3b},
    };
    const struct BusEvent events[] = {
        {.addr=0x9f86, .value=0x84, .type=IO_READ},
        {.addr=0x9f87, .value=0x3b, .type=IO_READ},
        {.addr=0x013b, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_002D) {
    const struct CPU_State initial_cpu = {.pc=0x15eb, .a=0x53, .x=0xb7, .y=0xe6, .sp=0xd8, .status=0x94};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0082, .value=0x5d}, {.addr=0x15eb, .value=0x84}, {.addr=0x15ec, .value=0x82},
    };
    const struct CPU_State final_cpu = {.pc=0x15ed, .a=0xb0, .x=0xb7, .y=0xe6, .sp=0xd8, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0082, .value=0x5d}, {.addr=0x15eb, .value=0x84}, {.addr=0x15ec, .value=0x82},
    };
    const struct BusEvent events[] = {
        {.addr=0x15eb, .value=0x84, .type=IO_READ},
        {.addr=0x15ec, .value=0x82, .type=IO_READ},
        {.addr=0x0082, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_002E) {
    const struct CPU_State initial_cpu = {.pc=0xffd4, .a=0x7a, .x=0xe3, .y=0xfa, .sp=0x88, .status=0x8c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0026, .value=0x07}, {.addr=0xffd4, .value=0x84}, {.addr=0xffd5, .value=0x26},
    };
    const struct CPU_State final_cpu = {.pc=0xffd6, .a=0x81, .x=0xe3, .y=0xfa, .sp=0x88, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0026, .value=0x07}, {.addr=0xffd4, .value=0x84}, {.addr=0xffd5, .value=0x26},
    };
    const struct BusEvent events[] = {
        {.addr=0xffd4, .value=0x84, .type=IO_READ},
        {.addr=0xffd5, .value=0x26, .type=IO_READ},
        {.addr=0x0026, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_002F) {
    const struct CPU_State initial_cpu = {.pc=0xb5d0, .a=0x3b, .x=0xd0, .y=0xd2, .sp=0xc2, .status=0x26};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fc, .value=0xf7}, {.addr=0xb5d0, .value=0x84}, {.addr=0xb5d1, .value=0xfc},
    };
    const struct CPU_State final_cpu = {.pc=0xb5d2, .a=0x32, .x=0xd0, .y=0xd2, .sp=0xc2, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fc, .value=0xf7}, {.addr=0xb5d0, .value=0x84}, {.addr=0xb5d1, .value=0xfc},
    };
    const struct BusEvent events[] = {
        {.addr=0xb5d0, .value=0x84, .type=IO_READ},
        {.addr=0xb5d1, .value=0xfc, .type=IO_READ},
        {.addr=0x01fc, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0030) {
    const struct CPU_State initial_cpu = {.pc=0xe779, .a=0xb1, .x=0x67, .y=0x3f, .sp=0xe0, .status=0x4f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009e, .value=0x12}, {.addr=0xe779, .value=0x84}, {.addr=0xe77a, .value=0x9e},
    };
    const struct CPU_State final_cpu = {.pc=0xe77b, .a=0xc4, .x=0x67, .y=0x3f, .sp=0xe0, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x009e, .value=0x12}, {.addr=0xe779, .value=0x84}, {.addr=0xe77a, .value=0x9e},
    };
    const struct BusEvent events[] = {
        {.addr=0xe779, .value=0x84, .type=IO_READ},
        {.addr=0xe77a, .value=0x9e, .type=IO_READ},
        {.addr=0x009e, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0031) {
    const struct CPU_State initial_cpu = {.pc=0xd27c, .a=0xa6, .x=0xef, .y=0xb0, .sp=0x93, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e7, .value=0x43}, {.addr=0xd27c, .value=0x84}, {.addr=0xd27d, .value=0xe7},
    };
    const struct CPU_State final_cpu = {.pc=0xd27e, .a=0xea, .x=0xef, .y=0xb0, .sp=0x93, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e7, .value=0x43}, {.addr=0xd27c, .value=0x84}, {.addr=0xd27d, .value=0xe7},
    };
    const struct BusEvent events[] = {
        {.addr=0xd27c, .value=0x84, .type=IO_READ},
        {.addr=0xd27d, .value=0xe7, .type=IO_READ},
        {.addr=0x01e7, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0032) {
    const struct CPU_State initial_cpu = {.pc=0x7796, .a=0x74, .x=0x99, .y=0x4d, .sp=0xf2, .status=0x6b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bd, .value=0x14}, {.addr=0x7796, .value=0x84}, {.addr=0x7797, .value=0xbd},
    };
    const struct CPU_State final_cpu = {.pc=0x7798, .a=0x89, .x=0x99, .y=0x4d, .sp=0xf2, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bd, .value=0x14}, {.addr=0x7796, .value=0x84}, {.addr=0x7797, .value=0xbd},
    };
    const struct BusEvent events[] = {
        {.addr=0x7796, .value=0x84, .type=IO_READ},
        {.addr=0x7797, .value=0xbd, .type=IO_READ},
        {.addr=0x01bd, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0033) {
    const struct CPU_State initial_cpu = {.pc=0x54c8, .a=0x27, .x=0x2b, .y=0x18, .sp=0xed, .status=0x98};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0060, .value=0xc8}, {.addr=0x54c8, .value=0x84}, {.addr=0x54c9, .value=0x60},
    };
    const struct CPU_State final_cpu = {.pc=0x54ca, .a=0xef, .x=0x2b, .y=0x18, .sp=0xed, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x0060, .value=0xc8}, {.addr=0x54c8, .value=0x84}, {.addr=0x54c9, .value=0x60},
    };
    const struct BusEvent events[] = {
        {.addr=0x54c8, .value=0x84, .type=IO_READ},
        {.addr=0x54c9, .value=0x60, .type=IO_READ},
        {.addr=0x0060, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0034) {
    const struct CPU_State initial_cpu = {.pc=0xf478, .a=0xb7, .x=0xba, .y=0xcb, .sp=0x82, .status=0x25};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d5, .value=0x3c}, {.addr=0xf478, .value=0x84}, {.addr=0xf479, .value=0xd5},
    };
    const struct CPU_State final_cpu = {.pc=0xf47a, .a=0xf4, .x=0xba, .y=0xcb, .sp=0x82, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d5, .value=0x3c}, {.addr=0xf478, .value=0x84}, {.addr=0xf479, .value=0xd5},
    };
    const struct BusEvent events[] = {
        {.addr=0xf478, .value=0x84, .type=IO_READ},
        {.addr=0xf479, .value=0xd5, .type=IO_READ},
        {.addr=0x01d5, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0035) {
    const struct CPU_State initial_cpu = {.pc=0xb8d5, .a=0x2f, .x=0x88, .y=0xca, .sp=0x5b, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017a, .value=0xdc}, {.addr=0xb8d5, .value=0x84}, {.addr=0xb8d6, .value=0x7a},
    };
    const struct CPU_State final_cpu = {.pc=0xb8d7, .a=0x0b, .x=0x88, .y=0xca, .sp=0x5b, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x017a, .value=0xdc}, {.addr=0xb8d5, .value=0x84}, {.addr=0xb8d6, .value=0x7a},
    };
    const struct BusEvent events[] = {
        {.addr=0xb8d5, .value=0x84, .type=IO_READ},
        {.addr=0xb8d6, .value=0x7a, .type=IO_READ},
        {.addr=0x017a, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0036) {
    const struct CPU_State initial_cpu = {.pc=0xdbbe, .a=0x66, .x=0x3b, .y=0xfb, .sp=0x84, .status=0x2e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017f, .value=0x83}, {.addr=0xdbbe, .value=0x84}, {.addr=0xdbbf, .value=0x7f},
    };
    const struct CPU_State final_cpu = {.pc=0xdbc0, .a=0xe9, .x=0x3b, .y=0xfb, .sp=0x84, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x017f, .value=0x83}, {.addr=0xdbbe, .value=0x84}, {.addr=0xdbbf, .value=0x7f},
    };
    const struct BusEvent events[] = {
        {.addr=0xdbbe, .value=0x84, .type=IO_READ},
        {.addr=0xdbbf, .value=0x7f, .type=IO_READ},
        {.addr=0x017f, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0037) {
    const struct CPU_State initial_cpu = {.pc=0x5832, .a=0x78, .x=0xd3, .y=0xc4, .sp=0x3c, .status=0x37};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fa, .value=0x61}, {.addr=0x5832, .value=0x84}, {.addr=0x5833, .value=0xfa},
    };
    const struct CPU_State final_cpu = {.pc=0x5834, .a=0xda, .x=0xd3, .y=0xc4, .sp=0x3c, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fa, .value=0x61}, {.addr=0x5832, .value=0x84}, {.addr=0x5833, .value=0xfa},
    };
    const struct BusEvent events[] = {
        {.addr=0x5832, .value=0x84, .type=IO_READ},
        {.addr=0x5833, .value=0xfa, .type=IO_READ},
        {.addr=0x01fa, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0038) {
    const struct CPU_State initial_cpu = {.pc=0xb9d2, .a=0x6b, .x=0x2c, .y=0x82, .sp=0x45, .status=0x0f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0068, .value=0xbf}, {.addr=0xb9d2, .value=0x84}, {.addr=0xb9d3, .value=0x68},
    };
    const struct CPU_State final_cpu = {.pc=0xb9d4, .a=0x2b, .x=0x2c, .y=0x82, .sp=0x45, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0068, .value=0xbf}, {.addr=0xb9d2, .value=0x84}, {.addr=0xb9d3, .value=0x68},
    };
    const struct BusEvent events[] = {
        {.addr=0xb9d2, .value=0x84, .type=IO_READ},
        {.addr=0xb9d3, .value=0x68, .type=IO_READ},
        {.addr=0x0068, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0039) {
    const struct CPU_State initial_cpu = {.pc=0x67bd, .a=0x70, .x=0xe3, .y=0xc5, .sp=0x2d, .status=0xff};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013a, .value=0x9b}, {.addr=0x67bd, .value=0x84}, {.addr=0x67be, .value=0x3a},
    };
    const struct CPU_State final_cpu = {.pc=0x67bf, .a=0x0c, .x=0xe3, .y=0xc5, .sp=0x2d, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x013a, .value=0x9b}, {.addr=0x67bd, .value=0x84}, {.addr=0x67be, .value=0x3a},
    };
    const struct BusEvent events[] = {
        {.addr=0x67bd, .value=0x84, .type=IO_READ},
        {.addr=0x67be, .value=0x3a, .type=IO_READ},
        {.addr=0x013a, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_003A) {
    const struct CPU_State initial_cpu = {.pc=0xc0ef, .a=0xee, .x=0xc5, .y=0x7a, .sp=0xf5, .status=0x96};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a3, .value=0x79}, {.addr=0xc0ef, .value=0x84}, {.addr=0xc0f0, .value=0xa3},
    };
    const struct CPU_State final_cpu = {.pc=0xc0f1, .a=0x67, .x=0xc5, .y=0x7a, .sp=0xf5, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a3, .value=0x79}, {.addr=0xc0ef, .value=0x84}, {.addr=0xc0f0, .value=0xa3},
    };
    const struct BusEvent events[] = {
        {.addr=0xc0ef, .value=0x84, .type=IO_READ},
        {.addr=0xc0f0, .value=0xa3, .type=IO_READ},
        {.addr=0x00a3, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_003B) {
    const struct CPU_State initial_cpu = {.pc=0x9003, .a=0xa6, .x=0xe4, .y=0xda, .sp=0x1c, .status=0x1f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006c, .value=0x8d}, {.addr=0x9003, .value=0x84}, {.addr=0x9004, .value=0x6c},
    };
    const struct CPU_State final_cpu = {.pc=0x9005, .a=0x34, .x=0xe4, .y=0xda, .sp=0x1c, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x006c, .value=0x8d}, {.addr=0x9003, .value=0x84}, {.addr=0x9004, .value=0x6c},
    };
    const struct BusEvent events[] = {
        {.addr=0x9003, .value=0x84, .type=IO_READ},
        {.addr=0x9004, .value=0x6c, .type=IO_READ},
        {.addr=0x006c, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_003C) {
    const struct CPU_State initial_cpu = {.pc=0xf204, .a=0x53, .x=0xf9, .y=0x04, .sp=0x52, .status=0x2d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f2, .value=0xcc}, {.addr=0xf204, .value=0x84}, {.addr=0xf205, .value=0xf2},
    };
    const struct CPU_State final_cpu = {.pc=0xf206, .a=0x20, .x=0xf9, .y=0x04, .sp=0x52, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f2, .value=0xcc}, {.addr=0xf204, .value=0x84}, {.addr=0xf205, .value=0xf2},
    };
    const struct BusEvent events[] = {
        {.addr=0xf204, .value=0x84, .type=IO_READ},
        {.addr=0xf205, .value=0xf2, .type=IO_READ},
        {.addr=0x01f2, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_003D) {
    const struct CPU_State initial_cpu = {.pc=0xe4dc, .a=0xbc, .x=0x40, .y=0xf4, .sp=0x2f, .status=0x5f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00da, .value=0x46}, {.addr=0xe4dc, .value=0x84}, {.addr=0xe4dd, .value=0xda},
    };
    const struct CPU_State final_cpu = {.pc=0xe4de, .a=0x03, .x=0x40, .y=0xf4, .sp=0x2f, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00da, .value=0x46}, {.addr=0xe4dc, .value=0x84}, {.addr=0xe4dd, .value=0xda},
    };
    const struct BusEvent events[] = {
        {.addr=0xe4dc, .value=0x84, .type=IO_READ},
        {.addr=0xe4dd, .value=0xda, .type=IO_READ},
        {.addr=0x00da, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_003E) {
    const struct CPU_State initial_cpu = {.pc=0x5dd8, .a=0x2e, .x=0xe7, .y=0x2c, .sp=0x9d, .status=0xad};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0107, .value=0xbb}, {.addr=0x5dd8, .value=0x84}, {.addr=0x5dd9, .value=0x07},
    };
    const struct CPU_State final_cpu = {.pc=0x5dda, .a=0xea, .x=0xe7, .y=0x2c, .sp=0x9d, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0107, .value=0xbb}, {.addr=0x5dd8, .value=0x84}, {.addr=0x5dd9, .value=0x07},
    };
    const struct BusEvent events[] = {
        {.addr=0x5dd8, .value=0x84, .type=IO_READ},
        {.addr=0x5dd9, .value=0x07, .type=IO_READ},
        {.addr=0x0107, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_003F) {
    const struct CPU_State initial_cpu = {.pc=0x213f, .a=0xa7, .x=0x6e, .y=0xa6, .sp=0x8f, .status=0x4b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e5, .value=0x62}, {.addr=0x213f, .value=0x84}, {.addr=0x2140, .value=0xe5},
    };
    const struct CPU_State final_cpu = {.pc=0x2141, .a=0x0a, .x=0x6e, .y=0xa6, .sp=0x8f, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e5, .value=0x62}, {.addr=0x213f, .value=0x84}, {.addr=0x2140, .value=0xe5},
    };
    const struct BusEvent events[] = {
        {.addr=0x213f, .value=0x84, .type=IO_READ},
        {.addr=0x2140, .value=0xe5, .type=IO_READ},
        {.addr=0x00e5, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0040) {
    const struct CPU_State initial_cpu = {.pc=0x08f9, .a=0x64, .x=0xfb, .y=0xdb, .sp=0xfe, .status=0x24};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01dd, .value=0x86}, {.addr=0x08f9, .value=0x84}, {.addr=0x08fa, .value=0xdd},
    };
    const struct CPU_State final_cpu = {.pc=0x08fb, .a=0xea, .x=0xfb, .y=0xdb, .sp=0xfe, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01dd, .value=0x86}, {.addr=0x08f9, .value=0x84}, {.addr=0x08fa, .value=0xdd},
    };
    const struct BusEvent events[] = {
        {.addr=0x08f9, .value=0x84, .type=IO_READ},
        {.addr=0x08fa, .value=0xdd, .type=IO_READ},
        {.addr=0x01dd, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0041) {
    const struct CPU_State initial_cpu = {.pc=0xa004, .a=0x01, .x=0x8d, .y=0x36, .sp=0xd4, .status=0x3c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01db, .value=0x3f}, {.addr=0xa004, .value=0x84}, {.addr=0xa005, .value=0xdb},
    };
    const struct CPU_State final_cpu = {.pc=0xa006, .a=0x40, .x=0x8d, .y=0x36, .sp=0xd4, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01db, .value=0x3f}, {.addr=0xa004, .value=0x84}, {.addr=0xa005, .value=0xdb},
    };
    const struct BusEvent events[] = {
        {.addr=0xa004, .value=0x84, .type=IO_READ},
        {.addr=0xa005, .value=0xdb, .type=IO_READ},
        {.addr=0x01db, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0042) {
    const struct CPU_State initial_cpu = {.pc=0x8576, .a=0xcd, .x=0xae, .y=0x29, .sp=0x14, .status=0xcf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006d, .value=0xc1}, {.addr=0x8576, .value=0x84}, {.addr=0x8577, .value=0x6d},
    };
    const struct CPU_State final_cpu = {.pc=0x8578, .a=0x8f, .x=0xae, .y=0x29, .sp=0x14, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x006d, .value=0xc1}, {.addr=0x8576, .value=0x84}, {.addr=0x8577, .value=0x6d},
    };
    const struct BusEvent events[] = {
        {.addr=0x8576, .value=0x84, .type=IO_READ},
        {.addr=0x8577, .value=0x6d, .type=IO_READ},
        {.addr=0x006d, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0043) {
    const struct CPU_State initial_cpu = {.pc=0x1ec0, .a=0x2e, .x=0x7f, .y=0x3d, .sp=0x98, .status=0xbe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0121, .value=0x92}, {.addr=0x1ec0, .value=0x84}, {.addr=0x1ec1, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0x1ec2, .a=0xc0, .x=0x7f, .y=0x3d, .sp=0x98, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0121, .value=0x92}, {.addr=0x1ec0, .value=0x84}, {.addr=0x1ec1, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0x1ec0, .value=0x84, .type=IO_READ},
        {.addr=0x1ec1, .value=0x21, .type=IO_READ},
        {.addr=0x0121, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0044) {
    const struct CPU_State initial_cpu = {.pc=0x21b4, .a=0xb1, .x=0x59, .y=0xc3, .sp=0x77, .status=0x79};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0106, .value=0x98}, {.addr=0x21b4, .value=0x84}, {.addr=0x21b5, .value=0x06},
    };
    const struct CPU_State final_cpu = {.pc=0x21b6, .a=0x4a, .x=0x59, .y=0xc3, .sp=0x77, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x0106, .value=0x98}, {.addr=0x21b4, .value=0x84}, {.addr=0x21b5, .value=0x06},
    };
    const struct BusEvent events[] = {
        {.addr=0x21b4, .value=0x84, .type=IO_READ},
        {.addr=0x21b5, .value=0x06, .type=IO_READ},
        {.addr=0x0106, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0045) {
    const struct CPU_State initial_cpu = {.pc=0x0a6d, .a=0xf6, .x=0x75, .y=0x5a, .sp=0x67, .status=0xd2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0008, .value=0xe5}, {.addr=0x0a6d, .value=0x84}, {.addr=0x0a6e, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0x0a6f, .a=0xdb, .x=0x75, .y=0x5a, .sp=0x67, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x0008, .value=0xe5}, {.addr=0x0a6d, .value=0x84}, {.addr=0x0a6e, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0x0a6d, .value=0x84, .type=IO_READ},
        {.addr=0x0a6e, .value=0x08, .type=IO_READ},
        {.addr=0x0008, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0046) {
    const struct CPU_State initial_cpu = {.pc=0xfc47, .a=0x7b, .x=0x24, .y=0x19, .sp=0x67, .status=0xc7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001f, .value=0x25}, {.addr=0xfc47, .value=0x84}, {.addr=0xfc48, .value=0x1f},
    };
    const struct CPU_State final_cpu = {.pc=0xfc49, .a=0xa1, .x=0x24, .y=0x19, .sp=0x67, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x001f, .value=0x25}, {.addr=0xfc47, .value=0x84}, {.addr=0xfc48, .value=0x1f},
    };
    const struct BusEvent events[] = {
        {.addr=0xfc47, .value=0x84, .type=IO_READ},
        {.addr=0xfc48, .value=0x1f, .type=IO_READ},
        {.addr=0x001f, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0047) {
    const struct CPU_State initial_cpu = {.pc=0xa733, .a=0xae, .x=0x71, .y=0x83, .sp=0x8a, .status=0x8d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0035, .value=0x6c}, {.addr=0xa733, .value=0x84}, {.addr=0xa734, .value=0x35},
    };
    const struct CPU_State final_cpu = {.pc=0xa735, .a=0x1b, .x=0x71, .y=0x83, .sp=0x8a, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0035, .value=0x6c}, {.addr=0xa733, .value=0x84}, {.addr=0xa734, .value=0x35},
    };
    const struct BusEvent events[] = {
        {.addr=0xa733, .value=0x84, .type=IO_READ},
        {.addr=0xa734, .value=0x35, .type=IO_READ},
        {.addr=0x0035, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0048) {
    const struct CPU_State initial_cpu = {.pc=0xc98c, .a=0x7a, .x=0xb4, .y=0x04, .sp=0xef, .status=0x36};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010c, .value=0x48}, {.addr=0xc98c, .value=0x84}, {.addr=0xc98d, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0xc98e, .a=0xc2, .x=0xb4, .y=0x04, .sp=0xef, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x010c, .value=0x48}, {.addr=0xc98c, .value=0x84}, {.addr=0xc98d, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0xc98c, .value=0x84, .type=IO_READ},
        {.addr=0xc98d, .value=0x0c, .type=IO_READ},
        {.addr=0x010c, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0049) {
    const struct CPU_State initial_cpu = {.pc=0x171d, .a=0x6c, .x=0x89, .y=0xf3, .sp=0x82, .status=0x70};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0114, .value=0x05}, {.addr=0x171d, .value=0x84}, {.addr=0x171e, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0x171f, .a=0x71, .x=0x89, .y=0xf3, .sp=0x82, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x0114, .value=0x05}, {.addr=0x171d, .value=0x84}, {.addr=0x171e, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0x171d, .value=0x84, .type=IO_READ},
        {.addr=0x171e, .value=0x14, .type=IO_READ},
        {.addr=0x0114, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_004A) {
    const struct CPU_State initial_cpu = {.pc=0x581a, .a=0x2a, .x=0xbf, .y=0xf8, .sp=0xf1, .status=0x0f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009a, .value=0xf1}, {.addr=0x581a, .value=0x84}, {.addr=0x581b, .value=0x9a},
    };
    const struct CPU_State final_cpu = {.pc=0x581c, .a=0x1c, .x=0xbf, .y=0xf8, .sp=0xf1, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x009a, .value=0xf1}, {.addr=0x581a, .value=0x84}, {.addr=0x581b, .value=0x9a},
    };
    const struct BusEvent events[] = {
        {.addr=0x581a, .value=0x84, .type=IO_READ},
        {.addr=0x581b, .value=0x9a, .type=IO_READ},
        {.addr=0x009a, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_004B) {
    const struct CPU_State initial_cpu = {.pc=0xb2db, .a=0x75, .x=0xf5, .y=0xf4, .sp=0xb8, .status=0x50};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0077, .value=0x43}, {.addr=0xb2db, .value=0x84}, {.addr=0xb2dc, .value=0x77},
    };
    const struct CPU_State final_cpu = {.pc=0xb2dd, .a=0xb8, .x=0xf5, .y=0xf4, .sp=0xb8, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0077, .value=0x43}, {.addr=0xb2db, .value=0x84}, {.addr=0xb2dc, .value=0x77},
    };
    const struct BusEvent events[] = {
        {.addr=0xb2db, .value=0x84, .type=IO_READ},
        {.addr=0xb2dc, .value=0x77, .type=IO_READ},
        {.addr=0x0077, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_004C) {
    const struct CPU_State initial_cpu = {.pc=0x0f16, .a=0x97, .x=0x97, .y=0x9a, .sp=0xd3, .status=0xd0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b7, .value=0xdf}, {.addr=0x0f16, .value=0x84}, {.addr=0x0f17, .value=0xb7},
    };
    const struct CPU_State final_cpu = {.pc=0x0f18, .a=0x76, .x=0x97, .y=0x9a, .sp=0xd3, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b7, .value=0xdf}, {.addr=0x0f16, .value=0x84}, {.addr=0x0f17, .value=0xb7},
    };
    const struct BusEvent events[] = {
        {.addr=0x0f16, .value=0x84, .type=IO_READ},
        {.addr=0x0f17, .value=0xb7, .type=IO_READ},
        {.addr=0x00b7, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_004D) {
    const struct CPU_State initial_cpu = {.pc=0xf120, .a=0xb1, .x=0x94, .y=0xcd, .sp=0x63, .status=0xf4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f2, .value=0x6b}, {.addr=0xf120, .value=0x84}, {.addr=0xf121, .value=0xf2},
    };
    const struct CPU_State final_cpu = {.pc=0xf122, .a=0x1c, .x=0x94, .y=0xcd, .sp=0x63, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f2, .value=0x6b}, {.addr=0xf120, .value=0x84}, {.addr=0xf121, .value=0xf2},
    };
    const struct BusEvent events[] = {
        {.addr=0xf120, .value=0x84, .type=IO_READ},
        {.addr=0xf121, .value=0xf2, .type=IO_READ},
        {.addr=0x01f2, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_004E) {
    const struct CPU_State initial_cpu = {.pc=0x3f67, .a=0x31, .x=0xb0, .y=0x78, .sp=0x24, .status=0x3d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01db, .value=0xb7}, {.addr=0x3f67, .value=0x84}, {.addr=0x3f68, .value=0xdb},
    };
    const struct CPU_State final_cpu = {.pc=0x3f69, .a=0xe9, .x=0xb0, .y=0x78, .sp=0x24, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01db, .value=0xb7}, {.addr=0x3f67, .value=0x84}, {.addr=0x3f68, .value=0xdb},
    };
    const struct BusEvent events[] = {
        {.addr=0x3f67, .value=0x84, .type=IO_READ},
        {.addr=0x3f68, .value=0xdb, .type=IO_READ},
        {.addr=0x01db, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_004F) {
    const struct CPU_State initial_cpu = {.pc=0xcabe, .a=0xcc, .x=0x4d, .y=0x79, .sp=0x97, .status=0x90};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00df, .value=0x7c}, {.addr=0xcabe, .value=0x84}, {.addr=0xcabf, .value=0xdf},
    };
    const struct CPU_State final_cpu = {.pc=0xcac0, .a=0x48, .x=0x4d, .y=0x79, .sp=0x97, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x00df, .value=0x7c}, {.addr=0xcabe, .value=0x84}, {.addr=0xcabf, .value=0xdf},
    };
    const struct BusEvent events[] = {
        {.addr=0xcabe, .value=0x84, .type=IO_READ},
        {.addr=0xcabf, .value=0xdf, .type=IO_READ},
        {.addr=0x00df, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0050) {
    const struct CPU_State initial_cpu = {.pc=0x6a22, .a=0x7e, .x=0xb8, .y=0xf0, .sp=0xb5, .status=0x14};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a5, .value=0x9d}, {.addr=0x6a22, .value=0x84}, {.addr=0x6a23, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0x6a24, .a=0x1b, .x=0xb8, .y=0xf0, .sp=0xb5, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a5, .value=0x9d}, {.addr=0x6a22, .value=0x84}, {.addr=0x6a23, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0x6a22, .value=0x84, .type=IO_READ},
        {.addr=0x6a23, .value=0xa5, .type=IO_READ},
        {.addr=0x00a5, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0051) {
    const struct CPU_State initial_cpu = {.pc=0x1ade, .a=0x74, .x=0xc4, .y=0x09, .sp=0xd8, .status=0x0d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ce, .value=0x84}, {.addr=0x1ade, .value=0x84}, {.addr=0x1adf, .value=0xce},
    };
    const struct CPU_State final_cpu = {.pc=0x1ae0, .a=0xf9, .x=0xc4, .y=0x09, .sp=0xd8, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ce, .value=0x84}, {.addr=0x1ade, .value=0x84}, {.addr=0x1adf, .value=0xce},
    };
    const struct BusEvent events[] = {
        {.addr=0x1ade, .value=0x84, .type=IO_READ},
        {.addr=0x1adf, .value=0xce, .type=IO_READ},
        {.addr=0x00ce, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0052) {
    const struct CPU_State initial_cpu = {.pc=0x8da0, .a=0xe4, .x=0x38, .y=0x8a, .sp=0x08, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0128, .value=0xae}, {.addr=0x8da0, .value=0x84}, {.addr=0x8da1, .value=0x28},
    };
    const struct CPU_State final_cpu = {.pc=0x8da2, .a=0x93, .x=0x38, .y=0x8a, .sp=0x08, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x0128, .value=0xae}, {.addr=0x8da0, .value=0x84}, {.addr=0x8da1, .value=0x28},
    };
    const struct BusEvent events[] = {
        {.addr=0x8da0, .value=0x84, .type=IO_READ},
        {.addr=0x8da1, .value=0x28, .type=IO_READ},
        {.addr=0x0128, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0053) {
    const struct CPU_State initial_cpu = {.pc=0xd487, .a=0xe4, .x=0xee, .y=0x4e, .sp=0xb8, .status=0x6c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ce, .value=0x17}, {.addr=0xd487, .value=0x84}, {.addr=0xd488, .value=0xce},
    };
    const struct CPU_State final_cpu = {.pc=0xd489, .a=0xfb, .x=0xee, .y=0x4e, .sp=0xb8, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ce, .value=0x17}, {.addr=0xd487, .value=0x84}, {.addr=0xd488, .value=0xce},
    };
    const struct BusEvent events[] = {
        {.addr=0xd487, .value=0x84, .type=IO_READ},
        {.addr=0xd488, .value=0xce, .type=IO_READ},
        {.addr=0x01ce, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0054) {
    const struct CPU_State initial_cpu = {.pc=0x45d4, .a=0x5a, .x=0x17, .y=0xcc, .sp=0xf7, .status=0x57};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0039, .value=0x48}, {.addr=0x45d4, .value=0x84}, {.addr=0x45d5, .value=0x39},
    };
    const struct CPU_State final_cpu = {.pc=0x45d6, .a=0xa3, .x=0x17, .y=0xcc, .sp=0xf7, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0039, .value=0x48}, {.addr=0x45d4, .value=0x84}, {.addr=0x45d5, .value=0x39},
    };
    const struct BusEvent events[] = {
        {.addr=0x45d4, .value=0x84, .type=IO_READ},
        {.addr=0x45d5, .value=0x39, .type=IO_READ},
        {.addr=0x0039, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0055) {
    const struct CPU_State initial_cpu = {.pc=0xe93c, .a=0xb8, .x=0x32, .y=0x65, .sp=0x7e, .status=0x3c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0103, .value=0xf7}, {.addr=0xe93c, .value=0x84}, {.addr=0xe93d, .value=0x03},
    };
    const struct CPU_State final_cpu = {.pc=0xe93e, .a=0xaf, .x=0x32, .y=0x65, .sp=0x7e, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0103, .value=0xf7}, {.addr=0xe93c, .value=0x84}, {.addr=0xe93d, .value=0x03},
    };
    const struct BusEvent events[] = {
        {.addr=0xe93c, .value=0x84, .type=IO_READ},
        {.addr=0xe93d, .value=0x03, .type=IO_READ},
        {.addr=0x0103, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0056) {
    const struct CPU_State initial_cpu = {.pc=0xd8b5, .a=0x7f, .x=0xe0, .y=0x18, .sp=0x34, .status=0x8d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0084, .value=0xc0}, {.addr=0xd8b5, .value=0x84}, {.addr=0xd8b6, .value=0x84},
    };
    const struct CPU_State final_cpu = {.pc=0xd8b7, .a=0x40, .x=0xe0, .y=0x18, .sp=0x34, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0084, .value=0xc0}, {.addr=0xd8b5, .value=0x84}, {.addr=0xd8b6, .value=0x84},
    };
    const struct BusEvent events[] = {
        {.addr=0xd8b5, .value=0x84, .type=IO_READ},
        {.addr=0xd8b6, .value=0x84, .type=IO_READ},
        {.addr=0x0084, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0057) {
    const struct CPU_State initial_cpu = {.pc=0x74f4, .a=0x39, .x=0xce, .y=0xbc, .sp=0x47, .status=0xde};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0036, .value=0x5a}, {.addr=0x74f4, .value=0x84}, {.addr=0x74f5, .value=0x36},
    };
    const struct CPU_State final_cpu = {.pc=0x74f6, .a=0x93, .x=0xce, .y=0xbc, .sp=0x47, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0036, .value=0x5a}, {.addr=0x74f4, .value=0x84}, {.addr=0x74f5, .value=0x36},
    };
    const struct BusEvent events[] = {
        {.addr=0x74f4, .value=0x84, .type=IO_READ},
        {.addr=0x74f5, .value=0x36, .type=IO_READ},
        {.addr=0x0036, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0058) {
    const struct CPU_State initial_cpu = {.pc=0xebfa, .a=0x23, .x=0x74, .y=0xcc, .sp=0x4f, .status=0xbc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0185, .value=0x65}, {.addr=0xebfa, .value=0x84}, {.addr=0xebfb, .value=0x85},
    };
    const struct CPU_State final_cpu = {.pc=0xebfc, .a=0x88, .x=0x74, .y=0xcc, .sp=0x4f, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0185, .value=0x65}, {.addr=0xebfa, .value=0x84}, {.addr=0xebfb, .value=0x85},
    };
    const struct BusEvent events[] = {
        {.addr=0xebfa, .value=0x84, .type=IO_READ},
        {.addr=0xebfb, .value=0x85, .type=IO_READ},
        {.addr=0x0185, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0059) {
    const struct CPU_State initial_cpu = {.pc=0x853f, .a=0x9d, .x=0x59, .y=0xd7, .sp=0x9e, .status=0x45};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0014, .value=0xe0}, {.addr=0x853f, .value=0x84}, {.addr=0x8540, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0x8541, .a=0x7e, .x=0x59, .y=0xd7, .sp=0x9e, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x0014, .value=0xe0}, {.addr=0x853f, .value=0x84}, {.addr=0x8540, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0x853f, .value=0x84, .type=IO_READ},
        {.addr=0x8540, .value=0x14, .type=IO_READ},
        {.addr=0x0014, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_005A) {
    const struct CPU_State initial_cpu = {.pc=0x8ed7, .a=0xb0, .x=0xa2, .y=0xbf, .sp=0x7a, .status=0x5e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a8, .value=0xaf}, {.addr=0x8ed7, .value=0x84}, {.addr=0x8ed8, .value=0xa8},
    };
    const struct CPU_State final_cpu = {.pc=0x8ed9, .a=0x5f, .x=0xa2, .y=0xbf, .sp=0x7a, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a8, .value=0xaf}, {.addr=0x8ed7, .value=0x84}, {.addr=0x8ed8, .value=0xa8},
    };
    const struct BusEvent events[] = {
        {.addr=0x8ed7, .value=0x84, .type=IO_READ},
        {.addr=0x8ed8, .value=0xa8, .type=IO_READ},
        {.addr=0x00a8, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_005B) {
    const struct CPU_State initial_cpu = {.pc=0x0acf, .a=0xb9, .x=0xd5, .y=0xa7, .sp=0x4e, .status=0x97};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0049, .value=0x30}, {.addr=0x0acf, .value=0x84}, {.addr=0x0ad0, .value=0x49},
    };
    const struct CPU_State final_cpu = {.pc=0x0ad1, .a=0xea, .x=0xd5, .y=0xa7, .sp=0x4e, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0049, .value=0x30}, {.addr=0x0acf, .value=0x84}, {.addr=0x0ad0, .value=0x49},
    };
    const struct BusEvent events[] = {
        {.addr=0x0acf, .value=0x84, .type=IO_READ},
        {.addr=0x0ad0, .value=0x49, .type=IO_READ},
        {.addr=0x0049, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_005C) {
    const struct CPU_State initial_cpu = {.pc=0x8f74, .a=0xf4, .x=0xbc, .y=0x58, .sp=0x5b, .status=0x2c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b6, .value=0xc0}, {.addr=0x8f74, .value=0x84}, {.addr=0x8f75, .value=0xb6},
    };
    const struct CPU_State final_cpu = {.pc=0x8f76, .a=0xb4, .x=0xbc, .y=0x58, .sp=0x5b, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b6, .value=0xc0}, {.addr=0x8f74, .value=0x84}, {.addr=0x8f75, .value=0xb6},
    };
    const struct BusEvent events[] = {
        {.addr=0x8f74, .value=0x84, .type=IO_READ},
        {.addr=0x8f75, .value=0xb6, .type=IO_READ},
        {.addr=0x01b6, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_005D) {
    const struct CPU_State initial_cpu = {.pc=0x7930, .a=0x0d, .x=0xda, .y=0x56, .sp=0xfc, .status=0x18};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009b, .value=0xba}, {.addr=0x7930, .value=0x84}, {.addr=0x7931, .value=0x9b},
    };
    const struct CPU_State final_cpu = {.pc=0x7932, .a=0xc7, .x=0xda, .y=0x56, .sp=0xfc, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x009b, .value=0xba}, {.addr=0x7930, .value=0x84}, {.addr=0x7931, .value=0x9b},
    };
    const struct BusEvent events[] = {
        {.addr=0x7930, .value=0x84, .type=IO_READ},
        {.addr=0x7931, .value=0x9b, .type=IO_READ},
        {.addr=0x009b, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_005E) {
    const struct CPU_State initial_cpu = {.pc=0xb493, .a=0xed, .x=0x20, .y=0xf9, .sp=0xd4, .status=0x8d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b5, .value=0x01}, {.addr=0xb493, .value=0x84}, {.addr=0xb494, .value=0xb5},
    };
    const struct CPU_State final_cpu = {.pc=0xb495, .a=0xef, .x=0x20, .y=0xf9, .sp=0xd4, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b5, .value=0x01}, {.addr=0xb493, .value=0x84}, {.addr=0xb494, .value=0xb5},
    };
    const struct BusEvent events[] = {
        {.addr=0xb493, .value=0x84, .type=IO_READ},
        {.addr=0xb494, .value=0xb5, .type=IO_READ},
        {.addr=0x00b5, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_005F) {
    const struct CPU_State initial_cpu = {.pc=0x7c65, .a=0xd8, .x=0xf5, .y=0x20, .sp=0x3e, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0166, .value=0x61}, {.addr=0x7c65, .value=0x84}, {.addr=0x7c66, .value=0x66},
    };
    const struct CPU_State final_cpu = {.pc=0x7c67, .a=0x3a, .x=0xf5, .y=0x20, .sp=0x3e, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0166, .value=0x61}, {.addr=0x7c65, .value=0x84}, {.addr=0x7c66, .value=0x66},
    };
    const struct BusEvent events[] = {
        {.addr=0x7c65, .value=0x84, .type=IO_READ},
        {.addr=0x7c66, .value=0x66, .type=IO_READ},
        {.addr=0x0166, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0060) {
    const struct CPU_State initial_cpu = {.pc=0xed2b, .a=0xf3, .x=0x78, .y=0x90, .sp=0x8d, .status=0xf4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0118, .value=0xe0}, {.addr=0xed2b, .value=0x84}, {.addr=0xed2c, .value=0x18},
    };
    const struct CPU_State final_cpu = {.pc=0xed2d, .a=0xd3, .x=0x78, .y=0x90, .sp=0x8d, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0118, .value=0xe0}, {.addr=0xed2b, .value=0x84}, {.addr=0xed2c, .value=0x18},
    };
    const struct BusEvent events[] = {
        {.addr=0xed2b, .value=0x84, .type=IO_READ},
        {.addr=0xed2c, .value=0x18, .type=IO_READ},
        {.addr=0x0118, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0061) {
    const struct CPU_State initial_cpu = {.pc=0x56fd, .a=0x6e, .x=0x81, .y=0xc5, .sp=0xcd, .status=0x2d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ef, .value=0x8e}, {.addr=0x56fd, .value=0x84}, {.addr=0x56fe, .value=0xef},
    };
    const struct CPU_State final_cpu = {.pc=0x56ff, .a=0xfd, .x=0x81, .y=0xc5, .sp=0xcd, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ef, .value=0x8e}, {.addr=0x56fd, .value=0x84}, {.addr=0x56fe, .value=0xef},
    };
    const struct BusEvent events[] = {
        {.addr=0x56fd, .value=0x84, .type=IO_READ},
        {.addr=0x56fe, .value=0xef, .type=IO_READ},
        {.addr=0x01ef, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0062) {
    const struct CPU_State initial_cpu = {.pc=0x7390, .a=0x6e, .x=0xcd, .y=0xe5, .sp=0xf6, .status=0xe8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014c, .value=0x64}, {.addr=0x7390, .value=0x84}, {.addr=0x7391, .value=0x4c},
    };
    const struct CPU_State final_cpu = {.pc=0x7392, .a=0xd2, .x=0xcd, .y=0xe5, .sp=0xf6, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x014c, .value=0x64}, {.addr=0x7390, .value=0x84}, {.addr=0x7391, .value=0x4c},
    };
    const struct BusEvent events[] = {
        {.addr=0x7390, .value=0x84, .type=IO_READ},
        {.addr=0x7391, .value=0x4c, .type=IO_READ},
        {.addr=0x014c, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0063) {
    const struct CPU_State initial_cpu = {.pc=0x49c2, .a=0x6e, .x=0xb7, .y=0xf1, .sp=0x69, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002b, .value=0x77}, {.addr=0x49c2, .value=0x84}, {.addr=0x49c3, .value=0x2b},
    };
    const struct CPU_State final_cpu = {.pc=0x49c4, .a=0xe5, .x=0xb7, .y=0xf1, .sp=0x69, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x002b, .value=0x77}, {.addr=0x49c2, .value=0x84}, {.addr=0x49c3, .value=0x2b},
    };
    const struct BusEvent events[] = {
        {.addr=0x49c2, .value=0x84, .type=IO_READ},
        {.addr=0x49c3, .value=0x2b, .type=IO_READ},
        {.addr=0x002b, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0064) {
    const struct CPU_State initial_cpu = {.pc=0xc686, .a=0x63, .x=0xbb, .y=0x24, .sp=0xa4, .status=0x83};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0013, .value=0x03}, {.addr=0xc686, .value=0x84}, {.addr=0xc687, .value=0x13},
    };
    const struct CPU_State final_cpu = {.pc=0xc688, .a=0x67, .x=0xbb, .y=0x24, .sp=0xa4, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x0013, .value=0x03}, {.addr=0xc686, .value=0x84}, {.addr=0xc687, .value=0x13},
    };
    const struct BusEvent events[] = {
        {.addr=0xc686, .value=0x84, .type=IO_READ},
        {.addr=0xc687, .value=0x13, .type=IO_READ},
        {.addr=0x0013, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0065) {
    const struct CPU_State initial_cpu = {.pc=0x00c1, .a=0x48, .x=0x1e, .y=0x18, .sp=0x8d, .status=0xc2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0082, .value=0x5b}, {.addr=0x00c1, .value=0x84}, {.addr=0x00c2, .value=0x82},
    };
    const struct CPU_State final_cpu = {.pc=0x00c3, .a=0xa3, .x=0x1e, .y=0x18, .sp=0x8d, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0082, .value=0x5b}, {.addr=0x00c1, .value=0x84}, {.addr=0x00c2, .value=0x82},
    };
    const struct BusEvent events[] = {
        {.addr=0x00c1, .value=0x84, .type=IO_READ},
        {.addr=0x00c2, .value=0x82, .type=IO_READ},
        {.addr=0x0082, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0066) {
    const struct CPU_State initial_cpu = {.pc=0x9f3f, .a=0x3a, .x=0x34, .y=0x28, .sp=0x62, .status=0x89};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008f, .value=0x3d}, {.addr=0x9f3f, .value=0x84}, {.addr=0x9f40, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0x9f41, .a=0x78, .x=0x34, .y=0x28, .sp=0x62, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x008f, .value=0x3d}, {.addr=0x9f3f, .value=0x84}, {.addr=0x9f40, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0x9f3f, .value=0x84, .type=IO_READ},
        {.addr=0x9f40, .value=0x8f, .type=IO_READ},
        {.addr=0x008f, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0067) {
    const struct CPU_State initial_cpu = {.pc=0x2c98, .a=0xed, .x=0xc0, .y=0x18, .sp=0x69, .status=0xd3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0065, .value=0x13}, {.addr=0x2c98, .value=0x84}, {.addr=0x2c99, .value=0x65},
    };
    const struct CPU_State final_cpu = {.pc=0x2c9a, .a=0x01, .x=0xc0, .y=0x18, .sp=0x69, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x0065, .value=0x13}, {.addr=0x2c98, .value=0x84}, {.addr=0x2c99, .value=0x65},
    };
    const struct BusEvent events[] = {
        {.addr=0x2c98, .value=0x84, .type=IO_READ},
        {.addr=0x2c99, .value=0x65, .type=IO_READ},
        {.addr=0x0065, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0068) {
    const struct CPU_State initial_cpu = {.pc=0x5ce7, .a=0xae, .x=0xa9, .y=0xf9, .sp=0x02, .status=0xea};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0129, .value=0xbf}, {.addr=0x5ce7, .value=0x84}, {.addr=0x5ce8, .value=0x29},
    };
    const struct CPU_State final_cpu = {.pc=0x5ce9, .a=0x6d, .x=0xa9, .y=0xf9, .sp=0x02, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x0129, .value=0xbf}, {.addr=0x5ce7, .value=0x84}, {.addr=0x5ce8, .value=0x29},
    };
    const struct BusEvent events[] = {
        {.addr=0x5ce7, .value=0x84, .type=IO_READ},
        {.addr=0x5ce8, .value=0x29, .type=IO_READ},
        {.addr=0x0129, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0069) {
    const struct CPU_State initial_cpu = {.pc=0x2676, .a=0xcb, .x=0x76, .y=0x38, .sp=0xe1, .status=0x93};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001e, .value=0x20}, {.addr=0x2676, .value=0x84}, {.addr=0x2677, .value=0x1e},
    };
    const struct CPU_State final_cpu = {.pc=0x2678, .a=0xec, .x=0x76, .y=0x38, .sp=0xe1, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x001e, .value=0x20}, {.addr=0x2676, .value=0x84}, {.addr=0x2677, .value=0x1e},
    };
    const struct BusEvent events[] = {
        {.addr=0x2676, .value=0x84, .type=IO_READ},
        {.addr=0x2677, .value=0x1e, .type=IO_READ},
        {.addr=0x001e, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_006A) {
    const struct CPU_State initial_cpu = {.pc=0x31fb, .a=0x12, .x=0x11, .y=0xb3, .sp=0xbf, .status=0x7d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0144, .value=0xad}, {.addr=0x31fb, .value=0x84}, {.addr=0x31fc, .value=0x44},
    };
    const struct CPU_State final_cpu = {.pc=0x31fd, .a=0xc0, .x=0x11, .y=0xb3, .sp=0xbf, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0144, .value=0xad}, {.addr=0x31fb, .value=0x84}, {.addr=0x31fc, .value=0x44},
    };
    const struct BusEvent events[] = {
        {.addr=0x31fb, .value=0x84, .type=IO_READ},
        {.addr=0x31fc, .value=0x44, .type=IO_READ},
        {.addr=0x0144, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_006B) {
    const struct CPU_State initial_cpu = {.pc=0xd09b, .a=0x78, .x=0x66, .y=0x3d, .sp=0x2e, .status=0x9d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0079, .value=0x92}, {.addr=0xd09b, .value=0x84}, {.addr=0xd09c, .value=0x79},
    };
    const struct CPU_State final_cpu = {.pc=0xd09d, .a=0x0b, .x=0x66, .y=0x3d, .sp=0x2e, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x0079, .value=0x92}, {.addr=0xd09b, .value=0x84}, {.addr=0xd09c, .value=0x79},
    };
    const struct BusEvent events[] = {
        {.addr=0xd09b, .value=0x84, .type=IO_READ},
        {.addr=0xd09c, .value=0x79, .type=IO_READ},
        {.addr=0x0079, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_006C) {
    const struct CPU_State initial_cpu = {.pc=0xf7ed, .a=0xb7, .x=0xcb, .y=0x08, .sp=0xe4, .status=0xe5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0148, .value=0x64}, {.addr=0xf7ed, .value=0x84}, {.addr=0xf7ee, .value=0x48},
    };
    const struct CPU_State final_cpu = {.pc=0xf7ef, .a=0x1c, .x=0xcb, .y=0x08, .sp=0xe4, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x0148, .value=0x64}, {.addr=0xf7ed, .value=0x84}, {.addr=0xf7ee, .value=0x48},
    };
    const struct BusEvent events[] = {
        {.addr=0xf7ed, .value=0x84, .type=IO_READ},
        {.addr=0xf7ee, .value=0x48, .type=IO_READ},
        {.addr=0x0148, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_006D) {
    const struct CPU_State initial_cpu = {.pc=0xd4be, .a=0xe3, .x=0xee, .y=0xd7, .sp=0xd1, .status=0xa0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b4, .value=0xd4}, {.addr=0xd4be, .value=0x84}, {.addr=0xd4bf, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0xd4c0, .a=0xb7, .x=0xee, .y=0xd7, .sp=0xd1, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b4, .value=0xd4}, {.addr=0xd4be, .value=0x84}, {.addr=0xd4bf, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0xd4be, .value=0x84, .type=IO_READ},
        {.addr=0xd4bf, .value=0xb4, .type=IO_READ},
        {.addr=0x01b4, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_006E) {
    const struct CPU_State initial_cpu = {.pc=0x5eec, .a=0xed, .x=0x5d, .y=0xaf, .sp=0x72, .status=0x2c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0171, .value=0x5f}, {.addr=0x5eec, .value=0x84}, {.addr=0x5eed, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0x5eee, .a=0x4c, .x=0x5d, .y=0xaf, .sp=0x72, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0171, .value=0x5f}, {.addr=0x5eec, .value=0x84}, {.addr=0x5eed, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0x5eec, .value=0x84, .type=IO_READ},
        {.addr=0x5eed, .value=0x71, .type=IO_READ},
        {.addr=0x0171, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_006F) {
    const struct CPU_State initial_cpu = {.pc=0xe578, .a=0x32, .x=0xba, .y=0x00, .sp=0xb8, .status=0x20};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0123, .value=0xfd}, {.addr=0xe578, .value=0x84}, {.addr=0xe579, .value=0x23},
    };
    const struct CPU_State final_cpu = {.pc=0xe57a, .a=0x2f, .x=0xba, .y=0x00, .sp=0xb8, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x0123, .value=0xfd}, {.addr=0xe578, .value=0x84}, {.addr=0xe579, .value=0x23},
    };
    const struct BusEvent events[] = {
        {.addr=0xe578, .value=0x84, .type=IO_READ},
        {.addr=0xe579, .value=0x23, .type=IO_READ},
        {.addr=0x0123, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0070) {
    const struct CPU_State initial_cpu = {.pc=0x2c68, .a=0x70, .x=0x56, .y=0x72, .sp=0x58, .status=0xa5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015e, .value=0xf7}, {.addr=0x2c68, .value=0x84}, {.addr=0x2c69, .value=0x5e},
    };
    const struct CPU_State final_cpu = {.pc=0x2c6a, .a=0x68, .x=0x56, .y=0x72, .sp=0x58, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x015e, .value=0xf7}, {.addr=0x2c68, .value=0x84}, {.addr=0x2c69, .value=0x5e},
    };
    const struct BusEvent events[] = {
        {.addr=0x2c68, .value=0x84, .type=IO_READ},
        {.addr=0x2c69, .value=0x5e, .type=IO_READ},
        {.addr=0x015e, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0072) {
    const struct CPU_State initial_cpu = {.pc=0x99ac, .a=0xfa, .x=0x8e, .y=0x5d, .sp=0xce, .status=0x33};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ac, .value=0x96}, {.addr=0x99ac, .value=0x84}, {.addr=0x99ad, .value=0xac},
    };
    const struct CPU_State final_cpu = {.pc=0x99ae, .a=0x91, .x=0x8e, .y=0x5d, .sp=0xce, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ac, .value=0x96}, {.addr=0x99ac, .value=0x84}, {.addr=0x99ad, .value=0xac},
    };
    const struct BusEvent events[] = {
        {.addr=0x99ac, .value=0x84, .type=IO_READ},
        {.addr=0x99ad, .value=0xac, .type=IO_READ},
        {.addr=0x01ac, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0073) {
    const struct CPU_State initial_cpu = {.pc=0xc9dc, .a=0x07, .x=0x7c, .y=0x65, .sp=0x38, .status=0xd7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007b, .value=0x15}, {.addr=0xc9dc, .value=0x84}, {.addr=0xc9dd, .value=0x7b},
    };
    const struct CPU_State final_cpu = {.pc=0xc9de, .a=0x1d, .x=0x7c, .y=0x65, .sp=0x38, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x007b, .value=0x15}, {.addr=0xc9dc, .value=0x84}, {.addr=0xc9dd, .value=0x7b},
    };
    const struct BusEvent events[] = {
        {.addr=0xc9dc, .value=0x84, .type=IO_READ},
        {.addr=0xc9dd, .value=0x7b, .type=IO_READ},
        {.addr=0x007b, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0074) {
    const struct CPU_State initial_cpu = {.pc=0x0da4, .a=0x8a, .x=0x6e, .y=0xfa, .sp=0x80, .status=0xef};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010e, .value=0x4e}, {.addr=0x0da4, .value=0x84}, {.addr=0x0da5, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0x0da6, .a=0xd9, .x=0x6e, .y=0xfa, .sp=0x80, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x010e, .value=0x4e}, {.addr=0x0da4, .value=0x84}, {.addr=0x0da5, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0x0da4, .value=0x84, .type=IO_READ},
        {.addr=0x0da5, .value=0x0e, .type=IO_READ},
        {.addr=0x010e, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0075) {
    const struct CPU_State initial_cpu = {.pc=0x09cd, .a=0x38, .x=0xc5, .y=0xe7, .sp=0x87, .status=0xa6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01de, .value=0x53}, {.addr=0x09cd, .value=0x84}, {.addr=0x09ce, .value=0xde},
    };
    const struct CPU_State final_cpu = {.pc=0x09cf, .a=0x8b, .x=0xc5, .y=0xe7, .sp=0x87, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01de, .value=0x53}, {.addr=0x09cd, .value=0x84}, {.addr=0x09ce, .value=0xde},
    };
    const struct BusEvent events[] = {
        {.addr=0x09cd, .value=0x84, .type=IO_READ},
        {.addr=0x09ce, .value=0xde, .type=IO_READ},
        {.addr=0x01de, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0076) {
    const struct CPU_State initial_cpu = {.pc=0x82f3, .a=0x06, .x=0x68, .y=0x59, .sp=0xdd, .status=0x89};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0000, .value=0x9d}, {.addr=0x82f3, .value=0x84}, {.addr=0x82f4, .value=0x00},
    };
    const struct CPU_State final_cpu = {.pc=0x82f5, .a=0xa4, .x=0x68, .y=0x59, .sp=0xdd, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x0000, .value=0x9d}, {.addr=0x82f3, .value=0x84}, {.addr=0x82f4, .value=0x00},
    };
    const struct BusEvent events[] = {
        {.addr=0x82f3, .value=0x84, .type=IO_READ},
        {.addr=0x82f4, .value=0x00, .type=IO_READ},
        {.addr=0x0000, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0077) {
    const struct CPU_State initial_cpu = {.pc=0xfaab, .a=0xbc, .x=0x86, .y=0xa3, .sp=0xa4, .status=0x87};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004e, .value=0x53}, {.addr=0xfaab, .value=0x84}, {.addr=0xfaac, .value=0x4e},
    };
    const struct CPU_State final_cpu = {.pc=0xfaad, .a=0x10, .x=0x86, .y=0xa3, .sp=0xa4, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x004e, .value=0x53}, {.addr=0xfaab, .value=0x84}, {.addr=0xfaac, .value=0x4e},
    };
    const struct BusEvent events[] = {
        {.addr=0xfaab, .value=0x84, .type=IO_READ},
        {.addr=0xfaac, .value=0x4e, .type=IO_READ},
        {.addr=0x004e, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0078) {
    const struct CPU_State initial_cpu = {.pc=0xa7e6, .a=0x3f, .x=0x50, .y=0xf1, .sp=0x1a, .status=0x8a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c2, .value=0x9b}, {.addr=0xa7e6, .value=0x84}, {.addr=0xa7e7, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0xa7e8, .a=0xda, .x=0x50, .y=0xf1, .sp=0x1a, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c2, .value=0x9b}, {.addr=0xa7e6, .value=0x84}, {.addr=0xa7e7, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0xa7e6, .value=0x84, .type=IO_READ},
        {.addr=0xa7e7, .value=0xc2, .type=IO_READ},
        {.addr=0x00c2, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0079) {
    const struct CPU_State initial_cpu = {.pc=0x2999, .a=0x76, .x=0xc4, .y=0xef, .sp=0xc8, .status=0xee};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0143, .value=0xe8}, {.addr=0x2999, .value=0x84}, {.addr=0x299a, .value=0x43},
    };
    const struct CPU_State final_cpu = {.pc=0x299b, .a=0x5e, .x=0xc4, .y=0xef, .sp=0xc8, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x0143, .value=0xe8}, {.addr=0x2999, .value=0x84}, {.addr=0x299a, .value=0x43},
    };
    const struct BusEvent events[] = {
        {.addr=0x2999, .value=0x84, .type=IO_READ},
        {.addr=0x299a, .value=0x43, .type=IO_READ},
        {.addr=0x0143, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_007A) {
    const struct CPU_State initial_cpu = {.pc=0x5122, .a=0x0b, .x=0x94, .y=0xa9, .sp=0x42, .status=0x3b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0122, .value=0x5d}, {.addr=0x5122, .value=0x84}, {.addr=0x5123, .value=0x22},
    };
    const struct CPU_State final_cpu = {.pc=0x5124, .a=0x69, .x=0x94, .y=0xa9, .sp=0x42, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x0122, .value=0x5d}, {.addr=0x5122, .value=0x84}, {.addr=0x5123, .value=0x22},
    };
    const struct BusEvent events[] = {
        {.addr=0x5122, .value=0x84, .type=IO_READ},
        {.addr=0x5123, .value=0x22, .type=IO_READ},
        {.addr=0x0122, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_007B) {
    const struct CPU_State initial_cpu = {.pc=0xc96d, .a=0x3a, .x=0x02, .y=0x16, .sp=0x80, .status=0xb3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019f, .value=0x65}, {.addr=0xc96d, .value=0x84}, {.addr=0xc96e, .value=0x9f},
    };
    const struct CPU_State final_cpu = {.pc=0xc96f, .a=0xa0, .x=0x02, .y=0x16, .sp=0x80, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x019f, .value=0x65}, {.addr=0xc96d, .value=0x84}, {.addr=0xc96e, .value=0x9f},
    };
    const struct BusEvent events[] = {
        {.addr=0xc96d, .value=0x84, .type=IO_READ},
        {.addr=0xc96e, .value=0x9f, .type=IO_READ},
        {.addr=0x019f, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_007C) {
    const struct CPU_State initial_cpu = {.pc=0x12d8, .a=0x1a, .x=0x00, .y=0x9e, .sp=0x92, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019b, .value=0xf4}, {.addr=0x12d8, .value=0x84}, {.addr=0x12d9, .value=0x9b},
    };
    const struct CPU_State final_cpu = {.pc=0x12da, .a=0x0f, .x=0x00, .y=0x9e, .sp=0x92, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x019b, .value=0xf4}, {.addr=0x12d8, .value=0x84}, {.addr=0x12d9, .value=0x9b},
    };
    const struct BusEvent events[] = {
        {.addr=0x12d8, .value=0x84, .type=IO_READ},
        {.addr=0x12d9, .value=0x9b, .type=IO_READ},
        {.addr=0x019b, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_007D) {
    const struct CPU_State initial_cpu = {.pc=0xdde9, .a=0x0e, .x=0xda, .y=0x84, .sp=0xc7, .status=0x17};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0058, .value=0x2d}, {.addr=0xdde9, .value=0x84}, {.addr=0xddea, .value=0x58},
    };
    const struct CPU_State final_cpu = {.pc=0xddeb, .a=0x3c, .x=0xda, .y=0x84, .sp=0xc7, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0058, .value=0x2d}, {.addr=0xdde9, .value=0x84}, {.addr=0xddea, .value=0x58},
    };
    const struct BusEvent events[] = {
        {.addr=0xdde9, .value=0x84, .type=IO_READ},
        {.addr=0xddea, .value=0x58, .type=IO_READ},
        {.addr=0x0058, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_007E) {
    const struct CPU_State initial_cpu = {.pc=0xb274, .a=0x4e, .x=0x4a, .y=0x07, .sp=0xa4, .status=0x18};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0097, .value=0xf9}, {.addr=0xb274, .value=0x84}, {.addr=0xb275, .value=0x97},
    };
    const struct CPU_State final_cpu = {.pc=0xb276, .a=0x47, .x=0x4a, .y=0x07, .sp=0xa4, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x0097, .value=0xf9}, {.addr=0xb274, .value=0x84}, {.addr=0xb275, .value=0x97},
    };
    const struct BusEvent events[] = {
        {.addr=0xb274, .value=0x84, .type=IO_READ},
        {.addr=0xb275, .value=0x97, .type=IO_READ},
        {.addr=0x0097, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_007F) {
    const struct CPU_State initial_cpu = {.pc=0xe009, .a=0x52, .x=0x4c, .y=0xde, .sp=0xf3, .status=0x59};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006a, .value=0xf9}, {.addr=0xe009, .value=0x84}, {.addr=0xe00a, .value=0x6a},
    };
    const struct CPU_State final_cpu = {.pc=0xe00b, .a=0x4c, .x=0x4c, .y=0xde, .sp=0xf3, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x006a, .value=0xf9}, {.addr=0xe009, .value=0x84}, {.addr=0xe00a, .value=0x6a},
    };
    const struct BusEvent events[] = {
        {.addr=0xe009, .value=0x84, .type=IO_READ},
        {.addr=0xe00a, .value=0x6a, .type=IO_READ},
        {.addr=0x006a, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0080) {
    const struct CPU_State initial_cpu = {.pc=0xeb64, .a=0x19, .x=0xd4, .y=0xcf, .sp=0x5b, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0022, .value=0xbf}, {.addr=0xeb64, .value=0x84}, {.addr=0xeb65, .value=0x22},
    };
    const struct CPU_State final_cpu = {.pc=0xeb66, .a=0xd8, .x=0xd4, .y=0xcf, .sp=0x5b, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x0022, .value=0xbf}, {.addr=0xeb64, .value=0x84}, {.addr=0xeb65, .value=0x22},
    };
    const struct BusEvent events[] = {
        {.addr=0xeb64, .value=0x84, .type=IO_READ},
        {.addr=0xeb65, .value=0x22, .type=IO_READ},
        {.addr=0x0022, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0081) {
    const struct CPU_State initial_cpu = {.pc=0xce5a, .a=0x02, .x=0x51, .y=0x73, .sp=0xef, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c7, .value=0x95}, {.addr=0xce5a, .value=0x84}, {.addr=0xce5b, .value=0xc7},
    };
    const struct CPU_State final_cpu = {.pc=0xce5c, .a=0x98, .x=0x51, .y=0x73, .sp=0xef, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c7, .value=0x95}, {.addr=0xce5a, .value=0x84}, {.addr=0xce5b, .value=0xc7},
    };
    const struct BusEvent events[] = {
        {.addr=0xce5a, .value=0x84, .type=IO_READ},
        {.addr=0xce5b, .value=0xc7, .type=IO_READ},
        {.addr=0x01c7, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0082) {
    const struct CPU_State initial_cpu = {.pc=0x097d, .a=0x8e, .x=0xf2, .y=0xfb, .sp=0xa3, .status=0x46};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0003, .value=0x6b}, {.addr=0x097d, .value=0x84}, {.addr=0x097e, .value=0x03},
    };
    const struct CPU_State final_cpu = {.pc=0x097f, .a=0xf9, .x=0xf2, .y=0xfb, .sp=0xa3, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0003, .value=0x6b}, {.addr=0x097d, .value=0x84}, {.addr=0x097e, .value=0x03},
    };
    const struct BusEvent events[] = {
        {.addr=0x097d, .value=0x84, .type=IO_READ},
        {.addr=0x097e, .value=0x03, .type=IO_READ},
        {.addr=0x0003, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0083) {
    const struct CPU_State initial_cpu = {.pc=0xde3f, .a=0x4b, .x=0x79, .y=0x62, .sp=0xe4, .status=0x46};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00dc, .value=0x38}, {.addr=0xde3f, .value=0x84}, {.addr=0xde40, .value=0xdc},
    };
    const struct CPU_State final_cpu = {.pc=0xde41, .a=0x83, .x=0x79, .y=0x62, .sp=0xe4, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00dc, .value=0x38}, {.addr=0xde3f, .value=0x84}, {.addr=0xde40, .value=0xdc},
    };
    const struct BusEvent events[] = {
        {.addr=0xde3f, .value=0x84, .type=IO_READ},
        {.addr=0xde40, .value=0xdc, .type=IO_READ},
        {.addr=0x00dc, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0084) {
    const struct CPU_State initial_cpu = {.pc=0x3125, .a=0xab, .x=0xf1, .y=0xac, .sp=0xb2, .status=0x7c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015b, .value=0x20}, {.addr=0x3125, .value=0x84}, {.addr=0x3126, .value=0x5b},
    };
    const struct CPU_State final_cpu = {.pc=0x3127, .a=0xcb, .x=0xf1, .y=0xac, .sp=0xb2, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x015b, .value=0x20}, {.addr=0x3125, .value=0x84}, {.addr=0x3126, .value=0x5b},
    };
    const struct BusEvent events[] = {
        {.addr=0x3125, .value=0x84, .type=IO_READ},
        {.addr=0x3126, .value=0x5b, .type=IO_READ},
        {.addr=0x015b, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0085) {
    const struct CPU_State initial_cpu = {.pc=0x1d52, .a=0xd9, .x=0x91, .y=0x5f, .sp=0x01, .status=0x79};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a6, .value=0xaf}, {.addr=0x1d52, .value=0x84}, {.addr=0x1d53, .value=0xa6},
    };
    const struct CPU_State final_cpu = {.pc=0x1d54, .a=0x89, .x=0x91, .y=0x5f, .sp=0x01, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a6, .value=0xaf}, {.addr=0x1d52, .value=0x84}, {.addr=0x1d53, .value=0xa6},
    };
    const struct BusEvent events[] = {
        {.addr=0x1d52, .value=0x84, .type=IO_READ},
        {.addr=0x1d53, .value=0xa6, .type=IO_READ},
        {.addr=0x01a6, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0086) {
    const struct CPU_State initial_cpu = {.pc=0x5b7d, .a=0x64, .x=0x4c, .y=0xe1, .sp=0xb9, .status=0x97};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007e, .value=0x80}, {.addr=0x5b7d, .value=0x84}, {.addr=0x5b7e, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0x5b7f, .a=0xe5, .x=0x4c, .y=0xe1, .sp=0xb9, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x007e, .value=0x80}, {.addr=0x5b7d, .value=0x84}, {.addr=0x5b7e, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0x5b7d, .value=0x84, .type=IO_READ},
        {.addr=0x5b7e, .value=0x7e, .type=IO_READ},
        {.addr=0x007e, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0087) {
    const struct CPU_State initial_cpu = {.pc=0x95cd, .a=0x1b, .x=0xb9, .y=0x0d, .sp=0x18, .status=0x3b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0112, .value=0xff}, {.addr=0x95cd, .value=0x84}, {.addr=0x95ce, .value=0x12},
    };
    const struct CPU_State final_cpu = {.pc=0x95cf, .a=0x1b, .x=0xb9, .y=0x0d, .sp=0x18, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x0112, .value=0xff}, {.addr=0x95cd, .value=0x84}, {.addr=0x95ce, .value=0x12},
    };
    const struct BusEvent events[] = {
        {.addr=0x95cd, .value=0x84, .type=IO_READ},
        {.addr=0x95ce, .value=0x12, .type=IO_READ},
        {.addr=0x0112, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0088) {
    const struct CPU_State initial_cpu = {.pc=0x755e, .a=0xc8, .x=0x05, .y=0xbe, .sp=0xbf, .status=0x9e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008c, .value=0x9b}, {.addr=0x755e, .value=0x84}, {.addr=0x755f, .value=0x8c},
    };
    const struct CPU_State final_cpu = {.pc=0x7560, .a=0x63, .x=0x05, .y=0xbe, .sp=0xbf, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x008c, .value=0x9b}, {.addr=0x755e, .value=0x84}, {.addr=0x755f, .value=0x8c},
    };
    const struct BusEvent events[] = {
        {.addr=0x755e, .value=0x84, .type=IO_READ},
        {.addr=0x755f, .value=0x8c, .type=IO_READ},
        {.addr=0x008c, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0089) {
    const struct CPU_State initial_cpu = {.pc=0x7ab1, .a=0x11, .x=0xee, .y=0x19, .sp=0x51, .status=0xb8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fc, .value=0x71}, {.addr=0x7ab1, .value=0x84}, {.addr=0x7ab2, .value=0xfc},
    };
    const struct CPU_State final_cpu = {.pc=0x7ab3, .a=0x82, .x=0xee, .y=0x19, .sp=0x51, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fc, .value=0x71}, {.addr=0x7ab1, .value=0x84}, {.addr=0x7ab2, .value=0xfc},
    };
    const struct BusEvent events[] = {
        {.addr=0x7ab1, .value=0x84, .type=IO_READ},
        {.addr=0x7ab2, .value=0xfc, .type=IO_READ},
        {.addr=0x01fc, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_008A) {
    const struct CPU_State initial_cpu = {.pc=0xea5d, .a=0x38, .x=0xa9, .y=0x5a, .sp=0xec, .status=0x73};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0153, .value=0x23}, {.addr=0xea5d, .value=0x84}, {.addr=0xea5e, .value=0x53},
    };
    const struct CPU_State final_cpu = {.pc=0xea5f, .a=0x5c, .x=0xa9, .y=0x5a, .sp=0xec, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x0153, .value=0x23}, {.addr=0xea5d, .value=0x84}, {.addr=0xea5e, .value=0x53},
    };
    const struct BusEvent events[] = {
        {.addr=0xea5d, .value=0x84, .type=IO_READ},
        {.addr=0xea5e, .value=0x53, .type=IO_READ},
        {.addr=0x0153, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_008B) {
    const struct CPU_State initial_cpu = {.pc=0xe251, .a=0x74, .x=0x0d, .y=0xfa, .sp=0x42, .status=0x74};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0173, .value=0x25}, {.addr=0xe251, .value=0x84}, {.addr=0xe252, .value=0x73},
    };
    const struct CPU_State final_cpu = {.pc=0xe253, .a=0x99, .x=0x0d, .y=0xfa, .sp=0x42, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0173, .value=0x25}, {.addr=0xe251, .value=0x84}, {.addr=0xe252, .value=0x73},
    };
    const struct BusEvent events[] = {
        {.addr=0xe251, .value=0x84, .type=IO_READ},
        {.addr=0xe252, .value=0x73, .type=IO_READ},
        {.addr=0x0173, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_008C) {
    const struct CPU_State initial_cpu = {.pc=0x742d, .a=0x78, .x=0x33, .y=0x0d, .sp=0x80, .status=0xca};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004d, .value=0xc2}, {.addr=0x742d, .value=0x84}, {.addr=0x742e, .value=0x4d},
    };
    const struct CPU_State final_cpu = {.pc=0x742f, .a=0x3a, .x=0x33, .y=0x0d, .sp=0x80, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x004d, .value=0xc2}, {.addr=0x742d, .value=0x84}, {.addr=0x742e, .value=0x4d},
    };
    const struct BusEvent events[] = {
        {.addr=0x742d, .value=0x84, .type=IO_READ},
        {.addr=0x742e, .value=0x4d, .type=IO_READ},
        {.addr=0x004d, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_008D) {
    const struct CPU_State initial_cpu = {.pc=0xc57c, .a=0x19, .x=0x00, .y=0xfd, .sp=0xd1, .status=0x4b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b6, .value=0x1d}, {.addr=0xc57c, .value=0x84}, {.addr=0xc57d, .value=0xb6},
    };
    const struct CPU_State final_cpu = {.pc=0xc57e, .a=0x37, .x=0x00, .y=0xfd, .sp=0xd1, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b6, .value=0x1d}, {.addr=0xc57c, .value=0x84}, {.addr=0xc57d, .value=0xb6},
    };
    const struct BusEvent events[] = {
        {.addr=0xc57c, .value=0x84, .type=IO_READ},
        {.addr=0xc57d, .value=0xb6, .type=IO_READ},
        {.addr=0x00b6, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_008E) {
    const struct CPU_State initial_cpu = {.pc=0x7af3, .a=0xbd, .x=0x23, .y=0x85, .sp=0x3c, .status=0x5f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00be, .value=0xd5}, {.addr=0x7af3, .value=0x84}, {.addr=0x7af4, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0x7af5, .a=0x93, .x=0x23, .y=0x85, .sp=0x3c, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00be, .value=0xd5}, {.addr=0x7af3, .value=0x84}, {.addr=0x7af4, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0x7af3, .value=0x84, .type=IO_READ},
        {.addr=0x7af4, .value=0xbe, .type=IO_READ},
        {.addr=0x00be, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_008F) {
    const struct CPU_State initial_cpu = {.pc=0x7014, .a=0x9b, .x=0x49, .y=0x37, .sp=0xbc, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00db, .value=0x71}, {.addr=0x7014, .value=0x84}, {.addr=0x7015, .value=0xdb},
    };
    const struct CPU_State final_cpu = {.pc=0x7016, .a=0x0c, .x=0x49, .y=0x37, .sp=0xbc, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x00db, .value=0x71}, {.addr=0x7014, .value=0x84}, {.addr=0x7015, .value=0xdb},
    };
    const struct BusEvent events[] = {
        {.addr=0x7014, .value=0x84, .type=IO_READ},
        {.addr=0x7015, .value=0xdb, .type=IO_READ},
        {.addr=0x00db, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0090) {
    const struct CPU_State initial_cpu = {.pc=0x71a4, .a=0xe3, .x=0x26, .y=0x35, .sp=0x26, .status=0xbb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b8, .value=0xaa}, {.addr=0x71a4, .value=0x84}, {.addr=0x71a5, .value=0xb8},
    };
    const struct CPU_State final_cpu = {.pc=0x71a6, .a=0x8e, .x=0x26, .y=0x35, .sp=0x26, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b8, .value=0xaa}, {.addr=0x71a4, .value=0x84}, {.addr=0x71a5, .value=0xb8},
    };
    const struct BusEvent events[] = {
        {.addr=0x71a4, .value=0x84, .type=IO_READ},
        {.addr=0x71a5, .value=0xb8, .type=IO_READ},
        {.addr=0x01b8, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0091) {
    const struct CPU_State initial_cpu = {.pc=0xd46e, .a=0x17, .x=0x1b, .y=0xd1, .sp=0x5b, .status=0xe6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017b, .value=0xa6}, {.addr=0xd46e, .value=0x84}, {.addr=0xd46f, .value=0x7b},
    };
    const struct CPU_State final_cpu = {.pc=0xd470, .a=0xbd, .x=0x1b, .y=0xd1, .sp=0x5b, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x017b, .value=0xa6}, {.addr=0xd46e, .value=0x84}, {.addr=0xd46f, .value=0x7b},
    };
    const struct BusEvent events[] = {
        {.addr=0xd46e, .value=0x84, .type=IO_READ},
        {.addr=0xd46f, .value=0x7b, .type=IO_READ},
        {.addr=0x017b, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0092) {
    const struct CPU_State initial_cpu = {.pc=0xe099, .a=0x8a, .x=0x5c, .y=0xc2, .sp=0x01, .status=0x80};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d4, .value=0x5e}, {.addr=0xe099, .value=0x84}, {.addr=0xe09a, .value=0xd4},
    };
    const struct CPU_State final_cpu = {.pc=0xe09b, .a=0xe8, .x=0x5c, .y=0xc2, .sp=0x01, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d4, .value=0x5e}, {.addr=0xe099, .value=0x84}, {.addr=0xe09a, .value=0xd4},
    };
    const struct BusEvent events[] = {
        {.addr=0xe099, .value=0x84, .type=IO_READ},
        {.addr=0xe09a, .value=0xd4, .type=IO_READ},
        {.addr=0x00d4, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0093) {
    const struct CPU_State initial_cpu = {.pc=0x80f8, .a=0xd9, .x=0x54, .y=0xc8, .sp=0x0d, .status=0xd3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001c, .value=0xf3}, {.addr=0x80f8, .value=0x84}, {.addr=0x80f9, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0x80fa, .a=0xcd, .x=0x54, .y=0xc8, .sp=0x0d, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x001c, .value=0xf3}, {.addr=0x80f8, .value=0x84}, {.addr=0x80f9, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0x80f8, .value=0x84, .type=IO_READ},
        {.addr=0x80f9, .value=0x1c, .type=IO_READ},
        {.addr=0x001c, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0094) {
    const struct CPU_State initial_cpu = {.pc=0x190b, .a=0xa4, .x=0x6c, .y=0xb8, .sp=0x0a, .status=0x9c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0040, .value=0x19}, {.addr=0x190b, .value=0x84}, {.addr=0x190c, .value=0x40},
    };
    const struct CPU_State final_cpu = {.pc=0x190d, .a=0xbd, .x=0x6c, .y=0xb8, .sp=0x0a, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0040, .value=0x19}, {.addr=0x190b, .value=0x84}, {.addr=0x190c, .value=0x40},
    };
    const struct BusEvent events[] = {
        {.addr=0x190b, .value=0x84, .type=IO_READ},
        {.addr=0x190c, .value=0x40, .type=IO_READ},
        {.addr=0x0040, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0095) {
    const struct CPU_State initial_cpu = {.pc=0xfe66, .a=0xc1, .x=0x7c, .y=0x22, .sp=0x8a, .status=0x56};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001c, .value=0xdf}, {.addr=0xfe66, .value=0x84}, {.addr=0xfe67, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0xfe68, .a=0xa0, .x=0x7c, .y=0x22, .sp=0x8a, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x001c, .value=0xdf}, {.addr=0xfe66, .value=0x84}, {.addr=0xfe67, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0xfe66, .value=0x84, .type=IO_READ},
        {.addr=0xfe67, .value=0x1c, .type=IO_READ},
        {.addr=0x001c, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0096) {
    const struct CPU_State initial_cpu = {.pc=0xc44f, .a=0xcf, .x=0x24, .y=0x5f, .sp=0xa2, .status=0x33};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ab, .value=0x3a}, {.addr=0xc44f, .value=0x84}, {.addr=0xc450, .value=0xab},
    };
    const struct CPU_State final_cpu = {.pc=0xc451, .a=0x0a, .x=0x24, .y=0x5f, .sp=0xa2, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ab, .value=0x3a}, {.addr=0xc44f, .value=0x84}, {.addr=0xc450, .value=0xab},
    };
    const struct BusEvent events[] = {
        {.addr=0xc44f, .value=0x84, .type=IO_READ},
        {.addr=0xc450, .value=0xab, .type=IO_READ},
        {.addr=0x01ab, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0097) {
    const struct CPU_State initial_cpu = {.pc=0x21e4, .a=0xc8, .x=0xaa, .y=0x11, .sp=0x5c, .status=0x0d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0002, .value=0xec}, {.addr=0x21e4, .value=0x84}, {.addr=0x21e5, .value=0x02},
    };
    const struct CPU_State final_cpu = {.pc=0x21e6, .a=0xb5, .x=0xaa, .y=0x11, .sp=0x5c, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0002, .value=0xec}, {.addr=0x21e4, .value=0x84}, {.addr=0x21e5, .value=0x02},
    };
    const struct BusEvent events[] = {
        {.addr=0x21e4, .value=0x84, .type=IO_READ},
        {.addr=0x21e5, .value=0x02, .type=IO_READ},
        {.addr=0x0002, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0098) {
    const struct CPU_State initial_cpu = {.pc=0x5d47, .a=0xe8, .x=0x57, .y=0xcf, .sp=0xee, .status=0x9e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0016, .value=0xfe}, {.addr=0x5d47, .value=0x84}, {.addr=0x5d48, .value=0x16},
    };
    const struct CPU_State final_cpu = {.pc=0x5d49, .a=0xe6, .x=0x57, .y=0xcf, .sp=0xee, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0016, .value=0xfe}, {.addr=0x5d47, .value=0x84}, {.addr=0x5d48, .value=0x16},
    };
    const struct BusEvent events[] = {
        {.addr=0x5d47, .value=0x84, .type=IO_READ},
        {.addr=0x5d48, .value=0x16, .type=IO_READ},
        {.addr=0x0016, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_009A) {
    const struct CPU_State initial_cpu = {.pc=0x5d11, .a=0x09, .x=0x28, .y=0x5f, .sp=0x5c, .status=0xae};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010e, .value=0x8e}, {.addr=0x5d11, .value=0x84}, {.addr=0x5d12, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0x5d13, .a=0x97, .x=0x28, .y=0x5f, .sp=0x5c, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x010e, .value=0x8e}, {.addr=0x5d11, .value=0x84}, {.addr=0x5d12, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0x5d11, .value=0x84, .type=IO_READ},
        {.addr=0x5d12, .value=0x0e, .type=IO_READ},
        {.addr=0x010e, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_009B) {
    const struct CPU_State initial_cpu = {.pc=0xe142, .a=0x8f, .x=0xfa, .y=0x28, .sp=0xd1, .status=0x7e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019f, .value=0x82}, {.addr=0xe142, .value=0x84}, {.addr=0xe143, .value=0x9f},
    };
    const struct CPU_State final_cpu = {.pc=0xe144, .a=0x11, .x=0xfa, .y=0x28, .sp=0xd1, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x019f, .value=0x82}, {.addr=0xe142, .value=0x84}, {.addr=0xe143, .value=0x9f},
    };
    const struct BusEvent events[] = {
        {.addr=0xe142, .value=0x84, .type=IO_READ},
        {.addr=0xe143, .value=0x9f, .type=IO_READ},
        {.addr=0x019f, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_009C) {
    const struct CPU_State initial_cpu = {.pc=0x3e2c, .a=0x31, .x=0x9c, .y=0xe4, .sp=0x60, .status=0x5a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001f, .value=0xf4}, {.addr=0x3e2c, .value=0x84}, {.addr=0x3e2d, .value=0x1f},
    };
    const struct CPU_State final_cpu = {.pc=0x3e2e, .a=0x25, .x=0x9c, .y=0xe4, .sp=0x60, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x001f, .value=0xf4}, {.addr=0x3e2c, .value=0x84}, {.addr=0x3e2d, .value=0x1f},
    };
    const struct BusEvent events[] = {
        {.addr=0x3e2c, .value=0x84, .type=IO_READ},
        {.addr=0x3e2d, .value=0x1f, .type=IO_READ},
        {.addr=0x001f, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_009D) {
    const struct CPU_State initial_cpu = {.pc=0x8609, .a=0x74, .x=0x9c, .y=0xdb, .sp=0xbb, .status=0xaf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0156, .value=0x15}, {.addr=0x8609, .value=0x84}, {.addr=0x860a, .value=0x56},
    };
    const struct CPU_State final_cpu = {.pc=0x860b, .a=0x8a, .x=0x9c, .y=0xdb, .sp=0xbb, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0156, .value=0x15}, {.addr=0x8609, .value=0x84}, {.addr=0x860a, .value=0x56},
    };
    const struct BusEvent events[] = {
        {.addr=0x8609, .value=0x84, .type=IO_READ},
        {.addr=0x860a, .value=0x56, .type=IO_READ},
        {.addr=0x0156, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_009E) {
    const struct CPU_State initial_cpu = {.pc=0xc17f, .a=0x5b, .x=0x08, .y=0xbe, .sp=0x83, .status=0x10};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0061, .value=0x80}, {.addr=0xc17f, .value=0x84}, {.addr=0xc180, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0xc181, .a=0xdb, .x=0x08, .y=0xbe, .sp=0x83, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x0061, .value=0x80}, {.addr=0xc17f, .value=0x84}, {.addr=0xc180, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0xc17f, .value=0x84, .type=IO_READ},
        {.addr=0xc180, .value=0x61, .type=IO_READ},
        {.addr=0x0061, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_009F) {
    const struct CPU_State initial_cpu = {.pc=0x0cee, .a=0xf6, .x=0x30, .y=0x97, .sp=0x2e, .status=0xb4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f5, .value=0xfa}, {.addr=0x0cee, .value=0x84}, {.addr=0x0cef, .value=0xf5},
    };
    const struct CPU_State final_cpu = {.pc=0x0cf0, .a=0xf0, .x=0x30, .y=0x97, .sp=0x2e, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f5, .value=0xfa}, {.addr=0x0cee, .value=0x84}, {.addr=0x0cef, .value=0xf5},
    };
    const struct BusEvent events[] = {
        {.addr=0x0cee, .value=0x84, .type=IO_READ},
        {.addr=0x0cef, .value=0xf5, .type=IO_READ},
        {.addr=0x01f5, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00A0) {
    const struct CPU_State initial_cpu = {.pc=0xaef1, .a=0xd1, .x=0x8a, .y=0xfb, .sp=0x17, .status=0xed};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bd, .value=0x16}, {.addr=0xaef1, .value=0x84}, {.addr=0xaef2, .value=0xbd},
    };
    const struct CPU_State final_cpu = {.pc=0xaef3, .a=0xe8, .x=0x8a, .y=0xfb, .sp=0x17, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bd, .value=0x16}, {.addr=0xaef1, .value=0x84}, {.addr=0xaef2, .value=0xbd},
    };
    const struct BusEvent events[] = {
        {.addr=0xaef1, .value=0x84, .type=IO_READ},
        {.addr=0xaef2, .value=0xbd, .type=IO_READ},
        {.addr=0x01bd, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x6e2c, .a=0xde, .x=0xf0, .y=0x2b, .sp=0x3d, .status=0x6f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0194, .value=0xa6}, {.addr=0x6e2c, .value=0x84}, {.addr=0x6e2d, .value=0x94},
    };
    const struct CPU_State final_cpu = {.pc=0x6e2e, .a=0x85, .x=0xf0, .y=0x2b, .sp=0x3d, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x0194, .value=0xa6}, {.addr=0x6e2c, .value=0x84}, {.addr=0x6e2d, .value=0x94},
    };
    const struct BusEvent events[] = {
        {.addr=0x6e2c, .value=0x84, .type=IO_READ},
        {.addr=0x6e2d, .value=0x94, .type=IO_READ},
        {.addr=0x0194, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00A2) {
    const struct CPU_State initial_cpu = {.pc=0xa497, .a=0xa6, .x=0x17, .y=0xad, .sp=0x88, .status=0x35};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b2, .value=0x8c}, {.addr=0xa497, .value=0x84}, {.addr=0xa498, .value=0xb2},
    };
    const struct CPU_State final_cpu = {.pc=0xa499, .a=0x33, .x=0x17, .y=0xad, .sp=0x88, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b2, .value=0x8c}, {.addr=0xa497, .value=0x84}, {.addr=0xa498, .value=0xb2},
    };
    const struct BusEvent events[] = {
        {.addr=0xa497, .value=0x84, .type=IO_READ},
        {.addr=0xa498, .value=0xb2, .type=IO_READ},
        {.addr=0x01b2, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00A3) {
    const struct CPU_State initial_cpu = {.pc=0xe229, .a=0xbd, .x=0x0e, .y=0x18, .sp=0xea, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e9, .value=0x01}, {.addr=0xe229, .value=0x84}, {.addr=0xe22a, .value=0xe9},
    };
    const struct CPU_State final_cpu = {.pc=0xe22b, .a=0xbe, .x=0x0e, .y=0x18, .sp=0xea, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e9, .value=0x01}, {.addr=0xe229, .value=0x84}, {.addr=0xe22a, .value=0xe9},
    };
    const struct BusEvent events[] = {
        {.addr=0xe229, .value=0x84, .type=IO_READ},
        {.addr=0xe22a, .value=0xe9, .type=IO_READ},
        {.addr=0x01e9, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00A4) {
    const struct CPU_State initial_cpu = {.pc=0x88d9, .a=0x8c, .x=0xf4, .y=0x72, .sp=0x37, .status=0x1e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bf, .value=0xc6}, {.addr=0x88d9, .value=0x84}, {.addr=0x88da, .value=0xbf},
    };
    const struct CPU_State final_cpu = {.pc=0x88db, .a=0x52, .x=0xf4, .y=0x72, .sp=0x37, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bf, .value=0xc6}, {.addr=0x88d9, .value=0x84}, {.addr=0x88da, .value=0xbf},
    };
    const struct BusEvent events[] = {
        {.addr=0x88d9, .value=0x84, .type=IO_READ},
        {.addr=0x88da, .value=0xbf, .type=IO_READ},
        {.addr=0x00bf, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x3ee7, .a=0x56, .x=0xf5, .y=0x81, .sp=0xe4, .status=0x05};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ca, .value=0x18}, {.addr=0x3ee7, .value=0x84}, {.addr=0x3ee8, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0x3ee9, .a=0x6f, .x=0xf5, .y=0x81, .sp=0xe4, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ca, .value=0x18}, {.addr=0x3ee7, .value=0x84}, {.addr=0x3ee8, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0x3ee7, .value=0x84, .type=IO_READ},
        {.addr=0x3ee8, .value=0xca, .type=IO_READ},
        {.addr=0x00ca, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00A6) {
    const struct CPU_State initial_cpu = {.pc=0xbc1c, .a=0x6b, .x=0x17, .y=0x98, .sp=0x2e, .status=0x65};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ad, .value=0xdd}, {.addr=0xbc1c, .value=0x84}, {.addr=0xbc1d, .value=0xad},
    };
    const struct CPU_State final_cpu = {.pc=0xbc1e, .a=0x49, .x=0x17, .y=0x98, .sp=0x2e, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ad, .value=0xdd}, {.addr=0xbc1c, .value=0x84}, {.addr=0xbc1d, .value=0xad},
    };
    const struct BusEvent events[] = {
        {.addr=0xbc1c, .value=0x84, .type=IO_READ},
        {.addr=0xbc1d, .value=0xad, .type=IO_READ},
        {.addr=0x01ad, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x58d1, .a=0x24, .x=0x1a, .y=0x3f, .sp=0xf2, .status=0x0c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0081, .value=0x13}, {.addr=0x58d1, .value=0x84}, {.addr=0x58d2, .value=0x81},
    };
    const struct CPU_State final_cpu = {.pc=0x58d3, .a=0x37, .x=0x1a, .y=0x3f, .sp=0xf2, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x0081, .value=0x13}, {.addr=0x58d1, .value=0x84}, {.addr=0x58d2, .value=0x81},
    };
    const struct BusEvent events[] = {
        {.addr=0x58d1, .value=0x84, .type=IO_READ},
        {.addr=0x58d2, .value=0x81, .type=IO_READ},
        {.addr=0x0081, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x7de0, .a=0x92, .x=0x47, .y=0xed, .sp=0xbf, .status=0x0b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009d, .value=0x5e}, {.addr=0x7de0, .value=0x84}, {.addr=0x7de1, .value=0x9d},
    };
    const struct CPU_State final_cpu = {.pc=0x7de2, .a=0xf1, .x=0x47, .y=0xed, .sp=0xbf, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x009d, .value=0x5e}, {.addr=0x7de0, .value=0x84}, {.addr=0x7de1, .value=0x9d},
    };
    const struct BusEvent events[] = {
        {.addr=0x7de0, .value=0x84, .type=IO_READ},
        {.addr=0x7de1, .value=0x9d, .type=IO_READ},
        {.addr=0x009d, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x77e0, .a=0x7b, .x=0xd9, .y=0xc2, .sp=0xa6, .status=0xeb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01eb, .value=0xe4}, {.addr=0x77e0, .value=0x84}, {.addr=0x77e1, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0x77e2, .a=0x60, .x=0xd9, .y=0xc2, .sp=0xa6, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x01eb, .value=0xe4}, {.addr=0x77e0, .value=0x84}, {.addr=0x77e1, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0x77e0, .value=0x84, .type=IO_READ},
        {.addr=0x77e1, .value=0xeb, .type=IO_READ},
        {.addr=0x01eb, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00AA) {
    const struct CPU_State initial_cpu = {.pc=0xcca2, .a=0x67, .x=0xf0, .y=0xd3, .sp=0x1f, .status=0x8a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0051, .value=0x6c}, {.addr=0xcca2, .value=0x84}, {.addr=0xcca3, .value=0x51},
    };
    const struct CPU_State final_cpu = {.pc=0xcca4, .a=0xd3, .x=0xf0, .y=0xd3, .sp=0x1f, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0051, .value=0x6c}, {.addr=0xcca2, .value=0x84}, {.addr=0xcca3, .value=0x51},
    };
    const struct BusEvent events[] = {
        {.addr=0xcca2, .value=0x84, .type=IO_READ},
        {.addr=0xcca3, .value=0x51, .type=IO_READ},
        {.addr=0x0051, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x0724, .a=0x3e, .x=0x83, .y=0x85, .sp=0x26, .status=0x5f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008f, .value=0x78}, {.addr=0x0724, .value=0x84}, {.addr=0x0725, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0x0726, .a=0xb7, .x=0x83, .y=0x85, .sp=0x26, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x008f, .value=0x78}, {.addr=0x0724, .value=0x84}, {.addr=0x0725, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0x0724, .value=0x84, .type=IO_READ},
        {.addr=0x0725, .value=0x8f, .type=IO_READ},
        {.addr=0x008f, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00AC) {
    const struct CPU_State initial_cpu = {.pc=0xf297, .a=0xae, .x=0xc9, .y=0xc9, .sp=0x38, .status=0x67};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018f, .value=0xe5}, {.addr=0xf297, .value=0x84}, {.addr=0xf298, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0xf299, .a=0x94, .x=0xc9, .y=0xc9, .sp=0x38, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x018f, .value=0xe5}, {.addr=0xf297, .value=0x84}, {.addr=0xf298, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0xf297, .value=0x84, .type=IO_READ},
        {.addr=0xf298, .value=0x8f, .type=IO_READ},
        {.addr=0x018f, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x5bce, .a=0xf4, .x=0x5f, .y=0x1b, .sp=0x07, .status=0x04};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002e, .value=0xc5}, {.addr=0x5bce, .value=0x84}, {.addr=0x5bcf, .value=0x2e},
    };
    const struct CPU_State final_cpu = {.pc=0x5bd0, .a=0xb9, .x=0x5f, .y=0x1b, .sp=0x07, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x002e, .value=0xc5}, {.addr=0x5bce, .value=0x84}, {.addr=0x5bcf, .value=0x2e},
    };
    const struct BusEvent events[] = {
        {.addr=0x5bce, .value=0x84, .type=IO_READ},
        {.addr=0x5bcf, .value=0x2e, .type=IO_READ},
        {.addr=0x002e, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00AE) {
    const struct CPU_State initial_cpu = {.pc=0x22c8, .a=0x6d, .x=0x1e, .y=0xc6, .sp=0xcf, .status=0x98};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006e, .value=0x5e}, {.addr=0x22c8, .value=0x84}, {.addr=0x22c9, .value=0x6e},
    };
    const struct CPU_State final_cpu = {.pc=0x22ca, .a=0xcb, .x=0x1e, .y=0xc6, .sp=0xcf, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x006e, .value=0x5e}, {.addr=0x22c8, .value=0x84}, {.addr=0x22c9, .value=0x6e},
    };
    const struct BusEvent events[] = {
        {.addr=0x22c8, .value=0x84, .type=IO_READ},
        {.addr=0x22c9, .value=0x6e, .type=IO_READ},
        {.addr=0x006e, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00AF) {
    const struct CPU_State initial_cpu = {.pc=0x5fd6, .a=0x97, .x=0xe7, .y=0x6a, .sp=0x6f, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a9, .value=0x31}, {.addr=0x5fd6, .value=0x84}, {.addr=0x5fd7, .value=0xa9},
    };
    const struct CPU_State final_cpu = {.pc=0x5fd8, .a=0xc8, .x=0xe7, .y=0x6a, .sp=0x6f, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a9, .value=0x31}, {.addr=0x5fd6, .value=0x84}, {.addr=0x5fd7, .value=0xa9},
    };
    const struct BusEvent events[] = {
        {.addr=0x5fd6, .value=0x84, .type=IO_READ},
        {.addr=0x5fd7, .value=0xa9, .type=IO_READ},
        {.addr=0x00a9, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00B0) {
    const struct CPU_State initial_cpu = {.pc=0xb276, .a=0x37, .x=0x14, .y=0x8d, .sp=0xfa, .status=0x63};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0151, .value=0xbe}, {.addr=0xb276, .value=0x84}, {.addr=0xb277, .value=0x51},
    };
    const struct CPU_State final_cpu = {.pc=0xb278, .a=0xf6, .x=0x14, .y=0x8d, .sp=0xfa, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0151, .value=0xbe}, {.addr=0xb276, .value=0x84}, {.addr=0xb277, .value=0x51},
    };
    const struct BusEvent events[] = {
        {.addr=0xb276, .value=0x84, .type=IO_READ},
        {.addr=0xb277, .value=0x51, .type=IO_READ},
        {.addr=0x0151, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00B1) {
    const struct CPU_State initial_cpu = {.pc=0x6a77, .a=0xdb, .x=0xb6, .y=0xf7, .sp=0x97, .status=0x9c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c7, .value=0xdd}, {.addr=0x6a77, .value=0x84}, {.addr=0x6a78, .value=0xc7},
    };
    const struct CPU_State final_cpu = {.pc=0x6a79, .a=0xb8, .x=0xb6, .y=0xf7, .sp=0x97, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c7, .value=0xdd}, {.addr=0x6a77, .value=0x84}, {.addr=0x6a78, .value=0xc7},
    };
    const struct BusEvent events[] = {
        {.addr=0x6a77, .value=0x84, .type=IO_READ},
        {.addr=0x6a78, .value=0xc7, .type=IO_READ},
        {.addr=0x00c7, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00B2) {
    const struct CPU_State initial_cpu = {.pc=0x60cc, .a=0x09, .x=0x9f, .y=0xe0, .sp=0x7b, .status=0x50};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006d, .value=0x08}, {.addr=0x60cc, .value=0x84}, {.addr=0x60cd, .value=0x6d},
    };
    const struct CPU_State final_cpu = {.pc=0x60ce, .a=0x11, .x=0x9f, .y=0xe0, .sp=0x7b, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x006d, .value=0x08}, {.addr=0x60cc, .value=0x84}, {.addr=0x60cd, .value=0x6d},
    };
    const struct BusEvent events[] = {
        {.addr=0x60cc, .value=0x84, .type=IO_READ},
        {.addr=0x60cd, .value=0x6d, .type=IO_READ},
        {.addr=0x006d, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00B3) {
    const struct CPU_State initial_cpu = {.pc=0x9e80, .a=0xab, .x=0x1b, .y=0x64, .sp=0x23, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017a, .value=0x0d}, {.addr=0x9e80, .value=0x84}, {.addr=0x9e81, .value=0x7a},
    };
    const struct CPU_State final_cpu = {.pc=0x9e82, .a=0xb8, .x=0x1b, .y=0x64, .sp=0x23, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x017a, .value=0x0d}, {.addr=0x9e80, .value=0x84}, {.addr=0x9e81, .value=0x7a},
    };
    const struct BusEvent events[] = {
        {.addr=0x9e80, .value=0x84, .type=IO_READ},
        {.addr=0x9e81, .value=0x7a, .type=IO_READ},
        {.addr=0x017a, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00B4) {
    const struct CPU_State initial_cpu = {.pc=0x9897, .a=0x72, .x=0xe7, .y=0x1f, .sp=0x26, .status=0x63};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e8, .value=0xb6}, {.addr=0x9897, .value=0x84}, {.addr=0x9898, .value=0xe8},
    };
    const struct CPU_State final_cpu = {.pc=0x9899, .a=0x29, .x=0xe7, .y=0x1f, .sp=0x26, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e8, .value=0xb6}, {.addr=0x9897, .value=0x84}, {.addr=0x9898, .value=0xe8},
    };
    const struct BusEvent events[] = {
        {.addr=0x9897, .value=0x84, .type=IO_READ},
        {.addr=0x9898, .value=0xe8, .type=IO_READ},
        {.addr=0x01e8, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00B5) {
    const struct CPU_State initial_cpu = {.pc=0x4560, .a=0xb6, .x=0x86, .y=0xcb, .sp=0x8f, .status=0x20};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014a, .value=0x10}, {.addr=0x4560, .value=0x84}, {.addr=0x4561, .value=0x4a},
    };
    const struct CPU_State final_cpu = {.pc=0x4562, .a=0xc6, .x=0x86, .y=0xcb, .sp=0x8f, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x014a, .value=0x10}, {.addr=0x4560, .value=0x84}, {.addr=0x4561, .value=0x4a},
    };
    const struct BusEvent events[] = {
        {.addr=0x4560, .value=0x84, .type=IO_READ},
        {.addr=0x4561, .value=0x4a, .type=IO_READ},
        {.addr=0x014a, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00B6) {
    const struct CPU_State initial_cpu = {.pc=0x9be9, .a=0x91, .x=0xef, .y=0x22, .sp=0xf4, .status=0x85};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00be, .value=0x55}, {.addr=0x9be9, .value=0x84}, {.addr=0x9bea, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0x9beb, .a=0xe7, .x=0xef, .y=0x22, .sp=0xf4, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x00be, .value=0x55}, {.addr=0x9be9, .value=0x84}, {.addr=0x9bea, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0x9be9, .value=0x84, .type=IO_READ},
        {.addr=0x9bea, .value=0xbe, .type=IO_READ},
        {.addr=0x00be, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x2a7a, .a=0x7b, .x=0x7b, .y=0x73, .sp=0x80, .status=0x17};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ae, .value=0x93}, {.addr=0x2a7a, .value=0x84}, {.addr=0x2a7b, .value=0xae},
    };
    const struct CPU_State final_cpu = {.pc=0x2a7c, .a=0x0f, .x=0x7b, .y=0x73, .sp=0x80, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ae, .value=0x93}, {.addr=0x2a7a, .value=0x84}, {.addr=0x2a7b, .value=0xae},
    };
    const struct BusEvent events[] = {
        {.addr=0x2a7a, .value=0x84, .type=IO_READ},
        {.addr=0x2a7b, .value=0xae, .type=IO_READ},
        {.addr=0x00ae, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00B8) {
    const struct CPU_State initial_cpu = {.pc=0x8b05, .a=0x14, .x=0x99, .y=0x72, .sp=0x23, .status=0x13};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0048, .value=0x44}, {.addr=0x8b05, .value=0x84}, {.addr=0x8b06, .value=0x48},
    };
    const struct CPU_State final_cpu = {.pc=0x8b07, .a=0x59, .x=0x99, .y=0x72, .sp=0x23, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x0048, .value=0x44}, {.addr=0x8b05, .value=0x84}, {.addr=0x8b06, .value=0x48},
    };
    const struct BusEvent events[] = {
        {.addr=0x8b05, .value=0x84, .type=IO_READ},
        {.addr=0x8b06, .value=0x48, .type=IO_READ},
        {.addr=0x0048, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00B9) {
    const struct CPU_State initial_cpu = {.pc=0x3259, .a=0xc1, .x=0xbf, .y=0xdf, .sp=0xd9, .status=0xd1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004b, .value=0x6e}, {.addr=0x3259, .value=0x84}, {.addr=0x325a, .value=0x4b},
    };
    const struct CPU_State final_cpu = {.pc=0x325b, .a=0x30, .x=0xbf, .y=0xdf, .sp=0xd9, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x004b, .value=0x6e}, {.addr=0x3259, .value=0x84}, {.addr=0x325a, .value=0x4b},
    };
    const struct BusEvent events[] = {
        {.addr=0x3259, .value=0x84, .type=IO_READ},
        {.addr=0x325a, .value=0x4b, .type=IO_READ},
        {.addr=0x004b, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00BA) {
    const struct CPU_State initial_cpu = {.pc=0x3dd6, .a=0x85, .x=0x17, .y=0xe9, .sp=0x75, .status=0x93};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0004, .value=0xd6}, {.addr=0x3dd6, .value=0x84}, {.addr=0x3dd7, .value=0x04},
    };
    const struct CPU_State final_cpu = {.pc=0x3dd8, .a=0x5c, .x=0x17, .y=0xe9, .sp=0x75, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x0004, .value=0xd6}, {.addr=0x3dd6, .value=0x84}, {.addr=0x3dd7, .value=0x04},
    };
    const struct BusEvent events[] = {
        {.addr=0x3dd6, .value=0x84, .type=IO_READ},
        {.addr=0x3dd7, .value=0x04, .type=IO_READ},
        {.addr=0x0004, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00BB) {
    const struct CPU_State initial_cpu = {.pc=0x3b16, .a=0x18, .x=0x9e, .y=0x46, .sp=0xca, .status=0xb3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e4, .value=0xf1}, {.addr=0x3b16, .value=0x84}, {.addr=0x3b17, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0x3b18, .a=0x0a, .x=0x9e, .y=0x46, .sp=0xca, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e4, .value=0xf1}, {.addr=0x3b16, .value=0x84}, {.addr=0x3b17, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0x3b16, .value=0x84, .type=IO_READ},
        {.addr=0x3b17, .value=0xe4, .type=IO_READ},
        {.addr=0x01e4, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00BC) {
    const struct CPU_State initial_cpu = {.pc=0xddc4, .a=0x8c, .x=0x86, .y=0x70, .sp=0x2c, .status=0x2c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01dc, .value=0x6c}, {.addr=0xddc4, .value=0x84}, {.addr=0xddc5, .value=0xdc},
    };
    const struct CPU_State final_cpu = {.pc=0xddc6, .a=0xf8, .x=0x86, .y=0x70, .sp=0x2c, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x01dc, .value=0x6c}, {.addr=0xddc4, .value=0x84}, {.addr=0xddc5, .value=0xdc},
    };
    const struct BusEvent events[] = {
        {.addr=0xddc4, .value=0x84, .type=IO_READ},
        {.addr=0xddc5, .value=0xdc, .type=IO_READ},
        {.addr=0x01dc, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00BF) {
    const struct CPU_State initial_cpu = {.pc=0xd921, .a=0xd0, .x=0x39, .y=0xc7, .sp=0xa9, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c1, .value=0x8e}, {.addr=0xd921, .value=0x84}, {.addr=0xd922, .value=0xc1},
    };
    const struct CPU_State final_cpu = {.pc=0xd923, .a=0x5e, .x=0x39, .y=0xc7, .sp=0xa9, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c1, .value=0x8e}, {.addr=0xd921, .value=0x84}, {.addr=0xd922, .value=0xc1},
    };
    const struct BusEvent events[] = {
        {.addr=0xd921, .value=0x84, .type=IO_READ},
        {.addr=0xd922, .value=0xc1, .type=IO_READ},
        {.addr=0x00c1, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00C0) {
    const struct CPU_State initial_cpu = {.pc=0xeb5e, .a=0xd5, .x=0x62, .y=0x47, .sp=0x91, .status=0xb7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014d, .value=0xa3}, {.addr=0xeb5e, .value=0x84}, {.addr=0xeb5f, .value=0x4d},
    };
    const struct CPU_State final_cpu = {.pc=0xeb60, .a=0x79, .x=0x62, .y=0x47, .sp=0x91, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x014d, .value=0xa3}, {.addr=0xeb5e, .value=0x84}, {.addr=0xeb5f, .value=0x4d},
    };
    const struct BusEvent events[] = {
        {.addr=0xeb5e, .value=0x84, .type=IO_READ},
        {.addr=0xeb5f, .value=0x4d, .type=IO_READ},
        {.addr=0x014d, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00C2) {
    const struct CPU_State initial_cpu = {.pc=0xe4d5, .a=0x30, .x=0x66, .y=0xf0, .sp=0x5d, .status=0xf5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014a, .value=0x0a}, {.addr=0xe4d5, .value=0x84}, {.addr=0xe4d6, .value=0x4a},
    };
    const struct CPU_State final_cpu = {.pc=0xe4d7, .a=0x3b, .x=0x66, .y=0xf0, .sp=0x5d, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x014a, .value=0x0a}, {.addr=0xe4d5, .value=0x84}, {.addr=0xe4d6, .value=0x4a},
    };
    const struct BusEvent events[] = {
        {.addr=0xe4d5, .value=0x84, .type=IO_READ},
        {.addr=0xe4d6, .value=0x4a, .type=IO_READ},
        {.addr=0x014a, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00C3) {
    const struct CPU_State initial_cpu = {.pc=0x830c, .a=0x22, .x=0x70, .y=0x20, .sp=0xe2, .status=0x68};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0140, .value=0xf9}, {.addr=0x830c, .value=0x84}, {.addr=0x830d, .value=0x40},
    };
    const struct CPU_State final_cpu = {.pc=0x830e, .a=0x1b, .x=0x70, .y=0x20, .sp=0xe2, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x0140, .value=0xf9}, {.addr=0x830c, .value=0x84}, {.addr=0x830d, .value=0x40},
    };
    const struct BusEvent events[] = {
        {.addr=0x830c, .value=0x84, .type=IO_READ},
        {.addr=0x830d, .value=0x40, .type=IO_READ},
        {.addr=0x0140, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00C4) {
    const struct CPU_State initial_cpu = {.pc=0x3a4f, .a=0x4c, .x=0x15, .y=0x89, .sp=0x48, .status=0x7a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0158, .value=0x07}, {.addr=0x3a4f, .value=0x84}, {.addr=0x3a50, .value=0x58},
    };
    const struct CPU_State final_cpu = {.pc=0x3a51, .a=0x53, .x=0x15, .y=0x89, .sp=0x48, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x0158, .value=0x07}, {.addr=0x3a4f, .value=0x84}, {.addr=0x3a50, .value=0x58},
    };
    const struct BusEvent events[] = {
        {.addr=0x3a4f, .value=0x84, .type=IO_READ},
        {.addr=0x3a50, .value=0x58, .type=IO_READ},
        {.addr=0x0158, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x0b1b, .a=0xb5, .x=0xf9, .y=0xc1, .sp=0x25, .status=0xd0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0085, .value=0xe7}, {.addr=0x0b1b, .value=0x84}, {.addr=0x0b1c, .value=0x85},
    };
    const struct CPU_State final_cpu = {.pc=0x0b1d, .a=0x9c, .x=0xf9, .y=0xc1, .sp=0x25, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x0085, .value=0xe7}, {.addr=0x0b1b, .value=0x84}, {.addr=0x0b1c, .value=0x85},
    };
    const struct BusEvent events[] = {
        {.addr=0x0b1b, .value=0x84, .type=IO_READ},
        {.addr=0x0b1c, .value=0x85, .type=IO_READ},
        {.addr=0x0085, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00C6) {
    const struct CPU_State initial_cpu = {.pc=0xd208, .a=0x33, .x=0x6a, .y=0xbe, .sp=0x9c, .status=0x95};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003c, .value=0xd7}, {.addr=0xd208, .value=0x84}, {.addr=0xd209, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0xd20a, .a=0x0b, .x=0x6a, .y=0xbe, .sp=0x9c, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x003c, .value=0xd7}, {.addr=0xd208, .value=0x84}, {.addr=0xd209, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0xd208, .value=0x84, .type=IO_READ},
        {.addr=0xd209, .value=0x3c, .type=IO_READ},
        {.addr=0x003c, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00C7) {
    const struct CPU_State initial_cpu = {.pc=0x1324, .a=0x23, .x=0x58, .y=0x62, .sp=0x80, .status=0xd4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0062, .value=0x8b}, {.addr=0x1324, .value=0x84}, {.addr=0x1325, .value=0x62},
    };
    const struct CPU_State final_cpu = {.pc=0x1326, .a=0xae, .x=0x58, .y=0x62, .sp=0x80, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0062, .value=0x8b}, {.addr=0x1324, .value=0x84}, {.addr=0x1325, .value=0x62},
    };
    const struct BusEvent events[] = {
        {.addr=0x1324, .value=0x84, .type=IO_READ},
        {.addr=0x1325, .value=0x62, .type=IO_READ},
        {.addr=0x0062, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00C8) {
    const struct CPU_State initial_cpu = {.pc=0x7b49, .a=0x42, .x=0x8c, .y=0xb2, .sp=0x69, .status=0xe9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a8, .value=0x99}, {.addr=0x7b49, .value=0x84}, {.addr=0x7b4a, .value=0xa8},
    };
    const struct CPU_State final_cpu = {.pc=0x7b4b, .a=0xdc, .x=0x8c, .y=0xb2, .sp=0x69, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a8, .value=0x99}, {.addr=0x7b49, .value=0x84}, {.addr=0x7b4a, .value=0xa8},
    };
    const struct BusEvent events[] = {
        {.addr=0x7b49, .value=0x84, .type=IO_READ},
        {.addr=0x7b4a, .value=0xa8, .type=IO_READ},
        {.addr=0x01a8, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00C9) {
    const struct CPU_State initial_cpu = {.pc=0x25a4, .a=0x2e, .x=0x0c, .y=0x3e, .sp=0x5f, .status=0x6c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014c, .value=0xa3}, {.addr=0x25a4, .value=0x84}, {.addr=0x25a5, .value=0x4c},
    };
    const struct CPU_State final_cpu = {.pc=0x25a6, .a=0xd1, .x=0x0c, .y=0x3e, .sp=0x5f, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x014c, .value=0xa3}, {.addr=0x25a4, .value=0x84}, {.addr=0x25a5, .value=0x4c},
    };
    const struct BusEvent events[] = {
        {.addr=0x25a4, .value=0x84, .type=IO_READ},
        {.addr=0x25a5, .value=0x4c, .type=IO_READ},
        {.addr=0x014c, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00CA) {
    const struct CPU_State initial_cpu = {.pc=0xe444, .a=0x1d, .x=0x4c, .y=0xa6, .sp=0xad, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0133, .value=0x5d}, {.addr=0xe444, .value=0x84}, {.addr=0xe445, .value=0x33},
    };
    const struct CPU_State final_cpu = {.pc=0xe446, .a=0x7a, .x=0x4c, .y=0xa6, .sp=0xad, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x0133, .value=0x5d}, {.addr=0xe444, .value=0x84}, {.addr=0xe445, .value=0x33},
    };
    const struct BusEvent events[] = {
        {.addr=0xe444, .value=0x84, .type=IO_READ},
        {.addr=0xe445, .value=0x33, .type=IO_READ},
        {.addr=0x0133, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00CB) {
    const struct CPU_State initial_cpu = {.pc=0xed2a, .a=0xff, .x=0x36, .y=0x1e, .sp=0x72, .status=0x0c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0054, .value=0x04}, {.addr=0xed2a, .value=0x84}, {.addr=0xed2b, .value=0x54},
    };
    const struct CPU_State final_cpu = {.pc=0xed2c, .a=0x03, .x=0x36, .y=0x1e, .sp=0x72, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0054, .value=0x04}, {.addr=0xed2a, .value=0x84}, {.addr=0xed2b, .value=0x54},
    };
    const struct BusEvent events[] = {
        {.addr=0xed2a, .value=0x84, .type=IO_READ},
        {.addr=0xed2b, .value=0x54, .type=IO_READ},
        {.addr=0x0054, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x2f9f, .a=0x71, .x=0xd5, .y=0x64, .sp=0x62, .status=0x14};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000e, .value=0x70}, {.addr=0x2f9f, .value=0x84}, {.addr=0x2fa0, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0x2fa1, .a=0xe1, .x=0xd5, .y=0x64, .sp=0x62, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x000e, .value=0x70}, {.addr=0x2f9f, .value=0x84}, {.addr=0x2fa0, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0x2f9f, .value=0x84, .type=IO_READ},
        {.addr=0x2fa0, .value=0x0e, .type=IO_READ},
        {.addr=0x000e, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00CD) {
    const struct CPU_State initial_cpu = {.pc=0x4b27, .a=0x98, .x=0x29, .y=0x94, .sp=0xb6, .status=0x0b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007c, .value=0x50}, {.addr=0x4b27, .value=0x84}, {.addr=0x4b28, .value=0x7c},
    };
    const struct CPU_State final_cpu = {.pc=0x4b29, .a=0xe9, .x=0x29, .y=0x94, .sp=0xb6, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x007c, .value=0x50}, {.addr=0x4b27, .value=0x84}, {.addr=0x4b28, .value=0x7c},
    };
    const struct BusEvent events[] = {
        {.addr=0x4b27, .value=0x84, .type=IO_READ},
        {.addr=0x4b28, .value=0x7c, .type=IO_READ},
        {.addr=0x007c, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x0eaf, .a=0x21, .x=0xe1, .y=0x4b, .sp=0x21, .status=0xbe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012c, .value=0xb6}, {.addr=0x0eaf, .value=0x84}, {.addr=0x0eb0, .value=0x2c},
    };
    const struct CPU_State final_cpu = {.pc=0x0eb1, .a=0xd7, .x=0xe1, .y=0x4b, .sp=0x21, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x012c, .value=0xb6}, {.addr=0x0eaf, .value=0x84}, {.addr=0x0eb0, .value=0x2c},
    };
    const struct BusEvent events[] = {
        {.addr=0x0eaf, .value=0x84, .type=IO_READ},
        {.addr=0x0eb0, .value=0x2c, .type=IO_READ},
        {.addr=0x012c, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00CF) {
    const struct CPU_State initial_cpu = {.pc=0xf506, .a=0x28, .x=0x09, .y=0xc7, .sp=0xa5, .status=0xe9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018e, .value=0x59}, {.addr=0xf506, .value=0x84}, {.addr=0xf507, .value=0x8e},
    };
    const struct CPU_State final_cpu = {.pc=0xf508, .a=0x82, .x=0x09, .y=0xc7, .sp=0xa5, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x018e, .value=0x59}, {.addr=0xf506, .value=0x84}, {.addr=0xf507, .value=0x8e},
    };
    const struct BusEvent events[] = {
        {.addr=0xf506, .value=0x84, .type=IO_READ},
        {.addr=0xf507, .value=0x8e, .type=IO_READ},
        {.addr=0x018e, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00D0) {
    const struct CPU_State initial_cpu = {.pc=0xe8a5, .a=0x58, .x=0x3c, .y=0xe3, .sp=0x0f, .status=0x6b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0133, .value=0xa7}, {.addr=0xe8a5, .value=0x84}, {.addr=0xe8a6, .value=0x33},
    };
    const struct CPU_State final_cpu = {.pc=0xe8a7, .a=0x00, .x=0x3c, .y=0xe3, .sp=0x0f, .status=0x2b};
    const struct RamEntry final_ram[] = {
        {.addr=0x0133, .value=0xa7}, {.addr=0xe8a5, .value=0x84}, {.addr=0xe8a6, .value=0x33},
    };
    const struct BusEvent events[] = {
        {.addr=0xe8a5, .value=0x84, .type=IO_READ},
        {.addr=0xe8a6, .value=0x33, .type=IO_READ},
        {.addr=0x0133, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x1ae4, .a=0x18, .x=0xf5, .y=0xd1, .sp=0xba, .status=0xe6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a3, .value=0x26}, {.addr=0x1ae4, .value=0x84}, {.addr=0x1ae5, .value=0xa3},
    };
    const struct CPU_State final_cpu = {.pc=0x1ae6, .a=0x3e, .x=0xf5, .y=0xd1, .sp=0xba, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a3, .value=0x26}, {.addr=0x1ae4, .value=0x84}, {.addr=0x1ae5, .value=0xa3},
    };
    const struct BusEvent events[] = {
        {.addr=0x1ae4, .value=0x84, .type=IO_READ},
        {.addr=0x1ae5, .value=0xa3, .type=IO_READ},
        {.addr=0x01a3, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00D2) {
    const struct CPU_State initial_cpu = {.pc=0x45d9, .a=0xa2, .x=0x4e, .y=0xa9, .sp=0x13, .status=0x12};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d3, .value=0x61}, {.addr=0x45d9, .value=0x84}, {.addr=0x45da, .value=0xd3},
    };
    const struct CPU_State final_cpu = {.pc=0x45db, .a=0x03, .x=0x4e, .y=0xa9, .sp=0x13, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d3, .value=0x61}, {.addr=0x45d9, .value=0x84}, {.addr=0x45da, .value=0xd3},
    };
    const struct BusEvent events[] = {
        {.addr=0x45d9, .value=0x84, .type=IO_READ},
        {.addr=0x45da, .value=0xd3, .type=IO_READ},
        {.addr=0x00d3, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00D4) {
    const struct CPU_State initial_cpu = {.pc=0xb1cf, .a=0xbf, .x=0xb6, .y=0x82, .sp=0xf9, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0100, .value=0x44}, {.addr=0xb1cf, .value=0x84}, {.addr=0xb1d0, .value=0x00},
    };
    const struct CPU_State final_cpu = {.pc=0xb1d1, .a=0x03, .x=0xb6, .y=0x82, .sp=0xf9, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x0100, .value=0x44}, {.addr=0xb1cf, .value=0x84}, {.addr=0xb1d0, .value=0x00},
    };
    const struct BusEvent events[] = {
        {.addr=0xb1cf, .value=0x84, .type=IO_READ},
        {.addr=0xb1d0, .value=0x00, .type=IO_READ},
        {.addr=0x0100, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00D5) {
    const struct CPU_State initial_cpu = {.pc=0xb2ef, .a=0xf7, .x=0xd9, .y=0xe1, .sp=0xf3, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0102, .value=0x5f}, {.addr=0xb2ef, .value=0x84}, {.addr=0xb2f0, .value=0x02},
    };
    const struct CPU_State final_cpu = {.pc=0xb2f1, .a=0x56, .x=0xd9, .y=0xe1, .sp=0xf3, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0102, .value=0x5f}, {.addr=0xb2ef, .value=0x84}, {.addr=0xb2f0, .value=0x02},
    };
    const struct BusEvent events[] = {
        {.addr=0xb2ef, .value=0x84, .type=IO_READ},
        {.addr=0xb2f0, .value=0x02, .type=IO_READ},
        {.addr=0x0102, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00D6) {
    const struct CPU_State initial_cpu = {.pc=0x04b0, .a=0x62, .x=0x72, .y=0x65, .sp=0x67, .status=0xd7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cf, .value=0xae}, {.addr=0x04b0, .value=0x84}, {.addr=0x04b1, .value=0xcf},
    };
    const struct CPU_State final_cpu = {.pc=0x04b2, .a=0x11, .x=0x72, .y=0x65, .sp=0x67, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cf, .value=0xae}, {.addr=0x04b0, .value=0x84}, {.addr=0x04b1, .value=0xcf},
    };
    const struct BusEvent events[] = {
        {.addr=0x04b0, .value=0x84, .type=IO_READ},
        {.addr=0x04b1, .value=0xcf, .type=IO_READ},
        {.addr=0x00cf, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00D7) {
    const struct CPU_State initial_cpu = {.pc=0x6afd, .a=0x60, .x=0x52, .y=0x43, .sp=0x73, .status=0x77};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c5, .value=0xb0}, {.addr=0x6afd, .value=0x84}, {.addr=0x6afe, .value=0xc5},
    };
    const struct CPU_State final_cpu = {.pc=0x6aff, .a=0x11, .x=0x52, .y=0x43, .sp=0x73, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c5, .value=0xb0}, {.addr=0x6afd, .value=0x84}, {.addr=0x6afe, .value=0xc5},
    };
    const struct BusEvent events[] = {
        {.addr=0x6afd, .value=0x84, .type=IO_READ},
        {.addr=0x6afe, .value=0xc5, .type=IO_READ},
        {.addr=0x01c5, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00D8) {
    const struct CPU_State initial_cpu = {.pc=0x778f, .a=0x9b, .x=0x21, .y=0x2f, .sp=0x35, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0015, .value=0x95}, {.addr=0x778f, .value=0x84}, {.addr=0x7790, .value=0x15},
    };
    const struct CPU_State final_cpu = {.pc=0x7791, .a=0x30, .x=0x21, .y=0x2f, .sp=0x35, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0015, .value=0x95}, {.addr=0x778f, .value=0x84}, {.addr=0x7790, .value=0x15},
    };
    const struct BusEvent events[] = {
        {.addr=0x778f, .value=0x84, .type=IO_READ},
        {.addr=0x7790, .value=0x15, .type=IO_READ},
        {.addr=0x0015, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00D9) {
    const struct CPU_State initial_cpu = {.pc=0x50a7, .a=0x37, .x=0x04, .y=0x68, .sp=0xda, .status=0x9b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c1, .value=0x45}, {.addr=0x50a7, .value=0x84}, {.addr=0x50a8, .value=0xc1},
    };
    const struct CPU_State final_cpu = {.pc=0x50a9, .a=0x7d, .x=0x04, .y=0x68, .sp=0xda, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c1, .value=0x45}, {.addr=0x50a7, .value=0x84}, {.addr=0x50a8, .value=0xc1},
    };
    const struct BusEvent events[] = {
        {.addr=0x50a7, .value=0x84, .type=IO_READ},
        {.addr=0x50a8, .value=0xc1, .type=IO_READ},
        {.addr=0x00c1, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00DA) {
    const struct CPU_State initial_cpu = {.pc=0xb1ff, .a=0x12, .x=0x3c, .y=0xec, .sp=0x4e, .status=0x39};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c0, .value=0x5f}, {.addr=0xb1ff, .value=0x84}, {.addr=0xb200, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0xb201, .a=0x72, .x=0x3c, .y=0xec, .sp=0x4e, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c0, .value=0x5f}, {.addr=0xb1ff, .value=0x84}, {.addr=0xb200, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0xb1ff, .value=0x84, .type=IO_READ},
        {.addr=0xb200, .value=0xc0, .type=IO_READ},
        {.addr=0x01c0, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x2f27, .a=0x5e, .x=0x84, .y=0x56, .sp=0x4a, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f8, .value=0x6f}, {.addr=0x2f27, .value=0x84}, {.addr=0x2f28, .value=0xf8},
    };
    const struct CPU_State final_cpu = {.pc=0x2f29, .a=0xcd, .x=0x84, .y=0x56, .sp=0x4a, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f8, .value=0x6f}, {.addr=0x2f27, .value=0x84}, {.addr=0x2f28, .value=0xf8},
    };
    const struct BusEvent events[] = {
        {.addr=0x2f27, .value=0x84, .type=IO_READ},
        {.addr=0x2f28, .value=0xf8, .type=IO_READ},
        {.addr=0x01f8, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00DC) {
    const struct CPU_State initial_cpu = {.pc=0xbdc7, .a=0xb6, .x=0x79, .y=0x5b, .sp=0x6f, .status=0x19};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003c, .value=0xda}, {.addr=0xbdc7, .value=0x84}, {.addr=0xbdc8, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0xbdc9, .a=0x91, .x=0x79, .y=0x5b, .sp=0x6f, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x003c, .value=0xda}, {.addr=0xbdc7, .value=0x84}, {.addr=0xbdc8, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0xbdc7, .value=0x84, .type=IO_READ},
        {.addr=0xbdc8, .value=0x3c, .type=IO_READ},
        {.addr=0x003c, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x6847, .a=0x79, .x=0x8a, .y=0x96, .sp=0xeb, .status=0x57};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000c, .value=0x88}, {.addr=0x6847, .value=0x84}, {.addr=0x6848, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0x6849, .a=0x02, .x=0x8a, .y=0x96, .sp=0xeb, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x000c, .value=0x88}, {.addr=0x6847, .value=0x84}, {.addr=0x6848, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0x6847, .value=0x84, .type=IO_READ},
        {.addr=0x6848, .value=0x0c, .type=IO_READ},
        {.addr=0x000c, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00DE) {
    const struct CPU_State initial_cpu = {.pc=0x8915, .a=0x71, .x=0xca, .y=0x3f, .sp=0x14, .status=0xa1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a6, .value=0xfb}, {.addr=0x8915, .value=0x84}, {.addr=0x8916, .value=0xa6},
    };
    const struct CPU_State final_cpu = {.pc=0x8917, .a=0x6d, .x=0xca, .y=0x3f, .sp=0x14, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a6, .value=0xfb}, {.addr=0x8915, .value=0x84}, {.addr=0x8916, .value=0xa6},
    };
    const struct BusEvent events[] = {
        {.addr=0x8915, .value=0x84, .type=IO_READ},
        {.addr=0x8916, .value=0xa6, .type=IO_READ},
        {.addr=0x01a6, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00DF) {
    const struct CPU_State initial_cpu = {.pc=0x8500, .a=0x28, .x=0xfa, .y=0x07, .sp=0xaa, .status=0x68};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0184, .value=0x3f}, {.addr=0x8500, .value=0x84}, {.addr=0x8501, .value=0x84},
    };
    const struct CPU_State final_cpu = {.pc=0x8502, .a=0x67, .x=0xfa, .y=0x07, .sp=0xaa, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x0184, .value=0x3f}, {.addr=0x8500, .value=0x84}, {.addr=0x8501, .value=0x84},
    };
    const struct BusEvent events[] = {
        {.addr=0x8500, .value=0x84, .type=IO_READ},
        {.addr=0x8501, .value=0x84, .type=IO_READ},
        {.addr=0x0184, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x2e47, .a=0x05, .x=0x56, .y=0x14, .sp=0xf9, .status=0xc4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b8, .value=0x18}, {.addr=0x2e47, .value=0x84}, {.addr=0x2e48, .value=0xb8},
    };
    const struct CPU_State final_cpu = {.pc=0x2e49, .a=0x1d, .x=0x56, .y=0x14, .sp=0xf9, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b8, .value=0x18}, {.addr=0x2e47, .value=0x84}, {.addr=0x2e48, .value=0xb8},
    };
    const struct BusEvent events[] = {
        {.addr=0x2e47, .value=0x84, .type=IO_READ},
        {.addr=0x2e48, .value=0xb8, .type=IO_READ},
        {.addr=0x00b8, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00E1) {
    const struct CPU_State initial_cpu = {.pc=0xb69f, .a=0x87, .x=0x8f, .y=0xac, .sp=0xb6, .status=0x37};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018d, .value=0xfe}, {.addr=0xb69f, .value=0x84}, {.addr=0xb6a0, .value=0x8d},
    };
    const struct CPU_State final_cpu = {.pc=0xb6a1, .a=0x86, .x=0x8f, .y=0xac, .sp=0xb6, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x018d, .value=0xfe}, {.addr=0xb69f, .value=0x84}, {.addr=0xb6a0, .value=0x8d},
    };
    const struct BusEvent events[] = {
        {.addr=0xb69f, .value=0x84, .type=IO_READ},
        {.addr=0xb6a0, .value=0x8d, .type=IO_READ},
        {.addr=0x018d, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x29cd, .a=0xa1, .x=0xdd, .y=0xc8, .sp=0x6b, .status=0xe0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017b, .value=0xfc}, {.addr=0x29cd, .value=0x84}, {.addr=0x29ce, .value=0x7b},
    };
    const struct CPU_State final_cpu = {.pc=0x29cf, .a=0x9d, .x=0xdd, .y=0xc8, .sp=0x6b, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x017b, .value=0xfc}, {.addr=0x29cd, .value=0x84}, {.addr=0x29ce, .value=0x7b},
    };
    const struct BusEvent events[] = {
        {.addr=0x29cd, .value=0x84, .type=IO_READ},
        {.addr=0x29ce, .value=0x7b, .type=IO_READ},
        {.addr=0x017b, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00E3) {
    const struct CPU_State initial_cpu = {.pc=0xcabb, .a=0x33, .x=0x0a, .y=0xdf, .sp=0xb4, .status=0x35};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0191, .value=0x0f}, {.addr=0xcabb, .value=0x84}, {.addr=0xcabc, .value=0x91},
    };
    const struct CPU_State final_cpu = {.pc=0xcabd, .a=0x43, .x=0x0a, .y=0xdf, .sp=0xb4, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0191, .value=0x0f}, {.addr=0xcabb, .value=0x84}, {.addr=0xcabc, .value=0x91},
    };
    const struct BusEvent events[] = {
        {.addr=0xcabb, .value=0x84, .type=IO_READ},
        {.addr=0xcabc, .value=0x91, .type=IO_READ},
        {.addr=0x0191, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x04b7, .a=0xe1, .x=0x95, .y=0x82, .sp=0x83, .status=0x91};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c5, .value=0xd4}, {.addr=0x04b7, .value=0x84}, {.addr=0x04b8, .value=0xc5},
    };
    const struct CPU_State final_cpu = {.pc=0x04b9, .a=0xb6, .x=0x95, .y=0x82, .sp=0x83, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c5, .value=0xd4}, {.addr=0x04b7, .value=0x84}, {.addr=0x04b8, .value=0xc5},
    };
    const struct BusEvent events[] = {
        {.addr=0x04b7, .value=0x84, .type=IO_READ},
        {.addr=0x04b8, .value=0xc5, .type=IO_READ},
        {.addr=0x00c5, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00E5) {
    const struct CPU_State initial_cpu = {.pc=0xa5ba, .a=0x5f, .x=0xa2, .y=0xf3, .sp=0x3a, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0037, .value=0xe1}, {.addr=0xa5ba, .value=0x84}, {.addr=0xa5bb, .value=0x37},
    };
    const struct CPU_State final_cpu = {.pc=0xa5bc, .a=0x40, .x=0xa2, .y=0xf3, .sp=0x3a, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x0037, .value=0xe1}, {.addr=0xa5ba, .value=0x84}, {.addr=0xa5bb, .value=0x37},
    };
    const struct BusEvent events[] = {
        {.addr=0xa5ba, .value=0x84, .type=IO_READ},
        {.addr=0xa5bb, .value=0x37, .type=IO_READ},
        {.addr=0x0037, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00E6) {
    const struct CPU_State initial_cpu = {.pc=0x3f11, .a=0x8f, .x=0x54, .y=0x86, .sp=0xa0, .status=0x44};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00dd, .value=0x64}, {.addr=0x3f11, .value=0x84}, {.addr=0x3f12, .value=0xdd},
    };
    const struct CPU_State final_cpu = {.pc=0x3f13, .a=0xf3, .x=0x54, .y=0x86, .sp=0xa0, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00dd, .value=0x64}, {.addr=0x3f11, .value=0x84}, {.addr=0x3f12, .value=0xdd},
    };
    const struct BusEvent events[] = {
        {.addr=0x3f11, .value=0x84, .type=IO_READ},
        {.addr=0x3f12, .value=0xdd, .type=IO_READ},
        {.addr=0x00dd, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00E7) {
    const struct CPU_State initial_cpu = {.pc=0x73f0, .a=0x69, .x=0x81, .y=0xb3, .sp=0xff, .status=0x64};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b4, .value=0x4c}, {.addr=0x73f0, .value=0x84}, {.addr=0x73f1, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0x73f2, .a=0xb5, .x=0x81, .y=0xb3, .sp=0xff, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b4, .value=0x4c}, {.addr=0x73f0, .value=0x84}, {.addr=0x73f1, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0x73f0, .value=0x84, .type=IO_READ},
        {.addr=0x73f1, .value=0xb4, .type=IO_READ},
        {.addr=0x01b4, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00E8) {
    const struct CPU_State initial_cpu = {.pc=0x3536, .a=0x40, .x=0xf3, .y=0xe8, .sp=0x5e, .status=0x56};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bb, .value=0x86}, {.addr=0x3536, .value=0x84}, {.addr=0x3537, .value=0xbb},
    };
    const struct CPU_State final_cpu = {.pc=0x3538, .a=0xc6, .x=0xf3, .y=0xe8, .sp=0x5e, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bb, .value=0x86}, {.addr=0x3536, .value=0x84}, {.addr=0x3537, .value=0xbb},
    };
    const struct BusEvent events[] = {
        {.addr=0x3536, .value=0x84, .type=IO_READ},
        {.addr=0x3537, .value=0xbb, .type=IO_READ},
        {.addr=0x00bb, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00E9) {
    const struct CPU_State initial_cpu = {.pc=0x42d0, .a=0xa7, .x=0xec, .y=0x86, .sp=0x5e, .status=0xb8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fa, .value=0xeb}, {.addr=0x42d0, .value=0x84}, {.addr=0x42d1, .value=0xfa},
    };
    const struct CPU_State final_cpu = {.pc=0x42d2, .a=0x92, .x=0xec, .y=0x86, .sp=0x5e, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fa, .value=0xeb}, {.addr=0x42d0, .value=0x84}, {.addr=0x42d1, .value=0xfa},
    };
    const struct BusEvent events[] = {
        {.addr=0x42d0, .value=0x84, .type=IO_READ},
        {.addr=0x42d1, .value=0xfa, .type=IO_READ},
        {.addr=0x01fa, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x6f82, .a=0x12, .x=0x1c, .y=0x41, .sp=0xbb, .status=0xc3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c6, .value=0xc2}, {.addr=0x6f82, .value=0x84}, {.addr=0x6f83, .value=0xc6},
    };
    const struct CPU_State final_cpu = {.pc=0x6f84, .a=0xd5, .x=0x1c, .y=0x41, .sp=0xbb, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c6, .value=0xc2}, {.addr=0x6f82, .value=0x84}, {.addr=0x6f83, .value=0xc6},
    };
    const struct BusEvent events[] = {
        {.addr=0x6f82, .value=0x84, .type=IO_READ},
        {.addr=0x6f83, .value=0xc6, .type=IO_READ},
        {.addr=0x00c6, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00EB) {
    const struct CPU_State initial_cpu = {.pc=0x923c, .a=0x2a, .x=0xd0, .y=0x93, .sp=0xf7, .status=0xcd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0009, .value=0x0e}, {.addr=0x923c, .value=0x84}, {.addr=0x923d, .value=0x09},
    };
    const struct CPU_State final_cpu = {.pc=0x923e, .a=0x39, .x=0xd0, .y=0x93, .sp=0xf7, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0009, .value=0x0e}, {.addr=0x923c, .value=0x84}, {.addr=0x923d, .value=0x09},
    };
    const struct BusEvent events[] = {
        {.addr=0x923c, .value=0x84, .type=IO_READ},
        {.addr=0x923d, .value=0x09, .type=IO_READ},
        {.addr=0x0009, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00EC) {
    const struct CPU_State initial_cpu = {.pc=0x91dc, .a=0x28, .x=0x2d, .y=0xd5, .sp=0xc9, .status=0xe0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015e, .value=0xe7}, {.addr=0x91dc, .value=0x84}, {.addr=0x91dd, .value=0x5e},
    };
    const struct CPU_State final_cpu = {.pc=0x91de, .a=0x0f, .x=0x2d, .y=0xd5, .sp=0xc9, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x015e, .value=0xe7}, {.addr=0x91dc, .value=0x84}, {.addr=0x91dd, .value=0x5e},
    };
    const struct BusEvent events[] = {
        {.addr=0x91dc, .value=0x84, .type=IO_READ},
        {.addr=0x91dd, .value=0x5e, .type=IO_READ},
        {.addr=0x015e, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00ED) {
    const struct CPU_State initial_cpu = {.pc=0x7e46, .a=0x7a, .x=0x6d, .y=0x63, .sp=0x62, .status=0xc2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0085, .value=0xd1}, {.addr=0x7e46, .value=0x84}, {.addr=0x7e47, .value=0x85},
    };
    const struct CPU_State final_cpu = {.pc=0x7e48, .a=0x4b, .x=0x6d, .y=0x63, .sp=0x62, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x0085, .value=0xd1}, {.addr=0x7e46, .value=0x84}, {.addr=0x7e47, .value=0x85},
    };
    const struct BusEvent events[] = {
        {.addr=0x7e46, .value=0x84, .type=IO_READ},
        {.addr=0x7e47, .value=0x85, .type=IO_READ},
        {.addr=0x0085, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00EE) {
    const struct CPU_State initial_cpu = {.pc=0xfc57, .a=0xbf, .x=0x18, .y=0x52, .sp=0xee, .status=0xc2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0020, .value=0xe0}, {.addr=0xfc57, .value=0x84}, {.addr=0xfc58, .value=0x20},
    };
    const struct CPU_State final_cpu = {.pc=0xfc59, .a=0x9f, .x=0x18, .y=0x52, .sp=0xee, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x0020, .value=0xe0}, {.addr=0xfc57, .value=0x84}, {.addr=0xfc58, .value=0x20},
    };
    const struct BusEvent events[] = {
        {.addr=0xfc57, .value=0x84, .type=IO_READ},
        {.addr=0xfc58, .value=0x20, .type=IO_READ},
        {.addr=0x0020, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00EF) {
    const struct CPU_State initial_cpu = {.pc=0xac0e, .a=0x4a, .x=0xc4, .y=0x27, .sp=0x1b, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007b, .value=0x0e}, {.addr=0xac0e, .value=0x84}, {.addr=0xac0f, .value=0x7b},
    };
    const struct CPU_State final_cpu = {.pc=0xac10, .a=0x58, .x=0xc4, .y=0x27, .sp=0x1b, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x007b, .value=0x0e}, {.addr=0xac0e, .value=0x84}, {.addr=0xac0f, .value=0x7b},
    };
    const struct BusEvent events[] = {
        {.addr=0xac0e, .value=0x84, .type=IO_READ},
        {.addr=0xac0f, .value=0x7b, .type=IO_READ},
        {.addr=0x007b, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x56be, .a=0x21, .x=0xaf, .y=0xe0, .sp=0xd0, .status=0x0b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000f, .value=0xfb}, {.addr=0x56be, .value=0x84}, {.addr=0x56bf, .value=0x0f},
    };
    const struct CPU_State final_cpu = {.pc=0x56c0, .a=0x1d, .x=0xaf, .y=0xe0, .sp=0xd0, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x000f, .value=0xfb}, {.addr=0x56be, .value=0x84}, {.addr=0x56bf, .value=0x0f},
    };
    const struct BusEvent events[] = {
        {.addr=0x56be, .value=0x84, .type=IO_READ},
        {.addr=0x56bf, .value=0x0f, .type=IO_READ},
        {.addr=0x000f, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00F1) {
    const struct CPU_State initial_cpu = {.pc=0x2146, .a=0xd3, .x=0x81, .y=0x93, .sp=0xaf, .status=0xc6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bb, .value=0xde}, {.addr=0x2146, .value=0x84}, {.addr=0x2147, .value=0xbb},
    };
    const struct CPU_State final_cpu = {.pc=0x2148, .a=0xb1, .x=0x81, .y=0x93, .sp=0xaf, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bb, .value=0xde}, {.addr=0x2146, .value=0x84}, {.addr=0x2147, .value=0xbb},
    };
    const struct BusEvent events[] = {
        {.addr=0x2146, .value=0x84, .type=IO_READ},
        {.addr=0x2147, .value=0xbb, .type=IO_READ},
        {.addr=0x00bb, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00F3) {
    const struct CPU_State initial_cpu = {.pc=0x41a0, .a=0x91, .x=0x72, .y=0x8d, .sp=0xdf, .status=0x04};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0064, .value=0xdf}, {.addr=0x41a0, .value=0x84}, {.addr=0x41a1, .value=0x64},
    };
    const struct CPU_State final_cpu = {.pc=0x41a2, .a=0x70, .x=0x72, .y=0x8d, .sp=0xdf, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0064, .value=0xdf}, {.addr=0x41a0, .value=0x84}, {.addr=0x41a1, .value=0x64},
    };
    const struct BusEvent events[] = {
        {.addr=0x41a0, .value=0x84, .type=IO_READ},
        {.addr=0x41a1, .value=0x64, .type=IO_READ},
        {.addr=0x0064, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00F4) {
    const struct CPU_State initial_cpu = {.pc=0xb596, .a=0xa5, .x=0x9b, .y=0x66, .sp=0x43, .status=0x13};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0043, .value=0x0f}, {.addr=0xb596, .value=0x84}, {.addr=0xb597, .value=0x43},
    };
    const struct CPU_State final_cpu = {.pc=0xb598, .a=0xb5, .x=0x9b, .y=0x66, .sp=0x43, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x0043, .value=0x0f}, {.addr=0xb596, .value=0x84}, {.addr=0xb597, .value=0x43},
    };
    const struct BusEvent events[] = {
        {.addr=0xb596, .value=0x84, .type=IO_READ},
        {.addr=0xb597, .value=0x43, .type=IO_READ},
        {.addr=0x0043, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00F5) {
    const struct CPU_State initial_cpu = {.pc=0x8fe0, .a=0x0c, .x=0x7a, .y=0x05, .sp=0xde, .status=0x4d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002c, .value=0xf1}, {.addr=0x8fe0, .value=0x84}, {.addr=0x8fe1, .value=0x2c},
    };
    const struct CPU_State final_cpu = {.pc=0x8fe2, .a=0xfe, .x=0x7a, .y=0x05, .sp=0xde, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x002c, .value=0xf1}, {.addr=0x8fe0, .value=0x84}, {.addr=0x8fe1, .value=0x2c},
    };
    const struct BusEvent events[] = {
        {.addr=0x8fe0, .value=0x84, .type=IO_READ},
        {.addr=0x8fe1, .value=0x2c, .type=IO_READ},
        {.addr=0x002c, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00F6) {
    const struct CPU_State initial_cpu = {.pc=0xca60, .a=0xe9, .x=0x3c, .y=0x32, .sp=0x17, .status=0x8b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0017, .value=0x2d}, {.addr=0xca60, .value=0x84}, {.addr=0xca61, .value=0x17},
    };
    const struct CPU_State final_cpu = {.pc=0xca62, .a=0x17, .x=0x3c, .y=0x32, .sp=0x17, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x0017, .value=0x2d}, {.addr=0xca60, .value=0x84}, {.addr=0xca61, .value=0x17},
    };
    const struct BusEvent events[] = {
        {.addr=0xca60, .value=0x84, .type=IO_READ},
        {.addr=0xca61, .value=0x17, .type=IO_READ},
        {.addr=0x0017, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00F7) {
    const struct CPU_State initial_cpu = {.pc=0xaa1f, .a=0x36, .x=0xb2, .y=0x4f, .sp=0x8f, .status=0x68};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012c, .value=0xc7}, {.addr=0xaa1f, .value=0x84}, {.addr=0xaa20, .value=0x2c},
    };
    const struct CPU_State final_cpu = {.pc=0xaa21, .a=0xfd, .x=0xb2, .y=0x4f, .sp=0x8f, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x012c, .value=0xc7}, {.addr=0xaa1f, .value=0x84}, {.addr=0xaa20, .value=0x2c},
    };
    const struct BusEvent events[] = {
        {.addr=0xaa1f, .value=0x84, .type=IO_READ},
        {.addr=0xaa20, .value=0x2c, .type=IO_READ},
        {.addr=0x012c, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x3d5f, .a=0x9b, .x=0x55, .y=0xc1, .sp=0xc7, .status=0xca};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e0, .value=0x66}, {.addr=0x3d5f, .value=0x84}, {.addr=0x3d60, .value=0xe0},
    };
    const struct CPU_State final_cpu = {.pc=0x3d61, .a=0x01, .x=0x55, .y=0xc1, .sp=0xc7, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e0, .value=0x66}, {.addr=0x3d5f, .value=0x84}, {.addr=0x3d60, .value=0xe0},
    };
    const struct BusEvent events[] = {
        {.addr=0x3d5f, .value=0x84, .type=IO_READ},
        {.addr=0x3d60, .value=0xe0, .type=IO_READ},
        {.addr=0x00e0, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00F9) {
    const struct CPU_State initial_cpu = {.pc=0xed0d, .a=0x60, .x=0x18, .y=0xe5, .sp=0x2a, .status=0x01};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003f, .value=0x91}, {.addr=0xed0d, .value=0x84}, {.addr=0xed0e, .value=0x3f},
    };
    const struct CPU_State final_cpu = {.pc=0xed0f, .a=0xf2, .x=0x18, .y=0xe5, .sp=0x2a, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x003f, .value=0x91}, {.addr=0xed0d, .value=0x84}, {.addr=0xed0e, .value=0x3f},
    };
    const struct BusEvent events[] = {
        {.addr=0xed0d, .value=0x84, .type=IO_READ},
        {.addr=0xed0e, .value=0x3f, .type=IO_READ},
        {.addr=0x003f, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00FA) {
    const struct CPU_State initial_cpu = {.pc=0xf21d, .a=0x10, .x=0x27, .y=0x70, .sp=0x1a, .status=0xa8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0143, .value=0xbb}, {.addr=0xf21d, .value=0x84}, {.addr=0xf21e, .value=0x43},
    };
    const struct CPU_State final_cpu = {.pc=0xf21f, .a=0xcb, .x=0x27, .y=0x70, .sp=0x1a, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0143, .value=0xbb}, {.addr=0xf21d, .value=0x84}, {.addr=0xf21e, .value=0x43},
    };
    const struct BusEvent events[] = {
        {.addr=0xf21d, .value=0x84, .type=IO_READ},
        {.addr=0xf21e, .value=0x43, .type=IO_READ},
        {.addr=0x0143, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00FB) {
    const struct CPU_State initial_cpu = {.pc=0xf026, .a=0xdc, .x=0x54, .y=0xcb, .sp=0x2a, .status=0x7c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0140, .value=0x3e}, {.addr=0xf026, .value=0x84}, {.addr=0xf027, .value=0x40},
    };
    const struct CPU_State final_cpu = {.pc=0xf028, .a=0x1a, .x=0x54, .y=0xcb, .sp=0x2a, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0140, .value=0x3e}, {.addr=0xf026, .value=0x84}, {.addr=0xf027, .value=0x40},
    };
    const struct BusEvent events[] = {
        {.addr=0xf026, .value=0x84, .type=IO_READ},
        {.addr=0xf027, .value=0x40, .type=IO_READ},
        {.addr=0x0140, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00FC) {
    const struct CPU_State initial_cpu = {.pc=0x1214, .a=0x95, .x=0x41, .y=0x65, .sp=0xb4, .status=0xc2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006e, .value=0xdf}, {.addr=0x1214, .value=0x84}, {.addr=0x1215, .value=0x6e},
    };
    const struct CPU_State final_cpu = {.pc=0x1216, .a=0x74, .x=0x41, .y=0x65, .sp=0xb4, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x006e, .value=0xdf}, {.addr=0x1214, .value=0x84}, {.addr=0x1215, .value=0x6e},
    };
    const struct BusEvent events[] = {
        {.addr=0x1214, .value=0x84, .type=IO_READ},
        {.addr=0x1215, .value=0x6e, .type=IO_READ},
        {.addr=0x006e, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x9fb7, .a=0x6d, .x=0x66, .y=0x38, .sp=0x78, .status=0xa0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0128, .value=0xfe}, {.addr=0x9fb7, .value=0x84}, {.addr=0x9fb8, .value=0x28},
    };
    const struct CPU_State final_cpu = {.pc=0x9fb9, .a=0x6b, .x=0x66, .y=0x38, .sp=0x78, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x0128, .value=0xfe}, {.addr=0x9fb7, .value=0x84}, {.addr=0x9fb8, .value=0x28},
    };
    const struct BusEvent events[] = {
        {.addr=0x9fb7, .value=0x84, .type=IO_READ},
        {.addr=0x9fb8, .value=0x28, .type=IO_READ},
        {.addr=0x0128, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00FE) {
    const struct CPU_State initial_cpu = {.pc=0x2069, .a=0xfd, .x=0x6a, .y=0x2f, .sp=0xa9, .status=0x30};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011b, .value=0x5b}, {.addr=0x2069, .value=0x84}, {.addr=0x206a, .value=0x1b},
    };
    const struct CPU_State final_cpu = {.pc=0x206b, .a=0x58, .x=0x6a, .y=0x2f, .sp=0xa9, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x011b, .value=0x5b}, {.addr=0x2069, .value=0x84}, {.addr=0x206a, .value=0x1b},
    };
    const struct BusEvent events[] = {
        {.addr=0x2069, .value=0x84, .type=IO_READ},
        {.addr=0x206a, .value=0x1b, .type=IO_READ},
        {.addr=0x011b, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_00FF) {
    const struct CPU_State initial_cpu = {.pc=0x37df, .a=0xf7, .x=0x25, .y=0xda, .sp=0x2a, .status=0x96};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004f, .value=0x82}, {.addr=0x37df, .value=0x84}, {.addr=0x37e0, .value=0x4f},
    };
    const struct CPU_State final_cpu = {.pc=0x37e1, .a=0x79, .x=0x25, .y=0xda, .sp=0x2a, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x004f, .value=0x82}, {.addr=0x37df, .value=0x84}, {.addr=0x37e0, .value=0x4f},
    };
    const struct BusEvent events[] = {
        {.addr=0x37df, .value=0x84, .type=IO_READ},
        {.addr=0x37e0, .value=0x4f, .type=IO_READ},
        {.addr=0x004f, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0100) {
    const struct CPU_State initial_cpu = {.pc=0xc4e0, .a=0x2a, .x=0x51, .y=0xb4, .sp=0x6d, .status=0x72};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0102, .value=0xee}, {.addr=0xc4e0, .value=0x84}, {.addr=0xc4e1, .value=0x02},
    };
    const struct CPU_State final_cpu = {.pc=0xc4e2, .a=0x18, .x=0x51, .y=0xb4, .sp=0x6d, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x0102, .value=0xee}, {.addr=0xc4e0, .value=0x84}, {.addr=0xc4e1, .value=0x02},
    };
    const struct BusEvent events[] = {
        {.addr=0xc4e0, .value=0x84, .type=IO_READ},
        {.addr=0xc4e1, .value=0x02, .type=IO_READ},
        {.addr=0x0102, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0101) {
    const struct CPU_State initial_cpu = {.pc=0xc0d7, .a=0x10, .x=0x64, .y=0x2b, .sp=0x0f, .status=0x69};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0197, .value=0xf7}, {.addr=0xc0d7, .value=0x84}, {.addr=0xc0d8, .value=0x97},
    };
    const struct CPU_State final_cpu = {.pc=0xc0d9, .a=0x08, .x=0x64, .y=0x2b, .sp=0x0f, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x0197, .value=0xf7}, {.addr=0xc0d7, .value=0x84}, {.addr=0xc0d8, .value=0x97},
    };
    const struct BusEvent events[] = {
        {.addr=0xc0d7, .value=0x84, .type=IO_READ},
        {.addr=0xc0d8, .value=0x97, .type=IO_READ},
        {.addr=0x0197, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0102) {
    const struct CPU_State initial_cpu = {.pc=0x51b5, .a=0x8c, .x=0x36, .y=0x20, .sp=0xd7, .status=0x47};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c0, .value=0x41}, {.addr=0x51b5, .value=0x84}, {.addr=0x51b6, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0x51b7, .a=0xce, .x=0x36, .y=0x20, .sp=0xd7, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c0, .value=0x41}, {.addr=0x51b5, .value=0x84}, {.addr=0x51b6, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0x51b5, .value=0x84, .type=IO_READ},
        {.addr=0x51b6, .value=0xc0, .type=IO_READ},
        {.addr=0x00c0, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0103) {
    const struct CPU_State initial_cpu = {.pc=0x25da, .a=0x31, .x=0xa3, .y=0xd0, .sp=0xc3, .status=0xcf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0092, .value=0x35}, {.addr=0x25da, .value=0x84}, {.addr=0x25db, .value=0x92},
    };
    const struct CPU_State final_cpu = {.pc=0x25dc, .a=0x67, .x=0xa3, .y=0xd0, .sp=0xc3, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x0092, .value=0x35}, {.addr=0x25da, .value=0x84}, {.addr=0x25db, .value=0x92},
    };
    const struct BusEvent events[] = {
        {.addr=0x25da, .value=0x84, .type=IO_READ},
        {.addr=0x25db, .value=0x92, .type=IO_READ},
        {.addr=0x0092, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0104) {
    const struct CPU_State initial_cpu = {.pc=0x0ed2, .a=0x7e, .x=0x2d, .y=0xb1, .sp=0x3d, .status=0x09};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0094, .value=0x5c}, {.addr=0x0ed2, .value=0x84}, {.addr=0x0ed3, .value=0x94},
    };
    const struct CPU_State final_cpu = {.pc=0x0ed4, .a=0xdb, .x=0x2d, .y=0xb1, .sp=0x3d, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0094, .value=0x5c}, {.addr=0x0ed2, .value=0x84}, {.addr=0x0ed3, .value=0x94},
    };
    const struct BusEvent events[] = {
        {.addr=0x0ed2, .value=0x84, .type=IO_READ},
        {.addr=0x0ed3, .value=0x94, .type=IO_READ},
        {.addr=0x0094, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0106) {
    const struct CPU_State initial_cpu = {.pc=0x2e9e, .a=0x82, .x=0xbd, .y=0xc5, .sp=0xc0, .status=0x1f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0037, .value=0x2a}, {.addr=0x2e9e, .value=0x84}, {.addr=0x2e9f, .value=0x37},
    };
    const struct CPU_State final_cpu = {.pc=0x2ea0, .a=0xad, .x=0xbd, .y=0xc5, .sp=0xc0, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0037, .value=0x2a}, {.addr=0x2e9e, .value=0x84}, {.addr=0x2e9f, .value=0x37},
    };
    const struct BusEvent events[] = {
        {.addr=0x2e9e, .value=0x84, .type=IO_READ},
        {.addr=0x2e9f, .value=0x37, .type=IO_READ},
        {.addr=0x0037, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0107) {
    const struct CPU_State initial_cpu = {.pc=0xca0c, .a=0xed, .x=0xee, .y=0x04, .sp=0x72, .status=0xcb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006a, .value=0xbc}, {.addr=0xca0c, .value=0x84}, {.addr=0xca0d, .value=0x6a},
    };
    const struct CPU_State final_cpu = {.pc=0xca0e, .a=0xaa, .x=0xee, .y=0x04, .sp=0x72, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x006a, .value=0xbc}, {.addr=0xca0c, .value=0x84}, {.addr=0xca0d, .value=0x6a},
    };
    const struct BusEvent events[] = {
        {.addr=0xca0c, .value=0x84, .type=IO_READ},
        {.addr=0xca0d, .value=0x6a, .type=IO_READ},
        {.addr=0x006a, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0108) {
    const struct CPU_State initial_cpu = {.pc=0xa0f5, .a=0x3a, .x=0x93, .y=0x64, .sp=0x57, .status=0xbf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0145, .value=0x25}, {.addr=0xa0f5, .value=0x84}, {.addr=0xa0f6, .value=0x45},
    };
    const struct CPU_State final_cpu = {.pc=0xa0f7, .a=0x60, .x=0x93, .y=0x64, .sp=0x57, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0145, .value=0x25}, {.addr=0xa0f5, .value=0x84}, {.addr=0xa0f6, .value=0x45},
    };
    const struct BusEvent events[] = {
        {.addr=0xa0f5, .value=0x84, .type=IO_READ},
        {.addr=0xa0f6, .value=0x45, .type=IO_READ},
        {.addr=0x0145, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0109) {
    const struct CPU_State initial_cpu = {.pc=0xade6, .a=0x51, .x=0x54, .y=0x27, .sp=0xc0, .status=0x09};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0023, .value=0x13}, {.addr=0xade6, .value=0x84}, {.addr=0xade7, .value=0x23},
    };
    const struct CPU_State final_cpu = {.pc=0xade8, .a=0x65, .x=0x54, .y=0x27, .sp=0xc0, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x0023, .value=0x13}, {.addr=0xade6, .value=0x84}, {.addr=0xade7, .value=0x23},
    };
    const struct BusEvent events[] = {
        {.addr=0xade6, .value=0x84, .type=IO_READ},
        {.addr=0xade7, .value=0x23, .type=IO_READ},
        {.addr=0x0023, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_010A) {
    const struct CPU_State initial_cpu = {.pc=0xbdc2, .a=0x62, .x=0x33, .y=0x17, .sp=0x65, .status=0x71};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010b, .value=0x5d}, {.addr=0xbdc2, .value=0x84}, {.addr=0xbdc3, .value=0x0b},
    };
    const struct CPU_State final_cpu = {.pc=0xbdc4, .a=0xc0, .x=0x33, .y=0x17, .sp=0x65, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x010b, .value=0x5d}, {.addr=0xbdc2, .value=0x84}, {.addr=0xbdc3, .value=0x0b},
    };
    const struct BusEvent events[] = {
        {.addr=0xbdc2, .value=0x84, .type=IO_READ},
        {.addr=0xbdc3, .value=0x0b, .type=IO_READ},
        {.addr=0x010b, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_010B) {
    const struct CPU_State initial_cpu = {.pc=0x1ecb, .a=0x06, .x=0xbc, .y=0xed, .sp=0x2a, .status=0x09};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0076, .value=0x56}, {.addr=0x1ecb, .value=0x84}, {.addr=0x1ecc, .value=0x76},
    };
    const struct CPU_State final_cpu = {.pc=0x1ecd, .a=0x5d, .x=0xbc, .y=0xed, .sp=0x2a, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x0076, .value=0x56}, {.addr=0x1ecb, .value=0x84}, {.addr=0x1ecc, .value=0x76},
    };
    const struct BusEvent events[] = {
        {.addr=0x1ecb, .value=0x84, .type=IO_READ},
        {.addr=0x1ecc, .value=0x76, .type=IO_READ},
        {.addr=0x0076, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_010C) {
    const struct CPU_State initial_cpu = {.pc=0x4c62, .a=0x35, .x=0x25, .y=0xa3, .sp=0x6a, .status=0x76};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0192, .value=0x72}, {.addr=0x4c62, .value=0x84}, {.addr=0x4c63, .value=0x92},
    };
    const struct CPU_State final_cpu = {.pc=0x4c64, .a=0xa7, .x=0x25, .y=0xa3, .sp=0x6a, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0192, .value=0x72}, {.addr=0x4c62, .value=0x84}, {.addr=0x4c63, .value=0x92},
    };
    const struct BusEvent events[] = {
        {.addr=0x4c62, .value=0x84, .type=IO_READ},
        {.addr=0x4c63, .value=0x92, .type=IO_READ},
        {.addr=0x0192, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_010D) {
    const struct CPU_State initial_cpu = {.pc=0x84ce, .a=0x51, .x=0x07, .y=0x2b, .sp=0x16, .status=0xc7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c0, .value=0x1e}, {.addr=0x84ce, .value=0x84}, {.addr=0x84cf, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0x84d0, .a=0x70, .x=0x07, .y=0x2b, .sp=0x16, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c0, .value=0x1e}, {.addr=0x84ce, .value=0x84}, {.addr=0x84cf, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0x84ce, .value=0x84, .type=IO_READ},
        {.addr=0x84cf, .value=0xc0, .type=IO_READ},
        {.addr=0x00c0, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_010E) {
    const struct CPU_State initial_cpu = {.pc=0xe5f3, .a=0x36, .x=0xe7, .y=0xb7, .sp=0x1b, .status=0x1a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0079, .value=0x4b}, {.addr=0xe5f3, .value=0x84}, {.addr=0xe5f4, .value=0x79},
    };
    const struct CPU_State final_cpu = {.pc=0xe5f5, .a=0x81, .x=0xe7, .y=0xb7, .sp=0x1b, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0079, .value=0x4b}, {.addr=0xe5f3, .value=0x84}, {.addr=0xe5f4, .value=0x79},
    };
    const struct BusEvent events[] = {
        {.addr=0xe5f3, .value=0x84, .type=IO_READ},
        {.addr=0xe5f4, .value=0x79, .type=IO_READ},
        {.addr=0x0079, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_010F) {
    const struct CPU_State initial_cpu = {.pc=0xf2a0, .a=0xd0, .x=0xb9, .y=0x87, .sp=0x6d, .status=0x8a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ae, .value=0x14}, {.addr=0xf2a0, .value=0x84}, {.addr=0xf2a1, .value=0xae},
    };
    const struct CPU_State final_cpu = {.pc=0xf2a2, .a=0xe4, .x=0xb9, .y=0x87, .sp=0x6d, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ae, .value=0x14}, {.addr=0xf2a0, .value=0x84}, {.addr=0xf2a1, .value=0xae},
    };
    const struct BusEvent events[] = {
        {.addr=0xf2a0, .value=0x84, .type=IO_READ},
        {.addr=0xf2a1, .value=0xae, .type=IO_READ},
        {.addr=0x00ae, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0110) {
    const struct CPU_State initial_cpu = {.pc=0x27dd, .a=0x79, .x=0x04, .y=0xc3, .sp=0xe4, .status=0x74};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0181, .value=0xe5}, {.addr=0x27dd, .value=0x84}, {.addr=0x27de, .value=0x81},
    };
    const struct CPU_State final_cpu = {.pc=0x27df, .a=0x5e, .x=0x04, .y=0xc3, .sp=0xe4, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x0181, .value=0xe5}, {.addr=0x27dd, .value=0x84}, {.addr=0x27de, .value=0x81},
    };
    const struct BusEvent events[] = {
        {.addr=0x27dd, .value=0x84, .type=IO_READ},
        {.addr=0x27de, .value=0x81, .type=IO_READ},
        {.addr=0x0181, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0111) {
    const struct CPU_State initial_cpu = {.pc=0x291d, .a=0x09, .x=0x72, .y=0xc3, .sp=0x1d, .status=0xac};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017b, .value=0x9f}, {.addr=0x291d, .value=0x84}, {.addr=0x291e, .value=0x7b},
    };
    const struct CPU_State final_cpu = {.pc=0x291f, .a=0xa8, .x=0x72, .y=0xc3, .sp=0x1d, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x017b, .value=0x9f}, {.addr=0x291d, .value=0x84}, {.addr=0x291e, .value=0x7b},
    };
    const struct BusEvent events[] = {
        {.addr=0x291d, .value=0x84, .type=IO_READ},
        {.addr=0x291e, .value=0x7b, .type=IO_READ},
        {.addr=0x017b, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0112) {
    const struct CPU_State initial_cpu = {.pc=0xce92, .a=0x4e, .x=0x91, .y=0x96, .sp=0xe5, .status=0x5a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0014, .value=0x3c}, {.addr=0xce92, .value=0x84}, {.addr=0xce93, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0xce94, .a=0x8a, .x=0x91, .y=0x96, .sp=0xe5, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0014, .value=0x3c}, {.addr=0xce92, .value=0x84}, {.addr=0xce93, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0xce92, .value=0x84, .type=IO_READ},
        {.addr=0xce93, .value=0x14, .type=IO_READ},
        {.addr=0x0014, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0113) {
    const struct CPU_State initial_cpu = {.pc=0xe0be, .a=0x6d, .x=0x38, .y=0x3d, .sp=0xe7, .status=0x05};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0003, .value=0x17}, {.addr=0xe0be, .value=0x84}, {.addr=0xe0bf, .value=0x03},
    };
    const struct CPU_State final_cpu = {.pc=0xe0c0, .a=0x85, .x=0x38, .y=0x3d, .sp=0xe7, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0003, .value=0x17}, {.addr=0xe0be, .value=0x84}, {.addr=0xe0bf, .value=0x03},
    };
    const struct BusEvent events[] = {
        {.addr=0xe0be, .value=0x84, .type=IO_READ},
        {.addr=0xe0bf, .value=0x03, .type=IO_READ},
        {.addr=0x0003, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0114) {
    const struct CPU_State initial_cpu = {.pc=0x38d7, .a=0x99, .x=0x76, .y=0x4c, .sp=0x70, .status=0x85};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0016, .value=0xa1}, {.addr=0x38d7, .value=0x84}, {.addr=0x38d8, .value=0x16},
    };
    const struct CPU_State final_cpu = {.pc=0x38d9, .a=0x3b, .x=0x76, .y=0x4c, .sp=0x70, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x0016, .value=0xa1}, {.addr=0x38d7, .value=0x84}, {.addr=0x38d8, .value=0x16},
    };
    const struct BusEvent events[] = {
        {.addr=0x38d7, .value=0x84, .type=IO_READ},
        {.addr=0x38d8, .value=0x16, .type=IO_READ},
        {.addr=0x0016, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0115) {
    const struct CPU_State initial_cpu = {.pc=0x106e, .a=0x28, .x=0x07, .y=0xa5, .sp=0x21, .status=0x25};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0157, .value=0x17}, {.addr=0x106e, .value=0x84}, {.addr=0x106f, .value=0x57},
    };
    const struct CPU_State final_cpu = {.pc=0x1070, .a=0x40, .x=0x07, .y=0xa5, .sp=0x21, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0157, .value=0x17}, {.addr=0x106e, .value=0x84}, {.addr=0x106f, .value=0x57},
    };
    const struct BusEvent events[] = {
        {.addr=0x106e, .value=0x84, .type=IO_READ},
        {.addr=0x106f, .value=0x57, .type=IO_READ},
        {.addr=0x0157, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0116) {
    const struct CPU_State initial_cpu = {.pc=0xff44, .a=0xa8, .x=0x80, .y=0x20, .sp=0x3f, .status=0x37};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0145, .value=0x6c}, {.addr=0xff44, .value=0x84}, {.addr=0xff45, .value=0x45},
    };
    const struct CPU_State final_cpu = {.pc=0xff46, .a=0x15, .x=0x80, .y=0x20, .sp=0x3f, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0145, .value=0x6c}, {.addr=0xff44, .value=0x84}, {.addr=0xff45, .value=0x45},
    };
    const struct BusEvent events[] = {
        {.addr=0xff44, .value=0x84, .type=IO_READ},
        {.addr=0xff45, .value=0x45, .type=IO_READ},
        {.addr=0x0145, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0117) {
    const struct CPU_State initial_cpu = {.pc=0x4527, .a=0x6e, .x=0x66, .y=0x09, .sp=0xbd, .status=0x4a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0050, .value=0x87}, {.addr=0x4527, .value=0x84}, {.addr=0x4528, .value=0x50},
    };
    const struct CPU_State final_cpu = {.pc=0x4529, .a=0xf5, .x=0x66, .y=0x09, .sp=0xbd, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x0050, .value=0x87}, {.addr=0x4527, .value=0x84}, {.addr=0x4528, .value=0x50},
    };
    const struct BusEvent events[] = {
        {.addr=0x4527, .value=0x84, .type=IO_READ},
        {.addr=0x4528, .value=0x50, .type=IO_READ},
        {.addr=0x0050, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0118) {
    const struct CPU_State initial_cpu = {.pc=0xf1e5, .a=0x0b, .x=0xef, .y=0xe9, .sp=0xa5, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0168, .value=0xf4}, {.addr=0xf1e5, .value=0x84}, {.addr=0xf1e6, .value=0x68},
    };
    const struct CPU_State final_cpu = {.pc=0xf1e7, .a=0xff, .x=0xef, .y=0xe9, .sp=0xa5, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0168, .value=0xf4}, {.addr=0xf1e5, .value=0x84}, {.addr=0xf1e6, .value=0x68},
    };
    const struct BusEvent events[] = {
        {.addr=0xf1e5, .value=0x84, .type=IO_READ},
        {.addr=0xf1e6, .value=0x68, .type=IO_READ},
        {.addr=0x0168, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0119) {
    const struct CPU_State initial_cpu = {.pc=0xa3ad, .a=0x7b, .x=0x9b, .y=0x99, .sp=0xd7, .status=0xa6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e4, .value=0xc8}, {.addr=0xa3ad, .value=0x84}, {.addr=0xa3ae, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0xa3af, .a=0x43, .x=0x9b, .y=0x99, .sp=0xd7, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e4, .value=0xc8}, {.addr=0xa3ad, .value=0x84}, {.addr=0xa3ae, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0xa3ad, .value=0x84, .type=IO_READ},
        {.addr=0xa3ae, .value=0xe4, .type=IO_READ},
        {.addr=0x01e4, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_011A) {
    const struct CPU_State initial_cpu = {.pc=0x78f6, .a=0xd5, .x=0x6e, .y=0x88, .sp=0xf8, .status=0xc6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006a, .value=0xca}, {.addr=0x78f6, .value=0x84}, {.addr=0x78f7, .value=0x6a},
    };
    const struct CPU_State final_cpu = {.pc=0x78f8, .a=0x9f, .x=0x6e, .y=0x88, .sp=0xf8, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x006a, .value=0xca}, {.addr=0x78f6, .value=0x84}, {.addr=0x78f7, .value=0x6a},
    };
    const struct BusEvent events[] = {
        {.addr=0x78f6, .value=0x84, .type=IO_READ},
        {.addr=0x78f7, .value=0x6a, .type=IO_READ},
        {.addr=0x006a, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_011B) {
    const struct CPU_State initial_cpu = {.pc=0x5417, .a=0x27, .x=0x12, .y=0xd9, .sp=0x39, .status=0x2a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0197, .value=0xe9}, {.addr=0x5417, .value=0x84}, {.addr=0x5418, .value=0x97},
    };
    const struct CPU_State final_cpu = {.pc=0x5419, .a=0x10, .x=0x12, .y=0xd9, .sp=0x39, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x0197, .value=0xe9}, {.addr=0x5417, .value=0x84}, {.addr=0x5418, .value=0x97},
    };
    const struct BusEvent events[] = {
        {.addr=0x5417, .value=0x84, .type=IO_READ},
        {.addr=0x5418, .value=0x97, .type=IO_READ},
        {.addr=0x0197, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_011C) {
    const struct CPU_State initial_cpu = {.pc=0xac36, .a=0x61, .x=0x1b, .y=0x07, .sp=0x9e, .status=0x64};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0174, .value=0x19}, {.addr=0xac36, .value=0x84}, {.addr=0xac37, .value=0x74},
    };
    const struct CPU_State final_cpu = {.pc=0xac38, .a=0x7a, .x=0x1b, .y=0x07, .sp=0x9e, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x0174, .value=0x19}, {.addr=0xac36, .value=0x84}, {.addr=0xac37, .value=0x74},
    };
    const struct BusEvent events[] = {
        {.addr=0xac36, .value=0x84, .type=IO_READ},
        {.addr=0xac37, .value=0x74, .type=IO_READ},
        {.addr=0x0174, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_011D) {
    const struct CPU_State initial_cpu = {.pc=0x765d, .a=0xb3, .x=0xd6, .y=0xdb, .sp=0x8f, .status=0x6f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ea, .value=0x81}, {.addr=0x765d, .value=0x84}, {.addr=0x765e, .value=0xea},
    };
    const struct CPU_State final_cpu = {.pc=0x765f, .a=0x35, .x=0xd6, .y=0xdb, .sp=0x8f, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ea, .value=0x81}, {.addr=0x765d, .value=0x84}, {.addr=0x765e, .value=0xea},
    };
    const struct BusEvent events[] = {
        {.addr=0x765d, .value=0x84, .type=IO_READ},
        {.addr=0x765e, .value=0xea, .type=IO_READ},
        {.addr=0x01ea, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_011E) {
    const struct CPU_State initial_cpu = {.pc=0x4aa9, .a=0x8c, .x=0x40, .y=0xd0, .sp=0xa0, .status=0x6a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010f, .value=0xec}, {.addr=0x4aa9, .value=0x84}, {.addr=0x4aaa, .value=0x0f},
    };
    const struct CPU_State final_cpu = {.pc=0x4aab, .a=0x78, .x=0x40, .y=0xd0, .sp=0xa0, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x010f, .value=0xec}, {.addr=0x4aa9, .value=0x84}, {.addr=0x4aaa, .value=0x0f},
    };
    const struct BusEvent events[] = {
        {.addr=0x4aa9, .value=0x84, .type=IO_READ},
        {.addr=0x4aaa, .value=0x0f, .type=IO_READ},
        {.addr=0x010f, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_011F) {
    const struct CPU_State initial_cpu = {.pc=0x0fa8, .a=0x80, .x=0x9f, .y=0x71, .sp=0x0b, .status=0x06};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0066, .value=0xab}, {.addr=0x0fa8, .value=0x84}, {.addr=0x0fa9, .value=0x66},
    };
    const struct CPU_State final_cpu = {.pc=0x0faa, .a=0x2b, .x=0x9f, .y=0x71, .sp=0x0b, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x0066, .value=0xab}, {.addr=0x0fa8, .value=0x84}, {.addr=0x0fa9, .value=0x66},
    };
    const struct BusEvent events[] = {
        {.addr=0x0fa8, .value=0x84, .type=IO_READ},
        {.addr=0x0fa9, .value=0x66, .type=IO_READ},
        {.addr=0x0066, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0120) {
    const struct CPU_State initial_cpu = {.pc=0xf730, .a=0x4f, .x=0x50, .y=0x9b, .sp=0x74, .status=0xdf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0009, .value=0x94}, {.addr=0xf730, .value=0x84}, {.addr=0xf731, .value=0x09},
    };
    const struct CPU_State final_cpu = {.pc=0xf732, .a=0xe4, .x=0x50, .y=0x9b, .sp=0x74, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0009, .value=0x94}, {.addr=0xf730, .value=0x84}, {.addr=0xf731, .value=0x09},
    };
    const struct BusEvent events[] = {
        {.addr=0xf730, .value=0x84, .type=IO_READ},
        {.addr=0xf731, .value=0x09, .type=IO_READ},
        {.addr=0x0009, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0121) {
    const struct CPU_State initial_cpu = {.pc=0x25b0, .a=0x97, .x=0x7a, .y=0x36, .sp=0x26, .status=0x0d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0026, .value=0xa2}, {.addr=0x25b0, .value=0x84}, {.addr=0x25b1, .value=0x26},
    };
    const struct CPU_State final_cpu = {.pc=0x25b2, .a=0x3a, .x=0x7a, .y=0x36, .sp=0x26, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x0026, .value=0xa2}, {.addr=0x25b0, .value=0x84}, {.addr=0x25b1, .value=0x26},
    };
    const struct BusEvent events[] = {
        {.addr=0x25b0, .value=0x84, .type=IO_READ},
        {.addr=0x25b1, .value=0x26, .type=IO_READ},
        {.addr=0x0026, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0122) {
    const struct CPU_State initial_cpu = {.pc=0x63b1, .a=0xcd, .x=0xe7, .y=0xbc, .sp=0x2c, .status=0xf0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0124, .value=0x03}, {.addr=0x63b1, .value=0x84}, {.addr=0x63b2, .value=0x24},
    };
    const struct CPU_State final_cpu = {.pc=0x63b3, .a=0xd0, .x=0xe7, .y=0xbc, .sp=0x2c, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0124, .value=0x03}, {.addr=0x63b1, .value=0x84}, {.addr=0x63b2, .value=0x24},
    };
    const struct BusEvent events[] = {
        {.addr=0x63b1, .value=0x84, .type=IO_READ},
        {.addr=0x63b2, .value=0x24, .type=IO_READ},
        {.addr=0x0124, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0123) {
    const struct CPU_State initial_cpu = {.pc=0xb849, .a=0x8e, .x=0x21, .y=0xcc, .sp=0x9c, .status=0xac};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c1, .value=0xf2}, {.addr=0xb849, .value=0x84}, {.addr=0xb84a, .value=0xc1},
    };
    const struct CPU_State final_cpu = {.pc=0xb84b, .a=0x80, .x=0x21, .y=0xcc, .sp=0x9c, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c1, .value=0xf2}, {.addr=0xb849, .value=0x84}, {.addr=0xb84a, .value=0xc1},
    };
    const struct BusEvent events[] = {
        {.addr=0xb849, .value=0x84, .type=IO_READ},
        {.addr=0xb84a, .value=0xc1, .type=IO_READ},
        {.addr=0x01c1, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0124) {
    const struct CPU_State initial_cpu = {.pc=0x0a54, .a=0x5c, .x=0x64, .y=0x91, .sp=0xa4, .status=0xde};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009d, .value=0xa7}, {.addr=0x0a54, .value=0x84}, {.addr=0x0a55, .value=0x9d},
    };
    const struct CPU_State final_cpu = {.pc=0x0a56, .a=0x03, .x=0x64, .y=0x91, .sp=0xa4, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x009d, .value=0xa7}, {.addr=0x0a54, .value=0x84}, {.addr=0x0a55, .value=0x9d},
    };
    const struct BusEvent events[] = {
        {.addr=0x0a54, .value=0x84, .type=IO_READ},
        {.addr=0x0a55, .value=0x9d, .type=IO_READ},
        {.addr=0x009d, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0125) {
    const struct CPU_State initial_cpu = {.pc=0xffdc, .a=0xae, .x=0x31, .y=0x5e, .sp=0x25, .status=0x1d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0044, .value=0x7b}, {.addr=0xffdc, .value=0x84}, {.addr=0xffdd, .value=0x44},
    };
    const struct CPU_State final_cpu = {.pc=0xffde, .a=0x2a, .x=0x31, .y=0x5e, .sp=0x25, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0044, .value=0x7b}, {.addr=0xffdc, .value=0x84}, {.addr=0xffdd, .value=0x44},
    };
    const struct BusEvent events[] = {
        {.addr=0xffdc, .value=0x84, .type=IO_READ},
        {.addr=0xffdd, .value=0x44, .type=IO_READ},
        {.addr=0x0044, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0127) {
    const struct CPU_State initial_cpu = {.pc=0x8b4d, .a=0xcb, .x=0x93, .y=0x2b, .sp=0x9e, .status=0xd0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0081, .value=0x3b}, {.addr=0x8b4d, .value=0x84}, {.addr=0x8b4e, .value=0x81},
    };
    const struct CPU_State final_cpu = {.pc=0x8b4f, .a=0x06, .x=0x93, .y=0x2b, .sp=0x9e, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x0081, .value=0x3b}, {.addr=0x8b4d, .value=0x84}, {.addr=0x8b4e, .value=0x81},
    };
    const struct BusEvent events[] = {
        {.addr=0x8b4d, .value=0x84, .type=IO_READ},
        {.addr=0x8b4e, .value=0x81, .type=IO_READ},
        {.addr=0x0081, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0128) {
    const struct CPU_State initial_cpu = {.pc=0xd180, .a=0x26, .x=0x5b, .y=0xd5, .sp=0x2b, .status=0xac};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015b, .value=0x43}, {.addr=0xd180, .value=0x84}, {.addr=0xd181, .value=0x5b},
    };
    const struct CPU_State final_cpu = {.pc=0xd182, .a=0x69, .x=0x5b, .y=0xd5, .sp=0x2b, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x015b, .value=0x43}, {.addr=0xd180, .value=0x84}, {.addr=0xd181, .value=0x5b},
    };
    const struct BusEvent events[] = {
        {.addr=0xd180, .value=0x84, .type=IO_READ},
        {.addr=0xd181, .value=0x5b, .type=IO_READ},
        {.addr=0x015b, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0129) {
    const struct CPU_State initial_cpu = {.pc=0xf822, .a=0x1d, .x=0x0f, .y=0x0d, .sp=0x24, .status=0x21};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e5, .value=0x98}, {.addr=0xf822, .value=0x84}, {.addr=0xf823, .value=0xe5},
    };
    const struct CPU_State final_cpu = {.pc=0xf824, .a=0xb6, .x=0x0f, .y=0x0d, .sp=0x24, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e5, .value=0x98}, {.addr=0xf822, .value=0x84}, {.addr=0xf823, .value=0xe5},
    };
    const struct BusEvent events[] = {
        {.addr=0xf822, .value=0x84, .type=IO_READ},
        {.addr=0xf823, .value=0xe5, .type=IO_READ},
        {.addr=0x01e5, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_012A) {
    const struct CPU_State initial_cpu = {.pc=0x740c, .a=0x5b, .x=0xc4, .y=0xed, .sp=0x1f, .status=0xf6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0100, .value=0xdd}, {.addr=0x740c, .value=0x84}, {.addr=0x740d, .value=0x00},
    };
    const struct CPU_State final_cpu = {.pc=0x740e, .a=0x38, .x=0xc4, .y=0xed, .sp=0x1f, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0100, .value=0xdd}, {.addr=0x740c, .value=0x84}, {.addr=0x740d, .value=0x00},
    };
    const struct BusEvent events[] = {
        {.addr=0x740c, .value=0x84, .type=IO_READ},
        {.addr=0x740d, .value=0x00, .type=IO_READ},
        {.addr=0x0100, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_012B) {
    const struct CPU_State initial_cpu = {.pc=0x2e4b, .a=0x07, .x=0x4e, .y=0x9d, .sp=0xd3, .status=0x85};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003f, .value=0xd9}, {.addr=0x2e4b, .value=0x84}, {.addr=0x2e4c, .value=0x3f},
    };
    const struct CPU_State final_cpu = {.pc=0x2e4d, .a=0xe1, .x=0x4e, .y=0x9d, .sp=0xd3, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x003f, .value=0xd9}, {.addr=0x2e4b, .value=0x84}, {.addr=0x2e4c, .value=0x3f},
    };
    const struct BusEvent events[] = {
        {.addr=0x2e4b, .value=0x84, .type=IO_READ},
        {.addr=0x2e4c, .value=0x3f, .type=IO_READ},
        {.addr=0x003f, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_012C) {
    const struct CPU_State initial_cpu = {.pc=0xf4a9, .a=0x27, .x=0x48, .y=0xeb, .sp=0x5f, .status=0xdd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004f, .value=0xfd}, {.addr=0xf4a9, .value=0x84}, {.addr=0xf4aa, .value=0x4f},
    };
    const struct CPU_State final_cpu = {.pc=0xf4ab, .a=0x25, .x=0x48, .y=0xeb, .sp=0x5f, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x004f, .value=0xfd}, {.addr=0xf4a9, .value=0x84}, {.addr=0xf4aa, .value=0x4f},
    };
    const struct BusEvent events[] = {
        {.addr=0xf4a9, .value=0x84, .type=IO_READ},
        {.addr=0xf4aa, .value=0x4f, .type=IO_READ},
        {.addr=0x004f, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_012D) {
    const struct CPU_State initial_cpu = {.pc=0x3ab2, .a=0xdb, .x=0xb7, .y=0xca, .sp=0x9c, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c5, .value=0x95}, {.addr=0x3ab2, .value=0x84}, {.addr=0x3ab3, .value=0xc5},
    };
    const struct CPU_State final_cpu = {.pc=0x3ab4, .a=0x70, .x=0xb7, .y=0xca, .sp=0x9c, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c5, .value=0x95}, {.addr=0x3ab2, .value=0x84}, {.addr=0x3ab3, .value=0xc5},
    };
    const struct BusEvent events[] = {
        {.addr=0x3ab2, .value=0x84, .type=IO_READ},
        {.addr=0x3ab3, .value=0xc5, .type=IO_READ},
        {.addr=0x00c5, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_012E) {
    const struct CPU_State initial_cpu = {.pc=0x3cb0, .a=0x0c, .x=0x5c, .y=0x00, .sp=0x77, .status=0xf8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0146, .value=0xc0}, {.addr=0x3cb0, .value=0x84}, {.addr=0x3cb1, .value=0x46},
    };
    const struct CPU_State final_cpu = {.pc=0x3cb2, .a=0xcc, .x=0x5c, .y=0x00, .sp=0x77, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0146, .value=0xc0}, {.addr=0x3cb0, .value=0x84}, {.addr=0x3cb1, .value=0x46},
    };
    const struct BusEvent events[] = {
        {.addr=0x3cb0, .value=0x84, .type=IO_READ},
        {.addr=0x3cb1, .value=0x46, .type=IO_READ},
        {.addr=0x0146, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_012F) {
    const struct CPU_State initial_cpu = {.pc=0xa50c, .a=0x43, .x=0x4a, .y=0x1d, .sp=0x55, .status=0xf4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0120, .value=0x7d}, {.addr=0xa50c, .value=0x84}, {.addr=0xa50d, .value=0x20},
    };
    const struct CPU_State final_cpu = {.pc=0xa50e, .a=0xc0, .x=0x4a, .y=0x1d, .sp=0x55, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0120, .value=0x7d}, {.addr=0xa50c, .value=0x84}, {.addr=0xa50d, .value=0x20},
    };
    const struct BusEvent events[] = {
        {.addr=0xa50c, .value=0x84, .type=IO_READ},
        {.addr=0xa50d, .value=0x20, .type=IO_READ},
        {.addr=0x0120, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0130) {
    const struct CPU_State initial_cpu = {.pc=0xd1ab, .a=0x1e, .x=0xc6, .y=0x59, .sp=0x04, .status=0x10};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0001, .value=0x00}, {.addr=0xd1ab, .value=0x84}, {.addr=0xd1ac, .value=0x01},
    };
    const struct CPU_State final_cpu = {.pc=0xd1ad, .a=0x1e, .x=0xc6, .y=0x59, .sp=0x04, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x0001, .value=0x00}, {.addr=0xd1ab, .value=0x84}, {.addr=0xd1ac, .value=0x01},
    };
    const struct BusEvent events[] = {
        {.addr=0xd1ab, .value=0x84, .type=IO_READ},
        {.addr=0xd1ac, .value=0x01, .type=IO_READ},
        {.addr=0x0001, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0131) {
    const struct CPU_State initial_cpu = {.pc=0x8aae, .a=0x93, .x=0x42, .y=0xc5, .sp=0x55, .status=0x9f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0075, .value=0x5d}, {.addr=0x8aae, .value=0x84}, {.addr=0x8aaf, .value=0x75},
    };
    const struct CPU_State final_cpu = {.pc=0x8ab0, .a=0xf1, .x=0x42, .y=0xc5, .sp=0x55, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0075, .value=0x5d}, {.addr=0x8aae, .value=0x84}, {.addr=0x8aaf, .value=0x75},
    };
    const struct BusEvent events[] = {
        {.addr=0x8aae, .value=0x84, .type=IO_READ},
        {.addr=0x8aaf, .value=0x75, .type=IO_READ},
        {.addr=0x0075, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0132) {
    const struct CPU_State initial_cpu = {.pc=0xa48d, .a=0x58, .x=0xaf, .y=0x03, .sp=0xd4, .status=0x51};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cd, .value=0xd1}, {.addr=0xa48d, .value=0x84}, {.addr=0xa48e, .value=0xcd},
    };
    const struct CPU_State final_cpu = {.pc=0xa48f, .a=0x2a, .x=0xaf, .y=0x03, .sp=0xd4, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cd, .value=0xd1}, {.addr=0xa48d, .value=0x84}, {.addr=0xa48e, .value=0xcd},
    };
    const struct BusEvent events[] = {
        {.addr=0xa48d, .value=0x84, .type=IO_READ},
        {.addr=0xa48e, .value=0xcd, .type=IO_READ},
        {.addr=0x00cd, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0133) {
    const struct CPU_State initial_cpu = {.pc=0x7534, .a=0x51, .x=0xb3, .y=0x2a, .sp=0xad, .status=0xdb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e0, .value=0x14}, {.addr=0x7534, .value=0x84}, {.addr=0x7535, .value=0xe0},
    };
    const struct CPU_State final_cpu = {.pc=0x7536, .a=0x66, .x=0xb3, .y=0x2a, .sp=0xad, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e0, .value=0x14}, {.addr=0x7534, .value=0x84}, {.addr=0x7535, .value=0xe0},
    };
    const struct BusEvent events[] = {
        {.addr=0x7534, .value=0x84, .type=IO_READ},
        {.addr=0x7535, .value=0xe0, .type=IO_READ},
        {.addr=0x00e0, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0134) {
    const struct CPU_State initial_cpu = {.pc=0x3408, .a=0xdd, .x=0x5f, .y=0xcc, .sp=0xe6, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ed, .value=0x3e}, {.addr=0x3408, .value=0x84}, {.addr=0x3409, .value=0xed},
    };
    const struct CPU_State final_cpu = {.pc=0x340a, .a=0x1b, .x=0x5f, .y=0xcc, .sp=0xe6, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ed, .value=0x3e}, {.addr=0x3408, .value=0x84}, {.addr=0x3409, .value=0xed},
    };
    const struct BusEvent events[] = {
        {.addr=0x3408, .value=0x84, .type=IO_READ},
        {.addr=0x3409, .value=0xed, .type=IO_READ},
        {.addr=0x00ed, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0135) {
    const struct CPU_State initial_cpu = {.pc=0x9d57, .a=0x8c, .x=0x47, .y=0xb7, .sp=0xb9, .status=0x9d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cd, .value=0xb8}, {.addr=0x9d57, .value=0x84}, {.addr=0x9d58, .value=0xcd},
    };
    const struct CPU_State final_cpu = {.pc=0x9d59, .a=0x45, .x=0x47, .y=0xb7, .sp=0xb9, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cd, .value=0xb8}, {.addr=0x9d57, .value=0x84}, {.addr=0x9d58, .value=0xcd},
    };
    const struct BusEvent events[] = {
        {.addr=0x9d57, .value=0x84, .type=IO_READ},
        {.addr=0x9d58, .value=0xcd, .type=IO_READ},
        {.addr=0x00cd, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0136) {
    const struct CPU_State initial_cpu = {.pc=0x75f0, .a=0x9d, .x=0xea, .y=0xde, .sp=0x59, .status=0xd1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0086, .value=0x5a}, {.addr=0x75f0, .value=0x84}, {.addr=0x75f1, .value=0x86},
    };
    const struct CPU_State final_cpu = {.pc=0x75f2, .a=0xf8, .x=0xea, .y=0xde, .sp=0x59, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x0086, .value=0x5a}, {.addr=0x75f0, .value=0x84}, {.addr=0x75f1, .value=0x86},
    };
    const struct BusEvent events[] = {
        {.addr=0x75f0, .value=0x84, .type=IO_READ},
        {.addr=0x75f1, .value=0x86, .type=IO_READ},
        {.addr=0x0086, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0137) {
    const struct CPU_State initial_cpu = {.pc=0x90a9, .a=0x19, .x=0x6b, .y=0xac, .sp=0xaf, .status=0x52};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00be, .value=0x7d}, {.addr=0x90a9, .value=0x84}, {.addr=0x90aa, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0x90ab, .a=0x96, .x=0x6b, .y=0xac, .sp=0xaf, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00be, .value=0x7d}, {.addr=0x90a9, .value=0x84}, {.addr=0x90aa, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0x90a9, .value=0x84, .type=IO_READ},
        {.addr=0x90aa, .value=0xbe, .type=IO_READ},
        {.addr=0x00be, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0138) {
    const struct CPU_State initial_cpu = {.pc=0xac28, .a=0xf4, .x=0x33, .y=0x26, .sp=0xc3, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015f, .value=0x1c}, {.addr=0xac28, .value=0x84}, {.addr=0xac29, .value=0x5f},
    };
    const struct CPU_State final_cpu = {.pc=0xac2a, .a=0x10, .x=0x33, .y=0x26, .sp=0xc3, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x015f, .value=0x1c}, {.addr=0xac28, .value=0x84}, {.addr=0xac29, .value=0x5f},
    };
    const struct BusEvent events[] = {
        {.addr=0xac28, .value=0x84, .type=IO_READ},
        {.addr=0xac29, .value=0x5f, .type=IO_READ},
        {.addr=0x015f, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0139) {
    const struct CPU_State initial_cpu = {.pc=0xb651, .a=0xc5, .x=0x95, .y=0xa1, .sp=0xe9, .status=0x0c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0004, .value=0x98}, {.addr=0xb651, .value=0x84}, {.addr=0xb652, .value=0x04},
    };
    const struct CPU_State final_cpu = {.pc=0xb653, .a=0x5d, .x=0x95, .y=0xa1, .sp=0xe9, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x0004, .value=0x98}, {.addr=0xb651, .value=0x84}, {.addr=0xb652, .value=0x04},
    };
    const struct BusEvent events[] = {
        {.addr=0xb651, .value=0x84, .type=IO_READ},
        {.addr=0xb652, .value=0x04, .type=IO_READ},
        {.addr=0x0004, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_013A) {
    const struct CPU_State initial_cpu = {.pc=0x8f40, .a=0x50, .x=0x0c, .y=0x61, .sp=0x5b, .status=0x4a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00df, .value=0x8f}, {.addr=0x8f40, .value=0x84}, {.addr=0x8f41, .value=0xdf},
    };
    const struct CPU_State final_cpu = {.pc=0x8f42, .a=0xdf, .x=0x0c, .y=0x61, .sp=0x5b, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x00df, .value=0x8f}, {.addr=0x8f40, .value=0x84}, {.addr=0x8f41, .value=0xdf},
    };
    const struct BusEvent events[] = {
        {.addr=0x8f40, .value=0x84, .type=IO_READ},
        {.addr=0x8f41, .value=0xdf, .type=IO_READ},
        {.addr=0x00df, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_013B) {
    const struct CPU_State initial_cpu = {.pc=0xc4e3, .a=0x39, .x=0xc3, .y=0x09, .sp=0xc6, .status=0x02};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0075, .value=0xb2}, {.addr=0xc4e3, .value=0x84}, {.addr=0xc4e4, .value=0x75},
    };
    const struct CPU_State final_cpu = {.pc=0xc4e5, .a=0xeb, .x=0xc3, .y=0x09, .sp=0xc6, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x0075, .value=0xb2}, {.addr=0xc4e3, .value=0x84}, {.addr=0xc4e4, .value=0x75},
    };
    const struct BusEvent events[] = {
        {.addr=0xc4e3, .value=0x84, .type=IO_READ},
        {.addr=0xc4e4, .value=0x75, .type=IO_READ},
        {.addr=0x0075, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_013C) {
    const struct CPU_State initial_cpu = {.pc=0x47f7, .a=0xd0, .x=0xa4, .y=0xf7, .sp=0x44, .status=0x53};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d2, .value=0xed}, {.addr=0x47f7, .value=0x84}, {.addr=0x47f8, .value=0xd2},
    };
    const struct CPU_State final_cpu = {.pc=0x47f9, .a=0xbe, .x=0xa4, .y=0xf7, .sp=0x44, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d2, .value=0xed}, {.addr=0x47f7, .value=0x84}, {.addr=0x47f8, .value=0xd2},
    };
    const struct BusEvent events[] = {
        {.addr=0x47f7, .value=0x84, .type=IO_READ},
        {.addr=0x47f8, .value=0xd2, .type=IO_READ},
        {.addr=0x00d2, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_013D) {
    const struct CPU_State initial_cpu = {.pc=0xb6ad, .a=0x8c, .x=0x23, .y=0x2e, .sp=0x78, .status=0x25};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0100, .value=0x2c}, {.addr=0xb6ad, .value=0x84}, {.addr=0xb6ae, .value=0x00},
    };
    const struct CPU_State final_cpu = {.pc=0xb6af, .a=0xb9, .x=0x23, .y=0x2e, .sp=0x78, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0100, .value=0x2c}, {.addr=0xb6ad, .value=0x84}, {.addr=0xb6ae, .value=0x00},
    };
    const struct BusEvent events[] = {
        {.addr=0xb6ad, .value=0x84, .type=IO_READ},
        {.addr=0xb6ae, .value=0x00, .type=IO_READ},
        {.addr=0x0100, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_013E) {
    const struct CPU_State initial_cpu = {.pc=0xeef1, .a=0x0f, .x=0xf8, .y=0xd6, .sp=0xf9, .status=0x45};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000d, .value=0x83}, {.addr=0xeef1, .value=0x84}, {.addr=0xeef2, .value=0x0d},
    };
    const struct CPU_State final_cpu = {.pc=0xeef3, .a=0x93, .x=0xf8, .y=0xd6, .sp=0xf9, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x000d, .value=0x83}, {.addr=0xeef1, .value=0x84}, {.addr=0xeef2, .value=0x0d},
    };
    const struct BusEvent events[] = {
        {.addr=0xeef1, .value=0x84, .type=IO_READ},
        {.addr=0xeef2, .value=0x0d, .type=IO_READ},
        {.addr=0x000d, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_013F) {
    const struct CPU_State initial_cpu = {.pc=0xb91f, .a=0x4e, .x=0x1f, .y=0x87, .sp=0x83, .status=0x42};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b0, .value=0x62}, {.addr=0xb91f, .value=0x84}, {.addr=0xb920, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0xb921, .a=0xb0, .x=0x1f, .y=0x87, .sp=0x83, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b0, .value=0x62}, {.addr=0xb91f, .value=0x84}, {.addr=0xb920, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0xb91f, .value=0x84, .type=IO_READ},
        {.addr=0xb920, .value=0xb0, .type=IO_READ},
        {.addr=0x00b0, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0140) {
    const struct CPU_State initial_cpu = {.pc=0x5347, .a=0xa0, .x=0x47, .y=0xcb, .sp=0x4a, .status=0x3e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0161, .value=0xda}, {.addr=0x5347, .value=0x84}, {.addr=0x5348, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0x5349, .a=0x7a, .x=0x47, .y=0xcb, .sp=0x4a, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x0161, .value=0xda}, {.addr=0x5347, .value=0x84}, {.addr=0x5348, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0x5347, .value=0x84, .type=IO_READ},
        {.addr=0x5348, .value=0x61, .type=IO_READ},
        {.addr=0x0161, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0141) {
    const struct CPU_State initial_cpu = {.pc=0xdc0d, .a=0x73, .x=0x98, .y=0x8b, .sp=0x65, .status=0x86};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004b, .value=0xd4}, {.addr=0xdc0d, .value=0x84}, {.addr=0xdc0e, .value=0x4b},
    };
    const struct CPU_State final_cpu = {.pc=0xdc0f, .a=0x47, .x=0x98, .y=0x8b, .sp=0x65, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x004b, .value=0xd4}, {.addr=0xdc0d, .value=0x84}, {.addr=0xdc0e, .value=0x4b},
    };
    const struct BusEvent events[] = {
        {.addr=0xdc0d, .value=0x84, .type=IO_READ},
        {.addr=0xdc0e, .value=0x4b, .type=IO_READ},
        {.addr=0x004b, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0142) {
    const struct CPU_State initial_cpu = {.pc=0x9e4c, .a=0xf8, .x=0x43, .y=0xf6, .sp=0xcd, .status=0x9a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004d, .value=0x2a}, {.addr=0x9e4c, .value=0x84}, {.addr=0x9e4d, .value=0x4d},
    };
    const struct CPU_State final_cpu = {.pc=0x9e4e, .a=0x22, .x=0x43, .y=0xf6, .sp=0xcd, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x004d, .value=0x2a}, {.addr=0x9e4c, .value=0x84}, {.addr=0x9e4d, .value=0x4d},
    };
    const struct BusEvent events[] = {
        {.addr=0x9e4c, .value=0x84, .type=IO_READ},
        {.addr=0x9e4d, .value=0x4d, .type=IO_READ},
        {.addr=0x004d, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0143) {
    const struct CPU_State initial_cpu = {.pc=0x2c8d, .a=0x80, .x=0x64, .y=0x0e, .sp=0x44, .status=0xfe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0126, .value=0x60}, {.addr=0x2c8d, .value=0x84}, {.addr=0x2c8e, .value=0x26},
    };
    const struct CPU_State final_cpu = {.pc=0x2c8f, .a=0xe0, .x=0x64, .y=0x0e, .sp=0x44, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0126, .value=0x60}, {.addr=0x2c8d, .value=0x84}, {.addr=0x2c8e, .value=0x26},
    };
    const struct BusEvent events[] = {
        {.addr=0x2c8d, .value=0x84, .type=IO_READ},
        {.addr=0x2c8e, .value=0x26, .type=IO_READ},
        {.addr=0x0126, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0144) {
    const struct CPU_State initial_cpu = {.pc=0x5d71, .a=0x4d, .x=0xa4, .y=0x1b, .sp=0x92, .status=0x7c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c8, .value=0x34}, {.addr=0x5d71, .value=0x84}, {.addr=0x5d72, .value=0xc8},
    };
    const struct CPU_State final_cpu = {.pc=0x5d73, .a=0x81, .x=0xa4, .y=0x1b, .sp=0x92, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c8, .value=0x34}, {.addr=0x5d71, .value=0x84}, {.addr=0x5d72, .value=0xc8},
    };
    const struct BusEvent events[] = {
        {.addr=0x5d71, .value=0x84, .type=IO_READ},
        {.addr=0x5d72, .value=0xc8, .type=IO_READ},
        {.addr=0x01c8, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0145) {
    const struct CPU_State initial_cpu = {.pc=0x9b46, .a=0x8e, .x=0xb8, .y=0x20, .sp=0xa5, .status=0x10};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0070, .value=0xb5}, {.addr=0x9b46, .value=0x84}, {.addr=0x9b47, .value=0x70},
    };
    const struct CPU_State final_cpu = {.pc=0x9b48, .a=0x43, .x=0xb8, .y=0x20, .sp=0xa5, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x0070, .value=0xb5}, {.addr=0x9b46, .value=0x84}, {.addr=0x9b47, .value=0x70},
    };
    const struct BusEvent events[] = {
        {.addr=0x9b46, .value=0x84, .type=IO_READ},
        {.addr=0x9b47, .value=0x70, .type=IO_READ},
        {.addr=0x0070, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0146) {
    const struct CPU_State initial_cpu = {.pc=0xa4b6, .a=0xd9, .x=0x04, .y=0x81, .sp=0x5d, .status=0xce};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003b, .value=0x66}, {.addr=0xa4b6, .value=0x84}, {.addr=0xa4b7, .value=0x3b},
    };
    const struct CPU_State final_cpu = {.pc=0xa4b8, .a=0x3f, .x=0x04, .y=0x81, .sp=0x5d, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x003b, .value=0x66}, {.addr=0xa4b6, .value=0x84}, {.addr=0xa4b7, .value=0x3b},
    };
    const struct BusEvent events[] = {
        {.addr=0xa4b6, .value=0x84, .type=IO_READ},
        {.addr=0xa4b7, .value=0x3b, .type=IO_READ},
        {.addr=0x003b, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0147) {
    const struct CPU_State initial_cpu = {.pc=0x20f2, .a=0xcd, .x=0x3e, .y=0x5f, .sp=0x6d, .status=0xf5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012c, .value=0x6f}, {.addr=0x20f2, .value=0x84}, {.addr=0x20f3, .value=0x2c},
    };
    const struct CPU_State final_cpu = {.pc=0x20f4, .a=0x3d, .x=0x3e, .y=0x5f, .sp=0x6d, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x012c, .value=0x6f}, {.addr=0x20f2, .value=0x84}, {.addr=0x20f3, .value=0x2c},
    };
    const struct BusEvent events[] = {
        {.addr=0x20f2, .value=0x84, .type=IO_READ},
        {.addr=0x20f3, .value=0x2c, .type=IO_READ},
        {.addr=0x012c, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0148) {
    const struct CPU_State initial_cpu = {.pc=0x6896, .a=0x8e, .x=0xb1, .y=0xbd, .sp=0x52, .status=0xbe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017a, .value=0x44}, {.addr=0x6896, .value=0x84}, {.addr=0x6897, .value=0x7a},
    };
    const struct CPU_State final_cpu = {.pc=0x6898, .a=0xd2, .x=0xb1, .y=0xbd, .sp=0x52, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x017a, .value=0x44}, {.addr=0x6896, .value=0x84}, {.addr=0x6897, .value=0x7a},
    };
    const struct BusEvent events[] = {
        {.addr=0x6896, .value=0x84, .type=IO_READ},
        {.addr=0x6897, .value=0x7a, .type=IO_READ},
        {.addr=0x017a, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0149) {
    const struct CPU_State initial_cpu = {.pc=0x3e4e, .a=0x4b, .x=0x58, .y=0xed, .sp=0x56, .status=0xd3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b0, .value=0x74}, {.addr=0x3e4e, .value=0x84}, {.addr=0x3e4f, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0x3e50, .a=0xc0, .x=0x58, .y=0xed, .sp=0x56, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b0, .value=0x74}, {.addr=0x3e4e, .value=0x84}, {.addr=0x3e4f, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0x3e4e, .value=0x84, .type=IO_READ},
        {.addr=0x3e4f, .value=0xb0, .type=IO_READ},
        {.addr=0x00b0, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_014A) {
    const struct CPU_State initial_cpu = {.pc=0x1f0e, .a=0x2b, .x=0xc2, .y=0x98, .sp=0x67, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d9, .value=0x86}, {.addr=0x1f0e, .value=0x84}, {.addr=0x1f0f, .value=0xd9},
    };
    const struct CPU_State final_cpu = {.pc=0x1f10, .a=0xb1, .x=0xc2, .y=0x98, .sp=0x67, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d9, .value=0x86}, {.addr=0x1f0e, .value=0x84}, {.addr=0x1f0f, .value=0xd9},
    };
    const struct BusEvent events[] = {
        {.addr=0x1f0e, .value=0x84, .type=IO_READ},
        {.addr=0x1f0f, .value=0xd9, .type=IO_READ},
        {.addr=0x00d9, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_014B) {
    const struct CPU_State initial_cpu = {.pc=0x7c8e, .a=0xfd, .x=0xd7, .y=0x14, .sp=0x5d, .status=0xce};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002a, .value=0x1e}, {.addr=0x7c8e, .value=0x84}, {.addr=0x7c8f, .value=0x2a},
    };
    const struct CPU_State final_cpu = {.pc=0x7c90, .a=0x1b, .x=0xd7, .y=0x14, .sp=0x5d, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x002a, .value=0x1e}, {.addr=0x7c8e, .value=0x84}, {.addr=0x7c8f, .value=0x2a},
    };
    const struct BusEvent events[] = {
        {.addr=0x7c8e, .value=0x84, .type=IO_READ},
        {.addr=0x7c8f, .value=0x2a, .type=IO_READ},
        {.addr=0x002a, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_014C) {
    const struct CPU_State initial_cpu = {.pc=0x2233, .a=0x36, .x=0x70, .y=0x04, .sp=0x8a, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012f, .value=0xbd}, {.addr=0x2233, .value=0x84}, {.addr=0x2234, .value=0x2f},
    };
    const struct CPU_State final_cpu = {.pc=0x2235, .a=0xf3, .x=0x70, .y=0x04, .sp=0x8a, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x012f, .value=0xbd}, {.addr=0x2233, .value=0x84}, {.addr=0x2234, .value=0x2f},
    };
    const struct BusEvent events[] = {
        {.addr=0x2233, .value=0x84, .type=IO_READ},
        {.addr=0x2234, .value=0x2f, .type=IO_READ},
        {.addr=0x012f, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_014D) {
    const struct CPU_State initial_cpu = {.pc=0xf4f5, .a=0x83, .x=0xc3, .y=0xf3, .sp=0x6c, .status=0xd4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003f, .value=0xa9}, {.addr=0xf4f5, .value=0x84}, {.addr=0xf4f6, .value=0x3f},
    };
    const struct CPU_State final_cpu = {.pc=0xf4f7, .a=0x2c, .x=0xc3, .y=0xf3, .sp=0x6c, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x003f, .value=0xa9}, {.addr=0xf4f5, .value=0x84}, {.addr=0xf4f6, .value=0x3f},
    };
    const struct BusEvent events[] = {
        {.addr=0xf4f5, .value=0x84, .type=IO_READ},
        {.addr=0xf4f6, .value=0x3f, .type=IO_READ},
        {.addr=0x003f, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_014E) {
    const struct CPU_State initial_cpu = {.pc=0x7653, .a=0x65, .x=0x49, .y=0x30, .sp=0xb0, .status=0x22};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018f, .value=0xf6}, {.addr=0x7653, .value=0x84}, {.addr=0x7654, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0x7655, .a=0x5b, .x=0x49, .y=0x30, .sp=0xb0, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x018f, .value=0xf6}, {.addr=0x7653, .value=0x84}, {.addr=0x7654, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0x7653, .value=0x84, .type=IO_READ},
        {.addr=0x7654, .value=0x8f, .type=IO_READ},
        {.addr=0x018f, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_014F) {
    const struct CPU_State initial_cpu = {.pc=0x532c, .a=0xb4, .x=0xfe, .y=0x8e, .sp=0xb9, .status=0x81};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0021, .value=0xe2}, {.addr=0x532c, .value=0x84}, {.addr=0x532d, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0x532e, .a=0x97, .x=0xfe, .y=0x8e, .sp=0xb9, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x0021, .value=0xe2}, {.addr=0x532c, .value=0x84}, {.addr=0x532d, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0x532c, .value=0x84, .type=IO_READ},
        {.addr=0x532d, .value=0x21, .type=IO_READ},
        {.addr=0x0021, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0150) {
    const struct CPU_State initial_cpu = {.pc=0x5e14, .a=0x61, .x=0x32, .y=0x19, .sp=0x8d, .status=0xe4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0115, .value=0x42}, {.addr=0x5e14, .value=0x84}, {.addr=0x5e15, .value=0x15},
    };
    const struct CPU_State final_cpu = {.pc=0x5e16, .a=0xa3, .x=0x32, .y=0x19, .sp=0x8d, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0115, .value=0x42}, {.addr=0x5e14, .value=0x84}, {.addr=0x5e15, .value=0x15},
    };
    const struct BusEvent events[] = {
        {.addr=0x5e14, .value=0x84, .type=IO_READ},
        {.addr=0x5e15, .value=0x15, .type=IO_READ},
        {.addr=0x0115, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0151) {
    const struct CPU_State initial_cpu = {.pc=0x20f4, .a=0x16, .x=0x40, .y=0x7a, .sp=0x8a, .status=0xf4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0184, .value=0xcd}, {.addr=0x20f4, .value=0x84}, {.addr=0x20f5, .value=0x84},
    };
    const struct CPU_State final_cpu = {.pc=0x20f6, .a=0xe3, .x=0x40, .y=0x7a, .sp=0x8a, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0184, .value=0xcd}, {.addr=0x20f4, .value=0x84}, {.addr=0x20f5, .value=0x84},
    };
    const struct BusEvent events[] = {
        {.addr=0x20f4, .value=0x84, .type=IO_READ},
        {.addr=0x20f5, .value=0x84, .type=IO_READ},
        {.addr=0x0184, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0152) {
    const struct CPU_State initial_cpu = {.pc=0x3c3d, .a=0xd0, .x=0x64, .y=0x64, .sp=0x50, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014e, .value=0xa4}, {.addr=0x3c3d, .value=0x84}, {.addr=0x3c3e, .value=0x4e},
    };
    const struct CPU_State final_cpu = {.pc=0x3c3f, .a=0x74, .x=0x64, .y=0x64, .sp=0x50, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x014e, .value=0xa4}, {.addr=0x3c3d, .value=0x84}, {.addr=0x3c3e, .value=0x4e},
    };
    const struct BusEvent events[] = {
        {.addr=0x3c3d, .value=0x84, .type=IO_READ},
        {.addr=0x3c3e, .value=0x4e, .type=IO_READ},
        {.addr=0x014e, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0153) {
    const struct CPU_State initial_cpu = {.pc=0x6160, .a=0xc6, .x=0x52, .y=0xc5, .sp=0x92, .status=0xc3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ec, .value=0x8b}, {.addr=0x6160, .value=0x84}, {.addr=0x6161, .value=0xec},
    };
    const struct CPU_State final_cpu = {.pc=0x6162, .a=0x52, .x=0x52, .y=0xc5, .sp=0x92, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ec, .value=0x8b}, {.addr=0x6160, .value=0x84}, {.addr=0x6161, .value=0xec},
    };
    const struct BusEvent events[] = {
        {.addr=0x6160, .value=0x84, .type=IO_READ},
        {.addr=0x6161, .value=0xec, .type=IO_READ},
        {.addr=0x00ec, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0154) {
    const struct CPU_State initial_cpu = {.pc=0xb8d1, .a=0xd2, .x=0xca, .y=0x54, .sp=0xa1, .status=0x12};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008d, .value=0x2b}, {.addr=0xb8d1, .value=0x84}, {.addr=0xb8d2, .value=0x8d},
    };
    const struct CPU_State final_cpu = {.pc=0xb8d3, .a=0xfd, .x=0xca, .y=0x54, .sp=0xa1, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x008d, .value=0x2b}, {.addr=0xb8d1, .value=0x84}, {.addr=0xb8d2, .value=0x8d},
    };
    const struct BusEvent events[] = {
        {.addr=0xb8d1, .value=0x84, .type=IO_READ},
        {.addr=0xb8d2, .value=0x8d, .type=IO_READ},
        {.addr=0x008d, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0155) {
    const struct CPU_State initial_cpu = {.pc=0x48cc, .a=0xe3, .x=0x8f, .y=0xcd, .sp=0xaf, .status=0x16};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0074, .value=0x4f}, {.addr=0x48cc, .value=0x84}, {.addr=0x48cd, .value=0x74},
    };
    const struct CPU_State final_cpu = {.pc=0x48ce, .a=0x32, .x=0x8f, .y=0xcd, .sp=0xaf, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0074, .value=0x4f}, {.addr=0x48cc, .value=0x84}, {.addr=0x48cd, .value=0x74},
    };
    const struct BusEvent events[] = {
        {.addr=0x48cc, .value=0x84, .type=IO_READ},
        {.addr=0x48cd, .value=0x74, .type=IO_READ},
        {.addr=0x0074, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0156) {
    const struct CPU_State initial_cpu = {.pc=0xc44b, .a=0x24, .x=0x3b, .y=0xfd, .sp=0x2b, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0014, .value=0x9c}, {.addr=0xc44b, .value=0x84}, {.addr=0xc44c, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0xc44d, .a=0xc0, .x=0x3b, .y=0xfd, .sp=0x2b, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x0014, .value=0x9c}, {.addr=0xc44b, .value=0x84}, {.addr=0xc44c, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0xc44b, .value=0x84, .type=IO_READ},
        {.addr=0xc44c, .value=0x14, .type=IO_READ},
        {.addr=0x0014, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0157) {
    const struct CPU_State initial_cpu = {.pc=0xfede, .a=0x87, .x=0xbd, .y=0x36, .sp=0xae, .status=0x2a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e5, .value=0x4f}, {.addr=0xfede, .value=0x84}, {.addr=0xfedf, .value=0xe5},
    };
    const struct CPU_State final_cpu = {.pc=0xfee0, .a=0xd6, .x=0xbd, .y=0x36, .sp=0xae, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e5, .value=0x4f}, {.addr=0xfede, .value=0x84}, {.addr=0xfedf, .value=0xe5},
    };
    const struct BusEvent events[] = {
        {.addr=0xfede, .value=0x84, .type=IO_READ},
        {.addr=0xfedf, .value=0xe5, .type=IO_READ},
        {.addr=0x01e5, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0158) {
    const struct CPU_State initial_cpu = {.pc=0x25e2, .a=0x17, .x=0x08, .y=0x8f, .sp=0xe0, .status=0xa5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0115, .value=0x6d}, {.addr=0x25e2, .value=0x84}, {.addr=0x25e3, .value=0x15},
    };
    const struct CPU_State final_cpu = {.pc=0x25e4, .a=0x85, .x=0x08, .y=0x8f, .sp=0xe0, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x0115, .value=0x6d}, {.addr=0x25e2, .value=0x84}, {.addr=0x25e3, .value=0x15},
    };
    const struct BusEvent events[] = {
        {.addr=0x25e2, .value=0x84, .type=IO_READ},
        {.addr=0x25e3, .value=0x15, .type=IO_READ},
        {.addr=0x0115, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0159) {
    const struct CPU_State initial_cpu = {.pc=0x8930, .a=0x3f, .x=0xba, .y=0x6f, .sp=0x46, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011e, .value=0xe2}, {.addr=0x8930, .value=0x84}, {.addr=0x8931, .value=0x1e},
    };
    const struct CPU_State final_cpu = {.pc=0x8932, .a=0x21, .x=0xba, .y=0x6f, .sp=0x46, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x011e, .value=0xe2}, {.addr=0x8930, .value=0x84}, {.addr=0x8931, .value=0x1e},
    };
    const struct BusEvent events[] = {
        {.addr=0x8930, .value=0x84, .type=IO_READ},
        {.addr=0x8931, .value=0x1e, .type=IO_READ},
        {.addr=0x011e, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_015A) {
    const struct CPU_State initial_cpu = {.pc=0x28f7, .a=0xa8, .x=0x32, .y=0x2b, .sp=0xf8, .status=0x60};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010c, .value=0xe2}, {.addr=0x28f7, .value=0x84}, {.addr=0x28f8, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0x28f9, .a=0x8a, .x=0x32, .y=0x2b, .sp=0xf8, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x010c, .value=0xe2}, {.addr=0x28f7, .value=0x84}, {.addr=0x28f8, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0x28f7, .value=0x84, .type=IO_READ},
        {.addr=0x28f8, .value=0x0c, .type=IO_READ},
        {.addr=0x010c, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_015B) {
    const struct CPU_State initial_cpu = {.pc=0xb84f, .a=0xce, .x=0x6c, .y=0x76, .sp=0x7a, .status=0xae};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a3, .value=0xcf}, {.addr=0xb84f, .value=0x84}, {.addr=0xb850, .value=0xa3},
    };
    const struct CPU_State final_cpu = {.pc=0xb851, .a=0x9d, .x=0x6c, .y=0x76, .sp=0x7a, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a3, .value=0xcf}, {.addr=0xb84f, .value=0x84}, {.addr=0xb850, .value=0xa3},
    };
    const struct BusEvent events[] = {
        {.addr=0xb84f, .value=0x84, .type=IO_READ},
        {.addr=0xb850, .value=0xa3, .type=IO_READ},
        {.addr=0x01a3, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_015C) {
    const struct CPU_State initial_cpu = {.pc=0xc9a7, .a=0xbb, .x=0xda, .y=0x22, .sp=0x2c, .status=0x67};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018c, .value=0x30}, {.addr=0xc9a7, .value=0x84}, {.addr=0xc9a8, .value=0x8c},
    };
    const struct CPU_State final_cpu = {.pc=0xc9a9, .a=0xec, .x=0xda, .y=0x22, .sp=0x2c, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x018c, .value=0x30}, {.addr=0xc9a7, .value=0x84}, {.addr=0xc9a8, .value=0x8c},
    };
    const struct BusEvent events[] = {
        {.addr=0xc9a7, .value=0x84, .type=IO_READ},
        {.addr=0xc9a8, .value=0x8c, .type=IO_READ},
        {.addr=0x018c, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_015D) {
    const struct CPU_State initial_cpu = {.pc=0x1e82, .a=0x4f, .x=0xef, .y=0xd6, .sp=0x74, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018e, .value=0x10}, {.addr=0x1e82, .value=0x84}, {.addr=0x1e83, .value=0x8e},
    };
    const struct CPU_State final_cpu = {.pc=0x1e84, .a=0x5f, .x=0xef, .y=0xd6, .sp=0x74, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x018e, .value=0x10}, {.addr=0x1e82, .value=0x84}, {.addr=0x1e83, .value=0x8e},
    };
    const struct BusEvent events[] = {
        {.addr=0x1e82, .value=0x84, .type=IO_READ},
        {.addr=0x1e83, .value=0x8e, .type=IO_READ},
        {.addr=0x018e, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_015E) {
    const struct CPU_State initial_cpu = {.pc=0x7eb6, .a=0x2e, .x=0x36, .y=0xde, .sp=0xe1, .status=0x0e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d6, .value=0x22}, {.addr=0x7eb6, .value=0x84}, {.addr=0x7eb7, .value=0xd6},
    };
    const struct CPU_State final_cpu = {.pc=0x7eb8, .a=0x50, .x=0x36, .y=0xde, .sp=0xe1, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d6, .value=0x22}, {.addr=0x7eb6, .value=0x84}, {.addr=0x7eb7, .value=0xd6},
    };
    const struct BusEvent events[] = {
        {.addr=0x7eb6, .value=0x84, .type=IO_READ},
        {.addr=0x7eb7, .value=0xd6, .type=IO_READ},
        {.addr=0x00d6, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_015F) {
    const struct CPU_State initial_cpu = {.pc=0x57ba, .a=0x5e, .x=0x5b, .y=0x0e, .sp=0x94, .status=0x23};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013a, .value=0x95}, {.addr=0x57ba, .value=0x84}, {.addr=0x57bb, .value=0x3a},
    };
    const struct CPU_State final_cpu = {.pc=0x57bc, .a=0xf4, .x=0x5b, .y=0x0e, .sp=0x94, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x013a, .value=0x95}, {.addr=0x57ba, .value=0x84}, {.addr=0x57bb, .value=0x3a},
    };
    const struct BusEvent events[] = {
        {.addr=0x57ba, .value=0x84, .type=IO_READ},
        {.addr=0x57bb, .value=0x3a, .type=IO_READ},
        {.addr=0x013a, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0160) {
    const struct CPU_State initial_cpu = {.pc=0x2619, .a=0xdc, .x=0xb1, .y=0xd8, .sp=0x27, .status=0xe5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a0, .value=0x45}, {.addr=0x2619, .value=0x84}, {.addr=0x261a, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0x261b, .a=0x22, .x=0xb1, .y=0xd8, .sp=0x27, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a0, .value=0x45}, {.addr=0x2619, .value=0x84}, {.addr=0x261a, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0x2619, .value=0x84, .type=IO_READ},
        {.addr=0x261a, .value=0xa0, .type=IO_READ},
        {.addr=0x01a0, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0161) {
    const struct CPU_State initial_cpu = {.pc=0xa095, .a=0xaf, .x=0xf9, .y=0x09, .sp=0x11, .status=0x61};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0182, .value=0x50}, {.addr=0xa095, .value=0x84}, {.addr=0xa096, .value=0x82},
    };
    const struct CPU_State final_cpu = {.pc=0xa097, .a=0x00, .x=0xf9, .y=0x09, .sp=0x11, .status=0x2b};
    const struct RamEntry final_ram[] = {
        {.addr=0x0182, .value=0x50}, {.addr=0xa095, .value=0x84}, {.addr=0xa096, .value=0x82},
    };
    const struct BusEvent events[] = {
        {.addr=0xa095, .value=0x84, .type=IO_READ},
        {.addr=0xa096, .value=0x82, .type=IO_READ},
        {.addr=0x0182, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0162) {
    const struct CPU_State initial_cpu = {.pc=0x052a, .a=0xcc, .x=0x24, .y=0x1b, .sp=0x78, .status=0x3e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0133, .value=0x2c}, {.addr=0x052a, .value=0x84}, {.addr=0x052b, .value=0x33},
    };
    const struct CPU_State final_cpu = {.pc=0x052c, .a=0xf8, .x=0x24, .y=0x1b, .sp=0x78, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0133, .value=0x2c}, {.addr=0x052a, .value=0x84}, {.addr=0x052b, .value=0x33},
    };
    const struct BusEvent events[] = {
        {.addr=0x052a, .value=0x84, .type=IO_READ},
        {.addr=0x052b, .value=0x33, .type=IO_READ},
        {.addr=0x0133, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0163) {
    const struct CPU_State initial_cpu = {.pc=0x7cf7, .a=0x0b, .x=0xe5, .y=0x42, .sp=0x8d, .status=0xff};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01dc, .value=0xb6}, {.addr=0x7cf7, .value=0x84}, {.addr=0x7cf8, .value=0xdc},
    };
    const struct CPU_State final_cpu = {.pc=0x7cf9, .a=0xc2, .x=0xe5, .y=0x42, .sp=0x8d, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01dc, .value=0xb6}, {.addr=0x7cf7, .value=0x84}, {.addr=0x7cf8, .value=0xdc},
    };
    const struct BusEvent events[] = {
        {.addr=0x7cf7, .value=0x84, .type=IO_READ},
        {.addr=0x7cf8, .value=0xdc, .type=IO_READ},
        {.addr=0x01dc, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0164) {
    const struct CPU_State initial_cpu = {.pc=0x3929, .a=0x1a, .x=0xc7, .y=0xe5, .sp=0xd2, .status=0x12};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0021, .value=0x54}, {.addr=0x3929, .value=0x84}, {.addr=0x392a, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0x392b, .a=0x6e, .x=0xc7, .y=0xe5, .sp=0xd2, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x0021, .value=0x54}, {.addr=0x3929, .value=0x84}, {.addr=0x392a, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0x3929, .value=0x84, .type=IO_READ},
        {.addr=0x392a, .value=0x21, .type=IO_READ},
        {.addr=0x0021, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0165) {
    const struct CPU_State initial_cpu = {.pc=0x88db, .a=0x02, .x=0x47, .y=0xca, .sp=0x28, .status=0x33};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0177, .value=0x31}, {.addr=0x88db, .value=0x84}, {.addr=0x88dc, .value=0x77},
    };
    const struct CPU_State final_cpu = {.pc=0x88dd, .a=0x34, .x=0x47, .y=0xca, .sp=0x28, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x0177, .value=0x31}, {.addr=0x88db, .value=0x84}, {.addr=0x88dc, .value=0x77},
    };
    const struct BusEvent events[] = {
        {.addr=0x88db, .value=0x84, .type=IO_READ},
        {.addr=0x88dc, .value=0x77, .type=IO_READ},
        {.addr=0x0177, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0166) {
    const struct CPU_State initial_cpu = {.pc=0xd279, .a=0x60, .x=0xad, .y=0x1a, .sp=0x91, .status=0x3d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0153, .value=0x57}, {.addr=0xd279, .value=0x84}, {.addr=0xd27a, .value=0x53},
    };
    const struct CPU_State final_cpu = {.pc=0xd27b, .a=0xb8, .x=0xad, .y=0x1a, .sp=0x91, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0153, .value=0x57}, {.addr=0xd279, .value=0x84}, {.addr=0xd27a, .value=0x53},
    };
    const struct BusEvent events[] = {
        {.addr=0xd279, .value=0x84, .type=IO_READ},
        {.addr=0xd27a, .value=0x53, .type=IO_READ},
        {.addr=0x0153, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0167) {
    const struct CPU_State initial_cpu = {.pc=0x482f, .a=0xef, .x=0xfc, .y=0xd1, .sp=0xff, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cb, .value=0xd7}, {.addr=0x482f, .value=0x84}, {.addr=0x4830, .value=0xcb},
    };
    const struct CPU_State final_cpu = {.pc=0x4831, .a=0xc7, .x=0xfc, .y=0xd1, .sp=0xff, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cb, .value=0xd7}, {.addr=0x482f, .value=0x84}, {.addr=0x4830, .value=0xcb},
    };
    const struct BusEvent events[] = {
        {.addr=0x482f, .value=0x84, .type=IO_READ},
        {.addr=0x4830, .value=0xcb, .type=IO_READ},
        {.addr=0x01cb, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0169) {
    const struct CPU_State initial_cpu = {.pc=0x4dcc, .a=0x1b, .x=0x9f, .y=0x2f, .sp=0xc8, .status=0x44};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0095, .value=0x86}, {.addr=0x4dcc, .value=0x84}, {.addr=0x4dcd, .value=0x95},
    };
    const struct CPU_State final_cpu = {.pc=0x4dce, .a=0xa1, .x=0x9f, .y=0x2f, .sp=0xc8, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0095, .value=0x86}, {.addr=0x4dcc, .value=0x84}, {.addr=0x4dcd, .value=0x95},
    };
    const struct BusEvent events[] = {
        {.addr=0x4dcc, .value=0x84, .type=IO_READ},
        {.addr=0x4dcd, .value=0x95, .type=IO_READ},
        {.addr=0x0095, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_016A) {
    const struct CPU_State initial_cpu = {.pc=0xf608, .a=0x82, .x=0xbd, .y=0x2d, .sp=0xde, .status=0xc3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0046, .value=0x06}, {.addr=0xf608, .value=0x84}, {.addr=0xf609, .value=0x46},
    };
    const struct CPU_State final_cpu = {.pc=0xf60a, .a=0x89, .x=0xbd, .y=0x2d, .sp=0xde, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x0046, .value=0x06}, {.addr=0xf608, .value=0x84}, {.addr=0xf609, .value=0x46},
    };
    const struct BusEvent events[] = {
        {.addr=0xf608, .value=0x84, .type=IO_READ},
        {.addr=0xf609, .value=0x46, .type=IO_READ},
        {.addr=0x0046, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_016B) {
    const struct CPU_State initial_cpu = {.pc=0xc124, .a=0xee, .x=0xcb, .y=0x44, .sp=0x07, .status=0x96};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bf, .value=0x4e}, {.addr=0xc124, .value=0x84}, {.addr=0xc125, .value=0xbf},
    };
    const struct CPU_State final_cpu = {.pc=0xc126, .a=0x3c, .x=0xcb, .y=0x44, .sp=0x07, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bf, .value=0x4e}, {.addr=0xc124, .value=0x84}, {.addr=0xc125, .value=0xbf},
    };
    const struct BusEvent events[] = {
        {.addr=0xc124, .value=0x84, .type=IO_READ},
        {.addr=0xc125, .value=0xbf, .type=IO_READ},
        {.addr=0x00bf, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_016C) {
    const struct CPU_State initial_cpu = {.pc=0xd67b, .a=0x55, .x=0x8c, .y=0xb0, .sp=0x1c, .status=0x98};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0096, .value=0xc6}, {.addr=0xd67b, .value=0x84}, {.addr=0xd67c, .value=0x96},
    };
    const struct CPU_State final_cpu = {.pc=0xd67d, .a=0x1b, .x=0x8c, .y=0xb0, .sp=0x1c, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x0096, .value=0xc6}, {.addr=0xd67b, .value=0x84}, {.addr=0xd67c, .value=0x96},
    };
    const struct BusEvent events[] = {
        {.addr=0xd67b, .value=0x84, .type=IO_READ},
        {.addr=0xd67c, .value=0x96, .type=IO_READ},
        {.addr=0x0096, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_016D) {
    const struct CPU_State initial_cpu = {.pc=0x79b5, .a=0xf5, .x=0x54, .y=0x06, .sp=0xfa, .status=0x7b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0166, .value=0x86}, {.addr=0x79b5, .value=0x84}, {.addr=0x79b6, .value=0x66},
    };
    const struct CPU_State final_cpu = {.pc=0x79b7, .a=0x7c, .x=0x54, .y=0x06, .sp=0xfa, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x0166, .value=0x86}, {.addr=0x79b5, .value=0x84}, {.addr=0x79b6, .value=0x66},
    };
    const struct BusEvent events[] = {
        {.addr=0x79b5, .value=0x84, .type=IO_READ},
        {.addr=0x79b6, .value=0x66, .type=IO_READ},
        {.addr=0x0166, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_016E) {
    const struct CPU_State initial_cpu = {.pc=0x1a2d, .a=0xf3, .x=0x3e, .y=0x26, .sp=0xb1, .status=0xae};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f7, .value=0x93}, {.addr=0x1a2d, .value=0x84}, {.addr=0x1a2e, .value=0xf7},
    };
    const struct CPU_State final_cpu = {.pc=0x1a2f, .a=0x86, .x=0x3e, .y=0x26, .sp=0xb1, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f7, .value=0x93}, {.addr=0x1a2d, .value=0x84}, {.addr=0x1a2e, .value=0xf7},
    };
    const struct BusEvent events[] = {
        {.addr=0x1a2d, .value=0x84, .type=IO_READ},
        {.addr=0x1a2e, .value=0xf7, .type=IO_READ},
        {.addr=0x01f7, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_016F) {
    const struct CPU_State initial_cpu = {.pc=0xa513, .a=0xa4, .x=0x09, .y=0x9f, .sp=0x22, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005c, .value=0xb5}, {.addr=0xa513, .value=0x84}, {.addr=0xa514, .value=0x5c},
    };
    const struct CPU_State final_cpu = {.pc=0xa515, .a=0x59, .x=0x09, .y=0x9f, .sp=0x22, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x005c, .value=0xb5}, {.addr=0xa513, .value=0x84}, {.addr=0xa514, .value=0x5c},
    };
    const struct BusEvent events[] = {
        {.addr=0xa513, .value=0x84, .type=IO_READ},
        {.addr=0xa514, .value=0x5c, .type=IO_READ},
        {.addr=0x005c, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0170) {
    const struct CPU_State initial_cpu = {.pc=0x0435, .a=0x75, .x=0x9e, .y=0xe8, .sp=0xe4, .status=0x47};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004e, .value=0xfc}, {.addr=0x0435, .value=0x84}, {.addr=0x0436, .value=0x4e},
    };
    const struct CPU_State final_cpu = {.pc=0x0437, .a=0x72, .x=0x9e, .y=0xe8, .sp=0xe4, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x004e, .value=0xfc}, {.addr=0x0435, .value=0x84}, {.addr=0x0436, .value=0x4e},
    };
    const struct BusEvent events[] = {
        {.addr=0x0435, .value=0x84, .type=IO_READ},
        {.addr=0x0436, .value=0x4e, .type=IO_READ},
        {.addr=0x004e, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0171) {
    const struct CPU_State initial_cpu = {.pc=0x52f3, .a=0x87, .x=0xfb, .y=0x07, .sp=0xc2, .status=0xf5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0114, .value=0x2e}, {.addr=0x52f3, .value=0x84}, {.addr=0x52f4, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0x52f5, .a=0xb6, .x=0xfb, .y=0x07, .sp=0xc2, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0114, .value=0x2e}, {.addr=0x52f3, .value=0x84}, {.addr=0x52f4, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0x52f3, .value=0x84, .type=IO_READ},
        {.addr=0x52f4, .value=0x14, .type=IO_READ},
        {.addr=0x0114, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0172) {
    const struct CPU_State initial_cpu = {.pc=0x1795, .a=0xd9, .x=0x78, .y=0x03, .sp=0x6d, .status=0xf6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0109, .value=0x9f}, {.addr=0x1795, .value=0x84}, {.addr=0x1796, .value=0x09},
    };
    const struct CPU_State final_cpu = {.pc=0x1797, .a=0x78, .x=0x78, .y=0x03, .sp=0x6d, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0109, .value=0x9f}, {.addr=0x1795, .value=0x84}, {.addr=0x1796, .value=0x09},
    };
    const struct BusEvent events[] = {
        {.addr=0x1795, .value=0x84, .type=IO_READ},
        {.addr=0x1796, .value=0x09, .type=IO_READ},
        {.addr=0x0109, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0173) {
    const struct CPU_State initial_cpu = {.pc=0x19db, .a=0x25, .x=0x0d, .y=0x9f, .sp=0xdf, .status=0x3d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b0, .value=0xbb}, {.addr=0x19db, .value=0x84}, {.addr=0x19dc, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0x19dd, .a=0xe1, .x=0x0d, .y=0x9f, .sp=0xdf, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b0, .value=0xbb}, {.addr=0x19db, .value=0x84}, {.addr=0x19dc, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0x19db, .value=0x84, .type=IO_READ},
        {.addr=0x19dc, .value=0xb0, .type=IO_READ},
        {.addr=0x01b0, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0174) {
    const struct CPU_State initial_cpu = {.pc=0xa1fd, .a=0x37, .x=0x7f, .y=0x0f, .sp=0x0d, .status=0x58};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0084, .value=0xf2}, {.addr=0xa1fd, .value=0x84}, {.addr=0xa1fe, .value=0x84},
    };
    const struct CPU_State final_cpu = {.pc=0xa1ff, .a=0x29, .x=0x7f, .y=0x0f, .sp=0x0d, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x0084, .value=0xf2}, {.addr=0xa1fd, .value=0x84}, {.addr=0xa1fe, .value=0x84},
    };
    const struct BusEvent events[] = {
        {.addr=0xa1fd, .value=0x84, .type=IO_READ},
        {.addr=0xa1fe, .value=0x84, .type=IO_READ},
        {.addr=0x0084, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0175) {
    const struct CPU_State initial_cpu = {.pc=0x68ec, .a=0xa9, .x=0x6f, .y=0x45, .sp=0x16, .status=0x4a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ab, .value=0x53}, {.addr=0x68ec, .value=0x84}, {.addr=0x68ed, .value=0xab},
    };
    const struct CPU_State final_cpu = {.pc=0x68ee, .a=0xfc, .x=0x6f, .y=0x45, .sp=0x16, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ab, .value=0x53}, {.addr=0x68ec, .value=0x84}, {.addr=0x68ed, .value=0xab},
    };
    const struct BusEvent events[] = {
        {.addr=0x68ec, .value=0x84, .type=IO_READ},
        {.addr=0x68ed, .value=0xab, .type=IO_READ},
        {.addr=0x00ab, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0177) {
    const struct CPU_State initial_cpu = {.pc=0x0359, .a=0xb9, .x=0x28, .y=0x7a, .sp=0x68, .status=0x2c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0140, .value=0x77}, {.addr=0x0359, .value=0x84}, {.addr=0x035a, .value=0x40},
    };
    const struct CPU_State final_cpu = {.pc=0x035b, .a=0x30, .x=0x28, .y=0x7a, .sp=0x68, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0140, .value=0x77}, {.addr=0x0359, .value=0x84}, {.addr=0x035a, .value=0x40},
    };
    const struct BusEvent events[] = {
        {.addr=0x0359, .value=0x84, .type=IO_READ},
        {.addr=0x035a, .value=0x40, .type=IO_READ},
        {.addr=0x0140, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0178) {
    const struct CPU_State initial_cpu = {.pc=0x8faf, .a=0x07, .x=0x9f, .y=0x7e, .sp=0xc1, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0198, .value=0xea}, {.addr=0x8faf, .value=0x84}, {.addr=0x8fb0, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0x8fb1, .a=0xf1, .x=0x9f, .y=0x7e, .sp=0xc1, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0198, .value=0xea}, {.addr=0x8faf, .value=0x84}, {.addr=0x8fb0, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0x8faf, .value=0x84, .type=IO_READ},
        {.addr=0x8fb0, .value=0x98, .type=IO_READ},
        {.addr=0x0198, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0179) {
    const struct CPU_State initial_cpu = {.pc=0x6497, .a=0x4e, .x=0xa7, .y=0x97, .sp=0x40, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0112, .value=0x1c}, {.addr=0x6497, .value=0x84}, {.addr=0x6498, .value=0x12},
    };
    const struct CPU_State final_cpu = {.pc=0x6499, .a=0x6a, .x=0xa7, .y=0x97, .sp=0x40, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x0112, .value=0x1c}, {.addr=0x6497, .value=0x84}, {.addr=0x6498, .value=0x12},
    };
    const struct BusEvent events[] = {
        {.addr=0x6497, .value=0x84, .type=IO_READ},
        {.addr=0x6498, .value=0x12, .type=IO_READ},
        {.addr=0x0112, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_017A) {
    const struct CPU_State initial_cpu = {.pc=0x05a9, .a=0x21, .x=0x0a, .y=0xdd, .sp=0x27, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000f, .value=0xb9}, {.addr=0x05a9, .value=0x84}, {.addr=0x05aa, .value=0x0f},
    };
    const struct CPU_State final_cpu = {.pc=0x05ab, .a=0xda, .x=0x0a, .y=0xdd, .sp=0x27, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x000f, .value=0xb9}, {.addr=0x05a9, .value=0x84}, {.addr=0x05aa, .value=0x0f},
    };
    const struct BusEvent events[] = {
        {.addr=0x05a9, .value=0x84, .type=IO_READ},
        {.addr=0x05aa, .value=0x0f, .type=IO_READ},
        {.addr=0x000f, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_017B) {
    const struct CPU_State initial_cpu = {.pc=0x715f, .a=0x06, .x=0x06, .y=0x90, .sp=0x18, .status=0xb4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0135, .value=0x6f}, {.addr=0x715f, .value=0x84}, {.addr=0x7160, .value=0x35},
    };
    const struct CPU_State final_cpu = {.pc=0x7161, .a=0x75, .x=0x06, .y=0x90, .sp=0x18, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0135, .value=0x6f}, {.addr=0x715f, .value=0x84}, {.addr=0x7160, .value=0x35},
    };
    const struct BusEvent events[] = {
        {.addr=0x715f, .value=0x84, .type=IO_READ},
        {.addr=0x7160, .value=0x35, .type=IO_READ},
        {.addr=0x0135, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_017C) {
    const struct CPU_State initial_cpu = {.pc=0x0126, .a=0xf3, .x=0x66, .y=0x7f, .sp=0xa8, .status=0x94};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0092, .value=0x44}, {.addr=0x0126, .value=0x84}, {.addr=0x0127, .value=0x92},
    };
    const struct CPU_State final_cpu = {.pc=0x0128, .a=0x37, .x=0x66, .y=0x7f, .sp=0xa8, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x0092, .value=0x44}, {.addr=0x0126, .value=0x84}, {.addr=0x0127, .value=0x92},
    };
    const struct BusEvent events[] = {
        {.addr=0x0126, .value=0x84, .type=IO_READ},
        {.addr=0x0127, .value=0x92, .type=IO_READ},
        {.addr=0x0092, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_017D) {
    const struct CPU_State initial_cpu = {.pc=0x1a7d, .a=0x89, .x=0xa4, .y=0xbb, .sp=0x7a, .status=0x71};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0158, .value=0x5b}, {.addr=0x1a7d, .value=0x84}, {.addr=0x1a7e, .value=0x58},
    };
    const struct CPU_State final_cpu = {.pc=0x1a7f, .a=0xe5, .x=0xa4, .y=0xbb, .sp=0x7a, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0158, .value=0x5b}, {.addr=0x1a7d, .value=0x84}, {.addr=0x1a7e, .value=0x58},
    };
    const struct BusEvent events[] = {
        {.addr=0x1a7d, .value=0x84, .type=IO_READ},
        {.addr=0x1a7e, .value=0x58, .type=IO_READ},
        {.addr=0x0158, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_017E) {
    const struct CPU_State initial_cpu = {.pc=0x2776, .a=0x59, .x=0x47, .y=0xd0, .sp=0xf6, .status=0xca};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003f, .value=0x2b}, {.addr=0x2776, .value=0x84}, {.addr=0x2777, .value=0x3f},
    };
    const struct CPU_State final_cpu = {.pc=0x2778, .a=0x84, .x=0x47, .y=0xd0, .sp=0xf6, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x003f, .value=0x2b}, {.addr=0x2776, .value=0x84}, {.addr=0x2777, .value=0x3f},
    };
    const struct BusEvent events[] = {
        {.addr=0x2776, .value=0x84, .type=IO_READ},
        {.addr=0x2777, .value=0x3f, .type=IO_READ},
        {.addr=0x003f, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_017F) {
    const struct CPU_State initial_cpu = {.pc=0xe442, .a=0xf2, .x=0xe0, .y=0xab, .sp=0xdd, .status=0x77};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0132, .value=0xe6}, {.addr=0xe442, .value=0x84}, {.addr=0xe443, .value=0x32},
    };
    const struct CPU_State final_cpu = {.pc=0xe444, .a=0xd9, .x=0xe0, .y=0xab, .sp=0xdd, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0132, .value=0xe6}, {.addr=0xe442, .value=0x84}, {.addr=0xe443, .value=0x32},
    };
    const struct BusEvent events[] = {
        {.addr=0xe442, .value=0x84, .type=IO_READ},
        {.addr=0xe443, .value=0x32, .type=IO_READ},
        {.addr=0x0132, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0180) {
    const struct CPU_State initial_cpu = {.pc=0xca0e, .a=0x31, .x=0xdb, .y=0x5d, .sp=0x8e, .status=0x19};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005b, .value=0x2f}, {.addr=0xca0e, .value=0x84}, {.addr=0xca0f, .value=0x5b},
    };
    const struct CPU_State final_cpu = {.pc=0xca10, .a=0x61, .x=0xdb, .y=0x5d, .sp=0x8e, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x005b, .value=0x2f}, {.addr=0xca0e, .value=0x84}, {.addr=0xca0f, .value=0x5b},
    };
    const struct BusEvent events[] = {
        {.addr=0xca0e, .value=0x84, .type=IO_READ},
        {.addr=0xca0f, .value=0x5b, .type=IO_READ},
        {.addr=0x005b, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0181) {
    const struct CPU_State initial_cpu = {.pc=0x4b39, .a=0x9c, .x=0x78, .y=0x1d, .sp=0x2c, .status=0x0e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0027, .value=0xa3}, {.addr=0x4b39, .value=0x84}, {.addr=0x4b3a, .value=0x27},
    };
    const struct CPU_State final_cpu = {.pc=0x4b3b, .a=0x3f, .x=0x78, .y=0x1d, .sp=0x2c, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x0027, .value=0xa3}, {.addr=0x4b39, .value=0x84}, {.addr=0x4b3a, .value=0x27},
    };
    const struct BusEvent events[] = {
        {.addr=0x4b39, .value=0x84, .type=IO_READ},
        {.addr=0x4b3a, .value=0x27, .type=IO_READ},
        {.addr=0x0027, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0182) {
    const struct CPU_State initial_cpu = {.pc=0x1756, .a=0x56, .x=0x3b, .y=0xde, .sp=0xdf, .status=0x37};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010c, .value=0x45}, {.addr=0x1756, .value=0x84}, {.addr=0x1757, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0x1758, .a=0x9c, .x=0x3b, .y=0xde, .sp=0xdf, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x010c, .value=0x45}, {.addr=0x1756, .value=0x84}, {.addr=0x1757, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0x1756, .value=0x84, .type=IO_READ},
        {.addr=0x1757, .value=0x0c, .type=IO_READ},
        {.addr=0x010c, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0183) {
    const struct CPU_State initial_cpu = {.pc=0xf6a3, .a=0xdf, .x=0x2b, .y=0x5a, .sp=0xbb, .status=0x3a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0178, .value=0x46}, {.addr=0xf6a3, .value=0x84}, {.addr=0xf6a4, .value=0x78},
    };
    const struct CPU_State final_cpu = {.pc=0xf6a5, .a=0x25, .x=0x2b, .y=0x5a, .sp=0xbb, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x0178, .value=0x46}, {.addr=0xf6a3, .value=0x84}, {.addr=0xf6a4, .value=0x78},
    };
    const struct BusEvent events[] = {
        {.addr=0xf6a3, .value=0x84, .type=IO_READ},
        {.addr=0xf6a4, .value=0x78, .type=IO_READ},
        {.addr=0x0178, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0184) {
    const struct CPU_State initial_cpu = {.pc=0x1937, .a=0x61, .x=0x96, .y=0x9a, .sp=0x58, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0146, .value=0x2a}, {.addr=0x1937, .value=0x84}, {.addr=0x1938, .value=0x46},
    };
    const struct CPU_State final_cpu = {.pc=0x1939, .a=0x8c, .x=0x96, .y=0x9a, .sp=0x58, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0146, .value=0x2a}, {.addr=0x1937, .value=0x84}, {.addr=0x1938, .value=0x46},
    };
    const struct BusEvent events[] = {
        {.addr=0x1937, .value=0x84, .type=IO_READ},
        {.addr=0x1938, .value=0x46, .type=IO_READ},
        {.addr=0x0146, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0185) {
    const struct CPU_State initial_cpu = {.pc=0x26e7, .a=0x90, .x=0x17, .y=0x14, .sp=0x55, .status=0x74};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b5, .value=0xe6}, {.addr=0x26e7, .value=0x84}, {.addr=0x26e8, .value=0xb5},
    };
    const struct CPU_State final_cpu = {.pc=0x26e9, .a=0x76, .x=0x17, .y=0x14, .sp=0x55, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b5, .value=0xe6}, {.addr=0x26e7, .value=0x84}, {.addr=0x26e8, .value=0xb5},
    };
    const struct BusEvent events[] = {
        {.addr=0x26e7, .value=0x84, .type=IO_READ},
        {.addr=0x26e8, .value=0xb5, .type=IO_READ},
        {.addr=0x01b5, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0186) {
    const struct CPU_State initial_cpu = {.pc=0x9fbf, .a=0x2d, .x=0x37, .y=0xe3, .sp=0xbc, .status=0xd2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0013, .value=0xc5}, {.addr=0x9fbf, .value=0x84}, {.addr=0x9fc0, .value=0x13},
    };
    const struct CPU_State final_cpu = {.pc=0x9fc1, .a=0xf2, .x=0x37, .y=0xe3, .sp=0xbc, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x0013, .value=0xc5}, {.addr=0x9fbf, .value=0x84}, {.addr=0x9fc0, .value=0x13},
    };
    const struct BusEvent events[] = {
        {.addr=0x9fbf, .value=0x84, .type=IO_READ},
        {.addr=0x9fc0, .value=0x13, .type=IO_READ},
        {.addr=0x0013, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0187) {
    const struct CPU_State initial_cpu = {.pc=0x1925, .a=0xb5, .x=0x65, .y=0x3f, .sp=0x75, .status=0x5f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006c, .value=0xcd}, {.addr=0x1925, .value=0x84}, {.addr=0x1926, .value=0x6c},
    };
    const struct CPU_State final_cpu = {.pc=0x1927, .a=0x83, .x=0x65, .y=0x3f, .sp=0x75, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x006c, .value=0xcd}, {.addr=0x1925, .value=0x84}, {.addr=0x1926, .value=0x6c},
    };
    const struct BusEvent events[] = {
        {.addr=0x1925, .value=0x84, .type=IO_READ},
        {.addr=0x1926, .value=0x6c, .type=IO_READ},
        {.addr=0x006c, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0188) {
    const struct CPU_State initial_cpu = {.pc=0x0910, .a=0x9c, .x=0x96, .y=0x5a, .sp=0x5b, .status=0xab};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0120, .value=0x48}, {.addr=0x0910, .value=0x84}, {.addr=0x0911, .value=0x20},
    };
    const struct CPU_State final_cpu = {.pc=0x0912, .a=0xe5, .x=0x96, .y=0x5a, .sp=0x5b, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0120, .value=0x48}, {.addr=0x0910, .value=0x84}, {.addr=0x0911, .value=0x20},
    };
    const struct BusEvent events[] = {
        {.addr=0x0910, .value=0x84, .type=IO_READ},
        {.addr=0x0911, .value=0x20, .type=IO_READ},
        {.addr=0x0120, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0189) {
    const struct CPU_State initial_cpu = {.pc=0xb45a, .a=0x10, .x=0xed, .y=0xa4, .sp=0x0e, .status=0xa9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010f, .value=0x81}, {.addr=0xb45a, .value=0x84}, {.addr=0xb45b, .value=0x0f},
    };
    const struct CPU_State final_cpu = {.pc=0xb45c, .a=0x92, .x=0xed, .y=0xa4, .sp=0x0e, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x010f, .value=0x81}, {.addr=0xb45a, .value=0x84}, {.addr=0xb45b, .value=0x0f},
    };
    const struct BusEvent events[] = {
        {.addr=0xb45a, .value=0x84, .type=IO_READ},
        {.addr=0xb45b, .value=0x0f, .type=IO_READ},
        {.addr=0x010f, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_018A) {
    const struct CPU_State initial_cpu = {.pc=0xe420, .a=0x04, .x=0x19, .y=0x67, .sp=0x3c, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0170, .value=0xdd}, {.addr=0xe420, .value=0x84}, {.addr=0xe421, .value=0x70},
    };
    const struct CPU_State final_cpu = {.pc=0xe422, .a=0xe2, .x=0x19, .y=0x67, .sp=0x3c, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0170, .value=0xdd}, {.addr=0xe420, .value=0x84}, {.addr=0xe421, .value=0x70},
    };
    const struct BusEvent events[] = {
        {.addr=0xe420, .value=0x84, .type=IO_READ},
        {.addr=0xe421, .value=0x70, .type=IO_READ},
        {.addr=0x0170, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_018B) {
    const struct CPU_State initial_cpu = {.pc=0x3c90, .a=0x44, .x=0x24, .y=0xca, .sp=0xe8, .status=0x52};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e2, .value=0xe3}, {.addr=0x3c90, .value=0x84}, {.addr=0x3c91, .value=0xe2},
    };
    const struct CPU_State final_cpu = {.pc=0x3c92, .a=0x27, .x=0x24, .y=0xca, .sp=0xe8, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e2, .value=0xe3}, {.addr=0x3c90, .value=0x84}, {.addr=0x3c91, .value=0xe2},
    };
    const struct BusEvent events[] = {
        {.addr=0x3c90, .value=0x84, .type=IO_READ},
        {.addr=0x3c91, .value=0xe2, .type=IO_READ},
        {.addr=0x00e2, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_018C) {
    const struct CPU_State initial_cpu = {.pc=0x5582, .a=0xcb, .x=0x9e, .y=0x81, .sp=0x3f, .status=0x14};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b3, .value=0x9d}, {.addr=0x5582, .value=0x84}, {.addr=0x5583, .value=0xb3},
    };
    const struct CPU_State final_cpu = {.pc=0x5584, .a=0x68, .x=0x9e, .y=0x81, .sp=0x3f, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b3, .value=0x9d}, {.addr=0x5582, .value=0x84}, {.addr=0x5583, .value=0xb3},
    };
    const struct BusEvent events[] = {
        {.addr=0x5582, .value=0x84, .type=IO_READ},
        {.addr=0x5583, .value=0xb3, .type=IO_READ},
        {.addr=0x00b3, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_018D) {
    const struct CPU_State initial_cpu = {.pc=0x54cf, .a=0x84, .x=0x3c, .y=0xb9, .sp=0xc7, .status=0x49};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ad, .value=0x4f}, {.addr=0x54cf, .value=0x84}, {.addr=0x54d0, .value=0xad},
    };
    const struct CPU_State final_cpu = {.pc=0x54d1, .a=0xd4, .x=0x3c, .y=0xb9, .sp=0xc7, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ad, .value=0x4f}, {.addr=0x54cf, .value=0x84}, {.addr=0x54d0, .value=0xad},
    };
    const struct BusEvent events[] = {
        {.addr=0x54cf, .value=0x84, .type=IO_READ},
        {.addr=0x54d0, .value=0xad, .type=IO_READ},
        {.addr=0x00ad, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_018E) {
    const struct CPU_State initial_cpu = {.pc=0x458d, .a=0x41, .x=0xb4, .y=0x74, .sp=0x76, .status=0x26};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013c, .value=0x58}, {.addr=0x458d, .value=0x84}, {.addr=0x458e, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0x458f, .a=0x99, .x=0xb4, .y=0x74, .sp=0x76, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x013c, .value=0x58}, {.addr=0x458d, .value=0x84}, {.addr=0x458e, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0x458d, .value=0x84, .type=IO_READ},
        {.addr=0x458e, .value=0x3c, .type=IO_READ},
        {.addr=0x013c, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_018F) {
    const struct CPU_State initial_cpu = {.pc=0xde66, .a=0x69, .x=0x9f, .y=0x82, .sp=0xfe, .status=0x5e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0055, .value=0xe3}, {.addr=0xde66, .value=0x84}, {.addr=0xde67, .value=0x55},
    };
    const struct CPU_State final_cpu = {.pc=0xde68, .a=0x4c, .x=0x9f, .y=0x82, .sp=0xfe, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x0055, .value=0xe3}, {.addr=0xde66, .value=0x84}, {.addr=0xde67, .value=0x55},
    };
    const struct BusEvent events[] = {
        {.addr=0xde66, .value=0x84, .type=IO_READ},
        {.addr=0xde67, .value=0x55, .type=IO_READ},
        {.addr=0x0055, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0190) {
    const struct CPU_State initial_cpu = {.pc=0x0335, .a=0x9c, .x=0x13, .y=0xbf, .sp=0xd4, .status=0xca};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000c, .value=0xf3}, {.addr=0x0335, .value=0x84}, {.addr=0x0336, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0x0337, .a=0x8f, .x=0x13, .y=0xbf, .sp=0xd4, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x000c, .value=0xf3}, {.addr=0x0335, .value=0x84}, {.addr=0x0336, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0x0335, .value=0x84, .type=IO_READ},
        {.addr=0x0336, .value=0x0c, .type=IO_READ},
        {.addr=0x000c, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0191) {
    const struct CPU_State initial_cpu = {.pc=0xcd97, .a=0x13, .x=0x89, .y=0x63, .sp=0xe1, .status=0xe0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d6, .value=0xfe}, {.addr=0xcd97, .value=0x84}, {.addr=0xcd98, .value=0xd6},
    };
    const struct CPU_State final_cpu = {.pc=0xcd99, .a=0x11, .x=0x89, .y=0x63, .sp=0xe1, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d6, .value=0xfe}, {.addr=0xcd97, .value=0x84}, {.addr=0xcd98, .value=0xd6},
    };
    const struct BusEvent events[] = {
        {.addr=0xcd97, .value=0x84, .type=IO_READ},
        {.addr=0xcd98, .value=0xd6, .type=IO_READ},
        {.addr=0x01d6, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0192) {
    const struct CPU_State initial_cpu = {.pc=0x7156, .a=0x8a, .x=0x8c, .y=0x25, .sp=0x32, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014f, .value=0x8d}, {.addr=0x7156, .value=0x84}, {.addr=0x7157, .value=0x4f},
    };
    const struct CPU_State final_cpu = {.pc=0x7158, .a=0x17, .x=0x8c, .y=0x25, .sp=0x32, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x014f, .value=0x8d}, {.addr=0x7156, .value=0x84}, {.addr=0x7157, .value=0x4f},
    };
    const struct BusEvent events[] = {
        {.addr=0x7156, .value=0x84, .type=IO_READ},
        {.addr=0x7157, .value=0x4f, .type=IO_READ},
        {.addr=0x014f, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0193) {
    const struct CPU_State initial_cpu = {.pc=0x5c8a, .a=0x01, .x=0x83, .y=0x7a, .sp=0xfc, .status=0xa8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0191, .value=0x3c}, {.addr=0x5c8a, .value=0x84}, {.addr=0x5c8b, .value=0x91},
    };
    const struct CPU_State final_cpu = {.pc=0x5c8c, .a=0x3d, .x=0x83, .y=0x7a, .sp=0xfc, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x0191, .value=0x3c}, {.addr=0x5c8a, .value=0x84}, {.addr=0x5c8b, .value=0x91},
    };
    const struct BusEvent events[] = {
        {.addr=0x5c8a, .value=0x84, .type=IO_READ},
        {.addr=0x5c8b, .value=0x91, .type=IO_READ},
        {.addr=0x0191, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0194) {
    const struct CPU_State initial_cpu = {.pc=0x403b, .a=0x89, .x=0x59, .y=0x74, .sp=0xf6, .status=0xf9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0134, .value=0xd6}, {.addr=0x403b, .value=0x84}, {.addr=0x403c, .value=0x34},
    };
    const struct CPU_State final_cpu = {.pc=0x403d, .a=0x60, .x=0x59, .y=0x74, .sp=0xf6, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x0134, .value=0xd6}, {.addr=0x403b, .value=0x84}, {.addr=0x403c, .value=0x34},
    };
    const struct BusEvent events[] = {
        {.addr=0x403b, .value=0x84, .type=IO_READ},
        {.addr=0x403c, .value=0x34, .type=IO_READ},
        {.addr=0x0134, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0195) {
    const struct CPU_State initial_cpu = {.pc=0xc300, .a=0x36, .x=0xd4, .y=0x8c, .sp=0xa3, .status=0x5b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006b, .value=0xb9}, {.addr=0xc300, .value=0x84}, {.addr=0xc301, .value=0x6b},
    };
    const struct CPU_State final_cpu = {.pc=0xc302, .a=0xf0, .x=0xd4, .y=0x8c, .sp=0xa3, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x006b, .value=0xb9}, {.addr=0xc300, .value=0x84}, {.addr=0xc301, .value=0x6b},
    };
    const struct BusEvent events[] = {
        {.addr=0xc300, .value=0x84, .type=IO_READ},
        {.addr=0xc301, .value=0x6b, .type=IO_READ},
        {.addr=0x006b, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0197) {
    const struct CPU_State initial_cpu = {.pc=0x4926, .a=0x99, .x=0xed, .y=0xb5, .sp=0xee, .status=0xd5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0030, .value=0xe4}, {.addr=0x4926, .value=0x84}, {.addr=0x4927, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0x4928, .a=0x7e, .x=0xed, .y=0xb5, .sp=0xee, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x0030, .value=0xe4}, {.addr=0x4926, .value=0x84}, {.addr=0x4927, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0x4926, .value=0x84, .type=IO_READ},
        {.addr=0x4927, .value=0x30, .type=IO_READ},
        {.addr=0x0030, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0198) {
    const struct CPU_State initial_cpu = {.pc=0x5b2a, .a=0x54, .x=0xa7, .y=0xd9, .sp=0xb2, .status=0x99};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c2, .value=0x82}, {.addr=0x5b2a, .value=0x84}, {.addr=0x5b2b, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0x5b2c, .a=0xd7, .x=0xa7, .y=0xd9, .sp=0xb2, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c2, .value=0x82}, {.addr=0x5b2a, .value=0x84}, {.addr=0x5b2b, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0x5b2a, .value=0x84, .type=IO_READ},
        {.addr=0x5b2b, .value=0xc2, .type=IO_READ},
        {.addr=0x00c2, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0199) {
    const struct CPU_State initial_cpu = {.pc=0x30be, .a=0x62, .x=0x17, .y=0x3c, .sp=0x16, .status=0x15};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000a, .value=0xc2}, {.addr=0x30be, .value=0x84}, {.addr=0x30bf, .value=0x0a},
    };
    const struct CPU_State final_cpu = {.pc=0x30c0, .a=0x25, .x=0x17, .y=0x3c, .sp=0x16, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x000a, .value=0xc2}, {.addr=0x30be, .value=0x84}, {.addr=0x30bf, .value=0x0a},
    };
    const struct BusEvent events[] = {
        {.addr=0x30be, .value=0x84, .type=IO_READ},
        {.addr=0x30bf, .value=0x0a, .type=IO_READ},
        {.addr=0x000a, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_019A) {
    const struct CPU_State initial_cpu = {.pc=0x103f, .a=0xf6, .x=0x41, .y=0x6d, .sp=0xde, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ec, .value=0xec}, {.addr=0x103f, .value=0x84}, {.addr=0x1040, .value=0xec},
    };
    const struct CPU_State final_cpu = {.pc=0x1041, .a=0xe2, .x=0x41, .y=0x6d, .sp=0xde, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ec, .value=0xec}, {.addr=0x103f, .value=0x84}, {.addr=0x1040, .value=0xec},
    };
    const struct BusEvent events[] = {
        {.addr=0x103f, .value=0x84, .type=IO_READ},
        {.addr=0x1040, .value=0xec, .type=IO_READ},
        {.addr=0x00ec, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_019B) {
    const struct CPU_State initial_cpu = {.pc=0x5e9e, .a=0x93, .x=0x4c, .y=0x85, .sp=0xaa, .status=0xeb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0180, .value=0xb3}, {.addr=0x5e9e, .value=0x84}, {.addr=0x5e9f, .value=0x80},
    };
    const struct CPU_State final_cpu = {.pc=0x5ea0, .a=0x47, .x=0x4c, .y=0x85, .sp=0xaa, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x0180, .value=0xb3}, {.addr=0x5e9e, .value=0x84}, {.addr=0x5e9f, .value=0x80},
    };
    const struct BusEvent events[] = {
        {.addr=0x5e9e, .value=0x84, .type=IO_READ},
        {.addr=0x5e9f, .value=0x80, .type=IO_READ},
        {.addr=0x0180, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_019C) {
    const struct CPU_State initial_cpu = {.pc=0x81d8, .a=0x83, .x=0x79, .y=0x56, .sp=0xf0, .status=0xbe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0133, .value=0x9f}, {.addr=0x81d8, .value=0x84}, {.addr=0x81d9, .value=0x33},
    };
    const struct CPU_State final_cpu = {.pc=0x81da, .a=0x22, .x=0x79, .y=0x56, .sp=0xf0, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0133, .value=0x9f}, {.addr=0x81d8, .value=0x84}, {.addr=0x81d9, .value=0x33},
    };
    const struct BusEvent events[] = {
        {.addr=0x81d8, .value=0x84, .type=IO_READ},
        {.addr=0x81d9, .value=0x33, .type=IO_READ},
        {.addr=0x0133, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_019D) {
    const struct CPU_State initial_cpu = {.pc=0x0dee, .a=0x1c, .x=0x14, .y=0x84, .sp=0x01, .status=0x8c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000f, .value=0x5d}, {.addr=0x0dee, .value=0x84}, {.addr=0x0def, .value=0x0f},
    };
    const struct CPU_State final_cpu = {.pc=0x0df0, .a=0x79, .x=0x14, .y=0x84, .sp=0x01, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x000f, .value=0x5d}, {.addr=0x0dee, .value=0x84}, {.addr=0x0def, .value=0x0f},
    };
    const struct BusEvent events[] = {
        {.addr=0x0dee, .value=0x84, .type=IO_READ},
        {.addr=0x0def, .value=0x0f, .type=IO_READ},
        {.addr=0x000f, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_019E) {
    const struct CPU_State initial_cpu = {.pc=0x0922, .a=0xc7, .x=0x4b, .y=0xc0, .sp=0x53, .status=0x7c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014f, .value=0xad}, {.addr=0x0922, .value=0x84}, {.addr=0x0923, .value=0x4f},
    };
    const struct CPU_State final_cpu = {.pc=0x0924, .a=0x74, .x=0x4b, .y=0xc0, .sp=0x53, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x014f, .value=0xad}, {.addr=0x0922, .value=0x84}, {.addr=0x0923, .value=0x4f},
    };
    const struct BusEvent events[] = {
        {.addr=0x0922, .value=0x84, .type=IO_READ},
        {.addr=0x0923, .value=0x4f, .type=IO_READ},
        {.addr=0x014f, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_019F) {
    const struct CPU_State initial_cpu = {.pc=0xb5f2, .a=0x69, .x=0x3d, .y=0x26, .sp=0xb7, .status=0x0c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b3, .value=0x56}, {.addr=0xb5f2, .value=0x84}, {.addr=0xb5f3, .value=0xb3},
    };
    const struct CPU_State final_cpu = {.pc=0xb5f4, .a=0xbf, .x=0x3d, .y=0x26, .sp=0xb7, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b3, .value=0x56}, {.addr=0xb5f2, .value=0x84}, {.addr=0xb5f3, .value=0xb3},
    };
    const struct BusEvent events[] = {
        {.addr=0xb5f2, .value=0x84, .type=IO_READ},
        {.addr=0xb5f3, .value=0xb3, .type=IO_READ},
        {.addr=0x00b3, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x303f, .a=0x2f, .x=0xa6, .y=0xe2, .sp=0x0d, .status=0x30};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0195, .value=0x0e}, {.addr=0x303f, .value=0x84}, {.addr=0x3040, .value=0x95},
    };
    const struct CPU_State final_cpu = {.pc=0x3041, .a=0x3d, .x=0xa6, .y=0xe2, .sp=0x0d, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x0195, .value=0x0e}, {.addr=0x303f, .value=0x84}, {.addr=0x3040, .value=0x95},
    };
    const struct BusEvent events[] = {
        {.addr=0x303f, .value=0x84, .type=IO_READ},
        {.addr=0x3040, .value=0x95, .type=IO_READ},
        {.addr=0x0195, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01A1) {
    const struct CPU_State initial_cpu = {.pc=0xf4ac, .a=0xd9, .x=0x38, .y=0x4e, .sp=0xe5, .status=0x76};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ce, .value=0x02}, {.addr=0xf4ac, .value=0x84}, {.addr=0xf4ad, .value=0xce},
    };
    const struct CPU_State final_cpu = {.pc=0xf4ae, .a=0xdb, .x=0x38, .y=0x4e, .sp=0xe5, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ce, .value=0x02}, {.addr=0xf4ac, .value=0x84}, {.addr=0xf4ad, .value=0xce},
    };
    const struct BusEvent events[] = {
        {.addr=0xf4ac, .value=0x84, .type=IO_READ},
        {.addr=0xf4ad, .value=0xce, .type=IO_READ},
        {.addr=0x01ce, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01A2) {
    const struct CPU_State initial_cpu = {.pc=0x0e20, .a=0xb0, .x=0x73, .y=0x8c, .sp=0x77, .status=0xc1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d7, .value=0xa0}, {.addr=0x0e20, .value=0x84}, {.addr=0x0e21, .value=0xd7},
    };
    const struct CPU_State final_cpu = {.pc=0x0e22, .a=0x51, .x=0x73, .y=0x8c, .sp=0x77, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d7, .value=0xa0}, {.addr=0x0e20, .value=0x84}, {.addr=0x0e21, .value=0xd7},
    };
    const struct BusEvent events[] = {
        {.addr=0x0e20, .value=0x84, .type=IO_READ},
        {.addr=0x0e21, .value=0xd7, .type=IO_READ},
        {.addr=0x00d7, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01A3) {
    const struct CPU_State initial_cpu = {.pc=0x0d6f, .a=0xb9, .x=0xec, .y=0x2e, .sp=0x71, .status=0x73};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a5, .value=0xb7}, {.addr=0x0d6f, .value=0x84}, {.addr=0x0d70, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0x0d71, .a=0x71, .x=0xec, .y=0x2e, .sp=0x71, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a5, .value=0xb7}, {.addr=0x0d6f, .value=0x84}, {.addr=0x0d70, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0x0d6f, .value=0x84, .type=IO_READ},
        {.addr=0x0d70, .value=0xa5, .type=IO_READ},
        {.addr=0x01a5, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01A4) {
    const struct CPU_State initial_cpu = {.pc=0x80fa, .a=0xe5, .x=0xa5, .y=0xab, .sp=0x03, .status=0x0d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0061, .value=0xb0}, {.addr=0x80fa, .value=0x84}, {.addr=0x80fb, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0x80fc, .a=0x96, .x=0xa5, .y=0xab, .sp=0x03, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x0061, .value=0xb0}, {.addr=0x80fa, .value=0x84}, {.addr=0x80fb, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0x80fa, .value=0x84, .type=IO_READ},
        {.addr=0x80fb, .value=0x61, .type=IO_READ},
        {.addr=0x0061, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01A5) {
    const struct CPU_State initial_cpu = {.pc=0x89aa, .a=0x46, .x=0x37, .y=0xd1, .sp=0x32, .status=0x81};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0094, .value=0x95}, {.addr=0x89aa, .value=0x84}, {.addr=0x89ab, .value=0x94},
    };
    const struct CPU_State final_cpu = {.pc=0x89ac, .a=0xdc, .x=0x37, .y=0xd1, .sp=0x32, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x0094, .value=0x95}, {.addr=0x89aa, .value=0x84}, {.addr=0x89ab, .value=0x94},
    };
    const struct BusEvent events[] = {
        {.addr=0x89aa, .value=0x84, .type=IO_READ},
        {.addr=0x89ab, .value=0x94, .type=IO_READ},
        {.addr=0x0094, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01A6) {
    const struct CPU_State initial_cpu = {.pc=0x355c, .a=0x0d, .x=0xe3, .y=0x76, .sp=0xec, .status=0x0a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0056, .value=0x89}, {.addr=0x355c, .value=0x84}, {.addr=0x355d, .value=0x56},
    };
    const struct CPU_State final_cpu = {.pc=0x355e, .a=0x96, .x=0xe3, .y=0x76, .sp=0xec, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x0056, .value=0x89}, {.addr=0x355c, .value=0x84}, {.addr=0x355d, .value=0x56},
    };
    const struct BusEvent events[] = {
        {.addr=0x355c, .value=0x84, .type=IO_READ},
        {.addr=0x355d, .value=0x56, .type=IO_READ},
        {.addr=0x0056, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01A7) {
    const struct CPU_State initial_cpu = {.pc=0xcb86, .a=0x89, .x=0xd6, .y=0x35, .sp=0x8a, .status=0x00};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b4, .value=0xe6}, {.addr=0xcb86, .value=0x84}, {.addr=0xcb87, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0xcb88, .a=0x6f, .x=0xd6, .y=0x35, .sp=0x8a, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b4, .value=0xe6}, {.addr=0xcb86, .value=0x84}, {.addr=0xcb87, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0xcb86, .value=0x84, .type=IO_READ},
        {.addr=0xcb87, .value=0xb4, .type=IO_READ},
        {.addr=0x00b4, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01A8) {
    const struct CPU_State initial_cpu = {.pc=0x2f67, .a=0x3e, .x=0x8b, .y=0x0a, .sp=0xc4, .status=0x97};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0043, .value=0xa6}, {.addr=0x2f67, .value=0x84}, {.addr=0x2f68, .value=0x43},
    };
    const struct CPU_State final_cpu = {.pc=0x2f69, .a=0xe5, .x=0x8b, .y=0x0a, .sp=0xc4, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0043, .value=0xa6}, {.addr=0x2f67, .value=0x84}, {.addr=0x2f68, .value=0x43},
    };
    const struct BusEvent events[] = {
        {.addr=0x2f67, .value=0x84, .type=IO_READ},
        {.addr=0x2f68, .value=0x43, .type=IO_READ},
        {.addr=0x0043, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01A9) {
    const struct CPU_State initial_cpu = {.pc=0x6f6e, .a=0x5d, .x=0x54, .y=0xfb, .sp=0x05, .status=0x64};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012c, .value=0x02}, {.addr=0x6f6e, .value=0x84}, {.addr=0x6f6f, .value=0x2c},
    };
    const struct CPU_State final_cpu = {.pc=0x6f70, .a=0x5f, .x=0x54, .y=0xfb, .sp=0x05, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x012c, .value=0x02}, {.addr=0x6f6e, .value=0x84}, {.addr=0x6f6f, .value=0x2c},
    };
    const struct BusEvent events[] = {
        {.addr=0x6f6e, .value=0x84, .type=IO_READ},
        {.addr=0x6f6f, .value=0x2c, .type=IO_READ},
        {.addr=0x012c, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x63f7, .a=0x33, .x=0xeb, .y=0xa3, .sp=0xed, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015b, .value=0xee}, {.addr=0x63f7, .value=0x84}, {.addr=0x63f8, .value=0x5b},
    };
    const struct CPU_State final_cpu = {.pc=0x63f9, .a=0x22, .x=0xeb, .y=0xa3, .sp=0xed, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x015b, .value=0xee}, {.addr=0x63f7, .value=0x84}, {.addr=0x63f8, .value=0x5b},
    };
    const struct BusEvent events[] = {
        {.addr=0x63f7, .value=0x84, .type=IO_READ},
        {.addr=0x63f8, .value=0x5b, .type=IO_READ},
        {.addr=0x015b, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x2196, .a=0xd4, .x=0xb6, .y=0x9e, .sp=0x6f, .status=0x5e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e9, .value=0x9b}, {.addr=0x2196, .value=0x84}, {.addr=0x2197, .value=0xe9},
    };
    const struct CPU_State final_cpu = {.pc=0x2198, .a=0x6f, .x=0xb6, .y=0x9e, .sp=0x6f, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e9, .value=0x9b}, {.addr=0x2196, .value=0x84}, {.addr=0x2197, .value=0xe9},
    };
    const struct BusEvent events[] = {
        {.addr=0x2196, .value=0x84, .type=IO_READ},
        {.addr=0x2197, .value=0xe9, .type=IO_READ},
        {.addr=0x00e9, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01AC) {
    const struct CPU_State initial_cpu = {.pc=0x19e2, .a=0x3c, .x=0xde, .y=0xc7, .sp=0x44, .status=0x3f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bd, .value=0x88}, {.addr=0x19e2, .value=0x84}, {.addr=0x19e3, .value=0xbd},
    };
    const struct CPU_State final_cpu = {.pc=0x19e4, .a=0xc5, .x=0xde, .y=0xc7, .sp=0x44, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bd, .value=0x88}, {.addr=0x19e2, .value=0x84}, {.addr=0x19e3, .value=0xbd},
    };
    const struct BusEvent events[] = {
        {.addr=0x19e2, .value=0x84, .type=IO_READ},
        {.addr=0x19e3, .value=0xbd, .type=IO_READ},
        {.addr=0x01bd, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01AD) {
    const struct CPU_State initial_cpu = {.pc=0x346b, .a=0x0c, .x=0x0b, .y=0x6a, .sp=0xf0, .status=0x9a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0056, .value=0x9e}, {.addr=0x346b, .value=0x84}, {.addr=0x346c, .value=0x56},
    };
    const struct CPU_State final_cpu = {.pc=0x346d, .a=0xaa, .x=0x0b, .y=0x6a, .sp=0xf0, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x0056, .value=0x9e}, {.addr=0x346b, .value=0x84}, {.addr=0x346c, .value=0x56},
    };
    const struct BusEvent events[] = {
        {.addr=0x346b, .value=0x84, .type=IO_READ},
        {.addr=0x346c, .value=0x56, .type=IO_READ},
        {.addr=0x0056, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01AE) {
    const struct CPU_State initial_cpu = {.pc=0x38fd, .a=0x2a, .x=0x82, .y=0xad, .sp=0xa0, .status=0xf9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011d, .value=0xb0}, {.addr=0x38fd, .value=0x84}, {.addr=0x38fe, .value=0x1d},
    };
    const struct CPU_State final_cpu = {.pc=0x38ff, .a=0xdb, .x=0x82, .y=0xad, .sp=0xa0, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x011d, .value=0xb0}, {.addr=0x38fd, .value=0x84}, {.addr=0x38fe, .value=0x1d},
    };
    const struct BusEvent events[] = {
        {.addr=0x38fd, .value=0x84, .type=IO_READ},
        {.addr=0x38fe, .value=0x1d, .type=IO_READ},
        {.addr=0x011d, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x5ce5, .a=0x33, .x=0x8b, .y=0xad, .sp=0xbf, .status=0xa5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0159, .value=0x8a}, {.addr=0x5ce5, .value=0x84}, {.addr=0x5ce6, .value=0x59},
    };
    const struct CPU_State final_cpu = {.pc=0x5ce7, .a=0xbe, .x=0x8b, .y=0xad, .sp=0xbf, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0159, .value=0x8a}, {.addr=0x5ce5, .value=0x84}, {.addr=0x5ce6, .value=0x59},
    };
    const struct BusEvent events[] = {
        {.addr=0x5ce5, .value=0x84, .type=IO_READ},
        {.addr=0x5ce6, .value=0x59, .type=IO_READ},
        {.addr=0x0159, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01B1) {
    const struct CPU_State initial_cpu = {.pc=0xa77e, .a=0x8d, .x=0x5a, .y=0xef, .sp=0x49, .status=0x6e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0196, .value=0xac}, {.addr=0xa77e, .value=0x84}, {.addr=0xa77f, .value=0x96},
    };
    const struct CPU_State final_cpu = {.pc=0xa780, .a=0x39, .x=0x5a, .y=0xef, .sp=0x49, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0196, .value=0xac}, {.addr=0xa77e, .value=0x84}, {.addr=0xa77f, .value=0x96},
    };
    const struct BusEvent events[] = {
        {.addr=0xa77e, .value=0x84, .type=IO_READ},
        {.addr=0xa77f, .value=0x96, .type=IO_READ},
        {.addr=0x0196, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01B2) {
    const struct CPU_State initial_cpu = {.pc=0xe90f, .a=0xd0, .x=0xfb, .y=0x93, .sp=0x9e, .status=0xb3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a9, .value=0x42}, {.addr=0xe90f, .value=0x84}, {.addr=0xe910, .value=0xa9},
    };
    const struct CPU_State final_cpu = {.pc=0xe911, .a=0x13, .x=0xfb, .y=0x93, .sp=0x9e, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a9, .value=0x42}, {.addr=0xe90f, .value=0x84}, {.addr=0xe910, .value=0xa9},
    };
    const struct BusEvent events[] = {
        {.addr=0xe90f, .value=0x84, .type=IO_READ},
        {.addr=0xe910, .value=0xa9, .type=IO_READ},
        {.addr=0x01a9, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01B3) {
    const struct CPU_State initial_cpu = {.pc=0xff88, .a=0x5e, .x=0x72, .y=0xfb, .sp=0xc5, .status=0x22};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0124, .value=0xdd}, {.addr=0xff88, .value=0x84}, {.addr=0xff89, .value=0x24},
    };
    const struct CPU_State final_cpu = {.pc=0xff8a, .a=0x3b, .x=0x72, .y=0xfb, .sp=0xc5, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x0124, .value=0xdd}, {.addr=0xff88, .value=0x84}, {.addr=0xff89, .value=0x24},
    };
    const struct BusEvent events[] = {
        {.addr=0xff88, .value=0x84, .type=IO_READ},
        {.addr=0xff89, .value=0x24, .type=IO_READ},
        {.addr=0x0124, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01B4) {
    const struct CPU_State initial_cpu = {.pc=0xcdb8, .a=0xda, .x=0xa8, .y=0x6c, .sp=0x18, .status=0x72};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0179, .value=0x9f}, {.addr=0xcdb8, .value=0x84}, {.addr=0xcdb9, .value=0x79},
    };
    const struct CPU_State final_cpu = {.pc=0xcdba, .a=0x79, .x=0xa8, .y=0x6c, .sp=0x18, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x0179, .value=0x9f}, {.addr=0xcdb8, .value=0x84}, {.addr=0xcdb9, .value=0x79},
    };
    const struct BusEvent events[] = {
        {.addr=0xcdb8, .value=0x84, .type=IO_READ},
        {.addr=0xcdb9, .value=0x79, .type=IO_READ},
        {.addr=0x0179, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01B5) {
    const struct CPU_State initial_cpu = {.pc=0x0706, .a=0x35, .x=0x34, .y=0x3a, .sp=0x0c, .status=0x4f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00dc, .value=0xc7}, {.addr=0x0706, .value=0x84}, {.addr=0x0707, .value=0xdc},
    };
    const struct CPU_State final_cpu = {.pc=0x0708, .a=0xfd, .x=0x34, .y=0x3a, .sp=0x0c, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x00dc, .value=0xc7}, {.addr=0x0706, .value=0x84}, {.addr=0x0707, .value=0xdc},
    };
    const struct BusEvent events[] = {
        {.addr=0x0706, .value=0x84, .type=IO_READ},
        {.addr=0x0707, .value=0xdc, .type=IO_READ},
        {.addr=0x00dc, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01B6) {
    const struct CPU_State initial_cpu = {.pc=0x2e2d, .a=0xd5, .x=0xec, .y=0x9e, .sp=0x40, .status=0x3a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a1, .value=0x50}, {.addr=0x2e2d, .value=0x84}, {.addr=0x2e2e, .value=0xa1},
    };
    const struct CPU_State final_cpu = {.pc=0x2e2f, .a=0x25, .x=0xec, .y=0x9e, .sp=0x40, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a1, .value=0x50}, {.addr=0x2e2d, .value=0x84}, {.addr=0x2e2e, .value=0xa1},
    };
    const struct BusEvent events[] = {
        {.addr=0x2e2d, .value=0x84, .type=IO_READ},
        {.addr=0x2e2e, .value=0xa1, .type=IO_READ},
        {.addr=0x01a1, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01B7) {
    const struct CPU_State initial_cpu = {.pc=0xd6d7, .a=0x1f, .x=0xf3, .y=0x50, .sp=0x64, .status=0x56};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0086, .value=0xe7}, {.addr=0xd6d7, .value=0x84}, {.addr=0xd6d8, .value=0x86},
    };
    const struct CPU_State final_cpu = {.pc=0xd6d9, .a=0x06, .x=0xf3, .y=0x50, .sp=0x64, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0086, .value=0xe7}, {.addr=0xd6d7, .value=0x84}, {.addr=0xd6d8, .value=0x86},
    };
    const struct BusEvent events[] = {
        {.addr=0xd6d7, .value=0x84, .type=IO_READ},
        {.addr=0xd6d8, .value=0x86, .type=IO_READ},
        {.addr=0x0086, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01B8) {
    const struct CPU_State initial_cpu = {.pc=0x64a1, .a=0xb7, .x=0x1a, .y=0xc7, .sp=0x08, .status=0x7e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cc, .value=0xbf}, {.addr=0x64a1, .value=0x84}, {.addr=0x64a2, .value=0xcc},
    };
    const struct CPU_State final_cpu = {.pc=0x64a3, .a=0x76, .x=0x1a, .y=0xc7, .sp=0x08, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cc, .value=0xbf}, {.addr=0x64a1, .value=0x84}, {.addr=0x64a2, .value=0xcc},
    };
    const struct BusEvent events[] = {
        {.addr=0x64a1, .value=0x84, .type=IO_READ},
        {.addr=0x64a2, .value=0xcc, .type=IO_READ},
        {.addr=0x01cc, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x71c9, .a=0xb2, .x=0xe4, .y=0xcb, .sp=0x87, .status=0xf9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019f, .value=0x27}, {.addr=0x71c9, .value=0x84}, {.addr=0x71ca, .value=0x9f},
    };
    const struct CPU_State final_cpu = {.pc=0x71cb, .a=0xda, .x=0xe4, .y=0xcb, .sp=0x87, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x019f, .value=0x27}, {.addr=0x71c9, .value=0x84}, {.addr=0x71ca, .value=0x9f},
    };
    const struct BusEvent events[] = {
        {.addr=0x71c9, .value=0x84, .type=IO_READ},
        {.addr=0x71ca, .value=0x9f, .type=IO_READ},
        {.addr=0x019f, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01BA) {
    const struct CPU_State initial_cpu = {.pc=0xf2b8, .a=0x29, .x=0x1f, .y=0xee, .sp=0x59, .status=0x50};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0039, .value=0x18}, {.addr=0xf2b8, .value=0x84}, {.addr=0xf2b9, .value=0x39},
    };
    const struct CPU_State final_cpu = {.pc=0xf2ba, .a=0x41, .x=0x1f, .y=0xee, .sp=0x59, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x0039, .value=0x18}, {.addr=0xf2b8, .value=0x84}, {.addr=0xf2b9, .value=0x39},
    };
    const struct BusEvent events[] = {
        {.addr=0xf2b8, .value=0x84, .type=IO_READ},
        {.addr=0xf2b9, .value=0x39, .type=IO_READ},
        {.addr=0x0039, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01BB) {
    const struct CPU_State initial_cpu = {.pc=0x27f5, .a=0x4e, .x=0x5b, .y=0x15, .sp=0xa8, .status=0x20};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0106, .value=0x00}, {.addr=0x27f5, .value=0x84}, {.addr=0x27f6, .value=0x06},
    };
    const struct CPU_State final_cpu = {.pc=0x27f7, .a=0x4e, .x=0x5b, .y=0x15, .sp=0xa8, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x0106, .value=0x00}, {.addr=0x27f5, .value=0x84}, {.addr=0x27f6, .value=0x06},
    };
    const struct BusEvent events[] = {
        {.addr=0x27f5, .value=0x84, .type=IO_READ},
        {.addr=0x27f6, .value=0x06, .type=IO_READ},
        {.addr=0x0106, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01BC) {
    const struct CPU_State initial_cpu = {.pc=0x5bfa, .a=0x08, .x=0x94, .y=0xc8, .sp=0xc9, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0018, .value=0xa1}, {.addr=0x5bfa, .value=0x84}, {.addr=0x5bfb, .value=0x18},
    };
    const struct CPU_State final_cpu = {.pc=0x5bfc, .a=0xa9, .x=0x94, .y=0xc8, .sp=0xc9, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x0018, .value=0xa1}, {.addr=0x5bfa, .value=0x84}, {.addr=0x5bfb, .value=0x18},
    };
    const struct BusEvent events[] = {
        {.addr=0x5bfa, .value=0x84, .type=IO_READ},
        {.addr=0x5bfb, .value=0x18, .type=IO_READ},
        {.addr=0x0018, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01BD) {
    const struct CPU_State initial_cpu = {.pc=0xcc06, .a=0xd3, .x=0x38, .y=0x72, .sp=0x32, .status=0xdb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a3, .value=0x5f}, {.addr=0xcc06, .value=0x84}, {.addr=0xcc07, .value=0xa3},
    };
    const struct CPU_State final_cpu = {.pc=0xcc08, .a=0x33, .x=0x38, .y=0x72, .sp=0x32, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a3, .value=0x5f}, {.addr=0xcc06, .value=0x84}, {.addr=0xcc07, .value=0xa3},
    };
    const struct BusEvent events[] = {
        {.addr=0xcc06, .value=0x84, .type=IO_READ},
        {.addr=0xcc07, .value=0xa3, .type=IO_READ},
        {.addr=0x00a3, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01BE) {
    const struct CPU_State initial_cpu = {.pc=0x8978, .a=0x97, .x=0x39, .y=0xd0, .sp=0x2c, .status=0x83};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008a, .value=0x14}, {.addr=0x8978, .value=0x84}, {.addr=0x8979, .value=0x8a},
    };
    const struct CPU_State final_cpu = {.pc=0x897a, .a=0xac, .x=0x39, .y=0xd0, .sp=0x2c, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x008a, .value=0x14}, {.addr=0x8978, .value=0x84}, {.addr=0x8979, .value=0x8a},
    };
    const struct BusEvent events[] = {
        {.addr=0x8978, .value=0x84, .type=IO_READ},
        {.addr=0x8979, .value=0x8a, .type=IO_READ},
        {.addr=0x008a, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01BF) {
    const struct CPU_State initial_cpu = {.pc=0x6531, .a=0xcf, .x=0xe7, .y=0xec, .sp=0xb2, .status=0xbc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0132, .value=0xd3}, {.addr=0x6531, .value=0x84}, {.addr=0x6532, .value=0x32},
    };
    const struct CPU_State final_cpu = {.pc=0x6533, .a=0xa2, .x=0xe7, .y=0xec, .sp=0xb2, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0132, .value=0xd3}, {.addr=0x6531, .value=0x84}, {.addr=0x6532, .value=0x32},
    };
    const struct BusEvent events[] = {
        {.addr=0x6531, .value=0x84, .type=IO_READ},
        {.addr=0x6532, .value=0x32, .type=IO_READ},
        {.addr=0x0132, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01C0) {
    const struct CPU_State initial_cpu = {.pc=0xcaf1, .a=0x50, .x=0x51, .y=0x77, .sp=0x56, .status=0xdb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0058, .value=0x2f}, {.addr=0xcaf1, .value=0x84}, {.addr=0xcaf2, .value=0x58},
    };
    const struct CPU_State final_cpu = {.pc=0xcaf3, .a=0x80, .x=0x51, .y=0x77, .sp=0x56, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0058, .value=0x2f}, {.addr=0xcaf1, .value=0x84}, {.addr=0xcaf2, .value=0x58},
    };
    const struct BusEvent events[] = {
        {.addr=0xcaf1, .value=0x84, .type=IO_READ},
        {.addr=0xcaf2, .value=0x58, .type=IO_READ},
        {.addr=0x0058, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x923d, .a=0x96, .x=0x01, .y=0x25, .sp=0xbc, .status=0x2f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019f, .value=0xe7}, {.addr=0x923d, .value=0x84}, {.addr=0x923e, .value=0x9f},
    };
    const struct CPU_State final_cpu = {.pc=0x923f, .a=0x7e, .x=0x01, .y=0x25, .sp=0xbc, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x019f, .value=0xe7}, {.addr=0x923d, .value=0x84}, {.addr=0x923e, .value=0x9f},
    };
    const struct BusEvent events[] = {
        {.addr=0x923d, .value=0x84, .type=IO_READ},
        {.addr=0x923e, .value=0x9f, .type=IO_READ},
        {.addr=0x019f, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01C2) {
    const struct CPU_State initial_cpu = {.pc=0xd9a7, .a=0x5b, .x=0x4a, .y=0xac, .sp=0xbd, .status=0xc9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002d, .value=0xd5}, {.addr=0xd9a7, .value=0x84}, {.addr=0xd9a8, .value=0x2d},
    };
    const struct CPU_State final_cpu = {.pc=0xd9a9, .a=0x31, .x=0x4a, .y=0xac, .sp=0xbd, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x002d, .value=0xd5}, {.addr=0xd9a7, .value=0x84}, {.addr=0xd9a8, .value=0x2d},
    };
    const struct BusEvent events[] = {
        {.addr=0xd9a7, .value=0x84, .type=IO_READ},
        {.addr=0xd9a8, .value=0x2d, .type=IO_READ},
        {.addr=0x002d, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01C3) {
    const struct CPU_State initial_cpu = {.pc=0x9700, .a=0x86, .x=0xf0, .y=0x94, .sp=0xe5, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0196, .value=0x1c}, {.addr=0x9700, .value=0x84}, {.addr=0x9701, .value=0x96},
    };
    const struct CPU_State final_cpu = {.pc=0x9702, .a=0xa3, .x=0xf0, .y=0x94, .sp=0xe5, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0196, .value=0x1c}, {.addr=0x9700, .value=0x84}, {.addr=0x9701, .value=0x96},
    };
    const struct BusEvent events[] = {
        {.addr=0x9700, .value=0x84, .type=IO_READ},
        {.addr=0x9701, .value=0x96, .type=IO_READ},
        {.addr=0x0196, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x45d8, .a=0x40, .x=0x5b, .y=0x53, .sp=0x43, .status=0xf1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014a, .value=0x06}, {.addr=0x45d8, .value=0x84}, {.addr=0x45d9, .value=0x4a},
    };
    const struct CPU_State final_cpu = {.pc=0x45da, .a=0x47, .x=0x5b, .y=0x53, .sp=0x43, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x014a, .value=0x06}, {.addr=0x45d8, .value=0x84}, {.addr=0x45d9, .value=0x4a},
    };
    const struct BusEvent events[] = {
        {.addr=0x45d8, .value=0x84, .type=IO_READ},
        {.addr=0x45d9, .value=0x4a, .type=IO_READ},
        {.addr=0x014a, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x2804, .a=0x4c, .x=0xde, .y=0x6c, .sp=0xa2, .status=0xff};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0145, .value=0x7c}, {.addr=0x2804, .value=0x84}, {.addr=0x2805, .value=0x45},
    };
    const struct CPU_State final_cpu = {.pc=0x2806, .a=0xc9, .x=0xde, .y=0x6c, .sp=0xa2, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0145, .value=0x7c}, {.addr=0x2804, .value=0x84}, {.addr=0x2805, .value=0x45},
    };
    const struct BusEvent events[] = {
        {.addr=0x2804, .value=0x84, .type=IO_READ},
        {.addr=0x2805, .value=0x45, .type=IO_READ},
        {.addr=0x0145, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01C6) {
    const struct CPU_State initial_cpu = {.pc=0x2da2, .a=0x82, .x=0xfd, .y=0xae, .sp=0xd5, .status=0xba};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f8, .value=0x82}, {.addr=0x2da2, .value=0x84}, {.addr=0x2da3, .value=0xf8},
    };
    const struct CPU_State final_cpu = {.pc=0x2da4, .a=0x04, .x=0xfd, .y=0xae, .sp=0xd5, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f8, .value=0x82}, {.addr=0x2da2, .value=0x84}, {.addr=0x2da3, .value=0xf8},
    };
    const struct BusEvent events[] = {
        {.addr=0x2da2, .value=0x84, .type=IO_READ},
        {.addr=0x2da3, .value=0xf8, .type=IO_READ},
        {.addr=0x01f8, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01C7) {
    const struct CPU_State initial_cpu = {.pc=0x0d06, .a=0x6e, .x=0x64, .y=0xcd, .sp=0x05, .status=0x0e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00de, .value=0x5b}, {.addr=0x0d06, .value=0x84}, {.addr=0x0d07, .value=0xde},
    };
    const struct CPU_State final_cpu = {.pc=0x0d08, .a=0xc9, .x=0x64, .y=0xcd, .sp=0x05, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00de, .value=0x5b}, {.addr=0x0d06, .value=0x84}, {.addr=0x0d07, .value=0xde},
    };
    const struct BusEvent events[] = {
        {.addr=0x0d06, .value=0x84, .type=IO_READ},
        {.addr=0x0d07, .value=0xde, .type=IO_READ},
        {.addr=0x00de, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01C8) {
    const struct CPU_State initial_cpu = {.pc=0x91cc, .a=0x63, .x=0xfd, .y=0x44, .sp=0x97, .status=0x76};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0153, .value=0xcc}, {.addr=0x91cc, .value=0x84}, {.addr=0x91cd, .value=0x53},
    };
    const struct CPU_State final_cpu = {.pc=0x91ce, .a=0x2f, .x=0xfd, .y=0x44, .sp=0x97, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x0153, .value=0xcc}, {.addr=0x91cc, .value=0x84}, {.addr=0x91cd, .value=0x53},
    };
    const struct BusEvent events[] = {
        {.addr=0x91cc, .value=0x84, .type=IO_READ},
        {.addr=0x91cd, .value=0x53, .type=IO_READ},
        {.addr=0x0153, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01C9) {
    const struct CPU_State initial_cpu = {.pc=0x71b3, .a=0x7a, .x=0x82, .y=0x3c, .sp=0x2e, .status=0x7a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0149, .value=0x45}, {.addr=0x71b3, .value=0x84}, {.addr=0x71b4, .value=0x49},
    };
    const struct CPU_State final_cpu = {.pc=0x71b5, .a=0xbf, .x=0x82, .y=0x3c, .sp=0x2e, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0149, .value=0x45}, {.addr=0x71b3, .value=0x84}, {.addr=0x71b4, .value=0x49},
    };
    const struct BusEvent events[] = {
        {.addr=0x71b3, .value=0x84, .type=IO_READ},
        {.addr=0x71b4, .value=0x49, .type=IO_READ},
        {.addr=0x0149, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01CA) {
    const struct CPU_State initial_cpu = {.pc=0x556f, .a=0xf3, .x=0x62, .y=0xec, .sp=0xd1, .status=0x9c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d9, .value=0xf5}, {.addr=0x556f, .value=0x84}, {.addr=0x5570, .value=0xd9},
    };
    const struct CPU_State final_cpu = {.pc=0x5571, .a=0xe8, .x=0x62, .y=0xec, .sp=0xd1, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d9, .value=0xf5}, {.addr=0x556f, .value=0x84}, {.addr=0x5570, .value=0xd9},
    };
    const struct BusEvent events[] = {
        {.addr=0x556f, .value=0x84, .type=IO_READ},
        {.addr=0x5570, .value=0xd9, .type=IO_READ},
        {.addr=0x00d9, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01CB) {
    const struct CPU_State initial_cpu = {.pc=0x6eb2, .a=0x1e, .x=0x79, .y=0xd9, .sp=0xd1, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014a, .value=0x91}, {.addr=0x6eb2, .value=0x84}, {.addr=0x6eb3, .value=0x4a},
    };
    const struct CPU_State final_cpu = {.pc=0x6eb4, .a=0xb0, .x=0x79, .y=0xd9, .sp=0xd1, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x014a, .value=0x91}, {.addr=0x6eb2, .value=0x84}, {.addr=0x6eb3, .value=0x4a},
    };
    const struct BusEvent events[] = {
        {.addr=0x6eb2, .value=0x84, .type=IO_READ},
        {.addr=0x6eb3, .value=0x4a, .type=IO_READ},
        {.addr=0x014a, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01CC) {
    const struct CPU_State initial_cpu = {.pc=0x3eae, .a=0x72, .x=0xc7, .y=0x5d, .sp=0x9c, .status=0x07};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0032, .value=0xf4}, {.addr=0x3eae, .value=0x84}, {.addr=0x3eaf, .value=0x32},
    };
    const struct CPU_State final_cpu = {.pc=0x3eb0, .a=0x67, .x=0xc7, .y=0x5d, .sp=0x9c, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x0032, .value=0xf4}, {.addr=0x3eae, .value=0x84}, {.addr=0x3eaf, .value=0x32},
    };
    const struct BusEvent events[] = {
        {.addr=0x3eae, .value=0x84, .type=IO_READ},
        {.addr=0x3eaf, .value=0x32, .type=IO_READ},
        {.addr=0x0032, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x1644, .a=0x8f, .x=0xc7, .y=0x43, .sp=0x29, .status=0xf9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c4, .value=0xcd}, {.addr=0x1644, .value=0x84}, {.addr=0x1645, .value=0xc4},
    };
    const struct CPU_State final_cpu = {.pc=0x1646, .a=0x5d, .x=0xc7, .y=0x43, .sp=0x29, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c4, .value=0xcd}, {.addr=0x1644, .value=0x84}, {.addr=0x1645, .value=0xc4},
    };
    const struct BusEvent events[] = {
        {.addr=0x1644, .value=0x84, .type=IO_READ},
        {.addr=0x1645, .value=0xc4, .type=IO_READ},
        {.addr=0x01c4, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01CE) {
    const struct CPU_State initial_cpu = {.pc=0x3f88, .a=0x4d, .x=0xe7, .y=0x4f, .sp=0xbb, .status=0x8e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ad, .value=0x0e}, {.addr=0x3f88, .value=0x84}, {.addr=0x3f89, .value=0xad},
    };
    const struct CPU_State final_cpu = {.pc=0x3f8a, .a=0x5b, .x=0xe7, .y=0x4f, .sp=0xbb, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ad, .value=0x0e}, {.addr=0x3f88, .value=0x84}, {.addr=0x3f89, .value=0xad},
    };
    const struct BusEvent events[] = {
        {.addr=0x3f88, .value=0x84, .type=IO_READ},
        {.addr=0x3f89, .value=0xad, .type=IO_READ},
        {.addr=0x00ad, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01CF) {
    const struct CPU_State initial_cpu = {.pc=0xaa8d, .a=0x83, .x=0x99, .y=0x4d, .sp=0xe5, .status=0xe9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a3, .value=0xe0}, {.addr=0xaa8d, .value=0x84}, {.addr=0xaa8e, .value=0xa3},
    };
    const struct CPU_State final_cpu = {.pc=0xaa8f, .a=0x64, .x=0x99, .y=0x4d, .sp=0xe5, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a3, .value=0xe0}, {.addr=0xaa8d, .value=0x84}, {.addr=0xaa8e, .value=0xa3},
    };
    const struct BusEvent events[] = {
        {.addr=0xaa8d, .value=0x84, .type=IO_READ},
        {.addr=0xaa8e, .value=0xa3, .type=IO_READ},
        {.addr=0x01a3, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01D0) {
    const struct CPU_State initial_cpu = {.pc=0xcbc6, .a=0x04, .x=0x28, .y=0xa7, .sp=0x02, .status=0x42};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002c, .value=0x7e}, {.addr=0xcbc6, .value=0x84}, {.addr=0xcbc7, .value=0x2c},
    };
    const struct CPU_State final_cpu = {.pc=0xcbc8, .a=0x82, .x=0x28, .y=0xa7, .sp=0x02, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x002c, .value=0x7e}, {.addr=0xcbc6, .value=0x84}, {.addr=0xcbc7, .value=0x2c},
    };
    const struct BusEvent events[] = {
        {.addr=0xcbc6, .value=0x84, .type=IO_READ},
        {.addr=0xcbc7, .value=0x2c, .type=IO_READ},
        {.addr=0x002c, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01D1) {
    const struct CPU_State initial_cpu = {.pc=0x63d0, .a=0xc7, .x=0x52, .y=0x2e, .sp=0xc2, .status=0xeb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015c, .value=0x8e}, {.addr=0x63d0, .value=0x84}, {.addr=0x63d1, .value=0x5c},
    };
    const struct CPU_State final_cpu = {.pc=0x63d2, .a=0x56, .x=0x52, .y=0x2e, .sp=0xc2, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x015c, .value=0x8e}, {.addr=0x63d0, .value=0x84}, {.addr=0x63d1, .value=0x5c},
    };
    const struct BusEvent events[] = {
        {.addr=0x63d0, .value=0x84, .type=IO_READ},
        {.addr=0x63d1, .value=0x5c, .type=IO_READ},
        {.addr=0x015c, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01D2) {
    const struct CPU_State initial_cpu = {.pc=0xfe7b, .a=0x3f, .x=0xda, .y=0x0b, .sp=0xf7, .status=0x80};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0050, .value=0x74}, {.addr=0xfe7b, .value=0x84}, {.addr=0xfe7c, .value=0x50},
    };
    const struct CPU_State final_cpu = {.pc=0xfe7d, .a=0xb3, .x=0xda, .y=0x0b, .sp=0xf7, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0050, .value=0x74}, {.addr=0xfe7b, .value=0x84}, {.addr=0xfe7c, .value=0x50},
    };
    const struct BusEvent events[] = {
        {.addr=0xfe7b, .value=0x84, .type=IO_READ},
        {.addr=0xfe7c, .value=0x50, .type=IO_READ},
        {.addr=0x0050, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01D3) {
    const struct CPU_State initial_cpu = {.pc=0xe3dd, .a=0xec, .x=0x63, .y=0x03, .sp=0x73, .status=0xe5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0121, .value=0x8c}, {.addr=0xe3dd, .value=0x84}, {.addr=0xe3de, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0xe3df, .a=0x79, .x=0x63, .y=0x03, .sp=0x73, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0121, .value=0x8c}, {.addr=0xe3dd, .value=0x84}, {.addr=0xe3de, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0xe3dd, .value=0x84, .type=IO_READ},
        {.addr=0xe3de, .value=0x21, .type=IO_READ},
        {.addr=0x0121, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x6806, .a=0x0c, .x=0x1d, .y=0xbf, .sp=0x3c, .status=0xeb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0157, .value=0xdf}, {.addr=0x6806, .value=0x84}, {.addr=0x6807, .value=0x57},
    };
    const struct CPU_State final_cpu = {.pc=0x6808, .a=0xec, .x=0x1d, .y=0xbf, .sp=0x3c, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0157, .value=0xdf}, {.addr=0x6806, .value=0x84}, {.addr=0x6807, .value=0x57},
    };
    const struct BusEvent events[] = {
        {.addr=0x6806, .value=0x84, .type=IO_READ},
        {.addr=0x6807, .value=0x57, .type=IO_READ},
        {.addr=0x0157, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01D5) {
    const struct CPU_State initial_cpu = {.pc=0x8997, .a=0xa7, .x=0x56, .y=0xb3, .sp=0xd6, .status=0x63};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0195, .value=0xd3}, {.addr=0x8997, .value=0x84}, {.addr=0x8998, .value=0x95},
    };
    const struct CPU_State final_cpu = {.pc=0x8999, .a=0x7b, .x=0x56, .y=0xb3, .sp=0xd6, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x0195, .value=0xd3}, {.addr=0x8997, .value=0x84}, {.addr=0x8998, .value=0x95},
    };
    const struct BusEvent events[] = {
        {.addr=0x8997, .value=0x84, .type=IO_READ},
        {.addr=0x8998, .value=0x95, .type=IO_READ},
        {.addr=0x0195, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01D6) {
    const struct CPU_State initial_cpu = {.pc=0x48dc, .a=0x56, .x=0xa3, .y=0x76, .sp=0xa2, .status=0x82};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007c, .value=0x69}, {.addr=0x48dc, .value=0x84}, {.addr=0x48dd, .value=0x7c},
    };
    const struct CPU_State final_cpu = {.pc=0x48de, .a=0xbf, .x=0xa3, .y=0x76, .sp=0xa2, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x007c, .value=0x69}, {.addr=0x48dc, .value=0x84}, {.addr=0x48dd, .value=0x7c},
    };
    const struct BusEvent events[] = {
        {.addr=0x48dc, .value=0x84, .type=IO_READ},
        {.addr=0x48dd, .value=0x7c, .type=IO_READ},
        {.addr=0x007c, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01D7) {
    const struct CPU_State initial_cpu = {.pc=0x65b7, .a=0x1a, .x=0x35, .y=0x15, .sp=0xd3, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002b, .value=0xee}, {.addr=0x65b7, .value=0x84}, {.addr=0x65b8, .value=0x2b},
    };
    const struct CPU_State final_cpu = {.pc=0x65b9, .a=0x08, .x=0x35, .y=0x15, .sp=0xd3, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x002b, .value=0xee}, {.addr=0x65b7, .value=0x84}, {.addr=0x65b8, .value=0x2b},
    };
    const struct BusEvent events[] = {
        {.addr=0x65b7, .value=0x84, .type=IO_READ},
        {.addr=0x65b8, .value=0x2b, .type=IO_READ},
        {.addr=0x002b, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01D8) {
    const struct CPU_State initial_cpu = {.pc=0xa2e1, .a=0x5a, .x=0xc4, .y=0xeb, .sp=0x76, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cb, .value=0x38}, {.addr=0xa2e1, .value=0x84}, {.addr=0xa2e2, .value=0xcb},
    };
    const struct CPU_State final_cpu = {.pc=0xa2e3, .a=0x92, .x=0xc4, .y=0xeb, .sp=0x76, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cb, .value=0x38}, {.addr=0xa2e1, .value=0x84}, {.addr=0xa2e2, .value=0xcb},
    };
    const struct BusEvent events[] = {
        {.addr=0xa2e1, .value=0x84, .type=IO_READ},
        {.addr=0xa2e2, .value=0xcb, .type=IO_READ},
        {.addr=0x01cb, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01D9) {
    const struct CPU_State initial_cpu = {.pc=0xcca1, .a=0xda, .x=0xf8, .y=0x2b, .sp=0xf1, .status=0x70};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0131, .value=0xa8}, {.addr=0xcca1, .value=0x84}, {.addr=0xcca2, .value=0x31},
    };
    const struct CPU_State final_cpu = {.pc=0xcca3, .a=0x82, .x=0xf8, .y=0x2b, .sp=0xf1, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0131, .value=0xa8}, {.addr=0xcca1, .value=0x84}, {.addr=0xcca2, .value=0x31},
    };
    const struct BusEvent events[] = {
        {.addr=0xcca1, .value=0x84, .type=IO_READ},
        {.addr=0xcca2, .value=0x31, .type=IO_READ},
        {.addr=0x0131, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01DA) {
    const struct CPU_State initial_cpu = {.pc=0xce71, .a=0x67, .x=0xae, .y=0xca, .sp=0x1e, .status=0xa5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011c, .value=0x6d}, {.addr=0xce71, .value=0x84}, {.addr=0xce72, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0xce73, .a=0xd5, .x=0xae, .y=0xca, .sp=0x1e, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x011c, .value=0x6d}, {.addr=0xce71, .value=0x84}, {.addr=0xce72, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0xce71, .value=0x84, .type=IO_READ},
        {.addr=0xce72, .value=0x1c, .type=IO_READ},
        {.addr=0x011c, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01DB) {
    const struct CPU_State initial_cpu = {.pc=0xe24e, .a=0xc7, .x=0x3d, .y=0x72, .sp=0x85, .status=0x8c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0083, .value=0x1d}, {.addr=0xe24e, .value=0x84}, {.addr=0xe24f, .value=0x83},
    };
    const struct CPU_State final_cpu = {.pc=0xe250, .a=0xe4, .x=0x3d, .y=0x72, .sp=0x85, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0083, .value=0x1d}, {.addr=0xe24e, .value=0x84}, {.addr=0xe24f, .value=0x83},
    };
    const struct BusEvent events[] = {
        {.addr=0xe24e, .value=0x84, .type=IO_READ},
        {.addr=0xe24f, .value=0x83, .type=IO_READ},
        {.addr=0x0083, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01DC) {
    const struct CPU_State initial_cpu = {.pc=0xc45e, .a=0x1b, .x=0x2a, .y=0xcb, .sp=0x9d, .status=0x6a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01dd, .value=0x37}, {.addr=0xc45e, .value=0x84}, {.addr=0xc45f, .value=0xdd},
    };
    const struct CPU_State final_cpu = {.pc=0xc460, .a=0x52, .x=0x2a, .y=0xcb, .sp=0x9d, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x01dd, .value=0x37}, {.addr=0xc45e, .value=0x84}, {.addr=0xc45f, .value=0xdd},
    };
    const struct BusEvent events[] = {
        {.addr=0xc45e, .value=0x84, .type=IO_READ},
        {.addr=0xc45f, .value=0xdd, .type=IO_READ},
        {.addr=0x01dd, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01DD) {
    const struct CPU_State initial_cpu = {.pc=0xf204, .a=0x76, .x=0xe8, .y=0xa4, .sp=0xc9, .status=0xc1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a8, .value=0x2e}, {.addr=0xf204, .value=0x84}, {.addr=0xf205, .value=0xa8},
    };
    const struct CPU_State final_cpu = {.pc=0xf206, .a=0xa5, .x=0xe8, .y=0xa4, .sp=0xc9, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a8, .value=0x2e}, {.addr=0xf204, .value=0x84}, {.addr=0xf205, .value=0xa8},
    };
    const struct BusEvent events[] = {
        {.addr=0xf204, .value=0x84, .type=IO_READ},
        {.addr=0xf205, .value=0xa8, .type=IO_READ},
        {.addr=0x00a8, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x20f8, .a=0x4e, .x=0x81, .y=0x68, .sp=0xa4, .status=0x65};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0198, .value=0xf1}, {.addr=0x20f8, .value=0x84}, {.addr=0x20f9, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0x20fa, .a=0x40, .x=0x81, .y=0x68, .sp=0xa4, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0198, .value=0xf1}, {.addr=0x20f8, .value=0x84}, {.addr=0x20f9, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0x20f8, .value=0x84, .type=IO_READ},
        {.addr=0x20f9, .value=0x98, .type=IO_READ},
        {.addr=0x0198, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01DF) {
    const struct CPU_State initial_cpu = {.pc=0x514c, .a=0x1a, .x=0xdd, .y=0xc6, .sp=0xbf, .status=0x74};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01db, .value=0x2e}, {.addr=0x514c, .value=0x84}, {.addr=0x514d, .value=0xdb},
    };
    const struct CPU_State final_cpu = {.pc=0x514e, .a=0x48, .x=0xdd, .y=0xc6, .sp=0xbf, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01db, .value=0x2e}, {.addr=0x514c, .value=0x84}, {.addr=0x514d, .value=0xdb},
    };
    const struct BusEvent events[] = {
        {.addr=0x514c, .value=0x84, .type=IO_READ},
        {.addr=0x514d, .value=0xdb, .type=IO_READ},
        {.addr=0x01db, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01E0) {
    const struct CPU_State initial_cpu = {.pc=0x501f, .a=0xb3, .x=0x76, .y=0x64, .sp=0xa4, .status=0x0f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cd, .value=0x70}, {.addr=0x501f, .value=0x84}, {.addr=0x5020, .value=0xcd},
    };
    const struct CPU_State final_cpu = {.pc=0x5021, .a=0x24, .x=0x76, .y=0x64, .sp=0xa4, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cd, .value=0x70}, {.addr=0x501f, .value=0x84}, {.addr=0x5020, .value=0xcd},
    };
    const struct BusEvent events[] = {
        {.addr=0x501f, .value=0x84, .type=IO_READ},
        {.addr=0x5020, .value=0xcd, .type=IO_READ},
        {.addr=0x00cd, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01E2) {
    const struct CPU_State initial_cpu = {.pc=0x85d3, .a=0xd2, .x=0x9e, .y=0x77, .sp=0x5a, .status=0xbf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d9, .value=0x7e}, {.addr=0x85d3, .value=0x84}, {.addr=0x85d4, .value=0xd9},
    };
    const struct CPU_State final_cpu = {.pc=0x85d5, .a=0x51, .x=0x9e, .y=0x77, .sp=0x5a, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d9, .value=0x7e}, {.addr=0x85d3, .value=0x84}, {.addr=0x85d4, .value=0xd9},
    };
    const struct BusEvent events[] = {
        {.addr=0x85d3, .value=0x84, .type=IO_READ},
        {.addr=0x85d4, .value=0xd9, .type=IO_READ},
        {.addr=0x01d9, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01E3) {
    const struct CPU_State initial_cpu = {.pc=0x482f, .a=0x4e, .x=0x87, .y=0xea, .sp=0x08, .status=0x90};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00aa, .value=0x52}, {.addr=0x482f, .value=0x84}, {.addr=0x4830, .value=0xaa},
    };
    const struct CPU_State final_cpu = {.pc=0x4831, .a=0xa0, .x=0x87, .y=0xea, .sp=0x08, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00aa, .value=0x52}, {.addr=0x482f, .value=0x84}, {.addr=0x4830, .value=0xaa},
    };
    const struct BusEvent events[] = {
        {.addr=0x482f, .value=0x84, .type=IO_READ},
        {.addr=0x4830, .value=0xaa, .type=IO_READ},
        {.addr=0x00aa, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01E4) {
    const struct CPU_State initial_cpu = {.pc=0x8d70, .a=0x57, .x=0x95, .y=0xf7, .sp=0x7e, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a1, .value=0x7a}, {.addr=0x8d70, .value=0x84}, {.addr=0x8d71, .value=0xa1},
    };
    const struct CPU_State final_cpu = {.pc=0x8d72, .a=0xd1, .x=0x95, .y=0xf7, .sp=0x7e, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a1, .value=0x7a}, {.addr=0x8d70, .value=0x84}, {.addr=0x8d71, .value=0xa1},
    };
    const struct BusEvent events[] = {
        {.addr=0x8d70, .value=0x84, .type=IO_READ},
        {.addr=0x8d71, .value=0xa1, .type=IO_READ},
        {.addr=0x00a1, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01E5) {
    const struct CPU_State initial_cpu = {.pc=0x6e04, .a=0x50, .x=0x93, .y=0xfb, .sp=0xe6, .status=0xcf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0090, .value=0xd9}, {.addr=0x6e04, .value=0x84}, {.addr=0x6e05, .value=0x90},
    };
    const struct CPU_State final_cpu = {.pc=0x6e06, .a=0x2a, .x=0x93, .y=0xfb, .sp=0xe6, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x0090, .value=0xd9}, {.addr=0x6e04, .value=0x84}, {.addr=0x6e05, .value=0x90},
    };
    const struct BusEvent events[] = {
        {.addr=0x6e04, .value=0x84, .type=IO_READ},
        {.addr=0x6e05, .value=0x90, .type=IO_READ},
        {.addr=0x0090, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01E6) {
    const struct CPU_State initial_cpu = {.pc=0x4221, .a=0x99, .x=0xbe, .y=0x66, .sp=0xd9, .status=0xe4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0153, .value=0xe9}, {.addr=0x4221, .value=0x84}, {.addr=0x4222, .value=0x53},
    };
    const struct CPU_State final_cpu = {.pc=0x4223, .a=0x82, .x=0xbe, .y=0x66, .sp=0xd9, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x0153, .value=0xe9}, {.addr=0x4221, .value=0x84}, {.addr=0x4222, .value=0x53},
    };
    const struct BusEvent events[] = {
        {.addr=0x4221, .value=0x84, .type=IO_READ},
        {.addr=0x4222, .value=0x53, .type=IO_READ},
        {.addr=0x0153, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x9d9a, .a=0xb1, .x=0x79, .y=0xc5, .sp=0x6a, .status=0x16};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005c, .value=0xf0}, {.addr=0x9d9a, .value=0x84}, {.addr=0x9d9b, .value=0x5c},
    };
    const struct CPU_State final_cpu = {.pc=0x9d9c, .a=0xa1, .x=0x79, .y=0xc5, .sp=0x6a, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x005c, .value=0xf0}, {.addr=0x9d9a, .value=0x84}, {.addr=0x9d9b, .value=0x5c},
    };
    const struct BusEvent events[] = {
        {.addr=0x9d9a, .value=0x84, .type=IO_READ},
        {.addr=0x9d9b, .value=0x5c, .type=IO_READ},
        {.addr=0x005c, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01E8) {
    const struct CPU_State initial_cpu = {.pc=0x0ea9, .a=0x59, .x=0x04, .y=0x5e, .sp=0x27, .status=0x17};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0072, .value=0x56}, {.addr=0x0ea9, .value=0x84}, {.addr=0x0eaa, .value=0x72},
    };
    const struct CPU_State final_cpu = {.pc=0x0eab, .a=0xb0, .x=0x04, .y=0x5e, .sp=0x27, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0072, .value=0x56}, {.addr=0x0ea9, .value=0x84}, {.addr=0x0eaa, .value=0x72},
    };
    const struct BusEvent events[] = {
        {.addr=0x0ea9, .value=0x84, .type=IO_READ},
        {.addr=0x0eaa, .value=0x72, .type=IO_READ},
        {.addr=0x0072, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01E9) {
    const struct CPU_State initial_cpu = {.pc=0x8f4e, .a=0x4e, .x=0x1a, .y=0x04, .sp=0x9a, .status=0x39};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b2, .value=0x6c}, {.addr=0x8f4e, .value=0x84}, {.addr=0x8f4f, .value=0xb2},
    };
    const struct CPU_State final_cpu = {.pc=0x8f50, .a=0xbb, .x=0x1a, .y=0x04, .sp=0x9a, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b2, .value=0x6c}, {.addr=0x8f4e, .value=0x84}, {.addr=0x8f4f, .value=0xb2},
    };
    const struct BusEvent events[] = {
        {.addr=0x8f4e, .value=0x84, .type=IO_READ},
        {.addr=0x8f4f, .value=0xb2, .type=IO_READ},
        {.addr=0x01b2, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01EA) {
    const struct CPU_State initial_cpu = {.pc=0x4c60, .a=0x37, .x=0xc6, .y=0xb8, .sp=0x04, .status=0xa0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012e, .value=0xbc}, {.addr=0x4c60, .value=0x84}, {.addr=0x4c61, .value=0x2e},
    };
    const struct CPU_State final_cpu = {.pc=0x4c62, .a=0xf3, .x=0xc6, .y=0xb8, .sp=0x04, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x012e, .value=0xbc}, {.addr=0x4c60, .value=0x84}, {.addr=0x4c61, .value=0x2e},
    };
    const struct BusEvent events[] = {
        {.addr=0x4c60, .value=0x84, .type=IO_READ},
        {.addr=0x4c61, .value=0x2e, .type=IO_READ},
        {.addr=0x012e, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01EB) {
    const struct CPU_State initial_cpu = {.pc=0x0079, .a=0xbe, .x=0x33, .y=0xb4, .sp=0xfa, .status=0xef};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0079, .value=0x84}, {.addr=0x007a, .value=0x8e}, {.addr=0x018e, .value=0x4f},
    };
    const struct CPU_State final_cpu = {.pc=0x007b, .a=0x0e, .x=0x33, .y=0xb4, .sp=0xfa, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0079, .value=0x84}, {.addr=0x007a, .value=0x8e}, {.addr=0x018e, .value=0x4f},
    };
    const struct BusEvent events[] = {
        {.addr=0x0079, .value=0x84, .type=IO_READ},
        {.addr=0x007a, .value=0x8e, .type=IO_READ},
        {.addr=0x018e, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01EC) {
    const struct CPU_State initial_cpu = {.pc=0x2270, .a=0xab, .x=0xca, .y=0xaf, .sp=0x0d, .status=0xf9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012d, .value=0x57}, {.addr=0x2270, .value=0x84}, {.addr=0x2271, .value=0x2d},
    };
    const struct CPU_State final_cpu = {.pc=0x2272, .a=0x03, .x=0xca, .y=0xaf, .sp=0x0d, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x012d, .value=0x57}, {.addr=0x2270, .value=0x84}, {.addr=0x2271, .value=0x2d},
    };
    const struct BusEvent events[] = {
        {.addr=0x2270, .value=0x84, .type=IO_READ},
        {.addr=0x2271, .value=0x2d, .type=IO_READ},
        {.addr=0x012d, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01ED) {
    const struct CPU_State initial_cpu = {.pc=0x2152, .a=0xd9, .x=0xe6, .y=0x0e, .sp=0x12, .status=0x69};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0178, .value=0x8d}, {.addr=0x2152, .value=0x84}, {.addr=0x2153, .value=0x78},
    };
    const struct CPU_State final_cpu = {.pc=0x2154, .a=0x67, .x=0xe6, .y=0x0e, .sp=0x12, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x0178, .value=0x8d}, {.addr=0x2152, .value=0x84}, {.addr=0x2153, .value=0x78},
    };
    const struct BusEvent events[] = {
        {.addr=0x2152, .value=0x84, .type=IO_READ},
        {.addr=0x2153, .value=0x78, .type=IO_READ},
        {.addr=0x0178, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01EE) {
    const struct CPU_State initial_cpu = {.pc=0x7c11, .a=0xa8, .x=0x9b, .y=0xa3, .sp=0x3e, .status=0x30};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010c, .value=0x2c}, {.addr=0x7c11, .value=0x84}, {.addr=0x7c12, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0x7c13, .a=0xd4, .x=0x9b, .y=0xa3, .sp=0x3e, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x010c, .value=0x2c}, {.addr=0x7c11, .value=0x84}, {.addr=0x7c12, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0x7c11, .value=0x84, .type=IO_READ},
        {.addr=0x7c12, .value=0x0c, .type=IO_READ},
        {.addr=0x010c, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01EF) {
    const struct CPU_State initial_cpu = {.pc=0x2495, .a=0xbd, .x=0xf9, .y=0xc3, .sp=0xca, .status=0x9a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d1, .value=0x75}, {.addr=0x2495, .value=0x84}, {.addr=0x2496, .value=0xd1},
    };
    const struct CPU_State final_cpu = {.pc=0x2497, .a=0x32, .x=0xf9, .y=0xc3, .sp=0xca, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d1, .value=0x75}, {.addr=0x2495, .value=0x84}, {.addr=0x2496, .value=0xd1},
    };
    const struct BusEvent events[] = {
        {.addr=0x2495, .value=0x84, .type=IO_READ},
        {.addr=0x2496, .value=0xd1, .type=IO_READ},
        {.addr=0x00d1, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01F0) {
    const struct CPU_State initial_cpu = {.pc=0xb744, .a=0x3d, .x=0x00, .y=0x35, .sp=0xda, .status=0x5d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e8, .value=0x76}, {.addr=0xb744, .value=0x84}, {.addr=0xb745, .value=0xe8},
    };
    const struct CPU_State final_cpu = {.pc=0xb746, .a=0xb4, .x=0x00, .y=0x35, .sp=0xda, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e8, .value=0x76}, {.addr=0xb744, .value=0x84}, {.addr=0xb745, .value=0xe8},
    };
    const struct BusEvent events[] = {
        {.addr=0xb744, .value=0x84, .type=IO_READ},
        {.addr=0xb745, .value=0xe8, .type=IO_READ},
        {.addr=0x00e8, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01F1) {
    const struct CPU_State initial_cpu = {.pc=0xf431, .a=0xb4, .x=0xfd, .y=0x85, .sp=0x9e, .status=0x8f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bd, .value=0x72}, {.addr=0xf431, .value=0x84}, {.addr=0xf432, .value=0xbd},
    };
    const struct CPU_State final_cpu = {.pc=0xf433, .a=0x27, .x=0xfd, .y=0x85, .sp=0x9e, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bd, .value=0x72}, {.addr=0xf431, .value=0x84}, {.addr=0xf432, .value=0xbd},
    };
    const struct BusEvent events[] = {
        {.addr=0xf431, .value=0x84, .type=IO_READ},
        {.addr=0xf432, .value=0xbd, .type=IO_READ},
        {.addr=0x00bd, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01F2) {
    const struct CPU_State initial_cpu = {.pc=0xd549, .a=0x3c, .x=0xc8, .y=0x8a, .sp=0x3a, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b4, .value=0x79}, {.addr=0xd549, .value=0x84}, {.addr=0xd54a, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0xd54b, .a=0xb5, .x=0xc8, .y=0x8a, .sp=0x3a, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b4, .value=0x79}, {.addr=0xd549, .value=0x84}, {.addr=0xd54a, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0xd549, .value=0x84, .type=IO_READ},
        {.addr=0xd54a, .value=0xb4, .type=IO_READ},
        {.addr=0x01b4, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01F3) {
    const struct CPU_State initial_cpu = {.pc=0xc663, .a=0xff, .x=0xc6, .y=0xce, .sp=0x00, .status=0xe8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0105, .value=0xaf}, {.addr=0xc663, .value=0x84}, {.addr=0xc664, .value=0x05},
    };
    const struct CPU_State final_cpu = {.pc=0xc665, .a=0xae, .x=0xc6, .y=0xce, .sp=0x00, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0105, .value=0xaf}, {.addr=0xc663, .value=0x84}, {.addr=0xc664, .value=0x05},
    };
    const struct BusEvent events[] = {
        {.addr=0xc663, .value=0x84, .type=IO_READ},
        {.addr=0xc664, .value=0x05, .type=IO_READ},
        {.addr=0x0105, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01F4) {
    const struct CPU_State initial_cpu = {.pc=0xa422, .a=0x13, .x=0x55, .y=0x9f, .sp=0x8a, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d0, .value=0xc5}, {.addr=0xa422, .value=0x84}, {.addr=0xa423, .value=0xd0},
    };
    const struct CPU_State final_cpu = {.pc=0xa424, .a=0xd9, .x=0x55, .y=0x9f, .sp=0x8a, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d0, .value=0xc5}, {.addr=0xa422, .value=0x84}, {.addr=0xa423, .value=0xd0},
    };
    const struct BusEvent events[] = {
        {.addr=0xa422, .value=0x84, .type=IO_READ},
        {.addr=0xa423, .value=0xd0, .type=IO_READ},
        {.addr=0x01d0, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01F5) {
    const struct CPU_State initial_cpu = {.pc=0xc2d5, .a=0xc9, .x=0x69, .y=0x84, .sp=0x02, .status=0xdc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009a, .value=0x37}, {.addr=0xc2d5, .value=0x84}, {.addr=0xc2d6, .value=0x9a},
    };
    const struct CPU_State final_cpu = {.pc=0xc2d7, .a=0x00, .x=0x69, .y=0x84, .sp=0x02, .status=0x1f};
    const struct RamEntry final_ram[] = {
        {.addr=0x009a, .value=0x37}, {.addr=0xc2d5, .value=0x84}, {.addr=0xc2d6, .value=0x9a},
    };
    const struct BusEvent events[] = {
        {.addr=0xc2d5, .value=0x84, .type=IO_READ},
        {.addr=0xc2d6, .value=0x9a, .type=IO_READ},
        {.addr=0x009a, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01F6) {
    const struct CPU_State initial_cpu = {.pc=0xe347, .a=0x31, .x=0x3d, .y=0xb1, .sp=0xaa, .status=0x16};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0040, .value=0x5a}, {.addr=0xe347, .value=0x84}, {.addr=0xe348, .value=0x40},
    };
    const struct CPU_State final_cpu = {.pc=0xe349, .a=0x8b, .x=0x3d, .y=0xb1, .sp=0xaa, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0040, .value=0x5a}, {.addr=0xe347, .value=0x84}, {.addr=0xe348, .value=0x40},
    };
    const struct BusEvent events[] = {
        {.addr=0xe347, .value=0x84, .type=IO_READ},
        {.addr=0xe348, .value=0x40, .type=IO_READ},
        {.addr=0x0040, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01F7) {
    const struct CPU_State initial_cpu = {.pc=0xfa82, .a=0x13, .x=0x52, .y=0x47, .sp=0xcf, .status=0x85};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009a, .value=0x42}, {.addr=0xfa82, .value=0x84}, {.addr=0xfa83, .value=0x9a},
    };
    const struct CPU_State final_cpu = {.pc=0xfa84, .a=0x56, .x=0x52, .y=0x47, .sp=0xcf, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x009a, .value=0x42}, {.addr=0xfa82, .value=0x84}, {.addr=0xfa83, .value=0x9a},
    };
    const struct BusEvent events[] = {
        {.addr=0xfa82, .value=0x84, .type=IO_READ},
        {.addr=0xfa83, .value=0x9a, .type=IO_READ},
        {.addr=0x009a, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01F8) {
    const struct CPU_State initial_cpu = {.pc=0xc508, .a=0xb1, .x=0x1c, .y=0x51, .sp=0xa8, .status=0x96};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008f, .value=0xb2}, {.addr=0xc508, .value=0x84}, {.addr=0xc509, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0xc50a, .a=0x63, .x=0x1c, .y=0x51, .sp=0xa8, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x008f, .value=0xb2}, {.addr=0xc508, .value=0x84}, {.addr=0xc509, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0xc508, .value=0x84, .type=IO_READ},
        {.addr=0xc509, .value=0x8f, .type=IO_READ},
        {.addr=0x008f, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x76f9, .a=0x41, .x=0xcc, .y=0xe4, .sp=0x4a, .status=0x1f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d6, .value=0xe7}, {.addr=0x76f9, .value=0x84}, {.addr=0x76fa, .value=0xd6},
    };
    const struct CPU_State final_cpu = {.pc=0x76fb, .a=0x29, .x=0xcc, .y=0xe4, .sp=0x4a, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d6, .value=0xe7}, {.addr=0x76f9, .value=0x84}, {.addr=0x76fa, .value=0xd6},
    };
    const struct BusEvent events[] = {
        {.addr=0x76f9, .value=0x84, .type=IO_READ},
        {.addr=0x76fa, .value=0xd6, .type=IO_READ},
        {.addr=0x00d6, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01FA) {
    const struct CPU_State initial_cpu = {.pc=0xfd40, .a=0x4e, .x=0x07, .y=0x49, .sp=0xb4, .status=0xcf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00be, .value=0x57}, {.addr=0xfd40, .value=0x84}, {.addr=0xfd41, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0xfd42, .a=0xa6, .x=0x07, .y=0x49, .sp=0xb4, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00be, .value=0x57}, {.addr=0xfd40, .value=0x84}, {.addr=0xfd41, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0xfd40, .value=0x84, .type=IO_READ},
        {.addr=0xfd41, .value=0xbe, .type=IO_READ},
        {.addr=0x00be, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01FB) {
    const struct CPU_State initial_cpu = {.pc=0xca4f, .a=0x89, .x=0x61, .y=0x3c, .sp=0x59, .status=0x67};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010c, .value=0x5e}, {.addr=0xca4f, .value=0x84}, {.addr=0xca50, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0xca51, .a=0xe8, .x=0x61, .y=0x3c, .sp=0x59, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x010c, .value=0x5e}, {.addr=0xca4f, .value=0x84}, {.addr=0xca50, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0xca4f, .value=0x84, .type=IO_READ},
        {.addr=0xca50, .value=0x0c, .type=IO_READ},
        {.addr=0x010c, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01FC) {
    const struct CPU_State initial_cpu = {.pc=0xf382, .a=0x2f, .x=0x37, .y=0x7d, .sp=0x4d, .status=0xc2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e7, .value=0x87}, {.addr=0xf382, .value=0x84}, {.addr=0xf383, .value=0xe7},
    };
    const struct CPU_State final_cpu = {.pc=0xf384, .a=0xb6, .x=0x37, .y=0x7d, .sp=0x4d, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e7, .value=0x87}, {.addr=0xf382, .value=0x84}, {.addr=0xf383, .value=0xe7},
    };
    const struct BusEvent events[] = {
        {.addr=0xf382, .value=0x84, .type=IO_READ},
        {.addr=0xf383, .value=0xe7, .type=IO_READ},
        {.addr=0x00e7, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01FD) {
    const struct CPU_State initial_cpu = {.pc=0x7928, .a=0x47, .x=0xf6, .y=0x8d, .sp=0xf7, .status=0x2e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0131, .value=0x85}, {.addr=0x7928, .value=0x84}, {.addr=0x7929, .value=0x31},
    };
    const struct CPU_State final_cpu = {.pc=0x792a, .a=0xcc, .x=0xf6, .y=0x8d, .sp=0xf7, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0131, .value=0x85}, {.addr=0x7928, .value=0x84}, {.addr=0x7929, .value=0x31},
    };
    const struct BusEvent events[] = {
        {.addr=0x7928, .value=0x84, .type=IO_READ},
        {.addr=0x7929, .value=0x31, .type=IO_READ},
        {.addr=0x0131, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01FE) {
    const struct CPU_State initial_cpu = {.pc=0x8293, .a=0x4a, .x=0x94, .y=0x47, .sp=0x02, .status=0x78};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013c, .value=0x3c}, {.addr=0x8293, .value=0x84}, {.addr=0x8294, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0x8295, .a=0x86, .x=0x94, .y=0x47, .sp=0x02, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x013c, .value=0x3c}, {.addr=0x8293, .value=0x84}, {.addr=0x8294, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0x8293, .value=0x84, .type=IO_READ},
        {.addr=0x8294, .value=0x3c, .type=IO_READ},
        {.addr=0x013c, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_01FF) {
    const struct CPU_State initial_cpu = {.pc=0xbd62, .a=0x17, .x=0xe6, .y=0x33, .sp=0x54, .status=0xa7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d2, .value=0x5c}, {.addr=0xbd62, .value=0x84}, {.addr=0xbd63, .value=0xd2},
    };
    const struct CPU_State final_cpu = {.pc=0xbd64, .a=0x74, .x=0xe6, .y=0x33, .sp=0x54, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d2, .value=0x5c}, {.addr=0xbd62, .value=0x84}, {.addr=0xbd63, .value=0xd2},
    };
    const struct BusEvent events[] = {
        {.addr=0xbd62, .value=0x84, .type=IO_READ},
        {.addr=0xbd63, .value=0xd2, .type=IO_READ},
        {.addr=0x01d2, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0200) {
    const struct CPU_State initial_cpu = {.pc=0x2211, .a=0x60, .x=0x4d, .y=0x5a, .sp=0x4d, .status=0x2d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0187, .value=0x3e}, {.addr=0x2211, .value=0x84}, {.addr=0x2212, .value=0x87},
    };
    const struct CPU_State final_cpu = {.pc=0x2213, .a=0x9f, .x=0x4d, .y=0x5a, .sp=0x4d, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0187, .value=0x3e}, {.addr=0x2211, .value=0x84}, {.addr=0x2212, .value=0x87},
    };
    const struct BusEvent events[] = {
        {.addr=0x2211, .value=0x84, .type=IO_READ},
        {.addr=0x2212, .value=0x87, .type=IO_READ},
        {.addr=0x0187, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0201) {
    const struct CPU_State initial_cpu = {.pc=0xe2a5, .a=0x88, .x=0xe8, .y=0x44, .sp=0xff, .status=0xb5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019a, .value=0x7a}, {.addr=0xe2a5, .value=0x84}, {.addr=0xe2a6, .value=0x9a},
    };
    const struct CPU_State final_cpu = {.pc=0xe2a7, .a=0x03, .x=0xe8, .y=0x44, .sp=0xff, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x019a, .value=0x7a}, {.addr=0xe2a5, .value=0x84}, {.addr=0xe2a6, .value=0x9a},
    };
    const struct BusEvent events[] = {
        {.addr=0xe2a5, .value=0x84, .type=IO_READ},
        {.addr=0xe2a6, .value=0x9a, .type=IO_READ},
        {.addr=0x019a, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0203) {
    const struct CPU_State initial_cpu = {.pc=0x84c7, .a=0xaf, .x=0xda, .y=0x74, .sp=0x3c, .status=0xb8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012a, .value=0xc6}, {.addr=0x84c7, .value=0x84}, {.addr=0x84c8, .value=0x2a},
    };
    const struct CPU_State final_cpu = {.pc=0x84c9, .a=0x75, .x=0xda, .y=0x74, .sp=0x3c, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x012a, .value=0xc6}, {.addr=0x84c7, .value=0x84}, {.addr=0x84c8, .value=0x2a},
    };
    const struct BusEvent events[] = {
        {.addr=0x84c7, .value=0x84, .type=IO_READ},
        {.addr=0x84c8, .value=0x2a, .type=IO_READ},
        {.addr=0x012a, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0204) {
    const struct CPU_State initial_cpu = {.pc=0x0f8d, .a=0xff, .x=0x2d, .y=0xde, .sp=0x8d, .status=0xeb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c2, .value=0x81}, {.addr=0x0f8d, .value=0x84}, {.addr=0x0f8e, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0x0f8f, .a=0x81, .x=0x2d, .y=0xde, .sp=0x8d, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c2, .value=0x81}, {.addr=0x0f8d, .value=0x84}, {.addr=0x0f8e, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0x0f8d, .value=0x84, .type=IO_READ},
        {.addr=0x0f8e, .value=0xc2, .type=IO_READ},
        {.addr=0x01c2, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0205) {
    const struct CPU_State initial_cpu = {.pc=0x9c2e, .a=0xe8, .x=0x5c, .y=0x51, .sp=0x39, .status=0xf5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0192, .value=0x1a}, {.addr=0x9c2e, .value=0x84}, {.addr=0x9c2f, .value=0x92},
    };
    const struct CPU_State final_cpu = {.pc=0x9c30, .a=0x03, .x=0x5c, .y=0x51, .sp=0x39, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0192, .value=0x1a}, {.addr=0x9c2e, .value=0x84}, {.addr=0x9c2f, .value=0x92},
    };
    const struct BusEvent events[] = {
        {.addr=0x9c2e, .value=0x84, .type=IO_READ},
        {.addr=0x9c2f, .value=0x92, .type=IO_READ},
        {.addr=0x0192, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0206) {
    const struct CPU_State initial_cpu = {.pc=0xc2b7, .a=0x99, .x=0xcc, .y=0x53, .sp=0xd9, .status=0x72};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0182, .value=0xd6}, {.addr=0xc2b7, .value=0x84}, {.addr=0xc2b8, .value=0x82},
    };
    const struct CPU_State final_cpu = {.pc=0xc2b9, .a=0x6f, .x=0xcc, .y=0x53, .sp=0xd9, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x0182, .value=0xd6}, {.addr=0xc2b7, .value=0x84}, {.addr=0xc2b8, .value=0x82},
    };
    const struct BusEvent events[] = {
        {.addr=0xc2b7, .value=0x84, .type=IO_READ},
        {.addr=0xc2b8, .value=0x82, .type=IO_READ},
        {.addr=0x0182, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0207) {
    const struct CPU_State initial_cpu = {.pc=0xdf44, .a=0xb6, .x=0xa2, .y=0x57, .sp=0x53, .status=0x92};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0082, .value=0x4e}, {.addr=0xdf44, .value=0x84}, {.addr=0xdf45, .value=0x82},
    };
    const struct CPU_State final_cpu = {.pc=0xdf46, .a=0x04, .x=0xa2, .y=0x57, .sp=0x53, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x0082, .value=0x4e}, {.addr=0xdf44, .value=0x84}, {.addr=0xdf45, .value=0x82},
    };
    const struct BusEvent events[] = {
        {.addr=0xdf44, .value=0x84, .type=IO_READ},
        {.addr=0xdf45, .value=0x82, .type=IO_READ},
        {.addr=0x0082, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0208) {
    const struct CPU_State initial_cpu = {.pc=0x3e57, .a=0x33, .x=0x89, .y=0x71, .sp=0x4a, .status=0x3b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f7, .value=0x3b}, {.addr=0x3e57, .value=0x84}, {.addr=0x3e58, .value=0xf7},
    };
    const struct CPU_State final_cpu = {.pc=0x3e59, .a=0x6f, .x=0x89, .y=0x71, .sp=0x4a, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f7, .value=0x3b}, {.addr=0x3e57, .value=0x84}, {.addr=0x3e58, .value=0xf7},
    };
    const struct BusEvent events[] = {
        {.addr=0x3e57, .value=0x84, .type=IO_READ},
        {.addr=0x3e58, .value=0xf7, .type=IO_READ},
        {.addr=0x01f7, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0209) {
    const struct CPU_State initial_cpu = {.pc=0x3955, .a=0x73, .x=0x91, .y=0xe5, .sp=0x21, .status=0xb3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0180, .value=0x0b}, {.addr=0x3955, .value=0x84}, {.addr=0x3956, .value=0x80},
    };
    const struct CPU_State final_cpu = {.pc=0x3957, .a=0x7f, .x=0x91, .y=0xe5, .sp=0x21, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x0180, .value=0x0b}, {.addr=0x3955, .value=0x84}, {.addr=0x3956, .value=0x80},
    };
    const struct BusEvent events[] = {
        {.addr=0x3955, .value=0x84, .type=IO_READ},
        {.addr=0x3956, .value=0x80, .type=IO_READ},
        {.addr=0x0180, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_020A) {
    const struct CPU_State initial_cpu = {.pc=0xad62, .a=0x61, .x=0x28, .y=0x49, .sp=0x39, .status=0x58};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b2, .value=0x18}, {.addr=0xad62, .value=0x84}, {.addr=0xad63, .value=0xb2},
    };
    const struct CPU_State final_cpu = {.pc=0xad64, .a=0x79, .x=0x28, .y=0x49, .sp=0x39, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b2, .value=0x18}, {.addr=0xad62, .value=0x84}, {.addr=0xad63, .value=0xb2},
    };
    const struct BusEvent events[] = {
        {.addr=0xad62, .value=0x84, .type=IO_READ},
        {.addr=0xad63, .value=0xb2, .type=IO_READ},
        {.addr=0x00b2, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_020B) {
    const struct CPU_State initial_cpu = {.pc=0xe5c1, .a=0x20, .x=0xc3, .y=0x04, .sp=0x3e, .status=0x18};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0018, .value=0xf5}, {.addr=0xe5c1, .value=0x84}, {.addr=0xe5c2, .value=0x18},
    };
    const struct CPU_State final_cpu = {.pc=0xe5c3, .a=0x15, .x=0xc3, .y=0x04, .sp=0x3e, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x0018, .value=0xf5}, {.addr=0xe5c1, .value=0x84}, {.addr=0xe5c2, .value=0x18},
    };
    const struct BusEvent events[] = {
        {.addr=0xe5c1, .value=0x84, .type=IO_READ},
        {.addr=0xe5c2, .value=0x18, .type=IO_READ},
        {.addr=0x0018, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_020C) {
    const struct CPU_State initial_cpu = {.pc=0xac8d, .a=0x93, .x=0xab, .y=0x9b, .sp=0x37, .status=0x66};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e7, .value=0xe4}, {.addr=0xac8d, .value=0x84}, {.addr=0xac8e, .value=0xe7},
    };
    const struct CPU_State final_cpu = {.pc=0xac8f, .a=0x77, .x=0xab, .y=0x9b, .sp=0x37, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e7, .value=0xe4}, {.addr=0xac8d, .value=0x84}, {.addr=0xac8e, .value=0xe7},
    };
    const struct BusEvent events[] = {
        {.addr=0xac8d, .value=0x84, .type=IO_READ},
        {.addr=0xac8e, .value=0xe7, .type=IO_READ},
        {.addr=0x01e7, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_020D) {
    const struct CPU_State initial_cpu = {.pc=0x1e42, .a=0x35, .x=0x4b, .y=0xd3, .sp=0x3b, .status=0xf9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017e, .value=0x6e}, {.addr=0x1e42, .value=0x84}, {.addr=0x1e43, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0x1e44, .a=0xa4, .x=0x4b, .y=0xd3, .sp=0x3b, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x017e, .value=0x6e}, {.addr=0x1e42, .value=0x84}, {.addr=0x1e43, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0x1e42, .value=0x84, .type=IO_READ},
        {.addr=0x1e43, .value=0x7e, .type=IO_READ},
        {.addr=0x017e, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_020E) {
    const struct CPU_State initial_cpu = {.pc=0x7d50, .a=0x0c, .x=0xc4, .y=0x79, .sp=0x6f, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014d, .value=0xa7}, {.addr=0x7d50, .value=0x84}, {.addr=0x7d51, .value=0x4d},
    };
    const struct CPU_State final_cpu = {.pc=0x7d52, .a=0xb4, .x=0xc4, .y=0x79, .sp=0x6f, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x014d, .value=0xa7}, {.addr=0x7d50, .value=0x84}, {.addr=0x7d51, .value=0x4d},
    };
    const struct BusEvent events[] = {
        {.addr=0x7d50, .value=0x84, .type=IO_READ},
        {.addr=0x7d51, .value=0x4d, .type=IO_READ},
        {.addr=0x014d, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_020F) {
    const struct CPU_State initial_cpu = {.pc=0x2e33, .a=0x93, .x=0x35, .y=0x38, .sp=0x8b, .status=0x59};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0066, .value=0xbc}, {.addr=0x2e33, .value=0x84}, {.addr=0x2e34, .value=0x66},
    };
    const struct CPU_State final_cpu = {.pc=0x2e35, .a=0x50, .x=0x35, .y=0x38, .sp=0x8b, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x0066, .value=0xbc}, {.addr=0x2e33, .value=0x84}, {.addr=0x2e34, .value=0x66},
    };
    const struct BusEvent events[] = {
        {.addr=0x2e33, .value=0x84, .type=IO_READ},
        {.addr=0x2e34, .value=0x66, .type=IO_READ},
        {.addr=0x0066, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0210) {
    const struct CPU_State initial_cpu = {.pc=0x454e, .a=0xb0, .x=0xd6, .y=0xae, .sp=0x1c, .status=0x67};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014b, .value=0x20}, {.addr=0x454e, .value=0x84}, {.addr=0x454f, .value=0x4b},
    };
    const struct CPU_State final_cpu = {.pc=0x4550, .a=0xd1, .x=0xd6, .y=0xae, .sp=0x1c, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x014b, .value=0x20}, {.addr=0x454e, .value=0x84}, {.addr=0x454f, .value=0x4b},
    };
    const struct BusEvent events[] = {
        {.addr=0x454e, .value=0x84, .type=IO_READ},
        {.addr=0x454f, .value=0x4b, .type=IO_READ},
        {.addr=0x014b, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0212) {
    const struct CPU_State initial_cpu = {.pc=0x2f17, .a=0x49, .x=0xa8, .y=0xb1, .sp=0x1e, .status=0x68};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017b, .value=0x83}, {.addr=0x2f17, .value=0x84}, {.addr=0x2f18, .value=0x7b},
    };
    const struct CPU_State final_cpu = {.pc=0x2f19, .a=0xcc, .x=0xa8, .y=0xb1, .sp=0x1e, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x017b, .value=0x83}, {.addr=0x2f17, .value=0x84}, {.addr=0x2f18, .value=0x7b},
    };
    const struct BusEvent events[] = {
        {.addr=0x2f17, .value=0x84, .type=IO_READ},
        {.addr=0x2f18, .value=0x7b, .type=IO_READ},
        {.addr=0x017b, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0213) {
    const struct CPU_State initial_cpu = {.pc=0x745b, .a=0xaa, .x=0xb1, .y=0xa5, .sp=0x22, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fc, .value=0xff}, {.addr=0x745b, .value=0x84}, {.addr=0x745c, .value=0xfc},
    };
    const struct CPU_State final_cpu = {.pc=0x745d, .a=0xa9, .x=0xb1, .y=0xa5, .sp=0x22, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fc, .value=0xff}, {.addr=0x745b, .value=0x84}, {.addr=0x745c, .value=0xfc},
    };
    const struct BusEvent events[] = {
        {.addr=0x745b, .value=0x84, .type=IO_READ},
        {.addr=0x745c, .value=0xfc, .type=IO_READ},
        {.addr=0x01fc, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0214) {
    const struct CPU_State initial_cpu = {.pc=0x9671, .a=0x61, .x=0x23, .y=0x0f, .sp=0x2c, .status=0x24};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013a, .value=0x7d}, {.addr=0x9671, .value=0x84}, {.addr=0x9672, .value=0x3a},
    };
    const struct CPU_State final_cpu = {.pc=0x9673, .a=0xde, .x=0x23, .y=0x0f, .sp=0x2c, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x013a, .value=0x7d}, {.addr=0x9671, .value=0x84}, {.addr=0x9672, .value=0x3a},
    };
    const struct BusEvent events[] = {
        {.addr=0x9671, .value=0x84, .type=IO_READ},
        {.addr=0x9672, .value=0x3a, .type=IO_READ},
        {.addr=0x013a, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0215) {
    const struct CPU_State initial_cpu = {.pc=0xaa96, .a=0x0b, .x=0x14, .y=0x62, .sp=0x54, .status=0xac};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0136, .value=0x2e}, {.addr=0xaa96, .value=0x84}, {.addr=0xaa97, .value=0x36},
    };
    const struct CPU_State final_cpu = {.pc=0xaa98, .a=0x39, .x=0x14, .y=0x62, .sp=0x54, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0136, .value=0x2e}, {.addr=0xaa96, .value=0x84}, {.addr=0xaa97, .value=0x36},
    };
    const struct BusEvent events[] = {
        {.addr=0xaa96, .value=0x84, .type=IO_READ},
        {.addr=0xaa97, .value=0x36, .type=IO_READ},
        {.addr=0x0136, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0216) {
    const struct CPU_State initial_cpu = {.pc=0x52e4, .a=0x85, .x=0x79, .y=0xa3, .sp=0xb9, .status=0x86};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0035, .value=0x5b}, {.addr=0x52e4, .value=0x84}, {.addr=0x52e5, .value=0x35},
    };
    const struct CPU_State final_cpu = {.pc=0x52e6, .a=0xe0, .x=0x79, .y=0xa3, .sp=0xb9, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0035, .value=0x5b}, {.addr=0x52e4, .value=0x84}, {.addr=0x52e5, .value=0x35},
    };
    const struct BusEvent events[] = {
        {.addr=0x52e4, .value=0x84, .type=IO_READ},
        {.addr=0x52e5, .value=0x35, .type=IO_READ},
        {.addr=0x0035, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0217) {
    const struct CPU_State initial_cpu = {.pc=0x4778, .a=0x54, .x=0x07, .y=0xb8, .sp=0x4b, .status=0x0f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007c, .value=0x9c}, {.addr=0x4778, .value=0x84}, {.addr=0x4779, .value=0x7c},
    };
    const struct CPU_State final_cpu = {.pc=0x477a, .a=0xf1, .x=0x07, .y=0xb8, .sp=0x4b, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x007c, .value=0x9c}, {.addr=0x4778, .value=0x84}, {.addr=0x4779, .value=0x7c},
    };
    const struct BusEvent events[] = {
        {.addr=0x4778, .value=0x84, .type=IO_READ},
        {.addr=0x4779, .value=0x7c, .type=IO_READ},
        {.addr=0x007c, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0218) {
    const struct CPU_State initial_cpu = {.pc=0xa43d, .a=0xfe, .x=0x65, .y=0xd7, .sp=0xb5, .status=0x46};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0099, .value=0x47}, {.addr=0xa43d, .value=0x84}, {.addr=0xa43e, .value=0x99},
    };
    const struct CPU_State final_cpu = {.pc=0xa43f, .a=0x45, .x=0x65, .y=0xd7, .sp=0xb5, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0099, .value=0x47}, {.addr=0xa43d, .value=0x84}, {.addr=0xa43e, .value=0x99},
    };
    const struct BusEvent events[] = {
        {.addr=0xa43d, .value=0x84, .type=IO_READ},
        {.addr=0xa43e, .value=0x99, .type=IO_READ},
        {.addr=0x0099, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0219) {
    const struct CPU_State initial_cpu = {.pc=0x8db9, .a=0xa6, .x=0xca, .y=0x71, .sp=0xe3, .status=0xcb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001a, .value=0x79}, {.addr=0x8db9, .value=0x84}, {.addr=0x8dba, .value=0x1a},
    };
    const struct CPU_State final_cpu = {.pc=0x8dbb, .a=0x20, .x=0xca, .y=0x71, .sp=0xe3, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x001a, .value=0x79}, {.addr=0x8db9, .value=0x84}, {.addr=0x8dba, .value=0x1a},
    };
    const struct BusEvent events[] = {
        {.addr=0x8db9, .value=0x84, .type=IO_READ},
        {.addr=0x8dba, .value=0x1a, .type=IO_READ},
        {.addr=0x001a, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_021A) {
    const struct CPU_State initial_cpu = {.pc=0x8f3d, .a=0x14, .x=0x08, .y=0xea, .sp=0x27, .status=0xbe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013e, .value=0x0d}, {.addr=0x8f3d, .value=0x84}, {.addr=0x8f3e, .value=0x3e},
    };
    const struct CPU_State final_cpu = {.pc=0x8f3f, .a=0x21, .x=0x08, .y=0xea, .sp=0x27, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x013e, .value=0x0d}, {.addr=0x8f3d, .value=0x84}, {.addr=0x8f3e, .value=0x3e},
    };
    const struct BusEvent events[] = {
        {.addr=0x8f3d, .value=0x84, .type=IO_READ},
        {.addr=0x8f3e, .value=0x3e, .type=IO_READ},
        {.addr=0x013e, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_021B) {
    const struct CPU_State initial_cpu = {.pc=0x8005, .a=0xdd, .x=0xab, .y=0x8e, .sp=0x9d, .status=0xca};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0058, .value=0x25}, {.addr=0x8005, .value=0x84}, {.addr=0x8006, .value=0x58},
    };
    const struct CPU_State final_cpu = {.pc=0x8007, .a=0x02, .x=0xab, .y=0x8e, .sp=0x9d, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x0058, .value=0x25}, {.addr=0x8005, .value=0x84}, {.addr=0x8006, .value=0x58},
    };
    const struct BusEvent events[] = {
        {.addr=0x8005, .value=0x84, .type=IO_READ},
        {.addr=0x8006, .value=0x58, .type=IO_READ},
        {.addr=0x0058, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_021C) {
    const struct CPU_State initial_cpu = {.pc=0x76c7, .a=0xa9, .x=0x73, .y=0xd9, .sp=0xdf, .status=0xc3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007f, .value=0x43}, {.addr=0x76c7, .value=0x84}, {.addr=0x76c8, .value=0x7f},
    };
    const struct CPU_State final_cpu = {.pc=0x76c9, .a=0xed, .x=0x73, .y=0xd9, .sp=0xdf, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x007f, .value=0x43}, {.addr=0x76c7, .value=0x84}, {.addr=0x76c8, .value=0x7f},
    };
    const struct BusEvent events[] = {
        {.addr=0x76c7, .value=0x84, .type=IO_READ},
        {.addr=0x76c8, .value=0x7f, .type=IO_READ},
        {.addr=0x007f, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_021D) {
    const struct CPU_State initial_cpu = {.pc=0x735d, .a=0xe9, .x=0x12, .y=0xcc, .sp=0xa6, .status=0x0d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00be, .value=0x2b}, {.addr=0x735d, .value=0x84}, {.addr=0x735e, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0x735f, .a=0x15, .x=0x12, .y=0xcc, .sp=0xa6, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00be, .value=0x2b}, {.addr=0x735d, .value=0x84}, {.addr=0x735e, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0x735d, .value=0x84, .type=IO_READ},
        {.addr=0x735e, .value=0xbe, .type=IO_READ},
        {.addr=0x00be, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_021F) {
    const struct CPU_State initial_cpu = {.pc=0xd96f, .a=0xb8, .x=0xc2, .y=0xb6, .sp=0xcf, .status=0xae};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018a, .value=0x6f}, {.addr=0xd96f, .value=0x84}, {.addr=0xd970, .value=0x8a},
    };
    const struct CPU_State final_cpu = {.pc=0xd971, .a=0x27, .x=0xc2, .y=0xb6, .sp=0xcf, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x018a, .value=0x6f}, {.addr=0xd96f, .value=0x84}, {.addr=0xd970, .value=0x8a},
    };
    const struct BusEvent events[] = {
        {.addr=0xd96f, .value=0x84, .type=IO_READ},
        {.addr=0xd970, .value=0x8a, .type=IO_READ},
        {.addr=0x018a, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0220) {
    const struct CPU_State initial_cpu = {.pc=0xe3aa, .a=0xda, .x=0x6c, .y=0xd8, .sp=0x3c, .status=0xb4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e5, .value=0x1f}, {.addr=0xe3aa, .value=0x84}, {.addr=0xe3ab, .value=0xe5},
    };
    const struct CPU_State final_cpu = {.pc=0xe3ac, .a=0xf9, .x=0x6c, .y=0xd8, .sp=0x3c, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e5, .value=0x1f}, {.addr=0xe3aa, .value=0x84}, {.addr=0xe3ab, .value=0xe5},
    };
    const struct BusEvent events[] = {
        {.addr=0xe3aa, .value=0x84, .type=IO_READ},
        {.addr=0xe3ab, .value=0xe5, .type=IO_READ},
        {.addr=0x01e5, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0221) {
    const struct CPU_State initial_cpu = {.pc=0x4209, .a=0x90, .x=0x18, .y=0x3d, .sp=0xfe, .status=0x26};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0109, .value=0xd8}, {.addr=0x4209, .value=0x84}, {.addr=0x420a, .value=0x09},
    };
    const struct CPU_State final_cpu = {.pc=0x420b, .a=0x68, .x=0x18, .y=0x3d, .sp=0xfe, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x0109, .value=0xd8}, {.addr=0x4209, .value=0x84}, {.addr=0x420a, .value=0x09},
    };
    const struct BusEvent events[] = {
        {.addr=0x4209, .value=0x84, .type=IO_READ},
        {.addr=0x420a, .value=0x09, .type=IO_READ},
        {.addr=0x0109, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0222) {
    const struct CPU_State initial_cpu = {.pc=0x2486, .a=0x8c, .x=0xa8, .y=0xba, .sp=0xd6, .status=0xae};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0123, .value=0x71}, {.addr=0x2486, .value=0x84}, {.addr=0x2487, .value=0x23},
    };
    const struct CPU_State final_cpu = {.pc=0x2488, .a=0xfd, .x=0xa8, .y=0xba, .sp=0xd6, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0123, .value=0x71}, {.addr=0x2486, .value=0x84}, {.addr=0x2487, .value=0x23},
    };
    const struct BusEvent events[] = {
        {.addr=0x2486, .value=0x84, .type=IO_READ},
        {.addr=0x2487, .value=0x23, .type=IO_READ},
        {.addr=0x0123, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0223) {
    const struct CPU_State initial_cpu = {.pc=0xa50f, .a=0x40, .x=0x6b, .y=0x23, .sp=0xe7, .status=0x4d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0032, .value=0x7b}, {.addr=0xa50f, .value=0x84}, {.addr=0xa510, .value=0x32},
    };
    const struct CPU_State final_cpu = {.pc=0xa511, .a=0xbc, .x=0x6b, .y=0x23, .sp=0xe7, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0032, .value=0x7b}, {.addr=0xa50f, .value=0x84}, {.addr=0xa510, .value=0x32},
    };
    const struct BusEvent events[] = {
        {.addr=0xa50f, .value=0x84, .type=IO_READ},
        {.addr=0xa510, .value=0x32, .type=IO_READ},
        {.addr=0x0032, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0224) {
    const struct CPU_State initial_cpu = {.pc=0xc6e4, .a=0x90, .x=0x17, .y=0x86, .sp=0xc7, .status=0x5f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0055, .value=0x87}, {.addr=0xc6e4, .value=0x84}, {.addr=0xc6e5, .value=0x55},
    };
    const struct CPU_State final_cpu = {.pc=0xc6e6, .a=0x18, .x=0x17, .y=0x86, .sp=0xc7, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x0055, .value=0x87}, {.addr=0xc6e4, .value=0x84}, {.addr=0xc6e5, .value=0x55},
    };
    const struct BusEvent events[] = {
        {.addr=0xc6e4, .value=0x84, .type=IO_READ},
        {.addr=0xc6e5, .value=0x55, .type=IO_READ},
        {.addr=0x0055, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0225) {
    const struct CPU_State initial_cpu = {.pc=0x51da, .a=0x84, .x=0xe1, .y=0x7f, .sp=0x29, .status=0xc9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0077, .value=0xc0}, {.addr=0x51da, .value=0x84}, {.addr=0x51db, .value=0x77},
    };
    const struct CPU_State final_cpu = {.pc=0x51dc, .a=0x45, .x=0xe1, .y=0x7f, .sp=0x29, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x0077, .value=0xc0}, {.addr=0x51da, .value=0x84}, {.addr=0x51db, .value=0x77},
    };
    const struct BusEvent events[] = {
        {.addr=0x51da, .value=0x84, .type=IO_READ},
        {.addr=0x51db, .value=0x77, .type=IO_READ},
        {.addr=0x0077, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0226) {
    const struct CPU_State initial_cpu = {.pc=0x6fb5, .a=0xdb, .x=0xf3, .y=0xd4, .sp=0xf2, .status=0x78};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01db, .value=0x35}, {.addr=0x6fb5, .value=0x84}, {.addr=0x6fb6, .value=0xdb},
    };
    const struct CPU_State final_cpu = {.pc=0x6fb7, .a=0x10, .x=0xf3, .y=0xd4, .sp=0xf2, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x01db, .value=0x35}, {.addr=0x6fb5, .value=0x84}, {.addr=0x6fb6, .value=0xdb},
    };
    const struct BusEvent events[] = {
        {.addr=0x6fb5, .value=0x84, .type=IO_READ},
        {.addr=0x6fb6, .value=0xdb, .type=IO_READ},
        {.addr=0x01db, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0227) {
    const struct CPU_State initial_cpu = {.pc=0x42a4, .a=0x04, .x=0xcc, .y=0x9a, .sp=0xba, .status=0x1d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0024, .value=0x7f}, {.addr=0x42a4, .value=0x84}, {.addr=0x42a5, .value=0x24},
    };
    const struct CPU_State final_cpu = {.pc=0x42a6, .a=0x84, .x=0xcc, .y=0x9a, .sp=0xba, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0024, .value=0x7f}, {.addr=0x42a4, .value=0x84}, {.addr=0x42a5, .value=0x24},
    };
    const struct BusEvent events[] = {
        {.addr=0x42a4, .value=0x84, .type=IO_READ},
        {.addr=0x42a5, .value=0x24, .type=IO_READ},
        {.addr=0x0024, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0228) {
    const struct CPU_State initial_cpu = {.pc=0x037d, .a=0x2f, .x=0x09, .y=0xf5, .sp=0x58, .status=0x57};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0048, .value=0xf3}, {.addr=0x037d, .value=0x84}, {.addr=0x037e, .value=0x48},
    };
    const struct CPU_State final_cpu = {.pc=0x037f, .a=0x23, .x=0x09, .y=0xf5, .sp=0x58, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0048, .value=0xf3}, {.addr=0x037d, .value=0x84}, {.addr=0x037e, .value=0x48},
    };
    const struct BusEvent events[] = {
        {.addr=0x037d, .value=0x84, .type=IO_READ},
        {.addr=0x037e, .value=0x48, .type=IO_READ},
        {.addr=0x0048, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0229) {
    const struct CPU_State initial_cpu = {.pc=0x40c4, .a=0xc8, .x=0x4b, .y=0xad, .sp=0x64, .status=0x1b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009b, .value=0x63}, {.addr=0x40c4, .value=0x84}, {.addr=0x40c5, .value=0x9b},
    };
    const struct CPU_State final_cpu = {.pc=0x40c6, .a=0x2c, .x=0x4b, .y=0xad, .sp=0x64, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x009b, .value=0x63}, {.addr=0x40c4, .value=0x84}, {.addr=0x40c5, .value=0x9b},
    };
    const struct BusEvent events[] = {
        {.addr=0x40c4, .value=0x84, .type=IO_READ},
        {.addr=0x40c5, .value=0x9b, .type=IO_READ},
        {.addr=0x009b, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_022A) {
    const struct CPU_State initial_cpu = {.pc=0xac7c, .a=0xd1, .x=0xf6, .y=0x09, .sp=0x4b, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011b, .value=0x62}, {.addr=0xac7c, .value=0x84}, {.addr=0xac7d, .value=0x1b},
    };
    const struct CPU_State final_cpu = {.pc=0xac7e, .a=0x34, .x=0xf6, .y=0x09, .sp=0x4b, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x011b, .value=0x62}, {.addr=0xac7c, .value=0x84}, {.addr=0xac7d, .value=0x1b},
    };
    const struct BusEvent events[] = {
        {.addr=0xac7c, .value=0x84, .type=IO_READ},
        {.addr=0xac7d, .value=0x1b, .type=IO_READ},
        {.addr=0x011b, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_022B) {
    const struct CPU_State initial_cpu = {.pc=0x7990, .a=0x02, .x=0x98, .y=0xd0, .sp=0x43, .status=0x1e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e4, .value=0x0f}, {.addr=0x7990, .value=0x84}, {.addr=0x7991, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0x7992, .a=0x11, .x=0x98, .y=0xd0, .sp=0x43, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e4, .value=0x0f}, {.addr=0x7990, .value=0x84}, {.addr=0x7991, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0x7990, .value=0x84, .type=IO_READ},
        {.addr=0x7991, .value=0xe4, .type=IO_READ},
        {.addr=0x00e4, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_022C) {
    const struct CPU_State initial_cpu = {.pc=0xdeac, .a=0x94, .x=0x81, .y=0xc7, .sp=0x4d, .status=0x30};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0102, .value=0x92}, {.addr=0xdeac, .value=0x84}, {.addr=0xdead, .value=0x02},
    };
    const struct CPU_State final_cpu = {.pc=0xdeae, .a=0x26, .x=0x81, .y=0xc7, .sp=0x4d, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x0102, .value=0x92}, {.addr=0xdeac, .value=0x84}, {.addr=0xdead, .value=0x02},
    };
    const struct BusEvent events[] = {
        {.addr=0xdeac, .value=0x84, .type=IO_READ},
        {.addr=0xdead, .value=0x02, .type=IO_READ},
        {.addr=0x0102, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_022D) {
    const struct CPU_State initial_cpu = {.pc=0x62d9, .a=0xf7, .x=0x8b, .y=0xd0, .sp=0x38, .status=0xaf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d3, .value=0x0b}, {.addr=0x62d9, .value=0x84}, {.addr=0x62da, .value=0xd3},
    };
    const struct CPU_State final_cpu = {.pc=0x62db, .a=0x03, .x=0x8b, .y=0xd0, .sp=0x38, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d3, .value=0x0b}, {.addr=0x62d9, .value=0x84}, {.addr=0x62da, .value=0xd3},
    };
    const struct BusEvent events[] = {
        {.addr=0x62d9, .value=0x84, .type=IO_READ},
        {.addr=0x62da, .value=0xd3, .type=IO_READ},
        {.addr=0x01d3, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_022E) {
    const struct CPU_State initial_cpu = {.pc=0x34a2, .a=0x89, .x=0xb6, .y=0xda, .sp=0x04, .status=0xc9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004d, .value=0x16}, {.addr=0x34a2, .value=0x84}, {.addr=0x34a3, .value=0x4d},
    };
    const struct CPU_State final_cpu = {.pc=0x34a4, .a=0xa0, .x=0xb6, .y=0xda, .sp=0x04, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x004d, .value=0x16}, {.addr=0x34a2, .value=0x84}, {.addr=0x34a3, .value=0x4d},
    };
    const struct BusEvent events[] = {
        {.addr=0x34a2, .value=0x84, .type=IO_READ},
        {.addr=0x34a3, .value=0x4d, .type=IO_READ},
        {.addr=0x004d, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_022F) {
    const struct CPU_State initial_cpu = {.pc=0x7baf, .a=0x8c, .x=0xaf, .y=0xa8, .sp=0x12, .status=0x39};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c5, .value=0x2b}, {.addr=0x7baf, .value=0x84}, {.addr=0x7bb0, .value=0xc5},
    };
    const struct CPU_State final_cpu = {.pc=0x7bb1, .a=0xb8, .x=0xaf, .y=0xa8, .sp=0x12, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c5, .value=0x2b}, {.addr=0x7baf, .value=0x84}, {.addr=0x7bb0, .value=0xc5},
    };
    const struct BusEvent events[] = {
        {.addr=0x7baf, .value=0x84, .type=IO_READ},
        {.addr=0x7bb0, .value=0xc5, .type=IO_READ},
        {.addr=0x01c5, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0230) {
    const struct CPU_State initial_cpu = {.pc=0xbe73, .a=0x6b, .x=0xe8, .y=0x74, .sp=0xad, .status=0x5a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cc, .value=0xfe}, {.addr=0xbe73, .value=0x84}, {.addr=0xbe74, .value=0xcc},
    };
    const struct CPU_State final_cpu = {.pc=0xbe75, .a=0x69, .x=0xe8, .y=0x74, .sp=0xad, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cc, .value=0xfe}, {.addr=0xbe73, .value=0x84}, {.addr=0xbe74, .value=0xcc},
    };
    const struct BusEvent events[] = {
        {.addr=0xbe73, .value=0x84, .type=IO_READ},
        {.addr=0xbe74, .value=0xcc, .type=IO_READ},
        {.addr=0x00cc, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0231) {
    const struct CPU_State initial_cpu = {.pc=0x2de0, .a=0x31, .x=0xde, .y=0x43, .sp=0x81, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a5, .value=0x84}, {.addr=0x2de0, .value=0x84}, {.addr=0x2de1, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0x2de2, .a=0xb5, .x=0xde, .y=0x43, .sp=0x81, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a5, .value=0x84}, {.addr=0x2de0, .value=0x84}, {.addr=0x2de1, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0x2de0, .value=0x84, .type=IO_READ},
        {.addr=0x2de1, .value=0xa5, .type=IO_READ},
        {.addr=0x01a5, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0233) {
    const struct CPU_State initial_cpu = {.pc=0x1c03, .a=0x71, .x=0xa3, .y=0xbf, .sp=0xc9, .status=0x65};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0193, .value=0x05}, {.addr=0x1c03, .value=0x84}, {.addr=0x1c04, .value=0x93},
    };
    const struct CPU_State final_cpu = {.pc=0x1c05, .a=0x77, .x=0xa3, .y=0xbf, .sp=0xc9, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x0193, .value=0x05}, {.addr=0x1c03, .value=0x84}, {.addr=0x1c04, .value=0x93},
    };
    const struct BusEvent events[] = {
        {.addr=0x1c03, .value=0x84, .type=IO_READ},
        {.addr=0x1c04, .value=0x93, .type=IO_READ},
        {.addr=0x0193, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0234) {
    const struct CPU_State initial_cpu = {.pc=0xe007, .a=0x5c, .x=0xea, .y=0x7a, .sp=0xa5, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c2, .value=0xd0}, {.addr=0xe007, .value=0x84}, {.addr=0xe008, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0xe009, .a=0x2c, .x=0xea, .y=0x7a, .sp=0xa5, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c2, .value=0xd0}, {.addr=0xe007, .value=0x84}, {.addr=0xe008, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0xe007, .value=0x84, .type=IO_READ},
        {.addr=0xe008, .value=0xc2, .type=IO_READ},
        {.addr=0x01c2, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0235) {
    const struct CPU_State initial_cpu = {.pc=0x49e8, .a=0x09, .x=0x59, .y=0xd8, .sp=0xe4, .status=0x04};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0059, .value=0xf7}, {.addr=0x49e8, .value=0x84}, {.addr=0x49e9, .value=0x59},
    };
    const struct CPU_State final_cpu = {.pc=0x49ea, .a=0x00, .x=0x59, .y=0xd8, .sp=0xe4, .status=0x0f};
    const struct RamEntry final_ram[] = {
        {.addr=0x0059, .value=0xf7}, {.addr=0x49e8, .value=0x84}, {.addr=0x49e9, .value=0x59},
    };
    const struct BusEvent events[] = {
        {.addr=0x49e8, .value=0x84, .type=IO_READ},
        {.addr=0x49e9, .value=0x59, .type=IO_READ},
        {.addr=0x0059, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0236) {
    const struct CPU_State initial_cpu = {.pc=0x49d9, .a=0x01, .x=0xd7, .y=0x09, .sp=0x0e, .status=0x30};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013b, .value=0x7e}, {.addr=0x49d9, .value=0x84}, {.addr=0x49da, .value=0x3b},
    };
    const struct CPU_State final_cpu = {.pc=0x49db, .a=0x7f, .x=0xd7, .y=0x09, .sp=0x0e, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x013b, .value=0x7e}, {.addr=0x49d9, .value=0x84}, {.addr=0x49da, .value=0x3b},
    };
    const struct BusEvent events[] = {
        {.addr=0x49d9, .value=0x84, .type=IO_READ},
        {.addr=0x49da, .value=0x3b, .type=IO_READ},
        {.addr=0x013b, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0237) {
    const struct CPU_State initial_cpu = {.pc=0x8330, .a=0xf1, .x=0xf5, .y=0xcd, .sp=0x22, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0056, .value=0xda}, {.addr=0x8330, .value=0x84}, {.addr=0x8331, .value=0x56},
    };
    const struct CPU_State final_cpu = {.pc=0x8332, .a=0xcb, .x=0xf5, .y=0xcd, .sp=0x22, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x0056, .value=0xda}, {.addr=0x8330, .value=0x84}, {.addr=0x8331, .value=0x56},
    };
    const struct BusEvent events[] = {
        {.addr=0x8330, .value=0x84, .type=IO_READ},
        {.addr=0x8331, .value=0x56, .type=IO_READ},
        {.addr=0x0056, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0238) {
    const struct CPU_State initial_cpu = {.pc=0x8cb6, .a=0x31, .x=0xd7, .y=0xa5, .sp=0x1e, .status=0xae};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0190, .value=0xef}, {.addr=0x8cb6, .value=0x84}, {.addr=0x8cb7, .value=0x90},
    };
    const struct CPU_State final_cpu = {.pc=0x8cb8, .a=0x20, .x=0xd7, .y=0xa5, .sp=0x1e, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0190, .value=0xef}, {.addr=0x8cb6, .value=0x84}, {.addr=0x8cb7, .value=0x90},
    };
    const struct BusEvent events[] = {
        {.addr=0x8cb6, .value=0x84, .type=IO_READ},
        {.addr=0x8cb7, .value=0x90, .type=IO_READ},
        {.addr=0x0190, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0239) {
    const struct CPU_State initial_cpu = {.pc=0x5601, .a=0x06, .x=0x88, .y=0xbc, .sp=0x92, .status=0x7e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0141, .value=0x0b}, {.addr=0x5601, .value=0x84}, {.addr=0x5602, .value=0x41},
    };
    const struct CPU_State final_cpu = {.pc=0x5603, .a=0x11, .x=0x88, .y=0xbc, .sp=0x92, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0141, .value=0x0b}, {.addr=0x5601, .value=0x84}, {.addr=0x5602, .value=0x41},
    };
    const struct BusEvent events[] = {
        {.addr=0x5601, .value=0x84, .type=IO_READ},
        {.addr=0x5602, .value=0x41, .type=IO_READ},
        {.addr=0x0141, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_023A) {
    const struct CPU_State initial_cpu = {.pc=0xbbe3, .a=0xf1, .x=0x6c, .y=0xa7, .sp=0xab, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0127, .value=0x5c}, {.addr=0xbbe3, .value=0x84}, {.addr=0xbbe4, .value=0x27},
    };
    const struct CPU_State final_cpu = {.pc=0xbbe5, .a=0x4e, .x=0x6c, .y=0xa7, .sp=0xab, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0127, .value=0x5c}, {.addr=0xbbe3, .value=0x84}, {.addr=0xbbe4, .value=0x27},
    };
    const struct BusEvent events[] = {
        {.addr=0xbbe3, .value=0x84, .type=IO_READ},
        {.addr=0xbbe4, .value=0x27, .type=IO_READ},
        {.addr=0x0127, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_023B) {
    const struct CPU_State initial_cpu = {.pc=0xbf96, .a=0xc5, .x=0xa6, .y=0x29, .sp=0xf7, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0084, .value=0xbb}, {.addr=0xbf96, .value=0x84}, {.addr=0xbf97, .value=0x84},
    };
    const struct CPU_State final_cpu = {.pc=0xbf98, .a=0x80, .x=0xa6, .y=0x29, .sp=0xf7, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x0084, .value=0xbb}, {.addr=0xbf96, .value=0x84}, {.addr=0xbf97, .value=0x84},
    };
    const struct BusEvent events[] = {
        {.addr=0xbf96, .value=0x84, .type=IO_READ},
        {.addr=0xbf97, .value=0x84, .type=IO_READ},
        {.addr=0x0084, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_023C) {
    const struct CPU_State initial_cpu = {.pc=0x8457, .a=0x32, .x=0x49, .y=0xca, .sp=0x98, .status=0x8e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ea, .value=0xa1}, {.addr=0x8457, .value=0x84}, {.addr=0x8458, .value=0xea},
    };
    const struct CPU_State final_cpu = {.pc=0x8459, .a=0xd3, .x=0x49, .y=0xca, .sp=0x98, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ea, .value=0xa1}, {.addr=0x8457, .value=0x84}, {.addr=0x8458, .value=0xea},
    };
    const struct BusEvent events[] = {
        {.addr=0x8457, .value=0x84, .type=IO_READ},
        {.addr=0x8458, .value=0xea, .type=IO_READ},
        {.addr=0x00ea, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_023D) {
    const struct CPU_State initial_cpu = {.pc=0x10eb, .a=0xfa, .x=0xd2, .y=0x51, .sp=0x3f, .status=0x76};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c7, .value=0x49}, {.addr=0x10eb, .value=0x84}, {.addr=0x10ec, .value=0xc7},
    };
    const struct CPU_State final_cpu = {.pc=0x10ed, .a=0x43, .x=0xd2, .y=0x51, .sp=0x3f, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c7, .value=0x49}, {.addr=0x10eb, .value=0x84}, {.addr=0x10ec, .value=0xc7},
    };
    const struct BusEvent events[] = {
        {.addr=0x10eb, .value=0x84, .type=IO_READ},
        {.addr=0x10ec, .value=0xc7, .type=IO_READ},
        {.addr=0x01c7, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_023F) {
    const struct CPU_State initial_cpu = {.pc=0x4495, .a=0x92, .x=0xe5, .y=0x68, .sp=0x2f, .status=0x6a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d8, .value=0xb6}, {.addr=0x4495, .value=0x84}, {.addr=0x4496, .value=0xd8},
    };
    const struct CPU_State final_cpu = {.pc=0x4497, .a=0x48, .x=0xe5, .y=0x68, .sp=0x2f, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d8, .value=0xb6}, {.addr=0x4495, .value=0x84}, {.addr=0x4496, .value=0xd8},
    };
    const struct BusEvent events[] = {
        {.addr=0x4495, .value=0x84, .type=IO_READ},
        {.addr=0x4496, .value=0xd8, .type=IO_READ},
        {.addr=0x01d8, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0240) {
    const struct CPU_State initial_cpu = {.pc=0x851b, .a=0x90, .x=0x81, .y=0x74, .sp=0x7e, .status=0xf9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0182, .value=0xd7}, {.addr=0x851b, .value=0x84}, {.addr=0x851c, .value=0x82},
    };
    const struct CPU_State final_cpu = {.pc=0x851d, .a=0x68, .x=0x81, .y=0x74, .sp=0x7e, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x0182, .value=0xd7}, {.addr=0x851b, .value=0x84}, {.addr=0x851c, .value=0x82},
    };
    const struct BusEvent events[] = {
        {.addr=0x851b, .value=0x84, .type=IO_READ},
        {.addr=0x851c, .value=0x82, .type=IO_READ},
        {.addr=0x0182, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0241) {
    const struct CPU_State initial_cpu = {.pc=0x9bc5, .a=0x95, .x=0x44, .y=0x27, .sp=0xb7, .status=0x49};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0040, .value=0x9f}, {.addr=0x9bc5, .value=0x84}, {.addr=0x9bc6, .value=0x40},
    };
    const struct CPU_State final_cpu = {.pc=0x9bc7, .a=0x35, .x=0x44, .y=0x27, .sp=0xb7, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x0040, .value=0x9f}, {.addr=0x9bc5, .value=0x84}, {.addr=0x9bc6, .value=0x40},
    };
    const struct BusEvent events[] = {
        {.addr=0x9bc5, .value=0x84, .type=IO_READ},
        {.addr=0x9bc6, .value=0x40, .type=IO_READ},
        {.addr=0x0040, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0242) {
    const struct CPU_State initial_cpu = {.pc=0xd2c4, .a=0x19, .x=0xa4, .y=0x4f, .sp=0xfa, .status=0x9f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0082, .value=0xbb}, {.addr=0xd2c4, .value=0x84}, {.addr=0xd2c5, .value=0x82},
    };
    const struct CPU_State final_cpu = {.pc=0xd2c6, .a=0xd5, .x=0xa4, .y=0x4f, .sp=0xfa, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0082, .value=0xbb}, {.addr=0xd2c4, .value=0x84}, {.addr=0xd2c5, .value=0x82},
    };
    const struct BusEvent events[] = {
        {.addr=0xd2c4, .value=0x84, .type=IO_READ},
        {.addr=0xd2c5, .value=0x82, .type=IO_READ},
        {.addr=0x0082, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0243) {
    const struct CPU_State initial_cpu = {.pc=0x43d5, .a=0xec, .x=0x9f, .y=0x61, .sp=0xb6, .status=0xed};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cd, .value=0x18}, {.addr=0x43d5, .value=0x84}, {.addr=0x43d6, .value=0xcd},
    };
    const struct CPU_State final_cpu = {.pc=0x43d7, .a=0x05, .x=0x9f, .y=0x61, .sp=0xb6, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cd, .value=0x18}, {.addr=0x43d5, .value=0x84}, {.addr=0x43d6, .value=0xcd},
    };
    const struct BusEvent events[] = {
        {.addr=0x43d5, .value=0x84, .type=IO_READ},
        {.addr=0x43d6, .value=0xcd, .type=IO_READ},
        {.addr=0x01cd, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0244) {
    const struct CPU_State initial_cpu = {.pc=0xfe20, .a=0x06, .x=0x08, .y=0xd9, .sp=0x0b, .status=0xc7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0078, .value=0x85}, {.addr=0xfe20, .value=0x84}, {.addr=0xfe21, .value=0x78},
    };
    const struct CPU_State final_cpu = {.pc=0xfe22, .a=0x8c, .x=0x08, .y=0xd9, .sp=0x0b, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x0078, .value=0x85}, {.addr=0xfe20, .value=0x84}, {.addr=0xfe21, .value=0x78},
    };
    const struct BusEvent events[] = {
        {.addr=0xfe20, .value=0x84, .type=IO_READ},
        {.addr=0xfe21, .value=0x78, .type=IO_READ},
        {.addr=0x0078, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0245) {
    const struct CPU_State initial_cpu = {.pc=0x4de6, .a=0xc0, .x=0x54, .y=0xed, .sp=0xd3, .status=0x36};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0195, .value=0x33}, {.addr=0x4de6, .value=0x84}, {.addr=0x4de7, .value=0x95},
    };
    const struct CPU_State final_cpu = {.pc=0x4de8, .a=0xf3, .x=0x54, .y=0xed, .sp=0xd3, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0195, .value=0x33}, {.addr=0x4de6, .value=0x84}, {.addr=0x4de7, .value=0x95},
    };
    const struct BusEvent events[] = {
        {.addr=0x4de6, .value=0x84, .type=IO_READ},
        {.addr=0x4de7, .value=0x95, .type=IO_READ},
        {.addr=0x0195, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0246) {
    const struct CPU_State initial_cpu = {.pc=0x12d8, .a=0x2b, .x=0x50, .y=0x09, .sp=0xff, .status=0xd3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004b, .value=0xf7}, {.addr=0x12d8, .value=0x84}, {.addr=0x12d9, .value=0x4b},
    };
    const struct CPU_State final_cpu = {.pc=0x12da, .a=0x23, .x=0x50, .y=0x09, .sp=0xff, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x004b, .value=0xf7}, {.addr=0x12d8, .value=0x84}, {.addr=0x12d9, .value=0x4b},
    };
    const struct BusEvent events[] = {
        {.addr=0x12d8, .value=0x84, .type=IO_READ},
        {.addr=0x12d9, .value=0x4b, .type=IO_READ},
        {.addr=0x004b, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0247) {
    const struct CPU_State initial_cpu = {.pc=0x740d, .a=0xb0, .x=0xeb, .y=0xd2, .sp=0x6c, .status=0x53};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00df, .value=0x9a}, {.addr=0x740d, .value=0x84}, {.addr=0x740e, .value=0xdf},
    };
    const struct CPU_State final_cpu = {.pc=0x740f, .a=0x4b, .x=0xeb, .y=0xd2, .sp=0x6c, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x00df, .value=0x9a}, {.addr=0x740d, .value=0x84}, {.addr=0x740e, .value=0xdf},
    };
    const struct BusEvent events[] = {
        {.addr=0x740d, .value=0x84, .type=IO_READ},
        {.addr=0x740e, .value=0xdf, .type=IO_READ},
        {.addr=0x00df, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0249) {
    const struct CPU_State initial_cpu = {.pc=0x30f1, .a=0x7b, .x=0x4c, .y=0x66, .sp=0xa1, .status=0x4b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0015, .value=0x37}, {.addr=0x30f1, .value=0x84}, {.addr=0x30f2, .value=0x15},
    };
    const struct CPU_State final_cpu = {.pc=0x30f3, .a=0xb3, .x=0x4c, .y=0x66, .sp=0xa1, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0015, .value=0x37}, {.addr=0x30f1, .value=0x84}, {.addr=0x30f2, .value=0x15},
    };
    const struct BusEvent events[] = {
        {.addr=0x30f1, .value=0x84, .type=IO_READ},
        {.addr=0x30f2, .value=0x15, .type=IO_READ},
        {.addr=0x0015, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_024A) {
    const struct CPU_State initial_cpu = {.pc=0xfb08, .a=0xc3, .x=0x5e, .y=0x90, .sp=0x3c, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0045, .value=0xe6}, {.addr=0xfb08, .value=0x84}, {.addr=0xfb09, .value=0x45},
    };
    const struct CPU_State final_cpu = {.pc=0xfb0a, .a=0xa9, .x=0x5e, .y=0x90, .sp=0x3c, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x0045, .value=0xe6}, {.addr=0xfb08, .value=0x84}, {.addr=0xfb09, .value=0x45},
    };
    const struct BusEvent events[] = {
        {.addr=0xfb08, .value=0x84, .type=IO_READ},
        {.addr=0xfb09, .value=0x45, .type=IO_READ},
        {.addr=0x0045, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_024B) {
    const struct CPU_State initial_cpu = {.pc=0x9454, .a=0x7e, .x=0x55, .y=0x7b, .sp=0x70, .status=0x02};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ab, .value=0x96}, {.addr=0x9454, .value=0x84}, {.addr=0x9455, .value=0xab},
    };
    const struct CPU_State final_cpu = {.pc=0x9456, .a=0x14, .x=0x55, .y=0x7b, .sp=0x70, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ab, .value=0x96}, {.addr=0x9454, .value=0x84}, {.addr=0x9455, .value=0xab},
    };
    const struct BusEvent events[] = {
        {.addr=0x9454, .value=0x84, .type=IO_READ},
        {.addr=0x9455, .value=0xab, .type=IO_READ},
        {.addr=0x00ab, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_024C) {
    const struct CPU_State initial_cpu = {.pc=0x4507, .a=0xd4, .x=0x33, .y=0xab, .sp=0x6a, .status=0x9b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c2, .value=0x6a}, {.addr=0x4507, .value=0x84}, {.addr=0x4508, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0x4509, .a=0x3f, .x=0x33, .y=0xab, .sp=0x6a, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c2, .value=0x6a}, {.addr=0x4507, .value=0x84}, {.addr=0x4508, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0x4507, .value=0x84, .type=IO_READ},
        {.addr=0x4508, .value=0xc2, .type=IO_READ},
        {.addr=0x00c2, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_024D) {
    const struct CPU_State initial_cpu = {.pc=0x2b04, .a=0x07, .x=0x01, .y=0xd3, .sp=0x1b, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0157, .value=0xa5}, {.addr=0x2b04, .value=0x84}, {.addr=0x2b05, .value=0x57},
    };
    const struct CPU_State final_cpu = {.pc=0x2b06, .a=0xad, .x=0x01, .y=0xd3, .sp=0x1b, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0157, .value=0xa5}, {.addr=0x2b04, .value=0x84}, {.addr=0x2b05, .value=0x57},
    };
    const struct BusEvent events[] = {
        {.addr=0x2b04, .value=0x84, .type=IO_READ},
        {.addr=0x2b05, .value=0x57, .type=IO_READ},
        {.addr=0x0157, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_024E) {
    const struct CPU_State initial_cpu = {.pc=0xf66e, .a=0x8b, .x=0x1d, .y=0x71, .sp=0x40, .status=0xba};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019a, .value=0x9f}, {.addr=0xf66e, .value=0x84}, {.addr=0xf66f, .value=0x9a},
    };
    const struct CPU_State final_cpu = {.pc=0xf670, .a=0x2a, .x=0x1d, .y=0x71, .sp=0x40, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x019a, .value=0x9f}, {.addr=0xf66e, .value=0x84}, {.addr=0xf66f, .value=0x9a},
    };
    const struct BusEvent events[] = {
        {.addr=0xf66e, .value=0x84, .type=IO_READ},
        {.addr=0xf66f, .value=0x9a, .type=IO_READ},
        {.addr=0x019a, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_024F) {
    const struct CPU_State initial_cpu = {.pc=0xe463, .a=0x64, .x=0xff, .y=0x00, .sp=0xed, .status=0x84};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cb, .value=0xe5}, {.addr=0xe463, .value=0x84}, {.addr=0xe464, .value=0xcb},
    };
    const struct CPU_State final_cpu = {.pc=0xe465, .a=0x49, .x=0xff, .y=0x00, .sp=0xed, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cb, .value=0xe5}, {.addr=0xe463, .value=0x84}, {.addr=0xe464, .value=0xcb},
    };
    const struct BusEvent events[] = {
        {.addr=0xe463, .value=0x84, .type=IO_READ},
        {.addr=0xe464, .value=0xcb, .type=IO_READ},
        {.addr=0x00cb, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0250) {
    const struct CPU_State initial_cpu = {.pc=0xbfd4, .a=0xba, .x=0x33, .y=0xff, .sp=0xfa, .status=0x6a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0100, .value=0xa1}, {.addr=0xbfd4, .value=0x84}, {.addr=0xbfd5, .value=0x00},
    };
    const struct CPU_State final_cpu = {.pc=0xbfd6, .a=0x5b, .x=0x33, .y=0xff, .sp=0xfa, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x0100, .value=0xa1}, {.addr=0xbfd4, .value=0x84}, {.addr=0xbfd5, .value=0x00},
    };
    const struct BusEvent events[] = {
        {.addr=0xbfd4, .value=0x84, .type=IO_READ},
        {.addr=0xbfd5, .value=0x00, .type=IO_READ},
        {.addr=0x0100, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0251) {
    const struct CPU_State initial_cpu = {.pc=0xb305, .a=0xc8, .x=0x9f, .y=0xc1, .sp=0x75, .status=0x04};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0038, .value=0xf2}, {.addr=0xb305, .value=0x84}, {.addr=0xb306, .value=0x38},
    };
    const struct CPU_State final_cpu = {.pc=0xb307, .a=0xba, .x=0x9f, .y=0xc1, .sp=0x75, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x0038, .value=0xf2}, {.addr=0xb305, .value=0x84}, {.addr=0xb306, .value=0x38},
    };
    const struct BusEvent events[] = {
        {.addr=0xb305, .value=0x84, .type=IO_READ},
        {.addr=0xb306, .value=0x38, .type=IO_READ},
        {.addr=0x0038, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0252) {
    const struct CPU_State initial_cpu = {.pc=0x785d, .a=0x60, .x=0x09, .y=0x31, .sp=0x9d, .status=0x50};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003d, .value=0xa6}, {.addr=0x785d, .value=0x84}, {.addr=0x785e, .value=0x3d},
    };
    const struct CPU_State final_cpu = {.pc=0x785f, .a=0x06, .x=0x09, .y=0x31, .sp=0x9d, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x003d, .value=0xa6}, {.addr=0x785d, .value=0x84}, {.addr=0x785e, .value=0x3d},
    };
    const struct BusEvent events[] = {
        {.addr=0x785d, .value=0x84, .type=IO_READ},
        {.addr=0x785e, .value=0x3d, .type=IO_READ},
        {.addr=0x003d, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0253) {
    const struct CPU_State initial_cpu = {.pc=0x9c74, .a=0x8e, .x=0x98, .y=0xa3, .sp=0xfd, .status=0x33};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0183, .value=0x1b}, {.addr=0x9c74, .value=0x84}, {.addr=0x9c75, .value=0x83},
    };
    const struct CPU_State final_cpu = {.pc=0x9c76, .a=0xaa, .x=0x98, .y=0xa3, .sp=0xfd, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0183, .value=0x1b}, {.addr=0x9c74, .value=0x84}, {.addr=0x9c75, .value=0x83},
    };
    const struct BusEvent events[] = {
        {.addr=0x9c74, .value=0x84, .type=IO_READ},
        {.addr=0x9c75, .value=0x83, .type=IO_READ},
        {.addr=0x0183, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0254) {
    const struct CPU_State initial_cpu = {.pc=0x1c79, .a=0x29, .x=0x28, .y=0x35, .sp=0x50, .status=0x66};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0136, .value=0x86}, {.addr=0x1c79, .value=0x84}, {.addr=0x1c7a, .value=0x36},
    };
    const struct CPU_State final_cpu = {.pc=0x1c7b, .a=0xaf, .x=0x28, .y=0x35, .sp=0x50, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0136, .value=0x86}, {.addr=0x1c79, .value=0x84}, {.addr=0x1c7a, .value=0x36},
    };
    const struct BusEvent events[] = {
        {.addr=0x1c79, .value=0x84, .type=IO_READ},
        {.addr=0x1c7a, .value=0x36, .type=IO_READ},
        {.addr=0x0136, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0255) {
    const struct CPU_State initial_cpu = {.pc=0x02d3, .a=0xd1, .x=0xef, .y=0xa0, .sp=0x37, .status=0xee};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0108, .value=0x93}, {.addr=0x02d3, .value=0x84}, {.addr=0x02d4, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0x02d5, .a=0x64, .x=0xef, .y=0xa0, .sp=0x37, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x0108, .value=0x93}, {.addr=0x02d3, .value=0x84}, {.addr=0x02d4, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0x02d3, .value=0x84, .type=IO_READ},
        {.addr=0x02d4, .value=0x08, .type=IO_READ},
        {.addr=0x0108, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0256) {
    const struct CPU_State initial_cpu = {.pc=0x7773, .a=0x2d, .x=0x02, .y=0x55, .sp=0xc0, .status=0x2d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0142, .value=0xe9}, {.addr=0x7773, .value=0x84}, {.addr=0x7774, .value=0x42},
    };
    const struct CPU_State final_cpu = {.pc=0x7775, .a=0x17, .x=0x02, .y=0x55, .sp=0xc0, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0142, .value=0xe9}, {.addr=0x7773, .value=0x84}, {.addr=0x7774, .value=0x42},
    };
    const struct BusEvent events[] = {
        {.addr=0x7773, .value=0x84, .type=IO_READ},
        {.addr=0x7774, .value=0x42, .type=IO_READ},
        {.addr=0x0142, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0257) {
    const struct CPU_State initial_cpu = {.pc=0xabd9, .a=0x30, .x=0xbc, .y=0x25, .sp=0x88, .status=0x71};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fb, .value=0xcb}, {.addr=0xabd9, .value=0x84}, {.addr=0xabda, .value=0xfb},
    };
    const struct CPU_State final_cpu = {.pc=0xabdb, .a=0xfc, .x=0xbc, .y=0x25, .sp=0x88, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fb, .value=0xcb}, {.addr=0xabd9, .value=0x84}, {.addr=0xabda, .value=0xfb},
    };
    const struct BusEvent events[] = {
        {.addr=0xabd9, .value=0x84, .type=IO_READ},
        {.addr=0xabda, .value=0xfb, .type=IO_READ},
        {.addr=0x01fb, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0259) {
    const struct CPU_State initial_cpu = {.pc=0x3491, .a=0x83, .x=0xb2, .y=0xdc, .sp=0xdf, .status=0x35};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013a, .value=0x70}, {.addr=0x3491, .value=0x84}, {.addr=0x3492, .value=0x3a},
    };
    const struct CPU_State final_cpu = {.pc=0x3493, .a=0xf4, .x=0xb2, .y=0xdc, .sp=0xdf, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x013a, .value=0x70}, {.addr=0x3491, .value=0x84}, {.addr=0x3492, .value=0x3a},
    };
    const struct BusEvent events[] = {
        {.addr=0x3491, .value=0x84, .type=IO_READ},
        {.addr=0x3492, .value=0x3a, .type=IO_READ},
        {.addr=0x013a, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_025A) {
    const struct CPU_State initial_cpu = {.pc=0xbd1a, .a=0x3f, .x=0xeb, .y=0x18, .sp=0x05, .status=0xa8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b5, .value=0x99}, {.addr=0xbd1a, .value=0x84}, {.addr=0xbd1b, .value=0xb5},
    };
    const struct CPU_State final_cpu = {.pc=0xbd1c, .a=0xd8, .x=0xeb, .y=0x18, .sp=0x05, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b5, .value=0x99}, {.addr=0xbd1a, .value=0x84}, {.addr=0xbd1b, .value=0xb5},
    };
    const struct BusEvent events[] = {
        {.addr=0xbd1a, .value=0x84, .type=IO_READ},
        {.addr=0xbd1b, .value=0xb5, .type=IO_READ},
        {.addr=0x01b5, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_025B) {
    const struct CPU_State initial_cpu = {.pc=0x028f, .a=0x52, .x=0xb5, .y=0x60, .sp=0x78, .status=0x13};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0042, .value=0x49}, {.addr=0x028f, .value=0x84}, {.addr=0x0290, .value=0x42},
    };
    const struct CPU_State final_cpu = {.pc=0x0291, .a=0x9c, .x=0xb5, .y=0x60, .sp=0x78, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0042, .value=0x49}, {.addr=0x028f, .value=0x84}, {.addr=0x0290, .value=0x42},
    };
    const struct BusEvent events[] = {
        {.addr=0x028f, .value=0x84, .type=IO_READ},
        {.addr=0x0290, .value=0x42, .type=IO_READ},
        {.addr=0x0042, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_025C) {
    const struct CPU_State initial_cpu = {.pc=0xd7f8, .a=0x47, .x=0x95, .y=0x1b, .sp=0x60, .status=0x5a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0076, .value=0x85}, {.addr=0xd7f8, .value=0x84}, {.addr=0xd7f9, .value=0x76},
    };
    const struct CPU_State final_cpu = {.pc=0xd7fa, .a=0xcc, .x=0x95, .y=0x1b, .sp=0x60, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x0076, .value=0x85}, {.addr=0xd7f8, .value=0x84}, {.addr=0xd7f9, .value=0x76},
    };
    const struct BusEvent events[] = {
        {.addr=0xd7f8, .value=0x84, .type=IO_READ},
        {.addr=0xd7f9, .value=0x76, .type=IO_READ},
        {.addr=0x0076, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_025D) {
    const struct CPU_State initial_cpu = {.pc=0xe5b0, .a=0xd2, .x=0x7a, .y=0x09, .sp=0x7c, .status=0x57};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0053, .value=0xf2}, {.addr=0xe5b0, .value=0x84}, {.addr=0xe5b1, .value=0x53},
    };
    const struct CPU_State final_cpu = {.pc=0xe5b2, .a=0xc5, .x=0x7a, .y=0x09, .sp=0x7c, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x0053, .value=0xf2}, {.addr=0xe5b0, .value=0x84}, {.addr=0xe5b1, .value=0x53},
    };
    const struct BusEvent events[] = {
        {.addr=0xe5b0, .value=0x84, .type=IO_READ},
        {.addr=0xe5b1, .value=0x53, .type=IO_READ},
        {.addr=0x0053, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_025E) {
    const struct CPU_State initial_cpu = {.pc=0x60b4, .a=0x1e, .x=0x46, .y=0x66, .sp=0x1b, .status=0x01};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e4, .value=0xb2}, {.addr=0x60b4, .value=0x84}, {.addr=0x60b5, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0x60b6, .a=0xd1, .x=0x46, .y=0x66, .sp=0x1b, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e4, .value=0xb2}, {.addr=0x60b4, .value=0x84}, {.addr=0x60b5, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0x60b4, .value=0x84, .type=IO_READ},
        {.addr=0x60b5, .value=0xe4, .type=IO_READ},
        {.addr=0x00e4, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_025F) {
    const struct CPU_State initial_cpu = {.pc=0xa025, .a=0x7d, .x=0xdc, .y=0x85, .sp=0xbc, .status=0x18};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007e, .value=0xef}, {.addr=0xa025, .value=0x84}, {.addr=0xa026, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0xa027, .a=0x6c, .x=0xdc, .y=0x85, .sp=0xbc, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x007e, .value=0xef}, {.addr=0xa025, .value=0x84}, {.addr=0xa026, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0xa025, .value=0x84, .type=IO_READ},
        {.addr=0xa026, .value=0x7e, .type=IO_READ},
        {.addr=0x007e, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0260) {
    const struct CPU_State initial_cpu = {.pc=0xf7a2, .a=0x99, .x=0x26, .y=0xaa, .sp=0xd0, .status=0x62};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0180, .value=0xcd}, {.addr=0xf7a2, .value=0x84}, {.addr=0xf7a3, .value=0x80},
    };
    const struct CPU_State final_cpu = {.pc=0xf7a4, .a=0x66, .x=0x26, .y=0xaa, .sp=0xd0, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x0180, .value=0xcd}, {.addr=0xf7a2, .value=0x84}, {.addr=0xf7a3, .value=0x80},
    };
    const struct BusEvent events[] = {
        {.addr=0xf7a2, .value=0x84, .type=IO_READ},
        {.addr=0xf7a3, .value=0x80, .type=IO_READ},
        {.addr=0x0180, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0261) {
    const struct CPU_State initial_cpu = {.pc=0x717e, .a=0xd7, .x=0xfe, .y=0x24, .sp=0x04, .status=0xe3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0160, .value=0x30}, {.addr=0x717e, .value=0x84}, {.addr=0x717f, .value=0x60},
    };
    const struct CPU_State final_cpu = {.pc=0x7180, .a=0x08, .x=0xfe, .y=0x24, .sp=0x04, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x0160, .value=0x30}, {.addr=0x717e, .value=0x84}, {.addr=0x717f, .value=0x60},
    };
    const struct BusEvent events[] = {
        {.addr=0x717e, .value=0x84, .type=IO_READ},
        {.addr=0x717f, .value=0x60, .type=IO_READ},
        {.addr=0x0160, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0262) {
    const struct CPU_State initial_cpu = {.pc=0x61b3, .a=0xa6, .x=0x76, .y=0x59, .sp=0xe4, .status=0x04};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00dc, .value=0x86}, {.addr=0x61b3, .value=0x84}, {.addr=0x61b4, .value=0xdc},
    };
    const struct CPU_State final_cpu = {.pc=0x61b5, .a=0x2c, .x=0x76, .y=0x59, .sp=0xe4, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x00dc, .value=0x86}, {.addr=0x61b3, .value=0x84}, {.addr=0x61b4, .value=0xdc},
    };
    const struct BusEvent events[] = {
        {.addr=0x61b3, .value=0x84, .type=IO_READ},
        {.addr=0x61b4, .value=0xdc, .type=IO_READ},
        {.addr=0x00dc, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0263) {
    const struct CPU_State initial_cpu = {.pc=0x11e7, .a=0x1d, .x=0x78, .y=0x67, .sp=0x34, .status=0x61};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0127, .value=0x28}, {.addr=0x11e7, .value=0x84}, {.addr=0x11e8, .value=0x27},
    };
    const struct CPU_State final_cpu = {.pc=0x11e9, .a=0x46, .x=0x78, .y=0x67, .sp=0x34, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x0127, .value=0x28}, {.addr=0x11e7, .value=0x84}, {.addr=0x11e8, .value=0x27},
    };
    const struct BusEvent events[] = {
        {.addr=0x11e7, .value=0x84, .type=IO_READ},
        {.addr=0x11e8, .value=0x27, .type=IO_READ},
        {.addr=0x0127, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0264) {
    const struct CPU_State initial_cpu = {.pc=0x66ee, .a=0xbd, .x=0xb3, .y=0x08, .sp=0x55, .status=0x28};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b0, .value=0x24}, {.addr=0x66ee, .value=0x84}, {.addr=0x66ef, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0x66f0, .a=0xe1, .x=0xb3, .y=0x08, .sp=0x55, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b0, .value=0x24}, {.addr=0x66ee, .value=0x84}, {.addr=0x66ef, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0x66ee, .value=0x84, .type=IO_READ},
        {.addr=0x66ef, .value=0xb0, .type=IO_READ},
        {.addr=0x01b0, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0265) {
    const struct CPU_State initial_cpu = {.pc=0x7950, .a=0xb4, .x=0xf0, .y=0x66, .sp=0xe2, .status=0x26};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0142, .value=0xfa}, {.addr=0x7950, .value=0x84}, {.addr=0x7951, .value=0x42},
    };
    const struct CPU_State final_cpu = {.pc=0x7952, .a=0xae, .x=0xf0, .y=0x66, .sp=0xe2, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0142, .value=0xfa}, {.addr=0x7950, .value=0x84}, {.addr=0x7951, .value=0x42},
    };
    const struct BusEvent events[] = {
        {.addr=0x7950, .value=0x84, .type=IO_READ},
        {.addr=0x7951, .value=0x42, .type=IO_READ},
        {.addr=0x0142, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0266) {
    const struct CPU_State initial_cpu = {.pc=0xe708, .a=0xbc, .x=0xe1, .y=0x29, .sp=0x43, .status=0x1a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0026, .value=0x71}, {.addr=0xe708, .value=0x84}, {.addr=0xe709, .value=0x26},
    };
    const struct CPU_State final_cpu = {.pc=0xe70a, .a=0x2d, .x=0xe1, .y=0x29, .sp=0x43, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x0026, .value=0x71}, {.addr=0xe708, .value=0x84}, {.addr=0xe709, .value=0x26},
    };
    const struct BusEvent events[] = {
        {.addr=0xe708, .value=0x84, .type=IO_READ},
        {.addr=0xe709, .value=0x26, .type=IO_READ},
        {.addr=0x0026, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0267) {
    const struct CPU_State initial_cpu = {.pc=0xb18d, .a=0x02, .x=0x5a, .y=0x82, .sp=0xb2, .status=0x42};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005b, .value=0x59}, {.addr=0xb18d, .value=0x84}, {.addr=0xb18e, .value=0x5b},
    };
    const struct CPU_State final_cpu = {.pc=0xb18f, .a=0x5b, .x=0x5a, .y=0x82, .sp=0xb2, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x005b, .value=0x59}, {.addr=0xb18d, .value=0x84}, {.addr=0xb18e, .value=0x5b},
    };
    const struct BusEvent events[] = {
        {.addr=0xb18d, .value=0x84, .type=IO_READ},
        {.addr=0xb18e, .value=0x5b, .type=IO_READ},
        {.addr=0x005b, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0268) {
    const struct CPU_State initial_cpu = {.pc=0x5f92, .a=0x6b, .x=0x54, .y=0x28, .sp=0x03, .status=0x06};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0020, .value=0x8f}, {.addr=0x5f92, .value=0x84}, {.addr=0x5f93, .value=0x20},
    };
    const struct CPU_State final_cpu = {.pc=0x5f94, .a=0xfa, .x=0x54, .y=0x28, .sp=0x03, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0020, .value=0x8f}, {.addr=0x5f92, .value=0x84}, {.addr=0x5f93, .value=0x20},
    };
    const struct BusEvent events[] = {
        {.addr=0x5f92, .value=0x84, .type=IO_READ},
        {.addr=0x5f93, .value=0x20, .type=IO_READ},
        {.addr=0x0020, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_026A) {
    const struct CPU_State initial_cpu = {.pc=0x3939, .a=0xd0, .x=0xd4, .y=0xd4, .sp=0x62, .status=0x6f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0101, .value=0x11}, {.addr=0x3939, .value=0x84}, {.addr=0x393a, .value=0x01},
    };
    const struct CPU_State final_cpu = {.pc=0x393b, .a=0xe2, .x=0xd4, .y=0xd4, .sp=0x62, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0101, .value=0x11}, {.addr=0x3939, .value=0x84}, {.addr=0x393a, .value=0x01},
    };
    const struct BusEvent events[] = {
        {.addr=0x3939, .value=0x84, .type=IO_READ},
        {.addr=0x393a, .value=0x01, .type=IO_READ},
        {.addr=0x0101, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_026B) {
    const struct CPU_State initial_cpu = {.pc=0x419d, .a=0x8c, .x=0x75, .y=0x0a, .sp=0x86, .status=0x7d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010b, .value=0xb5}, {.addr=0x419d, .value=0x84}, {.addr=0x419e, .value=0x0b},
    };
    const struct CPU_State final_cpu = {.pc=0x419f, .a=0x42, .x=0x75, .y=0x0a, .sp=0x86, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x010b, .value=0xb5}, {.addr=0x419d, .value=0x84}, {.addr=0x419e, .value=0x0b},
    };
    const struct BusEvent events[] = {
        {.addr=0x419d, .value=0x84, .type=IO_READ},
        {.addr=0x419e, .value=0x0b, .type=IO_READ},
        {.addr=0x010b, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_026C) {
    const struct CPU_State initial_cpu = {.pc=0xfd73, .a=0xf6, .x=0x62, .y=0xd7, .sp=0x28, .status=0xef};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011d, .value=0xf1}, {.addr=0xfd73, .value=0x84}, {.addr=0xfd74, .value=0x1d},
    };
    const struct CPU_State final_cpu = {.pc=0xfd75, .a=0xe8, .x=0x62, .y=0xd7, .sp=0x28, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x011d, .value=0xf1}, {.addr=0xfd73, .value=0x84}, {.addr=0xfd74, .value=0x1d},
    };
    const struct BusEvent events[] = {
        {.addr=0xfd73, .value=0x84, .type=IO_READ},
        {.addr=0xfd74, .value=0x1d, .type=IO_READ},
        {.addr=0x011d, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_026D) {
    const struct CPU_State initial_cpu = {.pc=0x759b, .a=0x1d, .x=0xe5, .y=0x09, .sp=0xbd, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bd, .value=0x95}, {.addr=0x759b, .value=0x84}, {.addr=0x759c, .value=0xbd},
    };
    const struct CPU_State final_cpu = {.pc=0x759d, .a=0xb2, .x=0xe5, .y=0x09, .sp=0xbd, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bd, .value=0x95}, {.addr=0x759b, .value=0x84}, {.addr=0x759c, .value=0xbd},
    };
    const struct BusEvent events[] = {
        {.addr=0x759b, .value=0x84, .type=IO_READ},
        {.addr=0x759c, .value=0xbd, .type=IO_READ},
        {.addr=0x01bd, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_026E) {
    const struct CPU_State initial_cpu = {.pc=0x9dbd, .a=0x36, .x=0x3f, .y=0xeb, .sp=0xf5, .status=0x8b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007c, .value=0x8d}, {.addr=0x9dbd, .value=0x84}, {.addr=0x9dbe, .value=0x7c},
    };
    const struct CPU_State final_cpu = {.pc=0x9dbf, .a=0xc4, .x=0x3f, .y=0xeb, .sp=0xf5, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x007c, .value=0x8d}, {.addr=0x9dbd, .value=0x84}, {.addr=0x9dbe, .value=0x7c},
    };
    const struct BusEvent events[] = {
        {.addr=0x9dbd, .value=0x84, .type=IO_READ},
        {.addr=0x9dbe, .value=0x7c, .type=IO_READ},
        {.addr=0x007c, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_026F) {
    const struct CPU_State initial_cpu = {.pc=0xe0b9, .a=0x11, .x=0x42, .y=0x42, .sp=0x87, .status=0x16};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008c, .value=0x2f}, {.addr=0xe0b9, .value=0x84}, {.addr=0xe0ba, .value=0x8c},
    };
    const struct CPU_State final_cpu = {.pc=0xe0bb, .a=0x40, .x=0x42, .y=0x42, .sp=0x87, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x008c, .value=0x2f}, {.addr=0xe0b9, .value=0x84}, {.addr=0xe0ba, .value=0x8c},
    };
    const struct BusEvent events[] = {
        {.addr=0xe0b9, .value=0x84, .type=IO_READ},
        {.addr=0xe0ba, .value=0x8c, .type=IO_READ},
        {.addr=0x008c, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0270) {
    const struct CPU_State initial_cpu = {.pc=0x69d6, .a=0x01, .x=0x88, .y=0x4d, .sp=0x44, .status=0x82};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0088, .value=0x29}, {.addr=0x69d6, .value=0x84}, {.addr=0x69d7, .value=0x88},
    };
    const struct CPU_State final_cpu = {.pc=0x69d8, .a=0x2a, .x=0x88, .y=0x4d, .sp=0x44, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x0088, .value=0x29}, {.addr=0x69d6, .value=0x84}, {.addr=0x69d7, .value=0x88},
    };
    const struct BusEvent events[] = {
        {.addr=0x69d6, .value=0x84, .type=IO_READ},
        {.addr=0x69d7, .value=0x88, .type=IO_READ},
        {.addr=0x0088, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0271) {
    const struct CPU_State initial_cpu = {.pc=0x3a0d, .a=0x75, .x=0x2c, .y=0x40, .sp=0x2b, .status=0xa7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0124, .value=0xa7}, {.addr=0x3a0d, .value=0x84}, {.addr=0x3a0e, .value=0x24},
    };
    const struct CPU_State final_cpu = {.pc=0x3a0f, .a=0x1d, .x=0x2c, .y=0x40, .sp=0x2b, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x0124, .value=0xa7}, {.addr=0x3a0d, .value=0x84}, {.addr=0x3a0e, .value=0x24},
    };
    const struct BusEvent events[] = {
        {.addr=0x3a0d, .value=0x84, .type=IO_READ},
        {.addr=0x3a0e, .value=0x24, .type=IO_READ},
        {.addr=0x0124, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0272) {
    const struct CPU_State initial_cpu = {.pc=0x7ac9, .a=0xc3, .x=0x9a, .y=0x21, .sp=0xd7, .status=0xab};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0110, .value=0xb8}, {.addr=0x7ac9, .value=0x84}, {.addr=0x7aca, .value=0x10},
    };
    const struct CPU_State final_cpu = {.pc=0x7acb, .a=0x7c, .x=0x9a, .y=0x21, .sp=0xd7, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x0110, .value=0xb8}, {.addr=0x7ac9, .value=0x84}, {.addr=0x7aca, .value=0x10},
    };
    const struct BusEvent events[] = {
        {.addr=0x7ac9, .value=0x84, .type=IO_READ},
        {.addr=0x7aca, .value=0x10, .type=IO_READ},
        {.addr=0x0110, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0273) {
    const struct CPU_State initial_cpu = {.pc=0x5960, .a=0xaf, .x=0x9d, .y=0x22, .sp=0x44, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fb, .value=0x6e}, {.addr=0x5960, .value=0x84}, {.addr=0x5961, .value=0xfb},
    };
    const struct CPU_State final_cpu = {.pc=0x5962, .a=0x1d, .x=0x9d, .y=0x22, .sp=0x44, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fb, .value=0x6e}, {.addr=0x5960, .value=0x84}, {.addr=0x5961, .value=0xfb},
    };
    const struct BusEvent events[] = {
        {.addr=0x5960, .value=0x84, .type=IO_READ},
        {.addr=0x5961, .value=0xfb, .type=IO_READ},
        {.addr=0x01fb, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0275) {
    const struct CPU_State initial_cpu = {.pc=0x191b, .a=0xcb, .x=0xa7, .y=0x77, .sp=0x89, .status=0xd7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b9, .value=0x5a}, {.addr=0x191b, .value=0x84}, {.addr=0x191c, .value=0xb9},
    };
    const struct CPU_State final_cpu = {.pc=0x191d, .a=0x26, .x=0xa7, .y=0x77, .sp=0x89, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b9, .value=0x5a}, {.addr=0x191b, .value=0x84}, {.addr=0x191c, .value=0xb9},
    };
    const struct BusEvent events[] = {
        {.addr=0x191b, .value=0x84, .type=IO_READ},
        {.addr=0x191c, .value=0xb9, .type=IO_READ},
        {.addr=0x00b9, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0276) {
    const struct CPU_State initial_cpu = {.pc=0xc401, .a=0xdb, .x=0x02, .y=0xdc, .sp=0x41, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0193, .value=0x56}, {.addr=0xc401, .value=0x84}, {.addr=0xc402, .value=0x93},
    };
    const struct CPU_State final_cpu = {.pc=0xc403, .a=0x31, .x=0x02, .y=0xdc, .sp=0x41, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x0193, .value=0x56}, {.addr=0xc401, .value=0x84}, {.addr=0xc402, .value=0x93},
    };
    const struct BusEvent events[] = {
        {.addr=0xc401, .value=0x84, .type=IO_READ},
        {.addr=0xc402, .value=0x93, .type=IO_READ},
        {.addr=0x0193, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0277) {
    const struct CPU_State initial_cpu = {.pc=0xe2bf, .a=0xb4, .x=0xa6, .y=0x64, .sp=0xc3, .status=0xac};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a8, .value=0x1f}, {.addr=0xe2bf, .value=0x84}, {.addr=0xe2c0, .value=0xa8},
    };
    const struct CPU_State final_cpu = {.pc=0xe2c1, .a=0xd3, .x=0xa6, .y=0x64, .sp=0xc3, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a8, .value=0x1f}, {.addr=0xe2bf, .value=0x84}, {.addr=0xe2c0, .value=0xa8},
    };
    const struct BusEvent events[] = {
        {.addr=0xe2bf, .value=0x84, .type=IO_READ},
        {.addr=0xe2c0, .value=0xa8, .type=IO_READ},
        {.addr=0x01a8, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0278) {
    const struct CPU_State initial_cpu = {.pc=0x6be7, .a=0x00, .x=0x01, .y=0x8a, .sp=0x82, .status=0x3d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017a, .value=0x23}, {.addr=0x6be7, .value=0x84}, {.addr=0x6be8, .value=0x7a},
    };
    const struct CPU_State final_cpu = {.pc=0x6be9, .a=0x24, .x=0x01, .y=0x8a, .sp=0x82, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x017a, .value=0x23}, {.addr=0x6be7, .value=0x84}, {.addr=0x6be8, .value=0x7a},
    };
    const struct BusEvent events[] = {
        {.addr=0x6be7, .value=0x84, .type=IO_READ},
        {.addr=0x6be8, .value=0x7a, .type=IO_READ},
        {.addr=0x017a, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0279) {
    const struct CPU_State initial_cpu = {.pc=0xb8a9, .a=0x1a, .x=0xfb, .y=0xd0, .sp=0xb3, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003b, .value=0x64}, {.addr=0xb8a9, .value=0x84}, {.addr=0xb8aa, .value=0x3b},
    };
    const struct CPU_State final_cpu = {.pc=0xb8ab, .a=0x7e, .x=0xfb, .y=0xd0, .sp=0xb3, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x003b, .value=0x64}, {.addr=0xb8a9, .value=0x84}, {.addr=0xb8aa, .value=0x3b},
    };
    const struct BusEvent events[] = {
        {.addr=0xb8a9, .value=0x84, .type=IO_READ},
        {.addr=0xb8aa, .value=0x3b, .type=IO_READ},
        {.addr=0x003b, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_027A) {
    const struct CPU_State initial_cpu = {.pc=0xb26a, .a=0xb6, .x=0x9c, .y=0xac, .sp=0xec, .status=0x85};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0020, .value=0x94}, {.addr=0xb26a, .value=0x84}, {.addr=0xb26b, .value=0x20},
    };
    const struct CPU_State final_cpu = {.pc=0xb26c, .a=0x4b, .x=0x9c, .y=0xac, .sp=0xec, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x0020, .value=0x94}, {.addr=0xb26a, .value=0x84}, {.addr=0xb26b, .value=0x20},
    };
    const struct BusEvent events[] = {
        {.addr=0xb26a, .value=0x84, .type=IO_READ},
        {.addr=0xb26b, .value=0x20, .type=IO_READ},
        {.addr=0x0020, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_027B) {
    const struct CPU_State initial_cpu = {.pc=0x2fd3, .a=0x7b, .x=0xad, .y=0x5d, .sp=0x61, .status=0xec};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0114, .value=0x4f}, {.addr=0x2fd3, .value=0x84}, {.addr=0x2fd4, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0x2fd5, .a=0xca, .x=0xad, .y=0x5d, .sp=0x61, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x0114, .value=0x4f}, {.addr=0x2fd3, .value=0x84}, {.addr=0x2fd4, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0x2fd3, .value=0x84, .type=IO_READ},
        {.addr=0x2fd4, .value=0x14, .type=IO_READ},
        {.addr=0x0114, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_027C) {
    const struct CPU_State initial_cpu = {.pc=0x3c9b, .a=0x50, .x=0xbc, .y=0x66, .sp=0x89, .status=0xa0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c4, .value=0x51}, {.addr=0x3c9b, .value=0x84}, {.addr=0x3c9c, .value=0xc4},
    };
    const struct CPU_State final_cpu = {.pc=0x3c9d, .a=0xa1, .x=0xbc, .y=0x66, .sp=0x89, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c4, .value=0x51}, {.addr=0x3c9b, .value=0x84}, {.addr=0x3c9c, .value=0xc4},
    };
    const struct BusEvent events[] = {
        {.addr=0x3c9b, .value=0x84, .type=IO_READ},
        {.addr=0x3c9c, .value=0xc4, .type=IO_READ},
        {.addr=0x01c4, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_027D) {
    const struct CPU_State initial_cpu = {.pc=0x3d39, .a=0xab, .x=0x20, .y=0x95, .sp=0x14, .status=0x45};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0060, .value=0xc9}, {.addr=0x3d39, .value=0x84}, {.addr=0x3d3a, .value=0x60},
    };
    const struct CPU_State final_cpu = {.pc=0x3d3b, .a=0x75, .x=0x20, .y=0x95, .sp=0x14, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0060, .value=0xc9}, {.addr=0x3d39, .value=0x84}, {.addr=0x3d3a, .value=0x60},
    };
    const struct BusEvent events[] = {
        {.addr=0x3d39, .value=0x84, .type=IO_READ},
        {.addr=0x3d3a, .value=0x60, .type=IO_READ},
        {.addr=0x0060, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_027E) {
    const struct CPU_State initial_cpu = {.pc=0x50c6, .a=0xd0, .x=0xd1, .y=0x74, .sp=0x26, .status=0x8b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004e, .value=0x9d}, {.addr=0x50c6, .value=0x84}, {.addr=0x50c7, .value=0x4e},
    };
    const struct CPU_State final_cpu = {.pc=0x50c8, .a=0x6e, .x=0xd1, .y=0x74, .sp=0x26, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x004e, .value=0x9d}, {.addr=0x50c6, .value=0x84}, {.addr=0x50c7, .value=0x4e},
    };
    const struct BusEvent events[] = {
        {.addr=0x50c6, .value=0x84, .type=IO_READ},
        {.addr=0x50c7, .value=0x4e, .type=IO_READ},
        {.addr=0x004e, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_027F) {
    const struct CPU_State initial_cpu = {.pc=0x4d46, .a=0xf1, .x=0x7d, .y=0xd3, .sp=0x81, .status=0x94};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0063, .value=0xf5}, {.addr=0x4d46, .value=0x84}, {.addr=0x4d47, .value=0x63},
    };
    const struct CPU_State final_cpu = {.pc=0x4d48, .a=0xe6, .x=0x7d, .y=0xd3, .sp=0x81, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x0063, .value=0xf5}, {.addr=0x4d46, .value=0x84}, {.addr=0x4d47, .value=0x63},
    };
    const struct BusEvent events[] = {
        {.addr=0x4d46, .value=0x84, .type=IO_READ},
        {.addr=0x4d47, .value=0x63, .type=IO_READ},
        {.addr=0x0063, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0280) {
    const struct CPU_State initial_cpu = {.pc=0x4977, .a=0x5b, .x=0xeb, .y=0x23, .sp=0x7e, .status=0xab};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cc, .value=0x2d}, {.addr=0x4977, .value=0x84}, {.addr=0x4978, .value=0xcc},
    };
    const struct CPU_State final_cpu = {.pc=0x4979, .a=0x89, .x=0xeb, .y=0x23, .sp=0x7e, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cc, .value=0x2d}, {.addr=0x4977, .value=0x84}, {.addr=0x4978, .value=0xcc},
    };
    const struct BusEvent events[] = {
        {.addr=0x4977, .value=0x84, .type=IO_READ},
        {.addr=0x4978, .value=0xcc, .type=IO_READ},
        {.addr=0x01cc, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0281) {
    const struct CPU_State initial_cpu = {.pc=0x4901, .a=0x95, .x=0xf4, .y=0x9d, .sp=0x2b, .status=0x2c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0108, .value=0xe1}, {.addr=0x4901, .value=0x84}, {.addr=0x4902, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0x4903, .a=0x76, .x=0xf4, .y=0x9d, .sp=0x2b, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x0108, .value=0xe1}, {.addr=0x4901, .value=0x84}, {.addr=0x4902, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0x4901, .value=0x84, .type=IO_READ},
        {.addr=0x4902, .value=0x08, .type=IO_READ},
        {.addr=0x0108, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0282) {
    const struct CPU_State initial_cpu = {.pc=0xe9b4, .a=0x0a, .x=0x95, .y=0x8f, .sp=0x91, .status=0x8a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0062, .value=0x6a}, {.addr=0xe9b4, .value=0x84}, {.addr=0xe9b5, .value=0x62},
    };
    const struct CPU_State final_cpu = {.pc=0xe9b6, .a=0x74, .x=0x95, .y=0x8f, .sp=0x91, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x0062, .value=0x6a}, {.addr=0xe9b4, .value=0x84}, {.addr=0xe9b5, .value=0x62},
    };
    const struct BusEvent events[] = {
        {.addr=0xe9b4, .value=0x84, .type=IO_READ},
        {.addr=0xe9b5, .value=0x62, .type=IO_READ},
        {.addr=0x0062, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0283) {
    const struct CPU_State initial_cpu = {.pc=0xa4b4, .a=0x35, .x=0x18, .y=0x7e, .sp=0xae, .status=0x6b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f4, .value=0x14}, {.addr=0xa4b4, .value=0x84}, {.addr=0xa4b5, .value=0xf4},
    };
    const struct CPU_State final_cpu = {.pc=0xa4b6, .a=0x4a, .x=0x18, .y=0x7e, .sp=0xae, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f4, .value=0x14}, {.addr=0xa4b4, .value=0x84}, {.addr=0xa4b5, .value=0xf4},
    };
    const struct BusEvent events[] = {
        {.addr=0xa4b4, .value=0x84, .type=IO_READ},
        {.addr=0xa4b5, .value=0xf4, .type=IO_READ},
        {.addr=0x01f4, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0284) {
    const struct CPU_State initial_cpu = {.pc=0xa0ac, .a=0x7f, .x=0xa7, .y=0x22, .sp=0x42, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0095, .value=0x0d}, {.addr=0xa0ac, .value=0x84}, {.addr=0xa0ad, .value=0x95},
    };
    const struct CPU_State final_cpu = {.pc=0xa0ae, .a=0x8c, .x=0xa7, .y=0x22, .sp=0x42, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0095, .value=0x0d}, {.addr=0xa0ac, .value=0x84}, {.addr=0xa0ad, .value=0x95},
    };
    const struct BusEvent events[] = {
        {.addr=0xa0ac, .value=0x84, .type=IO_READ},
        {.addr=0xa0ad, .value=0x95, .type=IO_READ},
        {.addr=0x0095, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0285) {
    const struct CPU_State initial_cpu = {.pc=0x1b59, .a=0x3b, .x=0x42, .y=0x64, .sp=0x08, .status=0xa4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0183, .value=0xa9}, {.addr=0x1b59, .value=0x84}, {.addr=0x1b5a, .value=0x83},
    };
    const struct CPU_State final_cpu = {.pc=0x1b5b, .a=0xe4, .x=0x42, .y=0x64, .sp=0x08, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0183, .value=0xa9}, {.addr=0x1b59, .value=0x84}, {.addr=0x1b5a, .value=0x83},
    };
    const struct BusEvent events[] = {
        {.addr=0x1b59, .value=0x84, .type=IO_READ},
        {.addr=0x1b5a, .value=0x83, .type=IO_READ},
        {.addr=0x0183, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0286) {
    const struct CPU_State initial_cpu = {.pc=0xa507, .a=0x45, .x=0x99, .y=0x89, .sp=0xd3, .status=0x4a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bf, .value=0x9a}, {.addr=0xa507, .value=0x84}, {.addr=0xa508, .value=0xbf},
    };
    const struct CPU_State final_cpu = {.pc=0xa509, .a=0xdf, .x=0x99, .y=0x89, .sp=0xd3, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bf, .value=0x9a}, {.addr=0xa507, .value=0x84}, {.addr=0xa508, .value=0xbf},
    };
    const struct BusEvent events[] = {
        {.addr=0xa507, .value=0x84, .type=IO_READ},
        {.addr=0xa508, .value=0xbf, .type=IO_READ},
        {.addr=0x00bf, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0287) {
    const struct CPU_State initial_cpu = {.pc=0xa7df, .a=0x44, .x=0x78, .y=0x6b, .sp=0x16, .status=0x4f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0016, .value=0x52}, {.addr=0xa7df, .value=0x84}, {.addr=0xa7e0, .value=0x16},
    };
    const struct CPU_State final_cpu = {.pc=0xa7e1, .a=0x97, .x=0x78, .y=0x6b, .sp=0x16, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0016, .value=0x52}, {.addr=0xa7df, .value=0x84}, {.addr=0xa7e0, .value=0x16},
    };
    const struct BusEvent events[] = {
        {.addr=0xa7df, .value=0x84, .type=IO_READ},
        {.addr=0xa7e0, .value=0x16, .type=IO_READ},
        {.addr=0x0016, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0288) {
    const struct CPU_State initial_cpu = {.pc=0x113c, .a=0xaf, .x=0xe7, .y=0xe5, .sp=0x74, .status=0x43};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0080, .value=0x25}, {.addr=0x113c, .value=0x84}, {.addr=0x113d, .value=0x80},
    };
    const struct CPU_State final_cpu = {.pc=0x113e, .a=0xd5, .x=0xe7, .y=0xe5, .sp=0x74, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x0080, .value=0x25}, {.addr=0x113c, .value=0x84}, {.addr=0x113d, .value=0x80},
    };
    const struct BusEvent events[] = {
        {.addr=0x113c, .value=0x84, .type=IO_READ},
        {.addr=0x113d, .value=0x80, .type=IO_READ},
        {.addr=0x0080, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0289) {
    const struct CPU_State initial_cpu = {.pc=0x3d6e, .a=0xe0, .x=0x2b, .y=0x4c, .sp=0x45, .status=0x68};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ca, .value=0x73}, {.addr=0x3d6e, .value=0x84}, {.addr=0x3d6f, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0x3d70, .a=0x53, .x=0x2b, .y=0x4c, .sp=0x45, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ca, .value=0x73}, {.addr=0x3d6e, .value=0x84}, {.addr=0x3d6f, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0x3d6e, .value=0x84, .type=IO_READ},
        {.addr=0x3d6f, .value=0xca, .type=IO_READ},
        {.addr=0x01ca, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_028A) {
    const struct CPU_State initial_cpu = {.pc=0x3787, .a=0xf6, .x=0x8a, .y=0xf9, .sp=0xa7, .status=0x6e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0167, .value=0x90}, {.addr=0x3787, .value=0x84}, {.addr=0x3788, .value=0x67},
    };
    const struct CPU_State final_cpu = {.pc=0x3789, .a=0x86, .x=0x8a, .y=0xf9, .sp=0xa7, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0167, .value=0x90}, {.addr=0x3787, .value=0x84}, {.addr=0x3788, .value=0x67},
    };
    const struct BusEvent events[] = {
        {.addr=0x3787, .value=0x84, .type=IO_READ},
        {.addr=0x3788, .value=0x67, .type=IO_READ},
        {.addr=0x0167, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_028B) {
    const struct CPU_State initial_cpu = {.pc=0x2396, .a=0x46, .x=0x88, .y=0x91, .sp=0x52, .status=0xd2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009b, .value=0xe2}, {.addr=0x2396, .value=0x84}, {.addr=0x2397, .value=0x9b},
    };
    const struct CPU_State final_cpu = {.pc=0x2398, .a=0x28, .x=0x88, .y=0x91, .sp=0x52, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x009b, .value=0xe2}, {.addr=0x2396, .value=0x84}, {.addr=0x2397, .value=0x9b},
    };
    const struct BusEvent events[] = {
        {.addr=0x2396, .value=0x84, .type=IO_READ},
        {.addr=0x2397, .value=0x9b, .type=IO_READ},
        {.addr=0x009b, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_028C) {
    const struct CPU_State initial_cpu = {.pc=0xfcbb, .a=0x22, .x=0x64, .y=0xb5, .sp=0x21, .status=0xf3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0145, .value=0xa5}, {.addr=0xfcbb, .value=0x84}, {.addr=0xfcbc, .value=0x45},
    };
    const struct CPU_State final_cpu = {.pc=0xfcbd, .a=0xc8, .x=0x64, .y=0xb5, .sp=0x21, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0145, .value=0xa5}, {.addr=0xfcbb, .value=0x84}, {.addr=0xfcbc, .value=0x45},
    };
    const struct BusEvent events[] = {
        {.addr=0xfcbb, .value=0x84, .type=IO_READ},
        {.addr=0xfcbc, .value=0x45, .type=IO_READ},
        {.addr=0x0145, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_028D) {
    const struct CPU_State initial_cpu = {.pc=0x439e, .a=0xa7, .x=0x3b, .y=0x9f, .sp=0x48, .status=0x23};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c8, .value=0xa8}, {.addr=0x439e, .value=0x84}, {.addr=0x439f, .value=0xc8},
    };
    const struct CPU_State final_cpu = {.pc=0x43a0, .a=0x50, .x=0x3b, .y=0x9f, .sp=0x48, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c8, .value=0xa8}, {.addr=0x439e, .value=0x84}, {.addr=0x439f, .value=0xc8},
    };
    const struct BusEvent events[] = {
        {.addr=0x439e, .value=0x84, .type=IO_READ},
        {.addr=0x439f, .value=0xc8, .type=IO_READ},
        {.addr=0x01c8, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_028E) {
    const struct CPU_State initial_cpu = {.pc=0x348e, .a=0xc8, .x=0xe4, .y=0x56, .sp=0xc6, .status=0x47};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d1, .value=0x3a}, {.addr=0x348e, .value=0x84}, {.addr=0x348f, .value=0xd1},
    };
    const struct CPU_State final_cpu = {.pc=0x3490, .a=0x03, .x=0xe4, .y=0x56, .sp=0xc6, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d1, .value=0x3a}, {.addr=0x348e, .value=0x84}, {.addr=0x348f, .value=0xd1},
    };
    const struct BusEvent events[] = {
        {.addr=0x348e, .value=0x84, .type=IO_READ},
        {.addr=0x348f, .value=0xd1, .type=IO_READ},
        {.addr=0x00d1, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_028F) {
    const struct CPU_State initial_cpu = {.pc=0x5faa, .a=0xdd, .x=0x44, .y=0x60, .sp=0x06, .status=0x74};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b8, .value=0x21}, {.addr=0x5faa, .value=0x84}, {.addr=0x5fab, .value=0xb8},
    };
    const struct CPU_State final_cpu = {.pc=0x5fac, .a=0xfe, .x=0x44, .y=0x60, .sp=0x06, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b8, .value=0x21}, {.addr=0x5faa, .value=0x84}, {.addr=0x5fab, .value=0xb8},
    };
    const struct BusEvent events[] = {
        {.addr=0x5faa, .value=0x84, .type=IO_READ},
        {.addr=0x5fab, .value=0xb8, .type=IO_READ},
        {.addr=0x01b8, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0290) {
    const struct CPU_State initial_cpu = {.pc=0x2df9, .a=0x2b, .x=0x96, .y=0x48, .sp=0x2d, .status=0x50};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007e, .value=0x69}, {.addr=0x2df9, .value=0x84}, {.addr=0x2dfa, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0x2dfb, .a=0x94, .x=0x96, .y=0x48, .sp=0x2d, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x007e, .value=0x69}, {.addr=0x2df9, .value=0x84}, {.addr=0x2dfa, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0x2df9, .value=0x84, .type=IO_READ},
        {.addr=0x2dfa, .value=0x7e, .type=IO_READ},
        {.addr=0x007e, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0291) {
    const struct CPU_State initial_cpu = {.pc=0xcf62, .a=0x30, .x=0xc2, .y=0x94, .sp=0x22, .status=0x2d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a1, .value=0x5c}, {.addr=0xcf62, .value=0x84}, {.addr=0xcf63, .value=0xa1},
    };
    const struct CPU_State final_cpu = {.pc=0xcf64, .a=0x8d, .x=0xc2, .y=0x94, .sp=0x22, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a1, .value=0x5c}, {.addr=0xcf62, .value=0x84}, {.addr=0xcf63, .value=0xa1},
    };
    const struct BusEvent events[] = {
        {.addr=0xcf62, .value=0x84, .type=IO_READ},
        {.addr=0xcf63, .value=0xa1, .type=IO_READ},
        {.addr=0x01a1, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0292) {
    const struct CPU_State initial_cpu = {.pc=0xf5a8, .a=0x99, .x=0x9d, .y=0x22, .sp=0x1a, .status=0x06};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00eb, .value=0x0c}, {.addr=0xf5a8, .value=0x84}, {.addr=0xf5a9, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0xf5aa, .a=0xa5, .x=0x9d, .y=0x22, .sp=0x1a, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00eb, .value=0x0c}, {.addr=0xf5a8, .value=0x84}, {.addr=0xf5a9, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0xf5a8, .value=0x84, .type=IO_READ},
        {.addr=0xf5a9, .value=0xeb, .type=IO_READ},
        {.addr=0x00eb, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0293) {
    const struct CPU_State initial_cpu = {.pc=0x203e, .a=0x2e, .x=0xb1, .y=0x70, .sp=0xd2, .status=0x9f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0041, .value=0xa2}, {.addr=0x203e, .value=0x84}, {.addr=0x203f, .value=0x41},
    };
    const struct CPU_State final_cpu = {.pc=0x2040, .a=0xd1, .x=0xb1, .y=0x70, .sp=0xd2, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0041, .value=0xa2}, {.addr=0x203e, .value=0x84}, {.addr=0x203f, .value=0x41},
    };
    const struct BusEvent events[] = {
        {.addr=0x203e, .value=0x84, .type=IO_READ},
        {.addr=0x203f, .value=0x41, .type=IO_READ},
        {.addr=0x0041, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0294) {
    const struct CPU_State initial_cpu = {.pc=0x3ebe, .a=0x13, .x=0xc9, .y=0xe3, .sp=0x10, .status=0xcc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005a, .value=0x26}, {.addr=0x3ebe, .value=0x84}, {.addr=0x3ebf, .value=0x5a},
    };
    const struct CPU_State final_cpu = {.pc=0x3ec0, .a=0x39, .x=0xc9, .y=0xe3, .sp=0x10, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x005a, .value=0x26}, {.addr=0x3ebe, .value=0x84}, {.addr=0x3ebf, .value=0x5a},
    };
    const struct BusEvent events[] = {
        {.addr=0x3ebe, .value=0x84, .type=IO_READ},
        {.addr=0x3ebf, .value=0x5a, .type=IO_READ},
        {.addr=0x005a, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0295) {
    const struct CPU_State initial_cpu = {.pc=0x9e79, .a=0xfa, .x=0x1f, .y=0xd3, .sp=0xa2, .status=0xa7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ef, .value=0xc8}, {.addr=0x9e79, .value=0x84}, {.addr=0x9e7a, .value=0xef},
    };
    const struct CPU_State final_cpu = {.pc=0x9e7b, .a=0xc3, .x=0x1f, .y=0xd3, .sp=0xa2, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ef, .value=0xc8}, {.addr=0x9e79, .value=0x84}, {.addr=0x9e7a, .value=0xef},
    };
    const struct BusEvent events[] = {
        {.addr=0x9e79, .value=0x84, .type=IO_READ},
        {.addr=0x9e7a, .value=0xef, .type=IO_READ},
        {.addr=0x01ef, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0296) {
    const struct CPU_State initial_cpu = {.pc=0x913b, .a=0x4c, .x=0xcb, .y=0x52, .sp=0x23, .status=0x54};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c1, .value=0x49}, {.addr=0x913b, .value=0x84}, {.addr=0x913c, .value=0xc1},
    };
    const struct CPU_State final_cpu = {.pc=0x913d, .a=0x95, .x=0xcb, .y=0x52, .sp=0x23, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c1, .value=0x49}, {.addr=0x913b, .value=0x84}, {.addr=0x913c, .value=0xc1},
    };
    const struct BusEvent events[] = {
        {.addr=0x913b, .value=0x84, .type=IO_READ},
        {.addr=0x913c, .value=0xc1, .type=IO_READ},
        {.addr=0x00c1, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0297) {
    const struct CPU_State initial_cpu = {.pc=0xc19a, .a=0xf4, .x=0xae, .y=0xe9, .sp=0xde, .status=0x33};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0195, .value=0x27}, {.addr=0xc19a, .value=0x84}, {.addr=0xc19b, .value=0x95},
    };
    const struct CPU_State final_cpu = {.pc=0xc19c, .a=0x1c, .x=0xae, .y=0xe9, .sp=0xde, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0195, .value=0x27}, {.addr=0xc19a, .value=0x84}, {.addr=0xc19b, .value=0x95},
    };
    const struct BusEvent events[] = {
        {.addr=0xc19a, .value=0x84, .type=IO_READ},
        {.addr=0xc19b, .value=0x95, .type=IO_READ},
        {.addr=0x0195, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0298) {
    const struct CPU_State initial_cpu = {.pc=0x2d71, .a=0xf7, .x=0x03, .y=0x2a, .sp=0xf7, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ec, .value=0xcc}, {.addr=0x2d71, .value=0x84}, {.addr=0x2d72, .value=0xec},
    };
    const struct CPU_State final_cpu = {.pc=0x2d73, .a=0xc3, .x=0x03, .y=0x2a, .sp=0xf7, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ec, .value=0xcc}, {.addr=0x2d71, .value=0x84}, {.addr=0x2d72, .value=0xec},
    };
    const struct BusEvent events[] = {
        {.addr=0x2d71, .value=0x84, .type=IO_READ},
        {.addr=0x2d72, .value=0xec, .type=IO_READ},
        {.addr=0x00ec, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0299) {
    const struct CPU_State initial_cpu = {.pc=0x6f8a, .a=0x1c, .x=0xd3, .y=0x8a, .sp=0x8b, .status=0x73};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0133, .value=0xf0}, {.addr=0x6f8a, .value=0x84}, {.addr=0x6f8b, .value=0x33},
    };
    const struct CPU_State final_cpu = {.pc=0x6f8c, .a=0x0d, .x=0xd3, .y=0x8a, .sp=0x8b, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0133, .value=0xf0}, {.addr=0x6f8a, .value=0x84}, {.addr=0x6f8b, .value=0x33},
    };
    const struct BusEvent events[] = {
        {.addr=0x6f8a, .value=0x84, .type=IO_READ},
        {.addr=0x6f8b, .value=0x33, .type=IO_READ},
        {.addr=0x0133, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_029A) {
    const struct CPU_State initial_cpu = {.pc=0xe46a, .a=0xfd, .x=0xd5, .y=0x7e, .sp=0x09, .status=0x8b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006a, .value=0xa6}, {.addr=0xe46a, .value=0x84}, {.addr=0xe46b, .value=0x6a},
    };
    const struct CPU_State final_cpu = {.pc=0xe46c, .a=0xa4, .x=0xd5, .y=0x7e, .sp=0x09, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x006a, .value=0xa6}, {.addr=0xe46a, .value=0x84}, {.addr=0xe46b, .value=0x6a},
    };
    const struct BusEvent events[] = {
        {.addr=0xe46a, .value=0x84, .type=IO_READ},
        {.addr=0xe46b, .value=0x6a, .type=IO_READ},
        {.addr=0x006a, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_029B) {
    const struct CPU_State initial_cpu = {.pc=0x8ebf, .a=0xbe, .x=0xc2, .y=0x48, .sp=0x53, .status=0x5a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008f, .value=0xac}, {.addr=0x8ebf, .value=0x84}, {.addr=0x8ec0, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0x8ec1, .a=0x6a, .x=0xc2, .y=0x48, .sp=0x53, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x008f, .value=0xac}, {.addr=0x8ebf, .value=0x84}, {.addr=0x8ec0, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0x8ebf, .value=0x84, .type=IO_READ},
        {.addr=0x8ec0, .value=0x8f, .type=IO_READ},
        {.addr=0x008f, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_029C) {
    const struct CPU_State initial_cpu = {.pc=0x25bc, .a=0xad, .x=0x9a, .y=0x79, .sp=0x3e, .status=0x59};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d3, .value=0xb9}, {.addr=0x25bc, .value=0x84}, {.addr=0x25bd, .value=0xd3},
    };
    const struct CPU_State final_cpu = {.pc=0x25be, .a=0x67, .x=0x9a, .y=0x79, .sp=0x3e, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d3, .value=0xb9}, {.addr=0x25bc, .value=0x84}, {.addr=0x25bd, .value=0xd3},
    };
    const struct BusEvent events[] = {
        {.addr=0x25bc, .value=0x84, .type=IO_READ},
        {.addr=0x25bd, .value=0xd3, .type=IO_READ},
        {.addr=0x00d3, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_029D) {
    const struct CPU_State initial_cpu = {.pc=0x812c, .a=0x5e, .x=0x4f, .y=0xe9, .sp=0xc1, .status=0xfd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0130, .value=0x1f}, {.addr=0x812c, .value=0x84}, {.addr=0x812d, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0x812e, .a=0x7e, .x=0x4f, .y=0xe9, .sp=0xc1, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0130, .value=0x1f}, {.addr=0x812c, .value=0x84}, {.addr=0x812d, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0x812c, .value=0x84, .type=IO_READ},
        {.addr=0x812d, .value=0x30, .type=IO_READ},
        {.addr=0x0130, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_029E) {
    const struct CPU_State initial_cpu = {.pc=0x875f, .a=0x4c, .x=0x96, .y=0x8f, .sp=0x5a, .status=0x9d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e3, .value=0x46}, {.addr=0x875f, .value=0x84}, {.addr=0x8760, .value=0xe3},
    };
    const struct CPU_State final_cpu = {.pc=0x8761, .a=0x93, .x=0x96, .y=0x8f, .sp=0x5a, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e3, .value=0x46}, {.addr=0x875f, .value=0x84}, {.addr=0x8760, .value=0xe3},
    };
    const struct BusEvent events[] = {
        {.addr=0x875f, .value=0x84, .type=IO_READ},
        {.addr=0x8760, .value=0xe3, .type=IO_READ},
        {.addr=0x00e3, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_029F) {
    const struct CPU_State initial_cpu = {.pc=0x526c, .a=0xbe, .x=0x27, .y=0x2a, .sp=0x7d, .status=0xc6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a8, .value=0xfc}, {.addr=0x526c, .value=0x84}, {.addr=0x526d, .value=0xa8},
    };
    const struct CPU_State final_cpu = {.pc=0x526e, .a=0xba, .x=0x27, .y=0x2a, .sp=0x7d, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a8, .value=0xfc}, {.addr=0x526c, .value=0x84}, {.addr=0x526d, .value=0xa8},
    };
    const struct BusEvent events[] = {
        {.addr=0x526c, .value=0x84, .type=IO_READ},
        {.addr=0x526d, .value=0xa8, .type=IO_READ},
        {.addr=0x00a8, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02A0) {
    const struct CPU_State initial_cpu = {.pc=0xc522, .a=0x7a, .x=0xa6, .y=0x43, .sp=0xab, .status=0xf4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014b, .value=0x66}, {.addr=0xc522, .value=0x84}, {.addr=0xc523, .value=0x4b},
    };
    const struct CPU_State final_cpu = {.pc=0xc524, .a=0xe0, .x=0xa6, .y=0x43, .sp=0xab, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x014b, .value=0x66}, {.addr=0xc522, .value=0x84}, {.addr=0xc523, .value=0x4b},
    };
    const struct BusEvent events[] = {
        {.addr=0xc522, .value=0x84, .type=IO_READ},
        {.addr=0xc523, .value=0x4b, .type=IO_READ},
        {.addr=0x014b, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02A1) {
    const struct CPU_State initial_cpu = {.pc=0x15fa, .a=0xea, .x=0x43, .y=0xb5, .sp=0xc1, .status=0x57};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0079, .value=0x8b}, {.addr=0x15fa, .value=0x84}, {.addr=0x15fb, .value=0x79},
    };
    const struct CPU_State final_cpu = {.pc=0x15fc, .a=0x76, .x=0x43, .y=0xb5, .sp=0xc1, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0079, .value=0x8b}, {.addr=0x15fa, .value=0x84}, {.addr=0x15fb, .value=0x79},
    };
    const struct BusEvent events[] = {
        {.addr=0x15fa, .value=0x84, .type=IO_READ},
        {.addr=0x15fb, .value=0x79, .type=IO_READ},
        {.addr=0x0079, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02A2) {
    const struct CPU_State initial_cpu = {.pc=0xcbe5, .a=0x69, .x=0x89, .y=0x23, .sp=0x1e, .status=0x7e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012f, .value=0xd8}, {.addr=0xcbe5, .value=0x84}, {.addr=0xcbe6, .value=0x2f},
    };
    const struct CPU_State final_cpu = {.pc=0xcbe7, .a=0x41, .x=0x89, .y=0x23, .sp=0x1e, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x012f, .value=0xd8}, {.addr=0xcbe5, .value=0x84}, {.addr=0xcbe6, .value=0x2f},
    };
    const struct BusEvent events[] = {
        {.addr=0xcbe5, .value=0x84, .type=IO_READ},
        {.addr=0xcbe6, .value=0x2f, .type=IO_READ},
        {.addr=0x012f, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02A3) {
    const struct CPU_State initial_cpu = {.pc=0xa1db, .a=0x12, .x=0x77, .y=0x22, .sp=0x0c, .status=0x0a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0025, .value=0xe6}, {.addr=0xa1db, .value=0x84}, {.addr=0xa1dc, .value=0x25},
    };
    const struct CPU_State final_cpu = {.pc=0xa1dd, .a=0xf8, .x=0x77, .y=0x22, .sp=0x0c, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x0025, .value=0xe6}, {.addr=0xa1db, .value=0x84}, {.addr=0xa1dc, .value=0x25},
    };
    const struct BusEvent events[] = {
        {.addr=0xa1db, .value=0x84, .type=IO_READ},
        {.addr=0xa1dc, .value=0x25, .type=IO_READ},
        {.addr=0x0025, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02A4) {
    const struct CPU_State initial_cpu = {.pc=0xf33d, .a=0x04, .x=0x6e, .y=0xab, .sp=0xcf, .status=0xb4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c9, .value=0x3f}, {.addr=0xf33d, .value=0x84}, {.addr=0xf33e, .value=0xc9},
    };
    const struct CPU_State final_cpu = {.pc=0xf33f, .a=0x43, .x=0x6e, .y=0xab, .sp=0xcf, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c9, .value=0x3f}, {.addr=0xf33d, .value=0x84}, {.addr=0xf33e, .value=0xc9},
    };
    const struct BusEvent events[] = {
        {.addr=0xf33d, .value=0x84, .type=IO_READ},
        {.addr=0xf33e, .value=0xc9, .type=IO_READ},
        {.addr=0x01c9, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x7e96, .a=0x24, .x=0xaf, .y=0xad, .sp=0xfa, .status=0x75};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e4, .value=0x9b}, {.addr=0x7e96, .value=0x84}, {.addr=0x7e97, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0x7e98, .a=0xc0, .x=0xaf, .y=0xad, .sp=0xfa, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e4, .value=0x9b}, {.addr=0x7e96, .value=0x84}, {.addr=0x7e97, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0x7e96, .value=0x84, .type=IO_READ},
        {.addr=0x7e97, .value=0xe4, .type=IO_READ},
        {.addr=0x01e4, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02A6) {
    const struct CPU_State initial_cpu = {.pc=0x230b, .a=0x01, .x=0xb8, .y=0xc7, .sp=0x63, .status=0x4b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ea, .value=0x96}, {.addr=0x230b, .value=0x84}, {.addr=0x230c, .value=0xea},
    };
    const struct CPU_State final_cpu = {.pc=0x230d, .a=0x98, .x=0xb8, .y=0xc7, .sp=0x63, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ea, .value=0x96}, {.addr=0x230b, .value=0x84}, {.addr=0x230c, .value=0xea},
    };
    const struct BusEvent events[] = {
        {.addr=0x230b, .value=0x84, .type=IO_READ},
        {.addr=0x230c, .value=0xea, .type=IO_READ},
        {.addr=0x00ea, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02A7) {
    const struct CPU_State initial_cpu = {.pc=0xc6a5, .a=0x27, .x=0xba, .y=0xba, .sp=0x59, .status=0xe5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0154, .value=0x0f}, {.addr=0xc6a5, .value=0x84}, {.addr=0xc6a6, .value=0x54},
    };
    const struct CPU_State final_cpu = {.pc=0xc6a7, .a=0x37, .x=0xba, .y=0xba, .sp=0x59, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0154, .value=0x0f}, {.addr=0xc6a5, .value=0x84}, {.addr=0xc6a6, .value=0x54},
    };
    const struct BusEvent events[] = {
        {.addr=0xc6a5, .value=0x84, .type=IO_READ},
        {.addr=0xc6a6, .value=0x54, .type=IO_READ},
        {.addr=0x0154, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02A8) {
    const struct CPU_State initial_cpu = {.pc=0x429b, .a=0x7c, .x=0x2e, .y=0x09, .sp=0x48, .status=0xe0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b3, .value=0xfa}, {.addr=0x429b, .value=0x84}, {.addr=0x429c, .value=0xb3},
    };
    const struct CPU_State final_cpu = {.pc=0x429d, .a=0x76, .x=0x2e, .y=0x09, .sp=0x48, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b3, .value=0xfa}, {.addr=0x429b, .value=0x84}, {.addr=0x429c, .value=0xb3},
    };
    const struct BusEvent events[] = {
        {.addr=0x429b, .value=0x84, .type=IO_READ},
        {.addr=0x429c, .value=0xb3, .type=IO_READ},
        {.addr=0x01b3, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02A9) {
    const struct CPU_State initial_cpu = {.pc=0x1483, .a=0x38, .x=0xee, .y=0xd9, .sp=0x43, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017b, .value=0xcd}, {.addr=0x1483, .value=0x84}, {.addr=0x1484, .value=0x7b},
    };
    const struct CPU_State final_cpu = {.pc=0x1485, .a=0x05, .x=0xee, .y=0xd9, .sp=0x43, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x017b, .value=0xcd}, {.addr=0x1483, .value=0x84}, {.addr=0x1484, .value=0x7b},
    };
    const struct BusEvent events[] = {
        {.addr=0x1483, .value=0x84, .type=IO_READ},
        {.addr=0x1484, .value=0x7b, .type=IO_READ},
        {.addr=0x017b, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02AA) {
    const struct CPU_State initial_cpu = {.pc=0x252f, .a=0x3e, .x=0x1d, .y=0x10, .sp=0x33, .status=0xae};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0120, .value=0xd9}, {.addr=0x252f, .value=0x84}, {.addr=0x2530, .value=0x20},
    };
    const struct CPU_State final_cpu = {.pc=0x2531, .a=0x17, .x=0x1d, .y=0x10, .sp=0x33, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0120, .value=0xd9}, {.addr=0x252f, .value=0x84}, {.addr=0x2530, .value=0x20},
    };
    const struct BusEvent events[] = {
        {.addr=0x252f, .value=0x84, .type=IO_READ},
        {.addr=0x2530, .value=0x20, .type=IO_READ},
        {.addr=0x0120, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02AB) {
    const struct CPU_State initial_cpu = {.pc=0xf9cc, .a=0x00, .x=0xd6, .y=0xc5, .sp=0x2d, .status=0x9d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004f, .value=0xf0}, {.addr=0xf9cc, .value=0x84}, {.addr=0xf9cd, .value=0x4f},
    };
    const struct CPU_State final_cpu = {.pc=0xf9ce, .a=0xf1, .x=0xd6, .y=0xc5, .sp=0x2d, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x004f, .value=0xf0}, {.addr=0xf9cc, .value=0x84}, {.addr=0xf9cd, .value=0x4f},
    };
    const struct BusEvent events[] = {
        {.addr=0xf9cc, .value=0x84, .type=IO_READ},
        {.addr=0xf9cd, .value=0x4f, .type=IO_READ},
        {.addr=0x004f, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x64bd, .a=0x5d, .x=0xe6, .y=0x21, .sp=0x45, .status=0x91};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0035, .value=0x62}, {.addr=0x64bd, .value=0x84}, {.addr=0x64be, .value=0x35},
    };
    const struct CPU_State final_cpu = {.pc=0x64bf, .a=0xc0, .x=0xe6, .y=0x21, .sp=0x45, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0035, .value=0x62}, {.addr=0x64bd, .value=0x84}, {.addr=0x64be, .value=0x35},
    };
    const struct BusEvent events[] = {
        {.addr=0x64bd, .value=0x84, .type=IO_READ},
        {.addr=0x64be, .value=0x35, .type=IO_READ},
        {.addr=0x0035, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02AD) {
    const struct CPU_State initial_cpu = {.pc=0xf0a2, .a=0x14, .x=0x4b, .y=0xbf, .sp=0xe7, .status=0xe4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015a, .value=0x4d}, {.addr=0xf0a2, .value=0x84}, {.addr=0xf0a3, .value=0x5a},
    };
    const struct CPU_State final_cpu = {.pc=0xf0a4, .a=0x61, .x=0x4b, .y=0xbf, .sp=0xe7, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x015a, .value=0x4d}, {.addr=0xf0a2, .value=0x84}, {.addr=0xf0a3, .value=0x5a},
    };
    const struct BusEvent events[] = {
        {.addr=0xf0a2, .value=0x84, .type=IO_READ},
        {.addr=0xf0a3, .value=0x5a, .type=IO_READ},
        {.addr=0x015a, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02AE) {
    const struct CPU_State initial_cpu = {.pc=0x30bb, .a=0x51, .x=0x5e, .y=0x44, .sp=0x6b, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b3, .value=0xc4}, {.addr=0x30bb, .value=0x84}, {.addr=0x30bc, .value=0xb3},
    };
    const struct CPU_State final_cpu = {.pc=0x30bd, .a=0x15, .x=0x5e, .y=0x44, .sp=0x6b, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b3, .value=0xc4}, {.addr=0x30bb, .value=0x84}, {.addr=0x30bc, .value=0xb3},
    };
    const struct BusEvent events[] = {
        {.addr=0x30bb, .value=0x84, .type=IO_READ},
        {.addr=0x30bc, .value=0xb3, .type=IO_READ},
        {.addr=0x01b3, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02AF) {
    const struct CPU_State initial_cpu = {.pc=0xebb1, .a=0xe4, .x=0x90, .y=0xe6, .sp=0xbf, .status=0xa9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ed, .value=0x45}, {.addr=0xebb1, .value=0x84}, {.addr=0xebb2, .value=0xed},
    };
    const struct CPU_State final_cpu = {.pc=0xebb3, .a=0x2a, .x=0x90, .y=0xe6, .sp=0xbf, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ed, .value=0x45}, {.addr=0xebb1, .value=0x84}, {.addr=0xebb2, .value=0xed},
    };
    const struct BusEvent events[] = {
        {.addr=0xebb1, .value=0x84, .type=IO_READ},
        {.addr=0xebb2, .value=0xed, .type=IO_READ},
        {.addr=0x01ed, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02B0) {
    const struct CPU_State initial_cpu = {.pc=0xc91c, .a=0xc3, .x=0xdf, .y=0x81, .sp=0x8e, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ba, .value=0x1b}, {.addr=0xc91c, .value=0x84}, {.addr=0xc91d, .value=0xba},
    };
    const struct CPU_State final_cpu = {.pc=0xc91e, .a=0xde, .x=0xdf, .y=0x81, .sp=0x8e, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ba, .value=0x1b}, {.addr=0xc91c, .value=0x84}, {.addr=0xc91d, .value=0xba},
    };
    const struct BusEvent events[] = {
        {.addr=0xc91c, .value=0x84, .type=IO_READ},
        {.addr=0xc91d, .value=0xba, .type=IO_READ},
        {.addr=0x00ba, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02B1) {
    const struct CPU_State initial_cpu = {.pc=0xa782, .a=0x94, .x=0xed, .y=0xef, .sp=0x4d, .status=0xbb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e8, .value=0xc5}, {.addr=0xa782, .value=0x84}, {.addr=0xa783, .value=0xe8},
    };
    const struct CPU_State final_cpu = {.pc=0xa784, .a=0x5a, .x=0xed, .y=0xef, .sp=0x4d, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e8, .value=0xc5}, {.addr=0xa782, .value=0x84}, {.addr=0xa783, .value=0xe8},
    };
    const struct BusEvent events[] = {
        {.addr=0xa782, .value=0x84, .type=IO_READ},
        {.addr=0xa783, .value=0xe8, .type=IO_READ},
        {.addr=0x01e8, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02B2) {
    const struct CPU_State initial_cpu = {.pc=0x2c91, .a=0x61, .x=0xe0, .y=0x6b, .sp=0xf2, .status=0x8a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0041, .value=0x83}, {.addr=0x2c91, .value=0x84}, {.addr=0x2c92, .value=0x41},
    };
    const struct CPU_State final_cpu = {.pc=0x2c93, .a=0xe4, .x=0xe0, .y=0x6b, .sp=0xf2, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x0041, .value=0x83}, {.addr=0x2c91, .value=0x84}, {.addr=0x2c92, .value=0x41},
    };
    const struct BusEvent events[] = {
        {.addr=0x2c91, .value=0x84, .type=IO_READ},
        {.addr=0x2c92, .value=0x41, .type=IO_READ},
        {.addr=0x0041, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02B4) {
    const struct CPU_State initial_cpu = {.pc=0x7616, .a=0x8b, .x=0xae, .y=0x9b, .sp=0x91, .status=0xbc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a1, .value=0x11}, {.addr=0x7616, .value=0x84}, {.addr=0x7617, .value=0xa1},
    };
    const struct CPU_State final_cpu = {.pc=0x7618, .a=0x9c, .x=0xae, .y=0x9b, .sp=0x91, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a1, .value=0x11}, {.addr=0x7616, .value=0x84}, {.addr=0x7617, .value=0xa1},
    };
    const struct BusEvent events[] = {
        {.addr=0x7616, .value=0x84, .type=IO_READ},
        {.addr=0x7617, .value=0xa1, .type=IO_READ},
        {.addr=0x01a1, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02B5) {
    const struct CPU_State initial_cpu = {.pc=0xda13, .a=0x33, .x=0xdc, .y=0xff, .sp=0xcb, .status=0x21};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cc, .value=0xb5}, {.addr=0xda13, .value=0x84}, {.addr=0xda14, .value=0xcc},
    };
    const struct CPU_State final_cpu = {.pc=0xda15, .a=0xe9, .x=0xdc, .y=0xff, .sp=0xcb, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cc, .value=0xb5}, {.addr=0xda13, .value=0x84}, {.addr=0xda14, .value=0xcc},
    };
    const struct BusEvent events[] = {
        {.addr=0xda13, .value=0x84, .type=IO_READ},
        {.addr=0xda14, .value=0xcc, .type=IO_READ},
        {.addr=0x01cc, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02B6) {
    const struct CPU_State initial_cpu = {.pc=0xb270, .a=0x4c, .x=0x33, .y=0x9d, .sp=0xad, .status=0x05};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0073, .value=0x9f}, {.addr=0xb270, .value=0x84}, {.addr=0xb271, .value=0x73},
    };
    const struct CPU_State final_cpu = {.pc=0xb272, .a=0xec, .x=0x33, .y=0x9d, .sp=0xad, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0073, .value=0x9f}, {.addr=0xb270, .value=0x84}, {.addr=0xb271, .value=0x73},
    };
    const struct BusEvent events[] = {
        {.addr=0xb270, .value=0x84, .type=IO_READ},
        {.addr=0xb271, .value=0x73, .type=IO_READ},
        {.addr=0x0073, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02B7) {
    const struct CPU_State initial_cpu = {.pc=0xa06a, .a=0x44, .x=0x02, .y=0x3e, .sp=0x10, .status=0xd7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e2, .value=0x57}, {.addr=0xa06a, .value=0x84}, {.addr=0xa06b, .value=0xe2},
    };
    const struct CPU_State final_cpu = {.pc=0xa06c, .a=0x9c, .x=0x02, .y=0x3e, .sp=0x10, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e2, .value=0x57}, {.addr=0xa06a, .value=0x84}, {.addr=0xa06b, .value=0xe2},
    };
    const struct BusEvent events[] = {
        {.addr=0xa06a, .value=0x84, .type=IO_READ},
        {.addr=0xa06b, .value=0xe2, .type=IO_READ},
        {.addr=0x00e2, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02B8) {
    const struct CPU_State initial_cpu = {.pc=0x080d, .a=0xf4, .x=0xcd, .y=0x70, .sp=0x94, .status=0x65};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0123, .value=0x3b}, {.addr=0x080d, .value=0x84}, {.addr=0x080e, .value=0x23},
    };
    const struct CPU_State final_cpu = {.pc=0x080f, .a=0x30, .x=0xcd, .y=0x70, .sp=0x94, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0123, .value=0x3b}, {.addr=0x080d, .value=0x84}, {.addr=0x080e, .value=0x23},
    };
    const struct BusEvent events[] = {
        {.addr=0x080d, .value=0x84, .type=IO_READ},
        {.addr=0x080e, .value=0x23, .type=IO_READ},
        {.addr=0x0123, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02B9) {
    const struct CPU_State initial_cpu = {.pc=0x5640, .a=0x90, .x=0x0a, .y=0x1c, .sp=0x30, .status=0x5a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0076, .value=0xfa}, {.addr=0x5640, .value=0x84}, {.addr=0x5641, .value=0x76},
    };
    const struct CPU_State final_cpu = {.pc=0x5642, .a=0x8a, .x=0x0a, .y=0x1c, .sp=0x30, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x0076, .value=0xfa}, {.addr=0x5640, .value=0x84}, {.addr=0x5641, .value=0x76},
    };
    const struct BusEvent events[] = {
        {.addr=0x5640, .value=0x84, .type=IO_READ},
        {.addr=0x5641, .value=0x76, .type=IO_READ},
        {.addr=0x0076, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02BA) {
    const struct CPU_State initial_cpu = {.pc=0xa964, .a=0x28, .x=0xdb, .y=0x54, .sp=0x58, .status=0x43};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e0, .value=0x3e}, {.addr=0xa964, .value=0x84}, {.addr=0xa965, .value=0xe0},
    };
    const struct CPU_State final_cpu = {.pc=0xa966, .a=0x67, .x=0xdb, .y=0x54, .sp=0x58, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e0, .value=0x3e}, {.addr=0xa964, .value=0x84}, {.addr=0xa965, .value=0xe0},
    };
    const struct BusEvent events[] = {
        {.addr=0xa964, .value=0x84, .type=IO_READ},
        {.addr=0xa965, .value=0xe0, .type=IO_READ},
        {.addr=0x00e0, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02BB) {
    const struct CPU_State initial_cpu = {.pc=0x3191, .a=0x4a, .x=0x39, .y=0x1a, .sp=0x20, .status=0x25};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0179, .value=0x92}, {.addr=0x3191, .value=0x84}, {.addr=0x3192, .value=0x79},
    };
    const struct CPU_State final_cpu = {.pc=0x3193, .a=0xdd, .x=0x39, .y=0x1a, .sp=0x20, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0179, .value=0x92}, {.addr=0x3191, .value=0x84}, {.addr=0x3192, .value=0x79},
    };
    const struct BusEvent events[] = {
        {.addr=0x3191, .value=0x84, .type=IO_READ},
        {.addr=0x3192, .value=0x79, .type=IO_READ},
        {.addr=0x0179, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02BC) {
    const struct CPU_State initial_cpu = {.pc=0x0344, .a=0x3e, .x=0x82, .y=0x60, .sp=0x8d, .status=0x86};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0075, .value=0x52}, {.addr=0x0344, .value=0x84}, {.addr=0x0345, .value=0x75},
    };
    const struct CPU_State final_cpu = {.pc=0x0346, .a=0x90, .x=0x82, .y=0x60, .sp=0x8d, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0075, .value=0x52}, {.addr=0x0344, .value=0x84}, {.addr=0x0345, .value=0x75},
    };
    const struct BusEvent events[] = {
        {.addr=0x0344, .value=0x84, .type=IO_READ},
        {.addr=0x0345, .value=0x75, .type=IO_READ},
        {.addr=0x0075, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02BD) {
    const struct CPU_State initial_cpu = {.pc=0xed0f, .a=0x02, .x=0xcc, .y=0x2d, .sp=0xd1, .status=0x3c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0149, .value=0x05}, {.addr=0xed0f, .value=0x84}, {.addr=0xed10, .value=0x49},
    };
    const struct CPU_State final_cpu = {.pc=0xed11, .a=0x07, .x=0xcc, .y=0x2d, .sp=0xd1, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x0149, .value=0x05}, {.addr=0xed0f, .value=0x84}, {.addr=0xed10, .value=0x49},
    };
    const struct BusEvent events[] = {
        {.addr=0xed0f, .value=0x84, .type=IO_READ},
        {.addr=0xed10, .value=0x49, .type=IO_READ},
        {.addr=0x0149, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02BE) {
    const struct CPU_State initial_cpu = {.pc=0xde7e, .a=0xca, .x=0x1e, .y=0x1c, .sp=0x07, .status=0xa0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015c, .value=0x62}, {.addr=0xde7e, .value=0x84}, {.addr=0xde7f, .value=0x5c},
    };
    const struct CPU_State final_cpu = {.pc=0xde80, .a=0x2c, .x=0x1e, .y=0x1c, .sp=0x07, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x015c, .value=0x62}, {.addr=0xde7e, .value=0x84}, {.addr=0xde7f, .value=0x5c},
    };
    const struct BusEvent events[] = {
        {.addr=0xde7e, .value=0x84, .type=IO_READ},
        {.addr=0xde7f, .value=0x5c, .type=IO_READ},
        {.addr=0x015c, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x9d0d, .a=0x58, .x=0xcf, .y=0xce, .sp=0x3d, .status=0x3f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0197, .value=0xc6}, {.addr=0x9d0d, .value=0x84}, {.addr=0x9d0e, .value=0x97},
    };
    const struct CPU_State final_cpu = {.pc=0x9d0f, .a=0x1f, .x=0xcf, .y=0xce, .sp=0x3d, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x0197, .value=0xc6}, {.addr=0x9d0d, .value=0x84}, {.addr=0x9d0e, .value=0x97},
    };
    const struct BusEvent events[] = {
        {.addr=0x9d0d, .value=0x84, .type=IO_READ},
        {.addr=0x9d0e, .value=0x97, .type=IO_READ},
        {.addr=0x0197, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x959a, .a=0x36, .x=0x25, .y=0x46, .sp=0x58, .status=0xad};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a0, .value=0x99}, {.addr=0x959a, .value=0x84}, {.addr=0x959b, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0x959c, .a=0xd0, .x=0x25, .y=0x46, .sp=0x58, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a0, .value=0x99}, {.addr=0x959a, .value=0x84}, {.addr=0x959b, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0x959a, .value=0x84, .type=IO_READ},
        {.addr=0x959b, .value=0xa0, .type=IO_READ},
        {.addr=0x01a0, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02C2) {
    const struct CPU_State initial_cpu = {.pc=0x7563, .a=0x29, .x=0x8a, .y=0x7f, .sp=0x9c, .status=0x74};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0160, .value=0x93}, {.addr=0x7563, .value=0x84}, {.addr=0x7564, .value=0x60},
    };
    const struct CPU_State final_cpu = {.pc=0x7565, .a=0xbc, .x=0x8a, .y=0x7f, .sp=0x9c, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0160, .value=0x93}, {.addr=0x7563, .value=0x84}, {.addr=0x7564, .value=0x60},
    };
    const struct BusEvent events[] = {
        {.addr=0x7563, .value=0x84, .type=IO_READ},
        {.addr=0x7564, .value=0x60, .type=IO_READ},
        {.addr=0x0160, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02C3) {
    const struct CPU_State initial_cpu = {.pc=0xe600, .a=0x0a, .x=0xea, .y=0x2e, .sp=0x5c, .status=0x67};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0130, .value=0xd3}, {.addr=0xe600, .value=0x84}, {.addr=0xe601, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0xe602, .a=0xde, .x=0xea, .y=0x2e, .sp=0x5c, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0130, .value=0xd3}, {.addr=0xe600, .value=0x84}, {.addr=0xe601, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0xe600, .value=0x84, .type=IO_READ},
        {.addr=0xe601, .value=0x30, .type=IO_READ},
        {.addr=0x0130, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02C4) {
    const struct CPU_State initial_cpu = {.pc=0x11aa, .a=0xc5, .x=0x14, .y=0x01, .sp=0x62, .status=0xde};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0046, .value=0xb7}, {.addr=0x11aa, .value=0x84}, {.addr=0x11ab, .value=0x46},
    };
    const struct CPU_State final_cpu = {.pc=0x11ac, .a=0x7c, .x=0x14, .y=0x01, .sp=0x62, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x0046, .value=0xb7}, {.addr=0x11aa, .value=0x84}, {.addr=0x11ab, .value=0x46},
    };
    const struct BusEvent events[] = {
        {.addr=0x11aa, .value=0x84, .type=IO_READ},
        {.addr=0x11ab, .value=0x46, .type=IO_READ},
        {.addr=0x0046, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x971b, .a=0x4f, .x=0x9d, .y=0x8b, .sp=0x64, .status=0xc1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007b, .value=0x71}, {.addr=0x971b, .value=0x84}, {.addr=0x971c, .value=0x7b},
    };
    const struct CPU_State final_cpu = {.pc=0x971d, .a=0xc1, .x=0x9d, .y=0x8b, .sp=0x64, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x007b, .value=0x71}, {.addr=0x971b, .value=0x84}, {.addr=0x971c, .value=0x7b},
    };
    const struct BusEvent events[] = {
        {.addr=0x971b, .value=0x84, .type=IO_READ},
        {.addr=0x971c, .value=0x7b, .type=IO_READ},
        {.addr=0x007b, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02C6) {
    const struct CPU_State initial_cpu = {.pc=0xf3b5, .a=0xfa, .x=0x85, .y=0xf2, .sp=0xe3, .status=0x6e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01af, .value=0x7e}, {.addr=0xf3b5, .value=0x84}, {.addr=0xf3b6, .value=0xaf},
    };
    const struct CPU_State final_cpu = {.pc=0xf3b7, .a=0x78, .x=0x85, .y=0xf2, .sp=0xe3, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01af, .value=0x7e}, {.addr=0xf3b5, .value=0x84}, {.addr=0xf3b6, .value=0xaf},
    };
    const struct BusEvent events[] = {
        {.addr=0xf3b5, .value=0x84, .type=IO_READ},
        {.addr=0xf3b6, .value=0xaf, .type=IO_READ},
        {.addr=0x01af, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02C7) {
    const struct CPU_State initial_cpu = {.pc=0x7ab4, .a=0x95, .x=0x68, .y=0x23, .sp=0x80, .status=0x7c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013f, .value=0x1f}, {.addr=0x7ab4, .value=0x84}, {.addr=0x7ab5, .value=0x3f},
    };
    const struct CPU_State final_cpu = {.pc=0x7ab6, .a=0xb4, .x=0x68, .y=0x23, .sp=0x80, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x013f, .value=0x1f}, {.addr=0x7ab4, .value=0x84}, {.addr=0x7ab5, .value=0x3f},
    };
    const struct BusEvent events[] = {
        {.addr=0x7ab4, .value=0x84, .type=IO_READ},
        {.addr=0x7ab5, .value=0x3f, .type=IO_READ},
        {.addr=0x013f, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02C8) {
    const struct CPU_State initial_cpu = {.pc=0xacc2, .a=0x83, .x=0x48, .y=0x1a, .sp=0xd5, .status=0x5a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0005, .value=0x98}, {.addr=0xacc2, .value=0x84}, {.addr=0xacc3, .value=0x05},
    };
    const struct CPU_State final_cpu = {.pc=0xacc4, .a=0x1b, .x=0x48, .y=0x1a, .sp=0xd5, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x0005, .value=0x98}, {.addr=0xacc2, .value=0x84}, {.addr=0xacc3, .value=0x05},
    };
    const struct BusEvent events[] = {
        {.addr=0xacc2, .value=0x84, .type=IO_READ},
        {.addr=0xacc3, .value=0x05, .type=IO_READ},
        {.addr=0x0005, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02C9) {
    const struct CPU_State initial_cpu = {.pc=0x3e6c, .a=0x86, .x=0x43, .y=0xc4, .sp=0x66, .status=0xc2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e7, .value=0xc6}, {.addr=0x3e6c, .value=0x84}, {.addr=0x3e6d, .value=0xe7},
    };
    const struct CPU_State final_cpu = {.pc=0x3e6e, .a=0x4c, .x=0x43, .y=0xc4, .sp=0x66, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e7, .value=0xc6}, {.addr=0x3e6c, .value=0x84}, {.addr=0x3e6d, .value=0xe7},
    };
    const struct BusEvent events[] = {
        {.addr=0x3e6c, .value=0x84, .type=IO_READ},
        {.addr=0x3e6d, .value=0xe7, .type=IO_READ},
        {.addr=0x00e7, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02CA) {
    const struct CPU_State initial_cpu = {.pc=0x4fa2, .a=0xb7, .x=0xfd, .y=0xa7, .sp=0x2f, .status=0xed};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0181, .value=0xe0}, {.addr=0x4fa2, .value=0x84}, {.addr=0x4fa3, .value=0x81},
    };
    const struct CPU_State final_cpu = {.pc=0x4fa4, .a=0x98, .x=0xfd, .y=0xa7, .sp=0x2f, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0181, .value=0xe0}, {.addr=0x4fa2, .value=0x84}, {.addr=0x4fa3, .value=0x81},
    };
    const struct BusEvent events[] = {
        {.addr=0x4fa2, .value=0x84, .type=IO_READ},
        {.addr=0x4fa3, .value=0x81, .type=IO_READ},
        {.addr=0x0181, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02CB) {
    const struct CPU_State initial_cpu = {.pc=0xd6d1, .a=0xe9, .x=0xd2, .y=0x32, .sp=0xd9, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012c, .value=0x1b}, {.addr=0xd6d1, .value=0x84}, {.addr=0xd6d2, .value=0x2c},
    };
    const struct CPU_State final_cpu = {.pc=0xd6d3, .a=0x05, .x=0xd2, .y=0x32, .sp=0xd9, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x012c, .value=0x1b}, {.addr=0xd6d1, .value=0x84}, {.addr=0xd6d2, .value=0x2c},
    };
    const struct BusEvent events[] = {
        {.addr=0xd6d1, .value=0x84, .type=IO_READ},
        {.addr=0xd6d2, .value=0x2c, .type=IO_READ},
        {.addr=0x012c, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02CC) {
    const struct CPU_State initial_cpu = {.pc=0x7973, .a=0x7d, .x=0x66, .y=0x26, .sp=0x20, .status=0xe1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012c, .value=0x0c}, {.addr=0x7973, .value=0x84}, {.addr=0x7974, .value=0x2c},
    };
    const struct CPU_State final_cpu = {.pc=0x7975, .a=0x8a, .x=0x66, .y=0x26, .sp=0x20, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x012c, .value=0x0c}, {.addr=0x7973, .value=0x84}, {.addr=0x7974, .value=0x2c},
    };
    const struct BusEvent events[] = {
        {.addr=0x7973, .value=0x84, .type=IO_READ},
        {.addr=0x7974, .value=0x2c, .type=IO_READ},
        {.addr=0x012c, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02CD) {
    const struct CPU_State initial_cpu = {.pc=0xb8d3, .a=0x6d, .x=0x94, .y=0x4b, .sp=0x12, .status=0xca};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e2, .value=0x76}, {.addr=0xb8d3, .value=0x84}, {.addr=0xb8d4, .value=0xe2},
    };
    const struct CPU_State final_cpu = {.pc=0xb8d5, .a=0xe3, .x=0x94, .y=0x4b, .sp=0x12, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e2, .value=0x76}, {.addr=0xb8d3, .value=0x84}, {.addr=0xb8d4, .value=0xe2},
    };
    const struct BusEvent events[] = {
        {.addr=0xb8d3, .value=0x84, .type=IO_READ},
        {.addr=0xb8d4, .value=0xe2, .type=IO_READ},
        {.addr=0x00e2, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02CF) {
    const struct CPU_State initial_cpu = {.pc=0x52a3, .a=0x6d, .x=0x19, .y=0x0c, .sp=0x32, .status=0x29};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ad, .value=0x59}, {.addr=0x52a3, .value=0x84}, {.addr=0x52a4, .value=0xad},
    };
    const struct CPU_State final_cpu = {.pc=0x52a5, .a=0xc7, .x=0x19, .y=0x0c, .sp=0x32, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ad, .value=0x59}, {.addr=0x52a3, .value=0x84}, {.addr=0x52a4, .value=0xad},
    };
    const struct BusEvent events[] = {
        {.addr=0x52a3, .value=0x84, .type=IO_READ},
        {.addr=0x52a4, .value=0xad, .type=IO_READ},
        {.addr=0x01ad, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02D0) {
    const struct CPU_State initial_cpu = {.pc=0x5e9d, .a=0x01, .x=0x3a, .y=0xb9, .sp=0x5e, .status=0x5b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0016, .value=0x0a}, {.addr=0x5e9d, .value=0x84}, {.addr=0x5e9e, .value=0x16},
    };
    const struct CPU_State final_cpu = {.pc=0x5e9f, .a=0x0c, .x=0x3a, .y=0xb9, .sp=0x5e, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x0016, .value=0x0a}, {.addr=0x5e9d, .value=0x84}, {.addr=0x5e9e, .value=0x16},
    };
    const struct BusEvent events[] = {
        {.addr=0x5e9d, .value=0x84, .type=IO_READ},
        {.addr=0x5e9e, .value=0x16, .type=IO_READ},
        {.addr=0x0016, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02D1) {
    const struct CPU_State initial_cpu = {.pc=0x26ba, .a=0xf6, .x=0xd8, .y=0xcb, .sp=0x8e, .status=0x7b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0190, .value=0xa0}, {.addr=0x26ba, .value=0x84}, {.addr=0x26bb, .value=0x90},
    };
    const struct CPU_State final_cpu = {.pc=0x26bc, .a=0x97, .x=0xd8, .y=0xcb, .sp=0x8e, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0190, .value=0xa0}, {.addr=0x26ba, .value=0x84}, {.addr=0x26bb, .value=0x90},
    };
    const struct BusEvent events[] = {
        {.addr=0x26ba, .value=0x84, .type=IO_READ},
        {.addr=0x26bb, .value=0x90, .type=IO_READ},
        {.addr=0x0190, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02D2) {
    const struct CPU_State initial_cpu = {.pc=0xf291, .a=0x3c, .x=0x93, .y=0x3d, .sp=0x03, .status=0xfe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016f, .value=0xa1}, {.addr=0xf291, .value=0x84}, {.addr=0xf292, .value=0x6f},
    };
    const struct CPU_State final_cpu = {.pc=0xf293, .a=0xdd, .x=0x93, .y=0x3d, .sp=0x03, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x016f, .value=0xa1}, {.addr=0xf291, .value=0x84}, {.addr=0xf292, .value=0x6f},
    };
    const struct BusEvent events[] = {
        {.addr=0xf291, .value=0x84, .type=IO_READ},
        {.addr=0xf292, .value=0x6f, .type=IO_READ},
        {.addr=0x016f, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x00b1, .a=0x9f, .x=0x62, .y=0xdd, .sp=0xdf, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b1, .value=0x84}, {.addr=0x00b2, .value=0x64}, {.addr=0x0164, .value=0x1a},
    };
    const struct CPU_State final_cpu = {.pc=0x00b3, .a=0xba, .x=0x62, .y=0xdd, .sp=0xdf, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b1, .value=0x84}, {.addr=0x00b2, .value=0x64}, {.addr=0x0164, .value=0x1a},
    };
    const struct BusEvent events[] = {
        {.addr=0x00b1, .value=0x84, .type=IO_READ},
        {.addr=0x00b2, .value=0x64, .type=IO_READ},
        {.addr=0x0164, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x65f4, .a=0xa7, .x=0xe6, .y=0xd2, .sp=0x69, .status=0x77};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a4, .value=0xe3}, {.addr=0x65f4, .value=0x84}, {.addr=0x65f5, .value=0xa4},
    };
    const struct CPU_State final_cpu = {.pc=0x65f6, .a=0x8b, .x=0xe6, .y=0xd2, .sp=0x69, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a4, .value=0xe3}, {.addr=0x65f4, .value=0x84}, {.addr=0x65f5, .value=0xa4},
    };
    const struct BusEvent events[] = {
        {.addr=0x65f4, .value=0x84, .type=IO_READ},
        {.addr=0x65f5, .value=0xa4, .type=IO_READ},
        {.addr=0x01a4, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x276b, .a=0x13, .x=0x0d, .y=0xd3, .sp=0x45, .status=0x24};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d3, .value=0x3b}, {.addr=0x276b, .value=0x84}, {.addr=0x276c, .value=0xd3},
    };
    const struct CPU_State final_cpu = {.pc=0x276d, .a=0x4e, .x=0x0d, .y=0xd3, .sp=0x45, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d3, .value=0x3b}, {.addr=0x276b, .value=0x84}, {.addr=0x276c, .value=0xd3},
    };
    const struct BusEvent events[] = {
        {.addr=0x276b, .value=0x84, .type=IO_READ},
        {.addr=0x276c, .value=0xd3, .type=IO_READ},
        {.addr=0x01d3, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02D6) {
    const struct CPU_State initial_cpu = {.pc=0xcf4f, .a=0x46, .x=0xa7, .y=0xd2, .sp=0xea, .status=0x13};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0030, .value=0xbc}, {.addr=0xcf4f, .value=0x84}, {.addr=0xcf50, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0xcf51, .a=0x03, .x=0xa7, .y=0xd2, .sp=0xea, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x0030, .value=0xbc}, {.addr=0xcf4f, .value=0x84}, {.addr=0xcf50, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0xcf4f, .value=0x84, .type=IO_READ},
        {.addr=0xcf50, .value=0x30, .type=IO_READ},
        {.addr=0x0030, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x464b, .a=0xef, .x=0xbc, .y=0x92, .sp=0x82, .status=0xb7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0128, .value=0xb5}, {.addr=0x464b, .value=0x84}, {.addr=0x464c, .value=0x28},
    };
    const struct CPU_State final_cpu = {.pc=0x464d, .a=0xa5, .x=0xbc, .y=0x92, .sp=0x82, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0128, .value=0xb5}, {.addr=0x464b, .value=0x84}, {.addr=0x464c, .value=0x28},
    };
    const struct BusEvent events[] = {
        {.addr=0x464b, .value=0x84, .type=IO_READ},
        {.addr=0x464c, .value=0x28, .type=IO_READ},
        {.addr=0x0128, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x3e11, .a=0x04, .x=0x0e, .y=0xb4, .sp=0xc4, .status=0x83};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005f, .value=0xf8}, {.addr=0x3e11, .value=0x84}, {.addr=0x3e12, .value=0x5f},
    };
    const struct CPU_State final_cpu = {.pc=0x3e13, .a=0xfd, .x=0x0e, .y=0xb4, .sp=0xc4, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x005f, .value=0xf8}, {.addr=0x3e11, .value=0x84}, {.addr=0x3e12, .value=0x5f},
    };
    const struct BusEvent events[] = {
        {.addr=0x3e11, .value=0x84, .type=IO_READ},
        {.addr=0x3e12, .value=0x5f, .type=IO_READ},
        {.addr=0x005f, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02D9) {
    const struct CPU_State initial_cpu = {.pc=0xc30f, .a=0x5d, .x=0xa0, .y=0x2e, .sp=0x86, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019d, .value=0xef}, {.addr=0xc30f, .value=0x84}, {.addr=0xc310, .value=0x9d},
    };
    const struct CPU_State final_cpu = {.pc=0xc311, .a=0x4c, .x=0xa0, .y=0x2e, .sp=0x86, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x019d, .value=0xef}, {.addr=0xc30f, .value=0x84}, {.addr=0xc310, .value=0x9d},
    };
    const struct BusEvent events[] = {
        {.addr=0xc30f, .value=0x84, .type=IO_READ},
        {.addr=0xc310, .value=0x9d, .type=IO_READ},
        {.addr=0x019d, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02DA) {
    const struct CPU_State initial_cpu = {.pc=0x9134, .a=0x05, .x=0x2b, .y=0x6d, .sp=0xe0, .status=0xca};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0068, .value=0x74}, {.addr=0x9134, .value=0x84}, {.addr=0x9135, .value=0x68},
    };
    const struct CPU_State final_cpu = {.pc=0x9136, .a=0x79, .x=0x2b, .y=0x6d, .sp=0xe0, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x0068, .value=0x74}, {.addr=0x9134, .value=0x84}, {.addr=0x9135, .value=0x68},
    };
    const struct BusEvent events[] = {
        {.addr=0x9134, .value=0x84, .type=IO_READ},
        {.addr=0x9135, .value=0x68, .type=IO_READ},
        {.addr=0x0068, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02DB) {
    const struct CPU_State initial_cpu = {.pc=0xd884, .a=0x43, .x=0x68, .y=0x60, .sp=0xa2, .status=0x58};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d2, .value=0x21}, {.addr=0xd884, .value=0x84}, {.addr=0xd885, .value=0xd2},
    };
    const struct CPU_State final_cpu = {.pc=0xd886, .a=0x64, .x=0x68, .y=0x60, .sp=0xa2, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d2, .value=0x21}, {.addr=0xd884, .value=0x84}, {.addr=0xd885, .value=0xd2},
    };
    const struct BusEvent events[] = {
        {.addr=0xd884, .value=0x84, .type=IO_READ},
        {.addr=0xd885, .value=0xd2, .type=IO_READ},
        {.addr=0x00d2, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x4566, .a=0xb1, .x=0x09, .y=0x94, .sp=0xd4, .status=0x72};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0115, .value=0x1f}, {.addr=0x4566, .value=0x84}, {.addr=0x4567, .value=0x15},
    };
    const struct CPU_State final_cpu = {.pc=0x4568, .a=0xd0, .x=0x09, .y=0x94, .sp=0xd4, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0115, .value=0x1f}, {.addr=0x4566, .value=0x84}, {.addr=0x4567, .value=0x15},
    };
    const struct BusEvent events[] = {
        {.addr=0x4566, .value=0x84, .type=IO_READ},
        {.addr=0x4567, .value=0x15, .type=IO_READ},
        {.addr=0x0115, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02DD) {
    const struct CPU_State initial_cpu = {.pc=0x4007, .a=0x34, .x=0xd3, .y=0xa1, .sp=0x74, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004b, .value=0x34}, {.addr=0x4007, .value=0x84}, {.addr=0x4008, .value=0x4b},
    };
    const struct CPU_State final_cpu = {.pc=0x4009, .a=0x68, .x=0xd3, .y=0xa1, .sp=0x74, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x004b, .value=0x34}, {.addr=0x4007, .value=0x84}, {.addr=0x4008, .value=0x4b},
    };
    const struct BusEvent events[] = {
        {.addr=0x4007, .value=0x84, .type=IO_READ},
        {.addr=0x4008, .value=0x4b, .type=IO_READ},
        {.addr=0x004b, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02DE) {
    const struct CPU_State initial_cpu = {.pc=0xcce6, .a=0xf6, .x=0x9d, .y=0x5b, .sp=0x5e, .status=0x43};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003a, .value=0x22}, {.addr=0xcce6, .value=0x84}, {.addr=0xcce7, .value=0x3a},
    };
    const struct CPU_State final_cpu = {.pc=0xcce8, .a=0x19, .x=0x9d, .y=0x5b, .sp=0x5e, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x003a, .value=0x22}, {.addr=0xcce6, .value=0x84}, {.addr=0xcce7, .value=0x3a},
    };
    const struct BusEvent events[] = {
        {.addr=0xcce6, .value=0x84, .type=IO_READ},
        {.addr=0xcce7, .value=0x3a, .type=IO_READ},
        {.addr=0x003a, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02DF) {
    const struct CPU_State initial_cpu = {.pc=0x4578, .a=0x43, .x=0x6a, .y=0x13, .sp=0x33, .status=0x29};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017c, .value=0x04}, {.addr=0x4578, .value=0x84}, {.addr=0x4579, .value=0x7c},
    };
    const struct CPU_State final_cpu = {.pc=0x457a, .a=0x48, .x=0x6a, .y=0x13, .sp=0x33, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x017c, .value=0x04}, {.addr=0x4578, .value=0x84}, {.addr=0x4579, .value=0x7c},
    };
    const struct BusEvent events[] = {
        {.addr=0x4578, .value=0x84, .type=IO_READ},
        {.addr=0x4579, .value=0x7c, .type=IO_READ},
        {.addr=0x017c, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02E0) {
    const struct CPU_State initial_cpu = {.pc=0xa204, .a=0x92, .x=0xa9, .y=0xe3, .sp=0x2e, .status=0xf6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ce, .value=0xd7}, {.addr=0xa204, .value=0x84}, {.addr=0xa205, .value=0xce},
    };
    const struct CPU_State final_cpu = {.pc=0xa206, .a=0x69, .x=0xa9, .y=0xe3, .sp=0x2e, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ce, .value=0xd7}, {.addr=0xa204, .value=0x84}, {.addr=0xa205, .value=0xce},
    };
    const struct BusEvent events[] = {
        {.addr=0xa204, .value=0x84, .type=IO_READ},
        {.addr=0xa205, .value=0xce, .type=IO_READ},
        {.addr=0x01ce, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02E1) {
    const struct CPU_State initial_cpu = {.pc=0x332c, .a=0xee, .x=0xaa, .y=0x33, .sp=0x12, .status=0x4d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d3, .value=0x4d}, {.addr=0x332c, .value=0x84}, {.addr=0x332d, .value=0xd3},
    };
    const struct CPU_State final_cpu = {.pc=0x332e, .a=0x3c, .x=0xaa, .y=0x33, .sp=0x12, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d3, .value=0x4d}, {.addr=0x332c, .value=0x84}, {.addr=0x332d, .value=0xd3},
    };
    const struct BusEvent events[] = {
        {.addr=0x332c, .value=0x84, .type=IO_READ},
        {.addr=0x332d, .value=0xd3, .type=IO_READ},
        {.addr=0x00d3, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02E2) {
    const struct CPU_State initial_cpu = {.pc=0xb185, .a=0xd6, .x=0x5c, .y=0x1c, .sp=0xed, .status=0x74};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cf, .value=0xb6}, {.addr=0xb185, .value=0x84}, {.addr=0xb186, .value=0xcf},
    };
    const struct CPU_State final_cpu = {.pc=0xb187, .a=0x8c, .x=0x5c, .y=0x1c, .sp=0xed, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cf, .value=0xb6}, {.addr=0xb185, .value=0x84}, {.addr=0xb186, .value=0xcf},
    };
    const struct BusEvent events[] = {
        {.addr=0xb185, .value=0x84, .type=IO_READ},
        {.addr=0xb186, .value=0xcf, .type=IO_READ},
        {.addr=0x01cf, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02E3) {
    const struct CPU_State initial_cpu = {.pc=0x46f5, .a=0x96, .x=0x92, .y=0x2f, .sp=0x7d, .status=0x07};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e4, .value=0x1a}, {.addr=0x46f5, .value=0x84}, {.addr=0x46f6, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0x46f7, .a=0xb1, .x=0x92, .y=0x2f, .sp=0x7d, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e4, .value=0x1a}, {.addr=0x46f5, .value=0x84}, {.addr=0x46f6, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0x46f5, .value=0x84, .type=IO_READ},
        {.addr=0x46f6, .value=0xe4, .type=IO_READ},
        {.addr=0x00e4, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02E4) {
    const struct CPU_State initial_cpu = {.pc=0xa625, .a=0x4c, .x=0x19, .y=0x91, .sp=0xe8, .status=0xad};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010b, .value=0x12}, {.addr=0xa625, .value=0x84}, {.addr=0xa626, .value=0x0b},
    };
    const struct CPU_State final_cpu = {.pc=0xa627, .a=0x5f, .x=0x19, .y=0x91, .sp=0xe8, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x010b, .value=0x12}, {.addr=0xa625, .value=0x84}, {.addr=0xa626, .value=0x0b},
    };
    const struct BusEvent events[] = {
        {.addr=0xa625, .value=0x84, .type=IO_READ},
        {.addr=0xa626, .value=0x0b, .type=IO_READ},
        {.addr=0x010b, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02E5) {
    const struct CPU_State initial_cpu = {.pc=0xbf24, .a=0x6b, .x=0x93, .y=0xdb, .sp=0x63, .status=0xf0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016f, .value=0xc0}, {.addr=0xbf24, .value=0x84}, {.addr=0xbf25, .value=0x6f},
    };
    const struct CPU_State final_cpu = {.pc=0xbf26, .a=0x2b, .x=0x93, .y=0xdb, .sp=0x63, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x016f, .value=0xc0}, {.addr=0xbf24, .value=0x84}, {.addr=0xbf25, .value=0x6f},
    };
    const struct BusEvent events[] = {
        {.addr=0xbf24, .value=0x84, .type=IO_READ},
        {.addr=0xbf25, .value=0x6f, .type=IO_READ},
        {.addr=0x016f, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02E6) {
    const struct CPU_State initial_cpu = {.pc=0x4157, .a=0xe7, .x=0x7d, .y=0x40, .sp=0x40, .status=0xd8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a6, .value=0xfa}, {.addr=0x4157, .value=0x84}, {.addr=0x4158, .value=0xa6},
    };
    const struct CPU_State final_cpu = {.pc=0x4159, .a=0xe1, .x=0x7d, .y=0x40, .sp=0x40, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a6, .value=0xfa}, {.addr=0x4157, .value=0x84}, {.addr=0x4158, .value=0xa6},
    };
    const struct BusEvent events[] = {
        {.addr=0x4157, .value=0x84, .type=IO_READ},
        {.addr=0x4158, .value=0xa6, .type=IO_READ},
        {.addr=0x00a6, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02E7) {
    const struct CPU_State initial_cpu = {.pc=0x56cc, .a=0xa3, .x=0xbf, .y=0xef, .sp=0x49, .status=0xdf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009d, .value=0xa5}, {.addr=0x56cc, .value=0x84}, {.addr=0x56cd, .value=0x9d},
    };
    const struct CPU_State final_cpu = {.pc=0x56ce, .a=0x49, .x=0xbf, .y=0xef, .sp=0x49, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x009d, .value=0xa5}, {.addr=0x56cc, .value=0x84}, {.addr=0x56cd, .value=0x9d},
    };
    const struct BusEvent events[] = {
        {.addr=0x56cc, .value=0x84, .type=IO_READ},
        {.addr=0x56cd, .value=0x9d, .type=IO_READ},
        {.addr=0x009d, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02E8) {
    const struct CPU_State initial_cpu = {.pc=0xd1e8, .a=0x11, .x=0xe6, .y=0x3d, .sp=0x59, .status=0xa7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ad, .value=0x58}, {.addr=0xd1e8, .value=0x84}, {.addr=0xd1e9, .value=0xad},
    };
    const struct CPU_State final_cpu = {.pc=0xd1ea, .a=0x6a, .x=0xe6, .y=0x3d, .sp=0x59, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ad, .value=0x58}, {.addr=0xd1e8, .value=0x84}, {.addr=0xd1e9, .value=0xad},
    };
    const struct BusEvent events[] = {
        {.addr=0xd1e8, .value=0x84, .type=IO_READ},
        {.addr=0xd1e9, .value=0xad, .type=IO_READ},
        {.addr=0x01ad, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x765f, .a=0xab, .x=0x70, .y=0xcd, .sp=0xfa, .status=0x26};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0130, .value=0x4c}, {.addr=0x765f, .value=0x84}, {.addr=0x7660, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0x7661, .a=0xf7, .x=0x70, .y=0xcd, .sp=0xfa, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0130, .value=0x4c}, {.addr=0x765f, .value=0x84}, {.addr=0x7660, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0x765f, .value=0x84, .type=IO_READ},
        {.addr=0x7660, .value=0x30, .type=IO_READ},
        {.addr=0x0130, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02EA) {
    const struct CPU_State initial_cpu = {.pc=0xf733, .a=0x76, .x=0xde, .y=0x91, .sp=0x13, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b6, .value=0xae}, {.addr=0xf733, .value=0x84}, {.addr=0xf734, .value=0xb6},
    };
    const struct CPU_State final_cpu = {.pc=0xf735, .a=0x24, .x=0xde, .y=0x91, .sp=0x13, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b6, .value=0xae}, {.addr=0xf733, .value=0x84}, {.addr=0xf734, .value=0xb6},
    };
    const struct BusEvent events[] = {
        {.addr=0xf733, .value=0x84, .type=IO_READ},
        {.addr=0xf734, .value=0xb6, .type=IO_READ},
        {.addr=0x01b6, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x7637, .a=0x64, .x=0x25, .y=0xa1, .sp=0xfd, .status=0x9b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0076, .value=0x9b}, {.addr=0x7637, .value=0x84}, {.addr=0x7638, .value=0x76},
    };
    const struct CPU_State final_cpu = {.pc=0x7639, .a=0x00, .x=0x25, .y=0xa1, .sp=0xfd, .status=0x1b};
    const struct RamEntry final_ram[] = {
        {.addr=0x0076, .value=0x9b}, {.addr=0x7637, .value=0x84}, {.addr=0x7638, .value=0x76},
    };
    const struct BusEvent events[] = {
        {.addr=0x7637, .value=0x84, .type=IO_READ},
        {.addr=0x7638, .value=0x76, .type=IO_READ},
        {.addr=0x0076, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02EC) {
    const struct CPU_State initial_cpu = {.pc=0xbe42, .a=0x62, .x=0xd0, .y=0x2a, .sp=0x3f, .status=0x5a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a7, .value=0xc9}, {.addr=0xbe42, .value=0x84}, {.addr=0xbe43, .value=0xa7},
    };
    const struct CPU_State final_cpu = {.pc=0xbe44, .a=0x2b, .x=0xd0, .y=0x2a, .sp=0x3f, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a7, .value=0xc9}, {.addr=0xbe42, .value=0x84}, {.addr=0xbe43, .value=0xa7},
    };
    const struct BusEvent events[] = {
        {.addr=0xbe42, .value=0x84, .type=IO_READ},
        {.addr=0xbe43, .value=0xa7, .type=IO_READ},
        {.addr=0x00a7, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x1f8a, .a=0x9e, .x=0xe5, .y=0x73, .sp=0xc7, .status=0x51};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0019, .value=0xa9}, {.addr=0x1f8a, .value=0x84}, {.addr=0x1f8b, .value=0x19},
    };
    const struct CPU_State final_cpu = {.pc=0x1f8c, .a=0x48, .x=0xe5, .y=0x73, .sp=0xc7, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x0019, .value=0xa9}, {.addr=0x1f8a, .value=0x84}, {.addr=0x1f8b, .value=0x19},
    };
    const struct BusEvent events[] = {
        {.addr=0x1f8a, .value=0x84, .type=IO_READ},
        {.addr=0x1f8b, .value=0x19, .type=IO_READ},
        {.addr=0x0019, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02EE) {
    const struct CPU_State initial_cpu = {.pc=0xc430, .a=0xda, .x=0x58, .y=0xbc, .sp=0x00, .status=0xba};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019d, .value=0xbe}, {.addr=0xc430, .value=0x84}, {.addr=0xc431, .value=0x9d},
    };
    const struct CPU_State final_cpu = {.pc=0xc432, .a=0x98, .x=0x58, .y=0xbc, .sp=0x00, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x019d, .value=0xbe}, {.addr=0xc430, .value=0x84}, {.addr=0xc431, .value=0x9d},
    };
    const struct BusEvent events[] = {
        {.addr=0xc430, .value=0x84, .type=IO_READ},
        {.addr=0xc431, .value=0x9d, .type=IO_READ},
        {.addr=0x019d, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02F0) {
    const struct CPU_State initial_cpu = {.pc=0xe3e7, .a=0x14, .x=0xac, .y=0xbe, .sp=0xfb, .status=0xa9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0150, .value=0xb1}, {.addr=0xe3e7, .value=0x84}, {.addr=0xe3e8, .value=0x50},
    };
    const struct CPU_State final_cpu = {.pc=0xe3e9, .a=0xc6, .x=0xac, .y=0xbe, .sp=0xfb, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0150, .value=0xb1}, {.addr=0xe3e7, .value=0x84}, {.addr=0xe3e8, .value=0x50},
    };
    const struct BusEvent events[] = {
        {.addr=0xe3e7, .value=0x84, .type=IO_READ},
        {.addr=0xe3e8, .value=0x50, .type=IO_READ},
        {.addr=0x0150, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02F1) {
    const struct CPU_State initial_cpu = {.pc=0xd7b9, .a=0xe0, .x=0xef, .y=0x06, .sp=0x4a, .status=0x71};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0147, .value=0x71}, {.addr=0xd7b9, .value=0x84}, {.addr=0xd7ba, .value=0x47},
    };
    const struct CPU_State final_cpu = {.pc=0xd7bb, .a=0x52, .x=0xef, .y=0x06, .sp=0x4a, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0147, .value=0x71}, {.addr=0xd7b9, .value=0x84}, {.addr=0xd7ba, .value=0x47},
    };
    const struct BusEvent events[] = {
        {.addr=0xd7b9, .value=0x84, .type=IO_READ},
        {.addr=0xd7ba, .value=0x47, .type=IO_READ},
        {.addr=0x0147, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02F2) {
    const struct CPU_State initial_cpu = {.pc=0x374e, .a=0x90, .x=0x9c, .y=0x85, .sp=0xec, .status=0x43};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003d, .value=0x17}, {.addr=0x374e, .value=0x84}, {.addr=0x374f, .value=0x3d},
    };
    const struct CPU_State final_cpu = {.pc=0x3750, .a=0xa8, .x=0x9c, .y=0x85, .sp=0xec, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x003d, .value=0x17}, {.addr=0x374e, .value=0x84}, {.addr=0x374f, .value=0x3d},
    };
    const struct BusEvent events[] = {
        {.addr=0x374e, .value=0x84, .type=IO_READ},
        {.addr=0x374f, .value=0x3d, .type=IO_READ},
        {.addr=0x003d, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02F3) {
    const struct CPU_State initial_cpu = {.pc=0x639d, .a=0x60, .x=0x22, .y=0x38, .sp=0xca, .status=0xea};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a0, .value=0x34}, {.addr=0x639d, .value=0x84}, {.addr=0x639e, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0x639f, .a=0x94, .x=0x22, .y=0x38, .sp=0xca, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a0, .value=0x34}, {.addr=0x639d, .value=0x84}, {.addr=0x639e, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0x639d, .value=0x84, .type=IO_READ},
        {.addr=0x639e, .value=0xa0, .type=IO_READ},
        {.addr=0x01a0, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02F4) {
    const struct CPU_State initial_cpu = {.pc=0x41b8, .a=0x5d, .x=0x8a, .y=0x38, .sp=0xa1, .status=0x24};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0119, .value=0xf0}, {.addr=0x41b8, .value=0x84}, {.addr=0x41b9, .value=0x19},
    };
    const struct CPU_State final_cpu = {.pc=0x41ba, .a=0x4d, .x=0x8a, .y=0x38, .sp=0xa1, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x0119, .value=0xf0}, {.addr=0x41b8, .value=0x84}, {.addr=0x41b9, .value=0x19},
    };
    const struct BusEvent events[] = {
        {.addr=0x41b8, .value=0x84, .type=IO_READ},
        {.addr=0x41b9, .value=0x19, .type=IO_READ},
        {.addr=0x0119, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x5e1d, .a=0x62, .x=0x60, .y=0xb9, .sp=0x46, .status=0x37};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ad, .value=0x1a}, {.addr=0x5e1d, .value=0x84}, {.addr=0x5e1e, .value=0xad},
    };
    const struct CPU_State final_cpu = {.pc=0x5e1f, .a=0x7d, .x=0x60, .y=0xb9, .sp=0x46, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ad, .value=0x1a}, {.addr=0x5e1d, .value=0x84}, {.addr=0x5e1e, .value=0xad},
    };
    const struct BusEvent events[] = {
        {.addr=0x5e1d, .value=0x84, .type=IO_READ},
        {.addr=0x5e1e, .value=0xad, .type=IO_READ},
        {.addr=0x01ad, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x5901, .a=0x4a, .x=0xe7, .y=0xba, .sp=0x38, .status=0x5b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ae, .value=0xb2}, {.addr=0x5901, .value=0x84}, {.addr=0x5902, .value=0xae},
    };
    const struct CPU_State final_cpu = {.pc=0x5903, .a=0xfd, .x=0xe7, .y=0xba, .sp=0x38, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ae, .value=0xb2}, {.addr=0x5901, .value=0x84}, {.addr=0x5902, .value=0xae},
    };
    const struct BusEvent events[] = {
        {.addr=0x5901, .value=0x84, .type=IO_READ},
        {.addr=0x5902, .value=0xae, .type=IO_READ},
        {.addr=0x00ae, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x232e, .a=0x07, .x=0x9d, .y=0x10, .sp=0xb5, .status=0x60};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0160, .value=0xc6}, {.addr=0x232e, .value=0x84}, {.addr=0x232f, .value=0x60},
    };
    const struct CPU_State final_cpu = {.pc=0x2330, .a=0xcd, .x=0x9d, .y=0x10, .sp=0xb5, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0160, .value=0xc6}, {.addr=0x232e, .value=0x84}, {.addr=0x232f, .value=0x60},
    };
    const struct BusEvent events[] = {
        {.addr=0x232e, .value=0x84, .type=IO_READ},
        {.addr=0x232f, .value=0x60, .type=IO_READ},
        {.addr=0x0160, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02F8) {
    const struct CPU_State initial_cpu = {.pc=0x320e, .a=0x6f, .x=0x0e, .y=0x57, .sp=0xe6, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0158, .value=0x0c}, {.addr=0x320e, .value=0x84}, {.addr=0x320f, .value=0x58},
    };
    const struct CPU_State final_cpu = {.pc=0x3210, .a=0x7c, .x=0x0e, .y=0x57, .sp=0xe6, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x0158, .value=0x0c}, {.addr=0x320e, .value=0x84}, {.addr=0x320f, .value=0x58},
    };
    const struct BusEvent events[] = {
        {.addr=0x320e, .value=0x84, .type=IO_READ},
        {.addr=0x320f, .value=0x58, .type=IO_READ},
        {.addr=0x0158, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02F9) {
    const struct CPU_State initial_cpu = {.pc=0x27de, .a=0x37, .x=0x8b, .y=0x37, .sp=0x0c, .status=0x24};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0137, .value=0x67}, {.addr=0x27de, .value=0x84}, {.addr=0x27df, .value=0x37},
    };
    const struct CPU_State final_cpu = {.pc=0x27e0, .a=0x9e, .x=0x8b, .y=0x37, .sp=0x0c, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0137, .value=0x67}, {.addr=0x27de, .value=0x84}, {.addr=0x27df, .value=0x37},
    };
    const struct BusEvent events[] = {
        {.addr=0x27de, .value=0x84, .type=IO_READ},
        {.addr=0x27df, .value=0x37, .type=IO_READ},
        {.addr=0x0137, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02FA) {
    const struct CPU_State initial_cpu = {.pc=0x3775, .a=0x68, .x=0xef, .y=0x29, .sp=0xc4, .status=0x85};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005c, .value=0x2e}, {.addr=0x3775, .value=0x84}, {.addr=0x3776, .value=0x5c},
    };
    const struct CPU_State final_cpu = {.pc=0x3777, .a=0x97, .x=0xef, .y=0x29, .sp=0xc4, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x005c, .value=0x2e}, {.addr=0x3775, .value=0x84}, {.addr=0x3776, .value=0x5c},
    };
    const struct BusEvent events[] = {
        {.addr=0x3775, .value=0x84, .type=IO_READ},
        {.addr=0x3776, .value=0x5c, .type=IO_READ},
        {.addr=0x005c, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02FB) {
    const struct CPU_State initial_cpu = {.pc=0x09ec, .a=0x68, .x=0x36, .y=0x43, .sp=0xa5, .status=0x51};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0058, .value=0xd5}, {.addr=0x09ec, .value=0x84}, {.addr=0x09ed, .value=0x58},
    };
    const struct CPU_State final_cpu = {.pc=0x09ee, .a=0x3e, .x=0x36, .y=0x43, .sp=0xa5, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x0058, .value=0xd5}, {.addr=0x09ec, .value=0x84}, {.addr=0x09ed, .value=0x58},
    };
    const struct BusEvent events[] = {
        {.addr=0x09ec, .value=0x84, .type=IO_READ},
        {.addr=0x09ed, .value=0x58, .type=IO_READ},
        {.addr=0x0058, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02FC) {
    const struct CPU_State initial_cpu = {.pc=0x8755, .a=0xf7, .x=0x11, .y=0x21, .sp=0x40, .status=0x18};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ab, .value=0x6a}, {.addr=0x8755, .value=0x84}, {.addr=0x8756, .value=0xab},
    };
    const struct CPU_State final_cpu = {.pc=0x8757, .a=0x61, .x=0x11, .y=0x21, .sp=0x40, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ab, .value=0x6a}, {.addr=0x8755, .value=0x84}, {.addr=0x8756, .value=0xab},
    };
    const struct BusEvent events[] = {
        {.addr=0x8755, .value=0x84, .type=IO_READ},
        {.addr=0x8756, .value=0xab, .type=IO_READ},
        {.addr=0x00ab, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02FD) {
    const struct CPU_State initial_cpu = {.pc=0xfc39, .a=0x6a, .x=0x85, .y=0x0c, .sp=0x07, .status=0xd6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a8, .value=0xcb}, {.addr=0xfc39, .value=0x84}, {.addr=0xfc3a, .value=0xa8},
    };
    const struct CPU_State final_cpu = {.pc=0xfc3b, .a=0x35, .x=0x85, .y=0x0c, .sp=0x07, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a8, .value=0xcb}, {.addr=0xfc39, .value=0x84}, {.addr=0xfc3a, .value=0xa8},
    };
    const struct BusEvent events[] = {
        {.addr=0xfc39, .value=0x84, .type=IO_READ},
        {.addr=0xfc3a, .value=0xa8, .type=IO_READ},
        {.addr=0x00a8, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02FE) {
    const struct CPU_State initial_cpu = {.pc=0x5b3c, .a=0x78, .x=0x34, .y=0x6c, .sp=0x7c, .status=0xc9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e0, .value=0x53}, {.addr=0x5b3c, .value=0x84}, {.addr=0x5b3d, .value=0xe0},
    };
    const struct CPU_State final_cpu = {.pc=0x5b3e, .a=0xcc, .x=0x34, .y=0x6c, .sp=0x7c, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e0, .value=0x53}, {.addr=0x5b3c, .value=0x84}, {.addr=0x5b3d, .value=0xe0},
    };
    const struct BusEvent events[] = {
        {.addr=0x5b3c, .value=0x84, .type=IO_READ},
        {.addr=0x5b3d, .value=0xe0, .type=IO_READ},
        {.addr=0x00e0, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_02FF) {
    const struct CPU_State initial_cpu = {.pc=0xbb7d, .a=0x44, .x=0xf5, .y=0xb2, .sp=0x80, .status=0x52};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0044, .value=0x29}, {.addr=0xbb7d, .value=0x84}, {.addr=0xbb7e, .value=0x44},
    };
    const struct CPU_State final_cpu = {.pc=0xbb7f, .a=0x6d, .x=0xf5, .y=0xb2, .sp=0x80, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x0044, .value=0x29}, {.addr=0xbb7d, .value=0x84}, {.addr=0xbb7e, .value=0x44},
    };
    const struct BusEvent events[] = {
        {.addr=0xbb7d, .value=0x84, .type=IO_READ},
        {.addr=0xbb7e, .value=0x44, .type=IO_READ},
        {.addr=0x0044, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0300) {
    const struct CPU_State initial_cpu = {.pc=0x1cc5, .a=0x16, .x=0xe1, .y=0x4b, .sp=0x3d, .status=0x1e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ae, .value=0x87}, {.addr=0x1cc5, .value=0x84}, {.addr=0x1cc6, .value=0xae},
    };
    const struct CPU_State final_cpu = {.pc=0x1cc7, .a=0x9d, .x=0xe1, .y=0x4b, .sp=0x3d, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ae, .value=0x87}, {.addr=0x1cc5, .value=0x84}, {.addr=0x1cc6, .value=0xae},
    };
    const struct BusEvent events[] = {
        {.addr=0x1cc5, .value=0x84, .type=IO_READ},
        {.addr=0x1cc6, .value=0xae, .type=IO_READ},
        {.addr=0x00ae, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0301) {
    const struct CPU_State initial_cpu = {.pc=0x722a, .a=0x80, .x=0xec, .y=0x7d, .sp=0xd9, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0137, .value=0x65}, {.addr=0x722a, .value=0x84}, {.addr=0x722b, .value=0x37},
    };
    const struct CPU_State final_cpu = {.pc=0x722c, .a=0xe5, .x=0xec, .y=0x7d, .sp=0xd9, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0137, .value=0x65}, {.addr=0x722a, .value=0x84}, {.addr=0x722b, .value=0x37},
    };
    const struct BusEvent events[] = {
        {.addr=0x722a, .value=0x84, .type=IO_READ},
        {.addr=0x722b, .value=0x37, .type=IO_READ},
        {.addr=0x0137, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0302) {
    const struct CPU_State initial_cpu = {.pc=0xebbb, .a=0x90, .x=0xae, .y=0x5c, .sp=0x68, .status=0x9f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a0, .value=0xce}, {.addr=0xebbb, .value=0x84}, {.addr=0xebbc, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0xebbd, .a=0x5f, .x=0xae, .y=0x5c, .sp=0x68, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a0, .value=0xce}, {.addr=0xebbb, .value=0x84}, {.addr=0xebbc, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0xebbb, .value=0x84, .type=IO_READ},
        {.addr=0xebbc, .value=0xa0, .type=IO_READ},
        {.addr=0x00a0, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0303) {
    const struct CPU_State initial_cpu = {.pc=0x9af6, .a=0x8c, .x=0xa3, .y=0xde, .sp=0x5b, .status=0x88};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002b, .value=0x66}, {.addr=0x9af6, .value=0x84}, {.addr=0x9af7, .value=0x2b},
    };
    const struct CPU_State final_cpu = {.pc=0x9af8, .a=0xf2, .x=0xa3, .y=0xde, .sp=0x5b, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x002b, .value=0x66}, {.addr=0x9af6, .value=0x84}, {.addr=0x9af7, .value=0x2b},
    };
    const struct BusEvent events[] = {
        {.addr=0x9af6, .value=0x84, .type=IO_READ},
        {.addr=0x9af7, .value=0x2b, .type=IO_READ},
        {.addr=0x002b, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0304) {
    const struct CPU_State initial_cpu = {.pc=0x3954, .a=0xbf, .x=0x31, .y=0xe2, .sp=0xdc, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0141, .value=0x31}, {.addr=0x3954, .value=0x84}, {.addr=0x3955, .value=0x41},
    };
    const struct CPU_State final_cpu = {.pc=0x3956, .a=0xf1, .x=0x31, .y=0xe2, .sp=0xdc, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0141, .value=0x31}, {.addr=0x3954, .value=0x84}, {.addr=0x3955, .value=0x41},
    };
    const struct BusEvent events[] = {
        {.addr=0x3954, .value=0x84, .type=IO_READ},
        {.addr=0x3955, .value=0x41, .type=IO_READ},
        {.addr=0x0141, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0305) {
    const struct CPU_State initial_cpu = {.pc=0xede0, .a=0x00, .x=0x94, .y=0x06, .sp=0x01, .status=0x2c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0141, .value=0x10}, {.addr=0xede0, .value=0x84}, {.addr=0xede1, .value=0x41},
    };
    const struct CPU_State final_cpu = {.pc=0xede2, .a=0x10, .x=0x94, .y=0x06, .sp=0x01, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x0141, .value=0x10}, {.addr=0xede0, .value=0x84}, {.addr=0xede1, .value=0x41},
    };
    const struct BusEvent events[] = {
        {.addr=0xede0, .value=0x84, .type=IO_READ},
        {.addr=0xede1, .value=0x41, .type=IO_READ},
        {.addr=0x0141, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0306) {
    const struct CPU_State initial_cpu = {.pc=0x6138, .a=0xfe, .x=0x5d, .y=0xed, .sp=0x7b, .status=0xec};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017f, .value=0xbe}, {.addr=0x6138, .value=0x84}, {.addr=0x6139, .value=0x7f},
    };
    const struct CPU_State final_cpu = {.pc=0x613a, .a=0xbc, .x=0x5d, .y=0xed, .sp=0x7b, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x017f, .value=0xbe}, {.addr=0x6138, .value=0x84}, {.addr=0x6139, .value=0x7f},
    };
    const struct BusEvent events[] = {
        {.addr=0x6138, .value=0x84, .type=IO_READ},
        {.addr=0x6139, .value=0x7f, .type=IO_READ},
        {.addr=0x017f, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0307) {
    const struct CPU_State initial_cpu = {.pc=0x5d13, .a=0xc8, .x=0x81, .y=0x4e, .sp=0x30, .status=0xd7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a7, .value=0x42}, {.addr=0x5d13, .value=0x84}, {.addr=0x5d14, .value=0xa7},
    };
    const struct CPU_State final_cpu = {.pc=0x5d15, .a=0x0b, .x=0x81, .y=0x4e, .sp=0x30, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a7, .value=0x42}, {.addr=0x5d13, .value=0x84}, {.addr=0x5d14, .value=0xa7},
    };
    const struct BusEvent events[] = {
        {.addr=0x5d13, .value=0x84, .type=IO_READ},
        {.addr=0x5d14, .value=0xa7, .type=IO_READ},
        {.addr=0x00a7, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0308) {
    const struct CPU_State initial_cpu = {.pc=0x5f94, .a=0x25, .x=0xb9, .y=0x00, .sp=0xc0, .status=0x02};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0054, .value=0xc5}, {.addr=0x5f94, .value=0x84}, {.addr=0x5f95, .value=0x54},
    };
    const struct CPU_State final_cpu = {.pc=0x5f96, .a=0xea, .x=0xb9, .y=0x00, .sp=0xc0, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x0054, .value=0xc5}, {.addr=0x5f94, .value=0x84}, {.addr=0x5f95, .value=0x54},
    };
    const struct BusEvent events[] = {
        {.addr=0x5f94, .value=0x84, .type=IO_READ},
        {.addr=0x5f95, .value=0x54, .type=IO_READ},
        {.addr=0x0054, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0309) {
    const struct CPU_State initial_cpu = {.pc=0x9c82, .a=0x79, .x=0xe5, .y=0xfd, .sp=0xb9, .status=0x86};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003b, .value=0xd2}, {.addr=0x9c82, .value=0x84}, {.addr=0x9c83, .value=0x3b},
    };
    const struct CPU_State final_cpu = {.pc=0x9c84, .a=0x4b, .x=0xe5, .y=0xfd, .sp=0xb9, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x003b, .value=0xd2}, {.addr=0x9c82, .value=0x84}, {.addr=0x9c83, .value=0x3b},
    };
    const struct BusEvent events[] = {
        {.addr=0x9c82, .value=0x84, .type=IO_READ},
        {.addr=0x9c83, .value=0x3b, .type=IO_READ},
        {.addr=0x003b, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_030A) {
    const struct CPU_State initial_cpu = {.pc=0x7d43, .a=0x53, .x=0x16, .y=0x0c, .sp=0x29, .status=0x62};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c9, .value=0x60}, {.addr=0x7d43, .value=0x84}, {.addr=0x7d44, .value=0xc9},
    };
    const struct CPU_State final_cpu = {.pc=0x7d45, .a=0xb3, .x=0x16, .y=0x0c, .sp=0x29, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c9, .value=0x60}, {.addr=0x7d43, .value=0x84}, {.addr=0x7d44, .value=0xc9},
    };
    const struct BusEvent events[] = {
        {.addr=0x7d43, .value=0x84, .type=IO_READ},
        {.addr=0x7d44, .value=0xc9, .type=IO_READ},
        {.addr=0x01c9, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_030B) {
    const struct CPU_State initial_cpu = {.pc=0x638e, .a=0x0a, .x=0x02, .y=0xaf, .sp=0x6a, .status=0x8a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002b, .value=0xd6}, {.addr=0x638e, .value=0x84}, {.addr=0x638f, .value=0x2b},
    };
    const struct CPU_State final_cpu = {.pc=0x6390, .a=0xe0, .x=0x02, .y=0xaf, .sp=0x6a, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x002b, .value=0xd6}, {.addr=0x638e, .value=0x84}, {.addr=0x638f, .value=0x2b},
    };
    const struct BusEvent events[] = {
        {.addr=0x638e, .value=0x84, .type=IO_READ},
        {.addr=0x638f, .value=0x2b, .type=IO_READ},
        {.addr=0x002b, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_030C) {
    const struct CPU_State initial_cpu = {.pc=0x07ef, .a=0x05, .x=0x75, .y=0xbd, .sp=0x11, .status=0x67};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011c, .value=0xd4}, {.addr=0x07ef, .value=0x84}, {.addr=0x07f0, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0x07f1, .a=0xda, .x=0x75, .y=0xbd, .sp=0x11, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x011c, .value=0xd4}, {.addr=0x07ef, .value=0x84}, {.addr=0x07f0, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0x07ef, .value=0x84, .type=IO_READ},
        {.addr=0x07f0, .value=0x1c, .type=IO_READ},
        {.addr=0x011c, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_030D) {
    const struct CPU_State initial_cpu = {.pc=0x4d8c, .a=0x07, .x=0xfd, .y=0x83, .sp=0xf3, .status=0x39};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0102, .value=0x5e}, {.addr=0x4d8c, .value=0x84}, {.addr=0x4d8d, .value=0x02},
    };
    const struct CPU_State final_cpu = {.pc=0x4d8e, .a=0x66, .x=0xfd, .y=0x83, .sp=0xf3, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x0102, .value=0x5e}, {.addr=0x4d8c, .value=0x84}, {.addr=0x4d8d, .value=0x02},
    };
    const struct BusEvent events[] = {
        {.addr=0x4d8c, .value=0x84, .type=IO_READ},
        {.addr=0x4d8d, .value=0x02, .type=IO_READ},
        {.addr=0x0102, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_030E) {
    const struct CPU_State initial_cpu = {.pc=0x50ba, .a=0xf9, .x=0x93, .y=0xf3, .sp=0x21, .status=0xec};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018b, .value=0x2c}, {.addr=0x50ba, .value=0x84}, {.addr=0x50bb, .value=0x8b},
    };
    const struct CPU_State final_cpu = {.pc=0x50bc, .a=0x25, .x=0x93, .y=0xf3, .sp=0x21, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x018b, .value=0x2c}, {.addr=0x50ba, .value=0x84}, {.addr=0x50bb, .value=0x8b},
    };
    const struct BusEvent events[] = {
        {.addr=0x50ba, .value=0x84, .type=IO_READ},
        {.addr=0x50bb, .value=0x8b, .type=IO_READ},
        {.addr=0x018b, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_030F) {
    const struct CPU_State initial_cpu = {.pc=0x53e3, .a=0x22, .x=0xed, .y=0xac, .sp=0x6b, .status=0xb3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010a, .value=0xee}, {.addr=0x53e3, .value=0x84}, {.addr=0x53e4, .value=0x0a},
    };
    const struct CPU_State final_cpu = {.pc=0x53e5, .a=0x11, .x=0xed, .y=0xac, .sp=0x6b, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x010a, .value=0xee}, {.addr=0x53e3, .value=0x84}, {.addr=0x53e4, .value=0x0a},
    };
    const struct BusEvent events[] = {
        {.addr=0x53e3, .value=0x84, .type=IO_READ},
        {.addr=0x53e4, .value=0x0a, .type=IO_READ},
        {.addr=0x010a, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0310) {
    const struct CPU_State initial_cpu = {.pc=0x92ec, .a=0x68, .x=0x2a, .y=0xbb, .sp=0x9d, .status=0xc3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0088, .value=0xec}, {.addr=0x92ec, .value=0x84}, {.addr=0x92ed, .value=0x88},
    };
    const struct CPU_State final_cpu = {.pc=0x92ee, .a=0x55, .x=0x2a, .y=0xbb, .sp=0x9d, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x0088, .value=0xec}, {.addr=0x92ec, .value=0x84}, {.addr=0x92ed, .value=0x88},
    };
    const struct BusEvent events[] = {
        {.addr=0x92ec, .value=0x84, .type=IO_READ},
        {.addr=0x92ed, .value=0x88, .type=IO_READ},
        {.addr=0x0088, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0311) {
    const struct CPU_State initial_cpu = {.pc=0x4e66, .a=0x46, .x=0x22, .y=0x7d, .sp=0x41, .status=0x62};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0126, .value=0x56}, {.addr=0x4e66, .value=0x84}, {.addr=0x4e67, .value=0x26},
    };
    const struct CPU_State final_cpu = {.pc=0x4e68, .a=0x9c, .x=0x22, .y=0x7d, .sp=0x41, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0126, .value=0x56}, {.addr=0x4e66, .value=0x84}, {.addr=0x4e67, .value=0x26},
    };
    const struct BusEvent events[] = {
        {.addr=0x4e66, .value=0x84, .type=IO_READ},
        {.addr=0x4e67, .value=0x26, .type=IO_READ},
        {.addr=0x0126, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0312) {
    const struct CPU_State initial_cpu = {.pc=0x8406, .a=0x0a, .x=0xfd, .y=0xb9, .sp=0xed, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013e, .value=0x2f}, {.addr=0x8406, .value=0x84}, {.addr=0x8407, .value=0x3e},
    };
    const struct CPU_State final_cpu = {.pc=0x8408, .a=0x3a, .x=0xfd, .y=0xb9, .sp=0xed, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x013e, .value=0x2f}, {.addr=0x8406, .value=0x84}, {.addr=0x8407, .value=0x3e},
    };
    const struct BusEvent events[] = {
        {.addr=0x8406, .value=0x84, .type=IO_READ},
        {.addr=0x8407, .value=0x3e, .type=IO_READ},
        {.addr=0x013e, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0313) {
    const struct CPU_State initial_cpu = {.pc=0x17c0, .a=0xce, .x=0xbc, .y=0xf2, .sp=0x69, .status=0x71};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f0, .value=0xa6}, {.addr=0x17c0, .value=0x84}, {.addr=0x17c1, .value=0xf0},
    };
    const struct CPU_State final_cpu = {.pc=0x17c2, .a=0x75, .x=0xbc, .y=0xf2, .sp=0x69, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f0, .value=0xa6}, {.addr=0x17c0, .value=0x84}, {.addr=0x17c1, .value=0xf0},
    };
    const struct BusEvent events[] = {
        {.addr=0x17c0, .value=0x84, .type=IO_READ},
        {.addr=0x17c1, .value=0xf0, .type=IO_READ},
        {.addr=0x01f0, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0314) {
    const struct CPU_State initial_cpu = {.pc=0x7b88, .a=0x72, .x=0x5e, .y=0x00, .sp=0x63, .status=0x06};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ee, .value=0x2b}, {.addr=0x7b88, .value=0x84}, {.addr=0x7b89, .value=0xee},
    };
    const struct CPU_State final_cpu = {.pc=0x7b8a, .a=0x9d, .x=0x5e, .y=0x00, .sp=0x63, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ee, .value=0x2b}, {.addr=0x7b88, .value=0x84}, {.addr=0x7b89, .value=0xee},
    };
    const struct BusEvent events[] = {
        {.addr=0x7b88, .value=0x84, .type=IO_READ},
        {.addr=0x7b89, .value=0xee, .type=IO_READ},
        {.addr=0x00ee, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0315) {
    const struct CPU_State initial_cpu = {.pc=0x5e11, .a=0xc4, .x=0x27, .y=0xae, .sp=0x4b, .status=0x96};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e4, .value=0x51}, {.addr=0x5e11, .value=0x84}, {.addr=0x5e12, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0x5e13, .a=0x15, .x=0x27, .y=0xae, .sp=0x4b, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e4, .value=0x51}, {.addr=0x5e11, .value=0x84}, {.addr=0x5e12, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0x5e11, .value=0x84, .type=IO_READ},
        {.addr=0x5e12, .value=0xe4, .type=IO_READ},
        {.addr=0x00e4, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0316) {
    const struct CPU_State initial_cpu = {.pc=0xf793, .a=0xd2, .x=0x08, .y=0xc6, .sp=0x01, .status=0x60};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0184, .value=0x3a}, {.addr=0xf793, .value=0x84}, {.addr=0xf794, .value=0x84},
    };
    const struct CPU_State final_cpu = {.pc=0xf795, .a=0x0c, .x=0x08, .y=0xc6, .sp=0x01, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x0184, .value=0x3a}, {.addr=0xf793, .value=0x84}, {.addr=0xf794, .value=0x84},
    };
    const struct BusEvent events[] = {
        {.addr=0xf793, .value=0x84, .type=IO_READ},
        {.addr=0xf794, .value=0x84, .type=IO_READ},
        {.addr=0x0184, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0317) {
    const struct CPU_State initial_cpu = {.pc=0x5ef5, .a=0xb8, .x=0xa2, .y=0x25, .sp=0xf3, .status=0xb3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d8, .value=0xc7}, {.addr=0x5ef5, .value=0x84}, {.addr=0x5ef6, .value=0xd8},
    };
    const struct CPU_State final_cpu = {.pc=0x5ef7, .a=0x80, .x=0xa2, .y=0x25, .sp=0xf3, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d8, .value=0xc7}, {.addr=0x5ef5, .value=0x84}, {.addr=0x5ef6, .value=0xd8},
    };
    const struct BusEvent events[] = {
        {.addr=0x5ef5, .value=0x84, .type=IO_READ},
        {.addr=0x5ef6, .value=0xd8, .type=IO_READ},
        {.addr=0x01d8, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0318) {
    const struct CPU_State initial_cpu = {.pc=0xfb4d, .a=0x4a, .x=0x21, .y=0x8e, .sp=0x6a, .status=0x28};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0145, .value=0xce}, {.addr=0xfb4d, .value=0x84}, {.addr=0xfb4e, .value=0x45},
    };
    const struct CPU_State final_cpu = {.pc=0xfb4f, .a=0x18, .x=0x21, .y=0x8e, .sp=0x6a, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x0145, .value=0xce}, {.addr=0xfb4d, .value=0x84}, {.addr=0xfb4e, .value=0x45},
    };
    const struct BusEvent events[] = {
        {.addr=0xfb4d, .value=0x84, .type=IO_READ},
        {.addr=0xfb4e, .value=0x45, .type=IO_READ},
        {.addr=0x0145, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0319) {
    const struct CPU_State initial_cpu = {.pc=0x12f9, .a=0x1b, .x=0x89, .y=0xb4, .sp=0xdc, .status=0xfd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b4, .value=0xbb}, {.addr=0x12f9, .value=0x84}, {.addr=0x12fa, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0x12fb, .a=0xd7, .x=0x89, .y=0xb4, .sp=0xdc, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b4, .value=0xbb}, {.addr=0x12f9, .value=0x84}, {.addr=0x12fa, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0x12f9, .value=0x84, .type=IO_READ},
        {.addr=0x12fa, .value=0xb4, .type=IO_READ},
        {.addr=0x01b4, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_031A) {
    const struct CPU_State initial_cpu = {.pc=0x4a3c, .a=0xc3, .x=0xb4, .y=0xc6, .sp=0xb0, .status=0xeb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c0, .value=0x5a}, {.addr=0x4a3c, .value=0x84}, {.addr=0x4a3d, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0x4a3e, .a=0x1e, .x=0xb4, .y=0xc6, .sp=0xb0, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c0, .value=0x5a}, {.addr=0x4a3c, .value=0x84}, {.addr=0x4a3d, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0x4a3c, .value=0x84, .type=IO_READ},
        {.addr=0x4a3d, .value=0xc0, .type=IO_READ},
        {.addr=0x01c0, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_031C) {
    const struct CPU_State initial_cpu = {.pc=0x8162, .a=0xb4, .x=0x1c, .y=0x8b, .sp=0x34, .status=0xe0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018f, .value=0x65}, {.addr=0x8162, .value=0x84}, {.addr=0x8163, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0x8164, .a=0x19, .x=0x1c, .y=0x8b, .sp=0x34, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x018f, .value=0x65}, {.addr=0x8162, .value=0x84}, {.addr=0x8163, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0x8162, .value=0x84, .type=IO_READ},
        {.addr=0x8163, .value=0x8f, .type=IO_READ},
        {.addr=0x018f, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_031D) {
    const struct CPU_State initial_cpu = {.pc=0x2733, .a=0xbe, .x=0x4b, .y=0x64, .sp=0x2c, .status=0xec};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0149, .value=0x11}, {.addr=0x2733, .value=0x84}, {.addr=0x2734, .value=0x49},
    };
    const struct CPU_State final_cpu = {.pc=0x2735, .a=0xcf, .x=0x4b, .y=0x64, .sp=0x2c, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0149, .value=0x11}, {.addr=0x2733, .value=0x84}, {.addr=0x2734, .value=0x49},
    };
    const struct BusEvent events[] = {
        {.addr=0x2733, .value=0x84, .type=IO_READ},
        {.addr=0x2734, .value=0x49, .type=IO_READ},
        {.addr=0x0149, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_031E) {
    const struct CPU_State initial_cpu = {.pc=0x1847, .a=0xe7, .x=0xfa, .y=0x3f, .sp=0xc2, .status=0xb5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01aa, .value=0x1d}, {.addr=0x1847, .value=0x84}, {.addr=0x1848, .value=0xaa},
    };
    const struct CPU_State final_cpu = {.pc=0x1849, .a=0x05, .x=0xfa, .y=0x3f, .sp=0xc2, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01aa, .value=0x1d}, {.addr=0x1847, .value=0x84}, {.addr=0x1848, .value=0xaa},
    };
    const struct BusEvent events[] = {
        {.addr=0x1847, .value=0x84, .type=IO_READ},
        {.addr=0x1848, .value=0xaa, .type=IO_READ},
        {.addr=0x01aa, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_031F) {
    const struct CPU_State initial_cpu = {.pc=0x42f6, .a=0xf3, .x=0x52, .y=0xbe, .sp=0x2f, .status=0x1e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008c, .value=0xf2}, {.addr=0x42f6, .value=0x84}, {.addr=0x42f7, .value=0x8c},
    };
    const struct CPU_State final_cpu = {.pc=0x42f8, .a=0xe5, .x=0x52, .y=0xbe, .sp=0x2f, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x008c, .value=0xf2}, {.addr=0x42f6, .value=0x84}, {.addr=0x42f7, .value=0x8c},
    };
    const struct BusEvent events[] = {
        {.addr=0x42f6, .value=0x84, .type=IO_READ},
        {.addr=0x42f7, .value=0x8c, .type=IO_READ},
        {.addr=0x008c, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0320) {
    const struct CPU_State initial_cpu = {.pc=0x2d4a, .a=0xa0, .x=0x9f, .y=0x5c, .sp=0x5a, .status=0x5b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007f, .value=0x4a}, {.addr=0x2d4a, .value=0x84}, {.addr=0x2d4b, .value=0x7f},
    };
    const struct CPU_State final_cpu = {.pc=0x2d4c, .a=0xeb, .x=0x9f, .y=0x5c, .sp=0x5a, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x007f, .value=0x4a}, {.addr=0x2d4a, .value=0x84}, {.addr=0x2d4b, .value=0x7f},
    };
    const struct BusEvent events[] = {
        {.addr=0x2d4a, .value=0x84, .type=IO_READ},
        {.addr=0x2d4b, .value=0x7f, .type=IO_READ},
        {.addr=0x007f, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0321) {
    const struct CPU_State initial_cpu = {.pc=0xef8d, .a=0x97, .x=0x98, .y=0x0e, .sp=0xae, .status=0x93};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0012, .value=0x67}, {.addr=0xef8d, .value=0x84}, {.addr=0xef8e, .value=0x12},
    };
    const struct CPU_State final_cpu = {.pc=0xef8f, .a=0xff, .x=0x98, .y=0x0e, .sp=0xae, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x0012, .value=0x67}, {.addr=0xef8d, .value=0x84}, {.addr=0xef8e, .value=0x12},
    };
    const struct BusEvent events[] = {
        {.addr=0xef8d, .value=0x84, .type=IO_READ},
        {.addr=0xef8e, .value=0x12, .type=IO_READ},
        {.addr=0x0012, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0322) {
    const struct CPU_State initial_cpu = {.pc=0x0a35, .a=0xbb, .x=0x26, .y=0x11, .sp=0x28, .status=0x3f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01af, .value=0xf9}, {.addr=0x0a35, .value=0x84}, {.addr=0x0a36, .value=0xaf},
    };
    const struct CPU_State final_cpu = {.pc=0x0a37, .a=0xb5, .x=0x26, .y=0x11, .sp=0x28, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01af, .value=0xf9}, {.addr=0x0a35, .value=0x84}, {.addr=0x0a36, .value=0xaf},
    };
    const struct BusEvent events[] = {
        {.addr=0x0a35, .value=0x84, .type=IO_READ},
        {.addr=0x0a36, .value=0xaf, .type=IO_READ},
        {.addr=0x01af, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0323) {
    const struct CPU_State initial_cpu = {.pc=0xf19b, .a=0x16, .x=0xb1, .y=0xd4, .sp=0x13, .status=0x0a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00df, .value=0x3d}, {.addr=0xf19b, .value=0x84}, {.addr=0xf19c, .value=0xdf},
    };
    const struct CPU_State final_cpu = {.pc=0xf19d, .a=0x53, .x=0xb1, .y=0xd4, .sp=0x13, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x00df, .value=0x3d}, {.addr=0xf19b, .value=0x84}, {.addr=0xf19c, .value=0xdf},
    };
    const struct BusEvent events[] = {
        {.addr=0xf19b, .value=0x84, .type=IO_READ},
        {.addr=0xf19c, .value=0xdf, .type=IO_READ},
        {.addr=0x00df, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0324) {
    const struct CPU_State initial_cpu = {.pc=0xcc03, .a=0x18, .x=0x1e, .y=0x98, .sp=0x1f, .status=0x21};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010a, .value=0xc2}, {.addr=0xcc03, .value=0x84}, {.addr=0xcc04, .value=0x0a},
    };
    const struct CPU_State final_cpu = {.pc=0xcc05, .a=0xdb, .x=0x1e, .y=0x98, .sp=0x1f, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x010a, .value=0xc2}, {.addr=0xcc03, .value=0x84}, {.addr=0xcc04, .value=0x0a},
    };
    const struct BusEvent events[] = {
        {.addr=0xcc03, .value=0x84, .type=IO_READ},
        {.addr=0xcc04, .value=0x0a, .type=IO_READ},
        {.addr=0x010a, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0325) {
    const struct CPU_State initial_cpu = {.pc=0x28a1, .a=0x34, .x=0x23, .y=0x60, .sp=0x77, .status=0x3b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ab, .value=0xe7}, {.addr=0x28a1, .value=0x84}, {.addr=0x28a2, .value=0xab},
    };
    const struct CPU_State final_cpu = {.pc=0x28a3, .a=0x1c, .x=0x23, .y=0x60, .sp=0x77, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ab, .value=0xe7}, {.addr=0x28a1, .value=0x84}, {.addr=0x28a2, .value=0xab},
    };
    const struct BusEvent events[] = {
        {.addr=0x28a1, .value=0x84, .type=IO_READ},
        {.addr=0x28a2, .value=0xab, .type=IO_READ},
        {.addr=0x01ab, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0326) {
    const struct CPU_State initial_cpu = {.pc=0x13f0, .a=0xf8, .x=0xa8, .y=0xb3, .sp=0xcf, .status=0x34};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e2, .value=0x25}, {.addr=0x13f0, .value=0x84}, {.addr=0x13f1, .value=0xe2},
    };
    const struct CPU_State final_cpu = {.pc=0x13f2, .a=0x1d, .x=0xa8, .y=0xb3, .sp=0xcf, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e2, .value=0x25}, {.addr=0x13f0, .value=0x84}, {.addr=0x13f1, .value=0xe2},
    };
    const struct BusEvent events[] = {
        {.addr=0x13f0, .value=0x84, .type=IO_READ},
        {.addr=0x13f1, .value=0xe2, .type=IO_READ},
        {.addr=0x01e2, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0327) {
    const struct CPU_State initial_cpu = {.pc=0xee76, .a=0x6b, .x=0xa7, .y=0xb1, .sp=0xd1, .status=0x4a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bf, .value=0x20}, {.addr=0xee76, .value=0x84}, {.addr=0xee77, .value=0xbf},
    };
    const struct CPU_State final_cpu = {.pc=0xee78, .a=0x8b, .x=0xa7, .y=0xb1, .sp=0xd1, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bf, .value=0x20}, {.addr=0xee76, .value=0x84}, {.addr=0xee77, .value=0xbf},
    };
    const struct BusEvent events[] = {
        {.addr=0xee76, .value=0x84, .type=IO_READ},
        {.addr=0xee77, .value=0xbf, .type=IO_READ},
        {.addr=0x00bf, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0328) {
    const struct CPU_State initial_cpu = {.pc=0x53c2, .a=0x33, .x=0x90, .y=0x57, .sp=0x00, .status=0x9e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0098, .value=0x16}, {.addr=0x53c2, .value=0x84}, {.addr=0x53c3, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0x53c4, .a=0x49, .x=0x90, .y=0x57, .sp=0x00, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x0098, .value=0x16}, {.addr=0x53c2, .value=0x84}, {.addr=0x53c3, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0x53c2, .value=0x84, .type=IO_READ},
        {.addr=0x53c3, .value=0x98, .type=IO_READ},
        {.addr=0x0098, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0329) {
    const struct CPU_State initial_cpu = {.pc=0x8471, .a=0xd0, .x=0x19, .y=0x55, .sp=0x79, .status=0x93};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cc, .value=0x08}, {.addr=0x8471, .value=0x84}, {.addr=0x8472, .value=0xcc},
    };
    const struct CPU_State final_cpu = {.pc=0x8473, .a=0xd9, .x=0x19, .y=0x55, .sp=0x79, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cc, .value=0x08}, {.addr=0x8471, .value=0x84}, {.addr=0x8472, .value=0xcc},
    };
    const struct BusEvent events[] = {
        {.addr=0x8471, .value=0x84, .type=IO_READ},
        {.addr=0x8472, .value=0xcc, .type=IO_READ},
        {.addr=0x00cc, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_032A) {
    const struct CPU_State initial_cpu = {.pc=0x2def, .a=0xed, .x=0x12, .y=0x9c, .sp=0xd6, .status=0x7b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011b, .value=0xe5}, {.addr=0x2def, .value=0x84}, {.addr=0x2df0, .value=0x1b},
    };
    const struct CPU_State final_cpu = {.pc=0x2df1, .a=0xd3, .x=0x12, .y=0x9c, .sp=0xd6, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x011b, .value=0xe5}, {.addr=0x2def, .value=0x84}, {.addr=0x2df0, .value=0x1b},
    };
    const struct BusEvent events[] = {
        {.addr=0x2def, .value=0x84, .type=IO_READ},
        {.addr=0x2df0, .value=0x1b, .type=IO_READ},
        {.addr=0x011b, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_032B) {
    const struct CPU_State initial_cpu = {.pc=0x91e7, .a=0xe3, .x=0x4f, .y=0xac, .sp=0x91, .status=0x89};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c3, .value=0x91}, {.addr=0x91e7, .value=0x84}, {.addr=0x91e8, .value=0xc3},
    };
    const struct CPU_State final_cpu = {.pc=0x91e9, .a=0x75, .x=0x4f, .y=0xac, .sp=0x91, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c3, .value=0x91}, {.addr=0x91e7, .value=0x84}, {.addr=0x91e8, .value=0xc3},
    };
    const struct BusEvent events[] = {
        {.addr=0x91e7, .value=0x84, .type=IO_READ},
        {.addr=0x91e8, .value=0xc3, .type=IO_READ},
        {.addr=0x00c3, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_032C) {
    const struct CPU_State initial_cpu = {.pc=0x6a7e, .a=0xf3, .x=0x1c, .y=0xf1, .sp=0x1c, .status=0xb3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015c, .value=0x78}, {.addr=0x6a7e, .value=0x84}, {.addr=0x6a7f, .value=0x5c},
    };
    const struct CPU_State final_cpu = {.pc=0x6a80, .a=0x6c, .x=0x1c, .y=0xf1, .sp=0x1c, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x015c, .value=0x78}, {.addr=0x6a7e, .value=0x84}, {.addr=0x6a7f, .value=0x5c},
    };
    const struct BusEvent events[] = {
        {.addr=0x6a7e, .value=0x84, .type=IO_READ},
        {.addr=0x6a7f, .value=0x5c, .type=IO_READ},
        {.addr=0x015c, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_032D) {
    const struct CPU_State initial_cpu = {.pc=0xe68e, .a=0x4d, .x=0xa3, .y=0x1f, .sp=0x42, .status=0x65};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0188, .value=0x86}, {.addr=0xe68e, .value=0x84}, {.addr=0xe68f, .value=0x88},
    };
    const struct CPU_State final_cpu = {.pc=0xe690, .a=0xd4, .x=0xa3, .y=0x1f, .sp=0x42, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0188, .value=0x86}, {.addr=0xe68e, .value=0x84}, {.addr=0xe68f, .value=0x88},
    };
    const struct BusEvent events[] = {
        {.addr=0xe68e, .value=0x84, .type=IO_READ},
        {.addr=0xe68f, .value=0x88, .type=IO_READ},
        {.addr=0x0188, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_032E) {
    const struct CPU_State initial_cpu = {.pc=0x2d26, .a=0x3f, .x=0x90, .y=0x31, .sp=0x0d, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0058, .value=0x8a}, {.addr=0x2d26, .value=0x84}, {.addr=0x2d27, .value=0x58},
    };
    const struct CPU_State final_cpu = {.pc=0x2d28, .a=0xc9, .x=0x90, .y=0x31, .sp=0x0d, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0058, .value=0x8a}, {.addr=0x2d26, .value=0x84}, {.addr=0x2d27, .value=0x58},
    };
    const struct BusEvent events[] = {
        {.addr=0x2d26, .value=0x84, .type=IO_READ},
        {.addr=0x2d27, .value=0x58, .type=IO_READ},
        {.addr=0x0058, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_032F) {
    const struct CPU_State initial_cpu = {.pc=0xa30d, .a=0x79, .x=0xb2, .y=0xe0, .sp=0x69, .status=0x99};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0090, .value=0x0e}, {.addr=0xa30d, .value=0x84}, {.addr=0xa30e, .value=0x90},
    };
    const struct CPU_State final_cpu = {.pc=0xa30f, .a=0x88, .x=0xb2, .y=0xe0, .sp=0x69, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0090, .value=0x0e}, {.addr=0xa30d, .value=0x84}, {.addr=0xa30e, .value=0x90},
    };
    const struct BusEvent events[] = {
        {.addr=0xa30d, .value=0x84, .type=IO_READ},
        {.addr=0xa30e, .value=0x90, .type=IO_READ},
        {.addr=0x0090, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0330) {
    const struct CPU_State initial_cpu = {.pc=0xad93, .a=0x1a, .x=0xef, .y=0xae, .sp=0xd5, .status=0x7e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c8, .value=0x10}, {.addr=0xad93, .value=0x84}, {.addr=0xad94, .value=0xc8},
    };
    const struct CPU_State final_cpu = {.pc=0xad95, .a=0x2a, .x=0xef, .y=0xae, .sp=0xd5, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c8, .value=0x10}, {.addr=0xad93, .value=0x84}, {.addr=0xad94, .value=0xc8},
    };
    const struct BusEvent events[] = {
        {.addr=0xad93, .value=0x84, .type=IO_READ},
        {.addr=0xad94, .value=0xc8, .type=IO_READ},
        {.addr=0x01c8, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0331) {
    const struct CPU_State initial_cpu = {.pc=0x8427, .a=0x0a, .x=0xff, .y=0x69, .sp=0x7b, .status=0xc5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d7, .value=0x78}, {.addr=0x8427, .value=0x84}, {.addr=0x8428, .value=0xd7},
    };
    const struct CPU_State final_cpu = {.pc=0x8429, .a=0x83, .x=0xff, .y=0x69, .sp=0x7b, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d7, .value=0x78}, {.addr=0x8427, .value=0x84}, {.addr=0x8428, .value=0xd7},
    };
    const struct BusEvent events[] = {
        {.addr=0x8427, .value=0x84, .type=IO_READ},
        {.addr=0x8428, .value=0xd7, .type=IO_READ},
        {.addr=0x00d7, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0332) {
    const struct CPU_State initial_cpu = {.pc=0x20e6, .a=0x4b, .x=0xa5, .y=0xdc, .sp=0x8b, .status=0x16};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006c, .value=0xdc}, {.addr=0x20e6, .value=0x84}, {.addr=0x20e7, .value=0x6c},
    };
    const struct CPU_State final_cpu = {.pc=0x20e8, .a=0x27, .x=0xa5, .y=0xdc, .sp=0x8b, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x006c, .value=0xdc}, {.addr=0x20e6, .value=0x84}, {.addr=0x20e7, .value=0x6c},
    };
    const struct BusEvent events[] = {
        {.addr=0x20e6, .value=0x84, .type=IO_READ},
        {.addr=0x20e7, .value=0x6c, .type=IO_READ},
        {.addr=0x006c, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0333) {
    const struct CPU_State initial_cpu = {.pc=0x9db6, .a=0xf3, .x=0x00, .y=0x96, .sp=0xa3, .status=0xf1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011b, .value=0x8e}, {.addr=0x9db6, .value=0x84}, {.addr=0x9db7, .value=0x1b},
    };
    const struct CPU_State final_cpu = {.pc=0x9db8, .a=0x82, .x=0x00, .y=0x96, .sp=0xa3, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x011b, .value=0x8e}, {.addr=0x9db6, .value=0x84}, {.addr=0x9db7, .value=0x1b},
    };
    const struct BusEvent events[] = {
        {.addr=0x9db6, .value=0x84, .type=IO_READ},
        {.addr=0x9db7, .value=0x1b, .type=IO_READ},
        {.addr=0x011b, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0334) {
    const struct CPU_State initial_cpu = {.pc=0x7412, .a=0x94, .x=0x46, .y=0xff, .sp=0x3b, .status=0x42};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0011, .value=0x8e}, {.addr=0x7412, .value=0x84}, {.addr=0x7413, .value=0x11},
    };
    const struct CPU_State final_cpu = {.pc=0x7414, .a=0x22, .x=0x46, .y=0xff, .sp=0x3b, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x0011, .value=0x8e}, {.addr=0x7412, .value=0x84}, {.addr=0x7413, .value=0x11},
    };
    const struct BusEvent events[] = {
        {.addr=0x7412, .value=0x84, .type=IO_READ},
        {.addr=0x7413, .value=0x11, .type=IO_READ},
        {.addr=0x0011, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0335) {
    const struct CPU_State initial_cpu = {.pc=0x4f84, .a=0xe9, .x=0xa0, .y=0x09, .sp=0xfb, .status=0xe6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0197, .value=0x53}, {.addr=0x4f84, .value=0x84}, {.addr=0x4f85, .value=0x97},
    };
    const struct CPU_State final_cpu = {.pc=0x4f86, .a=0x3c, .x=0xa0, .y=0x09, .sp=0xfb, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x0197, .value=0x53}, {.addr=0x4f84, .value=0x84}, {.addr=0x4f85, .value=0x97},
    };
    const struct BusEvent events[] = {
        {.addr=0x4f84, .value=0x84, .type=IO_READ},
        {.addr=0x4f85, .value=0x97, .type=IO_READ},
        {.addr=0x0197, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0336) {
    const struct CPU_State initial_cpu = {.pc=0x3605, .a=0x96, .x=0x3b, .y=0x28, .sp=0x73, .status=0x1a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009d, .value=0xf2}, {.addr=0x3605, .value=0x84}, {.addr=0x3606, .value=0x9d},
    };
    const struct CPU_State final_cpu = {.pc=0x3607, .a=0x88, .x=0x3b, .y=0x28, .sp=0x73, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x009d, .value=0xf2}, {.addr=0x3605, .value=0x84}, {.addr=0x3606, .value=0x9d},
    };
    const struct BusEvent events[] = {
        {.addr=0x3605, .value=0x84, .type=IO_READ},
        {.addr=0x3606, .value=0x9d, .type=IO_READ},
        {.addr=0x009d, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0337) {
    const struct CPU_State initial_cpu = {.pc=0x0aa3, .a=0x38, .x=0x0b, .y=0xa9, .sp=0xd4, .status=0xf4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01dc, .value=0x17}, {.addr=0x0aa3, .value=0x84}, {.addr=0x0aa4, .value=0xdc},
    };
    const struct CPU_State final_cpu = {.pc=0x0aa5, .a=0x4f, .x=0x0b, .y=0xa9, .sp=0xd4, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x01dc, .value=0x17}, {.addr=0x0aa3, .value=0x84}, {.addr=0x0aa4, .value=0xdc},
    };
    const struct BusEvent events[] = {
        {.addr=0x0aa3, .value=0x84, .type=IO_READ},
        {.addr=0x0aa4, .value=0xdc, .type=IO_READ},
        {.addr=0x01dc, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0338) {
    const struct CPU_State initial_cpu = {.pc=0x73b4, .a=0x3e, .x=0x31, .y=0x5b, .sp=0x6b, .status=0xe3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019a, .value=0xff}, {.addr=0x73b4, .value=0x84}, {.addr=0x73b5, .value=0x9a},
    };
    const struct CPU_State final_cpu = {.pc=0x73b6, .a=0x3e, .x=0x31, .y=0x5b, .sp=0x6b, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x019a, .value=0xff}, {.addr=0x73b4, .value=0x84}, {.addr=0x73b5, .value=0x9a},
    };
    const struct BusEvent events[] = {
        {.addr=0x73b4, .value=0x84, .type=IO_READ},
        {.addr=0x73b5, .value=0x9a, .type=IO_READ},
        {.addr=0x019a, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0339) {
    const struct CPU_State initial_cpu = {.pc=0xdca8, .a=0x49, .x=0x17, .y=0x21, .sp=0xa2, .status=0x53};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b7, .value=0x19}, {.addr=0xdca8, .value=0x84}, {.addr=0xdca9, .value=0xb7},
    };
    const struct CPU_State final_cpu = {.pc=0xdcaa, .a=0x63, .x=0x17, .y=0x21, .sp=0xa2, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b7, .value=0x19}, {.addr=0xdca8, .value=0x84}, {.addr=0xdca9, .value=0xb7},
    };
    const struct BusEvent events[] = {
        {.addr=0xdca8, .value=0x84, .type=IO_READ},
        {.addr=0xdca9, .value=0xb7, .type=IO_READ},
        {.addr=0x00b7, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_033A) {
    const struct CPU_State initial_cpu = {.pc=0xe147, .a=0x14, .x=0xa0, .y=0x94, .sp=0x13, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e8, .value=0xa7}, {.addr=0xe147, .value=0x84}, {.addr=0xe148, .value=0xe8},
    };
    const struct CPU_State final_cpu = {.pc=0xe149, .a=0xbc, .x=0xa0, .y=0x94, .sp=0x13, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e8, .value=0xa7}, {.addr=0xe147, .value=0x84}, {.addr=0xe148, .value=0xe8},
    };
    const struct BusEvent events[] = {
        {.addr=0xe147, .value=0x84, .type=IO_READ},
        {.addr=0xe148, .value=0xe8, .type=IO_READ},
        {.addr=0x01e8, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_033B) {
    const struct CPU_State initial_cpu = {.pc=0x3f6f, .a=0x63, .x=0xde, .y=0x69, .sp=0x32, .status=0x55};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b0, .value=0x7a}, {.addr=0x3f6f, .value=0x84}, {.addr=0x3f70, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0x3f71, .a=0xde, .x=0xde, .y=0x69, .sp=0x32, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b0, .value=0x7a}, {.addr=0x3f6f, .value=0x84}, {.addr=0x3f70, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0x3f6f, .value=0x84, .type=IO_READ},
        {.addr=0x3f70, .value=0xb0, .type=IO_READ},
        {.addr=0x00b0, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_033C) {
    const struct CPU_State initial_cpu = {.pc=0xa9f0, .a=0x9b, .x=0x91, .y=0x10, .sp=0x39, .status=0xb5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d6, .value=0x05}, {.addr=0xa9f0, .value=0x84}, {.addr=0xa9f1, .value=0xd6},
    };
    const struct CPU_State final_cpu = {.pc=0xa9f2, .a=0xa1, .x=0x91, .y=0x10, .sp=0x39, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d6, .value=0x05}, {.addr=0xa9f0, .value=0x84}, {.addr=0xa9f1, .value=0xd6},
    };
    const struct BusEvent events[] = {
        {.addr=0xa9f0, .value=0x84, .type=IO_READ},
        {.addr=0xa9f1, .value=0xd6, .type=IO_READ},
        {.addr=0x01d6, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_033D) {
    const struct CPU_State initial_cpu = {.pc=0x9208, .a=0xd6, .x=0x31, .y=0xfd, .sp=0x35, .status=0x8f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0076, .value=0xeb}, {.addr=0x9208, .value=0x84}, {.addr=0x9209, .value=0x76},
    };
    const struct CPU_State final_cpu = {.pc=0x920a, .a=0xc2, .x=0x31, .y=0xfd, .sp=0x35, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0076, .value=0xeb}, {.addr=0x9208, .value=0x84}, {.addr=0x9209, .value=0x76},
    };
    const struct BusEvent events[] = {
        {.addr=0x9208, .value=0x84, .type=IO_READ},
        {.addr=0x9209, .value=0x76, .type=IO_READ},
        {.addr=0x0076, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_033E) {
    const struct CPU_State initial_cpu = {.pc=0x6f0b, .a=0xae, .x=0x25, .y=0xc8, .sp=0xc5, .status=0x6c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0113, .value=0x7c}, {.addr=0x6f0b, .value=0x84}, {.addr=0x6f0c, .value=0x13},
    };
    const struct CPU_State final_cpu = {.pc=0x6f0d, .a=0x2a, .x=0x25, .y=0xc8, .sp=0xc5, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0113, .value=0x7c}, {.addr=0x6f0b, .value=0x84}, {.addr=0x6f0c, .value=0x13},
    };
    const struct BusEvent events[] = {
        {.addr=0x6f0b, .value=0x84, .type=IO_READ},
        {.addr=0x6f0c, .value=0x13, .type=IO_READ},
        {.addr=0x0113, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_033F) {
    const struct CPU_State initial_cpu = {.pc=0x11d9, .a=0x06, .x=0x83, .y=0x32, .sp=0xdd, .status=0xb7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0108, .value=0x17}, {.addr=0x11d9, .value=0x84}, {.addr=0x11da, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0x11db, .a=0x1e, .x=0x83, .y=0x32, .sp=0xdd, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x0108, .value=0x17}, {.addr=0x11d9, .value=0x84}, {.addr=0x11da, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0x11d9, .value=0x84, .type=IO_READ},
        {.addr=0x11da, .value=0x08, .type=IO_READ},
        {.addr=0x0108, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0340) {
    const struct CPU_State initial_cpu = {.pc=0xc8cd, .a=0xb8, .x=0x48, .y=0xcd, .sp=0xcd, .status=0xde};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0069, .value=0x15}, {.addr=0xc8cd, .value=0x84}, {.addr=0xc8ce, .value=0x69},
    };
    const struct CPU_State final_cpu = {.pc=0xc8cf, .a=0xcd, .x=0x48, .y=0xcd, .sp=0xcd, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0069, .value=0x15}, {.addr=0xc8cd, .value=0x84}, {.addr=0xc8ce, .value=0x69},
    };
    const struct BusEvent events[] = {
        {.addr=0xc8cd, .value=0x84, .type=IO_READ},
        {.addr=0xc8ce, .value=0x69, .type=IO_READ},
        {.addr=0x0069, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0341) {
    const struct CPU_State initial_cpu = {.pc=0xe536, .a=0xcc, .x=0x99, .y=0x17, .sp=0x41, .status=0x4d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c0, .value=0xf9}, {.addr=0xe536, .value=0x84}, {.addr=0xe537, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0xe538, .a=0xc6, .x=0x99, .y=0x17, .sp=0x41, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c0, .value=0xf9}, {.addr=0xe536, .value=0x84}, {.addr=0xe537, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0xe536, .value=0x84, .type=IO_READ},
        {.addr=0xe537, .value=0xc0, .type=IO_READ},
        {.addr=0x00c0, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0342) {
    const struct CPU_State initial_cpu = {.pc=0x3036, .a=0x65, .x=0xe8, .y=0xf6, .sp=0x16, .status=0x2d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b1, .value=0x84}, {.addr=0x3036, .value=0x84}, {.addr=0x3037, .value=0xb1},
    };
    const struct CPU_State final_cpu = {.pc=0x3038, .a=0xea, .x=0xe8, .y=0xf6, .sp=0x16, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b1, .value=0x84}, {.addr=0x3036, .value=0x84}, {.addr=0x3037, .value=0xb1},
    };
    const struct BusEvent events[] = {
        {.addr=0x3036, .value=0x84, .type=IO_READ},
        {.addr=0x3037, .value=0xb1, .type=IO_READ},
        {.addr=0x01b1, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0343) {
    const struct CPU_State initial_cpu = {.pc=0xdc30, .a=0xe5, .x=0xcb, .y=0xba, .sp=0x6d, .status=0x56};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b8, .value=0x5c}, {.addr=0xdc30, .value=0x84}, {.addr=0xdc31, .value=0xb8},
    };
    const struct CPU_State final_cpu = {.pc=0xdc32, .a=0x41, .x=0xcb, .y=0xba, .sp=0x6d, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b8, .value=0x5c}, {.addr=0xdc30, .value=0x84}, {.addr=0xdc31, .value=0xb8},
    };
    const struct BusEvent events[] = {
        {.addr=0xdc30, .value=0x84, .type=IO_READ},
        {.addr=0xdc31, .value=0xb8, .type=IO_READ},
        {.addr=0x00b8, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0344) {
    const struct CPU_State initial_cpu = {.pc=0xf75c, .a=0xf1, .x=0x1e, .y=0xb6, .sp=0x73, .status=0x63};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0106, .value=0x8d}, {.addr=0xf75c, .value=0x84}, {.addr=0xf75d, .value=0x06},
    };
    const struct CPU_State final_cpu = {.pc=0xf75e, .a=0x7f, .x=0x1e, .y=0xb6, .sp=0x73, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x0106, .value=0x8d}, {.addr=0xf75c, .value=0x84}, {.addr=0xf75d, .value=0x06},
    };
    const struct BusEvent events[] = {
        {.addr=0xf75c, .value=0x84, .type=IO_READ},
        {.addr=0xf75d, .value=0x06, .type=IO_READ},
        {.addr=0x0106, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0345) {
    const struct CPU_State initial_cpu = {.pc=0x7c42, .a=0xce, .x=0x93, .y=0x27, .sp=0xfb, .status=0x29};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c7, .value=0xa2}, {.addr=0x7c42, .value=0x84}, {.addr=0x7c43, .value=0xc7},
    };
    const struct CPU_State final_cpu = {.pc=0x7c44, .a=0x71, .x=0x93, .y=0x27, .sp=0xfb, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c7, .value=0xa2}, {.addr=0x7c42, .value=0x84}, {.addr=0x7c43, .value=0xc7},
    };
    const struct BusEvent events[] = {
        {.addr=0x7c42, .value=0x84, .type=IO_READ},
        {.addr=0x7c43, .value=0xc7, .type=IO_READ},
        {.addr=0x01c7, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0346) {
    const struct CPU_State initial_cpu = {.pc=0xbea8, .a=0x5d, .x=0xf5, .y=0x7e, .sp=0x17, .status=0x35};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01df, .value=0x20}, {.addr=0xbea8, .value=0x84}, {.addr=0xbea9, .value=0xdf},
    };
    const struct CPU_State final_cpu = {.pc=0xbeaa, .a=0x7e, .x=0xf5, .y=0x7e, .sp=0x17, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x01df, .value=0x20}, {.addr=0xbea8, .value=0x84}, {.addr=0xbea9, .value=0xdf},
    };
    const struct BusEvent events[] = {
        {.addr=0xbea8, .value=0x84, .type=IO_READ},
        {.addr=0xbea9, .value=0xdf, .type=IO_READ},
        {.addr=0x01df, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0347) {
    const struct CPU_State initial_cpu = {.pc=0x4ac4, .a=0x53, .x=0xb3, .y=0x65, .sp=0x18, .status=0x19};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007f, .value=0x2d}, {.addr=0x4ac4, .value=0x84}, {.addr=0x4ac5, .value=0x7f},
    };
    const struct CPU_State final_cpu = {.pc=0x4ac6, .a=0x81, .x=0xb3, .y=0x65, .sp=0x18, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x007f, .value=0x2d}, {.addr=0x4ac4, .value=0x84}, {.addr=0x4ac5, .value=0x7f},
    };
    const struct BusEvent events[] = {
        {.addr=0x4ac4, .value=0x84, .type=IO_READ},
        {.addr=0x4ac5, .value=0x7f, .type=IO_READ},
        {.addr=0x007f, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0348) {
    const struct CPU_State initial_cpu = {.pc=0x5ba1, .a=0xbd, .x=0xb1, .y=0xb5, .sp=0x26, .status=0xd6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006a, .value=0xc6}, {.addr=0x5ba1, .value=0x84}, {.addr=0x5ba2, .value=0x6a},
    };
    const struct CPU_State final_cpu = {.pc=0x5ba3, .a=0x83, .x=0xb1, .y=0xb5, .sp=0x26, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x006a, .value=0xc6}, {.addr=0x5ba1, .value=0x84}, {.addr=0x5ba2, .value=0x6a},
    };
    const struct BusEvent events[] = {
        {.addr=0x5ba1, .value=0x84, .type=IO_READ},
        {.addr=0x5ba2, .value=0x6a, .type=IO_READ},
        {.addr=0x006a, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0349) {
    const struct CPU_State initial_cpu = {.pc=0xf17f, .a=0xc9, .x=0xa9, .y=0x72, .sp=0x86, .status=0x9a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0005, .value=0xf4}, {.addr=0xf17f, .value=0x84}, {.addr=0xf180, .value=0x05},
    };
    const struct CPU_State final_cpu = {.pc=0xf181, .a=0xbd, .x=0xa9, .y=0x72, .sp=0x86, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x0005, .value=0xf4}, {.addr=0xf17f, .value=0x84}, {.addr=0xf180, .value=0x05},
    };
    const struct BusEvent events[] = {
        {.addr=0xf17f, .value=0x84, .type=IO_READ},
        {.addr=0xf180, .value=0x05, .type=IO_READ},
        {.addr=0x0005, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_034A) {
    const struct CPU_State initial_cpu = {.pc=0x1d16, .a=0x0b, .x=0xe0, .y=0x4b, .sp=0xc2, .status=0xc9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0011, .value=0x75}, {.addr=0x1d16, .value=0x84}, {.addr=0x1d17, .value=0x11},
    };
    const struct CPU_State final_cpu = {.pc=0x1d18, .a=0x81, .x=0xe0, .y=0x4b, .sp=0xc2, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0011, .value=0x75}, {.addr=0x1d16, .value=0x84}, {.addr=0x1d17, .value=0x11},
    };
    const struct BusEvent events[] = {
        {.addr=0x1d16, .value=0x84, .type=IO_READ},
        {.addr=0x1d17, .value=0x11, .type=IO_READ},
        {.addr=0x0011, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_034B) {
    const struct CPU_State initial_cpu = {.pc=0xb4ca, .a=0xcd, .x=0xe1, .y=0xbc, .sp=0x41, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019f, .value=0x8c}, {.addr=0xb4ca, .value=0x84}, {.addr=0xb4cb, .value=0x9f},
    };
    const struct CPU_State final_cpu = {.pc=0xb4cc, .a=0x59, .x=0xe1, .y=0xbc, .sp=0x41, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x019f, .value=0x8c}, {.addr=0xb4ca, .value=0x84}, {.addr=0xb4cb, .value=0x9f},
    };
    const struct BusEvent events[] = {
        {.addr=0xb4ca, .value=0x84, .type=IO_READ},
        {.addr=0xb4cb, .value=0x9f, .type=IO_READ},
        {.addr=0x019f, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_034C) {
    const struct CPU_State initial_cpu = {.pc=0x1a34, .a=0x2e, .x=0x23, .y=0xcf, .sp=0x53, .status=0xb5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01aa, .value=0x49}, {.addr=0x1a34, .value=0x84}, {.addr=0x1a35, .value=0xaa},
    };
    const struct CPU_State final_cpu = {.pc=0x1a36, .a=0x78, .x=0x23, .y=0xcf, .sp=0x53, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01aa, .value=0x49}, {.addr=0x1a34, .value=0x84}, {.addr=0x1a35, .value=0xaa},
    };
    const struct BusEvent events[] = {
        {.addr=0x1a34, .value=0x84, .type=IO_READ},
        {.addr=0x1a35, .value=0xaa, .type=IO_READ},
        {.addr=0x01aa, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_034D) {
    const struct CPU_State initial_cpu = {.pc=0xd850, .a=0xa0, .x=0x4e, .y=0xbc, .sp=0xa2, .status=0xbc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0112, .value=0x7c}, {.addr=0xd850, .value=0x84}, {.addr=0xd851, .value=0x12},
    };
    const struct CPU_State final_cpu = {.pc=0xd852, .a=0x1c, .x=0x4e, .y=0xbc, .sp=0xa2, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x0112, .value=0x7c}, {.addr=0xd850, .value=0x84}, {.addr=0xd851, .value=0x12},
    };
    const struct BusEvent events[] = {
        {.addr=0xd850, .value=0x84, .type=IO_READ},
        {.addr=0xd851, .value=0x12, .type=IO_READ},
        {.addr=0x0112, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_034E) {
    const struct CPU_State initial_cpu = {.pc=0x9afa, .a=0xa1, .x=0xbf, .y=0x98, .sp=0xec, .status=0x56};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bc, .value=0xd8}, {.addr=0x9afa, .value=0x84}, {.addr=0x9afb, .value=0xbc},
    };
    const struct CPU_State final_cpu = {.pc=0x9afc, .a=0x79, .x=0xbf, .y=0x98, .sp=0xec, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bc, .value=0xd8}, {.addr=0x9afa, .value=0x84}, {.addr=0x9afb, .value=0xbc},
    };
    const struct BusEvent events[] = {
        {.addr=0x9afa, .value=0x84, .type=IO_READ},
        {.addr=0x9afb, .value=0xbc, .type=IO_READ},
        {.addr=0x00bc, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_034F) {
    const struct CPU_State initial_cpu = {.pc=0x8f85, .a=0xfc, .x=0x03, .y=0x1f, .sp=0xf6, .status=0xa5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0108, .value=0xf0}, {.addr=0x8f85, .value=0x84}, {.addr=0x8f86, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0x8f87, .a=0xed, .x=0x03, .y=0x1f, .sp=0xf6, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0108, .value=0xf0}, {.addr=0x8f85, .value=0x84}, {.addr=0x8f86, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0x8f85, .value=0x84, .type=IO_READ},
        {.addr=0x8f86, .value=0x08, .type=IO_READ},
        {.addr=0x0108, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0350) {
    const struct CPU_State initial_cpu = {.pc=0xf5a5, .a=0xdb, .x=0x91, .y=0xf5, .sp=0x3a, .status=0xdf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0009, .value=0x01}, {.addr=0xf5a5, .value=0x84}, {.addr=0xf5a6, .value=0x09},
    };
    const struct CPU_State final_cpu = {.pc=0xf5a7, .a=0xdd, .x=0x91, .y=0xf5, .sp=0x3a, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0009, .value=0x01}, {.addr=0xf5a5, .value=0x84}, {.addr=0xf5a6, .value=0x09},
    };
    const struct BusEvent events[] = {
        {.addr=0xf5a5, .value=0x84, .type=IO_READ},
        {.addr=0xf5a6, .value=0x09, .type=IO_READ},
        {.addr=0x0009, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0351) {
    const struct CPU_State initial_cpu = {.pc=0xbdb3, .a=0xbb, .x=0x79, .y=0xc7, .sp=0x6c, .status=0x3e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0101, .value=0xb0}, {.addr=0xbdb3, .value=0x84}, {.addr=0xbdb4, .value=0x01},
    };
    const struct CPU_State final_cpu = {.pc=0xbdb5, .a=0x6b, .x=0x79, .y=0xc7, .sp=0x6c, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x0101, .value=0xb0}, {.addr=0xbdb3, .value=0x84}, {.addr=0xbdb4, .value=0x01},
    };
    const struct BusEvent events[] = {
        {.addr=0xbdb3, .value=0x84, .type=IO_READ},
        {.addr=0xbdb4, .value=0x01, .type=IO_READ},
        {.addr=0x0101, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0352) {
    const struct CPU_State initial_cpu = {.pc=0x461a, .a=0xd2, .x=0xbf, .y=0x61, .sp=0xf0, .status=0x1a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009a, .value=0x9f}, {.addr=0x461a, .value=0x84}, {.addr=0x461b, .value=0x9a},
    };
    const struct CPU_State final_cpu = {.pc=0x461c, .a=0x71, .x=0xbf, .y=0x61, .sp=0xf0, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x009a, .value=0x9f}, {.addr=0x461a, .value=0x84}, {.addr=0x461b, .value=0x9a},
    };
    const struct BusEvent events[] = {
        {.addr=0x461a, .value=0x84, .type=IO_READ},
        {.addr=0x461b, .value=0x9a, .type=IO_READ},
        {.addr=0x009a, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0353) {
    const struct CPU_State initial_cpu = {.pc=0x98b5, .a=0xcd, .x=0xc6, .y=0x5a, .sp=0xec, .status=0xb4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013a, .value=0x30}, {.addr=0x98b5, .value=0x84}, {.addr=0x98b6, .value=0x3a},
    };
    const struct CPU_State final_cpu = {.pc=0x98b7, .a=0xfd, .x=0xc6, .y=0x5a, .sp=0xec, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x013a, .value=0x30}, {.addr=0x98b5, .value=0x84}, {.addr=0x98b6, .value=0x3a},
    };
    const struct BusEvent events[] = {
        {.addr=0x98b5, .value=0x84, .type=IO_READ},
        {.addr=0x98b6, .value=0x3a, .type=IO_READ},
        {.addr=0x013a, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0354) {
    const struct CPU_State initial_cpu = {.pc=0x711e, .a=0x5f, .x=0xb7, .y=0x88, .sp=0x47, .status=0x19};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009e, .value=0x81}, {.addr=0x711e, .value=0x84}, {.addr=0x711f, .value=0x9e},
    };
    const struct CPU_State final_cpu = {.pc=0x7120, .a=0xe1, .x=0xb7, .y=0x88, .sp=0x47, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x009e, .value=0x81}, {.addr=0x711e, .value=0x84}, {.addr=0x711f, .value=0x9e},
    };
    const struct BusEvent events[] = {
        {.addr=0x711e, .value=0x84, .type=IO_READ},
        {.addr=0x711f, .value=0x9e, .type=IO_READ},
        {.addr=0x009e, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0355) {
    const struct CPU_State initial_cpu = {.pc=0x390b, .a=0x36, .x=0x44, .y=0x0b, .sp=0x93, .status=0xe8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fd, .value=0xe4}, {.addr=0x390b, .value=0x84}, {.addr=0x390c, .value=0xfd},
    };
    const struct CPU_State final_cpu = {.pc=0x390d, .a=0x1a, .x=0x44, .y=0x0b, .sp=0x93, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fd, .value=0xe4}, {.addr=0x390b, .value=0x84}, {.addr=0x390c, .value=0xfd},
    };
    const struct BusEvent events[] = {
        {.addr=0x390b, .value=0x84, .type=IO_READ},
        {.addr=0x390c, .value=0xfd, .type=IO_READ},
        {.addr=0x01fd, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0356) {
    const struct CPU_State initial_cpu = {.pc=0x3dfe, .a=0x2b, .x=0x68, .y=0x62, .sp=0xb3, .status=0x23};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c5, .value=0xae}, {.addr=0x3dfe, .value=0x84}, {.addr=0x3dff, .value=0xc5},
    };
    const struct CPU_State final_cpu = {.pc=0x3e00, .a=0xda, .x=0x68, .y=0x62, .sp=0xb3, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c5, .value=0xae}, {.addr=0x3dfe, .value=0x84}, {.addr=0x3dff, .value=0xc5},
    };
    const struct BusEvent events[] = {
        {.addr=0x3dfe, .value=0x84, .type=IO_READ},
        {.addr=0x3dff, .value=0xc5, .type=IO_READ},
        {.addr=0x01c5, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0357) {
    const struct CPU_State initial_cpu = {.pc=0xb7a6, .a=0x1b, .x=0xa5, .y=0x8a, .sp=0x0b, .status=0x9e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0055, .value=0x75}, {.addr=0xb7a6, .value=0x84}, {.addr=0xb7a7, .value=0x55},
    };
    const struct CPU_State final_cpu = {.pc=0xb7a8, .a=0x90, .x=0xa5, .y=0x8a, .sp=0x0b, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0055, .value=0x75}, {.addr=0xb7a6, .value=0x84}, {.addr=0xb7a7, .value=0x55},
    };
    const struct BusEvent events[] = {
        {.addr=0xb7a6, .value=0x84, .type=IO_READ},
        {.addr=0xb7a7, .value=0x55, .type=IO_READ},
        {.addr=0x0055, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0358) {
    const struct CPU_State initial_cpu = {.pc=0x13b6, .a=0xeb, .x=0x03, .y=0x46, .sp=0xf6, .status=0xdb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0064, .value=0x5b}, {.addr=0x13b6, .value=0x84}, {.addr=0x13b7, .value=0x64},
    };
    const struct CPU_State final_cpu = {.pc=0x13b8, .a=0x47, .x=0x03, .y=0x46, .sp=0xf6, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x0064, .value=0x5b}, {.addr=0x13b6, .value=0x84}, {.addr=0x13b7, .value=0x64},
    };
    const struct BusEvent events[] = {
        {.addr=0x13b6, .value=0x84, .type=IO_READ},
        {.addr=0x13b7, .value=0x64, .type=IO_READ},
        {.addr=0x0064, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0359) {
    const struct CPU_State initial_cpu = {.pc=0xfbeb, .a=0x8c, .x=0x25, .y=0xad, .sp=0x4b, .status=0x34};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0114, .value=0xb4}, {.addr=0xfbeb, .value=0x84}, {.addr=0xfbec, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0xfbed, .a=0x40, .x=0x25, .y=0xad, .sp=0x4b, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0114, .value=0xb4}, {.addr=0xfbeb, .value=0x84}, {.addr=0xfbec, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0xfbeb, .value=0x84, .type=IO_READ},
        {.addr=0xfbec, .value=0x14, .type=IO_READ},
        {.addr=0x0114, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_035A) {
    const struct CPU_State initial_cpu = {.pc=0x52e5, .a=0x8a, .x=0xee, .y=0x38, .sp=0xda, .status=0x5d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002d, .value=0xbc}, {.addr=0x52e5, .value=0x84}, {.addr=0x52e6, .value=0x2d},
    };
    const struct CPU_State final_cpu = {.pc=0x52e7, .a=0x47, .x=0xee, .y=0x38, .sp=0xda, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x002d, .value=0xbc}, {.addr=0x52e5, .value=0x84}, {.addr=0x52e6, .value=0x2d},
    };
    const struct BusEvent events[] = {
        {.addr=0x52e5, .value=0x84, .type=IO_READ},
        {.addr=0x52e6, .value=0x2d, .type=IO_READ},
        {.addr=0x002d, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_035B) {
    const struct CPU_State initial_cpu = {.pc=0x26a8, .a=0xeb, .x=0xd7, .y=0x46, .sp=0xac, .status=0x66};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0129, .value=0x07}, {.addr=0x26a8, .value=0x84}, {.addr=0x26a9, .value=0x29},
    };
    const struct CPU_State final_cpu = {.pc=0x26aa, .a=0xf2, .x=0xd7, .y=0x46, .sp=0xac, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0129, .value=0x07}, {.addr=0x26a8, .value=0x84}, {.addr=0x26a9, .value=0x29},
    };
    const struct BusEvent events[] = {
        {.addr=0x26a8, .value=0x84, .type=IO_READ},
        {.addr=0x26a9, .value=0x29, .type=IO_READ},
        {.addr=0x0129, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_035C) {
    const struct CPU_State initial_cpu = {.pc=0x568c, .a=0xe3, .x=0x24, .y=0xe4, .sp=0x10, .status=0xd2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ae, .value=0x38}, {.addr=0x568c, .value=0x84}, {.addr=0x568d, .value=0xae},
    };
    const struct CPU_State final_cpu = {.pc=0x568e, .a=0x1b, .x=0x24, .y=0xe4, .sp=0x10, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ae, .value=0x38}, {.addr=0x568c, .value=0x84}, {.addr=0x568d, .value=0xae},
    };
    const struct BusEvent events[] = {
        {.addr=0x568c, .value=0x84, .type=IO_READ},
        {.addr=0x568d, .value=0xae, .type=IO_READ},
        {.addr=0x00ae, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_035D) {
    const struct CPU_State initial_cpu = {.pc=0x21d7, .a=0x8d, .x=0x6a, .y=0xdc, .sp=0xcc, .status=0x0e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0072, .value=0xbb}, {.addr=0x21d7, .value=0x84}, {.addr=0x21d8, .value=0x72},
    };
    const struct CPU_State final_cpu = {.pc=0x21d9, .a=0x48, .x=0x6a, .y=0xdc, .sp=0xcc, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0072, .value=0xbb}, {.addr=0x21d7, .value=0x84}, {.addr=0x21d8, .value=0x72},
    };
    const struct BusEvent events[] = {
        {.addr=0x21d7, .value=0x84, .type=IO_READ},
        {.addr=0x21d8, .value=0x72, .type=IO_READ},
        {.addr=0x0072, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_035E) {
    const struct CPU_State initial_cpu = {.pc=0xd65e, .a=0x38, .x=0x1b, .y=0x0e, .sp=0xd8, .status=0x5d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0097, .value=0xb6}, {.addr=0xd65e, .value=0x84}, {.addr=0xd65f, .value=0x97},
    };
    const struct CPU_State final_cpu = {.pc=0xd660, .a=0xef, .x=0x1b, .y=0x0e, .sp=0xd8, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0097, .value=0xb6}, {.addr=0xd65e, .value=0x84}, {.addr=0xd65f, .value=0x97},
    };
    const struct BusEvent events[] = {
        {.addr=0xd65e, .value=0x84, .type=IO_READ},
        {.addr=0xd65f, .value=0x97, .type=IO_READ},
        {.addr=0x0097, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_035F) {
    const struct CPU_State initial_cpu = {.pc=0xd938, .a=0x78, .x=0x94, .y=0xb1, .sp=0xe4, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002d, .value=0x90}, {.addr=0xd938, .value=0x84}, {.addr=0xd939, .value=0x2d},
    };
    const struct CPU_State final_cpu = {.pc=0xd93a, .a=0x08, .x=0x94, .y=0xb1, .sp=0xe4, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x002d, .value=0x90}, {.addr=0xd938, .value=0x84}, {.addr=0xd939, .value=0x2d},
    };
    const struct BusEvent events[] = {
        {.addr=0xd938, .value=0x84, .type=IO_READ},
        {.addr=0xd939, .value=0x2d, .type=IO_READ},
        {.addr=0x002d, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0360) {
    const struct CPU_State initial_cpu = {.pc=0x9a02, .a=0x32, .x=0xdc, .y=0xd4, .sp=0xbf, .status=0x25};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019e, .value=0xf3}, {.addr=0x9a02, .value=0x84}, {.addr=0x9a03, .value=0x9e},
    };
    const struct CPU_State final_cpu = {.pc=0x9a04, .a=0x26, .x=0xdc, .y=0xd4, .sp=0xbf, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x019e, .value=0xf3}, {.addr=0x9a02, .value=0x84}, {.addr=0x9a03, .value=0x9e},
    };
    const struct BusEvent events[] = {
        {.addr=0x9a02, .value=0x84, .type=IO_READ},
        {.addr=0x9a03, .value=0x9e, .type=IO_READ},
        {.addr=0x019e, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0361) {
    const struct CPU_State initial_cpu = {.pc=0x7210, .a=0xb6, .x=0x61, .y=0x4a, .sp=0x89, .status=0xfd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019f, .value=0xf3}, {.addr=0x7210, .value=0x84}, {.addr=0x7211, .value=0x9f},
    };
    const struct CPU_State final_cpu = {.pc=0x7212, .a=0xaa, .x=0x61, .y=0x4a, .sp=0x89, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x019f, .value=0xf3}, {.addr=0x7210, .value=0x84}, {.addr=0x7211, .value=0x9f},
    };
    const struct BusEvent events[] = {
        {.addr=0x7210, .value=0x84, .type=IO_READ},
        {.addr=0x7211, .value=0x9f, .type=IO_READ},
        {.addr=0x019f, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0362) {
    const struct CPU_State initial_cpu = {.pc=0xb22f, .a=0xa9, .x=0x0a, .y=0xfb, .sp=0xbd, .status=0x24};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011b, .value=0x0d}, {.addr=0xb22f, .value=0x84}, {.addr=0xb230, .value=0x1b},
    };
    const struct CPU_State final_cpu = {.pc=0xb231, .a=0xb6, .x=0x0a, .y=0xfb, .sp=0xbd, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x011b, .value=0x0d}, {.addr=0xb22f, .value=0x84}, {.addr=0xb230, .value=0x1b},
    };
    const struct BusEvent events[] = {
        {.addr=0xb22f, .value=0x84, .type=IO_READ},
        {.addr=0xb230, .value=0x1b, .type=IO_READ},
        {.addr=0x011b, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0364) {
    const struct CPU_State initial_cpu = {.pc=0xa80f, .a=0x60, .x=0x8a, .y=0x3a, .sp=0xd0, .status=0xb4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0100, .value=0xfc}, {.addr=0xa80f, .value=0x84}, {.addr=0xa810, .value=0x00},
    };
    const struct CPU_State final_cpu = {.pc=0xa811, .a=0x5c, .x=0x8a, .y=0x3a, .sp=0xd0, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x0100, .value=0xfc}, {.addr=0xa80f, .value=0x84}, {.addr=0xa810, .value=0x00},
    };
    const struct BusEvent events[] = {
        {.addr=0xa80f, .value=0x84, .type=IO_READ},
        {.addr=0xa810, .value=0x00, .type=IO_READ},
        {.addr=0x0100, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0365) {
    const struct CPU_State initial_cpu = {.pc=0xc254, .a=0x83, .x=0xdf, .y=0x9f, .sp=0xe9, .status=0x15};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00eb, .value=0x6a}, {.addr=0xc254, .value=0x84}, {.addr=0xc255, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0xc256, .a=0xee, .x=0xdf, .y=0x9f, .sp=0xe9, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x00eb, .value=0x6a}, {.addr=0xc254, .value=0x84}, {.addr=0xc255, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0xc254, .value=0x84, .type=IO_READ},
        {.addr=0xc255, .value=0xeb, .type=IO_READ},
        {.addr=0x00eb, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0366) {
    const struct CPU_State initial_cpu = {.pc=0xdef8, .a=0x76, .x=0xd3, .y=0xd2, .sp=0x83, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010c, .value=0x90}, {.addr=0xdef8, .value=0x84}, {.addr=0xdef9, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0xdefa, .a=0x06, .x=0xd3, .y=0xd2, .sp=0x83, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x010c, .value=0x90}, {.addr=0xdef8, .value=0x84}, {.addr=0xdef9, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0xdef8, .value=0x84, .type=IO_READ},
        {.addr=0xdef9, .value=0x0c, .type=IO_READ},
        {.addr=0x010c, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0367) {
    const struct CPU_State initial_cpu = {.pc=0x7836, .a=0x0a, .x=0x2c, .y=0xcb, .sp=0x8e, .status=0x6a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0144, .value=0xa9}, {.addr=0x7836, .value=0x84}, {.addr=0x7837, .value=0x44},
    };
    const struct CPU_State final_cpu = {.pc=0x7838, .a=0xb3, .x=0x2c, .y=0xcb, .sp=0x8e, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0144, .value=0xa9}, {.addr=0x7836, .value=0x84}, {.addr=0x7837, .value=0x44},
    };
    const struct BusEvent events[] = {
        {.addr=0x7836, .value=0x84, .type=IO_READ},
        {.addr=0x7837, .value=0x44, .type=IO_READ},
        {.addr=0x0144, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0368) {
    const struct CPU_State initial_cpu = {.pc=0x2247, .a=0xdb, .x=0x5f, .y=0x34, .sp=0x2b, .status=0xe3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015d, .value=0xb0}, {.addr=0x2247, .value=0x84}, {.addr=0x2248, .value=0x5d},
    };
    const struct CPU_State final_cpu = {.pc=0x2249, .a=0x8c, .x=0x5f, .y=0x34, .sp=0x2b, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x015d, .value=0xb0}, {.addr=0x2247, .value=0x84}, {.addr=0x2248, .value=0x5d},
    };
    const struct BusEvent events[] = {
        {.addr=0x2247, .value=0x84, .type=IO_READ},
        {.addr=0x2248, .value=0x5d, .type=IO_READ},
        {.addr=0x015d, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0369) {
    const struct CPU_State initial_cpu = {.pc=0xb3f0, .a=0xca, .x=0xc0, .y=0xa7, .sp=0x31, .status=0x38};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0130, .value=0x74}, {.addr=0xb3f0, .value=0x84}, {.addr=0xb3f1, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0xb3f2, .a=0x3e, .x=0xc0, .y=0xa7, .sp=0x31, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0130, .value=0x74}, {.addr=0xb3f0, .value=0x84}, {.addr=0xb3f1, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0xb3f0, .value=0x84, .type=IO_READ},
        {.addr=0xb3f1, .value=0x30, .type=IO_READ},
        {.addr=0x0130, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_036A) {
    const struct CPU_State initial_cpu = {.pc=0x4892, .a=0xff, .x=0x87, .y=0x58, .sp=0x77, .status=0x3d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017b, .value=0x68}, {.addr=0x4892, .value=0x84}, {.addr=0x4893, .value=0x7b},
    };
    const struct CPU_State final_cpu = {.pc=0x4894, .a=0x68, .x=0x87, .y=0x58, .sp=0x77, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x017b, .value=0x68}, {.addr=0x4892, .value=0x84}, {.addr=0x4893, .value=0x7b},
    };
    const struct BusEvent events[] = {
        {.addr=0x4892, .value=0x84, .type=IO_READ},
        {.addr=0x4893, .value=0x7b, .type=IO_READ},
        {.addr=0x017b, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_036B) {
    const struct CPU_State initial_cpu = {.pc=0xd30e, .a=0xe6, .x=0x88, .y=0xb9, .sp=0x6f, .status=0xa0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fc, .value=0xf6}, {.addr=0xd30e, .value=0x84}, {.addr=0xd30f, .value=0xfc},
    };
    const struct CPU_State final_cpu = {.pc=0xd310, .a=0xdc, .x=0x88, .y=0xb9, .sp=0x6f, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fc, .value=0xf6}, {.addr=0xd30e, .value=0x84}, {.addr=0xd30f, .value=0xfc},
    };
    const struct BusEvent events[] = {
        {.addr=0xd30e, .value=0x84, .type=IO_READ},
        {.addr=0xd30f, .value=0xfc, .type=IO_READ},
        {.addr=0x01fc, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_036C) {
    const struct CPU_State initial_cpu = {.pc=0x31b7, .a=0xd9, .x=0x7a, .y=0x70, .sp=0xaf, .status=0x0d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e6, .value=0xfa}, {.addr=0x31b7, .value=0x84}, {.addr=0x31b8, .value=0xe6},
    };
    const struct CPU_State final_cpu = {.pc=0x31b9, .a=0xd4, .x=0x7a, .y=0x70, .sp=0xaf, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e6, .value=0xfa}, {.addr=0x31b7, .value=0x84}, {.addr=0x31b8, .value=0xe6},
    };
    const struct BusEvent events[] = {
        {.addr=0x31b7, .value=0x84, .type=IO_READ},
        {.addr=0x31b8, .value=0xe6, .type=IO_READ},
        {.addr=0x00e6, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_036D) {
    const struct CPU_State initial_cpu = {.pc=0xfa15, .a=0x27, .x=0xe0, .y=0xdf, .sp=0x9b, .status=0x61};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0186, .value=0x43}, {.addr=0xfa15, .value=0x84}, {.addr=0xfa16, .value=0x86},
    };
    const struct CPU_State final_cpu = {.pc=0xfa17, .a=0x6b, .x=0xe0, .y=0xdf, .sp=0x9b, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x0186, .value=0x43}, {.addr=0xfa15, .value=0x84}, {.addr=0xfa16, .value=0x86},
    };
    const struct BusEvent events[] = {
        {.addr=0xfa15, .value=0x84, .type=IO_READ},
        {.addr=0xfa16, .value=0x86, .type=IO_READ},
        {.addr=0x0186, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_036E) {
    const struct CPU_State initial_cpu = {.pc=0x5526, .a=0x0f, .x=0x02, .y=0xcc, .sp=0x04, .status=0x7a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b7, .value=0x63}, {.addr=0x5526, .value=0x84}, {.addr=0x5527, .value=0xb7},
    };
    const struct CPU_State final_cpu = {.pc=0x5528, .a=0x72, .x=0x02, .y=0xcc, .sp=0x04, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b7, .value=0x63}, {.addr=0x5526, .value=0x84}, {.addr=0x5527, .value=0xb7},
    };
    const struct BusEvent events[] = {
        {.addr=0x5526, .value=0x84, .type=IO_READ},
        {.addr=0x5527, .value=0xb7, .type=IO_READ},
        {.addr=0x01b7, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_036F) {
    const struct CPU_State initial_cpu = {.pc=0x50b1, .a=0xdc, .x=0x6f, .y=0x5c, .sp=0xfd, .status=0x3c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d3, .value=0xfe}, {.addr=0x50b1, .value=0x84}, {.addr=0x50b2, .value=0xd3},
    };
    const struct CPU_State final_cpu = {.pc=0x50b3, .a=0xda, .x=0x6f, .y=0x5c, .sp=0xfd, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d3, .value=0xfe}, {.addr=0x50b1, .value=0x84}, {.addr=0x50b2, .value=0xd3},
    };
    const struct BusEvent events[] = {
        {.addr=0x50b1, .value=0x84, .type=IO_READ},
        {.addr=0x50b2, .value=0xd3, .type=IO_READ},
        {.addr=0x01d3, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0370) {
    const struct CPU_State initial_cpu = {.pc=0x1294, .a=0xf3, .x=0x35, .y=0x4d, .sp=0x34, .status=0x21};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0136, .value=0x04}, {.addr=0x1294, .value=0x84}, {.addr=0x1295, .value=0x36},
    };
    const struct CPU_State final_cpu = {.pc=0x1296, .a=0xf8, .x=0x35, .y=0x4d, .sp=0x34, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0136, .value=0x04}, {.addr=0x1294, .value=0x84}, {.addr=0x1295, .value=0x36},
    };
    const struct BusEvent events[] = {
        {.addr=0x1294, .value=0x84, .type=IO_READ},
        {.addr=0x1295, .value=0x36, .type=IO_READ},
        {.addr=0x0136, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0371) {
    const struct CPU_State initial_cpu = {.pc=0x5133, .a=0x19, .x=0x04, .y=0x4f, .sp=0x8d, .status=0x98};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e8, .value=0x2b}, {.addr=0x5133, .value=0x84}, {.addr=0x5134, .value=0xe8},
    };
    const struct CPU_State final_cpu = {.pc=0x5135, .a=0x44, .x=0x04, .y=0x4f, .sp=0x8d, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e8, .value=0x2b}, {.addr=0x5133, .value=0x84}, {.addr=0x5134, .value=0xe8},
    };
    const struct BusEvent events[] = {
        {.addr=0x5133, .value=0x84, .type=IO_READ},
        {.addr=0x5134, .value=0xe8, .type=IO_READ},
        {.addr=0x00e8, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0372) {
    const struct CPU_State initial_cpu = {.pc=0xba02, .a=0xa6, .x=0x7c, .y=0xdc, .sp=0xee, .status=0xa1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c4, .value=0x86}, {.addr=0xba02, .value=0x84}, {.addr=0xba03, .value=0xc4},
    };
    const struct CPU_State final_cpu = {.pc=0xba04, .a=0x2d, .x=0x7c, .y=0xdc, .sp=0xee, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c4, .value=0x86}, {.addr=0xba02, .value=0x84}, {.addr=0xba03, .value=0xc4},
    };
    const struct BusEvent events[] = {
        {.addr=0xba02, .value=0x84, .type=IO_READ},
        {.addr=0xba03, .value=0xc4, .type=IO_READ},
        {.addr=0x01c4, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0373) {
    const struct CPU_State initial_cpu = {.pc=0xd2e2, .a=0x98, .x=0xa3, .y=0x29, .sp=0xcb, .status=0x96};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0096, .value=0x4c}, {.addr=0xd2e2, .value=0x84}, {.addr=0xd2e3, .value=0x96},
    };
    const struct CPU_State final_cpu = {.pc=0xd2e4, .a=0xe4, .x=0xa3, .y=0x29, .sp=0xcb, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0096, .value=0x4c}, {.addr=0xd2e2, .value=0x84}, {.addr=0xd2e3, .value=0x96},
    };
    const struct BusEvent events[] = {
        {.addr=0xd2e2, .value=0x84, .type=IO_READ},
        {.addr=0xd2e3, .value=0x96, .type=IO_READ},
        {.addr=0x0096, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0374) {
    const struct CPU_State initial_cpu = {.pc=0x6867, .a=0x49, .x=0xd2, .y=0x26, .sp=0xa5, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0198, .value=0xd0}, {.addr=0x6867, .value=0x84}, {.addr=0x6868, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0x6869, .a=0x19, .x=0xd2, .y=0x26, .sp=0xa5, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0198, .value=0xd0}, {.addr=0x6867, .value=0x84}, {.addr=0x6868, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0x6867, .value=0x84, .type=IO_READ},
        {.addr=0x6868, .value=0x98, .type=IO_READ},
        {.addr=0x0198, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0375) {
    const struct CPU_State initial_cpu = {.pc=0xc82e, .a=0x10, .x=0xe3, .y=0x52, .sp=0x7a, .status=0x8e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0044, .value=0xdc}, {.addr=0xc82e, .value=0x84}, {.addr=0xc82f, .value=0x44},
    };
    const struct CPU_State final_cpu = {.pc=0xc830, .a=0xec, .x=0xe3, .y=0x52, .sp=0x7a, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x0044, .value=0xdc}, {.addr=0xc82e, .value=0x84}, {.addr=0xc82f, .value=0x44},
    };
    const struct BusEvent events[] = {
        {.addr=0xc82e, .value=0x84, .type=IO_READ},
        {.addr=0xc82f, .value=0x44, .type=IO_READ},
        {.addr=0x0044, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0376) {
    const struct CPU_State initial_cpu = {.pc=0x0602, .a=0x88, .x=0xa3, .y=0xb2, .sp=0xa9, .status=0xdf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008b, .value=0xad}, {.addr=0x0602, .value=0x84}, {.addr=0x0603, .value=0x8b},
    };
    const struct CPU_State final_cpu = {.pc=0x0604, .a=0x36, .x=0xa3, .y=0xb2, .sp=0xa9, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x008b, .value=0xad}, {.addr=0x0602, .value=0x84}, {.addr=0x0603, .value=0x8b},
    };
    const struct BusEvent events[] = {
        {.addr=0x0602, .value=0x84, .type=IO_READ},
        {.addr=0x0603, .value=0x8b, .type=IO_READ},
        {.addr=0x008b, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0377) {
    const struct CPU_State initial_cpu = {.pc=0x5b6c, .a=0xc7, .x=0x16, .y=0x2b, .sp=0x91, .status=0x13};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005a, .value=0xf7}, {.addr=0x5b6c, .value=0x84}, {.addr=0x5b6d, .value=0x5a},
    };
    const struct CPU_State final_cpu = {.pc=0x5b6e, .a=0xbf, .x=0x16, .y=0x2b, .sp=0x91, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x005a, .value=0xf7}, {.addr=0x5b6c, .value=0x84}, {.addr=0x5b6d, .value=0x5a},
    };
    const struct BusEvent events[] = {
        {.addr=0x5b6c, .value=0x84, .type=IO_READ},
        {.addr=0x5b6d, .value=0x5a, .type=IO_READ},
        {.addr=0x005a, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0378) {
    const struct CPU_State initial_cpu = {.pc=0x5551, .a=0x90, .x=0x98, .y=0xc9, .sp=0x6b, .status=0x05};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bd, .value=0x17}, {.addr=0x5551, .value=0x84}, {.addr=0x5552, .value=0xbd},
    };
    const struct CPU_State final_cpu = {.pc=0x5553, .a=0xa8, .x=0x98, .y=0xc9, .sp=0x6b, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bd, .value=0x17}, {.addr=0x5551, .value=0x84}, {.addr=0x5552, .value=0xbd},
    };
    const struct BusEvent events[] = {
        {.addr=0x5551, .value=0x84, .type=IO_READ},
        {.addr=0x5552, .value=0xbd, .type=IO_READ},
        {.addr=0x00bd, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0379) {
    const struct CPU_State initial_cpu = {.pc=0x4f4c, .a=0x1d, .x=0x9b, .y=0x15, .sp=0xc4, .status=0x12};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0040, .value=0x4e}, {.addr=0x4f4c, .value=0x84}, {.addr=0x4f4d, .value=0x40},
    };
    const struct CPU_State final_cpu = {.pc=0x4f4e, .a=0x6b, .x=0x9b, .y=0x15, .sp=0xc4, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x0040, .value=0x4e}, {.addr=0x4f4c, .value=0x84}, {.addr=0x4f4d, .value=0x40},
    };
    const struct BusEvent events[] = {
        {.addr=0x4f4c, .value=0x84, .type=IO_READ},
        {.addr=0x4f4d, .value=0x40, .type=IO_READ},
        {.addr=0x0040, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_037A) {
    const struct CPU_State initial_cpu = {.pc=0x4c8e, .a=0xc6, .x=0x1a, .y=0x9e, .sp=0x92, .status=0xdd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0088, .value=0xff}, {.addr=0x4c8e, .value=0x84}, {.addr=0x4c8f, .value=0x88},
    };
    const struct CPU_State final_cpu = {.pc=0x4c90, .a=0xc6, .x=0x1a, .y=0x9e, .sp=0x92, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0088, .value=0xff}, {.addr=0x4c8e, .value=0x84}, {.addr=0x4c8f, .value=0x88},
    };
    const struct BusEvent events[] = {
        {.addr=0x4c8e, .value=0x84, .type=IO_READ},
        {.addr=0x4c8f, .value=0x88, .type=IO_READ},
        {.addr=0x0088, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_037B) {
    const struct CPU_State initial_cpu = {.pc=0x551a, .a=0x0b, .x=0x94, .y=0xc9, .sp=0xc9, .status=0x02};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b4, .value=0x1d}, {.addr=0x551a, .value=0x84}, {.addr=0x551b, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0x551c, .a=0x28, .x=0x94, .y=0xc9, .sp=0xc9, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b4, .value=0x1d}, {.addr=0x551a, .value=0x84}, {.addr=0x551b, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0x551a, .value=0x84, .type=IO_READ},
        {.addr=0x551b, .value=0xb4, .type=IO_READ},
        {.addr=0x00b4, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_037C) {
    const struct CPU_State initial_cpu = {.pc=0x9b37, .a=0xa9, .x=0xf1, .y=0x5f, .sp=0xc3, .status=0x56};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0019, .value=0x33}, {.addr=0x9b37, .value=0x84}, {.addr=0x9b38, .value=0x19},
    };
    const struct CPU_State final_cpu = {.pc=0x9b39, .a=0xdc, .x=0xf1, .y=0x5f, .sp=0xc3, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0019, .value=0x33}, {.addr=0x9b37, .value=0x84}, {.addr=0x9b38, .value=0x19},
    };
    const struct BusEvent events[] = {
        {.addr=0x9b37, .value=0x84, .type=IO_READ},
        {.addr=0x9b38, .value=0x19, .type=IO_READ},
        {.addr=0x0019, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_037D) {
    const struct CPU_State initial_cpu = {.pc=0xbef6, .a=0x8c, .x=0x96, .y=0xaa, .sp=0x9d, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003f, .value=0x9b}, {.addr=0xbef6, .value=0x84}, {.addr=0xbef7, .value=0x3f},
    };
    const struct CPU_State final_cpu = {.pc=0xbef8, .a=0x27, .x=0x96, .y=0xaa, .sp=0x9d, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x003f, .value=0x9b}, {.addr=0xbef6, .value=0x84}, {.addr=0xbef7, .value=0x3f},
    };
    const struct BusEvent events[] = {
        {.addr=0xbef6, .value=0x84, .type=IO_READ},
        {.addr=0xbef7, .value=0x3f, .type=IO_READ},
        {.addr=0x003f, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_037E) {
    const struct CPU_State initial_cpu = {.pc=0x436b, .a=0xc4, .x=0x73, .y=0x50, .sp=0xe0, .status=0xc9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0027, .value=0x0d}, {.addr=0x436b, .value=0x84}, {.addr=0x436c, .value=0x27},
    };
    const struct CPU_State final_cpu = {.pc=0x436d, .a=0xd2, .x=0x73, .y=0x50, .sp=0xe0, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x0027, .value=0x0d}, {.addr=0x436b, .value=0x84}, {.addr=0x436c, .value=0x27},
    };
    const struct BusEvent events[] = {
        {.addr=0x436b, .value=0x84, .type=IO_READ},
        {.addr=0x436c, .value=0x27, .type=IO_READ},
        {.addr=0x0027, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_037F) {
    const struct CPU_State initial_cpu = {.pc=0x739c, .a=0x92, .x=0x45, .y=0x95, .sp=0xa4, .status=0x92};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0026, .value=0x38}, {.addr=0x739c, .value=0x84}, {.addr=0x739d, .value=0x26},
    };
    const struct CPU_State final_cpu = {.pc=0x739e, .a=0xca, .x=0x45, .y=0x95, .sp=0xa4, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x0026, .value=0x38}, {.addr=0x739c, .value=0x84}, {.addr=0x739d, .value=0x26},
    };
    const struct BusEvent events[] = {
        {.addr=0x739c, .value=0x84, .type=IO_READ},
        {.addr=0x739d, .value=0x26, .type=IO_READ},
        {.addr=0x0026, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0380) {
    const struct CPU_State initial_cpu = {.pc=0xb312, .a=0xc8, .x=0x64, .y=0xda, .sp=0xd7, .status=0x7b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0136, .value=0xc0}, {.addr=0xb312, .value=0x84}, {.addr=0xb313, .value=0x36},
    };
    const struct CPU_State final_cpu = {.pc=0xb314, .a=0x89, .x=0x64, .y=0xda, .sp=0xd7, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0136, .value=0xc0}, {.addr=0xb312, .value=0x84}, {.addr=0xb313, .value=0x36},
    };
    const struct BusEvent events[] = {
        {.addr=0xb312, .value=0x84, .type=IO_READ},
        {.addr=0xb313, .value=0x36, .type=IO_READ},
        {.addr=0x0136, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0381) {
    const struct CPU_State initial_cpu = {.pc=0xb7ba, .a=0x46, .x=0x03, .y=0xe5, .sp=0xf9, .status=0x42};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008b, .value=0x1b}, {.addr=0xb7ba, .value=0x84}, {.addr=0xb7bb, .value=0x8b},
    };
    const struct CPU_State final_cpu = {.pc=0xb7bc, .a=0x61, .x=0x03, .y=0xe5, .sp=0xf9, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x008b, .value=0x1b}, {.addr=0xb7ba, .value=0x84}, {.addr=0xb7bb, .value=0x8b},
    };
    const struct BusEvent events[] = {
        {.addr=0xb7ba, .value=0x84, .type=IO_READ},
        {.addr=0xb7bb, .value=0x8b, .type=IO_READ},
        {.addr=0x008b, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0382) {
    const struct CPU_State initial_cpu = {.pc=0xd109, .a=0x78, .x=0x1b, .y=0xa6, .sp=0xa9, .status=0xe0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017e, .value=0x8b}, {.addr=0xd109, .value=0x84}, {.addr=0xd10a, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0xd10b, .a=0x03, .x=0x1b, .y=0xa6, .sp=0xa9, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x017e, .value=0x8b}, {.addr=0xd109, .value=0x84}, {.addr=0xd10a, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0xd109, .value=0x84, .type=IO_READ},
        {.addr=0xd10a, .value=0x7e, .type=IO_READ},
        {.addr=0x017e, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0383) {
    const struct CPU_State initial_cpu = {.pc=0xc972, .a=0x0d, .x=0xa0, .y=0x50, .sp=0x51, .status=0x1e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c4, .value=0xa2}, {.addr=0xc972, .value=0x84}, {.addr=0xc973, .value=0xc4},
    };
    const struct CPU_State final_cpu = {.pc=0xc974, .a=0xaf, .x=0xa0, .y=0x50, .sp=0x51, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c4, .value=0xa2}, {.addr=0xc972, .value=0x84}, {.addr=0xc973, .value=0xc4},
    };
    const struct BusEvent events[] = {
        {.addr=0xc972, .value=0x84, .type=IO_READ},
        {.addr=0xc973, .value=0xc4, .type=IO_READ},
        {.addr=0x00c4, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0384) {
    const struct CPU_State initial_cpu = {.pc=0x49d5, .a=0x7b, .x=0xd5, .y=0x29, .sp=0x22, .status=0xdf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cb, .value=0xad}, {.addr=0x49d5, .value=0x84}, {.addr=0x49d6, .value=0xcb},
    };
    const struct CPU_State final_cpu = {.pc=0x49d7, .a=0x29, .x=0xd5, .y=0x29, .sp=0x22, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cb, .value=0xad}, {.addr=0x49d5, .value=0x84}, {.addr=0x49d6, .value=0xcb},
    };
    const struct BusEvent events[] = {
        {.addr=0x49d5, .value=0x84, .type=IO_READ},
        {.addr=0x49d6, .value=0xcb, .type=IO_READ},
        {.addr=0x00cb, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0385) {
    const struct CPU_State initial_cpu = {.pc=0xacb1, .a=0xb6, .x=0x81, .y=0x68, .sp=0xdd, .status=0x4a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000e, .value=0x24}, {.addr=0xacb1, .value=0x84}, {.addr=0xacb2, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0xacb3, .a=0xda, .x=0x81, .y=0x68, .sp=0xdd, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x000e, .value=0x24}, {.addr=0xacb1, .value=0x84}, {.addr=0xacb2, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0xacb1, .value=0x84, .type=IO_READ},
        {.addr=0xacb2, .value=0x0e, .type=IO_READ},
        {.addr=0x000e, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0386) {
    const struct CPU_State initial_cpu = {.pc=0x3e3f, .a=0x2f, .x=0x97, .y=0xc1, .sp=0x3e, .status=0x7f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0102, .value=0x74}, {.addr=0x3e3f, .value=0x84}, {.addr=0x3e40, .value=0x02},
    };
    const struct CPU_State final_cpu = {.pc=0x3e41, .a=0xa4, .x=0x97, .y=0xc1, .sp=0x3e, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0102, .value=0x74}, {.addr=0x3e3f, .value=0x84}, {.addr=0x3e40, .value=0x02},
    };
    const struct BusEvent events[] = {
        {.addr=0x3e3f, .value=0x84, .type=IO_READ},
        {.addr=0x3e40, .value=0x02, .type=IO_READ},
        {.addr=0x0102, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0387) {
    const struct CPU_State initial_cpu = {.pc=0x49e8, .a=0x28, .x=0x46, .y=0x4a, .sp=0x4d, .status=0xc7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0032, .value=0xef}, {.addr=0x49e8, .value=0x84}, {.addr=0x49e9, .value=0x32},
    };
    const struct CPU_State final_cpu = {.pc=0x49ea, .a=0x18, .x=0x46, .y=0x4a, .sp=0x4d, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0032, .value=0xef}, {.addr=0x49e8, .value=0x84}, {.addr=0x49e9, .value=0x32},
    };
    const struct BusEvent events[] = {
        {.addr=0x49e8, .value=0x84, .type=IO_READ},
        {.addr=0x49e9, .value=0x32, .type=IO_READ},
        {.addr=0x0032, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0388) {
    const struct CPU_State initial_cpu = {.pc=0xcb5e, .a=0x31, .x=0x51, .y=0x39, .sp=0x67, .status=0x52};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d9, .value=0xcc}, {.addr=0xcb5e, .value=0x84}, {.addr=0xcb5f, .value=0xd9},
    };
    const struct CPU_State final_cpu = {.pc=0xcb60, .a=0xfd, .x=0x51, .y=0x39, .sp=0x67, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d9, .value=0xcc}, {.addr=0xcb5e, .value=0x84}, {.addr=0xcb5f, .value=0xd9},
    };
    const struct BusEvent events[] = {
        {.addr=0xcb5e, .value=0x84, .type=IO_READ},
        {.addr=0xcb5f, .value=0xd9, .type=IO_READ},
        {.addr=0x00d9, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0389) {
    const struct CPU_State initial_cpu = {.pc=0xddc9, .a=0x7f, .x=0x33, .y=0xef, .sp=0xb9, .status=0xeb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019f, .value=0x23}, {.addr=0xddc9, .value=0x84}, {.addr=0xddca, .value=0x9f},
    };
    const struct CPU_State final_cpu = {.pc=0xddcb, .a=0xa3, .x=0x33, .y=0xef, .sp=0xb9, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x019f, .value=0x23}, {.addr=0xddc9, .value=0x84}, {.addr=0xddca, .value=0x9f},
    };
    const struct BusEvent events[] = {
        {.addr=0xddc9, .value=0x84, .type=IO_READ},
        {.addr=0xddca, .value=0x9f, .type=IO_READ},
        {.addr=0x019f, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_038A) {
    const struct CPU_State initial_cpu = {.pc=0x0984, .a=0xf0, .x=0xf3, .y=0x48, .sp=0xda, .status=0x91};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0039, .value=0xb8}, {.addr=0x0984, .value=0x84}, {.addr=0x0985, .value=0x39},
    };
    const struct CPU_State final_cpu = {.pc=0x0986, .a=0xa9, .x=0xf3, .y=0x48, .sp=0xda, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x0039, .value=0xb8}, {.addr=0x0984, .value=0x84}, {.addr=0x0985, .value=0x39},
    };
    const struct BusEvent events[] = {
        {.addr=0x0984, .value=0x84, .type=IO_READ},
        {.addr=0x0985, .value=0x39, .type=IO_READ},
        {.addr=0x0039, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_038B) {
    const struct CPU_State initial_cpu = {.pc=0xf749, .a=0xa7, .x=0xe5, .y=0xa1, .sp=0xbc, .status=0xe5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010e, .value=0x28}, {.addr=0xf749, .value=0x84}, {.addr=0xf74a, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0xf74b, .a=0xd0, .x=0xe5, .y=0xa1, .sp=0xbc, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x010e, .value=0x28}, {.addr=0xf749, .value=0x84}, {.addr=0xf74a, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0xf749, .value=0x84, .type=IO_READ},
        {.addr=0xf74a, .value=0x0e, .type=IO_READ},
        {.addr=0x010e, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_038C) {
    const struct CPU_State initial_cpu = {.pc=0x4dff, .a=0x5b, .x=0x88, .y=0x64, .sp=0xfe, .status=0x2d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01da, .value=0xae}, {.addr=0x4dff, .value=0x84}, {.addr=0x4e00, .value=0xda},
    };
    const struct CPU_State final_cpu = {.pc=0x4e01, .a=0x0a, .x=0x88, .y=0x64, .sp=0xfe, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01da, .value=0xae}, {.addr=0x4dff, .value=0x84}, {.addr=0x4e00, .value=0xda},
    };
    const struct BusEvent events[] = {
        {.addr=0x4dff, .value=0x84, .type=IO_READ},
        {.addr=0x4e00, .value=0xda, .type=IO_READ},
        {.addr=0x01da, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_038D) {
    const struct CPU_State initial_cpu = {.pc=0x755e, .a=0x6c, .x=0x5c, .y=0xbe, .sp=0xce, .status=0xd6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e3, .value=0xa9}, {.addr=0x755e, .value=0x84}, {.addr=0x755f, .value=0xe3},
    };
    const struct CPU_State final_cpu = {.pc=0x7560, .a=0x15, .x=0x5c, .y=0xbe, .sp=0xce, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e3, .value=0xa9}, {.addr=0x755e, .value=0x84}, {.addr=0x755f, .value=0xe3},
    };
    const struct BusEvent events[] = {
        {.addr=0x755e, .value=0x84, .type=IO_READ},
        {.addr=0x755f, .value=0xe3, .type=IO_READ},
        {.addr=0x00e3, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_038E) {
    const struct CPU_State initial_cpu = {.pc=0xabca, .a=0xf6, .x=0x53, .y=0x5c, .sp=0x43, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0163, .value=0x13}, {.addr=0xabca, .value=0x84}, {.addr=0xabcb, .value=0x63},
    };
    const struct CPU_State final_cpu = {.pc=0xabcc, .a=0x09, .x=0x53, .y=0x5c, .sp=0x43, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x0163, .value=0x13}, {.addr=0xabca, .value=0x84}, {.addr=0xabcb, .value=0x63},
    };
    const struct BusEvent events[] = {
        {.addr=0xabca, .value=0x84, .type=IO_READ},
        {.addr=0xabcb, .value=0x63, .type=IO_READ},
        {.addr=0x0163, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_038F) {
    const struct CPU_State initial_cpu = {.pc=0x0487, .a=0x1d, .x=0x5a, .y=0xd7, .sp=0x2e, .status=0x89};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0036, .value=0x58}, {.addr=0x0487, .value=0x84}, {.addr=0x0488, .value=0x36},
    };
    const struct CPU_State final_cpu = {.pc=0x0489, .a=0x76, .x=0x5a, .y=0xd7, .sp=0x2e, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x0036, .value=0x58}, {.addr=0x0487, .value=0x84}, {.addr=0x0488, .value=0x36},
    };
    const struct BusEvent events[] = {
        {.addr=0x0487, .value=0x84, .type=IO_READ},
        {.addr=0x0488, .value=0x36, .type=IO_READ},
        {.addr=0x0036, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0390) {
    const struct CPU_State initial_cpu = {.pc=0xa3d3, .a=0xb2, .x=0x42, .y=0x67, .sp=0x90, .status=0xb3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0122, .value=0x01}, {.addr=0xa3d3, .value=0x84}, {.addr=0xa3d4, .value=0x22},
    };
    const struct CPU_State final_cpu = {.pc=0xa3d5, .a=0xb4, .x=0x42, .y=0x67, .sp=0x90, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0122, .value=0x01}, {.addr=0xa3d3, .value=0x84}, {.addr=0xa3d4, .value=0x22},
    };
    const struct BusEvent events[] = {
        {.addr=0xa3d3, .value=0x84, .type=IO_READ},
        {.addr=0xa3d4, .value=0x22, .type=IO_READ},
        {.addr=0x0122, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0391) {
    const struct CPU_State initial_cpu = {.pc=0xdeb1, .a=0x79, .x=0x11, .y=0x87, .sp=0xe8, .status=0x78};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e8, .value=0xf7}, {.addr=0xdeb1, .value=0x84}, {.addr=0xdeb2, .value=0xe8},
    };
    const struct CPU_State final_cpu = {.pc=0xdeb3, .a=0x70, .x=0x11, .y=0x87, .sp=0xe8, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e8, .value=0xf7}, {.addr=0xdeb1, .value=0x84}, {.addr=0xdeb2, .value=0xe8},
    };
    const struct BusEvent events[] = {
        {.addr=0xdeb1, .value=0x84, .type=IO_READ},
        {.addr=0xdeb2, .value=0xe8, .type=IO_READ},
        {.addr=0x01e8, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0392) {
    const struct CPU_State initial_cpu = {.pc=0x8777, .a=0xe0, .x=0x3e, .y=0x52, .sp=0xc1, .status=0x5a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d9, .value=0x9b}, {.addr=0x8777, .value=0x84}, {.addr=0x8778, .value=0xd9},
    };
    const struct CPU_State final_cpu = {.pc=0x8779, .a=0x7b, .x=0x3e, .y=0x52, .sp=0xc1, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d9, .value=0x9b}, {.addr=0x8777, .value=0x84}, {.addr=0x8778, .value=0xd9},
    };
    const struct BusEvent events[] = {
        {.addr=0x8777, .value=0x84, .type=IO_READ},
        {.addr=0x8778, .value=0xd9, .type=IO_READ},
        {.addr=0x00d9, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0393) {
    const struct CPU_State initial_cpu = {.pc=0x961b, .a=0x26, .x=0x44, .y=0x6d, .sp=0xc8, .status=0x51};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a2, .value=0xc0}, {.addr=0x961b, .value=0x84}, {.addr=0x961c, .value=0xa2},
    };
    const struct CPU_State final_cpu = {.pc=0x961d, .a=0xe7, .x=0x44, .y=0x6d, .sp=0xc8, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a2, .value=0xc0}, {.addr=0x961b, .value=0x84}, {.addr=0x961c, .value=0xa2},
    };
    const struct BusEvent events[] = {
        {.addr=0x961b, .value=0x84, .type=IO_READ},
        {.addr=0x961c, .value=0xa2, .type=IO_READ},
        {.addr=0x00a2, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0394) {
    const struct CPU_State initial_cpu = {.pc=0x7833, .a=0x69, .x=0xf3, .y=0xfa, .sp=0x4c, .status=0x2e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0127, .value=0xd4}, {.addr=0x7833, .value=0x84}, {.addr=0x7834, .value=0x27},
    };
    const struct CPU_State final_cpu = {.pc=0x7835, .a=0x3d, .x=0xf3, .y=0xfa, .sp=0x4c, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x0127, .value=0xd4}, {.addr=0x7833, .value=0x84}, {.addr=0x7834, .value=0x27},
    };
    const struct BusEvent events[] = {
        {.addr=0x7833, .value=0x84, .type=IO_READ},
        {.addr=0x7834, .value=0x27, .type=IO_READ},
        {.addr=0x0127, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0395) {
    const struct CPU_State initial_cpu = {.pc=0xe1fa, .a=0x4f, .x=0x90, .y=0x76, .sp=0xc1, .status=0x29};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0171, .value=0x0c}, {.addr=0xe1fa, .value=0x84}, {.addr=0xe1fb, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0xe1fc, .a=0x5c, .x=0x90, .y=0x76, .sp=0xc1, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x0171, .value=0x0c}, {.addr=0xe1fa, .value=0x84}, {.addr=0xe1fb, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0xe1fa, .value=0x84, .type=IO_READ},
        {.addr=0xe1fb, .value=0x71, .type=IO_READ},
        {.addr=0x0171, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0396) {
    const struct CPU_State initial_cpu = {.pc=0x6952, .a=0x63, .x=0x4b, .y=0xac, .sp=0x27, .status=0x1f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002f, .value=0x9d}, {.addr=0x6952, .value=0x84}, {.addr=0x6953, .value=0x2f},
    };
    const struct CPU_State final_cpu = {.pc=0x6954, .a=0x01, .x=0x4b, .y=0xac, .sp=0x27, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x002f, .value=0x9d}, {.addr=0x6952, .value=0x84}, {.addr=0x6953, .value=0x2f},
    };
    const struct BusEvent events[] = {
        {.addr=0x6952, .value=0x84, .type=IO_READ},
        {.addr=0x6953, .value=0x2f, .type=IO_READ},
        {.addr=0x002f, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0397) {
    const struct CPU_State initial_cpu = {.pc=0x7700, .a=0x66, .x=0x23, .y=0x59, .sp=0x25, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01db, .value=0x50}, {.addr=0x7700, .value=0x84}, {.addr=0x7701, .value=0xdb},
    };
    const struct CPU_State final_cpu = {.pc=0x7702, .a=0xb6, .x=0x23, .y=0x59, .sp=0x25, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01db, .value=0x50}, {.addr=0x7700, .value=0x84}, {.addr=0x7701, .value=0xdb},
    };
    const struct BusEvent events[] = {
        {.addr=0x7700, .value=0x84, .type=IO_READ},
        {.addr=0x7701, .value=0xdb, .type=IO_READ},
        {.addr=0x01db, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0398) {
    const struct CPU_State initial_cpu = {.pc=0xda7e, .a=0xfb, .x=0xa1, .y=0x54, .sp=0x54, .status=0x5a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0057, .value=0xda}, {.addr=0xda7e, .value=0x84}, {.addr=0xda7f, .value=0x57},
    };
    const struct CPU_State final_cpu = {.pc=0xda80, .a=0xd5, .x=0xa1, .y=0x54, .sp=0x54, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x0057, .value=0xda}, {.addr=0xda7e, .value=0x84}, {.addr=0xda7f, .value=0x57},
    };
    const struct BusEvent events[] = {
        {.addr=0xda7e, .value=0x84, .type=IO_READ},
        {.addr=0xda7f, .value=0x57, .type=IO_READ},
        {.addr=0x0057, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_0399) {
    const struct CPU_State initial_cpu = {.pc=0xf51f, .a=0x6a, .x=0x69, .y=0xa0, .sp=0x28, .status=0x0e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0084, .value=0xd9}, {.addr=0xf51f, .value=0x84}, {.addr=0xf520, .value=0x84},
    };
    const struct CPU_State final_cpu = {.pc=0xf521, .a=0x43, .x=0x69, .y=0xa0, .sp=0x28, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0084, .value=0xd9}, {.addr=0xf51f, .value=0x84}, {.addr=0xf520, .value=0x84},
    };
    const struct BusEvent events[] = {
        {.addr=0xf51f, .value=0x84, .type=IO_READ},
        {.addr=0xf520, .value=0x84, .type=IO_READ},
        {.addr=0x0084, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_039A) {
    const struct CPU_State initial_cpu = {.pc=0xc356, .a=0x66, .x=0xae, .y=0xb4, .sp=0xf6, .status=0x35};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d9, .value=0xb3}, {.addr=0xc356, .value=0x84}, {.addr=0xc357, .value=0xd9},
    };
    const struct CPU_State final_cpu = {.pc=0xc358, .a=0x1a, .x=0xae, .y=0xb4, .sp=0xf6, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d9, .value=0xb3}, {.addr=0xc356, .value=0x84}, {.addr=0xc357, .value=0xd9},
    };
    const struct BusEvent events[] = {
        {.addr=0xc356, .value=0x84, .type=IO_READ},
        {.addr=0xc357, .value=0xd9, .type=IO_READ},
        {.addr=0x01d9, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_039B) {
    const struct CPU_State initial_cpu = {.pc=0xee50, .a=0xb5, .x=0xee, .y=0x10, .sp=0xb4, .status=0x13};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000a, .value=0xcc}, {.addr=0xee50, .value=0x84}, {.addr=0xee51, .value=0x0a},
    };
    const struct CPU_State final_cpu = {.pc=0xee52, .a=0x82, .x=0xee, .y=0x10, .sp=0xb4, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x000a, .value=0xcc}, {.addr=0xee50, .value=0x84}, {.addr=0xee51, .value=0x0a},
    };
    const struct BusEvent events[] = {
        {.addr=0xee50, .value=0x84, .type=IO_READ},
        {.addr=0xee51, .value=0x0a, .type=IO_READ},
        {.addr=0x000a, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_039C) {
    const struct CPU_State initial_cpu = {.pc=0x9566, .a=0xa0, .x=0x2d, .y=0x7d, .sp=0x82, .status=0x4d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b6, .value=0x83}, {.addr=0x9566, .value=0x84}, {.addr=0x9567, .value=0xb6},
    };
    const struct CPU_State final_cpu = {.pc=0x9568, .a=0x24, .x=0x2d, .y=0x7d, .sp=0x82, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b6, .value=0x83}, {.addr=0x9566, .value=0x84}, {.addr=0x9567, .value=0xb6},
    };
    const struct BusEvent events[] = {
        {.addr=0x9566, .value=0x84, .type=IO_READ},
        {.addr=0x9567, .value=0xb6, .type=IO_READ},
        {.addr=0x00b6, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_039D) {
    const struct CPU_State initial_cpu = {.pc=0x3fec, .a=0x01, .x=0x1e, .y=0x5f, .sp=0x5d, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0032, .value=0x42}, {.addr=0x3fec, .value=0x84}, {.addr=0x3fed, .value=0x32},
    };
    const struct CPU_State final_cpu = {.pc=0x3fee, .a=0x43, .x=0x1e, .y=0x5f, .sp=0x5d, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x0032, .value=0x42}, {.addr=0x3fec, .value=0x84}, {.addr=0x3fed, .value=0x32},
    };
    const struct BusEvent events[] = {
        {.addr=0x3fec, .value=0x84, .type=IO_READ},
        {.addr=0x3fed, .value=0x32, .type=IO_READ},
        {.addr=0x0032, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_039E) {
    const struct CPU_State initial_cpu = {.pc=0x506e, .a=0x74, .x=0x1f, .y=0x4d, .sp=0xd8, .status=0x15};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0090, .value=0xd0}, {.addr=0x506e, .value=0x84}, {.addr=0x506f, .value=0x90},
    };
    const struct CPU_State final_cpu = {.pc=0x5070, .a=0x45, .x=0x1f, .y=0x4d, .sp=0xd8, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x0090, .value=0xd0}, {.addr=0x506e, .value=0x84}, {.addr=0x506f, .value=0x90},
    };
    const struct BusEvent events[] = {
        {.addr=0x506e, .value=0x84, .type=IO_READ},
        {.addr=0x506f, .value=0x90, .type=IO_READ},
        {.addr=0x0090, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_039F) {
    const struct CPU_State initial_cpu = {.pc=0x80ad, .a=0xa1, .x=0x71, .y=0x15, .sp=0xa0, .status=0xe1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013c, .value=0x61}, {.addr=0x80ad, .value=0x84}, {.addr=0x80ae, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0x80af, .a=0x03, .x=0x71, .y=0x15, .sp=0xa0, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x013c, .value=0x61}, {.addr=0x80ad, .value=0x84}, {.addr=0x80ae, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0x80ad, .value=0x84, .type=IO_READ},
        {.addr=0x80ae, .value=0x3c, .type=IO_READ},
        {.addr=0x013c, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03A0) {
    const struct CPU_State initial_cpu = {.pc=0x82ec, .a=0x5c, .x=0xb9, .y=0xf8, .sp=0x50, .status=0xbc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0192, .value=0x98}, {.addr=0x82ec, .value=0x84}, {.addr=0x82ed, .value=0x92},
    };
    const struct CPU_State final_cpu = {.pc=0x82ee, .a=0xf4, .x=0xb9, .y=0xf8, .sp=0x50, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0192, .value=0x98}, {.addr=0x82ec, .value=0x84}, {.addr=0x82ed, .value=0x92},
    };
    const struct BusEvent events[] = {
        {.addr=0x82ec, .value=0x84, .type=IO_READ},
        {.addr=0x82ed, .value=0x92, .type=IO_READ},
        {.addr=0x0192, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03A1) {
    const struct CPU_State initial_cpu = {.pc=0x10f0, .a=0x1d, .x=0x6f, .y=0xff, .sp=0xea, .status=0x0e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0065, .value=0xe7}, {.addr=0x10f0, .value=0x84}, {.addr=0x10f1, .value=0x65},
    };
    const struct CPU_State final_cpu = {.pc=0x10f2, .a=0x04, .x=0x6f, .y=0xff, .sp=0xea, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0065, .value=0xe7}, {.addr=0x10f0, .value=0x84}, {.addr=0x10f1, .value=0x65},
    };
    const struct BusEvent events[] = {
        {.addr=0x10f0, .value=0x84, .type=IO_READ},
        {.addr=0x10f1, .value=0x65, .type=IO_READ},
        {.addr=0x0065, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03A2) {
    const struct CPU_State initial_cpu = {.pc=0xc826, .a=0x70, .x=0xe2, .y=0x50, .sp=0xba, .status=0xc7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0098, .value=0x3b}, {.addr=0xc826, .value=0x84}, {.addr=0xc827, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0xc828, .a=0xac, .x=0xe2, .y=0x50, .sp=0xba, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0098, .value=0x3b}, {.addr=0xc826, .value=0x84}, {.addr=0xc827, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0xc826, .value=0x84, .type=IO_READ},
        {.addr=0xc827, .value=0x98, .type=IO_READ},
        {.addr=0x0098, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03A3) {
    const struct CPU_State initial_cpu = {.pc=0x5554, .a=0x2c, .x=0xd0, .y=0x1c, .sp=0x88, .status=0xd0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002b, .value=0x36}, {.addr=0x5554, .value=0x84}, {.addr=0x5555, .value=0x2b},
    };
    const struct CPU_State final_cpu = {.pc=0x5556, .a=0x62, .x=0xd0, .y=0x1c, .sp=0x88, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x002b, .value=0x36}, {.addr=0x5554, .value=0x84}, {.addr=0x5555, .value=0x2b},
    };
    const struct BusEvent events[] = {
        {.addr=0x5554, .value=0x84, .type=IO_READ},
        {.addr=0x5555, .value=0x2b, .type=IO_READ},
        {.addr=0x002b, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03A4) {
    const struct CPU_State initial_cpu = {.pc=0xae57, .a=0xd9, .x=0x2f, .y=0x78, .sp=0x83, .status=0xca};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001a, .value=0xb3}, {.addr=0xae57, .value=0x84}, {.addr=0xae58, .value=0x1a},
    };
    const struct CPU_State final_cpu = {.pc=0xae59, .a=0x8c, .x=0x2f, .y=0x78, .sp=0x83, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x001a, .value=0xb3}, {.addr=0xae57, .value=0x84}, {.addr=0xae58, .value=0x1a},
    };
    const struct BusEvent events[] = {
        {.addr=0xae57, .value=0x84, .type=IO_READ},
        {.addr=0xae58, .value=0x1a, .type=IO_READ},
        {.addr=0x001a, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03A5) {
    const struct CPU_State initial_cpu = {.pc=0x8fc0, .a=0xd1, .x=0x63, .y=0x27, .sp=0x33, .status=0x46};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a0, .value=0x0f}, {.addr=0x8fc0, .value=0x84}, {.addr=0x8fc1, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0x8fc2, .a=0xe0, .x=0x63, .y=0x27, .sp=0x33, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a0, .value=0x0f}, {.addr=0x8fc0, .value=0x84}, {.addr=0x8fc1, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0x8fc0, .value=0x84, .type=IO_READ},
        {.addr=0x8fc1, .value=0xa0, .type=IO_READ},
        {.addr=0x00a0, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03A6) {
    const struct CPU_State initial_cpu = {.pc=0xdf58, .a=0x51, .x=0x91, .y=0xff, .sp=0x62, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0042, .value=0x51}, {.addr=0xdf58, .value=0x84}, {.addr=0xdf59, .value=0x42},
    };
    const struct CPU_State final_cpu = {.pc=0xdf5a, .a=0xa2, .x=0x91, .y=0xff, .sp=0x62, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0042, .value=0x51}, {.addr=0xdf58, .value=0x84}, {.addr=0xdf59, .value=0x42},
    };
    const struct BusEvent events[] = {
        {.addr=0xdf58, .value=0x84, .type=IO_READ},
        {.addr=0xdf59, .value=0x42, .type=IO_READ},
        {.addr=0x0042, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03A7) {
    const struct CPU_State initial_cpu = {.pc=0xdcf1, .a=0xdd, .x=0xf9, .y=0x5d, .sp=0x9f, .status=0xcc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0055, .value=0x37}, {.addr=0xdcf1, .value=0x84}, {.addr=0xdcf2, .value=0x55},
    };
    const struct CPU_State final_cpu = {.pc=0xdcf3, .a=0x14, .x=0xf9, .y=0x5d, .sp=0x9f, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0055, .value=0x37}, {.addr=0xdcf1, .value=0x84}, {.addr=0xdcf2, .value=0x55},
    };
    const struct BusEvent events[] = {
        {.addr=0xdcf1, .value=0x84, .type=IO_READ},
        {.addr=0xdcf2, .value=0x55, .type=IO_READ},
        {.addr=0x0055, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03A8) {
    const struct CPU_State initial_cpu = {.pc=0x3da0, .a=0x8e, .x=0x08, .y=0x0a, .sp=0x32, .status=0x69};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013d, .value=0x62}, {.addr=0x3da0, .value=0x84}, {.addr=0x3da1, .value=0x3d},
    };
    const struct CPU_State final_cpu = {.pc=0x3da2, .a=0xf1, .x=0x08, .y=0x0a, .sp=0x32, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x013d, .value=0x62}, {.addr=0x3da0, .value=0x84}, {.addr=0x3da1, .value=0x3d},
    };
    const struct BusEvent events[] = {
        {.addr=0x3da0, .value=0x84, .type=IO_READ},
        {.addr=0x3da1, .value=0x3d, .type=IO_READ},
        {.addr=0x013d, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03A9) {
    const struct CPU_State initial_cpu = {.pc=0xfcd5, .a=0x00, .x=0x32, .y=0xde, .sp=0x3e, .status=0xae};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0164, .value=0x52}, {.addr=0xfcd5, .value=0x84}, {.addr=0xfcd6, .value=0x64},
    };
    const struct CPU_State final_cpu = {.pc=0xfcd7, .a=0x52, .x=0x32, .y=0xde, .sp=0x3e, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x0164, .value=0x52}, {.addr=0xfcd5, .value=0x84}, {.addr=0xfcd6, .value=0x64},
    };
    const struct BusEvent events[] = {
        {.addr=0xfcd5, .value=0x84, .type=IO_READ},
        {.addr=0xfcd6, .value=0x64, .type=IO_READ},
        {.addr=0x0164, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03AA) {
    const struct CPU_State initial_cpu = {.pc=0x9e72, .a=0xd0, .x=0x4c, .y=0x30, .sp=0x7f, .status=0x88};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008a, .value=0xba}, {.addr=0x9e72, .value=0x84}, {.addr=0x9e73, .value=0x8a},
    };
    const struct CPU_State final_cpu = {.pc=0x9e74, .a=0x8a, .x=0x4c, .y=0x30, .sp=0x7f, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x008a, .value=0xba}, {.addr=0x9e72, .value=0x84}, {.addr=0x9e73, .value=0x8a},
    };
    const struct BusEvent events[] = {
        {.addr=0x9e72, .value=0x84, .type=IO_READ},
        {.addr=0x9e73, .value=0x8a, .type=IO_READ},
        {.addr=0x008a, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03AB) {
    const struct CPU_State initial_cpu = {.pc=0x0b78, .a=0x6c, .x=0xd7, .y=0x5c, .sp=0x3a, .status=0xf9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bf, .value=0x7a}, {.addr=0x0b78, .value=0x84}, {.addr=0x0b79, .value=0xbf},
    };
    const struct CPU_State final_cpu = {.pc=0x0b7a, .a=0xe7, .x=0xd7, .y=0x5c, .sp=0x3a, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bf, .value=0x7a}, {.addr=0x0b78, .value=0x84}, {.addr=0x0b79, .value=0xbf},
    };
    const struct BusEvent events[] = {
        {.addr=0x0b78, .value=0x84, .type=IO_READ},
        {.addr=0x0b79, .value=0xbf, .type=IO_READ},
        {.addr=0x01bf, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03AC) {
    const struct CPU_State initial_cpu = {.pc=0x297a, .a=0x87, .x=0xb5, .y=0xd0, .sp=0xf1, .status=0xc6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009a, .value=0x27}, {.addr=0x297a, .value=0x84}, {.addr=0x297b, .value=0x9a},
    };
    const struct CPU_State final_cpu = {.pc=0x297c, .a=0xae, .x=0xb5, .y=0xd0, .sp=0xf1, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x009a, .value=0x27}, {.addr=0x297a, .value=0x84}, {.addr=0x297b, .value=0x9a},
    };
    const struct BusEvent events[] = {
        {.addr=0x297a, .value=0x84, .type=IO_READ},
        {.addr=0x297b, .value=0x9a, .type=IO_READ},
        {.addr=0x009a, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03AD) {
    const struct CPU_State initial_cpu = {.pc=0x4a16, .a=0xc5, .x=0xcd, .y=0x8e, .sp=0x6b, .status=0x53};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d2, .value=0xda}, {.addr=0x4a16, .value=0x84}, {.addr=0x4a17, .value=0xd2},
    };
    const struct CPU_State final_cpu = {.pc=0x4a18, .a=0xa0, .x=0xcd, .y=0x8e, .sp=0x6b, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d2, .value=0xda}, {.addr=0x4a16, .value=0x84}, {.addr=0x4a17, .value=0xd2},
    };
    const struct BusEvent events[] = {
        {.addr=0x4a16, .value=0x84, .type=IO_READ},
        {.addr=0x4a17, .value=0xd2, .type=IO_READ},
        {.addr=0x00d2, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x5768, .a=0xaf, .x=0x9f, .y=0xf1, .sp=0x16, .status=0x86};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0078, .value=0x3c}, {.addr=0x5768, .value=0x84}, {.addr=0x5769, .value=0x78},
    };
    const struct CPU_State final_cpu = {.pc=0x576a, .a=0xeb, .x=0x9f, .y=0xf1, .sp=0x16, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0078, .value=0x3c}, {.addr=0x5768, .value=0x84}, {.addr=0x5769, .value=0x78},
    };
    const struct BusEvent events[] = {
        {.addr=0x5768, .value=0x84, .type=IO_READ},
        {.addr=0x5769, .value=0x78, .type=IO_READ},
        {.addr=0x0078, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x22eb, .a=0x06, .x=0x9a, .y=0x66, .sp=0xe4, .status=0x98};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0056, .value=0x1d}, {.addr=0x22eb, .value=0x84}, {.addr=0x22ec, .value=0x56},
    };
    const struct CPU_State final_cpu = {.pc=0x22ed, .a=0x23, .x=0x9a, .y=0x66, .sp=0xe4, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x0056, .value=0x1d}, {.addr=0x22eb, .value=0x84}, {.addr=0x22ec, .value=0x56},
    };
    const struct BusEvent events[] = {
        {.addr=0x22eb, .value=0x84, .type=IO_READ},
        {.addr=0x22ec, .value=0x56, .type=IO_READ},
        {.addr=0x0056, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03B1) {
    const struct CPU_State initial_cpu = {.pc=0xa901, .a=0xeb, .x=0x33, .y=0x70, .sp=0x4c, .status=0x8a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005d, .value=0x46}, {.addr=0xa901, .value=0x84}, {.addr=0xa902, .value=0x5d},
    };
    const struct CPU_State final_cpu = {.pc=0xa903, .a=0x31, .x=0x33, .y=0x70, .sp=0x4c, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x005d, .value=0x46}, {.addr=0xa901, .value=0x84}, {.addr=0xa902, .value=0x5d},
    };
    const struct BusEvent events[] = {
        {.addr=0xa901, .value=0x84, .type=IO_READ},
        {.addr=0xa902, .value=0x5d, .type=IO_READ},
        {.addr=0x005d, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03B2) {
    const struct CPU_State initial_cpu = {.pc=0xff42, .a=0x85, .x=0xf6, .y=0x75, .sp=0xe2, .status=0x00};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0059, .value=0x5e}, {.addr=0xff42, .value=0x84}, {.addr=0xff43, .value=0x59},
    };
    const struct CPU_State final_cpu = {.pc=0xff44, .a=0xe3, .x=0xf6, .y=0x75, .sp=0xe2, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x0059, .value=0x5e}, {.addr=0xff42, .value=0x84}, {.addr=0xff43, .value=0x59},
    };
    const struct BusEvent events[] = {
        {.addr=0xff42, .value=0x84, .type=IO_READ},
        {.addr=0xff43, .value=0x59, .type=IO_READ},
        {.addr=0x0059, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03B3) {
    const struct CPU_State initial_cpu = {.pc=0xeca7, .a=0x23, .x=0x73, .y=0x26, .sp=0x92, .status=0x35};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0116, .value=0xe3}, {.addr=0xeca7, .value=0x84}, {.addr=0xeca8, .value=0x16},
    };
    const struct CPU_State final_cpu = {.pc=0xeca9, .a=0x07, .x=0x73, .y=0x26, .sp=0x92, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x0116, .value=0xe3}, {.addr=0xeca7, .value=0x84}, {.addr=0xeca8, .value=0x16},
    };
    const struct BusEvent events[] = {
        {.addr=0xeca7, .value=0x84, .type=IO_READ},
        {.addr=0xeca8, .value=0x16, .type=IO_READ},
        {.addr=0x0116, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x2a72, .a=0x85, .x=0x30, .y=0xe0, .sp=0x0c, .status=0x96};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006f, .value=0x6f}, {.addr=0x2a72, .value=0x84}, {.addr=0x2a73, .value=0x6f},
    };
    const struct CPU_State final_cpu = {.pc=0x2a74, .a=0xf4, .x=0x30, .y=0xe0, .sp=0x0c, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x006f, .value=0x6f}, {.addr=0x2a72, .value=0x84}, {.addr=0x2a73, .value=0x6f},
    };
    const struct BusEvent events[] = {
        {.addr=0x2a72, .value=0x84, .type=IO_READ},
        {.addr=0x2a73, .value=0x6f, .type=IO_READ},
        {.addr=0x006f, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03B5) {
    const struct CPU_State initial_cpu = {.pc=0x09a0, .a=0x03, .x=0xbc, .y=0x9d, .sp=0x5e, .status=0x95};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009e, .value=0xb1}, {.addr=0x09a0, .value=0x84}, {.addr=0x09a1, .value=0x9e},
    };
    const struct CPU_State final_cpu = {.pc=0x09a2, .a=0xb5, .x=0xbc, .y=0x9d, .sp=0x5e, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x009e, .value=0xb1}, {.addr=0x09a0, .value=0x84}, {.addr=0x09a1, .value=0x9e},
    };
    const struct BusEvent events[] = {
        {.addr=0x09a0, .value=0x84, .type=IO_READ},
        {.addr=0x09a1, .value=0x9e, .type=IO_READ},
        {.addr=0x009e, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03B6) {
    const struct CPU_State initial_cpu = {.pc=0xb0c1, .a=0x87, .x=0x22, .y=0x06, .sp=0xba, .status=0xb7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0185, .value=0x4c}, {.addr=0xb0c1, .value=0x84}, {.addr=0xb0c2, .value=0x85},
    };
    const struct CPU_State final_cpu = {.pc=0xb0c3, .a=0xd4, .x=0x22, .y=0x06, .sp=0xba, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0185, .value=0x4c}, {.addr=0xb0c1, .value=0x84}, {.addr=0xb0c2, .value=0x85},
    };
    const struct BusEvent events[] = {
        {.addr=0xb0c1, .value=0x84, .type=IO_READ},
        {.addr=0xb0c2, .value=0x85, .type=IO_READ},
        {.addr=0x0185, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03B7) {
    const struct CPU_State initial_cpu = {.pc=0xd23e, .a=0xa6, .x=0x61, .y=0xd5, .sp=0x6f, .status=0x91};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0056, .value=0xce}, {.addr=0xd23e, .value=0x84}, {.addr=0xd23f, .value=0x56},
    };
    const struct CPU_State final_cpu = {.pc=0xd240, .a=0x75, .x=0x61, .y=0xd5, .sp=0x6f, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x0056, .value=0xce}, {.addr=0xd23e, .value=0x84}, {.addr=0xd23f, .value=0x56},
    };
    const struct BusEvent events[] = {
        {.addr=0xd23e, .value=0x84, .type=IO_READ},
        {.addr=0xd23f, .value=0x56, .type=IO_READ},
        {.addr=0x0056, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03B8) {
    const struct CPU_State initial_cpu = {.pc=0x141c, .a=0xbd, .x=0x20, .y=0xd9, .sp=0xff, .status=0x91};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e9, .value=0x06}, {.addr=0x141c, .value=0x84}, {.addr=0x141d, .value=0xe9},
    };
    const struct CPU_State final_cpu = {.pc=0x141e, .a=0xc4, .x=0x20, .y=0xd9, .sp=0xff, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e9, .value=0x06}, {.addr=0x141c, .value=0x84}, {.addr=0x141d, .value=0xe9},
    };
    const struct BusEvent events[] = {
        {.addr=0x141c, .value=0x84, .type=IO_READ},
        {.addr=0x141d, .value=0xe9, .type=IO_READ},
        {.addr=0x00e9, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03B9) {
    const struct CPU_State initial_cpu = {.pc=0xb6ee, .a=0xc0, .x=0x25, .y=0x32, .sp=0xdb, .status=0x6d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0192, .value=0x60}, {.addr=0xb6ee, .value=0x84}, {.addr=0xb6ef, .value=0x92},
    };
    const struct CPU_State final_cpu = {.pc=0xb6f0, .a=0x21, .x=0x25, .y=0x32, .sp=0xdb, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x0192, .value=0x60}, {.addr=0xb6ee, .value=0x84}, {.addr=0xb6ef, .value=0x92},
    };
    const struct BusEvent events[] = {
        {.addr=0xb6ee, .value=0x84, .type=IO_READ},
        {.addr=0xb6ef, .value=0x92, .type=IO_READ},
        {.addr=0x0192, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03BA) {
    const struct CPU_State initial_cpu = {.pc=0xd2d5, .a=0x06, .x=0x91, .y=0x23, .sp=0xe2, .status=0x21};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018f, .value=0x72}, {.addr=0xd2d5, .value=0x84}, {.addr=0xd2d6, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0xd2d7, .a=0x79, .x=0x91, .y=0x23, .sp=0xe2, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x018f, .value=0x72}, {.addr=0xd2d5, .value=0x84}, {.addr=0xd2d6, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0xd2d5, .value=0x84, .type=IO_READ},
        {.addr=0xd2d6, .value=0x8f, .type=IO_READ},
        {.addr=0x018f, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03BB) {
    const struct CPU_State initial_cpu = {.pc=0x1f1e, .a=0xd5, .x=0x32, .y=0x6c, .sp=0xd7, .status=0x78};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012f, .value=0x46}, {.addr=0x1f1e, .value=0x84}, {.addr=0x1f1f, .value=0x2f},
    };
    const struct CPU_State final_cpu = {.pc=0x1f20, .a=0x1b, .x=0x32, .y=0x6c, .sp=0xd7, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x012f, .value=0x46}, {.addr=0x1f1e, .value=0x84}, {.addr=0x1f1f, .value=0x2f},
    };
    const struct BusEvent events[] = {
        {.addr=0x1f1e, .value=0x84, .type=IO_READ},
        {.addr=0x1f1f, .value=0x2f, .type=IO_READ},
        {.addr=0x012f, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03BC) {
    const struct CPU_State initial_cpu = {.pc=0x9621, .a=0xdf, .x=0xeb, .y=0x1f, .sp=0x09, .status=0xf6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ab, .value=0x4e}, {.addr=0x9621, .value=0x84}, {.addr=0x9622, .value=0xab},
    };
    const struct CPU_State final_cpu = {.pc=0x9623, .a=0x2d, .x=0xeb, .y=0x1f, .sp=0x09, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ab, .value=0x4e}, {.addr=0x9621, .value=0x84}, {.addr=0x9622, .value=0xab},
    };
    const struct BusEvent events[] = {
        {.addr=0x9621, .value=0x84, .type=IO_READ},
        {.addr=0x9622, .value=0xab, .type=IO_READ},
        {.addr=0x01ab, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x17fd, .a=0x4d, .x=0x1b, .y=0x15, .sp=0x7e, .status=0x9c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bf, .value=0x5f}, {.addr=0x17fd, .value=0x84}, {.addr=0x17fe, .value=0xbf},
    };
    const struct CPU_State final_cpu = {.pc=0x17ff, .a=0xac, .x=0x1b, .y=0x15, .sp=0x7e, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bf, .value=0x5f}, {.addr=0x17fd, .value=0x84}, {.addr=0x17fe, .value=0xbf},
    };
    const struct BusEvent events[] = {
        {.addr=0x17fd, .value=0x84, .type=IO_READ},
        {.addr=0x17fe, .value=0xbf, .type=IO_READ},
        {.addr=0x00bf, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03BE) {
    const struct CPU_State initial_cpu = {.pc=0xc2b0, .a=0x85, .x=0x47, .y=0x93, .sp=0xd0, .status=0x9e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c0, .value=0xa2}, {.addr=0xc2b0, .value=0x84}, {.addr=0xc2b1, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0xc2b2, .a=0x27, .x=0x47, .y=0x93, .sp=0xd0, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c0, .value=0xa2}, {.addr=0xc2b0, .value=0x84}, {.addr=0xc2b1, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0xc2b0, .value=0x84, .type=IO_READ},
        {.addr=0xc2b1, .value=0xc0, .type=IO_READ},
        {.addr=0x00c0, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03BF) {
    const struct CPU_State initial_cpu = {.pc=0xc098, .a=0x24, .x=0x0f, .y=0x13, .sp=0x0d, .status=0x58};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ea, .value=0x1d}, {.addr=0xc098, .value=0x84}, {.addr=0xc099, .value=0xea},
    };
    const struct CPU_State final_cpu = {.pc=0xc09a, .a=0x41, .x=0x0f, .y=0x13, .sp=0x0d, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ea, .value=0x1d}, {.addr=0xc098, .value=0x84}, {.addr=0xc099, .value=0xea},
    };
    const struct BusEvent events[] = {
        {.addr=0xc098, .value=0x84, .type=IO_READ},
        {.addr=0xc099, .value=0xea, .type=IO_READ},
        {.addr=0x00ea, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03C0) {
    const struct CPU_State initial_cpu = {.pc=0x71ce, .a=0x17, .x=0xae, .y=0xf0, .sp=0xc5, .status=0xf0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0172, .value=0x35}, {.addr=0x71ce, .value=0x84}, {.addr=0x71cf, .value=0x72},
    };
    const struct CPU_State final_cpu = {.pc=0x71d0, .a=0x4c, .x=0xae, .y=0xf0, .sp=0xc5, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x0172, .value=0x35}, {.addr=0x71ce, .value=0x84}, {.addr=0x71cf, .value=0x72},
    };
    const struct BusEvent events[] = {
        {.addr=0x71ce, .value=0x84, .type=IO_READ},
        {.addr=0x71cf, .value=0x72, .type=IO_READ},
        {.addr=0x0172, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03C1) {
    const struct CPU_State initial_cpu = {.pc=0xb6a4, .a=0xb1, .x=0xce, .y=0x18, .sp=0xf5, .status=0x53};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0042, .value=0xde}, {.addr=0xb6a4, .value=0x84}, {.addr=0xb6a5, .value=0x42},
    };
    const struct CPU_State final_cpu = {.pc=0xb6a6, .a=0x90, .x=0xce, .y=0x18, .sp=0xf5, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x0042, .value=0xde}, {.addr=0xb6a4, .value=0x84}, {.addr=0xb6a5, .value=0x42},
    };
    const struct BusEvent events[] = {
        {.addr=0xb6a4, .value=0x84, .type=IO_READ},
        {.addr=0xb6a5, .value=0x42, .type=IO_READ},
        {.addr=0x0042, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03C2) {
    const struct CPU_State initial_cpu = {.pc=0xf8bd, .a=0x0a, .x=0x94, .y=0x2b, .sp=0x5e, .status=0x79};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ec, .value=0x21}, {.addr=0xf8bd, .value=0x84}, {.addr=0xf8be, .value=0xec},
    };
    const struct CPU_State final_cpu = {.pc=0xf8bf, .a=0x2c, .x=0x94, .y=0x2b, .sp=0x5e, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ec, .value=0x21}, {.addr=0xf8bd, .value=0x84}, {.addr=0xf8be, .value=0xec},
    };
    const struct BusEvent events[] = {
        {.addr=0xf8bd, .value=0x84, .type=IO_READ},
        {.addr=0xf8be, .value=0xec, .type=IO_READ},
        {.addr=0x01ec, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03C3) {
    const struct CPU_State initial_cpu = {.pc=0x4bb5, .a=0x1c, .x=0x8d, .y=0x03, .sp=0x30, .status=0xcd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bb, .value=0x82}, {.addr=0x4bb5, .value=0x84}, {.addr=0x4bb6, .value=0xbb},
    };
    const struct CPU_State final_cpu = {.pc=0x4bb7, .a=0x9f, .x=0x8d, .y=0x03, .sp=0x30, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bb, .value=0x82}, {.addr=0x4bb5, .value=0x84}, {.addr=0x4bb6, .value=0xbb},
    };
    const struct BusEvent events[] = {
        {.addr=0x4bb5, .value=0x84, .type=IO_READ},
        {.addr=0x4bb6, .value=0xbb, .type=IO_READ},
        {.addr=0x00bb, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03C5) {
    const struct CPU_State initial_cpu = {.pc=0x05d1, .a=0x46, .x=0xef, .y=0xc5, .sp=0x56, .status=0xd3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000c, .value=0x1a}, {.addr=0x05d1, .value=0x84}, {.addr=0x05d2, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0x05d3, .a=0x61, .x=0xef, .y=0xc5, .sp=0x56, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x000c, .value=0x1a}, {.addr=0x05d1, .value=0x84}, {.addr=0x05d2, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0x05d1, .value=0x84, .type=IO_READ},
        {.addr=0x05d2, .value=0x0c, .type=IO_READ},
        {.addr=0x000c, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x0216, .a=0xd8, .x=0xd2, .y=0x62, .sp=0xd0, .status=0xf1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010b, .value=0x82}, {.addr=0x0216, .value=0x84}, {.addr=0x0217, .value=0x0b},
    };
    const struct CPU_State final_cpu = {.pc=0x0218, .a=0x5b, .x=0xd2, .y=0x62, .sp=0xd0, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x010b, .value=0x82}, {.addr=0x0216, .value=0x84}, {.addr=0x0217, .value=0x0b},
    };
    const struct BusEvent events[] = {
        {.addr=0x0216, .value=0x84, .type=IO_READ},
        {.addr=0x0217, .value=0x0b, .type=IO_READ},
        {.addr=0x010b, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03C7) {
    const struct CPU_State initial_cpu = {.pc=0x9ea4, .a=0xee, .x=0xad, .y=0x95, .sp=0x32, .status=0x83};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002e, .value=0x45}, {.addr=0x9ea4, .value=0x84}, {.addr=0x9ea5, .value=0x2e},
    };
    const struct CPU_State final_cpu = {.pc=0x9ea6, .a=0x34, .x=0xad, .y=0x95, .sp=0x32, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x002e, .value=0x45}, {.addr=0x9ea4, .value=0x84}, {.addr=0x9ea5, .value=0x2e},
    };
    const struct BusEvent events[] = {
        {.addr=0x9ea4, .value=0x84, .type=IO_READ},
        {.addr=0x9ea5, .value=0x2e, .type=IO_READ},
        {.addr=0x002e, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03C8) {
    const struct CPU_State initial_cpu = {.pc=0x21de, .a=0xf2, .x=0xac, .y=0x9c, .sp=0x79, .status=0x93};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008b, .value=0x8c}, {.addr=0x21de, .value=0x84}, {.addr=0x21df, .value=0x8b},
    };
    const struct CPU_State final_cpu = {.pc=0x21e0, .a=0x7f, .x=0xac, .y=0x9c, .sp=0x79, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x008b, .value=0x8c}, {.addr=0x21de, .value=0x84}, {.addr=0x21df, .value=0x8b},
    };
    const struct BusEvent events[] = {
        {.addr=0x21de, .value=0x84, .type=IO_READ},
        {.addr=0x21df, .value=0x8b, .type=IO_READ},
        {.addr=0x008b, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03C9) {
    const struct CPU_State initial_cpu = {.pc=0x9701, .a=0xde, .x=0xd8, .y=0xf4, .sp=0x55, .status=0xd4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0015, .value=0x49}, {.addr=0x9701, .value=0x84}, {.addr=0x9702, .value=0x15},
    };
    const struct CPU_State final_cpu = {.pc=0x9703, .a=0x27, .x=0xd8, .y=0xf4, .sp=0x55, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0015, .value=0x49}, {.addr=0x9701, .value=0x84}, {.addr=0x9702, .value=0x15},
    };
    const struct BusEvent events[] = {
        {.addr=0x9701, .value=0x84, .type=IO_READ},
        {.addr=0x9702, .value=0x15, .type=IO_READ},
        {.addr=0x0015, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03CA) {
    const struct CPU_State initial_cpu = {.pc=0xd64a, .a=0x26, .x=0x9a, .y=0x04, .sp=0xec, .status=0xeb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ab, .value=0x40}, {.addr=0xd64a, .value=0x84}, {.addr=0xd64b, .value=0xab},
    };
    const struct CPU_State final_cpu = {.pc=0xd64c, .a=0x67, .x=0x9a, .y=0x04, .sp=0xec, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ab, .value=0x40}, {.addr=0xd64a, .value=0x84}, {.addr=0xd64b, .value=0xab},
    };
    const struct BusEvent events[] = {
        {.addr=0xd64a, .value=0x84, .type=IO_READ},
        {.addr=0xd64b, .value=0xab, .type=IO_READ},
        {.addr=0x01ab, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03CB) {
    const struct CPU_State initial_cpu = {.pc=0x6c87, .a=0x54, .x=0x20, .y=0x81, .sp=0x6f, .status=0x4d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000c, .value=0x83}, {.addr=0x6c87, .value=0x84}, {.addr=0x6c88, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0x6c89, .a=0xd8, .x=0x20, .y=0x81, .sp=0x6f, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x000c, .value=0x83}, {.addr=0x6c87, .value=0x84}, {.addr=0x6c88, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0x6c87, .value=0x84, .type=IO_READ},
        {.addr=0x6c88, .value=0x0c, .type=IO_READ},
        {.addr=0x000c, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03CC) {
    const struct CPU_State initial_cpu = {.pc=0xc975, .a=0xe1, .x=0x92, .y=0x33, .sp=0xc3, .status=0x72};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e5, .value=0xfb}, {.addr=0xc975, .value=0x84}, {.addr=0xc976, .value=0xe5},
    };
    const struct CPU_State final_cpu = {.pc=0xc977, .a=0xdc, .x=0x92, .y=0x33, .sp=0xc3, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e5, .value=0xfb}, {.addr=0xc975, .value=0x84}, {.addr=0xc976, .value=0xe5},
    };
    const struct BusEvent events[] = {
        {.addr=0xc975, .value=0x84, .type=IO_READ},
        {.addr=0xc976, .value=0xe5, .type=IO_READ},
        {.addr=0x01e5, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03CD) {
    const struct CPU_State initial_cpu = {.pc=0xba7d, .a=0x14, .x=0x6a, .y=0x05, .sp=0xa1, .status=0x72};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0161, .value=0x0e}, {.addr=0xba7d, .value=0x84}, {.addr=0xba7e, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0xba7f, .a=0x22, .x=0x6a, .y=0x05, .sp=0xa1, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x0161, .value=0x0e}, {.addr=0xba7d, .value=0x84}, {.addr=0xba7e, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0xba7d, .value=0x84, .type=IO_READ},
        {.addr=0xba7e, .value=0x61, .type=IO_READ},
        {.addr=0x0161, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x3dbd, .a=0x90, .x=0xa9, .y=0xe8, .sp=0xea, .status=0x9e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00be, .value=0xf8}, {.addr=0x3dbd, .value=0x84}, {.addr=0x3dbe, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0x3dbf, .a=0x88, .x=0xa9, .y=0xe8, .sp=0xea, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x00be, .value=0xf8}, {.addr=0x3dbd, .value=0x84}, {.addr=0x3dbe, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0x3dbd, .value=0x84, .type=IO_READ},
        {.addr=0x3dbe, .value=0xbe, .type=IO_READ},
        {.addr=0x00be, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x4322, .a=0xdb, .x=0x13, .y=0x8f, .sp=0xb8, .status=0xc4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0045, .value=0x74}, {.addr=0x4322, .value=0x84}, {.addr=0x4323, .value=0x45},
    };
    const struct CPU_State final_cpu = {.pc=0x4324, .a=0x4f, .x=0x13, .y=0x8f, .sp=0xb8, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x0045, .value=0x74}, {.addr=0x4322, .value=0x84}, {.addr=0x4323, .value=0x45},
    };
    const struct BusEvent events[] = {
        {.addr=0x4322, .value=0x84, .type=IO_READ},
        {.addr=0x4323, .value=0x45, .type=IO_READ},
        {.addr=0x0045, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x0aca, .a=0x00, .x=0xc4, .y=0xdb, .sp=0xed, .status=0x9e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0088, .value=0xdd}, {.addr=0x0aca, .value=0x84}, {.addr=0x0acb, .value=0x88},
    };
    const struct CPU_State final_cpu = {.pc=0x0acc, .a=0xdd, .x=0xc4, .y=0xdb, .sp=0xed, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0088, .value=0xdd}, {.addr=0x0aca, .value=0x84}, {.addr=0x0acb, .value=0x88},
    };
    const struct BusEvent events[] = {
        {.addr=0x0aca, .value=0x84, .type=IO_READ},
        {.addr=0x0acb, .value=0x88, .type=IO_READ},
        {.addr=0x0088, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03D1) {
    const struct CPU_State initial_cpu = {.pc=0x53e2, .a=0x56, .x=0x89, .y=0x67, .sp=0x55, .status=0xd2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003c, .value=0xed}, {.addr=0x53e2, .value=0x84}, {.addr=0x53e3, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0x53e4, .a=0x43, .x=0x89, .y=0x67, .sp=0x55, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x003c, .value=0xed}, {.addr=0x53e2, .value=0x84}, {.addr=0x53e3, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0x53e2, .value=0x84, .type=IO_READ},
        {.addr=0x53e3, .value=0x3c, .type=IO_READ},
        {.addr=0x003c, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03D2) {
    const struct CPU_State initial_cpu = {.pc=0xec65, .a=0x23, .x=0x41, .y=0xcf, .sp=0xc5, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ef, .value=0x20}, {.addr=0xec65, .value=0x84}, {.addr=0xec66, .value=0xef},
    };
    const struct CPU_State final_cpu = {.pc=0xec67, .a=0x44, .x=0x41, .y=0xcf, .sp=0xc5, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ef, .value=0x20}, {.addr=0xec65, .value=0x84}, {.addr=0xec66, .value=0xef},
    };
    const struct BusEvent events[] = {
        {.addr=0xec65, .value=0x84, .type=IO_READ},
        {.addr=0xec66, .value=0xef, .type=IO_READ},
        {.addr=0x01ef, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03D3) {
    const struct CPU_State initial_cpu = {.pc=0x6b64, .a=0x96, .x=0xc4, .y=0x91, .sp=0xca, .status=0xe5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0130, .value=0x5d}, {.addr=0x6b64, .value=0x84}, {.addr=0x6b65, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0x6b66, .a=0xf4, .x=0xc4, .y=0x91, .sp=0xca, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0130, .value=0x5d}, {.addr=0x6b64, .value=0x84}, {.addr=0x6b65, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0x6b64, .value=0x84, .type=IO_READ},
        {.addr=0x6b65, .value=0x30, .type=IO_READ},
        {.addr=0x0130, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03D4) {
    const struct CPU_State initial_cpu = {.pc=0xf39e, .a=0xff, .x=0x53, .y=0xd1, .sp=0x88, .status=0x46};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b1, .value=0x1d}, {.addr=0xf39e, .value=0x84}, {.addr=0xf39f, .value=0xb1},
    };
    const struct CPU_State final_cpu = {.pc=0xf3a0, .a=0x1c, .x=0x53, .y=0xd1, .sp=0x88, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b1, .value=0x1d}, {.addr=0xf39e, .value=0x84}, {.addr=0xf39f, .value=0xb1},
    };
    const struct BusEvent events[] = {
        {.addr=0xf39e, .value=0x84, .type=IO_READ},
        {.addr=0xf39f, .value=0xb1, .type=IO_READ},
        {.addr=0x00b1, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03D5) {
    const struct CPU_State initial_cpu = {.pc=0x24bf, .a=0x51, .x=0x8c, .y=0x26, .sp=0x83, .status=0x39};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0180, .value=0xec}, {.addr=0x24bf, .value=0x84}, {.addr=0x24c0, .value=0x80},
    };
    const struct CPU_State final_cpu = {.pc=0x24c1, .a=0x3e, .x=0x8c, .y=0x26, .sp=0x83, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0180, .value=0xec}, {.addr=0x24bf, .value=0x84}, {.addr=0x24c0, .value=0x80},
    };
    const struct BusEvent events[] = {
        {.addr=0x24bf, .value=0x84, .type=IO_READ},
        {.addr=0x24c0, .value=0x80, .type=IO_READ},
        {.addr=0x0180, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03D6) {
    const struct CPU_State initial_cpu = {.pc=0x02d5, .a=0x3f, .x=0xb5, .y=0x6b, .sp=0x69, .status=0x8c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ec, .value=0xe8}, {.addr=0x02d5, .value=0x84}, {.addr=0x02d6, .value=0xec},
    };
    const struct CPU_State final_cpu = {.pc=0x02d7, .a=0x27, .x=0xb5, .y=0x6b, .sp=0x69, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ec, .value=0xe8}, {.addr=0x02d5, .value=0x84}, {.addr=0x02d6, .value=0xec},
    };
    const struct BusEvent events[] = {
        {.addr=0x02d5, .value=0x84, .type=IO_READ},
        {.addr=0x02d6, .value=0xec, .type=IO_READ},
        {.addr=0x00ec, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03D7) {
    const struct CPU_State initial_cpu = {.pc=0x8ad5, .a=0x4b, .x=0xde, .y=0xc7, .sp=0x31, .status=0x67};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0165, .value=0x8a}, {.addr=0x8ad5, .value=0x84}, {.addr=0x8ad6, .value=0x65},
    };
    const struct CPU_State final_cpu = {.pc=0x8ad7, .a=0xd6, .x=0xde, .y=0xc7, .sp=0x31, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0165, .value=0x8a}, {.addr=0x8ad5, .value=0x84}, {.addr=0x8ad6, .value=0x65},
    };
    const struct BusEvent events[] = {
        {.addr=0x8ad5, .value=0x84, .type=IO_READ},
        {.addr=0x8ad6, .value=0x65, .type=IO_READ},
        {.addr=0x0165, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03D8) {
    const struct CPU_State initial_cpu = {.pc=0xd977, .a=0x61, .x=0xcb, .y=0xda, .sp=0x2c, .status=0xd7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0043, .value=0x25}, {.addr=0xd977, .value=0x84}, {.addr=0xd978, .value=0x43},
    };
    const struct CPU_State final_cpu = {.pc=0xd979, .a=0x87, .x=0xcb, .y=0xda, .sp=0x2c, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0043, .value=0x25}, {.addr=0xd977, .value=0x84}, {.addr=0xd978, .value=0x43},
    };
    const struct BusEvent events[] = {
        {.addr=0xd977, .value=0x84, .type=IO_READ},
        {.addr=0xd978, .value=0x43, .type=IO_READ},
        {.addr=0x0043, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03D9) {
    const struct CPU_State initial_cpu = {.pc=0x3b8c, .a=0x4e, .x=0x7f, .y=0xfd, .sp=0x35, .status=0x36};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bc, .value=0x32}, {.addr=0x3b8c, .value=0x84}, {.addr=0x3b8d, .value=0xbc},
    };
    const struct CPU_State final_cpu = {.pc=0x3b8e, .a=0x80, .x=0x7f, .y=0xfd, .sp=0x35, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bc, .value=0x32}, {.addr=0x3b8c, .value=0x84}, {.addr=0x3b8d, .value=0xbc},
    };
    const struct BusEvent events[] = {
        {.addr=0x3b8c, .value=0x84, .type=IO_READ},
        {.addr=0x3b8d, .value=0xbc, .type=IO_READ},
        {.addr=0x01bc, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03DA) {
    const struct CPU_State initial_cpu = {.pc=0x36e2, .a=0xc1, .x=0x92, .y=0x20, .sp=0xca, .status=0x88};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d2, .value=0xa3}, {.addr=0x36e2, .value=0x84}, {.addr=0x36e3, .value=0xd2},
    };
    const struct CPU_State final_cpu = {.pc=0x36e4, .a=0x64, .x=0x92, .y=0x20, .sp=0xca, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d2, .value=0xa3}, {.addr=0x36e2, .value=0x84}, {.addr=0x36e3, .value=0xd2},
    };
    const struct BusEvent events[] = {
        {.addr=0x36e2, .value=0x84, .type=IO_READ},
        {.addr=0x36e3, .value=0xd2, .type=IO_READ},
        {.addr=0x00d2, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03DB) {
    const struct CPU_State initial_cpu = {.pc=0x8e09, .a=0x1e, .x=0xa9, .y=0x51, .sp=0x4b, .status=0x66};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0113, .value=0x64}, {.addr=0x8e09, .value=0x84}, {.addr=0x8e0a, .value=0x13},
    };
    const struct CPU_State final_cpu = {.pc=0x8e0b, .a=0x82, .x=0xa9, .y=0x51, .sp=0x4b, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x0113, .value=0x64}, {.addr=0x8e09, .value=0x84}, {.addr=0x8e0a, .value=0x13},
    };
    const struct BusEvent events[] = {
        {.addr=0x8e09, .value=0x84, .type=IO_READ},
        {.addr=0x8e0a, .value=0x13, .type=IO_READ},
        {.addr=0x0113, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03DC) {
    const struct CPU_State initial_cpu = {.pc=0xb5ae, .a=0x0d, .x=0x5a, .y=0x5c, .sp=0x00, .status=0xd0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0019, .value=0x3a}, {.addr=0xb5ae, .value=0x84}, {.addr=0xb5af, .value=0x19},
    };
    const struct CPU_State final_cpu = {.pc=0xb5b0, .a=0x47, .x=0x5a, .y=0x5c, .sp=0x00, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x0019, .value=0x3a}, {.addr=0xb5ae, .value=0x84}, {.addr=0xb5af, .value=0x19},
    };
    const struct BusEvent events[] = {
        {.addr=0xb5ae, .value=0x84, .type=IO_READ},
        {.addr=0xb5af, .value=0x19, .type=IO_READ},
        {.addr=0x0019, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03DD) {
    const struct CPU_State initial_cpu = {.pc=0x8aa5, .a=0x36, .x=0x93, .y=0xf4, .sp=0x6f, .status=0x8d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ee, .value=0xf2}, {.addr=0x8aa5, .value=0x84}, {.addr=0x8aa6, .value=0xee},
    };
    const struct CPU_State final_cpu = {.pc=0x8aa7, .a=0x29, .x=0x93, .y=0xf4, .sp=0x6f, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ee, .value=0xf2}, {.addr=0x8aa5, .value=0x84}, {.addr=0x8aa6, .value=0xee},
    };
    const struct BusEvent events[] = {
        {.addr=0x8aa5, .value=0x84, .type=IO_READ},
        {.addr=0x8aa6, .value=0xee, .type=IO_READ},
        {.addr=0x00ee, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03DE) {
    const struct CPU_State initial_cpu = {.pc=0x9e26, .a=0xf8, .x=0x53, .y=0x72, .sp=0xde, .status=0x66};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0198, .value=0x30}, {.addr=0x9e26, .value=0x84}, {.addr=0x9e27, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0x9e28, .a=0x28, .x=0x53, .y=0x72, .sp=0xde, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x0198, .value=0x30}, {.addr=0x9e26, .value=0x84}, {.addr=0x9e27, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0x9e26, .value=0x84, .type=IO_READ},
        {.addr=0x9e27, .value=0x98, .type=IO_READ},
        {.addr=0x0198, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x8303, .a=0x26, .x=0x99, .y=0xf1, .sp=0x78, .status=0x2e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013b, .value=0xa5}, {.addr=0x8303, .value=0x84}, {.addr=0x8304, .value=0x3b},
    };
    const struct CPU_State final_cpu = {.pc=0x8305, .a=0xcb, .x=0x99, .y=0xf1, .sp=0x78, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x013b, .value=0xa5}, {.addr=0x8303, .value=0x84}, {.addr=0x8304, .value=0x3b},
    };
    const struct BusEvent events[] = {
        {.addr=0x8303, .value=0x84, .type=IO_READ},
        {.addr=0x8304, .value=0x3b, .type=IO_READ},
        {.addr=0x013b, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03E0) {
    const struct CPU_State initial_cpu = {.pc=0x845a, .a=0xe0, .x=0xd7, .y=0xf8, .sp=0xc9, .status=0x4f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cf, .value=0x07}, {.addr=0x845a, .value=0x84}, {.addr=0x845b, .value=0xcf},
    };
    const struct CPU_State final_cpu = {.pc=0x845c, .a=0xe8, .x=0xd7, .y=0xf8, .sp=0xc9, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cf, .value=0x07}, {.addr=0x845a, .value=0x84}, {.addr=0x845b, .value=0xcf},
    };
    const struct BusEvent events[] = {
        {.addr=0x845a, .value=0x84, .type=IO_READ},
        {.addr=0x845b, .value=0xcf, .type=IO_READ},
        {.addr=0x00cf, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03E1) {
    const struct CPU_State initial_cpu = {.pc=0xc6cf, .a=0x83, .x=0xbd, .y=0xce, .sp=0x4d, .status=0xec};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0119, .value=0xe8}, {.addr=0xc6cf, .value=0x84}, {.addr=0xc6d0, .value=0x19},
    };
    const struct CPU_State final_cpu = {.pc=0xc6d1, .a=0x6b, .x=0xbd, .y=0xce, .sp=0x4d, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x0119, .value=0xe8}, {.addr=0xc6cf, .value=0x84}, {.addr=0xc6d0, .value=0x19},
    };
    const struct BusEvent events[] = {
        {.addr=0xc6cf, .value=0x84, .type=IO_READ},
        {.addr=0xc6d0, .value=0x19, .type=IO_READ},
        {.addr=0x0119, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03E2) {
    const struct CPU_State initial_cpu = {.pc=0x6fdc, .a=0xa8, .x=0xd3, .y=0xb1, .sp=0x9e, .status=0xf4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0104, .value=0x1d}, {.addr=0x6fdc, .value=0x84}, {.addr=0x6fdd, .value=0x04},
    };
    const struct CPU_State final_cpu = {.pc=0x6fde, .a=0xc5, .x=0xd3, .y=0xb1, .sp=0x9e, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0104, .value=0x1d}, {.addr=0x6fdc, .value=0x84}, {.addr=0x6fdd, .value=0x04},
    };
    const struct BusEvent events[] = {
        {.addr=0x6fdc, .value=0x84, .type=IO_READ},
        {.addr=0x6fdd, .value=0x04, .type=IO_READ},
        {.addr=0x0104, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03E3) {
    const struct CPU_State initial_cpu = {.pc=0x8c5a, .a=0x62, .x=0xb0, .y=0xfc, .sp=0xfc, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a2, .value=0x05}, {.addr=0x8c5a, .value=0x84}, {.addr=0x8c5b, .value=0xa2},
    };
    const struct CPU_State final_cpu = {.pc=0x8c5c, .a=0x68, .x=0xb0, .y=0xfc, .sp=0xfc, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a2, .value=0x05}, {.addr=0x8c5a, .value=0x84}, {.addr=0x8c5b, .value=0xa2},
    };
    const struct BusEvent events[] = {
        {.addr=0x8c5a, .value=0x84, .type=IO_READ},
        {.addr=0x8c5b, .value=0xa2, .type=IO_READ},
        {.addr=0x01a2, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x321b, .a=0x51, .x=0x3f, .y=0xac, .sp=0xdf, .status=0x0e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0029, .value=0xc1}, {.addr=0x321b, .value=0x84}, {.addr=0x321c, .value=0x29},
    };
    const struct CPU_State final_cpu = {.pc=0x321d, .a=0x12, .x=0x3f, .y=0xac, .sp=0xdf, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x0029, .value=0xc1}, {.addr=0x321b, .value=0x84}, {.addr=0x321c, .value=0x29},
    };
    const struct BusEvent events[] = {
        {.addr=0x321b, .value=0x84, .type=IO_READ},
        {.addr=0x321c, .value=0x29, .type=IO_READ},
        {.addr=0x0029, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03E5) {
    const struct CPU_State initial_cpu = {.pc=0x6131, .a=0x41, .x=0x10, .y=0x3d, .sp=0xc6, .status=0xcd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b7, .value=0x03}, {.addr=0x6131, .value=0x84}, {.addr=0x6132, .value=0xb7},
    };
    const struct CPU_State final_cpu = {.pc=0x6133, .a=0x45, .x=0x10, .y=0x3d, .sp=0xc6, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b7, .value=0x03}, {.addr=0x6131, .value=0x84}, {.addr=0x6132, .value=0xb7},
    };
    const struct BusEvent events[] = {
        {.addr=0x6131, .value=0x84, .type=IO_READ},
        {.addr=0x6132, .value=0xb7, .type=IO_READ},
        {.addr=0x00b7, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03E6) {
    const struct CPU_State initial_cpu = {.pc=0xdeae, .a=0x3d, .x=0x32, .y=0xe2, .sp=0xb9, .status=0x74};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ae, .value=0x34}, {.addr=0xdeae, .value=0x84}, {.addr=0xdeaf, .value=0xae},
    };
    const struct CPU_State final_cpu = {.pc=0xdeb0, .a=0x71, .x=0x32, .y=0xe2, .sp=0xb9, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ae, .value=0x34}, {.addr=0xdeae, .value=0x84}, {.addr=0xdeaf, .value=0xae},
    };
    const struct BusEvent events[] = {
        {.addr=0xdeae, .value=0x84, .type=IO_READ},
        {.addr=0xdeaf, .value=0xae, .type=IO_READ},
        {.addr=0x01ae, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_84, _84_03E7) {
    const struct CPU_State initial_cpu = {.pc=0x311b, .a=0xf2, .x=0x74, .y=0xe5, .sp=0xf7, .status=0xd6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ac, .value=0x91}, {.addr=0x311b, .value=0x84}, {.addr=0x311c, .value=0xac},
    };
    const struct CPU_State final_cpu = {.pc=0x311d, .a=0x83, .x=0x74, .y=0xe5, .sp=0xf7, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ac, .value=0x91}, {.addr=0x311b, .value=0x84}, {.addr=0x311c, .value=0xac},
    };
    const struct BusEvent events[] = {
        {.addr=0x311b, .value=0x84, .type=IO_READ},
        {.addr=0x311c, .value=0xac, .type=IO_READ},
        {.addr=0x00ac, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("84 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
